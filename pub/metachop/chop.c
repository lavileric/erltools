/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89    */
/*                                                                       */
/*************************************************************************/
/* This file is part of metagen                                             
   
   Metagen is a syntaxic analyser generator with backtrack.
   
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
#include <stdio.h>
#include <stdlib.h>
#include "token.h"

#ifndef SUN
#include "..\metachop\metachop.h"
#else 
#include "../metachop/metachop.h"
#endif

#include <fcntl.h>
#include "netachop.h"

extern "C" {

    void    ChopTree (PTREE) ;
    
    PTREE bri_parse_entry_netachop ( int error_free )
    {
        return netachop().parse_entry(error_free);
    }
    
    extern char *includeEnv ;
    
    PTREE parse_metachop ( int error_free )
    {
        return metachop().prog(error_free);
    }
    
    /**************************************************************
               main
       ***************************************************************/
    extern STRINGELEM   *listConst ;
    static PTREE        theRetTree ;
    extern char         *includeEnv ;
    extern int          cplusGen ;  /* c++ generation */ 
    int                 metaQuick ; /* quick version */ 
    extern int          _inhibited ;
    void                MetaInit () ;
    void                MetaEnd () ;
    PTREE               (*the_parse_entry_pt)(int) ;
    PTREE               ReadInFile (int) ;
    extern int          firstError ;
    netachop            *parser_netachop ;
    
    main ( int argc, char **argv )
    {
        PTREE   tree ;
        char    name [50];
        char    *ptName ;
        
        parser_netachop = new netachop ;
        MetaInit();
        includeEnv = getenv("INCLUDE");
        SwitchLang("metachop");
        cplusGen = metaQuick = 0 ;
    follow : 
        if ( !strcmp(*(argv + 1), "-c++") ) {
            cplusGen = 1 ;
            argc-- ;
            argv++ ;
            goto follow ;
        } else if ( !strcmp(*(argv + 1), "-f") ) {
            metaQuick = 1 ;
            argc-- ;
            argv++ ;
            goto follow ;
        }
        if ( argc < 2 ) {
            sprintf(name, "Bad name for your source file \n");
            write(2, name, strlen(name));
            exit(0);
        } else {
            ptName = *(argv + 1);
            input = open(ptName, O_RDONLY | O_BINARY);
        }
        the_parse_entry_pt = parse_metachop ;
        tree = ReadInFile(0);
        AddRef(tree);
        ChopTree(tree);
        MetaEnd();
        if ( !firstError ) 
            return 1 ;
        else 
            return 0 ;
    }
    
    static char name [80], *ptName ;
    
    void ChopTree ( PTREE tree )
    {
        decomp_metachop(tree);
        WriteString("/*Well done my boy */ ");
        NewLine();
    }
    
    PTREE TakeUseGrammar ( PTREE tree )
    {
        return (PTREE)0 ;
    }
    
    void AnalyzeTab ( PTREE tree ) {}
    
    void AnalyzeMode ( PTREE tree ) {}
    
    void AnalyzeMargin ( PTREE tree ) {}
    
    void AnalyzeComment ( PTREE tree ) {}
    
    void AnalyzeIndentFunctionType ( PTREE tree ) {}
    
    void AnalyzeSimplify ( PTREE tree ) {}
}

