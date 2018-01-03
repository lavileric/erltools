language sgt;

#include "symb.h"

// copy constructor
// parameters :
//              symbTab :copied symboltable
SymbolTable::SymbolTable ( SymbolTable &symbTab )
    : pvSize(0),  pvSizeMax(0),  pvTable(0)
{
    
    PTREE   listVar ; // list of var at a level
    PTREE   symbol ;  // a var
    PTREE   type ;
    
    // do job at each level
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
        listVar =  symbTab.GetTabList(currLevel)->List();
        AddLevel();
        while ( (symbol = nextl(listVar)) ) {
            AddVar(CopyTree(symbol));
        }
    }
}

// copy constructor
// parameters :
//              symbTab : copied symboltable
const SymbolTable &SymbolTable::operator= ( SymbolTable &symbTab )
{
    
    PTREE   listVar ; // list of var at a level
    PTREE   symbol ;  // a var
    PTREE   type ;
    
    // clean table
    while ( pvSize ) 
        RemoveLevel();
    
    // do job at each level
    for ( int currLevel = 0 ; currLevel <= symbTab.Size() - 1 ; currLevel++ ) {
        listVar =  symbTab.GetTabList(currLevel)->List();
        AddLevel();
        while ( (symbol = nextl(listVar)) ) {
            AddVar(CopyTree(symbol));
        }
    }
    
    // return object
    return *this ;
}

// add a level to table with initalization
// parameters :
//              initList : list of variable decl
// return : number of levels
int SymbolTable::AddLevel ( PPTREE initList )
{
    
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

// remove a level from the table
int SymbolTable::RemoveLevel ()
{
    
    // if table is empty do nothing
    if ( !pvSize ) 
        return 0 ;
    
    // free current TabList
    pvSize-- ;
    delete *(pvTable + pvSize);
    if ( pvSize > 0 ) 
        pvCurrentLevel =  *(pvTable + pvSize - 1);
    
    // return current table size
    return pvSize ;
}

// insert a var at the current level
void SymbolTable::AddVar ( const PTREE &var )
{
    
    // if no level is present create one
    if ( pvSize == 0 ) 
        AddLevel();
    pvCurrentLevel->InsertRemove(var);
}

// remove a var at the current level
void SymbolTable::RemoveVar ( const PTREE &var )
{
    if ( pvSize == 0 ) 
        return ;
    pvCurrentLevel->Remove(var);
}

// get a var definition
// parameters :
//              var : the var to be searched
//              startLevel : level where to start
// return : the var
PTREE SymbolTable::GetVar ( const char *var, int startLevel )
{
    TabList **ptLevel ;
    PTREE   result ;
    
    // negative startlevel means to initialize it on top
    if ( startLevel < 0 ) 
        startLevel =  pvSize - 1 ;
    
    // if table is empty return NULL
    if ( startLevel > pvSize - 1 || !pvSize ) 
        return (PTREE)0 ;
    
    // initialize table pointer
    ptLevel     =  pvTable + startLevel ;
    
    // search all level in ascending order
    pvLastLevel =  startLevel ;
    for (; ptLevel >= pvTable ; ptLevel--, pvLastLevel-- ) {
        if ( (result = (**ptLevel)[var]) ) 
            return result ;
    }
    
    // if we have found nothing return NULL
    return (PTREE)0 ;
}


