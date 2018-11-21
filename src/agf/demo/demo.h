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
};
