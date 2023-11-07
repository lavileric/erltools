
#line 5 "symb.ch"
/*************************************************************************/
#line 5 "symb.ch"
/*                                                                       */
#line 5 "symb.ch"
/*        Produced by Metachop version 2.0  -    1989-1995               */
#line 5 "symb.ch"
/*     Tree      Meta     Chopper      developped    by                  */
#line 5 "symb.ch"
/*                  Eric Lavillonniere                                   */
#line 5 "symb.ch"
/*                                                                       */
#line 5 "symb.ch"
/*************************************************************************/
#line 5 "symb.ch"

#line 5 "symb.ch"
#include "token.h"
#line 5 "symb.ch"
#define decomp decomp_sgt
#line 5 "symb.ch"

#line 5 "symb.ch"
#ifndef for_elem
#line 5 "symb.ch"
#line 5 "symb.ch"
#define for_elem _for_elem

#line 5 "symb.ch"
#line 5 "symb.ch"

#line 5 "symb.ch"
#endif
#ifdef INCONNU
#line 5 "symb.ch"
#line 5 "symb.ch"
PTREE   for_elem ;
#line 5 "symb.ch"

#line 5 "symb.ch"
#line 5 "symb.ch"

#line 5 "symb.ch"
#endif
#include "symb.h"

bool    SymbolTable::throwOn = false ;

#line 21 "symb.ch"

#line 21 "symb.ch"
SymbolTable::SymbolTable ( const SymbolTable &symbTab )
#line 21 "symb.ch"
    : pvSize(0),  pvSizeMax(0),  pvTable(0)
#line 21 "symb.ch"

#line 21 "symb.ch"
{
#line 21 "symb.ch"
#line 21 "symb.ch"
    int _nextVal ;
    
#line 21 "symb.ch"
#line 26 "symb.ch"
    
    PTREE   listVar ;
#line 26 "symb.ch"
    
#line 26 "symb.ch"
#line 27 "symb.ch"
    
    PTREE   symbol ;
#line 27 "symb.ch"
    
#line 27 "symb.ch"
#line 28 "symb.ch"
    
    PTREE   type ;
#line 28 "symb.ch"
    
#line 28 "symb.ch"
#line 30 "symb.ch"
    pvValidity =  TABLE_VALIDITY ;
#line 30 "symb.ch"
#line 33 "symb.ch"
#line 33 "symb.ch"
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
#line 33 "symb.ch"
#line 34 "symb.ch"
                                                                                        (listVar=symbTab.GetTabList(currLevel) -> List());
#line 34 "symb.ch"
                                                                                        
#line 34 "symb.ch"
#line 35 "symb.ch"
                                                                                        AddLevel();
#line 35 "symb.ch"
#line 36 "symb.ch"
                                                                                        while ( ((symbol=(listVar?listVar.Nextl():(PPTREE)0))) ) {
#line 36 "symb.ch"
#line 37 "symb.ch"
                                                                                                                                                        AddVar(CopyTree(symbol));
#line 37 "symb.ch"
#line 38 "symb.ch"
                                                                                                                                                        
#line 38 "symb.ch"
#line 38 "symb.ch"
                                                                                                                                                      }
#line 38 "symb.ch"
#line 39 "symb.ch"
                                                                                        
#line 39 "symb.ch"
#line 39 "symb.ch"
                                                                                     }
#line 39 "symb.ch"
    
#line 39 "symb.ch"
#line 40 "symb.ch"
    
#line 40 "symb.ch"
#line 40 "symb.ch"
}
#line 40 "symb.ch"

#line 54 "symb.ch"

