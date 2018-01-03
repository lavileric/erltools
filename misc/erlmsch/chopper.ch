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
language msch;

#include "token.h"
#include <sys/types.h>
#include "compute.h"
#include "msch.h"
#include "decchopb.h"
#include <fcntl.h>
#include <tablist.h>

// ChopTree : main proc
// parameters :
//              tree : tree to chop
//              displayHeader : tell if display header with parameters of metric
//              fileName : name of parsed fileName
// return : ?
int         ChopTree (PTREE tree, bool displayHeader, char *fileName) ;

// copy : print copyright
void        copy () ;
DecompChopb *DecompChopb::ptDecomp = 0 ; // pointer on chopb decompiler
                                         // must be set before unparsing
int         nb_par_parse ;               // for lex parenthesis counter
static void DisplayFunctionValue (PTREE) ;
static int  DisplayFunctionError (PTREE) ;
char        *parseLanguage = (char *)0 ; // the parse language
void        ReadIncludeS (char *, int) ;

class QuickProgErlms : public msch {
    
    public :
    
        QuickProgErlms ()
        {
        }
        
        ~QuickProgErlms ()
        {
        }
        
        virtual PPTREE main_entry ( int error_free )
        {
            return quick_prog(error_free);
        }
};

static  void ReadIncludeSN ( const char *name, int here )
{
    QuickProgErlms().ReadInclude(name, here);
}

//
// main prog
//
//    parameters :    
//       argc : number of parameters
//       argv : array of arguments
//   return :
//       an error if necessary ( value != 0)
int main ( int argc, char **argv )
{
    
    PTREE       tree ;             // tree resulting from parsing
    char        name [50];         // character array for holding intermediate
                                   // strings
    char        *ptName ;          // argument, string pointer
    DecompChopb decomp ;           // a chopb decompiler
    int         noHeader = false ; // tell to not print header
    
    // initialization    
    DecompChopb::ptDecomp =  (DecompChopb *)(&decomp);
    DecompCplus::ptDecomp =  (DecompCplus *)(&decomp);
    MetaInit();
    msch().AsLanguage();
    ReadIncludeSN("c.set", 1);
    
    // opening the input file
    if ( argc < 2 ) {
        
        // error if the input files not in line command
        sprintf(name, "Bad name for your source file \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName =  *(argv + 1);
        if ( argc >= 3 && !strcmp(ptName, "-c") ) {
            noHeader =  true ;
            ptName   =  *(argv + 2);
        }
    }
    
    // parsing the tree
    tree =  msch().ReadFile(ptName);
    AddRef(tree);
    
    // if allready an error return
    if ( !firstError ) 
        return 1 ;
    
    // print copyright
    copy();
    
    // then metric analysis 
    firstError &= !ChopTree(tree, noHeader, ptName);
    MetaEnd();
    
    // if error return it to the shell
    if ( firstError ) 
        return 0 ;
    else 
        return 1 ;
}


