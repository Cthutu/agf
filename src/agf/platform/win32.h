//----------------------------------------------------------------------------------------------------------------------
// Win32 derived class from agf::Platform.
//
// The purpose of this class is to set up the windows, process input events, setup audio and pass structures to the
// Game API.  This is going to be completely different per platform.  However, all platforms need to implement
// the constructor and override run().  If construction fails, then run() must be a no-op and return with -1.
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <agf/core.h>
#include <agf/platform/base.h>
#include <agf/platform/win32gl.h>

namespace agf
{

    class Game;
    class CommandLine;

    struct Point
    {
        int x, y;
    };

    struct Size
    {
        int dx, dy;
    };

    struct Rect
    {
        int x, y;
        int w, h;
    };

    struct WindowInfo
    {
        HWND        handle;
        HDC         dc;
        HGLRC       gl;
        Rect        pos;
        Rect        origPos;
        bool        fullScreen;

        GLint       program;
        Size        fontSize;
        GLuint      vertexBuffer;
        GLuint      fontTex;
        GLuint      foreTex;
        GLuint      backTex;
        GLuint      textTex;
        agf::u32*   foreImage;
        agf::u32*   backImage;
        agf::u32*   textImage;
        Size        imageSize;
        bool        glReady;
    };

    //----------------------------------------------------------------------------------------------------------------------

    class Win32Platform : public Platform
    {
    public:
        Win32Platform(Game& game, const CommandLine& cmdLine);
        ~Win32Platform() override;

        int run() override;

    private:
        WindowInfo  m_info;
    };

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
