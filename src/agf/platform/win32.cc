//----------------------------------------------------------------------------------------------------------------------
// Implementation of Win32 platform layer.
//----------------------------------------------------------------------------------------------------------------------

#define STB_IMAGE_IMPLEMENTATION
#include <agf/ext/stb_image.h>

#include <agf/core.h>
#include <agf/data.h>
#include <agf/game/game.h>
#include <agf/platform/win32.h>
#include <memory.h>
#include <stdlib.h>
#include <windowsx.h>

using namespace agf;

//----------------------------------------------------------------------------------------------------------------------

string win32GetExePathName()
{
#if 0//def _DEBUG
    return "";
#else
    int len = MAX_PATH;
    for (;;)
    {
        char* buf = (char *)malloc(len);
        if (!buf) return 0;
        DWORD pathLen = GetModuleFileName(0, buf, len);
        if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
        {
            // Not enough memory!
            len = 2 * len;
            free(buf);
            continue;
        }

        while (buf[pathLen] != '\\') --pathLen;
        buf[pathLen] = 0;
        string path(buf);
        path += "\\";
        free(buf);
        return path;
    }
#endif
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
// O P E N G L
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

void openGLCompileShader(GLuint shader, const char* code)
{
    GLint result = 0;
    GLint infoLogLength = 0;

    glShaderSource(shader, 1, &code, NULL);
    glCompileShader(shader);
    glGetShaderiv(shader, GL_COMPILE_STATUS, &result);
    glGetShaderiv(shader, GL_INFO_LOG_LENGTH, &infoLogLength);
    if (infoLogLength > 0)
    {
        agf::string error;
        error.resize(infoLogLength);
        glGetShaderInfoLog(shader, infoLogLength, NULL, error.data());
        agf::prn("{0}", error);
        abort();
    }
}

//----------------------------------------------------------------------------------------------------------------------

GLuint openGLCreateProgram(GLuint vertexShader, GLuint fragmentShader)
{
    GLuint program = glCreateProgram();
    glAttachShader(program, vertexShader);
    glAttachShader(program, fragmentShader);
    glLinkProgram(program);

    GLint result = 0;
    int logLength = 0;
    glGetProgramiv(program, GL_LINK_STATUS, &result);
    glGetProgramiv(program, GL_INFO_LOG_LENGTH, &logLength);
    if (logLength > 0)
    {
        agf::string error;
        error.resize(logLength);
        glGetProgramInfoLog(program, logLength, NULL, error.data());
        agf::prn("{0}", error);
        abort();
    }

    return program;
}

//----------------------------------------------------------------------------------------------------------------------

GLuint openGLLoadFontTexture(ExeDrive& exeDrive, WindowInfo& info, const char* fileName)
{
    vector<u8> file = exeDrive.loadFile(fileName);
    GLuint textureID = 0;

    if (file.size())
    {
        int width, height, bpp;
        u32* image = (u32*)stbi_load_from_memory(file.data(), (int)file.size(), &width, &height, &bpp, 4);
        info.fontSize.dx = width / 16;
        info.fontSize.dy = height / 16;

        glGenTextures(1, &textureID);
        glBindTexture(GL_TEXTURE_2D, textureID);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
        stbi_image_free(image);
    }
    return textureID;
}

//----------------------------------------------------------------------------------------------------------------------

GLuint openGLCreateDynamicTexture(int width, int height, u32** outImage)
{
    u32* image = (u32 *)malloc(width * height * sizeof(u32));
    for (int i = 0; i < width; ++i) image[i] = 0xffff00ff;

    GLuint texId;
    glGenTextures(1, &texId);
    glBindTexture(GL_TEXTURE_2D, texId);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);

    *outImage = image;
    return texId;
}

//----------------------------------------------------------------------------------------------------------------------

