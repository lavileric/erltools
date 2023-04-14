
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

bool    SymbolTable::throwOn = false ;

#line 9 "symb.ch"

#line 9 "symb.ch"
SymbolTable::SymbolTable ( const SymbolTable &symbTab )
#line 9 "symb.ch"
    : pvSize(0),  pvSizeMax(0),  pvTable(0)
#line 9 "symb.ch"

#line 9 "symb.ch"
{
#line 9 "symb.ch"
#line 9 "symb.ch"
    int _nextVal ;
    
#line 9 "symb.ch"
#line 14 "symb.ch"
    
    PTREE   listVar ;
#line 14 "symb.ch"
    
#line 14 "symb.ch"
#line 15 "symb.ch"
    
    PTREE   symbol ;
#line 15 "symb.ch"
    
#line 15 "symb.ch"
#line 16 "symb.ch"
    
    PTREE   type ;
#line 16 "symb.ch"
    
#line 16 "symb.ch"
#line 18 "symb.ch"
    pvValidity =  TABLE_VALIDITY ;
#line 18 "symb.ch"
#line 21 "symb.ch"
#line 21 "symb.ch"
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
#line 21 "symb.ch"
#line 22 "symb.ch"
                                                                                        (listVar=symbTab.GetTabList(currLevel) -> List());
#line 22 "symb.ch"
                                                                                        
#line 22 "symb.ch"
#line 23 "symb.ch"
                                                                                        AddLevel();
#line 23 "symb.ch"
#line 24 "symb.ch"
                                                                                        while ( ((symbol=(listVar?listVar.Nextl():(PPTREE)0))) ) {
#line 24 "symb.ch"
#line 25 "symb.ch"
                                                                                                                                                        AddVar(CopyTree(symbol));
#line 25 "symb.ch"
#line 26 "symb.ch"
                                                                                                                                                        
#line 26 "symb.ch"
#line 26 "symb.ch"
                                                                                                                                                      }
#line 26 "symb.ch"
#line 27 "symb.ch"
                                                                                        
#line 27 "symb.ch"
#line 27 "symb.ch"
                                                                                     }
#line 27 "symb.ch"
    
#line 27 "symb.ch"
#line 28 "symb.ch"
    
#line 28 "symb.ch"
#line 28 "symb.ch"
}
#line 28 "symb.ch"

#line 32 "symb.ch"

#line 32 "symb.ch"
const SymbolTable &SymbolTable::operator= ( const SymbolTable &symbTab )
#line 32 "symb.ch"
{
#line 32 "symb.ch"
#line 32 "symb.ch"
    int _nextVal ;
    
#line 32 "symb.ch"
#line 35 "symb.ch"
    CheckValidity();
#line 35 "symb.ch"
#line 37 "symb.ch"
    PTREE   listVar ;
#line 37 "symb.ch"
    
#line 37 "symb.ch"
#line 38 "symb.ch"
    
    PTREE   symbol ;
#line 38 "symb.ch"
    
#line 38 "symb.ch"
#line 39 "symb.ch"
    
    PTREE   type ;
#line 39 "symb.ch"
    
#line 39 "symb.ch"
#line 42 "symb.ch"
    while ( pvSize ) 
#line 42 "symb.ch"
#line 43 "symb.ch"
        RemoveLevel();
#line 43 "symb.ch"
#line 46 "symb.ch"
#line 46 "symb.ch"
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
#line 46 "symb.ch"
#line 47 "symb.ch"
                                                                                        (listVar=symbTab.GetTabList(currLevel) -> List());
#line 47 "symb.ch"
                                                                                        
#line 47 "symb.ch"
#line 48 "symb.ch"
                                                                                        AddLevel();
#line 48 "symb.ch"
#line 49 "symb.ch"
                                                                                        while ( ((symbol=(listVar?listVar.Nextl():(PPTREE)0))) ) {
#line 49 "symb.ch"
#line 50 "symb.ch"
                                                                                                                                                        AddVar(CopyTree(symbol));
#line 50 "symb.ch"
#line 51 "symb.ch"
                                                                                                                                                        
#line 51 "symb.ch"
#line 51 "symb.ch"
                                                                                                                                                      }
#line 51 "symb.ch"
#line 52 "symb.ch"
                                                                                        
#line 52 "symb.ch"
#line 52 "symb.ch"
                                                                                     }
