//----------------------------------------------------------------------------------------------------------------------
// Entry point for AGF game.
//
// In the main you should create two things:
//
//      1) The Game object instance (a C++ class derived from agf::Game).
//      2) The Platform object instance (a C++ class dervied from agf::Platform), which binds the OS to the game object.
//
// Finally, you should call run() on your platform object.
//----------------------------------------------------------------------------------------------------------------------

#include <agf/platform/win32.h>
#include <agf/game/game.h>
#include <agf/cmdline.h>

// For the purposes of this framework, this is a demo "game".  When using this as a basis for your own game, delete
// the folder src/agf/demo, and create your own Game-derived class.  Also change the reference to it in the main
// function.
#include <agf/demo/demo.h>

#include <crtdbg.h>

//----------------------------------------------------------------------------------------------------------------------
// agfMain
//
// The purpose of this function is to construct the Game and Platform objects and link them together, then bootstrap
// the game.
//----------------------------------------------------------------------------------------------------------------------

int agfMain(int argc, char** argv)
{
    // This is a simple utility that processes and categorises each token in the command line.
    agf::CommandLine cmdLine(argc, argv);

    DemoGame game(cmdLine);
    agf::Win32Platform platform(game, cmdLine);

    return platform.run();
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    _CrtSetBreakAlloc(0);
    int result = agfMain(__argc, __argv);
    _CrtDumpMemoryLeaks();
    return result;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
