
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
SymbolTable::SymbolTable ( const SymbolTable &symbTab )
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
const SymbolTable &SymbolTable::operator= ( const SymbolTable &symbTab )
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
    else 
#line 88 "symb.ch"
#line 90 "symb.ch"
        pvCurrentLevel = 0 ;
#line 90 "symb.ch"
    
#line 90 "symb.ch"
#line 93 "symb.ch"
    return pvSize ;
    
#line 93 "symb.ch"
#line 94 "symb.ch"
    
#line 94 "symb.ch"
#line 94 "symb.ch"
}
#line 94 "symb.ch"

#line 96 "symb.ch"

#line 96 "symb.ch"
void SymbolTable::AddVar ( const PTREE &var, bool remove )
#line 96 "symb.ch"
{
#line 96 "symb.ch"
#line 96 "symb.ch"
    int _nextVal ;
    
#line 96 "symb.ch"
#line 101 "symb.ch"
    if ( pvSize == 0 ) 
#line 101 "symb.ch"
#line 102 "symb.ch"
        AddLevel();
#line 102 "symb.ch"
#line 103 "symb.ch"
    if ( remove ) 
#line 103 "symb.ch"
#line 104 "symb.ch"
        pvCurrentLevel -> InsertRemove(var);
#line 104 "symb.ch"
    else 
#line 104 "symb.ch"
#line 106 "symb.ch"
        pvCurrentLevel -> Insert(var);
#line 106 "symb.ch"
    
#line 106 "symb.ch"
#line 107 "symb.ch"
    
#line 107 "symb.ch"
#line 107 "symb.ch"
}
#line 107 "symb.ch"

#line 109 "symb.ch"

#line 109 "symb.ch"
void SymbolTable::RemoveVar ( const PTREE &var )
#line 109 "symb.ch"
{
#line 109 "symb.ch"
#line 109 "symb.ch"
    int _nextVal ;
    
#line 109 "symb.ch"
#line 112 "symb.ch"
    if ( pvSize == 0 ) 
#line 112 "symb.ch"
#line 113 "symb.ch"
        return ;
    
#line 113 "symb.ch"
#line 114 "symb.ch"
    pvCurrentLevel -> Remove(var);
#line 114 "symb.ch"
#line 115 "symb.ch"
    
#line 115 "symb.ch"
#line 115 "symb.ch"
}
#line 115 "symb.ch"

#line 117 "symb.ch"

#line 117 "symb.ch"
PTREE SymbolTable::GetVar ( int index, int level )
#line 117 "symb.ch"
{
#line 117 "symb.ch"
#line 117 "symb.ch"
    int _nextVal ;
    
#line 117 "symb.ch"
#line 121 "symb.ch"
    if ( (int)level >= Size() || index < 0 || index >= (**(pvTable + level)).Size() ) 
#line 121 "symb.ch"
#line 122 "symb.ch"
        return (PTREE)0 ;
    
#line 122 "symb.ch"
#line 125 "symb.ch"
    return (**(pvTable + level))[index];
    
#line 125 "symb.ch"
#line 126 "symb.ch"
    
#line 126 "symb.ch"
#line 126 "symb.ch"
}
#line 126 "symb.ch"

#line 128 "symb.ch"

#line 128 "symb.ch"
void SymbolTable::RemoveVar ( int index, int level )
#line 128 "symb.ch"
{
#line 128 "symb.ch"
#line 128 "symb.ch"
    int _nextVal ;
    
#line 128 "symb.ch"
#line 132 "symb.ch"
    if ( (int)level >= Size() ) 
#line 132 "symb.ch"
#line 133 "symb.ch"
        return ;
    
#line 133 "symb.ch"
#line 136 "symb.ch"
    (**(pvTable + level)).Erase(index);
#line 136 "symb.ch"
#line 137 "symb.ch"
    
#line 137 "symb.ch"
#line 137 "symb.ch"
}
#line 137 "symb.ch"

#line 143 "symb.ch"

