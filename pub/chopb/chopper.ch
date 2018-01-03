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
language chopb;

#include "token.h"
#include "decchopb.h"
#include <fcntl.h>

DecompChopb *DecompChopb::ptDecomp = 0 ;

// void        ReadIncludeS (char *, int) ;
int         nb_par_parse ;

int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompChopb decomp ;
    bool        dumpTree = false ;
    
    dumpCoord             =  0 ;
    DecompChopb::ptDecomp =  &decomp ;
    DecompCplus::ptDecomp =  (DecompCplus *)(&decomp);
    MetaInit((char *)0);
    chopb().AsLanguage();
    
    EString setFile = "c.set";
    int     offset = 0 ;
    
    while ( true ) {
        if ( argc - offset < 2 ) {
        help : 
            {
                EString message = "Bad name for your source file \n";
                message += "chopb [-dump] [-emacs] [-set fileName] fileNames \n";
                _write(2, message.c_str(), message.length());
                exit(0);
            }
        } else {
            ptName =  *(argv + 1 + offset);
            if ( EString("-v") == ptName ) {
                goto help ;
            } else if ( EString("-help") == ptName ) {
                goto help ;
            } else if ( EString("-emacs") == ptName ) {
                emacsCompatibleError =  1 ;
            } else if ( EString("-set") == ptName ) {
                if ( argc - offset < 3 ) {
                    sprintf(name, "Bad name for your source file \n");
                    _write(2, name, strlen(name));
                    goto help ;
                }
                setFile =  *(argv + 1 + ++offset);
            } else if ( EString("-dump") == ptName ) {
                dumpTree =  true ;
            } else 
                break ;
            offset += 1 ;
        }
    }
    ReadIncludeS(setFile.c_str(), 1);
    tree =  chopb().ReadFile(ptName);
    AddRef(tree);
    
    PTREE   newTree ;
    PTREE   rep ;
    PTREE   stat, else_stat, if_stat ;
    
    newTree =  <COMPOUND,()>;
    foreach (<IF>,tree,{
        stat =  for_elem ;
        stat == <,<>,if_stat,else_stat>;
        if ( if_stat == <STAT_VOID> ) {
            rep     =  copytree(newTree);
            if_stat += rep ;
        }
        if ( else_stat == <STAT_VOID> ) {
            rep       =  copytree(newTree);
            else_stat += rep ;
        }
        for_elem =  stat [1];
    })
    if ( dumpTree ) {
        DumpTree(tree);
        <NL>
    } else 
        decomp.ChopTree(tree);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
    return 0 ;
}


