//----------------------------------------------------------------------------------------------------------------------
// Basic types and definitions
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <codecvt>
#include <cstdint>
#include <sstream>
#include <string>
#include <vector>

//----------------------------------------------------------------------------------------------------------------------
// Platform detection
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#define YES (1)
#define NO (0)

// Compiler defines
#define AGF_COMPILER_MSVC     NO

// OS defines
#define AGF_OS_WIN32          NO

// CPU defines
#define AGF_CPU_X86           NO
#define AGF_CPU_X64           NO

// Configuration defines
#define AGF_DEBUG             NO
#define AGF_RELEASE           NO

// Endianess
#define AGF_LITTLE_ENDIAN     YES
#define AGF_BIG_ENDIAN        NO

//----------------------------------------------------------------------------------------------------------------------
// Compiler determination

#ifdef _MSC_VER
#   undef AGF_COMPILER_MSVC
#   define AGF_COMPILER_MSVC YES
#else
#   error Unknown compiler.  Please define COMPILE_XXX macro for your compiler.
#endif

//----------------------------------------------------------------------------------------------------------------------
// OS determination

#ifdef _WIN32
#   undef AGF_OS_WIN32
#   define AGF_OS_WIN32 YES
#else
#   error Unknown OS.  Please define OS_XXX macro for your operating system.
#endif

//----------------------------------------------------------------------------------------------------------------------
// CPU determination

#if AGF_COMPILER_MSVC
#   if defined(_M_X64)
#       undef AGF_CPU_X64
#       define AGF_CPU_X64 YES
#   elif defined(_M_IX86)
#       undef AGF_CPU_X86
#       define AGF_CPU_X86 YES
#   else
#       error Can not determine processor - something's gone very wrong here!
#   endif
#else
#   error Add CPU determination code for your compiler.
#endif

//----------------------------------------------------------------------------------------------------------------------
// Configuration

#ifdef _DEBUG
#   undef AGF_DEBUG
#   define AGF_DEBUG YES
#else
#   undef AGF_RELEASE
#   define AGF_RELEASE YES
#endif

//----------------------------------------------------------------------------------------------------------------------
// Standard headers

#if AGF_OS_WIN32
#   define WIN32_LEAN_AND_MEAN
#   define NOMINMAX
#   include <Windows.h>
#   ifdef _DEBUG
#       include <crtdbg.h>
#   endif
#endif

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
// Debugging
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

#if AGF_OS_WIN32 && AGF_DEBUG
#   define AGF_BREAK() ::DebugBreak()
#else
#   define AGF_BREAK() do {} while(0)
#endif

#define AGF_ASSERT(x, ...) assert(x)

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

namespace agf
{

    using u8 = uint8_t;
    using u16 = uint16_t;
    using u32 = uint32_t;
    using u64 = uint64_t;

    using i8 = int8_t;
    using i16 = int16_t;
    using i32 = int32_t;
    using i64 = int64_t;

    using f32 = float;
    using f64 = double;

    using string = std::string;
    template <typename T> using vector = std::vector<T>;

    //------------------------------------------------------------------------------------------------------------------
    // Time
    //------------------------------------------------------------------------------------------------------------------

#if AGF_OS_WIN32
    using TimePoint = LARGE_INTEGER;
    using TimePeriod = LARGE_INTEGER;
#else
#   error TimePoint and TimePeriod undefined for your platform.
#endif

    //------------------------------------------------------------------------------------------------------------------
    // String format
    //------------------------------------------------------------------------------------------------------------------

    //------------------------------------------------------------------------------------------------------------------
    // Character conversion routines
    //------------------------------------------------------------------------------------------------------------------

    inline bool isDigit(char c)
    {
        return ('0' <= c) && (c <= '9');
    }

    inline int toDigit(char c)
    {
        return c - '0';
    }

    //------------------------------------------------------------------------------------------------------------------
    // Internal code
    //------------------------------------------------------------------------------------------------------------------

    namespace {

        template <int N>
        struct Counter
        {
            int m_count[N];
            int m_braceEscapes;
            int m_plainChars;

            Counter() : m_braceEscapes(0), m_plainChars(0)
            {
                memset(m_count, 0, sizeof(int) * N);
            }

            void onMarker(int markerNumber)
            {
                ++m_count[markerNumber];
            }

            void onEscapeLeft() { ++m_braceEscapes; }
            void onEscapeRight() { ++m_braceEscapes; }
            void onChar(char c) { ++m_plainChars; }
        };