#line 52 "symb.ch"
    
#line 52 "symb.ch"
#line 55 "symb.ch"
    return *this ;
    
#line 55 "symb.ch"
#line 56 "symb.ch"
    
#line 56 "symb.ch"
#line 56 "symb.ch"
}
#line 56 "symb.ch"

#line 61 "symb.ch"

#line 61 "symb.ch"
int SymbolTable::AddLevel ( PPTREE initList )
#line 61 "symb.ch"
{
#line 61 "symb.ch"
#line 61 "symb.ch"
    int _nextVal ;
    
#line 61 "symb.ch"
#line 64 "symb.ch"
    CheckValidity();
#line 64 "symb.ch"
#line 67 "symb.ch"
    if ( pvSize == pvSizeMax ) {
#line 67 "symb.ch"
#line 68 "symb.ch"
                                    if ( !pvTable ) 
#line 68 "symb.ch"
#line 69 "symb.ch"
                                        pvTable =  (TabList **)malloc((pvSizeMax = 10) * sizeof(TabList *));
#line 69 "symb.ch"
                                    else 
#line 70 "symb.ch"
                                    {
#line 70 "symb.ch"
#line 71 "symb.ch"
                                        pvTable =  (TabList **)realloc(pvTable, (pvSizeMax += 10) * sizeof(TabList *));
#line 71 "symb.ch"
#line 72 "symb.ch"
                                        
#line 72 "symb.ch"
#line 72 "symb.ch"
                                    }
                                    
#line 72 "symb.ch"
#line 73 "symb.ch"
                                    
#line 73 "symb.ch"
#line 73 "symb.ch"
                                 }
#line 73 "symb.ch"
#line 76 "symb.ch"
    pvCurrentLevel =  *(pvTable + pvSize) = new TabList(initList);
#line 76 "symb.ch"
#line 79 "symb.ch"
    return ++pvSize ;
    
#line 79 "symb.ch"
#line 80 "symb.ch"
    
#line 80 "symb.ch"
#line 80 "symb.ch"
}
#line 80 "symb.ch"

#line 82 "symb.ch"

#line 82 "symb.ch"
int SymbolTable::RemoveLevel ()
#line 82 "symb.ch"
{
#line 82 "symb.ch"
#line 82 "symb.ch"
    int _nextVal ;
    
#line 82 "symb.ch"
#line 85 "symb.ch"
    CheckValidity();
#line 85 "symb.ch"
#line 88 "symb.ch"
    if ( !pvSize ) 
#line 88 "symb.ch"
#line 89 "symb.ch"
        return 0 ;
    
#line 89 "symb.ch"
#line 92 "symb.ch"
    pvSize-- ;
#line 92 "symb.ch"
#line 93 "symb.ch"
    delete *(pvTable + pvSize);
#line 93 "symb.ch"
#line 94 "symb.ch"
    if ( pvSize > 0 ) 
#line 94 "symb.ch"
#line 95 "symb.ch"
        pvCurrentLevel =  *(pvTable + pvSize - 1);
#line 95 "symb.ch"
    else 
#line 95 "symb.ch"
#line 97 "symb.ch"
        pvCurrentLevel =  0 ;
#line 97 "symb.ch"
    
#line 97 "symb.ch"
#line 100 "symb.ch"
    return pvSize ;
    
#line 100 "symb.ch"
#line 101 "symb.ch"
    
#line 101 "symb.ch"
#line 101 "symb.ch"
}
#line 101 "symb.ch"

#line 103 "symb.ch"

