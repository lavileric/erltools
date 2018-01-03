#define _WIN32_WINNT 0x0400

#include "windows.h"

DWORD ESignal ( HANDLE h1, HANDLE h2, DWORD milli )
{
    return SignalObjectAndWait(h1, h2, milli, false);
}
