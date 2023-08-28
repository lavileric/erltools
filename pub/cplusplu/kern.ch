/// 
/// @file kern.ch
/// 
/// @brief kern.ch
/// 
/*************************************************************************/
/*                                                                       */
/*        kern.ch   - Built by Eric Lavillonniere on Tandon 386 - 95     */
/*                                                                       */
/*************************************************************************/
/* This file is part of c++  prettyprinter */
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
language cplus;

#include <stdio.h>
#include <stdlib.h>
#include "deccplus.h"
#include <fcntl.h>
#include "Protector.h"

PPTREE  parse_cplus (int) ;

/// 
/// @fn int main (int argc, char **argv) 
/// 
/// @brief main
/// 
/// @param [in]     argc 
/// @param [in,out] argv 
/// 
/// @returns  int
/// 
// void    ReadIncludeS (char *, int) ;
int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompCplus decompObj ;
    bool        dumpTree = false ;
    bool        counter = false ;
    
    dumpCoord             =  0 ;
    DecompCplus::ptDecomp =  &decompObj ;
    MetaInit((char *)0);
    cplus().AsLanguage();
    
    EString setFile = "c.set";
    int     offset = 0 ;
    int     theMargin = -1 ;

    erltoolsStorageKeeper = true ;
    SetSingleThread(true);
    
    while ( true ) {
        if ( argc - offset < 2 ) {
        help : 
            {
                EString message = "Bad name for your source file \n";
                message += "cplus [-flat] [-emacs] [-set fileName] filenames\n";
                message += "\t-flat \t: classes indented on left\n";
                message += "\t-emacs \t: error messages compatible with emacs\n";
                message += "\t-dump \t: dump the tree\n";
                message += "\t-set \t: uses this c.set file\n";
                _write(2, message.c_str(), message.length());
                exit(0);
            }
        } else {
            ptName =  *(argv + 1 + offset);
            if ( EString("-flat") == ptName ) {
                decompObj.FlatFunct(true);
            } else if ( EString("-v") == ptName ) {
                goto help ;
            } else if ( EString("-help") == ptName ) {
                goto help ;
            }  else if ( EString("-tableString") == ptName ) {
                symbString = true ; ;
            }else if ( EString("-emacs") == ptName ) {
                emacsCompatibleError =  1 ;
            } else if ( EString("-set") == ptName ) {
                if ( argc - offset < 3 ) {
                    sprintf(name, "Bad name for your source file \n");
                    _write(2, name, strlen(name));
                    exit(0);
                }
                setFile =  *(argv + 1 + ++offset);
            } else if ( EString("-dump") == ptName ) {
                dumpTree =  true ;
            } else if ( EString("-count") == ptName ) {
                counter =  true ;
            } else if ( EString("-rightMargin") == ptName ) {
                if ( argc - offset >= 3 ) {
                    theMargin =  atoi(ptName + 1);
                    offset    += 1 ;
                }
            } else 
                break ;
            offset += 1 ;
        }
    }
    ReadIncludeS(setFile.c_str(), 1);
    tree =  cplus().ReadFile(ptName);
    AddRef(tree);
    SwitchLang("cplus");
    if ( theMargin > 0 ) 
        rightMargin =  theMargin ;
    
    // suppress none without comments
    foreach (<NONE>,tree,{
        PTREE   list = for_elem ;
        PTREE   nil ;
        if ( !IsComm(list, POST) && !IsComm(list, PRE) ) {
            list     =  list ^ ;
            for_elem =  list ^ ;
            list     += nil ;
        }
    })
    
    PTREE   stat, else_stat, if_stat ;
    
    foreach (<IF>,tree,{
        stat =  for_elem ;
        stat == <,<>,if_stat,else_stat>;
        if ( if_stat == <STAT_VOID> ) {
            stat += <,<>,<COMPOUND,()>>;
        }
        if ( else_stat == <STAT_VOID> ) {
            stat += <,<>,<>,<COMPOUND,()>>;
        }
        for_elem =  stat [1];
    })
    if ( dumpTree ) {
        DumpTree(tree);
        <NL>
    } else if ( counter ) {
        
        // count number of functions
        unsigned int    counterFunct = 0 ;
        EString         fileName (ptName) ;
        {
            foreach (<FUNC>,tree,
                counterFunct++
            )
            PrintString(fileName) ":  Number of Func : " PrintString(EString((int)counterFunct)) <NL>
        }
        
        // count number of non  commented lines
        unsigned int    nbLine = 0 ;
        {
            Protector<int>  protector(output, -1);
            StartOutputString();
            decompObj.ChopTree(tree);
            EString dString = EndOutputString();
            char    *pt = (char *)dString.c_str();
            bool    start = false ;
            for (; *pt ; pt++ ) {
                if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
                    start =  false ;
                if ( !start && *pt == '\n' ) {
                    nbLine++ ;
                    start =  true ;
                }
            }
        }
        PrintString(fileName) ":  Number of lines : " PrintString(EString((int)nbLine)) <NL>
        
        // count number of non  commented lines
        nbLine =  0 ;
        {
            PTREE           nocTree = NoCommentCopyTree(tree);
            Protector<int>  protector(output, -1);
            StartOutputString();
            decompObj.ChopTree(nocTree);
            EString dString = EndOutputString();
            char    *pt = (char *)dString.c_str();
            bool    start = false ;
            for (; *pt ; pt++ ) {
                if ( *pt != ' ' && *pt != '\t' && *pt != '\n' ) 
                    start =  false ;
                if ( !start && *pt == '\n' ) {
                    nbLine++ ;
                    start =  true ;
                }
            }
        }
        PrintString(fileName) ":  Number of non commented lines : " PrintString(EString((int)nbLine)) <NL>
    } else 
        decompObj.ChopTree(tree);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}


