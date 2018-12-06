//----------------------------------------------------------------------------------------------------------------------
// Demo game to demonstrate AGF's features.
// Designed to switch screens using function keys F1-F12.
//----------------------------------------------------------------------------------------------------------------------

#include <agf/demo/demo.h>

//----------------------------------------------------------------------------------------------------------------------
// Pacman maze
//----------------------------------------------------------------------------------------------------------------------

static const int gMazeWidth = 28;
static const int gMazeHeight = 31;

static const char gMaze[gMazeHeight * gMazeHeight + 1] =
"1------------21------------2"
"|............||............|"
"|.1--2.1---2.||.1---2.1--2.|"
"|O|  |.|   |.||.|   |.|  |O|"
"|.3--4.3---4.34.3---4.3--4.|"
"|..........................|"
"|.1--2.12.1------2.12.1--2.|"
"|.3--4.||.3--21--4.||.3--4.|"
"|......||....||....||......|"
"3----2.|3--2 || 1--4|.1----4"
"     |.|1--4 34 3--2|.|     "
"     |.||          ||.|     "
"     |.|| 1--~~--2 ||.|     "
"-----4.34 |      | 34.3-----"
"      .   |      |   .      "
"-----2.12 |      | 12.1-----"
"     |.|| 3------4 ||.|     "
"     |.||          ||.|     "
"     |.|| 1------2 ||.|     "
"1----4.34 3--21--4 34.3-----"
"|............||............|"
"|.1--2.1---2.||.1---2.1--2.|"
"|.3-2|.3---4.34.3---4.|1-4.|"
"|O..||.......  .......||..O|"
"3-2.||.12.1------2.12.||.1-4"
"1-4.34.||.3--21--4.||.34.3-2"
"|......||....||....||......|"
"|.1----43--2.||.1--43----2.|"
"|.3--------4.34.3--------4.|"
"|..........................|"
"3--------------------------4"
;

//----------------------------------------------------------------------------------------------------------------------
// Constructor

DemoGame::DemoGame(const agf::CommandLine& commandLine)
    : Game(commandLine)
    , m_cusorOn(false)
{

}

//----------------------------------------------------------------------------------------------------------------------
// Destructor

DemoGame::~DemoGame()
{

}

//----------------------------------------------------------------------------------------------------------------------
// Simulation

bool DemoGame::simulate(const agf::SimulateIn& sim)
{
    if (sim.mouse.onScreen)
    {
        m_cusorOn = true;
        m_cx = sim.mouse.x;
        m_cy = sim.mouse.y;
    }
    else
    {
        m_cusorOn = false;
    }

    if (sim.key.down && sim.key.vkey == agf::Key::Escape)
    {
        return false;
    }
    return true;
}

//----------------------------------------------------------------------------------------------------------------------
// Presentation

void DemoGame::present(const agf::PresentIn& pin)
{
    int xx = (pin.width - gMazeWidth) / 2;
    int yy = (pin.height - gMazeHeight) / 2;;

    if (xx < 0) xx = 0;
    if (yy < 0) yy = 0;

    for (int i = 0; i < pin.width * pin.height; ++i)
    {
        pin.foreImage[i] = 0xffffffff;
        pin.backImage[i] = 0xff000000;
        pin.textImage[i] = 0;
    }

    // Draw the pacman board
    for (int y = 0; y < gMazeHeight; ++y)
    {
        for (int x = 0; x < gMazeWidth; ++x)
        {
            agf::u32 colour = 0xff0000ff;
            char c = getTile(x, y);

            switch (c)
            {
            case '.':   c = 7;              colour = 0xffffffff;    break;
            case ' ':                       colour = 0xffffffff;    break;
            case 'O':   c = 9;              colour = 0xff00ffff;    break;
            case '1':   c = (char)0xda;     colour = 0xffff0000;    break;
            case '2':   c = (char)0xbf;     colour = 0xffff0000;    break;
            case '3':   c = (char)0xc0;     colour = 0xffff0000;    break;
            case '4':   c = (char)0xd9;     colour = 0xffff0000;    break;
            case '|':   c = (char)0xb3;     colour = 0xffff0000;    break;
            case '-':   c = (char)0xc4;     colour = 0xffff0000;    break;
            case '~':   c = (char)0xc4;     colour = 0xffffffff;    break;

            default:
                c = '?';
                break;
            }

            if (x + 2 < pin.width && y + 2 < pin.height)
            {
                pin.foreImage[(y + yy) * pin.width + (x + xx)] = colour;
                pin.backImage[(y + yy) * pin.width + (x + xx)] = 0;
                pin.textImage[(y + yy) * pin.width + (x + xx)] = (agf::u32)c;
            }
        }
    }

    // Render cursor
    if (m_cusorOn)
    {
        std::swap(pin.foreImage[m_cy * pin.width + m_cx],
                  pin.backImage[m_cy * pin.width + m_cx]);
    }
}

//----------------------------------------------------------------------------------------------------------------------

char DemoGame::getTile(int x, int y)
{
    assert(x >= 0 && x < gMazeWidth);
    assert(y >= 0 && y < gMazeHeight);
    return gMaze[y * gMazeWidth + x];
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