#line 103 "symb.ch"
void SymbolTable::AddVar ( const PTREE &var, bool remove )
#line 103 "symb.ch"
{
#line 103 "symb.ch"
#line 103 "symb.ch"
    int _nextVal ;
    
#line 103 "symb.ch"
#line 106 "symb.ch"
    CheckValidity();
#line 106 "symb.ch"
#line 109 "symb.ch"
    if ( pvSize == 0 ) 
#line 109 "symb.ch"
#line 110 "symb.ch"
        AddLevel();
#line 110 "symb.ch"
#line 111 "symb.ch"
    if ( remove ) 
#line 111 "symb.ch"
#line 112 "symb.ch"
        pvCurrentLevel -> InsertRemove(var);
#line 112 "symb.ch"
    else 
#line 112 "symb.ch"
#line 114 "symb.ch"
        pvCurrentLevel -> Insert(var);
#line 114 "symb.ch"
    
#line 114 "symb.ch"
#line 115 "symb.ch"
    
#line 115 "symb.ch"
#line 115 "symb.ch"
}
#line 115 "symb.ch"

#line 117 "symb.ch"

#line 117 "symb.ch"
void SymbolTable::RemoveVar ( const PTREE &var )
#line 117 "symb.ch"
{
#line 117 "symb.ch"
#line 117 "symb.ch"
    int _nextVal ;
    
#line 117 "symb.ch"
#line 120 "symb.ch"
    if ( pvSize == 0 ) 
#line 120 "symb.ch"
#line 121 "symb.ch"
        return ;
    
#line 121 "symb.ch"
#line 122 "symb.ch"
    pvCurrentLevel -> Remove(var);
#line 122 "symb.ch"
#line 123 "symb.ch"
    
#line 123 "symb.ch"
#line 123 "symb.ch"
}
#line 123 "symb.ch"

#line 125 "symb.ch"

#line 125 "symb.ch"
PTREE SymbolTable::GetVar ( int index, int level )
#line 125 "symb.ch"
{
#line 125 "symb.ch"
#line 125 "symb.ch"
    int _nextVal ;
    
#line 125 "symb.ch"
#line 127 "symb.ch"
    CheckValidity();
#line 127 "symb.ch"
#line 130 "symb.ch"
    if ( (int)level >= Size() || index < 0 || index >= (**(pvTable + level)).Size() ) 
#line 130 "symb.ch"
#line 131 "symb.ch"
        return (PTREE)0 ;
    
#line 131 "symb.ch"
#line 134 "symb.ch"
    return (**(pvTable + level))[index];
    
#line 134 "symb.ch"
#line 135 "symb.ch"
    
#line 135 "symb.ch"
#line 135 "symb.ch"
}
#line 135 "symb.ch"

#line 137 "symb.ch"

#line 137 "symb.ch"
void SymbolTable::RemoveVar ( int index, int level )
#line 137 "symb.ch"
{
#line 137 "symb.ch"
#line 137 "symb.ch"
    int _nextVal ;
    
#line 137 "symb.ch"
#line 139 "symb.ch"
    CheckValidity();
#line 139 "symb.ch"
#line 142 "symb.ch"
    if ( (int)level >= Size() ) 
#line 142 "symb.ch"
#line 143 "symb.ch"
        return ;
    
#line 143 "symb.ch"
#line 146 "symb.ch"
    (**(pvTable + level)).Erase(index);
#line 146 "symb.ch"
#line 147 "symb.ch"
    
#line 147 "symb.ch"
#line 147 "symb.ch"
}
#line 147 "symb.ch"

#line 153 "symb.ch"

#line 153 "symb.ch"
PTREE SymbolTable::GetVar ( const char *var, int startLevel )
#line 153 "symb.ch"
{
#line 153 "symb.ch"
#line 153 "symb.ch"
    int _nextVal ;
    
#line 153 "symb.ch"
#line 156 "symb.ch"
    CheckValidity();
#line 156 "symb.ch"
#line 158 "symb.ch"
    Index   result = GetIndex(var, startLevel);
    
#line 158 "symb.ch"
#line 160 "symb.ch"
    return GetVar(result.index, result.level);
    
#line 160 "symb.ch"
#line 161 "symb.ch"
    
#line 161 "symb.ch"
#line 161 "symb.ch"
}
#line 161 "symb.ch"