#line 54 "symb.ch"
const SymbolTable &SymbolTable::operator= ( const SymbolTable &symbTab )
#line 54 "symb.ch"
{
#line 54 "symb.ch"
#line 54 "symb.ch"
    int _nextVal ;
    
#line 54 "symb.ch"
#line 57 "symb.ch"
    CheckValidity();
#line 57 "symb.ch"
#line 59 "symb.ch"
    PTREE   listVar ;
#line 59 "symb.ch"
    
#line 59 "symb.ch"
#line 60 "symb.ch"
    
    PTREE   symbol ;
#line 60 "symb.ch"
    
#line 60 "symb.ch"
#line 61 "symb.ch"
    
    PTREE   type ;
#line 61 "symb.ch"
    
#line 61 "symb.ch"
#line 64 "symb.ch"
    while ( pvSize ) 
#line 64 "symb.ch"
#line 65 "symb.ch"
        RemoveLevel();
#line 65 "symb.ch"
#line 68 "symb.ch"
#line 68 "symb.ch"
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
#line 68 "symb.ch"
#line 69 "symb.ch"
                                                                                        (listVar=symbTab.GetTabList(currLevel) -> List());
#line 69 "symb.ch"
                                                                                        
#line 69 "symb.ch"
#line 70 "symb.ch"
                                                                                        AddLevel();
#line 70 "symb.ch"
#line 71 "symb.ch"
                                                                                        while ( ((symbol=(listVar?listVar.Nextl():(PPTREE)0))) ) {
#line 71 "symb.ch"
#line 72 "symb.ch"
                                                                                                                                                        AddVar(CopyTree(symbol));
#line 72 "symb.ch"
#line 73 "symb.ch"
                                                                                                                                                        
#line 73 "symb.ch"
#line 73 "symb.ch"
                                                                                                                                                      }
#line 73 "symb.ch"
#line 74 "symb.ch"
                                                                                        
#line 74 "symb.ch"
#line 74 "symb.ch"
                                                                                     }
#line 74 "symb.ch"
    
#line 74 "symb.ch"
#line 77 "symb.ch"
    return *this ;
    
#line 77 "symb.ch"
#line 78 "symb.ch"
    
#line 78 "symb.ch"
#line 78 "symb.ch"
}
#line 78 "symb.ch"

#line 92 "symb.ch"

#line 92 "symb.ch"
int SymbolTable::AddLevel ( PPTREE initList )
#line 92 "symb.ch"
{
#line 92 "symb.ch"
#line 92 "symb.ch"
    int _nextVal ;
    
#line 92 "symb.ch"
#line 95 "symb.ch"
    CheckValidity();
#line 95 "symb.ch"
#line 98 "symb.ch"
    if ( pvSize == pvSizeMax ) {
#line 98 "symb.ch"
#line 99 "symb.ch"
                                    if ( !pvTable ) 
#line 99 "symb.ch"
#line 100 "symb.ch"
                                        pvTable =  (TabList **)malloc((pvSizeMax = 10) * sizeof(TabList *));
#line 100 "symb.ch"
                                    else 
#line 101 "symb.ch"
                                    {
#line 101 "symb.ch"
#line 102 "symb.ch"
                                        pvTable =  (TabList **)realloc(pvTable, (pvSizeMax += 10) * sizeof(TabList *));
#line 102 "symb.ch"
#line 103 "symb.ch"
                                        
#line 103 "symb.ch"
#line 103 "symb.ch"
                                    }
                                    
#line 103 "symb.ch"
#line 104 "symb.ch"
                                    
#line 104 "symb.ch"
#line 104 "symb.ch"
                                 }
#line 104 "symb.ch"
#line 107 "symb.ch"
    pvCurrentLevel =  *(pvTable + pvSize) = new TabList(initList);
#line 107 "symb.ch"
#line 110 "symb.ch"
    return ++pvSize ;
    
#line 110 "symb.ch"
#line 111 "symb.ch"
    
#line 111 "symb.ch"
#line 111 "symb.ch"
}
#line 111 "symb.ch"

#line 120 "symb.ch"

#line 120 "symb.ch"
int SymbolTable::RemoveLevel ()
#line 120 "symb.ch"
{
#line 120 "symb.ch"
#line 120 "symb.ch"
    int _nextVal ;
    
#line 120 "symb.ch"
#line 123 "symb.ch"
    CheckValidity();
#line 123 "symb.ch"
#line 126 "symb.ch"
    if ( !pvSize ) 
#line 126 "symb.ch"
#line 127 "symb.ch"
        return 0 ;
    
#line 127 "symb.ch"
#line 130 "symb.ch"
    pvSize-- ;
#line 130 "symb.ch"
#line 131 "symb.ch"
    delete *(pvTable + pvSize);
#line 131 "symb.ch"
#line 132 "symb.ch"
    if ( pvSize > 0 ) 
#line 132 "symb.ch"
#line 133 "symb.ch"
        pvCurrentLevel =  *(pvTable + pvSize - 1);
#line 133 "symb.ch"
    else 
#line 133 "symb.ch"
#line 135 "symb.ch"
        pvCurrentLevel =  0 ;
#line 135 "symb.ch"
    
#line 135 "symb.ch"
#line 138 "symb.ch"
    return pvSize ;
    
#line 138 "symb.ch"
#line 139 "symb.ch"
    
#line 139 "symb.ch"
#line 139 "symb.ch"
}
#line 139 "symb.ch"

