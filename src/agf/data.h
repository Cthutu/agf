//----------------------------------------------------------------------------------------------------------------------
// Memory-mapped loading of files.
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <agf/core.h>

namespace agf
{

    class Data
    {
    public:
        //--------------------------------------------------------------------------------------------------------------
        // Constructors and destructor

        //! Default constructor.
        Data();

        //! Load a file given a platform file name.
        Data(const char* fileName);

        //! Create a mapping to a new file.
        Data(const char* fileName, i64 size);

        //! Destructor.
        ~Data();

        //! We cannot copy Data.
        Data(const Data&) = delete;

        //! We cannot copy Data.
        Data& operator= (const Data&) = delete;

        //! Move constructor.
        Data(Data&& other);

        //! Move operator.
        Data& operator= (Data&& other);

        //--------------------------------------------------------------------------------------------------------------
        // Querying

        //! Return true if loading was successful.
        explicit operator bool() const { return m_bytes != nullptr; }

        //! Return a void pointer to the data.
        operator void* () const { return (void *)m_bytes; }

        //! Return a constant void pointer to the data.
        operator const void* () const { return (const void*)m_bytes; }

        //! Return a u8 pointer to the data.
        operator u8* () const { return (u8 *)m_bytes; }

        //! Return a u8 pointer to the data.
        operator const u8* () const { return (const u8 *)m_bytes; }

        //! Return a char pointer to the data.
        operator char* () const { return (char *)m_bytes; }

        //! Return a char pointer to the data.
        operator const char* () const { return (const char *)m_bytes; }

        //! Return the size of the data.
        i64 size() const { return m_size; }

        //! Return a pointer to the data.
        template <typename T>
        const T* data() const
        {
            return (T *)m_bytes;
        }

        //! STL-style access.
        u8* begin() { return m_bytes; }

        //! STL-style access.
        u8* end() { return m_bytes + m_size; }

        //! STL-style access.
        const u8* begin() const { return m_bytes; }

        //! STL-style access.
        const u8* end() const { return m_bytes + m_size; }

        //! Random access.
        u8& operator[] (i64 i) { return m_bytes[i]; }

        //! Random access.
        u8 operator[] (i64 i) const { return m_bytes[i]; }

    private:
        u8* m_bytes;        //!< Points to the actual data.
        i64 m_size;          //!< Return the size of the data.

#if AGF_OS_WIN32
        HANDLE m_file;
        HANDLE m_fileMap;
#endif
    };

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
// I M P L E M E N T A T I O N
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------

namespace agf
{

    //------------------------------------------------------------------------------------------------------------------
    // Default constructor

    Data::Data()
        : m_bytes(nullptr)
        , m_size(0)
#if AGF_OS_WIN32
        , m_file(INVALID_HANDLE_VALUE)
        , m_fileMap(INVALID_HANDLE_VALUE)
#endif
    {

    }

    //------------------------------------------------------------------------------------------------------------------
    // Loading constructor.

    Data::Data(const char* fileName)
        : m_bytes(nullptr)
        , m_size(0)
#if AGF_OS_WIN32
        , m_file(INVALID_HANDLE_VALUE)
        , m_fileMap(INVALID_HANDLE_VALUE)
#endif
    {
#if AGF_OS_WIN32
        m_file = ::CreateFileA(fileName, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, 0, 0);
        if (m_file != INVALID_HANDLE_VALUE)
        {
            DWORD fileSizeHigh, fileSizeLow;
            fileSizeLow = ::GetFileSize(m_file, &fileSizeHigh);
            m_fileMap = ::CreateFileMappingA(m_file, 0, PAGE_READONLY, fileSizeHigh, fileSizeLow, 0);

            if (m_fileMap)
            {
                m_bytes = (u8 *)::MapViewOfFile(m_fileMap, FILE_MAP_READ, 0, 0, 0);
                m_size = ((i64)fileSizeHigh << 32) | fileSizeLow;
            }
            else
            {
                Data::~Data();
            }
        }
#else
#   error Implement file mapping for your platform.
#endif
    }

    //------------------------------------------------------------------------------------------------------------------
    // Saving constructor.

    Data::Data(const char* fileName, i64 size)
        : m_bytes(nullptr)
        , m_size(0)
#if AGF_OS_WIN32
        , m_file(INVALID_HANDLE_VALUE)
        , m_fileMap(INVALID_HANDLE_VALUE)
#endif
    {
#if AGF_OS_WIN32
        m_file = ::CreateFileA(fileName, GENERIC_READ | GENERIC_WRITE, 0, 0, CREATE_ALWAYS, 0, 0);
        if (m_file != INVALID_HANDLE_VALUE)
        {
            DWORD fileSizeLow = (size & 0xffffffff);
            DWORD fileSizeHigh = (size >> 32);
            m_fileMap = ::CreateFileMappingA(m_file, 0, PAGE_READWRITE, fileSizeHigh, fileSizeLow, 0);

            if (m_fileMap)
            {
                m_bytes = (u8 *)::MapViewOfFile(m_fileMap, FILE_MAP_WRITE, 0, 0, 0);
                m_size = size;
            }
            else
            {
                Data::~Data();
            }
        }
#else
#   error Implement file mapping for your platform.
#endif
    }

    //------------------------------------------------------------------------------------------------------------------
    // Destructor

    Data::~Data()
    {
        if (m_bytes)        ::UnmapViewOfFile(m_bytes);
        if (m_fileMap)      ::CloseHandle(m_fileMap);
        if (m_file)         ::CloseHandle(m_file);
    }

    //------------------------------------------------------------------------------------------------------------------
    // Move construction

    Data::Data(Data&& other)
        : m_bytes(other.m_bytes)
        , m_size(other.m_size)
#if AGF_OS_WIN32
        , m_file(other.m_file)
        , m_fileMap(other.m_fileMap)
#endif
    {
        other.m_bytes = nullptr;
        other.m_size = 0;
#if AGF_OS_WIN32
        other.m_file = INVALID_HANDLE_VALUE;
        other.m_fileMap = INVALID_HANDLE_VALUE;
#endif
    }

    Data& Data::operator =(Data&& other)
    {
        m_bytes = other.m_bytes;
        m_size = other.m_size;
        other.m_bytes = nullptr;
        other.m_size = 0;

#if AGF_OS_WIN32
        m_file = other.m_file;
        m_fileMap = other.m_fileMap;
        other.m_file = INVALID_HANDLE_VALUE;
        other.m_fileMap = INVALID_HANDLE_VALUE;
#endif
        return *this;
    }

    //------------------------------------------------------------------------------------------------------------------

}