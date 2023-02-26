/*************************************************************************************/
/*                                                                                   */
/*        TreeIdentifier.ch   : Eric Lavillonniere 2017                                 */
/*        company          : Mitsubishi Electric R&D Center Europe                   */
/*        software         : erlvaltic, generation of unit tests with erltools,      */
/*                             value analysis, genetic algorithm, cmbc               */
/*                             and pathcrawler                                       */
/*                                                                                   */
/*************************************************************************************/
language erlvalti;

#include "clpretty.h"
#include "TreeIdentifier.h"
#include <set>
#include <string> // std::string
#include <cstddef> // std::size_t

static int64_t         poly = 0xC96C5795D7870F42 ;
static int64_t  table [256];
static bool     generated = false ;

static  void Generate ()
{
    for ( unsigned int i = 0 ; i < 256 ; ++i ) {
        int64_t crc = i ;
        for ( unsigned int j = 0 ; j < 8 ; j++ ) {
            if ( crc & 1 ) {
                crc >>= 1 ;
                crc ^= poly ;
            } else {
                crc >>= 1 ;
            }
        }
        table [i] =  crc ;
    }
    generated =  true ;
}

void AddTreeIdentifier ( long long &TreeIdentifier, long added )
{
    if ( !generated ) 
        Generate();
    
    unsigned int    index = (added ^ TreeIdentifier) & 0xFF ;
    int64_t         lookup = table [index];
    
    TreeIdentifier >>= 8 ;
    TreeIdentifier ^= lookup ;
}

void TreeIdentifier::ComputeTreeIdentifier ( long long &TreeIdentifier, PTREE tree, bool computeClass )
{
    unsigned int    arity ;
    unsigned int    pos ;
    int             numberTree ;
    bool            next = true ;
    
    if ( tree == () || (PPTREE)tree == (PPTREE) -1 ) 
        return ;
    while ( next ) {
        next       =  false ; // by default will stop
        arity      =  tree.TreeArity();
        numberTree =  tree.NumberTree();
        
        // specificic case of tree_class
        if ( numberTree == CLASS_TREE ) {
            ::AddTreeIdentifier(TreeIdentifier, CLASS_TREE);
        } else {
            if ( arity == 0 ) {
                ::AddTreeIdentifier(TreeIdentifier, numberTree);
                VString val (Value(tree)) ;
                char    *charPointer ;
                for ( charPointer = Value(tree) ; (unsigned int)(charPointer - Value(tree)) < val.length() ; charPointer++ ) {
                    ::AddTreeIdentifier(TreeIdentifier, *charPointer);
                }
            } else {
                ::AddTreeIdentifier(TreeIdentifier, numberTree);
                for ( pos = 1 ; pos < arity ; pos++ ) {
                    PTREE   son = tree [pos];
                    ::AddTreeIdentifier(TreeIdentifier, pos);
                    ComputeTreeIdentifier(TreeIdentifier, son, computeClass);
                }
                ::AddTreeIdentifier(TreeIdentifier, arity);
                tree =  tree [arity];
                
                // go on down
                next =  true ;
            }
        }
    }
}


