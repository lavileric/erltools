/*************************************************************************/
/*                                                                       */
/*        AuxPars.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
/* This file is part of metagen
   
   Metagen is a syntaxic analyser generator with */
/*backtrack.
   
   It runs on dos and unix. It generates c code. */
/* Copyright(C) 1989 Eric Lavillonniere */
/*
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING. If not, write to
   the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
   
   */
/*
   Eric Lavillonniere - 09 june 1997
     Restore buffer in ReadInString
   Loic Fournier - 22 Mars 1997
     Add GetExpectedToken
     Add GetTypeErr
   Eric Lavillonniere - 14 december 1993
     BrainyValue doesn't copy any longer the string
   Eric Lavillonniere - 1 december 1993
     Miscellaneous modifications for commentaries
   Eric Lavillonniere - 26 november 1993
     Modification of AddComm : add new level PRIORITY for bounding
   Eric Lavillonniere - 18 november 1993
     Modification of SavePos RestorePos et FreePos
     for decreasing the number or malloc and free for context
   Eric Lavillonniere - 4 october 1993
     Modification of PrintError interface
   Jean-Philippe Jouve - 29 September 1993
     Add TraceLex and TraceRule for debugging ;
     Add GetErrorLine GetErrorToken ResetError ;
   			   */
#include "token.h"
#include "memges.h"

#define CURRENT_VERSION 300 /* current version of saver loader for erltools */

/* #include <String.h> */
#if defined(INCLUDE_DIRECT)
#   include <direct.h>
#endif

#include <fcntl.h>
#include <vector>

/* void SwitchLang PARAM((char *)); */
void                            SwitchLang (char *) ;
void                            FreeHeadComm () ;
void                            InitStoreRef () ;
int                             isVirtMod = 0 ;
int                             input, output ;         /* files for input and output */ 
int                             *tabArity ;
EString                         outputString ;

/* int     (*FuncArity)( ); */
int                             languageMask ;
static int                      nbLanguage = 0 ;
PPTREE                          (*the_parse_entry_pt)(int) ;
STRINGELEM                      *listConst = (STRINGELEM *)0 ;
char                            c ;
int                             line = 1, col = 0, firstOnLine = 1 ;
int                             metaDebug = 1 ;
static int                      storLine = -1, storCol = -1 ;
int                             _funcLevel = 0 ;
PPTREE                          _lastTree = (PPTREE)0 ; /* last tree created by a parser function */ 
char                            oldBuf [MAXLENGTH];     /* use to retrieve character
                                                           read and not used */ 
char                            stockBuf [MAXLENGTH];   /* the characters for the current token */ 
int                             ptOldBuf = -1 ;
int                             ptStockBuf = -1 ;
int                             tokenAhead = 0 ;
int                             tabValue = 4 ;
int                             lexCallLex = 0 ;        /* indicates that a lex procedure call lex */ 
int                             dumpCoord = 1 ;         /* indicates that we must put coord commentaries */ 
PCOMM_ELEM                      listComm = (PCOMM_ELEM)0 ;
static PCOMM_ELEM               listCommFree = (PCOMM_ELEM)0 ;
int                             rightMargin = 75 ;      /* right margin, after this column a tab goto
                                                           column 0 */ 
char                            *currentLanguage ;
PLANG                           pCurrentLanguage = (PLANG)0 ;
static int                      noErr = 0 ;             /* do not trigger error in getstring
                                                           (used in getstrings) */ 
LEX_STRUCT                      lexEl ;
int                             oldLine = 1 ;
int                             oldCol ;
int                             oldColEntry, oldLineEntry ;
char                            errStr [512];
char                            *_ptString ;
int                             _nbCharact ;
static std::vector<EString>     stackFileRead ;
static EString                  lastFileRead ;
bool                            emacsCompatibleError = false ;
int                             keepOutputString ;

// char                *stringlex = lexEl.string ;
int                             currCol = 0 ;           /* the current column for the display */ 
int                             currLine = 0 ;          /* the current line for the display */ 
int                             writeCol = 0 ;          /* the column of the last write */ 

#define MAXTABTAB 80

int             tabTab [MAXTABTAB];  /* array of tabs */ 
int             ptTabTab ;
static PPTREE   MallocNodeTree (int arity) ;
char            *MallocString (int size) ;
void            FreeNodeTree (int arity, PPTREE tree) ;
void            FreeString (char *string, int length) ;

#define MAXOUTPUT 512

char        outBuf [MAXOUTPUT];
char        *ptOutPut ;
extern int  output ;
int         writeLine = 0 ;

#if defined(VISUAL) || defined(BORLAND)
    HANDLE  storeRefCritical = 0 ;
    HANDLE  addRefCritical = 0 ;
    HANDLE  jumpCritical = 0 ;
#elif defined(HAS_POSIX_SEMAPHORE)
    CRITICAL_SECTION    storeRefCritical = 0 ;
    CRITICAL_SECTION    jumpCritical = 0 ;
    CRITICAL_SECTION    addRefCritical = 0 ;
#endif

void Flush ()
{
    if ( output > 0 || output == OUTPUT_IN_STRING && ptOutPut > outBuf ) 
        WriteString("\n");
}

int True ()
{
    return 1 ;
}

/******************************************************************
    WriteString : Write a string on display
   *********/
/************************************************************/
static int  HasPutWhite = 1 ;
static int  justPutNewLine = 0 ;
static int  sepBeforeV = 0 ;
static int  justPutSpace = 0 ;
static int  justPutTab = 0 ;

void _fastcall WriteStringInt ( const char *string, int len )
{
    
    /* register*/
    const char  *ptString ;
    char        *ptDest ;
    int         more = 0 ;
    char        c ;
    int         flush = 0 ;
    
    writeCol =  currCol += len ;
    
    /* << EL the 27/06/97 */
    if ( *string == '\b' && !*(string + 1) ) {
        if ( ptOutPut > outBuf && *(ptOutPut - 1) == ' ' ) {
            if ( ptOutPut - 1 <= outBuf
                    || !(*(ptOutPut - 2) >= 'a' && *(ptOutPut - 2) <= 'z'
                            || *(ptOutPut - 2) >= 'A' && *(ptOutPut - 2) <= 'Z'
                            || *(ptOutPut - 2) >= '0' && *(ptOutPut - 2) <= '9'
                            || *(ptOutPut - 2) == '_'
                            || *(ptOutPut - 2) == '$') ) 
                ptOutPut-- ;
        }
        return ;
    }
    
    /* >> */
debut : 
    if ( ptOutPut + len < outBuf + MAXOUTPUT - 1 ) {
        strcpy(ptOutPut, string);
        ptOutPut =  ptOutPut + len ;
        more     =  0 ;
    } else if ( !more ) {
        more      =  1 ;
        *ptOutPut =  '\0';
        flush     =  1 ;
    } else {
        
        /* more      =  0 ;*/
        /* string doesn't fit in buf */
        *ptOutPut =  '\0';
        
        /* flush     =  1 ;*/
        /* << EL 06/09/97 */
        if ( output > 0 ) 
            _write(output, string, strlen(string));
        else if ( output == OUTPUT_IN_STRING ) 
            outputString += string ;
        return ; /* >> EL */ 
    }
    ptString =  string ;
    if ( !flush ) 
        while ( *ptString ) 
            if ( *ptString == '\n' ) {
                flush =  1 ;
                break ;
            } else 
                ptString++ ;
    while ( flush ) {
        ptString =  ptDest = outBuf ;
        while ( *ptString != '\n' && *ptString ) 
            if ( *ptString != '\b' ) {
                *ptDest++ =  *ptString++ ;
            } else {
                if ( ptDest > outBuf ) {
                    ptDest-- ;
                    if ( *ptDest != ' ' ) {
                        ptDest++ ;
                        if ( *ptDest >= 'a' && *ptDest <= 'z'
                                || *ptDest >= 'A' && *ptDest <= 'Z'
                                || *ptDest >= '0' && *ptDest <= '9'
                                || *ptDest == '_'
                                || *ptDest == '$' ) 
                            *ptDest++ =  ' '; /* otherwise two words might be concatenated */ 
                    }
                }
                ptString++ ;
            }
#       if !defined(ON_W)
            
            // during parsing we replaced \n by \r\n
            if ( *ptString && ptDest > outBuf && *(ptDest - 1) == '\r' ) {
                ptDest-- ;
            }
#       endif
        if ( *ptString ) 
            *ptDest++ =  *ptString++ ;
        c       =  *ptDest ;
        *ptDest =  '\0';
        if ( output > 0 ) 
            _write(output, outBuf, ptDest - outBuf);
        else if ( output == OUTPUT_IN_STRING ) 
            outputString += VString(outBuf, ptDest - outBuf);
        *ptDest =  c ;
        ptDest  =  outBuf ;
        flush   =  0 ;
        while ( ptString < ptOutPut && *ptString ) 
            if ( (*ptDest++ = *ptString++) == '\n' ) {
                flush =  1 ;
            }
        *ptDest  =  *ptString ;
        ptOutPut =  ptDest ;
        writeLine++ ;
    }
    if ( more ) 
        goto debut ;
}

void _fastcall WriteStringVirtInt ( const char *string, int len )
{
    writeCol =  currCol += len ;
}

void _fastcall WriteString ( const char *string, int len )
{
    if ( !string ) 
        return ;
    if ( !(output > 0 || output == OUTPUT_IN_STRING) ) 
        return ;
    isVirtMod ? WriteStringVirtInt(string, len) : WriteStringInt(string, len);
    sepBeforeV  =  justPutNewLine = justPutSpace = justPutTab = 0 ;
    HasPutWhite =  1 ; /* do it here dont trouble PrintString
                          and provides compatibility for DumpBrainyValue */ 
}

/******************************************************************
    PrintString : WriteString for a pretty printer
   **/
