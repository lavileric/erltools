/*************************************************************************/
/*                                                                       */
/*        smtoken.h - All token function for ptree ( small token )       */
/*                                                                       */
/*************************************************************************/
/* This file is part of metagen                                             
   
   Metagen is a syntaxic analyser generator with */
/*backtrack.
   
   It runs on dos and unix. It generates c code. */
/* Copyright(C) 1989 Eric Lavillonniere */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License*/
/* as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program i*/
/*s distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTAB*/
/*ILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have receive*/
/*d a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to
   the Free Softwar*/
/*e
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   
   */
#ifndef SMTOKEN_LOADED
#define SMTOKEN_LOADED 1

/* ***************** to remove token.h from tabsymb tabsort and tablist enrich smtoken ********************************/
#if defined(SOLARIS) // SUN SOLARIS
#define DEFINE_LOWER_UPPER 1
#define INCLUDE_STDLIB 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define INCLUDE_MALLOC 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_INET_TCP 1 
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_STD_ARG 1
#define INCLUDE_IOSTREAM 1
#define O_BINARY 0
#define RANDOM_2 1 
#define VARARGS_2 
#define ITOA 1
#define STL_3 1
#define UNIX_DLL 1
#define HAS_P_THREAD 1
#define SET_THREAD_STACK 1
#define EMULATE_POSIX_SEMAPHORE 1
#define HAS_POSIX_CRITICAL 1
#define HAS_IPC_FUNCT 1
#ifdef SOLARIS
#ifndef _SYS_STREAM_H
#define _SYS_STREAM_H 1
#endif
#define HAS_SIGNAL 1
#define DEFINE_SOCKLEN 1
#endif
#elif defined(SOLARIS_CC) // SUN SOLARIS
#define DEFINE_LOWER_UPPER 1
#define INCLUDE_STDLIB 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define INCLUDE_STDLIB 1
#define DEFINE_SOCKLEN 1
#define INCLUDE_MALLOC 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_INET_TCP 1 
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_STD_ARG 1
#define O_BINARY 0
#define RANDOM_2 1 
#define VARARGS_2 
#define ITOA 1
#define STL_3 1
#define UNIX_DLL 1
#define HAS_P_THREAD 1
#define HAS_POSIX_SEMAPHORE 1
#define HAS_POSIX_CRITICAL 1
#define HAS_IPC_FUNCT 1
#define MOST_RECENT_STL 1
#define NO_STACK 1
#ifdef SOLARIS
#ifndef _SYS_STREAM_H
#define _SYS_STREAM_H 1
#endif
#define HAS_SIGNAL 1
#endif
#elif defined(AIX) // SUN LINUX
#define INCLUDE_VARARGS 1
#define INCLUDE_STDLIB 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define DEFINE_SOCKLEN 1
#define INCLUDE_MALLOC 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_IOSTREAM 1
#define O_BINARY 0
#define RANDOM_2 1 
#define ITOA 1
#elif defined(BORLAND3) // SUN LINUX BORLAND BORLAND3
#define MOST_RECENT_STL 1
#define INCLUDE_STDLIB 1
#define INCLUDE_IO 1
#define INCLUDE_MALLOC 1
#define INCLUDE_IOSTREAM 1
#define W_DLL 1
#define UPPER_SLEEP 1
#define DEFINE_SOCKLEN 1
#define W_SOCKET 1
#define RANDOM_3 1 
#define INCLUDE_DIRECT 1
#define INCLUDE_DIRENT 1
#define ON_W 1
#define VARARGS_2 
#define STL_3 1
#elif defined(VISUAL) // SUN LINUX BORLAND VISUAL

