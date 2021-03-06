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
    // Virtual keys

    enum class Key
    {
        None        = 0,        // No key pressed.
        Back        = 0x08,
        Tab         = 0x09,
        Return      = 0x0d,
        Pause       = 0x13,
        Escape      = 0x1b,
        End         = 0x23,
        Home        = 0x24,
        Left        = 0x25,
        Up          = 0x26,
        Right       = 0x27,
        Down        = 0x28,
        Print       = 0x2a,
        Insert      = 0x2d,
        Delete      = 0x2e,

        NumPad0     = 0x60,
        NumPad1     = 0x61,
        NumPad2     = 0x62,
        NumPad3     = 0x63,
        NumPad4     = 0x64,
        NumPad5     = 0x65,
        NumPad6     = 0x66,
        NumPad7     = 0x67,
        NumPad8     = 0x68,
        NumPad9     = 0x69,
        NumMultiply = 0x6a,
        NumAdd      = 0x6b,
        NumSlash    = 0x6c,
        NumMinis    = 0x6d,
        NumDot      = 0x6e,
        NumDivide   = 0x6f,

        F1          = 0x70,
        F2          = 0x71,
        F3          = 0x72,
        F4          = 0x73,
        F5          = 0x74,
        F6          = 0x75,
        F7          = 0x76,
        F8          = 0x77,
        F9          = 0x78,
        F10         = 0x79,
        F11         = 0x7a,
        F12         = 0x7b,

        NumLock     = 0x90,
        ScrollLock  = 0x91,
    };

    //------------------------------------------------------------------------------------------------------------------
    // Key state

    struct KeyState
    {
        bool    down;
        bool    shift;
        bool    ctrl;
        bool    alt;
        Key     vkey;
        char    ch;

        KeyState()
            : down(false)
            , shift(false)
            , ctrl(false)
            , alt(false)
            , vkey(Key::None)
            , ch(0)
        {}
    };

    //------------------------------------------------------------------------------------------------------------------
    // Mouse state

    struct MouseState
    {
        bool    onScreen;
        bool    leftDown;
        bool    rightDown;
        int     x;
        int     y;

        MouseState()
            : onScreen(false)
            , leftDown(false)
            , rightDown(false)
            , x(0)
            , y(0)
        {}
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
        KeyState            key;
        MouseState          mouse;
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
    // Colour class

    class Colour
    {
    public:
        Colour(u8 red, u8 green, u8 blue)
            : m_colour(0xff000000 + ((u32)blue << 16) + ((u32)green << 8) + (u32)red)
        {}

        Colour(const Colour&) = default;
        Colour& operator= (const Colour& colour) = default;

        operator agf::u32 () const { return m_colour; }

        static u32 red()        { return (u32)Colour(255, 0, 0); }
        static u32 yellow()     { return (u32)Colour(255, 255, 0); }
        static u32 green()      { return (u32)Colour(0, 255, 0); }
        static u32 cyan()       { return (u32)Colour(0, 255, 255); }
        static u32 blue()       { return (u32)Colour(0, 0, 255); }
        static u32 magenta()    { return (u32)Colour(255, 0, 255); }
        static u32 white()      { return (u32)Colour(255, 255, 255); }
        static u32 black()      { return (u32)Colour(0, 0, 0); }

    private:
        agf::u32 m_colour;
    };

    //------------------------------------------------------------------------------------------------------------------
    //------------------------------------------------------------------------------------------------------------------

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
