
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
    pvValidity = TABLE_VALIDITY ;
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
                                        pvTable = (TabList **)malloc((pvSizeMax = 10) * sizeof(TabList *));
#line 100 "symb.ch"
                                    else 
#line 101 "symb.ch"
                                    {
#line 101 "symb.ch"
#line 102 "symb.ch"
                                        pvTable = (TabList **)realloc(pvTable, (pvSizeMax += 10) * sizeof(TabList *));
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
    pvCurrentLevel = *(pvTable + pvSize) = new TabList(initList);
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
        pvCurrentLevel = *(pvTable + pvSize - 1);
#line 133 "symb.ch"
    else 
#line 133 "symb.ch"
#line 135 "symb.ch"
        pvCurrentLevel = 0 ;
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

#line 150 "symb.ch"

#line 150 "symb.ch"
void SymbolTable::AddVar ( const PTREE &var, bool remove, int level )
#line 150 "symb.ch"
{
#line 150 "symb.ch"
#line 150 "symb.ch"
    int _nextVal ;
    
#line 150 "symb.ch"
#line 153 "symb.ch"
    CheckValidity();
#line 153 "symb.ch"
#line 156 "symb.ch"
    if ( pvSize == 0 ) {
#line 156 "symb.ch"
#line 157 "symb.ch"
                            AddLevel();
#line 157 "symb.ch"
#line 158 "symb.ch"
                            
#line 158 "symb.ch"
#line 158 "symb.ch"
                         }
#line 158 "symb.ch"
#line 160 "symb.ch"
    TabList *varLevel (pvCurrentLevel) ;
    
#line 160 "symb.ch"
#line 163 "symb.ch"
    if ( level >= pvSize ) 
#line 163 "symb.ch"
#line 164 "symb.ch"
        return ;
    
#line 164 "symb.ch"
#line 165 "symb.ch"
    if ( level >= 0 ) {
#line 165 "symb.ch"
#line 166 "symb.ch"
                            varLevel = *(pvTable + level);
#line 166 "symb.ch"
#line 167 "symb.ch"
                            
#line 167 "symb.ch"
#line 167 "symb.ch"
                        }
#line 167 "symb.ch"
#line 170 "symb.ch"
    if ( remove ) 
#line 170 "symb.ch"
#line 171 "symb.ch"
        varLevel -> InsertRemove(var);
#line 171 "symb.ch"
    else 
#line 171 "symb.ch"
#line 173 "symb.ch"
        varLevel -> Insert(var);
#line 173 "symb.ch"
    
#line 173 "symb.ch"
#line 174 "symb.ch"
    
#line 174 "symb.ch"
#line 174 "symb.ch"
}
#line 174 "symb.ch"

#line 183 "symb.ch"

#line 183 "symb.ch"
void SymbolTable::RemoveVar ( const PTREE &var )
#line 183 "symb.ch"
{
#line 183 "symb.ch"
#line 183 "symb.ch"
    int _nextVal ;
    
#line 183 "symb.ch"
#line 186 "symb.ch"
    if ( pvSize == 0 ) 
#line 186 "symb.ch"
#line 187 "symb.ch"
        return ;
    
#line 187 "symb.ch"
#line 188 "symb.ch"
    pvCurrentLevel -> Remove(var);
#line 188 "symb.ch"
#line 189 "symb.ch"
    
#line 189 "symb.ch"
#line 189 "symb.ch"
}
#line 189 "symb.ch"

#line 200 "symb.ch"

#line 200 "symb.ch"
PTREE SymbolTable::GetVar ( int index, int level )
#line 200 "symb.ch"
{
#line 200 "symb.ch"
#line 200 "symb.ch"
    int _nextVal ;
    
#line 200 "symb.ch"
#line 203 "symb.ch"
    CheckValidity();
#line 203 "symb.ch"
#line 206 "symb.ch"
    if ( (int)level >= Size() || index < 0 || index >= (**(pvTable + level)).Size() ) 
#line 206 "symb.ch"
#line 207 "symb.ch"
        return (PTREE)0 ;
    
#line 207 "symb.ch"
#line 210 "symb.ch"
    return (**(pvTable + level))[index];
    
#line 210 "symb.ch"
#line 211 "symb.ch"
    
#line 211 "symb.ch"
#line 211 "symb.ch"
}
#line 211 "symb.ch"

#line 220 "symb.ch"

#line 220 "symb.ch"
void SymbolTable::RemoveVar ( int index, int level )
#line 220 "symb.ch"
{
#line 220 "symb.ch"
#line 220 "symb.ch"
    int _nextVal ;
    
#line 220 "symb.ch"
#line 223 "symb.ch"
    CheckValidity();
#line 223 "symb.ch"
#line 226 "symb.ch"
    if ( (int)level >= Size() ) 
#line 226 "symb.ch"
#line 227 "symb.ch"
        return ;
    
#line 227 "symb.ch"
#line 230 "symb.ch"
    (**(pvTable + level)).Erase(index);
#line 230 "symb.ch"
#line 231 "symb.ch"
    
#line 231 "symb.ch"
#line 231 "symb.ch"
}
#line 231 "symb.ch"

#line 248 "symb.ch"

#line 248 "symb.ch"
PTREE SymbolTable::GetVar ( const char *var, int startLevel )
#line 248 "symb.ch"
{
#line 248 "symb.ch"
#line 248 "symb.ch"
    int _nextVal ;
    
#line 248 "symb.ch"
#line 251 "symb.ch"
    CheckValidity();
#line 251 "symb.ch"
#line 254 "symb.ch"
    if ( !var || !*var ) {
#line 254 "symb.ch"
#line 255 "symb.ch"
                                PTREE   nullTree ;
#line 255 "symb.ch"
                                
#line 255 "symb.ch"
#line 256 "symb.ch"
                                return nullTree ;
                                
#line 256 "symb.ch"
#line 257 "symb.ch"
                                
#line 257 "symb.ch"
#line 257 "symb.ch"
                              }
#line 257 "symb.ch"
#line 259 "symb.ch"
    Index   result = GetIndex(var, startLevel);
    
#line 259 "symb.ch"
#line 261 "symb.ch"
    return GetVar(result.index, result.level);
    
#line 261 "symb.ch"
#line 262 "symb.ch"
    
#line 262 "symb.ch"
#line 262 "symb.ch"
}
#line 262 "symb.ch"

#line 279 "symb.ch"

#line 279 "symb.ch"
SymbolTable::Index SymbolTable::GetIndex ( const char *var, int startLevel )
#line 279 "symb.ch"
{
#line 279 "symb.ch"
#line 279 "symb.ch"
    int _nextVal ;
    
#line 279 "symb.ch"
#line 282 "symb.ch"
    
    TabList **ptLevel ;
    
#line 282 "symb.ch"
#line 283 "symb.ch"
    PTREE   result ;
#line 283 "symb.ch"
    
#line 283 "symb.ch"
#line 284 "symb.ch"
    int resultIndex ;
    
#line 284 "symb.ch"
#line 285 "symb.ch"
    static const Index  noResult = { -10, -10 };
    
#line 285 "symb.ch"
#line 287 "symb.ch"
    CheckValidity();
#line 287 "symb.ch"
#line 288 "symb.ch"
    if ( !var || !*var ) 
#line 288 "symb.ch"
#line 289 "symb.ch"
        return noResult ;
    
#line 289 "symb.ch"
#line 292 "symb.ch"
    if ( startLevel < 0 ) 
#line 292 "symb.ch"
#line 293 "symb.ch"
        startLevel = pvSize - 1 ;
#line 293 "symb.ch"
#line 296 "symb.ch"
    if ( startLevel < 0 || startLevel > pvSize - 1 ) 
#line 296 "symb.ch"
#line 297 "symb.ch"
        return noResult ;
    
#line 297 "symb.ch"
#line 300 "symb.ch"
    ptLevel = pvTable + startLevel ;
#line 300 "symb.ch"
#line 303 "symb.ch"
    pvLastLevel = startLevel ;
#line 303 "symb.ch"
#line 304 "symb.ch"
#line 304 "symb.ch"
    for (; ptLevel >= pvTable ; ptLevel--, pvLastLevel-- ) {
#line 304 "symb.ch"
#line 305 "symb.ch"
                                                                if ( (resultIndex = (*ptLevel) -> GetIndex(var)) >= 0 ) {
#line 305 "symb.ch"
#line 306 "symb.ch"
                                                                                                                                Index result = { pvLastLevel, resultIndex };
                                                                                                                                
#line 306 "symb.ch"
#line 307 "symb.ch"
                                                                                                                                return result ;
                                                                                                                                
#line 307 "symb.ch"
#line 308 "symb.ch"
                                                                                                                                
#line 308 "symb.ch"
#line 308 "symb.ch"
                                                                                                                                }
#line 308 "symb.ch"
#line 309 "symb.ch"
                                                                
#line 309 "symb.ch"
#line 309 "symb.ch"
                                                               }
#line 309 "symb.ch"
    
#line 309 "symb.ch"
#line 312 "symb.ch"
    return noResult ;
    
#line 312 "symb.ch"
#line 313 "symb.ch"
    
#line 313 "symb.ch"
#line 313 "symb.ch"
}
#line 313 "symb.ch"

#line 330 "symb.ch"

#line 330 "symb.ch"
SymbolTable::Index SymbolTable::GetFirstIndex ( const char *var, int startLevel )
#line 330 "symb.ch"
{
#line 330 "symb.ch"
#line 330 "symb.ch"
    int _nextVal ;
    
#line 330 "symb.ch"
#line 333 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 333 "symb.ch"
#line 335 "symb.ch"
    CheckValidity();
#line 335 "symb.ch"
#line 338 "symb.ch"
    
    Index   result = GetIndex(var, startLevel);
    
#line 338 "symb.ch"
#line 340 "symb.ch"
    if ( result.index < 0 ) 
#line 340 "symb.ch"
#line 341 "symb.ch"
        return noResult ;
    
#line 341 "symb.ch"
#line 344 "symb.ch"
    
    int index = result.index ;
    
#line 344 "symb.ch"
#line 345 "symb.ch"
    int trailingIndex = index ;
    
#line 345 "symb.ch"
#line 347 "symb.ch"
    while ( index >= 0 ) {
#line 347 "symb.ch"
#line 348 "symb.ch"
                            {
#line 348 "symb.ch"
#line 349 "symb.ch"
                                if ( VString(Value((*GetTabList(result.level))[index])) == var ) {
#line 349 "symb.ch"
#line 350 "symb.ch"
                                                                                                            trailingIndex = index ;
#line 350 "symb.ch"
#line 351 "symb.ch"
                                                                                                            index = index - 1 ;
#line 351 "symb.ch"
#line 352 "symb.ch"
                                                                                                            
#line 352 "symb.ch"
#line 352 "symb.ch"
                                                                                                          } else 
#line 352 "symb.ch"
#line 353 "symb.ch"
                                    break ;
                                    
#line 353 "symb.ch"
                                
#line 353 "symb.ch"
#line 354 "symb.ch"
                                
#line 354 "symb.ch"
#line 354 "symb.ch"
                            }
                            
#line 354 "symb.ch"
#line 355 "symb.ch"
                            
#line 355 "symb.ch"
#line 355 "symb.ch"
                           }
#line 355 "symb.ch"
#line 356 "symb.ch"
    result.index = trailingIndex ;
#line 356 "symb.ch"
#line 357 "symb.ch"
    return result ;
    
#line 357 "symb.ch"
#line 358 "symb.ch"
    
#line 358 "symb.ch"
#line 358 "symb.ch"
}
#line 358 "symb.ch"

#line 374 "symb.ch"

#line 374 "symb.ch"
SymbolTable::Index SymbolTable::GetNextIndex ( const char *var, Index startIndex )
#line 374 "symb.ch"
{
#line 374 "symb.ch"
#line 374 "symb.ch"
    int _nextVal ;
    
#line 374 "symb.ch"
#line 377 "symb.ch"
    
    static const Index  noResult = { -10, -10 };
    
#line 377 "symb.ch"
#line 379 "symb.ch"
    CheckValidity();
#line 379 "symb.ch"
#line 382 "symb.ch"
    if ( startIndex.level < 0 || startIndex.level >= Size() ) 
#line 382 "symb.ch"
#line 383 "symb.ch"
        return noResult ;
    
#line 383 "symb.ch"
#line 384 "symb.ch"
    TabList & tabListFirst = *GetTabList(startIndex.level);
#line 384 "symb.ch"
#line 386 "symb.ch"
    int index = startIndex.index + 1 ;
    
#line 386 "symb.ch"
#line 389 "symb.ch"
    if ( index >= 0 && index < tabListFirst.Size() && !strcmp(VString(Value(tabListFirst [index])), var) ) {
#line 389 "symb.ch"
#line 390 "symb.ch"
                                                                                                                        startIndex.index = index ;
#line 390 "symb.ch"
#line 391 "symb.ch"
                                                                                                                        return startIndex ;
                                                                                                                        
#line 391 "symb.ch"
#line 392 "symb.ch"
                                                                                                                        
#line 392 "symb.ch"
#line 392 "symb.ch"
                                                                                                                       } else 
#line 392 "symb.ch"
    if ( startIndex.level > 0 ) {
#line 392 "symb.ch"
#line 393 "symb.ch"
                                    return GetFirstIndex(var, startIndex.level - 1);
                                    
#line 393 "symb.ch"
#line 394 "symb.ch"
                                    
#line 394 "symb.ch"
#line 394 "symb.ch"
                                   }
#line 394 "symb.ch"
#line 395 "symb.ch"
    return noResult ;
    
#line 395 "symb.ch"
#line 396 "symb.ch"
    
#line 396 "symb.ch"
#line 396 "symb.ch"
}
#line 396 "symb.ch"

#line 396 "symb.ch"
#line 396 "symb.ch"
static void symb_Anchor () { int i = 1;} 
#line 396 "symb.ch"
/*Well done my boy */ 
#line 396 "symb.ch"
