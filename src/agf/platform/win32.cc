//----------------------------------------------------------------------------------------------------------------------
// Implementation of Win32 platform layer.
//----------------------------------------------------------------------------------------------------------------------

#include <agf/platform/win32.h>
#include <agf/platform/win32gl.h>

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
// W I N D O W   M A N A G E M E N T
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

RECT win32CalcRect(agf::WindowInfo* info, int style)
{
    RECT r = { 0, 0, info->pos.w, info->pos.h };
    AdjustWindowRect(&r, style, FALSE);
    r.right += -r.left + info->pos.x;
    r.bottom += -r.top + info->pos.y;
    r.left = info->pos.x;
    r.top = info->pos.y;
    return r;
}

//----------------------------------------------------------------------------------------------------------------------

void win32FullScreen(agf::WindowInfo* info)
{
    if (info->handle)
    {
        SetWindowRgn(info->handle, 0, FALSE);
        int screenWidth = GetSystemMetrics(SM_CXSCREEN);
        int screenHeight = GetSystemMetrics(SM_CYSCREEN);
        info->origPos = info->pos;

        DEVMODE mode;
        EnumDisplaySettings(0, 0, &mode);
        mode.dmBitsPerPel = 32;
        mode.dmPelsWidth = screenWidth;
        mode.dmPelsHeight = screenHeight;
        mode.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;
        long result = ChangeDisplaySettings(&mode, CDS_FULLSCREEN);

        if (result == DISP_CHANGE_SUCCESSFUL)
        {
            DWORD style = GetWindowLong(info->handle, GWL_STYLE);
            style &= ~(WS_CAPTION | WS_THICKFRAME);
            SetWindowLong(info->handle, GWL_STYLE, style);

            // Move the window to 0, 0
            SetWindowPos(info->handle, 0, 0, 0, screenWidth, screenHeight, SWP_NOZORDER);
            InvalidateRect(info->handle, 0, TRUE);
        }
    }

    info->fullScreen = true;
}

//----------------------------------------------------------------------------------------------------------------------

void win32NoFullScreen(agf::WindowInfo* info)
{
    ChangeDisplaySettings(NULL, CDS_FULLSCREEN);
    info->fullScreen = false;
    info->pos = info->origPos;

    DWORD style = GetWindowLong(info->handle, GWL_STYLE);
    style |= WS_CAPTION | WS_THICKFRAME;
    SetWindowLong(info->handle, GWL_STYLE, style);

    RECT rc = win32CalcRect(info, style);
    SetWindowPos(info->handle, 0, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_NOZORDER);
    InvalidateRect(info->handle, 0, TRUE);
}

//----------------------------------------------------------------------------------------------------------------------

void win32RenderOpenGL(agf::WindowInfo* info)
{
    if (info)
    {
        wglMakeCurrent(info->dc, info->gl);

        //#todo: Paint screen

        SwapBuffers(info->dc);
    }
}

//----------------------------------------------------------------------------------------------------------------------

void win32ResizeWindow(agf::WindowInfo* info, int newWidth, int newHeight)
{
    if (info)
    {
        info->pos.w = newWidth;
        info->pos.h = newHeight;

        if (info->gl)
        {
            glViewport(0, 0, newWidth, newHeight);
        }
    }
}

//----------------------------------------------------------------------------------------------------------------------

LRESULT CALLBACK win32Proc(HWND wnd, UINT msg, WPARAM w, LPARAM l)
{
    if (msg == WM_CREATE)
    {
        CREATESTRUCTA* cs = (CREATESTRUCTA *)l;
        agf::WindowInfo* info = (agf::WindowInfo *)cs->lpCreateParams;
        info->handle = wnd;
        info->dc = 0;
        info->gl = 0;
        info->fullScreen = 0;
        SetWindowLongPtrA(wnd, 0, (LONG_PTR)info);
    }
    else
    {
        agf::WindowInfo* info = (agf::WindowInfo *)GetWindowLongPtrA(wnd, 0);

        switch (msg)
        {
        case WM_SIZE:
            win32ResizeWindow(info, LOWORD(l), HIWORD(l));
            break;

        case WM_SIZING:
        {
            RECT* rc = (RECT *)l;
            win32ResizeWindow(info, rc->right - rc->left, rc->bottom - rc->top);
        }
        break;

        case WM_MOVE:
            if (info)
            {
                int x = LOWORD(l);
                int y = HIWORD(l);
                RECT rc = { x, y, x, y };
                int style = GetWindowLong(wnd, GWL_STYLE);
                AdjustWindowRect(&rc, style, FALSE);
                info->pos.x = rc.left;
                info->pos.y = rc.top;
            }
            break;

        case WM_PAINT:
            if (info)
            {
                win32RenderOpenGL(info);
            }
            break;

        case WM_CLOSE:
            DestroyWindow(wnd);
            break;

        case WM_DESTROY:
            wglDeleteContext(info->gl);
            DeleteDC(info->dc);
            info->gl = 0;
            info->dc = 0;
            if (info->fullScreen) win32NoFullScreen(info);
            PostQuitMessage(0);
            break;

        case WM_MENUCHAR:
            return MAKELRESULT(0, MNC_CLOSE);

        default:
            return DefWindowProcA(wnd, msg, w, l);
        }
    }

    return 0;
}

