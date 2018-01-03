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
#include "decchopb.h"
#include <fcntl.h>
#include <tablist.h>

int         ChopTree (PTREE) ;
void        decomp (PTREE) ;
void        copy () ;
DecompChopb *DecompChopb::ptDecomp = 0 ; // pointer on chopb decompiler
                                         // must be set before unparsing
int         nb_par_parse ;               // for lex parenthesis counter
static void DisplayHeader () ;
static void DisplayFunctionValue (PTREE) ;
static int  DisplayFunctionError (PTREE) ;
int         firstLine, lastLine, refLine ;
int         find_parenthesis, nb_parenthesis ;
int         comment_start, lexcommentCallLex ;
int         oldLastLine ;
char        *parseLanguage = (char *)0 ; // the parse language
void        ReadIncludeS (char *, int) ;

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

//
// main prog
//
//    parameters :    
//       argc : number of parameters
//       argv : array of arguments
//   return :
//       an error if necessary ( value != 0)
main ( int argc, char **argv )
{
    
    PTREE       tree ;      // tree resulting from parsing
    char        name [50];  // character array for holding intermediate
                            // strings
    char        *ptName ;   // argument, string pointer
    DecompChopb decomp ;    // a chopb decompiler
    
    // initialization    
    dumpCoord             =  0 ;
    DecompChopb::ptDecomp =  (DecompChopb *)(&decomp);
    DecompCplus::ptDecomp =  (DecompCplus *)(&decomp);
    MetaInit();
    output =  2 ;
    chunk().AsLanguage();
    ReadIncludeSN("c.set", 1);
    
    // opening the input file
    if ( argc < 2 ) {
        
        // error if the input files not in line command
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
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
}


