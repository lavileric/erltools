/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
/* Copyright(C) 1995 Eric Lavillonniere */
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
language chunk;

#include "token.h"
#include <sys/types.h>
#include "chunk.h"
#include "deccplus.h"
#include <fcntl.h>

static chunk    *theParser ;
int             ChopTree (PTREE) ;
void            decomp (PTREE) ;
void            copy () ;
int             firstLine, lastLine, refLine ;
int             find_parenthesis, nb_parenthesis ;
int             comment_start ;
int             lexcommentCallLex, oldLastLine ;

class QuickProgChunk : public cplus {
    
    public :
    
        QuickProgChunk ()
        {
        }
        
        ~QuickProgChunk ()
        {
        }
        
        virtual PPTREE main_entry ( int error_free )
        {
            return quick_prog(error_free);
        }
};

static  void ReadIncludeSN ( char *name, int here )
{
    QuickProgChunk().ReadInclude(name, here);
}

extern int  simplifyExpression ;

int main ( int argc, char **argv )
{
    PTREE       tree ;
    char        name [50];
    char        *ptName ;
    DecompCplus decomp ;
    
    dumpCoord             =  0 ;
    DecompCplus::ptDecomp =  &decomp ;
    MetaInit();
    output    =  2 ;
    theParser =  new chunk ;
    SwitchLang("chunk");
    ReadIncludeSN("c.set", 1);
    if ( argc < 2 ) {
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(1);
    } else {
        ptName =  *(argv + 1);
    }
    
    // initialize refLine from command argument
    if ( argc >= 3 ) {
        refLine =  atoi(*(argv + 2));
    } else {
        sprintf(name, "Initial number line unknown \n");
        _write(2, name, strlen(name));
        exit(1);
    }
    
    // parse tree
    tree =  chunk().ReadFile(ptName);
    AddRef(tree);
    
    //    copy();
    // unparse it
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else {
        char    string [50]; // temporary string holder
        output =  1 ;
        sprintf(string, "%d,%dd", firstLine, lastLine);
        WriteString(string) <NL>
        if ( firstLine > 1 ) 
            sprintf(string, "%da", firstLine - 1);
        else 
            sprintf(string, "%di", firstLine);
        WriteString(string) <NL>
        tree == <,tree>;
        decomp.ChopTree(tree, 1);
        "." <NL>
        "wq" <NL>
        return 0 ;
    }
    return 0 ;
}