#line 149 "symb.ch"

#line 149 "symb.ch"
void SymbolTable::AddVar ( const PTREE &var, bool remove )
#line 149 "symb.ch"
{
#line 149 "symb.ch"
#line 149 "symb.ch"
    int _nextVal ;
    
#line 149 "symb.ch"
#line 152 "symb.ch"
    CheckValidity();
#line 152 "symb.ch"
#line 155 "symb.ch"
    if ( pvSize == 0 ) 
#line 155 "symb.ch"
#line 156 "symb.ch"
        AddLevel();
#line 156 "symb.ch"
#line 157 "symb.ch"
    if ( remove ) 
#line 157 "symb.ch"
#line 158 "symb.ch"
        pvCurrentLevel -> InsertRemove(var);
#line 158 "symb.ch"
    else 
#line 158 "symb.ch"
#line 160 "symb.ch"
        pvCurrentLevel -> Insert(var);
#line 160 "symb.ch"
    
#line 160 "symb.ch"
#line 161 "symb.ch"
    
#line 161 "symb.ch"
#line 161 "symb.ch"
}
#line 161 "symb.ch"

#line 170 "symb.ch"

#line 170 "symb.ch"
void SymbolTable::RemoveVar ( const PTREE &var )
#line 170 "symb.ch"
{
#line 170 "symb.ch"
#line 170 "symb.ch"
    int _nextVal ;
    
#line 170 "symb.ch"
#line 173 "symb.ch"
    if ( pvSize == 0 ) 
#line 173 "symb.ch"
#line 174 "symb.ch"
        return ;
    
#line 174 "symb.ch"
#line 175 "symb.ch"
    pvCurrentLevel -> Remove(var);
#line 175 "symb.ch"
#line 176 "symb.ch"
    
#line 176 "symb.ch"
#line 176 "symb.ch"
}
#line 176 "symb.ch"

#line 187 "symb.ch"

#line 187 "symb.ch"
PTREE SymbolTable::GetVar ( int index, int level )
#line 187 "symb.ch"
{
#line 187 "symb.ch"
#line 187 "symb.ch"
    int _nextVal ;
    
#line 187 "symb.ch"
#line 190 "symb.ch"
    CheckValidity();
#line 190 "symb.ch"
#line 193 "symb.ch"
    if ( (int)level >= Size() || index < 0 || index >= (**(pvTable + level)).Size() ) 
#line 193 "symb.ch"
#line 194 "symb.ch"
        return (PTREE)0 ;
    
#line 194 "symb.ch"
#line 197 "symb.ch"
    return (**(pvTable + level))[index];
    
#line 197 "symb.ch"
#line 198 "symb.ch"
    
#line 198 "symb.ch"
#line 198 "symb.ch"
}
#line 198 "symb.ch"

#line 207 "symb.ch"

#line 207 "symb.ch"
void SymbolTable::RemoveVar ( int index, int level )
#line 207 "symb.ch"
{
#line 207 "symb.ch"
#line 207 "symb.ch"
    int _nextVal ;
    
#line 207 "symb.ch"
#line 210 "symb.ch"
    CheckValidity();
#line 210 "symb.ch"
#line 213 "symb.ch"
    if ( (int)level >= Size() ) 
#line 213 "symb.ch"
#line 214 "symb.ch"
        return ;
    
#line 214 "symb.ch"
#line 217 "symb.ch"
    (**(pvTable + level)).Erase(index);
#line 217 "symb.ch"
#line 218 "symb.ch"
    
#line 218 "symb.ch"
#line 218 "symb.ch"
}
#line 218 "symb.ch"

#line 235 "symb.ch"

