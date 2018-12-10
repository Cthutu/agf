//----------------------------------------------------------------------------------------------------------------------
// FAD API
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <cstdint>
#include <fstream>
#include <map>
#include <string>
#include <vector>

#ifdef _WIN32
#include <windows.h>
#endif
#include <iosfwd>

namespace agf
{

    class ExeDrive
    {
    public:
        ExeDrive()
        {
            using namespace std;

            string exeFileName = win32GetExePathName();
            fstream f(exeFileName, ios::in | ios::binary | ios::ate);
            if (f.is_open())
            {
                uint64_t s1 = f.tellg();
                f.seekg(-int(sizeof(uint64_t) * 2), ios::end);
                uint64_t s2 = f.tellg();
                uint64_t magic;
                int64_t size;
                std::streampos end = f.tellg();
                f.read((char *)&magic, 8);
                f.read((char *)&size, 8);

                if (magic == 0xc0deface)
                {
                    f.seekg(-size, ios::end);
                    while (f.tellg() < end)
                    {
                        FileInfo fi;
                        uint8_t len;
                        f.read((char *)&len, 1);
                        vector<char> name;
                        name.resize(len);
                        f.read(name.data(), len);
                        f.read((char *)&fi.size, sizeof(uint64_t));
                        fi.offset = (uint64_t)f.tellg();
                        f.seekg(fi.size, ios::cur);
                        m_fileMap[string(name.begin(), name.end())] = fi;
                    }
                }

                f.close();
            }
        }

        std::vector<uint8_t> loadFile(std::string name)
        {
            using namespace std;

            vector<uint8_t> data;
            auto it = m_fileMap.find(name);

            if (it != m_fileMap.end())
            {
                FileInfo& fi = it->second;
                string exeFileName = win32GetExePathName();
                fstream f(exeFileName, ios::in | ios::binary);
                if (f.is_open())
                {
                    f.seekg(fi.offset);
                    data.resize(fi.size);
                    f.read((char *)data.data(), fi.size);
                    f.close();
                }
            }

            return data;
        }

    private:
        std::string win32GetExePathName()
        {
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

                std::string path(buf);
                free(buf);
                return path;
            }
        }


    private:
        struct FileInfo
        {
            uint64_t    offset;
            uint64_t    size;
        };

        std::map<std::string, FileInfo> m_fileMap;
    };
}
