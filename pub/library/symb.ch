/// 
/// @file symb.ch
/// 
/// @brief symb.ch
/// 
language sgt;

#include "symb.h"

bool    SymbolTable::throwOn = false ; ///< SymbolTable

/// 
/// @fn SymbolTable::SymbolTable (const SymbolTable &symbTab) 
/// 
/// @brief SymbolTable
/// 
/// @param [in] symbTab 
/// 
// copy constructor
// parameters :
//              symbTab :copied symboltable
SymbolTable::SymbolTable ( const SymbolTable &symbTab )
    : pvSize(0),  pvSizeMax(0),  pvTable(0)
{
    
    PTREE   listVar ; // list of var at a level
    PTREE   symbol ;  // a var
    PTREE   type ;
    
    pvValidity =  TABLE_VALIDITY ;
    
    // do job at each level
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
        listVar =  symbTab.GetTabList(currLevel) -> List();
        AddLevel();
        while ( (symbol = nextl(listVar)) ) {
            AddVar(CopyTree(symbol));
        }
    }
}

/// 
/// @fn const SymbolTable   &SymbolTable::operator= (const SymbolTable &symbTab) 
/// 
//| @brief =
/// 
/// @param [in] symbTab 
//| #### param [in] symbTable 
/// 
//| @returns  const SymbolTable
/// 
// copy constructor
// parameters :
//              symbTab : copied symboltable
const SymbolTable &SymbolTable::operator= ( const SymbolTable &symbTab )
{
    CheckValidity();
    
    PTREE   listVar ; // list of var at a level
    PTREE   symbol ;  // a var
    PTREE   type ;
    
    // clean table
    while ( pvSize ) 
        RemoveLevel();
    
    // do job at each level
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
        listVar =  symbTab.GetTabList(currLevel) -> List();
        AddLevel();
        while ( (symbol = nextl(listVar)) ) {
            AddVar(CopyTree(symbol));
        }
    }
    
    // return object
    return *this ;
}

/// 
/// @fn int SymbolTable::AddLevel (PPTREE initList) 
/// 
//| @brief AddLevel
/// 
//| @param [in,out] initList 
/// 
//| @returns  int
/// 
// add a level to table with initalization
// parameters :
//              initList : list of variable decl
// return : number of levels
int SymbolTable::AddLevel ( PPTREE initList )
{
    CheckValidity();
    
    // if table is full realloc some space
    if ( pvSize == pvSizeMax ) {
        if ( !pvTable ) 
            pvTable =  (TabList **)malloc((pvSizeMax = 10) * sizeof(TabList *));
        else {
            pvTable =  (TabList **)realloc(pvTable, (pvSizeMax += 10) * sizeof(TabList *));
        }
    }
    
    // alloc a new TabList at level +1
    pvCurrentLevel =  *(pvTable + pvSize) = new TabList(initList);
    
    // return current table size
    return ++pvSize ;
}

/// 
/// @fn int SymbolTable::RemoveLevel () 
/// 
//| @brief RemoveLevel
/// 
//| @returns  int
/// 
// remove a level from the table
int SymbolTable::RemoveLevel ()
{
    CheckValidity();
    
    // if table is empty do nothing
    if ( !pvSize ) 
        return 0 ;
    
    // free current TabList
    pvSize-- ;
    delete *(pvTable + pvSize);
    if ( pvSize > 0 ) 
        pvCurrentLevel =  *(pvTable + pvSize - 1);
    else 
        pvCurrentLevel =  0 ;
    
    // return current table size
    return pvSize ;
}

/// 
/// @fn void    SymbolTable::AddVar (const PTREE &var, bool remove) 
/// 
/// @brief AddVar
/// 
/// @param [in] var    
/// @param [in] remove 
/// 
// insert a var at the current level
void SymbolTable::AddVar ( const PTREE &var, bool remove )
{
    CheckValidity();
    
    // if no level is present create one
    if ( pvSize == 0 ) 
        AddLevel();
    if ( remove ) 
        pvCurrentLevel -> InsertRemove(var);
    else 
        pvCurrentLevel -> Insert(var);
}

/// 
/// @fn void    SymbolTable::RemoveVar (const PTREE &var) 
/// 
/// @brief RemoveVar
/// 
/// @param [in] var 
/// 
// remove a var at the current level
void SymbolTable::RemoveVar ( const PTREE &var )
{
    if ( pvSize == 0 ) 
        return ;
    pvCurrentLevel -> Remove(var);
}

/// 
/// @fn PTREE   SymbolTable::GetVar (int index, int level) 
/// 
//| @brief GetVar
/// 
//| @param [in] index 
//| @param [in] level 
/// 
//| @returns  PTREE
/// 
PTREE SymbolTable::GetVar ( int index, int level )
{
    CheckValidity();
    
    // check parameters
    if ( (int)level >= Size() || index < 0 || index >= (**(pvTable + level)).Size() ) 
        return (PTREE)0 ;
    
    // return value
    return (**(pvTable + level))[index];
}