void openGLResizeDynamicTexture(GLuint id, int oldWidth, int oldHeight, int newWidth, int newHeight, u32** outImage)
{
    *outImage = (u32 *)realloc(*outImage, newWidth * newHeight * sizeof(u32));
    glBindTexture(GL_TEXTURE_2D, id);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, newWidth, newHeight, 0, GL_RGBA, GL_UNSIGNED_BYTE, *outImage);
}

//----------------------------------------------------------------------------------------------------------------------

void openGLUpdateDynamicTexture(GLuint texId, u32* image, int width, int height)
{
    glBindTexture(GL_TEXTURE_2D, texId);
    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, width, height, GL_RGBA, GL_UNSIGNED_BYTE, image);
}

//----------------------------------------------------------------------------------------------------------------------

void openGLDestroyDynamicTexture(u32* image, int width, int height, GLuint id)
{
    glDeleteTextures(1, &id);
    free(image);
}

//----------------------------------------------------------------------------------------------------------------------

#define GL_BUFFER_OFFSET(x) ((void *)(x))

void openGLMessage(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, const void* userParam)
{
    bool showMessage = NO;

    switch (type)
    {
    case GL_DEBUG_TYPE_ERROR:
        pr("ERROR: ");
        showMessage = YES;
        break;

    case GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR:
        pr("DEPRECATED BEHAVIOUR: ");
        showMessage = YES;
        break;

    case GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR:
        pr("UNDEFINED BEHAVIOUR: ");
        showMessage = YES;
        break;

    case GL_DEBUG_TYPE_PORTABILITY:
        pr("PORTABILITY: ");
        showMessage = YES;
        break;

    case GL_DEBUG_TYPE_PERFORMANCE:
        pr("PERFORMANCE: ");
        showMessage = YES;
        break;

    case GL_DEBUG_TYPE_OTHER:
        pr("OTHER: ");
        showMessage = YES;
        break;
    }

    if (showMessage)
    {
        switch (severity)
        {
        case GL_DEBUG_SEVERITY_HIGH:    pr("[HIGH] ");          break;
        case GL_DEBUG_SEVERITY_MEDIUM:  pr("[MED] ");           break;
        case GL_DEBUG_SEVERITY_LOW:     pr("[LOW] ");           break;
        }

        prn("{0}", message);

        if (severity == GL_DEBUG_SEVERITY_HIGH) AGF_BREAK();
    }
}

void openGLFillTexture(u32* image, GLuint id, u32 colour, int width, int height)
{
    int count = width * height;
    for (int i = 0; i < count; ++i) image[i] = colour;
    openGLUpdateDynamicTexture(id, image, width, height);
}

GLuint loadFontTexture(WindowInfo& info, const char* fileName)
{
    Data file (fileName);
    GLuint textureID = 0;

    if (file)
    {
        int width, height, bpp;
        u32* image = (u32*)stbi_load_from_memory(file, (int)file.size(), &width, &height, &bpp, 4);
        info.fontSize.dx = width / 16;
        info.fontSize.dy = height / 16;

        glGenTextures(1, &textureID);
        glBindTexture(GL_TEXTURE_2D, textureID);
        glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_BORDER);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_BORDER);
        stbi_image_free(image);
    }

    info.fontTex = textureID;
    return textureID;
}

