
#line 9 "TreeIdentifier.ch"
/*************************************************************************/
#line 9 "TreeIdentifier.ch"
/*                                                                       */
#line 9 "TreeIdentifier.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 9 "TreeIdentifier.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 9 "TreeIdentifier.ch"
/*                  Eric Lavillonniere                                   */
#line 9 "TreeIdentifier.ch"
/*                                                                       */
#line 9 "TreeIdentifier.ch"
/*************************************************************************/
#line 9 "TreeIdentifier.ch"

#line 9 "TreeIdentifier.ch"
#include "token.h"
#line 9 "TreeIdentifier.ch"
#define decomp decomp_erlvalti
#line 9 "TreeIdentifier.ch"

#line 9 "TreeIdentifier.ch"
#ifndef for_elem
#line 9 "TreeIdentifier.ch"
#line 9 "TreeIdentifier.ch"
#define for_elem _for_elem

#line 9 "TreeIdentifier.ch"
#line 9 "TreeIdentifier.ch"

#line 9 "TreeIdentifier.ch"
#endif
#ifdef INCONNU
#line 9 "TreeIdentifier.ch"
#line 9 "TreeIdentifier.ch"
PTREE   for_elem ;
#line 9 "TreeIdentifier.ch"

#line 9 "TreeIdentifier.ch"
#line 9 "TreeIdentifier.ch"

#line 9 "TreeIdentifier.ch"
#endif
#include "clpretty.h"
#include "TreeIdentifier.h"
#include <set>
#include <string>
#include <cstddef>

static int64_t  poly = 0xC96C5795D7870F42 ;
static int64_t  table [256];
static bool generated = false ;

#line 22 "TreeIdentifier.ch"

#line 22 "TreeIdentifier.ch"
static  void Generate ()
#line 22 "TreeIdentifier.ch"
{
#line 22 "TreeIdentifier.ch"
#line 22 "TreeIdentifier.ch"
    int _nextVal ;
    
#line 22 "TreeIdentifier.ch"
#line 24 "TreeIdentifier.ch"
#line 24 "TreeIdentifier.ch"
    for ( unsigned int i = 0 ; i < 256 ; ++i ) {
#line 24 "TreeIdentifier.ch"
#line 25 "TreeIdentifier.ch"
                                                        int64_t crc = i ;
                                                        
#line 25 "TreeIdentifier.ch"
#line 26 "TreeIdentifier.ch"
#line 26 "TreeIdentifier.ch"
                                                        for ( unsigned int j = 0 ; j < 8 ; j++ ) {
#line 26 "TreeIdentifier.ch"
#line 27 "TreeIdentifier.ch"
                                                                                                        if ( crc & 1 ) {
#line 27 "TreeIdentifier.ch"
#line 28 "TreeIdentifier.ch"
                                                                                                                         crc >>= 1 ;
#line 28 "TreeIdentifier.ch"
#line 29 "TreeIdentifier.ch"
                                                                                                                         crc ^= poly ;
#line 29 "TreeIdentifier.ch"
#line 30 "TreeIdentifier.ch"
                                                                                                                         
#line 30 "TreeIdentifier.ch"
#line 30 "TreeIdentifier.ch"
                                                                                                                         } else 
#line 30 "TreeIdentifier.ch"
                                                                                                        {
#line 30 "TreeIdentifier.ch"
#line 31 "TreeIdentifier.ch"
                                                                                                            crc >>= 1 ;
#line 31 "TreeIdentifier.ch"
#line 32 "TreeIdentifier.ch"
                                                                                                            
#line 32 "TreeIdentifier.ch"
#line 32 "TreeIdentifier.ch"
                                                                                                        }
                                                                                                        
#line 32 "TreeIdentifier.ch"
#line 33 "TreeIdentifier.ch"
                                                                                                        
#line 33 "TreeIdentifier.ch"
#line 33 "TreeIdentifier.ch"
                                                                                                       }
#line 33 "TreeIdentifier.ch"
                                                        
#line 33 "TreeIdentifier.ch"
#line 34 "TreeIdentifier.ch"
                                                        table [i] = crc ;
#line 34 "TreeIdentifier.ch"
#line 35 "TreeIdentifier.ch"
                                                        
#line 35 "TreeIdentifier.ch"
#line 35 "TreeIdentifier.ch"
                                                      }
#line 35 "TreeIdentifier.ch"
    
#line 35 "TreeIdentifier.ch"
#line 36 "TreeIdentifier.ch"
    generated = true ;
#line 36 "TreeIdentifier.ch"
#line 37 "TreeIdentifier.ch"
    
#line 37 "TreeIdentifier.ch"
#line 37 "TreeIdentifier.ch"
}
#line 37 "TreeIdentifier.ch"

