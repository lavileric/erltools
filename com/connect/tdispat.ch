language ogsng;

#ifdef BORLAND
#   include <process.h>
#   include <stdio.h>
#   include <conio.h>
#endif

#include "token.h"

#define NB_SCEN 32

void main ()
{
    EString testName("dispatcher");
    int     dispatcherNumb = 0 ; // numb of dispatcher
    int     i = 0 ;
    
    for ( dispatcherNumb = 0 ; dispatcherNumb < NB_SCEN ; dispatcherNumb++ ) {
        EString nameSend ; // name connected 
        nameSend =  testName + CompactItoa(1000 * (i + 1) + 10 * dispatcherNumb);
#       ifdef BORLAND
            CloseHandle((HANDLE)spawnl(P_NOWAIT, "qtdispatcher.exe", "qtdispatcher.exe", "-name", nameSend.c_str(), "-loop", "40", (char *)0)); // Sleep(1000);
#       else 
            EString comm = "tdispatcher -loop 100 -name ";
            comm += nameSend ;
            comm += " &";
            system(comm.c_str());
#       endif
    }
    return ;
    for ( i = 0 ; i < 100000 ; i++ ) {
        for ( dispatcherNumb = 0 ; dispatcherNumb < NB_SCEN ; dispatcherNumb++ ) {
            EString nameSend ; // name connected 
            nameSend =  testName + CompactItoa(1000 * (i + 1) + 10 * dispatcherNumb);
#           ifdef BORLAND
                CloseHandle((HANDLE)spawnl(P_NOWAIT, "tdispatcher.exe", "tdispatcher.exe", "-name", nameSend.c_str(), "-loop", "40", (char *)0)); // Sleep(1000);
#           else 
                EString comm = "tdispatcher -loop 100 -name ";
                comm += nameSend ;
                comm += " &";
                system(comm.c_str());
#           endif
        }
        Sleep(10000);
        for ( dispatcherNumb = 0 ; dispatcherNumb < NB_SCEN ; dispatcherNumb++ ) {
            EString nameSend ; // name connected 
            nameSend =  testName + "bis" + CompactItoa(1000 * (i + 1) + 10 * dispatcherNumb);
#           ifdef BORLAND
                CloseHandle((HANDLE)spawnl(P_NOWAIT, "tdispatcher.exe", "tdispatcher.exe", "-name", nameSend.c_str(), "-loop", "3", (char *)0)); // Sleep(1000);
#           else 
                EString comm = "tdispatcher -loop 100 -name ";
                comm += nameSend ;
                comm += " &";
                system(comm.c_str());
#           endif
        }
        Sleep(60000);
    }
}