/* #define MOST_RECENT_STL 1 */
#define INCLUDE_STDLIB 1
#define INCLUDE_IOSTREAM 1
#define INCLUDE_IO 1
#if _WIN32_WINNT >= 0x0400
#define INCLUDE_WINSOCK2 1
#else 
#define INCLUDE_WINSOCK 
#endif
#define INCLUDE_MALLOC 1
#define W_DLL 1
#define UPPER_SLEEP 1
#define UNDERSCORE_FTIME 1
#define W_SOCKET 1
#define RANDOM_2 1 
#define INCLUDE_DIRECT 1
#define ON_W 1
#define VARARGS_2 
#define STL_3 1
#define DEFINE_SOCKLEN 1
#elif defined(BORLAND) // SUN LINUX BORLAND
#define INCLUDE_STDLIB 1
#define INCLUDE_IOSTREAM 1
#define INCLUDE_IO 1
#define INCLUDE_WINSOCK2 1
#define INCLUDE_MALLOC 1
#define W_DLL 1
#define UPPER_SLEEP 1
#define W_SOCKET 1
#define RANDOM_3 1 
#define INCLUDE_DIR 1
#define INCLUDE_DIRENT 1
#define ON_W 1
#define VARARGS_2 
#define DEFINE_SOCKLEN 1
#elif defined(LINUX_GLIBC2) // SUN LINUX GLIBC2
#define INCLUDE_STDLIB 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define INCLUDE_MALLOC 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_IOSTREAM 1
#define O_BINARY 0
#define STL_3 1
#define UNIX_DLL 1
#define RANDOM_2 1 
#define VARARGS_2 
#define ITOA 1
#define HAS_P_THREAD 1
#define EMULATE_POSIX_SEMAPHORE 1
#define HAS_POSIX_CRITICAL 1
#define HAS_IPC_FUNCT 1
#define HAS_SIGNAL 1
#elif defined(LINUX_GLIBC2GCC3) // SUN LINUX GLIBC2 GCC3
#define INCLUDE_STD_ARG 1
#define INCLUDE_STDLIB 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define INCLUDE_MALLOC 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_IOSTREAM 1
#define O_BINARY 0
#define STL_3 1
#define UNIX_DLL 1
#define RANDOM_2 1 
#define VARARGS_2 
#define ITOA 1
#define HAS_P_THREAD 1
#define EMULATE_POSIX_SEMAPHORE 1
#define HAS_POSIX_CRITICAL 1
#define HAS_IPC_FUNCT 1
#define HAS_SIGNAL 1
#define MOST_RECENT_STL 1
#elif defined(LINUX) // SUN LINUX
#define INCLUDE_VARARGS 1
#define INCLUDE_STDLIB 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define INCLUDE_MALLOC 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_IOSTREAM 1
#define DEFINE_SOCKLEN 1
#define O_BINARY 0
#define STL_2 1
#define RANDOM_3 1 
#define ITOA 1
#elif defined(INTERACTIVE) // SUN I386
#define DEFINE_LOWER_UPPER 1
#define INCLUDE_VARARGS 1
#define INCLUDE_STDLIB 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_IOSTREAM 1
#define DEFINE_SOCKLEN 1
#define O_BINARY 0
#define ITOA 1
#elif defined(SUN) // SUN
#define DEFINE_LOWER_UPPER 1
#define INCLUDE_VARARGS 1
#define INCLUDE_UNISTD 1
#define INCLUDE_SOCKET 1
#define INCLUDE_MALLOC 1
#define INCLUDE_SIGNAL 1
#define INCLUDE_SYS_FILE 1 
#define INCLUDE_SYS_TIMES 1 
#define INCLUDE_IN 1
#define INCLUDE_IOSTREAM 1
#define INCLUDE_STD_ARG 1
#define O_BINARY 0
#define RANDOM_2 1 
#define VARARGS_2 
#define ITOA 1
#define DEFINE_SOCKLEN 1
#endif

// 
#if defined(INCLUDE_SOCKET)
#include <sys/socket.h>
#endif

// 
#if defined(DEFINE_SOCKLEN)
#define SOCKLEN int
#else 
#define SOCKLEN socklen_t
#endif

// 
#if defined(INCLUDE_WINSOCK)
#include <winsock.h>
#endif

// 
#if defined(INCLUDE_VARARGS)
#include <varargs.h>
#endif

// 
#if defined(INCLUDE_STDLIB)
#include <stdlib.h>
#endif

// 
#if defined(INCLUDE_UNISTD)
#include <unistd.h>
#endif

// 
#if defined(INCLUDE_IO)
#include <io.h>
#endif

// 
#if defined(INCLUDE_MALLOC)
#include <malloc.h>
#endif

// 
#if defined(INCLUDE_DIR)
#include <dir.h>
#endif

// 
#if defined(INCLUDE_DIRECT)
#endif

// 
#if defined(INCLUDE_DIRENT)
#include <dirent.h>
#endif

