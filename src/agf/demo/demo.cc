//----------------------------------------------------------------------------------------------------------------------
// Demo game to demonstrate AGF's features.
// Designed to switch screens using function keys F1-F12.
//----------------------------------------------------------------------------------------------------------------------

#include <agf/demo/demo.h>

//----------------------------------------------------------------------------------------------------------------------
// Pacman maze
//----------------------------------------------------------------------------------------------------------------------

static const agf::f64 kPacmanSpeed = 0.2;

static const char gMaze[kMazeSize + 1] =
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
    newGame();
}

//----------------------------------------------------------------------------------------------------------------------
// Destructor

DemoGame::~DemoGame()
{

}

//----------------------------------------------------------------------------------------------------------------------
// New Game

void DemoGame::newGame()
{
    memcpy(m_maze, gMaze, kMazeWidth * kMazeHeight);
    m_x = 14;
    m_y = 17;
    m_dx = 0;
    m_dy = 0;
    m_time = 0.0;
    m_pillsLeft = 0;

    for (int i = 0; i < kMazeSize; ++i)
    {
        if (m_maze[i] == '.') ++m_pillsLeft;
    }
}

//----------------------------------------------------------------------------------------------------------------------
// Print

void DemoGame::print(const agf::PresentIn& pin, int x, int y, const char* msg)
{
    int i = x + pin.width * y;
    for (; *msg != 0; ++msg) pin.textImage[i++] = (agf::u32)*msg;
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

    //
    // Handle pacman's controls
    //
    int dx = 0, dy = 0;
    if (sim.key.down)
    {
        switch (sim.key.vkey)
        {
        case agf::Key::Left:     dx = -1;  dy =  0;  break;
        case agf::Key::Right:    dx =  1;  dy =  0;  break;
        case agf::Key::Up:       dx =  0;  dy = -1;  break;
        case agf::Key::Down:     dx =  0;  dy =  1;  break;
        default:
            dx = m_dx;
            dy = m_dy;
        }
    }
    else
    {
        dx = m_dx;
        dy = m_dy;
    }

    //
    // Update pacman's position
    //

    m_time += sim.dt;

    // Check the intended direction
    int nx = m_x + dx;
    int ny = m_y + dy;
    if (nx < 0) nx = kMazeWidth - 1;
    if (nx == kMazeWidth) nx = 0;
    char c = getTile(nx, ny);
    if ((dx || dy) && (c == ' ' || c == '.' || c == 'O'))
    {
        // We're trying to move down a different corridor.
        m_dx = dx;
        m_dy = dy;
    }

    // Check the actual direction we will move
    nx = m_x + m_dx;
    ny = m_y + m_dy;
    if (nx < 0) nx = kMazeWidth - 1;
    if (nx == kMazeWidth) nx = 0;
    c = getTile(nx, ny);
    if (c != ' ' && c != '.' && c != 'O')
    {
        // We've hit a wall.  Stop!
        m_dx = 0;
        m_dy = 0;
    }

    if (m_time > kPacmanSpeed)
    {
        m_x += m_dx;
        m_y += m_dy;

        // Deal with wrap around
        if (m_x < 0) m_x = kMazeWidth - 1;
        if (m_x == kMazeWidth) m_x = 0;

        while (m_time > kPacmanSpeed) m_time -= kPacmanSpeed;

        //
        // Check what pacman is landing on
        //
        switch (c)
        {
        case '.':
            setTile(nx, ny, ' ');
            --m_pillsLeft;
            if (m_pillsLeft == 0) 
            {
                newGame();
                m_dx = 0;
                m_dy = 0;
            }
            break;

        default:
            break;
        }

    }

    //
    // Check to see if pacman has hit a ghost
    //

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
    int xx = (pin.width - kMazeWidth) / 2;
    int yy = (pin.height - kMazeHeight) / 2;;

    if (xx < 0) xx = 0;
    if (yy < 0) yy = 0;

    for (int i = 0; i < pin.width * pin.height; ++i)
    {
        pin.foreImage[i] = 0xffffffff;
        pin.backImage[i] = 0xff000000;
        pin.textImage[i] = 0;
    }

    // Draw the pacman board
    for (int y = 0; y < kMazeHeight; ++y)
    {
        for (int x = 0; x < kMazeWidth; ++x)
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

            printChar(pin, x + xx, y + yy, c, colour, 0);
        }
    }

    // Draw pacman
    printChar(pin, xx + m_x, yy + m_y, '@', 0xff00ffff, 0);
}

//----------------------------------------------------------------------------------------------------------------------

char DemoGame::getTile(int x, int y)
{
    assert(x >= 0 && x < kMazeWidth);
    assert(y >= 0 && y < kMazeHeight);
    return m_maze[y * kMazeWidth + x];
}

//----------------------------------------------------------------------------------------------------------------------

void DemoGame::setTile(int x, int y, char c)
{
    assert(x >= 0 && x < kMazeWidth);
    assert(y >= 0 && y < kMazeHeight);
    m_maze[y * kMazeWidth + x] = c;
}

//----------------------------------------------------------------------------------------------------------------------

void DemoGame::printChar(const agf::PresentIn& pin, int x, int y, char c, agf::u32 fore, agf::u32 back)
{
    if (x >= 0 && y >= 0 && x < pin.width && y < pin.height)
    {
        int i = y * pin.width + x;
        pin.foreImage[i] = fore;
        pin.backImage[i] = back;
        pin.textImage[i] = (agf::u32)c;
    }

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
