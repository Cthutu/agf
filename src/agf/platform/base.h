//----------------------------------------------------------------------------------------------------------------------
// Defines the base class for all platforms.
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <agf/game/game.h>

namespace agf
{

    class CommandLine;

    class Platform
    {
    public:
        Platform(Game& game, const CommandLine& cmdLine)
            : m_game(game)
            , m_cmdLine(cmdLine)
        {}

        virtual ~Platform()
        {}

        virtual int run() = 0;

        Game& game() { return m_game; }
        const Game& game() const { return m_game; }

        const CommandLine& cmdLine() const { return m_cmdLine; }

        KeyState& keyState() { return m_keyState; }
        const KeyState& keyState() const { return m_keyState; }
        MouseState& mouseState() { return m_mouseState; }
        const MouseState& mouseState() const { return m_mouseState; }

    private:
        Game&               m_game;
        const CommandLine&  m_cmdLine;
        KeyState            m_keyState;
        MouseState          m_mouseState;
    };

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
