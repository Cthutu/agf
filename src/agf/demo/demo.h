//----------------------------------------------------------------------------------------------------------------------
// Demo Game for testing AGF
//----------------------------------------------------------------------------------------------------------------------

#include <agf/game/game.h>

class CommandLine;

class DemoGame : public agf::Game
{
public:
    DemoGame(const agf::CommandLine& commandLine);
    ~DemoGame() override;

    bool simulate(const agf::SimulateIn& sim) override;
    void present(const agf::PresentIn& pin) override;

private:
    char getTile(int x, int y);

    bool m_cusorOn;
    int m_cx, m_cy;
};

