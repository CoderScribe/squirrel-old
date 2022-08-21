#ifndef _NEWHEADER_H_
#define _NEWHEADER_H_

#include <stdlib.h>

namespace std
{
    typedef unsigned int size_t;
}

inline void* operator new (std::size_t n, void* ptr) { return ptr; }
inline void operator delete (void* ptr) { free(ptr); }

#endif