/*******************************************************************/
void _fastcall PrintString ( const char *string, int len )
{
    char    c = *string ;
    
    // int     len ;
    if ( !string ) 
        return ;
    
    // len = strlen(string);
    /* on ne fait rien si la chaine est vide */
    if ( !len ) 
        return ;
    if ( !HasPutWhite && (sepBeforeV || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9' || c == '_' || c == '$') ) 
        isVirtMod ? WriteStringVirtInt(" ") : WriteStringInt(" ");
    WriteString(string);
    c            =  *(string + len - 1);
    HasPutWhite  =  !(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9' || c == '_' || c == '$');
    justPutSpace =  c == ' ' ? 1 : 0 ;
}

void SepBefore ()
{
    sepBeforeV =  1 ;
}

void SepAfter ()
{
    HasPutWhite =  0 ;
}

void NoSep ()
{
    HasPutWhite =  1 ;
}

/******************************************************************
    Tab : Move Current column to next tab
   ***********/
/**********************************************************/
void _fastcall TabInt ()
{
    int NewCol, keepCol ;
    
    keepCol =  writeCol ;
    NewCol  =  TAB_VALUE(currCol, 1);
    if ( NewCol < 0 || NewCol > rightMargin ) 
        return ;
    while ( currCol < NewCol ) {
        WriteStringInt(" "); /* WriteString increments currCol */ 
        HasPutWhite =  1 ;
        justPutSpace++ ;
    }
    if ( NewCol > rightMargin && !keepCol ) {
        
        /* then we go to column 0 */
        while ( currCol ) {
            currCol -= 2 ; /* WriteString will increment currCol*/ 
            WriteStringInt("\b");
        }
        justPutSpace =  0 ;
    }
    writeCol =  keepCol ;
}

void _fastcall TabVirtInt ()
{
    int NewCol, keepCol ;
    
    keepCol =  writeCol ;
    NewCol  =  TAB_VALUE(currCol, 1);
    if ( currCol != NewCol ) {
        HasPutWhite  =  1 ;
        justPutSpace += NewCol - currCol ;
    }
    currCol =  NewCol ;
    if ( NewCol > rightMargin && !keepCol ) {
        
        /* then we go to column 0 */
        currCol      =  0 ;
        justPutSpace =  0 ;
    }
    writeCol =  keepCol ;
}

void _fastcall Tab ()
{
    justPutTab++ ;
    isVirtMod ? TabVirtInt() : TabInt();
}

void _fastcall NTab ( int i )
{
    while ( justPutTab < i ) {
        Tab();
    }
}

/******************************************************************
     Space : put n space
   ***********************************/
/**********************************/
void _fastcall Space ( int i )
{
    int oldJustPutSpace = justPutSpace ; // PrintString will disturb
    
    // justPutSpace
    while ( oldJustPutSpace < i ) {
        PrintString(" ");
        oldJustPutSpace++ ;
    }
    justPutSpace =  oldJustPutSpace ;
}

/******************************************************************
    Mark : Save Current column (used in NewLine)
   ****/
/*****************************************************************/
void _fastcall Mark ()
{
    if ( ptTabTab <= MAXTABTAB ) 
        tabTab [ptTabTab++] =  currCol ;
    else 
        ptTabTab++ ;
}

/******************************************************************
    GotoMark : Goto current tab
   *********************/
/************************************************/
void _fastcall GotoMarkInt ()
{
    int keepCol ;
    
    keepCol =  writeCol ;
    if ( !ptTabTab ) 
        while ( currCol ) {
            currCol -= 2 ; /* WriteString will increment currCol*/ 
            WriteStringInt("\b");
        }
    else if ( ptTabTab <= MAXTABTAB ) {
        while ( currCol > tabTab [ptTabTab - 1] ) {
            currCol -= 2 ; /* WriteString will increment currCol */ 
            WriteStringInt("\b");
        }
        while ( currCol < tabTab [ptTabTab - 1] ) {
            WriteStringInt(" "); /* WriteString will increment currCol */ 
            justPutSpace++ ;
        }
    }
    writeCol =  keepCol ;
}

void _fastcall GotoMarkVirtInt ()
{
    if ( !ptTabTab ) 
        currCol =  0 ;
    else if ( ptTabTab <= MAXTABTAB ) {
        int newCol = tabTab [ptTabTab - 1];
        if ( newCol > currCol ) 
            justPutSpace += newCol - currCol ;
        currCol =  newCol ;
    }
}

void _fastcall GotoMark ()
{
    isVirtMod ? GotoMarkVirtInt() : GotoMarkInt();
}

int _fastcall GetMark ()
{
    if ( !ptTabTab ) 
        return 0 ;
    else if ( ptTabTab <= MAXTABTAB ) 
        return tabTab [ptTabTab - 1];
    return 0 ;
}

/******************************************************************
    Unmark : go back to previous mark
   ***************/
/******************************************************/
void _fastcall UnMarkInt ()
{
    if ( --ptTabTab < 0 ) 
        ptTabTab =  0 ;
    if ( ptTabTab && ptTabTab <= MAXTABTAB && tabTab [ptTabTab - 1] >= writeCol || !ptTabTab && !writeCol ) 
        GotoMarkInt();
}

void _fastcall UnMarkVirtInt ()
{
    if ( --ptTabTab < 0 ) 
        ptTabTab =  0 ;
    if ( ptTabTab && ptTabTab <= MAXTABTAB && tabTab [ptTabTab - 1] >= writeCol || !ptTabTab && !writeCol ) 
        GotoMarkVirtInt();
}

void _fastcall UnMark ()
{
    isVirtMod ? UnMarkVirtInt() : UnMarkInt();
}

void _fastcall ClearTab ()
{
    ptTabTab =  0 ;
}

/******************************************************************
    GotoCol : goto to a given column
   ****************/
/*****************************************************/
void _fastcall GotoColInt ( int col )
{
    int keepCol ;
    
    keepCol =  writeCol ;
    col     -= 1 ; /* columns begin at 1 for user */ 
    if ( col < 0 ) 
        col =  0 ; /* dont allow negative position */ 
    while ( currCol > col ) {
        currCol -= 2 ; /* WriteString will increment currCol */ 
        WriteStringInt("\b");
    }
    while ( currCol < col ) {
        WriteStringInt(" "); /* WriteString will increment currCol */ 
        justPutSpace++ ;
    }
    writeCol =  keepCol ;
}

void _fastcall GotoColVirtInt ( int col )
{
    col -= 1 ; /* columns begin at 1 for user */ 
    if ( col < 0 ) 
        col =  0 ; /* dont allow negative position */ 
    if ( col > currCol ) 
        justPutSpace += col - currCol ;
    currCol =  col ;
}

void _fastcall GotoCol ( int col )
{
    isVirtMod ? GotoColVirtInt(col) : GotoColInt(col);
}

/******************************************************************
   Beginning : looks if we are at beginning of line
   */
/* *******************************************************************/
int _fastcall Beginning ()
{
    return !ptTabTab && currCol == 0 || ptTabTab >= 1 && currCol == tabTab [ptTabTab - 1];
}

/******************************************************************
   NewLine : add a newline to display and go to mark
   */
/*  *******************************************************************/
void _fastcall NewLineInt ()
{
    WriteStringInt("\n");
    writeCol     =  currCol = 0 ;
    justPutSpace =  0 ;
    GotoMarkInt();
}

void _fastcall NewLineVirtInt ()
{
    writeCol     =  currCol = 0 ;
    justPutSpace =  0 ;
    GotoMarkVirtInt();
}

void _fastcall NewLine ()
{
    isVirtMod ? NewLineVirtInt() : NewLineInt();
    currLine++ ;
}

/**************************************************************
    LNewLine : NewLine for a pretty printer
   *************/
/****************************************************/
void LNewLine ( int i )
{
    if ( !(output > 0 || output == OUTPUT_IN_STRING) ) 
        return ;
    
    int nb = i ;
    
    while ( nb-- ) {
        if ( justPutNewLine >= i ) 
            break ;
        isVirtMod ? NewLineVirtInt() : NewLineInt();
        justPutNewLine++ ;
        currLine++ ;
    }
    HasPutWhite =  1 ;
    sepBeforeV  =  0 ;
}

/**************************************************************
   GetString : look if there is a given string in input f*/
/*low
   ***************************************************************/
// static char GetStringErr [MAXLENGTH];
static EString  GetStringErr ;

int _fastcall GetString ( const char *string, int retrieve )
{
    char            *oldpos = stockBuf + ptStockBuf ;
    const char      *keepStr = string ;
    int             keepTokenAhead ;
    register char   *ptBuf, *ptDest ;
    int             oldCol = col ;
    
    while ( *string && c == *string ) {
        NextChar();
        string++ ;
    }
    
    /* if the string is not here or we don't want to retrieve it */
    if ( stockBuf + ptStockBuf > oldpos ) 
        if ( *string || !retrieve ) {
            if ( *string ) {
                keepTokenAhead =  tokenAhead ;
                tokenAhead     =  1 ;
                GetStringErr   =  EString("\"...") + keepStr + "\"";
                PrintError(GetLexString(), (char *)(const char *)GetStringErr, oldLine, line, col, 1, 0);
                tokenAhead =  keepTokenAhead ;
            }
            ptBuf     =  stockBuf + ptStockBuf ;
            ptDest    =  oldBuf + ptOldBuf ;
            *++ptDest =  c ;
            while ( ptBuf > oldpos ) 
                *++ptDest =  *ptBuf-- ;
            c          =  *ptDest-- ;
            ptStockBuf =  ptBuf - stockBuf ;
            ptOldBuf   =  ptDest - oldBuf ;
            col        =  oldCol ;
        } else {
            if ( ptOldBuf < MAXLENGTH - 1 ) 
                oldBuf [++ptOldBuf] =  c ;
            c =  stockBuf [ptStockBuf--];
            if ( 0 && !noErr ) 
                /* not GetStringS */
                ptStockBuf =  -1 ;
        }
    else 
        return 0 ;
    return !*string ;
}

/**************************************************************
    GetStringS : get a string keep a char forward
   *******/
/**********************************************************/
int _fastcall GetStringS ( const char *string, int retrieve )
{
    register int    findString ;
    
    noErr      =  1 ;
    findString =  GetString(string, retrieve);
    noErr      =  0 ;
    if ( findString && retrieve ) 
        NextChar();
    return (findString);
}

/**************************************************************
    GetAChar : buffered input
   ***************************/
/**************************************/
static char intBufInput [MAXLENGTH];
static char *bufInput = intBufInput ; // pointer in input buffer
int         lBufInput = 0 ;           // number of characters in input buffer
int         posBufInput = -1 ;        // position in input buffer
long        posFileInput = 0 ;        // where we will read in file
static int  flagNewLine = 0 ;         // tell to put a newline next time

void ResetBufInput ( char *string )
{
    if ( string ) {
        bufInput     =  string ;
        lBufInput    =  strlen(string);
        posBufInput  =  -1 ;
        posFileInput += lBufInput ;
        flagNewLine  =  0 ;
        if ( lastContextPos && !lastContextPos->nbRef ) 
            FreePos(lastContextPos);
        lastContextPos =  (PFILE_POSITION)0 ;
    } else 
        bufInput =  intBufInput ;
}

char _fastcall GetAChar ()
{
    if ( lBufInput == posBufInput + 1 && input != -1 ) {
        posBufInput =  -1 ;
        lBufInput   =  _read(input, bufInput, MAXLENGTH);
        if ( lBufInput < 0 ) 
            lBufInput =  0 ;
        posFileInput += lBufInput ;
    }
    if ( lastContextPos && !lastContextPos->nbRef ) 
        FreePos(lastContextPos);
    lastContextPos =  (PFILE_POSITION)0 ;
    if ( lBufInput == posBufInput + 1 ) 
        return EOF ;
    else 
        return bufInput [++posBufInput];
}

/**************************************************************
    NextChar : Get a character
   **************************/
/***************************************/
char _fastcall NextChar ()
{
    if ( lastContextPos && !lastContextPos->nbRef ) 
        FreePos(lastContextPos);
    lastContextPos =  (PFILE_POSITION)0 ;
    if ( ptStockBuf < MAXLENGTH - 1 ) 
        stockBuf [++ptStockBuf] =  c ;
    if ( ptOldBuf != -1 ) {
        if ( (c = oldBuf [ptOldBuf--]) == '\n' ) {
            firstOnLine =  1 ;
            col         =  0 ;
        } else 
            col++ ;
    } else {
        col++ ;
        if ( flagNewLine ) {
            flagNewLine =  0 ;
            line++ ;
            firstOnLine =  1 ;
            col         =  0 ;
            c           =  '\n';
        } else if ( (c = GetAChar()) == '\n' ) {
            flagNewLine =  1 ;
            c           =  '\r';
        } /* for comments */ 
    }
    return (c);
}

/**************************************************************
    UnputBuf
   ********************************************/
/*********************/
void _fastcall UnputBuf ()
{
    register char   *ptSource, *ptDest ;
    
    oldBuf [++ptOldBuf] =  c ;
    col-- ;
    ptSource =  stockBuf + ptStockBuf ;
    ptDest   =  oldBuf + ptOldBuf + 1 ;
    while ( ptSource >= stockBuf ) 
        if ( ptDest < oldBuf + MAXLENGTH ) {
            *ptDest++ =  *ptSource-- ;
            col-- ;
        } else 
            ptSource-- ;
    ptOldBuf =  ptDest - oldBuf - 1 ;
    NextChar();
    ptStockBuf =  -1 ;
}

static int  stockPtStockBuf ;

/**************************************************************
    FreezeBuf
   *******************************************/
/**********************/
void FreezeBuf ()
{
    stockPtStockBuf =  ptStockBuf ;
}

/**************************************************************
    FreeBuf
   *********************************************/
/********************/
void FreeBuf ()
{
    ptStockBuf =  stockPtStockBuf ;
    if ( lastContextPos && !lastContextPos->nbRef ) 
        FreePos(lastContextPos);
    lastContextPos =  (PFILE_POSITION)0 ;
}

/**************************************************************
    UnputChar
   *******************************************/
/**********************/
void _fastcall UnputChar ( int numb )
{
    register char   *ptSource, *ptDest ;
    
    oldBuf [++ptOldBuf] =  c ;
    ptSource            =  stockBuf + ptStockBuf ;
    ptDest              =  oldBuf + ptOldBuf + 1 ;
    while ( ptSource >= stockBuf && numb-- ) 
        if ( ptDest < oldBuf + MAXLENGTH ) 
            *ptDest++ =  *ptSource-- ;
    ptOldBuf =  ptDest - oldBuf - 1 ;
    NextChar();
    ptStockBuf =  ptSource - stockBuf ;
}

/**************************************************************
      ExtUnputBuf : Unput the token ahead outside Lex()
   ********/
/*********************************************************/
int _fastcall ExtUnputBuf ()
{
    if ( tokenAhead && tokenAhead != -1 ) {
        UnputBuf();
        tokenAhead =  0 ;
    }
    return 1 ;
}

/* static char buff_inter [512]; */
/**************************************************************
      BrainyValue : Find a leaf
   ********************************/
/*********************************/
char    *metaNullString = (char *)0 ;

static  inline char *_fastcall intBrainyValue ( PPTREE tree )
{
    
    /* arity of TERM_TREE is 0 */
    while ( treearity(tree) ) {
        tree =  (PPTREE)SON_READ(tree, 1);
    }
    if ( NumberTree(tree) == TERM_TREE ) {
        
        /* el le 14/12/93 why troubling myself with strcpy */
        return CacheAddrRead(SON_READ(tree, 1));
    } else if ( NumberTree(tree) == CLASS_TREE ) {
        const char  *ret = APPLY_CLASS(tree, TreeClass, Value());
        if ( ret ) 
            return (char *)ret ;
    }
    return NULL_STRING();
}

/**************************************************************
      Value : get the value of a leaf , a string
   ***************/
/**************************************************/
char *_fastcall Value ( PPTREE tree )
{
    return intBrainyValue(tree);
}

char *_fastcall BrainyValue ( PPTREE tree )
{
    return intBrainyValue(tree);
}

/**************************************************************
      DumpBrainyValue : Find a leaf and print it
   ***************/
/**************************************************/
void _fastcall DumpBrainyValueInt ( PPTREE tree )
{
    while ( tree && NumberTree(tree) != TERM_TREE && NumberTree(tree) != CLASS_TREE ) 
        tree =  (PPTREE)SON_READ(tree, 1);
    if ( tree ) 
        if ( NumberTree(tree) == TERM_TREE ) 
            PrintString(CacheAddrRead(SON_READ(tree, 1)));
        else 
            PrintString(APPLY_CLASS(tree, TreeClass, Value()));
}

void _fastcall DumpBrainyValueVirtInt ( PPTREE tree )
{
    while ( tree && NumberTree(tree) != TERM_TREE && NumberTree(tree) != CLASS_TREE ) 
        tree =  (PPTREE)SON_READ(tree, 1);
    if ( tree ) 
        if ( NumberTree(tree) == TERM_TREE ) 
            PrintString(CacheAddrRead(SON_READ(tree, 1)));
        else 
            PrintString(APPLY_CLASS(tree, TreeClass, Value()));
}

void _fastcall DumpBrainyValue ( PPTREE tree )
{
    isVirtMod ? DumpBrainyValueVirtInt(tree) : DumpBrainyValueInt(tree);
}

/**************************************************************
   PatchNode : translate a node from a language to anothe*/
/*r
   ***************************************************************/
void PatchNode ( PPTREE tree, PLANG language, int number )
{
    if ( language ) 
        CacheWrite(tree, number | language->languageMask);
    else 
        CacheWrite(tree, number);
}

/**************************************************************
    MakeTree : Creates a tree of a given arity
   **********/
/*******************************************************/
PPTREE _fastcall MakeTree ( int NameNumber, int arity )
{
    register PPTREE myPoint ;
    register int    i ;
    char            *addr ;
    int             *addrInt ;
    
    myPoint =  MallocNodeTree(arity);
    addr    =  (char *)CacheAddrReadM(myPoint);
    memset(addr, 0, ENTETE_SIZE + arity * sizeof(PPTREE));
    addrInt  =  (int *)(addr + sizeof(int));
    *addrInt =  arity << REF_BIT ;
    addrInt-- ; /* = (int *)addr */ 
    *addrInt =  NameNumber | languageMask ;
    return (myPoint);
}

/**************************************************************
    AllocString : Allocates a string
   ********************/
/*********************************************/
char *_fastcall AllocString ( const char *string )
{
    register int    i = strlen(string);
    register char   *myString ;
    
    if ( (myString = (char *)malloc(i + 1)) ) {
        memcpy(myString, string, i + 1);
        return (myString);
    } else {
        MetaExit(3, "String Allocation Error\n");
    }
    return 0 ;
}

/**************************************************************
   MakeString : Creates a string that can be used in tree*/
/*s
   ***************************************************************/
PPTREE _fastcall LMakeString ( const char *string, int length )
{
    register void   *myString ;
    register PPTREE tree ;
    
    myString =  (void *)MallocString(length + 1);
    memcpy(CacheAddrRead(myString), string, length);
    *(CacheAddrRead(myString) + length) =  '\0';
    tree                                =  MakeTree(TERM_TREE, 2);
    CacheWrite((char *)tree + sizeof(int), 0); /* arity of TERM_TREE is 0 */ 
    
    /* initialisations of pointer is done in MakeTree */
    SON_WRITE(tree, 1, myString); /* string */ 
    SON_WRITE(tree, 2, (void *)((char *)0 + length)); /* length of string */ 
    return (tree);
}

PPTREE _fastcall MakeString ( const char *string )
{
    return LMakeString(string, strlen(string));
}

/**************************************************************
    MakeTreeClass : make a tree class node
   **************/
/***************************************************/
PPTREE _fastcall MakeTreeClass ( const TreeClass &classVal )
{
    return classVal.PutInTree();
}

/**************************************************************
    MakeTreeRef : make a reference on another tree
   ******/
/***********************************************************/
PPTREE _fastcall MakeTreeRef ( PPTREE reference )
{
#   if 0
        
        register PPTREE tree ;
        
        tree =  MakeTree(REF_TREE, 1);
        CacheWrite((int *)((char *)tree + sizeof(int)), 0); /* arity is 0 to hide reference*/ 
        
        /* initialisations of pointer is done in MakeTree */
        SON_WRITE(tree, 1, reference); /* reference */ 
        return (tree);
#   else 
        
        TreeRef *theRef ; // reference
        
        // create reference
        theRef =  new TreeRef(reference);
        
        // return new tree
        return MakeTreeClass(*theRef);
#   endif
}

/**************************************************************
    GetTreeRef : get the reference on another tree
   ******/
/***********************************************************/
PPTREE _fastcall GetTreeRef ( PPTREE reference )
{
#   if 0
        return (PPTREE)SON_READ(reference, 1);
#   else 
        return APPLY_CLASS(reference, TreeRef, Link());
#   endif
}

/**************************************************************
    ReplaceTree : replace nth son of dad with son
   *******/
/**********************************************************/
PPTREE _fastcall ReplaceTree ( PPTREE dad, int n, PPTREE son )
{
    register PPTREE oldSon = SonTree(dad, n);
    int             pos ;
    PPTREE          oldDad ;
    
    if ( !dad ) {
        
        // protect against leaks
        StoreRef(son);
        return (PPTREE)0 ;
    }
    
    /* check that number for son is valid */
    if ( n < 0 || n > treearity(dad) ) {
        MetaExit(2, "Abort : Invalid Son\n");
    }
    SON_WRITE(dad, n, son);
    
    /* if son exists
       - delete son in oldDad
       - put dad in son */
    if ( son && son != (PPTREE) -1 ) {
        pos =  PosTree(son);
        if ( (oldDad = FatherTree(son)) && (oldDad != dad || pos != n) ) 
            SON_WRITE(oldDad, pos, (PPTREE)0);
        SON_WRITE(son, -1, dad);
    }
    
    /* if oldSon exists and is not son
       - dad is no longer dad
       - try to free it */
    if ( oldSon && oldSon != (PPTREE) -1 && oldSon != son ) {
        SON_WRITE(oldSon, -1, (PPTREE)0);
        FreeTree(oldSon);
    }
    return (dad);
}

/**************************************************************
    SReplaceTree : replace nth son of dad with son
   ******/
/***********************************************************/
PPTREE _fastcall SReplaceTree ( PPTREE dad, int n, PPTREE son )
{
    if ( !dad ) 
        return (PPTREE)0 ;
    
    /* check that number for son is valid */
    if ( n < 0 || n > treearity(dad) ) {
        MetaExit(2, "Abort : Invalid Son\n");
    }
    SON_WRITE(dad, n, son);
    return (dad);
}

/**************************************************************
    NumberTree : Number of node of a tree
   ***************/
/**************************************************/
#ifndef NUMBER_TREE
    int _fastcall NumberTree ( PPTREE tree )
    {
        return tree ? CacheRead(tree) & NODE_MASK : -100 ;
    }
#endif

/**************************************************************
    NumberRef : Number of ref on a tree
   *****************/
/************************************************/
int _fastcall NumberRef ( PPTREE tree )
{
    return tree ? CacheRead((int *)((char *)tree + sizeof(int))) & REF_MASK : 0 ;
}

/**************************************************************
    SonTree : goto to the nth son of tree
   ***************/
/**************************************************/
#define MSonTree(node, n) * ((PPTREE *) (((char *)node) + 2 * sizeof(int) \
+ 2 * sizeof(PPTREE) + (n-1) * sizeof(PPTREE)))

PPTREE _fastcall SonTree ( PPTREE tree, int n )
{
    if ( !tree ) 
        return (PPTREE)0 ;
    
    /* check that number for son is valid */
    if ( n < 0 || n > treearity(tree) ) {
        MetaExit(2, "Abort : Invalid Son\n");
    }
    return (PPTREE)SON_READ(tree, n);
}

/**************************************************************
    FatherTree : goto to the father of a tree
   ***********/
/******************************************************/
#define MFatherTree(node) *(((int *)node)+2)

PPTREE _fastcall FatherTree ( PPTREE tree )
{
    if ( !tree || tree == (PPTREE) -1 ) 
        return (PPTREE)0 ;
    return (PPTREE)SON_READ(tree, -1);
}

/* go up n times ; if n == -1 then go to the root */
PPTREE _fastcall NFatherTree ( PPTREE tree, int nb )
{
    PPTREE  treeFirst ;
    
    if ( !tree || tree == (PPTREE) -1 ) 
        return (PPTREE)0 ;
    if ( nb >= 0 ) 
        while ( nb-- && tree ) 
            tree =  (PPTREE)SON_READ(tree, -1);
    else 
        while ( (treeFirst = (PPTREE)SON_READ(tree, -1)) ) 
            tree =  treeFirst ;
    return tree ;
}

/* go up searching or avoiding a node */
PPTREE _fastcall SFatherTree ( PPTREE tree, int nb )
{
    if ( !tree || tree == (PPTREE) -1 ) 
        return (PPTREE)0 ;
    if ( nb >= 0 ) 
        while ( tree && NumberTree(tree) != nb ) 
            tree =  (PPTREE)SON_READ(tree, -1);
    else {
        nb =  -nb - 1 ;
        while ( tree && NumberTree(tree) == nb ) 
            tree =  (PPTREE)SON_READ(tree, -1);
    }
    return tree ;
}

/**************************************************************
    PosTree : give position of a tree
   *******************/
/**********************************************/
int _fastcall PosTree ( PPTREE tree )
{
    int             i ;
    PPTREE          father = FatherTree(tree);
    register int    *addr ;
    
    if ( !father ) 
        return 0 ;
    i    =  treearity(father);
    addr =  (int *)CacheAddrRead(father);
    while ( MSonTree(addr, i) != tree && i > 0 ) 
        i-- ;
    return i ;
}

/**************************************************************
    ListElem : Create a list element
   ********************/
/*********************************************/
PPTREE _fastcall ListElem ( PPTREE son )
{
    register PPTREE myPoint ;
    
    myPoint =  (PPTREE)MallocNodeTree(2);
    
    /* pointers */
    SON_WRITE(myPoint, 0, (PPTREE)0); /* comments */ 
    SON_WRITE(myPoint, 1, son);
    SON_WRITE(myPoint, 2, (PPTREE)0);
    SON_WRITE(myPoint, -1, (PPTREE)0); /* father */ 
    
    /* informations */
    CacheWrite((char *)myPoint + sizeof(int), 2 << REF_BIT);
    CacheWrite((char *)myPoint, languageMask);
    if ( son && son != (PPTREE) -1 ) {
        PPTREE  oldDad ;
        if ( (oldDad = FatherTree(son)) ) 
            SON_WRITE(oldDad, PosTree(son), 0);
        SON_WRITE(son, -1, myPoint); /* father */ 
    }
    return (myPoint);
}

/**************************************************************
    AddList : Add an element to a list
   ******************/
/***********************************************/
PPTREE _fastcall AddList ( PPTREE list, PPTREE elem )
{
    register PPTREE ptTree1, ptTree2 ;
    
    if ( list && NumberTree(list) == LIST ) {
        ptTree1 =  ptTree2 = list ;
        while ( (ptTree1 = (PPTREE)SON_READ(ptTree1, 2)) ) 
            ptTree2 =  ptTree1 ;
        ReplaceTree(ptTree2, 2, ListElem(elem));
    } else if ( !list ) 
        list =  ListElem(elem);
    else {
        PPTREE          father = FatherTree(list);
        unsigned int    rank = ranktree(list);
        list =  ListElem(list);
        ReplaceTree(list, 2, elem);
        if ( father != (PPTREE)0 ) 
            ReplaceTree(father, rank, list);
    }
    return (list);
}

/**************************************************************
    AddListList : Add a list to a list
   ******************/
/***********************************************/
PPTREE _fastcall AddListList ( PPTREE list, PPTREE elem )
{
    register PPTREE ptTree1, ptTree2 ;
    
    if ( list ) {
        ptTree1 =  ptTree2 = list ;
        while ( (ptTree1 = (PPTREE)SON_READ(ptTree1, 2)) ) 
            ptTree2 =  ptTree1 ;
        ReplaceTree(ptTree2, 2, elem);
    } else 
        list =  elem ;
    return (list);
}

/**************************************************************
    ListPermutate : permutate a list
   ********************/
/*********************************************/
PPTREE ListPermutate ( PPTREE list )
{
    PPTREE  listResult(0);
    PPTREE  nextList ;
    
    if ( NumberTree(list) != LIST ) 
        return list ;
    
    unsigned int    pos = 0 ;
    PPTREE          oldDad = FatherTree(list);
    
    // remember old dad
    if ( oldDad ) 
        pos =  PosTree(list);
#   if defined(VISUAL) || defined(BORLAND)
        if ( addRefCritical ) 
            WaitForSingleObject(addRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            EnterCriticalSection(&addRefCritical);
#   endif
    
    // permutate list
    while ( list ) {
        nextList =  (PPTREE)SON_READ(list, 2);
        SReplaceTree(list, 2, listResult);
        if ( listResult ) 
            SON_WRITE(listResult, -1, list);
        listResult =  list ;
        list       =  nextList ;
    }
    
    // put back list as son of its father
    if ( oldDad ) {
        SReplaceTree(oldDad, pos, listResult);
        SON_WRITE(listResult, -1, oldDad);
    } else 
        SON_WRITE(listResult, -1, (PPTREE)0);
#   if defined(BORLAND) || defined(VISUAL)
        if ( addRefCritical ) 
            ReleaseSemaphore(addRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            LeaveCriticalSection(&addRefCritical);
#   endif
    
    // return value
    return listResult ;
}

/**************************************************************
    ListLength : compute the length of a list
   ***********/
/******************************************************/
int _fastcall ListLength ( PPTREE list )
{
    register int    i = 1 ;
    
    if ( !list ) 
        return 0 ;
    if ( list && NumberTree(list) == LIST ) 
        while ( (list = (PPTREE)SON_READ(list, 2)) ) 
            i++ ;
    else 
        return 0 ;
    return (i);
}

/**************************************************************
    ListFind : Find an element in a list
   ****************/
/*************************************************/
PPTREE ListFind ( PPTREE list, PPTREE name )
{
    char    *theName ;
    
    if ( !name || !list ) 
        return (PPTREE)0 ;
    theName =  AllocString(Value(name));
    if ( NumberTree(list) == LIST ) 
        while ( list ) {
            if ( !strcmp(Value(list), theName) ) {
                free(theName);
                return sontree(list, 1);
            }
            list =  SonTree(list, 2);
        }
    free(theName);
    return (PPTREE)0 ;
}

/**************************************************************
    PrintError : print the first error
   ******************/
/***********************************************/
int         xErr = 0, yErr = 0 ;       /* current column and line when error
                                          is found */ 

/* JPJ << */
static int  yErrBeg = 0 ;              /* beginning line for the token yErrBeg <= yErr */ 
static char *tokErr = 0 ;              /* content of the error most generally a token
                                          which was not found */ 
static char *lastDumpedErr = 0 ;       /* last error token dumped */ 
static int  lastDumpedLine ;           /* last dumped error line */ 
static int  lengthTokErr ;             /* length of the token */ 

/* JPJ >> */
/* EL << */
static int  typeErr ;                  /* type of the error 0<= type <= 3
                                          The error message depends on the type */ 
static char *searchedErr = (char *)0 ; /* the searched thing */ 

/* EL >> */
char        *textErr = (char *)0, *endErr ;
int         firstError = 1 ;
static char *theError ;
static int  theErrorLine ;

/* static int  lengthTextError ;*/
/* JPJ << */
/* See below GetErrorText, GetErrorLine and ResetError */
#if 0
    char *GetError ()
    {
        return theError ;
    }
    
    int GetErrorLine ()
    {
        return theErrorLine ;
    }
#endif

/* JPJ << */
/* EL << */
void _fastcall PrintError ( const char *token, const char *expected, int oldLine, int line, int col, int type, int print )
{
    int length ;
    
    if ( line > yErr || line == yErr && col > xErr ) {
        xErr    =  col ;
        yErr    =  line ;
        typeErr =  type ;
        yErrBeg =  yErr ;
        length  =  strlen(token);
        if ( !tokErr || lengthTokErr < length ) {
            if ( tokErr ) 
                free(tokErr);
            tokErr       =  (char *)malloc(length + 1);
            lengthTokErr =  length ;
        }
        
        // suppress control chars from displayed string
        while ( length > 0 && *(token + length - 1) < 27 ) 
            length -= 1 ;
        if ( length > 0 ) 
            memcpy(tokErr, token, length);
        *(tokErr + length) =  '\0';
        
        /* The expected string are generated in the code so i can use
           a pointer on them */
        searchedErr        =  (char *)expected ;
    }
    if ( firstError && print ) {
        if ( lastDumpedErr ) 
            free(lastDumpedErr);
        lastDumpedErr  =  AllocString(tokErr);
        lastDumpedLine =  yErrBeg ;
        DumpError();
#       if 0
            MetaExit(3, "Error while parsing");
#       endif
        firstError =  0 ;
    }
}

/* EL >> */
/**************************************************************
      DumpError : dump the current error and reset
   *************/
/****************************************************/
static int  sumAllError = 0 ; /* number of printed errors */ 
bool        _inhibit_exit_on_error = false ;

void _fastcall DumpError ()
{
    int length ;
    
    /* if no new error do nothing */
    if ( typeErr == -1 ) 
        return ;
    if ( textErr ) 
        free(textErr);
    if ( !tokErr ) {
        tokErr =  AllocString("");
    }
    textErr =  (char *)malloc(strlen(tokErr) + 2 * MAXLENGTH);
    if ( emacsCompatibleError ) {
        switch ( typeErr ) {
            case 0 : 
                sprintf(textErr, "%s:%d: Unexpected \"%s\"\n", lastFileRead.c_str(), yErrBeg, tokErr);
                break ;
            case 1 : 
                sprintf(textErr, "%s:%d: Unexpected \"%s\" instead of %s\n", lastFileRead.c_str(), yErrBeg, tokErr, searchedErr);
                break ;
            case 2 : 
                sprintf(textErr, "%s:%d: Bad %s \n", lastFileRead.c_str(), yErrBeg, searchedErr);
                break ;
            default : 
                *textErr = '\0';
                break ;
        }
    } else {
        switch ( typeErr ) {
            case 0 : 
                sprintf(textErr, " Unexpected \"%s\"  at line %d \n", tokErr, yErrBeg);
                break ;
            case 1 : 
                sprintf(textErr, " Unexpected \"%s\"  at line %d  instead of %s\n", tokErr, yErrBeg, searchedErr);
                break ;
            case 2 : 
                sprintf(textErr, " Bad %s at line %d \n", searchedErr, yErrBeg);
                break ;
            default : 
                *textErr = '\0';
                break ;
        }
    }
    if ( (length = strlen(textErr)) < 160 ) {
        endErr =  textErr ;
        for (; endErr - textErr < length - 1 ; endErr++ ) 
            if ( *endErr == '\n' || *endErr == '\r' ) 
                *endErr =  ' ';
    }
    if ( yErr > theErrorLine ) 
        _write(2, textErr, length);
    theError     =  textErr ;
    theErrorLine =  yErr ;
    xErr         =  yErr = 0 ;
    typeErr      =  -1 ;
    if ( sumAllError >= 20 ) {
        if ( !_inhibit_exit_on_error ) 
            MetaExit(3, "Too Many Errors While Parsing");
    }
    sumAllError++ ;
    firstError =  0 ;
}

/* JPJ << */
/**************************************************************
      GetErrorToken : return the token of the current error
   ****/
/*************************************************************/
char *_fastcall GetErrorToken ()
{
    return lastDumpedErr ;
}

/**************************************************************
      GetErrorLine : return the line of the current error
   ******/
/***********************************************************/
int _fastcall GetErrorLine ()
{
    return lastDumpedLine ;
}

/* << LF */
/**************************************************************
   GetTypeErr : return the text of the current error
     ******/
/***********************************************************/
int _fastcall GetTypeErr ()
{
    return typeErr ;
}

/**************************************************************
   GetExpectedToken : return the token we are waiting for
   */
/*************************************************************/
char *_fastcall GetExpectedToken ()
{
    return searchedErr ;
}

/* LF >> */
/**************************************************************
      ResetError : reset the current error
   *********************/
/********************************************/
void _fastcall ResetError ()
{
    theError     =  textErr ;
    theErrorLine =  yErr ;
    xErr         =  yErr = 0 ;
    if ( textErr ) 
        *textErr =  '\0';
    typeErr =  0 ; /* By LF 21/03/97 */ 
}

/* JPJ >> */
/**************************************************************
      InitOutput : init output variables before writing
   ********/
/*********************************************************/
void InitOutput ()
{
    currCol        =  currLine = 0 ;
    ptTabTab       =  0 ;
    ptOutPut       =  outBuf ;
    sepBeforeV     =  0 ;
    HasPutWhite    =  1 ;
    justPutNewLine =  justPutSpace = justPutTab = 0 ;
    output         =  1 ;
    storLine       =  storCol = -1 ;
    tabValue       =  4 ;
    rightMargin    =  256 ;
}

static char *metaName = 0 ;
static int  alreadyInitialized = 0 ;

class InitForUnix {
    
    public :
    
        InitForUnix ()
        {
#           ifndef ON_W
                MetaInit((char *)"InitForUnix");
#           endif
        }
}            initForUnix ;

void MetaInit ( const char *name )
{
    if ( alreadyInitialized ) 
        return ;
    else {
        alreadyInitialized =  1 ;
    }
    InitOutput();
    CacheInit();
    InitStoreRef();
    line =  oldLine = 1 ;
    if ( !name ) {
        name =  NULL_STRING();
    }
    metaName =  AllocString(name);
    
    EString storeRefName (name) ;
    EString jumpName (name) ;
    EString addRefName (name) ;
    
    storeRefName += "_metaStoreRef";
    addRefName   += "_metaAddRef";
    jumpName     += "_jumpCritical";
#   if defined(VISUAL) || defined(BORLAND)
        
        DWORD               ident ;    // ident
        SECURITY_ATTRIBUTES security ; // security
        
        security.nLength              =  sizeof(SECURITY_ATTRIBUTES);
        security.lpSecurityDescriptor =  0 ;
        security.bInheritHandle       =  true ;
        storeRefCritical              =  CreateSemaphore(&security, 1, 1, storeRefName);
        jumpCritical                  =  CreateSemaphore(&security, 1, 1, jumpName);
        addRefCritical                =  CreateSemaphore(&security, 1, 1, addRefName);
#   elif defined(HAS_POSIX_SEMAPHORE)
        InitializeCriticalSection(&storeRefCritical);
        InitializeCriticalSection(&jumpCritical);
        InitializeCriticalSection(&addRefCritical);
#   endif
}

void MetaEnd ()
{
    Flush();
    ClearStoreRef();
    CacheEnd();
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            CloseHandle(storeRefCritical);
        if ( addRefCritical ) 
            CloseHandle(addRefCritical);
        if ( jumpCritical ) 
            CloseHandle(jumpCritical);
        storeRefCritical =  jumpCritical = addRefCritical = 0 ;
#   elif defined(HAS_POSIX_SEMAPHORE)
        DeleteCriticalSection(&storeRefCritical);
        DeleteCriticalSection(&jumpCritical);
        DeleteCriticalSection(&addRefCritical);
        storeRefCritical =  jumpCritical = addRefCritical = 0 ;
#   endif
    alreadyInitialized =  0 ;
}

extern char     c ;
extern int      input ;

/**************************************************************
      SavePos : save position before a backtrack
   ***************/
/**************************************************/
PFILE_POSITION  lastContextPos = (PFILE_POSITION)0 ;
PFILE_POSITION  FreeContextPos = (PFILE_POSITION)0 ;

long CurrFilePosition ()
{
    return posFileInput - lBufInput + posBufInput + 1 ;
}

void CurrFilePosition ( long pos )
{
    _lseek(input, pos, SEEK_SET);
    posFileInput =  pos ;
    posBufInput  =  -1 ;
    lBufInput    =  0 ;
    c            =  NextChar();
}

/* allocation of a context position */
static  PFILE_POSITION AllocateContextPos ()
{
    
    /* return an allocated free context pos in free list
       or allocate a new one */
    if ( FreeContextPos ) {
        PFILE_POSITION  inter = FreeContextPos ;
        FreeContextPos =  FreeContextPos->next ;
        return inter ;
    } else {
        return (PFILE_POSITION)malloc(sizeof(FILE_POSITION));
    }
}

static  void _fastcall FreeTheContextPos ( PFILE_POSITION context )
{
    context->next  =  FreeContextPos ;
    FreeContextPos =  context ;
}

PFILE_POSITION _fastcall SavePos ()
{
    PFILE_POSITION  myPosition ;
    
    /* if we didn't move since last time return last context */
    if ( lastContextPos ) {
        if ( tokenAhead == lastContextPos->tokenAhead ) {
            lastContextPos->nbRef++ ;
            return lastContextPos ;
        } else if ( !lastContextPos->nbRef ) 
            FreePos(lastContextPos);
    }
    
    /* allocate a new context */
    myPosition         =  AllocateContextPos();
    
    /* save position */
    myPosition->oldPos =  ptOldBuf ;
    
    /* if there is something in the string save it */
    if ( ptOldBuf != -1 ) {
        if ( ptOldBuf < MAXLENGTH ) 
            oldBuf [ptOldBuf + 1] =  '\0';
        else 
            oldBuf [ptOldBuf] =  '\0';
        myPosition->string =  (char *)AllocString(oldBuf);
    }
    
    /* save position */
    myPosition->oldPosStock =  ptStockBuf ;
    
    /* if there is something in the string save it */
    if ( ptStockBuf != -1 ) {
        if ( ptStockBuf >= MAXLENGTH - 1 ) 
            ptStockBuf =  MAXLENGTH - 2 ;
        stockBuf [ptStockBuf + 1] =  '\0';
        myPosition->stringStock   =  (char *)AllocString(stockBuf);
    }
    myPosition->charAhead   =  c ;
    myPosition->position    =  posFileInput - lBufInput + posBufInput + 1 ;
    myPosition->line        =  line ;
    myPosition->col         =  col ;
    myPosition->firstOnLine =  (char)firstOnLine ;
    myPosition->comm        =  listComm ;
    myPosition->lastTree    =  _lastTree ;
    myPosition->tokenAhead  =  (char)tokenAhead ;
    myPosition->lexElvalue  =  lexEl.Value ;
    if ( tokenAhead ) 
        myPosition->lexElstring =  AllocString(lexEl.string());
    else 
        myPosition->lexElstring =  (char *)0 ;
    myPosition->flagNewLine =  (char)flagNewLine ;
    myPosition->nbRef       =  1 ;
    
    /* indicates that we are here for context sharing */
    lastContextPos          =  myPosition ;
    return (myPosition);
}

/**************************************************************
      RestorePos : restore position after a backtrack
   **********/
/*******************************************************/
int _fastcall RestorePos ( PFILE_POSITION myPosition )
{
    PCOMM_ELEM  ptComm ;
    
    /* if we have allready restored it do nothing */
    if ( lastContextPos == myPosition ) {
        tokenAhead =  lastContextPos->tokenAhead ;
        
        /* free comm collected by failed rules */
        ptComm     =  listComm ;
        while ( ptComm && ptComm->collected > _funcLevel ) {
            ptComm->collected =  0 ;
            
            /* EL the 1/12/93 */
            ptComm            =  ptComm->next ;
        }
        return 1 ;
    }
    c =  myPosition->charAhead ;
    if ( myPosition->position >= posFileInput - lBufInput && myPosition->position <= posFileInput ) {
        posBufInput =  myPosition->position - posFileInput + lBufInput - 1 ;
    } else {
        _lseek(input, myPosition->position, SEEK_SET);
        posFileInput =  myPosition->position ;
        posBufInput  =  -1 ;
        lBufInput    =  0 ;
    }
    flagNewLine =  myPosition->flagNewLine ;
    ptOldBuf    =  myPosition->oldPos ;
    
    /* restore oldBuf if not empty */
    if ( ptOldBuf != -1 ) 
        strcpy(oldBuf, myPosition->string);
    else 
        *oldBuf =  '\0';
    ptStockBuf =  myPosition->oldPosStock ;
    
    /* restore stockBuf if not empty */
    if ( ptStockBuf != -1 ) 
        strcpy(stockBuf, myPosition->stringStock);
    else 
        *stockBuf =  '\0';
    oldLine     =  line = myPosition->line ;
    col         =  myPosition->col ;
    firstOnLine =  myPosition->firstOnLine ;
    _lastTree   =  myPosition->lastTree ;
    storLine =  -1, storCol =  -1 ;
    while ( listComm && listComm != myPosition->comm && (!listComm->collected || listComm->collected > _funcLevel) ) {
        
        /* FreeTree(listComm -> content);*/
        FreeHeadComm();
    }
    
    /* if comm have been collected by rules who are in error undo
       this */
    ptComm =  listComm ;
    while ( ptComm && ptComm->collected > _funcLevel ) {
        ptComm->collected =  0 ;
        
        /* EL the 1/12/93 */
        ptComm            =  ptComm->next ;
    }
    
    /* */
    lexEl.Value =  myPosition->lexElvalue ;
    tokenAhead  =  myPosition->tokenAhead ;
    if ( tokenAhead ) {
        lexEl.Erase();
        lexEl.AddString(myPosition->lexElstring);
    }
    
    /* indicates that we are here */
    if ( lastContextPos && !lastContextPos->nbRef ) 
        FreePos(lastContextPos);
    lastContextPos =  myPosition ;
    return 1 ;
}

void _fastcall FreePos ( PFILE_POSITION myPosition )
{
    myPosition->nbRef-- ;
    
    /* if this context is not referenced free it */
    if ( myPosition->nbRef <= 0 ) {
        
        /* we could still exploit it in a cycle Restore Save
           if nbRef < 0 we really want to free it */
        if ( lastContextPos == myPosition && myPosition->nbRef == 0 ) 
            return ;
        if ( myPosition->oldPos != -1 ) {
            free(myPosition->string);
            myPosition->string =  (char *)0 ;
        }
        if ( myPosition->oldPosStock != -1 ) {
            free(myPosition->stringStock);
            myPosition->stringStock =  (char *)0 ;
        }
        if ( myPosition->lexElstring ) {
            free(myPosition->lexElstring);
            myPosition->lexElstring =  (char *)0 ;
        }
        if ( myPosition == lastContextPos ) 
            lastContextPos =  0 ;
        FreeTheContextPos(myPosition);
    }
}

static PLIST_TREE   listTree = (PLIST_TREE)0 ;

/**************************************************************
      AllocListTree : Alloc a list tree elem
   *******************/
/**********************************************/
PLIST_TREE _fastcall AllocListTree ( PPTREE elem, PLIST_TREE list )
{
    PLIST_TREE  list_elem ;
    
    if ( listTree ) {
        list_elem =  listTree ;
        listTree  =  listTree->Next ;
    } else 
        list_elem =  (PLIST_TREE)malloc(sizeof(LIST_TREE));
    list_elem->Next =  list ;
    list_elem->tree =  elem ;
    return list_elem ;
}

/**************************************************************
      MulFreeTree : free many trees without double free
   ********/
/*********************************************************/
void _fastcall MulFreeTreeInt ( PLIST_TREE list )
{
    PLIST_TREE          deb, end ;
    register PLIST_TREE curr ;
    PPTREE              pTree, father, headLastTree ;
    
    // will look if _lastTree still exists
    if ( _lastTree && _lastTree != (PPTREE) -1 ) {
        headLastTree =  _lastTree ;
        while ( (father = FatherTree(headLastTree)) ) {
            headLastTree =  father ;
        }
    } else 
        headLastTree =  (PPTREE)0 ;
    deb =  end = list ;
    while ( deb ) {
        pTree =  deb->tree ;
        if ( !pTree || pTree == (PPTREE) -1 ) 
            goto fin ;
        while ( (father = FatherTree(pTree)) != (PPTREE)0 ) 
            pTree =  father ;
        for ( curr = list ; curr != end ; curr =  curr->Next ) 
            if ( curr->tree == pTree ) 
                goto fin ;
        if ( end->tree != pTree ) {
            end->tree =  pTree ;
        }
        end =  end->Next ;
    fin : 
        deb = deb->Next ;
    }
    
    // look if _lastTree will not be freed
    for ( curr = list ; curr != end ; curr =  curr->Next ) {
        if ( curr->tree == headLastTree ) 
            _lastTree =  (PPTREE)0 ;
    }
    
    // free all trees
    for ( curr = list ; curr != end ; curr =  curr->Next ) {
        if ( curr ) 
            deb =  curr ;
        FreeTree(curr->tree);
    }
    
    // search last in list
    for ( curr = deb ; curr ; curr =  curr->Next ) 
        deb =  curr ;
    deb->Next =  listTree ;
    listTree  =  list ;
}

#if !defined(VARARGS_2)
    void MulFreeTree ( int va_alist, ... )
    {
        va_list     arg_marker ;
        PPTREE      ptTree ;
        int         nbTree ;
        PLIST_TREE  list = (PLIST_TREE)0 ;
        
        va_start(arg_marker);
        nbTree =  (int)va_arg(arg_marker,int);
        while ( nbTree-- ) {
            ptTree =  (PPTREE)va_arg(arg_marker,PPTREE);
            if ( ptTree && ptTree != (PPTREE) -1 ) 
                list =  AllocListTree(ptTree, list);
        }
        if ( list ) 
            MulFreeTreeInt(list);
    }
#else 
    void MulFreeTree ( int nbTree, ... )
    {
        va_list     arg_marker ;
        PPTREE      ptTree ;
        PLIST_TREE  list = (PLIST_TREE)0 ;
        
        va_start(arg_marker, nbTree);
        while ( nbTree-- ) {
            ptTree =  (PPTREE)va_arg(arg_marker,PPTREE);
            if ( ptTree && ptTree != (PPTREE) -1 ) 
                list =  AllocListTree(ptTree, list);
        }
        va_end(arg_marker);
        if ( list ) 
            MulFreeTreeInt(list);
    } /**************************************************************
            FreeTree : free a tree
         ***********************************/ /******************************/ /* void _fastcall FreeTreeRec PARAM ((PPTREE)); */ 
#endif

void    _fastcall FreeTreeRec (PPTREE) ;

void _fastcall FreeTree ( PPTREE tree )
{
    if ( !tree /* not allocated tree */ || tree == (PPTREE) -1 /* error tree */ ) 
        return ;
    SReplaceTree(FatherTree(tree), PosTree(tree), (PPTREE)0);
    FreeTreeRec(tree);
}

/**************************************************************
      FreeTreeRec : free a tree recursively
   ********************/
/*********************************************/
void _fastcall FreeTreeRec ( PPTREE tree )
{
    int     arity, currParam ;
    PPTREE  newTree ;
    
debut : 
    if ( !tree /* not allocated tree */ || tree == (PPTREE) -1 /* error tree */ ) 
        return ;
#   if defined(VISUAL) || defined(BORLAND)
        if ( addRefCritical ) 
            WaitForSingleObject(addRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            EnterCriticalSection(&addRefCritical);
#   endif
    
    /* look if the tree is not referenced */
    if ( CacheRead((char *)tree + sizeof(int)) & REF_MASK ) {
        SON_WRITE(tree, -1, 0); /* rip his father */ 
#       if defined(BORLAND) || defined(VISUAL)
            if ( addRefCritical ) 
                ReleaseSemaphore(addRefCritical, 1, 0);
#       elif defined(HAS_POSIX_SEMAPHORE)
            if ( addRefCritical ) 
                LeaveCriticalSection(&addRefCritical);
#       endif
        return ;
    }
#   if defined(BORLAND) || defined(VISUAL)
        if ( addRefCritical ) 
            ReleaseSemaphore(addRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            LeaveCriticalSection(&addRefCritical);
#   endif
    switch ( NumberTree(tree) ) {
        case TERM_TREE : 
            
            /* terminal tree */
            newTree = (PPTREE)SON_READ(tree, 0); /* comments */ 
            FreeString((char *)SON_READ(tree, 1), ((char *)SON_READ(tree, 2) - (char *)0));
            FreeNodeTree(2, tree);
            tree = newTree ;
            goto debut ;
            break ;
        case REF_TREE : 
            newTree = (PPTREE)SON_READ(tree, 0); /* comments */ 
            FreeNodeTree(1, tree);
            tree = newTree ;
            goto debut ;
            break ;
        case CLASS_TREE : 
            newTree = (PPTREE)SON_READ(tree, 0); /* comments */ 
            ((TreeClass *)SON_READ(tree, 1))->Destroy(tree);
            tree = newTree ;
            goto debut ;
        case GEO : 
            
            /* geometry tree */
            newTree = (PPTREE)SON_READ(tree, 0);
            FreeNodeTree(2, tree);
            tree = newTree ;
            goto debut ;
            break ;
        default : 
            
            /* a tree node */
            arity = treearity(tree);
            
            /* to avoid great depth in recursivity for list go from
               left to right */
            for ( currParam = 0 ; currParam < arity ; currParam++ ) 
                FreeTreeRec((PPTREE)SON_READ(tree, currParam));
            newTree = (PPTREE)SON_READ(tree, currParam);
            FreeNodeTree(arity, tree);
            tree = newTree ;
            goto debut ;
    }
}

/**************************************************************
      CopyTree : copy a tree
   ***********************************/
/******************************/
PPTREE _fastcall CopyTree ( PPTREE tree )
{
    int     arity ;
    PPTREE  myTree ;
    
    if ( !tree /* not allocated tree */ || tree == (PPTREE) -1 /* error tree */ ) 
        return (PPTREE)0 ;
    switch ( NumberTree(tree) ) {
        case TERM_TREE : 
            
            /* terminal tree */
            myTree = LMakeString(CacheAddrRead(SON_READ(tree, 1)), (char *)SON_READ(tree, 2) - (char *)0);
            CacheWrite(myTree, CacheRead(tree)); /* language is free */ 
            ReplaceTree(myTree, 0, CopyTree((PPTREE)SON_READ(tree, 0)));
            return myTree ;
        case REF_TREE : 
            myTree = MakeTree(REF_TREE, 1);
            CacheWrite((char *)myTree + sizeof(int), 0); /* arity is 0 to hide reference*/ 
            SON_WRITE(myTree, 1, SON_READ(tree, 1));
            CacheWrite(myTree, CacheRead(tree)); /* language is free */ 
            ReplaceTree(myTree, 0, CopyTree((PPTREE)SON_READ(tree, 0)));
            return myTree ;
        case CLASS_TREE : 
            myTree = MakeTree(CLASS_TREE, 1);
            CacheWrite((char *)myTree + sizeof(int), 0); /* arity is 0 to hide class*/ 
            SON_WRITE(myTree, 1, (void *)(((TreeClass *)SON_READ(tree, 1))->Copy()));
            CacheWrite(myTree, CacheRead(tree)); /* language is free */ 
            ReplaceTree(myTree, 0, CopyTree((PPTREE)SON_READ(tree, 0)));
            return myTree ;
        case GEO : 
            
            /* geo tree */
            myTree = MakeTree(GEO, 2);
            SON_WRITE(myTree, 2, SON_READ(tree, 2));
            SON_WRITE(myTree, 1, SON_READ(tree, 1));
            ReplaceTree(myTree, 0, CopyTree((PPTREE)SON_READ(tree, 0)));
            return myTree ;
        default : 
            
            /* a tree node */
            arity  = treearity(tree);
            myTree = MakeTree(NumberTree(tree), arity);
            
            /* put good language mask */
            CacheWrite(myTree, CacheRead(tree));
            for (; arity >= 0 ; arity-- ) {
                ReplaceTree(myTree, arity, CopyTree((PPTREE)SON_READ(tree, arity)));
            }
            return myTree ;
    }
}

/**************************************************************
      TreeSize : gives size of a tree
   **************************/
/***************************************/
unsigned int TreeSize ( PPTREE tree )
{
    int     arity ;
    PPTREE  myTree ;
    
    if ( !tree /* not allocated tree */ || tree == (PPTREE) -1 /* error tree */ ) 
        return 0 ;
    switch ( NumberTree(tree) ) {
        case TERM_TREE : 
            return (char *)SON_READ(tree, 2) - (char *)0 + TreeSize((PPTREE)SON_READ(tree, 0)) + (2 + 2) * sizeof(PPTREE) + 2 * sizeof(int);
            break ;
        case REF_TREE : 
            return TreeSize((PPTREE)SON_READ(tree, 0)) + (1 + 2) * sizeof(PPTREE) + 2 * sizeof(int);
            break ;
        case CLASS_TREE : 
            return TreeSize((PPTREE)SON_READ(tree, 0)) + (1 + 2) * sizeof(PPTREE) + 2 * sizeof(int) + ((TreeClass *)SON_READ(tree, 1))->Size();
            break ;
        case GEO : 
            return TreeSize((PPTREE)SON_READ(tree, 0)) + (2 + 2) * sizeof(PPTREE) + 2 * sizeof(int);
            break ;
        default : 
            {
                arity =  treearity(tree);
                unsigned int    theSize ;
                theSize =  (arity + 2) * sizeof(PPTREE) + 2 * sizeof(int);
                for (; arity >= 0 ; arity-- ) {
                    theSize += TreeSize((PPTREE)SON_READ(tree, arity));
                }
                return theSize ;
            }
            break ;
    }
}

PPTREE _fastcall NoCommentCopyTree ( PPTREE tree )
{
    int     arity ;
    PPTREE  myTree ;
    
    if ( !tree /* not allocated tree */ || tree == (PPTREE) -1 /* error tree */ ) 
        return (PPTREE)0 ;
    switch ( NumberTree(tree) ) {
        case TERM_TREE : 
            
            /* terminal tree */
            myTree = LMakeString(CacheAddrRead(SON_READ(tree, 1)), (char *)SON_READ(tree, 2) - (char *)0);
            CacheWrite(myTree, CacheRead(tree)); /* language is free */ 
            return myTree ;
        case REF_TREE : 
            myTree = MakeTree(REF_TREE, 1);
            CacheWrite((char *)myTree + sizeof(int), 0); /* arity is 0 to hide reference*/ 
            SON_WRITE(myTree, 1, SON_READ(tree, 1));
            CacheWrite(myTree, CacheRead(tree)); /* language is free */ 
            return myTree ;
        case CLASS_TREE : 
            myTree = MakeTree(CLASS_TREE, 1);
            CacheWrite((char *)myTree + sizeof(int), 0); /* arity is 0 to hide class */ 
            SON_WRITE(myTree, 1, (void *)(((TreeClass *)SON_READ(tree, 1))->Copy()));
            CacheWrite(myTree, CacheRead(tree)); /* language is free */ 
            return myTree ;
        case GEO : 
            
            /* geo tree */
            myTree = MakeTree(GEO, 2);
            SON_WRITE(myTree, 2, SON_READ(tree, 2));
            SON_WRITE(myTree, 1, SON_READ(tree, 1));
            return myTree ;
        default : 
            
            /* a tree node */
            arity  = treearity(tree);
            myTree = MakeTree(NumberTree(tree), arity);
            
            /* put good language mask */
            CacheWrite(myTree, CacheRead(tree));
            for (; arity > 0 ; arity-- ) {
                ReplaceTree(myTree, arity, NoCommentCopyTree((PPTREE)SON_READ(tree, arity)));
            }
            return myTree ;
    }
}

/**************************************************************
   AllocCommElem : allocates a list elem that stores  comment */
/*lines
   ***************************************************************/
PCOMM_ELEM AllocCommElem ()
{
    PCOMM_ELEM  ptComm ;
    
    if ( listCommFree ) {
        ptComm       =  listCommFree ;
        listCommFree =  listCommFree->next ;
    } else 
        ptComm =  (PCOMM_ELEM)malloc(sizeof(COMM_ELEM));
    return (ptComm);
}

/**************************************************************
      FreeHeadComm : Free the header of the comm elem list
   *****/
/************************************************************/
void FreeHeadComm ()
{
    PCOMM_ELEM  commElem = listComm ;
    
    listComm       =  listComm->next ;
    commElem->next =  listCommFree ;
    listCommFree   =  commElem ;
    
    // if content has no father free it
    if ( !FatherTree(commElem->content) ) {
        FreeTree(commElem->content);
        commElem->content =  (PPTREE)0 ;
    }
}

/**************************************************************
      FreeComm : Free an elem of the comm elem list
   ************/
/*****************************************************/
void FreeComm ( PCOMM_ELEM elem )
{
    register PCOMM_ELEM oldPt = listComm, commElem = listComm ;
    
    while ( commElem && commElem != elem ) {
        oldPt    =  commElem ;
        commElem =  commElem->next ;
    }
    if ( commElem == elem ) 
        if ( oldPt == commElem ) 
            /* head of list */
            FreeHeadComm();
        else 
        {
            oldPt->next    =  commElem->next ;
            commElem->next =  listCommFree ;
            listCommFree   =  commElem ;
            
            // if content has no father free it
            if ( !FatherTree(commElem->content) ) {
                FreeTree(commElem->content);
                commElem->content =  (PPTREE)0 ;
            }
        }
}

/**************************************************************
      CreateComm : Creates a new cell in the comm elem list
   ****/
/*************************************************************/
PCOMM_ELEM CreateComm ()
{
    PCOMM_ELEM  pCommElem = AllocCommElem();
    
    pCommElem->next =  listComm ;
    listComm        =  pCommElem ;
    return pCommElem ;
}

/**************************************************************
   begin_comment : beginning of a new comment line sequence
   */
/****************************************************************/
static int          col_deb = -1, line_end = -2 ;
static int          rule_between ;
static PCOMM_ELEM   filledComment ; /* the currently filled comm elem */ 

void begin_comment ()
{
    PCOMM_ELEM  ptCommElem = CreateComm();
    
    ptCommElem->content   =  (PPTREE)0 ;
    ptCommElem->collected =  0 ;
    if ( col == col_deb && line == line_end + 1 && firstOnLine ) 
        ptCommElem->type =  2 ;
    else if ( firstOnLine ) {
        col_deb          =  -1 ;
        ptCommElem->type =  1 ;
    } else {
        col_deb =  col ;
        
        /* EL the 1/12/93 <*/
        /* if two commentaries are following each other and there
           is no rule between then, they must have the same type.
           */
        /*     We avoid a post following a pre on the same node */
        if ( ptCommElem && ptCommElem->next && ptCommElem->next->type == 1 && line == line_end && !rule_between ) 
            ptCommElem->type =  1 ;
        else 
            ptCommElem->type =  0 ;
        /*>*/
    }
    filledComment =  ptCommElem ;
}

/**************************************************************
   store_comment_line : add a new line to the comment line seq*/
/*uence
   ***************************************************************/
void store_comment_line ( int nb ) /*nb  number of characters in comment line */ 
{
    filledComment->content =  AddList(filledComment->content, MakeString(lexEl.string()));
    line_end               =  line ;
}

/**************************************************************
      store_pos_as_comment : generate a comment with line col
   **/
/***************************************************************/
int store_pos_as_comment ( int line, int col, int type )
{
    PCOMM_ELEM  ptCommElem ;
    char        string [20];
    char        *ptString = string ;
    
    if ( line == storLine && col == storCol ) 
        return 1 ;
    storLine              =  line ;
    storCol               =  col ;
    ptCommElem            =  CreateComm();
    ptCommElem->content   =  (PPTREE)0 ;
    ptCommElem->collected =  0 ;
    ptCommElem->type      =  type ;
    filledComment         =  ptCommElem ;
    //sprintf(string, POS_STUB_FORMAT, line, col);
    strcpy(ptString, POS_STUB);
    ptString    += strlen(ptString);
    *ptString++ =  ' ';
    _itoa(line, ptString, 10);
    ptString    += strlen(ptString);
    *ptString++ =  ' ';
    _itoa(col, ptString, 10);
    filledComment->content =  AddList(filledComment->content, MakeString(string));
    return 1 ;
}

/**************************************************************
      LookComm : collect the pre comment owned by a function
   ***/
/**************************************************************/
PCOMM_ELEM _fastcall LookComm ( int *ptNbPre )
{
    register PCOMM_ELEM ptComm ;
    
    /* EL the 1/12/93 */
    /* there is a rule, say it to begin_comment */
    rule_between =  1 ;
    _funcLevel++ ;
    *ptNbPre =  0 ;
    if ( !listComm ) 
        return (PCOMM_ELEM)0 ;
    ptComm =  listComm ;
    while ( ptComm && (!ptComm->collected || ptComm->collected == _funcLevel) ) {
        ptComm->collected =  _funcLevel ;
        (*ptNbPre)++ ;
        ptComm =  ptComm->next ;
    }
    return listComm ;
}

/**************************************************************
   SwitchCommType : switch type of comment so that pre and pos*/
/*t
         are well ordained
   ***************************************************************/
void SwitchCommType ( PCOMM_ELEM ptPreComm, int nbPre, int before, PPTREE node, PPTREE oldNode )
{
    PCOMM_ELEM  inter ;
    int         i, firstPre ;
    
    /* look in the comemt which are before the rule. We suppose that
       there are some post or prepost comment which must be boun*/
    /*d to
       the previous node. After all the node are pre and must be bound
       to current node */
    /* search for first pre comment */
    if ( before ) 
        firstPre =  0 ;
    else 
        firstPre =  32000 ;
    for ( i     = nbPre, inter = ptPreComm ; i ; i--, inter =  inter->next ) {
        
        /* doesn't take into account the pos comment */
        if ( strncmp(Value(inter->content), POS_STUB, strlen(POS_STUB)) && inter->type == 1 ) 
            firstPre =  i ;
    }
    
    /* then modify types accordingly */
    for ( i     = nbPre, inter = ptPreComm ; i ; i--, inter =  inter->next ) {
        if ( before && !node ) {
            
            /* if !node put everything in pre or post */
            inter->collected =  0 ;
            if ( oldNode ) {
                if ( inter->type == 1 ) 
                    inter->type =  0 ; /* post comment */ 
            } else 
                inter->type =  1 ; /* pre comment */ 
        } else if ( i >= firstPre ) {
            
            /* otherwise trigger the computed node in pre */
            inter->type =  1 ;
        } else {
            
            /* after node put pos comment in post mode if necessary */
            inter->type =  0 ;
        }
    }
}

/**************************************************************
   AddComm  : add to the return node of a function his comment*/
/*s
   ***************************************************************/
void _fastcall AddComm ( PCOMM_ELEM ptPreComm, int nbPre, PPTREE node, PPTREE oldNode )
{
    PCOMM_ELEM  inter ;
    PPTREE      inter1, list_pre, list_post ;
    PCOMM_ELEM  keepPreComm = ptPreComm ;
    
    rule_between =  1 ;
    SwitchCommType(ptPreComm, nbPre, 1, node, oldNode);
    list_post =  list_pre = (PPTREE)0 ;
    if ( (node || oldNode) && nbPre ) {
        while ( nbPre ) {
            if ( ptPreComm->type == 1 || !oldNode ) {
                inter1 =  MakeTree(PRE, 1);
                ReplaceTree(inter1, 1, ptPreComm->content);
                list_pre =  AddList(inter1, list_pre);
                
                /* frame comment */
                if ( SON_READ(ptPreComm->content, 2) ) 
                    Frame(ptPreComm->content);
                
                /* free comment keeper */
                inter     =  ptPreComm ;
                ptPreComm =  ptPreComm->next ;
                if ( keepPreComm == inter ) 
                    keepPreComm =  ptPreComm ;
                FreeComm(inter);
            } else {
                inter1 =  MakeTree(ptPreComm->type == 0 ? POST : PREPOST, 1);
                ReplaceTree(inter1, 1, ptPreComm->content);
                list_post =  AddList(inter1, list_post);
                
                /* frame comment */
                if ( ptPreComm->content && SON_READ(ptPreComm->content, 2) ) 
                    Frame(ptPreComm->content);
                
                /* free comment keeper */
                inter     =  ptPreComm ;
                ptPreComm =  ptPreComm->next ;
                if ( keepPreComm == inter ) 
                    keepPreComm =  ptPreComm ;
                FreeComm(inter);
            }
            nbPre-- ;
        }
        if ( list_pre && node ) {
            ReplaceTree(node, 0, AddListList((PPTREE)SON_READ(node, 0), list_pre));
        }
        if ( list_post && oldNode ) {
            ReplaceTree(oldNode, 0, AddListList((PPTREE)SON_READ(oldNode, 0), list_post));
        }
    }
    if ( listComm && !listComm->collected ) {
        list_post =  (PPTREE)0 ;
        ptPreComm =  listComm ;
        
        /* count the number of comm to look for */
        nbPre     =  0 ;
        while ( ptPreComm && !ptPreComm->collected ) {
            nbPre++ ;
            ptPreComm =  ptPreComm->next ;
        }
        
        /* switch type */
        SwitchCommType(listComm, nbPre, 0, node, oldNode);
        
        /* treat comments */
        ptPreComm =  listComm ;
        while ( ptPreComm && !ptPreComm->collected ) 
            if ( (ptPreComm->type == 0 || ptPreComm->type == 2 || ptPreComm->type == PRIORITY) && node ) {
                inter1 =  MakeTree(ptPreComm->type == 0 ? POST : PREPOST, 1);
                ReplaceTree(inter1, 1, ptPreComm->content);
                list_post =  AddList(inter1, list_post);
                
                /* frame comment */
                if ( SON_READ(ptPreComm->content, 2) ) 
                    Frame(ptPreComm->content);
                
                /* manage comment keeper */
                inter     =  ptPreComm ;
                ptPreComm =  ptPreComm->next ;
                if ( keepPreComm == inter ) 
                    keepPreComm =  ptPreComm ;
                FreeComm(inter);
            } else {
                ptPreComm->type =  1 ; /* pre comment of next node */ 
                ptPreComm       =  ptPreComm->next ;
            }
        if ( list_post && node ) {
            ReplaceTree(node, 0, AddListList((PPTREE)SON_READ(node, 0), list_post));
        }
        
        /* mark commentaries which were before the node and which are still
           here */
        ptPreComm =  keepPreComm ;
        while ( ptPreComm && !ptPreComm->collected ) {
            ptPreComm->type =  PRIORITY ;
            ptPreComm       =  ptPreComm->next ;
        }
    }
    _lastTree =  node ;
    _funcLevel-- ;
}

/**************************************************************
      CommString : builds a terminal & looks at comments
   *******/
/**********************************************************/
PPTREE _fastcall CommString ( char *string )
{
    PPTREE      retTree = MakeString(string);
    int         nbPre ;
    PCOMM_ELEM  ptPre ;
    
    ptPre =  LookComm(&nbPre);
    AddComm(ptPre, nbPre, retTree, _lastTree);
    return retTree ;
}

/**************************************************************
      CommTerm : treat comments when seeing a terminal
   *********/
/********************************************************/
void _fastcall CommTerm ()
{
    int         nbPre ;
    PCOMM_ELEM  ptPre ;
    
    ptPre =  LookComm(&nbPre);
    if ( nbPre || listComm ) 
        AddComm(ptPre, nbPre, (PPTREE)0, _lastTree);
    else {
        _funcLevel-- ;
        _lastTree =  (PPTREE)0 ;
    }
}

/**************************************************************
      Frame : frame a comment on his left
   **********************/
/*******************************************/
void Frame ( PPTREE comm )
{
    int     nb, min = 32000 ;
    PPTREE  inter = (PPTREE)SON_READ(comm, 2);
    char    *ptLine ;
    
    while ( inter ) {
        ptLine =  CacheAddrRead(SON_READ(SON_READ(inter, 1), 1));
        nb     =  0 ;
        while ( *ptLine && (*ptLine == ' ' || *ptLine == '\t') ) {
            ptLine++ ;
            nb++ ;
        }
        
        // doesn't take into account the empty lines for min
        if ( *ptLine ) 
            min =  nb < min ? nb : min ;
        
        // get on next line
        inter =  (PPTREE)SON_READ(inter, 2);
    }
    if ( min != 32000 && min ) {
        inter =  (PPTREE)SON_READ(comm, 2);
        while ( inter ) {
            ptLine =  CacheAddrRead(SON_READ(SON_READ(inter, 1), 1));
            if ( (nb = strlen(ptLine)) >= min ) {
                memmove(ptLine, ptLine + min, nb - min + 1);
            } else {
                char    *ptKeep = ptLine ;
                
                // erase empty lines
                while ( *ptLine && (*ptLine == ' ' || *ptLine == '\t') ) {
                    ptLine++ ;
                }
                if ( !*ptLine ) 
                    *ptKeep =  '\0';
            }
            inter =  (PPTREE)SON_READ(inter, 2);
        }
    }
}

/**************************************************************
      PrintComm : prints pre or post comment on a node
   *********/
/********************************************************/
#define EQTYPE(x, y) ((x==y) || (x==POST && y == PREPOST))

/* static */
int prepostVar = 0 ;

int PrePost ()
{
    return prepostVar ;
}

/**************************************************************
      NextComm : get next comment
   ******************************/
/***********************************/
PPTREE NextComm ( PPTREE node, int type, PPTREE out )
{
    PPTREE  list, comm, found = (PPTREE)0 ;
    int     number ;
    
    if ( !node ) 
        return (PPTREE)0 ;
    if ( !out ) 
        list =  COMM_SON_VALUE(node);
    else 
        list =  (PPTREE)SON_READ(out, 2);
    while ( list ) {
        comm   =  (PPTREE)SON_READ(list, 1);
        number =  NumberTree(comm);
        if ( EQTYPE(type, number) ) {
            found      =  comm ;
            prepostVar =  number == PREPOST ;
            break ;
        }
        list =  (PPTREE)SON_READ(list, 2);
    }
    if ( found ) {
        
        /* comm = (PPTREE) SON_READ(found, 1);
           Frame(comm); */
        return list ;
    }
    return (PPTREE)0 ;
}

/**************************************************************
      CommContent : get comment content
   ************************/
/*****************************************/
PPTREE CommContent ( PPTREE node )
{
    if ( !node ) 
        return (PPTREE)0 ;
    return SonTree(SonTree(node, 1), 1);
}

/**************************************************************
      NextCommContent : get next line of comment
   ***************/
/**************************************************/
PPTREE NextCommContent ( PPTREE node, PPTREE list )
{
    if ( !node ) 
        return (PPTREE)0 ;
    if ( !list ) 
        list =  SonTree(SonTree(node, 1), 1);
    else 
        list =  (PPTREE)SON_READ(list, 2);
    /*
          if ( list )
       Frame(SonTree(list, 1)) ;
          */
    return list ;
}

/**************************************************************
   IsComm : looks if there is a comment of certain type on a n*/
/*ode
   ***************************************************************/
char *IsComm ( PPTREE node, int type )
{
    int number ;
    
    if ( !node ) 
        return 0 ;
    node =  COMM_SON_VALUE(node);
    while ( node ) {
        number =  NumberTree((PPTREE)SON_READ(node, 1));
        if ( EQTYPE(type, number) ) 
            return BrainyValue(node);
        node =  (PPTREE)SON_READ(node, 2);
    }
    return (char *)0 ;
}

/**************************************************************
      PrintCommEInt : print comment extended
   *******************/
/**********************************************/
/* impression des commentaires
   deb = delimiteur de debut
   midd = delimiteur de milieu
   fin  = delimiteur de fin
     */
PPTREE PrintCommEInt ( PPTREE node, int type, PPTREE out, const char *midd, const char *deb, const char *fin )
{
    PPTREE  list, comm, found = (PPTREE)0 ;
    int     number ;
    int     maxCol = 0 ;
    
    if ( !node ) 
        return (PPTREE)0 ;
    if ( !out ) 
        list =  COMM_SON_VALUE(node);
    else 
        list =  out ;
    while ( list ) {
        comm   =  (PPTREE)SON_READ(list, 1);
        number =  NumberTree(comm);
        if ( EQTYPE(type, number) ) {
            found =  comm ;
            list  =  (PPTREE)SON_READ(list, 2);
            break ;
        }
        list =  (PPTREE)SON_READ(list, 2);
    }
    if ( found ) {
        int first = 1 ;
        comm =  (PPTREE)SON_READ(found, 1);
        
        /* Frame(comm); */
        WriteString(deb);
        while ( comm ) {
            if ( !first ) 
                WriteString(midd);
            else 
                first =  0 ;
            DumpBrainyValueInt(comm);
            currCol += strlen(Value(comm));
            
            // if (currCol > maxCol) maxCol = currCol;
            comm    =  (PPTREE)SON_READ(comm, 2);
            if ( comm ) 
                NewLine();
        }
        WriteString(fin);
    }
    while ( list ) {
        comm   =  (PPTREE)SON_READ(list, 1);
        number =  NumberTree(comm);
        if ( EQTYPE(type, number) ) {
            prepostVar =  number == PREPOST ;
            return list ;
        }
        list =  (PPTREE)SON_READ(list, 2);
    }
    return (PPTREE)0 ;
}

/**************************************************************
      PrintCommEVirtInt : print comment extended virtual
   *******/
/**********************************************************/
PPTREE PrintCommEVirtInt ( PPTREE node, int type, PPTREE out, const char *midd, const char *deb, const char *fin )
{
    PPTREE  list, comm, found = (PPTREE)0 ;
    int     number ;
    
    if ( !node ) 
        return (PPTREE)0 ;
    if ( !out ) 
        list =  COMM_SON_VALUE(node);
    else 
        list =  out ;
    while ( list ) {
        comm   =  (PPTREE)SON_READ(list, 1);
        number =  NumberTree(comm);
        if ( EQTYPE(type, number) ) {
            found =  comm ;
            list  =  (PPTREE)SON_READ(list, 2);
            break ;
        }
        list =  (PPTREE)SON_READ(list, 2);
    }
    if ( found ) {
        int first = 1 ;
        comm =  (PPTREE)SON_READ(found, 1);
        
        /* Frame(comm); */
        WriteString(deb);
        while ( comm ) {
            if ( first ) 
                WriteString(midd);
            else 
                first =  0 ;
            DumpBrainyValueVirtInt(comm);
            comm =  (PPTREE)SON_READ(comm, 2);
            if ( comm ) 
                NewLineVirtInt();
        }
        WriteString(fin);
    }
    while ( list ) {
        comm   =  (PPTREE)SON_READ(list, 1);
        number =  NumberTree(comm);
        if ( EQTYPE(type, number) ) {
            prepostVar =  number == PREPOST ;
            return list ;
        }
        list =  (PPTREE)SON_READ(list, 2);
    }
    return (PPTREE)0 ;
}

PPTREE PrintComm ( PPTREE node, int type, PPTREE out )
{
    return PrintCommE(node, type, out, "", "", "");
}

/**************************************************************
      SizeComm : compute number of line for comment
   ************/
/*****************************************************/
int SizeComm ( PPTREE node )
{
    PPTREE  list, comm ;
    int     numberLine = 0 ;
    char    *content ;
    
    if ( !node ) 
        return 0 ;
    list =  COMM_SON_VALUE(node);
    while ( list ) {
        comm =  (PPTREE)SON_READ(list, 1);
        comm =  (PPTREE)SON_READ(comm, 1);
        while ( comm ) {
            if ( !IsPosComment(comm) ) {
                content =  Value(comm);
                for (; *content ; content++ ) {
                    if ( *content != ' ' && *content != '\t' && *content != '/' && *content != '*' ) {
                        numberLine++ ;
                        break ;
                    }
                }
            }
            comm =  SonTree(comm, 2);
        }
        list =  (PPTREE)SON_READ(list, 2);
    }
    return numberLine ;
}

/**************************************************************
       GetComm : return the comment node
   ***********************/
/******************************************/
PPTREE GetComm ( PPTREE node )
{
    return SonTree(node, 0);
}

/**************************************************************
       PutComm : Put the comment node
   **************************/
/***************************************/
PPTREE PutComm ( PPTREE node, PPTREE comm )
{
    return ReplaceTree(node, 0, comm);
}

/******************************************************************
     LanguageName : give the name of current language
   ******/
/***************************************************************/
char    *theLanguageName ;

char *_fastcall LanguageName ( int i )
{
    char    *ptSource = theLanguageName, c ;
    
    if ( !theLanguageName ) {
        theLanguageName  =  (char *)malloc(2);
        *theLanguageName =  '\0';
        ptSource         =  theLanguageName ;
    }
    while ( *ptSource ) {
        c           =  *ptSource ;
        *ptSource++ =  i ? toupper(c) : tolower(c);
    }
    return theLanguageName ;
}

/******************************************************************
     NameOfNode : gives the external name of a node
   ********/
/*************************************************************/
static char tmpName [50];

char *_fastcall NameOfNode ( char *name )
{
    if ( !name ) {
        tmpName [0] =  '\0';
        return tmpName ;
    }
    if ( !strcmp(name, "PRE")
            || !strcmp(name, "POST")
            || !strcmp(name, "PREPOST")
            || !strcmp(name, "META")
            || !strcmp(name, "LIST")
            || !strcmp(name, "IN_LANGUAGE")
            || !strcmp(name, "REF_TREE")
            || !strcmp(name, "CLASS_TREE")
            || !strcmp(name, "TERM_TREE") ) 
        return name ;
    
    /*    c = *(name + strlen(name) - 1);
          if ( c >= 'a' && c <= 'z' )
       return name ;*/
    strcpy(tmpName, name);
    strcat(tmpName, "_");
    strcat(tmpName, LanguageName(LO_CASE));
    return tmpName ;
}

char *_fastcall NameOfNodePlus ( char *name )
{
    if ( !name ) {
        tmpName [0] =  '\0';
        return tmpName ;
    }
    if ( !strcmp(name, "PRE")
            || !strcmp(name, "POST")
            || !strcmp(name, "PREPOST")
            || !strcmp(name, "META")
            || !strcmp(name, "LIST")
            || !strcmp(name, "IN_LANGUAGE")
            || !strcmp(name, "REF_TREE")
            || !strcmp(name, "CLASS_TREE")
            || !strcmp(name, "TERM_TREE") ) 
        return name ;
    
    /*    c = *(name + strlen(name) - 1);
          if ( c >= 'a' && c <= 'z' )
       return name ;*/
    strcpy(tmpName, LanguageName(LO_CASE));
    strcat(tmpName, "::");
    strcat(tmpName, name);
    return tmpName ;
}

char *_fastcall NameOfNodeStrip ( char *name )
{
    char    c ;
    char    *pt ;
    
    if ( !name ) {
        tmpName [0] =  '\0';
        return tmpName ;
    }
    if ( !strcmp(name, "PRE")
            || !strcmp(name, "POST")
            || !strcmp(name, "PREPOST")
            || !strcmp(name, "META")
            || !strcmp(name, "LIST")
            || !strcmp(name, "IN_LANGUAGE")
            || !strcmp(name, "REF_TREE")
            || !strcmp(name, "CLASS_TREE")
            || !strcmp(name, "TERM_TREE") ) 
        return name ;
    
    /* if it is a c++ name do nothing
       return the part after the : */
    for ( pt = name ; *pt ; pt++ ) 
        if ( *pt == ':' && *(pt + 1) == ':' ) {
            strcpy(tmpName, pt + 2);
            return tmpName ;
        }
    
    /* otherwise suppress the part after the _ */
    strcpy(tmpName, name);
    c =  *(pt = tmpName + strlen(tmpName) - 1);
    if ( c >= 'a' && c <= 'z' ) {
        while ( pt >= tmpName && *pt != '_' ) 
            pt-- ;
        if ( pt >= tmpName ) 
            *pt =  '\0';
    }
    return tmpName ;
}

char *_fastcall NameLang ( const char *name )
{
    if ( !name ) {
        tmpName [0] =  '\0';
        return tmpName ;
    }
    strcpy(tmpName, name);
    strcat(tmpName, "_");
    strcat(tmpName, LanguageName(LO_CASE));
    return tmpName ;
}

#define NB_ITOA 20

static char itoaStore [MAXLENGTH * NB_ITOA];
static int  indexItoa = 0 ;

char *ItoaQuick ( int nb, char *string, int length )
{
    char    *ptInter = string + length ;
    int     rest ;
    bool    neg = false ;
    
    *--ptInter =  '\0';
    if ( nb < 0 ) {
        nb =  -nb ;
        
        // be careful for MIN_INT
        if ( nb == -nb ) {
            sprintf(string, "%d", nb);
            return string ;
        } else {
            neg =  true ;
        }
    }
    if ( nb > 0 ) 
        while ( nb ) {
            rest       =  nb % 10 ;
            *--ptInter =  '0' + rest ;
            nb         =  nb / 10 ;
        }
    else 
        *--ptInter =  '0';
    if ( neg ) {
        *--ptInter =  '-';
    }
    return ptInter ;
}

char *LtoaQuick ( long nb, char *string, int length )
{
    char    *ptInter = string + length ;
    long    rest ;
    bool    neg = false ;
    
    *--ptInter =  '\0';
    if ( nb < 0 ) {
        nb =  -nb ;
        
        // be careful for MIN_INT
        if ( nb == -nb ) {
            sprintf(string, "%ld", nb);
            return string ;
        } else {
            neg =  true ;
        }
    }
    if ( nb > 0 ) 
        while ( nb ) {
            rest       =  nb % 10 ;
            *--ptInter =  '0' + rest ;
            nb         =  nb / 10 ;
        }
    else 
        *--ptInter =  '0';
    if ( neg ) {
        *--ptInter =  '-';
    }
    return ptInter ;
}

char *CompactItoa ( int nb )
{
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            WaitForSingleObject(storeRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            EnterCriticalSection(&storeRefCritical);
#   endif
    if ( ++indexItoa >= NB_ITOA ) 
        indexItoa =  0 ;
    
    char    *sResult = (char *)itoaStore + indexItoa * MAXLENGTH ;
    
    sResult =  ItoaQuick(nb, sResult, MAXLENGTH);
#   if defined(BORLAND) || defined(VISUAL)
        if ( storeRefCritical ) 
            ReleaseSemaphore(storeRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            LeaveCriticalSection(&storeRefCritical);
#   endif
    return sResult ;
}

char *CompactLtoa ( long nb )
{
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            WaitForSingleObject(storeRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            EnterCriticalSection(&storeRefCritical);
#   endif
    if ( ++indexItoa >= NB_ITOA ) 
        indexItoa =  0 ;
    
    char    *sResult = (char *)itoaStore + indexItoa * MAXLENGTH ;
    
    sResult =  LtoaQuick(nb, sResult, MAXLENGTH);
#   if defined(BORLAND) || defined(VISUAL)
        if ( storeRefCritical ) 
            ReleaseSemaphore(storeRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            LeaveCriticalSection(&storeRefCritical);
#   endif
    return sResult ;
}

char *CompactRtoa ( float nb )
{
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            WaitForSingleObject(storeRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            EnterCriticalSection(&storeRefCritical);
#   endif
    if ( ++indexItoa >= NB_ITOA ) 
        indexItoa =  0 ;
    
    char    *sResult = (char *)itoaStore + indexItoa * MAXLENGTH ;
    
    sprintf(sResult, "%.7e", nb);
#   if defined(BORLAND) || defined(VISUAL)
        if ( storeRefCritical ) 
            ReleaseSemaphore(storeRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            LeaveCriticalSection(&storeRefCritical);
#   endif
    return sResult ;
}

int NoPointer ()
{
    return -1 ;
}

#if defined(ITOA)
    /**************************************************************
       itoa  : dump a int in a string
           ***************************/
    /**************************************/
    char *itoa ( int nb, char *string, int radix )
    {
        char    inter [20];
        char    *result = ItoaQuick(nb, inter, 20);
        
        strcpy(string, result);
        return string ;
    }
#endif

/**************************************************************
       AddConst : adds a Constant to the constant list
   *********/
/********************************************************/
int AddConstVal ( const char *stringt, int val )
{
    STRINGELEM  *point ;
    int         number ;
    
    /* strip the name of the lang part */
    /* stringt = NameOfNodeStrip(stringt);*/
    /* retrieve constant value or create new entry */
    if ( (number = FindConst(stringt)) != -1 ) 
        return number ;
    else {
        point         =  (STRINGELEM *)malloc(sizeof(STRINGELEM));
        point->string =  AllocString(stringt);
        point->Value  =  val ;
        point->next   =  listConst ;
        listConst     =  point ;
        return point->Value ;
    }
}

/**************************************************************
       Recognize : looks if a string is in the keyword list
   ****/
/*************************************************************/
int FindConst ( const char *string )
{
    STRINGELEM  *point ;
    
    point =  listConst ;
    while ( point ) {
        if ( !strcmp(string, point->string) ) 
            return point->Value ;
        point =  point->next ;
    }
    return -1 ;
}

/**************************************************************
       Recognize : looks if a string is in the keyword list
   ****/
/*************************************************************/
char *NameConst ( int numb )
{
    STRINGELEM  *point ;
    
    point =  listConst ;
    while ( point ) {
        if ( point->Value == numb ) 
            return point->string ;
        point =  point->next ;
    }
    return (char *)0 ;
}

static PLANG    lang = (PLANG)0 ;

/******************************************************************
       AddLang : enter the variables of a new language
   *****/
/****************************************************************/
void AddLang
(
const char *name, /* fArity, */ 
int *tArity, 
STRINGELEM *lConst, 
PPTREE(*parser)(int), 
int nbNode, 
OVER_LANG *overLang 
)
{
    PLANG   myLang ;
    
    myLang               =  (PLANG)malloc(sizeof(LANG));
    myLang->name         =  AllocString(name);
    myLang->arityNode    =  tArity ;
    myLang->listConst    =  lConst ;
    myLang->parse_entry  =  parser ;
    myLang->Next         =  lang ;
    myLang->languageMask =  (nbLanguage++ & LANG_MASK) << (NODE_BIT);
    myLang->nbNode       =  nbNode ;
    myLang->overLang     =  overLang ;
    lang                 =  myLang ;
}

/******************************************************************
       SwitchLang : switch in a language
   *******************/
/**************************************************/
void SwitchLang ( const char *name )
{
    PLANG   myLang = lang ;
    
    if ( !name ) 
        return ;
    while ( myLang && strcmp(myLang->name, name) ) 
        myLang =  myLang->Next ;
    if ( !myLang ) {
        
        /* write(2, "Unknown Language \n", 18); */
        return ;
    }
    
    /* suppression arity EL le 12/10/93 */
    /*    FuncArity = myLang -> FuncArity ; */
    tabArity           =  myLang->arityNode ;
    listConst          =  myLang->listConst ;
    the_parse_entry_pt =  myLang->parse_entry ;
    languageMask       =  myLang->languageMask ;
    currentLanguage    =  myLang->name ;
    pCurrentLanguage   =  myLang ;
}

/******************************************************************
   ComputeLang : compute the number of constants in langu*/
/*age
   *******************************************************************/
static int          numbConstLang = 0 ;
static int          *tabArityLang ;
static char         *nameLang ;
static int          offsetLang ;
static STRINGELEM   *listConstLang = (STRINGELEM *)0 ;
static PLOVER_LANG  listOverLang = (PLOVER_LANG)0 ; /* list of over lang */ 

void ComputeLang ( char *name )
{
    PLANG       myLang = lang ;
    STRINGELEM  *pConst ;
    int         i = 0 ;
    
    if ( !name ) 
        return ;
    while ( myLang && strcmp(myLang->name, name) ) 
        myLang =  myLang->Next ;
    if ( !myLang ) 
        _write(2, "Unknown Language \n", 18);
    pConst =  myLang->listConst ;
    while ( pConst ) {
        i++ ;
        pConst =  pConst->next ;
    }
    numbConstLang += i ;
}

/******************************************************************
       ResetLang : alloc tab arity for new language
   ********/
/*************************************************************/
void CorrectLang ( int i )
{
    numbConstLang += i ;
}

void ResetLang ( char *name )
{
    STRINGELEM  *oldListConst = listConst ;
    
    /* int         i ;*/
    listConst     =  listConstLang = (STRINGELEM *)0 ;
    nameLang      =  name ;
    /*i            = */
    numbConstLang += 6 ; /* node which are always here LIST ... */ 
    tabArityLang  =  (int *)malloc(numbConstLang * sizeof(int));
    AddConstVal("LIST", 0);
    AddConstVal("PRE", 1);
    AddConstVal("POST", 2);
    AddConstVal("PREPOST", 3);
    AddConstVal("META", 4);
    AddConstVal("IN_LANGUAGE", 5);
    tabArityLang [1] =  tabArityLang [2] = tabArityLang [3] = tabArityLang [4] = 1 ;
    tabArityLang [0] =  tabArityLang [5] = 2 ;
    offsetLang       =  6 ;
    for ( int i = 0 ; i < numbConstLang ; i++ ) 
        tabArityLang [i] =  -1 ;
    listConstLang =  listConst ;
    listConst     =  oldListConst ;
}

/******************************************************************
       LoadLang : add data of language in new language
   *****/
/****************************************************************/
char *TransformName ( char *string )
{
    char    *ptString, *newString ;
    
    ptString =  string + strlen(string);
    while ( ptString >= string && *ptString != '_' ) 
        ptString-- ;
    if ( *ptString == '_' ) {
        *(ptString + 1) =  '\0';
        newString       =  (char *)malloc(strlen(string) + strlen(nameLang) + 1);
        strcpy(newString, string);
        strcat(newString, nameLang);
    } else 
        newString =  string ;
    return newString ;
}

char *ConstName ( const char *string )
{
    char    *oldName = theLanguageName ;
    char    *name ;
    
    theLanguageName =  nameLang ;
    name            =  AllocString(NameLang(string));
    theLanguageName =  oldName ;
    return name ;
}

void LoadLang ( char *name )
{
#   if 0
        
        PLANG       myLang ;
        STRINGELEM  *oldListConst = listConst, *newListConst ;
        PLOVER_LANG pOverLang ;
        char        *theName ;
        int         i = 0 ;
        
        listConst =  listConstLang ;
        if ( !(myLang = GetLang(name)) ) 
            return ;
        newListConst =  myLang->listConst ;
        while ( newListConst ) {
            i++ ;
            theName =  ConstName(newListConst->string);
            if ( FindConst(theName) == -1 ) {
                AddConstVal(theName, newListConst->Value + offsetLang);
                if ( i <= myLang->nbNode + 1 ) 
                    tabArityLang [offsetLang + newListConst->Value] =  myLang->arityNode [newListConst->Value];
                else 
                    tabArityLang [offsetLang + newListConst->Value] =  -1 ;
            } else 
                free(theName);
            newListConst =  newListConst->next ;
        }
        
        /* update overLang list for language */
        pOverLang         =  (PLOVER_LANG)malloc(sizeof(LOVER_LANG));
        pOverLang->name   =  AllocString(name);
        pOverLang->offset =  offsetLang ;
        pOverLang->next   =  listOverLang ;
        listOverLang      =  pOverLang ;
        offsetLang        += i ;
        listConstLang     =  listConst ;
        listConst         =  oldListConst ;
#   endif
}

void AddNode ( char *name, int arity )
{
    STRINGELEM  *oldListConst = listConst ;
    
    listConst                 =  listConstLang ;
    tabArityLang [offsetLang] =  arity ;
    AddConstVal(ConstName(name), offsetLang++);
    listConstLang =  listConst ;
    listConst     =  oldListConst ;
}

PPTREE NoneFunc ( int i )
{
    return (PPTREE)0 ;
}

void FinishLang ( int(*func)(), int **ptTab )
{
    numbConstLang =  0 ;
    *ptTab        =  tabArityLang ;
    AddLang(nameLang, /* func,*/ tabArityLang, listConstLang, (PPTREE(*)(int))NoneFunc, offsetLang, (OVER_LANG *)0);
    listConstLang =  (STRINGELEM *)0 ;
    listOverLang  =  (PLOVER_LANG)0 ;
}

void DumpConstLang ()
{
    char        NumbString [20];
    STRINGELEM  *tree = listConstLang ;
    
    while ( tree ) {
        if ( tree->Value >= 6 ) {
            WriteString("#define ");
            WriteString(tree->string);
            WriteString(" ");
            _itoa(tree->Value, NumbString, 10);
            Tab();
            WriteString(NumbString);
            NewLine();
        }
        tree =  tree->next ;
    }
}

void DumpCLang ()
{
    char        *name ;
    char        numb [10];
    char        *NumbString = numb ;
    STRINGELEM  *tree ;
    PLOVER_LANG pOverLang ;
    int         i, j = 0 ;
    
    WriteString("#include \"token.h\"");
    NewLine();
    WriteString("STRINGELEM * listConst");
    WriteString(name = ConstName(""));
    free(name);
    WriteString(";");
    NewLine();
    WriteString("int ");
    WriteString(name = ConstName("_arityNode"));
    free(name);
    WriteString("[] = {");
    Mark();
    WriteString("   2");
    for ( i = 1 ; i <= numbConstLang - 1 ; i++ ) {
        WriteString(" , ");
        _itoa(tabArityLang [i], numb, 10);
        WriteString(numb);
        if ( j++ == 10 ) {
            NewLine();
            j =  0 ;
        }
    }
    UnMark();
    WriteString(" };");
    NewLine();
    WriteString("OVER_LANG _");
    WriteString(name = ConstName("OverLang"));
    free(name);
    WriteString("[] = {");
    NewLine();
    Tab();
    Mark();
    j =  0 ;
    for ( pOverLang = listOverLang ; pOverLang ; pOverLang =  pOverLang->next ) {
        WriteString("{\"");
        WriteString(pOverLang->name);
        WriteString("\",");
        _itoa(pOverLang->offset, numb, 10);
        WriteString(numb);
        WriteString("}");
        WriteString(",");
        if ( j++ == 10 ) {
            NewLine();
            j =  0 ;
        }
    }
    WriteString("{(char *) 0, 0}");
    UnMark();
    NewLine();
    WriteString("};");
    NewLine();
    WriteString(name = ConstName("Arity"));
    free(name);
    WriteString("(node)");
    NewLine();
    WriteString("int node;");
    NewLine();
    WriteString("{ return (node>=0?");
    WriteString(name = ConstName("_arityNode"));
    free(name);
    WriteString("[node]:0);}");
    NewLine();
    WriteString("extern NoneFunc();");
    NewLine();
    WriteString(name = ConstName("InitConst"));
    free(name);
    WriteString("()");
    NewLine();
    WriteString("{");
    NewLine();
    Tab();
    Mark();
    WriteString("STRINGELEM * inter = listConst;");
    NewLine();
    WriteString("listConst = (STRINGELEM *) 0;");
    NewLine();
    tree =  listConstLang ;
    while ( tree ) {
        WriteString("AddConstVal(\"");
        WriteString(tree->string);
        WriteString("\", ");
        _itoa(tree->Value, NumbString, 10);
        WriteString(NumbString);
        WriteString(");");
        NewLine();
        tree =  tree->next ;
    }
    WriteString("AddConstVal(\"LIST\",0);");
    NewLine();
    WriteString(name = ConstName("listConst"));
    free(name);
    WriteString(" = listConst;");
    NewLine();
    WriteString("listConst = inter;");
    NewLine();
    WriteString("AddLang(\"");
    name =  ConstName("");
    WriteString(name + 1);
    free(name);
    WriteString("\",");
    WriteString(name = ConstName("Arity"));
    free(name);
    WriteString(",");
    WriteString(ConstName("_arityNode"));
    free(name);
    WriteString(",");
    WriteString(ConstName("listConst"));
    free(name);
    WriteString(",");
    WriteString("NoneFunc"); /* c is fucking with
                                the segment so we can't call parse_entry */ 
    WriteString(",");
    _itoa(numbConstLang - 1, NumbString, 10);
    WriteString(NumbString);
    WriteString(",_");
    WriteString(name = ConstName("OverLang"));
    free(name);
    WriteString(");");
    NewLine();
    UnMark();
    WriteString("}");
    NewLine();
}

/******************************************************************
   GetLang : get language pointer for a given language
   */
/********************************************************************/
PLANG GetLang ( char *name )
{
    PLANG   myLang = lang ;
    
    if ( !name ) 
        return (PLANG)0 ;
    if ( !myLang ) 
        return (PLANG)0 ;
    while ( myLang && strcmp(myLang->name, name) ) 
        myLang =  myLang->Next ;
    if ( !myLang ) 
        _write(2, "Unknown Language \n", 18);
    return myLang ;
}

/******************************************************************
       GetNodeLang : get language of a given node
   **********/
/***********************************************************/
PLANG GetNodeLang ( PPTREE tree )
{
    int     mask = CacheRead(tree) & ~(NODE_MASK)&0xFFFF ;
    PLANG   myLang = lang ;
    
    while ( myLang && mask != myLang->languageMask ) 
        myLang =  myLang->Next ;
    if ( !myLang ) 
        _write(2, "Unknown Language for node \n", 23);
    return myLang ;
}

/******************************************************************
   SwitchLang : switch in a language  of a given language*/
/* mask
   *******************************************************************/
void SwitchLangMask ( int mask )
{
    PLANG   myLang = lang ;
    
    while ( myLang && mask != myLang->languageMask ) 
        myLang =  myLang->Next ;
    if ( !myLang ) {
        _write(2, "Unknown Language mask \n", 23);
        pCurrentLanguage =  (PLANG)0 ;
        return ;
    }
    
    /* EL le 12/10*/
    /*    FuncArity = myLang -> FuncArity ; */
    tabArity           =  myLang->arityNode ;
    listConst          =  myLang->listConst ;
    the_parse_entry_pt =  myLang->parse_entry ;
    languageMask       =  myLang->languageMask ;
    currentLanguage    =  myLang->name ;
    pCurrentLanguage   =  myLang ;
}

/******************************************************************
   SwitchLang : switch in a language  of a given language*/
/* mask
   *******************************************************************/
void SwitchLangPoint ( PLANG myLang )
{
    if ( !myLang ) {
        _write(2, "Unknown Language pointer \n", 23);
        pCurrentLanguage =  (PLANG)0 ;
        return ;
    }
    
    /* EL le 12/10/93
       FuncArity = myLang -> FuncArity ; */
    tabArity           =  myLang->arityNode ;
    listConst          =  myLang->listConst ;
    the_parse_entry_pt =  myLang->parse_entry ;
    languageMask       =  myLang->languageMask ;
    currentLanguage    =  myLang->name ;
    pCurrentLanguage   =  myLang ;
}

/******************************************************************
   the_parse_entry_metachop : function used as entry poin*/
/*t
   when parsing another language in metachop
   *******************************************************************/
PPTREE the_parse_entry ( int error_free )
{
    return (*the_parse_entry_pt)(error_free);
}

/******************************************************************
       AddRef : add a reference to a tree
   ******************/
/***************************************************/
void _fastcall AddRef ( PPTREE tree )
{
    register int    *node ;
    
    if ( !tree || tree == (PPTREE) -1 ) 
        return ;
    node =  (int *)CacheAddrReadM(tree);
    node++ ;
#   if defined(VISUAL) || defined(BORLAND)
        if ( addRefCritical ) 
            WaitForSingleObject(addRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            EnterCriticalSection(&addRefCritical);
#   endif
    *node =  (*node & REF_MASK) + 1 | *node & ~(REF_MASK);
#   if defined(BORLAND) || defined(VISUAL)
        if ( addRefCritical ) 
            ReleaseSemaphore(addRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            LeaveCriticalSection(&addRefCritical);
#   endif
    if ( !(*node & REF_MASK) ) {
        MetaExit(2, "Abort : Invalid (null) Reference Number\n");
    }
}

/******************************************************************
       RemRef : remove a reference to a tree
   ***************/
/******************************************************/
void _fastcall RemRef ( PPTREE tree )
{
    register int    *node ;
    
    if ( !tree || tree == (PPTREE) -1 ) 
        return ;
    node =  (int *)CacheAddrReadM(tree);
    node++ ;
#   if defined(VISUAL) || defined(BORLAND)
        if ( addRefCritical ) 
            WaitForSingleObject(addRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            EnterCriticalSection(&addRefCritical);
#   endif
    *node =  (*node & REF_MASK) - 1 | *node & ~(REF_MASK);
#   if defined(BORLAND) || defined(VISUAL)
        if ( addRefCritical ) 
            ReleaseSemaphore(addRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            LeaveCriticalSection(&addRefCritical);
#   endif
}

/******************************************************************
       FreeRef : free a reference on a tree
   ****************/
/*****************************************************/
void _fastcall FreeRef ( PPTREE tree )
{
    register int    *node ;
    int             nbRef ;
    
    if ( !tree || tree == (PPTREE) -1 ) 
        return ;
    node =  (int *)CacheAddrReadM(tree);
    node++ ;
#   if defined(VISUAL) || defined(BORLAND)
        if ( addRefCritical ) 
            WaitForSingleObject(addRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            EnterCriticalSection(&addRefCritical);
#   endif
    *node =  (nbRef = (*node & REF_MASK) - 1) | *node & ~(REF_MASK);
#   if defined(BORLAND) || defined(VISUAL)
        if ( addRefCritical ) 
            ReleaseSemaphore(addRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( addRefCritical ) 
            LeaveCriticalSection(&addRefCritical);
#   endif
    if ( nbRef < 0 ) {
        MetaExit(2, "Abort : Invalid Reference Number\n");
    }
    if ( !nbRef && !MFatherTree(--node) ) 
        FreeTreeRec(tree);
}

/******************************************************************
       FreeUnRef : free a tree when unref
   ******************/
/***************************************************/
void _fastcall FreeUnRef ( PPTREE tree )
{
    if ( !FatherTree(tree) ) 
        FreeTreeRec(tree);
}

/******************************************************************
       PSet : equal on trees
   *******************************/
/**************************************/
PPTREE _fastcall PSet ( PPTREE tree1, PPTREE tree2 )
{
    AddRef(tree2);
    FreeRef(tree1);
    return tree2 ;
}

/******************************************************************
       DeRef : de reference a pointer on a bad tree
   ********/
/*************************************************************/
void DeRef ( PPTREE *ptree )
{
    *ptree =  (PPTREE)0 ;
}

int TreeArity ( PPTREE tree )
{
    return treearity(tree);
}

typedef struct coord_elem {
    PPTREE           tree ;   /* arbre pointe */ 
    int              x0 ;     /* abscisse */ 
    int              y0 ;     /* ordonnee */ 
    struct coord_elem *next ; /* next elem in list */ 
}   COORD_ELEM,     *PCOORD_ELEM ;

static PCOORD_ELEM  listCoord = (PCOORD_ELEM)0 ;
static PCOORD_ELEM  listFreeCoord = (PCOORD_ELEM)0 ;

/**************************************************************
   MarkCoordTree : mark the absolute coordinates of a tree
   */
/*                    put absolute coordinates of a tree in a
         list to find them quickly
   *****************/
/************************************************/
void MarkCoordTree ( PPTREE tree, int x, int y )
{
    PCOORD_ELEM pCoord ;
    
    /* try to find a coord elem in free list */
    pCoord =  listFreeCoord ;
    if ( pCoord ) {
        listFreeCoord =  listFreeCoord->next ;
    } else {
        pCoord =  (PCOORD_ELEM)malloc(sizeof(COORD_ELEM));
    }
    
    /* fill the coord elem */
    pCoord->tree =  tree ;
    pCoord->x0   =  x ;
    pCoord->y0   =  y ;
    
    /* add it to the list */
    pCoord->next =  listCoord ;
    listCoord    =  pCoord ;
}

/**************************************************************
   UnMarkCoordTree : unmark coord tree
     */
/*  reverse mark coord tree
   ***************************************************************/
void UnMarkCoordTree ( PPTREE tree )
{
    PCOORD_ELEM pCoord ;
    
    /* liberates all elem until we find the node parameter*/
    pCoord =  listCoord ;
    while ( pCoord ) {
        
        /* put the elem in the free list */
        listCoord     =  pCoord->next ;
        pCoord->next  =  listFreeCoord ;
        listFreeCoord =  pCoord ;
        
        /* if we found the tree stop now */
        if ( tree == pCoord->tree ) 
            break ;
        pCoord =  listCoord ;
    }
}

/**************************************************************
       PutCoord : positionne des coordonnees sur un noeud
   ******/
/***********************************************************/
void PutCoord ( PPTREE node, int x, int y, int dx, int dy )
{
    PPTREE          comm = SonTree(node, 0);
    register long   res ;
    long            flag ;
    
    /* if there is not already a GEO node
       instead of the comm node create it  */
    if ( NumberTree(comm) != GEO ) {
        PPTREE  geo = MakeTree(GEO, 2);
        ReplaceTree(geo, 0, comm);
        ReplaceTree(node, 0, geo);
        comm =  geo ;
    }
    res =  x ;
    
    /* ecriture de x, y en position 1 du noeud */
    res =  (res & 0xffff) << 16 | y & 0xffff ;
    SON_WRITE(comm, 1, res);
    
    /* recuperation du flag
       ecriture de dx et de dy en
       remettant le flag a sa valeur initiale */
    res  =  (char *)SON_READ(comm, 2) - (char *)0 ;
    flag =  res & 0x00008000 ;
    res  =  dx ;
    res  =  (res & 0xffff) << 16 | dy & 0xffff ;
    res  =  res & 0xffff7fff | flag ;
    SON_WRITE(comm, 2, res);
}

/**************************************************************
       PutCoordE : positionne des coordonnees sur un noeud
   *****/
/************************************************************/
void PutCoordE ( PPTREE node, int x, int y, int dx, int dy, int xBottom, int mark )
{
    PPTREE          comm = SonTree(node, 0);
    register long   res = 0 ;
    long            res1 ;
    long            flag ;
    
    /* if there is not already a GEO node
       instead of the comm node create it  */
    if ( NumberTree(comm) != GEO ) {
        PPTREE  geo = MakeTree(GEO, 2);
        ReplaceTree(geo, 0, comm);
        ReplaceTree(node, 0, geo);
        comm =  geo ;
    }
    
    /* ecriture de x, y en position 1 du noeud */
    res =  (res & 0xffff) << 16 | y & 0xffff ;
    SON_WRITE(comm, 1, res);
    
    /* recuperation du flag
       ecriture de dx et de dy en
       remettant le flag a sa valeur initiale */
    res  =  (char *)SON_READ(comm, 2) - (char *)0 ;
    flag =  res & 0x00008000 ;
    res  =  dx ;
    res  =  (res & 0xffff) << 16 | dy & 0xffff ;
    res  =  res & 0xffff7fff | flag ;
    SON_WRITE(comm, 2, res);
    
    /* ecriture de xBottom, mark en position 3 du noeud */
    res =  xBottom ;
    res =  (res & 0xffff) << 16 | mark & 0xffff ;
    SON_WRITE(comm, 3, res);
}

/**************************************************************
       PutFlag : positionne un flag sur un noeud
   ***************/
/**************************************************/
void PutFlag ( PPTREE node, int flag )
{
    PPTREE          comm = SonTree(node, 0);
    register long   valRead ;
    
    /* if there is not already a GEO node
       instead of the comm node create it */
    if ( NumberTree(comm) != GEO ) {
        PPTREE  geo = MakeTree(GEO, 2);
        ReplaceTree(geo, 0, comm);
        ReplaceTree(node, 0, geo);
        comm =  geo ;
    }
    valRead =  (char *)SON_READ(comm, 2) - (char *)0 & 0xffff7fff ;
    if ( flag ) {
        valRead |= 0x00008000 ;
    }
    SON_WRITE(comm, 2, valRead);
}

/********************************************************************
   GetCoordAbs : trouve la coordonne absolue d'un arbre
   */
/*   *******************************************************************/
void GetCoordAbs ( PPTREE tree, PPTREE lim, int *x0, int *y0 )
{
    int     x, y, dx, dy ;
    int     nx, ny, ndx, ndy ;
    PPTREE  father ;
    
    if ( listCoord && tree == listCoord->tree ) {
        *x0 =  listCoord->x0 ;
        *y0 =  listCoord->y0 ;
        return ;
    }
    GetCoord(tree, &x, &y, &dx, &dy);
    father =  tree ;
    while ( (father = fathertree(father)) ) {
        
        /* if we know the coordinates stop now */
        if ( listCoord && father == listCoord->tree ) {
            x += listCoord->x0 ;
            y += listCoord->y0 ;
            break ;
        } else {
            GetCoord(father, &nx, &ny, &ndx, &ndy);
            x += nx ;
            y += ny ;
            if ( father == lim ) 
                break ;
        }
    }
    *x0 =  x ;
    *y0 =  y ;
}

/**************************************************************
       GetCoord : recupere des coordonnees sur un noeud
   ********/
/*********************************************************/
/* extension du bit de signe pour un 2 bytes */
#define EXTEND_SHORT(NB) ((NB)&0x8000?~0xffff|(NB):(NB))

int GetCoord ( PPTREE node, int *x, int *y, int *dx, int *dy )
{
    long    valRead ;
    PPTREE  comm ;
    
    if ( !node || ((comm = (PPTREE)SON_READ(node, 0)), NumberTree(comm) != GEO) ) {
        *x =  *y = *dx = *dy = 0 ;
        return 0 ;
    }
    
    /* il faut conserver les nombres negatifs d'ou les tests avec
       0x8000 */
    valRead =  (long)SON_READ(comm, 1);
    *y      =  EXTEND_SHORT(valRead & 0xffff);
    *x      =  EXTEND_SHORT(valRead >> 16 & 0xffff);
    valRead =  (long)SON_READ(comm, 2);
    *dy     =  EXTEND_SHORT(valRead & 0x7fff);
    *dx     =  EXTEND_SHORT(valRead >> 16 & 0xffff);
    return 1 ;
}

int GetCoordE ( PPTREE node, int *x, int *y, int *dx, int *dy, int *xBottom, int *mark )
{
    long    valRead ;
    PPTREE  comm ;
    
    if ( !node || ((comm = (PPTREE)SON_READ(node, 0)), NumberTree(comm) != GEO) ) {
        *x =  *y = *dx = *dy = *xBottom = *mark = 0 ;
        return 0 ;
    }
    
    /* il faut conserver les nombres negatifs d'ou les tests avec
       0x8000 */
    valRead  =  (long)SON_READ(comm, 1);
    *y       =  EXTEND_SHORT(valRead & 0xffff);
    *x       =  EXTEND_SHORT(valRead >> 16 & 0xffff);
    valRead  =  (long)SON_READ(comm, 2);
    *dy      =  EXTEND_SHORT(valRead & 0x7fff);
    *dx      =  EXTEND_SHORT(valRead >> 16 & 0xffff);
    valRead  =  (long)SON_READ(comm, 3);
    *xBottom =  EXTEND_SHORT(valRead & 0x7fff);
    *mark    =  EXTEND_SHORT(valRead >> 16 & 0xffff);
    return 1 ;
}

/**************************************************************
       GetFlag : recupere le flag sur un noeud
   *****************/
/************************************************/
int GetFlag ( PPTREE node, int *flag )
{
    long    valRead ;
    PPTREE  comm ;
    
    if ( !node || ((comm = (PPTREE)SON_READ(node, 0)), NumberTree(comm) != GEO) ) {
        *flag =  0 ;
        return 0 ;
    }
    valRead =  (long)SON_READ(comm, 2);
    *flag   =  (valRead & 0x00008000) != 0 ;
    return 1 ;
}

/**************************************************************
       FreeCoord : libere les coordonnees sur un noeud
   *********/
/********************************************************/
void FreeCoord ( PPTREE node )
{
    PPTREE  comm ;
    
    if ( !node ) 
        return ;
    comm =  (PPTREE)SON_READ(node, 0);
    if ( NumberTree(comm) != GEO ) 
        return ;
    ReplaceTree(node, 0, (PPTREE)SON_READ(comm, 0));
}

/* JPJ << */
int TraceLex ()
{
    char    string [MAXLENGTH];
    char    *name = NameConst(lexEl.Value);
    
    name =  (name) ? name : NULL_STRING();
    sprintf(string, "Lex input : %s .. %s\n", name, lexEl.string());
#   if !defined(ON_W)
        write(2, string, strlen(string));
#   else 
        _write(1, string, strlen(string));
#   endif
    return 1 ;
}

int _fastcall TraceRule ( char *name, int state, PPTREE tree )
{
    int     i = _funcLevel % TRACE_MAX_DEPTH ;
    char    string [MAXLENGTH];
    char    *str, *node ;
    
    for ( str = string ; str < string + i ; str++ ) 
        *str =  ' ';
    switch ( state ) {
        case TRACE_ENTER : 
            sprintf(str, "%d -> %s\n", _funcLevel, name);
            break ;
        case TRACE_EXIT : 
            sprintf(str, "%d <- %s ERROR\n", _funcLevel, name);
            break ;
        case TRACE_RETURN : 
            node = NameConst(NumberTree(tree));
            node = tree && node ? node : NULL_STRING();
            sprintf(str, "%d <- %s RETURN %s\n", _funcLevel, name, node);
    }
#   if defined(ON_W)
        _write(1, string, strlen(string));
#   else 
        _write(2, string, strlen(string));
#   endif
    return 1 ;
}

/**************************************************************
   StoreRef : Add a ref to a ret value to preserve
       */
/*           until it is used by the calling function
   ***************************************************************/
#define PT_POS_SIZE 1024 * 8

static PPTREE   tabPt [PT_POS_SIZE];
int             tabPtPos = -1 ;
int             *ptTabPtPos = &tabPtPos ;
PPTREE          *ptTabPt = tabPt ;

void InitStoreRef ()
{
    PPTREE  *pt ;
    
    /* if tab is not initialized initialize it */
    if ( *ptTabPtPos == -1 ) {
        for ( pt = (ptTabPt) + PT_POS_SIZE - 1 ; pt >= (ptTabPt) ; pt-- ) 
            *pt =  (PPTREE)0 ;
        
        /* now it is initialized */
        *ptTabPtPos =  0 ;
    }
}

#define SIZE_STACK_STRING STRING_QUANT + 16
#define SIZE_STACK_PTREE 10
#define SIZE_ENTRY 10

#include "tabsort.h"

static TabSortString    stackString [SIZE_STACK_STRING];
TabSortEqual<TREE>      erlStackPtree [SIZE_STACK_PTREE];
bool                    TabSortString::initialized = false ;
TabSortString           (*ptStackString)[] = (TabSortString(*)[])(&stackString);
TabSortEqual<TREE>      (*ptStackPtree)[] = (TabSortEqual<TREE> (*)[])(&erlStackPtree);
bool                    *ptStackInitialized = &TabSortString::initialized ;

void ClearTreeStoreRef ()
{
    PPTREE  *pt ;
    
    /* clear space */
    if ( *ptTabPtPos != -1 ) 
        for ( pt = (ptTabPt) + PT_POS_SIZE - 1 ; pt >= (ptTabPt) ; pt-- ) 
            if ( *pt ) {
                FreeRef(*pt);
                *pt =  (PPTREE)0 ;
            }
}

void ClearStoreRef ()
{
    PPTREE  *pt ;
    
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            WaitForSingleObject(storeRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            EnterCriticalSection(&storeRefCritical);
#   endif
    try {
        
        // clear real store ref space
        ClearTreeStoreRef();
        int arity = SIZE_STACK_PTREE - 1 ;
        for (; arity >= 0 ; arity-- ) {
            if ( *ptStackInitialized ) 
                while ( (*ptStackPtree)[arity].Size() > 0 ) {
                    PPTREE  myPoint = MallocNodeTree(arity);
                    free(myPoint);
                }
        }
        int size = SIZE_STACK_STRING - 1 ;
        for (; size > 0 ; size-- ) {
            if ( *ptStackInitialized ) 
                while ( (*ptStackString)[size].Size() > 0 ) {
                    char    *myString = MallocString(size);
                    free(myString);
                }
        }
    } catch ( ... ) {
#       if defined(VISUAL) || defined(BORLAND)
            if ( storeRefCritical ) 
                ReleaseSemaphore(storeRefCritical, 1, 0);
#       elif defined(HAS_POSIX_SEMAPHORE)
            if ( storeRefCritical ) 
                LeaveCriticalSection(&storeRefCritical);
#       endif
        throw ;
    }
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            ReleaseSemaphore(storeRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            LeaveCriticalSection(&storeRefCritical);
#   endif
}

static long indexStoreRef = 0 ;

PPTREE StoreRef ( PPTREE tree )
{
    if ( !tree ) 
        return (PPTREE)0 ;
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            WaitForSingleObject(storeRefCritical, INFINITE);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            EnterCriticalSection(&storeRefCritical);
#   endif
    try {
        PPTREE  *content = (ptTabPt) + *ptTabPtPos ;
        PPTREE  toBeFreed ;
        
        /* keep in index */
        indexStoreRef++ ;
        
        /* free previous tree */
        AddRef(tree);
        
        /* free later since FreeRef can call StoreRef */
        toBeFreed =  *content ;
        
        /* store new one*/
        *content  =  tree ;
        
        /* go to next slot */
        if ( ++*ptTabPtPos == PT_POS_SIZE ) 
            *ptTabPtPos =  0 ;
        if ( toBeFreed ) 
            FreeRef(toBeFreed);
    } catch ( ... ) {
#       if defined(VISUAL) || defined(BORLAND)
            ReleaseSemaphore(storeRefCritical, 1, 0);
#       elif defined(HAS_POSIX_SEMAPHORE)
            LeaveCriticalSection(&storeRefCritical);
#       endif
        throw ;
    }
#   if defined(VISUAL) || defined(BORLAND)
        if ( storeRefCritical ) 
            ReleaseSemaphore(storeRefCritical, 1, 0);
#   elif defined(HAS_POSIX_SEMAPHORE)
        if ( storeRefCritical ) 
            LeaveCriticalSection(&storeRefCritical);
#   endif
    
    /* return tree */
    return tree ;
}

const char *DispString ( EString *str )
{
    return str->c_str();
}

// SetForReading : prepare metagen for reading
void SetForReading ()
{
    xErr           =  yErr = 0 ;
    theErrorLine   =  -1 ;
    yErrBeg        =  0 ;
    oldLine        =  line = 1 ;
    col            =  0 ;
    posFileInput   =  _lseek(input, 0, SEEK_CUR);
    ptStockBuf     =  ptOldBuf = posBufInput = -1 ;
    lBufInput      =  tokenAhead = 0 ;
    lexCallLex     =  0 ;
    lastContextPos =  (PFILE_POSITION)0 ;
    flagNewLine    =  0 ;
    NextChar();
    storLine  =  storCol = -1 ;
    listComm  =  (PCOMM_ELEM)0 ;
    _lastTree =  (PPTREE)0 ;
}

// Normalize : normalize the name of a file
// parameters :
//              pathName : the path name to be normalized
// return : normalized name
EString Parser::Normalize ( const EString &pathName )
{
    
    EString path ; // path of file
    EString name ; // name of file
    
    // get name and path
    path =  StripFile(pathName);
    name =  StripDir(pathName);
    
    // suppress '/' and '\' at the end of path
    int     pos = path.length() - 1 ;
    char    character ;
    
    character =  *(path.c_str() + pos);
    while ( pos >= 0 && (character == '/' || character == '\\') ) {
        if ( --pos >= 0 ) {
            character =  *(path.c_str() + pos);
        }
    }
    path =  path.substring(0, ++pos);
    
    // reinsert one / or "\\"
#   if defined(ON_W)
        path += "\\";
#   else 
        path += "/"; // get absolute path of file
        
        // char    bufferCurrent [MAXLENGTH];
        // char    bufferFile [MAXLENGTH];
#   endif
    
    char    *bufferCurrent ;
    char    *bufferFile ;
    
    // getcwd((char *)&bufferCurrent, MAXLENGTH);
    bufferCurrent =  _getcwd((char *)0, MAXLENGTH);
    _chdir(path.c_str());
    
    // getcwd((char *)&bufferFile, MAXLENGTH);
    bufferFile =  _getcwd((char *)0, MAXLENGTH);
    _chdir(bufferCurrent);
    
    // return normalized path
    path =  bufferFile ;
#   if defined(ON_W)
        path += "\\";
#   else 
        path += "/";
#   endif
    path += name ;
    
    // free strings
    if ( bufferCurrent != (char *)0 ) 
        free(bufferCurrent);
    if ( bufferFile != (char *)0 ) 
        free(bufferFile);
    return EString(path);
}

// StripDir :  strip dir out of a path name
// parameters :
//              pathName : the pathname to be stripped
// return stripped name
EString Parser::StripDir ( const EString &pathName )
{
    
    EString path ; // path of file
    EString name ; // name of file
    
    // get name and path
    path =  StripFile(pathName);
    if ( path == "." && pathName.substring(0, 1) != "." ) 
        path =  "";
    name =  pathName.at(path.length(), pathName.length() - path.length());
    return EString(name);
}

// StripFile : strip file out of a directory name
// parameters :
//              pathName : the path name to be stripped
// return : stripped name
EString Parser::StripFile ( const EString &pathName )
{
    
    // set local dir
    unsigned int    pos ; // position of last / in string
    
    pos =  pathName.length();
    while ( pos > 0 ) {
        pos-- ;
        if ( pathName [pos] == '\\' || pathName [pos] == '/' || pathName [pos] == ':' ) {
            return pathName.at(0, pos + 1);
        }
    }
    return EString(".");
}

static bool readTreeMode = false ;

// ReadInclude : read included files
// parameters :
//              name : the name of searched file
//              here : tell if we have to look in local directory
//              compTree : tell if read tree files
// return : the found tree
PPTREE Parser::ReadInclude ( const char *name, int here, bool compTree )
{
    
    PPTREE  parsed(0);  // parsed tree
    EString theName ;   // theName of file to be parsed
    
    compTree |= readTreeMode ;
    
    // load included file
    theName  =  FindFile(name, getenv("PATH"), 0);
    if ( theName == "" && here ) {
        if ( localDir && *localDir != '\0' ) 
            theName =  FindFile(name, localDir, 0);
        else {
            theName =  FindFile(name, "", here);
        }
    }
    if ( theName != "" ) {
        char    *oldLocalDir = localDir ;
        
        // compute new local dir path
        localDir =  AllocString((char *)(StripFile(theName).c_str()));
        
        // parse file
        if ( compTree ) 
            parsed =  ReadFileTree(theName.c_str());
        else {
            parsed =  ReadFile(theName.c_str());
        }
        
        // restore localdir
        if ( localDir ) 
            free(localDir);
        localDir =  oldLocalDir ;
    } else {
        char    *string = (char *)malloc(512); // display string
        sprintf(string, "Cannot open %s\n", name);
        MetaExit(3, string);
    }
    if ( parsed != PTREE((void *)0) && parsed != PTREE((void *) -1) ) {
        listInclude =  ::AddList(listInclude, parsed);
    }
    return parsed ;
}

/**************************************************************
       ReadFile : read a file
   **********************************/
/*******************************/
static int  extractLevel = 0 ;
int         _inhibited = 0 ;

PPTREE Parser::ReadInFile ( int oldInput )
{
    PFILE_POSITION  position ;
    PPTREE          saveLastTree = (PPTREE)0 ;
    PPTREE          ret = (PPTREE)0 ;
    PCOMM_ELEM      oldListComm ;
    
    sumAllError =  0 ;
    if ( input ) {
        position =  SavePos();
        if ( lastContextPos && !lastContextPos->nbRef ) 
            FreePos(lastContextPos);
        oldListComm  =  listComm ;
        saveLastTree =  _lastTree ;
        extractLevel++ ;
        
        // set everything before reading
        SetForReading();
        
        //        ret = (*the_parse_entry_pt)(1);
        ret =  main_entry(1);
        if ( ret && ret != (PPTREE) -1 ) {
            AddRef(ret);
            if ( !_inhibited ) {
                SqueezeMeta(ret);
                PullComment(ret);
            }
        }
        /*restore comment list */
        extractLevel-- ;
        listComm  =  oldListComm ;
        _lastTree =  saveLastTree ;
        
        /* put file at position currently reached */
        /* el 31/03/98 */
#       if 0
            lseek(input, posFileInput - lBufInput + posBufInput + 1, SEEK_SET);
#       else 
            _lseek(input, posFileInput - lBufInput + posBufInput, SEEK_SET); /* restore other things */ 
#       endif
        input        =  oldInput ;
        posFileInput =  -10000 ;
        if ( input ) {
            RestorePos(position);
            FreePos(position);
        } else 
            FreePos(position);
        xErr         =  yErr = 0 ;
        theErrorLine =  -1 ;
#       if 0
            yErrBeg =  0 ;
#       endif
    }
    if ( ret && ret != (PPTREE) -1 ) 
        RemRef(ret);
    
    /* avoid sending a -1 tree */
    if ( ret == (PPTREE) -1 ) 
        ret =  (PPTREE)0 ;
    return ret ;
}

PPTREE Parser::ReadFile ( const char *name )
{
    int     saveInput = input ;
    int     newInput ;
    PPTREE  ret = (PPTREE)0 ;
    
    pvReadSource =  true ;
    if ( (newInput = (input = _open(name, O_RDONLY | O_BINARY))) != -1 ) {
        
        // EL 15/05/01 keep last file
        stackFileRead.push_back(lastFileRead);
        lastFileRead =  name ;
        
        // do the parsing
        sprintf(errStr, "Reading %s ...\n", name);
        _write(2, errStr, strlen(errStr));
        ret =  ReadInFile(saveInput);
        _write(2, " Done\n", 6);
        _close(newInput);
        
        // restore last file
        lastFileRead =  stackFileRead.back();
        stackFileRead.pop_back();
    } else {
        
        /* char    buffer [512];
           getcwd(buffer, 512);*/
        char    *buffer = _getcwd((char *)0, 512);
        sprintf(errStr, "Cannot open %s in %s, check your INCLUDE variable \n", name, buffer);
        _write(2, errStr, strlen(errStr));
        free(buffer);
    }
    input =  saveInput ;
    return ret ;
}

bool Parser::CheckVersion ( int version )
{
    return version == Version();
}

int Parser::Version ()
{
    return CURRENT_VERSION ;
}

// WriteFileTree : write a tree in a file
// parameter :
//              name : name of file to write
//              tree : the tree to be written
//              encoder : encoder
// return : none
void Parser::WriteFileTree ( const char *name, PTREE tree, PTREE *encoder )
{
    
    int     output ; // file descr to write file
    EString treeName (name) ;
    
    // compute name and open file
    treeName += ".tree";
    output   =  _open(treeName.c_str(), O_CREAT | O_RDWR | O_BINARY | O_TRUNC, 0666 /*S_IWRITE | S_IREAD*/ );
    
    // if file is opened dump tree
    if ( output > 0 ) {
        
        // EString fileString ; // string for file
        // fileString.Resize(512000);
        std::vector<EString>    vect ;
        
        // write version of encoder
        int                     version = Version();
        _write(output, (char *)&version, sizeof(int));
        
        // write encoded tree
        if ( tree ) {
            if ( encoder ) 
                encoder->CoarseEncode(tree, vect);
            else 
                CoarseEncode(tree, vect);
            for ( auto iter = vect.begin() ; iter != vect.end() ; iter++ ) {
                _write(output, *iter, (*iter).length());
            }
        }
        
        // close file
        _close(output);
    }
}

PPTREE Parser::ReadFileTree ( const char *name, PTREE *encoder )
{
    int     saveInput = input ;
    int     newInput ;
    PPTREE  ret = (PPTREE)0 ;
    
    readTreeMode =  true ;
    
    // try to read a tree version of file
    EString treeName (name) ;
    
    treeName += ".tree";
    
    // compare dates
    // get current change date of file
    
    struct stat statInfo ;     // info on file
    struct stat statInfoTree ; // info on file tree
    int        empty ;         // tell if file tree exist
    int        sourceExist ;   // tells if source exist
    
#   if defined(ON_W)
        sourceExist =  stat(name, &statInfo);
        empty       =  stat(treeName.c_str(), &statInfoTree);
#   else 
        sourceExist =  stat(name, &statInfo);
        empty       =  stat(treeName.c_str(), &statInfoTree);
#   endif
    if ( !empty && (sourceExist || statInfo.st_mtime <= statInfoTree.st_mtime) ) {
        if ( (newInput = _open(treeName.c_str(), O_RDONLY | O_BINARY)) != -1 ) {
            int version = -1 ; // version of tree file
            _read(newInput, (char *)&version, sizeof(int));
            if ( CheckVersion(version) ) {
                sprintf(errStr, "Reading %s ...\n", treeName.c_str());
                _write(2, errStr, strlen(errStr));
                int                     size ; // size of file
                int                     readSize = 0 ;
                std::vector<EString>    vect ;
                size =  statInfoTree.st_size ;
                size -= sizeof(int);
                
                // allocate a string of file size
                char    *fileString = (char *)malloc(1024);
                while ( readSize < size ) {
                    int toBeRead = size - readSize ;
                    if ( toBeRead > 1024 ) 
                        toBeRead =  1024 ;
                    
                    // read file
                    toBeRead =  _read(newInput, fileString, toBeRead);
                    VString content (fileString, toBeRead) ;
                    vect.push_back(content);
                    readSize += toBeRead ;
                }
                
                // close input
                _close(newInput);
                
                // decode string
                {
                    PTREE   retTree ; // resulting tree
                    char    *ptString = fileString ;
                    if ( encoder ) 
                        retTree =  encoder->CoarseDecode(vect);
                    else 
                        retTree =  CoarseDecode(vect);
                    AddRef(retTree);
                    ret =  (PPTREE)retTree ;
                }
                free(fileString);
                _write(2, " Done\n", 6);
                RemRef(ret);
                readTreeMode =  false ;
                return ret ;
            }
            _close(newInput);
        }
    }
    
    // if not a tree try to read directly the file
    ret          =  ReadFile(name);
    readTreeMode =  false ;
    AddRef(ret);
    {
        PTREE   cleanTree = ret ;
        CleanTree(cleanTree);
    }
    RemRef(ret);
    
    // try to store the file
    if ( ret != 0 && ret != (PPTREE) -1 ) {
        
        // EL 07/07/00 add writefiletree method
        AddRef(ret);
        WriteFileTree(name, ret, encoder);
        RemRef(ret);
    }
    return ret ;
}

/**************************************************************
       FindFile : find a file in env path
   **********************/
/*******************************************/
EString FindFile ( const char *name, const char *env, int here )
{
    int     ret, more = 1 ;
    char    *ptName, *inter, *inter1 ;
    EString fileName ;
    
#   if defined(DOS) || defined(ON_W)
        const char  separator = ';';
#   else 
        const char  separator = ':';
#   endif
    if ( here && (ret = _open(name, O_RDONLY | O_BINARY)) != -1 ) {
        _close(ret);
        fileName =  name ;
        return fileName ;
    }
    ptName =  (char *)env ;
    
    // if environment variable is set
    if ( env && *env ) 
        // do treatement while more paths in env variable
        while ( more ) {
            
            // search next path separator
            inter =  ptName ;
            while ( *inter && *inter != separator ) 
                inter++ ;
            
            // more indicates if there are more path
            more     =  *inter != '\0';
            
            // get the found path
            fileName =  EString(ptName, inter - ptName);
#           if defined(DOS) || defined(ON_W)
                if ( *(inter - 1) != '\\' && *(inter - 1) != ':' ) 
                    fileName += '\\';
#           else 
                if ( *(inter - 1) != '/' ) 
                    fileName += '/'; // catenate file name
#           endif
            fileName += name ;
            
            // try to open file
            if ( (ret = _open((char *)(fileName.c_str()), O_RDONLY | O_BINARY)) != -1 ) {
                _close(ret);
                return fileName ;
            }
            
            // get on next path beginning
            ptName =  inter + 1 ;
        }
    return EString("");
}

/**************************************************************
       MallocNodeTree : malloc of a tree node
   ******************/
/***********************************************/
static  PPTREE MallocNodeTree ( int arity )
{
    PPTREE  myPoint ;
    int     ind ;
    
    if ( 0 && *ptStackInitialized && arity < SIZE_STACK_PTREE && (ind = (*ptStackPtree)[arity].Size()) > 0 ) {
        myPoint =  (*ptStackPtree)[arity][--ind];
        (*ptStackPtree)[arity].Erase(ind);
    } else {
#       if 0
#           if defined(VISUAL) || defined(BORLAND)
                if ( addRefCritical ) 
                    WaitForSingleObject(addRefCritical, INFINITE);
#           elif defined(HAS_POSIX_SEMAPHORE)
                if ( addRefCritical ) 
                    EnterCriticalSection(&addRefCritical);
#           endif
#       endif
        myPoint =  (PPTREE)CacheMalloc((arity + 2) * sizeof(PPTREE) + 2 * sizeof(int));
#       if 0
#           if defined(BORLAND) || defined(VISUAL)
                if ( addRefCritical ) 
                    ReleaseSemaphore(addRefCritical, 1, 0);
#           elif defined(HAS_POSIX_SEMAPHORE)
                if ( addRefCritical ) 
                    LeaveCriticalSection(&addRefCritical);
#           endif
#       endif
        if ( myPoint == (PPTREE)0 ) {
            MetaExit(2, "Out of Memory Space");
        }
    }
    return myPoint ;
}

/**************************************************************
       MallocString : alloc of a string
   ************************/
/*****************************************/
char *MallocString ( int size )
{
    char    *myPoint ;
    int     ind ;
    
    if ( 0 && *ptStackInitialized && size < SIZE_STACK_STRING && (ind = (*ptStackString)[size].Size()) > 0 ) {
        myPoint =  (char *)(*ptStackString)[size].Get(--ind);
        (*ptStackString)[size].Erase(ind);
    } else {
        myPoint =  (char *)CacheMalloc(size);
        if ( myPoint == (char *)0 ) {
            MetaExit(2, "Out of Memory Space");
        }
    }
    return myPoint ;
}

/**************************************************************
       FreeNodeTree : free a node tree
   *************************/
/****************************************/
void FreeNodeTree ( int arity, PPTREE tree )
{
    if ( tree == (PPTREE)0 || tree == (PPTREE) -1 ) 
        return ;
    if ( arity == 2 ) {
        SON_WRITE(tree, 1, 0);
        SON_WRITE(tree, 2, 0);
    }
    
    int sizeEntry ;
    
    if ( 0 && *ptStackInitialized && arity < SIZE_STACK_PTREE && (sizeEntry = (*ptStackPtree)[arity].Size()) < SIZE_ENTRY ) {
        (*ptStackPtree)[arity].InsertAt(tree, sizeEntry);
        if ( false && arity == 0 && (*ptStackPtree)[arity].FindSame((*ptStackPtree)[arity].Size() - 1) ) {
            const char  *error = "error \n";
            _write(2, error, strlen(error));
        }
    } else {
#       if 0
#           if defined(VISUAL) || defined(BORLAND)
                if ( addRefCritical ) 
                    WaitForSingleObject(addRefCritical, INFINITE);
#           elif defined(HAS_POSIX_SEMAPHORE)
                if ( addRefCritical ) 
                    EnterCriticalSection(&addRefCritical);
#           endif
#       endif
        CacheFree(tree);
#       if 0
#           if defined(BORLAND) || defined(VISUAL)
                if ( addRefCritical ) 
                    ReleaseSemaphore(addRefCritical, 1, 0);
#           elif defined(HAS_POSIX_SEMAPHORE)
                if ( addRefCritical ) 
                    LeaveCriticalSection(&addRefCritical);
#           endif
#       endif
    }
}

/**************************************************************
       MallocString : alloc of a string
   ************************/
/*****************************************/
void FreeString ( char *string, int length )
{
    int size ;
    
    if ( !string || length <= -1 ) 
        return ;
    size =  length + 1 ;
    if ( 0 && *ptStackInitialized && size < SIZE_STACK_STRING && (*ptStackString)[size].Size() < SIZE_ENTRY * 5 ) 
        (*ptStackString)[size].InsertAt((void *)string, (*ptStackString)[size].Size());
    else {
#       if 0
#           if defined(VISUAL) || defined(BORLAND)
                if ( addRefCritical ) 
                    WaitForSingleObject(addRefCritical, INFINITE);
#           elif defined(HAS_POSIX_SEMAPHORE)
                if ( addRefCritical ) 
                    EnterCriticalSection(&addRefCritical);
#           endif
#       endif
        CacheFree(string);
#       if 0
#           if defined(BORLAND) || defined(VISUAL)
                if ( addRefCritical ) 
                    ReleaseSemaphore(addRefCritical, 1, 0);
#           elif defined(HAS_POSIX_SEMAPHORE)
                if ( addRefCritical ) 
                    LeaveCriticalSection(&addRefCritical);
#           endif
#       endif
    }
}

PPTREE Parser::ReadInString ( const char *name )
{
    
    /* << el 09/06/97 */
    PPTREE  resTree ; // resulting tree
    
    /* >> */
    sumAllError  =  0 ;
    input        =  -1 ;
    xErr         =  yErr = 0 ;
    theErrorLine =  -1 ;
    yErrBeg      =  0 ;
    oldLine      =  line = 1 ;
    col          =  0 ;
    posFileInput =  0 ;
    ptStockBuf   =  ptOldBuf = posBufInput = -1 ;
    lBufInput    =  tokenAhead = 0 ;
    lexCallLex   =  0 ;
    if ( lastContextPos && !lastContextPos->nbRef ) 
        FreePos(lastContextPos);
    lastContextPos =  (PFILE_POSITION)0 ;
    flagNewLine    =  0 ;
    ResetBufInput((char *)name);
    NextChar();
    storLine =  storCol = -1 ;
    
    /* << el 09/06/97 */
#   if 0
        return (*the_parse_entry_pt)(0);
#   else 
        listComm  =  (PCOMM_ELEM)0 ;
        _lastTree =  (PPTREE)0 ;
        
        // resTree = (*the_parse_entry_pt)(0);
        resTree   =  parse_entry(0);
        ResetBufInput((char *)0);
        return resTree ; /* >> */ 
#   endif
}

void DefaultExit ( int level, const char * )
{
    exit(level);
}

EString TreeClass::pvString ;                             // for misc display
void    (*ptMetaExit)(int, const char *) = &DefaultExit ; // function called on exit

// MetaExit : function call on exit
// parameters :
//              level : level of exit
//              string : a string displayed before exiting
void MetaExit ( int level, const char *string )
{
    
    // int i = 1 ;
    // int j = 1 / (i - 1);
    write(2, string, strlen(string));
    ClearStoreRef();
    (*ptMetaExit)(level, string);
}

/******************************************************************
    PutExtraInfo : put extra info on node
   ***********/
/**********************************************************/
void PutExtraInfo ( PPTREE tree, int extraInfo )
{
    int currentInfo = CacheRead(tree);
    
    CacheWrite(tree, currentInfo & 0xffff | extraInfo & 0xffff << 16);
}

/******************************************************************
    GetExtraInfo : get extra info on node
   ***********/
/**********************************************************/
int GetExtraInfo ( PPTREE tree )
{
    int currentInfo = CacheRead(tree);
    
    return currentInfo >> 16 & 0xFFFF ;
}

#if defined(HAS_SIGNAL)
    static  void smb_signal ( int i )
    {
        return ;
    }
#endif
#ifndef BLOCK_EMULATE_POSIX_SEMAPHORE
#   ifdef EMULATE_POSIX_SEMAPHORE
        void SEM_INIT ( HANDLE_SEMAPHORE_POSIX handle, int val )
        {
            
            // initialize handler
            union semun semopts ;
            
            semopts.val =  val ;
            semctl(handle, 0, SETVAL, semopts);
        }
        
        DWORD SEM_POST ( HANDLE_SEMAPHORE_POSIX handle, int val, bool undo, int timer )
        {
            struct sembuf    sops [1];
            struct itimerval tval ;
            time_t          initSec ;
            time_t          initMill ;
            
            if ( !val ) 
                return WAIT_TIMEOUT ;
        start : 
            sops [0].sem_num = 0 ;
            sops [0].sem_op =  val ;
            if ( undo ) 
                sops [0].sem_flg =  SEM_UNDO ;
            else 
                sops [0].sem_flg =  0 ;
            
            long    startSec = 0 ;
            long    startMil = 0 ;
            
            if ( timer ) {
#               if defined(VISUAL) || defined(BORLAND)
                    WaitForSingleObject(jumpCritical, INFINITE);
#               elif defined(HAS_POSIX_SEMAPHORE)
                    EnterCriticalSection(&jumpCritical);
#               endif
                signal(SIGALRM, &smb_signal);
                
                // look current timer value
                getitimer(ITIMER_REAL, &tval);
                
                // rearm only if timer too big
                if ( tval.it_value.tv_usec < 15000 || tval.it_value.tv_usec > timer * 1000 + 15000 ) {
                    
                    // arm alarm
                    tval.it_interval.tv_sec  =  0 ;
                    tval.it_interval.tv_usec =  0 ;
                    tval.it_value.tv_sec     =  0 ;
                    tval.it_value.tv_usec    =  timer * 1000 ;
                    setitimer(ITIMER_REAL, &tval, 0);
                }
#               if defined(BORLAND) || defined(VISUAL)
                    ReleaseSemaphore(jumpCritical, 1, 0);
#               elif defined(HAS_POSIX_SEMAPHORE)
                    LeaveCriticalSection(&jumpCritical);
#               endif
#               if defined(UNDERSCORE_FTIME)
                    struct _timeb tstruct ;
                    {
                        _ftime(&tstruct);
                    }
#               else 
                    struct timeb tstruct ;
                    {
                        ::ftime(&tstruct);
                    }
#               endif
                startSec =  tstruct.time ;
                startMil =  tstruct.millitm ;
            }
            if ( semop(handle, (sembuf *)&sops, 1) ) {
                if ( errno == EINTR ) {
                    long    diffTime ;
                    if ( timer ) {
                        
                        // look if time is ok
                        {
#                           if defined(UNDERSCORE_FTIME)
                                struct _timeb tstruct ;
                                {
                                    _ftime(&tstruct);
                                }
#                           else 
                                struct timeb tstruct ;
                                {
                                    ::ftime(&tstruct);
                                }
#                           endif
                            diffTime =  (tstruct.time - startSec) * 1000 + (tstruct.millitm - startMil);
                        }
#                       if 0
                            
                            // reset
                            tval.it_value.tv_sec  =  0 ;
                            tval.it_value.tv_usec =  0 ;
                            setitimer(ITIMER_REAL, &tval, 0);
#                       endif
                        
                        // if more to wait do it
                        if ( diffTime + 3 < timer ) {
                            timer =  timer - diffTime ;
                            goto start ;
                        }
                    }
                    
                    // MetaExit(1, "semop : semop post failed");
                    return WAIT_TIMEOUT ;
                } else 
                    return WAIT_TIMEOUT ;
            } else {
#               if 0
                    if ( timer ) {
                        tval.it_value.tv_sec  =  0 ;
                        tval.it_value.tv_usec =  0 ;
                        setitimer(ITIMER_REAL, &tval, 0);
                    }
#               endif
                return WAIT_OBJECT_0 ;
            }
        }
        
        HANDLE_SEMAPHORE_POSIX SEM_OPEN ( const char *name, int style, int right, int initVal, bool justOpen )
        {
            key_t   semKey = 0 ;
            int     whole = 0 ;
            
            while ( *name ) {
                semKey =  (semKey << 8) + *name ;
                whole  += *name ;
                name++ ;
            }
            semKey += whole ;
            
            HANDLE_SEMAPHORE_POSIX  semId ;
            
            // try to open an existing key
            if ( (semId = semget(semKey, 1, 0)) != -1 ) {
                if ( semId ) 
                    return semId ;
                else {
                    EString theName (name) ;
                    theName += "???";
                    return SEM_OPEN(theName.c_str(), style, right, initVal, justOpen);
                }
            } else if ( justOpen ) 
                return 0 ;
            
            // if not create it
            if ( (semId = semget(semKey, 1, IPC_CREAT | 0666)) == -1 ) {
                EString error("semget : semget failed\n");
                write(2, error.c_str(), error.length());
            } else {
                
                // initialize it
                SEM_INIT(semId, initVal);
            }
            
            // return semaphore
            if ( semId ) 
                return semId ;
            else {
                EString theName (name) ;
                theName += "???";
                return SEM_OPEN(theName.c_str(), style, right, initVal, justOpen);
            }
        }
        
        HANDLE_SEMAPHORE_POSIX SEM_GET ( const char *name, int style, int right, int initVal )
        {
            key_t   semKey = 0 ;
            int     whole = 0 ;
            
            while ( *name ) {
                semKey =  (semKey << 8) + *name ;
                whole  += *name ;
                name++ ;
            }
            semKey += whole ;
            
            // return semaphore if it exists
            HANDLE_SEMAPHORE_POSIX  semId = semget(semKey, 1, 0);
            
            if ( semId != -1 ) {
                
                // return semaphore
                if ( semId ) 
                    return semId ;
                else {
                    EString theName (name) ;
                    theName += "???";
                    return SEM_GET(theName.c_str(), style, right, initVal);
                }
            } else 
                return 0 ;
        }
        
        void SEM_UNLINK ( const char *name ) {}
        
        void SEM_WAIT ( HANDLE_SEMAPHORE_POSIX handle )
        {
            struct sembuf sops [2];
            
            sops [0].sem_num =  0 ;
            sops [0].sem_op  =  0 ;
            sops [0].sem_flg =  SEM_UNDO ;
            sops [1].sem_num =  0 ;
            sops [1].sem_op  =  + 1 ;
            sops [1].sem_flg =  SEM_UNDO ;
            while ( true ) {
                if ( semop(handle, (sembuf *)&sops, 2) ) {
                    
                    //        MetaExit(1, "semop : semop wait failed");
                    if ( errno != EINTR ) {
                        EString error("semop : semop wait failed\n");
                        write(2, error.c_str(), error.length());
                    } else 
                        continue ;
                } else 
                    return ;
            }
        }
        
        HANDLE_SHARED_POSIX SHM_OPEN ( const char *name, int initVal, bool justOpen )
        {
            key_t   semKey = 0 ;
            int     whole = 0 ;
            
            while ( *name ) {
                semKey =  (semKey << 8) + *name ;
                whole  += *name ;
                name++ ;
            }
            semKey += whole ;
            
            HANDLE_SHARED_POSIX semId ;
            
            // try to open an existing key
            if ( (semId = shmget(semKey, initVal, 0)) != -1 ) {
                
                // return semaphore
                if ( semId ) 
                    return semId ;
                else {
                    EString theName (name) ;
                    theName += "???";
                    return SHM_OPEN(theName.c_str(), initVal, justOpen);
                }
            } else if ( justOpen ) 
                return 0 ;
            
            // if not create it
            if ( (semId = shmget(semKey, initVal, IPC_CREAT | 0666)) == -1 ) {
                MetaExit(1, "semget : semget failed");
            }
            
            // return semaphore
            // return semaphore
            if ( semId ) 
                return semId ;
            else {
                EString theName (name) ;
                theName += "???";
                return SHM_OPEN(theName.c_str(), initVal, justOpen);
            }
        }
#   endif
#endif