// 
#if defined(INCLUDE_SYS_FILE)
#include <sys/file.h>
#endif

// 
#if defined(INCLUDE_SYS_TIMES)
#include <sys/times.h>
#include <sys/time.h>
#endif

// 
#if defined(INCLUDE_IN)
#include <netinet/in.h>
#endif

// 
#if defined(INCLUDE_STD_ARG)
#include <stdarg.h>
#endif

// 
#if defined(INCLUDE_IOSTREAM)
#include <iostream>
#endif
#include <time.h>
#include <sys/timeb.h>
/******************** end insert from token.h *************************/
#define RIEN 
#define _fastcall 
#include "memges.h"
#define NODE_MASK ~(~0x3ff)
#define REF_MASK ~(~0xffffff)
#define LANG_MASK ~(~0x03f)
#define NODE_BIT 10
#define LANG_BIT 6
#define REF_BIT 24
#define LIST 0
#define TERM_TREE ( -2 & NODE_MASK )
#define GEO ( -3 & NODE_MASK )
#define REF_TREE (-4 & NODE_MASK)
#define CLASS_TREE (-5 & NODE_MASK)
#define ENTETE_SIZE 2*sizeof(int)+2*sizeof(PPTREE)
#define treearity(x) ((PPTREE)x?(CacheRead((long)(PPTREE)x+sizeof(int))>>REF_BIT)&0xff:0)
#define ranktree(x) PosTree((PPTREE)x)
#define sontree(x, y) SonTree((PPTREE)x,y)

typedef struct a_tree {
    int          tree1 ;
    int          nb_ref ;
    struct a_tree *father ;
    struct a_tree *the_annot ;
    struct a_tree *son1 ;
    struct a_tree *son2 ;
    struct a_tree *son3 ;
    struct a_tree *son4 ;
    struct a_tree *son5 ;
    struct a_tree *son6 ;
}   TREE,   *PPTREE,    *MY_TREE ;

/**************************************************************
           Functions of auxpars
   ********************************/
/*********************************/
void            _fastcall AddRef (PPTREE) ;  /* add a reference on a tree */ 
void            _fastcall FreeRef (PPTREE) ; /* del a reference on a tree and free it */ 
PPTREE          _fastcall MakeTree (int, int) ;
PPTREE          _fastcall ReplaceTree (PPTREE, int, PPTREE) ;
PPTREE          _fastcall SonTree (PPTREE, int) ;
PPTREE          _fastcall NFatherTree (PPTREE, int) ;
PPTREE          _fastcall FatherTree (PPTREE) ;
PPTREE          _fastcall AddList (PPTREE, PPTREE) ;
PPTREE          _fastcall LMakeString (const char *string, int length) ;
PPTREE          _fastcall MakeString (const char *) ;
unsigned int    TreeSize (PPTREE) ;
char            *_fastcall Value (PPTREE) ;
int             _fastcall PosTree (PPTREE) ;
//void            MetaInit () ;
void            MetaEnd () ;
void            MetaInit (char *val = 0) ;
class PTREE ;
PPTREE          StoreRef (PPTREE) ;
void            FreeString (char *string, int length) ;
char            *MallocString (int size) ;
/******************************************************************
           PutExtraInfo : put extra info on node
   ***********/
/**********************************************************/
void            PutExtraInfo (PPTREE tree, int extraInfo) ;
/******************************************************************
           GetExtraInfo : get extra info on node
   ***********/
/**********************************************************/
int             GetExtraInfo (PPTREE tree) ;

/* ***************** to remove token.h from tabsymb tabsort and tablist enrich smtoken ********************************/
char            *_fastcall AllocString (const char *) ;
#define replacetree(x, y, z) ReplaceTree((PPTREE)x,y,(PPTREE)z)
#define fathertree(x) FatherTree((PPTREE)x)
#define nfathertree(x, nb) NFatherTree((PPTREE)x,nb)
#define copytree(x) CopyTree((PPTREE)x)
#define numbertree(x) NumberTree((PPTREE)x)
#define comparetree(x, y) CompareTree(x,y,0,-1)
#define qcomparetree(x, y) QCompareTree((PPTREE)x,(PPTREE)y,(PPTREE)0,-1)
#define listlength(x) ListLength((PPTREE)x);
int _fastcall ListLength (PPTREE) ;
#define SON_WRITE(dad, n, son) LCacheWrite(((long)dad) + 2 * sizeof(int) + (n+1) * sizeof(PPTREE),(long)son)

