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

#include "token.h"
#include <sys/types.h>
#include "decasnext.h"
#include <fcntl.h>

void        ChopTree (PTREE, char *fileName) ;
void        decomp (PTREE) ;
void        ChopTree (PTREE) ;
void        decomp_asn (PTREE) ;
extern int  firstError ;
void        OpenTspFile (char *) ;
void        CloseTspFile () ;

// int             prettyPrint = 0 ; // do only a prettyprint
// extern PTREE    listInclude ;
/******************************************************************
   
     copy : copyright ;
   
   *******************************************************************/
void copy ()
{
    
    const char  *str ; // string used as intermediate pointer
    int         oldOutput = output ;
    
    output =  2 ;
    
    // display all necessary warning
    // warning vary depending on erlms or erlmsch
    // ch version
    str    =  "\n\r AsnTool version 1.0, Eric Lavillonniere \n\r";
    _write(output, str, strlen(str));
    str =  " AsnTool  comes with ABSOLUTELY NO WARRANTY.\n\r";
    _write(output, str, strlen(str));
    str =  " This is free software, and you are welcome to redistribute it \n\r";
    _write(output, str, strlen(str));
    str =  " under certain conditions.\n\r";
    _write(output, str, strlen(str));
    str =  " For details see file COPYING in AsnTool directory.\n\r\n\r";
    _write(output, str, strlen(str));
    output =  oldOutput ;
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
    
    PTREE   tree ;      // tree resulting from parsing
    char    name [50];  // character array for holding intermediate
                        // strings
    char    *ptName ;   // argument, string pointer
    
    // initialization    
    MetaInit();
    asnext().AsLanguage();
    
    // opening the input file
    if ( argc < 2 ) {
        
        // error if the input files not in line command
        MetaExit(2, "Bad name for your source file \n");
    } else {
        ptName =  *(argv + 1);
        if ( argc >= 3 && !strcmp(ptName, "-b") ) {
            prettyPrint =  1 ;
            ptName      =  *(argv + 2);
        }
    }
    
    // parsing the tree
    ParserAsnExt    *pAsnExt = new ParserAsnExt ;
    
    tree        =  pAsnExt->ReadFile(ptName);
    listInclude =  pAsnExt->Includes();
    delete pAsnExt ;
    AddRef(tree);
    asnext().AsLanguage();
    if ( !prettyPrint && argc >= 3 ) 
        ChopTree(tree, *(argv + 2));
    else 
        ChopTree(tree, (char *)0);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else {
        copy();
        return 0 ;
    }
}

// DecompAsn   *DecompAsn::ptDecomp ;
void ChopTree ( PTREE tree, char *fileName )
{
    
    // on named value move commment from val to named in order
    // to display comment after , in sequence value
    foreach (<NAMED_VALUE>,tree,{
        PTREE   elem = for_elem ;
        PTREE   val, comm ;
        elem == <,<>,val>;
        if ( (comm = GetComm(val)) ) {
            PTREE   comm1 = GetComm(elem);
            if ( comm1 != () ) {
                AddListList(comm, comm1);
            }
            PutComm(elem, comm);
        }
    })
    
    /* DumpTree(tree); */
    if ( tree == (PTREE) -1 || tree == () ) 
        return ;
    DecompAsnExt::ptDecomp              =  new DecompAsnExt ;
    DecompAsnExt::ptDecomp->plusComment =  (char *)"--";
    DecompAsnExt::ptDecomp->Treat(tree);
    decomp_asn(tree);
    NewLine();
    asnext().AsLanguage();
    if ( !prettyPrint ) 
        DecompAsnExt::ptDecomp->DecompAssign(tree, fileName);
    /********** when creating a tree chopper use the following ***************/
    /*                                                                       */
    /*  decomp_metachop(tree) ;                                              */
    /*                                                                       */
    /*************************************************************************/
    NewLine();
}