#line 235 "symb.ch"
PTREE SymbolTable::GetVar ( const char *var, int startLevel )
#line 235 "symb.ch"
{
#line 235 "symb.ch"
#line 235 "symb.ch"
    int _nextVal ;
    
#line 235 "symb.ch"
#line 238 "symb.ch"
    CheckValidity();
#line 238 "symb.ch"
#line 241 "symb.ch"
    if ( !var || !*var ) {
#line 241 "symb.ch"
#line 242 "symb.ch"
                                PTREE   nullTree ;
#line 242 "symb.ch"
                                
#line 242 "symb.ch"
#line 243 "symb.ch"
                                return nullTree ;
                                
#line 243 "symb.ch"
#line 244 "symb.ch"
                                
#line 244 "symb.ch"
#line 244 "symb.ch"
                              }
#line 244 "symb.ch"
#line 246 "symb.ch"
    Index   result = GetIndex(var, startLevel);
    
#line 246 "symb.ch"
#line 248 "symb.ch"
    return GetVar(result.index, result.level);
    
#line 248 "symb.ch"
#line 249 "symb.ch"
    
#line 249 "symb.ch"
#line 249 "symb.ch"
}
#line 249 "symb.ch"

#line 266 "symb.ch"

#line 266 "symb.ch"
SymbolTable::Index SymbolTable::GetIndex ( const char *var, int startLevel )
#line 266 "symb.ch"
{
#line 266 "symb.ch"
#line 266 "symb.ch"
    int _nextVal ;
    
#line 266 "symb.ch"
#line 269 "symb.ch"
    
    TabList **ptLevel ;
    
#line 269 "symb.ch"
#line 270 "symb.ch"
    PTREE   result ;
#line 270 "symb.ch"
    
#line 270 "symb.ch"
#line 271 "symb.ch"
    int resultIndex ;
    
#line 271 "symb.ch"
#line 272 "symb.ch"
    static const Index  noResult = { -10, -10 };
    
#line 272 "symb.ch"
#line 274 "symb.ch"
    CheckValidity();
#line 274 "symb.ch"
#line 275 "symb.ch"
    if ( !var || !*var ) 
#line 275 "symb.ch"
#line 276 "symb.ch"
        return noResult ;
    
#line 276 "symb.ch"
#line 279 "symb.ch"
    if ( startLevel < 0 ) 
#line 279 "symb.ch"
#line 280 "symb.ch"
        startLevel =  pvSize - 1 ;
#line 280 "symb.ch"
#line 283 "symb.ch"
    if ( startLevel < 0 || startLevel > pvSize - 1 ) 
#line 283 "symb.ch"
#line 284 "symb.ch"
        return noResult ;
    
#line 284 "symb.ch"
#line 287 "symb.ch"
    ptLevel =  pvTable + startLevel ;
#line 287 "symb.ch"
#line 290 "symb.ch"
    pvLastLevel =  startLevel ;
#line 290 "symb.ch"
#line 291 "symb.ch"
#line 291 "symb.ch"
    for (; ptLevel >= pvTable ; ptLevel--, pvLastLevel-- ) {
#line 291 "symb.ch"
#line 292 "symb.ch"
                                                                if ( (resultIndex = (*ptLevel) -> GetIndex(var)) >= 0 ) {
#line 292 "symb.ch"
#line 293 "symb.ch"
                                                                                                                                    Index   result = { pvLastLevel, resultIndex };
                                                                                                                                    
#line 293 "symb.ch"
#line 294 "symb.ch"
                                                                                                                                    return result ;
                                                                                                                                    
#line 294 "symb.ch"
#line 295 "symb.ch"
                                                                                                                                    
#line 295 "symb.ch"
#line 295 "symb.ch"
                                                                                                                                }
#line 295 "symb.ch"
#line 296 "symb.ch"
                                                                
#line 296 "symb.ch"
#line 296 "symb.ch"
                                                               }
#line 296 "symb.ch"
    
#line 296 "symb.ch"
#line 299 "symb.ch"
    return noResult ;
    
#line 299 "symb.ch"
#line 300 "symb.ch"
    
#line 300 "symb.ch"
#line 300 "symb.ch"
}
#line 300 "symb.ch"

#line 317 "symb.ch"