#line 39 "TreeIdentifier.ch"

#line 39 "TreeIdentifier.ch"
void AddTreeIdentifier ( long long &TreeIdentifier, long added )
#line 39 "TreeIdentifier.ch"
{
#line 39 "TreeIdentifier.ch"
#line 39 "TreeIdentifier.ch"
    int _nextVal ;
    
#line 39 "TreeIdentifier.ch"
#line 41 "TreeIdentifier.ch"
    if ( !generated ) 
#line 41 "TreeIdentifier.ch"
#line 42 "TreeIdentifier.ch"
        Generate();
#line 42 "TreeIdentifier.ch"
#line 44 "TreeIdentifier.ch"
    unsigned int   index = (added ^ TreeIdentifier) & 0xFF ;
    
#line 44 "TreeIdentifier.ch"
#line 45 "TreeIdentifier.ch"
    int64_t lookup = table [index];
    
#line 45 "TreeIdentifier.ch"
#line 47 "TreeIdentifier.ch"
    TreeIdentifier >>= 8 ;
#line 47 "TreeIdentifier.ch"
#line 48 "TreeIdentifier.ch"
    TreeIdentifier ^= lookup ;
#line 48 "TreeIdentifier.ch"
#line 49 "TreeIdentifier.ch"
    
#line 49 "TreeIdentifier.ch"
#line 49 "TreeIdentifier.ch"
}
#line 49 "TreeIdentifier.ch"

#line 51 "TreeIdentifier.ch"

