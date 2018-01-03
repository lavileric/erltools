language ogsng;

#ifdef BORLAND
#   include <process.h>
#   include <stdio.h>
#   include <conio.h>
#endif

#include "token.h"

#define NB_SCEN 32

void main ( int argc, char **argv )
{
    EString testName("dispatcher");
    int     dispatcherNumb = 0 ; // numb of dispatcher
    int     i = 0 ;
    int     compteur = 0 ;
    time_t  initTime ;
    
    initTime =  time(0);
    while ( true ) {
        EString nameSend ; // name connected 
        nameSend =  testName + *(argv + 1);
#       ifdef BORLAND
            {
                HANDLE  sender ;
                if ( argc > 3 ) {
                    sender
                        =  ((HANDLE)spawnl(P_NOWAIT, "qtdispatcher.exe", "qtdispatcher.exe", "-sender", "-name", nameSend.c_str(), "-bus", *(argv + 2), "-loop", "100"
                            , (char *)0)); // Sleep(1000);
                    
                    // Sleep(3000);
                    CloseHandle(
                        (HANDLE)spawnl(P_WAIT, "qtdispatcher.exe", "qtdispatcher.exe", "-receiver", "-name", nameSend.c_str(), "-bus", *(argv + 2), "-loop", "100"
                            , (char *)0)); // Sleep(1000);
                } else {
                    sender =  ((HANDLE)spawnl(P_NOWAIT, "qtdispatcher.exe", "qtdispatcher.exe", "-sender", "-name", nameSend.c_str(), "-bus", *(argv + 2), (char *)0)); // Sleep(1000);
                    
                    // Sleep(3000);
                    CloseHandle((HANDLE)spawnl(P_WAIT, "qtdispatcher.exe", "qtdispatcher.exe", "-receiver", "-name", nameSend.c_str(), "-bus", *(argv + 2), (char *)0)); // Sleep(1000);
                }
                
                // sleep for processes to die
                Sleep(3000);
                TerminateProcess(sender, -9);
                CloseHandle(sender);
                if ( time(0) - initTime > 12000 ) {
                    initTime =  time(0);
                    SLEEP(600);
                }
                SLEEP(10); // EString command2 ;
                
                // command2 = EString("qtdispatcher -receiver -name ")+ nameSend + " -bus " + *(argv+2) ;
                // write(1,command2.c_str(),command2.length());
                // write(1,"\n",1);
                // system(command2.c_str());
            }
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


