//----------------------------------------------------------------------------------------------------------------------
// Demo game to demonstrate AGF's features.
// Designed to switch screens using function keys F1-F12.
//----------------------------------------------------------------------------------------------------------------------

#include <agf/demo/demo.h>

//----------------------------------------------------------------------------------------------------------------------
// Constructor

DemoGame::DemoGame(const agf::CommandLine& commandLine)
    : Game(commandLine)
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
    return false;
}

//----------------------------------------------------------------------------------------------------------------------
// Presentation

void DemoGame::present(const agf::PresentIn& pin)
{

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