//----------------------------------------------------------------------------------------------------------------------

void win32Create(agf::WindowInfo* info)
{
    static ATOM classAtom = 0;

    if (!classAtom)
    {
        WNDCLASSEXA wc = { 0 };
        wc.cbSize = sizeof(WNDCLASSEXA);
        wc.style = CS_HREDRAW | CS_VREDRAW;
        wc.lpfnWndProc = &win32Proc;
        wc.hInstance = GetModuleHandleA(0);
        wc.hIcon = wc.hIconSm = LoadIconA(0, IDI_APPLICATION);
        wc.hCursor = LoadCursorA(0, IDC_ARROW);
        wc.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH);
        wc.lpszClassName = "AGF_Window";
        wc.cbWndExtra = sizeof(LONG_PTR);

        classAtom = RegisterClassExA(&wc);
    }

    int style = WS_OVERLAPPEDWINDOW | WS_VISIBLE;
    info->pos.x = 10;
    info->pos.y = 10;
    info->pos.w = 800;
    info->pos.h = 600;
    RECT r = win32CalcRect(info, style);

    info->handle = CreateWindowA("AGF_Window", "AGF Demo", style, r.left, r.top,
        r.right - r.left, r.bottom - r.top, 0, 0, GetModuleHandle(0), info);
    if (info->handle)
    {
        PIXELFORMATDESCRIPTOR pfd = {
            sizeof(PIXELFORMATDESCRIPTOR),                                  // nSize
            1,                                                              // nVersion
            PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,     // dwFlags
            PFD_TYPE_RGBA,                                                  // iPixelType
            32,                                                             // cColorBits
            0, 0,                                                           // cRedBits, cRedShift
            0, 0,                                                           // cGreenBits, cGreenShift
            0, 0,                                                           // cBlueBits, cBlueShift
            0, 0,                                                           // cAlphaBits, cAlphaShift
            0,                                                              // cAccumBits
            0, 0, 0, 0,                                                     // cAccumRed/Green/Blue/AlphaBits
            24,                                                             // cDepthBits
            8,                                                              // cStencilBits
            0,                                                              // cAuxBuffers
            PFD_MAIN_PLANE,                                                 // iLayerType
            0,                                                              // bReserved
            0,                                                              // dwLayerMask
            0,                                                              // dwVisibleMask
            0,                                                              // dwDamageMask
        };

        info->dc = GetDC(info->handle);
        int pixelFormat = ChoosePixelFormat(info->dc, &pfd);
        SetPixelFormat(info->dc, pixelFormat, &pfd);

        info->gl = wglCreateContext(info->dc);
        wglMakeCurrent(info->dc, info->gl);
        glInit();
    }
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

namespace agf
{

    //------------------------------------------------------------------------------------------------------------------
    // Constructor

    Win32Platform::Win32Platform(Game& game, const CommandLine& cmdLine)
        : Platform(game, cmdLine)
    {
        win32Create(&m_info);
    }

    //------------------------------------------------------------------------------------------------------------------
    // Destructor

    Win32Platform::~Win32Platform()
    {

    }

    //------------------------------------------------------------------------------------------------------------------
    // run

    int Win32Platform::run()
    {
        int result = 0;
        MSG msg;

        while (GetMessageA(&msg, 0, 0, 0))
        {
            TranslateMessage(&msg);
            DispatchMessageA(&msg);
        }

        return (int)msg.wParam;
    }

    //------------------------------------------------------------------------------------------------------------------
    //------------------------------------------------------------------------------------------------------------------

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

