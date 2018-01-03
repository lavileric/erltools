
#line 1 "symb.ch"
/*************************************************************************/
#line 1 "symb.ch"
/*                                                                       */
#line 1 "symb.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 1 "symb.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 1 "symb.ch"
/*                  Eric Lavillonniere                                   */
#line 1 "symb.ch"
/*                                                                       */
#line 1 "symb.ch"
/*************************************************************************/
#line 1 "symb.ch"

#line 1 "symb.ch"
#include "token.h"
#line 1 "symb.ch"
#define decomp decomp_sgt
#line 1 "symb.ch"

#line 1 "symb.ch"
#ifndef for_elem
#line 1 "symb.ch"
#line 1 "symb.ch"
#define for_elem _for_elem

#line 1 "symb.ch"
#line 1 "symb.ch"

#line 1 "symb.ch"
#endif
#ifdef INCONNU
#line 1 "symb.ch"
#line 1 "symb.ch"
PTREE   for_elem ;
#line 1 "symb.ch"

#line 1 "symb.ch"
#line 1 "symb.ch"

#line 1 "symb.ch"
#endif
#include "symb.h"

#line 7 "symb.ch"

#line 7 "symb.ch"
SymbolTable::SymbolTable ( SymbolTable &symbTab )
#line 7 "symb.ch"
    : pvSize(0),  pvSizeMax(0),  pvTable(0)
#line 7 "symb.ch"

#line 7 "symb.ch"
{
#line 7 "symb.ch"
#line 7 "symb.ch"
    int _nextVal ;
    
#line 7 "symb.ch"
#line 12 "symb.ch"
    PTREE   listVar ;
#line 12 "symb.ch"
    
#line 12 "symb.ch"
#line 13 "symb.ch"
    PTREE   symbol ;
#line 13 "symb.ch"
    
#line 13 "symb.ch"
#line 14 "symb.ch"
    PTREE   type ;
#line 14 "symb.ch"
    
#line 14 "symb.ch"
#line 17 "symb.ch"
#line 17 "symb.ch"
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
#line 17 "symb.ch"
#line 18 "symb.ch"
                                                                                        (listVar=symbTab.GetTabList(currLevel) -> List());
#line 18 "symb.ch"
                                                                                        
#line 18 "symb.ch"
#line 19 "symb.ch"
                                                                                        AddLevel();
#line 19 "symb.ch"
#line 20 "symb.ch"
                                                                                        while ( ((symbol=(listVar?listVar.Nextl():(PPTREE)0))) ) {
#line 20 "symb.ch"
#line 21 "symb.ch"
AddVar(CopyTree(symbol));
#line 21 "symb.ch"
#line 22 "symb.ch"

#line 22 "symb.ch"
#line 22 "symb.ch"
                                                                                                                                                      }
#line 22 "symb.ch"
#line 23 "symb.ch"
                                                                                        
#line 23 "symb.ch"
#line 23 "symb.ch"
                                                                                     }
#line 23 "symb.ch"
    
#line 23 "symb.ch"
#line 24 "symb.ch"
    
#line 24 "symb.ch"
#line 24 "symb.ch"
}
#line 24 "symb.ch"

#line 28 "symb.ch"

