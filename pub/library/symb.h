/// 
/// @file symb.h
/// 
/// @brief symb.h
/// 
#ifndef SYMBOL_TABLE
    /// 
    /// @def  SYMBOL_TABLE
    /// 
    /// @brief  SYMBOL_TABLE
    /// 
#   define SYMBOL_TABLE 1
#   include "smtoken.h"
#   include "tablist.h"
    /// 
    /// @def  TABLE_VALIDITY
    /// 
    /// @brief  TABLE_VALIDITY
    /// 
#   define TABLE_VALIDITY 3141592
    
    /// 
    /// @class  SymbolTable
    /// 
    /// @brief  SymbolTable
    /// 
    
    class SymbolTable {
        
        public :
        
            /// 
            /// @typedef  Index
            /// 
            /// @brief  Index
            /// 
            typedef struct {
                int level ; ///< level
                int index ; ///< index
            }   Index ;
            
            /// 
            /// @fn SymbolTable::SymbolTable () 
            /// 
            /// @brief SymbolTable
            /// 
            //constructor
            SymbolTable ()
                : pvSize(0),  pvSizeMax(0),  pvTable(0),  pvValidity(TABLE_VALIDITY)
            {}
            
            /// 
            /// @fn SymbolTable::SymbolTable (const SymbolTable &symbTab) 
            /// 
            /// @brief SymbolTable
            /// 
            /// @param [in] symbTab 
            /// 
            // copy constructor
            // parameters :
            //              symbTab : copied symboltable
            SymbolTable (const SymbolTable &symbTab) ;
            
            /// 
            /// @fn SymbolTable::~SymbolTable () 
            /// 
            /// @brief SymbolTable
            /// 
            // destructor
            ~SymbolTable ()
            {
                CheckValidity();
                
                // clear table
                Clear();
                
                // free the table
                if ( pvTable ) {
                    free(pvTable);
                    pvTable =  0 ;
                }
                pvValidity =  ~0 ;
            }
            
            /// 
            /// @fn void    SymbolTable::Clear () 
            /// 
            /// @brief Clear
            /// 
            // remove every symbol in the table
            void Clear ()
            {
                CheckValidity();
                
                // --
                if ( pvSize <= 0 ) 
                    return ;
                else {
                    while ( pvSize > 0 ) 
                        RemoveLevel();
                }
            }
            
            /// 
            /// @fn int SymbolTable::AddLevel (PPTREE initList = 0) 
            /// 
            /// @brief AddLevel
            /// 
            /// @param [in,out] initList 
            /// 
            /// @returns  int
            /// 
            // add a level to table with initalization
            // parameters :
            //              initList : list of variable decl
            // return : number of levels
            int     AddLevel (PPTREE initList = 0) ;
            
            /// 
            /// @fn int SymbolTable::RemoveLevel () 
            /// 
            /// @brief RemoveLevel
            /// 
            /// @returns  int
            /// 
            // remove a level to the table
            int     RemoveLevel () ;
            
            // insert a var at the current level
            void    AddVar (const PTREE &, bool remove = true) ;
            
            // remove a var at the current level
            void    RemoveVar (const PTREE &) ;
            
            /// 
            /// @fn PTREE   SymbolTable::GetVar (const PTREE &tree, int startLevel = -1) 
            /// 
            /// @brief GetVar
            /// 
            /// @param [in] tree       
            /// @param [in] startLevel 
            /// 
            /// @returns  PTREE
            /// 
            // get a var definition
            PTREE GetVar ( const PTREE &tree, int startLevel = -1 )
            {
                return GetVar(Value(tree), startLevel);
            }
            
            /// 
            /// @fn PTREE   SymbolTable::operator[] (PTREE tree) 
            /// 
            /// @brief []
            /// 
            /// @param [in,out] tree 
            /// 
            /// @returns  PTREE
            /// 
            PTREE operator[] ( PTREE tree )
            {
                return GetVar(tree);
            }
            
            /// 
            /// @fn PTREE   SymbolTable::GetVar (const char *name, int startLevel = -1) 
            /// 
            /// @brief GetVar
            /// 
            /// @param [in] name       
            /// @param [in] startLevel 
            /// 
            /// @returns  PTREE
            /// 
            // get a var definition by its name
            PTREE   GetVar (const char *name, int startLevel = -1) ;
            
            /// 
            /// @fn PTREE   SymbolTable::GetVar (int index, int level) 
            /// 
            /// @brief GetVar
            /// 
            /// @param [in] index 
            /// @param [in] level 
            /// 
            /// @returns  PTREE
            /// 
            PTREE   GetVar (int index, int level) ;
            
            /// 
            /// @fn void    SymbolTable::RemoveVar (int index, int level) 
            /// 
            /// @brief RemoveVar
            /// 
            /// @param [in] index 
            /// @param [in] level 
            /// 
            void    RemoveVar (int index, int level) ;
            
            /// 
            /// @fn SymbolTable::Index  SymbolTable::GetIndex (const char *name, int startLevel = -1) 
            /// 
            /// @brief GetIndex
            /// 
            /// @param [in] name       
            /// @param [in] startLevel 
            /// 
            /// @returns  SymbolTable::Index
            /// 
            // get a var definition by its name
            Index   GetIndex (const char *name, int startLevel = -1) ;
            
            /// 
            /// @fn SymbolTable::Index  SymbolTable::GetFirstIndex (const char *name, int startLevel = -1) 
            /// 
            /// @brief GetFirstIndex
            /// 
            /// @param [in] name       
            /// @param [in] startLevel 
            /// 
            /// @returns  SymbolTable::Index
            /// 
            Index   GetFirstIndex (const char *name, int startLevel = -1) ;
            
            /// 
            /// @fn SymbolTable::Index  SymbolTable::GetNextIndex (const char *name, SymbolTable::Index index) 
            /// 
            /// @brief GetNextIndex
            /// 
            /// @param [in]     name  
            /// @param [in,out] index 
            /// 
            /// @returns  SymbolTable::Index
            /// 
            Index   GetNextIndex (const char *name, Index index) ;
            
            /// 
            /// @fn PTREE   SymbolTable::operator[] (const char *name) 
            /// 
            /// @brief []
            /// 
            /// @param [in] name 
            /// 
            /// @returns  PTREE
            /// 
            PTREE operator[] ( const char *name )
            {
                CheckValidity();
                
                // 
                return GetVar(name, Size() - 1);
            }
            
            /// 
            /// @fn TabList *SymbolTable::GetTabList (int level) const 
            /// 
            /// @brief GetTabList
            /// 
            /// @param [in] level 
            /// 
            /// @returns  TabList
            /// 
            // GetList : get a list at a given level
            TabList *GetTabList ( int level ) const
            {
                CheckValidity();
                
                // --
                if ( level < Size() && level >= 0 ) 
                    return pvTable [level];
                else 
                    return (TabList *)0 ;
            }
            
            /// 
            /// @fn int SymbolTable::Size () const 
            /// 
            /// @brief Size
            /// 
            /// @returns  int
            /// 
            // Size : get size of current table
            // return : the size
            int Size () const
            {
                CheckValidity();
                
                //  -- 
                return pvSize ;
            }
            
            /// 
            /// @fn int SymbolTable::LastLevel () const 
            /// 
            /// @brief LastLevel
            /// 
            /// @returns  int
            /// 
            // LastLevel : return level at which last search succeeded
            // return : the level
            int LastLevel () const
            {
                CheckValidity();
                
                // --
                return pvLastLevel ;
            }
            
            /// 
            /// @fn const SymbolTable   &SymbolTable::operator= (const SymbolTable &symbTable) 
            /// 
            /// @brief =
            /// 
            /// @param [in] symbTable 
            /// 
            /// @returns  const SymbolTable
            /// 
            // operator = 
            // parameters :
            //              symbTable : the copied table
            const SymbolTable   &operator= (const SymbolTable &symbTable) ;
            
            /// 
            /// @fn void    SymbolTable::CheckValidity () const 
            /// 
            /// @brief CheckValidity
            /// 
            void CheckValidity () const
            {
                if ( !Valid() && SymbolTable::throwOn ) 
                    throw 3 ;
            }
            
            /// 
            /// @fn bool    SymbolTable::Valid () const 
            /// 
            /// @brief Valid
            /// 
            /// @returns  bool
            /// 
            bool Valid () const
            {
                return pvValidity == TABLE_VALIDITY ;
            }
            
            static bool throwOn ; ///< throwOn
        
        private :
        
            TabList         **pvTable ;       ///< pvTable
            
            // the table
            TabList         *pvCurrentLevel ; ///< pvCurrentLevel
                                              // current level of table
            int             pvSize ;          ///< pvSize
                                              // current size of table
            int             pvSizeMax ;       ///< pvSizeMax
                                              // current allocated space for table
            int             pvLastLevel ;     ///< pvLastLevel
                                              // level of success of last search
            unsigned int    pvValidity ;      ///< pvValidity
    };
#endif