#line 143 "symb.ch"
PTREE SymbolTable::GetVar ( const char *var, int startLevel )
#line 143 "symb.ch"
{
#line 143 "symb.ch"
#line 143 "symb.ch"
    int _nextVal ;
    
#line 143 "symb.ch"
#line 146 "symb.ch"
    
    Index   result = GetIndex(var, startLevel);
    
#line 146 "symb.ch"
#line 148 "symb.ch"
    return GetVar(result.index, result.level);
    
#line 148 "symb.ch"
#line 149 "symb.ch"
    
#line 149 "symb.ch"
#line 149 "symb.ch"
}
#line 149 "symb.ch"

#line 155 "symb.ch"

#line 155 "symb.ch"
SymbolTable::Index SymbolTable::GetIndex ( const char *var, int startLevel )
#line 155 "symb.ch"
{
#line 155 "symb.ch"
#line 155 "symb.ch"
    int _nextVal ;
    
#line 155 "symb.ch"
#line 158 "symb.ch"
    
    TabList **ptLevel ;
    
#line 158 "symb.ch"
#line 159 "symb.ch"
    PTREE   result ;
#line 159 "symb.ch"
    
#line 159 "symb.ch"
#line 160 "symb.ch"
    int resultIndex ;
    
#line 160 "symb.ch"
#line 161 "symb.ch"
    static const Index  noResult = { -10, -10 };
    
#line 161 "symb.ch"
#line 163 "symb.ch"
    if ( !var ) 
#line 163 "symb.ch"
#line 164 "symb.ch"
        return noResult ;
    
#line 164 "symb.ch"
#line 167 "symb.ch"
    if ( startLevel < 0 ) 
#line 167 "symb.ch"
#line 168 "symb.ch"
        startLevel = pvSize - 1 ;
#line 168 "symb.ch"
#line 171 "symb.ch"
    if ( startLevel < 0 || startLevel > pvSize - 1 ) 
#line 171 "symb.ch"
#line 172 "symb.ch"
        return noResult ;
    
#line 172 "symb.ch"
#line 175 "symb.ch"
    ptLevel = pvTable + startLevel ;
#line 175 "symb.ch"
#line 178 "symb.ch"
    pvLastLevel = startLevel ;
#line 178 "symb.ch"
#line 179 "symb.ch"
#line 179 "symb.ch"
    for (; ptLevel >= pvTable ; ptLevel--, pvLastLevel-- ) {
#line 179 "symb.ch"
#line 180 "symb.ch"
                                                                if ( (resultIndex = (*ptLevel) -> GetIndex(var)) >= 0 ) {
#line 180 "symb.ch"
#line 181 "symb.ch"
                                                                                                                                Index result = { pvLastLevel, resultIndex };
                                                                                                                                
#line 181 "symb.ch"
#line 182 "symb.ch"
                                                                                                                                return result ;
                                                                                                                                
#line 182 "symb.ch"
#line 183 "symb.ch"
                                                                                                                                
#line 183 "symb.ch"
#line 183 "symb.ch"
                                                                                                                                }
#line 183 "symb.ch"
#line 184 "symb.ch"
                                                                
#line 184 "symb.ch"
#line 184 "symb.ch"
                                                               }
#line 184 "symb.ch"
    
#line 184 "symb.ch"
#line 187 "symb.ch"
    return noResult ;
    
#line 187 "symb.ch"
#line 188 "symb.ch"
    
#line 188 "symb.ch"
#line 188 "symb.ch"
}
#line 188 "symb.ch"

#line 194 "symb.ch"