inline int _fastcall NumberTree ( PPTREE tree )
{
    return tree ? CacheRead((long)tree) & NODE_MASK : -100 ;
}

void    _fastcall DumpBrainyValueInt (PPTREE) ;
void    _fastcall DumpBrainyValueVirtInt (PPTREE) ;
void    _fastcall DumpBrainyValue (PPTREE) ;
void    _fastcall NewLineInt () ;
void    _fastcall NewLineVirtInt () ;
void    _fastcall NewLine () ;
void    LNewLine (int) ;
char    *ItoaQuick (int nb, char *string, int length) ;
char    *LtoaQuick (long nb, char *string, int length) ;
char    *CompactItoa (int nb) ;
char    *CompactLtoa (long nb) ;
char    *CompactRtoa (float nb) ;
PPTREE  ReadInFile (int) ;
PPTREE  ReadInString (char *) ;
void    SwitchLang (const char *) ;
void    EqualTree (const char *, const char *, int, PPTREE, int) ;
PPTREE  _fastcall CopyTree (PPTREE) ;
PPTREE  _fastcall NoCommentCopyTree (PPTREE) ;
void    DumpTree (PPTREE) ;
#endif

/* TOKEN_LOADED  */
// 
#ifndef IN_ERLSTRING
#ifndef MISC_SM_TOKEN
#define MISC_SM_TOKEN 1
#include "erlstring.h"

// 
#if defined(UPPER_SLEEP)
inline void SLEEP ( int x )
{
    Sleep(x * 1000);
}

inline void MSLEEP ( int x )
{
    Sleep(x);
}
#else 
inline void SLEEP ( int x )
{
    sleep(x);
}

inline void MSLEEP ( int x )
{
    usleep(x * 1000);
}
#endif
#ifndef ON_W
#define INT_64 long long

inline INT_64 atoll ( char *string )
{
    INT_64  ret ;
    
    sscanf(string, "%lld", &ret);
    return ret ;
}

inline EString Compactlltoa ( INT_64 nb )
{
    char    string [20];
    
    sprintf((char *)string, "%lld", nb);
    return EString(string);
}
#else 
#define INT_64 __int64

inline INT_64 atoll ( char *string )
{
    INT_64  ret ;
    
    ret = _atoi64(string);
    return ret ;
}

inline EString Compactlltoa ( INT_64 nb )
{
    char    string [20];
    
    _i64toa(nb, string, 10);
    return EString(string);
}
#endif
extern int  metaDebug ;

inline void EGetTime ( struct timeval &timeVal )
{
#if defined(UNDERSCORE_FTIME)
    {
        struct _timeb tstruct ;
        _ftime(&tstruct);
        timeVal.tv_sec = tstruct.time ;
        timeVal.tv_usec = tstruct.millitm * 1000 ;
    }
#else 
    {
        struct timeb tstruct ;
        ::ftime(&tstruct);
        timeVal.tv_sec = tstruct.time ;
        timeVal.tv_usec = tstruct.millitm * 1000 ;
    }
#endif
}

inline time_t EGetTime_ms ()
{
    struct timeval lVal ;
    
    EGetTime(lVal);
    return 1000 * lVal.tv_sec + lVal.tv_usec / 1000 ;
}

inline time_t EGetDiffTime_ms ( const struct timeval &val1, const struct timeval &val2 )
{
    return 1000 * (val2.tv_sec - val1.tv_sec) + (val2.tv_usec - val1.tv_usec) / 1000 ;
}

inline void DisplayTime ( const char *str, int output = 1 )
{
    if ( metaDebug ) {
        struct timeval timeVal ;
        EGetTime(timeVal);
        EString param("");
        param << str << " ~ " << (int)(timeVal.tv_sec) << ":" << (int)(timeVal.tv_usec / 1000) << "\n";
        write(output, param.c_str(), param.length());
    }
}

inline time_t GetMilliTime ()
{
    struct timeval timeVal ;
    
    EGetTime(timeVal);
    return timeVal.tv_usec / 1000 ;
}
#endif
#endif
