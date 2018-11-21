//----------------------------------------------------------------------------------------------------------------------
// Defines the base class for all platforms.
//----------------------------------------------------------------------------------------------------------------------

#pragma once

namespace agf
{

    class Game;
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

    private:
        Game&               m_game;
        const CommandLine&  m_cmdLine;
    };

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
