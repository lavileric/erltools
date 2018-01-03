/*************************************************************************/
/*                                                                       */
/*        Chopper.c - Built by Eric Lavillonniere on Tandon 386 - 89     */
/*                                                                       */
/*************************************************************************/
language msch;

#include "asn.h"
#include "token.h"
#include <stdio.h>
#include "token.h"
#include <sys/types.h>
#include <fcntl.h>
#include <tablist.h>
#include "decasn.h"

void        ChopTree (PTREE, char *) ;
void        decomp_asn (PTREE) ;
void        DecompAssign (PTREE) ;
extern void Align (PTREE) ;
extern int  firstError ;
void        OpenTspFile (char *) ;
void        CloseTspFile () ;

// int             prettyPrint = 0 ;
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
    asn().AsLanguage();
    
    // opening the input file
    if ( argc < 3 ) {
        
        // error if the input files not in line command
        MetaExit(2, "Grammar File or binary file not present \n");
    } else {
        ptName =  *(argv + 1);
    }
    
    // parsing the tree
    asn *pAsn = new asn ;
    
    tree        =  pAsn->ReadFile(ptName);
    listInclude =  pAsn->Includes();
    delete pAsn ;
    AddRef(tree);
    asn().AsLanguage();
    ChopTree(tree, *(argv + 2));
    MetaEnd();
    if ( !firstError ) 
        return 1 ;
    else 
        return 0 ;
}

// DecompAsn   *DecompAsn::ptDecomp ;
void ChopTree ( PTREE tree, char *fileName )
{
    
    /* DumpTree(tree); */
    if ( tree == (PTREE) -1 || tree == () ) 
        return ;
    DecompAsn::ptDecomp =  new DecompAsn ;
    asn().AsLanguage();
    DecompAsn::ptDecomp->Desass(tree, fileName);
    /********** when creating a tree chopper use the following ***************/
    /*                                                                       */
    /*  decomp_metachop(tree) ;                                              */
    /*                                                                       */
    /*************************************************************************/
    NewLine();
}