#line 51 "TreeIdentifier.ch"
void TreeIdentifier::ComputeTreeIdentifier ( long long &TreeIdentifier, PTREE tree, bool computeClass )
#line 51 "TreeIdentifier.ch"
{
#line 51 "TreeIdentifier.ch"
#line 51 "TreeIdentifier.ch"
    int _nextVal ;
    
#line 51 "TreeIdentifier.ch"
#line 53 "TreeIdentifier.ch"
    
    unsigned int   arity ;
    
#line 53 "TreeIdentifier.ch"
#line 54 "TreeIdentifier.ch"
    unsigned int   pos ;
    
#line 54 "TreeIdentifier.ch"
#line 55 "TreeIdentifier.ch"
    int numberTree ;
    
#line 55 "TreeIdentifier.ch"
#line 56 "TreeIdentifier.ch"
    bool    next = true ;
    
#line 56 "TreeIdentifier.ch"
#line 58 "TreeIdentifier.ch"
    if ( (!tree) || (PPTREE)tree == (PPTREE) -1 ) 
#line 58 "TreeIdentifier.ch"
#line 59 "TreeIdentifier.ch"
        return ;
    
#line 59 "TreeIdentifier.ch"
#line 60 "TreeIdentifier.ch"
    while ( next ) {
#line 60 "TreeIdentifier.ch"
#line 61 "TreeIdentifier.ch"
                        next = false ;
#line 61 "TreeIdentifier.ch"
#line 62 "TreeIdentifier.ch"
                        arity = tree.TreeArity();
#line 62 "TreeIdentifier.ch"
#line 63 "TreeIdentifier.ch"
                        numberTree = tree.NumberTree();
#line 63 "TreeIdentifier.ch"
#line 66 "TreeIdentifier.ch"
                        if ( numberTree == CLASS_TREE ) {
#line 66 "TreeIdentifier.ch"
#line 67 "TreeIdentifier.ch"
                                                            ::AddTreeIdentifier(TreeIdentifier, CLASS_TREE);
#line 67 "TreeIdentifier.ch"
#line 68 "TreeIdentifier.ch"
                                                            
#line 68 "TreeIdentifier.ch"
#line 68 "TreeIdentifier.ch"
                                                          } else 
#line 68 "TreeIdentifier.ch"
                        {
#line 68 "TreeIdentifier.ch"
#line 69 "TreeIdentifier.ch"
                            if ( arity == 0 ) {
#line 69 "TreeIdentifier.ch"
#line 70 "TreeIdentifier.ch"
                                                    ::AddTreeIdentifier(TreeIdentifier, numberTree);
#line 70 "TreeIdentifier.ch"
#line 71 "TreeIdentifier.ch"
                                                    VString val (Value(tree)) ;
                                                    
#line 71 "TreeIdentifier.ch"
#line 72 "TreeIdentifier.ch"
                                                    char    *charPointer ;
                                                    
#line 72 "TreeIdentifier.ch"
#line 73 "TreeIdentifier.ch"
#line 73 "TreeIdentifier.ch"
                                                    for ( charPointer = Value(tree) ; (unsigned int)(charPointer - Value(tree)) < val.length() ; charPointer++ ) {
#line 73 "TreeIdentifier.ch"
#line 74 "TreeIdentifier.ch"
                                                                                                                                                                              ::AddTreeIdentifier(TreeIdentifier, *charPointer);
#line 74 "TreeIdentifier.ch"
#line 75 "TreeIdentifier.ch"
                                                                                                                                                                              
#line 75 "TreeIdentifier.ch"
#line 75 "TreeIdentifier.ch"
                                                                                                                                                                              }
#line 75 "TreeIdentifier.ch"
                                                    
#line 75 "TreeIdentifier.ch"
#line 76 "TreeIdentifier.ch"
                                                    
#line 76 "TreeIdentifier.ch"
#line 76 "TreeIdentifier.ch"
                                                } else 
#line 76 "TreeIdentifier.ch"
                            {
#line 76 "TreeIdentifier.ch"
#line 77 "TreeIdentifier.ch"
                                ::AddTreeIdentifier(TreeIdentifier, numberTree);
#line 77 "TreeIdentifier.ch"
#line 78 "TreeIdentifier.ch"
#line 78 "TreeIdentifier.ch"
                                for ( pos = 1 ; pos < arity ; pos++ ) {
#line 78 "TreeIdentifier.ch"
#line 79 "TreeIdentifier.ch"
                                                                            PTREE   son = (PTREE)0 ;
#line 79 "TreeIdentifier.ch"
                                                                            
#line 79 "TreeIdentifier.ch"
#line 79 "TreeIdentifier.ch"
                                                                            (son=tree [pos]);
#line 79 "TreeIdentifier.ch"
                                                                            
#line 79 "TreeIdentifier.ch"
#line 80 "TreeIdentifier.ch"
                                                                            ::AddTreeIdentifier(TreeIdentifier, pos);
#line 80 "TreeIdentifier.ch"
#line 81 "TreeIdentifier.ch"
                                                                            ComputeTreeIdentifier(TreeIdentifier, son, computeClass);
#line 81 "TreeIdentifier.ch"
#line 82 "TreeIdentifier.ch"
                                                                            
#line 82 "TreeIdentifier.ch"
#line 82 "TreeIdentifier.ch"
                                                                           }
#line 82 "TreeIdentifier.ch"
                                
#line 82 "TreeIdentifier.ch"
#line 83 "TreeIdentifier.ch"
                                ::AddTreeIdentifier(TreeIdentifier, arity);
#line 83 "TreeIdentifier.ch"
#line 84 "TreeIdentifier.ch"
                                (tree=tree [arity]);
#line 84 "TreeIdentifier.ch"
                                
#line 84 "TreeIdentifier.ch"
#line 87 "TreeIdentifier.ch"
                                next = true ;
#line 87 "TreeIdentifier.ch"
#line 88 "TreeIdentifier.ch"
                                
#line 88 "TreeIdentifier.ch"
#line 88 "TreeIdentifier.ch"
                            }
                            
#line 88 "TreeIdentifier.ch"
#line 89 "TreeIdentifier.ch"
                            
#line 89 "TreeIdentifier.ch"
#line 89 "TreeIdentifier.ch"
                        }
                        
#line 89 "TreeIdentifier.ch"
#line 90 "TreeIdentifier.ch"
                        
#line 90 "TreeIdentifier.ch"
#line 90 "TreeIdentifier.ch"
                    }
#line 90 "TreeIdentifier.ch"
#line 91 "TreeIdentifier.ch"
    
#line 91 "TreeIdentifier.ch"
#line 91 "TreeIdentifier.ch"
}
#line 91 "TreeIdentifier.ch"

#line 91 "TreeIdentifier.ch"
#line 91 "TreeIdentifier.ch"
static void TreeIdentifier_Anchor () { int i = 1;} 
#line 91 "TreeIdentifier.ch"
/*Well done my boy */ 
#line 91 "TreeIdentifier.ch"