#line 167 "symb.ch"

#line 167 "symb.ch"
SymbolTable::Index SymbolTable::GetIndex ( const char *var, int startLevel )
#line 167 "symb.ch"
{
#line 167 "symb.ch"
#line 167 "symb.ch"
    int _nextVal ;
    
#line 167 "symb.ch"
#line 170 "symb.ch"
    
    TabList **ptLevel ;
    
#line 170 "symb.ch"
#line 171 "symb.ch"
    PTREE   result ;
#line 171 "symb.ch"
    
#line 171 "symb.ch"
#line 172 "symb.ch"
    int resultIndex ;
    
#line 172 "symb.ch"
#line 173 "symb.ch"
    static const Index  noResult = { -10, -10 };
    
#line 173 "symb.ch"
#line 175 "symb.ch"
    CheckValidity();
#line 175 "symb.ch"
#line 176 "symb.ch"
    if ( !var ) 
#line 176 "symb.ch"
#line 177 "symb.ch"
        return noResult ;
    
#line 177 "symb.ch"
#line 180 "symb.ch"
    if ( startLevel < 0 ) 
#line 180 "symb.ch"
#line 181 "symb.ch"
        startLevel =  pvSize - 1 ;
#line 181 "symb.ch"
#line 184 "symb.ch"
    if ( startLevel < 0 || startLevel > pvSize - 1 ) 
#line 184 "symb.ch"
#line 185 "symb.ch"
        return noResult ;
    
#line 185 "symb.ch"
#line 188 "symb.ch"
    ptLevel =  pvTable + startLevel ;
#line 188 "symb.ch"
#line 191 "symb.ch"
    pvLastLevel =  startLevel ;
#line 191 "symb.ch"
#line 192 "symb.ch"
#line 192 "symb.ch"
    for (; ptLevel >= pvTable ; ptLevel--, pvLastLevel-- ) {
#line 192 "symb.ch"
#line 193 "symb.ch"
                                                                if ( (resultIndex = (*ptLevel) -> GetIndex(var)) >= 0 ) {
#line 193 "symb.ch"
#line 194 "symb.ch"
                                                                                                                                    Index   result = { pvLastLevel, resultIndex };
                                                                                                                                    
#line 194 "symb.ch"
#line 195 "symb.ch"
                                                                                                                                    return result ;
                                                                                                                                    
#line 195 "symb.ch"
#line 196 "symb.ch"
                                                                                                                                    
#line 196 "symb.ch"
#line 196 "symb.ch"
                                                                                                                                }
#line 196 "symb.ch"
#line 197 "symb.ch"
                                                                
#line 197 "symb.ch"
#line 197 "symb.ch"
                                                               }
#line 197 "symb.ch"
    
#line 197 "symb.ch"
#line 200 "symb.ch"
    return noResult ;
    
#line 200 "symb.ch"
#line 201 "symb.ch"
    
#line 201 "symb.ch"
#line 201 "symb.ch"
}
#line 201 "symb.ch"

#line 207 "symb.ch"

