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
language asnext;

#include <sys/types.h>
#include "decasnext.h"
#include <fcntl.h>

void    ChopTree (PTREE, char *fileName) ;
void    decomp (PTREE) ;

void copy ()
{
}

// int             prettyPrint = 0 ;
void        ChopTree (PTREE) ;
void        decomp_asn (PTREE) ;
void        DecompAssign (PTREE) ;
extern void Align (PTREE) ;
extern int  firstError ;
void        OpenTspFile (char *) ;
void        CloseTspFile () ;

// extern PTREE    listInclude ;
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
    
    PTREE   tree ;      // tree resulting from parsing
    char    name [50];  // character array for holding intermediate
                        // strings
    char    *ptName ;   // argument, string pointer
    
    // initialization    
    MetaInit();
    asnext().AsLanguage();
    
    // opening the input file
    if ( argc < 3 ) {
        
        // error if the input files not in line command
        sprintf(name, "Grammar File or binary file not present \n");
        _write(2, name, strlen(name));
        exit(0);
    } else {
        ptName =  *(argv + 1);
    }
    
    // parsing the tree
    asnext  *pAsnExt = new asnext ;
    
    tree        =  pAsnExt->ReadFile(ptName);
    listInclude =  pAsnExt->Includes();
    delete pAsnExt ;
    AddRef(tree);
    asnext().AsLanguage();
    ChopTree(tree, *(argv + 2));
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

// DecompAsn   *DecompAsn::ptDecomp ;
void ChopTree ( tree, char *fileName )
PTREE   tree ;
{
    
    /* DumpTree(tree); */
    if ( tree == (PTREE) -1 || tree == () ) 
        return ;
    DecompAsnExt::ptDecomp =  new DecompAsnExt ;
    asnext().AsLanguage();
    DecompAsnExt::ptDecomp->Desass(tree, fileName);
    /********** when creating a tree chopper use the following ***************/
    /*                                                                       */
    /*  decomp_metachop(tree) ;                                              */
    /*                                                                       */
    /*************************************************************************/
    NewLine();
}


