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
            virtual ~SymbolTable ()
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
            virtual void Clear ()
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
            virtual int     AddLevel (PPTREE initList = 0) ;
            
            /// 
            /// @fn int SymbolTable::RemoveLevel () 
            /// 
            /// @brief RemoveLevel
            /// 
            /// @returns  int
            /// 
            // remove a level to the table
            virtual int     RemoveLevel () ;
            
            // insert a var at the current level
            virtual void    AddVar (const PTREE &, bool remove = true) ;
            
            // remove a var at the current level
            virtual void    RemoveVar (const PTREE &) ;
            
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
            virtual PTREE GetVar ( const PTREE &tree, int startLevel = -1 )
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
            virtual PTREE operator[] ( PTREE tree )
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
            virtual PTREE   GetVar (const char *name, int startLevel = -1) ;
            
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
            virtual PTREE   GetVar (int index, int level) ;
            
            /// 
            /// @fn void    SymbolTable::RemoveVar (int index, int level) 
            /// 
            /// @brief RemoveVar
            /// 
            /// @param [in] index 
            /// @param [in] level 
            /// 
            virtual void    RemoveVar (int index, int level) ;
            
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
            virtual Index   GetIndex (const char *name, int startLevel = -1) ;
            
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
            virtual Index   GetFirstIndex (const char *name, int startLevel = -1) ;
            
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
            virtual Index   GetNextIndex (const char *name, Index index) ;
            
            /// 
            /// @fn PTREE   SymbolTable::operator[] (const char *name) 
            /// 
            /// @brief []
            /// 
            /// @param [in] name 
            /// 
            /// @returns  PTREE
            /// 
            virtual PTREE operator[] ( const char *name )
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
            virtual TabList *GetTabList ( int level ) const
            {
                CheckValidity();
                
                // --
                if ( level < Size() && level >= 0 ) 
                    return pvTable [level];
                else 
                    return (TabList *)0 ;
            }
            
            /// 
            /// @fn void    SymbolTable::SetTabList (TabList *list, int level) 
            /// 
            /// @brief SetTabList
            /// 
            /// @param [in,out] list
            /// @param [in] level
            /// 
            void SetTabList ( TabList *list, int level )
            {
                if ( level >= 0 ) {
                    while ( level >= Size() ) {
                        AddLevel();
                    }
                    pvTable [level] =  list ;
                }
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
            virtual int Size () const
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
            virtual int LastLevel () const
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
            virtual const SymbolTable   &operator= (const SymbolTable &symbTable) ;
            
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
            
            /// 
            /// @fn SymbolTable *SymbolTable::PExtTable () 
            /// 
            /// @brief PExtTable
            /// 
            /// @returns  SymbolTable
            /// 
            virtual SymbolTable *PExtTable ()
            {
                return 0 ;
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
