//----------------------------------------------------------------------------------------------------------------------
// Win32 OpenGL interface
//----------------------------------------------------------------------------------------------------------------------

#pragma once

//----------------------------------------------------------------------------------------------------------------------
// Open GL declarative wrapper
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
// Initialise the GL system and bind all the functions.  Make sure you call this after you create your first context
// and make it your current.  You can call this more than once.
//      int glInit(void);
//
// Test for a specific version of OpenGL.
//      int glIsSupported(int major, int minor);
//
// Obtain a pointer to an Open GL extension function.
//      GL3WglProc glGetProcAddress(char const *proc);
//
//----------------------------------------------------------------------------------------------------------------------

#define DEBUG_OPENGL          0

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
// GLCOREARB.H
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

    /*
    ** Copyright (c) 2013-2017 The Khronos Group Inc.
    **
    ** Permission is hereby granted, free of charge, to any person obtaining a
    ** copy of this software and/or associated documentation files (the
    ** "Materials"), to deal in the Materials without restriction, including
    ** without limitation the rights to use, copy, modify, merge, publish,
    ** distribute, sublicense, and/or sell copies of the Materials, and to
    ** permit persons to whom the Materials are furnished to do so, subject to
    ** the following conditions:
    **
    ** The above copyright notice and this permission notice shall be included
    ** in all copies or substantial portions of the Materials.
    **
    ** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    ** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    ** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
    ** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
    ** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
    ** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
    ** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
    */
    /*
    ** This header is generated from the Khronos OpenGL / OpenGL ES XML
    ** API Registry. The current version of the Registry, generator scripts
    ** used to make the header, and the header can be found at
    **   https://github.com/KhronosGroup/OpenGL-Registry
    */

#if defined(_WIN32) && !defined(APIENTRY) && !defined(__CYGWIN__) && !defined(__SCITECH_SNAP__)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#endif

#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef APIENTRYP
#define APIENTRYP APIENTRY *
#endif
#ifndef GLAPI
#define GLAPI extern
#endif

    /* glcorearb.h is for use with OpenGL core profile implementations.
    ** It should should be placed in the same directory as gl.h and
    ** included as <GL/glcorearb.h>.
    **
    ** glcorearb.h includes only APIs in the latest OpenGL core profile
    ** implementation together with APIs in newer ARB extensions which
    ** can be supported by the core profile. It does not, and never will
    ** include functionality removed from the core profile, such as
    ** fixed-function vertex and fragment processing.
    **
    ** Do not #include both <GL/glcorearb.h> and either of <GL/gl.h> or
    ** <GL/glext.h> in the same source file.
    */

    /* Generated C header for:
    * API: gl
    * Profile: core
    * Versions considered: .*
    * Versions emitted: .*
    * Default extensions included: glcore
    * Additional extensions included: _nomatch_^
    * Extensions removed: _nomatch_^
    */

#ifndef GL_VERSION_1_0
#define GL_VERSION_1_0 1
    typedef void GLvoid;
    typedef unsigned int GLenum;
    typedef float GLfloat;
    typedef int GLint;
    typedef int GLsizei;
    typedef unsigned int GLbitfield;
    typedef double GLdouble;
    typedef unsigned int GLuint;
    typedef unsigned char GLboolean;
    typedef unsigned char GLubyte;
#define GL_DEPTH_BUFFER_BIT               0x00000100
#define GL_STENCIL_BUFFER_BIT             0x00000400
#define GL_COLOR_BUFFER_BIT               0x00004000
#define GL_FALSE                          0
#define GL_TRUE                           1
#define GL_POINTS                         0x0000
#define GL_LINES                          0x0001
#define GL_LINE_LOOP                      0x0002
#define GL_LINE_STRIP                     0x0003
#define GL_TRIANGLES                      0x0004
#define GL_TRIANGLE_STRIP                 0x0005
#define GL_TRIANGLE_FAN                   0x0006
#define GL_QUADS                          0x0007
#define GL_NEVER                          0x0200
#define GL_LESS                           0x0201
#define GL_EQUAL                          0x0202
#define GL_LEQUAL                         0x0203
#define GL_GREATER                        0x0204
#define GL_NOTEQUAL                       0x0205
#define GL_GEQUAL                         0x0206
#define GL_ALWAYS                         0x0207
#define GL_ZERO                           0
#define GL_ONE                            1
#define GL_SRC_COLOR                      0x0300
#define GL_ONE_MINUS_SRC_COLOR            0x0301
#define GL_SRC_ALPHA                      0x0302
#define GL_ONE_MINUS_SRC_ALPHA            0x0303
#define GL_DST_ALPHA                      0x0304
#define GL_ONE_MINUS_DST_ALPHA            0x0305
#define GL_DST_COLOR                      0x0306
#define GL_ONE_MINUS_DST_COLOR            0x0307
#define GL_SRC_ALPHA_SATURATE             0x0308
#define GL_NONE                           0
#define GL_FRONT_LEFT                     0x0400
#define GL_FRONT_RIGHT                    0x0401
#define GL_BACK_LEFT                      0x0402
#define GL_BACK_RIGHT                     0x0403
#define GL_FRONT                          0x0404
#define GL_BACK                           0x0405
#define GL_LEFT                           0x0406
#define GL_RIGHT                          0x0407
#define GL_FRONT_AND_BACK                 0x0408
#define GL_NO_ERROR                       0
#define GL_INVALID_ENUM                   0x0500
#define GL_INVALID_VALUE                  0x0501
#define GL_INVALID_OPERATION              0x0502
#define GL_OUT_OF_MEMORY                  0x0505
#define GL_CW                             0x0900
#define GL_CCW                            0x0901
#define GL_POINT_SIZE                     0x0B11
#define GL_POINT_SIZE_RANGE               0x0B12
#define GL_POINT_SIZE_GRANULARITY         0x0B13
#define GL_LINE_SMOOTH                    0x0B20
#define GL_LINE_WIDTH                     0x0B21
#define GL_LINE_WIDTH_RANGE               0x0B22
#define GL_LINE_WIDTH_GRANULARITY         0x0B23
#define GL_POLYGON_MODE                   0x0B40
#define GL_POLYGON_SMOOTH                 0x0B41
#define GL_CULL_FACE                      0x0B44
#define GL_CULL_FACE_MODE                 0x0B45
#define GL_FRONT_FACE                     0x0B46
#define GL_DEPTH_RANGE                    0x0B70
#define GL_DEPTH_TEST                     0x0B71
#define GL_DEPTH_WRITEMASK                0x0B72
#define GL_DEPTH_CLEAR_VALUE              0x0B73
#define GL_DEPTH_FUNC                     0x0B74
#define GL_STENCIL_TEST                   0x0B90
#define GL_STENCIL_CLEAR_VALUE            0x0B91
#define GL_STENCIL_FUNC                   0x0B92
#define GL_STENCIL_VALUE_MASK             0x0B93
#define GL_STENCIL_FAIL                   0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL        0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS        0x0B96
#define GL_STENCIL_REF                    0x0B97
#define GL_STENCIL_WRITEMASK              0x0B98
#define GL_VIEWPORT                       0x0BA2
#define GL_DITHER                         0x0BD0
#define GL_BLEND_DST                      0x0BE0
#define GL_BLEND_SRC                      0x0BE1
#define GL_BLEND                          0x0BE2
#define GL_LOGIC_OP_MODE                  0x0BF0
#define GL_DRAW_BUFFER                    0x0C01
#define GL_READ_BUFFER                    0x0C02
#define GL_SCISSOR_BOX                    0x0C10
#define GL_SCISSOR_TEST                   0x0C11
#define GL_COLOR_CLEAR_VALUE              0x0C22
#define GL_COLOR_WRITEMASK                0x0C23
#define GL_DOUBLEBUFFER                   0x0C32
#define GL_STEREO                         0x0C33
#define GL_LINE_SMOOTH_HINT               0x0C52
#define GL_POLYGON_SMOOTH_HINT            0x0C53
#define GL_UNPACK_SWAP_BYTES              0x0CF0
#define GL_UNPACK_LSB_FIRST               0x0CF1
#define GL_UNPACK_ROW_LENGTH              0x0CF2
#define GL_UNPACK_SKIP_ROWS               0x0CF3
#define GL_UNPACK_SKIP_PIXELS             0x0CF4
#define GL_UNPACK_ALIGNMENT               0x0CF5
#define GL_PACK_SWAP_BYTES                0x0D00
#define GL_PACK_LSB_FIRST                 0x0D01
#define GL_PACK_ROW_LENGTH                0x0D02
#define GL_PACK_SKIP_ROWS                 0x0D03
#define GL_PACK_SKIP_PIXELS               0x0D04
#define GL_PACK_ALIGNMENT                 0x0D05
#define GL_MAX_TEXTURE_SIZE               0x0D33
#define GL_MAX_VIEWPORT_DIMS              0x0D3A
#define GL_SUBPIXEL_BITS                  0x0D50
#define GL_TEXTURE_1D                     0x0DE0
#define GL_TEXTURE_2D                     0x0DE1
#define GL_TEXTURE_WIDTH                  0x1000
#define GL_TEXTURE_HEIGHT                 0x1001
#define GL_TEXTURE_BORDER_COLOR           0x1004
#define GL_DONT_CARE                      0x1100
#define GL_FASTEST                        0x1101
#define GL_NICEST                         0x1102
#define GL_BYTE                           0x1400
#define GL_UNSIGNED_BYTE                  0x1401
#define GL_SHORT                          0x1402
#define GL_UNSIGNED_SHORT                 0x1403
#define GL_INT                            0x1404
#define GL_UNSIGNED_INT                   0x1405
#define GL_FLOAT                          0x1406
#define GL_STACK_OVERFLOW                 0x0503
#define GL_STACK_UNDERFLOW                0x0504
#define GL_CLEAR                          0x1500
#define GL_AND                            0x1501
#define GL_AND_REVERSE                    0x1502
#define GL_COPY                           0x1503
#define GL_AND_INVERTED                   0x1504
#define GL_NOOP                           0x1505
#define GL_XOR                            0x1506
#define GL_OR                             0x1507
#define GL_NOR                            0x1508
#define GL_EQUIV                          0x1509
#define GL_INVERT                         0x150A
#define GL_OR_REVERSE                     0x150B
#define GL_COPY_INVERTED                  0x150C
#define GL_OR_INVERTED                    0x150D
#define GL_NAND                           0x150E
#define GL_SET                            0x150F
#define GL_TEXTURE                        0x1702
#define GL_COLOR                          0x1800
#define GL_DEPTH                          0x1801
#define GL_STENCIL                        0x1802
#define GL_STENCIL_INDEX                  0x1901
#define GL_DEPTH_COMPONENT                0x1902
#define GL_RED                            0x1903
#define GL_GREEN                          0x1904
#define GL_BLUE                           0x1905
#define GL_ALPHA                          0x1906
#define GL_RGB                            0x1907
#define GL_RGBA                           0x1908
#define GL_POINT                          0x1B00
#define GL_LINE                           0x1B01
#define GL_FILL                           0x1B02
#define GL_KEEP                           0x1E00
#define GL_REPLACE                        0x1E01
#define GL_INCR                           0x1E02
#define GL_DECR                           0x1E03
#define GL_VENDOR                         0x1F00
#define GL_RENDERER                       0x1F01
#define GL_VERSION                        0x1F02
#define GL_EXTENSIONS                     0x1F03
#define GL_NEAREST                        0x2600
#define GL_LINEAR                         0x2601
#define GL_NEAREST_MIPMAP_NEAREST         0x2700
#define GL_LINEAR_MIPMAP_NEAREST          0x2701
#define GL_NEAREST_MIPMAP_LINEAR          0x2702
#define GL_LINEAR_MIPMAP_LINEAR           0x2703
#define GL_TEXTURE_MAG_FILTER             0x2800
#define GL_TEXTURE_MIN_FILTER             0x2801
#define GL_TEXTURE_WRAP_S                 0x2802
#define GL_TEXTURE_WRAP_T                 0x2803
#define GL_REPEAT                         0x2901
    typedef void (APIENTRYP PFNGLCULLFACEPROC) (GLenum mode);
    typedef void (APIENTRYP PFNGLFRONTFACEPROC) (GLenum mode);
    typedef void (APIENTRYP PFNGLHINTPROC) (GLenum target, GLenum mode);
    typedef void (APIENTRYP PFNGLLINEWIDTHPROC) (GLfloat width);
    typedef void (APIENTRYP PFNGLPOINTSIZEPROC) (GLfloat size);
    typedef void (APIENTRYP PFNGLPOLYGONMODEPROC) (GLenum face, GLenum mode);
    typedef void (APIENTRYP PFNGLSCISSORPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLTEXPARAMETERFPROC) (GLenum target, GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLTEXPARAMETERFVPROC) (GLenum target, GLenum pname, const GLfloat *params);
    typedef void (APIENTRYP PFNGLTEXPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLTEXPARAMETERIVPROC) (GLenum target, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLTEXIMAGE1DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXIMAGE2DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLDRAWBUFFERPROC) (GLenum buf);
    typedef void (APIENTRYP PFNGLCLEARPROC) (GLbitfield mask);
    typedef void (APIENTRYP PFNGLCLEARCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    typedef void (APIENTRYP PFNGLCLEARSTENCILPROC) (GLint s);
    typedef void (APIENTRYP PFNGLCLEARDEPTHPROC) (GLdouble depth);
    typedef void (APIENTRYP PFNGLSTENCILMASKPROC) (GLuint mask);
    typedef void (APIENTRYP PFNGLCOLORMASKPROC) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
    typedef void (APIENTRYP PFNGLDEPTHMASKPROC) (GLboolean flag);
    typedef void (APIENTRYP PFNGLDISABLEPROC) (GLenum cap);
    typedef void (APIENTRYP PFNGLENABLEPROC) (GLenum cap);
    typedef void (APIENTRYP PFNGLFINISHPROC) (void);
    typedef void (APIENTRYP PFNGLFLUSHPROC) (void);
    typedef void (APIENTRYP PFNGLBLENDFUNCPROC) (GLenum sfactor, GLenum dfactor);
    typedef void (APIENTRYP PFNGLLOGICOPPROC) (GLenum opcode);
    typedef void (APIENTRYP PFNGLSTENCILFUNCPROC) (GLenum func, GLint ref, GLuint mask);
    typedef void (APIENTRYP PFNGLSTENCILOPPROC) (GLenum fail, GLenum zfail, GLenum zpass);
    typedef void (APIENTRYP PFNGLDEPTHFUNCPROC) (GLenum func);
    typedef void (APIENTRYP PFNGLPIXELSTOREFPROC) (GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLPIXELSTOREIPROC) (GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLREADBUFFERPROC) (GLenum src);
    typedef void (APIENTRYP PFNGLREADPIXELSPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
    typedef void (APIENTRYP PFNGLGETBOOLEANVPROC) (GLenum pname, GLboolean *data);
    typedef void (APIENTRYP PFNGLGETDOUBLEVPROC) (GLenum pname, GLdouble *data);
    typedef GLenum(APIENTRYP PFNGLGETERRORPROC) (void);
    typedef void (APIENTRYP PFNGLGETFLOATVPROC) (GLenum pname, GLfloat *data);
    typedef void (APIENTRYP PFNGLGETINTEGERVPROC) (GLenum pname, GLint *data);
    typedef const GLubyte *(APIENTRYP PFNGLGETSTRINGPROC) (GLenum name);
    typedef void (APIENTRYP PFNGLGETTEXIMAGEPROC) (GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
    typedef void (APIENTRYP PFNGLGETTEXPARAMETERFVPROC) (GLenum target, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETTEXPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETTEXLEVELPARAMETERFVPROC) (GLenum target, GLint level, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETTEXLEVELPARAMETERIVPROC) (GLenum target, GLint level, GLenum pname, GLint *params);
    typedef GLboolean(APIENTRYP PFNGLISENABLEDPROC) (GLenum cap);
    typedef void (APIENTRYP PFNGLDEPTHRANGEPROC) (GLdouble near, GLdouble far);
    typedef void (APIENTRYP PFNGLVIEWPORTPROC) (GLint x, GLint y, GLsizei width, GLsizei height);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glCullFace(GLenum mode);
    GLAPI void APIENTRY glFrontFace(GLenum mode);
    GLAPI void APIENTRY glHint(GLenum target, GLenum mode);
    GLAPI void APIENTRY glLineWidth(GLfloat width);
    GLAPI void APIENTRY glPointSize(GLfloat size);
    GLAPI void APIENTRY glPolygonMode(GLenum face, GLenum mode);
    GLAPI void APIENTRY glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glTexParameterf(GLenum target, GLenum pname, GLfloat param);
    GLAPI void APIENTRY glTexParameterfv(GLenum target, GLenum pname, const GLfloat *params);
    GLAPI void APIENTRY glTexParameteri(GLenum target, GLenum pname, GLint param);
    GLAPI void APIENTRY glTexParameteriv(GLenum target, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glDrawBuffer(GLenum buf);
    GLAPI void APIENTRY glClear(GLbitfield mask);
    GLAPI void APIENTRY glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    GLAPI void APIENTRY glClearStencil(GLint s);
    GLAPI void APIENTRY glClearDepth(GLdouble depth);
    GLAPI void APIENTRY glStencilMask(GLuint mask);
    GLAPI void APIENTRY glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
    GLAPI void APIENTRY glDepthMask(GLboolean flag);
    GLAPI void APIENTRY glDisable(GLenum cap);
    GLAPI void APIENTRY glEnable(GLenum cap);
    GLAPI void APIENTRY glFinish(void);
    GLAPI void APIENTRY glFlush(void);
    GLAPI void APIENTRY glBlendFunc(GLenum sfactor, GLenum dfactor);
    GLAPI void APIENTRY glLogicOp(GLenum opcode);
    GLAPI void APIENTRY glStencilFunc(GLenum func, GLint ref, GLuint mask);
    GLAPI void APIENTRY glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
    GLAPI void APIENTRY glDepthFunc(GLenum func);
    GLAPI void APIENTRY glPixelStoref(GLenum pname, GLfloat param);
    GLAPI void APIENTRY glPixelStorei(GLenum pname, GLint param);
    GLAPI void APIENTRY glReadBuffer(GLenum src);
    GLAPI void APIENTRY glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void *pixels);
    GLAPI void APIENTRY glGetBooleanv(GLenum pname, GLboolean *data);
    GLAPI void APIENTRY glGetDoublev(GLenum pname, GLdouble *data);
    GLAPI GLenum APIENTRY glGetError(void);
    GLAPI void APIENTRY glGetFloatv(GLenum pname, GLfloat *data);
    GLAPI void APIENTRY glGetIntegerv(GLenum pname, GLint *data);
    GLAPI const GLubyte *APIENTRY glGetString(GLenum name);
    GLAPI void APIENTRY glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
    GLAPI void APIENTRY glGetTexParameterfv(GLenum target, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetTexParameteriv(GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint *params);
    GLAPI GLboolean APIENTRY glIsEnabled(GLenum cap);
    GLAPI void APIENTRY glDepthRange(GLdouble near, GLdouble far);
    GLAPI void APIENTRY glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
#endif
#endif /* GL_VERSION_1_0 */

#ifndef GL_VERSION_1_1
#define GL_VERSION_1_1 1
    typedef float GLclampf;
    typedef double GLclampd;
#define GL_COLOR_LOGIC_OP                 0x0BF2
#define GL_POLYGON_OFFSET_UNITS           0x2A00
#define GL_POLYGON_OFFSET_POINT           0x2A01
#define GL_POLYGON_OFFSET_LINE            0x2A02
#define GL_POLYGON_OFFSET_FILL            0x8037
#define GL_POLYGON_OFFSET_FACTOR          0x8038
#define GL_TEXTURE_BINDING_1D             0x8068
#define GL_TEXTURE_BINDING_2D             0x8069
#define GL_TEXTURE_INTERNAL_FORMAT        0x1003
#define GL_TEXTURE_RED_SIZE               0x805C
#define GL_TEXTURE_GREEN_SIZE             0x805D
#define GL_TEXTURE_BLUE_SIZE              0x805E
#define GL_TEXTURE_ALPHA_SIZE             0x805F
#define GL_DOUBLE                         0x140A
#define GL_PROXY_TEXTURE_1D               0x8063
#define GL_PROXY_TEXTURE_2D               0x8064
#define GL_R3_G3_B2                       0x2A10
#define GL_RGB4                           0x804F
#define GL_RGB5                           0x8050
#define GL_RGB8                           0x8051
#define GL_RGB10                          0x8052
#define GL_RGB12                          0x8053
#define GL_RGB16                          0x8054
#define GL_RGBA2                          0x8055
#define GL_RGBA4                          0x8056
#define GL_RGB5_A1                        0x8057
#define GL_RGBA8                          0x8058
#define GL_RGB10_A2                       0x8059
#define GL_RGBA12                         0x805A
#define GL_RGBA16                         0x805B
#define GL_VERTEX_ARRAY                   0x8074
    typedef void (APIENTRYP PFNGLDRAWARRAYSPROC) (GLenum mode, GLint first, GLsizei count);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices);
    typedef void (APIENTRYP PFNGLGETPOINTERVPROC) (GLenum pname, void **params);
    typedef void (APIENTRYP PFNGLPOLYGONOFFSETPROC) (GLfloat factor, GLfloat units);
    typedef void (APIENTRYP PFNGLCOPYTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    typedef void (APIENTRYP PFNGLCOPYTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLBINDTEXTUREPROC) (GLenum target, GLuint texture);
    typedef void (APIENTRYP PFNGLDELETETEXTURESPROC) (GLsizei n, const GLuint *textures);
    typedef void (APIENTRYP PFNGLGENTEXTURESPROC) (GLsizei n, GLuint *textures);
    typedef GLboolean(APIENTRYP PFNGLISTEXTUREPROC) (GLuint texture);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawArrays(GLenum mode, GLint first, GLsizei count);
    GLAPI void APIENTRY glDrawElements(GLenum mode, GLsizei count, GLenum type, const void *indices);
    GLAPI void APIENTRY glGetPointerv(GLenum pname, void **params);
    GLAPI void APIENTRY glPolygonOffset(GLfloat factor, GLfloat units);
    GLAPI void APIENTRY glCopyTexImage1D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    GLAPI void APIENTRY glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    GLAPI void APIENTRY glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    GLAPI void APIENTRY glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glBindTexture(GLenum target, GLuint texture);
    GLAPI void APIENTRY glDeleteTextures(GLsizei n, const GLuint *textures);
    GLAPI void APIENTRY glGenTextures(GLsizei n, GLuint *textures);
    GLAPI GLboolean APIENTRY glIsTexture(GLuint texture);
#endif
#endif /* GL_VERSION_1_1 */

#ifndef GL_VERSION_1_2
#define GL_VERSION_1_2 1
#define GL_UNSIGNED_BYTE_3_3_2            0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4         0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1         0x8034
#define GL_UNSIGNED_INT_8_8_8_8           0x8035
#define GL_UNSIGNED_INT_10_10_10_2        0x8036
#define GL_TEXTURE_BINDING_3D             0x806A
#define GL_PACK_SKIP_IMAGES               0x806B
#define GL_PACK_IMAGE_HEIGHT              0x806C
#define GL_UNPACK_SKIP_IMAGES             0x806D
#define GL_UNPACK_IMAGE_HEIGHT            0x806E
#define GL_TEXTURE_3D                     0x806F
#define GL_PROXY_TEXTURE_3D               0x8070
#define GL_TEXTURE_DEPTH                  0x8071
#define GL_TEXTURE_WRAP_R                 0x8072
#define GL_MAX_3D_TEXTURE_SIZE            0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV        0x8362
#define GL_UNSIGNED_SHORT_5_6_5           0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV       0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV     0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV     0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV       0x8367
#define GL_UNSIGNED_INT_2_10_10_10_REV    0x8368
#define GL_BGR                            0x80E0
#define GL_BGRA                           0x80E1
#define GL_MAX_ELEMENTS_VERTICES          0x80E8
#define GL_MAX_ELEMENTS_INDICES           0x80E9
#define GL_CLAMP_TO_EDGE                  0x812F
#define GL_TEXTURE_MIN_LOD                0x813A
#define GL_TEXTURE_MAX_LOD                0x813B
#define GL_TEXTURE_BASE_LEVEL             0x813C
#define GL_TEXTURE_MAX_LEVEL              0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE        0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY  0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE        0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY  0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE       0x846E
    typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
    typedef void (APIENTRYP PFNGLTEXIMAGE3DPROC) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLCOPYTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices);
    GLAPI void APIENTRY glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
#endif
#endif /* GL_VERSION_1_2 */

#ifndef GL_VERSION_1_3
#define GL_VERSION_1_3 1
#define GL_TEXTURE0                       0x84C0
#define GL_TEXTURE1                       0x84C1
#define GL_TEXTURE2                       0x84C2
#define GL_TEXTURE3                       0x84C3
#define GL_TEXTURE4                       0x84C4
#define GL_TEXTURE5                       0x84C5
#define GL_TEXTURE6                       0x84C6
#define GL_TEXTURE7                       0x84C7
#define GL_TEXTURE8                       0x84C8
#define GL_TEXTURE9                       0x84C9
#define GL_TEXTURE10                      0x84CA
#define GL_TEXTURE11                      0x84CB
#define GL_TEXTURE12                      0x84CC
#define GL_TEXTURE13                      0x84CD
#define GL_TEXTURE14                      0x84CE
#define GL_TEXTURE15                      0x84CF
#define GL_TEXTURE16                      0x84D0
#define GL_TEXTURE17                      0x84D1
#define GL_TEXTURE18                      0x84D2
#define GL_TEXTURE19                      0x84D3
#define GL_TEXTURE20                      0x84D4
#define GL_TEXTURE21                      0x84D5
#define GL_TEXTURE22                      0x84D6
#define GL_TEXTURE23                      0x84D7
#define GL_TEXTURE24                      0x84D8
#define GL_TEXTURE25                      0x84D9
#define GL_TEXTURE26                      0x84DA
#define GL_TEXTURE27                      0x84DB
#define GL_TEXTURE28                      0x84DC
#define GL_TEXTURE29                      0x84DD
#define GL_TEXTURE30                      0x84DE
#define GL_TEXTURE31                      0x84DF
#define GL_ACTIVE_TEXTURE                 0x84E0
#define GL_MULTISAMPLE                    0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE       0x809E
#define GL_SAMPLE_ALPHA_TO_ONE            0x809F
#define GL_SAMPLE_COVERAGE                0x80A0
#define GL_SAMPLE_BUFFERS                 0x80A8
#define GL_SAMPLES                        0x80A9
#define GL_SAMPLE_COVERAGE_VALUE          0x80AA
#define GL_SAMPLE_COVERAGE_INVERT         0x80AB
#define GL_TEXTURE_CUBE_MAP               0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP       0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X    0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X    0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y    0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y    0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z    0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z    0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP         0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE      0x851C
#define GL_COMPRESSED_RGB                 0x84ED
#define GL_COMPRESSED_RGBA                0x84EE
#define GL_TEXTURE_COMPRESSION_HINT       0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE  0x86A0
#define GL_TEXTURE_COMPRESSED             0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS     0x86A3
#define GL_CLAMP_TO_BORDER                0x812D
    typedef void (APIENTRYP PFNGLACTIVETEXTUREPROC) (GLenum texture);
    typedef void (APIENTRYP PFNGLSAMPLECOVERAGEPROC) (GLfloat value, GLboolean invert);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE3DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE2DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXIMAGE1DPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint level, void *img);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glActiveTexture(GLenum texture);
    GLAPI void APIENTRY glSampleCoverage(GLfloat value, GLboolean invert);
    GLAPI void APIENTRY glCompressedTexImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCompressedTexImage1D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCompressedTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glGetCompressedTexImage(GLenum target, GLint level, void *img);
#endif
#endif /* GL_VERSION_1_3 */

#ifndef GL_VERSION_1_4
#define GL_VERSION_1_4 1
#define GL_BLEND_DST_RGB                  0x80C8
#define GL_BLEND_SRC_RGB                  0x80C9
#define GL_BLEND_DST_ALPHA                0x80CA
#define GL_BLEND_SRC_ALPHA                0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE      0x8128
#define GL_DEPTH_COMPONENT16              0x81A5
#define GL_DEPTH_COMPONENT24              0x81A6
#define GL_DEPTH_COMPONENT32              0x81A7
#define GL_MIRRORED_REPEAT                0x8370
#define GL_MAX_TEXTURE_LOD_BIAS           0x84FD
#define GL_TEXTURE_LOD_BIAS               0x8501
#define GL_INCR_WRAP                      0x8507
#define GL_DECR_WRAP                      0x8508
#define GL_TEXTURE_DEPTH_SIZE             0x884A
#define GL_TEXTURE_COMPARE_MODE           0x884C
#define GL_TEXTURE_COMPARE_FUNC           0x884D
#define GL_FUNC_ADD                       0x8006
#define GL_FUNC_SUBTRACT                  0x800A
#define GL_FUNC_REVERSE_SUBTRACT          0x800B
#define GL_MIN                            0x8007
#define GL_MAX                            0x8008
#define GL_CONSTANT_COLOR                 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR       0x8002
#define GL_CONSTANT_ALPHA                 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA       0x8004
    typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEPROC) (GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
    typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
    typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
    typedef void (APIENTRYP PFNGLPOINTPARAMETERFPROC) (GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLPOINTPARAMETERFVPROC) (GLenum pname, const GLfloat *params);
    typedef void (APIENTRYP PFNGLPOINTPARAMETERIPROC) (GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLPOINTPARAMETERIVPROC) (GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLBLENDCOLORPROC) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    typedef void (APIENTRYP PFNGLBLENDEQUATIONPROC) (GLenum mode);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
    GLAPI void APIENTRY glMultiDrawArrays(GLenum mode, const GLint *first, const GLsizei *count, GLsizei drawcount);
    GLAPI void APIENTRY glMultiDrawElements(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount);
    GLAPI void APIENTRY glPointParameterf(GLenum pname, GLfloat param);
    GLAPI void APIENTRY glPointParameterfv(GLenum pname, const GLfloat *params);
    GLAPI void APIENTRY glPointParameteri(GLenum pname, GLint param);
    GLAPI void APIENTRY glPointParameteriv(GLenum pname, const GLint *params);
    GLAPI void APIENTRY glBlendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
    GLAPI void APIENTRY glBlendEquation(GLenum mode);
#endif
#endif /* GL_VERSION_1_4 */

#ifndef GL_VERSION_1_5
#define GL_VERSION_1_5 1
#include <stddef.h>
    typedef ptrdiff_t GLsizeiptr;
    typedef ptrdiff_t GLintptr;
#define GL_BUFFER_SIZE                    0x8764
#define GL_BUFFER_USAGE                   0x8765
#define GL_QUERY_COUNTER_BITS             0x8864
#define GL_CURRENT_QUERY                  0x8865
#define GL_QUERY_RESULT                   0x8866
#define GL_QUERY_RESULT_AVAILABLE         0x8867
#define GL_ARRAY_BUFFER                   0x8892
#define GL_ELEMENT_ARRAY_BUFFER           0x8893
#define GL_ARRAY_BUFFER_BINDING           0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING   0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY                      0x88B8
#define GL_WRITE_ONLY                     0x88B9
#define GL_READ_WRITE                     0x88BA
#define GL_BUFFER_ACCESS                  0x88BB
#define GL_BUFFER_MAPPED                  0x88BC
#define GL_BUFFER_MAP_POINTER             0x88BD
#define GL_STREAM_DRAW                    0x88E0
#define GL_STREAM_READ                    0x88E1
#define GL_STREAM_COPY                    0x88E2
#define GL_STATIC_DRAW                    0x88E4
#define GL_STATIC_READ                    0x88E5
#define GL_STATIC_COPY                    0x88E6
#define GL_DYNAMIC_DRAW                   0x88E8
#define GL_DYNAMIC_READ                   0x88E9
#define GL_DYNAMIC_COPY                   0x88EA
#define GL_SAMPLES_PASSED                 0x8914
#define GL_SRC1_ALPHA                     0x8589
    typedef void (APIENTRYP PFNGLGENQUERIESPROC) (GLsizei n, GLuint *ids);
    typedef void (APIENTRYP PFNGLDELETEQUERIESPROC) (GLsizei n, const GLuint *ids);
    typedef GLboolean(APIENTRYP PFNGLISQUERYPROC) (GLuint id);
    typedef void (APIENTRYP PFNGLBEGINQUERYPROC) (GLenum target, GLuint id);
    typedef void (APIENTRYP PFNGLENDQUERYPROC) (GLenum target);
    typedef void (APIENTRYP PFNGLGETQUERYIVPROC) (GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETQUERYOBJECTIVPROC) (GLuint id, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETQUERYOBJECTUIVPROC) (GLuint id, GLenum pname, GLuint *params);
    typedef void (APIENTRYP PFNGLBINDBUFFERPROC) (GLenum target, GLuint buffer);
    typedef void (APIENTRYP PFNGLDELETEBUFFERSPROC) (GLsizei n, const GLuint *buffers);
    typedef void (APIENTRYP PFNGLGENBUFFERSPROC) (GLsizei n, GLuint *buffers);
    typedef GLboolean(APIENTRYP PFNGLISBUFFERPROC) (GLuint buffer);
    typedef void (APIENTRYP PFNGLBUFFERDATAPROC) (GLenum target, GLsizeiptr size, const void *data, GLenum usage);
    typedef void (APIENTRYP PFNGLBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
    typedef void (APIENTRYP PFNGLGETBUFFERSUBDATAPROC) (GLenum target, GLintptr offset, GLsizeiptr size, void *data);
    typedef void *(APIENTRYP PFNGLMAPBUFFERPROC) (GLenum target, GLenum access);
    typedef GLboolean(APIENTRYP PFNGLUNMAPBUFFERPROC) (GLenum target);
    typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETBUFFERPOINTERVPROC) (GLenum target, GLenum pname, void **params);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glGenQueries(GLsizei n, GLuint *ids);
    GLAPI void APIENTRY glDeleteQueries(GLsizei n, const GLuint *ids);
    GLAPI GLboolean APIENTRY glIsQuery(GLuint id);
    GLAPI void APIENTRY glBeginQuery(GLenum target, GLuint id);
    GLAPI void APIENTRY glEndQuery(GLenum target);
    GLAPI void APIENTRY glGetQueryiv(GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetQueryObjectiv(GLuint id, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params);
    GLAPI void APIENTRY glBindBuffer(GLenum target, GLuint buffer);
    GLAPI void APIENTRY glDeleteBuffers(GLsizei n, const GLuint *buffers);
    GLAPI void APIENTRY glGenBuffers(GLsizei n, GLuint *buffers);
    GLAPI GLboolean APIENTRY glIsBuffer(GLuint buffer);
    GLAPI void APIENTRY glBufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage);
    GLAPI void APIENTRY glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data);
    GLAPI void APIENTRY glGetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void *data);
    GLAPI void *APIENTRY glMapBuffer(GLenum target, GLenum access);
    GLAPI GLboolean APIENTRY glUnmapBuffer(GLenum target);
    GLAPI void APIENTRY glGetBufferParameteriv(GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetBufferPointerv(GLenum target, GLenum pname, void **params);
#endif
#endif /* GL_VERSION_1_5 */

#ifndef GL_VERSION_2_0
#define GL_VERSION_2_0 1
    typedef char GLchar;
    typedef short GLshort;
    typedef signed char GLbyte;
    typedef unsigned short GLushort;
#define GL_BLEND_EQUATION_RGB             0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED    0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE       0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE     0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE       0x8625
#define GL_CURRENT_VERTEX_ATTRIB          0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE      0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER    0x8645
#define GL_STENCIL_BACK_FUNC              0x8800
#define GL_STENCIL_BACK_FAIL              0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL   0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS   0x8803
#define GL_MAX_DRAW_BUFFERS               0x8824
#define GL_DRAW_BUFFER0                   0x8825
#define GL_DRAW_BUFFER1                   0x8826
#define GL_DRAW_BUFFER2                   0x8827
#define GL_DRAW_BUFFER3                   0x8828
#define GL_DRAW_BUFFER4                   0x8829
#define GL_DRAW_BUFFER5                   0x882A
#define GL_DRAW_BUFFER6                   0x882B
#define GL_DRAW_BUFFER7                   0x882C
#define GL_DRAW_BUFFER8                   0x882D
#define GL_DRAW_BUFFER9                   0x882E
#define GL_DRAW_BUFFER10                  0x882F
#define GL_DRAW_BUFFER11                  0x8830
#define GL_DRAW_BUFFER12                  0x8831
#define GL_DRAW_BUFFER13                  0x8832
#define GL_DRAW_BUFFER14                  0x8833
#define GL_DRAW_BUFFER15                  0x8834
#define GL_BLEND_EQUATION_ALPHA           0x883D
#define GL_MAX_VERTEX_ATTRIBS             0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS        0x8872
#define GL_FRAGMENT_SHADER                0x8B30
#define GL_VERTEX_SHADER                  0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS  0x8B4A
#define GL_MAX_VARYING_FLOATS             0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE                    0x8B4F
#define GL_FLOAT_VEC2                     0x8B50
#define GL_FLOAT_VEC3                     0x8B51
#define GL_FLOAT_VEC4                     0x8B52
#define GL_INT_VEC2                       0x8B53
#define GL_INT_VEC3                       0x8B54
#define GL_INT_VEC4                       0x8B55
#define GL_BOOL                           0x8B56
#define GL_BOOL_VEC2                      0x8B57
#define GL_BOOL_VEC3                      0x8B58
#define GL_BOOL_VEC4                      0x8B59
#define GL_FLOAT_MAT2                     0x8B5A
#define GL_FLOAT_MAT3                     0x8B5B
#define GL_FLOAT_MAT4                     0x8B5C
#define GL_SAMPLER_1D                     0x8B5D
#define GL_SAMPLER_2D                     0x8B5E
#define GL_SAMPLER_3D                     0x8B5F
#define GL_SAMPLER_CUBE                   0x8B60
#define GL_SAMPLER_1D_SHADOW              0x8B61
#define GL_SAMPLER_2D_SHADOW              0x8B62
#define GL_DELETE_STATUS                  0x8B80
#define GL_COMPILE_STATUS                 0x8B81
#define GL_LINK_STATUS                    0x8B82
#define GL_VALIDATE_STATUS                0x8B83
#define GL_INFO_LOG_LENGTH                0x8B84
#define GL_ATTACHED_SHADERS               0x8B85
#define GL_ACTIVE_UNIFORMS                0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH      0x8B87
#define GL_SHADER_SOURCE_LENGTH           0x8B88
#define GL_ACTIVE_ATTRIBUTES              0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH    0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION       0x8B8C
#define GL_CURRENT_PROGRAM                0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN      0x8CA0
#define GL_LOWER_LEFT                     0x8CA1
#define GL_UPPER_LEFT                     0x8CA2
#define GL_STENCIL_BACK_REF               0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK        0x8CA4
#define GL_STENCIL_BACK_WRITEMASK         0x8CA5
    typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEPROC) (GLenum modeRGB, GLenum modeAlpha);
    typedef void (APIENTRYP PFNGLDRAWBUFFERSPROC) (GLsizei n, const GLenum *bufs);
    typedef void (APIENTRYP PFNGLSTENCILOPSEPARATEPROC) (GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
    typedef void (APIENTRYP PFNGLSTENCILFUNCSEPARATEPROC) (GLenum face, GLenum func, GLint ref, GLuint mask);
    typedef void (APIENTRYP PFNGLSTENCILMASKSEPARATEPROC) (GLenum face, GLuint mask);
    typedef void (APIENTRYP PFNGLATTACHSHADERPROC) (GLuint program, GLuint shader);
    typedef void (APIENTRYP PFNGLBINDATTRIBLOCATIONPROC) (GLuint program, GLuint index, const GLchar *name);
    typedef void (APIENTRYP PFNGLCOMPILESHADERPROC) (GLuint shader);
    typedef GLuint(APIENTRYP PFNGLCREATEPROGRAMPROC) (void);
    typedef GLuint(APIENTRYP PFNGLCREATESHADERPROC) (GLenum type);
    typedef void (APIENTRYP PFNGLDELETEPROGRAMPROC) (GLuint program);
    typedef void (APIENTRYP PFNGLDELETESHADERPROC) (GLuint shader);
    typedef void (APIENTRYP PFNGLDETACHSHADERPROC) (GLuint program, GLuint shader);
    typedef void (APIENTRYP PFNGLDISABLEVERTEXATTRIBARRAYPROC) (GLuint index);
    typedef void (APIENTRYP PFNGLENABLEVERTEXATTRIBARRAYPROC) (GLuint index);
    typedef void (APIENTRYP PFNGLGETACTIVEATTRIBPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    typedef void (APIENTRYP PFNGLGETATTACHEDSHADERSPROC) (GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
    typedef GLint(APIENTRYP PFNGLGETATTRIBLOCATIONPROC) (GLuint program, const GLchar *name);
    typedef void (APIENTRYP PFNGLGETPROGRAMIVPROC) (GLuint program, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETPROGRAMINFOLOGPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    typedef void (APIENTRYP PFNGLGETSHADERIVPROC) (GLuint shader, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETSHADERINFOLOGPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    typedef void (APIENTRYP PFNGLGETSHADERSOURCEPROC) (GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
    typedef GLint(APIENTRYP PFNGLGETUNIFORMLOCATIONPROC) (GLuint program, const GLchar *name);
    typedef void (APIENTRYP PFNGLGETUNIFORMFVPROC) (GLuint program, GLint location, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETUNIFORMIVPROC) (GLuint program, GLint location, GLint *params);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBDVPROC) (GLuint index, GLenum pname, GLdouble *params);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBFVPROC) (GLuint index, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIVPROC) (GLuint index, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBPOINTERVPROC) (GLuint index, GLenum pname, void **pointer);
    typedef GLboolean(APIENTRYP PFNGLISPROGRAMPROC) (GLuint program);
    typedef GLboolean(APIENTRYP PFNGLISSHADERPROC) (GLuint shader);
    typedef void (APIENTRYP PFNGLLINKPROGRAMPROC) (GLuint program);
    typedef void (APIENTRYP PFNGLSHADERSOURCEPROC) (GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
    typedef void (APIENTRYP PFNGLUSEPROGRAMPROC) (GLuint program);
    typedef void (APIENTRYP PFNGLUNIFORM1FPROC) (GLint location, GLfloat v0);
    typedef void (APIENTRYP PFNGLUNIFORM2FPROC) (GLint location, GLfloat v0, GLfloat v1);
    typedef void (APIENTRYP PFNGLUNIFORM3FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    typedef void (APIENTRYP PFNGLUNIFORM4FPROC) (GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    typedef void (APIENTRYP PFNGLUNIFORM1IPROC) (GLint location, GLint v0);
    typedef void (APIENTRYP PFNGLUNIFORM2IPROC) (GLint location, GLint v0, GLint v1);
    typedef void (APIENTRYP PFNGLUNIFORM3IPROC) (GLint location, GLint v0, GLint v1, GLint v2);
    typedef void (APIENTRYP PFNGLUNIFORM4IPROC) (GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    typedef void (APIENTRYP PFNGLUNIFORM1FVPROC) (GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORM2FVPROC) (GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORM3FVPROC) (GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORM4FVPROC) (GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORM1IVPROC) (GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLUNIFORM2IVPROC) (GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLUNIFORM3IVPROC) (GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLUNIFORM4IVPROC) (GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPROC) (GLuint program);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB1DPROC) (GLuint index, GLdouble x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB1DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB1FPROC) (GLuint index, GLfloat x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB1FVPROC) (GLuint index, const GLfloat *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB1SPROC) (GLuint index, GLshort x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB1SVPROC) (GLuint index, const GLshort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB2DPROC) (GLuint index, GLdouble x, GLdouble y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB2DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB2FPROC) (GLuint index, GLfloat x, GLfloat y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB2FVPROC) (GLuint index, const GLfloat *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB2SPROC) (GLuint index, GLshort x, GLshort y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB2SVPROC) (GLuint index, const GLshort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB3DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB3FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB3FVPROC) (GLuint index, const GLfloat *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB3SPROC) (GLuint index, GLshort x, GLshort y, GLshort z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB3SVPROC) (GLuint index, const GLshort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4NBVPROC) (GLuint index, const GLbyte *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4NIVPROC) (GLuint index, const GLint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4NSVPROC) (GLuint index, const GLshort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBPROC) (GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUBVPROC) (GLuint index, const GLubyte *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUIVPROC) (GLuint index, const GLuint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4NUSVPROC) (GLuint index, const GLushort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4BVPROC) (GLuint index, const GLbyte *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4FPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4FVPROC) (GLuint index, const GLfloat *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4IVPROC) (GLuint index, const GLint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4SPROC) (GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4SVPROC) (GLuint index, const GLshort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4UBVPROC) (GLuint index, const GLubyte *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4UIVPROC) (GLuint index, const GLuint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIB4USVPROC) (GLuint index, const GLushort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBPOINTERPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
    GLAPI void APIENTRY glDrawBuffers(GLsizei n, const GLenum *bufs);
    GLAPI void APIENTRY glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
    GLAPI void APIENTRY glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
    GLAPI void APIENTRY glStencilMaskSeparate(GLenum face, GLuint mask);
    GLAPI void APIENTRY glAttachShader(GLuint program, GLuint shader);
    GLAPI void APIENTRY glBindAttribLocation(GLuint program, GLuint index, const GLchar *name);
    GLAPI void APIENTRY glCompileShader(GLuint shader);
    GLAPI GLuint APIENTRY glCreateProgram(void);
    GLAPI GLuint APIENTRY glCreateShader(GLenum type);
    GLAPI void APIENTRY glDeleteProgram(GLuint program);
    GLAPI void APIENTRY glDeleteShader(GLuint shader);
    GLAPI void APIENTRY glDetachShader(GLuint program, GLuint shader);
    GLAPI void APIENTRY glDisableVertexAttribArray(GLuint index);
    GLAPI void APIENTRY glEnableVertexAttribArray(GLuint index);
    GLAPI void APIENTRY glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    GLAPI void APIENTRY glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
    GLAPI void APIENTRY glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei *count, GLuint *shaders);
    GLAPI GLint APIENTRY glGetAttribLocation(GLuint program, const GLchar *name);
    GLAPI void APIENTRY glGetProgramiv(GLuint program, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    GLAPI void APIENTRY glGetShaderiv(GLuint shader, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    GLAPI void APIENTRY glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei *length, GLchar *source);
    GLAPI GLint APIENTRY glGetUniformLocation(GLuint program, const GLchar *name);
    GLAPI void APIENTRY glGetUniformfv(GLuint program, GLint location, GLfloat *params);
    GLAPI void APIENTRY glGetUniformiv(GLuint program, GLint location, GLint *params);
    GLAPI void APIENTRY glGetVertexAttribdv(GLuint index, GLenum pname, GLdouble *params);
    GLAPI void APIENTRY glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetVertexAttribiv(GLuint index, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetVertexAttribPointerv(GLuint index, GLenum pname, void **pointer);
    GLAPI GLboolean APIENTRY glIsProgram(GLuint program);
    GLAPI GLboolean APIENTRY glIsShader(GLuint shader);
    GLAPI void APIENTRY glLinkProgram(GLuint program);
    GLAPI void APIENTRY glShaderSource(GLuint shader, GLsizei count, const GLchar *const*string, const GLint *length);
    GLAPI void APIENTRY glUseProgram(GLuint program);
    GLAPI void APIENTRY glUniform1f(GLint location, GLfloat v0);
    GLAPI void APIENTRY glUniform2f(GLint location, GLfloat v0, GLfloat v1);
    GLAPI void APIENTRY glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    GLAPI void APIENTRY glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    GLAPI void APIENTRY glUniform1i(GLint location, GLint v0);
    GLAPI void APIENTRY glUniform2i(GLint location, GLint v0, GLint v1);
    GLAPI void APIENTRY glUniform3i(GLint location, GLint v0, GLint v1, GLint v2);
    GLAPI void APIENTRY glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    GLAPI void APIENTRY glUniform1fv(GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glUniform2fv(GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glUniform3fv(GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glUniform4fv(GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glUniform1iv(GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glUniform2iv(GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glUniform3iv(GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glUniform4iv(GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glValidateProgram(GLuint program);
    GLAPI void APIENTRY glVertexAttrib1d(GLuint index, GLdouble x);
    GLAPI void APIENTRY glVertexAttrib1dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttrib1f(GLuint index, GLfloat x);
    GLAPI void APIENTRY glVertexAttrib1fv(GLuint index, const GLfloat *v);
    GLAPI void APIENTRY glVertexAttrib1s(GLuint index, GLshort x);
    GLAPI void APIENTRY glVertexAttrib1sv(GLuint index, const GLshort *v);
    GLAPI void APIENTRY glVertexAttrib2d(GLuint index, GLdouble x, GLdouble y);
    GLAPI void APIENTRY glVertexAttrib2dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
    GLAPI void APIENTRY glVertexAttrib2fv(GLuint index, const GLfloat *v);
    GLAPI void APIENTRY glVertexAttrib2s(GLuint index, GLshort x, GLshort y);
    GLAPI void APIENTRY glVertexAttrib2sv(GLuint index, const GLshort *v);
    GLAPI void APIENTRY glVertexAttrib3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
    GLAPI void APIENTRY glVertexAttrib3dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
    GLAPI void APIENTRY glVertexAttrib3fv(GLuint index, const GLfloat *v);
    GLAPI void APIENTRY glVertexAttrib3s(GLuint index, GLshort x, GLshort y, GLshort z);
    GLAPI void APIENTRY glVertexAttrib3sv(GLuint index, const GLshort *v);
    GLAPI void APIENTRY glVertexAttrib4Nbv(GLuint index, const GLbyte *v);
    GLAPI void APIENTRY glVertexAttrib4Niv(GLuint index, const GLint *v);
    GLAPI void APIENTRY glVertexAttrib4Nsv(GLuint index, const GLshort *v);
    GLAPI void APIENTRY glVertexAttrib4Nub(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
    GLAPI void APIENTRY glVertexAttrib4Nubv(GLuint index, const GLubyte *v);
    GLAPI void APIENTRY glVertexAttrib4Nuiv(GLuint index, const GLuint *v);
    GLAPI void APIENTRY glVertexAttrib4Nusv(GLuint index, const GLushort *v);
    GLAPI void APIENTRY glVertexAttrib4bv(GLuint index, const GLbyte *v);
    GLAPI void APIENTRY glVertexAttrib4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    GLAPI void APIENTRY glVertexAttrib4dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    GLAPI void APIENTRY glVertexAttrib4fv(GLuint index, const GLfloat *v);
    GLAPI void APIENTRY glVertexAttrib4iv(GLuint index, const GLint *v);
    GLAPI void APIENTRY glVertexAttrib4s(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
    GLAPI void APIENTRY glVertexAttrib4sv(GLuint index, const GLshort *v);
    GLAPI void APIENTRY glVertexAttrib4ubv(GLuint index, const GLubyte *v);
    GLAPI void APIENTRY glVertexAttrib4uiv(GLuint index, const GLuint *v);
    GLAPI void APIENTRY glVertexAttrib4usv(GLuint index, const GLushort *v);
    GLAPI void APIENTRY glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void *pointer);
#endif
#endif /* GL_VERSION_2_0 */

#ifndef GL_VERSION_2_1
#define GL_VERSION_2_1 1
#define GL_PIXEL_PACK_BUFFER              0x88EB
#define GL_PIXEL_UNPACK_BUFFER            0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING      0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING    0x88EF
#define GL_FLOAT_MAT2x3                   0x8B65
#define GL_FLOAT_MAT2x4                   0x8B66
#define GL_FLOAT_MAT3x2                   0x8B67
#define GL_FLOAT_MAT3x4                   0x8B68
#define GL_FLOAT_MAT4x2                   0x8B69
#define GL_FLOAT_MAT4x3                   0x8B6A
#define GL_SRGB                           0x8C40
#define GL_SRGB8                          0x8C41
#define GL_SRGB_ALPHA                     0x8C42
#define GL_SRGB8_ALPHA8                   0x8C43
#define GL_COMPRESSED_SRGB                0x8C48
#define GL_COMPRESSED_SRGB_ALPHA          0x8C49
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3FVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
#endif
#endif /* GL_VERSION_2_1 */

#ifndef GL_VERSION_3_0
#define GL_VERSION_3_0 1
    typedef unsigned short GLhalf;
#define GL_COMPARE_REF_TO_TEXTURE         0x884E
#define GL_CLIP_DISTANCE0                 0x3000
#define GL_CLIP_DISTANCE1                 0x3001
#define GL_CLIP_DISTANCE2                 0x3002
#define GL_CLIP_DISTANCE3                 0x3003
#define GL_CLIP_DISTANCE4                 0x3004
#define GL_CLIP_DISTANCE5                 0x3005
#define GL_CLIP_DISTANCE6                 0x3006
#define GL_CLIP_DISTANCE7                 0x3007
#define GL_MAX_CLIP_DISTANCES             0x0D32
#define GL_MAJOR_VERSION                  0x821B
#define GL_MINOR_VERSION                  0x821C
#define GL_NUM_EXTENSIONS                 0x821D
#define GL_CONTEXT_FLAGS                  0x821E
#define GL_COMPRESSED_RED                 0x8225
#define GL_COMPRESSED_RG                  0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x00000001
#define GL_RGBA32F                        0x8814
#define GL_RGB32F                         0x8815
#define GL_RGBA16F                        0x881A
#define GL_RGB16F                         0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER    0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS       0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET       0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET       0x8905
#define GL_CLAMP_READ_COLOR               0x891C
#define GL_FIXED_ONLY                     0x891D
#define GL_MAX_VARYING_COMPONENTS         0x8B4B
#define GL_TEXTURE_1D_ARRAY               0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY         0x8C19
#define GL_TEXTURE_2D_ARRAY               0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY         0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY       0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY       0x8C1D
#define GL_R11F_G11F_B10F                 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV   0x8C3B
#define GL_RGB9_E5                        0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV       0x8C3E
#define GL_TEXTURE_SHARED_SIZE            0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS    0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED           0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD             0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS            0x8C8C
#define GL_SEPARATE_ATTRIBS               0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER      0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI                       0x8D70
#define GL_RGB32UI                        0x8D71
#define GL_RGBA16UI                       0x8D76
#define GL_RGB16UI                        0x8D77
#define GL_RGBA8UI                        0x8D7C
#define GL_RGB8UI                         0x8D7D
#define GL_RGBA32I                        0x8D82
#define GL_RGB32I                         0x8D83
#define GL_RGBA16I                        0x8D88
#define GL_RGB16I                         0x8D89
#define GL_RGBA8I                         0x8D8E
#define GL_RGB8I                          0x8D8F
#define GL_RED_INTEGER                    0x8D94
#define GL_GREEN_INTEGER                  0x8D95
#define GL_BLUE_INTEGER                   0x8D96
#define GL_RGB_INTEGER                    0x8D98
#define GL_RGBA_INTEGER                   0x8D99
#define GL_BGR_INTEGER                    0x8D9A
#define GL_BGRA_INTEGER                   0x8D9B
#define GL_SAMPLER_1D_ARRAY               0x8DC0
#define GL_SAMPLER_2D_ARRAY               0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW        0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW        0x8DC4
#define GL_SAMPLER_CUBE_SHADOW            0x8DC5
#define GL_UNSIGNED_INT_VEC2              0x8DC6
#define GL_UNSIGNED_INT_VEC3              0x8DC7
#define GL_UNSIGNED_INT_VEC4              0x8DC8
#define GL_INT_SAMPLER_1D                 0x8DC9
#define GL_INT_SAMPLER_2D                 0x8DCA
#define GL_INT_SAMPLER_3D                 0x8DCB
#define GL_INT_SAMPLER_CUBE               0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY           0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY           0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D        0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D        0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D        0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE      0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY  0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY  0x8DD7
#define GL_QUERY_WAIT                     0x8E13
#define GL_QUERY_NO_WAIT                  0x8E14
#define GL_QUERY_BY_REGION_WAIT           0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT        0x8E16
#define GL_BUFFER_ACCESS_FLAGS            0x911F
#define GL_BUFFER_MAP_LENGTH              0x9120
#define GL_BUFFER_MAP_OFFSET              0x9121
#define GL_DEPTH_COMPONENT32F             0x8CAC
#define GL_DEPTH32F_STENCIL8              0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_INVALID_FRAMEBUFFER_OPERATION  0x0506
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT            0x8218
#define GL_FRAMEBUFFER_UNDEFINED          0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT       0x821A
#define GL_MAX_RENDERBUFFER_SIZE          0x84E8
#define GL_DEPTH_STENCIL                  0x84F9
#define GL_UNSIGNED_INT_24_8              0x84FA
#define GL_DEPTH24_STENCIL8               0x88F0
#define GL_TEXTURE_STENCIL_SIZE           0x88F1
#define GL_TEXTURE_RED_TYPE               0x8C10
#define GL_TEXTURE_GREEN_TYPE             0x8C11
#define GL_TEXTURE_BLUE_TYPE              0x8C12
#define GL_TEXTURE_ALPHA_TYPE             0x8C13
#define GL_TEXTURE_DEPTH_TYPE             0x8C16
#define GL_UNSIGNED_NORMALIZED            0x8C17
#define GL_FRAMEBUFFER_BINDING            0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING       0x8CA6
#define GL_RENDERBUFFER_BINDING           0x8CA7
#define GL_READ_FRAMEBUFFER               0x8CA8
#define GL_DRAW_FRAMEBUFFER               0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING       0x8CAA
#define GL_RENDERBUFFER_SAMPLES           0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE           0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED        0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS          0x8CDF
#define GL_COLOR_ATTACHMENT0              0x8CE0
#define GL_COLOR_ATTACHMENT1              0x8CE1
#define GL_COLOR_ATTACHMENT2              0x8CE2
#define GL_COLOR_ATTACHMENT3              0x8CE3
#define GL_COLOR_ATTACHMENT4              0x8CE4
#define GL_COLOR_ATTACHMENT5              0x8CE5
#define GL_COLOR_ATTACHMENT6              0x8CE6
#define GL_COLOR_ATTACHMENT7              0x8CE7
#define GL_COLOR_ATTACHMENT8              0x8CE8
#define GL_COLOR_ATTACHMENT9              0x8CE9
#define GL_COLOR_ATTACHMENT10             0x8CEA
#define GL_COLOR_ATTACHMENT11             0x8CEB
#define GL_COLOR_ATTACHMENT12             0x8CEC
#define GL_COLOR_ATTACHMENT13             0x8CED
#define GL_COLOR_ATTACHMENT14             0x8CEE
#define GL_COLOR_ATTACHMENT15             0x8CEF
#define GL_COLOR_ATTACHMENT16             0x8CF0
#define GL_COLOR_ATTACHMENT17             0x8CF1
#define GL_COLOR_ATTACHMENT18             0x8CF2
#define GL_COLOR_ATTACHMENT19             0x8CF3
#define GL_COLOR_ATTACHMENT20             0x8CF4
#define GL_COLOR_ATTACHMENT21             0x8CF5
#define GL_COLOR_ATTACHMENT22             0x8CF6
#define GL_COLOR_ATTACHMENT23             0x8CF7
#define GL_COLOR_ATTACHMENT24             0x8CF8
#define GL_COLOR_ATTACHMENT25             0x8CF9
#define GL_COLOR_ATTACHMENT26             0x8CFA
#define GL_COLOR_ATTACHMENT27             0x8CFB
#define GL_COLOR_ATTACHMENT28             0x8CFC
#define GL_COLOR_ATTACHMENT29             0x8CFD
#define GL_COLOR_ATTACHMENT30             0x8CFE
#define GL_COLOR_ATTACHMENT31             0x8CFF
#define GL_DEPTH_ATTACHMENT               0x8D00
#define GL_STENCIL_ATTACHMENT             0x8D20
#define GL_FRAMEBUFFER                    0x8D40
#define GL_RENDERBUFFER                   0x8D41
#define GL_RENDERBUFFER_WIDTH             0x8D42
#define GL_RENDERBUFFER_HEIGHT            0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT   0x8D44
#define GL_STENCIL_INDEX1                 0x8D46
#define GL_STENCIL_INDEX4                 0x8D47
#define GL_STENCIL_INDEX8                 0x8D48
#define GL_STENCIL_INDEX16                0x8D49
#define GL_RENDERBUFFER_RED_SIZE          0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE        0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE         0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE        0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE        0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE      0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES                    0x8D57
#define GL_FRAMEBUFFER_SRGB               0x8DB9
#define GL_HALF_FLOAT                     0x140B
#define GL_MAP_READ_BIT                   0x0001
#define GL_MAP_WRITE_BIT                  0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT       0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT      0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT         0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT         0x0020
#define GL_COMPRESSED_RED_RGTC1           0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1    0x8DBC
#define GL_COMPRESSED_RG_RGTC2            0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2     0x8DBE
#define GL_RG                             0x8227
#define GL_RG_INTEGER                     0x8228
#define GL_R8                             0x8229
#define GL_R16                            0x822A
#define GL_RG8                            0x822B
#define GL_RG16                           0x822C
#define GL_R16F                           0x822D
#define GL_R32F                           0x822E
#define GL_RG16F                          0x822F
#define GL_RG32F                          0x8230
#define GL_R8I                            0x8231
#define GL_R8UI                           0x8232
#define GL_R16I                           0x8233
#define GL_R16UI                          0x8234
#define GL_R32I                           0x8235
#define GL_R32UI                          0x8236
#define GL_RG8I                           0x8237
#define GL_RG8UI                          0x8238
#define GL_RG16I                          0x8239
#define GL_RG16UI                         0x823A
#define GL_RG32I                          0x823B
#define GL_RG32UI                         0x823C
#define GL_VERTEX_ARRAY_BINDING           0x85B5
    typedef void (APIENTRYP PFNGLCOLORMASKIPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
    typedef void (APIENTRYP PFNGLGETBOOLEANI_VPROC) (GLenum target, GLuint index, GLboolean *data);
    typedef void (APIENTRYP PFNGLGETINTEGERI_VPROC) (GLenum target, GLuint index, GLint *data);
    typedef void (APIENTRYP PFNGLENABLEIPROC) (GLenum target, GLuint index);
    typedef void (APIENTRYP PFNGLDISABLEIPROC) (GLenum target, GLuint index);
    typedef GLboolean(APIENTRYP PFNGLISENABLEDIPROC) (GLenum target, GLuint index);
    typedef void (APIENTRYP PFNGLBEGINTRANSFORMFEEDBACKPROC) (GLenum primitiveMode);
    typedef void (APIENTRYP PFNGLENDTRANSFORMFEEDBACKPROC) (void);
    typedef void (APIENTRYP PFNGLBINDBUFFERRANGEPROC) (GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLBINDBUFFERBASEPROC) (GLenum target, GLuint index, GLuint buffer);
    typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKVARYINGSPROC) (GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
    typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) (GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
    typedef void (APIENTRYP PFNGLCLAMPCOLORPROC) (GLenum target, GLenum clamp);
    typedef void (APIENTRYP PFNGLBEGINCONDITIONALRENDERPROC) (GLuint id, GLenum mode);
    typedef void (APIENTRYP PFNGLENDCONDITIONALRENDERPROC) (void);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBIPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIIVPROC) (GLuint index, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBIUIVPROC) (GLuint index, GLenum pname, GLuint *params);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IPROC) (GLuint index, GLint x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IPROC) (GLuint index, GLint x, GLint y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IPROC) (GLuint index, GLint x, GLint y, GLint z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IPROC) (GLuint index, GLint x, GLint y, GLint z, GLint w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIPROC) (GLuint index, GLuint x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIPROC) (GLuint index, GLuint x, GLuint y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIPROC) (GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI1IVPROC) (GLuint index, const GLint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI2IVPROC) (GLuint index, const GLint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI3IVPROC) (GLuint index, const GLint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4IVPROC) (GLuint index, const GLint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI1UIVPROC) (GLuint index, const GLuint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI2UIVPROC) (GLuint index, const GLuint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI3UIVPROC) (GLuint index, const GLuint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UIVPROC) (GLuint index, const GLuint *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4BVPROC) (GLuint index, const GLbyte *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4SVPROC) (GLuint index, const GLshort *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4UBVPROC) (GLuint index, const GLubyte *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBI4USVPROC) (GLuint index, const GLushort *v);
    typedef void (APIENTRYP PFNGLGETUNIFORMUIVPROC) (GLuint program, GLint location, GLuint *params);
    typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONPROC) (GLuint program, GLuint color, const GLchar *name);
    typedef GLint(APIENTRYP PFNGLGETFRAGDATALOCATIONPROC) (GLuint program, const GLchar *name);
    typedef void (APIENTRYP PFNGLUNIFORM1UIPROC) (GLint location, GLuint v0);
    typedef void (APIENTRYP PFNGLUNIFORM2UIPROC) (GLint location, GLuint v0, GLuint v1);
    typedef void (APIENTRYP PFNGLUNIFORM3UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2);
    typedef void (APIENTRYP PFNGLUNIFORM4UIPROC) (GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    typedef void (APIENTRYP PFNGLUNIFORM1UIVPROC) (GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLUNIFORM2UIVPROC) (GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLUNIFORM3UIVPROC) (GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLUNIFORM4UIVPROC) (GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, const GLuint *params);
    typedef void (APIENTRYP PFNGLGETTEXPARAMETERIIVPROC) (GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETTEXPARAMETERIUIVPROC) (GLenum target, GLenum pname, GLuint *params);
    typedef void (APIENTRYP PFNGLCLEARBUFFERIVPROC) (GLenum buffer, GLint drawbuffer, const GLint *value);
    typedef void (APIENTRYP PFNGLCLEARBUFFERUIVPROC) (GLenum buffer, GLint drawbuffer, const GLuint *value);
    typedef void (APIENTRYP PFNGLCLEARBUFFERFVPROC) (GLenum buffer, GLint drawbuffer, const GLfloat *value);
    typedef void (APIENTRYP PFNGLCLEARBUFFERFIPROC) (GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
    typedef const GLubyte *(APIENTRYP PFNGLGETSTRINGIPROC) (GLenum name, GLuint index);
    typedef GLboolean(APIENTRYP PFNGLISRENDERBUFFERPROC) (GLuint renderbuffer);
    typedef void (APIENTRYP PFNGLBINDRENDERBUFFERPROC) (GLenum target, GLuint renderbuffer);
    typedef void (APIENTRYP PFNGLDELETERENDERBUFFERSPROC) (GLsizei n, const GLuint *renderbuffers);
    typedef void (APIENTRYP PFNGLGENRENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
    typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEPROC) (GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLGETRENDERBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
    typedef GLboolean(APIENTRYP PFNGLISFRAMEBUFFERPROC) (GLuint framebuffer);
    typedef void (APIENTRYP PFNGLBINDFRAMEBUFFERPROC) (GLenum target, GLuint framebuffer);
    typedef void (APIENTRYP PFNGLDELETEFRAMEBUFFERSPROC) (GLsizei n, const GLuint *framebuffers);
    typedef void (APIENTRYP PFNGLGENFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
    typedef GLenum(APIENTRYP PFNGLCHECKFRAMEBUFFERSTATUSPROC) (GLenum target);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE1DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE2DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURE3DPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERRENDERBUFFERPROC) (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    typedef void (APIENTRYP PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLenum target, GLenum attachment, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGENERATEMIPMAPPROC) (GLenum target);
    typedef void (APIENTRYP PFNGLBLITFRAMEBUFFERPROC) (GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    typedef void *(APIENTRYP PFNGLMAPBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    typedef void (APIENTRYP PFNGLFLUSHMAPPEDBUFFERRANGEPROC) (GLenum target, GLintptr offset, GLsizeiptr length);
    typedef void (APIENTRYP PFNGLBINDVERTEXARRAYPROC) (GLuint array);
    typedef void (APIENTRYP PFNGLDELETEVERTEXARRAYSPROC) (GLsizei n, const GLuint *arrays);
    typedef void (APIENTRYP PFNGLGENVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
    typedef GLboolean(APIENTRYP PFNGLISVERTEXARRAYPROC) (GLuint array);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glColorMaski(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
    GLAPI void APIENTRY glGetBooleani_v(GLenum target, GLuint index, GLboolean *data);
    GLAPI void APIENTRY glGetIntegeri_v(GLenum target, GLuint index, GLint *data);
    GLAPI void APIENTRY glEnablei(GLenum target, GLuint index);
    GLAPI void APIENTRY glDisablei(GLenum target, GLuint index);
    GLAPI GLboolean APIENTRY glIsEnabledi(GLenum target, GLuint index);
    GLAPI void APIENTRY glBeginTransformFeedback(GLenum primitiveMode);
    GLAPI void APIENTRY glEndTransformFeedback(void);
    GLAPI void APIENTRY glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    GLAPI void APIENTRY glBindBufferBase(GLenum target, GLuint index, GLuint buffer);
    GLAPI void APIENTRY glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar *const*varyings, GLenum bufferMode);
    GLAPI void APIENTRY glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
    GLAPI void APIENTRY glClampColor(GLenum target, GLenum clamp);
    GLAPI void APIENTRY glBeginConditionalRender(GLuint id, GLenum mode);
    GLAPI void APIENTRY glEndConditionalRender(void);
    GLAPI void APIENTRY glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
    GLAPI void APIENTRY glGetVertexAttribIiv(GLuint index, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint *params);
    GLAPI void APIENTRY glVertexAttribI1i(GLuint index, GLint x);
    GLAPI void APIENTRY glVertexAttribI2i(GLuint index, GLint x, GLint y);
    GLAPI void APIENTRY glVertexAttribI3i(GLuint index, GLint x, GLint y, GLint z);
    GLAPI void APIENTRY glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w);
    GLAPI void APIENTRY glVertexAttribI1ui(GLuint index, GLuint x);
    GLAPI void APIENTRY glVertexAttribI2ui(GLuint index, GLuint x, GLuint y);
    GLAPI void APIENTRY glVertexAttribI3ui(GLuint index, GLuint x, GLuint y, GLuint z);
    GLAPI void APIENTRY glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
    GLAPI void APIENTRY glVertexAttribI1iv(GLuint index, const GLint *v);
    GLAPI void APIENTRY glVertexAttribI2iv(GLuint index, const GLint *v);
    GLAPI void APIENTRY glVertexAttribI3iv(GLuint index, const GLint *v);
    GLAPI void APIENTRY glVertexAttribI4iv(GLuint index, const GLint *v);
    GLAPI void APIENTRY glVertexAttribI1uiv(GLuint index, const GLuint *v);
    GLAPI void APIENTRY glVertexAttribI2uiv(GLuint index, const GLuint *v);
    GLAPI void APIENTRY glVertexAttribI3uiv(GLuint index, const GLuint *v);
    GLAPI void APIENTRY glVertexAttribI4uiv(GLuint index, const GLuint *v);
    GLAPI void APIENTRY glVertexAttribI4bv(GLuint index, const GLbyte *v);
    GLAPI void APIENTRY glVertexAttribI4sv(GLuint index, const GLshort *v);
    GLAPI void APIENTRY glVertexAttribI4ubv(GLuint index, const GLubyte *v);
    GLAPI void APIENTRY glVertexAttribI4usv(GLuint index, const GLushort *v);
    GLAPI void APIENTRY glGetUniformuiv(GLuint program, GLint location, GLuint *params);
    GLAPI void APIENTRY glBindFragDataLocation(GLuint program, GLuint color, const GLchar *name);
    GLAPI GLint APIENTRY glGetFragDataLocation(GLuint program, const GLchar *name);
    GLAPI void APIENTRY glUniform1ui(GLint location, GLuint v0);
    GLAPI void APIENTRY glUniform2ui(GLint location, GLuint v0, GLuint v1);
    GLAPI void APIENTRY glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2);
    GLAPI void APIENTRY glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    GLAPI void APIENTRY glUniform1uiv(GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glUniform2uiv(GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glUniform3uiv(GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glUniform4uiv(GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glTexParameterIiv(GLenum target, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glTexParameterIuiv(GLenum target, GLenum pname, const GLuint *params);
    GLAPI void APIENTRY glGetTexParameterIiv(GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetTexParameterIuiv(GLenum target, GLenum pname, GLuint *params);
    GLAPI void APIENTRY glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint *value);
    GLAPI void APIENTRY glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint *value);
    GLAPI void APIENTRY glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat *value);
    GLAPI void APIENTRY glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
    GLAPI const GLubyte *APIENTRY glGetStringi(GLenum name, GLuint index);
    GLAPI GLboolean APIENTRY glIsRenderbuffer(GLuint renderbuffer);
    GLAPI void APIENTRY glBindRenderbuffer(GLenum target, GLuint renderbuffer);
    GLAPI void APIENTRY glDeleteRenderbuffers(GLsizei n, const GLuint *renderbuffers);
    GLAPI void APIENTRY glGenRenderbuffers(GLsizei n, GLuint *renderbuffers);
    GLAPI void APIENTRY glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params);
    GLAPI GLboolean APIENTRY glIsFramebuffer(GLuint framebuffer);
    GLAPI void APIENTRY glBindFramebuffer(GLenum target, GLuint framebuffer);
    GLAPI void APIENTRY glDeleteFramebuffers(GLsizei n, const GLuint *framebuffers);
    GLAPI void APIENTRY glGenFramebuffers(GLsizei n, GLuint *framebuffers);
    GLAPI GLenum APIENTRY glCheckFramebufferStatus(GLenum target);
    GLAPI void APIENTRY glFramebufferTexture1D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    GLAPI void APIENTRY glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    GLAPI void APIENTRY glFramebufferTexture3D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
    GLAPI void APIENTRY glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    GLAPI void APIENTRY glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGenerateMipmap(GLenum target);
    GLAPI void APIENTRY glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    GLAPI void APIENTRY glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    GLAPI void *APIENTRY glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
    GLAPI void APIENTRY glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length);
    GLAPI void APIENTRY glBindVertexArray(GLuint array);
    GLAPI void APIENTRY glDeleteVertexArrays(GLsizei n, const GLuint *arrays);
    GLAPI void APIENTRY glGenVertexArrays(GLsizei n, GLuint *arrays);
    GLAPI GLboolean APIENTRY glIsVertexArray(GLuint array);
#endif
#endif /* GL_VERSION_3_0 */

#ifndef GL_VERSION_3_1
#define GL_VERSION_3_1 1
#define GL_SAMPLER_2D_RECT                0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW         0x8B64
#define GL_SAMPLER_BUFFER                 0x8DC2
#define GL_INT_SAMPLER_2D_RECT            0x8DCD
#define GL_INT_SAMPLER_BUFFER             0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT   0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER    0x8DD8
#define GL_TEXTURE_BUFFER                 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE        0x8C2B
#define GL_TEXTURE_BINDING_BUFFER         0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_RECTANGLE              0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE      0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE        0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE     0x84F8
#define GL_R8_SNORM                       0x8F94
#define GL_RG8_SNORM                      0x8F95
#define GL_RGB8_SNORM                     0x8F96
#define GL_RGBA8_SNORM                    0x8F97
#define GL_R16_SNORM                      0x8F98
#define GL_RG16_SNORM                     0x8F99
#define GL_RGB16_SNORM                    0x8F9A
#define GL_RGBA16_SNORM                   0x8F9B
#define GL_SIGNED_NORMALIZED              0x8F9C
#define GL_PRIMITIVE_RESTART              0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX        0x8F9E
#define GL_COPY_READ_BUFFER               0x8F36
#define GL_COPY_WRITE_BUFFER              0x8F37
#define GL_UNIFORM_BUFFER                 0x8A11
#define GL_UNIFORM_BUFFER_BINDING         0x8A28
#define GL_UNIFORM_BUFFER_START           0x8A29
#define GL_UNIFORM_BUFFER_SIZE            0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS      0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS    0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS    0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS    0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS    0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE         0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS          0x8A36
#define GL_UNIFORM_TYPE                   0x8A37
#define GL_UNIFORM_SIZE                   0x8A38
#define GL_UNIFORM_NAME_LENGTH            0x8A39
#define GL_UNIFORM_BLOCK_INDEX            0x8A3A
#define GL_UNIFORM_OFFSET                 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE           0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE          0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR           0x8A3E
#define GL_UNIFORM_BLOCK_BINDING          0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE        0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH      0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS  0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX                  0xFFFFFFFFu
    typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
    typedef void (APIENTRYP PFNGLTEXBUFFERPROC) (GLenum target, GLenum internalformat, GLuint buffer);
    typedef void (APIENTRYP PFNGLPRIMITIVERESTARTINDEXPROC) (GLuint index);
    typedef void (APIENTRYP PFNGLCOPYBUFFERSUBDATAPROC) (GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLGETUNIFORMINDICESPROC) (GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
    typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMSIVPROC) (GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMNAMEPROC) (GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
    typedef GLuint(APIENTRYP PFNGLGETUNIFORMBLOCKINDEXPROC) (GLuint program, const GLchar *uniformBlockName);
    typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKIVPROC) (GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) (GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
    typedef void (APIENTRYP PFNGLUNIFORMBLOCKBINDINGPROC) (GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
    GLAPI void APIENTRY glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount);
    GLAPI void APIENTRY glTexBuffer(GLenum target, GLenum internalformat, GLuint buffer);
    GLAPI void APIENTRY glPrimitiveRestartIndex(GLuint index);
    GLAPI void APIENTRY glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    GLAPI void APIENTRY glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar *const*uniformNames, GLuint *uniformIndices);
    GLAPI void APIENTRY glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint *uniformIndices, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetActiveUniformName(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformName);
    GLAPI GLuint APIENTRY glGetUniformBlockIndex(GLuint program, const GLchar *uniformBlockName);
    GLAPI void APIENTRY glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei *length, GLchar *uniformBlockName);
    GLAPI void APIENTRY glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
#endif
#endif /* GL_VERSION_3_1 */

#ifndef GL_VERSION_3_2
#define GL_VERSION_3_2 1
    typedef struct __GLsync *GLsync;
#ifndef GLEXT_64_TYPES_DEFINED
    /* This code block is duplicated in glxext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
    /* Define int32_t, int64_t, and uint64_t types for UST/MSC */
    /* (as used in the GL_EXT_timer_query extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
    typedef long int int64_t;
    typedef unsigned long int uint64_t;
#else
    typedef long long int int64_t;
    typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
    typedef long int int32_t;
    typedef long long int int64_t;
    typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
    typedef __int32 int32_t;
    typedef __int64 int64_t;
    typedef unsigned __int64 uint64_t;
#else
    /* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif
    typedef uint64_t GLuint64;
    typedef int64_t GLint64;
#define GL_CONTEXT_CORE_PROFILE_BIT       0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY                0x000A
#define GL_LINE_STRIP_ADJACENCY           0x000B
#define GL_TRIANGLES_ADJACENCY            0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY       0x000D
#define GL_PROGRAM_POINT_SIZE             0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER                0x8DD9
#define GL_GEOMETRY_VERTICES_OUT          0x8916
#define GL_GEOMETRY_INPUT_TYPE            0x8917
#define GL_GEOMETRY_OUTPUT_TYPE           0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES   0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS   0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS  0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS  0x9125
#define GL_CONTEXT_PROFILE_MASK           0x9126
#define GL_DEPTH_CLAMP                    0x864F
#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION        0x8E4D
#define GL_LAST_VERTEX_CONVENTION         0x8E4E
#define GL_PROVOKING_VERTEX               0x8E4F
#define GL_TEXTURE_CUBE_MAP_SEAMLESS      0x884F
#define GL_MAX_SERVER_WAIT_TIMEOUT        0x9111
#define GL_OBJECT_TYPE                    0x9112
#define GL_SYNC_CONDITION                 0x9113
#define GL_SYNC_STATUS                    0x9114
#define GL_SYNC_FLAGS                     0x9115
#define GL_SYNC_FENCE                     0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE     0x9117
#define GL_UNSIGNALED                     0x9118
#define GL_SIGNALED                       0x9119
#define GL_ALREADY_SIGNALED               0x911A
#define GL_TIMEOUT_EXPIRED                0x911B
#define GL_CONDITION_SATISFIED            0x911C
#define GL_WAIT_FAILED                    0x911D
#define GL_TIMEOUT_IGNORED                0xFFFFFFFFFFFFFFFFull
#define GL_SYNC_FLUSH_COMMANDS_BIT        0x00000001
#define GL_SAMPLE_POSITION                0x8E50
#define GL_SAMPLE_MASK                    0x8E51
#define GL_SAMPLE_MASK_VALUE              0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS          0x8E59
#define GL_TEXTURE_2D_MULTISAMPLE         0x9100
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE   0x9101
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY   0x9102
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES                0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE         0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE     0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY   0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES      0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES      0x910F
#define GL_MAX_INTEGER_SAMPLES            0x9110
    typedef void (APIENTRYP PFNGLDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
    typedef void (APIENTRYP PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
    typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
    typedef void (APIENTRYP PFNGLPROVOKINGVERTEXPROC) (GLenum mode);
    typedef GLsync(APIENTRYP PFNGLFENCESYNCPROC) (GLenum condition, GLbitfield flags);
    typedef GLboolean(APIENTRYP PFNGLISSYNCPROC) (GLsync sync);
    typedef void (APIENTRYP PFNGLDELETESYNCPROC) (GLsync sync);
    typedef GLenum(APIENTRYP PFNGLCLIENTWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
    typedef void (APIENTRYP PFNGLWAITSYNCPROC) (GLsync sync, GLbitfield flags, GLuint64 timeout);
    typedef void (APIENTRYP PFNGLGETINTEGER64VPROC) (GLenum pname, GLint64 *data);
    typedef void (APIENTRYP PFNGLGETSYNCIVPROC) (GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
    typedef void (APIENTRYP PFNGLGETINTEGER64I_VPROC) (GLenum target, GLuint index, GLint64 *data);
    typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERI64VPROC) (GLenum target, GLenum pname, GLint64 *params);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLTEXIMAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLTEXIMAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLGETMULTISAMPLEFVPROC) (GLenum pname, GLuint index, GLfloat *val);
    typedef void (APIENTRYP PFNGLSAMPLEMASKIPROC) (GLuint maskNumber, GLbitfield mask);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawElementsBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
    GLAPI void APIENTRY glDrawRangeElementsBaseVertex(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
    GLAPI void APIENTRY glDrawElementsInstancedBaseVertex(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
    GLAPI void APIENTRY glMultiDrawElementsBaseVertex(GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei drawcount, const GLint *basevertex);
    GLAPI void APIENTRY glProvokingVertex(GLenum mode);
    GLAPI GLsync APIENTRY glFenceSync(GLenum condition, GLbitfield flags);
    GLAPI GLboolean APIENTRY glIsSync(GLsync sync);
    GLAPI void APIENTRY glDeleteSync(GLsync sync);
    GLAPI GLenum APIENTRY glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
    GLAPI void APIENTRY glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout);
    GLAPI void APIENTRY glGetInteger64v(GLenum pname, GLint64 *data);
    GLAPI void APIENTRY glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei *length, GLint *values);
    GLAPI void APIENTRY glGetInteger64i_v(GLenum target, GLuint index, GLint64 *data);
    GLAPI void APIENTRY glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64 *params);
    GLAPI void APIENTRY glFramebufferTexture(GLenum target, GLenum attachment, GLuint texture, GLint level);
    GLAPI void APIENTRY glTexImage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glTexImage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glGetMultisamplefv(GLenum pname, GLuint index, GLfloat *val);
    GLAPI void APIENTRY glSampleMaski(GLuint maskNumber, GLbitfield mask);
#endif
#endif /* GL_VERSION_3_2 */

#ifndef GL_VERSION_3_3
#define GL_VERSION_3_3 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR    0x88FE
#define GL_SRC1_COLOR                     0x88F9
#define GL_ONE_MINUS_SRC1_COLOR           0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA           0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS   0x88FC
#define GL_ANY_SAMPLES_PASSED             0x8C2F
#define GL_SAMPLER_BINDING                0x8919
#define GL_RGB10_A2UI                     0x906F
#define GL_TEXTURE_SWIZZLE_R              0x8E42
#define GL_TEXTURE_SWIZZLE_G              0x8E43
#define GL_TEXTURE_SWIZZLE_B              0x8E44
#define GL_TEXTURE_SWIZZLE_A              0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA           0x8E46
#define GL_TIME_ELAPSED                   0x88BF
#define GL_TIMESTAMP                      0x8E28
#define GL_INT_2_10_10_10_REV             0x8D9F
    typedef void (APIENTRYP PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
    typedef GLint(APIENTRYP PFNGLGETFRAGDATAINDEXPROC) (GLuint program, const GLchar *name);
    typedef void (APIENTRYP PFNGLGENSAMPLERSPROC) (GLsizei count, GLuint *samplers);
    typedef void (APIENTRYP PFNGLDELETESAMPLERSPROC) (GLsizei count, const GLuint *samplers);
    typedef GLboolean(APIENTRYP PFNGLISSAMPLERPROC) (GLuint sampler);
    typedef void (APIENTRYP PFNGLBINDSAMPLERPROC) (GLuint unit, GLuint sampler);
    typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIPROC) (GLuint sampler, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
    typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFPROC) (GLuint sampler, GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, const GLfloat *param);
    typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, const GLint *param);
    typedef void (APIENTRYP PFNGLSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, const GLuint *param);
    typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIVPROC) (GLuint sampler, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIIVPROC) (GLuint sampler, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERFVPROC) (GLuint sampler, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETSAMPLERPARAMETERIUIVPROC) (GLuint sampler, GLenum pname, GLuint *params);
    typedef void (APIENTRYP PFNGLQUERYCOUNTERPROC) (GLuint id, GLenum target);
    typedef void (APIENTRYP PFNGLGETQUERYOBJECTI64VPROC) (GLuint id, GLenum pname, GLint64 *params);
    typedef void (APIENTRYP PFNGLGETQUERYOBJECTUI64VPROC) (GLuint id, GLenum pname, GLuint64 *params);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBDIVISORPROC) (GLuint index, GLuint divisor);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP1UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP2UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP3UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIPROC) (GLuint index, GLenum type, GLboolean normalized, GLuint value);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBP4UIVPROC) (GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBindFragDataLocationIndexed(GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
    GLAPI GLint APIENTRY glGetFragDataIndex(GLuint program, const GLchar *name);
    GLAPI void APIENTRY glGenSamplers(GLsizei count, GLuint *samplers);
    GLAPI void APIENTRY glDeleteSamplers(GLsizei count, const GLuint *samplers);
    GLAPI GLboolean APIENTRY glIsSampler(GLuint sampler);
    GLAPI void APIENTRY glBindSampler(GLuint unit, GLuint sampler);
    GLAPI void APIENTRY glSamplerParameteri(GLuint sampler, GLenum pname, GLint param);
    GLAPI void APIENTRY glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint *param);
    GLAPI void APIENTRY glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param);
    GLAPI void APIENTRY glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat *param);
    GLAPI void APIENTRY glSamplerParameterIiv(GLuint sampler, GLenum pname, const GLint *param);
    GLAPI void APIENTRY glSamplerParameterIuiv(GLuint sampler, GLenum pname, const GLuint *param);
    GLAPI void APIENTRY glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetSamplerParameterIiv(GLuint sampler, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetSamplerParameterIuiv(GLuint sampler, GLenum pname, GLuint *params);
    GLAPI void APIENTRY glQueryCounter(GLuint id, GLenum target);
    GLAPI void APIENTRY glGetQueryObjecti64v(GLuint id, GLenum pname, GLint64 *params);
    GLAPI void APIENTRY glGetQueryObjectui64v(GLuint id, GLenum pname, GLuint64 *params);
    GLAPI void APIENTRY glVertexAttribDivisor(GLuint index, GLuint divisor);
    GLAPI void APIENTRY glVertexAttribP1ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
    GLAPI void APIENTRY glVertexAttribP1uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
    GLAPI void APIENTRY glVertexAttribP2ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
    GLAPI void APIENTRY glVertexAttribP2uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
    GLAPI void APIENTRY glVertexAttribP3ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
    GLAPI void APIENTRY glVertexAttribP3uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
    GLAPI void APIENTRY glVertexAttribP4ui(GLuint index, GLenum type, GLboolean normalized, GLuint value);
    GLAPI void APIENTRY glVertexAttribP4uiv(GLuint index, GLenum type, GLboolean normalized, const GLuint *value);
#endif
#endif /* GL_VERSION_3_3 */

#ifndef GL_VERSION_4_0
#define GL_VERSION_4_0 1
#define GL_SAMPLE_SHADING                 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE       0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_TEXTURE_CUBE_MAP_ARRAY         0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY   0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY         0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW  0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY     0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#define GL_DRAW_INDIRECT_BUFFER           0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING   0x8F43
#define GL_GEOMETRY_SHADER_INVOCATIONS    0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#define GL_MAX_VERTEX_STREAMS             0x8E71
#define GL_DOUBLE_VEC2                    0x8FFC
#define GL_DOUBLE_VEC3                    0x8FFD
#define GL_DOUBLE_VEC4                    0x8FFE
#define GL_DOUBLE_MAT2                    0x8F46
#define GL_DOUBLE_MAT3                    0x8F47
#define GL_DOUBLE_MAT4                    0x8F48
#define GL_DOUBLE_MAT2x3                  0x8F49
#define GL_DOUBLE_MAT2x4                  0x8F4A
#define GL_DOUBLE_MAT3x2                  0x8F4B
#define GL_DOUBLE_MAT3x4                  0x8F4C
#define GL_DOUBLE_MAT4x2                  0x8F4D
#define GL_DOUBLE_MAT4x3                  0x8F4E
#define GL_ACTIVE_SUBROUTINES             0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS     0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH   0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES                0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_NUM_COMPATIBLE_SUBROUTINES     0x8E4A
#define GL_COMPATIBLE_SUBROUTINES         0x8E4B
#define GL_PATCHES                        0x000E
#define GL_PATCH_VERTICES                 0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL      0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL      0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES   0x8E75
#define GL_TESS_GEN_MODE                  0x8E76
#define GL_TESS_GEN_SPACING               0x8E77
#define GL_TESS_GEN_VERTEX_ORDER          0x8E78
#define GL_TESS_GEN_POINT_MODE            0x8E79
#define GL_ISOLINES                       0x8E7A
#define GL_FRACTIONAL_ODD                 0x8E7B
#define GL_FRACTIONAL_EVEN                0x8E7C
#define GL_MAX_PATCH_VERTICES             0x8E7D
#define GL_MAX_TESS_GEN_LEVEL             0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS      0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TESS_EVALUATION_SHADER         0x8E87
#define GL_TESS_CONTROL_SHADER            0x8E88
#define GL_TRANSFORM_FEEDBACK             0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING     0x8E25
#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70
    typedef void (APIENTRYP PFNGLMINSAMPLESHADINGPROC) (GLfloat value);
    typedef void (APIENTRYP PFNGLBLENDEQUATIONIPROC) (GLuint buf, GLenum mode);
    typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    typedef void (APIENTRYP PFNGLBLENDFUNCIPROC) (GLuint buf, GLenum src, GLenum dst);
    typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    typedef void (APIENTRYP PFNGLDRAWARRAYSINDIRECTPROC) (GLenum mode, const void *indirect);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void *indirect);
    typedef void (APIENTRYP PFNGLUNIFORM1DPROC) (GLint location, GLdouble x);
    typedef void (APIENTRYP PFNGLUNIFORM2DPROC) (GLint location, GLdouble x, GLdouble y);
    typedef void (APIENTRYP PFNGLUNIFORM3DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z);
    typedef void (APIENTRYP PFNGLUNIFORM4DPROC) (GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    typedef void (APIENTRYP PFNGLUNIFORM1DVPROC) (GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORM2DVPROC) (GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORM3DVPROC) (GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORM4DVPROC) (GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX2X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX3X4DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X2DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLUNIFORMMATRIX4X3DVPROC) (GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLGETUNIFORMDVPROC) (GLuint program, GLint location, GLdouble *params);
    typedef GLint(APIENTRYP PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) (GLuint program, GLenum shadertype, const GLchar *name);
    typedef GLuint(APIENTRYP PFNGLGETSUBROUTINEINDEXPROC) (GLuint program, GLenum shadertype, const GLchar *name);
    typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) (GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
    typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
    typedef void (APIENTRYP PFNGLGETACTIVESUBROUTINENAMEPROC) (GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
    typedef void (APIENTRYP PFNGLUNIFORMSUBROUTINESUIVPROC) (GLenum shadertype, GLsizei count, const GLuint *indices);
    typedef void (APIENTRYP PFNGLGETUNIFORMSUBROUTINEUIVPROC) (GLenum shadertype, GLint location, GLuint *params);
    typedef void (APIENTRYP PFNGLGETPROGRAMSTAGEIVPROC) (GLuint program, GLenum shadertype, GLenum pname, GLint *values);
    typedef void (APIENTRYP PFNGLPATCHPARAMETERIPROC) (GLenum pname, GLint value);
    typedef void (APIENTRYP PFNGLPATCHPARAMETERFVPROC) (GLenum pname, const GLfloat *values);
    typedef void (APIENTRYP PFNGLBINDTRANSFORMFEEDBACKPROC) (GLenum target, GLuint id);
    typedef void (APIENTRYP PFNGLDELETETRANSFORMFEEDBACKSPROC) (GLsizei n, const GLuint *ids);
    typedef void (APIENTRYP PFNGLGENTRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint *ids);
    typedef GLboolean(APIENTRYP PFNGLISTRANSFORMFEEDBACKPROC) (GLuint id);
    typedef void (APIENTRYP PFNGLPAUSETRANSFORMFEEDBACKPROC) (void);
    typedef void (APIENTRYP PFNGLRESUMETRANSFORMFEEDBACKPROC) (void);
    typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKPROC) (GLenum mode, GLuint id);
    typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) (GLenum mode, GLuint id, GLuint stream);
    typedef void (APIENTRYP PFNGLBEGINQUERYINDEXEDPROC) (GLenum target, GLuint index, GLuint id);
    typedef void (APIENTRYP PFNGLENDQUERYINDEXEDPROC) (GLenum target, GLuint index);
    typedef void (APIENTRYP PFNGLGETQUERYINDEXEDIVPROC) (GLenum target, GLuint index, GLenum pname, GLint *params);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMinSampleShading(GLfloat value);
    GLAPI void APIENTRY glBlendEquationi(GLuint buf, GLenum mode);
    GLAPI void APIENTRY glBlendEquationSeparatei(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    GLAPI void APIENTRY glBlendFunci(GLuint buf, GLenum src, GLenum dst);
    GLAPI void APIENTRY glBlendFuncSeparatei(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
    GLAPI void APIENTRY glDrawArraysIndirect(GLenum mode, const void *indirect);
    GLAPI void APIENTRY glDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect);
    GLAPI void APIENTRY glUniform1d(GLint location, GLdouble x);
    GLAPI void APIENTRY glUniform2d(GLint location, GLdouble x, GLdouble y);
    GLAPI void APIENTRY glUniform3d(GLint location, GLdouble x, GLdouble y, GLdouble z);
    GLAPI void APIENTRY glUniform4d(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    GLAPI void APIENTRY glUniform1dv(GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glUniform2dv(GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glUniform3dv(GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glUniform4dv(GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix2x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix2x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix3x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix3x4dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix4x2dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glUniformMatrix4x3dv(GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glGetUniformdv(GLuint program, GLint location, GLdouble *params);
    GLAPI GLint APIENTRY glGetSubroutineUniformLocation(GLuint program, GLenum shadertype, const GLchar *name);
    GLAPI GLuint APIENTRY glGetSubroutineIndex(GLuint program, GLenum shadertype, const GLchar *name);
    GLAPI void APIENTRY glGetActiveSubroutineUniformiv(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint *values);
    GLAPI void APIENTRY glGetActiveSubroutineUniformName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
    GLAPI void APIENTRY glGetActiveSubroutineName(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei *length, GLchar *name);
    GLAPI void APIENTRY glUniformSubroutinesuiv(GLenum shadertype, GLsizei count, const GLuint *indices);
    GLAPI void APIENTRY glGetUniformSubroutineuiv(GLenum shadertype, GLint location, GLuint *params);
    GLAPI void APIENTRY glGetProgramStageiv(GLuint program, GLenum shadertype, GLenum pname, GLint *values);
    GLAPI void APIENTRY glPatchParameteri(GLenum pname, GLint value);
    GLAPI void APIENTRY glPatchParameterfv(GLenum pname, const GLfloat *values);
    GLAPI void APIENTRY glBindTransformFeedback(GLenum target, GLuint id);
    GLAPI void APIENTRY glDeleteTransformFeedbacks(GLsizei n, const GLuint *ids);
    GLAPI void APIENTRY glGenTransformFeedbacks(GLsizei n, GLuint *ids);
    GLAPI GLboolean APIENTRY glIsTransformFeedback(GLuint id);
    GLAPI void APIENTRY glPauseTransformFeedback(void);
    GLAPI void APIENTRY glResumeTransformFeedback(void);
    GLAPI void APIENTRY glDrawTransformFeedback(GLenum mode, GLuint id);
    GLAPI void APIENTRY glDrawTransformFeedbackStream(GLenum mode, GLuint id, GLuint stream);
    GLAPI void APIENTRY glBeginQueryIndexed(GLenum target, GLuint index, GLuint id);
    GLAPI void APIENTRY glEndQueryIndexed(GLenum target, GLuint index);
    GLAPI void APIENTRY glGetQueryIndexediv(GLenum target, GLuint index, GLenum pname, GLint *params);
#endif
#endif /* GL_VERSION_4_0 */

#ifndef GL_VERSION_4_1
#define GL_VERSION_4_1 1
#define GL_FIXED                          0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_LOW_FLOAT                      0x8DF0
#define GL_MEDIUM_FLOAT                   0x8DF1
#define GL_HIGH_FLOAT                     0x8DF2
#define GL_LOW_INT                        0x8DF3
#define GL_MEDIUM_INT                     0x8DF4
#define GL_HIGH_INT                       0x8DF5
#define GL_SHADER_COMPILER                0x8DFA
#define GL_SHADER_BINARY_FORMATS          0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS      0x8DF9
#define GL_MAX_VERTEX_UNIFORM_VECTORS     0x8DFB
#define GL_MAX_VARYING_VECTORS            0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS   0x8DFD
#define GL_RGB565                         0x8D62
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH          0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS     0x87FE
#define GL_PROGRAM_BINARY_FORMATS         0x87FF
#define GL_VERTEX_SHADER_BIT              0x00000001
#define GL_FRAGMENT_SHADER_BIT            0x00000002
#define GL_GEOMETRY_SHADER_BIT            0x00000004
#define GL_TESS_CONTROL_SHADER_BIT        0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT     0x00000010
#define GL_ALL_SHADER_BITS                0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE              0x8258
#define GL_ACTIVE_PROGRAM                 0x8259
#define GL_PROGRAM_PIPELINE_BINDING       0x825A
#define GL_MAX_VIEWPORTS                  0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS         0x825C
#define GL_VIEWPORT_BOUNDS_RANGE          0x825D
#define GL_LAYER_PROVOKING_VERTEX         0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#define GL_UNDEFINED_VERTEX               0x8260
    typedef void (APIENTRYP PFNGLRELEASESHADERCOMPILERPROC) (void);
    typedef void (APIENTRYP PFNGLSHADERBINARYPROC) (GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
    typedef void (APIENTRYP PFNGLGETSHADERPRECISIONFORMATPROC) (GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
    typedef void (APIENTRYP PFNGLDEPTHRANGEFPROC) (GLfloat n, GLfloat f);
    typedef void (APIENTRYP PFNGLCLEARDEPTHFPROC) (GLfloat d);
    typedef void (APIENTRYP PFNGLGETPROGRAMBINARYPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
    typedef void (APIENTRYP PFNGLPROGRAMBINARYPROC) (GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
    typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIPROC) (GLuint program, GLenum pname, GLint value);
    typedef void (APIENTRYP PFNGLUSEPROGRAMSTAGESPROC) (GLuint pipeline, GLbitfield stages, GLuint program);
    typedef void (APIENTRYP PFNGLACTIVESHADERPROGRAMPROC) (GLuint pipeline, GLuint program);
    typedef GLuint(APIENTRYP PFNGLCREATESHADERPROGRAMVPROC) (GLenum type, GLsizei count, const GLchar *const*strings);
    typedef void (APIENTRYP PFNGLBINDPROGRAMPIPELINEPROC) (GLuint pipeline);
    typedef void (APIENTRYP PFNGLDELETEPROGRAMPIPELINESPROC) (GLsizei n, const GLuint *pipelines);
    typedef void (APIENTRYP PFNGLGENPROGRAMPIPELINESPROC) (GLsizei n, GLuint *pipelines);
    typedef GLboolean(APIENTRYP PFNGLISPROGRAMPIPELINEPROC) (GLuint pipeline);
    typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEIVPROC) (GLuint pipeline, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IPROC) (GLuint program, GLint location, GLint v0);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FPROC) (GLuint program, GLint location, GLfloat v0);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DPROC) (GLuint program, GLint location, GLdouble v0);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIPROC) (GLuint program, GLint location, GLuint v0);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IPROC) (GLuint program, GLint location, GLint v0, GLint v1);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DPROC) (GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLVALIDATEPROGRAMPIPELINEPROC) (GLuint pipeline);
    typedef void (APIENTRYP PFNGLGETPROGRAMPIPELINEINFOLOGPROC) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DPROC) (GLuint index, GLdouble x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DPROC) (GLuint index, GLdouble x, GLdouble y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DPROC) (GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL2DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL3DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL4DVPROC) (GLuint index, const GLdouble *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBLPOINTERPROC) (GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLDVPROC) (GLuint index, GLenum pname, GLdouble *params);
    typedef void (APIENTRYP PFNGLVIEWPORTARRAYVPROC) (GLuint first, GLsizei count, const GLfloat *v);
    typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
    typedef void (APIENTRYP PFNGLVIEWPORTINDEXEDFVPROC) (GLuint index, const GLfloat *v);
    typedef void (APIENTRYP PFNGLSCISSORARRAYVPROC) (GLuint first, GLsizei count, const GLint *v);
    typedef void (APIENTRYP PFNGLSCISSORINDEXEDPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLSCISSORINDEXEDVPROC) (GLuint index, const GLint *v);
    typedef void (APIENTRYP PFNGLDEPTHRANGEARRAYVPROC) (GLuint first, GLsizei count, const GLdouble *v);
    typedef void (APIENTRYP PFNGLDEPTHRANGEINDEXEDPROC) (GLuint index, GLdouble n, GLdouble f);
    typedef void (APIENTRYP PFNGLGETFLOATI_VPROC) (GLenum target, GLuint index, GLfloat *data);
    typedef void (APIENTRYP PFNGLGETDOUBLEI_VPROC) (GLenum target, GLuint index, GLdouble *data);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glReleaseShaderCompiler(void);
    GLAPI void APIENTRY glShaderBinary(GLsizei count, const GLuint *shaders, GLenum binaryformat, const void *binary, GLsizei length);
    GLAPI void APIENTRY glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range, GLint *precision);
    GLAPI void APIENTRY glDepthRangef(GLfloat n, GLfloat f);
    GLAPI void APIENTRY glClearDepthf(GLfloat d);
    GLAPI void APIENTRY glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
    GLAPI void APIENTRY glProgramBinary(GLuint program, GLenum binaryFormat, const void *binary, GLsizei length);
    GLAPI void APIENTRY glProgramParameteri(GLuint program, GLenum pname, GLint value);
    GLAPI void APIENTRY glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program);
    GLAPI void APIENTRY glActiveShaderProgram(GLuint pipeline, GLuint program);
    GLAPI GLuint APIENTRY glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar *const*strings);
    GLAPI void APIENTRY glBindProgramPipeline(GLuint pipeline);
    GLAPI void APIENTRY glDeleteProgramPipelines(GLsizei n, const GLuint *pipelines);
    GLAPI void APIENTRY glGenProgramPipelines(GLsizei n, GLuint *pipelines);
    GLAPI GLboolean APIENTRY glIsProgramPipeline(GLuint pipeline);
    GLAPI void APIENTRY glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint *params);
    GLAPI void APIENTRY glProgramUniform1i(GLuint program, GLint location, GLint v0);
    GLAPI void APIENTRY glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniform1f(GLuint program, GLint location, GLfloat v0);
    GLAPI void APIENTRY glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform1d(GLuint program, GLint location, GLdouble v0);
    GLAPI void APIENTRY glProgramUniform1dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniform1ui(GLuint program, GLint location, GLuint v0);
    GLAPI void APIENTRY glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1);
    GLAPI void APIENTRY glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1);
    GLAPI void APIENTRY glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform2d(GLuint program, GLint location, GLdouble v0, GLdouble v1);
    GLAPI void APIENTRY glProgramUniform2dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1);
    GLAPI void APIENTRY glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    GLAPI void APIENTRY glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    GLAPI void APIENTRY glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform3d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
    GLAPI void APIENTRY glProgramUniform3dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    GLAPI void APIENTRY glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    GLAPI void APIENTRY glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    GLAPI void APIENTRY glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform4d(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
    GLAPI void APIENTRY glProgramUniform4dv(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    GLAPI void APIENTRY glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x2dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x4dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x3dv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glValidateProgramPipeline(GLuint pipeline);
    GLAPI void APIENTRY glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
    GLAPI void APIENTRY glVertexAttribL1d(GLuint index, GLdouble x);
    GLAPI void APIENTRY glVertexAttribL2d(GLuint index, GLdouble x, GLdouble y);
    GLAPI void APIENTRY glVertexAttribL3d(GLuint index, GLdouble x, GLdouble y, GLdouble z);
    GLAPI void APIENTRY glVertexAttribL4d(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    GLAPI void APIENTRY glVertexAttribL1dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttribL2dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttribL3dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttribL4dv(GLuint index, const GLdouble *v);
    GLAPI void APIENTRY glVertexAttribLPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const void *pointer);
    GLAPI void APIENTRY glGetVertexAttribLdv(GLuint index, GLenum pname, GLdouble *params);
    GLAPI void APIENTRY glViewportArrayv(GLuint first, GLsizei count, const GLfloat *v);
    GLAPI void APIENTRY glViewportIndexedf(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
    GLAPI void APIENTRY glViewportIndexedfv(GLuint index, const GLfloat *v);
    GLAPI void APIENTRY glScissorArrayv(GLuint first, GLsizei count, const GLint *v);
    GLAPI void APIENTRY glScissorIndexed(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glScissorIndexedv(GLuint index, const GLint *v);
    GLAPI void APIENTRY glDepthRangeArrayv(GLuint first, GLsizei count, const GLdouble *v);
    GLAPI void APIENTRY glDepthRangeIndexed(GLuint index, GLdouble n, GLdouble f);
    GLAPI void APIENTRY glGetFloati_v(GLenum target, GLuint index, GLfloat *data);
    GLAPI void APIENTRY glGetDoublei_v(GLenum target, GLuint index, GLdouble *data);
#endif
#endif /* GL_VERSION_4_1 */

#ifndef GL_VERSION_4_2
#define GL_VERSION_4_2 1
#define GL_COPY_READ_BUFFER_BINDING       0x8F36
#define GL_COPY_WRITE_BUFFER_BINDING      0x8F37
#define GL_TRANSFORM_FEEDBACK_ACTIVE      0x8E24
#define GL_TRANSFORM_FEEDBACK_PAUSED      0x8E23
#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH  0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH  0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE   0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH    0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT   0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH    0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE     0x912E
#define GL_NUM_SAMPLE_COUNTS              0x9380
#define GL_MIN_MAP_BUFFER_ALIGNMENT       0x90BC
#define GL_ATOMIC_COUNTER_BUFFER          0x92C0
#define GL_ATOMIC_COUNTER_BUFFER_BINDING  0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START    0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE     0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS     0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS   0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS   0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS   0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS  0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER    0x92DB
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT      0x00000002
#define GL_UNIFORM_BARRIER_BIT            0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT      0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#define GL_COMMAND_BARRIER_BIT            0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT       0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT     0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT      0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT        0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT     0x00001000
#define GL_ALL_BARRIER_BITS               0xFFFFFFFF
#define GL_MAX_IMAGE_UNITS                0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_BINDING_NAME             0x8F3A
#define GL_IMAGE_BINDING_LEVEL            0x8F3B
#define GL_IMAGE_BINDING_LAYERED          0x8F3C
#define GL_IMAGE_BINDING_LAYER            0x8F3D
#define GL_IMAGE_BINDING_ACCESS           0x8F3E
#define GL_IMAGE_1D                       0x904C
#define GL_IMAGE_2D                       0x904D
#define GL_IMAGE_3D                       0x904E
#define GL_IMAGE_2D_RECT                  0x904F
#define GL_IMAGE_CUBE                     0x9050
#define GL_IMAGE_BUFFER                   0x9051
#define GL_IMAGE_1D_ARRAY                 0x9052
#define GL_IMAGE_2D_ARRAY                 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY           0x9054
#define GL_IMAGE_2D_MULTISAMPLE           0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY     0x9056
#define GL_INT_IMAGE_1D                   0x9057
#define GL_INT_IMAGE_2D                   0x9058
#define GL_INT_IMAGE_3D                   0x9059
#define GL_INT_IMAGE_2D_RECT              0x905A
#define GL_INT_IMAGE_CUBE                 0x905B
#define GL_INT_IMAGE_BUFFER               0x905C
#define GL_INT_IMAGE_1D_ARRAY             0x905D
#define GL_INT_IMAGE_2D_ARRAY             0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY       0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE       0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D          0x9062
#define GL_UNSIGNED_INT_IMAGE_2D          0x9063
#define GL_UNSIGNED_INT_IMAGE_3D          0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT     0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE        0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER      0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY    0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY    0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#define GL_MAX_IMAGE_SAMPLES              0x906D
#define GL_IMAGE_BINDING_FORMAT           0x906E
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS      0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS    0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS    0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS    0x90CF
#define GL_COMPRESSED_RGBA_BPTC_UNORM     0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT 0x8E8F
#define GL_TEXTURE_IMMUTABLE_FORMAT       0x912F
    typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
    typedef void (APIENTRYP PFNGLGETINTERNALFORMATIVPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
    typedef void (APIENTRYP PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) (GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLBINDIMAGETEXTUREPROC) (GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
    typedef void (APIENTRYP PFNGLMEMORYBARRIERPROC) (GLbitfield barriers);
    typedef void (APIENTRYP PFNGLTEXSTORAGE1DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    typedef void (APIENTRYP PFNGLTEXSTORAGE2DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLTEXSTORAGE3DPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) (GLenum mode, GLuint id, GLsizei instancecount);
    typedef void (APIENTRYP PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) (GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawArraysInstancedBaseInstance(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
    GLAPI void APIENTRY glDrawElementsInstancedBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
    GLAPI void APIENTRY glDrawElementsInstancedBaseVertexBaseInstance(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
    GLAPI void APIENTRY glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint *params);
    GLAPI void APIENTRY glGetActiveAtomicCounterBufferiv(GLuint program, GLuint bufferIndex, GLenum pname, GLint *params);
    GLAPI void APIENTRY glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
    GLAPI void APIENTRY glMemoryBarrier(GLbitfield barriers);
    GLAPI void APIENTRY glTexStorage1D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    GLAPI void APIENTRY glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    GLAPI void APIENTRY glDrawTransformFeedbackInstanced(GLenum mode, GLuint id, GLsizei instancecount);
    GLAPI void APIENTRY glDrawTransformFeedbackStreamInstanced(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);
#endif
#endif /* GL_VERSION_4_2 */

#ifndef GL_VERSION_4_3
#define GL_VERSION_4_3 1
    typedef void (APIENTRY  *GLDEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *message, const void *userParam);
#define GL_NUM_SHADING_LANGUAGE_VERSIONS  0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG       0x874E
#define GL_COMPRESSED_RGB8_ETC2           0x9274
#define GL_COMPRESSED_SRGB8_ETC2          0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC      0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_COMPRESSED_R11_EAC             0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC      0x9271
#define GL_COMPRESSED_RG11_EAC            0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC     0x9273
#define GL_PRIMITIVE_RESTART_FIXED_INDEX  0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_MAX_ELEMENT_INDEX              0x8D6B
#define GL_COMPUTE_SHADER                 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS     0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS     0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS    0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT   0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE    0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE        0x8267
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER       0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT             0x00000020
#define GL_DEBUG_OUTPUT_SYNCHRONOUS       0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION        0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM      0x8245
#define GL_DEBUG_SOURCE_API               0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM     0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER   0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY       0x8249
#define GL_DEBUG_SOURCE_APPLICATION       0x824A
#define GL_DEBUG_SOURCE_OTHER             0x824B
#define GL_DEBUG_TYPE_ERROR               0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR  0x824E
#define GL_DEBUG_TYPE_PORTABILITY         0x824F
#define GL_DEBUG_TYPE_PERFORMANCE         0x8250
#define GL_DEBUG_TYPE_OTHER               0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH       0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES      0x9144
#define GL_DEBUG_LOGGED_MESSAGES          0x9145
#define GL_DEBUG_SEVERITY_HIGH            0x9146
#define GL_DEBUG_SEVERITY_MEDIUM          0x9147
#define GL_DEBUG_SEVERITY_LOW             0x9148
#define GL_DEBUG_TYPE_MARKER              0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP          0x8269
#define GL_DEBUG_TYPE_POP_GROUP           0x826A
#define GL_DEBUG_SEVERITY_NOTIFICATION    0x826B
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH    0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH        0x826D
#define GL_BUFFER                         0x82E0
#define GL_SHADER                         0x82E1
#define GL_PROGRAM                        0x82E2
#define GL_QUERY                          0x82E3
#define GL_PROGRAM_PIPELINE               0x82E4
#define GL_SAMPLER                        0x82E6
#define GL_MAX_LABEL_LENGTH               0x82E8
#define GL_DEBUG_OUTPUT                   0x92E0
#define GL_CONTEXT_FLAG_DEBUG_BIT         0x00000002
#define GL_MAX_UNIFORM_LOCATIONS          0x826E
#define GL_FRAMEBUFFER_DEFAULT_WIDTH      0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT     0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS     0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES    0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH          0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT         0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS         0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES        0x9318
#define GL_INTERNALFORMAT_SUPPORTED       0x826F
#define GL_INTERNALFORMAT_PREFERRED       0x8270
#define GL_INTERNALFORMAT_RED_SIZE        0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE      0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE       0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE      0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE      0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE    0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE     0x8277
#define GL_INTERNALFORMAT_RED_TYPE        0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE      0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE       0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE      0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE      0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE    0x827D
#define GL_MAX_WIDTH                      0x827E
#define GL_MAX_HEIGHT                     0x827F
#define GL_MAX_DEPTH                      0x8280
#define GL_MAX_LAYERS                     0x8281
#define GL_MAX_COMBINED_DIMENSIONS        0x8282
#define GL_COLOR_COMPONENTS               0x8283
#define GL_DEPTH_COMPONENTS               0x8284
#define GL_STENCIL_COMPONENTS             0x8285
#define GL_COLOR_RENDERABLE               0x8286
#define GL_DEPTH_RENDERABLE               0x8287
#define GL_STENCIL_RENDERABLE             0x8288
#define GL_FRAMEBUFFER_RENDERABLE         0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#define GL_FRAMEBUFFER_BLEND              0x828B
#define GL_READ_PIXELS                    0x828C
#define GL_READ_PIXELS_FORMAT             0x828D
#define GL_READ_PIXELS_TYPE               0x828E
#define GL_TEXTURE_IMAGE_FORMAT           0x828F
#define GL_TEXTURE_IMAGE_TYPE             0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT       0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE         0x8292
#define GL_MIPMAP                         0x8293
#define GL_MANUAL_GENERATE_MIPMAP         0x8294
#define GL_AUTO_GENERATE_MIPMAP           0x8295
#define GL_COLOR_ENCODING                 0x8296
#define GL_SRGB_READ                      0x8297
#define GL_SRGB_WRITE                     0x8298
#define GL_FILTER                         0x829A
#define GL_VERTEX_TEXTURE                 0x829B
#define GL_TESS_CONTROL_TEXTURE           0x829C
#define GL_TESS_EVALUATION_TEXTURE        0x829D
#define GL_GEOMETRY_TEXTURE               0x829E
#define GL_FRAGMENT_TEXTURE               0x829F
#define GL_COMPUTE_TEXTURE                0x82A0
#define GL_TEXTURE_SHADOW                 0x82A1
#define GL_TEXTURE_GATHER                 0x82A2
#define GL_TEXTURE_GATHER_SHADOW          0x82A3
#define GL_SHADER_IMAGE_LOAD              0x82A4
#define GL_SHADER_IMAGE_STORE             0x82A5
#define GL_SHADER_IMAGE_ATOMIC            0x82A6
#define GL_IMAGE_TEXEL_SIZE               0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS      0x82A8
#define GL_IMAGE_PIXEL_FORMAT             0x82A9
#define GL_IMAGE_PIXEL_TYPE               0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE  0x82B3
#define GL_CLEAR_BUFFER                   0x82B4
#define GL_TEXTURE_VIEW                   0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS       0x82B6
#define GL_FULL_SUPPORT                   0x82B7
#define GL_CAVEAT_SUPPORT                 0x82B8
#define GL_IMAGE_CLASS_4_X_32             0x82B9
#define GL_IMAGE_CLASS_2_X_32             0x82BA
#define GL_IMAGE_CLASS_1_X_32             0x82BB
#define GL_IMAGE_CLASS_4_X_16             0x82BC
#define GL_IMAGE_CLASS_2_X_16             0x82BD
#define GL_IMAGE_CLASS_1_X_16             0x82BE
#define GL_IMAGE_CLASS_4_X_8              0x82BF
#define GL_IMAGE_CLASS_2_X_8              0x82C0
#define GL_IMAGE_CLASS_1_X_8              0x82C1
#define GL_IMAGE_CLASS_11_11_10           0x82C2
#define GL_IMAGE_CLASS_10_10_10_2         0x82C3
#define GL_VIEW_CLASS_128_BITS            0x82C4
#define GL_VIEW_CLASS_96_BITS             0x82C5
#define GL_VIEW_CLASS_64_BITS             0x82C6
#define GL_VIEW_CLASS_48_BITS             0x82C7
#define GL_VIEW_CLASS_32_BITS             0x82C8
#define GL_VIEW_CLASS_24_BITS             0x82C9
#define GL_VIEW_CLASS_16_BITS             0x82CA
#define GL_VIEW_CLASS_8_BITS              0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB       0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA      0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA      0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA      0x82CF
#define GL_VIEW_CLASS_RGTC1_RED           0x82D0
#define GL_VIEW_CLASS_RGTC2_RG            0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM          0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT          0x82D3
#define GL_UNIFORM                        0x92E1
#define GL_UNIFORM_BLOCK                  0x92E2
#define GL_PROGRAM_INPUT                  0x92E3
#define GL_PROGRAM_OUTPUT                 0x92E4
#define GL_BUFFER_VARIABLE                0x92E5
#define GL_SHADER_STORAGE_BLOCK           0x92E6
#define GL_VERTEX_SUBROUTINE              0x92E8
#define GL_TESS_CONTROL_SUBROUTINE        0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE     0x92EA
#define GL_GEOMETRY_SUBROUTINE            0x92EB
#define GL_FRAGMENT_SUBROUTINE            0x92EC
#define GL_COMPUTE_SUBROUTINE             0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM      0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM    0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM    0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM     0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING     0x92F4
#define GL_ACTIVE_RESOURCES               0x92F5
#define GL_MAX_NAME_LENGTH                0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES       0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
#define GL_NAME_LENGTH                    0x92F9
#define GL_TYPE                           0x92FA
#define GL_ARRAY_SIZE                     0x92FB
#define GL_OFFSET                         0x92FC
#define GL_BLOCK_INDEX                    0x92FD
#define GL_ARRAY_STRIDE                   0x92FE
#define GL_MATRIX_STRIDE                  0x92FF
#define GL_IS_ROW_MAJOR                   0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX    0x9301
#define GL_BUFFER_BINDING                 0x9302
#define GL_BUFFER_DATA_SIZE               0x9303
#define GL_NUM_ACTIVE_VARIABLES           0x9304
#define GL_ACTIVE_VARIABLES               0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER    0x9306
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER  0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER  0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER   0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE           0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE         0x930D
#define GL_LOCATION                       0x930E
#define GL_LOCATION_INDEX                 0x930F
#define GL_IS_PER_PATCH                   0x92E7
#define GL_SHADER_STORAGE_BUFFER          0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING  0x90D3
#define GL_SHADER_STORAGE_BUFFER_START    0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE     0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE  0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT     0x00002000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#define GL_DEPTH_STENCIL_TEXTURE_MODE     0x90EA
#define GL_TEXTURE_BUFFER_OFFSET          0x919D
#define GL_TEXTURE_BUFFER_SIZE            0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F
#define GL_TEXTURE_VIEW_MIN_LEVEL         0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS        0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER         0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS        0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS       0x82DF
#define GL_VERTEX_ATTRIB_BINDING          0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET  0x82D5
#define GL_VERTEX_BINDING_DIVISOR         0x82D6
#define GL_VERTEX_BINDING_OFFSET          0x82D7
#define GL_VERTEX_BINDING_STRIDE          0x82D8
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS     0x82DA
#define GL_VERTEX_BINDING_BUFFER          0x8F4F
    typedef void (APIENTRYP PFNGLCLEARBUFFERDATAPROC) (GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
    typedef void (APIENTRYP PFNGLCLEARBUFFERSUBDATAPROC) (GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
    typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
    typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEINDIRECTPROC) (GLintptr indirect);
    typedef void (APIENTRYP PFNGLCOPYIMAGESUBDATAPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERPARAMETERIPROC) (GLenum target, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVPROC) (GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETINTERNALFORMATI64VPROC) (GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
    typedef void (APIENTRYP PFNGLINVALIDATETEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
    typedef void (APIENTRYP PFNGLINVALIDATETEXIMAGEPROC) (GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLINVALIDATEBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
    typedef void (APIENTRYP PFNGLINVALIDATEBUFFERDATAPROC) (GLuint buffer);
    typedef void (APIENTRYP PFNGLINVALIDATEFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
    typedef void (APIENTRYP PFNGLINVALIDATESUBFRAMEBUFFERPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTPROC) (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
    typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
    typedef void (APIENTRYP PFNGLGETPROGRAMINTERFACEIVPROC) (GLuint program, GLenum programInterface, GLenum pname, GLint *params);
    typedef GLuint(APIENTRYP PFNGLGETPROGRAMRESOURCEINDEXPROC) (GLuint program, GLenum programInterface, const GLchar *name);
    typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCENAMEPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
    typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCEIVPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
    typedef GLint(APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONPROC) (GLuint program, GLenum programInterface, const GLchar *name);
    typedef GLint(APIENTRYP PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) (GLuint program, GLenum programInterface, const GLchar *name);
    typedef void (APIENTRYP PFNGLSHADERSTORAGEBLOCKBINDINGPROC) (GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
    typedef void (APIENTRYP PFNGLTEXBUFFERRANGEPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLTEXSTORAGE2DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLTEXSTORAGE3DMULTISAMPLEPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLTEXTUREVIEWPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
    typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERPROC) (GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBIFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBLFORMATPROC) (GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBBINDINGPROC) (GLuint attribindex, GLuint bindingindex);
    typedef void (APIENTRYP PFNGLVERTEXBINDINGDIVISORPROC) (GLuint bindingindex, GLuint divisor);
    typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
    typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
    typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKPROC) (GLDEBUGPROC callback, const void *userParam);
    typedef GLuint(APIENTRYP PFNGLGETDEBUGMESSAGELOGPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
    typedef void (APIENTRYP PFNGLPUSHDEBUGGROUPPROC) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
    typedef void (APIENTRYP PFNGLPOPDEBUGGROUPPROC) (void);
    typedef void (APIENTRYP PFNGLOBJECTLABELPROC) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
    typedef void (APIENTRYP PFNGLGETOBJECTLABELPROC) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
    typedef void (APIENTRYP PFNGLOBJECTPTRLABELPROC) (const void *ptr, GLsizei length, const GLchar *label);
    typedef void (APIENTRYP PFNGLGETOBJECTPTRLABELPROC) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glClearBufferData(GLenum target, GLenum internalformat, GLenum format, GLenum type, const void *data);
    GLAPI void APIENTRY glClearBufferSubData(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
    GLAPI void APIENTRY glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
    GLAPI void APIENTRY glDispatchComputeIndirect(GLintptr indirect);
    GLAPI void APIENTRY glCopyImageSubData(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
    GLAPI void APIENTRY glFramebufferParameteri(GLenum target, GLenum pname, GLint param);
    GLAPI void APIENTRY glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetInternalformati64v(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64 *params);
    GLAPI void APIENTRY glInvalidateTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
    GLAPI void APIENTRY glInvalidateTexImage(GLuint texture, GLint level);
    GLAPI void APIENTRY glInvalidateBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr length);
    GLAPI void APIENTRY glInvalidateBufferData(GLuint buffer);
    GLAPI void APIENTRY glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments);
    GLAPI void APIENTRY glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glMultiDrawArraysIndirect(GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
    GLAPI void APIENTRY glMultiDrawElementsIndirect(GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
    GLAPI void APIENTRY glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint *params);
    GLAPI GLuint APIENTRY glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar *name);
    GLAPI void APIENTRY glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei *length, GLchar *name);
    GLAPI void APIENTRY glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLint *params);
    GLAPI GLint APIENTRY glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar *name);
    GLAPI GLint APIENTRY glGetProgramResourceLocationIndex(GLuint program, GLenum programInterface, const GLchar *name);
    GLAPI void APIENTRY glShaderStorageBlockBinding(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);
    GLAPI void APIENTRY glTexBufferRange(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    GLAPI void APIENTRY glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glTexStorage3DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glTextureView(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
    GLAPI void APIENTRY glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    GLAPI void APIENTRY glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexAttribLFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexAttribBinding(GLuint attribindex, GLuint bindingindex);
    GLAPI void APIENTRY glVertexBindingDivisor(GLuint bindingindex, GLuint divisor);
    GLAPI void APIENTRY glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
    GLAPI void APIENTRY glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
    GLAPI void APIENTRY glDebugMessageCallback(GLDEBUGPROC callback, const void *userParam);
    GLAPI GLuint APIENTRY glGetDebugMessageLog(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
    GLAPI void APIENTRY glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar *message);
    GLAPI void APIENTRY glPopDebugGroup(void);
    GLAPI void APIENTRY glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
    GLAPI void APIENTRY glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
    GLAPI void APIENTRY glObjectPtrLabel(const void *ptr, GLsizei length, const GLchar *label);
    GLAPI void APIENTRY glGetObjectPtrLabel(const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
#endif
#endif /* GL_VERSION_4_3 */

#ifndef GL_VERSION_4_4
#define GL_VERSION_4_4 1
#define GL_MAX_VERTEX_ATTRIB_STRIDE       0x82E5
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED 0x8221
#define GL_TEXTURE_BUFFER_BINDING         0x8C2A
#define GL_MAP_PERSISTENT_BIT             0x0040
#define GL_MAP_COHERENT_BIT               0x0080
#define GL_DYNAMIC_STORAGE_BIT            0x0100
#define GL_CLIENT_STORAGE_BIT             0x0200
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000
#define GL_BUFFER_IMMUTABLE_STORAGE       0x821F
#define GL_BUFFER_STORAGE_FLAGS           0x8220
#define GL_CLEAR_TEXTURE                  0x9365
#define GL_LOCATION_COMPONENT             0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C
#define GL_QUERY_BUFFER                   0x9192
#define GL_QUERY_BUFFER_BARRIER_BIT       0x00008000
#define GL_QUERY_BUFFER_BINDING           0x9193
#define GL_QUERY_RESULT_NO_WAIT           0x9194
#define GL_MIRROR_CLAMP_TO_EDGE           0x8743
    typedef void (APIENTRYP PFNGLBUFFERSTORAGEPROC) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
    typedef void (APIENTRYP PFNGLCLEARTEXIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
    typedef void (APIENTRYP PFNGLCLEARTEXSUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
    typedef void (APIENTRYP PFNGLBINDBUFFERSBASEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
    typedef void (APIENTRYP PFNGLBINDBUFFERSRANGEPROC) (GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
    typedef void (APIENTRYP PFNGLBINDTEXTURESPROC) (GLuint first, GLsizei count, const GLuint *textures);
    typedef void (APIENTRYP PFNGLBINDSAMPLERSPROC) (GLuint first, GLsizei count, const GLuint *samplers);
    typedef void (APIENTRYP PFNGLBINDIMAGETEXTURESPROC) (GLuint first, GLsizei count, const GLuint *textures);
    typedef void (APIENTRYP PFNGLBINDVERTEXBUFFERSPROC) (GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBufferStorage(GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
    GLAPI void APIENTRY glClearTexImage(GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
    GLAPI void APIENTRY glClearTexSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
    GLAPI void APIENTRY glBindBuffersBase(GLenum target, GLuint first, GLsizei count, const GLuint *buffers);
    GLAPI void APIENTRY glBindBuffersRange(GLenum target, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizeiptr *sizes);
    GLAPI void APIENTRY glBindTextures(GLuint first, GLsizei count, const GLuint *textures);
    GLAPI void APIENTRY glBindSamplers(GLuint first, GLsizei count, const GLuint *samplers);
    GLAPI void APIENTRY glBindImageTextures(GLuint first, GLsizei count, const GLuint *textures);
    GLAPI void APIENTRY glBindVertexBuffers(GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
#endif
#endif /* GL_VERSION_4_4 */

#ifndef GL_VERSION_4_5
#define GL_VERSION_4_5 1
#define GL_CONTEXT_LOST                   0x0507
#define GL_NEGATIVE_ONE_TO_ONE            0x935E
#define GL_ZERO_TO_ONE                    0x935F
#define GL_CLIP_ORIGIN                    0x935C
#define GL_CLIP_DEPTH_MODE                0x935D
#define GL_QUERY_WAIT_INVERTED            0x8E17
#define GL_QUERY_NO_WAIT_INVERTED         0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED  0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A
#define GL_MAX_CULL_DISTANCES             0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA
#define GL_TEXTURE_TARGET                 0x1006
#define GL_QUERY_TARGET                   0x82EA
#define GL_GUILTY_CONTEXT_RESET           0x8253
#define GL_INNOCENT_CONTEXT_RESET         0x8254
#define GL_UNKNOWN_CONTEXT_RESET          0x8255
#define GL_RESET_NOTIFICATION_STRATEGY    0x8256
#define GL_LOSE_CONTEXT_ON_RESET          0x8252
#define GL_NO_RESET_NOTIFICATION          0x8261
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004
#define GL_CONTEXT_RELEASE_BEHAVIOR       0x82FB
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC
    typedef void (APIENTRYP PFNGLCLIPCONTROLPROC) (GLenum origin, GLenum depth);
    typedef void (APIENTRYP PFNGLCREATETRANSFORMFEEDBACKSPROC) (GLsizei n, GLuint *ids);
    typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) (GLuint xfb, GLuint index, GLuint buffer);
    typedef void (APIENTRYP PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) (GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKIVPROC) (GLuint xfb, GLenum pname, GLint *param);
    typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint *param);
    typedef void (APIENTRYP PFNGLGETTRANSFORMFEEDBACKI64_VPROC) (GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
    typedef void (APIENTRYP PFNGLCREATEBUFFERSPROC) (GLsizei n, GLuint *buffers);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERSTORAGEPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERDATAPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
    typedef void (APIENTRYP PFNGLCOPYNAMEDBUFFERSUBDATAPROC) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERDATAPROC) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
    typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
    typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERPROC) (GLuint buffer, GLenum access);
    typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
    typedef GLboolean(APIENTRYP PFNGLUNMAPNAMEDBUFFERPROC) (GLuint buffer);
    typedef void (APIENTRYP PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERIVPROC) (GLuint buffer, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) (GLuint buffer, GLenum pname, GLint64 *params);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPOINTERVPROC) (GLuint buffer, GLenum pname, void **params);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERSUBDATAPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
    typedef void (APIENTRYP PFNGLCREATEFRAMEBUFFERSPROC) (GLsizei n, GLuint *framebuffers);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) (GLuint framebuffer, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) (GLuint framebuffer, GLenum buf);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) (GLuint framebuffer, GLenum src);
    typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
    typedef void (APIENTRYP PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) (GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
    typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
    typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
    typedef void (APIENTRYP PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) (GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
    typedef void (APIENTRYP PFNGLBLITNAMEDFRAMEBUFFERPROC) (GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    typedef GLenum(APIENTRYP PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) (GLuint framebuffer, GLenum target);
    typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) (GLuint framebuffer, GLenum pname, GLint *param);
    typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLCREATERENDERBUFFERSPROC) (GLsizei n, GLuint *renderbuffers);
    typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) (GLuint renderbuffer, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLCREATETEXTURESPROC) (GLenum target, GLsizei n, GLuint *textures);
    typedef void (APIENTRYP PFNGLTEXTUREBUFFERPROC) (GLuint texture, GLenum internalformat, GLuint buffer);
    typedef void (APIENTRYP PFNGLTEXTUREBUFFERRANGEPROC) (GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE1DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DPROC) (GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) (GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
    typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE1DPROC) (GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE2DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE3DPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFPROC) (GLuint texture, GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, const GLfloat *param);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIPROC) (GLuint texture, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, const GLuint *params);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, const GLint *param);
    typedef void (APIENTRYP PFNGLGENERATETEXTUREMIPMAPPROC) (GLuint texture);
    typedef void (APIENTRYP PFNGLBINDTEXTUREUNITPROC) (GLuint unit, GLuint texture);
    typedef void (APIENTRYP PFNGLGETTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
    typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) (GLuint texture, GLint level, GLsizei bufSize, void *pixels);
    typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERFVPROC) (GLuint texture, GLint level, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERIVPROC) (GLuint texture, GLint level, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERFVPROC) (GLuint texture, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIIVPROC) (GLuint texture, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIUIVPROC) (GLuint texture, GLenum pname, GLuint *params);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIVPROC) (GLuint texture, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLCREATEVERTEXARRAYSPROC) (GLsizei n, GLuint *arrays);
    typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
    typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYATTRIBPROC) (GLuint vaobj, GLuint index);
    typedef void (APIENTRYP PFNGLVERTEXARRAYELEMENTBUFFERPROC) (GLuint vaobj, GLuint buffer);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERPROC) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBUFFERSPROC) (GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
    typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBBINDINGPROC) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
    typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBIFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYATTRIBLFORMATPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYBINDINGDIVISORPROC) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
    typedef void (APIENTRYP PFNGLGETVERTEXARRAYIVPROC) (GLuint vaobj, GLenum pname, GLint *param);
    typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXEDIVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
    typedef void (APIENTRYP PFNGLGETVERTEXARRAYINDEXED64IVPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
    typedef void (APIENTRYP PFNGLCREATESAMPLERSPROC) (GLsizei n, GLuint *samplers);
    typedef void (APIENTRYP PFNGLCREATEPROGRAMPIPELINESPROC) (GLsizei n, GLuint *pipelines);
    typedef void (APIENTRYP PFNGLCREATEQUERIESPROC) (GLenum target, GLsizei n, GLuint *ids);
    typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUI64VPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    typedef void (APIENTRYP PFNGLGETQUERYBUFFEROBJECTUIVPROC) (GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    typedef void (APIENTRYP PFNGLMEMORYBARRIERBYREGIONPROC) (GLbitfield barriers);
    typedef void (APIENTRYP PFNGLGETTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
    typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
    typedef GLenum(APIENTRYP PFNGLGETGRAPHICSRESETSTATUSPROC) (void);
    typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEPROC) (GLenum target, GLint lod, GLsizei bufSize, void *pixels);
    typedef void (APIENTRYP PFNGLGETNTEXIMAGEPROC) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
    typedef void (APIENTRYP PFNGLGETNUNIFORMDVPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMFVPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMIVPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMUIVPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
    typedef void (APIENTRYP PFNGLREADNPIXELSPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
    typedef void (APIENTRYP PFNGLTEXTUREBARRIERPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glClipControl(GLenum origin, GLenum depth);
    GLAPI void APIENTRY glCreateTransformFeedbacks(GLsizei n, GLuint *ids);
    GLAPI void APIENTRY glTransformFeedbackBufferBase(GLuint xfb, GLuint index, GLuint buffer);
    GLAPI void APIENTRY glTransformFeedbackBufferRange(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
    GLAPI void APIENTRY glGetTransformFeedbackiv(GLuint xfb, GLenum pname, GLint *param);
    GLAPI void APIENTRY glGetTransformFeedbacki_v(GLuint xfb, GLenum pname, GLuint index, GLint *param);
    GLAPI void APIENTRY glGetTransformFeedbacki64_v(GLuint xfb, GLenum pname, GLuint index, GLint64 *param);
    GLAPI void APIENTRY glCreateBuffers(GLsizei n, GLuint *buffers);
    GLAPI void APIENTRY glNamedBufferStorage(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
    GLAPI void APIENTRY glNamedBufferData(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
    GLAPI void APIENTRY glNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
    GLAPI void APIENTRY glCopyNamedBufferSubData(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    GLAPI void APIENTRY glClearNamedBufferData(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
    GLAPI void APIENTRY glClearNamedBufferSubData(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
    GLAPI void *APIENTRY glMapNamedBuffer(GLuint buffer, GLenum access);
    GLAPI void *APIENTRY glMapNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
    GLAPI GLboolean APIENTRY glUnmapNamedBuffer(GLuint buffer);
    GLAPI void APIENTRY glFlushMappedNamedBufferRange(GLuint buffer, GLintptr offset, GLsizeiptr length);
    GLAPI void APIENTRY glGetNamedBufferParameteriv(GLuint buffer, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetNamedBufferParameteri64v(GLuint buffer, GLenum pname, GLint64 *params);
    GLAPI void APIENTRY glGetNamedBufferPointerv(GLuint buffer, GLenum pname, void **params);
    GLAPI void APIENTRY glGetNamedBufferSubData(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
    GLAPI void APIENTRY glCreateFramebuffers(GLsizei n, GLuint *framebuffers);
    GLAPI void APIENTRY glNamedFramebufferRenderbuffer(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    GLAPI void APIENTRY glNamedFramebufferParameteri(GLuint framebuffer, GLenum pname, GLint param);
    GLAPI void APIENTRY glNamedFramebufferTexture(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
    GLAPI void APIENTRY glNamedFramebufferTextureLayer(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
    GLAPI void APIENTRY glNamedFramebufferDrawBuffer(GLuint framebuffer, GLenum buf);
    GLAPI void APIENTRY glNamedFramebufferDrawBuffers(GLuint framebuffer, GLsizei n, const GLenum *bufs);
    GLAPI void APIENTRY glNamedFramebufferReadBuffer(GLuint framebuffer, GLenum src);
    GLAPI void APIENTRY glInvalidateNamedFramebufferData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments);
    GLAPI void APIENTRY glInvalidateNamedFramebufferSubData(GLuint framebuffer, GLsizei numAttachments, const GLenum *attachments, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glClearNamedFramebufferiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint *value);
    GLAPI void APIENTRY glClearNamedFramebufferuiv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint *value);
    GLAPI void APIENTRY glClearNamedFramebufferfv(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat *value);
    GLAPI void APIENTRY glClearNamedFramebufferfi(GLuint framebuffer, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
    GLAPI void APIENTRY glBlitNamedFramebuffer(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
    GLAPI GLenum APIENTRY glCheckNamedFramebufferStatus(GLuint framebuffer, GLenum target);
    GLAPI void APIENTRY glGetNamedFramebufferParameteriv(GLuint framebuffer, GLenum pname, GLint *param);
    GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameteriv(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
    GLAPI void APIENTRY glCreateRenderbuffers(GLsizei n, GLuint *renderbuffers);
    GLAPI void APIENTRY glNamedRenderbufferStorage(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glNamedRenderbufferStorageMultisample(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glGetNamedRenderbufferParameteriv(GLuint renderbuffer, GLenum pname, GLint *params);
    GLAPI void APIENTRY glCreateTextures(GLenum target, GLsizei n, GLuint *textures);
    GLAPI void APIENTRY glTextureBuffer(GLuint texture, GLenum internalformat, GLuint buffer);
    GLAPI void APIENTRY glTextureBufferRange(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    GLAPI void APIENTRY glTextureStorage1D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
    GLAPI void APIENTRY glTextureStorage2D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glTextureStorage3D(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    GLAPI void APIENTRY glTextureStorage2DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glTextureStorage3DMultisample(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glCompressedTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCompressedTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCompressedTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
    GLAPI void APIENTRY glCopyTextureSubImage1D(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    GLAPI void APIENTRY glCopyTextureSubImage2D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glCopyTextureSubImage3D(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glTextureParameterf(GLuint texture, GLenum pname, GLfloat param);
    GLAPI void APIENTRY glTextureParameterfv(GLuint texture, GLenum pname, const GLfloat *param);
    GLAPI void APIENTRY glTextureParameteri(GLuint texture, GLenum pname, GLint param);
    GLAPI void APIENTRY glTextureParameterIiv(GLuint texture, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glTextureParameterIuiv(GLuint texture, GLenum pname, const GLuint *params);
    GLAPI void APIENTRY glTextureParameteriv(GLuint texture, GLenum pname, const GLint *param);
    GLAPI void APIENTRY glGenerateTextureMipmap(GLuint texture);
    GLAPI void APIENTRY glBindTextureUnit(GLuint unit, GLuint texture);
    GLAPI void APIENTRY glGetTextureImage(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
    GLAPI void APIENTRY glGetCompressedTextureImage(GLuint texture, GLint level, GLsizei bufSize, void *pixels);
    GLAPI void APIENTRY glGetTextureLevelParameterfv(GLuint texture, GLint level, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetTextureLevelParameteriv(GLuint texture, GLint level, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetTextureParameterfv(GLuint texture, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetTextureParameterIiv(GLuint texture, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetTextureParameterIuiv(GLuint texture, GLenum pname, GLuint *params);
    GLAPI void APIENTRY glGetTextureParameteriv(GLuint texture, GLenum pname, GLint *params);
    GLAPI void APIENTRY glCreateVertexArrays(GLsizei n, GLuint *arrays);
    GLAPI void APIENTRY glDisableVertexArrayAttrib(GLuint vaobj, GLuint index);
    GLAPI void APIENTRY glEnableVertexArrayAttrib(GLuint vaobj, GLuint index);
    GLAPI void APIENTRY glVertexArrayElementBuffer(GLuint vaobj, GLuint buffer);
    GLAPI void APIENTRY glVertexArrayVertexBuffer(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    GLAPI void APIENTRY glVertexArrayVertexBuffers(GLuint vaobj, GLuint first, GLsizei count, const GLuint *buffers, const GLintptr *offsets, const GLsizei *strides);
    GLAPI void APIENTRY glVertexArrayAttribBinding(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
    GLAPI void APIENTRY glVertexArrayAttribFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexArrayAttribIFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexArrayAttribLFormat(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexArrayBindingDivisor(GLuint vaobj, GLuint bindingindex, GLuint divisor);
    GLAPI void APIENTRY glGetVertexArrayiv(GLuint vaobj, GLenum pname, GLint *param);
    GLAPI void APIENTRY glGetVertexArrayIndexediv(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
    GLAPI void APIENTRY glGetVertexArrayIndexed64iv(GLuint vaobj, GLuint index, GLenum pname, GLint64 *param);
    GLAPI void APIENTRY glCreateSamplers(GLsizei n, GLuint *samplers);
    GLAPI void APIENTRY glCreateProgramPipelines(GLsizei n, GLuint *pipelines);
    GLAPI void APIENTRY glCreateQueries(GLenum target, GLsizei n, GLuint *ids);
    GLAPI void APIENTRY glGetQueryBufferObjecti64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    GLAPI void APIENTRY glGetQueryBufferObjectiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    GLAPI void APIENTRY glGetQueryBufferObjectui64v(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    GLAPI void APIENTRY glGetQueryBufferObjectuiv(GLuint id, GLuint buffer, GLenum pname, GLintptr offset);
    GLAPI void APIENTRY glMemoryBarrierByRegion(GLbitfield barriers);
    GLAPI void APIENTRY glGetTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
    GLAPI void APIENTRY glGetCompressedTextureSubImage(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, void *pixels);
    GLAPI GLenum APIENTRY glGetGraphicsResetStatus(void);
    GLAPI void APIENTRY glGetnCompressedTexImage(GLenum target, GLint lod, GLsizei bufSize, void *pixels);
    GLAPI void APIENTRY glGetnTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *pixels);
    GLAPI void APIENTRY glGetnUniformdv(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
    GLAPI void APIENTRY glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
    GLAPI void APIENTRY glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint *params);
    GLAPI void APIENTRY glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
    GLAPI void APIENTRY glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
    GLAPI void APIENTRY glTextureBarrier(void);
#endif
#endif /* GL_VERSION_4_5 */

#ifndef GL_ARB_ES2_compatibility
#define GL_ARB_ES2_compatibility 1
#endif /* GL_ARB_ES2_compatibility */

#ifndef GL_ARB_ES3_1_compatibility
#define GL_ARB_ES3_1_compatibility 1
#endif /* GL_ARB_ES3_1_compatibility */

#ifndef GL_ARB_ES3_2_compatibility
#define GL_ARB_ES3_2_compatibility 1
#define GL_PRIMITIVE_BOUNDING_BOX_ARB     0x92BE
#define GL_MULTISAMPLE_LINE_WIDTH_RANGE_ARB 0x9381
#define GL_MULTISAMPLE_LINE_WIDTH_GRANULARITY_ARB 0x9382
    typedef void (APIENTRYP PFNGLPRIMITIVEBOUNDINGBOXARBPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glPrimitiveBoundingBoxARB(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
#endif
#endif /* GL_ARB_ES3_2_compatibility */

#ifndef GL_ARB_ES3_compatibility
#define GL_ARB_ES3_compatibility 1
#endif /* GL_ARB_ES3_compatibility */

#ifndef GL_ARB_arrays_of_arrays
#define GL_ARB_arrays_of_arrays 1
#endif /* GL_ARB_arrays_of_arrays */

#ifndef GL_ARB_base_instance
#define GL_ARB_base_instance 1
#endif /* GL_ARB_base_instance */

#ifndef GL_ARB_bindless_texture
#define GL_ARB_bindless_texture 1
    typedef uint64_t GLuint64EXT;
#define GL_UNSIGNED_INT64_ARB             0x140F
    typedef GLuint64(APIENTRYP PFNGLGETTEXTUREHANDLEARBPROC) (GLuint texture);
    typedef GLuint64(APIENTRYP PFNGLGETTEXTURESAMPLERHANDLEARBPROC) (GLuint texture, GLuint sampler);
    typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle);
    typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) (GLuint64 handle);
    typedef GLuint64(APIENTRYP PFNGLGETIMAGEHANDLEARBPROC) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle, GLenum access);
    typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) (GLuint64 handle);
    typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64ARBPROC) (GLint location, GLuint64 value);
    typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) (GLuint program, GLint location, GLuint64 value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *values);
    typedef GLboolean(APIENTRYP PFNGLISTEXTUREHANDLERESIDENTARBPROC) (GLuint64 handle);
    typedef GLboolean(APIENTRYP PFNGLISIMAGEHANDLERESIDENTARBPROC) (GLuint64 handle);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64ARBPROC) (GLuint index, GLuint64EXT x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64VARBPROC) (GLuint index, const GLuint64EXT *v);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLUI64VARBPROC) (GLuint index, GLenum pname, GLuint64EXT *params);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI GLuint64 APIENTRY glGetTextureHandleARB(GLuint texture);
    GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleARB(GLuint texture, GLuint sampler);
    GLAPI void APIENTRY glMakeTextureHandleResidentARB(GLuint64 handle);
    GLAPI void APIENTRY glMakeTextureHandleNonResidentARB(GLuint64 handle);
    GLAPI GLuint64 APIENTRY glGetImageHandleARB(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    GLAPI void APIENTRY glMakeImageHandleResidentARB(GLuint64 handle, GLenum access);
    GLAPI void APIENTRY glMakeImageHandleNonResidentARB(GLuint64 handle);
    GLAPI void APIENTRY glUniformHandleui64ARB(GLint location, GLuint64 value);
    GLAPI void APIENTRY glUniformHandleui64vARB(GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glProgramUniformHandleui64ARB(GLuint program, GLint location, GLuint64 value);
    GLAPI void APIENTRY glProgramUniformHandleui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *values);
    GLAPI GLboolean APIENTRY glIsTextureHandleResidentARB(GLuint64 handle);
    GLAPI GLboolean APIENTRY glIsImageHandleResidentARB(GLuint64 handle);
    GLAPI void APIENTRY glVertexAttribL1ui64ARB(GLuint index, GLuint64EXT x);
    GLAPI void APIENTRY glVertexAttribL1ui64vARB(GLuint index, const GLuint64EXT *v);
    GLAPI void APIENTRY glGetVertexAttribLui64vARB(GLuint index, GLenum pname, GLuint64EXT *params);
#endif
#endif /* GL_ARB_bindless_texture */

#ifndef GL_ARB_blend_func_extended
#define GL_ARB_blend_func_extended 1
#endif /* GL_ARB_blend_func_extended */

#ifndef GL_ARB_buffer_storage
#define GL_ARB_buffer_storage 1
#endif /* GL_ARB_buffer_storage */

#ifndef GL_ARB_cl_event
#define GL_ARB_cl_event 1
    struct _cl_context;
    struct _cl_event;
#define GL_SYNC_CL_EVENT_ARB              0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB     0x8241
    typedef GLsync(APIENTRYP PFNGLCREATESYNCFROMCLEVENTARBPROC) (struct _cl_context *context, struct _cl_event *event, GLbitfield flags);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI GLsync APIENTRY glCreateSyncFromCLeventARB(struct _cl_context *context, struct _cl_event *event, GLbitfield flags);
#endif
#endif /* GL_ARB_cl_event */

#ifndef GL_ARB_clear_buffer_object
#define GL_ARB_clear_buffer_object 1
#endif /* GL_ARB_clear_buffer_object */

#ifndef GL_ARB_clear_texture
#define GL_ARB_clear_texture 1
#endif /* GL_ARB_clear_texture */

#ifndef GL_ARB_clip_control
#define GL_ARB_clip_control 1
#endif /* GL_ARB_clip_control */

#ifndef GL_ARB_compressed_texture_pixel_storage
#define GL_ARB_compressed_texture_pixel_storage 1
#endif /* GL_ARB_compressed_texture_pixel_storage */

#ifndef GL_ARB_compute_shader
#define GL_ARB_compute_shader 1
#endif /* GL_ARB_compute_shader */

#ifndef GL_ARB_compute_variable_group_size
#define GL_ARB_compute_variable_group_size 1
#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB 0x9344
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB 0x90EB
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB 0x9345
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB 0x91BF
    typedef void (APIENTRYP PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) (GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDispatchComputeGroupSizeARB(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);
#endif
#endif /* GL_ARB_compute_variable_group_size */

#ifndef GL_ARB_conditional_render_inverted
#define GL_ARB_conditional_render_inverted 1
#endif /* GL_ARB_conditional_render_inverted */

#ifndef GL_ARB_conservative_depth
#define GL_ARB_conservative_depth 1
#endif /* GL_ARB_conservative_depth */

#ifndef GL_ARB_copy_buffer
#define GL_ARB_copy_buffer 1
#endif /* GL_ARB_copy_buffer */

#ifndef GL_ARB_copy_image
#define GL_ARB_copy_image 1
#endif /* GL_ARB_copy_image */

#ifndef GL_ARB_cull_distance
#define GL_ARB_cull_distance 1
#endif /* GL_ARB_cull_distance */

#ifndef GL_ARB_debug_output
#define GL_ARB_debug_output 1
    typedef void (APIENTRY  *GLDEBUGPROCARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *message, const void *userParam);
#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB   0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB    0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB  0x8245
#define GL_DEBUG_SOURCE_API_ARB           0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB   0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB   0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB         0x824B
#define GL_DEBUG_TYPE_ERROR_ARB           0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB     0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB     0x8250
#define GL_DEBUG_TYPE_OTHER_ARB           0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB   0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB  0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB      0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB        0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB      0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB         0x9148
    typedef void (APIENTRYP PFNGLDEBUGMESSAGECONTROLARBPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
    typedef void (APIENTRYP PFNGLDEBUGMESSAGEINSERTARBPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
    typedef void (APIENTRYP PFNGLDEBUGMESSAGECALLBACKARBPROC) (GLDEBUGPROCARB callback, const void *userParam);
    typedef GLuint(APIENTRYP PFNGLGETDEBUGMESSAGELOGARBPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDebugMessageControlARB(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
    GLAPI void APIENTRY glDebugMessageInsertARB(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
    GLAPI void APIENTRY glDebugMessageCallbackARB(GLDEBUGPROCARB callback, const void *userParam);
    GLAPI GLuint APIENTRY glGetDebugMessageLogARB(GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
#endif
#endif /* GL_ARB_debug_output */

#ifndef GL_ARB_depth_buffer_float
#define GL_ARB_depth_buffer_float 1
#endif /* GL_ARB_depth_buffer_float */

#ifndef GL_ARB_depth_clamp
#define GL_ARB_depth_clamp 1
#endif /* GL_ARB_depth_clamp */

#ifndef GL_ARB_derivative_control
#define GL_ARB_derivative_control 1
#endif /* GL_ARB_derivative_control */

#ifndef GL_ARB_direct_state_access
#define GL_ARB_direct_state_access 1
#endif /* GL_ARB_direct_state_access */

#ifndef GL_ARB_draw_buffers_blend
#define GL_ARB_draw_buffers_blend 1
    typedef void (APIENTRYP PFNGLBLENDEQUATIONIARBPROC) (GLuint buf, GLenum mode);
    typedef void (APIENTRYP PFNGLBLENDEQUATIONSEPARATEIARBPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    typedef void (APIENTRYP PFNGLBLENDFUNCIARBPROC) (GLuint buf, GLenum src, GLenum dst);
    typedef void (APIENTRYP PFNGLBLENDFUNCSEPARATEIARBPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBlendEquationiARB(GLuint buf, GLenum mode);
    GLAPI void APIENTRY glBlendEquationSeparateiARB(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
    GLAPI void APIENTRY glBlendFunciARB(GLuint buf, GLenum src, GLenum dst);
    GLAPI void APIENTRY glBlendFuncSeparateiARB(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
#endif
#endif /* GL_ARB_draw_buffers_blend */

#ifndef GL_ARB_draw_elements_base_vertex
#define GL_ARB_draw_elements_base_vertex 1
#endif /* GL_ARB_draw_elements_base_vertex */

#ifndef GL_ARB_draw_indirect
#define GL_ARB_draw_indirect 1
#endif /* GL_ARB_draw_indirect */

#ifndef GL_ARB_draw_instanced
#define GL_ARB_draw_instanced 1
    typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDARBPROC) (GLenum mode, GLint first, GLsizei count, GLsizei primcount);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDARBPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawArraysInstancedARB(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
    GLAPI void APIENTRY glDrawElementsInstancedARB(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
#endif
#endif /* GL_ARB_draw_instanced */

#ifndef GL_ARB_enhanced_layouts
#define GL_ARB_enhanced_layouts 1
#endif /* GL_ARB_enhanced_layouts */

#ifndef GL_ARB_explicit_attrib_location
#define GL_ARB_explicit_attrib_location 1
#endif /* GL_ARB_explicit_attrib_location */

#ifndef GL_ARB_explicit_uniform_location
#define GL_ARB_explicit_uniform_location 1
#endif /* GL_ARB_explicit_uniform_location */

#ifndef GL_ARB_fragment_coord_conventions
#define GL_ARB_fragment_coord_conventions 1
#endif /* GL_ARB_fragment_coord_conventions */

#ifndef GL_ARB_fragment_layer_viewport
#define GL_ARB_fragment_layer_viewport 1
#endif /* GL_ARB_fragment_layer_viewport */

#ifndef GL_ARB_fragment_shader_interlock
#define GL_ARB_fragment_shader_interlock 1
#endif /* GL_ARB_fragment_shader_interlock */

#ifndef GL_ARB_framebuffer_no_attachments
#define GL_ARB_framebuffer_no_attachments 1
#endif /* GL_ARB_framebuffer_no_attachments */

#ifndef GL_ARB_framebuffer_object
#define GL_ARB_framebuffer_object 1
#endif /* GL_ARB_framebuffer_object */

#ifndef GL_ARB_framebuffer_sRGB
#define GL_ARB_framebuffer_sRGB 1
#endif /* GL_ARB_framebuffer_sRGB */

#ifndef GL_ARB_geometry_shader4
#define GL_ARB_geometry_shader4 1
#define GL_LINES_ADJACENCY_ARB            0x000A
#define GL_LINE_STRIP_ADJACENCY_ARB       0x000B
#define GL_TRIANGLES_ADJACENCY_ARB        0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB   0x000D
#define GL_PROGRAM_POINT_SIZE_ARB         0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB 0x8DA9
#define GL_GEOMETRY_SHADER_ARB            0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB      0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB        0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB       0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB 0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB 0x8DE1
    typedef void (APIENTRYP PFNGLPROGRAMPARAMETERIARBPROC) (GLuint program, GLenum pname, GLint value);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glProgramParameteriARB(GLuint program, GLenum pname, GLint value);
    GLAPI void APIENTRY glFramebufferTextureARB(GLenum target, GLenum attachment, GLuint texture, GLint level);
    GLAPI void APIENTRY glFramebufferTextureLayerARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
    GLAPI void APIENTRY glFramebufferTextureFaceARB(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
#endif
#endif /* GL_ARB_geometry_shader4 */

#ifndef GL_ARB_get_program_binary
#define GL_ARB_get_program_binary 1
#endif /* GL_ARB_get_program_binary */

#ifndef GL_ARB_get_texture_sub_image
#define GL_ARB_get_texture_sub_image 1
#endif /* GL_ARB_get_texture_sub_image */

#ifndef GL_ARB_gl_spirv
#define GL_ARB_gl_spirv 1
#define GL_SHADER_BINARY_FORMAT_SPIR_V_ARB 0x9551
#define GL_SPIR_V_BINARY_ARB              0x9552
    typedef void (APIENTRYP PFNGLSPECIALIZESHADERARBPROC) (GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glSpecializeShaderARB(GLuint shader, const GLchar *pEntryPoint, GLuint numSpecializationConstants, const GLuint *pConstantIndex, const GLuint *pConstantValue);
#endif
#endif /* GL_ARB_gl_spirv */

#ifndef GL_ARB_gpu_shader5
#define GL_ARB_gpu_shader5 1
#endif /* GL_ARB_gpu_shader5 */

#ifndef GL_ARB_gpu_shader_fp64
#define GL_ARB_gpu_shader_fp64 1
#endif /* GL_ARB_gpu_shader_fp64 */

#ifndef GL_ARB_gpu_shader_int64
#define GL_ARB_gpu_shader_int64 1
#define GL_INT64_ARB                      0x140E
#define GL_INT64_VEC2_ARB                 0x8FE9
#define GL_INT64_VEC3_ARB                 0x8FEA
#define GL_INT64_VEC4_ARB                 0x8FEB
#define GL_UNSIGNED_INT64_VEC2_ARB        0x8FF5
#define GL_UNSIGNED_INT64_VEC3_ARB        0x8FF6
#define GL_UNSIGNED_INT64_VEC4_ARB        0x8FF7
    typedef void (APIENTRYP PFNGLUNIFORM1I64ARBPROC) (GLint location, GLint64 x);
    typedef void (APIENTRYP PFNGLUNIFORM2I64ARBPROC) (GLint location, GLint64 x, GLint64 y);
    typedef void (APIENTRYP PFNGLUNIFORM3I64ARBPROC) (GLint location, GLint64 x, GLint64 y, GLint64 z);
    typedef void (APIENTRYP PFNGLUNIFORM4I64ARBPROC) (GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
    typedef void (APIENTRYP PFNGLUNIFORM1I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLUNIFORM2I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLUNIFORM3I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLUNIFORM4I64VARBPROC) (GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLUNIFORM1UI64ARBPROC) (GLint location, GLuint64 x);
    typedef void (APIENTRYP PFNGLUNIFORM2UI64ARBPROC) (GLint location, GLuint64 x, GLuint64 y);
    typedef void (APIENTRYP PFNGLUNIFORM3UI64ARBPROC) (GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
    typedef void (APIENTRYP PFNGLUNIFORM4UI64ARBPROC) (GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
    typedef void (APIENTRYP PFNGLUNIFORM1UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLUNIFORM2UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLUNIFORM3UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLUNIFORM4UI64VARBPROC) (GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLGETUNIFORMI64VARBPROC) (GLuint program, GLint location, GLint64 *params);
    typedef void (APIENTRYP PFNGLGETUNIFORMUI64VARBPROC) (GLuint program, GLint location, GLuint64 *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMI64VARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMUI64VARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64ARBPROC) (GLuint program, GLint location, GLint64 x);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64ARBPROC) (GLuint program, GLint location, GLint64 x, GLint64 y);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64ARBPROC) (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64ARBPROC) (GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64ARBPROC) (GLuint program, GLint location, GLuint64 x);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64ARBPROC) (GLuint program, GLint location, GLuint64 x, GLuint64 y);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64ARBPROC) (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64ARBPROC) (GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64VARBPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *value);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glUniform1i64ARB(GLint location, GLint64 x);
    GLAPI void APIENTRY glUniform2i64ARB(GLint location, GLint64 x, GLint64 y);
    GLAPI void APIENTRY glUniform3i64ARB(GLint location, GLint64 x, GLint64 y, GLint64 z);
    GLAPI void APIENTRY glUniform4i64ARB(GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
    GLAPI void APIENTRY glUniform1i64vARB(GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glUniform2i64vARB(GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glUniform3i64vARB(GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glUniform4i64vARB(GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glUniform1ui64ARB(GLint location, GLuint64 x);
    GLAPI void APIENTRY glUniform2ui64ARB(GLint location, GLuint64 x, GLuint64 y);
    GLAPI void APIENTRY glUniform3ui64ARB(GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
    GLAPI void APIENTRY glUniform4ui64ARB(GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
    GLAPI void APIENTRY glUniform1ui64vARB(GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glUniform2ui64vARB(GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glUniform3ui64vARB(GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glUniform4ui64vARB(GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glGetUniformi64vARB(GLuint program, GLint location, GLint64 *params);
    GLAPI void APIENTRY glGetUniformui64vARB(GLuint program, GLint location, GLuint64 *params);
    GLAPI void APIENTRY glGetnUniformi64vARB(GLuint program, GLint location, GLsizei bufSize, GLint64 *params);
    GLAPI void APIENTRY glGetnUniformui64vARB(GLuint program, GLint location, GLsizei bufSize, GLuint64 *params);
    GLAPI void APIENTRY glProgramUniform1i64ARB(GLuint program, GLint location, GLint64 x);
    GLAPI void APIENTRY glProgramUniform2i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y);
    GLAPI void APIENTRY glProgramUniform3i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z);
    GLAPI void APIENTRY glProgramUniform4i64ARB(GLuint program, GLint location, GLint64 x, GLint64 y, GLint64 z, GLint64 w);
    GLAPI void APIENTRY glProgramUniform1i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glProgramUniform2i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glProgramUniform3i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glProgramUniform4i64vARB(GLuint program, GLint location, GLsizei count, const GLint64 *value);
    GLAPI void APIENTRY glProgramUniform1ui64ARB(GLuint program, GLint location, GLuint64 x);
    GLAPI void APIENTRY glProgramUniform2ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y);
    GLAPI void APIENTRY glProgramUniform3ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z);
    GLAPI void APIENTRY glProgramUniform4ui64ARB(GLuint program, GLint location, GLuint64 x, GLuint64 y, GLuint64 z, GLuint64 w);
    GLAPI void APIENTRY glProgramUniform1ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glProgramUniform2ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glProgramUniform3ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glProgramUniform4ui64vARB(GLuint program, GLint location, GLsizei count, const GLuint64 *value);
#endif
#endif /* GL_ARB_gpu_shader_int64 */

#ifndef GL_ARB_half_float_vertex
#define GL_ARB_half_float_vertex 1
#endif /* GL_ARB_half_float_vertex */

#ifndef GL_ARB_imaging
#define GL_ARB_imaging 1
#define GL_BLEND_COLOR                    0x8005
#define GL_BLEND_EQUATION                 0x8009
#endif /* GL_ARB_imaging */

#ifndef GL_ARB_indirect_parameters
#define GL_ARB_indirect_parameters 1
#define GL_PARAMETER_BUFFER_ARB           0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB   0x80EF
    typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) (GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
    typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) (GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMultiDrawArraysIndirectCountARB(GLenum mode, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
    GLAPI void APIENTRY glMultiDrawElementsIndirectCountARB(GLenum mode, GLenum type, GLintptr indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
#endif
#endif /* GL_ARB_indirect_parameters */

#ifndef GL_ARB_instanced_arrays
#define GL_ARB_instanced_arrays 1
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE
    typedef void (APIENTRYP PFNGLVERTEXATTRIBDIVISORARBPROC) (GLuint index, GLuint divisor);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glVertexAttribDivisorARB(GLuint index, GLuint divisor);
#endif
#endif /* GL_ARB_instanced_arrays */

#ifndef GL_ARB_internalformat_query
#define GL_ARB_internalformat_query 1
#endif /* GL_ARB_internalformat_query */

#ifndef GL_ARB_internalformat_query2
#define GL_ARB_internalformat_query2 1
#define GL_SRGB_DECODE_ARB                0x8299
#endif /* GL_ARB_internalformat_query2 */

#ifndef GL_ARB_invalidate_subdata
#define GL_ARB_invalidate_subdata 1
#endif /* GL_ARB_invalidate_subdata */

#ifndef GL_ARB_map_buffer_alignment
#define GL_ARB_map_buffer_alignment 1
#endif /* GL_ARB_map_buffer_alignment */

#ifndef GL_ARB_map_buffer_range
#define GL_ARB_map_buffer_range 1
#endif /* GL_ARB_map_buffer_range */

#ifndef GL_ARB_multi_bind
#define GL_ARB_multi_bind 1
#endif /* GL_ARB_multi_bind */

#ifndef GL_ARB_multi_draw_indirect
#define GL_ARB_multi_draw_indirect 1
#endif /* GL_ARB_multi_draw_indirect */

#ifndef GL_ARB_occlusion_query2
#define GL_ARB_occlusion_query2 1
#endif /* GL_ARB_occlusion_query2 */

#ifndef GL_ARB_parallel_shader_compile
#define GL_ARB_parallel_shader_compile 1
#define GL_MAX_SHADER_COMPILER_THREADS_ARB 0x91B0
#define GL_COMPLETION_STATUS_ARB          0x91B1
    typedef void (APIENTRYP PFNGLMAXSHADERCOMPILERTHREADSARBPROC) (GLuint count);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMaxShaderCompilerThreadsARB(GLuint count);
#endif
#endif /* GL_ARB_parallel_shader_compile */

#ifndef GL_ARB_pipeline_statistics_query
#define GL_ARB_pipeline_statistics_query 1
#define GL_VERTICES_SUBMITTED_ARB         0x82EE
#define GL_PRIMITIVES_SUBMITTED_ARB       0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS_ARB  0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB  0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB 0x82F7
#endif /* GL_ARB_pipeline_statistics_query */

#ifndef GL_ARB_pixel_buffer_object
#define GL_ARB_pixel_buffer_object 1
#define GL_PIXEL_PACK_BUFFER_ARB          0x88EB
#define GL_PIXEL_UNPACK_BUFFER_ARB        0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB  0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB 0x88EF
#endif /* GL_ARB_pixel_buffer_object */

#ifndef GL_ARB_post_depth_coverage
#define GL_ARB_post_depth_coverage 1
#endif /* GL_ARB_post_depth_coverage */

#ifndef GL_ARB_program_interface_query
#define GL_ARB_program_interface_query 1
#endif /* GL_ARB_program_interface_query */

#ifndef GL_ARB_provoking_vertex
#define GL_ARB_provoking_vertex 1
#endif /* GL_ARB_provoking_vertex */

#ifndef GL_ARB_query_buffer_object
#define GL_ARB_query_buffer_object 1
#endif /* GL_ARB_query_buffer_object */

#ifndef GL_ARB_robust_buffer_access_behavior
#define GL_ARB_robust_buffer_access_behavior 1
#endif /* GL_ARB_robust_buffer_access_behavior */

#ifndef GL_ARB_robustness
#define GL_ARB_robustness 1
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB      0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB       0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GL_NO_RESET_NOTIFICATION_ARB      0x8261
    typedef GLenum(APIENTRYP PFNGLGETGRAPHICSRESETSTATUSARBPROC) (void);
    typedef void (APIENTRYP PFNGLGETNTEXIMAGEARBPROC) (GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img);
    typedef void (APIENTRYP PFNGLREADNPIXELSARBPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
    typedef void (APIENTRYP PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) (GLenum target, GLint lod, GLsizei bufSize, void *img);
    typedef void (APIENTRYP PFNGLGETNUNIFORMFVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMUIVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
    typedef void (APIENTRYP PFNGLGETNUNIFORMDVARBPROC) (GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI GLenum APIENTRY glGetGraphicsResetStatusARB(void);
    GLAPI void APIENTRY glGetnTexImageARB(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void *img);
    GLAPI void APIENTRY glReadnPixelsARB(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
    GLAPI void APIENTRY glGetnCompressedTexImageARB(GLenum target, GLint lod, GLsizei bufSize, void *img);
    GLAPI void APIENTRY glGetnUniformfvARB(GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
    GLAPI void APIENTRY glGetnUniformivARB(GLuint program, GLint location, GLsizei bufSize, GLint *params);
    GLAPI void APIENTRY glGetnUniformuivARB(GLuint program, GLint location, GLsizei bufSize, GLuint *params);
    GLAPI void APIENTRY glGetnUniformdvARB(GLuint program, GLint location, GLsizei bufSize, GLdouble *params);
#endif
#endif /* GL_ARB_robustness */

#ifndef GL_ARB_robustness_isolation
#define GL_ARB_robustness_isolation 1
#endif /* GL_ARB_robustness_isolation */

#ifndef GL_ARB_sample_locations
#define GL_ARB_sample_locations 1
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_ARB 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_ARB 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_ARB 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_ARB 0x9340
#define GL_SAMPLE_LOCATION_ARB            0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_ARB 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_ARB 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_ARB 0x9343
    typedef void (APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) (GLenum target, GLuint start, GLsizei count, const GLfloat *v);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
    typedef void (APIENTRYP PFNGLEVALUATEDEPTHVALUESARBPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glFramebufferSampleLocationsfvARB(GLenum target, GLuint start, GLsizei count, const GLfloat *v);
    GLAPI void APIENTRY glNamedFramebufferSampleLocationsfvARB(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
    GLAPI void APIENTRY glEvaluateDepthValuesARB(void);
#endif
#endif /* GL_ARB_sample_locations */

#ifndef GL_ARB_sample_shading
#define GL_ARB_sample_shading 1
#define GL_SAMPLE_SHADING_ARB             0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB   0x8C37
    typedef void (APIENTRYP PFNGLMINSAMPLESHADINGARBPROC) (GLfloat value);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMinSampleShadingARB(GLfloat value);
#endif
#endif /* GL_ARB_sample_shading */

#ifndef GL_ARB_sampler_objects
#define GL_ARB_sampler_objects 1
#endif /* GL_ARB_sampler_objects */

#ifndef GL_ARB_seamless_cube_map
#define GL_ARB_seamless_cube_map 1
#endif /* GL_ARB_seamless_cube_map */

#ifndef GL_ARB_seamless_cubemap_per_texture
#define GL_ARB_seamless_cubemap_per_texture 1
#endif /* GL_ARB_seamless_cubemap_per_texture */

#ifndef GL_ARB_separate_shader_objects
#define GL_ARB_separate_shader_objects 1
#endif /* GL_ARB_separate_shader_objects */

#ifndef GL_ARB_shader_atomic_counter_ops
#define GL_ARB_shader_atomic_counter_ops 1
#endif /* GL_ARB_shader_atomic_counter_ops */

#ifndef GL_ARB_shader_atomic_counters
#define GL_ARB_shader_atomic_counters 1
#endif /* GL_ARB_shader_atomic_counters */

#ifndef GL_ARB_shader_ballot
#define GL_ARB_shader_ballot 1
#endif /* GL_ARB_shader_ballot */

#ifndef GL_ARB_shader_bit_encoding
#define GL_ARB_shader_bit_encoding 1
#endif /* GL_ARB_shader_bit_encoding */

#ifndef GL_ARB_shader_clock
#define GL_ARB_shader_clock 1
#endif /* GL_ARB_shader_clock */

#ifndef GL_ARB_shader_draw_parameters
#define GL_ARB_shader_draw_parameters 1
#endif /* GL_ARB_shader_draw_parameters */

#ifndef GL_ARB_shader_group_vote
#define GL_ARB_shader_group_vote 1
#endif /* GL_ARB_shader_group_vote */

#ifndef GL_ARB_shader_image_load_store
#define GL_ARB_shader_image_load_store 1
#endif /* GL_ARB_shader_image_load_store */

#ifndef GL_ARB_shader_image_size
#define GL_ARB_shader_image_size 1
#endif /* GL_ARB_shader_image_size */

#ifndef GL_ARB_shader_precision
#define GL_ARB_shader_precision 1
#endif /* GL_ARB_shader_precision */

#ifndef GL_ARB_shader_stencil_export
#define GL_ARB_shader_stencil_export 1
#endif /* GL_ARB_shader_stencil_export */

#ifndef GL_ARB_shader_storage_buffer_object
#define GL_ARB_shader_storage_buffer_object 1
#endif /* GL_ARB_shader_storage_buffer_object */

#ifndef GL_ARB_shader_subroutine
#define GL_ARB_shader_subroutine 1
#endif /* GL_ARB_shader_subroutine */

#ifndef GL_ARB_shader_texture_image_samples
#define GL_ARB_shader_texture_image_samples 1
#endif /* GL_ARB_shader_texture_image_samples */

#ifndef GL_ARB_shader_viewport_layer_array
#define GL_ARB_shader_viewport_layer_array 1
#endif /* GL_ARB_shader_viewport_layer_array */

#ifndef GL_ARB_shading_language_420pack
#define GL_ARB_shading_language_420pack 1
#endif /* GL_ARB_shading_language_420pack */

#ifndef GL_ARB_shading_language_include
#define GL_ARB_shading_language_include 1
#define GL_SHADER_INCLUDE_ARB             0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB        0x8DE9
#define GL_NAMED_STRING_TYPE_ARB          0x8DEA
    typedef void (APIENTRYP PFNGLNAMEDSTRINGARBPROC) (GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string);
    typedef void (APIENTRYP PFNGLDELETENAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name);
    typedef void (APIENTRYP PFNGLCOMPILESHADERINCLUDEARBPROC) (GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length);
    typedef GLboolean(APIENTRYP PFNGLISNAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name);
    typedef void (APIENTRYP PFNGLGETNAMEDSTRINGARBPROC) (GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
    typedef void (APIENTRYP PFNGLGETNAMEDSTRINGIVARBPROC) (GLint namelen, const GLchar *name, GLenum pname, GLint *params);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glNamedStringARB(GLenum type, GLint namelen, const GLchar *name, GLint stringlen, const GLchar *string);
    GLAPI void APIENTRY glDeleteNamedStringARB(GLint namelen, const GLchar *name);
    GLAPI void APIENTRY glCompileShaderIncludeARB(GLuint shader, GLsizei count, const GLchar *const*path, const GLint *length);
    GLAPI GLboolean APIENTRY glIsNamedStringARB(GLint namelen, const GLchar *name);
    GLAPI void APIENTRY glGetNamedStringARB(GLint namelen, const GLchar *name, GLsizei bufSize, GLint *stringlen, GLchar *string);
    GLAPI void APIENTRY glGetNamedStringivARB(GLint namelen, const GLchar *name, GLenum pname, GLint *params);
#endif
#endif /* GL_ARB_shading_language_include */

#ifndef GL_ARB_shading_language_packing
#define GL_ARB_shading_language_packing 1
#endif /* GL_ARB_shading_language_packing */

#ifndef GL_ARB_sparse_buffer
#define GL_ARB_sparse_buffer 1
#define GL_SPARSE_STORAGE_BIT_ARB         0x0400
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB    0x82F8
    typedef void (APIENTRYP PFNGLBUFFERPAGECOMMITMENTARBPROC) (GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBufferPageCommitmentARB(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);
    GLAPI void APIENTRY glNamedBufferPageCommitmentEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
    GLAPI void APIENTRY glNamedBufferPageCommitmentARB(GLuint buffer, GLintptr offset, GLsizeiptr size, GLboolean commit);
#endif
#endif /* GL_ARB_sparse_buffer */

#ifndef GL_ARB_sparse_texture
#define GL_ARB_sparse_texture 1
#define GL_TEXTURE_SPARSE_ARB             0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB    0x91A7
#define GL_NUM_SPARSE_LEVELS_ARB          0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB     0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_ARB        0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB        0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB        0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB    0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB 0x91A9
    typedef void (APIENTRYP PFNGLTEXPAGECOMMITMENTARBPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glTexPageCommitmentARB(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
#endif
#endif /* GL_ARB_sparse_texture */

#ifndef GL_ARB_sparse_texture2
#define GL_ARB_sparse_texture2 1
#endif /* GL_ARB_sparse_texture2 */

#ifndef GL_ARB_sparse_texture_clamp
#define GL_ARB_sparse_texture_clamp 1
#endif /* GL_ARB_sparse_texture_clamp */

#ifndef GL_ARB_stencil_texturing
#define GL_ARB_stencil_texturing 1
#endif /* GL_ARB_stencil_texturing */

#ifndef GL_ARB_sync
#define GL_ARB_sync 1
#endif /* GL_ARB_sync */

#ifndef GL_ARB_tessellation_shader
#define GL_ARB_tessellation_shader 1
#endif /* GL_ARB_tessellation_shader */

#ifndef GL_ARB_texture_barrier
#define GL_ARB_texture_barrier 1
#endif /* GL_ARB_texture_barrier */

#ifndef GL_ARB_texture_border_clamp
#define GL_ARB_texture_border_clamp 1
#define GL_CLAMP_TO_BORDER_ARB            0x812D
#endif /* GL_ARB_texture_border_clamp */

#ifndef GL_ARB_texture_buffer_object
#define GL_ARB_texture_buffer_object 1
#define GL_TEXTURE_BUFFER_ARB             0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB    0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_ARB     0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB      0x8C2E
    typedef void (APIENTRYP PFNGLTEXBUFFERARBPROC) (GLenum target, GLenum internalformat, GLuint buffer);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glTexBufferARB(GLenum target, GLenum internalformat, GLuint buffer);
#endif
#endif /* GL_ARB_texture_buffer_object */

#ifndef GL_ARB_texture_buffer_object_rgb32
#define GL_ARB_texture_buffer_object_rgb32 1
#endif /* GL_ARB_texture_buffer_object_rgb32 */

#ifndef GL_ARB_texture_buffer_range
#define GL_ARB_texture_buffer_range 1
#endif /* GL_ARB_texture_buffer_range */

#ifndef GL_ARB_texture_compression_bptc
#define GL_ARB_texture_compression_bptc 1
#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F
#endif /* GL_ARB_texture_compression_bptc */

#ifndef GL_ARB_texture_compression_rgtc
#define GL_ARB_texture_compression_rgtc 1
#endif /* GL_ARB_texture_compression_rgtc */

#ifndef GL_ARB_texture_cube_map_array
#define GL_ARB_texture_cube_map_array 1
#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB     0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB     0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F
#endif /* GL_ARB_texture_cube_map_array */

#ifndef GL_ARB_texture_filter_minmax
#define GL_ARB_texture_filter_minmax 1
#define GL_TEXTURE_REDUCTION_MODE_ARB     0x9366
#define GL_WEIGHTED_AVERAGE_ARB           0x9367
#endif /* GL_ARB_texture_filter_minmax */

#ifndef GL_ARB_texture_gather
#define GL_ARB_texture_gather 1
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F
#define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB 0x8F9F
#endif /* GL_ARB_texture_gather */

#ifndef GL_ARB_texture_mirror_clamp_to_edge
#define GL_ARB_texture_mirror_clamp_to_edge 1
#endif /* GL_ARB_texture_mirror_clamp_to_edge */

#ifndef GL_ARB_texture_mirrored_repeat
#define GL_ARB_texture_mirrored_repeat 1
#define GL_MIRRORED_REPEAT_ARB            0x8370
#endif /* GL_ARB_texture_mirrored_repeat */

#ifndef GL_ARB_texture_multisample
#define GL_ARB_texture_multisample 1
#endif /* GL_ARB_texture_multisample */

#ifndef GL_ARB_texture_non_power_of_two
#define GL_ARB_texture_non_power_of_two 1
#endif /* GL_ARB_texture_non_power_of_two */

#ifndef GL_ARB_texture_query_levels
#define GL_ARB_texture_query_levels 1
#endif /* GL_ARB_texture_query_levels */

#ifndef GL_ARB_texture_query_lod
#define GL_ARB_texture_query_lod 1
#endif /* GL_ARB_texture_query_lod */

#ifndef GL_ARB_texture_rg
#define GL_ARB_texture_rg 1
#endif /* GL_ARB_texture_rg */

#ifndef GL_ARB_texture_rgb10_a2ui
#define GL_ARB_texture_rgb10_a2ui 1
#endif /* GL_ARB_texture_rgb10_a2ui */

#ifndef GL_ARB_texture_stencil8
#define GL_ARB_texture_stencil8 1
#endif /* GL_ARB_texture_stencil8 */

#ifndef GL_ARB_texture_storage
#define GL_ARB_texture_storage 1
#endif /* GL_ARB_texture_storage */

#ifndef GL_ARB_texture_storage_multisample
#define GL_ARB_texture_storage_multisample 1
#endif /* GL_ARB_texture_storage_multisample */

#ifndef GL_ARB_texture_swizzle
#define GL_ARB_texture_swizzle 1
#endif /* GL_ARB_texture_swizzle */

#ifndef GL_ARB_texture_view
#define GL_ARB_texture_view 1
#endif /* GL_ARB_texture_view */

#ifndef GL_ARB_timer_query
#define GL_ARB_timer_query 1
#endif /* GL_ARB_timer_query */

#ifndef GL_ARB_transform_feedback2
#define GL_ARB_transform_feedback2 1
#endif /* GL_ARB_transform_feedback2 */

#ifndef GL_ARB_transform_feedback3
#define GL_ARB_transform_feedback3 1
#endif /* GL_ARB_transform_feedback3 */

#ifndef GL_ARB_transform_feedback_instanced
#define GL_ARB_transform_feedback_instanced 1
#endif /* GL_ARB_transform_feedback_instanced */

#ifndef GL_ARB_transform_feedback_overflow_query
#define GL_ARB_transform_feedback_overflow_query 1
#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB 0x82ED
#endif /* GL_ARB_transform_feedback_overflow_query */

#ifndef GL_ARB_uniform_buffer_object
#define GL_ARB_uniform_buffer_object 1
#endif /* GL_ARB_uniform_buffer_object */

#ifndef GL_ARB_vertex_array_bgra
#define GL_ARB_vertex_array_bgra 1
#endif /* GL_ARB_vertex_array_bgra */

#ifndef GL_ARB_vertex_array_object
#define GL_ARB_vertex_array_object 1
#endif /* GL_ARB_vertex_array_object */

#ifndef GL_ARB_vertex_attrib_64bit
#define GL_ARB_vertex_attrib_64bit 1
#endif /* GL_ARB_vertex_attrib_64bit */

#ifndef GL_ARB_vertex_attrib_binding
#define GL_ARB_vertex_attrib_binding 1
#endif /* GL_ARB_vertex_attrib_binding */

#ifndef GL_ARB_vertex_type_10f_11f_11f_rev
#define GL_ARB_vertex_type_10f_11f_11f_rev 1
#endif /* GL_ARB_vertex_type_10f_11f_11f_rev */

#ifndef GL_ARB_vertex_type_2_10_10_10_rev
#define GL_ARB_vertex_type_2_10_10_10_rev 1
#endif /* GL_ARB_vertex_type_2_10_10_10_rev */

#ifndef GL_ARB_viewport_array
#define GL_ARB_viewport_array 1
#endif /* GL_ARB_viewport_array */

#ifndef GL_KHR_blend_equation_advanced
#define GL_KHR_blend_equation_advanced 1
#define GL_MULTIPLY_KHR                   0x9294
#define GL_SCREEN_KHR                     0x9295
#define GL_OVERLAY_KHR                    0x9296
#define GL_DARKEN_KHR                     0x9297
#define GL_LIGHTEN_KHR                    0x9298
#define GL_COLORDODGE_KHR                 0x9299
#define GL_COLORBURN_KHR                  0x929A
#define GL_HARDLIGHT_KHR                  0x929B
#define GL_SOFTLIGHT_KHR                  0x929C
#define GL_DIFFERENCE_KHR                 0x929E
#define GL_EXCLUSION_KHR                  0x92A0
#define GL_HSL_HUE_KHR                    0x92AD
#define GL_HSL_SATURATION_KHR             0x92AE
#define GL_HSL_COLOR_KHR                  0x92AF
#define GL_HSL_LUMINOSITY_KHR             0x92B0
    typedef void (APIENTRYP PFNGLBLENDBARRIERKHRPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBlendBarrierKHR(void);
#endif
#endif /* GL_KHR_blend_equation_advanced */

#ifndef GL_KHR_blend_equation_advanced_coherent
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_KHR    0x9285
#endif /* GL_KHR_blend_equation_advanced_coherent */

#ifndef GL_KHR_context_flush_control
#define GL_KHR_context_flush_control 1
#endif /* GL_KHR_context_flush_control */

#ifndef GL_KHR_debug
#define GL_KHR_debug 1
#endif /* GL_KHR_debug */

#ifndef GL_KHR_no_error
#define GL_KHR_no_error 1
#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR  0x00000008
#endif /* GL_KHR_no_error */

#ifndef GL_KHR_robust_buffer_access_behavior
#define GL_KHR_robust_buffer_access_behavior 1
#endif /* GL_KHR_robust_buffer_access_behavior */

#ifndef GL_KHR_robustness
#define GL_KHR_robustness 1
#define GL_CONTEXT_ROBUST_ACCESS          0x90F3
#endif /* GL_KHR_robustness */

#ifndef GL_KHR_texture_compression_astc_hdr
#define GL_KHR_texture_compression_astc_hdr 1
#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR   0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR   0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR   0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR   0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR   0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR   0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR   0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR   0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR  0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR  0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR  0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD
#endif /* GL_KHR_texture_compression_astc_hdr */

#ifndef GL_KHR_texture_compression_astc_ldr
#define GL_KHR_texture_compression_astc_ldr 1
#endif /* GL_KHR_texture_compression_astc_ldr */

#ifndef GL_KHR_texture_compression_astc_sliced_3d
#define GL_KHR_texture_compression_astc_sliced_3d 1
#endif /* GL_KHR_texture_compression_astc_sliced_3d */

#ifndef GL_AMD_performance_monitor
#define GL_AMD_performance_monitor 1
#define GL_COUNTER_TYPE_AMD               0x8BC0
#define GL_COUNTER_RANGE_AMD              0x8BC1
#define GL_UNSIGNED_INT64_AMD             0x8BC2
#define GL_PERCENTAGE_AMD                 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD   0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD        0x8BC5
#define GL_PERFMON_RESULT_AMD             0x8BC6
    typedef void (APIENTRYP PFNGLGETPERFMONITORGROUPSAMDPROC) (GLint *numGroups, GLsizei groupsSize, GLuint *groups);
    typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERSAMDPROC) (GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
    typedef void (APIENTRYP PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) (GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
    typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) (GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
    typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) (GLuint group, GLuint counter, GLenum pname, void *data);
    typedef void (APIENTRYP PFNGLGENPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
    typedef void (APIENTRYP PFNGLDELETEPERFMONITORSAMDPROC) (GLsizei n, GLuint *monitors);
    typedef void (APIENTRYP PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) (GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
    typedef void (APIENTRYP PFNGLBEGINPERFMONITORAMDPROC) (GLuint monitor);
    typedef void (APIENTRYP PFNGLENDPERFMONITORAMDPROC) (GLuint monitor);
    typedef void (APIENTRYP PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) (GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glGetPerfMonitorGroupsAMD(GLint *numGroups, GLsizei groupsSize, GLuint *groups);
    GLAPI void APIENTRY glGetPerfMonitorCountersAMD(GLuint group, GLint *numCounters, GLint *maxActiveCounters, GLsizei counterSize, GLuint *counters);
    GLAPI void APIENTRY glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei *length, GLchar *groupString);
    GLAPI void APIENTRY glGetPerfMonitorCounterStringAMD(GLuint group, GLuint counter, GLsizei bufSize, GLsizei *length, GLchar *counterString);
    GLAPI void APIENTRY glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, void *data);
    GLAPI void APIENTRY glGenPerfMonitorsAMD(GLsizei n, GLuint *monitors);
    GLAPI void APIENTRY glDeletePerfMonitorsAMD(GLsizei n, GLuint *monitors);
    GLAPI void APIENTRY glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint *counterList);
    GLAPI void APIENTRY glBeginPerfMonitorAMD(GLuint monitor);
    GLAPI void APIENTRY glEndPerfMonitorAMD(GLuint monitor);
    GLAPI void APIENTRY glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint *data, GLint *bytesWritten);
#endif
#endif /* GL_AMD_performance_monitor */

#ifndef GL_APPLE_rgb_422
#define GL_APPLE_rgb_422 1
#define GL_RGB_422_APPLE                  0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE       0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE   0x85BB
#define GL_RGB_RAW_422_APPLE              0x8A51
#endif /* GL_APPLE_rgb_422 */

#ifndef GL_EXT_debug_label
#define GL_EXT_debug_label 1
#define GL_PROGRAM_PIPELINE_OBJECT_EXT    0x8A4F
#define GL_PROGRAM_OBJECT_EXT             0x8B40
#define GL_SHADER_OBJECT_EXT              0x8B48
#define GL_BUFFER_OBJECT_EXT              0x9151
#define GL_QUERY_OBJECT_EXT               0x9153
#define GL_VERTEX_ARRAY_OBJECT_EXT        0x9154
    typedef void (APIENTRYP PFNGLLABELOBJECTEXTPROC) (GLenum type, GLuint object, GLsizei length, const GLchar *label);
    typedef void (APIENTRYP PFNGLGETOBJECTLABELEXTPROC) (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar *label);
    GLAPI void APIENTRY glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
#endif
#endif /* GL_EXT_debug_label */

#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker 1
    typedef void (APIENTRYP PFNGLINSERTEVENTMARKEREXTPROC) (GLsizei length, const GLchar *marker);
    typedef void (APIENTRYP PFNGLPUSHGROUPMARKEREXTPROC) (GLsizei length, const GLchar *marker);
    typedef void (APIENTRYP PFNGLPOPGROUPMARKEREXTPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glInsertEventMarkerEXT(GLsizei length, const GLchar *marker);
    GLAPI void APIENTRY glPushGroupMarkerEXT(GLsizei length, const GLchar *marker);
    GLAPI void APIENTRY glPopGroupMarkerEXT(void);
#endif
#endif /* GL_EXT_debug_marker */

#ifndef GL_EXT_direct_state_access
#define GL_EXT_direct_state_access 1
#define GL_PROGRAM_MATRIX_EXT             0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT   0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F
    typedef void (APIENTRYP PFNGLMATRIXLOADFEXTPROC) (GLenum mode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXLOADDEXTPROC) (GLenum mode, const GLdouble *m);
    typedef void (APIENTRYP PFNGLMATRIXMULTFEXTPROC) (GLenum mode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXMULTDEXTPROC) (GLenum mode, const GLdouble *m);
    typedef void (APIENTRYP PFNGLMATRIXLOADIDENTITYEXTPROC) (GLenum mode);
    typedef void (APIENTRYP PFNGLMATRIXROTATEFEXTPROC) (GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
    typedef void (APIENTRYP PFNGLMATRIXROTATEDEXTPROC) (GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
    typedef void (APIENTRYP PFNGLMATRIXSCALEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
    typedef void (APIENTRYP PFNGLMATRIXSCALEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
    typedef void (APIENTRYP PFNGLMATRIXTRANSLATEFEXTPROC) (GLenum mode, GLfloat x, GLfloat y, GLfloat z);
    typedef void (APIENTRYP PFNGLMATRIXTRANSLATEDEXTPROC) (GLenum mode, GLdouble x, GLdouble y, GLdouble z);
    typedef void (APIENTRYP PFNGLMATRIXFRUSTUMEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
    typedef void (APIENTRYP PFNGLMATRIXORTHOEXTPROC) (GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
    typedef void (APIENTRYP PFNGLMATRIXPOPEXTPROC) (GLenum mode);
    typedef void (APIENTRYP PFNGLMATRIXPUSHEXTPROC) (GLenum mode);
    typedef void (APIENTRYP PFNGLCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
    typedef void (APIENTRYP PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) (GLbitfield mask);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLCOPYTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    typedef void (APIENTRYP PFNGLCOPYTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLGETTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLBINDMULTITEXTUREEXTPROC) (GLenum texunit, GLenum target, GLuint texture);
    typedef void (APIENTRYP PFNGLMULTITEXCOORDPOINTEREXTPROC) (GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer);
    typedef void (APIENTRYP PFNGLMULTITEXENVFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
    typedef void (APIENTRYP PFNGLMULTITEXENVIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLMULTITEXGENDEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
    typedef void (APIENTRYP PFNGLMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
    typedef void (APIENTRYP PFNGLMULTITEXGENFEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
    typedef void (APIENTRYP PFNGLMULTITEXGENIEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXENVFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXENVIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXGENDVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXGENFVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXGENIVEXTPROC) (GLenum texunit, GLenum coord, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLMULTITEXPARAMETERFEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat param);
    typedef void (APIENTRYP PFNGLMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
    typedef void (APIENTRYP PFNGLMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLCOPYMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    typedef void (APIENTRYP PFNGLCOPYMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLGETMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
    typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    typedef void (APIENTRYP PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
    typedef void (APIENTRYP PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) (GLenum array, GLuint index);
    typedef void (APIENTRYP PFNGLGETFLOATINDEXEDVEXTPROC) (GLenum target, GLuint index, GLfloat *data);
    typedef void (APIENTRYP PFNGLGETDOUBLEINDEXEDVEXTPROC) (GLenum target, GLuint index, GLdouble *data);
    typedef void (APIENTRYP PFNGLGETPOINTERINDEXEDVEXTPROC) (GLenum target, GLuint index, void **data);
    typedef void (APIENTRYP PFNGLENABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
    typedef void (APIENTRYP PFNGLDISABLEINDEXEDEXTPROC) (GLenum target, GLuint index);
    typedef GLboolean(APIENTRYP PFNGLISENABLEDINDEXEDEXTPROC) (GLenum target, GLuint index);
    typedef void (APIENTRYP PFNGLGETINTEGERINDEXEDVEXTPROC) (GLenum target, GLuint index, GLint *data);
    typedef void (APIENTRYP PFNGLGETBOOLEANINDEXEDVEXTPROC) (GLenum target, GLuint index, GLboolean *data);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) (GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) (GLuint texture, GLenum target, GLint lod, void *img);
    typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) (GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
    typedef void (APIENTRYP PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) (GLenum texunit, GLenum target, GLint lod, void *img);
    typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
    typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSEFEXTPROC) (GLenum mode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSEDEXTPROC) (GLenum mode, const GLdouble *m);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERDATAEXTPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
    typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFEREXTPROC) (GLuint buffer, GLenum access);
    typedef GLboolean(APIENTRYP PFNGLUNMAPNAMEDBUFFEREXTPROC) (GLuint buffer);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) (GLuint buffer, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) (GLuint buffer, GLenum pname, void **params);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FEXTPROC) (GLuint program, GLint location, GLfloat v0);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IEXTPROC) (GLuint program, GLint location, GLint v0);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    typedef void (APIENTRYP PFNGLTEXTUREBUFFEREXTPROC) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
    typedef void (APIENTRYP PFNGLMULTITEXBUFFEREXTPROC) (GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, const GLuint *params);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) (GLuint texture, GLenum target, GLenum pname, GLuint *params);
    typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLint *params);
    typedef void (APIENTRYP PFNGLMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) (GLenum texunit, GLenum target, GLenum pname, GLuint *params);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIEXTPROC) (GLuint program, GLint location, GLuint v0);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) (GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLint *params);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLuint *params);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
    typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLint *params);
    typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) (GLuint program, GLenum target, GLuint index, GLuint *params);
    typedef void (APIENTRYP PFNGLENABLECLIENTSTATEIEXTPROC) (GLenum array, GLuint index);
    typedef void (APIENTRYP PFNGLDISABLECLIENTSTATEIEXTPROC) (GLenum array, GLuint index);
    typedef void (APIENTRYP PFNGLGETFLOATI_VEXTPROC) (GLenum pname, GLuint index, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETDOUBLEI_VEXTPROC) (GLenum pname, GLuint index, GLdouble *params);
    typedef void (APIENTRYP PFNGLGETPOINTERI_VEXTPROC) (GLenum pname, GLuint index, void **params);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum format, GLsizei len, const void *string);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLdouble *params);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    typedef void (APIENTRYP PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) (GLuint program, GLenum target, GLuint index, const GLfloat *params);
    typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) (GLuint program, GLenum target, GLuint index, GLdouble *params);
    typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) (GLuint program, GLenum target, GLuint index, GLfloat *params);
    typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMIVEXTPROC) (GLuint program, GLenum target, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) (GLuint program, GLenum target, GLenum pname, void *string);
    typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) (GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) (GLuint renderbuffer, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) (GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
    typedef GLenum(APIENTRYP PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) (GLuint framebuffer, GLenum target);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) (GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLGENERATETEXTUREMIPMAPEXTPROC) (GLuint texture, GLenum target);
    typedef void (APIENTRYP PFNGLGENERATEMULTITEXMIPMAPEXTPROC) (GLenum texunit, GLenum target);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) (GLuint framebuffer, GLsizei n, const GLenum *bufs);
    typedef void (APIENTRYP PFNGLFRAMEBUFFERREADBUFFEREXTPROC) (GLuint framebuffer, GLenum mode);
    typedef void (APIENTRYP PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) (GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) (GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
    typedef void (APIENTRYP PFNGLTEXTURERENDERBUFFEREXTPROC) (GLuint texture, GLenum target, GLuint renderbuffer);
    typedef void (APIENTRYP PFNGLMULTITEXRENDERBUFFEREXTPROC) (GLenum texunit, GLenum target, GLuint renderbuffer);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYEXTPROC) (GLuint vaobj, GLenum array);
    typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYEXTPROC) (GLuint vaobj, GLenum array);
    typedef void (APIENTRYP PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) (GLuint vaobj, GLuint index);
    typedef void (APIENTRYP PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) (GLuint vaobj, GLuint index);
    typedef void (APIENTRYP PFNGLGETVERTEXARRAYINTEGERVEXTPROC) (GLuint vaobj, GLenum pname, GLint *param);
    typedef void (APIENTRYP PFNGLGETVERTEXARRAYPOINTERVEXTPROC) (GLuint vaobj, GLenum pname, void **param);
    typedef void (APIENTRYP PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) (GLuint vaobj, GLuint index, GLenum pname, GLint *param);
    typedef void (APIENTRYP PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) (GLuint vaobj, GLuint index, GLenum pname, void **param);
    typedef void *(APIENTRYP PFNGLMAPNAMEDBUFFERRANGEEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
    typedef void (APIENTRYP PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) (GLuint buffer, GLintptr offset, GLsizeiptr length);
    typedef void (APIENTRYP PFNGLNAMEDBUFFERSTORAGEEXTPROC) (GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
    typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERDATAEXTPROC) (GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
    typedef void (APIENTRYP PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) (GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) (GLuint framebuffer, GLenum pname, GLint param);
    typedef void (APIENTRYP PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) (GLuint framebuffer, GLenum pname, GLint *params);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DEXTPROC) (GLuint program, GLint location, GLdouble x);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DEXTPROC) (GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4DVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    typedef void (APIENTRYP PFNGLTEXTUREBUFFERRANGEEXTPROC) (GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE1DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) (GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    typedef void (APIENTRYP PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) (GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) (GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) (GLuint vaobj, GLuint attribindex, GLuint bindingindex);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) (GLuint vaobj, GLuint bindingindex, GLuint divisor);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) (GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    typedef void (APIENTRYP PFNGLTEXTUREPAGECOMMITMENTEXTPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
    typedef void (APIENTRYP PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) (GLuint vaobj, GLuint index, GLuint divisor);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMatrixLoadfEXT(GLenum mode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixLoaddEXT(GLenum mode, const GLdouble *m);
    GLAPI void APIENTRY glMatrixMultfEXT(GLenum mode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixMultdEXT(GLenum mode, const GLdouble *m);
    GLAPI void APIENTRY glMatrixLoadIdentityEXT(GLenum mode);
    GLAPI void APIENTRY glMatrixRotatefEXT(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
    GLAPI void APIENTRY glMatrixRotatedEXT(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
    GLAPI void APIENTRY glMatrixScalefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
    GLAPI void APIENTRY glMatrixScaledEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
    GLAPI void APIENTRY glMatrixTranslatefEXT(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
    GLAPI void APIENTRY glMatrixTranslatedEXT(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
    GLAPI void APIENTRY glMatrixFrustumEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
    GLAPI void APIENTRY glMatrixOrthoEXT(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
    GLAPI void APIENTRY glMatrixPopEXT(GLenum mode);
    GLAPI void APIENTRY glMatrixPushEXT(GLenum mode);
    GLAPI void APIENTRY glClientAttribDefaultEXT(GLbitfield mask);
    GLAPI void APIENTRY glPushClientAttribDefaultEXT(GLbitfield mask);
    GLAPI void APIENTRY glTextureParameterfEXT(GLuint texture, GLenum target, GLenum pname, GLfloat param);
    GLAPI void APIENTRY glTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, const GLfloat *params);
    GLAPI void APIENTRY glTextureParameteriEXT(GLuint texture, GLenum target, GLenum pname, GLint param);
    GLAPI void APIENTRY glTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glCopyTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    GLAPI void APIENTRY glCopyTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    GLAPI void APIENTRY glCopyTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    GLAPI void APIENTRY glCopyTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glGetTextureImageEXT(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
    GLAPI void APIENTRY glGetTextureParameterfvEXT(GLuint texture, GLenum target, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetTextureParameterivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetTextureLevelParameterfvEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetTextureLevelParameterivEXT(GLuint texture, GLenum target, GLint level, GLenum pname, GLint *params);
    GLAPI void APIENTRY glTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glCopyTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glBindMultiTextureEXT(GLenum texunit, GLenum target, GLuint texture);
    GLAPI void APIENTRY glMultiTexCoordPointerEXT(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void *pointer);
    GLAPI void APIENTRY glMultiTexEnvfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
    GLAPI void APIENTRY glMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
    GLAPI void APIENTRY glMultiTexEnviEXT(GLenum texunit, GLenum target, GLenum pname, GLint param);
    GLAPI void APIENTRY glMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glMultiTexGendEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
    GLAPI void APIENTRY glMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLdouble *params);
    GLAPI void APIENTRY glMultiTexGenfEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
    GLAPI void APIENTRY glMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, const GLfloat *params);
    GLAPI void APIENTRY glMultiTexGeniEXT(GLenum texunit, GLenum coord, GLenum pname, GLint param);
    GLAPI void APIENTRY glMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glGetMultiTexEnvfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetMultiTexEnvivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetMultiTexGendvEXT(GLenum texunit, GLenum coord, GLenum pname, GLdouble *params);
    GLAPI void APIENTRY glGetMultiTexGenfvEXT(GLenum texunit, GLenum coord, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetMultiTexGenivEXT(GLenum texunit, GLenum coord, GLenum pname, GLint *params);
    GLAPI void APIENTRY glMultiTexParameteriEXT(GLenum texunit, GLenum target, GLenum pname, GLint param);
    GLAPI void APIENTRY glMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glMultiTexParameterfEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
    GLAPI void APIENTRY glMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, const GLfloat *params);
    GLAPI void APIENTRY glMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glCopyMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
    GLAPI void APIENTRY glCopyMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
    GLAPI void APIENTRY glCopyMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
    GLAPI void APIENTRY glCopyMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glGetMultiTexImageEXT(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void *pixels);
    GLAPI void APIENTRY glGetMultiTexParameterfvEXT(GLenum texunit, GLenum target, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetMultiTexParameterivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetMultiTexLevelParameterfvEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat *params);
    GLAPI void APIENTRY glGetMultiTexLevelParameterivEXT(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint *params);
    GLAPI void APIENTRY glMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
    GLAPI void APIENTRY glCopyMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glEnableClientStateIndexedEXT(GLenum array, GLuint index);
    GLAPI void APIENTRY glDisableClientStateIndexedEXT(GLenum array, GLuint index);
    GLAPI void APIENTRY glGetFloatIndexedvEXT(GLenum target, GLuint index, GLfloat *data);
    GLAPI void APIENTRY glGetDoubleIndexedvEXT(GLenum target, GLuint index, GLdouble *data);
    GLAPI void APIENTRY glGetPointerIndexedvEXT(GLenum target, GLuint index, void **data);
    GLAPI void APIENTRY glEnableIndexedEXT(GLenum target, GLuint index);
    GLAPI void APIENTRY glDisableIndexedEXT(GLenum target, GLuint index);
    GLAPI GLboolean APIENTRY glIsEnabledIndexedEXT(GLenum target, GLuint index);
    GLAPI void APIENTRY glGetIntegerIndexedvEXT(GLenum target, GLuint index, GLint *data);
    GLAPI void APIENTRY glGetBooleanIndexedvEXT(GLenum target, GLuint index, GLboolean *data);
    GLAPI void APIENTRY glCompressedTextureImage3DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedTextureImage2DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedTextureImage1DEXT(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedTextureSubImage3DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedTextureSubImage2DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedTextureSubImage1DEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glGetCompressedTextureImageEXT(GLuint texture, GLenum target, GLint lod, void *img);
    GLAPI void APIENTRY glCompressedMultiTexImage3DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedMultiTexImage2DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedMultiTexImage1DEXT(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedMultiTexSubImage3DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedMultiTexSubImage2DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glCompressedMultiTexSubImage1DEXT(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void *bits);
    GLAPI void APIENTRY glGetCompressedMultiTexImageEXT(GLenum texunit, GLenum target, GLint lod, void *img);
    GLAPI void APIENTRY glMatrixLoadTransposefEXT(GLenum mode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixLoadTransposedEXT(GLenum mode, const GLdouble *m);
    GLAPI void APIENTRY glMatrixMultTransposefEXT(GLenum mode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixMultTransposedEXT(GLenum mode, const GLdouble *m);
    GLAPI void APIENTRY glNamedBufferDataEXT(GLuint buffer, GLsizeiptr size, const void *data, GLenum usage);
    GLAPI void APIENTRY glNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, const void *data);
    GLAPI void *APIENTRY glMapNamedBufferEXT(GLuint buffer, GLenum access);
    GLAPI GLboolean APIENTRY glUnmapNamedBufferEXT(GLuint buffer);
    GLAPI void APIENTRY glGetNamedBufferParameterivEXT(GLuint buffer, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetNamedBufferPointervEXT(GLuint buffer, GLenum pname, void **params);
    GLAPI void APIENTRY glGetNamedBufferSubDataEXT(GLuint buffer, GLintptr offset, GLsizeiptr size, void *data);
    GLAPI void APIENTRY glProgramUniform1fEXT(GLuint program, GLint location, GLfloat v0);
    GLAPI void APIENTRY glProgramUniform2fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1);
    GLAPI void APIENTRY glProgramUniform3fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
    GLAPI void APIENTRY glProgramUniform4fEXT(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
    GLAPI void APIENTRY glProgramUniform1iEXT(GLuint program, GLint location, GLint v0);
    GLAPI void APIENTRY glProgramUniform2iEXT(GLuint program, GLint location, GLint v0, GLint v1);
    GLAPI void APIENTRY glProgramUniform3iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
    GLAPI void APIENTRY glProgramUniform4iEXT(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
    GLAPI void APIENTRY glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint *value);
    GLAPI void APIENTRY glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
    GLAPI void APIENTRY glTextureBufferEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
    GLAPI void APIENTRY glMultiTexBufferEXT(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
    GLAPI void APIENTRY glTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, const GLuint *params);
    GLAPI void APIENTRY glGetTextureParameterIivEXT(GLuint texture, GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetTextureParameterIuivEXT(GLuint texture, GLenum target, GLenum pname, GLuint *params);
    GLAPI void APIENTRY glMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, const GLint *params);
    GLAPI void APIENTRY glMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, const GLuint *params);
    GLAPI void APIENTRY glGetMultiTexParameterIivEXT(GLenum texunit, GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetMultiTexParameterIuivEXT(GLenum texunit, GLenum target, GLenum pname, GLuint *params);
    GLAPI void APIENTRY glProgramUniform1uiEXT(GLuint program, GLint location, GLuint v0);
    GLAPI void APIENTRY glProgramUniform2uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1);
    GLAPI void APIENTRY glProgramUniform3uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
    GLAPI void APIENTRY glProgramUniform4uiEXT(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
    GLAPI void APIENTRY glProgramUniform1uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glProgramUniform2uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glProgramUniform3uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glProgramUniform4uivEXT(GLuint program, GLint location, GLsizei count, const GLuint *value);
    GLAPI void APIENTRY glNamedProgramLocalParameters4fvEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat *params);
    GLAPI void APIENTRY glNamedProgramLocalParameterI4iEXT(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
    GLAPI void APIENTRY glNamedProgramLocalParameterI4ivEXT(GLuint program, GLenum target, GLuint index, const GLint *params);
    GLAPI void APIENTRY glNamedProgramLocalParametersI4ivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint *params);
    GLAPI void APIENTRY glNamedProgramLocalParameterI4uiEXT(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
    GLAPI void APIENTRY glNamedProgramLocalParameterI4uivEXT(GLuint program, GLenum target, GLuint index, const GLuint *params);
    GLAPI void APIENTRY glNamedProgramLocalParametersI4uivEXT(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint *params);
    GLAPI void APIENTRY glGetNamedProgramLocalParameterIivEXT(GLuint program, GLenum target, GLuint index, GLint *params);
    GLAPI void APIENTRY glGetNamedProgramLocalParameterIuivEXT(GLuint program, GLenum target, GLuint index, GLuint *params);
    GLAPI void APIENTRY glEnableClientStateiEXT(GLenum array, GLuint index);
    GLAPI void APIENTRY glDisableClientStateiEXT(GLenum array, GLuint index);
    GLAPI void APIENTRY glGetFloati_vEXT(GLenum pname, GLuint index, GLfloat *params);
    GLAPI void APIENTRY glGetDoublei_vEXT(GLenum pname, GLuint index, GLdouble *params);
    GLAPI void APIENTRY glGetPointeri_vEXT(GLenum pname, GLuint index, void **params);
    GLAPI void APIENTRY glNamedProgramStringEXT(GLuint program, GLenum target, GLenum format, GLsizei len, const void *string);
    GLAPI void APIENTRY glNamedProgramLocalParameter4dEXT(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    GLAPI void APIENTRY glNamedProgramLocalParameter4dvEXT(GLuint program, GLenum target, GLuint index, const GLdouble *params);
    GLAPI void APIENTRY glNamedProgramLocalParameter4fEXT(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
    GLAPI void APIENTRY glNamedProgramLocalParameter4fvEXT(GLuint program, GLenum target, GLuint index, const GLfloat *params);
    GLAPI void APIENTRY glGetNamedProgramLocalParameterdvEXT(GLuint program, GLenum target, GLuint index, GLdouble *params);
    GLAPI void APIENTRY glGetNamedProgramLocalParameterfvEXT(GLuint program, GLenum target, GLuint index, GLfloat *params);
    GLAPI void APIENTRY glGetNamedProgramivEXT(GLuint program, GLenum target, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGetNamedProgramStringEXT(GLuint program, GLenum target, GLenum pname, void *string);
    GLAPI void APIENTRY glNamedRenderbufferStorageEXT(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glGetNamedRenderbufferParameterivEXT(GLuint renderbuffer, GLenum pname, GLint *params);
    GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleEXT(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glNamedRenderbufferStorageMultisampleCoverageEXT(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI GLenum APIENTRY glCheckNamedFramebufferStatusEXT(GLuint framebuffer, GLenum target);
    GLAPI void APIENTRY glNamedFramebufferTexture1DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    GLAPI void APIENTRY glNamedFramebufferTexture2DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
    GLAPI void APIENTRY glNamedFramebufferTexture3DEXT(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
    GLAPI void APIENTRY glNamedFramebufferRenderbufferEXT(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
    GLAPI void APIENTRY glGetNamedFramebufferAttachmentParameterivEXT(GLuint framebuffer, GLenum attachment, GLenum pname, GLint *params);
    GLAPI void APIENTRY glGenerateTextureMipmapEXT(GLuint texture, GLenum target);
    GLAPI void APIENTRY glGenerateMultiTexMipmapEXT(GLenum texunit, GLenum target);
    GLAPI void APIENTRY glFramebufferDrawBufferEXT(GLuint framebuffer, GLenum mode);
    GLAPI void APIENTRY glFramebufferDrawBuffersEXT(GLuint framebuffer, GLsizei n, const GLenum *bufs);
    GLAPI void APIENTRY glFramebufferReadBufferEXT(GLuint framebuffer, GLenum mode);
    GLAPI void APIENTRY glGetFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params);
    GLAPI void APIENTRY glNamedCopyBufferSubDataEXT(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
    GLAPI void APIENTRY glNamedFramebufferTextureEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
    GLAPI void APIENTRY glNamedFramebufferTextureLayerEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
    GLAPI void APIENTRY glNamedFramebufferTextureFaceEXT(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
    GLAPI void APIENTRY glTextureRenderbufferEXT(GLuint texture, GLenum target, GLuint renderbuffer);
    GLAPI void APIENTRY glMultiTexRenderbufferEXT(GLenum texunit, GLenum target, GLuint renderbuffer);
    GLAPI void APIENTRY glVertexArrayVertexOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayEdgeFlagOffsetEXT(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayIndexOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayNormalOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayMultiTexCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayFogCoordOffsetEXT(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArraySecondaryColorOffsetEXT(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayVertexAttribOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glVertexArrayVertexAttribIOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glEnableVertexArrayEXT(GLuint vaobj, GLenum array);
    GLAPI void APIENTRY glDisableVertexArrayEXT(GLuint vaobj, GLenum array);
    GLAPI void APIENTRY glEnableVertexArrayAttribEXT(GLuint vaobj, GLuint index);
    GLAPI void APIENTRY glDisableVertexArrayAttribEXT(GLuint vaobj, GLuint index);
    GLAPI void APIENTRY glGetVertexArrayIntegervEXT(GLuint vaobj, GLenum pname, GLint *param);
    GLAPI void APIENTRY glGetVertexArrayPointervEXT(GLuint vaobj, GLenum pname, void **param);
    GLAPI void APIENTRY glGetVertexArrayIntegeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, GLint *param);
    GLAPI void APIENTRY glGetVertexArrayPointeri_vEXT(GLuint vaobj, GLuint index, GLenum pname, void **param);
    GLAPI void *APIENTRY glMapNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
    GLAPI void APIENTRY glFlushMappedNamedBufferRangeEXT(GLuint buffer, GLintptr offset, GLsizeiptr length);
    GLAPI void APIENTRY glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, const void *data, GLbitfield flags);
    GLAPI void APIENTRY glClearNamedBufferDataEXT(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const void *data);
    GLAPI void APIENTRY glClearNamedBufferSubDataEXT(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const void *data);
    GLAPI void APIENTRY glNamedFramebufferParameteriEXT(GLuint framebuffer, GLenum pname, GLint param);
    GLAPI void APIENTRY glGetNamedFramebufferParameterivEXT(GLuint framebuffer, GLenum pname, GLint *params);
    GLAPI void APIENTRY glProgramUniform1dEXT(GLuint program, GLint location, GLdouble x);
    GLAPI void APIENTRY glProgramUniform2dEXT(GLuint program, GLint location, GLdouble x, GLdouble y);
    GLAPI void APIENTRY glProgramUniform3dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
    GLAPI void APIENTRY glProgramUniform4dEXT(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
    GLAPI void APIENTRY glProgramUniform1dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniform2dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniform3dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniform4dvEXT(GLuint program, GLint location, GLsizei count, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix2x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix3x4dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x2dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glProgramUniformMatrix4x3dvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble *value);
    GLAPI void APIENTRY glTextureBufferRangeEXT(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
    GLAPI void APIENTRY glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
    GLAPI void APIENTRY glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
    GLAPI void APIENTRY glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
    GLAPI void APIENTRY glTextureStorage2DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glTextureStorage3DMultisampleEXT(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
    GLAPI void APIENTRY glVertexArrayBindVertexBufferEXT(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
    GLAPI void APIENTRY glVertexArrayVertexAttribFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexArrayVertexAttribIFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexArrayVertexAttribLFormatEXT(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
    GLAPI void APIENTRY glVertexArrayVertexAttribBindingEXT(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
    GLAPI void APIENTRY glVertexArrayVertexBindingDivisorEXT(GLuint vaobj, GLuint bindingindex, GLuint divisor);
    GLAPI void APIENTRY glVertexArrayVertexAttribLOffsetEXT(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
    GLAPI void APIENTRY glTexturePageCommitmentEXT(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
    GLAPI void APIENTRY glVertexArrayVertexAttribDivisorEXT(GLuint vaobj, GLuint index, GLuint divisor);
#endif
#endif /* GL_EXT_direct_state_access */

#ifndef GL_EXT_draw_instanced
#define GL_EXT_draw_instanced 1
    typedef void (APIENTRYP PFNGLDRAWARRAYSINSTANCEDEXTPROC) (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
    typedef void (APIENTRYP PFNGLDRAWELEMENTSINSTANCEDEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawArraysInstancedEXT(GLenum mode, GLint start, GLsizei count, GLsizei primcount);
    GLAPI void APIENTRY glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
#endif
#endif /* GL_EXT_draw_instanced */

#ifndef GL_EXT_polygon_offset_clamp
#define GL_EXT_polygon_offset_clamp 1
#define GL_POLYGON_OFFSET_CLAMP_EXT       0x8E1B
    typedef void (APIENTRYP PFNGLPOLYGONOFFSETCLAMPEXTPROC) (GLfloat factor, GLfloat units, GLfloat clamp);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glPolygonOffsetClampEXT(GLfloat factor, GLfloat units, GLfloat clamp);
#endif
#endif /* GL_EXT_polygon_offset_clamp */

#ifndef GL_EXT_post_depth_coverage
#define GL_EXT_post_depth_coverage 1
#endif /* GL_EXT_post_depth_coverage */

#ifndef GL_EXT_raster_multisample
#define GL_EXT_raster_multisample 1
#define GL_RASTER_MULTISAMPLE_EXT         0x9327
#define GL_RASTER_SAMPLES_EXT             0x9328
#define GL_MAX_RASTER_SAMPLES_EXT         0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT   0x932C
    typedef void (APIENTRYP PFNGLRASTERSAMPLESEXTPROC) (GLuint samples, GLboolean fixedsamplelocations);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations);
#endif
#endif /* GL_EXT_raster_multisample */

#ifndef GL_EXT_separate_shader_objects
#define GL_EXT_separate_shader_objects 1
#define GL_ACTIVE_PROGRAM_EXT             0x8B8D
    typedef void (APIENTRYP PFNGLUSESHADERPROGRAMEXTPROC) (GLenum type, GLuint program);
    typedef void (APIENTRYP PFNGLACTIVEPROGRAMEXTPROC) (GLuint program);
    typedef GLuint(APIENTRYP PFNGLCREATESHADERPROGRAMEXTPROC) (GLenum type, const GLchar *string);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glUseShaderProgramEXT(GLenum type, GLuint program);
    GLAPI void APIENTRY glActiveProgramEXT(GLuint program);
    GLAPI GLuint APIENTRY glCreateShaderProgramEXT(GLenum type, const GLchar *string);
#endif
#endif /* GL_EXT_separate_shader_objects */

#ifndef GL_EXT_shader_integer_mix
#define GL_EXT_shader_integer_mix 1
#endif /* GL_EXT_shader_integer_mix */

#ifndef GL_EXT_texture_compression_s3tc
#define GL_EXT_texture_compression_s3tc 1
#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT   0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT  0x83F1
#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT  0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT  0x83F3
#endif /* GL_EXT_texture_compression_s3tc */

#ifndef GL_EXT_texture_filter_minmax
#define GL_EXT_texture_filter_minmax 1
#endif /* GL_EXT_texture_filter_minmax */

#ifndef GL_EXT_texture_sRGB_decode
#define GL_EXT_texture_sRGB_decode 1
#define GL_TEXTURE_SRGB_DECODE_EXT        0x8A48
#define GL_DECODE_EXT                     0x8A49
#define GL_SKIP_DECODE_EXT                0x8A4A
#endif /* GL_EXT_texture_sRGB_decode */

#ifndef GL_EXT_window_rectangles
#define GL_EXT_window_rectangles 1
#define GL_INCLUSIVE_EXT                  0x8F10
#define GL_EXCLUSIVE_EXT                  0x8F11
#define GL_WINDOW_RECTANGLE_EXT           0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT      0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT      0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT      0x8F15
    typedef void (APIENTRYP PFNGLWINDOWRECTANGLESEXTPROC) (GLenum mode, GLsizei count, const GLint *box);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glWindowRectanglesEXT(GLenum mode, GLsizei count, const GLint *box);
#endif
#endif /* GL_EXT_window_rectangles */

#ifndef GL_INTEL_conservative_rasterization
#define GL_INTEL_conservative_rasterization 1
#define GL_CONSERVATIVE_RASTERIZATION_INTEL 0x83FE
#endif /* GL_INTEL_conservative_rasterization */

#ifndef GL_INTEL_framebuffer_CMAA
#define GL_INTEL_framebuffer_CMAA 1
    typedef void (APIENTRYP PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glApplyFramebufferAttachmentCMAAINTEL(void);
#endif
#endif /* GL_INTEL_framebuffer_CMAA */

#ifndef GL_INTEL_performance_query
#define GL_INTEL_performance_query 1
#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x00000000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x00000001
#define GL_PERFQUERY_WAIT_INTEL           0x83FB
#define GL_PERFQUERY_FLUSH_INTEL          0x83FA
#define GL_PERFQUERY_DONOT_FLUSH_INTEL    0x83F9
#define GL_PERFQUERY_COUNTER_EVENT_INTEL  0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL    0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500
    typedef void (APIENTRYP PFNGLBEGINPERFQUERYINTELPROC) (GLuint queryHandle);
    typedef void (APIENTRYP PFNGLCREATEPERFQUERYINTELPROC) (GLuint queryId, GLuint *queryHandle);
    typedef void (APIENTRYP PFNGLDELETEPERFQUERYINTELPROC) (GLuint queryHandle);
    typedef void (APIENTRYP PFNGLENDPERFQUERYINTELPROC) (GLuint queryHandle);
    typedef void (APIENTRYP PFNGLGETFIRSTPERFQUERYIDINTELPROC) (GLuint *queryId);
    typedef void (APIENTRYP PFNGLGETNEXTPERFQUERYIDINTELPROC) (GLuint queryId, GLuint *nextQueryId);
    typedef void (APIENTRYP PFNGLGETPERFCOUNTERINFOINTELPROC) (GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
    typedef void (APIENTRYP PFNGLGETPERFQUERYDATAINTELPROC) (GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid *data, GLuint *bytesWritten);
    typedef void (APIENTRYP PFNGLGETPERFQUERYIDBYNAMEINTELPROC) (GLchar *queryName, GLuint *queryId);
    typedef void (APIENTRYP PFNGLGETPERFQUERYINFOINTELPROC) (GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBeginPerfQueryINTEL(GLuint queryHandle);
    GLAPI void APIENTRY glCreatePerfQueryINTEL(GLuint queryId, GLuint *queryHandle);
    GLAPI void APIENTRY glDeletePerfQueryINTEL(GLuint queryHandle);
    GLAPI void APIENTRY glEndPerfQueryINTEL(GLuint queryHandle);
    GLAPI void APIENTRY glGetFirstPerfQueryIdINTEL(GLuint *queryId);
    GLAPI void APIENTRY glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint *nextQueryId);
    GLAPI void APIENTRY glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar *counterName, GLuint counterDescLength, GLchar *counterDesc, GLuint *counterOffset, GLuint *counterDataSize, GLuint *counterTypeEnum, GLuint *counterDataTypeEnum, GLuint64 *rawCounterMaxValue);
    GLAPI void APIENTRY glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid *data, GLuint *bytesWritten);
    GLAPI void APIENTRY glGetPerfQueryIdByNameINTEL(GLchar *queryName, GLuint *queryId);
    GLAPI void APIENTRY glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar *queryName, GLuint *dataSize, GLuint *noCounters, GLuint *noInstances, GLuint *capsMask);
#endif
#endif /* GL_INTEL_performance_query */

#ifndef GL_NV_bindless_multi_draw_indirect
#define GL_NV_bindless_multi_draw_indirect 1
    typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
    typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMultiDrawArraysIndirectBindlessNV(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
    GLAPI void APIENTRY glMultiDrawElementsIndirectBindlessNV(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
#endif
#endif /* GL_NV_bindless_multi_draw_indirect */

#ifndef GL_NV_bindless_multi_draw_indirect_count
#define GL_NV_bindless_multi_draw_indirect_count 1
    typedef void (APIENTRYP PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) (GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
    typedef void (APIENTRYP PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMultiDrawArraysIndirectBindlessCountNV(GLenum mode, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
    GLAPI void APIENTRY glMultiDrawElementsIndirectBindlessCountNV(GLenum mode, GLenum type, const void *indirect, GLsizei drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
#endif
#endif /* GL_NV_bindless_multi_draw_indirect_count */

#ifndef GL_NV_bindless_texture
#define GL_NV_bindless_texture 1
    typedef GLuint64(APIENTRYP PFNGLGETTEXTUREHANDLENVPROC) (GLuint texture);
    typedef GLuint64(APIENTRYP PFNGLGETTEXTURESAMPLERHANDLENVPROC) (GLuint texture, GLuint sampler);
    typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle);
    typedef void (APIENTRYP PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) (GLuint64 handle);
    typedef GLuint64(APIENTRYP PFNGLGETIMAGEHANDLENVPROC) (GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle, GLenum access);
    typedef void (APIENTRYP PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) (GLuint64 handle);
    typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64NVPROC) (GLint location, GLuint64 value);
    typedef void (APIENTRYP PFNGLUNIFORMHANDLEUI64VNVPROC) (GLint location, GLsizei count, const GLuint64 *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) (GLuint program, GLint location, GLuint64 value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64 *values);
    typedef GLboolean(APIENTRYP PFNGLISTEXTUREHANDLERESIDENTNVPROC) (GLuint64 handle);
    typedef GLboolean(APIENTRYP PFNGLISIMAGEHANDLERESIDENTNVPROC) (GLuint64 handle);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI GLuint64 APIENTRY glGetTextureHandleNV(GLuint texture);
    GLAPI GLuint64 APIENTRY glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler);
    GLAPI void APIENTRY glMakeTextureHandleResidentNV(GLuint64 handle);
    GLAPI void APIENTRY glMakeTextureHandleNonResidentNV(GLuint64 handle);
    GLAPI GLuint64 APIENTRY glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
    GLAPI void APIENTRY glMakeImageHandleResidentNV(GLuint64 handle, GLenum access);
    GLAPI void APIENTRY glMakeImageHandleNonResidentNV(GLuint64 handle);
    GLAPI void APIENTRY glUniformHandleui64NV(GLint location, GLuint64 value);
    GLAPI void APIENTRY glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64 *value);
    GLAPI void APIENTRY glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value);
    GLAPI void APIENTRY glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64 *values);
    GLAPI GLboolean APIENTRY glIsTextureHandleResidentNV(GLuint64 handle);
    GLAPI GLboolean APIENTRY glIsImageHandleResidentNV(GLuint64 handle);
#endif
#endif /* GL_NV_bindless_texture */

#ifndef GL_NV_blend_equation_advanced
#define GL_NV_blend_equation_advanced 1
#define GL_BLEND_OVERLAP_NV               0x9281
#define GL_BLEND_PREMULTIPLIED_SRC_NV     0x9280
#define GL_BLUE_NV                        0x1905
#define GL_COLORBURN_NV                   0x929A
#define GL_COLORDODGE_NV                  0x9299
#define GL_CONJOINT_NV                    0x9284
#define GL_CONTRAST_NV                    0x92A1
#define GL_DARKEN_NV                      0x9297
#define GL_DIFFERENCE_NV                  0x929E
#define GL_DISJOINT_NV                    0x9283
#define GL_DST_ATOP_NV                    0x928F
#define GL_DST_IN_NV                      0x928B
#define GL_DST_NV                         0x9287
#define GL_DST_OUT_NV                     0x928D
#define GL_DST_OVER_NV                    0x9289
#define GL_EXCLUSION_NV                   0x92A0
#define GL_GREEN_NV                       0x1904
#define GL_HARDLIGHT_NV                   0x929B
#define GL_HARDMIX_NV                     0x92A9
#define GL_HSL_COLOR_NV                   0x92AF
#define GL_HSL_HUE_NV                     0x92AD
#define GL_HSL_LUMINOSITY_NV              0x92B0
#define GL_HSL_SATURATION_NV              0x92AE
#define GL_INVERT_OVG_NV                  0x92B4
#define GL_INVERT_RGB_NV                  0x92A3
#define GL_LIGHTEN_NV                     0x9298
#define GL_LINEARBURN_NV                  0x92A5
#define GL_LINEARDODGE_NV                 0x92A4
#define GL_LINEARLIGHT_NV                 0x92A7
#define GL_MINUS_CLAMPED_NV               0x92B3
#define GL_MINUS_NV                       0x929F
#define GL_MULTIPLY_NV                    0x9294
#define GL_OVERLAY_NV                     0x9296
#define GL_PINLIGHT_NV                    0x92A8
#define GL_PLUS_CLAMPED_ALPHA_NV          0x92B2
#define GL_PLUS_CLAMPED_NV                0x92B1
#define GL_PLUS_DARKER_NV                 0x9292
#define GL_PLUS_NV                        0x9291
#define GL_RED_NV                         0x1903
#define GL_SCREEN_NV                      0x9295
#define GL_SOFTLIGHT_NV                   0x929C
#define GL_SRC_ATOP_NV                    0x928E
#define GL_SRC_IN_NV                      0x928A
#define GL_SRC_NV                         0x9286
#define GL_SRC_OUT_NV                     0x928C
#define GL_SRC_OVER_NV                    0x9288
#define GL_UNCORRELATED_NV                0x9282
#define GL_VIVIDLIGHT_NV                  0x92A6
#define GL_XOR_NV                         0x1506
    typedef void (APIENTRYP PFNGLBLENDPARAMETERINVPROC) (GLenum pname, GLint value);
    typedef void (APIENTRYP PFNGLBLENDBARRIERNVPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBlendParameteriNV(GLenum pname, GLint value);
    GLAPI void APIENTRY glBlendBarrierNV(void);
#endif
#endif /* GL_NV_blend_equation_advanced */

#ifndef GL_NV_blend_equation_advanced_coherent
#define GL_NV_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_NV     0x9285
#endif /* GL_NV_blend_equation_advanced_coherent */

#ifndef GL_NV_clip_space_w_scaling
#define GL_NV_clip_space_w_scaling 1
#define GL_VIEWPORT_POSITION_W_SCALE_NV   0x937C
#define GL_VIEWPORT_POSITION_W_SCALE_X_COEFF_NV 0x937D
#define GL_VIEWPORT_POSITION_W_SCALE_Y_COEFF_NV 0x937E
    typedef void (APIENTRYP PFNGLVIEWPORTPOSITIONWSCALENVPROC) (GLuint index, GLfloat xcoeff, GLfloat ycoeff);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glViewportPositionWScaleNV(GLuint index, GLfloat xcoeff, GLfloat ycoeff);
#endif
#endif /* GL_NV_clip_space_w_scaling */

#ifndef GL_NV_command_list
#define GL_NV_command_list 1
#define GL_TERMINATE_SEQUENCE_COMMAND_NV  0x0000
#define GL_NOP_COMMAND_NV                 0x0001
#define GL_DRAW_ELEMENTS_COMMAND_NV       0x0002
#define GL_DRAW_ARRAYS_COMMAND_NV         0x0003
#define GL_DRAW_ELEMENTS_STRIP_COMMAND_NV 0x0004
#define GL_DRAW_ARRAYS_STRIP_COMMAND_NV   0x0005
#define GL_DRAW_ELEMENTS_INSTANCED_COMMAND_NV 0x0006
#define GL_DRAW_ARRAYS_INSTANCED_COMMAND_NV 0x0007
#define GL_ELEMENT_ADDRESS_COMMAND_NV     0x0008
#define GL_ATTRIBUTE_ADDRESS_COMMAND_NV   0x0009
#define GL_UNIFORM_ADDRESS_COMMAND_NV     0x000A
#define GL_BLEND_COLOR_COMMAND_NV         0x000B
#define GL_STENCIL_REF_COMMAND_NV         0x000C
#define GL_LINE_WIDTH_COMMAND_NV          0x000D
#define GL_POLYGON_OFFSET_COMMAND_NV      0x000E
#define GL_ALPHA_REF_COMMAND_NV           0x000F
#define GL_VIEWPORT_COMMAND_NV            0x0010
#define GL_SCISSOR_COMMAND_NV             0x0011
#define GL_FRONT_FACE_COMMAND_NV          0x0012
    typedef void (APIENTRYP PFNGLCREATESTATESNVPROC) (GLsizei n, GLuint *states);
    typedef void (APIENTRYP PFNGLDELETESTATESNVPROC) (GLsizei n, const GLuint *states);
    typedef GLboolean(APIENTRYP PFNGLISSTATENVPROC) (GLuint state);
    typedef void (APIENTRYP PFNGLSTATECAPTURENVPROC) (GLuint state, GLenum mode);
    typedef GLuint(APIENTRYP PFNGLGETCOMMANDHEADERNVPROC) (GLenum tokenID, GLuint size);
    typedef GLushort(APIENTRYP PFNGLGETSTAGEINDEXNVPROC) (GLenum shadertype);
    typedef void (APIENTRYP PFNGLDRAWCOMMANDSNVPROC) (GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count);
    typedef void (APIENTRYP PFNGLDRAWCOMMANDSADDRESSNVPROC) (GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count);
    typedef void (APIENTRYP PFNGLDRAWCOMMANDSSTATESNVPROC) (GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
    typedef void (APIENTRYP PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) (const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
    typedef void (APIENTRYP PFNGLCREATECOMMANDLISTSNVPROC) (GLsizei n, GLuint *lists);
    typedef void (APIENTRYP PFNGLDELETECOMMANDLISTSNVPROC) (GLsizei n, const GLuint *lists);
    typedef GLboolean(APIENTRYP PFNGLISCOMMANDLISTNVPROC) (GLuint list);
    typedef void (APIENTRYP PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) (GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
    typedef void (APIENTRYP PFNGLCOMMANDLISTSEGMENTSNVPROC) (GLuint list, GLuint segments);
    typedef void (APIENTRYP PFNGLCOMPILECOMMANDLISTNVPROC) (GLuint list);
    typedef void (APIENTRYP PFNGLCALLCOMMANDLISTNVPROC) (GLuint list);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glCreateStatesNV(GLsizei n, GLuint *states);
    GLAPI void APIENTRY glDeleteStatesNV(GLsizei n, const GLuint *states);
    GLAPI GLboolean APIENTRY glIsStateNV(GLuint state);
    GLAPI void APIENTRY glStateCaptureNV(GLuint state, GLenum mode);
    GLAPI GLuint APIENTRY glGetCommandHeaderNV(GLenum tokenID, GLuint size);
    GLAPI GLushort APIENTRY glGetStageIndexNV(GLenum shadertype);
    GLAPI void APIENTRY glDrawCommandsNV(GLenum primitiveMode, GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, GLuint count);
    GLAPI void APIENTRY glDrawCommandsAddressNV(GLenum primitiveMode, const GLuint64 *indirects, const GLsizei *sizes, GLuint count);
    GLAPI void APIENTRY glDrawCommandsStatesNV(GLuint buffer, const GLintptr *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
    GLAPI void APIENTRY glDrawCommandsStatesAddressNV(const GLuint64 *indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
    GLAPI void APIENTRY glCreateCommandListsNV(GLsizei n, GLuint *lists);
    GLAPI void APIENTRY glDeleteCommandListsNV(GLsizei n, const GLuint *lists);
    GLAPI GLboolean APIENTRY glIsCommandListNV(GLuint list);
    GLAPI void APIENTRY glListDrawCommandsStatesClientNV(GLuint list, GLuint segment, const void **indirects, const GLsizei *sizes, const GLuint *states, const GLuint *fbos, GLuint count);
    GLAPI void APIENTRY glCommandListSegmentsNV(GLuint list, GLuint segments);
    GLAPI void APIENTRY glCompileCommandListNV(GLuint list);
    GLAPI void APIENTRY glCallCommandListNV(GLuint list);
#endif
#endif /* GL_NV_command_list */

#ifndef GL_NV_conditional_render
#define GL_NV_conditional_render 1
#define GL_QUERY_WAIT_NV                  0x8E13
#define GL_QUERY_NO_WAIT_NV               0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV        0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV     0x8E16
    typedef void (APIENTRYP PFNGLBEGINCONDITIONALRENDERNVPROC) (GLuint id, GLenum mode);
    typedef void (APIENTRYP PFNGLENDCONDITIONALRENDERNVPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBeginConditionalRenderNV(GLuint id, GLenum mode);
    GLAPI void APIENTRY glEndConditionalRenderNV(void);
#endif
#endif /* GL_NV_conditional_render */

#ifndef GL_NV_conservative_raster
#define GL_NV_conservative_raster 1
#define GL_CONSERVATIVE_RASTERIZATION_NV  0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349
    typedef void (APIENTRYP PFNGLSUBPIXELPRECISIONBIASNVPROC) (GLuint xbits, GLuint ybits);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits);
#endif
#endif /* GL_NV_conservative_raster */

#ifndef GL_NV_conservative_raster_dilate
#define GL_NV_conservative_raster_dilate 1
#define GL_CONSERVATIVE_RASTER_DILATE_NV  0x9379
#define GL_CONSERVATIVE_RASTER_DILATE_RANGE_NV 0x937A
#define GL_CONSERVATIVE_RASTER_DILATE_GRANULARITY_NV 0x937B
    typedef void (APIENTRYP PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) (GLenum pname, GLfloat value);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glConservativeRasterParameterfNV(GLenum pname, GLfloat value);
#endif
#endif /* GL_NV_conservative_raster_dilate */

#ifndef GL_NV_conservative_raster_pre_snap_triangles
#define GL_NV_conservative_raster_pre_snap_triangles 1
#define GL_CONSERVATIVE_RASTER_MODE_NV    0x954D
#define GL_CONSERVATIVE_RASTER_MODE_POST_SNAP_NV 0x954E
#define GL_CONSERVATIVE_RASTER_MODE_PRE_SNAP_TRIANGLES_NV 0x954F
    typedef void (APIENTRYP PFNGLCONSERVATIVERASTERPARAMETERINVPROC) (GLenum pname, GLint param);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glConservativeRasterParameteriNV(GLenum pname, GLint param);
#endif
#endif /* GL_NV_conservative_raster_pre_snap_triangles */

#ifndef GL_NV_draw_vulkan_image
#define GL_NV_draw_vulkan_image 1
    typedef void (APIENTRY  *GLVULKANPROCNV)(void);
    typedef void (APIENTRYP PFNGLDRAWVKIMAGENVPROC) (GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
    typedef GLVULKANPROCNV(APIENTRYP PFNGLGETVKPROCADDRNVPROC) (const GLchar *name);
    typedef void (APIENTRYP PFNGLWAITVKSEMAPHORENVPROC) (GLuint64 vkSemaphore);
    typedef void (APIENTRYP PFNGLSIGNALVKSEMAPHORENVPROC) (GLuint64 vkSemaphore);
    typedef void (APIENTRYP PFNGLSIGNALVKFENCENVPROC) (GLuint64 vkFence);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glDrawVkImageNV(GLuint64 vkImage, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);
    GLAPI GLVULKANPROCNV APIENTRY glGetVkProcAddrNV(const GLchar *name);
    GLAPI void APIENTRY glWaitVkSemaphoreNV(GLuint64 vkSemaphore);
    GLAPI void APIENTRY glSignalVkSemaphoreNV(GLuint64 vkSemaphore);
    GLAPI void APIENTRY glSignalVkFenceNV(GLuint64 vkFence);
#endif
#endif /* GL_NV_draw_vulkan_image */

#ifndef GL_NV_fill_rectangle
#define GL_NV_fill_rectangle 1
#define GL_FILL_RECTANGLE_NV              0x933C
#endif /* GL_NV_fill_rectangle */

#ifndef GL_NV_fragment_coverage_to_color
#define GL_NV_fragment_coverage_to_color 1
#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV  0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV     0x92DE
    typedef void (APIENTRYP PFNGLFRAGMENTCOVERAGECOLORNVPROC) (GLuint color);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glFragmentCoverageColorNV(GLuint color);
#endif
#endif /* GL_NV_fragment_coverage_to_color */

#ifndef GL_NV_fragment_shader_interlock
#define GL_NV_fragment_shader_interlock 1
#endif /* GL_NV_fragment_shader_interlock */

#ifndef GL_NV_framebuffer_mixed_samples
#define GL_NV_framebuffer_mixed_samples 1
#define GL_COVERAGE_MODULATION_TABLE_NV   0x9331
#define GL_COLOR_SAMPLES_NV               0x8E20
#define GL_DEPTH_SAMPLES_NV               0x932D
#define GL_STENCIL_SAMPLES_NV             0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV         0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333
    typedef void (APIENTRYP PFNGLCOVERAGEMODULATIONTABLENVPROC) (GLsizei n, const GLfloat *v);
    typedef void (APIENTRYP PFNGLGETCOVERAGEMODULATIONTABLENVPROC) (GLsizei bufsize, GLfloat *v);
    typedef void (APIENTRYP PFNGLCOVERAGEMODULATIONNVPROC) (GLenum components);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glCoverageModulationTableNV(GLsizei n, const GLfloat *v);
    GLAPI void APIENTRY glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat *v);
    GLAPI void APIENTRY glCoverageModulationNV(GLenum components);
#endif
#endif /* GL_NV_framebuffer_mixed_samples */

#ifndef GL_NV_framebuffer_multisample_coverage
#define GL_NV_framebuffer_multisample_coverage 1
#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV  0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV  0x8E12
    typedef void (APIENTRYP PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) (GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glRenderbufferStorageMultisampleCoverageNV(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
#endif
#endif /* GL_NV_framebuffer_multisample_coverage */

#ifndef GL_NV_geometry_shader_passthrough
#define GL_NV_geometry_shader_passthrough 1
#endif /* GL_NV_geometry_shader_passthrough */

#ifndef GL_NV_gpu_shader5
#define GL_NV_gpu_shader5 1
    typedef int64_t GLint64EXT;
#define GL_INT64_NV                       0x140E
#define GL_UNSIGNED_INT64_NV              0x140F
#define GL_INT8_NV                        0x8FE0
#define GL_INT8_VEC2_NV                   0x8FE1
#define GL_INT8_VEC3_NV                   0x8FE2
#define GL_INT8_VEC4_NV                   0x8FE3
#define GL_INT16_NV                       0x8FE4
#define GL_INT16_VEC2_NV                  0x8FE5
#define GL_INT16_VEC3_NV                  0x8FE6
#define GL_INT16_VEC4_NV                  0x8FE7
#define GL_INT64_VEC2_NV                  0x8FE9
#define GL_INT64_VEC3_NV                  0x8FEA
#define GL_INT64_VEC4_NV                  0x8FEB
#define GL_UNSIGNED_INT8_NV               0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV          0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV          0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV          0x8FEF
#define GL_UNSIGNED_INT16_NV              0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV         0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV         0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV         0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV         0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV         0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV         0x8FF7
#define GL_FLOAT16_NV                     0x8FF8
#define GL_FLOAT16_VEC2_NV                0x8FF9
#define GL_FLOAT16_VEC3_NV                0x8FFA
#define GL_FLOAT16_VEC4_NV                0x8FFB
    typedef void (APIENTRYP PFNGLUNIFORM1I64NVPROC) (GLint location, GLint64EXT x);
    typedef void (APIENTRYP PFNGLUNIFORM2I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y);
    typedef void (APIENTRYP PFNGLUNIFORM3I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
    typedef void (APIENTRYP PFNGLUNIFORM4I64NVPROC) (GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
    typedef void (APIENTRYP PFNGLUNIFORM1I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLUNIFORM2I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLUNIFORM3I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLUNIFORM4I64VNVPROC) (GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLUNIFORM1UI64NVPROC) (GLint location, GLuint64EXT x);
    typedef void (APIENTRYP PFNGLUNIFORM2UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y);
    typedef void (APIENTRYP PFNGLUNIFORM3UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
    typedef void (APIENTRYP PFNGLUNIFORM4UI64NVPROC) (GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
    typedef void (APIENTRYP PFNGLUNIFORM1UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLUNIFORM2UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLUNIFORM3UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLUNIFORM4UI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLGETUNIFORMI64VNVPROC) (GLuint program, GLint location, GLint64EXT *params);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64NVPROC) (GLuint program, GLint location, GLint64EXT x);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64NVPROC) (GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4I64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64NVPROC) (GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM1UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM2UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM3UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORM4UI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glUniform1i64NV(GLint location, GLint64EXT x);
    GLAPI void APIENTRY glUniform2i64NV(GLint location, GLint64EXT x, GLint64EXT y);
    GLAPI void APIENTRY glUniform3i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
    GLAPI void APIENTRY glUniform4i64NV(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
    GLAPI void APIENTRY glUniform1i64vNV(GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glUniform2i64vNV(GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glUniform3i64vNV(GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glUniform4i64vNV(GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glUniform1ui64NV(GLint location, GLuint64EXT x);
    GLAPI void APIENTRY glUniform2ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y);
    GLAPI void APIENTRY glUniform3ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
    GLAPI void APIENTRY glUniform4ui64NV(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
    GLAPI void APIENTRY glUniform1ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glUniform2ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glUniform3ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glUniform4ui64vNV(GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glGetUniformi64vNV(GLuint program, GLint location, GLint64EXT *params);
    GLAPI void APIENTRY glProgramUniform1i64NV(GLuint program, GLint location, GLint64EXT x);
    GLAPI void APIENTRY glProgramUniform2i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
    GLAPI void APIENTRY glProgramUniform3i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
    GLAPI void APIENTRY glProgramUniform4i64NV(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
    GLAPI void APIENTRY glProgramUniform1i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glProgramUniform2i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glProgramUniform3i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glProgramUniform4i64vNV(GLuint program, GLint location, GLsizei count, const GLint64EXT *value);
    GLAPI void APIENTRY glProgramUniform1ui64NV(GLuint program, GLint location, GLuint64EXT x);
    GLAPI void APIENTRY glProgramUniform2ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
    GLAPI void APIENTRY glProgramUniform3ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
    GLAPI void APIENTRY glProgramUniform4ui64NV(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
    GLAPI void APIENTRY glProgramUniform1ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glProgramUniform2ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glProgramUniform3ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glProgramUniform4ui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#endif /* GL_NV_gpu_shader5 */

#ifndef GL_NV_internalformat_sample_query
#define GL_NV_internalformat_sample_query 1
#define GL_MULTISAMPLES_NV                0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV         0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV         0x9373
#define GL_CONFORMANT_NV                  0x9374
    typedef void (APIENTRYP PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) (GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint *params);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint *params);
#endif
#endif /* GL_NV_internalformat_sample_query */

#ifndef GL_NV_path_rendering
#define GL_NV_path_rendering 1
#define GL_PATH_FORMAT_SVG_NV             0x9070
#define GL_PATH_FORMAT_PS_NV              0x9071
#define GL_STANDARD_FONT_NAME_NV          0x9072
#define GL_SYSTEM_FONT_NAME_NV            0x9073
#define GL_FILE_NAME_NV                   0x9074
#define GL_PATH_STROKE_WIDTH_NV           0x9075
#define GL_PATH_END_CAPS_NV               0x9076
#define GL_PATH_INITIAL_END_CAP_NV        0x9077
#define GL_PATH_TERMINAL_END_CAP_NV       0x9078
#define GL_PATH_JOIN_STYLE_NV             0x9079
#define GL_PATH_MITER_LIMIT_NV            0x907A
#define GL_PATH_DASH_CAPS_NV              0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV       0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV      0x907D
#define GL_PATH_DASH_OFFSET_NV            0x907E
#define GL_PATH_CLIENT_LENGTH_NV          0x907F
#define GL_PATH_FILL_MODE_NV              0x9080
#define GL_PATH_FILL_MASK_NV              0x9081
#define GL_PATH_FILL_COVER_MODE_NV        0x9082
#define GL_PATH_STROKE_COVER_MODE_NV      0x9083
#define GL_PATH_STROKE_MASK_NV            0x9084
#define GL_COUNT_UP_NV                    0x9088
#define GL_COUNT_DOWN_NV                  0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV    0x908A
#define GL_CONVEX_HULL_NV                 0x908B
#define GL_BOUNDING_BOX_NV                0x908D
#define GL_TRANSLATE_X_NV                 0x908E
#define GL_TRANSLATE_Y_NV                 0x908F
#define GL_TRANSLATE_2D_NV                0x9090
#define GL_TRANSLATE_3D_NV                0x9091
#define GL_AFFINE_2D_NV                   0x9092
#define GL_AFFINE_3D_NV                   0x9094
#define GL_TRANSPOSE_AFFINE_2D_NV         0x9096
#define GL_TRANSPOSE_AFFINE_3D_NV         0x9098
#define GL_UTF8_NV                        0x909A
#define GL_UTF16_NV                       0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV 0x909C
#define GL_PATH_COMMAND_COUNT_NV          0x909D
#define GL_PATH_COORD_COUNT_NV            0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV       0x909F
#define GL_PATH_COMPUTED_LENGTH_NV        0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV      0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV    0x90A2
#define GL_SQUARE_NV                      0x90A3
#define GL_ROUND_NV                       0x90A4
#define GL_TRIANGULAR_NV                  0x90A5
#define GL_BEVEL_NV                       0x90A6
#define GL_MITER_REVERT_NV                0x90A7
#define GL_MITER_TRUNCATE_NV              0x90A8
#define GL_SKIP_MISSING_GLYPH_NV          0x90A9
#define GL_USE_MISSING_GLYPH_NV           0x90AA
#define GL_PATH_ERROR_POSITION_NV         0x90AB
#define GL_ACCUM_ADJACENT_PAIRS_NV        0x90AD
#define GL_ADJACENT_PAIRS_NV              0x90AE
#define GL_FIRST_TO_REST_NV               0x90AF
#define GL_PATH_GEN_MODE_NV               0x90B0
#define GL_PATH_GEN_COEFF_NV              0x90B1
#define GL_PATH_GEN_COMPONENTS_NV         0x90B3
#define GL_PATH_STENCIL_FUNC_NV           0x90B7
#define GL_PATH_STENCIL_REF_NV            0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV     0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV 0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV 0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV       0x90BF
#define GL_PATH_DASH_OFFSET_RESET_NV      0x90B4
#define GL_MOVE_TO_RESETS_NV              0x90B5
#define GL_MOVE_TO_CONTINUES_NV           0x90B6
#define GL_CLOSE_PATH_NV                  0x00
#define GL_MOVE_TO_NV                     0x02
#define GL_RELATIVE_MOVE_TO_NV            0x03
#define GL_LINE_TO_NV                     0x04
#define GL_RELATIVE_LINE_TO_NV            0x05
#define GL_HORIZONTAL_LINE_TO_NV          0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV 0x07
#define GL_VERTICAL_LINE_TO_NV            0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV   0x09
#define GL_QUADRATIC_CURVE_TO_NV          0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV 0x0B
#define GL_CUBIC_CURVE_TO_NV              0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV     0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV   0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0F
#define GL_SMOOTH_CUBIC_CURVE_TO_NV       0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV 0x11
#define GL_SMALL_CCW_ARC_TO_NV            0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV   0x13
#define GL_SMALL_CW_ARC_TO_NV             0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV    0x15
#define GL_LARGE_CCW_ARC_TO_NV            0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV   0x17
#define GL_LARGE_CW_ARC_TO_NV             0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV    0x19
#define GL_RESTART_PATH_NV                0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV    0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV     0xF4
#define GL_RECT_NV                        0xF6
#define GL_CIRCULAR_CCW_ARC_TO_NV         0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV          0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV     0xFC
#define GL_ARC_TO_NV                      0xFE
#define GL_RELATIVE_ARC_TO_NV             0xFF
#define GL_BOLD_BIT_NV                    0x01
#define GL_ITALIC_BIT_NV                  0x02
#define GL_GLYPH_WIDTH_BIT_NV             0x01
#define GL_GLYPH_HEIGHT_BIT_NV            0x02
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV 0x04
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV 0x08
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV 0x10
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV 0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV 0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV 0x80
#define GL_GLYPH_HAS_KERNING_BIT_NV       0x100
#define GL_FONT_X_MIN_BOUNDS_BIT_NV       0x00010000
#define GL_FONT_Y_MIN_BOUNDS_BIT_NV       0x00020000
#define GL_FONT_X_MAX_BOUNDS_BIT_NV       0x00040000
#define GL_FONT_Y_MAX_BOUNDS_BIT_NV       0x00080000
#define GL_FONT_UNITS_PER_EM_BIT_NV       0x00100000
#define GL_FONT_ASCENDER_BIT_NV           0x00200000
#define GL_FONT_DESCENDER_BIT_NV          0x00400000
#define GL_FONT_HEIGHT_BIT_NV             0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_BIT_NV  0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_BIT_NV 0x02000000
#define GL_FONT_UNDERLINE_POSITION_BIT_NV 0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_BIT_NV 0x08000000
#define GL_FONT_HAS_KERNING_BIT_NV        0x10000000
#define GL_ROUNDED_RECT_NV                0xE8
#define GL_RELATIVE_ROUNDED_RECT_NV       0xE9
#define GL_ROUNDED_RECT2_NV               0xEA
#define GL_RELATIVE_ROUNDED_RECT2_NV      0xEB
#define GL_ROUNDED_RECT4_NV               0xEC
#define GL_RELATIVE_ROUNDED_RECT4_NV      0xED
#define GL_ROUNDED_RECT8_NV               0xEE
#define GL_RELATIVE_ROUNDED_RECT8_NV      0xEF
#define GL_RELATIVE_RECT_NV               0xF7
#define GL_FONT_GLYPHS_AVAILABLE_NV       0x9368
#define GL_FONT_TARGET_UNAVAILABLE_NV     0x9369
#define GL_FONT_UNAVAILABLE_NV            0x936A
#define GL_FONT_UNINTELLIGIBLE_NV         0x936B
#define GL_CONIC_CURVE_TO_NV              0x1A
#define GL_RELATIVE_CONIC_CURVE_TO_NV     0x1B
#define GL_FONT_NUM_GLYPH_INDICES_BIT_NV  0x20000000
#define GL_STANDARD_FONT_FORMAT_NV        0x936C
#define GL_PATH_PROJECTION_NV             0x1701
#define GL_PATH_MODELVIEW_NV              0x1700
#define GL_PATH_MODELVIEW_STACK_DEPTH_NV  0x0BA3
#define GL_PATH_MODELVIEW_MATRIX_NV       0x0BA6
#define GL_PATH_MAX_MODELVIEW_STACK_DEPTH_NV 0x0D36
#define GL_PATH_TRANSPOSE_MODELVIEW_MATRIX_NV 0x84E3
#define GL_PATH_PROJECTION_STACK_DEPTH_NV 0x0BA4
#define GL_PATH_PROJECTION_MATRIX_NV      0x0BA7
#define GL_PATH_MAX_PROJECTION_STACK_DEPTH_NV 0x0D38
#define GL_PATH_TRANSPOSE_PROJECTION_MATRIX_NV 0x84E4
#define GL_FRAGMENT_INPUT_NV              0x936D
    typedef GLuint(APIENTRYP PFNGLGENPATHSNVPROC) (GLsizei range);
    typedef void (APIENTRYP PFNGLDELETEPATHSNVPROC) (GLuint path, GLsizei range);
    typedef GLboolean(APIENTRYP PFNGLISPATHNVPROC) (GLuint path);
    typedef void (APIENTRYP PFNGLPATHCOMMANDSNVPROC) (GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
    typedef void (APIENTRYP PFNGLPATHCOORDSNVPROC) (GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
    typedef void (APIENTRYP PFNGLPATHSUBCOMMANDSNVPROC) (GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
    typedef void (APIENTRYP PFNGLPATHSUBCOORDSNVPROC) (GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
    typedef void (APIENTRYP PFNGLPATHSTRINGNVPROC) (GLuint path, GLenum format, GLsizei length, const void *pathString);
    typedef void (APIENTRYP PFNGLPATHGLYPHSNVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    typedef void (APIENTRYP PFNGLPATHGLYPHRANGENVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    typedef void (APIENTRYP PFNGLWEIGHTPATHSNVPROC) (GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights);
    typedef void (APIENTRYP PFNGLCOPYPATHNVPROC) (GLuint resultPath, GLuint srcPath);
    typedef void (APIENTRYP PFNGLINTERPOLATEPATHSNVPROC) (GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
    typedef void (APIENTRYP PFNGLTRANSFORMPATHNVPROC) (GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues);
    typedef void (APIENTRYP PFNGLPATHPARAMETERIVNVPROC) (GLuint path, GLenum pname, const GLint *value);
    typedef void (APIENTRYP PFNGLPATHPARAMETERINVPROC) (GLuint path, GLenum pname, GLint value);
    typedef void (APIENTRYP PFNGLPATHPARAMETERFVNVPROC) (GLuint path, GLenum pname, const GLfloat *value);
    typedef void (APIENTRYP PFNGLPATHPARAMETERFNVPROC) (GLuint path, GLenum pname, GLfloat value);
    typedef void (APIENTRYP PFNGLPATHDASHARRAYNVPROC) (GLuint path, GLsizei dashCount, const GLfloat *dashArray);
    typedef void (APIENTRYP PFNGLPATHSTENCILFUNCNVPROC) (GLenum func, GLint ref, GLuint mask);
    typedef void (APIENTRYP PFNGLPATHSTENCILDEPTHOFFSETNVPROC) (GLfloat factor, GLfloat units);
    typedef void (APIENTRYP PFNGLSTENCILFILLPATHNVPROC) (GLuint path, GLenum fillMode, GLuint mask);
    typedef void (APIENTRYP PFNGLSTENCILSTROKEPATHNVPROC) (GLuint path, GLint reference, GLuint mask);
    typedef void (APIENTRYP PFNGLSTENCILFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
    typedef void (APIENTRYP PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
    typedef void (APIENTRYP PFNGLPATHCOVERDEPTHFUNCNVPROC) (GLenum func);
    typedef void (APIENTRYP PFNGLCOVERFILLPATHNVPROC) (GLuint path, GLenum coverMode);
    typedef void (APIENTRYP PFNGLCOVERSTROKEPATHNVPROC) (GLuint path, GLenum coverMode);
    typedef void (APIENTRYP PFNGLCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    typedef void (APIENTRYP PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    typedef void (APIENTRYP PFNGLGETPATHPARAMETERIVNVPROC) (GLuint path, GLenum pname, GLint *value);
    typedef void (APIENTRYP PFNGLGETPATHPARAMETERFVNVPROC) (GLuint path, GLenum pname, GLfloat *value);
    typedef void (APIENTRYP PFNGLGETPATHCOMMANDSNVPROC) (GLuint path, GLubyte *commands);
    typedef void (APIENTRYP PFNGLGETPATHCOORDSNVPROC) (GLuint path, GLfloat *coords);
    typedef void (APIENTRYP PFNGLGETPATHDASHARRAYNVPROC) (GLuint path, GLfloat *dashArray);
    typedef void (APIENTRYP PFNGLGETPATHMETRICSNVPROC) (GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
    typedef void (APIENTRYP PFNGLGETPATHMETRICRANGENVPROC) (GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
    typedef void (APIENTRYP PFNGLGETPATHSPACINGNVPROC) (GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
    typedef GLboolean(APIENTRYP PFNGLISPOINTINFILLPATHNVPROC) (GLuint path, GLuint mask, GLfloat x, GLfloat y);
    typedef GLboolean(APIENTRYP PFNGLISPOINTINSTROKEPATHNVPROC) (GLuint path, GLfloat x, GLfloat y);
    typedef GLfloat(APIENTRYP PFNGLGETPATHLENGTHNVPROC) (GLuint path, GLsizei startSegment, GLsizei numSegments);
    typedef GLboolean(APIENTRYP PFNGLPOINTALONGPATHNVPROC) (GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
    typedef void (APIENTRYP PFNGLMATRIXLOAD3X2FNVPROC) (GLenum matrixMode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXLOAD3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXMULT3X2FNVPROC) (GLenum matrixMode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXMULT3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) (GLenum matrixMode, const GLfloat *m);
    typedef void (APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHNVPROC) (GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
    typedef void (APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) (GLuint path, GLint reference, GLuint mask, GLenum coverMode);
    typedef void (APIENTRYP PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    typedef void (APIENTRYP PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) (GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    typedef GLenum(APIENTRYP PFNGLPATHGLYPHINDEXRANGENVPROC) (GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
    typedef GLenum(APIENTRYP PFNGLPATHGLYPHINDEXARRAYNVPROC) (GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    typedef GLenum(APIENTRYP PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) (GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    typedef void (APIENTRYP PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) (GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
    typedef void (APIENTRYP PFNGLGETPROGRAMRESOURCEFVNVPROC) (GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLfloat *params);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI GLuint APIENTRY glGenPathsNV(GLsizei range);
    GLAPI void APIENTRY glDeletePathsNV(GLuint path, GLsizei range);
    GLAPI GLboolean APIENTRY glIsPathNV(GLuint path);
    GLAPI void APIENTRY glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
    GLAPI void APIENTRY glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const void *coords);
    GLAPI void APIENTRY glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte *commands, GLsizei numCoords, GLenum coordType, const void *coords);
    GLAPI void APIENTRY glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const void *coords);
    GLAPI void APIENTRY glPathStringNV(GLuint path, GLenum format, GLsizei length, const void *pathString);
    GLAPI void APIENTRY glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const void *charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    GLAPI void APIENTRY glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    GLAPI void APIENTRY glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint *paths, const GLfloat *weights);
    GLAPI void APIENTRY glCopyPathNV(GLuint resultPath, GLuint srcPath);
    GLAPI void APIENTRY glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
    GLAPI void APIENTRY glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat *transformValues);
    GLAPI void APIENTRY glPathParameterivNV(GLuint path, GLenum pname, const GLint *value);
    GLAPI void APIENTRY glPathParameteriNV(GLuint path, GLenum pname, GLint value);
    GLAPI void APIENTRY glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat *value);
    GLAPI void APIENTRY glPathParameterfNV(GLuint path, GLenum pname, GLfloat value);
    GLAPI void APIENTRY glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat *dashArray);
    GLAPI void APIENTRY glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask);
    GLAPI void APIENTRY glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units);
    GLAPI void APIENTRY glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask);
    GLAPI void APIENTRY glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask);
    GLAPI void APIENTRY glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat *transformValues);
    GLAPI void APIENTRY glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat *transformValues);
    GLAPI void APIENTRY glPathCoverDepthFuncNV(GLenum func);
    GLAPI void APIENTRY glCoverFillPathNV(GLuint path, GLenum coverMode);
    GLAPI void APIENTRY glCoverStrokePathNV(GLuint path, GLenum coverMode);
    GLAPI void APIENTRY glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    GLAPI void APIENTRY glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    GLAPI void APIENTRY glGetPathParameterivNV(GLuint path, GLenum pname, GLint *value);
    GLAPI void APIENTRY glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat *value);
    GLAPI void APIENTRY glGetPathCommandsNV(GLuint path, GLubyte *commands);
    GLAPI void APIENTRY glGetPathCoordsNV(GLuint path, GLfloat *coords);
    GLAPI void APIENTRY glGetPathDashArrayNV(GLuint path, GLfloat *dashArray);
    GLAPI void APIENTRY glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLsizei stride, GLfloat *metrics);
    GLAPI void APIENTRY glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat *metrics);
    GLAPI void APIENTRY glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat *returnedSpacing);
    GLAPI GLboolean APIENTRY glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y);
    GLAPI GLboolean APIENTRY glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y);
    GLAPI GLfloat APIENTRY glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments);
    GLAPI GLboolean APIENTRY glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat *x, GLfloat *y, GLfloat *tangentX, GLfloat *tangentY);
    GLAPI void APIENTRY glMatrixLoad3x2fNV(GLenum matrixMode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixLoad3x3fNV(GLenum matrixMode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixLoadTranspose3x3fNV(GLenum matrixMode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixMult3x2fNV(GLenum matrixMode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixMult3x3fNV(GLenum matrixMode, const GLfloat *m);
    GLAPI void APIENTRY glMatrixMultTranspose3x3fNV(GLenum matrixMode, const GLfloat *m);
    GLAPI void APIENTRY glStencilThenCoverFillPathNV(GLuint path, GLenum fillMode, GLuint mask, GLenum coverMode);
    GLAPI void APIENTRY glStencilThenCoverStrokePathNV(GLuint path, GLint reference, GLuint mask, GLenum coverMode);
    GLAPI void APIENTRY glStencilThenCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    GLAPI void APIENTRY glStencilThenCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const void *paths, GLuint pathBase, GLint reference, GLuint mask, GLenum coverMode, GLenum transformType, const GLfloat *transformValues);
    GLAPI GLenum APIENTRY glPathGlyphIndexRangeNV(GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint pathParameterTemplate, GLfloat emScale, GLuint baseAndCount[2]);
    GLAPI GLenum APIENTRY glPathGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, const void *fontName, GLbitfield fontStyle, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    GLAPI GLenum APIENTRY glPathMemoryGlyphIndexArrayNV(GLuint firstPathName, GLenum fontTarget, GLsizeiptr fontSize, const void *fontData, GLsizei faceIndex, GLuint firstGlyphIndex, GLsizei numGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
    GLAPI void APIENTRY glProgramPathFragmentInputGenNV(GLuint program, GLint location, GLenum genMode, GLint components, const GLfloat *coeffs);
    GLAPI void APIENTRY glGetProgramResourcefvNV(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum *props, GLsizei bufSize, GLsizei *length, GLfloat *params);
#endif
#endif /* GL_NV_path_rendering */

#ifndef GL_NV_path_rendering_shared_edge
#define GL_NV_path_rendering_shared_edge 1
#define GL_SHARED_EDGE_NV                 0xC0
#endif /* GL_NV_path_rendering_shared_edge */

#ifndef GL_NV_sample_locations
#define GL_NV_sample_locations 1
#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV             0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343
    typedef void (APIENTRYP PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLenum target, GLuint start, GLsizei count, const GLfloat *v);
    typedef void (APIENTRYP PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) (GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
    typedef void (APIENTRYP PFNGLRESOLVEDEPTHVALUESNVPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, const GLfloat *v);
    GLAPI void APIENTRY glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, const GLfloat *v);
    GLAPI void APIENTRY glResolveDepthValuesNV(void);
#endif
#endif /* GL_NV_sample_locations */

#ifndef GL_NV_sample_mask_override_coverage
#define GL_NV_sample_mask_override_coverage 1
#endif /* GL_NV_sample_mask_override_coverage */

#ifndef GL_NV_shader_atomic_counters
#define GL_NV_shader_atomic_counters 1
#endif /* GL_NV_shader_atomic_counters */

#ifndef GL_NV_shader_atomic_float
#define GL_NV_shader_atomic_float 1
#endif /* GL_NV_shader_atomic_float */

#ifndef GL_NV_shader_atomic_float64
#define GL_NV_shader_atomic_float64 1
#endif /* GL_NV_shader_atomic_float64 */

#ifndef GL_NV_shader_atomic_fp16_vector
#define GL_NV_shader_atomic_fp16_vector 1
#endif /* GL_NV_shader_atomic_fp16_vector */

#ifndef GL_NV_shader_atomic_int64
#define GL_NV_shader_atomic_int64 1
#endif /* GL_NV_shader_atomic_int64 */

#ifndef GL_NV_shader_buffer_load
#define GL_NV_shader_buffer_load 1
#define GL_BUFFER_GPU_ADDRESS_NV          0x8F1D
#define GL_GPU_ADDRESS_NV                 0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV   0x8F35
    typedef void (APIENTRYP PFNGLMAKEBUFFERRESIDENTNVPROC) (GLenum target, GLenum access);
    typedef void (APIENTRYP PFNGLMAKEBUFFERNONRESIDENTNVPROC) (GLenum target);
    typedef GLboolean(APIENTRYP PFNGLISBUFFERRESIDENTNVPROC) (GLenum target);
    typedef void (APIENTRYP PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) (GLuint buffer, GLenum access);
    typedef void (APIENTRYP PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) (GLuint buffer);
    typedef GLboolean(APIENTRYP PFNGLISNAMEDBUFFERRESIDENTNVPROC) (GLuint buffer);
    typedef void (APIENTRYP PFNGLGETBUFFERPARAMETERUI64VNVPROC) (GLenum target, GLenum pname, GLuint64EXT *params);
    typedef void (APIENTRYP PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) (GLuint buffer, GLenum pname, GLuint64EXT *params);
    typedef void (APIENTRYP PFNGLGETINTEGERUI64VNVPROC) (GLenum value, GLuint64EXT *result);
    typedef void (APIENTRYP PFNGLUNIFORMUI64NVPROC) (GLint location, GLuint64EXT value);
    typedef void (APIENTRYP PFNGLUNIFORMUI64VNVPROC) (GLint location, GLsizei count, const GLuint64EXT *value);
    typedef void (APIENTRYP PFNGLGETUNIFORMUI64VNVPROC) (GLuint program, GLint location, GLuint64EXT *params);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMUI64NVPROC) (GLuint program, GLint location, GLuint64EXT value);
    typedef void (APIENTRYP PFNGLPROGRAMUNIFORMUI64VNVPROC) (GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glMakeBufferResidentNV(GLenum target, GLenum access);
    GLAPI void APIENTRY glMakeBufferNonResidentNV(GLenum target);
    GLAPI GLboolean APIENTRY glIsBufferResidentNV(GLenum target);
    GLAPI void APIENTRY glMakeNamedBufferResidentNV(GLuint buffer, GLenum access);
    GLAPI void APIENTRY glMakeNamedBufferNonResidentNV(GLuint buffer);
    GLAPI GLboolean APIENTRY glIsNamedBufferResidentNV(GLuint buffer);
    GLAPI void APIENTRY glGetBufferParameterui64vNV(GLenum target, GLenum pname, GLuint64EXT *params);
    GLAPI void APIENTRY glGetNamedBufferParameterui64vNV(GLuint buffer, GLenum pname, GLuint64EXT *params);
    GLAPI void APIENTRY glGetIntegerui64vNV(GLenum value, GLuint64EXT *result);
    GLAPI void APIENTRY glUniformui64NV(GLint location, GLuint64EXT value);
    GLAPI void APIENTRY glUniformui64vNV(GLint location, GLsizei count, const GLuint64EXT *value);
    GLAPI void APIENTRY glGetUniformui64vNV(GLuint program, GLint location, GLuint64EXT *params);
    GLAPI void APIENTRY glProgramUniformui64NV(GLuint program, GLint location, GLuint64EXT value);
    GLAPI void APIENTRY glProgramUniformui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64EXT *value);
#endif
#endif /* GL_NV_shader_buffer_load */

#ifndef GL_NV_shader_buffer_store
#define GL_NV_shader_buffer_store 1
#define GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV 0x00000010
#endif /* GL_NV_shader_buffer_store */

#ifndef GL_NV_shader_thread_group
#define GL_NV_shader_thread_group 1
#define GL_WARP_SIZE_NV                   0x9339
#define GL_WARPS_PER_SM_NV                0x933A
#define GL_SM_COUNT_NV                    0x933B
#endif /* GL_NV_shader_thread_group */

#ifndef GL_NV_shader_thread_shuffle
#define GL_NV_shader_thread_shuffle 1
#endif /* GL_NV_shader_thread_shuffle */

#ifndef GL_NV_stereo_view_rendering
#define GL_NV_stereo_view_rendering 1
#endif /* GL_NV_stereo_view_rendering */

#ifndef GL_NV_texture_barrier
#define GL_NV_texture_barrier 1
    typedef void (APIENTRYP PFNGLTEXTUREBARRIERNVPROC) (void);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glTextureBarrierNV(void);
#endif
#endif /* GL_NV_texture_barrier */

#ifndef GL_NV_uniform_buffer_unified_memory
#define GL_NV_uniform_buffer_unified_memory 1
#define GL_UNIFORM_BUFFER_UNIFIED_NV      0x936E
#define GL_UNIFORM_BUFFER_ADDRESS_NV      0x936F
#define GL_UNIFORM_BUFFER_LENGTH_NV       0x9370
#endif /* GL_NV_uniform_buffer_unified_memory */

#ifndef GL_NV_vertex_attrib_integer_64bit
#define GL_NV_vertex_attrib_integer_64bit 1
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1I64NVPROC) (GLuint index, GLint64EXT x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL2I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL3I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL4I64NVPROC) (GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1I64VNVPROC) (GLuint index, const GLint64EXT *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL2I64VNVPROC) (GLuint index, const GLint64EXT *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL3I64VNVPROC) (GLuint index, const GLint64EXT *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL4I64VNVPROC) (GLuint index, const GLint64EXT *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64NVPROC) (GLuint index, GLuint64EXT x);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL2UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL3UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL4UI64NVPROC) (GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL1UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL2UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL3UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBL4UI64VNVPROC) (GLuint index, const GLuint64EXT *v);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLI64VNVPROC) (GLuint index, GLenum pname, GLint64EXT *params);
    typedef void (APIENTRYP PFNGLGETVERTEXATTRIBLUI64VNVPROC) (GLuint index, GLenum pname, GLuint64EXT *params);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBLFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLsizei stride);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glVertexAttribL1i64NV(GLuint index, GLint64EXT x);
    GLAPI void APIENTRY glVertexAttribL2i64NV(GLuint index, GLint64EXT x, GLint64EXT y);
    GLAPI void APIENTRY glVertexAttribL3i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
    GLAPI void APIENTRY glVertexAttribL4i64NV(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
    GLAPI void APIENTRY glVertexAttribL1i64vNV(GLuint index, const GLint64EXT *v);
    GLAPI void APIENTRY glVertexAttribL2i64vNV(GLuint index, const GLint64EXT *v);
    GLAPI void APIENTRY glVertexAttribL3i64vNV(GLuint index, const GLint64EXT *v);
    GLAPI void APIENTRY glVertexAttribL4i64vNV(GLuint index, const GLint64EXT *v);
    GLAPI void APIENTRY glVertexAttribL1ui64NV(GLuint index, GLuint64EXT x);
    GLAPI void APIENTRY glVertexAttribL2ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y);
    GLAPI void APIENTRY glVertexAttribL3ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
    GLAPI void APIENTRY glVertexAttribL4ui64NV(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
    GLAPI void APIENTRY glVertexAttribL1ui64vNV(GLuint index, const GLuint64EXT *v);
    GLAPI void APIENTRY glVertexAttribL2ui64vNV(GLuint index, const GLuint64EXT *v);
    GLAPI void APIENTRY glVertexAttribL3ui64vNV(GLuint index, const GLuint64EXT *v);
    GLAPI void APIENTRY glVertexAttribL4ui64vNV(GLuint index, const GLuint64EXT *v);
    GLAPI void APIENTRY glGetVertexAttribLi64vNV(GLuint index, GLenum pname, GLint64EXT *params);
    GLAPI void APIENTRY glGetVertexAttribLui64vNV(GLuint index, GLenum pname, GLuint64EXT *params);
    GLAPI void APIENTRY glVertexAttribLFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride);
#endif
#endif /* GL_NV_vertex_attrib_integer_64bit */

#ifndef GL_NV_vertex_buffer_unified_memory
#define GL_NV_vertex_buffer_unified_memory 1
#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV 0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV       0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV 0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV        0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV        0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV         0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV         0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV 0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV     0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV 0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV     0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV       0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV  0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV         0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV         0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV          0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV          0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV  0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV      0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV 0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV      0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV        0x8F33
#define GL_DRAW_INDIRECT_UNIFIED_NV       0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV       0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV        0x8F42
    typedef void (APIENTRYP PFNGLBUFFERADDRESSRANGENVPROC) (GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
    typedef void (APIENTRYP PFNGLVERTEXFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLNORMALFORMATNVPROC) (GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLCOLORFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLINDEXFORMATNVPROC) (GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLTEXCOORDFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLEDGEFLAGFORMATNVPROC) (GLsizei stride);
    typedef void (APIENTRYP PFNGLSECONDARYCOLORFORMATNVPROC) (GLint size, GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLFOGCOORDFORMATNVPROC) (GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
    typedef void (APIENTRYP PFNGLVERTEXATTRIBIFORMATNVPROC) (GLuint index, GLint size, GLenum type, GLsizei stride);
    typedef void (APIENTRYP PFNGLGETINTEGERUI64I_VNVPROC) (GLenum value, GLuint index, GLuint64EXT *result);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glBufferAddressRangeNV(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
    GLAPI void APIENTRY glVertexFormatNV(GLint size, GLenum type, GLsizei stride);
    GLAPI void APIENTRY glNormalFormatNV(GLenum type, GLsizei stride);
    GLAPI void APIENTRY glColorFormatNV(GLint size, GLenum type, GLsizei stride);
    GLAPI void APIENTRY glIndexFormatNV(GLenum type, GLsizei stride);
    GLAPI void APIENTRY glTexCoordFormatNV(GLint size, GLenum type, GLsizei stride);
    GLAPI void APIENTRY glEdgeFlagFormatNV(GLsizei stride);
    GLAPI void APIENTRY glSecondaryColorFormatNV(GLint size, GLenum type, GLsizei stride);
    GLAPI void APIENTRY glFogCoordFormatNV(GLenum type, GLsizei stride);
    GLAPI void APIENTRY glVertexAttribFormatNV(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
    GLAPI void APIENTRY glVertexAttribIFormatNV(GLuint index, GLint size, GLenum type, GLsizei stride);
    GLAPI void APIENTRY glGetIntegerui64i_vNV(GLenum value, GLuint index, GLuint64EXT *result);
#endif
#endif /* GL_NV_vertex_buffer_unified_memory */

#ifndef GL_NV_viewport_array2
#define GL_NV_viewport_array2 1
#endif /* GL_NV_viewport_array2 */

#ifndef GL_NV_viewport_swizzle
#define GL_NV_viewport_swizzle 1
#define GL_VIEWPORT_SWIZZLE_POSITIVE_X_NV 0x9350
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_X_NV 0x9351
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Y_NV 0x9352
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Y_NV 0x9353
#define GL_VIEWPORT_SWIZZLE_POSITIVE_Z_NV 0x9354
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_Z_NV 0x9355
#define GL_VIEWPORT_SWIZZLE_POSITIVE_W_NV 0x9356
#define GL_VIEWPORT_SWIZZLE_NEGATIVE_W_NV 0x9357
#define GL_VIEWPORT_SWIZZLE_X_NV          0x9358
#define GL_VIEWPORT_SWIZZLE_Y_NV          0x9359
#define GL_VIEWPORT_SWIZZLE_Z_NV          0x935A
#define GL_VIEWPORT_SWIZZLE_W_NV          0x935B
    typedef void (APIENTRYP PFNGLVIEWPORTSWIZZLENVPROC) (GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glViewportSwizzleNV(GLuint index, GLenum swizzlex, GLenum swizzley, GLenum swizzlez, GLenum swizzlew);
#endif
#endif /* GL_NV_viewport_swizzle */

#ifndef GL_OVR_multiview
#define GL_OVR_multiview 1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR                  0x9631
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR 0x9633
    typedef void (APIENTRYP PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
#ifdef GL_GLEXT_PROTOTYPES
    GLAPI void APIENTRY glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
#endif
#endif /* GL_OVR_multiview */

#ifndef GL_OVR_multiview2
#define GL_OVR_multiview2 1
#endif /* GL_OVR_multiview2 */

#ifdef __cplusplus
}
#endif

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
// GL3W
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

/*

This file is a modified version of gl3w_gen.py, part of gl3w
(hosted at https://github.com/skaslev/gl3w)

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.

In jurisdictions that recognize copyright laws, the author or authors
of this software dedicate any and all copyright interest in the
software to the public domain. We make this dedication for the benefit
of the public at large and to the detriment of our heirs and
successors. We intend this dedication to be an overt act of
relinquishment in perpetuity of all present and future rights to this
software under copyright law.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

============================================================================
*/

#ifdef __cplusplus
extern "C" {
#endif

    typedef void(*GL3WglProc)(void);

    /* gl3w api */
    int glInit(void);
    int glIsSupported(int major, int minor);
    GL3WglProc glGetProcAddress(char const *proc);

    /* OpenGL functions */
    extern PFNGLACTIVEPROGRAMEXTPROC                            gl3wActiveProgramEXT;
    extern PFNGLACTIVESHADERPROGRAMPROC                         gl3wActiveShaderProgram;
    extern PFNGLACTIVETEXTUREPROC                               gl3wActiveTexture;
    extern PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC         gl3wApplyFramebufferAttachmentCMAAINTEL;
    extern PFNGLATTACHSHADERPROC                                gl3wAttachShader;
    extern PFNGLBEGINCONDITIONALRENDERPROC                      gl3wBeginConditionalRender;
    extern PFNGLBEGINCONDITIONALRENDERNVPROC                    gl3wBeginConditionalRenderNV;
    extern PFNGLBEGINPERFMONITORAMDPROC                         gl3wBeginPerfMonitorAMD;
    extern PFNGLBEGINPERFQUERYINTELPROC                         gl3wBeginPerfQueryINTEL;
    extern PFNGLBEGINQUERYPROC                                  gl3wBeginQuery;
    extern PFNGLBEGINQUERYINDEXEDPROC                           gl3wBeginQueryIndexed;
    extern PFNGLBEGINTRANSFORMFEEDBACKPROC                      gl3wBeginTransformFeedback;
    extern PFNGLBINDATTRIBLOCATIONPROC                          gl3wBindAttribLocation;
    extern PFNGLBINDBUFFERPROC                                  gl3wBindBuffer;
    extern PFNGLBINDBUFFERBASEPROC                              gl3wBindBufferBase;
    extern PFNGLBINDBUFFERRANGEPROC                             gl3wBindBufferRange;
    extern PFNGLBINDBUFFERSBASEPROC                             gl3wBindBuffersBase;
    extern PFNGLBINDBUFFERSRANGEPROC                            gl3wBindBuffersRange;
    extern PFNGLBINDFRAGDATALOCATIONPROC                        gl3wBindFragDataLocation;
    extern PFNGLBINDFRAGDATALOCATIONINDEXEDPROC                 gl3wBindFragDataLocationIndexed;
    extern PFNGLBINDFRAMEBUFFERPROC                             gl3wBindFramebuffer;
    extern PFNGLBINDIMAGETEXTUREPROC                            gl3wBindImageTexture;
    extern PFNGLBINDIMAGETEXTURESPROC                           gl3wBindImageTextures;
    extern PFNGLBINDMULTITEXTUREEXTPROC                         gl3wBindMultiTextureEXT;
    extern PFNGLBINDPROGRAMPIPELINEPROC                         gl3wBindProgramPipeline;
    extern PFNGLBINDRENDERBUFFERPROC                            gl3wBindRenderbuffer;
    extern PFNGLBINDSAMPLERPROC                                 gl3wBindSampler;
    extern PFNGLBINDSAMPLERSPROC                                gl3wBindSamplers;
    extern PFNGLBINDTEXTUREPROC                                 gl3wBindTexture;
    extern PFNGLBINDTEXTUREUNITPROC                             gl3wBindTextureUnit;
    extern PFNGLBINDTEXTURESPROC                                gl3wBindTextures;
    extern PFNGLBINDTRANSFORMFEEDBACKPROC                       gl3wBindTransformFeedback;
    extern PFNGLBINDVERTEXARRAYPROC                             gl3wBindVertexArray;
    extern PFNGLBINDVERTEXBUFFERPROC                            gl3wBindVertexBuffer;
    extern PFNGLBINDVERTEXBUFFERSPROC                           gl3wBindVertexBuffers;
    extern PFNGLBLENDBARRIERKHRPROC                             gl3wBlendBarrierKHR;
    extern PFNGLBLENDBARRIERNVPROC                              gl3wBlendBarrierNV;
    extern PFNGLBLENDCOLORPROC                                  gl3wBlendColor;
    extern PFNGLBLENDEQUATIONPROC                               gl3wBlendEquation;
    extern PFNGLBLENDEQUATIONSEPARATEPROC                       gl3wBlendEquationSeparate;
    extern PFNGLBLENDEQUATIONSEPARATEIPROC                      gl3wBlendEquationSeparatei;
    extern PFNGLBLENDEQUATIONSEPARATEIARBPROC                   gl3wBlendEquationSeparateiARB;
    extern PFNGLBLENDEQUATIONIPROC                              gl3wBlendEquationi;
    extern PFNGLBLENDEQUATIONIARBPROC                           gl3wBlendEquationiARB;
    extern PFNGLBLENDFUNCPROC                                   gl3wBlendFunc;
    extern PFNGLBLENDFUNCSEPARATEPROC                           gl3wBlendFuncSeparate;
    extern PFNGLBLENDFUNCSEPARATEIPROC                          gl3wBlendFuncSeparatei;
    extern PFNGLBLENDFUNCSEPARATEIARBPROC                       gl3wBlendFuncSeparateiARB;
    extern PFNGLBLENDFUNCIPROC                                  gl3wBlendFunci;
    extern PFNGLBLENDFUNCIARBPROC                               gl3wBlendFunciARB;
    extern PFNGLBLENDPARAMETERINVPROC                           gl3wBlendParameteriNV;
    extern PFNGLBLITFRAMEBUFFERPROC                             gl3wBlitFramebuffer;
    extern PFNGLBLITNAMEDFRAMEBUFFERPROC                        gl3wBlitNamedFramebuffer;
    extern PFNGLBUFFERADDRESSRANGENVPROC                        gl3wBufferAddressRangeNV;
    extern PFNGLBUFFERDATAPROC                                  gl3wBufferData;
    extern PFNGLBUFFERPAGECOMMITMENTARBPROC                     gl3wBufferPageCommitmentARB;
    extern PFNGLBUFFERSTORAGEPROC                               gl3wBufferStorage;
    extern PFNGLBUFFERSUBDATAPROC                               gl3wBufferSubData;
    extern PFNGLCALLCOMMANDLISTNVPROC                           gl3wCallCommandListNV;
    extern PFNGLCHECKFRAMEBUFFERSTATUSPROC                      gl3wCheckFramebufferStatus;
    extern PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC                 gl3wCheckNamedFramebufferStatus;
    extern PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC              gl3wCheckNamedFramebufferStatusEXT;
    extern PFNGLCLAMPCOLORPROC                                  gl3wClampColor;
    extern PFNGLCLEARPROC                                       gl3wClear;
    extern PFNGLCLEARBUFFERDATAPROC                             gl3wClearBufferData;
    extern PFNGLCLEARBUFFERSUBDATAPROC                          gl3wClearBufferSubData;
    extern PFNGLCLEARBUFFERFIPROC                               gl3wClearBufferfi;
    extern PFNGLCLEARBUFFERFVPROC                               gl3wClearBufferfv;
    extern PFNGLCLEARBUFFERIVPROC                               gl3wClearBufferiv;
    extern PFNGLCLEARBUFFERUIVPROC                              gl3wClearBufferuiv;
    extern PFNGLCLEARCOLORPROC                                  gl3wClearColor;
    extern PFNGLCLEARDEPTHPROC                                  gl3wClearDepth;
    extern PFNGLCLEARDEPTHFPROC                                 gl3wClearDepthf;
    extern PFNGLCLEARNAMEDBUFFERDATAPROC                        gl3wClearNamedBufferData;
    extern PFNGLCLEARNAMEDBUFFERDATAEXTPROC                     gl3wClearNamedBufferDataEXT;
    extern PFNGLCLEARNAMEDBUFFERSUBDATAPROC                     gl3wClearNamedBufferSubData;
    extern PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC                  gl3wClearNamedBufferSubDataEXT;
    extern PFNGLCLEARNAMEDFRAMEBUFFERFIPROC                     gl3wClearNamedFramebufferfi;
    extern PFNGLCLEARNAMEDFRAMEBUFFERFVPROC                     gl3wClearNamedFramebufferfv;
    extern PFNGLCLEARNAMEDFRAMEBUFFERIVPROC                     gl3wClearNamedFramebufferiv;
    extern PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC                    gl3wClearNamedFramebufferuiv;
    extern PFNGLCLEARSTENCILPROC                                gl3wClearStencil;
    extern PFNGLCLEARTEXIMAGEPROC                               gl3wClearTexImage;
    extern PFNGLCLEARTEXSUBIMAGEPROC                            gl3wClearTexSubImage;
    extern PFNGLCLIENTATTRIBDEFAULTEXTPROC                      gl3wClientAttribDefaultEXT;
    extern PFNGLCLIENTWAITSYNCPROC                              gl3wClientWaitSync;
    extern PFNGLCLIPCONTROLPROC                                 gl3wClipControl;
    extern PFNGLCOLORFORMATNVPROC                               gl3wColorFormatNV;
    extern PFNGLCOLORMASKPROC                                   gl3wColorMask;
    extern PFNGLCOLORMASKIPROC                                  gl3wColorMaski;
    extern PFNGLCOMMANDLISTSEGMENTSNVPROC                       gl3wCommandListSegmentsNV;
    extern PFNGLCOMPILECOMMANDLISTNVPROC                        gl3wCompileCommandListNV;
    extern PFNGLCOMPILESHADERPROC                               gl3wCompileShader;
    extern PFNGLCOMPILESHADERINCLUDEARBPROC                     gl3wCompileShaderIncludeARB;
    extern PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC                gl3wCompressedMultiTexImage1DEXT;
    extern PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC                gl3wCompressedMultiTexImage2DEXT;
    extern PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC                gl3wCompressedMultiTexImage3DEXT;
    extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC             gl3wCompressedMultiTexSubImage1DEXT;
    extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC             gl3wCompressedMultiTexSubImage2DEXT;
    extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC             gl3wCompressedMultiTexSubImage3DEXT;
    extern PFNGLCOMPRESSEDTEXIMAGE1DPROC                        gl3wCompressedTexImage1D;
    extern PFNGLCOMPRESSEDTEXIMAGE2DPROC                        gl3wCompressedTexImage2D;
    extern PFNGLCOMPRESSEDTEXIMAGE3DPROC                        gl3wCompressedTexImage3D;
    extern PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC                     gl3wCompressedTexSubImage1D;
    extern PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC                     gl3wCompressedTexSubImage2D;
    extern PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC                     gl3wCompressedTexSubImage3D;
    extern PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC                 gl3wCompressedTextureImage1DEXT;
    extern PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC                 gl3wCompressedTextureImage2DEXT;
    extern PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC                 gl3wCompressedTextureImage3DEXT;
    extern PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC                 gl3wCompressedTextureSubImage1D;
    extern PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC              gl3wCompressedTextureSubImage1DEXT;
    extern PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC                 gl3wCompressedTextureSubImage2D;
    extern PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC              gl3wCompressedTextureSubImage2DEXT;
    extern PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC                 gl3wCompressedTextureSubImage3D;
    extern PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC              gl3wCompressedTextureSubImage3DEXT;
    extern PFNGLCONSERVATIVERASTERPARAMETERFNVPROC              gl3wConservativeRasterParameterfNV;
    extern PFNGLCONSERVATIVERASTERPARAMETERINVPROC              gl3wConservativeRasterParameteriNV;
    extern PFNGLCOPYBUFFERSUBDATAPROC                           gl3wCopyBufferSubData;
    extern PFNGLCOPYIMAGESUBDATAPROC                            gl3wCopyImageSubData;
    extern PFNGLCOPYMULTITEXIMAGE1DEXTPROC                      gl3wCopyMultiTexImage1DEXT;
    extern PFNGLCOPYMULTITEXIMAGE2DEXTPROC                      gl3wCopyMultiTexImage2DEXT;
    extern PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC                   gl3wCopyMultiTexSubImage1DEXT;
    extern PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC                   gl3wCopyMultiTexSubImage2DEXT;
    extern PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC                   gl3wCopyMultiTexSubImage3DEXT;
    extern PFNGLCOPYNAMEDBUFFERSUBDATAPROC                      gl3wCopyNamedBufferSubData;
    extern PFNGLCOPYPATHNVPROC                                  gl3wCopyPathNV;
    extern PFNGLCOPYTEXIMAGE1DPROC                              gl3wCopyTexImage1D;
    extern PFNGLCOPYTEXIMAGE2DPROC                              gl3wCopyTexImage2D;
    extern PFNGLCOPYTEXSUBIMAGE1DPROC                           gl3wCopyTexSubImage1D;
    extern PFNGLCOPYTEXSUBIMAGE2DPROC                           gl3wCopyTexSubImage2D;
    extern PFNGLCOPYTEXSUBIMAGE3DPROC                           gl3wCopyTexSubImage3D;
    extern PFNGLCOPYTEXTUREIMAGE1DEXTPROC                       gl3wCopyTextureImage1DEXT;
    extern PFNGLCOPYTEXTUREIMAGE2DEXTPROC                       gl3wCopyTextureImage2DEXT;
    extern PFNGLCOPYTEXTURESUBIMAGE1DPROC                       gl3wCopyTextureSubImage1D;
    extern PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC                    gl3wCopyTextureSubImage1DEXT;
    extern PFNGLCOPYTEXTURESUBIMAGE2DPROC                       gl3wCopyTextureSubImage2D;
    extern PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC                    gl3wCopyTextureSubImage2DEXT;
    extern PFNGLCOPYTEXTURESUBIMAGE3DPROC                       gl3wCopyTextureSubImage3D;
    extern PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC                    gl3wCopyTextureSubImage3DEXT;
    extern PFNGLCOVERFILLPATHINSTANCEDNVPROC                    gl3wCoverFillPathInstancedNV;
    extern PFNGLCOVERFILLPATHNVPROC                             gl3wCoverFillPathNV;
    extern PFNGLCOVERSTROKEPATHINSTANCEDNVPROC                  gl3wCoverStrokePathInstancedNV;
    extern PFNGLCOVERSTROKEPATHNVPROC                           gl3wCoverStrokePathNV;
    extern PFNGLCOVERAGEMODULATIONNVPROC                        gl3wCoverageModulationNV;
    extern PFNGLCOVERAGEMODULATIONTABLENVPROC                   gl3wCoverageModulationTableNV;
    extern PFNGLCREATEBUFFERSPROC                               gl3wCreateBuffers;
    extern PFNGLCREATECOMMANDLISTSNVPROC                        gl3wCreateCommandListsNV;
    extern PFNGLCREATEFRAMEBUFFERSPROC                          gl3wCreateFramebuffers;
    extern PFNGLCREATEPERFQUERYINTELPROC                        gl3wCreatePerfQueryINTEL;
    extern PFNGLCREATEPROGRAMPROC                               gl3wCreateProgram;
    extern PFNGLCREATEPROGRAMPIPELINESPROC                      gl3wCreateProgramPipelines;
    extern PFNGLCREATEQUERIESPROC                               gl3wCreateQueries;
    extern PFNGLCREATERENDERBUFFERSPROC                         gl3wCreateRenderbuffers;
    extern PFNGLCREATESAMPLERSPROC                              gl3wCreateSamplers;
    extern PFNGLCREATESHADERPROC                                gl3wCreateShader;
    extern PFNGLCREATESHADERPROGRAMEXTPROC                      gl3wCreateShaderProgramEXT;
    extern PFNGLCREATESHADERPROGRAMVPROC                        gl3wCreateShaderProgramv;
    extern PFNGLCREATESTATESNVPROC                              gl3wCreateStatesNV;
    extern PFNGLCREATESYNCFROMCLEVENTARBPROC                    gl3wCreateSyncFromCLeventARB;
    extern PFNGLCREATETEXTURESPROC                              gl3wCreateTextures;
    extern PFNGLCREATETRANSFORMFEEDBACKSPROC                    gl3wCreateTransformFeedbacks;
    extern PFNGLCREATEVERTEXARRAYSPROC                          gl3wCreateVertexArrays;
    extern PFNGLCULLFACEPROC                                    gl3wCullFace;
    extern PFNGLDEBUGMESSAGECALLBACKPROC                        gl3wDebugMessageCallback;
    extern PFNGLDEBUGMESSAGECALLBACKARBPROC                     gl3wDebugMessageCallbackARB;
    extern PFNGLDEBUGMESSAGECONTROLPROC                         gl3wDebugMessageControl;
    extern PFNGLDEBUGMESSAGECONTROLARBPROC                      gl3wDebugMessageControlARB;
    extern PFNGLDEBUGMESSAGEINSERTPROC                          gl3wDebugMessageInsert;
    extern PFNGLDEBUGMESSAGEINSERTARBPROC                       gl3wDebugMessageInsertARB;
    extern PFNGLDELETEBUFFERSPROC                               gl3wDeleteBuffers;
    extern PFNGLDELETECOMMANDLISTSNVPROC                        gl3wDeleteCommandListsNV;
    extern PFNGLDELETEFRAMEBUFFERSPROC                          gl3wDeleteFramebuffers;
    extern PFNGLDELETENAMEDSTRINGARBPROC                        gl3wDeleteNamedStringARB;
    extern PFNGLDELETEPATHSNVPROC                               gl3wDeletePathsNV;
    extern PFNGLDELETEPERFMONITORSAMDPROC                       gl3wDeletePerfMonitorsAMD;
    extern PFNGLDELETEPERFQUERYINTELPROC                        gl3wDeletePerfQueryINTEL;
    extern PFNGLDELETEPROGRAMPROC                               gl3wDeleteProgram;
    extern PFNGLDELETEPROGRAMPIPELINESPROC                      gl3wDeleteProgramPipelines;
    extern PFNGLDELETEQUERIESPROC                               gl3wDeleteQueries;
    extern PFNGLDELETERENDERBUFFERSPROC                         gl3wDeleteRenderbuffers;
    extern PFNGLDELETESAMPLERSPROC                              gl3wDeleteSamplers;
    extern PFNGLDELETESHADERPROC                                gl3wDeleteShader;
    extern PFNGLDELETESTATESNVPROC                              gl3wDeleteStatesNV;
    extern PFNGLDELETESYNCPROC                                  gl3wDeleteSync;
    extern PFNGLDELETETEXTURESPROC                              gl3wDeleteTextures;
    extern PFNGLDELETETRANSFORMFEEDBACKSPROC                    gl3wDeleteTransformFeedbacks;
    extern PFNGLDELETEVERTEXARRAYSPROC                          gl3wDeleteVertexArrays;
    extern PFNGLDEPTHFUNCPROC                                   gl3wDepthFunc;
    extern PFNGLDEPTHMASKPROC                                   gl3wDepthMask;
    extern PFNGLDEPTHRANGEPROC                                  gl3wDepthRange;
    extern PFNGLDEPTHRANGEARRAYVPROC                            gl3wDepthRangeArrayv;
    extern PFNGLDEPTHRANGEINDEXEDPROC                           gl3wDepthRangeIndexed;
    extern PFNGLDEPTHRANGEFPROC                                 gl3wDepthRangef;
    extern PFNGLDETACHSHADERPROC                                gl3wDetachShader;
    extern PFNGLDISABLEPROC                                     gl3wDisable;
    extern PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC                gl3wDisableClientStateIndexedEXT;
    extern PFNGLDISABLECLIENTSTATEIEXTPROC                      gl3wDisableClientStateiEXT;
    extern PFNGLDISABLEINDEXEDEXTPROC                           gl3wDisableIndexedEXT;
    extern PFNGLDISABLEVERTEXARRAYATTRIBPROC                    gl3wDisableVertexArrayAttrib;
    extern PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC                 gl3wDisableVertexArrayAttribEXT;
    extern PFNGLDISABLEVERTEXARRAYEXTPROC                       gl3wDisableVertexArrayEXT;
    extern PFNGLDISABLEVERTEXATTRIBARRAYPROC                    gl3wDisableVertexAttribArray;
    extern PFNGLDISABLEIPROC                                    gl3wDisablei;
    extern PFNGLDISPATCHCOMPUTEPROC                             gl3wDispatchCompute;
    extern PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC                 gl3wDispatchComputeGroupSizeARB;
    extern PFNGLDISPATCHCOMPUTEINDIRECTPROC                     gl3wDispatchComputeIndirect;
    extern PFNGLDRAWARRAYSPROC                                  gl3wDrawArrays;
    extern PFNGLDRAWARRAYSINDIRECTPROC                          gl3wDrawArraysIndirect;
    extern PFNGLDRAWARRAYSINSTANCEDPROC                         gl3wDrawArraysInstanced;
    extern PFNGLDRAWARRAYSINSTANCEDARBPROC                      gl3wDrawArraysInstancedARB;
    extern PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC             gl3wDrawArraysInstancedBaseInstance;
    extern PFNGLDRAWARRAYSINSTANCEDEXTPROC                      gl3wDrawArraysInstancedEXT;
    extern PFNGLDRAWBUFFERPROC                                  gl3wDrawBuffer;
    extern PFNGLDRAWBUFFERSPROC                                 gl3wDrawBuffers;
    extern PFNGLDRAWCOMMANDSADDRESSNVPROC                       gl3wDrawCommandsAddressNV;
    extern PFNGLDRAWCOMMANDSNVPROC                              gl3wDrawCommandsNV;
    extern PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC                 gl3wDrawCommandsStatesAddressNV;
    extern PFNGLDRAWCOMMANDSSTATESNVPROC                        gl3wDrawCommandsStatesNV;
    extern PFNGLDRAWELEMENTSPROC                                gl3wDrawElements;
    extern PFNGLDRAWELEMENTSBASEVERTEXPROC                      gl3wDrawElementsBaseVertex;
    extern PFNGLDRAWELEMENTSINDIRECTPROC                        gl3wDrawElementsIndirect;
    extern PFNGLDRAWELEMENTSINSTANCEDPROC                       gl3wDrawElementsInstanced;
    extern PFNGLDRAWELEMENTSINSTANCEDARBPROC                    gl3wDrawElementsInstancedARB;
    extern PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC           gl3wDrawElementsInstancedBaseInstance;
    extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC             gl3wDrawElementsInstancedBaseVertex;
    extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC gl3wDrawElementsInstancedBaseVertexBaseInstance;
    extern PFNGLDRAWELEMENTSINSTANCEDEXTPROC                    gl3wDrawElementsInstancedEXT;
    extern PFNGLDRAWRANGEELEMENTSPROC                           gl3wDrawRangeElements;
    extern PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC                 gl3wDrawRangeElementsBaseVertex;
    extern PFNGLDRAWTRANSFORMFEEDBACKPROC                       gl3wDrawTransformFeedback;
    extern PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC              gl3wDrawTransformFeedbackInstanced;
    extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC                 gl3wDrawTransformFeedbackStream;
    extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC        gl3wDrawTransformFeedbackStreamInstanced;
    extern PFNGLDRAWVKIMAGENVPROC                               gl3wDrawVkImageNV;
    extern PFNGLEDGEFLAGFORMATNVPROC                            gl3wEdgeFlagFormatNV;
    extern PFNGLENABLEPROC                                      gl3wEnable;
    extern PFNGLENABLECLIENTSTATEINDEXEDEXTPROC                 gl3wEnableClientStateIndexedEXT;
    extern PFNGLENABLECLIENTSTATEIEXTPROC                       gl3wEnableClientStateiEXT;
    extern PFNGLENABLEINDEXEDEXTPROC                            gl3wEnableIndexedEXT;
    extern PFNGLENABLEVERTEXARRAYATTRIBPROC                     gl3wEnableVertexArrayAttrib;
    extern PFNGLENABLEVERTEXARRAYATTRIBEXTPROC                  gl3wEnableVertexArrayAttribEXT;
    extern PFNGLENABLEVERTEXARRAYEXTPROC                        gl3wEnableVertexArrayEXT;
    extern PFNGLENABLEVERTEXATTRIBARRAYPROC                     gl3wEnableVertexAttribArray;
    extern PFNGLENABLEIPROC                                     gl3wEnablei;
    extern PFNGLENDCONDITIONALRENDERPROC                        gl3wEndConditionalRender;
    extern PFNGLENDCONDITIONALRENDERNVPROC                      gl3wEndConditionalRenderNV;
    extern PFNGLENDPERFMONITORAMDPROC                           gl3wEndPerfMonitorAMD;
    extern PFNGLENDPERFQUERYINTELPROC                           gl3wEndPerfQueryINTEL;
    extern PFNGLENDQUERYPROC                                    gl3wEndQuery;
    extern PFNGLENDQUERYINDEXEDPROC                             gl3wEndQueryIndexed;
    extern PFNGLENDTRANSFORMFEEDBACKPROC                        gl3wEndTransformFeedback;
    extern PFNGLEVALUATEDEPTHVALUESARBPROC                      gl3wEvaluateDepthValuesARB;
    extern PFNGLFENCESYNCPROC                                   gl3wFenceSync;
    extern PFNGLFINISHPROC                                      gl3wFinish;
    extern PFNGLFLUSHPROC                                       gl3wFlush;
    extern PFNGLFLUSHMAPPEDBUFFERRANGEPROC                      gl3wFlushMappedBufferRange;
    extern PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC                 gl3wFlushMappedNamedBufferRange;
    extern PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC              gl3wFlushMappedNamedBufferRangeEXT;
    extern PFNGLFOGCOORDFORMATNVPROC                            gl3wFogCoordFormatNV;
    extern PFNGLFRAGMENTCOVERAGECOLORNVPROC                     gl3wFragmentCoverageColorNV;
    extern PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC                    gl3wFramebufferDrawBufferEXT;
    extern PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC                   gl3wFramebufferDrawBuffersEXT;
    extern PFNGLFRAMEBUFFERPARAMETERIPROC                       gl3wFramebufferParameteri;
    extern PFNGLFRAMEBUFFERREADBUFFEREXTPROC                    gl3wFramebufferReadBufferEXT;
    extern PFNGLFRAMEBUFFERRENDERBUFFERPROC                     gl3wFramebufferRenderbuffer;
    extern PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC             gl3wFramebufferSampleLocationsfvARB;
    extern PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC              gl3wFramebufferSampleLocationsfvNV;
    extern PFNGLFRAMEBUFFERTEXTUREPROC                          gl3wFramebufferTexture;
    extern PFNGLFRAMEBUFFERTEXTURE1DPROC                        gl3wFramebufferTexture1D;
    extern PFNGLFRAMEBUFFERTEXTURE2DPROC                        gl3wFramebufferTexture2D;
    extern PFNGLFRAMEBUFFERTEXTURE3DPROC                        gl3wFramebufferTexture3D;
    extern PFNGLFRAMEBUFFERTEXTUREARBPROC                       gl3wFramebufferTextureARB;
    extern PFNGLFRAMEBUFFERTEXTUREFACEARBPROC                   gl3wFramebufferTextureFaceARB;
    extern PFNGLFRAMEBUFFERTEXTURELAYERPROC                     gl3wFramebufferTextureLayer;
    extern PFNGLFRAMEBUFFERTEXTURELAYERARBPROC                  gl3wFramebufferTextureLayerARB;
    extern PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC              gl3wFramebufferTextureMultiviewOVR;
    extern PFNGLFRONTFACEPROC                                   gl3wFrontFace;
    extern PFNGLGENBUFFERSPROC                                  gl3wGenBuffers;
    extern PFNGLGENFRAMEBUFFERSPROC                             gl3wGenFramebuffers;
    extern PFNGLGENPATHSNVPROC                                  gl3wGenPathsNV;
    extern PFNGLGENPERFMONITORSAMDPROC                          gl3wGenPerfMonitorsAMD;
    extern PFNGLGENPROGRAMPIPELINESPROC                         gl3wGenProgramPipelines;
    extern PFNGLGENQUERIESPROC                                  gl3wGenQueries;
    extern PFNGLGENRENDERBUFFERSPROC                            gl3wGenRenderbuffers;
    extern PFNGLGENSAMPLERSPROC                                 gl3wGenSamplers;
    extern PFNGLGENTEXTURESPROC                                 gl3wGenTextures;
    extern PFNGLGENTRANSFORMFEEDBACKSPROC                       gl3wGenTransformFeedbacks;
    extern PFNGLGENVERTEXARRAYSPROC                             gl3wGenVertexArrays;
    extern PFNGLGENERATEMIPMAPPROC                              gl3wGenerateMipmap;
    extern PFNGLGENERATEMULTITEXMIPMAPEXTPROC                   gl3wGenerateMultiTexMipmapEXT;
    extern PFNGLGENERATETEXTUREMIPMAPPROC                       gl3wGenerateTextureMipmap;
    extern PFNGLGENERATETEXTUREMIPMAPEXTPROC                    gl3wGenerateTextureMipmapEXT;
    extern PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC              gl3wGetActiveAtomicCounterBufferiv;
    extern PFNGLGETACTIVEATTRIBPROC                             gl3wGetActiveAttrib;
    extern PFNGLGETACTIVESUBROUTINENAMEPROC                     gl3wGetActiveSubroutineName;
    extern PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC              gl3wGetActiveSubroutineUniformName;
    extern PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC                gl3wGetActiveSubroutineUniformiv;
    extern PFNGLGETACTIVEUNIFORMPROC                            gl3wGetActiveUniform;
    extern PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC                   gl3wGetActiveUniformBlockName;
    extern PFNGLGETACTIVEUNIFORMBLOCKIVPROC                     gl3wGetActiveUniformBlockiv;
    extern PFNGLGETACTIVEUNIFORMNAMEPROC                        gl3wGetActiveUniformName;
    extern PFNGLGETACTIVEUNIFORMSIVPROC                         gl3wGetActiveUniformsiv;
    extern PFNGLGETATTACHEDSHADERSPROC                          gl3wGetAttachedShaders;
    extern PFNGLGETATTRIBLOCATIONPROC                           gl3wGetAttribLocation;
    extern PFNGLGETBOOLEANINDEXEDVEXTPROC                       gl3wGetBooleanIndexedvEXT;
    extern PFNGLGETBOOLEANI_VPROC                               gl3wGetBooleani_v;
    extern PFNGLGETBOOLEANVPROC                                 gl3wGetBooleanv;
    extern PFNGLGETBUFFERPARAMETERI64VPROC                      gl3wGetBufferParameteri64v;
    extern PFNGLGETBUFFERPARAMETERIVPROC                        gl3wGetBufferParameteriv;
    extern PFNGLGETBUFFERPARAMETERUI64VNVPROC                   gl3wGetBufferParameterui64vNV;
    extern PFNGLGETBUFFERPOINTERVPROC                           gl3wGetBufferPointerv;
    extern PFNGLGETBUFFERSUBDATAPROC                            gl3wGetBufferSubData;
    extern PFNGLGETCOMMANDHEADERNVPROC                          gl3wGetCommandHeaderNV;
    extern PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC               gl3wGetCompressedMultiTexImageEXT;
    extern PFNGLGETCOMPRESSEDTEXIMAGEPROC                       gl3wGetCompressedTexImage;
    extern PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC                   gl3wGetCompressedTextureImage;
    extern PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC                gl3wGetCompressedTextureImageEXT;
    extern PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC                gl3wGetCompressedTextureSubImage;
    extern PFNGLGETCOVERAGEMODULATIONTABLENVPROC                gl3wGetCoverageModulationTableNV;
    extern PFNGLGETDEBUGMESSAGELOGPROC                          gl3wGetDebugMessageLog;
    extern PFNGLGETDEBUGMESSAGELOGARBPROC                       gl3wGetDebugMessageLogARB;
    extern PFNGLGETDOUBLEINDEXEDVEXTPROC                        gl3wGetDoubleIndexedvEXT;
    extern PFNGLGETDOUBLEI_VPROC                                gl3wGetDoublei_v;
    extern PFNGLGETDOUBLEI_VEXTPROC                             gl3wGetDoublei_vEXT;
    extern PFNGLGETDOUBLEVPROC                                  gl3wGetDoublev;
    extern PFNGLGETERRORPROC                                    gl3wGetError;
    extern PFNGLGETFIRSTPERFQUERYIDINTELPROC                    gl3wGetFirstPerfQueryIdINTEL;
    extern PFNGLGETFLOATINDEXEDVEXTPROC                         gl3wGetFloatIndexedvEXT;
    extern PFNGLGETFLOATI_VPROC                                 gl3wGetFloati_v;
    extern PFNGLGETFLOATI_VEXTPROC                              gl3wGetFloati_vEXT;
    extern PFNGLGETFLOATVPROC                                   gl3wGetFloatv;
    extern PFNGLGETFRAGDATAINDEXPROC                            gl3wGetFragDataIndex;
    extern PFNGLGETFRAGDATALOCATIONPROC                         gl3wGetFragDataLocation;
    extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC         gl3wGetFramebufferAttachmentParameteriv;
    extern PFNGLGETFRAMEBUFFERPARAMETERIVPROC                   gl3wGetFramebufferParameteriv;
    extern PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC                gl3wGetFramebufferParameterivEXT;
    extern PFNGLGETGRAPHICSRESETSTATUSPROC                      gl3wGetGraphicsResetStatus;
    extern PFNGLGETGRAPHICSRESETSTATUSARBPROC                   gl3wGetGraphicsResetStatusARB;
    extern PFNGLGETIMAGEHANDLEARBPROC                           gl3wGetImageHandleARB;
    extern PFNGLGETIMAGEHANDLENVPROC                            gl3wGetImageHandleNV;
    extern PFNGLGETINTEGER64I_VPROC                             gl3wGetInteger64i_v;
    extern PFNGLGETINTEGER64VPROC                               gl3wGetInteger64v;
    extern PFNGLGETINTEGERINDEXEDVEXTPROC                       gl3wGetIntegerIndexedvEXT;
    extern PFNGLGETINTEGERI_VPROC                               gl3wGetIntegeri_v;
    extern PFNGLGETINTEGERUI64I_VNVPROC                         gl3wGetIntegerui64i_vNV;
    extern PFNGLGETINTEGERUI64VNVPROC                           gl3wGetIntegerui64vNV;
    extern PFNGLGETINTEGERVPROC                                 gl3wGetIntegerv;
    extern PFNGLGETINTERNALFORMATSAMPLEIVNVPROC                 gl3wGetInternalformatSampleivNV;
    extern PFNGLGETINTERNALFORMATI64VPROC                       gl3wGetInternalformati64v;
    extern PFNGLGETINTERNALFORMATIVPROC                         gl3wGetInternalformativ;
    extern PFNGLGETMULTITEXENVFVEXTPROC                         gl3wGetMultiTexEnvfvEXT;
    extern PFNGLGETMULTITEXENVIVEXTPROC                         gl3wGetMultiTexEnvivEXT;
    extern PFNGLGETMULTITEXGENDVEXTPROC                         gl3wGetMultiTexGendvEXT;
    extern PFNGLGETMULTITEXGENFVEXTPROC                         gl3wGetMultiTexGenfvEXT;
    extern PFNGLGETMULTITEXGENIVEXTPROC                         gl3wGetMultiTexGenivEXT;
    extern PFNGLGETMULTITEXIMAGEEXTPROC                         gl3wGetMultiTexImageEXT;
    extern PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC              gl3wGetMultiTexLevelParameterfvEXT;
    extern PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC              gl3wGetMultiTexLevelParameterivEXT;
    extern PFNGLGETMULTITEXPARAMETERIIVEXTPROC                  gl3wGetMultiTexParameterIivEXT;
    extern PFNGLGETMULTITEXPARAMETERIUIVEXTPROC                 gl3wGetMultiTexParameterIuivEXT;
    extern PFNGLGETMULTITEXPARAMETERFVEXTPROC                   gl3wGetMultiTexParameterfvEXT;
    extern PFNGLGETMULTITEXPARAMETERIVEXTPROC                   gl3wGetMultiTexParameterivEXT;
    extern PFNGLGETMULTISAMPLEFVPROC                            gl3wGetMultisamplefv;
    extern PFNGLGETNAMEDBUFFERPARAMETERI64VPROC                 gl3wGetNamedBufferParameteri64v;
    extern PFNGLGETNAMEDBUFFERPARAMETERIVPROC                   gl3wGetNamedBufferParameteriv;
    extern PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC                gl3wGetNamedBufferParameterivEXT;
    extern PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC              gl3wGetNamedBufferParameterui64vNV;
    extern PFNGLGETNAMEDBUFFERPOINTERVPROC                      gl3wGetNamedBufferPointerv;
    extern PFNGLGETNAMEDBUFFERPOINTERVEXTPROC                   gl3wGetNamedBufferPointervEXT;
    extern PFNGLGETNAMEDBUFFERSUBDATAPROC                       gl3wGetNamedBufferSubData;
    extern PFNGLGETNAMEDBUFFERSUBDATAEXTPROC                    gl3wGetNamedBufferSubDataEXT;
    extern PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC    gl3wGetNamedFramebufferAttachmentParameteriv;
    extern PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC gl3wGetNamedFramebufferAttachmentParameterivEXT;
    extern PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC              gl3wGetNamedFramebufferParameteriv;
    extern PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC           gl3wGetNamedFramebufferParameterivEXT;
    extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC         gl3wGetNamedProgramLocalParameterIivEXT;
    extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC        gl3wGetNamedProgramLocalParameterIuivEXT;
    extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC          gl3wGetNamedProgramLocalParameterdvEXT;
    extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC          gl3wGetNamedProgramLocalParameterfvEXT;
    extern PFNGLGETNAMEDPROGRAMSTRINGEXTPROC                    gl3wGetNamedProgramStringEXT;
    extern PFNGLGETNAMEDPROGRAMIVEXTPROC                        gl3wGetNamedProgramivEXT;
    extern PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC             gl3wGetNamedRenderbufferParameteriv;
    extern PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC          gl3wGetNamedRenderbufferParameterivEXT;
    extern PFNGLGETNAMEDSTRINGARBPROC                           gl3wGetNamedStringARB;
    extern PFNGLGETNAMEDSTRINGIVARBPROC                         gl3wGetNamedStringivARB;
    extern PFNGLGETNEXTPERFQUERYIDINTELPROC                     gl3wGetNextPerfQueryIdINTEL;
    extern PFNGLGETOBJECTLABELPROC                              gl3wGetObjectLabel;
    extern PFNGLGETOBJECTLABELEXTPROC                           gl3wGetObjectLabelEXT;
    extern PFNGLGETOBJECTPTRLABELPROC                           gl3wGetObjectPtrLabel;
    extern PFNGLGETPATHCOMMANDSNVPROC                           gl3wGetPathCommandsNV;
    extern PFNGLGETPATHCOORDSNVPROC                             gl3wGetPathCoordsNV;
    extern PFNGLGETPATHDASHARRAYNVPROC                          gl3wGetPathDashArrayNV;
    extern PFNGLGETPATHLENGTHNVPROC                             gl3wGetPathLengthNV;
    extern PFNGLGETPATHMETRICRANGENVPROC                        gl3wGetPathMetricRangeNV;
    extern PFNGLGETPATHMETRICSNVPROC                            gl3wGetPathMetricsNV;
    extern PFNGLGETPATHPARAMETERFVNVPROC                        gl3wGetPathParameterfvNV;
    extern PFNGLGETPATHPARAMETERIVNVPROC                        gl3wGetPathParameterivNV;
    extern PFNGLGETPATHSPACINGNVPROC                            gl3wGetPathSpacingNV;
    extern PFNGLGETPERFCOUNTERINFOINTELPROC                     gl3wGetPerfCounterInfoINTEL;
    extern PFNGLGETPERFMONITORCOUNTERDATAAMDPROC                gl3wGetPerfMonitorCounterDataAMD;
    extern PFNGLGETPERFMONITORCOUNTERINFOAMDPROC                gl3wGetPerfMonitorCounterInfoAMD;
    extern PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC              gl3wGetPerfMonitorCounterStringAMD;
    extern PFNGLGETPERFMONITORCOUNTERSAMDPROC                   gl3wGetPerfMonitorCountersAMD;
    extern PFNGLGETPERFMONITORGROUPSTRINGAMDPROC                gl3wGetPerfMonitorGroupStringAMD;
    extern PFNGLGETPERFMONITORGROUPSAMDPROC                     gl3wGetPerfMonitorGroupsAMD;
    extern PFNGLGETPERFQUERYDATAINTELPROC                       gl3wGetPerfQueryDataINTEL;
    extern PFNGLGETPERFQUERYIDBYNAMEINTELPROC                   gl3wGetPerfQueryIdByNameINTEL;
    extern PFNGLGETPERFQUERYINFOINTELPROC                       gl3wGetPerfQueryInfoINTEL;
    extern PFNGLGETPOINTERINDEXEDVEXTPROC                       gl3wGetPointerIndexedvEXT;
    extern PFNGLGETPOINTERI_VEXTPROC                            gl3wGetPointeri_vEXT;
    extern PFNGLGETPOINTERVPROC                                 gl3wGetPointerv;
    extern PFNGLGETPROGRAMBINARYPROC                            gl3wGetProgramBinary;
    extern PFNGLGETPROGRAMINFOLOGPROC                           gl3wGetProgramInfoLog;
    extern PFNGLGETPROGRAMINTERFACEIVPROC                       gl3wGetProgramInterfaceiv;
    extern PFNGLGETPROGRAMPIPELINEINFOLOGPROC                   gl3wGetProgramPipelineInfoLog;
    extern PFNGLGETPROGRAMPIPELINEIVPROC                        gl3wGetProgramPipelineiv;
    extern PFNGLGETPROGRAMRESOURCEINDEXPROC                     gl3wGetProgramResourceIndex;
    extern PFNGLGETPROGRAMRESOURCELOCATIONPROC                  gl3wGetProgramResourceLocation;
    extern PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC             gl3wGetProgramResourceLocationIndex;
    extern PFNGLGETPROGRAMRESOURCENAMEPROC                      gl3wGetProgramResourceName;
    extern PFNGLGETPROGRAMRESOURCEFVNVPROC                      gl3wGetProgramResourcefvNV;
    extern PFNGLGETPROGRAMRESOURCEIVPROC                        gl3wGetProgramResourceiv;
    extern PFNGLGETPROGRAMSTAGEIVPROC                           gl3wGetProgramStageiv;
    extern PFNGLGETPROGRAMIVPROC                                gl3wGetProgramiv;
    extern PFNGLGETQUERYBUFFEROBJECTI64VPROC                    gl3wGetQueryBufferObjecti64v;
    extern PFNGLGETQUERYBUFFEROBJECTIVPROC                      gl3wGetQueryBufferObjectiv;
    extern PFNGLGETQUERYBUFFEROBJECTUI64VPROC                   gl3wGetQueryBufferObjectui64v;
    extern PFNGLGETQUERYBUFFEROBJECTUIVPROC                     gl3wGetQueryBufferObjectuiv;
    extern PFNGLGETQUERYINDEXEDIVPROC                           gl3wGetQueryIndexediv;
    extern PFNGLGETQUERYOBJECTI64VPROC                          gl3wGetQueryObjecti64v;
    extern PFNGLGETQUERYOBJECTIVPROC                            gl3wGetQueryObjectiv;
    extern PFNGLGETQUERYOBJECTUI64VPROC                         gl3wGetQueryObjectui64v;
    extern PFNGLGETQUERYOBJECTUIVPROC                           gl3wGetQueryObjectuiv;
    extern PFNGLGETQUERYIVPROC                                  gl3wGetQueryiv;
    extern PFNGLGETRENDERBUFFERPARAMETERIVPROC                  gl3wGetRenderbufferParameteriv;
    extern PFNGLGETSAMPLERPARAMETERIIVPROC                      gl3wGetSamplerParameterIiv;
    extern PFNGLGETSAMPLERPARAMETERIUIVPROC                     gl3wGetSamplerParameterIuiv;
    extern PFNGLGETSAMPLERPARAMETERFVPROC                       gl3wGetSamplerParameterfv;
    extern PFNGLGETSAMPLERPARAMETERIVPROC                       gl3wGetSamplerParameteriv;
    extern PFNGLGETSHADERINFOLOGPROC                            gl3wGetShaderInfoLog;
    extern PFNGLGETSHADERPRECISIONFORMATPROC                    gl3wGetShaderPrecisionFormat;
    extern PFNGLGETSHADERSOURCEPROC                             gl3wGetShaderSource;
    extern PFNGLGETSHADERIVPROC                                 gl3wGetShaderiv;
    extern PFNGLGETSTAGEINDEXNVPROC                             gl3wGetStageIndexNV;
    extern PFNGLGETSTRINGPROC                                   gl3wGetString;
    extern PFNGLGETSTRINGIPROC                                  gl3wGetStringi;
    extern PFNGLGETSUBROUTINEINDEXPROC                          gl3wGetSubroutineIndex;
    extern PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC                gl3wGetSubroutineUniformLocation;
    extern PFNGLGETSYNCIVPROC                                   gl3wGetSynciv;
    extern PFNGLGETTEXIMAGEPROC                                 gl3wGetTexImage;
    extern PFNGLGETTEXLEVELPARAMETERFVPROC                      gl3wGetTexLevelParameterfv;
    extern PFNGLGETTEXLEVELPARAMETERIVPROC                      gl3wGetTexLevelParameteriv;
    extern PFNGLGETTEXPARAMETERIIVPROC                          gl3wGetTexParameterIiv;
    extern PFNGLGETTEXPARAMETERIUIVPROC                         gl3wGetTexParameterIuiv;
    extern PFNGLGETTEXPARAMETERFVPROC                           gl3wGetTexParameterfv;
    extern PFNGLGETTEXPARAMETERIVPROC                           gl3wGetTexParameteriv;
    extern PFNGLGETTEXTUREHANDLEARBPROC                         gl3wGetTextureHandleARB;
    extern PFNGLGETTEXTUREHANDLENVPROC                          gl3wGetTextureHandleNV;
    extern PFNGLGETTEXTUREIMAGEPROC                             gl3wGetTextureImage;
    extern PFNGLGETTEXTUREIMAGEEXTPROC                          gl3wGetTextureImageEXT;
    extern PFNGLGETTEXTURELEVELPARAMETERFVPROC                  gl3wGetTextureLevelParameterfv;
    extern PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC               gl3wGetTextureLevelParameterfvEXT;
    extern PFNGLGETTEXTURELEVELPARAMETERIVPROC                  gl3wGetTextureLevelParameteriv;
    extern PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC               gl3wGetTextureLevelParameterivEXT;
    extern PFNGLGETTEXTUREPARAMETERIIVPROC                      gl3wGetTextureParameterIiv;
    extern PFNGLGETTEXTUREPARAMETERIIVEXTPROC                   gl3wGetTextureParameterIivEXT;
    extern PFNGLGETTEXTUREPARAMETERIUIVPROC                     gl3wGetTextureParameterIuiv;
    extern PFNGLGETTEXTUREPARAMETERIUIVEXTPROC                  gl3wGetTextureParameterIuivEXT;
    extern PFNGLGETTEXTUREPARAMETERFVPROC                       gl3wGetTextureParameterfv;
    extern PFNGLGETTEXTUREPARAMETERFVEXTPROC                    gl3wGetTextureParameterfvEXT;
    extern PFNGLGETTEXTUREPARAMETERIVPROC                       gl3wGetTextureParameteriv;
    extern PFNGLGETTEXTUREPARAMETERIVEXTPROC                    gl3wGetTextureParameterivEXT;
    extern PFNGLGETTEXTURESAMPLERHANDLEARBPROC                  gl3wGetTextureSamplerHandleARB;
    extern PFNGLGETTEXTURESAMPLERHANDLENVPROC                   gl3wGetTextureSamplerHandleNV;
    extern PFNGLGETTEXTURESUBIMAGEPROC                          gl3wGetTextureSubImage;
    extern PFNGLGETTRANSFORMFEEDBACKVARYINGPROC                 gl3wGetTransformFeedbackVarying;
    extern PFNGLGETTRANSFORMFEEDBACKI64_VPROC                   gl3wGetTransformFeedbacki64_v;
    extern PFNGLGETTRANSFORMFEEDBACKI_VPROC                     gl3wGetTransformFeedbacki_v;
    extern PFNGLGETTRANSFORMFEEDBACKIVPROC                      gl3wGetTransformFeedbackiv;
    extern PFNGLGETUNIFORMBLOCKINDEXPROC                        gl3wGetUniformBlockIndex;
    extern PFNGLGETUNIFORMINDICESPROC                           gl3wGetUniformIndices;
    extern PFNGLGETUNIFORMLOCATIONPROC                          gl3wGetUniformLocation;
    extern PFNGLGETUNIFORMSUBROUTINEUIVPROC                     gl3wGetUniformSubroutineuiv;
    extern PFNGLGETUNIFORMDVPROC                                gl3wGetUniformdv;
    extern PFNGLGETUNIFORMFVPROC                                gl3wGetUniformfv;
    extern PFNGLGETUNIFORMI64VARBPROC                           gl3wGetUniformi64vARB;
    extern PFNGLGETUNIFORMI64VNVPROC                            gl3wGetUniformi64vNV;
    extern PFNGLGETUNIFORMIVPROC                                gl3wGetUniformiv;
    extern PFNGLGETUNIFORMUI64VARBPROC                          gl3wGetUniformui64vARB;
    extern PFNGLGETUNIFORMUI64VNVPROC                           gl3wGetUniformui64vNV;
    extern PFNGLGETUNIFORMUIVPROC                               gl3wGetUniformuiv;
    extern PFNGLGETVERTEXARRAYINDEXED64IVPROC                   gl3wGetVertexArrayIndexed64iv;
    extern PFNGLGETVERTEXARRAYINDEXEDIVPROC                     gl3wGetVertexArrayIndexediv;
    extern PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC                 gl3wGetVertexArrayIntegeri_vEXT;
    extern PFNGLGETVERTEXARRAYINTEGERVEXTPROC                   gl3wGetVertexArrayIntegervEXT;
    extern PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC                 gl3wGetVertexArrayPointeri_vEXT;
    extern PFNGLGETVERTEXARRAYPOINTERVEXTPROC                   gl3wGetVertexArrayPointervEXT;
    extern PFNGLGETVERTEXARRAYIVPROC                            gl3wGetVertexArrayiv;
    extern PFNGLGETVERTEXATTRIBIIVPROC                          gl3wGetVertexAttribIiv;
    extern PFNGLGETVERTEXATTRIBIUIVPROC                         gl3wGetVertexAttribIuiv;
    extern PFNGLGETVERTEXATTRIBLDVPROC                          gl3wGetVertexAttribLdv;
    extern PFNGLGETVERTEXATTRIBLI64VNVPROC                      gl3wGetVertexAttribLi64vNV;
    extern PFNGLGETVERTEXATTRIBLUI64VARBPROC                    gl3wGetVertexAttribLui64vARB;
    extern PFNGLGETVERTEXATTRIBLUI64VNVPROC                     gl3wGetVertexAttribLui64vNV;
    extern PFNGLGETVERTEXATTRIBPOINTERVPROC                     gl3wGetVertexAttribPointerv;
    extern PFNGLGETVERTEXATTRIBDVPROC                           gl3wGetVertexAttribdv;
    extern PFNGLGETVERTEXATTRIBFVPROC                           gl3wGetVertexAttribfv;
    extern PFNGLGETVERTEXATTRIBIVPROC                           gl3wGetVertexAttribiv;
    extern PFNGLGETVKPROCADDRNVPROC                             gl3wGetVkProcAddrNV;
    extern PFNGLGETNCOMPRESSEDTEXIMAGEPROC                      gl3wGetnCompressedTexImage;
    extern PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC                   gl3wGetnCompressedTexImageARB;
    extern PFNGLGETNTEXIMAGEPROC                                gl3wGetnTexImage;
    extern PFNGLGETNTEXIMAGEARBPROC                             gl3wGetnTexImageARB;
    extern PFNGLGETNUNIFORMDVPROC                               gl3wGetnUniformdv;
    extern PFNGLGETNUNIFORMDVARBPROC                            gl3wGetnUniformdvARB;
    extern PFNGLGETNUNIFORMFVPROC                               gl3wGetnUniformfv;
    extern PFNGLGETNUNIFORMFVARBPROC                            gl3wGetnUniformfvARB;
    extern PFNGLGETNUNIFORMI64VARBPROC                          gl3wGetnUniformi64vARB;
    extern PFNGLGETNUNIFORMIVPROC                               gl3wGetnUniformiv;
    extern PFNGLGETNUNIFORMIVARBPROC                            gl3wGetnUniformivARB;
    extern PFNGLGETNUNIFORMUI64VARBPROC                         gl3wGetnUniformui64vARB;
    extern PFNGLGETNUNIFORMUIVPROC                              gl3wGetnUniformuiv;
    extern PFNGLGETNUNIFORMUIVARBPROC                           gl3wGetnUniformuivARB;
    extern PFNGLHINTPROC                                        gl3wHint;
    extern PFNGLINDEXFORMATNVPROC                               gl3wIndexFormatNV;
    extern PFNGLINSERTEVENTMARKEREXTPROC                        gl3wInsertEventMarkerEXT;
    extern PFNGLINTERPOLATEPATHSNVPROC                          gl3wInterpolatePathsNV;
    extern PFNGLINVALIDATEBUFFERDATAPROC                        gl3wInvalidateBufferData;
    extern PFNGLINVALIDATEBUFFERSUBDATAPROC                     gl3wInvalidateBufferSubData;
    extern PFNGLINVALIDATEFRAMEBUFFERPROC                       gl3wInvalidateFramebuffer;
    extern PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC              gl3wInvalidateNamedFramebufferData;
    extern PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC           gl3wInvalidateNamedFramebufferSubData;
    extern PFNGLINVALIDATESUBFRAMEBUFFERPROC                    gl3wInvalidateSubFramebuffer;
    extern PFNGLINVALIDATETEXIMAGEPROC                          gl3wInvalidateTexImage;
    extern PFNGLINVALIDATETEXSUBIMAGEPROC                       gl3wInvalidateTexSubImage;
    extern PFNGLISBUFFERPROC                                    gl3wIsBuffer;
    extern PFNGLISBUFFERRESIDENTNVPROC                          gl3wIsBufferResidentNV;
    extern PFNGLISCOMMANDLISTNVPROC                             gl3wIsCommandListNV;
    extern PFNGLISENABLEDPROC                                   gl3wIsEnabled;
    extern PFNGLISENABLEDINDEXEDEXTPROC                         gl3wIsEnabledIndexedEXT;
    extern PFNGLISENABLEDIPROC                                  gl3wIsEnabledi;
    extern PFNGLISFRAMEBUFFERPROC                               gl3wIsFramebuffer;
    extern PFNGLISIMAGEHANDLERESIDENTARBPROC                    gl3wIsImageHandleResidentARB;
    extern PFNGLISIMAGEHANDLERESIDENTNVPROC                     gl3wIsImageHandleResidentNV;
    extern PFNGLISNAMEDBUFFERRESIDENTNVPROC                     gl3wIsNamedBufferResidentNV;
    extern PFNGLISNAMEDSTRINGARBPROC                            gl3wIsNamedStringARB;
    extern PFNGLISPATHNVPROC                                    gl3wIsPathNV;
    extern PFNGLISPOINTINFILLPATHNVPROC                         gl3wIsPointInFillPathNV;
    extern PFNGLISPOINTINSTROKEPATHNVPROC                       gl3wIsPointInStrokePathNV;
    extern PFNGLISPROGRAMPROC                                   gl3wIsProgram;
    extern PFNGLISPROGRAMPIPELINEPROC                           gl3wIsProgramPipeline;
    extern PFNGLISQUERYPROC                                     gl3wIsQuery;
    extern PFNGLISRENDERBUFFERPROC                              gl3wIsRenderbuffer;
    extern PFNGLISSAMPLERPROC                                   gl3wIsSampler;
    extern PFNGLISSHADERPROC                                    gl3wIsShader;
    extern PFNGLISSTATENVPROC                                   gl3wIsStateNV;
    extern PFNGLISSYNCPROC                                      gl3wIsSync;
    extern PFNGLISTEXTUREPROC                                   gl3wIsTexture;
    extern PFNGLISTEXTUREHANDLERESIDENTARBPROC                  gl3wIsTextureHandleResidentARB;
    extern PFNGLISTEXTUREHANDLERESIDENTNVPROC                   gl3wIsTextureHandleResidentNV;
    extern PFNGLISTRANSFORMFEEDBACKPROC                         gl3wIsTransformFeedback;
    extern PFNGLISVERTEXARRAYPROC                               gl3wIsVertexArray;
    extern PFNGLLABELOBJECTEXTPROC                              gl3wLabelObjectEXT;
    extern PFNGLLINEWIDTHPROC                                   gl3wLineWidth;
    extern PFNGLLINKPROGRAMPROC                                 gl3wLinkProgram;
    extern PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC              gl3wListDrawCommandsStatesClientNV;
    extern PFNGLLOGICOPPROC                                     gl3wLogicOp;
    extern PFNGLMAKEBUFFERNONRESIDENTNVPROC                     gl3wMakeBufferNonResidentNV;
    extern PFNGLMAKEBUFFERRESIDENTNVPROC                        gl3wMakeBufferResidentNV;
    extern PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC               gl3wMakeImageHandleNonResidentARB;
    extern PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC                gl3wMakeImageHandleNonResidentNV;
    extern PFNGLMAKEIMAGEHANDLERESIDENTARBPROC                  gl3wMakeImageHandleResidentARB;
    extern PFNGLMAKEIMAGEHANDLERESIDENTNVPROC                   gl3wMakeImageHandleResidentNV;
    extern PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC                gl3wMakeNamedBufferNonResidentNV;
    extern PFNGLMAKENAMEDBUFFERRESIDENTNVPROC                   gl3wMakeNamedBufferResidentNV;
    extern PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC             gl3wMakeTextureHandleNonResidentARB;
    extern PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC              gl3wMakeTextureHandleNonResidentNV;
    extern PFNGLMAKETEXTUREHANDLERESIDENTARBPROC                gl3wMakeTextureHandleResidentARB;
    extern PFNGLMAKETEXTUREHANDLERESIDENTNVPROC                 gl3wMakeTextureHandleResidentNV;
    extern PFNGLMAPBUFFERPROC                                   gl3wMapBuffer;
    extern PFNGLMAPBUFFERRANGEPROC                              gl3wMapBufferRange;
    extern PFNGLMAPNAMEDBUFFERPROC                              gl3wMapNamedBuffer;
    extern PFNGLMAPNAMEDBUFFEREXTPROC                           gl3wMapNamedBufferEXT;
    extern PFNGLMAPNAMEDBUFFERRANGEPROC                         gl3wMapNamedBufferRange;
    extern PFNGLMAPNAMEDBUFFERRANGEEXTPROC                      gl3wMapNamedBufferRangeEXT;
    extern PFNGLMATRIXFRUSTUMEXTPROC                            gl3wMatrixFrustumEXT;
    extern PFNGLMATRIXLOAD3X2FNVPROC                            gl3wMatrixLoad3x2fNV;
    extern PFNGLMATRIXLOAD3X3FNVPROC                            gl3wMatrixLoad3x3fNV;
    extern PFNGLMATRIXLOADIDENTITYEXTPROC                       gl3wMatrixLoadIdentityEXT;
    extern PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC                   gl3wMatrixLoadTranspose3x3fNV;
    extern PFNGLMATRIXLOADTRANSPOSEDEXTPROC                     gl3wMatrixLoadTransposedEXT;
    extern PFNGLMATRIXLOADTRANSPOSEFEXTPROC                     gl3wMatrixLoadTransposefEXT;
    extern PFNGLMATRIXLOADDEXTPROC                              gl3wMatrixLoaddEXT;
    extern PFNGLMATRIXLOADFEXTPROC                              gl3wMatrixLoadfEXT;
    extern PFNGLMATRIXMULT3X2FNVPROC                            gl3wMatrixMult3x2fNV;
    extern PFNGLMATRIXMULT3X3FNVPROC                            gl3wMatrixMult3x3fNV;
    extern PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC                   gl3wMatrixMultTranspose3x3fNV;
    extern PFNGLMATRIXMULTTRANSPOSEDEXTPROC                     gl3wMatrixMultTransposedEXT;
    extern PFNGLMATRIXMULTTRANSPOSEFEXTPROC                     gl3wMatrixMultTransposefEXT;
    extern PFNGLMATRIXMULTDEXTPROC                              gl3wMatrixMultdEXT;
    extern PFNGLMATRIXMULTFEXTPROC                              gl3wMatrixMultfEXT;
    extern PFNGLMATRIXORTHOEXTPROC                              gl3wMatrixOrthoEXT;
    extern PFNGLMATRIXPOPEXTPROC                                gl3wMatrixPopEXT;
    extern PFNGLMATRIXPUSHEXTPROC                               gl3wMatrixPushEXT;
    extern PFNGLMATRIXROTATEDEXTPROC                            gl3wMatrixRotatedEXT;
    extern PFNGLMATRIXROTATEFEXTPROC                            gl3wMatrixRotatefEXT;
    extern PFNGLMATRIXSCALEDEXTPROC                             gl3wMatrixScaledEXT;
    extern PFNGLMATRIXSCALEFEXTPROC                             gl3wMatrixScalefEXT;
    extern PFNGLMATRIXTRANSLATEDEXTPROC                         gl3wMatrixTranslatedEXT;
    extern PFNGLMATRIXTRANSLATEFEXTPROC                         gl3wMatrixTranslatefEXT;
    extern PFNGLMAXSHADERCOMPILERTHREADSARBPROC                 gl3wMaxShaderCompilerThreadsARB;
    extern PFNGLMEMORYBARRIERPROC                               gl3wMemoryBarrier;
    extern PFNGLMEMORYBARRIERBYREGIONPROC                       gl3wMemoryBarrierByRegion;
    extern PFNGLMINSAMPLESHADINGPROC                            gl3wMinSampleShading;
    extern PFNGLMINSAMPLESHADINGARBPROC                         gl3wMinSampleShadingARB;
    extern PFNGLMULTIDRAWARRAYSPROC                             gl3wMultiDrawArrays;
    extern PFNGLMULTIDRAWARRAYSINDIRECTPROC                     gl3wMultiDrawArraysIndirect;
    extern PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC      gl3wMultiDrawArraysIndirectBindlessCountNV;
    extern PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC           gl3wMultiDrawArraysIndirectBindlessNV;
    extern PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC             gl3wMultiDrawArraysIndirectCountARB;
    extern PFNGLMULTIDRAWELEMENTSPROC                           gl3wMultiDrawElements;
    extern PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC                 gl3wMultiDrawElementsBaseVertex;
    extern PFNGLMULTIDRAWELEMENTSINDIRECTPROC                   gl3wMultiDrawElementsIndirect;
    extern PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC    gl3wMultiDrawElementsIndirectBindlessCountNV;
    extern PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC         gl3wMultiDrawElementsIndirectBindlessNV;
    extern PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC           gl3wMultiDrawElementsIndirectCountARB;
    extern PFNGLMULTITEXBUFFEREXTPROC                           gl3wMultiTexBufferEXT;
    extern PFNGLMULTITEXCOORDPOINTEREXTPROC                     gl3wMultiTexCoordPointerEXT;
    extern PFNGLMULTITEXENVFEXTPROC                             gl3wMultiTexEnvfEXT;
    extern PFNGLMULTITEXENVFVEXTPROC                            gl3wMultiTexEnvfvEXT;
    extern PFNGLMULTITEXENVIEXTPROC                             gl3wMultiTexEnviEXT;
    extern PFNGLMULTITEXENVIVEXTPROC                            gl3wMultiTexEnvivEXT;
    extern PFNGLMULTITEXGENDEXTPROC                             gl3wMultiTexGendEXT;
    extern PFNGLMULTITEXGENDVEXTPROC                            gl3wMultiTexGendvEXT;
    extern PFNGLMULTITEXGENFEXTPROC                             gl3wMultiTexGenfEXT;
    extern PFNGLMULTITEXGENFVEXTPROC                            gl3wMultiTexGenfvEXT;
    extern PFNGLMULTITEXGENIEXTPROC                             gl3wMultiTexGeniEXT;
    extern PFNGLMULTITEXGENIVEXTPROC                            gl3wMultiTexGenivEXT;
    extern PFNGLMULTITEXIMAGE1DEXTPROC                          gl3wMultiTexImage1DEXT;
    extern PFNGLMULTITEXIMAGE2DEXTPROC                          gl3wMultiTexImage2DEXT;
    extern PFNGLMULTITEXIMAGE3DEXTPROC                          gl3wMultiTexImage3DEXT;
    extern PFNGLMULTITEXPARAMETERIIVEXTPROC                     gl3wMultiTexParameterIivEXT;
    extern PFNGLMULTITEXPARAMETERIUIVEXTPROC                    gl3wMultiTexParameterIuivEXT;
    extern PFNGLMULTITEXPARAMETERFEXTPROC                       gl3wMultiTexParameterfEXT;
    extern PFNGLMULTITEXPARAMETERFVEXTPROC                      gl3wMultiTexParameterfvEXT;
    extern PFNGLMULTITEXPARAMETERIEXTPROC                       gl3wMultiTexParameteriEXT;
    extern PFNGLMULTITEXPARAMETERIVEXTPROC                      gl3wMultiTexParameterivEXT;
    extern PFNGLMULTITEXRENDERBUFFEREXTPROC                     gl3wMultiTexRenderbufferEXT;
    extern PFNGLMULTITEXSUBIMAGE1DEXTPROC                       gl3wMultiTexSubImage1DEXT;
    extern PFNGLMULTITEXSUBIMAGE2DEXTPROC                       gl3wMultiTexSubImage2DEXT;
    extern PFNGLMULTITEXSUBIMAGE3DEXTPROC                       gl3wMultiTexSubImage3DEXT;
    extern PFNGLNAMEDBUFFERDATAPROC                             gl3wNamedBufferData;
    extern PFNGLNAMEDBUFFERDATAEXTPROC                          gl3wNamedBufferDataEXT;
    extern PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC                gl3wNamedBufferPageCommitmentARB;
    extern PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC                gl3wNamedBufferPageCommitmentEXT;
    extern PFNGLNAMEDBUFFERSTORAGEPROC                          gl3wNamedBufferStorage;
    extern PFNGLNAMEDBUFFERSTORAGEEXTPROC                       gl3wNamedBufferStorageEXT;
    extern PFNGLNAMEDBUFFERSUBDATAPROC                          gl3wNamedBufferSubData;
    extern PFNGLNAMEDBUFFERSUBDATAEXTPROC                       gl3wNamedBufferSubDataEXT;
    extern PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC                   gl3wNamedCopyBufferSubDataEXT;
    extern PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC                  gl3wNamedFramebufferDrawBuffer;
    extern PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC                 gl3wNamedFramebufferDrawBuffers;
    extern PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC                  gl3wNamedFramebufferParameteri;
    extern PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC               gl3wNamedFramebufferParameteriEXT;
    extern PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC                  gl3wNamedFramebufferReadBuffer;
    extern PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC                gl3wNamedFramebufferRenderbuffer;
    extern PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC             gl3wNamedFramebufferRenderbufferEXT;
    extern PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC        gl3wNamedFramebufferSampleLocationsfvARB;
    extern PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC         gl3wNamedFramebufferSampleLocationsfvNV;
    extern PFNGLNAMEDFRAMEBUFFERTEXTUREPROC                     gl3wNamedFramebufferTexture;
    extern PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC                gl3wNamedFramebufferTexture1DEXT;
    extern PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC                gl3wNamedFramebufferTexture2DEXT;
    extern PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC                gl3wNamedFramebufferTexture3DEXT;
    extern PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC                  gl3wNamedFramebufferTextureEXT;
    extern PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC              gl3wNamedFramebufferTextureFaceEXT;
    extern PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC                gl3wNamedFramebufferTextureLayer;
    extern PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC             gl3wNamedFramebufferTextureLayerEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC             gl3wNamedProgramLocalParameter4dEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC            gl3wNamedProgramLocalParameter4dvEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC             gl3wNamedProgramLocalParameter4fEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC            gl3wNamedProgramLocalParameter4fvEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC            gl3wNamedProgramLocalParameterI4iEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC           gl3wNamedProgramLocalParameterI4ivEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC           gl3wNamedProgramLocalParameterI4uiEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC          gl3wNamedProgramLocalParameterI4uivEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC           gl3wNamedProgramLocalParameters4fvEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC          gl3wNamedProgramLocalParametersI4ivEXT;
    extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC         gl3wNamedProgramLocalParametersI4uivEXT;
    extern PFNGLNAMEDPROGRAMSTRINGEXTPROC                       gl3wNamedProgramStringEXT;
    extern PFNGLNAMEDRENDERBUFFERSTORAGEPROC                    gl3wNamedRenderbufferStorage;
    extern PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC                 gl3wNamedRenderbufferStorageEXT;
    extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC         gl3wNamedRenderbufferStorageMultisample;
    extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC gl3wNamedRenderbufferStorageMultisampleCoverageEXT;
    extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC      gl3wNamedRenderbufferStorageMultisampleEXT;
    extern PFNGLNAMEDSTRINGARBPROC                              gl3wNamedStringARB;
    extern PFNGLNORMALFORMATNVPROC                              gl3wNormalFormatNV;
    extern PFNGLOBJECTLABELPROC                                 gl3wObjectLabel;
    extern PFNGLOBJECTPTRLABELPROC                              gl3wObjectPtrLabel;
    extern PFNGLPATCHPARAMETERFVPROC                            gl3wPatchParameterfv;
    extern PFNGLPATCHPARAMETERIPROC                             gl3wPatchParameteri;
    extern PFNGLPATHCOMMANDSNVPROC                              gl3wPathCommandsNV;
    extern PFNGLPATHCOORDSNVPROC                                gl3wPathCoordsNV;
    extern PFNGLPATHCOVERDEPTHFUNCNVPROC                        gl3wPathCoverDepthFuncNV;
    extern PFNGLPATHDASHARRAYNVPROC                             gl3wPathDashArrayNV;
    extern PFNGLPATHGLYPHINDEXARRAYNVPROC                       gl3wPathGlyphIndexArrayNV;
    extern PFNGLPATHGLYPHINDEXRANGENVPROC                       gl3wPathGlyphIndexRangeNV;
    extern PFNGLPATHGLYPHRANGENVPROC                            gl3wPathGlyphRangeNV;
    extern PFNGLPATHGLYPHSNVPROC                                gl3wPathGlyphsNV;
    extern PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC                 gl3wPathMemoryGlyphIndexArrayNV;
    extern PFNGLPATHPARAMETERFNVPROC                            gl3wPathParameterfNV;
    extern PFNGLPATHPARAMETERFVNVPROC                           gl3wPathParameterfvNV;
    extern PFNGLPATHPARAMETERINVPROC                            gl3wPathParameteriNV;
    extern PFNGLPATHPARAMETERIVNVPROC                           gl3wPathParameterivNV;
    extern PFNGLPATHSTENCILDEPTHOFFSETNVPROC                    gl3wPathStencilDepthOffsetNV;
    extern PFNGLPATHSTENCILFUNCNVPROC                           gl3wPathStencilFuncNV;
    extern PFNGLPATHSTRINGNVPROC                                gl3wPathStringNV;
    extern PFNGLPATHSUBCOMMANDSNVPROC                           gl3wPathSubCommandsNV;
    extern PFNGLPATHSUBCOORDSNVPROC                             gl3wPathSubCoordsNV;
    extern PFNGLPAUSETRANSFORMFEEDBACKPROC                      gl3wPauseTransformFeedback;
    extern PFNGLPIXELSTOREFPROC                                 gl3wPixelStoref;
    extern PFNGLPIXELSTOREIPROC                                 gl3wPixelStorei;
    extern PFNGLPOINTALONGPATHNVPROC                            gl3wPointAlongPathNV;
    extern PFNGLPOINTPARAMETERFPROC                             gl3wPointParameterf;
    extern PFNGLPOINTPARAMETERFVPROC                            gl3wPointParameterfv;
    extern PFNGLPOINTPARAMETERIPROC                             gl3wPointParameteri;
    extern PFNGLPOINTPARAMETERIVPROC                            gl3wPointParameteriv;
    extern PFNGLPOINTSIZEPROC                                   gl3wPointSize;
    extern PFNGLPOLYGONMODEPROC                                 gl3wPolygonMode;
    extern PFNGLPOLYGONOFFSETPROC                               gl3wPolygonOffset;
    extern PFNGLPOLYGONOFFSETCLAMPEXTPROC                       gl3wPolygonOffsetClampEXT;
    extern PFNGLPOPDEBUGGROUPPROC                               gl3wPopDebugGroup;
    extern PFNGLPOPGROUPMARKEREXTPROC                           gl3wPopGroupMarkerEXT;
    extern PFNGLPRIMITIVEBOUNDINGBOXARBPROC                     gl3wPrimitiveBoundingBoxARB;
    extern PFNGLPRIMITIVERESTARTINDEXPROC                       gl3wPrimitiveRestartIndex;
    extern PFNGLPROGRAMBINARYPROC                               gl3wProgramBinary;
    extern PFNGLPROGRAMPARAMETERIPROC                           gl3wProgramParameteri;
    extern PFNGLPROGRAMPARAMETERIARBPROC                        gl3wProgramParameteriARB;
    extern PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC               gl3wProgramPathFragmentInputGenNV;
    extern PFNGLPROGRAMUNIFORM1DPROC                            gl3wProgramUniform1d;
    extern PFNGLPROGRAMUNIFORM1DEXTPROC                         gl3wProgramUniform1dEXT;
    extern PFNGLPROGRAMUNIFORM1DVPROC                           gl3wProgramUniform1dv;
    extern PFNGLPROGRAMUNIFORM1DVEXTPROC                        gl3wProgramUniform1dvEXT;
    extern PFNGLPROGRAMUNIFORM1FPROC                            gl3wProgramUniform1f;
    extern PFNGLPROGRAMUNIFORM1FEXTPROC                         gl3wProgramUniform1fEXT;
    extern PFNGLPROGRAMUNIFORM1FVPROC                           gl3wProgramUniform1fv;
    extern PFNGLPROGRAMUNIFORM1FVEXTPROC                        gl3wProgramUniform1fvEXT;
    extern PFNGLPROGRAMUNIFORM1IPROC                            gl3wProgramUniform1i;
    extern PFNGLPROGRAMUNIFORM1I64ARBPROC                       gl3wProgramUniform1i64ARB;
    extern PFNGLPROGRAMUNIFORM1I64NVPROC                        gl3wProgramUniform1i64NV;
    extern PFNGLPROGRAMUNIFORM1I64VARBPROC                      gl3wProgramUniform1i64vARB;
    extern PFNGLPROGRAMUNIFORM1I64VNVPROC                       gl3wProgramUniform1i64vNV;
    extern PFNGLPROGRAMUNIFORM1IEXTPROC                         gl3wProgramUniform1iEXT;
    extern PFNGLPROGRAMUNIFORM1IVPROC                           gl3wProgramUniform1iv;
    extern PFNGLPROGRAMUNIFORM1IVEXTPROC                        gl3wProgramUniform1ivEXT;
    extern PFNGLPROGRAMUNIFORM1UIPROC                           gl3wProgramUniform1ui;
    extern PFNGLPROGRAMUNIFORM1UI64ARBPROC                      gl3wProgramUniform1ui64ARB;
    extern PFNGLPROGRAMUNIFORM1UI64NVPROC                       gl3wProgramUniform1ui64NV;
    extern PFNGLPROGRAMUNIFORM1UI64VARBPROC                     gl3wProgramUniform1ui64vARB;
    extern PFNGLPROGRAMUNIFORM1UI64VNVPROC                      gl3wProgramUniform1ui64vNV;
    extern PFNGLPROGRAMUNIFORM1UIEXTPROC                        gl3wProgramUniform1uiEXT;
    extern PFNGLPROGRAMUNIFORM1UIVPROC                          gl3wProgramUniform1uiv;
    extern PFNGLPROGRAMUNIFORM1UIVEXTPROC                       gl3wProgramUniform1uivEXT;
    extern PFNGLPROGRAMUNIFORM2DPROC                            gl3wProgramUniform2d;
    extern PFNGLPROGRAMUNIFORM2DEXTPROC                         gl3wProgramUniform2dEXT;
    extern PFNGLPROGRAMUNIFORM2DVPROC                           gl3wProgramUniform2dv;
    extern PFNGLPROGRAMUNIFORM2DVEXTPROC                        gl3wProgramUniform2dvEXT;
    extern PFNGLPROGRAMUNIFORM2FPROC                            gl3wProgramUniform2f;
    extern PFNGLPROGRAMUNIFORM2FEXTPROC                         gl3wProgramUniform2fEXT;
    extern PFNGLPROGRAMUNIFORM2FVPROC                           gl3wProgramUniform2fv;
    extern PFNGLPROGRAMUNIFORM2FVEXTPROC                        gl3wProgramUniform2fvEXT;
    extern PFNGLPROGRAMUNIFORM2IPROC                            gl3wProgramUniform2i;
    extern PFNGLPROGRAMUNIFORM2I64ARBPROC                       gl3wProgramUniform2i64ARB;
    extern PFNGLPROGRAMUNIFORM2I64NVPROC                        gl3wProgramUniform2i64NV;
    extern PFNGLPROGRAMUNIFORM2I64VARBPROC                      gl3wProgramUniform2i64vARB;
    extern PFNGLPROGRAMUNIFORM2I64VNVPROC                       gl3wProgramUniform2i64vNV;
    extern PFNGLPROGRAMUNIFORM2IEXTPROC                         gl3wProgramUniform2iEXT;
    extern PFNGLPROGRAMUNIFORM2IVPROC                           gl3wProgramUniform2iv;
    extern PFNGLPROGRAMUNIFORM2IVEXTPROC                        gl3wProgramUniform2ivEXT;
    extern PFNGLPROGRAMUNIFORM2UIPROC                           gl3wProgramUniform2ui;
    extern PFNGLPROGRAMUNIFORM2UI64ARBPROC                      gl3wProgramUniform2ui64ARB;
    extern PFNGLPROGRAMUNIFORM2UI64NVPROC                       gl3wProgramUniform2ui64NV;
    extern PFNGLPROGRAMUNIFORM2UI64VARBPROC                     gl3wProgramUniform2ui64vARB;
    extern PFNGLPROGRAMUNIFORM2UI64VNVPROC                      gl3wProgramUniform2ui64vNV;
    extern PFNGLPROGRAMUNIFORM2UIEXTPROC                        gl3wProgramUniform2uiEXT;
    extern PFNGLPROGRAMUNIFORM2UIVPROC                          gl3wProgramUniform2uiv;
    extern PFNGLPROGRAMUNIFORM2UIVEXTPROC                       gl3wProgramUniform2uivEXT;
    extern PFNGLPROGRAMUNIFORM3DPROC                            gl3wProgramUniform3d;
    extern PFNGLPROGRAMUNIFORM3DEXTPROC                         gl3wProgramUniform3dEXT;
    extern PFNGLPROGRAMUNIFORM3DVPROC                           gl3wProgramUniform3dv;
    extern PFNGLPROGRAMUNIFORM3DVEXTPROC                        gl3wProgramUniform3dvEXT;
    extern PFNGLPROGRAMUNIFORM3FPROC                            gl3wProgramUniform3f;
    extern PFNGLPROGRAMUNIFORM3FEXTPROC                         gl3wProgramUniform3fEXT;
    extern PFNGLPROGRAMUNIFORM3FVPROC                           gl3wProgramUniform3fv;
    extern PFNGLPROGRAMUNIFORM3FVEXTPROC                        gl3wProgramUniform3fvEXT;
    extern PFNGLPROGRAMUNIFORM3IPROC                            gl3wProgramUniform3i;
    extern PFNGLPROGRAMUNIFORM3I64ARBPROC                       gl3wProgramUniform3i64ARB;
    extern PFNGLPROGRAMUNIFORM3I64NVPROC                        gl3wProgramUniform3i64NV;
    extern PFNGLPROGRAMUNIFORM3I64VARBPROC                      gl3wProgramUniform3i64vARB;
    extern PFNGLPROGRAMUNIFORM3I64VNVPROC                       gl3wProgramUniform3i64vNV;
    extern PFNGLPROGRAMUNIFORM3IEXTPROC                         gl3wProgramUniform3iEXT;
    extern PFNGLPROGRAMUNIFORM3IVPROC                           gl3wProgramUniform3iv;
    extern PFNGLPROGRAMUNIFORM3IVEXTPROC                        gl3wProgramUniform3ivEXT;
    extern PFNGLPROGRAMUNIFORM3UIPROC                           gl3wProgramUniform3ui;
    extern PFNGLPROGRAMUNIFORM3UI64ARBPROC                      gl3wProgramUniform3ui64ARB;
    extern PFNGLPROGRAMUNIFORM3UI64NVPROC                       gl3wProgramUniform3ui64NV;
    extern PFNGLPROGRAMUNIFORM3UI64VARBPROC                     gl3wProgramUniform3ui64vARB;
    extern PFNGLPROGRAMUNIFORM3UI64VNVPROC                      gl3wProgramUniform3ui64vNV;
    extern PFNGLPROGRAMUNIFORM3UIEXTPROC                        gl3wProgramUniform3uiEXT;
    extern PFNGLPROGRAMUNIFORM3UIVPROC                          gl3wProgramUniform3uiv;
    extern PFNGLPROGRAMUNIFORM3UIVEXTPROC                       gl3wProgramUniform3uivEXT;
    extern PFNGLPROGRAMUNIFORM4DPROC                            gl3wProgramUniform4d;
    extern PFNGLPROGRAMUNIFORM4DEXTPROC                         gl3wProgramUniform4dEXT;
    extern PFNGLPROGRAMUNIFORM4DVPROC                           gl3wProgramUniform4dv;
    extern PFNGLPROGRAMUNIFORM4DVEXTPROC                        gl3wProgramUniform4dvEXT;
    extern PFNGLPROGRAMUNIFORM4FPROC                            gl3wProgramUniform4f;
    extern PFNGLPROGRAMUNIFORM4FEXTPROC                         gl3wProgramUniform4fEXT;
    extern PFNGLPROGRAMUNIFORM4FVPROC                           gl3wProgramUniform4fv;
    extern PFNGLPROGRAMUNIFORM4FVEXTPROC                        gl3wProgramUniform4fvEXT;
    extern PFNGLPROGRAMUNIFORM4IPROC                            gl3wProgramUniform4i;
    extern PFNGLPROGRAMUNIFORM4I64ARBPROC                       gl3wProgramUniform4i64ARB;
    extern PFNGLPROGRAMUNIFORM4I64NVPROC                        gl3wProgramUniform4i64NV;
    extern PFNGLPROGRAMUNIFORM4I64VARBPROC                      gl3wProgramUniform4i64vARB;
    extern PFNGLPROGRAMUNIFORM4I64VNVPROC                       gl3wProgramUniform4i64vNV;
    extern PFNGLPROGRAMUNIFORM4IEXTPROC                         gl3wProgramUniform4iEXT;
    extern PFNGLPROGRAMUNIFORM4IVPROC                           gl3wProgramUniform4iv;
    extern PFNGLPROGRAMUNIFORM4IVEXTPROC                        gl3wProgramUniform4ivEXT;
    extern PFNGLPROGRAMUNIFORM4UIPROC                           gl3wProgramUniform4ui;
    extern PFNGLPROGRAMUNIFORM4UI64ARBPROC                      gl3wProgramUniform4ui64ARB;
    extern PFNGLPROGRAMUNIFORM4UI64NVPROC                       gl3wProgramUniform4ui64NV;
    extern PFNGLPROGRAMUNIFORM4UI64VARBPROC                     gl3wProgramUniform4ui64vARB;
    extern PFNGLPROGRAMUNIFORM4UI64VNVPROC                      gl3wProgramUniform4ui64vNV;
    extern PFNGLPROGRAMUNIFORM4UIEXTPROC                        gl3wProgramUniform4uiEXT;
    extern PFNGLPROGRAMUNIFORM4UIVPROC                          gl3wProgramUniform4uiv;
    extern PFNGLPROGRAMUNIFORM4UIVEXTPROC                       gl3wProgramUniform4uivEXT;
    extern PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC                 gl3wProgramUniformHandleui64ARB;
    extern PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC                  gl3wProgramUniformHandleui64NV;
    extern PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC                gl3wProgramUniformHandleui64vARB;
    extern PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC                 gl3wProgramUniformHandleui64vNV;
    extern PFNGLPROGRAMUNIFORMMATRIX2DVPROC                     gl3wProgramUniformMatrix2dv;
    extern PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC                  gl3wProgramUniformMatrix2dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX2FVPROC                     gl3wProgramUniformMatrix2fv;
    extern PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC                  gl3wProgramUniformMatrix2fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC                   gl3wProgramUniformMatrix2x3dv;
    extern PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC                gl3wProgramUniformMatrix2x3dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC                   gl3wProgramUniformMatrix2x3fv;
    extern PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC                gl3wProgramUniformMatrix2x3fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC                   gl3wProgramUniformMatrix2x4dv;
    extern PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC                gl3wProgramUniformMatrix2x4dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC                   gl3wProgramUniformMatrix2x4fv;
    extern PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC                gl3wProgramUniformMatrix2x4fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX3DVPROC                     gl3wProgramUniformMatrix3dv;
    extern PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC                  gl3wProgramUniformMatrix3dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX3FVPROC                     gl3wProgramUniformMatrix3fv;
    extern PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC                  gl3wProgramUniformMatrix3fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC                   gl3wProgramUniformMatrix3x2dv;
    extern PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC                gl3wProgramUniformMatrix3x2dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC                   gl3wProgramUniformMatrix3x2fv;
    extern PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC                gl3wProgramUniformMatrix3x2fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC                   gl3wProgramUniformMatrix3x4dv;
    extern PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC                gl3wProgramUniformMatrix3x4dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC                   gl3wProgramUniformMatrix3x4fv;
    extern PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC                gl3wProgramUniformMatrix3x4fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX4DVPROC                     gl3wProgramUniformMatrix4dv;
    extern PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC                  gl3wProgramUniformMatrix4dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX4FVPROC                     gl3wProgramUniformMatrix4fv;
    extern PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC                  gl3wProgramUniformMatrix4fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC                   gl3wProgramUniformMatrix4x2dv;
    extern PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC                gl3wProgramUniformMatrix4x2dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC                   gl3wProgramUniformMatrix4x2fv;
    extern PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC                gl3wProgramUniformMatrix4x2fvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC                   gl3wProgramUniformMatrix4x3dv;
    extern PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC                gl3wProgramUniformMatrix4x3dvEXT;
    extern PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC                   gl3wProgramUniformMatrix4x3fv;
    extern PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC                gl3wProgramUniformMatrix4x3fvEXT;
    extern PFNGLPROGRAMUNIFORMUI64NVPROC                        gl3wProgramUniformui64NV;
    extern PFNGLPROGRAMUNIFORMUI64VNVPROC                       gl3wProgramUniformui64vNV;
    extern PFNGLPROVOKINGVERTEXPROC                             gl3wProvokingVertex;
    extern PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC                  gl3wPushClientAttribDefaultEXT;
    extern PFNGLPUSHDEBUGGROUPPROC                              gl3wPushDebugGroup;
    extern PFNGLPUSHGROUPMARKEREXTPROC                          gl3wPushGroupMarkerEXT;
    extern PFNGLQUERYCOUNTERPROC                                gl3wQueryCounter;
    extern PFNGLRASTERSAMPLESEXTPROC                            gl3wRasterSamplesEXT;
    extern PFNGLREADBUFFERPROC                                  gl3wReadBuffer;
    extern PFNGLREADPIXELSPROC                                  gl3wReadPixels;
    extern PFNGLREADNPIXELSPROC                                 gl3wReadnPixels;
    extern PFNGLREADNPIXELSARBPROC                              gl3wReadnPixelsARB;
    extern PFNGLRELEASESHADERCOMPILERPROC                       gl3wReleaseShaderCompiler;
    extern PFNGLRENDERBUFFERSTORAGEPROC                         gl3wRenderbufferStorage;
    extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC              gl3wRenderbufferStorageMultisample;
    extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC    gl3wRenderbufferStorageMultisampleCoverageNV;
    extern PFNGLRESOLVEDEPTHVALUESNVPROC                        gl3wResolveDepthValuesNV;
    extern PFNGLRESUMETRANSFORMFEEDBACKPROC                     gl3wResumeTransformFeedback;
    extern PFNGLSAMPLECOVERAGEPROC                              gl3wSampleCoverage;
    extern PFNGLSAMPLEMASKIPROC                                 gl3wSampleMaski;
    extern PFNGLSAMPLERPARAMETERIIVPROC                         gl3wSamplerParameterIiv;
    extern PFNGLSAMPLERPARAMETERIUIVPROC                        gl3wSamplerParameterIuiv;
    extern PFNGLSAMPLERPARAMETERFPROC                           gl3wSamplerParameterf;
    extern PFNGLSAMPLERPARAMETERFVPROC                          gl3wSamplerParameterfv;
    extern PFNGLSAMPLERPARAMETERIPROC                           gl3wSamplerParameteri;
    extern PFNGLSAMPLERPARAMETERIVPROC                          gl3wSamplerParameteriv;
    extern PFNGLSCISSORPROC                                     gl3wScissor;
    extern PFNGLSCISSORARRAYVPROC                               gl3wScissorArrayv;
    extern PFNGLSCISSORINDEXEDPROC                              gl3wScissorIndexed;
    extern PFNGLSCISSORINDEXEDVPROC                             gl3wScissorIndexedv;
    extern PFNGLSECONDARYCOLORFORMATNVPROC                      gl3wSecondaryColorFormatNV;
    extern PFNGLSELECTPERFMONITORCOUNTERSAMDPROC                gl3wSelectPerfMonitorCountersAMD;
    extern PFNGLSHADERBINARYPROC                                gl3wShaderBinary;
    extern PFNGLSHADERSOURCEPROC                                gl3wShaderSource;
    extern PFNGLSHADERSTORAGEBLOCKBINDINGPROC                   gl3wShaderStorageBlockBinding;
    extern PFNGLSIGNALVKFENCENVPROC                             gl3wSignalVkFenceNV;
    extern PFNGLSIGNALVKSEMAPHORENVPROC                         gl3wSignalVkSemaphoreNV;
    extern PFNGLSPECIALIZESHADERARBPROC                         gl3wSpecializeShaderARB;
    extern PFNGLSTATECAPTURENVPROC                              gl3wStateCaptureNV;
    extern PFNGLSTENCILFILLPATHINSTANCEDNVPROC                  gl3wStencilFillPathInstancedNV;
    extern PFNGLSTENCILFILLPATHNVPROC                           gl3wStencilFillPathNV;
    extern PFNGLSTENCILFUNCPROC                                 gl3wStencilFunc;
    extern PFNGLSTENCILFUNCSEPARATEPROC                         gl3wStencilFuncSeparate;
    extern PFNGLSTENCILMASKPROC                                 gl3wStencilMask;
    extern PFNGLSTENCILMASKSEPARATEPROC                         gl3wStencilMaskSeparate;
    extern PFNGLSTENCILOPPROC                                   gl3wStencilOp;
    extern PFNGLSTENCILOPSEPARATEPROC                           gl3wStencilOpSeparate;
    extern PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC                gl3wStencilStrokePathInstancedNV;
    extern PFNGLSTENCILSTROKEPATHNVPROC                         gl3wStencilStrokePathNV;
    extern PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC         gl3wStencilThenCoverFillPathInstancedNV;
    extern PFNGLSTENCILTHENCOVERFILLPATHNVPROC                  gl3wStencilThenCoverFillPathNV;
    extern PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC       gl3wStencilThenCoverStrokePathInstancedNV;
    extern PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC                gl3wStencilThenCoverStrokePathNV;
    extern PFNGLSUBPIXELPRECISIONBIASNVPROC                     gl3wSubpixelPrecisionBiasNV;
    extern PFNGLTEXBUFFERPROC                                   gl3wTexBuffer;
    extern PFNGLTEXBUFFERARBPROC                                gl3wTexBufferARB;
    extern PFNGLTEXBUFFERRANGEPROC                              gl3wTexBufferRange;
    extern PFNGLTEXCOORDFORMATNVPROC                            gl3wTexCoordFormatNV;
    extern PFNGLTEXIMAGE1DPROC                                  gl3wTexImage1D;
    extern PFNGLTEXIMAGE2DPROC                                  gl3wTexImage2D;
    extern PFNGLTEXIMAGE2DMULTISAMPLEPROC                       gl3wTexImage2DMultisample;
    extern PFNGLTEXIMAGE3DPROC                                  gl3wTexImage3D;
    extern PFNGLTEXIMAGE3DMULTISAMPLEPROC                       gl3wTexImage3DMultisample;
    extern PFNGLTEXPAGECOMMITMENTARBPROC                        gl3wTexPageCommitmentARB;
    extern PFNGLTEXPARAMETERIIVPROC                             gl3wTexParameterIiv;
    extern PFNGLTEXPARAMETERIUIVPROC                            gl3wTexParameterIuiv;
    extern PFNGLTEXPARAMETERFPROC                               gl3wTexParameterf;
    extern PFNGLTEXPARAMETERFVPROC                              gl3wTexParameterfv;
    extern PFNGLTEXPARAMETERIPROC                               gl3wTexParameteri;
    extern PFNGLTEXPARAMETERIVPROC                              gl3wTexParameteriv;
    extern PFNGLTEXSTORAGE1DPROC                                gl3wTexStorage1D;
    extern PFNGLTEXSTORAGE2DPROC                                gl3wTexStorage2D;
    extern PFNGLTEXSTORAGE2DMULTISAMPLEPROC                     gl3wTexStorage2DMultisample;
    extern PFNGLTEXSTORAGE3DPROC                                gl3wTexStorage3D;
    extern PFNGLTEXSTORAGE3DMULTISAMPLEPROC                     gl3wTexStorage3DMultisample;
    extern PFNGLTEXSUBIMAGE1DPROC                               gl3wTexSubImage1D;
    extern PFNGLTEXSUBIMAGE2DPROC                               gl3wTexSubImage2D;
    extern PFNGLTEXSUBIMAGE3DPROC                               gl3wTexSubImage3D;
    extern PFNGLTEXTUREBARRIERPROC                              gl3wTextureBarrier;
    extern PFNGLTEXTUREBARRIERNVPROC                            gl3wTextureBarrierNV;
    extern PFNGLTEXTUREBUFFERPROC                               gl3wTextureBuffer;
    extern PFNGLTEXTUREBUFFEREXTPROC                            gl3wTextureBufferEXT;
    extern PFNGLTEXTUREBUFFERRANGEPROC                          gl3wTextureBufferRange;
    extern PFNGLTEXTUREBUFFERRANGEEXTPROC                       gl3wTextureBufferRangeEXT;
    extern PFNGLTEXTUREIMAGE1DEXTPROC                           gl3wTextureImage1DEXT;
    extern PFNGLTEXTUREIMAGE2DEXTPROC                           gl3wTextureImage2DEXT;
    extern PFNGLTEXTUREIMAGE3DEXTPROC                           gl3wTextureImage3DEXT;
    extern PFNGLTEXTUREPAGECOMMITMENTEXTPROC                    gl3wTexturePageCommitmentEXT;
    extern PFNGLTEXTUREPARAMETERIIVPROC                         gl3wTextureParameterIiv;
    extern PFNGLTEXTUREPARAMETERIIVEXTPROC                      gl3wTextureParameterIivEXT;
    extern PFNGLTEXTUREPARAMETERIUIVPROC                        gl3wTextureParameterIuiv;
    extern PFNGLTEXTUREPARAMETERIUIVEXTPROC                     gl3wTextureParameterIuivEXT;
    extern PFNGLTEXTUREPARAMETERFPROC                           gl3wTextureParameterf;
    extern PFNGLTEXTUREPARAMETERFEXTPROC                        gl3wTextureParameterfEXT;
    extern PFNGLTEXTUREPARAMETERFVPROC                          gl3wTextureParameterfv;
    extern PFNGLTEXTUREPARAMETERFVEXTPROC                       gl3wTextureParameterfvEXT;
    extern PFNGLTEXTUREPARAMETERIPROC                           gl3wTextureParameteri;
    extern PFNGLTEXTUREPARAMETERIEXTPROC                        gl3wTextureParameteriEXT;
    extern PFNGLTEXTUREPARAMETERIVPROC                          gl3wTextureParameteriv;
    extern PFNGLTEXTUREPARAMETERIVEXTPROC                       gl3wTextureParameterivEXT;
    extern PFNGLTEXTURERENDERBUFFEREXTPROC                      gl3wTextureRenderbufferEXT;
    extern PFNGLTEXTURESTORAGE1DPROC                            gl3wTextureStorage1D;
    extern PFNGLTEXTURESTORAGE1DEXTPROC                         gl3wTextureStorage1DEXT;
    extern PFNGLTEXTURESTORAGE2DPROC                            gl3wTextureStorage2D;
    extern PFNGLTEXTURESTORAGE2DEXTPROC                         gl3wTextureStorage2DEXT;
    extern PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC                 gl3wTextureStorage2DMultisample;
    extern PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC              gl3wTextureStorage2DMultisampleEXT;
    extern PFNGLTEXTURESTORAGE3DPROC                            gl3wTextureStorage3D;
    extern PFNGLTEXTURESTORAGE3DEXTPROC                         gl3wTextureStorage3DEXT;
    extern PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC                 gl3wTextureStorage3DMultisample;
    extern PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC              gl3wTextureStorage3DMultisampleEXT;
    extern PFNGLTEXTURESUBIMAGE1DPROC                           gl3wTextureSubImage1D;
    extern PFNGLTEXTURESUBIMAGE1DEXTPROC                        gl3wTextureSubImage1DEXT;
    extern PFNGLTEXTURESUBIMAGE2DPROC                           gl3wTextureSubImage2D;
    extern PFNGLTEXTURESUBIMAGE2DEXTPROC                        gl3wTextureSubImage2DEXT;
    extern PFNGLTEXTURESUBIMAGE3DPROC                           gl3wTextureSubImage3D;
    extern PFNGLTEXTURESUBIMAGE3DEXTPROC                        gl3wTextureSubImage3DEXT;
    extern PFNGLTEXTUREVIEWPROC                                 gl3wTextureView;
    extern PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC                 gl3wTransformFeedbackBufferBase;
    extern PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC                gl3wTransformFeedbackBufferRange;
    extern PFNGLTRANSFORMFEEDBACKVARYINGSPROC                   gl3wTransformFeedbackVaryings;
    extern PFNGLTRANSFORMPATHNVPROC                             gl3wTransformPathNV;
    extern PFNGLUNIFORM1DPROC                                   gl3wUniform1d;
    extern PFNGLUNIFORM1DVPROC                                  gl3wUniform1dv;
    extern PFNGLUNIFORM1FPROC                                   gl3wUniform1f;
    extern PFNGLUNIFORM1FVPROC                                  gl3wUniform1fv;
    extern PFNGLUNIFORM1IPROC                                   gl3wUniform1i;
    extern PFNGLUNIFORM1I64ARBPROC                              gl3wUniform1i64ARB;
    extern PFNGLUNIFORM1I64NVPROC                               gl3wUniform1i64NV;
    extern PFNGLUNIFORM1I64VARBPROC                             gl3wUniform1i64vARB;
    extern PFNGLUNIFORM1I64VNVPROC                              gl3wUniform1i64vNV;
    extern PFNGLUNIFORM1IVPROC                                  gl3wUniform1iv;
    extern PFNGLUNIFORM1UIPROC                                  gl3wUniform1ui;
    extern PFNGLUNIFORM1UI64ARBPROC                             gl3wUniform1ui64ARB;
    extern PFNGLUNIFORM1UI64NVPROC                              gl3wUniform1ui64NV;
    extern PFNGLUNIFORM1UI64VARBPROC                            gl3wUniform1ui64vARB;
    extern PFNGLUNIFORM1UI64VNVPROC                             gl3wUniform1ui64vNV;
    extern PFNGLUNIFORM1UIVPROC                                 gl3wUniform1uiv;
    extern PFNGLUNIFORM2DPROC                                   gl3wUniform2d;
    extern PFNGLUNIFORM2DVPROC                                  gl3wUniform2dv;
    extern PFNGLUNIFORM2FPROC                                   gl3wUniform2f;
    extern PFNGLUNIFORM2FVPROC                                  gl3wUniform2fv;
    extern PFNGLUNIFORM2IPROC                                   gl3wUniform2i;
    extern PFNGLUNIFORM2I64ARBPROC                              gl3wUniform2i64ARB;
    extern PFNGLUNIFORM2I64NVPROC                               gl3wUniform2i64NV;
    extern PFNGLUNIFORM2I64VARBPROC                             gl3wUniform2i64vARB;
    extern PFNGLUNIFORM2I64VNVPROC                              gl3wUniform2i64vNV;
    extern PFNGLUNIFORM2IVPROC                                  gl3wUniform2iv;
    extern PFNGLUNIFORM2UIPROC                                  gl3wUniform2ui;
    extern PFNGLUNIFORM2UI64ARBPROC                             gl3wUniform2ui64ARB;
    extern PFNGLUNIFORM2UI64NVPROC                              gl3wUniform2ui64NV;
    extern PFNGLUNIFORM2UI64VARBPROC                            gl3wUniform2ui64vARB;
    extern PFNGLUNIFORM2UI64VNVPROC                             gl3wUniform2ui64vNV;
    extern PFNGLUNIFORM2UIVPROC                                 gl3wUniform2uiv;
    extern PFNGLUNIFORM3DPROC                                   gl3wUniform3d;
    extern PFNGLUNIFORM3DVPROC                                  gl3wUniform3dv;
    extern PFNGLUNIFORM3FPROC                                   gl3wUniform3f;
    extern PFNGLUNIFORM3FVPROC                                  gl3wUniform3fv;
    extern PFNGLUNIFORM3IPROC                                   gl3wUniform3i;
    extern PFNGLUNIFORM3I64ARBPROC                              gl3wUniform3i64ARB;
    extern PFNGLUNIFORM3I64NVPROC                               gl3wUniform3i64NV;
    extern PFNGLUNIFORM3I64VARBPROC                             gl3wUniform3i64vARB;
    extern PFNGLUNIFORM3I64VNVPROC                              gl3wUniform3i64vNV;
    extern PFNGLUNIFORM3IVPROC                                  gl3wUniform3iv;
    extern PFNGLUNIFORM3UIPROC                                  gl3wUniform3ui;
    extern PFNGLUNIFORM3UI64ARBPROC                             gl3wUniform3ui64ARB;
    extern PFNGLUNIFORM3UI64NVPROC                              gl3wUniform3ui64NV;
    extern PFNGLUNIFORM3UI64VARBPROC                            gl3wUniform3ui64vARB;
    extern PFNGLUNIFORM3UI64VNVPROC                             gl3wUniform3ui64vNV;
    extern PFNGLUNIFORM3UIVPROC                                 gl3wUniform3uiv;
    extern PFNGLUNIFORM4DPROC                                   gl3wUniform4d;
    extern PFNGLUNIFORM4DVPROC                                  gl3wUniform4dv;
    extern PFNGLUNIFORM4FPROC                                   gl3wUniform4f;
    extern PFNGLUNIFORM4FVPROC                                  gl3wUniform4fv;
    extern PFNGLUNIFORM4IPROC                                   gl3wUniform4i;
    extern PFNGLUNIFORM4I64ARBPROC                              gl3wUniform4i64ARB;
    extern PFNGLUNIFORM4I64NVPROC                               gl3wUniform4i64NV;
    extern PFNGLUNIFORM4I64VARBPROC                             gl3wUniform4i64vARB;
    extern PFNGLUNIFORM4I64VNVPROC                              gl3wUniform4i64vNV;
    extern PFNGLUNIFORM4IVPROC                                  gl3wUniform4iv;
    extern PFNGLUNIFORM4UIPROC                                  gl3wUniform4ui;
    extern PFNGLUNIFORM4UI64ARBPROC                             gl3wUniform4ui64ARB;
    extern PFNGLUNIFORM4UI64NVPROC                              gl3wUniform4ui64NV;
    extern PFNGLUNIFORM4UI64VARBPROC                            gl3wUniform4ui64vARB;
    extern PFNGLUNIFORM4UI64VNVPROC                             gl3wUniform4ui64vNV;
    extern PFNGLUNIFORM4UIVPROC                                 gl3wUniform4uiv;
    extern PFNGLUNIFORMBLOCKBINDINGPROC                         gl3wUniformBlockBinding;
    extern PFNGLUNIFORMHANDLEUI64ARBPROC                        gl3wUniformHandleui64ARB;
    extern PFNGLUNIFORMHANDLEUI64NVPROC                         gl3wUniformHandleui64NV;
    extern PFNGLUNIFORMHANDLEUI64VARBPROC                       gl3wUniformHandleui64vARB;
    extern PFNGLUNIFORMHANDLEUI64VNVPROC                        gl3wUniformHandleui64vNV;
    extern PFNGLUNIFORMMATRIX2DVPROC                            gl3wUniformMatrix2dv;
    extern PFNGLUNIFORMMATRIX2FVPROC                            gl3wUniformMatrix2fv;
    extern PFNGLUNIFORMMATRIX2X3DVPROC                          gl3wUniformMatrix2x3dv;
    extern PFNGLUNIFORMMATRIX2X3FVPROC                          gl3wUniformMatrix2x3fv;
    extern PFNGLUNIFORMMATRIX2X4DVPROC                          gl3wUniformMatrix2x4dv;
    extern PFNGLUNIFORMMATRIX2X4FVPROC                          gl3wUniformMatrix2x4fv;
    extern PFNGLUNIFORMMATRIX3DVPROC                            gl3wUniformMatrix3dv;
    extern PFNGLUNIFORMMATRIX3FVPROC                            gl3wUniformMatrix3fv;
    extern PFNGLUNIFORMMATRIX3X2DVPROC                          gl3wUniformMatrix3x2dv;
    extern PFNGLUNIFORMMATRIX3X2FVPROC                          gl3wUniformMatrix3x2fv;
    extern PFNGLUNIFORMMATRIX3X4DVPROC                          gl3wUniformMatrix3x4dv;
    extern PFNGLUNIFORMMATRIX3X4FVPROC                          gl3wUniformMatrix3x4fv;
    extern PFNGLUNIFORMMATRIX4DVPROC                            gl3wUniformMatrix4dv;
    extern PFNGLUNIFORMMATRIX4FVPROC                            gl3wUniformMatrix4fv;
    extern PFNGLUNIFORMMATRIX4X2DVPROC                          gl3wUniformMatrix4x2dv;
    extern PFNGLUNIFORMMATRIX4X2FVPROC                          gl3wUniformMatrix4x2fv;
    extern PFNGLUNIFORMMATRIX4X3DVPROC                          gl3wUniformMatrix4x3dv;
    extern PFNGLUNIFORMMATRIX4X3FVPROC                          gl3wUniformMatrix4x3fv;
    extern PFNGLUNIFORMSUBROUTINESUIVPROC                       gl3wUniformSubroutinesuiv;
    extern PFNGLUNIFORMUI64NVPROC                               gl3wUniformui64NV;
    extern PFNGLUNIFORMUI64VNVPROC                              gl3wUniformui64vNV;
    extern PFNGLUNMAPBUFFERPROC                                 gl3wUnmapBuffer;
    extern PFNGLUNMAPNAMEDBUFFERPROC                            gl3wUnmapNamedBuffer;
    extern PFNGLUNMAPNAMEDBUFFEREXTPROC                         gl3wUnmapNamedBufferEXT;
    extern PFNGLUSEPROGRAMPROC                                  gl3wUseProgram;
    extern PFNGLUSEPROGRAMSTAGESPROC                            gl3wUseProgramStages;
    extern PFNGLUSESHADERPROGRAMEXTPROC                         gl3wUseShaderProgramEXT;
    extern PFNGLVALIDATEPROGRAMPROC                             gl3wValidateProgram;
    extern PFNGLVALIDATEPROGRAMPIPELINEPROC                     gl3wValidateProgramPipeline;
    extern PFNGLVERTEXARRAYATTRIBBINDINGPROC                    gl3wVertexArrayAttribBinding;
    extern PFNGLVERTEXARRAYATTRIBFORMATPROC                     gl3wVertexArrayAttribFormat;
    extern PFNGLVERTEXARRAYATTRIBIFORMATPROC                    gl3wVertexArrayAttribIFormat;
    extern PFNGLVERTEXARRAYATTRIBLFORMATPROC                    gl3wVertexArrayAttribLFormat;
    extern PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC              gl3wVertexArrayBindVertexBufferEXT;
    extern PFNGLVERTEXARRAYBINDINGDIVISORPROC                   gl3wVertexArrayBindingDivisor;
    extern PFNGLVERTEXARRAYCOLOROFFSETEXTPROC                   gl3wVertexArrayColorOffsetEXT;
    extern PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC                gl3wVertexArrayEdgeFlagOffsetEXT;
    extern PFNGLVERTEXARRAYELEMENTBUFFERPROC                    gl3wVertexArrayElementBuffer;
    extern PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC                gl3wVertexArrayFogCoordOffsetEXT;
    extern PFNGLVERTEXARRAYINDEXOFFSETEXTPROC                   gl3wVertexArrayIndexOffsetEXT;
    extern PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC           gl3wVertexArrayMultiTexCoordOffsetEXT;
    extern PFNGLVERTEXARRAYNORMALOFFSETEXTPROC                  gl3wVertexArrayNormalOffsetEXT;
    extern PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC          gl3wVertexArraySecondaryColorOffsetEXT;
    extern PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC                gl3wVertexArrayTexCoordOffsetEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC           gl3wVertexArrayVertexAttribBindingEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC           gl3wVertexArrayVertexAttribDivisorEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC            gl3wVertexArrayVertexAttribFormatEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC           gl3wVertexArrayVertexAttribIFormatEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC           gl3wVertexArrayVertexAttribIOffsetEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC           gl3wVertexArrayVertexAttribLFormatEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC           gl3wVertexArrayVertexAttribLOffsetEXT;
    extern PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC            gl3wVertexArrayVertexAttribOffsetEXT;
    extern PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC          gl3wVertexArrayVertexBindingDivisorEXT;
    extern PFNGLVERTEXARRAYVERTEXBUFFERPROC                     gl3wVertexArrayVertexBuffer;
    extern PFNGLVERTEXARRAYVERTEXBUFFERSPROC                    gl3wVertexArrayVertexBuffers;
    extern PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC                  gl3wVertexArrayVertexOffsetEXT;
    extern PFNGLVERTEXATTRIB1DPROC                              gl3wVertexAttrib1d;
    extern PFNGLVERTEXATTRIB1DVPROC                             gl3wVertexAttrib1dv;
    extern PFNGLVERTEXATTRIB1FPROC                              gl3wVertexAttrib1f;
    extern PFNGLVERTEXATTRIB1FVPROC                             gl3wVertexAttrib1fv;
    extern PFNGLVERTEXATTRIB1SPROC                              gl3wVertexAttrib1s;
    extern PFNGLVERTEXATTRIB1SVPROC                             gl3wVertexAttrib1sv;
    extern PFNGLVERTEXATTRIB2DPROC                              gl3wVertexAttrib2d;
    extern PFNGLVERTEXATTRIB2DVPROC                             gl3wVertexAttrib2dv;
    extern PFNGLVERTEXATTRIB2FPROC                              gl3wVertexAttrib2f;
    extern PFNGLVERTEXATTRIB2FVPROC                             gl3wVertexAttrib2fv;
    extern PFNGLVERTEXATTRIB2SPROC                              gl3wVertexAttrib2s;
    extern PFNGLVERTEXATTRIB2SVPROC                             gl3wVertexAttrib2sv;
    extern PFNGLVERTEXATTRIB3DPROC                              gl3wVertexAttrib3d;
    extern PFNGLVERTEXATTRIB3DVPROC                             gl3wVertexAttrib3dv;
    extern PFNGLVERTEXATTRIB3FPROC                              gl3wVertexAttrib3f;
    extern PFNGLVERTEXATTRIB3FVPROC                             gl3wVertexAttrib3fv;
    extern PFNGLVERTEXATTRIB3SPROC                              gl3wVertexAttrib3s;
    extern PFNGLVERTEXATTRIB3SVPROC                             gl3wVertexAttrib3sv;
    extern PFNGLVERTEXATTRIB4NBVPROC                            gl3wVertexAttrib4Nbv;
    extern PFNGLVERTEXATTRIB4NIVPROC                            gl3wVertexAttrib4Niv;
    extern PFNGLVERTEXATTRIB4NSVPROC                            gl3wVertexAttrib4Nsv;
    extern PFNGLVERTEXATTRIB4NUBPROC                            gl3wVertexAttrib4Nub;
    extern PFNGLVERTEXATTRIB4NUBVPROC                           gl3wVertexAttrib4Nubv;
    extern PFNGLVERTEXATTRIB4NUIVPROC                           gl3wVertexAttrib4Nuiv;
    extern PFNGLVERTEXATTRIB4NUSVPROC                           gl3wVertexAttrib4Nusv;
    extern PFNGLVERTEXATTRIB4BVPROC                             gl3wVertexAttrib4bv;
    extern PFNGLVERTEXATTRIB4DPROC                              gl3wVertexAttrib4d;
    extern PFNGLVERTEXATTRIB4DVPROC                             gl3wVertexAttrib4dv;
    extern PFNGLVERTEXATTRIB4FPROC                              gl3wVertexAttrib4f;
    extern PFNGLVERTEXATTRIB4FVPROC                             gl3wVertexAttrib4fv;
    extern PFNGLVERTEXATTRIB4IVPROC                             gl3wVertexAttrib4iv;
    extern PFNGLVERTEXATTRIB4SPROC                              gl3wVertexAttrib4s;
    extern PFNGLVERTEXATTRIB4SVPROC                             gl3wVertexAttrib4sv;
    extern PFNGLVERTEXATTRIB4UBVPROC                            gl3wVertexAttrib4ubv;
    extern PFNGLVERTEXATTRIB4UIVPROC                            gl3wVertexAttrib4uiv;
    extern PFNGLVERTEXATTRIB4USVPROC                            gl3wVertexAttrib4usv;
    extern PFNGLVERTEXATTRIBBINDINGPROC                         gl3wVertexAttribBinding;
    extern PFNGLVERTEXATTRIBDIVISORPROC                         gl3wVertexAttribDivisor;
    extern PFNGLVERTEXATTRIBDIVISORARBPROC                      gl3wVertexAttribDivisorARB;
    extern PFNGLVERTEXATTRIBFORMATPROC                          gl3wVertexAttribFormat;
    extern PFNGLVERTEXATTRIBFORMATNVPROC                        gl3wVertexAttribFormatNV;
    extern PFNGLVERTEXATTRIBI1IPROC                             gl3wVertexAttribI1i;
    extern PFNGLVERTEXATTRIBI1IVPROC                            gl3wVertexAttribI1iv;
    extern PFNGLVERTEXATTRIBI1UIPROC                            gl3wVertexAttribI1ui;
    extern PFNGLVERTEXATTRIBI1UIVPROC                           gl3wVertexAttribI1uiv;
    extern PFNGLVERTEXATTRIBI2IPROC                             gl3wVertexAttribI2i;
    extern PFNGLVERTEXATTRIBI2IVPROC                            gl3wVertexAttribI2iv;
    extern PFNGLVERTEXATTRIBI2UIPROC                            gl3wVertexAttribI2ui;
    extern PFNGLVERTEXATTRIBI2UIVPROC                           gl3wVertexAttribI2uiv;
    extern PFNGLVERTEXATTRIBI3IPROC                             gl3wVertexAttribI3i;
    extern PFNGLVERTEXATTRIBI3IVPROC                            gl3wVertexAttribI3iv;
    extern PFNGLVERTEXATTRIBI3UIPROC                            gl3wVertexAttribI3ui;
    extern PFNGLVERTEXATTRIBI3UIVPROC                           gl3wVertexAttribI3uiv;
    extern PFNGLVERTEXATTRIBI4BVPROC                            gl3wVertexAttribI4bv;
    extern PFNGLVERTEXATTRIBI4IPROC                             gl3wVertexAttribI4i;
    extern PFNGLVERTEXATTRIBI4IVPROC                            gl3wVertexAttribI4iv;
    extern PFNGLVERTEXATTRIBI4SVPROC                            gl3wVertexAttribI4sv;
    extern PFNGLVERTEXATTRIBI4UBVPROC                           gl3wVertexAttribI4ubv;
    extern PFNGLVERTEXATTRIBI4UIPROC                            gl3wVertexAttribI4ui;
    extern PFNGLVERTEXATTRIBI4UIVPROC                           gl3wVertexAttribI4uiv;
    extern PFNGLVERTEXATTRIBI4USVPROC                           gl3wVertexAttribI4usv;
    extern PFNGLVERTEXATTRIBIFORMATPROC                         gl3wVertexAttribIFormat;
    extern PFNGLVERTEXATTRIBIFORMATNVPROC                       gl3wVertexAttribIFormatNV;
    extern PFNGLVERTEXATTRIBIPOINTERPROC                        gl3wVertexAttribIPointer;
    extern PFNGLVERTEXATTRIBL1DPROC                             gl3wVertexAttribL1d;
    extern PFNGLVERTEXATTRIBL1DVPROC                            gl3wVertexAttribL1dv;
    extern PFNGLVERTEXATTRIBL1I64NVPROC                         gl3wVertexAttribL1i64NV;
    extern PFNGLVERTEXATTRIBL1I64VNVPROC                        gl3wVertexAttribL1i64vNV;
    extern PFNGLVERTEXATTRIBL1UI64ARBPROC                       gl3wVertexAttribL1ui64ARB;
    extern PFNGLVERTEXATTRIBL1UI64NVPROC                        gl3wVertexAttribL1ui64NV;
    extern PFNGLVERTEXATTRIBL1UI64VARBPROC                      gl3wVertexAttribL1ui64vARB;
    extern PFNGLVERTEXATTRIBL1UI64VNVPROC                       gl3wVertexAttribL1ui64vNV;
    extern PFNGLVERTEXATTRIBL2DPROC                             gl3wVertexAttribL2d;
    extern PFNGLVERTEXATTRIBL2DVPROC                            gl3wVertexAttribL2dv;
    extern PFNGLVERTEXATTRIBL2I64NVPROC                         gl3wVertexAttribL2i64NV;
    extern PFNGLVERTEXATTRIBL2I64VNVPROC                        gl3wVertexAttribL2i64vNV;
    extern PFNGLVERTEXATTRIBL2UI64NVPROC                        gl3wVertexAttribL2ui64NV;
    extern PFNGLVERTEXATTRIBL2UI64VNVPROC                       gl3wVertexAttribL2ui64vNV;
    extern PFNGLVERTEXATTRIBL3DPROC                             gl3wVertexAttribL3d;
    extern PFNGLVERTEXATTRIBL3DVPROC                            gl3wVertexAttribL3dv;
    extern PFNGLVERTEXATTRIBL3I64NVPROC                         gl3wVertexAttribL3i64NV;
    extern PFNGLVERTEXATTRIBL3I64VNVPROC                        gl3wVertexAttribL3i64vNV;
    extern PFNGLVERTEXATTRIBL3UI64NVPROC                        gl3wVertexAttribL3ui64NV;
    extern PFNGLVERTEXATTRIBL3UI64VNVPROC                       gl3wVertexAttribL3ui64vNV;
    extern PFNGLVERTEXATTRIBL4DPROC                             gl3wVertexAttribL4d;
    extern PFNGLVERTEXATTRIBL4DVPROC                            gl3wVertexAttribL4dv;
    extern PFNGLVERTEXATTRIBL4I64NVPROC                         gl3wVertexAttribL4i64NV;
    extern PFNGLVERTEXATTRIBL4I64VNVPROC                        gl3wVertexAttribL4i64vNV;
    extern PFNGLVERTEXATTRIBL4UI64NVPROC                        gl3wVertexAttribL4ui64NV;
    extern PFNGLVERTEXATTRIBL4UI64VNVPROC                       gl3wVertexAttribL4ui64vNV;
    extern PFNGLVERTEXATTRIBLFORMATPROC                         gl3wVertexAttribLFormat;
    extern PFNGLVERTEXATTRIBLFORMATNVPROC                       gl3wVertexAttribLFormatNV;
    extern PFNGLVERTEXATTRIBLPOINTERPROC                        gl3wVertexAttribLPointer;
    extern PFNGLVERTEXATTRIBP1UIPROC                            gl3wVertexAttribP1ui;
    extern PFNGLVERTEXATTRIBP1UIVPROC                           gl3wVertexAttribP1uiv;
    extern PFNGLVERTEXATTRIBP2UIPROC                            gl3wVertexAttribP2ui;
    extern PFNGLVERTEXATTRIBP2UIVPROC                           gl3wVertexAttribP2uiv;
    extern PFNGLVERTEXATTRIBP3UIPROC                            gl3wVertexAttribP3ui;
    extern PFNGLVERTEXATTRIBP3UIVPROC                           gl3wVertexAttribP3uiv;
    extern PFNGLVERTEXATTRIBP4UIPROC                            gl3wVertexAttribP4ui;
    extern PFNGLVERTEXATTRIBP4UIVPROC                           gl3wVertexAttribP4uiv;
    extern PFNGLVERTEXATTRIBPOINTERPROC                         gl3wVertexAttribPointer;
    extern PFNGLVERTEXBINDINGDIVISORPROC                        gl3wVertexBindingDivisor;
    extern PFNGLVERTEXFORMATNVPROC                              gl3wVertexFormatNV;
    extern PFNGLVIEWPORTPROC                                    gl3wViewport;
    extern PFNGLVIEWPORTARRAYVPROC                              gl3wViewportArrayv;
    extern PFNGLVIEWPORTINDEXEDFPROC                            gl3wViewportIndexedf;
    extern PFNGLVIEWPORTINDEXEDFVPROC                           gl3wViewportIndexedfv;
    extern PFNGLVIEWPORTPOSITIONWSCALENVPROC                    gl3wViewportPositionWScaleNV;
    extern PFNGLVIEWPORTSWIZZLENVPROC                           gl3wViewportSwizzleNV;
    extern PFNGLWAITSYNCPROC                                    gl3wWaitSync;
    extern PFNGLWAITVKSEMAPHORENVPROC                           gl3wWaitVkSemaphoreNV;
    extern PFNGLWEIGHTPATHSNVPROC                               gl3wWeightPathsNV;
    extern PFNGLWINDOWRECTANGLESEXTPROC                         gl3wWindowRectanglesEXT;

#define glActiveProgramEXT                            gl3wActiveProgramEXT
#define glActiveShaderProgram                         gl3wActiveShaderProgram
#define glActiveTexture                               gl3wActiveTexture
#define glApplyFramebufferAttachmentCMAAINTEL         gl3wApplyFramebufferAttachmentCMAAINTEL
#define glAttachShader                                gl3wAttachShader
#define glBeginConditionalRender                      gl3wBeginConditionalRender
#define glBeginConditionalRenderNV                    gl3wBeginConditionalRenderNV
#define glBeginPerfMonitorAMD                         gl3wBeginPerfMonitorAMD
#define glBeginPerfQueryINTEL                         gl3wBeginPerfQueryINTEL
#define glBeginQuery                                  gl3wBeginQuery
#define glBeginQueryIndexed                           gl3wBeginQueryIndexed
#define glBeginTransformFeedback                      gl3wBeginTransformFeedback
#define glBindAttribLocation                          gl3wBindAttribLocation
#define glBindBuffer                                  gl3wBindBuffer
#define glBindBufferBase                              gl3wBindBufferBase
#define glBindBufferRange                             gl3wBindBufferRange
#define glBindBuffersBase                             gl3wBindBuffersBase
#define glBindBuffersRange                            gl3wBindBuffersRange
#define glBindFragDataLocation                        gl3wBindFragDataLocation
#define glBindFragDataLocationIndexed                 gl3wBindFragDataLocationIndexed
#define glBindFramebuffer                             gl3wBindFramebuffer
#define glBindImageTexture                            gl3wBindImageTexture
#define glBindImageTextures                           gl3wBindImageTextures
#define glBindMultiTextureEXT                         gl3wBindMultiTextureEXT
#define glBindProgramPipeline                         gl3wBindProgramPipeline
#define glBindRenderbuffer                            gl3wBindRenderbuffer
#define glBindSampler                                 gl3wBindSampler
#define glBindSamplers                                gl3wBindSamplers
#define glBindTexture                                 gl3wBindTexture
#define glBindTextureUnit                             gl3wBindTextureUnit
#define glBindTextures                                gl3wBindTextures
#define glBindTransformFeedback                       gl3wBindTransformFeedback
#define glBindVertexArray                             gl3wBindVertexArray
#define glBindVertexBuffer                            gl3wBindVertexBuffer
#define glBindVertexBuffers                           gl3wBindVertexBuffers
#define glBlendBarrierKHR                             gl3wBlendBarrierKHR
#define glBlendBarrierNV                              gl3wBlendBarrierNV
#define glBlendColor                                  gl3wBlendColor
#define glBlendEquation                               gl3wBlendEquation
#define glBlendEquationSeparate                       gl3wBlendEquationSeparate
#define glBlendEquationSeparatei                      gl3wBlendEquationSeparatei
#define glBlendEquationSeparateiARB                   gl3wBlendEquationSeparateiARB
#define glBlendEquationi                              gl3wBlendEquationi
#define glBlendEquationiARB                           gl3wBlendEquationiARB
#define glBlendFunc                                   gl3wBlendFunc
#define glBlendFuncSeparate                           gl3wBlendFuncSeparate
#define glBlendFuncSeparatei                          gl3wBlendFuncSeparatei
#define glBlendFuncSeparateiARB                       gl3wBlendFuncSeparateiARB
#define glBlendFunci                                  gl3wBlendFunci
#define glBlendFunciARB                               gl3wBlendFunciARB
#define glBlendParameteriNV                           gl3wBlendParameteriNV
#define glBlitFramebuffer                             gl3wBlitFramebuffer
#define glBlitNamedFramebuffer                        gl3wBlitNamedFramebuffer
#define glBufferAddressRangeNV                        gl3wBufferAddressRangeNV
#define glBufferData                                  gl3wBufferData
#define glBufferPageCommitmentARB                     gl3wBufferPageCommitmentARB
#define glBufferStorage                               gl3wBufferStorage
#define glBufferSubData                               gl3wBufferSubData
#define glCallCommandListNV                           gl3wCallCommandListNV
#define glCheckFramebufferStatus                      gl3wCheckFramebufferStatus
#define glCheckNamedFramebufferStatus                 gl3wCheckNamedFramebufferStatus
#define glCheckNamedFramebufferStatusEXT              gl3wCheckNamedFramebufferStatusEXT
#define glClampColor                                  gl3wClampColor
#define glClear                                       gl3wClear
#define glClearBufferData                             gl3wClearBufferData
#define glClearBufferSubData                          gl3wClearBufferSubData
#define glClearBufferfi                               gl3wClearBufferfi
#define glClearBufferfv                               gl3wClearBufferfv
#define glClearBufferiv                               gl3wClearBufferiv
#define glClearBufferuiv                              gl3wClearBufferuiv
#define glClearColor                                  gl3wClearColor
#define glClearDepth                                  gl3wClearDepth
#define glClearDepthf                                 gl3wClearDepthf
#define glClearNamedBufferData                        gl3wClearNamedBufferData
#define glClearNamedBufferDataEXT                     gl3wClearNamedBufferDataEXT
#define glClearNamedBufferSubData                     gl3wClearNamedBufferSubData
#define glClearNamedBufferSubDataEXT                  gl3wClearNamedBufferSubDataEXT
#define glClearNamedFramebufferfi                     gl3wClearNamedFramebufferfi
#define glClearNamedFramebufferfv                     gl3wClearNamedFramebufferfv
#define glClearNamedFramebufferiv                     gl3wClearNamedFramebufferiv
#define glClearNamedFramebufferuiv                    gl3wClearNamedFramebufferuiv
#define glClearStencil                                gl3wClearStencil
#define glClearTexImage                               gl3wClearTexImage
#define glClearTexSubImage                            gl3wClearTexSubImage
#define glClientAttribDefaultEXT                      gl3wClientAttribDefaultEXT
#define glClientWaitSync                              gl3wClientWaitSync
#define glClipControl                                 gl3wClipControl
#define glColorFormatNV                               gl3wColorFormatNV
#define glColorMask                                   gl3wColorMask
#define glColorMaski                                  gl3wColorMaski
#define glCommandListSegmentsNV                       gl3wCommandListSegmentsNV
#define glCompileCommandListNV                        gl3wCompileCommandListNV
#define glCompileShader                               gl3wCompileShader
#define glCompileShaderIncludeARB                     gl3wCompileShaderIncludeARB
#define glCompressedMultiTexImage1DEXT                gl3wCompressedMultiTexImage1DEXT
#define glCompressedMultiTexImage2DEXT                gl3wCompressedMultiTexImage2DEXT
#define glCompressedMultiTexImage3DEXT                gl3wCompressedMultiTexImage3DEXT
#define glCompressedMultiTexSubImage1DEXT             gl3wCompressedMultiTexSubImage1DEXT
#define glCompressedMultiTexSubImage2DEXT             gl3wCompressedMultiTexSubImage2DEXT
#define glCompressedMultiTexSubImage3DEXT             gl3wCompressedMultiTexSubImage3DEXT
#define glCompressedTexImage1D                        gl3wCompressedTexImage1D
#define glCompressedTexImage2D                        gl3wCompressedTexImage2D
#define glCompressedTexImage3D                        gl3wCompressedTexImage3D
#define glCompressedTexSubImage1D                     gl3wCompressedTexSubImage1D
#define glCompressedTexSubImage2D                     gl3wCompressedTexSubImage2D
#define glCompressedTexSubImage3D                     gl3wCompressedTexSubImage3D
#define glCompressedTextureImage1DEXT                 gl3wCompressedTextureImage1DEXT
#define glCompressedTextureImage2DEXT                 gl3wCompressedTextureImage2DEXT
#define glCompressedTextureImage3DEXT                 gl3wCompressedTextureImage3DEXT
#define glCompressedTextureSubImage1D                 gl3wCompressedTextureSubImage1D
#define glCompressedTextureSubImage1DEXT              gl3wCompressedTextureSubImage1DEXT
#define glCompressedTextureSubImage2D                 gl3wCompressedTextureSubImage2D
#define glCompressedTextureSubImage2DEXT              gl3wCompressedTextureSubImage2DEXT
#define glCompressedTextureSubImage3D                 gl3wCompressedTextureSubImage3D
#define glCompressedTextureSubImage3DEXT              gl3wCompressedTextureSubImage3DEXT
#define glConservativeRasterParameterfNV              gl3wConservativeRasterParameterfNV
#define glConservativeRasterParameteriNV              gl3wConservativeRasterParameteriNV
#define glCopyBufferSubData                           gl3wCopyBufferSubData
#define glCopyImageSubData                            gl3wCopyImageSubData
#define glCopyMultiTexImage1DEXT                      gl3wCopyMultiTexImage1DEXT
#define glCopyMultiTexImage2DEXT                      gl3wCopyMultiTexImage2DEXT
#define glCopyMultiTexSubImage1DEXT                   gl3wCopyMultiTexSubImage1DEXT
#define glCopyMultiTexSubImage2DEXT                   gl3wCopyMultiTexSubImage2DEXT
#define glCopyMultiTexSubImage3DEXT                   gl3wCopyMultiTexSubImage3DEXT
#define glCopyNamedBufferSubData                      gl3wCopyNamedBufferSubData
#define glCopyPathNV                                  gl3wCopyPathNV
#define glCopyTexImage1D                              gl3wCopyTexImage1D
#define glCopyTexImage2D                              gl3wCopyTexImage2D
#define glCopyTexSubImage1D                           gl3wCopyTexSubImage1D
#define glCopyTexSubImage2D                           gl3wCopyTexSubImage2D
#define glCopyTexSubImage3D                           gl3wCopyTexSubImage3D
#define glCopyTextureImage1DEXT                       gl3wCopyTextureImage1DEXT
#define glCopyTextureImage2DEXT                       gl3wCopyTextureImage2DEXT
#define glCopyTextureSubImage1D                       gl3wCopyTextureSubImage1D
#define glCopyTextureSubImage1DEXT                    gl3wCopyTextureSubImage1DEXT
#define glCopyTextureSubImage2D                       gl3wCopyTextureSubImage2D
#define glCopyTextureSubImage2DEXT                    gl3wCopyTextureSubImage2DEXT
#define glCopyTextureSubImage3D                       gl3wCopyTextureSubImage3D
#define glCopyTextureSubImage3DEXT                    gl3wCopyTextureSubImage3DEXT
#define glCoverFillPathInstancedNV                    gl3wCoverFillPathInstancedNV
#define glCoverFillPathNV                             gl3wCoverFillPathNV
#define glCoverStrokePathInstancedNV                  gl3wCoverStrokePathInstancedNV
#define glCoverStrokePathNV                           gl3wCoverStrokePathNV
#define glCoverageModulationNV                        gl3wCoverageModulationNV
#define glCoverageModulationTableNV                   gl3wCoverageModulationTableNV
#define glCreateBuffers                               gl3wCreateBuffers
#define glCreateCommandListsNV                        gl3wCreateCommandListsNV
#define glCreateFramebuffers                          gl3wCreateFramebuffers
#define glCreatePerfQueryINTEL                        gl3wCreatePerfQueryINTEL
#define glCreateProgram                               gl3wCreateProgram
#define glCreateProgramPipelines                      gl3wCreateProgramPipelines
#define glCreateQueries                               gl3wCreateQueries
#define glCreateRenderbuffers                         gl3wCreateRenderbuffers
#define glCreateSamplers                              gl3wCreateSamplers
#define glCreateShader                                gl3wCreateShader
#define glCreateShaderProgramEXT                      gl3wCreateShaderProgramEXT
#define glCreateShaderProgramv                        gl3wCreateShaderProgramv
#define glCreateStatesNV                              gl3wCreateStatesNV
#define glCreateSyncFromCLeventARB                    gl3wCreateSyncFromCLeventARB
#define glCreateTextures                              gl3wCreateTextures
#define glCreateTransformFeedbacks                    gl3wCreateTransformFeedbacks
#define glCreateVertexArrays                          gl3wCreateVertexArrays
#define glCullFace                                    gl3wCullFace
#define glDebugMessageCallback                        gl3wDebugMessageCallback
#define glDebugMessageCallbackARB                     gl3wDebugMessageCallbackARB
#define glDebugMessageControl                         gl3wDebugMessageControl
#define glDebugMessageControlARB                      gl3wDebugMessageControlARB
#define glDebugMessageInsert                          gl3wDebugMessageInsert
#define glDebugMessageInsertARB                       gl3wDebugMessageInsertARB
#define glDeleteBuffers                               gl3wDeleteBuffers
#define glDeleteCommandListsNV                        gl3wDeleteCommandListsNV
#define glDeleteFramebuffers                          gl3wDeleteFramebuffers
#define glDeleteNamedStringARB                        gl3wDeleteNamedStringARB
#define glDeletePathsNV                               gl3wDeletePathsNV
#define glDeletePerfMonitorsAMD                       gl3wDeletePerfMonitorsAMD
#define glDeletePerfQueryINTEL                        gl3wDeletePerfQueryINTEL
#define glDeleteProgram                               gl3wDeleteProgram
#define glDeleteProgramPipelines                      gl3wDeleteProgramPipelines
#define glDeleteQueries                               gl3wDeleteQueries
#define glDeleteRenderbuffers                         gl3wDeleteRenderbuffers
#define glDeleteSamplers                              gl3wDeleteSamplers
#define glDeleteShader                                gl3wDeleteShader
#define glDeleteStatesNV                              gl3wDeleteStatesNV
#define glDeleteSync                                  gl3wDeleteSync
#define glDeleteTextures                              gl3wDeleteTextures
#define glDeleteTransformFeedbacks                    gl3wDeleteTransformFeedbacks
#define glDeleteVertexArrays                          gl3wDeleteVertexArrays
#define glDepthFunc                                   gl3wDepthFunc
#define glDepthMask                                   gl3wDepthMask
#define glDepthRange                                  gl3wDepthRange
#define glDepthRangeArrayv                            gl3wDepthRangeArrayv
#define glDepthRangeIndexed                           gl3wDepthRangeIndexed
#define glDepthRangef                                 gl3wDepthRangef
#define glDetachShader                                gl3wDetachShader
#define glDisable                                     gl3wDisable
#define glDisableClientStateIndexedEXT                gl3wDisableClientStateIndexedEXT
#define glDisableClientStateiEXT                      gl3wDisableClientStateiEXT
#define glDisableIndexedEXT                           gl3wDisableIndexedEXT
#define glDisableVertexArrayAttrib                    gl3wDisableVertexArrayAttrib
#define glDisableVertexArrayAttribEXT                 gl3wDisableVertexArrayAttribEXT
#define glDisableVertexArrayEXT                       gl3wDisableVertexArrayEXT
#define glDisableVertexAttribArray                    gl3wDisableVertexAttribArray
#define glDisablei                                    gl3wDisablei
#define glDispatchCompute                             gl3wDispatchCompute
#define glDispatchComputeGroupSizeARB                 gl3wDispatchComputeGroupSizeARB
#define glDispatchComputeIndirect                     gl3wDispatchComputeIndirect
#define glDrawArrays                                  gl3wDrawArrays
#define glDrawArraysIndirect                          gl3wDrawArraysIndirect
#define glDrawArraysInstanced                         gl3wDrawArraysInstanced
#define glDrawArraysInstancedARB                      gl3wDrawArraysInstancedARB
#define glDrawArraysInstancedBaseInstance             gl3wDrawArraysInstancedBaseInstance
#define glDrawArraysInstancedEXT                      gl3wDrawArraysInstancedEXT
#define glDrawBuffer                                  gl3wDrawBuffer
#define glDrawBuffers                                 gl3wDrawBuffers
#define glDrawCommandsAddressNV                       gl3wDrawCommandsAddressNV
#define glDrawCommandsNV                              gl3wDrawCommandsNV
#define glDrawCommandsStatesAddressNV                 gl3wDrawCommandsStatesAddressNV
#define glDrawCommandsStatesNV                        gl3wDrawCommandsStatesNV
#define glDrawElements                                gl3wDrawElements
#define glDrawElementsBaseVertex                      gl3wDrawElementsBaseVertex
#define glDrawElementsIndirect                        gl3wDrawElementsIndirect
#define glDrawElementsInstanced                       gl3wDrawElementsInstanced
#define glDrawElementsInstancedARB                    gl3wDrawElementsInstancedARB
#define glDrawElementsInstancedBaseInstance           gl3wDrawElementsInstancedBaseInstance
#define glDrawElementsInstancedBaseVertex             gl3wDrawElementsInstancedBaseVertex
#define glDrawElementsInstancedBaseVertexBaseInstance gl3wDrawElementsInstancedBaseVertexBaseInstance
#define glDrawElementsInstancedEXT                    gl3wDrawElementsInstancedEXT
#define glDrawRangeElements                           gl3wDrawRangeElements
#define glDrawRangeElementsBaseVertex                 gl3wDrawRangeElementsBaseVertex
#define glDrawTransformFeedback                       gl3wDrawTransformFeedback
#define glDrawTransformFeedbackInstanced              gl3wDrawTransformFeedbackInstanced
#define glDrawTransformFeedbackStream                 gl3wDrawTransformFeedbackStream
#define glDrawTransformFeedbackStreamInstanced        gl3wDrawTransformFeedbackStreamInstanced
#define glDrawVkImageNV                               gl3wDrawVkImageNV
#define glEdgeFlagFormatNV                            gl3wEdgeFlagFormatNV
#define glEnable                                      gl3wEnable
#define glEnableClientStateIndexedEXT                 gl3wEnableClientStateIndexedEXT
#define glEnableClientStateiEXT                       gl3wEnableClientStateiEXT
#define glEnableIndexedEXT                            gl3wEnableIndexedEXT
#define glEnableVertexArrayAttrib                     gl3wEnableVertexArrayAttrib
#define glEnableVertexArrayAttribEXT                  gl3wEnableVertexArrayAttribEXT
#define glEnableVertexArrayEXT                        gl3wEnableVertexArrayEXT
#define glEnableVertexAttribArray                     gl3wEnableVertexAttribArray
#define glEnablei                                     gl3wEnablei
#define glEndConditionalRender                        gl3wEndConditionalRender
#define glEndConditionalRenderNV                      gl3wEndConditionalRenderNV
#define glEndPerfMonitorAMD                           gl3wEndPerfMonitorAMD
#define glEndPerfQueryINTEL                           gl3wEndPerfQueryINTEL
#define glEndQuery                                    gl3wEndQuery
#define glEndQueryIndexed                             gl3wEndQueryIndexed
#define glEndTransformFeedback                        gl3wEndTransformFeedback
#define glEvaluateDepthValuesARB                      gl3wEvaluateDepthValuesARB
#define glFenceSync                                   gl3wFenceSync
#define glFinish                                      gl3wFinish
#define glFlush                                       gl3wFlush
#define glFlushMappedBufferRange                      gl3wFlushMappedBufferRange
#define glFlushMappedNamedBufferRange                 gl3wFlushMappedNamedBufferRange
#define glFlushMappedNamedBufferRangeEXT              gl3wFlushMappedNamedBufferRangeEXT
#define glFogCoordFormatNV                            gl3wFogCoordFormatNV
#define glFragmentCoverageColorNV                     gl3wFragmentCoverageColorNV
#define glFramebufferDrawBufferEXT                    gl3wFramebufferDrawBufferEXT
#define glFramebufferDrawBuffersEXT                   gl3wFramebufferDrawBuffersEXT
#define glFramebufferParameteri                       gl3wFramebufferParameteri
#define glFramebufferReadBufferEXT                    gl3wFramebufferReadBufferEXT
#define glFramebufferRenderbuffer                     gl3wFramebufferRenderbuffer
#define glFramebufferSampleLocationsfvARB             gl3wFramebufferSampleLocationsfvARB
#define glFramebufferSampleLocationsfvNV              gl3wFramebufferSampleLocationsfvNV
#define glFramebufferTexture                          gl3wFramebufferTexture
#define glFramebufferTexture1D                        gl3wFramebufferTexture1D
#define glFramebufferTexture2D                        gl3wFramebufferTexture2D
#define glFramebufferTexture3D                        gl3wFramebufferTexture3D
#define glFramebufferTextureARB                       gl3wFramebufferTextureARB
#define glFramebufferTextureFaceARB                   gl3wFramebufferTextureFaceARB
#define glFramebufferTextureLayer                     gl3wFramebufferTextureLayer
#define glFramebufferTextureLayerARB                  gl3wFramebufferTextureLayerARB
#define glFramebufferTextureMultiviewOVR              gl3wFramebufferTextureMultiviewOVR
#define glFrontFace                                   gl3wFrontFace
#define glGenBuffers                                  gl3wGenBuffers
#define glGenFramebuffers                             gl3wGenFramebuffers
#define glGenPathsNV                                  gl3wGenPathsNV
#define glGenPerfMonitorsAMD                          gl3wGenPerfMonitorsAMD
#define glGenProgramPipelines                         gl3wGenProgramPipelines
#define glGenQueries                                  gl3wGenQueries
#define glGenRenderbuffers                            gl3wGenRenderbuffers
#define glGenSamplers                                 gl3wGenSamplers
#define glGenTextures                                 gl3wGenTextures
#define glGenTransformFeedbacks                       gl3wGenTransformFeedbacks
#define glGenVertexArrays                             gl3wGenVertexArrays
#define glGenerateMipmap                              gl3wGenerateMipmap
#define glGenerateMultiTexMipmapEXT                   gl3wGenerateMultiTexMipmapEXT
#define glGenerateTextureMipmap                       gl3wGenerateTextureMipmap
#define glGenerateTextureMipmapEXT                    gl3wGenerateTextureMipmapEXT
#define glGetActiveAtomicCounterBufferiv              gl3wGetActiveAtomicCounterBufferiv
#define glGetActiveAttrib                             gl3wGetActiveAttrib
#define glGetActiveSubroutineName                     gl3wGetActiveSubroutineName
#define glGetActiveSubroutineUniformName              gl3wGetActiveSubroutineUniformName
#define glGetActiveSubroutineUniformiv                gl3wGetActiveSubroutineUniformiv
#define glGetActiveUniform                            gl3wGetActiveUniform
#define glGetActiveUniformBlockName                   gl3wGetActiveUniformBlockName
#define glGetActiveUniformBlockiv                     gl3wGetActiveUniformBlockiv
#define glGetActiveUniformName                        gl3wGetActiveUniformName
#define glGetActiveUniformsiv                         gl3wGetActiveUniformsiv
#define glGetAttachedShaders                          gl3wGetAttachedShaders
#define glGetAttribLocation                           gl3wGetAttribLocation
#define glGetBooleanIndexedvEXT                       gl3wGetBooleanIndexedvEXT
#define glGetBooleani_v                               gl3wGetBooleani_v
#define glGetBooleanv                                 gl3wGetBooleanv
#define glGetBufferParameteri64v                      gl3wGetBufferParameteri64v
#define glGetBufferParameteriv                        gl3wGetBufferParameteriv
#define glGetBufferParameterui64vNV                   gl3wGetBufferParameterui64vNV
#define glGetBufferPointerv                           gl3wGetBufferPointerv
#define glGetBufferSubData                            gl3wGetBufferSubData
#define glGetCommandHeaderNV                          gl3wGetCommandHeaderNV
#define glGetCompressedMultiTexImageEXT               gl3wGetCompressedMultiTexImageEXT
#define glGetCompressedTexImage                       gl3wGetCompressedTexImage
#define glGetCompressedTextureImage                   gl3wGetCompressedTextureImage
#define glGetCompressedTextureImageEXT                gl3wGetCompressedTextureImageEXT
#define glGetCompressedTextureSubImage                gl3wGetCompressedTextureSubImage
#define glGetCoverageModulationTableNV                gl3wGetCoverageModulationTableNV
#define glGetDebugMessageLog                          gl3wGetDebugMessageLog
#define glGetDebugMessageLogARB                       gl3wGetDebugMessageLogARB
#define glGetDoubleIndexedvEXT                        gl3wGetDoubleIndexedvEXT
#define glGetDoublei_v                                gl3wGetDoublei_v
#define glGetDoublei_vEXT                             gl3wGetDoublei_vEXT
#define glGetDoublev                                  gl3wGetDoublev
#define glGetError                                    gl3wGetError
#define glGetFirstPerfQueryIdINTEL                    gl3wGetFirstPerfQueryIdINTEL
#define glGetFloatIndexedvEXT                         gl3wGetFloatIndexedvEXT
#define glGetFloati_v                                 gl3wGetFloati_v
#define glGetFloati_vEXT                              gl3wGetFloati_vEXT
#define glGetFloatv                                   gl3wGetFloatv
#define glGetFragDataIndex                            gl3wGetFragDataIndex
#define glGetFragDataLocation                         gl3wGetFragDataLocation
#define glGetFramebufferAttachmentParameteriv         gl3wGetFramebufferAttachmentParameteriv
#define glGetFramebufferParameteriv                   gl3wGetFramebufferParameteriv
#define glGetFramebufferParameterivEXT                gl3wGetFramebufferParameterivEXT
#define glGetGraphicsResetStatus                      gl3wGetGraphicsResetStatus
#define glGetGraphicsResetStatusARB                   gl3wGetGraphicsResetStatusARB
#define glGetImageHandleARB                           gl3wGetImageHandleARB
#define glGetImageHandleNV                            gl3wGetImageHandleNV
#define glGetInteger64i_v                             gl3wGetInteger64i_v
#define glGetInteger64v                               gl3wGetInteger64v
#define glGetIntegerIndexedvEXT                       gl3wGetIntegerIndexedvEXT
#define glGetIntegeri_v                               gl3wGetIntegeri_v
#define glGetIntegerui64i_vNV                         gl3wGetIntegerui64i_vNV
#define glGetIntegerui64vNV                           gl3wGetIntegerui64vNV
#define glGetIntegerv                                 gl3wGetIntegerv
#define glGetInternalformatSampleivNV                 gl3wGetInternalformatSampleivNV
#define glGetInternalformati64v                       gl3wGetInternalformati64v
#define glGetInternalformativ                         gl3wGetInternalformativ
#define glGetMultiTexEnvfvEXT                         gl3wGetMultiTexEnvfvEXT
#define glGetMultiTexEnvivEXT                         gl3wGetMultiTexEnvivEXT
#define glGetMultiTexGendvEXT                         gl3wGetMultiTexGendvEXT
#define glGetMultiTexGenfvEXT                         gl3wGetMultiTexGenfvEXT
#define glGetMultiTexGenivEXT                         gl3wGetMultiTexGenivEXT
#define glGetMultiTexImageEXT                         gl3wGetMultiTexImageEXT
#define glGetMultiTexLevelParameterfvEXT              gl3wGetMultiTexLevelParameterfvEXT
#define glGetMultiTexLevelParameterivEXT              gl3wGetMultiTexLevelParameterivEXT
#define glGetMultiTexParameterIivEXT                  gl3wGetMultiTexParameterIivEXT
#define glGetMultiTexParameterIuivEXT                 gl3wGetMultiTexParameterIuivEXT
#define glGetMultiTexParameterfvEXT                   gl3wGetMultiTexParameterfvEXT
#define glGetMultiTexParameterivEXT                   gl3wGetMultiTexParameterivEXT
#define glGetMultisamplefv                            gl3wGetMultisamplefv
#define glGetNamedBufferParameteri64v                 gl3wGetNamedBufferParameteri64v
#define glGetNamedBufferParameteriv                   gl3wGetNamedBufferParameteriv
#define glGetNamedBufferParameterivEXT                gl3wGetNamedBufferParameterivEXT
#define glGetNamedBufferParameterui64vNV              gl3wGetNamedBufferParameterui64vNV
#define glGetNamedBufferPointerv                      gl3wGetNamedBufferPointerv
#define glGetNamedBufferPointervEXT                   gl3wGetNamedBufferPointervEXT
#define glGetNamedBufferSubData                       gl3wGetNamedBufferSubData
#define glGetNamedBufferSubDataEXT                    gl3wGetNamedBufferSubDataEXT
#define glGetNamedFramebufferAttachmentParameteriv    gl3wGetNamedFramebufferAttachmentParameteriv
#define glGetNamedFramebufferAttachmentParameterivEXT gl3wGetNamedFramebufferAttachmentParameterivEXT
#define glGetNamedFramebufferParameteriv              gl3wGetNamedFramebufferParameteriv
#define glGetNamedFramebufferParameterivEXT           gl3wGetNamedFramebufferParameterivEXT
#define glGetNamedProgramLocalParameterIivEXT         gl3wGetNamedProgramLocalParameterIivEXT
#define glGetNamedProgramLocalParameterIuivEXT        gl3wGetNamedProgramLocalParameterIuivEXT
#define glGetNamedProgramLocalParameterdvEXT          gl3wGetNamedProgramLocalParameterdvEXT
#define glGetNamedProgramLocalParameterfvEXT          gl3wGetNamedProgramLocalParameterfvEXT
#define glGetNamedProgramStringEXT                    gl3wGetNamedProgramStringEXT
#define glGetNamedProgramivEXT                        gl3wGetNamedProgramivEXT
#define glGetNamedRenderbufferParameteriv             gl3wGetNamedRenderbufferParameteriv
#define glGetNamedRenderbufferParameterivEXT          gl3wGetNamedRenderbufferParameterivEXT
#define glGetNamedStringARB                           gl3wGetNamedStringARB
#define glGetNamedStringivARB                         gl3wGetNamedStringivARB
#define glGetNextPerfQueryIdINTEL                     gl3wGetNextPerfQueryIdINTEL
#define glGetObjectLabel                              gl3wGetObjectLabel
#define glGetObjectLabelEXT                           gl3wGetObjectLabelEXT
#define glGetObjectPtrLabel                           gl3wGetObjectPtrLabel
#define glGetPathCommandsNV                           gl3wGetPathCommandsNV
#define glGetPathCoordsNV                             gl3wGetPathCoordsNV
#define glGetPathDashArrayNV                          gl3wGetPathDashArrayNV
#define glGetPathLengthNV                             gl3wGetPathLengthNV
#define glGetPathMetricRangeNV                        gl3wGetPathMetricRangeNV
#define glGetPathMetricsNV                            gl3wGetPathMetricsNV
#define glGetPathParameterfvNV                        gl3wGetPathParameterfvNV
#define glGetPathParameterivNV                        gl3wGetPathParameterivNV
#define glGetPathSpacingNV                            gl3wGetPathSpacingNV
#define glGetPerfCounterInfoINTEL                     gl3wGetPerfCounterInfoINTEL
#define glGetPerfMonitorCounterDataAMD                gl3wGetPerfMonitorCounterDataAMD
#define glGetPerfMonitorCounterInfoAMD                gl3wGetPerfMonitorCounterInfoAMD
#define glGetPerfMonitorCounterStringAMD              gl3wGetPerfMonitorCounterStringAMD
#define glGetPerfMonitorCountersAMD                   gl3wGetPerfMonitorCountersAMD
#define glGetPerfMonitorGroupStringAMD                gl3wGetPerfMonitorGroupStringAMD
#define glGetPerfMonitorGroupsAMD                     gl3wGetPerfMonitorGroupsAMD
#define glGetPerfQueryDataINTEL                       gl3wGetPerfQueryDataINTEL
#define glGetPerfQueryIdByNameINTEL                   gl3wGetPerfQueryIdByNameINTEL
#define glGetPerfQueryInfoINTEL                       gl3wGetPerfQueryInfoINTEL
#define glGetPointerIndexedvEXT                       gl3wGetPointerIndexedvEXT
#define glGetPointeri_vEXT                            gl3wGetPointeri_vEXT
#define glGetPointerv                                 gl3wGetPointerv
#define glGetProgramBinary                            gl3wGetProgramBinary
#define glGetProgramInfoLog                           gl3wGetProgramInfoLog
#define glGetProgramInterfaceiv                       gl3wGetProgramInterfaceiv
#define glGetProgramPipelineInfoLog                   gl3wGetProgramPipelineInfoLog
#define glGetProgramPipelineiv                        gl3wGetProgramPipelineiv
#define glGetProgramResourceIndex                     gl3wGetProgramResourceIndex
#define glGetProgramResourceLocation                  gl3wGetProgramResourceLocation
#define glGetProgramResourceLocationIndex             gl3wGetProgramResourceLocationIndex
#define glGetProgramResourceName                      gl3wGetProgramResourceName
#define glGetProgramResourcefvNV                      gl3wGetProgramResourcefvNV
#define glGetProgramResourceiv                        gl3wGetProgramResourceiv
#define glGetProgramStageiv                           gl3wGetProgramStageiv
#define glGetProgramiv                                gl3wGetProgramiv
#define glGetQueryBufferObjecti64v                    gl3wGetQueryBufferObjecti64v
#define glGetQueryBufferObjectiv                      gl3wGetQueryBufferObjectiv
#define glGetQueryBufferObjectui64v                   gl3wGetQueryBufferObjectui64v
#define glGetQueryBufferObjectuiv                     gl3wGetQueryBufferObjectuiv
#define glGetQueryIndexediv                           gl3wGetQueryIndexediv
#define glGetQueryObjecti64v                          gl3wGetQueryObjecti64v
#define glGetQueryObjectiv                            gl3wGetQueryObjectiv
#define glGetQueryObjectui64v                         gl3wGetQueryObjectui64v
#define glGetQueryObjectuiv                           gl3wGetQueryObjectuiv
#define glGetQueryiv                                  gl3wGetQueryiv
#define glGetRenderbufferParameteriv                  gl3wGetRenderbufferParameteriv
#define glGetSamplerParameterIiv                      gl3wGetSamplerParameterIiv
#define glGetSamplerParameterIuiv                     gl3wGetSamplerParameterIuiv
#define glGetSamplerParameterfv                       gl3wGetSamplerParameterfv
#define glGetSamplerParameteriv                       gl3wGetSamplerParameteriv
#define glGetShaderInfoLog                            gl3wGetShaderInfoLog
#define glGetShaderPrecisionFormat                    gl3wGetShaderPrecisionFormat
#define glGetShaderSource                             gl3wGetShaderSource
#define glGetShaderiv                                 gl3wGetShaderiv
#define glGetStageIndexNV                             gl3wGetStageIndexNV
#define glGetString                                   gl3wGetString
#define glGetStringi                                  gl3wGetStringi
#define glGetSubroutineIndex                          gl3wGetSubroutineIndex
#define glGetSubroutineUniformLocation                gl3wGetSubroutineUniformLocation
#define glGetSynciv                                   gl3wGetSynciv
#define glGetTexImage                                 gl3wGetTexImage
#define glGetTexLevelParameterfv                      gl3wGetTexLevelParameterfv
#define glGetTexLevelParameteriv                      gl3wGetTexLevelParameteriv
#define glGetTexParameterIiv                          gl3wGetTexParameterIiv
#define glGetTexParameterIuiv                         gl3wGetTexParameterIuiv
#define glGetTexParameterfv                           gl3wGetTexParameterfv
#define glGetTexParameteriv                           gl3wGetTexParameteriv
#define glGetTextureHandleARB                         gl3wGetTextureHandleARB
#define glGetTextureHandleNV                          gl3wGetTextureHandleNV
#define glGetTextureImage                             gl3wGetTextureImage
#define glGetTextureImageEXT                          gl3wGetTextureImageEXT
#define glGetTextureLevelParameterfv                  gl3wGetTextureLevelParameterfv
#define glGetTextureLevelParameterfvEXT               gl3wGetTextureLevelParameterfvEXT
#define glGetTextureLevelParameteriv                  gl3wGetTextureLevelParameteriv
#define glGetTextureLevelParameterivEXT               gl3wGetTextureLevelParameterivEXT
#define glGetTextureParameterIiv                      gl3wGetTextureParameterIiv
#define glGetTextureParameterIivEXT                   gl3wGetTextureParameterIivEXT
#define glGetTextureParameterIuiv                     gl3wGetTextureParameterIuiv
#define glGetTextureParameterIuivEXT                  gl3wGetTextureParameterIuivEXT
#define glGetTextureParameterfv                       gl3wGetTextureParameterfv
#define glGetTextureParameterfvEXT                    gl3wGetTextureParameterfvEXT
#define glGetTextureParameteriv                       gl3wGetTextureParameteriv
#define glGetTextureParameterivEXT                    gl3wGetTextureParameterivEXT
#define glGetTextureSamplerHandleARB                  gl3wGetTextureSamplerHandleARB
#define glGetTextureSamplerHandleNV                   gl3wGetTextureSamplerHandleNV
#define glGetTextureSubImage                          gl3wGetTextureSubImage
#define glGetTransformFeedbackVarying                 gl3wGetTransformFeedbackVarying
#define glGetTransformFeedbacki64_v                   gl3wGetTransformFeedbacki64_v
#define glGetTransformFeedbacki_v                     gl3wGetTransformFeedbacki_v
#define glGetTransformFeedbackiv                      gl3wGetTransformFeedbackiv
#define glGetUniformBlockIndex                        gl3wGetUniformBlockIndex
#define glGetUniformIndices                           gl3wGetUniformIndices
#define glGetUniformLocation                          gl3wGetUniformLocation
#define glGetUniformSubroutineuiv                     gl3wGetUniformSubroutineuiv
#define glGetUniformdv                                gl3wGetUniformdv
#define glGetUniformfv                                gl3wGetUniformfv
#define glGetUniformi64vARB                           gl3wGetUniformi64vARB
#define glGetUniformi64vNV                            gl3wGetUniformi64vNV
#define glGetUniformiv                                gl3wGetUniformiv
#define glGetUniformui64vARB                          gl3wGetUniformui64vARB
#define glGetUniformui64vNV                           gl3wGetUniformui64vNV
#define glGetUniformuiv                               gl3wGetUniformuiv
#define glGetVertexArrayIndexed64iv                   gl3wGetVertexArrayIndexed64iv
#define glGetVertexArrayIndexediv                     gl3wGetVertexArrayIndexediv
#define glGetVertexArrayIntegeri_vEXT                 gl3wGetVertexArrayIntegeri_vEXT
#define glGetVertexArrayIntegervEXT                   gl3wGetVertexArrayIntegervEXT
#define glGetVertexArrayPointeri_vEXT                 gl3wGetVertexArrayPointeri_vEXT
#define glGetVertexArrayPointervEXT                   gl3wGetVertexArrayPointervEXT
#define glGetVertexArrayiv                            gl3wGetVertexArrayiv
#define glGetVertexAttribIiv                          gl3wGetVertexAttribIiv
#define glGetVertexAttribIuiv                         gl3wGetVertexAttribIuiv
#define glGetVertexAttribLdv                          gl3wGetVertexAttribLdv
#define glGetVertexAttribLi64vNV                      gl3wGetVertexAttribLi64vNV
#define glGetVertexAttribLui64vARB                    gl3wGetVertexAttribLui64vARB
#define glGetVertexAttribLui64vNV                     gl3wGetVertexAttribLui64vNV
#define glGetVertexAttribPointerv                     gl3wGetVertexAttribPointerv
#define glGetVertexAttribdv                           gl3wGetVertexAttribdv
#define glGetVertexAttribfv                           gl3wGetVertexAttribfv
#define glGetVertexAttribiv                           gl3wGetVertexAttribiv
#define glGetVkProcAddrNV                             gl3wGetVkProcAddrNV
#define glGetnCompressedTexImage                      gl3wGetnCompressedTexImage
#define glGetnCompressedTexImageARB                   gl3wGetnCompressedTexImageARB
#define glGetnTexImage                                gl3wGetnTexImage
#define glGetnTexImageARB                             gl3wGetnTexImageARB
#define glGetnUniformdv                               gl3wGetnUniformdv
#define glGetnUniformdvARB                            gl3wGetnUniformdvARB
#define glGetnUniformfv                               gl3wGetnUniformfv
#define glGetnUniformfvARB                            gl3wGetnUniformfvARB
#define glGetnUniformi64vARB                          gl3wGetnUniformi64vARB
#define glGetnUniformiv                               gl3wGetnUniformiv
#define glGetnUniformivARB                            gl3wGetnUniformivARB
#define glGetnUniformui64vARB                         gl3wGetnUniformui64vARB
#define glGetnUniformuiv                              gl3wGetnUniformuiv
#define glGetnUniformuivARB                           gl3wGetnUniformuivARB
#define glHint                                        gl3wHint
#define glIndexFormatNV                               gl3wIndexFormatNV
#define glInsertEventMarkerEXT                        gl3wInsertEventMarkerEXT
#define glInterpolatePathsNV                          gl3wInterpolatePathsNV
#define glInvalidateBufferData                        gl3wInvalidateBufferData
#define glInvalidateBufferSubData                     gl3wInvalidateBufferSubData
#define glInvalidateFramebuffer                       gl3wInvalidateFramebuffer
#define glInvalidateNamedFramebufferData              gl3wInvalidateNamedFramebufferData
#define glInvalidateNamedFramebufferSubData           gl3wInvalidateNamedFramebufferSubData
#define glInvalidateSubFramebuffer                    gl3wInvalidateSubFramebuffer
#define glInvalidateTexImage                          gl3wInvalidateTexImage
#define glInvalidateTexSubImage                       gl3wInvalidateTexSubImage
#define glIsBuffer                                    gl3wIsBuffer
#define glIsBufferResidentNV                          gl3wIsBufferResidentNV
#define glIsCommandListNV                             gl3wIsCommandListNV
#define glIsEnabled                                   gl3wIsEnabled
#define glIsEnabledIndexedEXT                         gl3wIsEnabledIndexedEXT
#define glIsEnabledi                                  gl3wIsEnabledi
#define glIsFramebuffer                               gl3wIsFramebuffer
#define glIsImageHandleResidentARB                    gl3wIsImageHandleResidentARB
#define glIsImageHandleResidentNV                     gl3wIsImageHandleResidentNV
#define glIsNamedBufferResidentNV                     gl3wIsNamedBufferResidentNV
#define glIsNamedStringARB                            gl3wIsNamedStringARB
#define glIsPathNV                                    gl3wIsPathNV
#define glIsPointInFillPathNV                         gl3wIsPointInFillPathNV
#define glIsPointInStrokePathNV                       gl3wIsPointInStrokePathNV
#define glIsProgram                                   gl3wIsProgram
#define glIsProgramPipeline                           gl3wIsProgramPipeline
#define glIsQuery                                     gl3wIsQuery
#define glIsRenderbuffer                              gl3wIsRenderbuffer
#define glIsSampler                                   gl3wIsSampler
#define glIsShader                                    gl3wIsShader
#define glIsStateNV                                   gl3wIsStateNV
#define glIsSync                                      gl3wIsSync
#define glIsTexture                                   gl3wIsTexture
#define glIsTextureHandleResidentARB                  gl3wIsTextureHandleResidentARB
#define glIsTextureHandleResidentNV                   gl3wIsTextureHandleResidentNV
#define glIsTransformFeedback                         gl3wIsTransformFeedback
#define glIsVertexArray                               gl3wIsVertexArray
#define glLabelObjectEXT                              gl3wLabelObjectEXT
#define glLineWidth                                   gl3wLineWidth
#define glLinkProgram                                 gl3wLinkProgram
#define glListDrawCommandsStatesClientNV              gl3wListDrawCommandsStatesClientNV
#define glLogicOp                                     gl3wLogicOp
#define glMakeBufferNonResidentNV                     gl3wMakeBufferNonResidentNV
#define glMakeBufferResidentNV                        gl3wMakeBufferResidentNV
#define glMakeImageHandleNonResidentARB               gl3wMakeImageHandleNonResidentARB
#define glMakeImageHandleNonResidentNV                gl3wMakeImageHandleNonResidentNV
#define glMakeImageHandleResidentARB                  gl3wMakeImageHandleResidentARB
#define glMakeImageHandleResidentNV                   gl3wMakeImageHandleResidentNV
#define glMakeNamedBufferNonResidentNV                gl3wMakeNamedBufferNonResidentNV
#define glMakeNamedBufferResidentNV                   gl3wMakeNamedBufferResidentNV
#define glMakeTextureHandleNonResidentARB             gl3wMakeTextureHandleNonResidentARB
#define glMakeTextureHandleNonResidentNV              gl3wMakeTextureHandleNonResidentNV
#define glMakeTextureHandleResidentARB                gl3wMakeTextureHandleResidentARB
#define glMakeTextureHandleResidentNV                 gl3wMakeTextureHandleResidentNV
#define glMapBuffer                                   gl3wMapBuffer
#define glMapBufferRange                              gl3wMapBufferRange
#define glMapNamedBuffer                              gl3wMapNamedBuffer
#define glMapNamedBufferEXT                           gl3wMapNamedBufferEXT
#define glMapNamedBufferRange                         gl3wMapNamedBufferRange
#define glMapNamedBufferRangeEXT                      gl3wMapNamedBufferRangeEXT
#define glMatrixFrustumEXT                            gl3wMatrixFrustumEXT
#define glMatrixLoad3x2fNV                            gl3wMatrixLoad3x2fNV
#define glMatrixLoad3x3fNV                            gl3wMatrixLoad3x3fNV
#define glMatrixLoadIdentityEXT                       gl3wMatrixLoadIdentityEXT
#define glMatrixLoadTranspose3x3fNV                   gl3wMatrixLoadTranspose3x3fNV
#define glMatrixLoadTransposedEXT                     gl3wMatrixLoadTransposedEXT
#define glMatrixLoadTransposefEXT                     gl3wMatrixLoadTransposefEXT
#define glMatrixLoaddEXT                              gl3wMatrixLoaddEXT
#define glMatrixLoadfEXT                              gl3wMatrixLoadfEXT
#define glMatrixMult3x2fNV                            gl3wMatrixMult3x2fNV
#define glMatrixMult3x3fNV                            gl3wMatrixMult3x3fNV
#define glMatrixMultTranspose3x3fNV                   gl3wMatrixMultTranspose3x3fNV
#define glMatrixMultTransposedEXT                     gl3wMatrixMultTransposedEXT
#define glMatrixMultTransposefEXT                     gl3wMatrixMultTransposefEXT
#define glMatrixMultdEXT                              gl3wMatrixMultdEXT
#define glMatrixMultfEXT                              gl3wMatrixMultfEXT
#define glMatrixOrthoEXT                              gl3wMatrixOrthoEXT
#define glMatrixPopEXT                                gl3wMatrixPopEXT
#define glMatrixPushEXT                               gl3wMatrixPushEXT
#define glMatrixRotatedEXT                            gl3wMatrixRotatedEXT
#define glMatrixRotatefEXT                            gl3wMatrixRotatefEXT
#define glMatrixScaledEXT                             gl3wMatrixScaledEXT
#define glMatrixScalefEXT                             gl3wMatrixScalefEXT
#define glMatrixTranslatedEXT                         gl3wMatrixTranslatedEXT
#define glMatrixTranslatefEXT                         gl3wMatrixTranslatefEXT
#define glMaxShaderCompilerThreadsARB                 gl3wMaxShaderCompilerThreadsARB
#define glMemoryBarrier                               gl3wMemoryBarrier
#define glMemoryBarrierByRegion                       gl3wMemoryBarrierByRegion
#define glMinSampleShading                            gl3wMinSampleShading
#define glMinSampleShadingARB                         gl3wMinSampleShadingARB
#define glMultiDrawArrays                             gl3wMultiDrawArrays
#define glMultiDrawArraysIndirect                     gl3wMultiDrawArraysIndirect
#define glMultiDrawArraysIndirectBindlessCountNV      gl3wMultiDrawArraysIndirectBindlessCountNV
#define glMultiDrawArraysIndirectBindlessNV           gl3wMultiDrawArraysIndirectBindlessNV
#define glMultiDrawArraysIndirectCountARB             gl3wMultiDrawArraysIndirectCountARB
#define glMultiDrawElements                           gl3wMultiDrawElements
#define glMultiDrawElementsBaseVertex                 gl3wMultiDrawElementsBaseVertex
#define glMultiDrawElementsIndirect                   gl3wMultiDrawElementsIndirect
#define glMultiDrawElementsIndirectBindlessCountNV    gl3wMultiDrawElementsIndirectBindlessCountNV
#define glMultiDrawElementsIndirectBindlessNV         gl3wMultiDrawElementsIndirectBindlessNV
#define glMultiDrawElementsIndirectCountARB           gl3wMultiDrawElementsIndirectCountARB
#define glMultiTexBufferEXT                           gl3wMultiTexBufferEXT
#define glMultiTexCoordPointerEXT                     gl3wMultiTexCoordPointerEXT
#define glMultiTexEnvfEXT                             gl3wMultiTexEnvfEXT
#define glMultiTexEnvfvEXT                            gl3wMultiTexEnvfvEXT
#define glMultiTexEnviEXT                             gl3wMultiTexEnviEXT
#define glMultiTexEnvivEXT                            gl3wMultiTexEnvivEXT
#define glMultiTexGendEXT                             gl3wMultiTexGendEXT
#define glMultiTexGendvEXT                            gl3wMultiTexGendvEXT
#define glMultiTexGenfEXT                             gl3wMultiTexGenfEXT
#define glMultiTexGenfvEXT                            gl3wMultiTexGenfvEXT
#define glMultiTexGeniEXT                             gl3wMultiTexGeniEXT
#define glMultiTexGenivEXT                            gl3wMultiTexGenivEXT
#define glMultiTexImage1DEXT                          gl3wMultiTexImage1DEXT
#define glMultiTexImage2DEXT                          gl3wMultiTexImage2DEXT
#define glMultiTexImage3DEXT                          gl3wMultiTexImage3DEXT
#define glMultiTexParameterIivEXT                     gl3wMultiTexParameterIivEXT
#define glMultiTexParameterIuivEXT                    gl3wMultiTexParameterIuivEXT
#define glMultiTexParameterfEXT                       gl3wMultiTexParameterfEXT
#define glMultiTexParameterfvEXT                      gl3wMultiTexParameterfvEXT
#define glMultiTexParameteriEXT                       gl3wMultiTexParameteriEXT
#define glMultiTexParameterivEXT                      gl3wMultiTexParameterivEXT
#define glMultiTexRenderbufferEXT                     gl3wMultiTexRenderbufferEXT
#define glMultiTexSubImage1DEXT                       gl3wMultiTexSubImage1DEXT
#define glMultiTexSubImage2DEXT                       gl3wMultiTexSubImage2DEXT
#define glMultiTexSubImage3DEXT                       gl3wMultiTexSubImage3DEXT
#define glNamedBufferData                             gl3wNamedBufferData
#define glNamedBufferDataEXT                          gl3wNamedBufferDataEXT
#define glNamedBufferPageCommitmentARB                gl3wNamedBufferPageCommitmentARB
#define glNamedBufferPageCommitmentEXT                gl3wNamedBufferPageCommitmentEXT
#define glNamedBufferStorage                          gl3wNamedBufferStorage
#define glNamedBufferStorageEXT                       gl3wNamedBufferStorageEXT
#define glNamedBufferSubData                          gl3wNamedBufferSubData
#define glNamedBufferSubDataEXT                       gl3wNamedBufferSubDataEXT
#define glNamedCopyBufferSubDataEXT                   gl3wNamedCopyBufferSubDataEXT
#define glNamedFramebufferDrawBuffer                  gl3wNamedFramebufferDrawBuffer
#define glNamedFramebufferDrawBuffers                 gl3wNamedFramebufferDrawBuffers
#define glNamedFramebufferParameteri                  gl3wNamedFramebufferParameteri
#define glNamedFramebufferParameteriEXT               gl3wNamedFramebufferParameteriEXT
#define glNamedFramebufferReadBuffer                  gl3wNamedFramebufferReadBuffer
#define glNamedFramebufferRenderbuffer                gl3wNamedFramebufferRenderbuffer
#define glNamedFramebufferRenderbufferEXT             gl3wNamedFramebufferRenderbufferEXT
#define glNamedFramebufferSampleLocationsfvARB        gl3wNamedFramebufferSampleLocationsfvARB
#define glNamedFramebufferSampleLocationsfvNV         gl3wNamedFramebufferSampleLocationsfvNV
#define glNamedFramebufferTexture                     gl3wNamedFramebufferTexture
#define glNamedFramebufferTexture1DEXT                gl3wNamedFramebufferTexture1DEXT
#define glNamedFramebufferTexture2DEXT                gl3wNamedFramebufferTexture2DEXT
#define glNamedFramebufferTexture3DEXT                gl3wNamedFramebufferTexture3DEXT
#define glNamedFramebufferTextureEXT                  gl3wNamedFramebufferTextureEXT
#define glNamedFramebufferTextureFaceEXT              gl3wNamedFramebufferTextureFaceEXT
#define glNamedFramebufferTextureLayer                gl3wNamedFramebufferTextureLayer
#define glNamedFramebufferTextureLayerEXT             gl3wNamedFramebufferTextureLayerEXT
#define glNamedProgramLocalParameter4dEXT             gl3wNamedProgramLocalParameter4dEXT
#define glNamedProgramLocalParameter4dvEXT            gl3wNamedProgramLocalParameter4dvEXT
#define glNamedProgramLocalParameter4fEXT             gl3wNamedProgramLocalParameter4fEXT
#define glNamedProgramLocalParameter4fvEXT            gl3wNamedProgramLocalParameter4fvEXT
#define glNamedProgramLocalParameterI4iEXT            gl3wNamedProgramLocalParameterI4iEXT
#define glNamedProgramLocalParameterI4ivEXT           gl3wNamedProgramLocalParameterI4ivEXT
#define glNamedProgramLocalParameterI4uiEXT           gl3wNamedProgramLocalParameterI4uiEXT
#define glNamedProgramLocalParameterI4uivEXT          gl3wNamedProgramLocalParameterI4uivEXT
#define glNamedProgramLocalParameters4fvEXT           gl3wNamedProgramLocalParameters4fvEXT
#define glNamedProgramLocalParametersI4ivEXT          gl3wNamedProgramLocalParametersI4ivEXT
#define glNamedProgramLocalParametersI4uivEXT         gl3wNamedProgramLocalParametersI4uivEXT
#define glNamedProgramStringEXT                       gl3wNamedProgramStringEXT
#define glNamedRenderbufferStorage                    gl3wNamedRenderbufferStorage
#define glNamedRenderbufferStorageEXT                 gl3wNamedRenderbufferStorageEXT
#define glNamedRenderbufferStorageMultisample         gl3wNamedRenderbufferStorageMultisample
#define glNamedRenderbufferStorageMultisampleCoverageEXT gl3wNamedRenderbufferStorageMultisampleCoverageEXT
#define glNamedRenderbufferStorageMultisampleEXT      gl3wNamedRenderbufferStorageMultisampleEXT
#define glNamedStringARB                              gl3wNamedStringARB
#define glNormalFormatNV                              gl3wNormalFormatNV
#define glObjectLabel                                 gl3wObjectLabel
#define glObjectPtrLabel                              gl3wObjectPtrLabel
#define glPatchParameterfv                            gl3wPatchParameterfv
#define glPatchParameteri                             gl3wPatchParameteri
#define glPathCommandsNV                              gl3wPathCommandsNV
#define glPathCoordsNV                                gl3wPathCoordsNV
#define glPathCoverDepthFuncNV                        gl3wPathCoverDepthFuncNV
#define glPathDashArrayNV                             gl3wPathDashArrayNV
#define glPathGlyphIndexArrayNV                       gl3wPathGlyphIndexArrayNV
#define glPathGlyphIndexRangeNV                       gl3wPathGlyphIndexRangeNV
#define glPathGlyphRangeNV                            gl3wPathGlyphRangeNV
#define glPathGlyphsNV                                gl3wPathGlyphsNV
#define glPathMemoryGlyphIndexArrayNV                 gl3wPathMemoryGlyphIndexArrayNV
#define glPathParameterfNV                            gl3wPathParameterfNV
#define glPathParameterfvNV                           gl3wPathParameterfvNV
#define glPathParameteriNV                            gl3wPathParameteriNV
#define glPathParameterivNV                           gl3wPathParameterivNV
#define glPathStencilDepthOffsetNV                    gl3wPathStencilDepthOffsetNV
#define glPathStencilFuncNV                           gl3wPathStencilFuncNV
#define glPathStringNV                                gl3wPathStringNV
#define glPathSubCommandsNV                           gl3wPathSubCommandsNV
#define glPathSubCoordsNV                             gl3wPathSubCoordsNV
#define glPauseTransformFeedback                      gl3wPauseTransformFeedback
#define glPixelStoref                                 gl3wPixelStoref
#define glPixelStorei                                 gl3wPixelStorei
#define glPointAlongPathNV                            gl3wPointAlongPathNV
#define glPointParameterf                             gl3wPointParameterf
#define glPointParameterfv                            gl3wPointParameterfv
#define glPointParameteri                             gl3wPointParameteri
#define glPointParameteriv                            gl3wPointParameteriv
#define glPointSize                                   gl3wPointSize
#define glPolygonMode                                 gl3wPolygonMode
#define glPolygonOffset                               gl3wPolygonOffset
#define glPolygonOffsetClampEXT                       gl3wPolygonOffsetClampEXT
#define glPopDebugGroup                               gl3wPopDebugGroup
#define glPopGroupMarkerEXT                           gl3wPopGroupMarkerEXT
#define glPrimitiveBoundingBoxARB                     gl3wPrimitiveBoundingBoxARB
#define glPrimitiveRestartIndex                       gl3wPrimitiveRestartIndex
#define glProgramBinary                               gl3wProgramBinary
#define glProgramParameteri                           gl3wProgramParameteri
#define glProgramParameteriARB                        gl3wProgramParameteriARB
#define glProgramPathFragmentInputGenNV               gl3wProgramPathFragmentInputGenNV
#define glProgramUniform1d                            gl3wProgramUniform1d
#define glProgramUniform1dEXT                         gl3wProgramUniform1dEXT
#define glProgramUniform1dv                           gl3wProgramUniform1dv
#define glProgramUniform1dvEXT                        gl3wProgramUniform1dvEXT
#define glProgramUniform1f                            gl3wProgramUniform1f
#define glProgramUniform1fEXT                         gl3wProgramUniform1fEXT
#define glProgramUniform1fv                           gl3wProgramUniform1fv
#define glProgramUniform1fvEXT                        gl3wProgramUniform1fvEXT
#define glProgramUniform1i                            gl3wProgramUniform1i
#define glProgramUniform1i64ARB                       gl3wProgramUniform1i64ARB
#define glProgramUniform1i64NV                        gl3wProgramUniform1i64NV
#define glProgramUniform1i64vARB                      gl3wProgramUniform1i64vARB
#define glProgramUniform1i64vNV                       gl3wProgramUniform1i64vNV
#define glProgramUniform1iEXT                         gl3wProgramUniform1iEXT
#define glProgramUniform1iv                           gl3wProgramUniform1iv
#define glProgramUniform1ivEXT                        gl3wProgramUniform1ivEXT
#define glProgramUniform1ui                           gl3wProgramUniform1ui
#define glProgramUniform1ui64ARB                      gl3wProgramUniform1ui64ARB
#define glProgramUniform1ui64NV                       gl3wProgramUniform1ui64NV
#define glProgramUniform1ui64vARB                     gl3wProgramUniform1ui64vARB
#define glProgramUniform1ui64vNV                      gl3wProgramUniform1ui64vNV
#define glProgramUniform1uiEXT                        gl3wProgramUniform1uiEXT
#define glProgramUniform1uiv                          gl3wProgramUniform1uiv
#define glProgramUniform1uivEXT                       gl3wProgramUniform1uivEXT
#define glProgramUniform2d                            gl3wProgramUniform2d
#define glProgramUniform2dEXT                         gl3wProgramUniform2dEXT
#define glProgramUniform2dv                           gl3wProgramUniform2dv
#define glProgramUniform2dvEXT                        gl3wProgramUniform2dvEXT
#define glProgramUniform2f                            gl3wProgramUniform2f
#define glProgramUniform2fEXT                         gl3wProgramUniform2fEXT
#define glProgramUniform2fv                           gl3wProgramUniform2fv
#define glProgramUniform2fvEXT                        gl3wProgramUniform2fvEXT
#define glProgramUniform2i                            gl3wProgramUniform2i
#define glProgramUniform2i64ARB                       gl3wProgramUniform2i64ARB
#define glProgramUniform2i64NV                        gl3wProgramUniform2i64NV
#define glProgramUniform2i64vARB                      gl3wProgramUniform2i64vARB
#define glProgramUniform2i64vNV                       gl3wProgramUniform2i64vNV
#define glProgramUniform2iEXT                         gl3wProgramUniform2iEXT
#define glProgramUniform2iv                           gl3wProgramUniform2iv
#define glProgramUniform2ivEXT                        gl3wProgramUniform2ivEXT
#define glProgramUniform2ui                           gl3wProgramUniform2ui
#define glProgramUniform2ui64ARB                      gl3wProgramUniform2ui64ARB
#define glProgramUniform2ui64NV                       gl3wProgramUniform2ui64NV
#define glProgramUniform2ui64vARB                     gl3wProgramUniform2ui64vARB
#define glProgramUniform2ui64vNV                      gl3wProgramUniform2ui64vNV
#define glProgramUniform2uiEXT                        gl3wProgramUniform2uiEXT
#define glProgramUniform2uiv                          gl3wProgramUniform2uiv
#define glProgramUniform2uivEXT                       gl3wProgramUniform2uivEXT
#define glProgramUniform3d                            gl3wProgramUniform3d
#define glProgramUniform3dEXT                         gl3wProgramUniform3dEXT
#define glProgramUniform3dv                           gl3wProgramUniform3dv
#define glProgramUniform3dvEXT                        gl3wProgramUniform3dvEXT
#define glProgramUniform3f                            gl3wProgramUniform3f
#define glProgramUniform3fEXT                         gl3wProgramUniform3fEXT
#define glProgramUniform3fv                           gl3wProgramUniform3fv
#define glProgramUniform3fvEXT                        gl3wProgramUniform3fvEXT
#define glProgramUniform3i                            gl3wProgramUniform3i
#define glProgramUniform3i64ARB                       gl3wProgramUniform3i64ARB
#define glProgramUniform3i64NV                        gl3wProgramUniform3i64NV
#define glProgramUniform3i64vARB                      gl3wProgramUniform3i64vARB
#define glProgramUniform3i64vNV                       gl3wProgramUniform3i64vNV
#define glProgramUniform3iEXT                         gl3wProgramUniform3iEXT
#define glProgramUniform3iv                           gl3wProgramUniform3iv
#define glProgramUniform3ivEXT                        gl3wProgramUniform3ivEXT
#define glProgramUniform3ui                           gl3wProgramUniform3ui
#define glProgramUniform3ui64ARB                      gl3wProgramUniform3ui64ARB
#define glProgramUniform3ui64NV                       gl3wProgramUniform3ui64NV
#define glProgramUniform3ui64vARB                     gl3wProgramUniform3ui64vARB
#define glProgramUniform3ui64vNV                      gl3wProgramUniform3ui64vNV
#define glProgramUniform3uiEXT                        gl3wProgramUniform3uiEXT
#define glProgramUniform3uiv                          gl3wProgramUniform3uiv
#define glProgramUniform3uivEXT                       gl3wProgramUniform3uivEXT
#define glProgramUniform4d                            gl3wProgramUniform4d
#define glProgramUniform4dEXT                         gl3wProgramUniform4dEXT
#define glProgramUniform4dv                           gl3wProgramUniform4dv
#define glProgramUniform4dvEXT                        gl3wProgramUniform4dvEXT
#define glProgramUniform4f                            gl3wProgramUniform4f
#define glProgramUniform4fEXT                         gl3wProgramUniform4fEXT
#define glProgramUniform4fv                           gl3wProgramUniform4fv
#define glProgramUniform4fvEXT                        gl3wProgramUniform4fvEXT
#define glProgramUniform4i                            gl3wProgramUniform4i
#define glProgramUniform4i64ARB                       gl3wProgramUniform4i64ARB
#define glProgramUniform4i64NV                        gl3wProgramUniform4i64NV
#define glProgramUniform4i64vARB                      gl3wProgramUniform4i64vARB
#define glProgramUniform4i64vNV                       gl3wProgramUniform4i64vNV
#define glProgramUniform4iEXT                         gl3wProgramUniform4iEXT
#define glProgramUniform4iv                           gl3wProgramUniform4iv
#define glProgramUniform4ivEXT                        gl3wProgramUniform4ivEXT
#define glProgramUniform4ui                           gl3wProgramUniform4ui
#define glProgramUniform4ui64ARB                      gl3wProgramUniform4ui64ARB
#define glProgramUniform4ui64NV                       gl3wProgramUniform4ui64NV
#define glProgramUniform4ui64vARB                     gl3wProgramUniform4ui64vARB
#define glProgramUniform4ui64vNV                      gl3wProgramUniform4ui64vNV
#define glProgramUniform4uiEXT                        gl3wProgramUniform4uiEXT
#define glProgramUniform4uiv                          gl3wProgramUniform4uiv
#define glProgramUniform4uivEXT                       gl3wProgramUniform4uivEXT
#define glProgramUniformHandleui64ARB                 gl3wProgramUniformHandleui64ARB
#define glProgramUniformHandleui64NV                  gl3wProgramUniformHandleui64NV
#define glProgramUniformHandleui64vARB                gl3wProgramUniformHandleui64vARB
#define glProgramUniformHandleui64vNV                 gl3wProgramUniformHandleui64vNV
#define glProgramUniformMatrix2dv                     gl3wProgramUniformMatrix2dv
#define glProgramUniformMatrix2dvEXT                  gl3wProgramUniformMatrix2dvEXT
#define glProgramUniformMatrix2fv                     gl3wProgramUniformMatrix2fv
#define glProgramUniformMatrix2fvEXT                  gl3wProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix2x3dv                   gl3wProgramUniformMatrix2x3dv
#define glProgramUniformMatrix2x3dvEXT                gl3wProgramUniformMatrix2x3dvEXT
#define glProgramUniformMatrix2x3fv                   gl3wProgramUniformMatrix2x3fv
#define glProgramUniformMatrix2x3fvEXT                gl3wProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix2x4dv                   gl3wProgramUniformMatrix2x4dv
#define glProgramUniformMatrix2x4dvEXT                gl3wProgramUniformMatrix2x4dvEXT
#define glProgramUniformMatrix2x4fv                   gl3wProgramUniformMatrix2x4fv
#define glProgramUniformMatrix2x4fvEXT                gl3wProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix3dv                     gl3wProgramUniformMatrix3dv
#define glProgramUniformMatrix3dvEXT                  gl3wProgramUniformMatrix3dvEXT
#define glProgramUniformMatrix3fv                     gl3wProgramUniformMatrix3fv
#define glProgramUniformMatrix3fvEXT                  gl3wProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix3x2dv                   gl3wProgramUniformMatrix3x2dv
#define glProgramUniformMatrix3x2dvEXT                gl3wProgramUniformMatrix3x2dvEXT
#define glProgramUniformMatrix3x2fv                   gl3wProgramUniformMatrix3x2fv
#define glProgramUniformMatrix3x2fvEXT                gl3wProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix3x4dv                   gl3wProgramUniformMatrix3x4dv
#define glProgramUniformMatrix3x4dvEXT                gl3wProgramUniformMatrix3x4dvEXT
#define glProgramUniformMatrix3x4fv                   gl3wProgramUniformMatrix3x4fv
#define glProgramUniformMatrix3x4fvEXT                gl3wProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4dv                     gl3wProgramUniformMatrix4dv
#define glProgramUniformMatrix4dvEXT                  gl3wProgramUniformMatrix4dvEXT
#define glProgramUniformMatrix4fv                     gl3wProgramUniformMatrix4fv
#define glProgramUniformMatrix4fvEXT                  gl3wProgramUniformMatrix4fvEXT
#define glProgramUniformMatrix4x2dv                   gl3wProgramUniformMatrix4x2dv
#define glProgramUniformMatrix4x2dvEXT                gl3wProgramUniformMatrix4x2dvEXT
#define glProgramUniformMatrix4x2fv                   gl3wProgramUniformMatrix4x2fv
#define glProgramUniformMatrix4x2fvEXT                gl3wProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix4x3dv                   gl3wProgramUniformMatrix4x3dv
#define glProgramUniformMatrix4x3dvEXT                gl3wProgramUniformMatrix4x3dvEXT
#define glProgramUniformMatrix4x3fv                   gl3wProgramUniformMatrix4x3fv
#define glProgramUniformMatrix4x3fvEXT                gl3wProgramUniformMatrix4x3fvEXT
#define glProgramUniformui64NV                        gl3wProgramUniformui64NV
#define glProgramUniformui64vNV                       gl3wProgramUniformui64vNV
#define glProvokingVertex                             gl3wProvokingVertex
#define glPushClientAttribDefaultEXT                  gl3wPushClientAttribDefaultEXT
#define glPushDebugGroup                              gl3wPushDebugGroup
#define glPushGroupMarkerEXT                          gl3wPushGroupMarkerEXT
#define glQueryCounter                                gl3wQueryCounter
#define glRasterSamplesEXT                            gl3wRasterSamplesEXT
#define glReadBuffer                                  gl3wReadBuffer
#define glReadPixels                                  gl3wReadPixels
#define glReadnPixels                                 gl3wReadnPixels
#define glReadnPixelsARB                              gl3wReadnPixelsARB
#define glReleaseShaderCompiler                       gl3wReleaseShaderCompiler
#define glRenderbufferStorage                         gl3wRenderbufferStorage
#define glRenderbufferStorageMultisample              gl3wRenderbufferStorageMultisample
#define glRenderbufferStorageMultisampleCoverageNV    gl3wRenderbufferStorageMultisampleCoverageNV
#define glResolveDepthValuesNV                        gl3wResolveDepthValuesNV
#define glResumeTransformFeedback                     gl3wResumeTransformFeedback
#define glSampleCoverage                              gl3wSampleCoverage
#define glSampleMaski                                 gl3wSampleMaski
#define glSamplerParameterIiv                         gl3wSamplerParameterIiv
#define glSamplerParameterIuiv                        gl3wSamplerParameterIuiv
#define glSamplerParameterf                           gl3wSamplerParameterf
#define glSamplerParameterfv                          gl3wSamplerParameterfv
#define glSamplerParameteri                           gl3wSamplerParameteri
#define glSamplerParameteriv                          gl3wSamplerParameteriv
#define glScissor                                     gl3wScissor
#define glScissorArrayv                               gl3wScissorArrayv
#define glScissorIndexed                              gl3wScissorIndexed
#define glScissorIndexedv                             gl3wScissorIndexedv
#define glSecondaryColorFormatNV                      gl3wSecondaryColorFormatNV
#define glSelectPerfMonitorCountersAMD                gl3wSelectPerfMonitorCountersAMD
#define glShaderBinary                                gl3wShaderBinary
#define glShaderSource                                gl3wShaderSource
#define glShaderStorageBlockBinding                   gl3wShaderStorageBlockBinding
#define glSignalVkFenceNV                             gl3wSignalVkFenceNV
#define glSignalVkSemaphoreNV                         gl3wSignalVkSemaphoreNV
#define glSpecializeShaderARB                         gl3wSpecializeShaderARB
#define glStateCaptureNV                              gl3wStateCaptureNV
#define glStencilFillPathInstancedNV                  gl3wStencilFillPathInstancedNV
#define glStencilFillPathNV                           gl3wStencilFillPathNV
#define glStencilFunc                                 gl3wStencilFunc
#define glStencilFuncSeparate                         gl3wStencilFuncSeparate
#define glStencilMask                                 gl3wStencilMask
#define glStencilMaskSeparate                         gl3wStencilMaskSeparate
#define glStencilOp                                   gl3wStencilOp
#define glStencilOpSeparate                           gl3wStencilOpSeparate
#define glStencilStrokePathInstancedNV                gl3wStencilStrokePathInstancedNV
#define glStencilStrokePathNV                         gl3wStencilStrokePathNV
#define glStencilThenCoverFillPathInstancedNV         gl3wStencilThenCoverFillPathInstancedNV
#define glStencilThenCoverFillPathNV                  gl3wStencilThenCoverFillPathNV
#define glStencilThenCoverStrokePathInstancedNV       gl3wStencilThenCoverStrokePathInstancedNV
#define glStencilThenCoverStrokePathNV                gl3wStencilThenCoverStrokePathNV
#define glSubpixelPrecisionBiasNV                     gl3wSubpixelPrecisionBiasNV
#define glTexBuffer                                   gl3wTexBuffer
#define glTexBufferARB                                gl3wTexBufferARB
#define glTexBufferRange                              gl3wTexBufferRange
#define glTexCoordFormatNV                            gl3wTexCoordFormatNV
#define glTexImage1D                                  gl3wTexImage1D
#define glTexImage2D                                  gl3wTexImage2D
#define glTexImage2DMultisample                       gl3wTexImage2DMultisample
#define glTexImage3D                                  gl3wTexImage3D
#define glTexImage3DMultisample                       gl3wTexImage3DMultisample
#define glTexPageCommitmentARB                        gl3wTexPageCommitmentARB
#define glTexParameterIiv                             gl3wTexParameterIiv
#define glTexParameterIuiv                            gl3wTexParameterIuiv
#define glTexParameterf                               gl3wTexParameterf
#define glTexParameterfv                              gl3wTexParameterfv
#define glTexParameteri                               gl3wTexParameteri
#define glTexParameteriv                              gl3wTexParameteriv
#define glTexStorage1D                                gl3wTexStorage1D
#define glTexStorage2D                                gl3wTexStorage2D
#define glTexStorage2DMultisample                     gl3wTexStorage2DMultisample
#define glTexStorage3D                                gl3wTexStorage3D
#define glTexStorage3DMultisample                     gl3wTexStorage3DMultisample
#define glTexSubImage1D                               gl3wTexSubImage1D
#define glTexSubImage2D                               gl3wTexSubImage2D
#define glTexSubImage3D                               gl3wTexSubImage3D
#define glTextureBarrier                              gl3wTextureBarrier
#define glTextureBarrierNV                            gl3wTextureBarrierNV
#define glTextureBuffer                               gl3wTextureBuffer
#define glTextureBufferEXT                            gl3wTextureBufferEXT
#define glTextureBufferRange                          gl3wTextureBufferRange
#define glTextureBufferRangeEXT                       gl3wTextureBufferRangeEXT
#define glTextureImage1DEXT                           gl3wTextureImage1DEXT
#define glTextureImage2DEXT                           gl3wTextureImage2DEXT
#define glTextureImage3DEXT                           gl3wTextureImage3DEXT
#define glTexturePageCommitmentEXT                    gl3wTexturePageCommitmentEXT
#define glTextureParameterIiv                         gl3wTextureParameterIiv
#define glTextureParameterIivEXT                      gl3wTextureParameterIivEXT
#define glTextureParameterIuiv                        gl3wTextureParameterIuiv
#define glTextureParameterIuivEXT                     gl3wTextureParameterIuivEXT
#define glTextureParameterf                           gl3wTextureParameterf
#define glTextureParameterfEXT                        gl3wTextureParameterfEXT
#define glTextureParameterfv                          gl3wTextureParameterfv
#define glTextureParameterfvEXT                       gl3wTextureParameterfvEXT
#define glTextureParameteri                           gl3wTextureParameteri
#define glTextureParameteriEXT                        gl3wTextureParameteriEXT
#define glTextureParameteriv                          gl3wTextureParameteriv
#define glTextureParameterivEXT                       gl3wTextureParameterivEXT
#define glTextureRenderbufferEXT                      gl3wTextureRenderbufferEXT
#define glTextureStorage1D                            gl3wTextureStorage1D
#define glTextureStorage1DEXT                         gl3wTextureStorage1DEXT
#define glTextureStorage2D                            gl3wTextureStorage2D
#define glTextureStorage2DEXT                         gl3wTextureStorage2DEXT
#define glTextureStorage2DMultisample                 gl3wTextureStorage2DMultisample
#define glTextureStorage2DMultisampleEXT              gl3wTextureStorage2DMultisampleEXT
#define glTextureStorage3D                            gl3wTextureStorage3D
#define glTextureStorage3DEXT                         gl3wTextureStorage3DEXT
#define glTextureStorage3DMultisample                 gl3wTextureStorage3DMultisample
#define glTextureStorage3DMultisampleEXT              gl3wTextureStorage3DMultisampleEXT
#define glTextureSubImage1D                           gl3wTextureSubImage1D
#define glTextureSubImage1DEXT                        gl3wTextureSubImage1DEXT
#define glTextureSubImage2D                           gl3wTextureSubImage2D
#define glTextureSubImage2DEXT                        gl3wTextureSubImage2DEXT
#define glTextureSubImage3D                           gl3wTextureSubImage3D
#define glTextureSubImage3DEXT                        gl3wTextureSubImage3DEXT
#define glTextureView                                 gl3wTextureView
#define glTransformFeedbackBufferBase                 gl3wTransformFeedbackBufferBase
#define glTransformFeedbackBufferRange                gl3wTransformFeedbackBufferRange
#define glTransformFeedbackVaryings                   gl3wTransformFeedbackVaryings
#define glTransformPathNV                             gl3wTransformPathNV
#define glUniform1d                                   gl3wUniform1d
#define glUniform1dv                                  gl3wUniform1dv
#define glUniform1f                                   gl3wUniform1f
#define glUniform1fv                                  gl3wUniform1fv
#define glUniform1i                                   gl3wUniform1i
#define glUniform1i64ARB                              gl3wUniform1i64ARB
#define glUniform1i64NV                               gl3wUniform1i64NV
#define glUniform1i64vARB                             gl3wUniform1i64vARB
#define glUniform1i64vNV                              gl3wUniform1i64vNV
#define glUniform1iv                                  gl3wUniform1iv
#define glUniform1ui                                  gl3wUniform1ui
#define glUniform1ui64ARB                             gl3wUniform1ui64ARB
#define glUniform1ui64NV                              gl3wUniform1ui64NV
#define glUniform1ui64vARB                            gl3wUniform1ui64vARB
#define glUniform1ui64vNV                             gl3wUniform1ui64vNV
#define glUniform1uiv                                 gl3wUniform1uiv
#define glUniform2d                                   gl3wUniform2d
#define glUniform2dv                                  gl3wUniform2dv
#define glUniform2f                                   gl3wUniform2f
#define glUniform2fv                                  gl3wUniform2fv
#define glUniform2i                                   gl3wUniform2i
#define glUniform2i64ARB                              gl3wUniform2i64ARB
#define glUniform2i64NV                               gl3wUniform2i64NV
#define glUniform2i64vARB                             gl3wUniform2i64vARB
#define glUniform2i64vNV                              gl3wUniform2i64vNV
#define glUniform2iv                                  gl3wUniform2iv
#define glUniform2ui                                  gl3wUniform2ui
#define glUniform2ui64ARB                             gl3wUniform2ui64ARB
#define glUniform2ui64NV                              gl3wUniform2ui64NV
#define glUniform2ui64vARB                            gl3wUniform2ui64vARB
#define glUniform2ui64vNV                             gl3wUniform2ui64vNV
#define glUniform2uiv                                 gl3wUniform2uiv
#define glUniform3d                                   gl3wUniform3d
#define glUniform3dv                                  gl3wUniform3dv
#define glUniform3f                                   gl3wUniform3f
#define glUniform3fv                                  gl3wUniform3fv
#define glUniform3i                                   gl3wUniform3i
#define glUniform3i64ARB                              gl3wUniform3i64ARB
#define glUniform3i64NV                               gl3wUniform3i64NV
#define glUniform3i64vARB                             gl3wUniform3i64vARB
#define glUniform3i64vNV                              gl3wUniform3i64vNV
#define glUniform3iv                                  gl3wUniform3iv
#define glUniform3ui                                  gl3wUniform3ui
#define glUniform3ui64ARB                             gl3wUniform3ui64ARB
#define glUniform3ui64NV                              gl3wUniform3ui64NV
#define glUniform3ui64vARB                            gl3wUniform3ui64vARB
#define glUniform3ui64vNV                             gl3wUniform3ui64vNV
#define glUniform3uiv                                 gl3wUniform3uiv
#define glUniform4d                                   gl3wUniform4d
#define glUniform4dv                                  gl3wUniform4dv
#define glUniform4f                                   gl3wUniform4f
#define glUniform4fv                                  gl3wUniform4fv
#define glUniform4i                                   gl3wUniform4i
#define glUniform4i64ARB                              gl3wUniform4i64ARB
#define glUniform4i64NV                               gl3wUniform4i64NV
#define glUniform4i64vARB                             gl3wUniform4i64vARB
#define glUniform4i64vNV                              gl3wUniform4i64vNV
#define glUniform4iv                                  gl3wUniform4iv
#define glUniform4ui                                  gl3wUniform4ui
#define glUniform4ui64ARB                             gl3wUniform4ui64ARB
#define glUniform4ui64NV                              gl3wUniform4ui64NV
#define glUniform4ui64vARB                            gl3wUniform4ui64vARB
#define glUniform4ui64vNV                             gl3wUniform4ui64vNV
#define glUniform4uiv                                 gl3wUniform4uiv
#define glUniformBlockBinding                         gl3wUniformBlockBinding
#define glUniformHandleui64ARB                        gl3wUniformHandleui64ARB
#define glUniformHandleui64NV                         gl3wUniformHandleui64NV
#define glUniformHandleui64vARB                       gl3wUniformHandleui64vARB
#define glUniformHandleui64vNV                        gl3wUniformHandleui64vNV
#define glUniformMatrix2dv                            gl3wUniformMatrix2dv
#define glUniformMatrix2fv                            gl3wUniformMatrix2fv
#define glUniformMatrix2x3dv                          gl3wUniformMatrix2x3dv
#define glUniformMatrix2x3fv                          gl3wUniformMatrix2x3fv
#define glUniformMatrix2x4dv                          gl3wUniformMatrix2x4dv
#define glUniformMatrix2x4fv                          gl3wUniformMatrix2x4fv
#define glUniformMatrix3dv                            gl3wUniformMatrix3dv
#define glUniformMatrix3fv                            gl3wUniformMatrix3fv
#define glUniformMatrix3x2dv                          gl3wUniformMatrix3x2dv
#define glUniformMatrix3x2fv                          gl3wUniformMatrix3x2fv
#define glUniformMatrix3x4dv                          gl3wUniformMatrix3x4dv
#define glUniformMatrix3x4fv                          gl3wUniformMatrix3x4fv
#define glUniformMatrix4dv                            gl3wUniformMatrix4dv
#define glUniformMatrix4fv                            gl3wUniformMatrix4fv
#define glUniformMatrix4x2dv                          gl3wUniformMatrix4x2dv
#define glUniformMatrix4x2fv                          gl3wUniformMatrix4x2fv
#define glUniformMatrix4x3dv                          gl3wUniformMatrix4x3dv
#define glUniformMatrix4x3fv                          gl3wUniformMatrix4x3fv
#define glUniformSubroutinesuiv                       gl3wUniformSubroutinesuiv
#define glUniformui64NV                               gl3wUniformui64NV
#define glUniformui64vNV                              gl3wUniformui64vNV
#define glUnmapBuffer                                 gl3wUnmapBuffer
#define glUnmapNamedBuffer                            gl3wUnmapNamedBuffer
#define glUnmapNamedBufferEXT                         gl3wUnmapNamedBufferEXT
#define glUseProgram                                  gl3wUseProgram
#define glUseProgramStages                            gl3wUseProgramStages
#define glUseShaderProgramEXT                         gl3wUseShaderProgramEXT
#define glValidateProgram                             gl3wValidateProgram
#define glValidateProgramPipeline                     gl3wValidateProgramPipeline
#define glVertexArrayAttribBinding                    gl3wVertexArrayAttribBinding
#define glVertexArrayAttribFormat                     gl3wVertexArrayAttribFormat
#define glVertexArrayAttribIFormat                    gl3wVertexArrayAttribIFormat
#define glVertexArrayAttribLFormat                    gl3wVertexArrayAttribLFormat
#define glVertexArrayBindVertexBufferEXT              gl3wVertexArrayBindVertexBufferEXT
#define glVertexArrayBindingDivisor                   gl3wVertexArrayBindingDivisor
#define glVertexArrayColorOffsetEXT                   gl3wVertexArrayColorOffsetEXT
#define glVertexArrayEdgeFlagOffsetEXT                gl3wVertexArrayEdgeFlagOffsetEXT
#define glVertexArrayElementBuffer                    gl3wVertexArrayElementBuffer
#define glVertexArrayFogCoordOffsetEXT                gl3wVertexArrayFogCoordOffsetEXT
#define glVertexArrayIndexOffsetEXT                   gl3wVertexArrayIndexOffsetEXT
#define glVertexArrayMultiTexCoordOffsetEXT           gl3wVertexArrayMultiTexCoordOffsetEXT
#define glVertexArrayNormalOffsetEXT                  gl3wVertexArrayNormalOffsetEXT
#define glVertexArraySecondaryColorOffsetEXT          gl3wVertexArraySecondaryColorOffsetEXT
#define glVertexArrayTexCoordOffsetEXT                gl3wVertexArrayTexCoordOffsetEXT
#define glVertexArrayVertexAttribBindingEXT           gl3wVertexArrayVertexAttribBindingEXT
#define glVertexArrayVertexAttribDivisorEXT           gl3wVertexArrayVertexAttribDivisorEXT
#define glVertexArrayVertexAttribFormatEXT            gl3wVertexArrayVertexAttribFormatEXT
#define glVertexArrayVertexAttribIFormatEXT           gl3wVertexArrayVertexAttribIFormatEXT
#define glVertexArrayVertexAttribIOffsetEXT           gl3wVertexArrayVertexAttribIOffsetEXT
#define glVertexArrayVertexAttribLFormatEXT           gl3wVertexArrayVertexAttribLFormatEXT
#define glVertexArrayVertexAttribLOffsetEXT           gl3wVertexArrayVertexAttribLOffsetEXT
#define glVertexArrayVertexAttribOffsetEXT            gl3wVertexArrayVertexAttribOffsetEXT
#define glVertexArrayVertexBindingDivisorEXT          gl3wVertexArrayVertexBindingDivisorEXT
#define glVertexArrayVertexBuffer                     gl3wVertexArrayVertexBuffer
#define glVertexArrayVertexBuffers                    gl3wVertexArrayVertexBuffers
#define glVertexArrayVertexOffsetEXT                  gl3wVertexArrayVertexOffsetEXT
#define glVertexAttrib1d                              gl3wVertexAttrib1d
#define glVertexAttrib1dv                             gl3wVertexAttrib1dv
#define glVertexAttrib1f                              gl3wVertexAttrib1f
#define glVertexAttrib1fv                             gl3wVertexAttrib1fv
#define glVertexAttrib1s                              gl3wVertexAttrib1s
#define glVertexAttrib1sv                             gl3wVertexAttrib1sv
#define glVertexAttrib2d                              gl3wVertexAttrib2d
#define glVertexAttrib2dv                             gl3wVertexAttrib2dv
#define glVertexAttrib2f                              gl3wVertexAttrib2f
#define glVertexAttrib2fv                             gl3wVertexAttrib2fv
#define glVertexAttrib2s                              gl3wVertexAttrib2s
#define glVertexAttrib2sv                             gl3wVertexAttrib2sv
#define glVertexAttrib3d                              gl3wVertexAttrib3d
#define glVertexAttrib3dv                             gl3wVertexAttrib3dv
#define glVertexAttrib3f                              gl3wVertexAttrib3f
#define glVertexAttrib3fv                             gl3wVertexAttrib3fv
#define glVertexAttrib3s                              gl3wVertexAttrib3s
#define glVertexAttrib3sv                             gl3wVertexAttrib3sv
#define glVertexAttrib4Nbv                            gl3wVertexAttrib4Nbv
#define glVertexAttrib4Niv                            gl3wVertexAttrib4Niv
#define glVertexAttrib4Nsv                            gl3wVertexAttrib4Nsv
#define glVertexAttrib4Nub                            gl3wVertexAttrib4Nub
#define glVertexAttrib4Nubv                           gl3wVertexAttrib4Nubv
#define glVertexAttrib4Nuiv                           gl3wVertexAttrib4Nuiv
#define glVertexAttrib4Nusv                           gl3wVertexAttrib4Nusv
#define glVertexAttrib4bv                             gl3wVertexAttrib4bv
#define glVertexAttrib4d                              gl3wVertexAttrib4d
#define glVertexAttrib4dv                             gl3wVertexAttrib4dv
#define glVertexAttrib4f                              gl3wVertexAttrib4f
#define glVertexAttrib4fv                             gl3wVertexAttrib4fv
#define glVertexAttrib4iv                             gl3wVertexAttrib4iv
#define glVertexAttrib4s                              gl3wVertexAttrib4s
#define glVertexAttrib4sv                             gl3wVertexAttrib4sv
#define glVertexAttrib4ubv                            gl3wVertexAttrib4ubv
#define glVertexAttrib4uiv                            gl3wVertexAttrib4uiv
#define glVertexAttrib4usv                            gl3wVertexAttrib4usv
#define glVertexAttribBinding                         gl3wVertexAttribBinding
#define glVertexAttribDivisor                         gl3wVertexAttribDivisor
#define glVertexAttribDivisorARB                      gl3wVertexAttribDivisorARB
#define glVertexAttribFormat                          gl3wVertexAttribFormat
#define glVertexAttribFormatNV                        gl3wVertexAttribFormatNV
#define glVertexAttribI1i                             gl3wVertexAttribI1i
#define glVertexAttribI1iv                            gl3wVertexAttribI1iv
#define glVertexAttribI1ui                            gl3wVertexAttribI1ui
#define glVertexAttribI1uiv                           gl3wVertexAttribI1uiv
#define glVertexAttribI2i                             gl3wVertexAttribI2i
#define glVertexAttribI2iv                            gl3wVertexAttribI2iv
#define glVertexAttribI2ui                            gl3wVertexAttribI2ui
#define glVertexAttribI2uiv                           gl3wVertexAttribI2uiv
#define glVertexAttribI3i                             gl3wVertexAttribI3i
#define glVertexAttribI3iv                            gl3wVertexAttribI3iv
#define glVertexAttribI3ui                            gl3wVertexAttribI3ui
#define glVertexAttribI3uiv                           gl3wVertexAttribI3uiv
#define glVertexAttribI4bv                            gl3wVertexAttribI4bv
#define glVertexAttribI4i                             gl3wVertexAttribI4i
#define glVertexAttribI4iv                            gl3wVertexAttribI4iv
#define glVertexAttribI4sv                            gl3wVertexAttribI4sv
#define glVertexAttribI4ubv                           gl3wVertexAttribI4ubv
#define glVertexAttribI4ui                            gl3wVertexAttribI4ui
#define glVertexAttribI4uiv                           gl3wVertexAttribI4uiv
#define glVertexAttribI4usv                           gl3wVertexAttribI4usv
#define glVertexAttribIFormat                         gl3wVertexAttribIFormat
#define glVertexAttribIFormatNV                       gl3wVertexAttribIFormatNV
#define glVertexAttribIPointer                        gl3wVertexAttribIPointer
#define glVertexAttribL1d                             gl3wVertexAttribL1d
#define glVertexAttribL1dv                            gl3wVertexAttribL1dv
#define glVertexAttribL1i64NV                         gl3wVertexAttribL1i64NV
#define glVertexAttribL1i64vNV                        gl3wVertexAttribL1i64vNV
#define glVertexAttribL1ui64ARB                       gl3wVertexAttribL1ui64ARB
#define glVertexAttribL1ui64NV                        gl3wVertexAttribL1ui64NV
#define glVertexAttribL1ui64vARB                      gl3wVertexAttribL1ui64vARB
#define glVertexAttribL1ui64vNV                       gl3wVertexAttribL1ui64vNV
#define glVertexAttribL2d                             gl3wVertexAttribL2d
#define glVertexAttribL2dv                            gl3wVertexAttribL2dv
#define glVertexAttribL2i64NV                         gl3wVertexAttribL2i64NV
#define glVertexAttribL2i64vNV                        gl3wVertexAttribL2i64vNV
#define glVertexAttribL2ui64NV                        gl3wVertexAttribL2ui64NV
#define glVertexAttribL2ui64vNV                       gl3wVertexAttribL2ui64vNV
#define glVertexAttribL3d                             gl3wVertexAttribL3d
#define glVertexAttribL3dv                            gl3wVertexAttribL3dv
#define glVertexAttribL3i64NV                         gl3wVertexAttribL3i64NV
#define glVertexAttribL3i64vNV                        gl3wVertexAttribL3i64vNV
#define glVertexAttribL3ui64NV                        gl3wVertexAttribL3ui64NV
#define glVertexAttribL3ui64vNV                       gl3wVertexAttribL3ui64vNV
#define glVertexAttribL4d                             gl3wVertexAttribL4d
#define glVertexAttribL4dv                            gl3wVertexAttribL4dv
#define glVertexAttribL4i64NV                         gl3wVertexAttribL4i64NV
#define glVertexAttribL4i64vNV                        gl3wVertexAttribL4i64vNV
#define glVertexAttribL4ui64NV                        gl3wVertexAttribL4ui64NV
#define glVertexAttribL4ui64vNV                       gl3wVertexAttribL4ui64vNV
#define glVertexAttribLFormat                         gl3wVertexAttribLFormat
#define glVertexAttribLFormatNV                       gl3wVertexAttribLFormatNV
#define glVertexAttribLPointer                        gl3wVertexAttribLPointer
#define glVertexAttribP1ui                            gl3wVertexAttribP1ui
#define glVertexAttribP1uiv                           gl3wVertexAttribP1uiv
#define glVertexAttribP2ui                            gl3wVertexAttribP2ui
#define glVertexAttribP2uiv                           gl3wVertexAttribP2uiv
#define glVertexAttribP3ui                            gl3wVertexAttribP3ui
#define glVertexAttribP3uiv                           gl3wVertexAttribP3uiv
#define glVertexAttribP4ui                            gl3wVertexAttribP4ui
#define glVertexAttribP4uiv                           gl3wVertexAttribP4uiv
#define glVertexAttribPointer                         gl3wVertexAttribPointer
#define glVertexBindingDivisor                        gl3wVertexBindingDivisor
#define glVertexFormatNV                              gl3wVertexFormatNV
#define glViewport                                    gl3wViewport
#define glViewportArrayv                              gl3wViewportArrayv
#define glViewportIndexedf                            gl3wViewportIndexedf
#define glViewportIndexedfv                           gl3wViewportIndexedfv
#define glViewportPositionWScaleNV                    gl3wViewportPositionWScaleNV
#define glViewportSwizzleNV                           gl3wViewportSwizzleNV
#define glWaitSync                                    gl3wWaitSync
#define glWaitVkSemaphoreNV                           gl3wWaitVkSemaphoreNV
#define glWeightPathsNV                               gl3wWeightPathsNV
#define glWindowRectanglesEXT                         gl3wWindowRectanglesEXT

#ifdef __cplusplus
}
#endif
