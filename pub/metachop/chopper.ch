/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 93     */
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
language metachop;

#include "decmetac.h"
#include <fcntl.h>

DecompMetachop  *DecompMetachop::ptDecomp = 0 ;
DecompChopb     *DecompChopb::ptDecomp = 0 ;
char            *parseLanguage = (char *)0 ;
void            ReadIncludeS (const char *, int) ;
int             metaQuick = 0 ;
extern int      cplusGen ;
int             compiledLine = 0 ;
char            *theFileName = (char *)0 ;

int main ( int argc, char **argv )
{
    PPTREE          tree ;
    char            name [50];
    char            *ptName ;
    DecompMetachop  decomp ;
    
    erltoolsStorageKeeper =  true ;
    SetSingleThread(true);
    
    // --
    dumpCoord                =  1 ;
    cplusGen                 =  1 ;
    DecompMetachop::ptDecomp =  &decomp ;
    DecompChopb::ptDecomp    =  (DecompChopb *)(&decomp);
    DecompCplus::ptDecomp    =  (DecompCplus *)(&decomp);
    MetaInit((char *)0);
    metachop().AsLanguage();
    ReadIncludeS("c.set", 1);
    cplusGen =  metaQuick = 0 ;
follow : 
    if ( argc >= 2 ) {
        if ( !strcmp(*(argv + 1), "-c++") ) {
            cplusGen =  1 ;
            argc-- ;
            argv++ ;
            goto follow ;
        } else if ( !strcmp(*(argv + 1), "-f") ) {
            metaQuick =  1 ;
            argc-- ;
            argv++ ;
            goto follow ;
        }
    }
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        write(2, name, strlen(name));
        exit(0);
    } else {
        theFileName =  ptName = *(argv + 1);
    }
    emacsCompatibleError =  true ;
    tree                 =  metachop().ReadFile(theFileName);
    AddRef(tree);
    
    // replace comments
    TrimPosComment(tree);
    
    // compile tree
    DecompMetachop::ptDecomp -> ChopTree(tree);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
    return 0 ;
}