/// 
/// @fn void    SymbolTable::RemoveVar (int index, int level) 
/// 
//| @brief RemoveVar
/// 
//| @param [in] index 
//| @param [in] level 
/// 
void SymbolTable::RemoveVar ( int index, int level )
{
    CheckValidity();
    
    // check parameters
    if ( (int)level >= Size() ) 
        return ;
    
    // remove value 
    (**(pvTable + level)).Erase(index);
}

/// 
/// @fn PTREE   SymbolTable::GetVar (const char *var, int startLevel) 
/// 
//| @brief GetVar
/// 
/// @param [in] var        
//| @param [in] startLevel 
//| #### param [in] name       
/// 
//| @returns  PTREE
/// 
// get a var definition
// parameters :
//              var : the var to be searched
//              startLevel : level where to start
// return : the var
PTREE SymbolTable::GetVar ( const char *var, int startLevel )
{
    CheckValidity();
    
    // if no name return nothing
    if ( !var || !*var ) {
        PTREE   nullTree ;
        return nullTree ;
    }
    
    Index   result = GetIndex(var, startLevel);
    
    return GetVar(result.index, result.level);
}

/// 
/// @fn SymbolTable::Index  SymbolTable::GetIndex (const char *var, int startLevel) 
/// 
//| @brief GetIndex
/// 
/// @param [in] var        
//| @param [in] startLevel 
//| #### param [in] name       
/// 
//| @returns  SymbolTable::Index
/// 
// get a var definition
// parameters :
//              var : the var to be searched
//              startLevel : level where to start
// return : the var
SymbolTable::Index SymbolTable::GetIndex ( const char *var, int startLevel )
{
    TabList             **ptLevel ;
    PTREE               result ;
    int                 resultIndex ;
    static const Index  noResult = { -10, -10 };
    
    CheckValidity();
    if ( !var || !*var ) 
        return noResult ;
    
    // negative startlevel means to initialize it on top
    if ( startLevel < 0 ) 
        startLevel =  pvSize - 1 ;
    
    // if table is empty return NULL
    if ( startLevel < 0 || startLevel > pvSize - 1 ) 
        return noResult ;
    
    // initialize table pointer
    ptLevel     =  pvTable + startLevel ;
    
    // search all level in ascending order
    pvLastLevel =  startLevel ;
    for (; ptLevel >= pvTable ; ptLevel--, pvLastLevel-- ) {
        if ( (resultIndex = (*ptLevel) -> GetIndex(var)) >= 0 ) {
            Index   result = { pvLastLevel, resultIndex };
            return result ;
        }
    }
    
    // if we have found nothing return NULL
    return noResult ;
}

/// 
/// @fn SymbolTable::Index  SymbolTable::GetFirstIndex (const char *var, int startLevel) 
/// 
//| @brief GetFirstIndex
/// 
/// @param [in] var        
//| @param [in] startLevel 
//| #### param [in] name       
/// 
//| @returns  SymbolTable::Index
/// 
// get a var definition
// parameters :
//              var : the var to be searched
//              startLevel : level where to start
// return : the var
SymbolTable::Index SymbolTable::GetFirstIndex ( const char *var, int startLevel )
{
    static const Index  noResult = { -10, -10 };
    
    CheckValidity();
    
    // get index 
    Index   result = GetIndex(var, startLevel);
    
    if ( result.index < 0 ) 
        return noResult ;
    
    // get to first
    int index = result.index ;
    int trailingIndex = index ;
    
    while ( index >= 0 ) {
        {
            if ( VString(Value((*GetTabList(result.level))[index])) == var ) {
                trailingIndex =  index ;
                index         =  index - 1 ;
            } else 
                break ;
        }
    }
    result.index =  trailingIndex ;
    return result ;
}

/// 
/// @fn SymbolTable::Index  SymbolTable::GetNextIndex (const char *var, Index startIndex) 
/// 
/// @brief GetNextIndex
/// 
/// @param [in]     var        
/// @param [in,out] startIndex 
/// 
/// @returns  SymbolTable::Index
/// 
// get a var definition
// parameters :
//              var : the var to be searched
//              startLevel : level where to start
// return : the var
SymbolTable::Index SymbolTable::GetNextIndex ( const char *var, Index startIndex )
{
    static const Index  noResult = { -10, -10 };
    
    CheckValidity();
    
    // --
    if ( startIndex.level < 0 || startIndex.level >= Size() ) 
        return noResult ;
    TabList & tabListFirst =  *GetTabList(startIndex.level);
    
    int index = startIndex.index + 1 ;
    
    // got to first
    if ( index >= 0 && index < tabListFirst.Size() && !strcmp(VString(Value(tabListFirst [index])), var) ) {
        startIndex.index =  index ;
        return startIndex ;
    } else if ( startIndex.level > 0 ) {
        return GetFirstIndex(var, startIndex.level - 1);
    }
    return noResult ;
}