        template <int N>
        class Formatter
        {
        public:
            Formatter(string& dest, string* values)
                : m_dest(dest)
                , m_size(0)
                , m_values(values)
            {}

            void onMarker(int markerNumber)
            {
                size_t len = m_values[markerNumber].length();
                m_dest.replace(m_size, len, m_values[markerNumber]);
                m_size += len;
            }

            void onEscapeLeft()
            {
                m_dest[m_size++] = '{';
            }

            void onEscapeRight()
            {
                m_dest[m_size++] = '}';
            }

            void onChar(char c)
            {
                m_dest[m_size++] = c;
            }

        private:
            string & m_dest;
            size_t m_size;
            string* m_values;
        };

        template <int N, typename Handler>
        inline void traverse(const char* format, Handler& callback)
        {
            const char* c = format;
            while (*c != 0)
            {
                if (*c == '{')
                {
                    if (c[1] == '{')
                    {
                        callback.onEscapeLeft();
                        c += 2;
                    }
                    else
                    {
                        int number = 0;
                        ++c;

                        // Unexpected end of string
                        AGF_ASSERT(*c != 0);

                        // Invalid brace contents: must be a positive integer
                        AGF_ASSERT(isDigit(*c));

                        number = toDigit(*c++);
                        while (isDigit(*c))
                        {
                            number *= 10;
                            number += toDigit(*c++);
                        }

                        // Unexpected end of string
                        AGF_ASSERT(*c != 0);
                        // Invalid brace contents: must be a positive integer
                        AGF_ASSERT(*c == '}');
                        // Format value index is out of range
                        AGF_ASSERT(number <= N);

                        callback.onMarker(number);
                        ++c;
                    } // if (c[1] == '{')
                }
                else if (*c == '}')
                {
                    if (c[1] == '}')
                    {
                        callback.onEscapeRight();
                        c += 2;
                    }
                    else
                    {
                        // Unescaped right brace
                        AGF_ASSERT(0);
                    }
                }
                else
                {
                    callback.onChar(*c);
                    ++c;
                }
            }
        } // traverse

        template <int N>
        inline size_t formattedTotal(string values[N], int counts[N])
        {
            size_t total = 0;
            for (int i = 0; i < N; ++i)
            {
                total += values[i].length() * counts[i];
            }
            return total;
        }

        template <int N>
        inline string formatArray(const char* format, string values[N])
        {
            Counter<N> counter;
            traverse<N>(format, counter);

            size_t formatsSize = formattedTotal<N>(values, counter.m_count);
            size_t outputTotal = formatsSize + counter.m_braceEscapes + counter.m_plainChars;

            string output(outputTotal, 0);
            Formatter<N> formatter(output, values);
            traverse<N>(format, formatter);

            return output;
        }

        template <int N, typename T>
        inline void internalStringFormat(int index, string values[N], T t)
        {
            std::ostringstream ss;
            ss << t;
            values[index] = ss.str();
        }

        template <int N, typename T, typename ...Args>
        inline void internalStringFormat(int index, string values[N], T t, Args... args)
        {
            std::ostringstream ss;
            ss << t;
            values[index] = ss.str();
            internalStringFormat<N, Args...>(index + 1, values, args...);
        }

        template <int N>
        inline void internalStringFormat(int index, string values[N])
        {
        }

    } // namespace

    inline string stringFormat(const char* format)
    {
        return string(format);
    }

    template <typename ...Args>
    inline string stringFormat(const char* format, Args... args)
    {
        string values[sizeof...(args)];
        internalStringFormat<sizeof...(args), Args...>(0, values, args...);
        return formatArray<sizeof...(args)>(format, values);
    }

    template <typename... Args>
    inline void pr(Args... args)
    {
        string s = stringFormat(args...);
#ifdef WIN32
        OutputDebugStringA(s.c_str());
#endif
    }

    template <typename... Args>
    inline void prn(Args... args)
    {
        pr(args...);
        OutputDebugStringA("\n");
    }

    inline std::string fromWString(const std::wstring& ws)
    {
        using conv_t = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<conv_t, wchar_t> conv;

        return conv.to_bytes(ws);
    }

    inline std::wstring toWString(const std::string& str)
    {
        using conv_t = std::codecvt_utf8<wchar_t>;
        std::wstring_convert<conv_t, wchar_t> conv;

        return conv.from_bytes(str);
    }

}