void openGLInit(ExeDrive& exeDrive, WindowInfo& info, int width, int height)
{
    static const GLfloat buffer[] = {
        //  X       Y       TX      TY
        // Top left
        -1.0f,  -1.0f,  0.0f,   0.0f,
        1.0f,   -1.0f,  1.0f,   0.0f,
        -1.0f,  1.0f,   0.0f,   1.0f,

        // Bottom right
        -1.0f,  1.0f,   0.0f,   1.0f,
        1.0f,   -1.0f,  1.0f,   0.0f,
        1.0f,   1.0f,   1.0f,   1.0f,
    };

    glEnable(GL_DEBUG_OUTPUT);
    glDebugMessageCallback(openGLMessage, 0);

    glGenBuffers(1, &info.vertexBuffer);
    glBindBuffer(GL_ARRAY_BUFFER, info.vertexBuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(buffer), buffer, GL_STATIC_DRAW);

    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);
    glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), GL_BUFFER_OFFSET(0));
    glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 4 * sizeof(float), GL_BUFFER_OFFSET(2 * sizeof(float)));

    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);

    string exePath = win32GetExePathName();
    vector<u8> vertexCode = exeDrive.loadFile("ascii.vs");
    vector<u8> pixelCode = exeDrive.loadFile("ascii.fs");
    vertexCode.push_back(0);
    pixelCode.push_back(0);

    openGLCompileShader(vertexShader, (char *)vertexCode.data());
    openGLCompileShader(fragmentShader, (char *)pixelCode.data());
    info.program = openGLCreateProgram(vertexShader, fragmentShader);

    glDetachShader(info.program, vertexShader);
    glDetachShader(info.program, fragmentShader);
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    glUseProgram(info.program);

    // Set up textures
    info.fontTex = openGLLoadFontTexture(exeDrive, info, "font3.png");
    int cw = width / info.fontSize.dx;
    int ch = height / info.fontSize.dy;
    info.foreTex = openGLCreateDynamicTexture(cw, ch, &info.foreImage);
    info.backTex = openGLCreateDynamicTexture(cw, ch, &info.backImage);
    info.textTex = openGLCreateDynamicTexture(cw, ch, &info.textImage);
    info.imageSize.dx = cw;
    info.imageSize.dy = ch;

    GLuint loc;

    // Bind shader variable "fontTex" to texture unit 0, then bind our texture to texture unit 0.
    loc = glGetUniformLocation(info.program, "fontTex");
    glUniform1i(loc, 0);
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, info.fontTex);

    // Bind shader variable "foreTex" to texture unit 1, then bind our texture to texture unit 1.
    loc = glGetUniformLocation(info.program, "foreTex");
    glUniform1i(loc, 1);
    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, info.foreTex);

    // Bind shader variable "fontTex" to texture unit 2, then bind our texture to texture unit 2.
    loc = glGetUniformLocation(info.program, "backTex");
    glUniform1i(loc, 2);
    glActiveTexture(GL_TEXTURE2);
    glBindTexture(GL_TEXTURE_2D, info.backTex);

    // Bind shader variable "fontTex" to texture unit 3, then bind our texture to texture unit 3.
    loc = glGetUniformLocation(info.program, "asciiTex");
    glUniform1i(loc, 3);
    glActiveTexture(GL_TEXTURE3);
    glBindTexture(GL_TEXTURE_2D, info.textTex);

    info.glReady = true;
}

//----------------------------------------------------------------------------------------------------------------------

void openGLDone(WindowInfo& info)
{
    glDisableVertexAttribArray(0);
    glDisableVertexAttribArray(1);
    glDeleteBuffers(1, &info.vertexBuffer);
    glDeleteProgram(info.program);
    glDeleteTextures(1, &info.fontTex);

    openGLDestroyDynamicTexture(info.foreImage, info.imageSize.dx, info.imageSize.dy, info.foreTex);
    openGLDestroyDynamicTexture(info.backImage, info.imageSize.dx, info.imageSize.dy, info.backTex);
    openGLDestroyDynamicTexture(info.textImage, info.imageSize.dx, info.imageSize.dy, info.textTex);

    info.glReady = false;
}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
// W I N D O W   M A N A G E M E N T
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

RECT win32CalcRect(WindowInfo& info, int style)
{
    RECT r = { 0, 0, info.pos.w, info.pos.h };
    AdjustWindowRect(&r, style, FALSE);
    r.right += -r.left + info.pos.x;
    r.bottom += -r.top + info.pos.y;
    r.left = info.pos.x;
    r.top = info.pos.y;
    return r;
}

//----------------------------------------------------------------------------------------------------------------------