#line 194 "symb.ch"
SymbolTable::Index SymbolTable::GetFirstIndex ( const char *var, int startLevel )
#line 194 "symb.ch"
{
#line 194 "symb.ch"
#line 194 "symb.ch"
    int _nextVal ;
    
#line 194 "symb.ch"
#line 197 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 197 "symb.ch"
#line 200 "symb.ch"
    
    Index   result = GetIndex(var, startLevel);
    
#line 200 "symb.ch"
#line 202 "symb.ch"
    if ( result.index < 0 ) 
#line 202 "symb.ch"
#line 203 "symb.ch"
        return noResult ;
    
#line 203 "symb.ch"
#line 206 "symb.ch"
    
    int index = result.index ;
    
#line 206 "symb.ch"
#line 207 "symb.ch"
    int trailingIndex = index ;
    
#line 207 "symb.ch"
#line 209 "symb.ch"
    while ( index >= 0 ) {
#line 209 "symb.ch"
#line 210 "symb.ch"
                            {
#line 210 "symb.ch"
#line 211 "symb.ch"
                                if ( VString(Value((*GetTabList(result.level))[index])) == var ) {
#line 211 "symb.ch"
#line 212 "symb.ch"
                                                                                                            trailingIndex = index ;
#line 212 "symb.ch"
#line 213 "symb.ch"
                                                                                                            index = index - 1 ;
#line 213 "symb.ch"
#line 214 "symb.ch"
                                                                                                            
#line 214 "symb.ch"
#line 214 "symb.ch"
                                                                                                          } else 
#line 214 "symb.ch"
#line 215 "symb.ch"
                                    break ;
                                    
#line 215 "symb.ch"
                                
#line 215 "symb.ch"
#line 216 "symb.ch"
                                
#line 216 "symb.ch"
#line 216 "symb.ch"
                            }
                            
#line 216 "symb.ch"
#line 217 "symb.ch"
                            
#line 217 "symb.ch"
#line 217 "symb.ch"
                           }
#line 217 "symb.ch"
#line 218 "symb.ch"
    result.index = trailingIndex ;
#line 218 "symb.ch"
#line 219 "symb.ch"
    return result ;
    
#line 219 "symb.ch"
#line 220 "symb.ch"
    
#line 220 "symb.ch"
#line 220 "symb.ch"
}
#line 220 "symb.ch"

#line 226 "symb.ch"

#line 226 "symb.ch"
SymbolTable::Index SymbolTable::GetNextIndex ( const char *var, Index startIndex )
#line 226 "symb.ch"
{
#line 226 "symb.ch"
#line 226 "symb.ch"
    int _nextVal ;
    
#line 226 "symb.ch"
#line 229 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 229 "symb.ch"
#line 231 "symb.ch"
    if ( startIndex.level < 0 || startIndex.level >= Size() ) 
#line 231 "symb.ch"
#line 232 "symb.ch"
        return noResult ;
    
#line 232 "symb.ch"
#line 233 "symb.ch"
    TabList & tabListFirst = *GetTabList(startIndex.level);
#line 233 "symb.ch"
#line 235 "symb.ch"
    int index = startIndex.index + 1 ;
    
#line 235 "symb.ch"
#line 238 "symb.ch"
    if ( index >= 0 && index < tabListFirst.Size() && !strcmp(VString(Value(tabListFirst [index])), var) ) {
#line 238 "symb.ch"
#line 239 "symb.ch"
                                                                                                                        startIndex.index = index ;
#line 239 "symb.ch"
#line 240 "symb.ch"
                                                                                                                        return startIndex ;
                                                                                                                        
#line 240 "symb.ch"
#line 241 "symb.ch"
                                                                                                                        
#line 241 "symb.ch"
#line 241 "symb.ch"
                                                                                                                       } else 
#line 241 "symb.ch"
    if ( startIndex.level > 0 ) {
#line 241 "symb.ch"
#line 242 "symb.ch"
                                    return GetFirstIndex(var, startIndex.level - 1);
                                    
#line 242 "symb.ch"
#line 243 "symb.ch"
                                    
#line 243 "symb.ch"
#line 243 "symb.ch"
                                   }
#line 243 "symb.ch"
#line 244 "symb.ch"
    return noResult ;
    
#line 244 "symb.ch"
#line 245 "symb.ch"
    
#line 245 "symb.ch"
#line 245 "symb.ch"
}
#line 245 "symb.ch"

#line 245 "symb.ch"
#line 245 "symb.ch"
static void symb_Anchor () { int i = 1;} 
#line 245 "symb.ch"
/*Well done my boy */ 
#line 245 "symb.ch"

