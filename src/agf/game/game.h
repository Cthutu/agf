//----------------------------------------------------------------------------------------------------------------------
// Game base class.
//
// This allows the platform layer to interact with the game layer.
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <agf/core.h>

namespace agf
{

    //------------------------------------------------------------------------------------------------------------------
    // Key state

    struct KeyState
    {
        bool    down;
        bool    shift;
        bool    ctrl;
        bool    alt;
        int     vkey;
        char    ch;
    };

    //------------------------------------------------------------------------------------------------------------------
    // Mouse state

    struct MouseState
    {
        bool    leftDown;
        bool    rightDown;
        int     x;
        int     y;
    };

    //------------------------------------------------------------------------------------------------------------------
    // Simulation input state

    struct SimulateIn
    {
        // Timing
        f64                 dt;

        // Screen meta-data
        int                 width;
        int                 height;

        // Input
        vector<KeyState>    key;
        vector<MouseState>  mouse;
    };

    //------------------------------------------------------------------------------------------------------------------
    // Presentation input state

    struct PresentIn
    {
        int     width;
        int     height;
        u32*    foreImage;
        u32*    backImage;
        u32*    textImage;
    };

    //------------------------------------------------------------------------------------------------------------------
    // Game class

    class CommandLine;

    class Game
    {
    public:
        Game(const CommandLine& cmdLine) : m_cmdLine(cmdLine) {}
        virtual ~Game() {}

        // This function must return true until the game ends.
        virtual bool simulate(const SimulateIn& sim) = 0;

        virtual void present(const PresentIn& pin) = 0;

        const CommandLine& cmdLine() const { return m_cmdLine; }

    private:
        const CommandLine& m_cmdLine;
    };

    //------------------------------------------------------------------------------------------------------------------
    //------------------------------------------------------------------------------------------------------------------

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
