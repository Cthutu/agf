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
        int x = 0, y = 0;
    };

    struct Size
    {
        int dx = 0, dy = 0;
    };

    struct Rect
    {
        int x = 0, y = 0;
        int w = 0, h = 0;
    };

    struct WindowInfo
    {
        HWND        handle = 0;
        HDC         dc = 0;
        HGLRC       gl = 0;
        Rect        pos;
        Rect        origPos;
        bool        fullScreen = false;

        GLint       program = 0;
        Size        fontSize;
        GLuint      vertexBuffer = 0;
        GLuint      fontTex = 0;
        GLuint      foreTex = 0;
        GLuint      backTex = 0;
        GLuint      textTex = 0;
        agf::u32*   foreImage = nullptr;
        agf::u32*   backImage = nullptr;
        agf::u32*   textImage = nullptr;
        Size        imageSize;
        bool        glReady = false;
    };

    //----------------------------------------------------------------------------------------------------------------------

    class Win32Platform : public Platform
    {
    public:
        Win32Platform(Game& game, const CommandLine& cmdLine);
        ~Win32Platform() override;

        int run() override;

    private:
        void create();

        static LRESULT CALLBACK win32Proc(HWND wnd, UINT msg, WPARAM w, LPARAM l);
        LRESULT proc(HWND wnd, UINT msg, WPARAM w, LPARAM l);

        TimePoint timeNow() override;
        TimePeriod timePeriod(TimePoint a, TimePoint b) override;
        f64 timeToSecs(TimePeriod period) override;

    private:
        WindowInfo  m_info;
    };

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
