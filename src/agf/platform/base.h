//----------------------------------------------------------------------------------------------------------------------
// Defines the base class for all platforms.
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <agf/game/game.h>
#include <agf/platform/fad.h>

namespace agf
{

    class CommandLine;

    class Platform
    {
    public:
        Platform(Game& game, const CommandLine& cmdLine)
            : m_game(game)
            , m_cmdLine(cmdLine)
            , m_keyState()
            , m_mouseState()
        {}

        virtual ~Platform()
        {}

        virtual int run() = 0;

        Game& game() { return m_game; }
        const Game& game() const { return m_game; }

        const CommandLine& cmdLine() const { return m_cmdLine; }

        ExeDrive& getExeDrive() { return m_exeDrive; }

    protected:
        //
        // I/O
        //
        KeyState& keyState() { return m_keyState; }
        const KeyState& keyState() const { return m_keyState; }
        MouseState& mouseState() { return m_mouseState; }
        const MouseState& mouseState() const { return m_mouseState; }

        //
        // Time
        //
        virtual TimePoint timeNow() = 0;
        virtual TimePeriod timePeriod(TimePoint a, TimePoint b) = 0;
        virtual f64 timeToSecs(TimePeriod period) = 0;

    private:
        Game&               m_game;
        const CommandLine&  m_cmdLine;
        KeyState            m_keyState;
        MouseState          m_mouseState;
        ExeDrive            m_exeDrive;
    };

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