#line 207 "symb.ch"
SymbolTable::Index SymbolTable::GetFirstIndex ( const char *var, int startLevel )
#line 207 "symb.ch"
{
#line 207 "symb.ch"
#line 207 "symb.ch"
    int _nextVal ;
    
#line 207 "symb.ch"
#line 210 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 210 "symb.ch"
#line 212 "symb.ch"
    CheckValidity();
#line 212 "symb.ch"
#line 215 "symb.ch"
    
    Index   result = GetIndex(var, startLevel);
    
#line 215 "symb.ch"
#line 217 "symb.ch"
    if ( result.index < 0 ) 
#line 217 "symb.ch"
#line 218 "symb.ch"
        return noResult ;
    
#line 218 "symb.ch"
#line 221 "symb.ch"
    
    int index = result.index ;
    
#line 221 "symb.ch"
#line 222 "symb.ch"
    int trailingIndex = index ;
    
#line 222 "symb.ch"
#line 224 "symb.ch"
    while ( index >= 0 ) {
#line 224 "symb.ch"
#line 225 "symb.ch"
                            {
#line 225 "symb.ch"
#line 226 "symb.ch"
                                if ( VString(Value((*GetTabList(result.level))[index])) == var ) {
#line 226 "symb.ch"
#line 227 "symb.ch"
                                                                                                            trailingIndex =  index ;
#line 227 "symb.ch"
#line 228 "symb.ch"
                                                                                                            index =  index - 1 ;
#line 228 "symb.ch"
#line 229 "symb.ch"
                                                                                                            
#line 229 "symb.ch"
#line 229 "symb.ch"
                                                                                                          } else 
#line 229 "symb.ch"
#line 230 "symb.ch"
                                    break ;
                                    
#line 230 "symb.ch"
                                
#line 230 "symb.ch"
#line 231 "symb.ch"
                                
#line 231 "symb.ch"
#line 231 "symb.ch"
                            }
                            
#line 231 "symb.ch"
#line 232 "symb.ch"
                            
#line 232 "symb.ch"
#line 232 "symb.ch"
                           }
#line 232 "symb.ch"
#line 233 "symb.ch"
    result.index =  trailingIndex ;
#line 233 "symb.ch"
#line 234 "symb.ch"
    return result ;
    
#line 234 "symb.ch"
#line 235 "symb.ch"
    
#line 235 "symb.ch"
#line 235 "symb.ch"
}
#line 235 "symb.ch"

#line 241 "symb.ch"

#line 241 "symb.ch"
SymbolTable::Index SymbolTable::GetNextIndex ( const char *var, Index startIndex )
#line 241 "symb.ch"
{
#line 241 "symb.ch"
#line 241 "symb.ch"
    int _nextVal ;
    
#line 241 "symb.ch"
#line 244 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 244 "symb.ch"
#line 246 "symb.ch"
    CheckValidity();
#line 246 "symb.ch"
#line 249 "symb.ch"
    if ( startIndex.level < 0 || startIndex.level >= Size() ) 
#line 249 "symb.ch"
#line 250 "symb.ch"
        return noResult ;
    
#line 250 "symb.ch"
#line 251 "symb.ch"
    TabList & tabListFirst =  *GetTabList(startIndex.level);
#line 251 "symb.ch"
#line 253 "symb.ch"
    int index = startIndex.index + 1 ;
    
#line 253 "symb.ch"
#line 256 "symb.ch"
    if ( index >= 0 && index < tabListFirst.Size() && !strcmp(VString(Value(tabListFirst [index])), var) ) {
#line 256 "symb.ch"
#line 257 "symb.ch"
                                                                                                                        startIndex.index =  index ;
#line 257 "symb.ch"
#line 258 "symb.ch"
                                                                                                                        return startIndex ;
                                                                                                                        
#line 258 "symb.ch"
#line 259 "symb.ch"
                                                                                                                        
#line 259 "symb.ch"
#line 259 "symb.ch"
                                                                                                                       } else 
#line 259 "symb.ch"
    if ( startIndex.level > 0 ) {
#line 259 "symb.ch"
#line 260 "symb.ch"
                                    return GetFirstIndex(var, startIndex.level - 1);
                                    
#line 260 "symb.ch"
#line 261 "symb.ch"
                                    
#line 261 "symb.ch"
#line 261 "symb.ch"
                                   }
#line 261 "symb.ch"
#line 262 "symb.ch"
    return noResult ;
    
#line 262 "symb.ch"
#line 263 "symb.ch"
    
#line 263 "symb.ch"
#line 263 "symb.ch"
}
#line 263 "symb.ch"

#line 263 "symb.ch"
#line 263 "symb.ch"
static void symb_Anchor () { int i = 1;} 
#line 263 "symb.ch"
/*Well done my boy */ 
#line 263 "symb.ch"
