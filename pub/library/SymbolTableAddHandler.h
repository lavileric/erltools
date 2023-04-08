/// 
/// @file SymbolTableAddHandler.h
/// 
/// @brief SymbolTableAddHandler.h
/// 
#ifndef TABLE_HANDLER_FILE
    /// 
    /// @def  TABLE_HANDLER_FILE
    /// 
    /// @brief  TABLE_HANDLER_FILE
    /// 
#   define TABLE_HANDLER_FILE 
#   include "token.h"
#   include "tablist.h"
#   include "symb.h"
    
    /// 
    /// @class  SymbolTableAddHandler
    /// 
    /// @brief  SymbolTableAddHandler
    /// 
    
    class SymbolTableAddHandler {
        
        public :
        
            /// 
            /// @fn SymbolTableAddHandler::SymbolTableAddHandler (SymbolTable &symbTable) 
            /// 
            /// @brief SymbolTableAddHandler
            /// 
            /// @param [in,out] symbTable 
            /// 
            SymbolTableAddHandler ( SymbolTable &symbTable )
                : pvSymbolTable(symbTable)
            {
                pvTableSize =  symbTable.Size();
            }
            
            /// 
            /// @fn SymbolTableAddHandler::SymbolTableAddHandler (SymbolTable &symbTable, unsigned int startLevel) 
            /// 
            /// @brief SymbolTableAddHandler
            /// 
            /// @param [in,out] symbTable  
            /// @param [in]     startLevel 
            /// 
            SymbolTableAddHandler ( SymbolTable &symbTable, unsigned int startLevel )
                : pvSymbolTable(symbTable),  pvLevel(startLevel)
            {
                pvTableSize =  symbTable.Size() - pvLevel ;
            }
            
            /// 
            /// @fn SymbolTableAddHandler::~SymbolTableAddHandler () 
            /// 
            /// @brief SymbolTableAddHandler
            /// 
            ~SymbolTableAddHandler ()
            {
                Reset();
            }
            
            /// 
            /// @fn void    SymbolTableAddHandler::AddLevel (PPTREE initList = 0) 
            /// 
            /// @brief AddLevel
            /// 
            /// @param [in,out] initList 
            /// 
            void AddLevel ( PPTREE initList = 0 )
            {
                pvSymbolTable.AddLevel(initList);
                pvLevel++ ;
            }
            
            /// 
            /// @fn void    SymbolTableAddHandler::RemoveLevel () 
            /// 
            /// @brief RemoveLevel
            /// 
            void RemoveLevel ()
            {
                pvSymbolTable.RemoveLevel();
                pvLevel-- ;
            }
            
            /// 
            /// @fn unsigned int    SymbolTableAddHandler::Level () const 
            /// 
            /// @brief Level
            /// 
            /// @returns  unsigned int
            /// 
            unsigned int Level () const
            {
                return pvLevel ;
            }
            
            /// 
            /// @fn SymbolTableAddHandler   &SymbolTableAddHandler::Level (unsigned int level) 
            /// 
            /// @brief Level
            /// 
            /// @param [in] level 
            /// 
            /// @returns  SymbolTableAddHandler
            /// 
            SymbolTableAddHandler &Level ( unsigned int level )
            {
                pvLevel =  level ;
                return *this ;
            }
            
            /// 
            /// @fn void    SymbolTableAddHandler::Reset () 
            /// 
            /// @brief Reset
            /// 
            void Reset ()
            {
                while ( pvLevel > 0 ) {
                    pvLevel-- ;
                    pvSymbolTable.RemoveLevel();
                }
                if ( pvSymbolTable.Size() != pvTableSize ) {
                    int i = 1 ;
                }
            }
            
            /// 
            /// @fn SymbolTable &SymbolTableAddHandler::SymbTable () 
            /// 
            /// @brief SymbTable
            /// 
            /// @returns  SymbolTable
            /// 
            SymbolTable &SymbTable ()
            {
                return pvSymbolTable ;
            }
        
        private :
        
            unsigned int    pvLevel = 0 ;     ///< level
            SymbolTable     &pvSymbolTable ;  ///< pvSymbolTable
            int             pvTableSize = 0 ; ///< pvTableSize
    };
#endif
