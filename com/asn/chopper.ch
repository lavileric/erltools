/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language asn;

#include "asn.h"
#include <stdio.h>
#include "token.h"
#include <stdio.h>
#include "token.h"
#include <sys/types.h>

#ifndef BORLAND
#   include <unistd.h>
#endif
#if !defined(SUN) || defined(LINUX)
#   include <stdlib.h>
#endif

#include <fcntl.h>
#include <tablist.h>
#include "decasn.h"
#include "asnsymbol.h"

extern PTREE    listInclude ;
void            ChopTree (PTREE, char *) ;
void            decomp_asn (PTREE) ;
void            DecompAssign (PTREE) ;
extern int      firstError ;
void            OpenTspFile (char *) ;
void            CloseTspFile () ;

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
    asn().AsLanguage();
    
    // opening the input file
    if ( argc < 2 ) {
        
        // error if the input files not in line command
        MetaExit(0, "Bad name for your source file \n");
    } else {
        ptName =  *(argv + 1);
        if ( argc >= 3 && !strcmp(ptName, "-b") ) {
            prettyPrint =  1 ;
            ptName      =  *(argv + 2);
        }
    }
    
    // parsing the tree
    asn *pAsn = new ParserAsn ;
    
    tree        =  pAsn->ReadFile(ptName);
    listInclude =  pAsn->Includes();
    delete pAsn ;
    AddRef(tree);
    asn().AsLanguage();
    if ( !prettyPrint && argc >= 3 ) 
        ChopTree(tree, *(argv + 2));
    else 
        ChopTree(tree, (char *)0);
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

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
    DecompAsn::ptDecomp              =  new DecompAsn ;
    DecompAsn::ptDecomp->plusComment =  (char *)"--";
    DecompAsn::ptDecomp->Treat(tree);
    decomp_asn(tree);
    NewLine();
    asn().AsLanguage();
    if ( !prettyPrint ) 
        DecompAsn::ptDecomp->DecompAssign(tree, fileName);
    /********** when creating a tree chopper use the following ***************/
    /*                                                                       */
    /*  decomp_metachop(tree) ;                                              */
    /*                                                                       */
    /*************************************************************************/
    NewLine();
}


