/*************************************************************************/
/*                                                                       */
/*        metagen.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
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
#include <fcntl.h>

#include "token.h"
#include "metalang.h"
#include "metagen.h"

int                 coutput, houtput, loutput ;
extern char         *theLanguageName ;
extern char         *llanguageName ;
char                *thePath = (char *)0 ;

/* void _fastcall Comp PARAM((PPTREE)); */
void                _fastcall Comp () ;
extern int          writeLine ;
extern int          cplusGen ;  /* c++ generation */ 
int                 metaQuick ; /* quick version */ 
extern int          _inhibited ;
/**************************************************************
           main
   ***************************************************************/
extern STRINGELEM   *listConst ;
static PPTREE       theRetTree ;

extern int  firstError ;
void        ChopTree (PPTREE) ;
void        CompileGrammar (PPTREE) ;
void        ReleasePosComment (PTREE) ;

int  main ( int argc, char **argv )
{
    PPTREE  tree ;
    char    name [50];
    char    *ptName ;

	int i = 1 ;
	while ( i == 0) {
		SLEEP(1);
	}
    
    MetaInit((char *) 0);
    dumpCoord = 1 ;
    metalang () . AsLanguage();
    cplusGen = metaQuick = 0 ;
follow :
    if ( argc >= 2) 
    if ( !strcmp(*(argv + 1), "-c++") ) {
        cplusGen = 1 ;
        argc-- ;
        argv++ ;
        goto follow ;
    } else if ( !strcmp(*(argv + 1), "-path") ) {
        thePath = AllocString(*(argv + 2));
        argc -= 2 ;
        argv += 2 ;
        goto follow ;
    } else if ( !strcmp(*(argv + 1), "-f") ) {
        metaQuick = 1 ;
        argc-- ;
        argv++ ;
        goto follow ;
    }
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        theFileName = ptName = *(argv + 1);
    }
    emacsCompatibleError=true;
    tree = ParserMetalang().ReadFile(theFileName);
    AddRef(tree);
    
    // replace comments
    TrimPosComment(tree);
    
    // release pos comment if of no use
    ReleasePosComment(PTREE(tree));
    
    // then compile
    ChopTree(tree);
	output=2;
    MetaEnd();
    
    // return error if necessary
    if ( !firstError ) 
        _exit(1) ;
    else
        _exit(0) ;
}

static char name [80], *ptName ;

void ChopTree ( PPTREE retTree )
{
    PPTREE  theRetTreeOld = theRetTree ;
    char    *theLanguageNameOld = (char *)0 ;
    
    if ( theLanguageName ) 
        theLanguageNameOld = theLanguageName ;
    strcpy(name, Value(retTree));
    ptName = name + strlen(name);
    if ( ptName > name + 8 ) 
        ptName = name + 8 ;
    if ( cplusGen ) 
        strcpy(ptName, ".cpp");
    else 
        strcpy(ptName, ".c");
    if ( !isVirtMod ) {
        output = coutput
            = _open(name, O_RDWR | O_TRUNC | O_CREAT, 00666);
    }
    strcpy(ptName, ".h");
    if ( !isVirtMod ) 
        houtput
            = _open(name, O_RDWR | O_TRUNC | O_CREAT, 00666);
    loutput = 0 ;
#if defined(SUN) && 0
    strcpy(ptName, ".ll");
    loutput = _open(name, O_RDWR | O_TRUNC | O_CREAT, 00666);
#endif
    *ptName = '\0';
    theLanguageName = AllocString(name);
    InitComp();
    
    /* search the tokens beginning the syntaxic rules */
    /* do it now traitement will put some asit */
    output = coutput ;
    if ( !isVirtMod ) {
        listConst = (STRINGELEM *)0 ;
    }
    theRetTree = retTree ;
    CompileGrammar(retTree);
    NewLine();
    WriteString("/*Well done my boy */ ");
    NewLine();
    if ( !isVirtMod ) {
        _close(coutput);
        _close(houtput);
    }
#ifdef SUN
    if ( !isVirtMod && loutput ) 
        _close(loutput);
#endif
    theRetTree = theRetTreeOld ;
    if ( theLanguageName ) 
        free(theLanguageName);
    theLanguageName = theLanguageNameOld ;
}

int nbFile = 0 ;

/******************************************************************
           EcrireEntete : ecrire l'entete des fichiers
   *******************************************************************/
void EcrireEntete ( char *llanguageName )
{
  WriteString(
    "\
/*************************************************************************/");
    NewLine();
  WriteString(
    "\
/*                                                                       */");
    NewLine();
  WriteString(
    "\
/*        Produced by MetaGen version 2.0  -    1989-2006                 */");
    NewLine();
  WriteString(
    "\
/*       Syntaxic Analyzer Meta Generator developped by                  */");
    NewLine();
  WriteString(
    "\
/*                  Eric Lavillonniere                                   */");
    NewLine();
  WriteString(
    "\
/*                                                                       */");
    NewLine();
  WriteString(
    "\
/*************************************************************************/");
    NewLine();
    NewLine();
    WriteString("#include \"token.h\"");
    NewLine();
    WriteString("#include \"");
    WriteString(llanguageName);
    WriteString("\"");
    NewLine();
    NewLine();
    NewLine();
}

/******************************************************************
           VerifyLineLine : verification d'une taille maxi des fichiers
   *******************************************************************/
int VerifyFileLine ( int doit, char *llanguageName )
{
    if ( isVirtMod ) 
        return 1 ;
    if ( doit || writeLine > 3000 ) {
        strcpy(name, Value(theRetTree));
        ptName = name + strlen(name);
        if ( ptName > name + 7 ) 
            ptName = name + 7 ;
        *ptName++ = '0' + nbFile++ ;
        if ( cplusGen ) 
            strcpy(ptName, ".cpp");
        else 
            strcpy(ptName, ".c");
        if ( !isVirtMod ) {
            _close(output);
            output = coutput
                = _open(name, O_RDWR | O_TRUNC | O_CREAT
                    , 00666);
        }
        writeLine = 0 ;
        EcrireEntete(llanguageName);
        return 0 ;
    }
    return 1 ;
}


