#ifndef UTIL_H
#define UTIL_H

#include <iostream>

namespace engine
{
    inline void assertNoAbort(bool condition, std::string &&msg)
    {
    #ifndef NDEBUG
        if (!condition)
        {
            std::cout << "error : " << msg << std::endl;
        }
    #endif
    }
}  

#endif