#line 317 "symb.ch"
SymbolTable::Index SymbolTable::GetFirstIndex ( const char *var, int startLevel )
#line 317 "symb.ch"
{
#line 317 "symb.ch"
#line 317 "symb.ch"
    int _nextVal ;
    
#line 317 "symb.ch"
#line 320 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 320 "symb.ch"
#line 322 "symb.ch"
    CheckValidity();
#line 322 "symb.ch"
#line 325 "symb.ch"
    
    Index   result = GetIndex(var, startLevel);
    
#line 325 "symb.ch"
#line 327 "symb.ch"
    if ( result.index < 0 ) 
#line 327 "symb.ch"
#line 328 "symb.ch"
        return noResult ;
    
#line 328 "symb.ch"
#line 331 "symb.ch"
    
    int index = result.index ;
    
#line 331 "symb.ch"
#line 332 "symb.ch"
    int trailingIndex = index ;
    
#line 332 "symb.ch"
#line 334 "symb.ch"
    while ( index >= 0 ) {
#line 334 "symb.ch"
#line 335 "symb.ch"
                            {
#line 335 "symb.ch"
#line 336 "symb.ch"
                                if ( VString(Value((*GetTabList(result.level))[index])) == var ) {
#line 336 "symb.ch"
#line 337 "symb.ch"
                                                                                                            trailingIndex =  index ;
#line 337 "symb.ch"
#line 338 "symb.ch"
                                                                                                            index =  index - 1 ;
#line 338 "symb.ch"
#line 339 "symb.ch"
                                                                                                            
#line 339 "symb.ch"
#line 339 "symb.ch"
                                                                                                          } else 
#line 339 "symb.ch"
#line 340 "symb.ch"
                                    break ;
                                    
#line 340 "symb.ch"
                                
#line 340 "symb.ch"
#line 341 "symb.ch"
                                
#line 341 "symb.ch"
#line 341 "symb.ch"
                            }
                            
#line 341 "symb.ch"
#line 342 "symb.ch"
                            
#line 342 "symb.ch"
#line 342 "symb.ch"
                           }
#line 342 "symb.ch"
#line 343 "symb.ch"
    result.index =  trailingIndex ;
#line 343 "symb.ch"
#line 344 "symb.ch"
    return result ;
    
#line 344 "symb.ch"
#line 345 "symb.ch"
    
#line 345 "symb.ch"
#line 345 "symb.ch"
}
#line 345 "symb.ch"

#line 361 "symb.ch"

#line 361 "symb.ch"
SymbolTable::Index SymbolTable::GetNextIndex ( const char *var, Index startIndex )
#line 361 "symb.ch"
{
#line 361 "symb.ch"
#line 361 "symb.ch"
    int _nextVal ;
    
#line 361 "symb.ch"
#line 364 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 364 "symb.ch"
#line 366 "symb.ch"
    CheckValidity();
#line 366 "symb.ch"
#line 369 "symb.ch"
    if ( startIndex.level < 0 || startIndex.level >= Size() ) 
#line 369 "symb.ch"
#line 370 "symb.ch"
        return noResult ;
    
#line 370 "symb.ch"
#line 371 "symb.ch"
    TabList & tabListFirst =  *GetTabList(startIndex.level);
#line 371 "symb.ch"
#line 373 "symb.ch"
    int index = startIndex.index + 1 ;
    
#line 373 "symb.ch"
#line 376 "symb.ch"
    if ( index >= 0 && index < tabListFirst.Size() && !strcmp(VString(Value(tabListFirst [index])), var) ) {
#line 376 "symb.ch"
#line 377 "symb.ch"
                                                                                                                        startIndex.index =  index ;
#line 377 "symb.ch"
#line 378 "symb.ch"
                                                                                                                        return startIndex ;
                                                                                                                        
#line 378 "symb.ch"
#line 379 "symb.ch"
                                                                                                                        
#line 379 "symb.ch"
#line 379 "symb.ch"
                                                                                                                       } else 
#line 379 "symb.ch"
    if ( startIndex.level > 0 ) {
#line 379 "symb.ch"
#line 380 "symb.ch"
                                    return GetFirstIndex(var, startIndex.level - 1);
                                    
#line 380 "symb.ch"
#line 381 "symb.ch"
                                    
#line 381 "symb.ch"
#line 381 "symb.ch"
                                   }
#line 381 "symb.ch"
#line 382 "symb.ch"
    return noResult ;
    
#line 382 "symb.ch"
#line 383 "symb.ch"
    
#line 383 "symb.ch"
#line 383 "symb.ch"
}
#line 383 "symb.ch"

#line 383 "symb.ch"
#line 383 "symb.ch"
static void symb_Anchor () { int i = 1;} 
#line 383 "symb.ch"
/*Well done my boy */ 
#line 383 "symb.ch"