#line 28 "symb.ch"
const SymbolTable &SymbolTable::operator= ( SymbolTable &symbTab )
#line 28 "symb.ch"
{
#line 28 "symb.ch"
#line 28 "symb.ch"
    int _nextVal ;
    
#line 28 "symb.ch"
#line 32 "symb.ch"
    PTREE   listVar ;
#line 32 "symb.ch"
    
#line 32 "symb.ch"
#line 33 "symb.ch"
    PTREE   symbol ;
#line 33 "symb.ch"
    
#line 33 "symb.ch"
#line 34 "symb.ch"
    PTREE   type ;
#line 34 "symb.ch"
    
#line 34 "symb.ch"
#line 37 "symb.ch"
    while ( pvSize ) 
#line 37 "symb.ch"
#line 38 "symb.ch"
        RemoveLevel();
#line 38 "symb.ch"
#line 41 "symb.ch"
#line 41 "symb.ch"
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
#line 41 "symb.ch"
#line 42 "symb.ch"
                                                                                        (listVar=symbTab.GetTabList(currLevel) -> List());
#line 42 "symb.ch"
                                                                                        
#line 42 "symb.ch"
#line 43 "symb.ch"
                                                                                        AddLevel();
#line 43 "symb.ch"
#line 44 "symb.ch"
                                                                                        while ( ((symbol=(listVar?listVar.Nextl():(PPTREE)0))) ) {
#line 44 "symb.ch"
#line 45 "symb.ch"
AddVar(CopyTree(symbol));
#line 45 "symb.ch"
#line 46 "symb.ch"

#line 46 "symb.ch"
#line 46 "symb.ch"
                                                                                                                                                      }
#line 46 "symb.ch"
#line 47 "symb.ch"
                                                                                        
#line 47 "symb.ch"
#line 47 "symb.ch"
                                                                                     }
#line 47 "symb.ch"
    
#line 47 "symb.ch"
#line 50 "symb.ch"
    return *this ;
    
#line 50 "symb.ch"
#line 51 "symb.ch"
    
#line 51 "symb.ch"
#line 51 "symb.ch"
}
#line 51 "symb.ch"

#line 56 "symb.ch"

#line 56 "symb.ch"
int SymbolTable::AddLevel ( PPTREE initList )
#line 56 "symb.ch"
{
#line 56 "symb.ch"
#line 56 "symb.ch"
    int _nextVal ;
    
#line 56 "symb.ch"
#line 61 "symb.ch"
    if ( pvSize == pvSizeMax ) {
#line 61 "symb.ch"
#line 62 "symb.ch"
                                    if ( !pvTable ) 
#line 62 "symb.ch"
#line 63 "symb.ch"
                                        pvTable = (TabList **)malloc((pvSizeMax = 10) * sizeof(TabList *));
#line 63 "symb.ch"
                                    else 
#line 64 "symb.ch"
                                    {
#line 64 "symb.ch"
#line 65 "symb.ch"
                                        pvTable = (TabList **)realloc(pvTable, (pvSizeMax += 10) * sizeof(TabList *));
#line 65 "symb.ch"
#line 66 "symb.ch"
                                        
#line 66 "symb.ch"
#line 66 "symb.ch"
                                    }
                                    
#line 66 "symb.ch"
#line 67 "symb.ch"
                                    
#line 67 "symb.ch"
#line 67 "symb.ch"
                                 }
#line 67 "symb.ch"
#line 70 "symb.ch"
    pvCurrentLevel = *(pvTable + pvSize) = new TabList(initList);
#line 70 "symb.ch"
#line 73 "symb.ch"
    return ++pvSize ;
    
#line 73 "symb.ch"
#line 74 "symb.ch"
    
#line 74 "symb.ch"
#line 74 "symb.ch"
}
#line 74 "symb.ch"

#line 76 "symb.ch"

#line 76 "symb.ch"
int SymbolTable::RemoveLevel ()
#line 76 "symb.ch"
{
#line 76 "symb.ch"
#line 76 "symb.ch"
    int _nextVal ;
    
#line 76 "symb.ch"
#line 81 "symb.ch"
    if ( !pvSize ) 
#line 81 "symb.ch"
#line 82 "symb.ch"
        return 0 ;
    
#line 82 "symb.ch"
#line 85 "symb.ch"
    pvSize-- ;
#line 85 "symb.ch"
#line 86 "symb.ch"
    delete *(pvTable + pvSize);
#line 86 "symb.ch"
#line 87 "symb.ch"
    if ( pvSize > 0 ) 
#line 87 "symb.ch"
#line 88 "symb.ch"
        pvCurrentLevel = *(pvTable + pvSize - 1);
#line 88 "symb.ch"
#line 91 "symb.ch"
    return pvSize ;
    
#line 91 "symb.ch"
#line 92 "symb.ch"
    
#line 92 "symb.ch"
#line 92 "symb.ch"
}
#line 92 "symb.ch"