void win32FullScreen(WindowInfo& info)
{
    if (info.handle)
    {
        SetWindowRgn(info.handle, 0, FALSE);
        int screenWidth = GetSystemMetrics(SM_CXSCREEN);
        int screenHeight = GetSystemMetrics(SM_CYSCREEN);
        info.origPos = info.pos;

        DEVMODE mode;
        EnumDisplaySettings(0, 0, &mode);
        mode.dmBitsPerPel = 32;
        mode.dmPelsWidth = screenWidth;
        mode.dmPelsHeight = screenHeight;
        mode.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;
        long result = ChangeDisplaySettings(&mode, CDS_FULLSCREEN);

        if (result == DISP_CHANGE_SUCCESSFUL)
        {
            DWORD style = GetWindowLong(info.handle, GWL_STYLE);
            style &= ~(WS_CAPTION | WS_THICKFRAME);
            SetWindowLong(info.handle, GWL_STYLE, style);

            // Move the window to 0, 0
            SetWindowPos(info.handle, 0, 0, 0, screenWidth, screenHeight, SWP_NOZORDER);
            InvalidateRect(info.handle, 0, TRUE);
        }
    }

    info.fullScreen = true;
}

//----------------------------------------------------------------------------------------------------------------------

void win32NoFullScreen(WindowInfo& info)
{
    ChangeDisplaySettings(NULL, CDS_FULLSCREEN);
    info.fullScreen = false;
    info.pos = info.origPos;

    DWORD style = GetWindowLong(info.handle, GWL_STYLE);
    style |= WS_CAPTION | WS_THICKFRAME;
    SetWindowLong(info.handle, GWL_STYLE, style);

    RECT rc = win32CalcRect(info, style);
    SetWindowPos(info.handle, 0, rc.left, rc.top, rc.right - rc.left, rc.bottom - rc.top, SWP_NOZORDER);
    InvalidateRect(info.handle, 0, TRUE);
}

//----------------------------------------------------------------------------------------------------------------------

