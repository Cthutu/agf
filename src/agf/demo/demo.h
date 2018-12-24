//----------------------------------------------------------------------------------------------------------------------
// Demo Game for testing AGF
//----------------------------------------------------------------------------------------------------------------------

#include <agf/game/game.h>

class CommandLine;

static const int kMazeWidth = 28;
static const int kMazeHeight = 31;
static const int kMazeSize = kMazeWidth * kMazeHeight;

class DemoGame : public agf::Game
{
public:
    DemoGame(const agf::CommandLine& commandLine);
    ~DemoGame() override;

    bool simulate(const agf::SimulateIn& sim) override;
    void present(const agf::PresentIn& pin) override;

private:
    void newGame();
    char getTile(int x, int y);
    void setTile(int x, int y, char c);

    void printChar(const agf::PresentIn& pin, int x, int y, char c, agf::u32 fore, agf::u32 back);
    void print(const agf::PresentIn& pin, int x, int y, const char* msg);

    struct GhostInfo
    {
        int x, y;
        int dx, dy;
        enum class State
        {
            InGhostHouse,
            Normal,
        } state;
        agf::u32 colour;
    };

    void drawGhost(int offsetX, int offsetY, const agf::PresentIn& pin, const GhostInfo& ghost);

    bool m_cusorOn;
    int m_cx, m_cy;

    int m_x, m_y;           // Position of pacman
    char m_maze[kMazeSize]; // Current maze
    int m_pillsLeft;        // Number of pills left
    int m_dx, m_dy;         // Current direction
    agf::f64 m_time;        // Time when pacman can move

    GhostInfo blinky;
    GhostInfo pinky;
    GhostInfo inky;
    GhostInfo clyde;
};