#line 94 "symb.ch"

#line 94 "symb.ch"
void SymbolTable::AddVar ( const PTREE &var )
#line 94 "symb.ch"
{
#line 94 "symb.ch"
#line 94 "symb.ch"
    int _nextVal ;
    
#line 94 "symb.ch"
#line 99 "symb.ch"
    if ( pvSize == 0 ) 
#line 99 "symb.ch"
#line 100 "symb.ch"
        AddLevel();
#line 100 "symb.ch"
#line 101 "symb.ch"
    pvCurrentLevel -> InsertRemove(var);
#line 101 "symb.ch"
#line 102 "symb.ch"
    
#line 102 "symb.ch"
#line 102 "symb.ch"
}
#line 102 "symb.ch"

#line 104 "symb.ch"

#line 104 "symb.ch"
void SymbolTable::RemoveVar ( const PTREE &var )
#line 104 "symb.ch"
{
#line 104 "symb.ch"
#line 104 "symb.ch"
    int _nextVal ;
    
#line 104 "symb.ch"
#line 107 "symb.ch"
    if ( pvSize == 0 ) 
#line 107 "symb.ch"
#line 108 "symb.ch"
        return ;
    
#line 108 "symb.ch"
#line 109 "symb.ch"
    pvCurrentLevel -> Remove(var);
#line 109 "symb.ch"
#line 110 "symb.ch"
    
#line 110 "symb.ch"
#line 110 "symb.ch"
}
#line 110 "symb.ch"

#line 116 "symb.ch"

#line 116 "symb.ch"
PTREE SymbolTable::GetVar ( const char *var, int startLevel )
#line 116 "symb.ch"
{
#line 116 "symb.ch"
#line 116 "symb.ch"
    int _nextVal ;
    
#line 116 "symb.ch"
#line 119 "symb.ch"
    TabList **ptLevel ;
    
#line 119 "symb.ch"
#line 120 "symb.ch"
    PTREE   result ;
#line 120 "symb.ch"
    
#line 120 "symb.ch"
#line 123 "symb.ch"
    if ( startLevel < 0 ) 
#line 123 "symb.ch"
#line 124 "symb.ch"
        startLevel = pvSize - 1 ;
#line 124 "symb.ch"
#line 127 "symb.ch"
    if ( startLevel > pvSize - 1 || !pvSize ) 
#line 127 "symb.ch"
#line 128 "symb.ch"
        return (PTREE)0 ;
    
#line 128 "symb.ch"
#line 131 "symb.ch"
    ptLevel = pvTable + startLevel ;
#line 131 "symb.ch"
#line 134 "symb.ch"
    pvLastLevel = startLevel ;
#line 134 "symb.ch"
#line 135 "symb.ch"
#line 135 "symb.ch"
    for (; ptLevel >= pvTable ; ptLevel--, pvLastLevel-- ) {
#line 135 "symb.ch"
#line 136 "symb.ch"
                                                                if ( ((result=(**ptLevel)[var])) ) 
#line 136 "symb.ch"
#line 137 "symb.ch"
                                                                    return result ;
                                                                
#line 137 "symb.ch"
#line 138 "symb.ch"
                                                                
#line 138 "symb.ch"
#line 138 "symb.ch"
                                                               }
#line 138 "symb.ch"
    
#line 138 "symb.ch"
#line 141 "symb.ch"
    return (PTREE)0 ;
    
#line 141 "symb.ch"
#line 142 "symb.ch"
    
#line 142 "symb.ch"
#line 142 "symb.ch"
}
#line 142 "symb.ch"

#line 142 "symb.ch"
#line 142 "symb.ch"
static void symb_Anchor () { int i = 1;} 
#line 142 "symb.ch"
/*Well done my boy */ 
#line 142 "symb.ch"