void win32RenderOpenGL(WindowInfo& info)
{
    if (info.glReady)
    {
        wglMakeCurrent(info.dc, info.gl);

        //#todo: Paint screen
        glClearColor(0, 0, 0, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        GLint uFontRes = glGetUniformLocation(info.program, "uFontRes");
        glProgramUniform2f(info.program, uFontRes, (float)info.fontSize.dx, (float)info.fontSize.dy);
        GLint uResolution = glGetUniformLocation(info.program, "uResolution");
        glProgramUniform2f(info.program, uResolution, (float)info.pos.w, (float)info.pos.h);

        glUseProgram(info.program);
        glDrawArrays(GL_TRIANGLES, 0, 6);

        SwapBuffers(info.dc);
    }
}

//----------------------------------------------------------------------------------------------------------------------

void win32RunPresentation(WindowInfo& info, agf::Game& game)
{
    PresentIn pin;
    pin.width = info.imageSize.dx;
    pin.height = info.imageSize.dy;
    pin.foreImage = info.foreImage;
    pin.backImage = info.backImage;
    pin.textImage = info.textImage;
    game.present(pin);

    openGLUpdateDynamicTexture(info.foreTex, info.foreImage, info.imageSize.dx, info.imageSize.dy);
    openGLUpdateDynamicTexture(info.backTex, info.backImage, info.imageSize.dx, info.imageSize.dy);
    openGLUpdateDynamicTexture(info.textTex, info.textImage, info.imageSize.dx, info.imageSize.dy);

    InvalidateRect(info.handle, 0, 0);
}

//----------------------------------------------------------------------------------------------------------------------

void win32ResizeWindow(WindowInfo& info, Game& game, int newWidth, int newHeight)
{
    if (info.glReady)
    {
        info.pos.w = newWidth;
        info.pos.h = newHeight;

        glViewport(0, 0, newWidth, newHeight);

        int cw = newWidth / info.fontSize.dx;
        int ch = newHeight / info.fontSize.dy;

        openGLResizeDynamicTexture(info.foreTex, info.imageSize.dx, info.imageSize.dy, cw, ch, &info.foreImage);
        openGLResizeDynamicTexture(info.backTex, info.imageSize.dx, info.imageSize.dy, cw, ch, &info.backImage);
        openGLResizeDynamicTexture(info.textTex, info.imageSize.dx, info.imageSize.dy, cw, ch, &info.textImage);

        info.imageSize.dx = cw;
        info.imageSize.dy = ch;

        win32RunPresentation(info, game);
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
        create();
    }

    //------------------------------------------------------------------------------------------------------------------
    // Destructor

    Win32Platform::~Win32Platform()
    {
        openGLDone(m_info);
    }

    //------------------------------------------------------------------------------------------------------------------
    // run

    int Win32Platform::run()
    {
        int result = 0;
        MSG msg;
        bool quit = false;
        TimePoint last = timeNow();

        while(!quit)
        {
            if (PeekMessageA(&msg, 0, 0, 0, PM_NOREMOVE))
            {
                if (!GetMessageA(&msg, 0, 0, 0))
                {
                    // Time to quit!
                    quit = true;
                }
                TranslateMessage(&msg);
                DispatchMessageA(&msg);
            }

            SimulateIn sim;
            sim.dt = 0.0;
            sim.width = m_info.imageSize.dx;
            sim.height = m_info.imageSize.dy;

            if (keyState().alt && keyState().vkey == Key::Return && keyState().down)
            {
                keyState().vkey = Key::None;
                if (m_info.fullScreen)
                {
                    win32NoFullScreen(m_info);
                }
                else
                {
                    win32FullScreen(m_info);
                }
            }
            sim.key = keyState();
            sim.mouse = mouseState();

            TimePoint t = timeNow();
            TimePeriod dt = timePeriod(last, t);
            sim.dt = timeToSecs(dt);
            last = t;
            
            if (game().simulate(sim))
            {
                win32RunPresentation(m_info, game());
            }
            else
            {
                PostQuitMessage(0);
            }


        }

        return (int)msg.wParam;
    }

    //----------------------------------------------------------------------------------------------------------------------

    void Win32Platform::create()
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
        m_info.pos.x = 10;
        m_info.pos.y = 10;
        m_info.pos.w = 800;
        m_info.pos.h = 600;
        RECT r = win32CalcRect(m_info, style);

        m_info.handle = CreateWindowA("AGF_Window", "AGF Demo", style, r.left, r.top,
            r.right - r.left, r.bottom - r.top, 0, 0, GetModuleHandle(0), this);
        if (m_info.handle)
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

            m_info.dc = GetDC(m_info.handle);
            int pixelFormat = ChoosePixelFormat(m_info.dc, &pfd);
            SetPixelFormat(m_info.dc, pixelFormat, &pfd);

            m_info.gl = wglCreateContext(m_info.dc);
            wglMakeCurrent(m_info.dc, m_info.gl);
            glInit();

            openGLInit(getExeDrive(), m_info, 800, 600);
        }
    }

    //----------------------------------------------------------------------------------------------------------------------

    LRESULT Win32Platform::proc(HWND wnd, UINT msg, WPARAM w, LPARAM l)
    {
        if (msg == WM_CREATE)
        {
            m_info.handle = wnd;
            m_info.dc = 0;
            m_info.gl = 0;
            m_info.fullScreen = 0;
            SetWindowLongPtrA(wnd, 0, (LONG_PTR)this);
        }
        else
        {
            switch (msg)
            {
            case WM_SIZE:
                win32ResizeWindow(m_info, game(), LOWORD(l), HIWORD(l));
                break;

            case WM_SIZING:
            {
                RECT* rc = (RECT *)l;
                win32ResizeWindow(m_info, game(), rc->right - rc->left, rc->bottom - rc->top);
            }
            break;

            case WM_MOVE:
            {
                int x = LOWORD(l);
                int y = HIWORD(l);
                RECT rc = { x, y, x, y };
                int style = GetWindowLong(wnd, GWL_STYLE);
                AdjustWindowRect(&rc, style, FALSE);
                m_info.pos.x = rc.left;
                m_info.pos.y = rc.top;
            }
            break;

            case WM_PAINT:
                win32RenderOpenGL(m_info);
                break;

            case WM_CLOSE:
                DestroyWindow(wnd);
                break;

            case WM_DESTROY:
                wglDeleteContext(m_info.gl);
                DeleteDC(m_info.dc);
                m_info.gl = 0;
                m_info.dc = 0;
                if (m_info.fullScreen) win32NoFullScreen(m_info);
                PostQuitMessage(0);
                break;

            case WM_MENUCHAR:
                return MAKELRESULT(0, MNC_CLOSE);

            case WM_SYSKEYDOWN:
            case WM_KEYDOWN:
            case WM_SYSKEYUP:
            case WM_KEYUP:
                {
                    KeyState& ks = keyState();
                    ks.vkey = (Key)w;
                    ks.ch = 0;
                    ks.down = msg == WM_KEYDOWN || msg == WM_SYSKEYDOWN;
                    ks.shift = HIBYTE(GetKeyState(VK_SHIFT)) != 0;
                    ks.ctrl = HIBYTE(GetKeyState(VK_CONTROL)) != 0;
                    ks.alt = HIBYTE(GetKeyState(VK_MENU)) != 0;
                }
                break;

            case WM_CHAR:
                if ((l & 0xa000) == 0)
                {
                    keyState().ch = (char)w;
                }
                break;

            case WM_MOUSELEAVE:
                prn("Leave");
                mouseState().onScreen = false;
                mouseState().leftDown = false;
                mouseState().rightDown = false;
                break;

            case WM_MOUSEMOVE:
                mouseState().x = GET_X_LPARAM(l) / m_info.fontSize.dx;
                mouseState().y = GET_Y_LPARAM(l) / m_info.fontSize.dy;
                mouseState().onScreen = (mouseState().x < m_info.imageSize.dx &&
                    mouseState().y < m_info.imageSize.dy);
                m_mouseTrack.cbSize = sizeof(TRACKMOUSEEVENT);
                m_mouseTrack.hwndTrack = wnd;
                m_mouseTrack.dwFlags = TME_LEAVE;
                TrackMouseEvent(&m_mouseTrack);
                break;

            case WM_LBUTTONDOWN:
                mouseState().leftDown = true;
                break;

            case WM_LBUTTONUP:
                mouseState().leftDown = false;
                break;

            case WM_RBUTTONDOWN:
                mouseState().rightDown = true;
                break;

            case WM_RBUTTONUP:
                mouseState().rightDown = false;
                break;

            default:
                return DefWindowProcA(wnd, msg, w, l);
            }
        }

        return 0;
    }

    //----------------------------------------------------------------------------------------------------------------------

    LRESULT CALLBACK Win32Platform::win32Proc(HWND wnd, UINT msg, WPARAM w, LPARAM l)
    {
        return ((msg == WM_CREATE)
            ? (Win32Platform *)(((LPCREATESTRUCTA)l)->lpCreateParams)
            : (Win32Platform *)GetWindowLongPtrA(wnd, 0))->proc(wnd, msg, w, l);
    }

    //------------------------------------------------------------------------------------------------------------------

    TimePoint Win32Platform::timeNow()
    {
        LARGE_INTEGER t;
        QueryPerformanceCounter(&t);
        return t;
    }

    //------------------------------------------------------------------------------------------------------------------

    TimePeriod Win32Platform::timePeriod(TimePoint a, TimePoint b)
    {
        LARGE_INTEGER t;
        t.QuadPart = b.QuadPart - a.QuadPart;
        return t;
    }

    //------------------------------------------------------------------------------------------------------------------

    f64 Win32Platform::timeToSecs(TimePeriod period)
    {
        LARGE_INTEGER freq;
        QueryPerformanceFrequency(&freq);
        return (f64)period.QuadPart / (f64)freq.QuadPart;
    }

    //------------------------------------------------------------------------------------------------------------------
    //------------------------------------------------------------------------------------------------------------------

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

