#ifndef SYMBOL_TABLE
#   define SYMBOL_TABLE 1
#   include "smtoken.h"
#   include "tablist.h"
    
    class SymbolTable {
        
        public :
        
            //constructor
            SymbolTable ()
                : pvSize(0),  pvSizeMax(0),  pvTable(0)
            {}
            
            // copy constructor
            // parameters :
            //              symbTab : copied symboltable
            SymbolTable (SymbolTable &symbTab) ;
            
            // destructor
            ~SymbolTable ()
            {
                TabList **ptLevel = pvTable + pvSize - 1 ; // pointer on a level
                
                // free each level
                for (; pvSize > 0 ; ptLevel--, pvSize-- ) {
                    delete *ptLevel ;
                }
                
                // free the table
                if ( pvTable ) {
                    free(pvTable);
                    pvTable = 0 ;
                }
            }
            
            // add a level to table with initalization
            // parameters :
            //              initList : list of variable decl
            // return : number of levels
            int     AddLevel (PPTREE initList = 0) ;
            
            // remove a level to the table
            int     RemoveLevel () ;
            
            // insert a var at the current level
            void    AddVar (const PTREE &) ;
            
            // remove a var at the current level
            void    RemoveVar (const PTREE &) ;
            
            // get a var definition
            PTREE GetVar ( const PTREE &tree, int startLevel = -1 )
            {
                return GetVar(Value(tree), startLevel);
            }
            
            PTREE operator[] ( PTREE tree )
            {
                return GetVar(tree);
            }
            
            // get a var definition by its name
            PTREE   GetVar (const char *name, int startLevel = -1) ;
            
            PTREE operator[] ( const char *name )
            {
                return GetVar(name, pvSize - 1);
            }
            
            // GetList : get a list at a given level
            TabList *GetTabList ( int level )
            {
                if ( level < pvSize && level >= 0 ) 
                    return pvTable [level];
                else 
                    return (TabList *)0 ;
            }
            
            // Size : get size of current table
            // return : the size
            int Size () const
            {
                return pvSize ;
            }
            
            // LastLevel : return level at which last search succeeded
            // return : the level
            int LastLevel () const
            {
                return pvLastLevel ;
            }
            
            // operator = 
            // parameters :
            //              symbTable : the copied table
            const SymbolTable   &operator= (SymbolTable &symbTable) ;
        
        private :
        
            TabList **pvTable ;       // the table
            TabList *pvCurrentLevel ; // current level of table
            int     pvSize ;          // current size of table
            int     pvSizeMax ;       // current allocated space for table
            int     pvLastLevel ;     // level of success of last search
    };
#endif
