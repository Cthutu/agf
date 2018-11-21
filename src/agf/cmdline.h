//----------------------------------------------------------------------------------------------------------------------
// Process the command line and categorises it
//----------------------------------------------------------------------------------------------------------------------

#pragma once

#include <agf/core.h>

namespace agf
{

    class CommandLine
    {
    public:
        enum class ElemType
        {
            Normal,
            Flag,
        };

        struct Elem
        {
            ElemType    type;
            string      arg;

            Elem(ElemType type, string&& arg)
                : type(type)
                , arg(std::move(arg))
            {}
        };

    public:
        CommandLine(int argc, char** argv)
        {
            for (int i = 1; i < argc; ++i)
            {
                if (argv[i][0] == '-')
                {
                    if (argv[i][1] == '-')
                    {
                        // Word based flag
                        m_elems.emplace_back(ElemType::Flag, std::move(string(&argv[i][2])));
                    }
                    else
                    {
                        // Individual single-letter flags
                        char* arg = &argv[i][1];
                        while (arg != 0)
                        {
                            m_elems.emplace_back(ElemType::Flag, std::move(string(arg, arg+1)));
                        }
                    }
                }
                else
                {
                    m_elems.emplace_back(ElemType::Normal, std::move(string(argv[i])));
                }
            }
        }

        vector<Elem>::const_iterator begin() { return m_elems.begin(); }
        vector<Elem>::const_iterator end() { return m_elems.end(); }

    private:
        vector<Elem> m_elems;
    };

}

//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------
