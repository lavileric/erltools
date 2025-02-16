/// 
/// @file TreeIdentifier.h
/// 
/// @brief TreeIdentifier.h
/// 
#ifndef TREE_IDENTIFIER
    /// 
    /// @def  TREE_IDENTIFIER
    /// 
    /// @brief  TREE_IDENTIFIER
    /// 
#   define TREE_IDENTIFIER 
#   include "token.h"
#   include <map>
    /// 
    /// @def  TREE_IDENTIFIER_TYPE
    /// 
    /// @brief  TREE_IDENTIFIER_TYPE
    /// 
#   define TREE_IDENTIFIER_TYPE long long
    
    template <class STORED> 
        
        /// 
        /// @class  StoredElement
        /// 
        /// @brief  StoredElement
        /// 
        
        class StoredElement {
            
            public :
            
                /// 
                /// @fn StoredElement::StoredElement (PTREE &paramTree, STORED paramStored) 
                /// 
                /// @brief StoredElement
                /// 
                /// @param [in,out] paramTree   
                /// @param [in,out] paramStored 
                /// 
                StoredElement ( PTREE &paramTree, STORED paramStored )
                    : tree(paramTree),  stored(paramStored)
                {}
                
                PTREE   tree ;   ///< tree
                STORED  stored ; ///< stored
        };
#pragma nopretty
template <class STORED> 
using MapTreeIdentifier = std::map<TREE_IDENTIFIER_TYPE, std::vector<StoredElement<STORED> > >     ;
#pragma pretty
    
    /// 
    /// @class  TreeIdentifier
    /// 
    /// @brief  TreeIdentifier
    /// 
    
    class TreeIdentifier {
        
        public :
        
            /// 
            /// @fn TreeIdentifier::TreeIdentifier (PTREE pTree, bool computeClass = false) 
            /// 
            /// @brief TreeIdentifier
            /// 
            /// @param [in,out] pTree        
            /// @param [in]     computeClass 
            /// 
            TreeIdentifier ( PTREE pTree, bool computeClass = false )
            {
                pvTreeIdentifier =  0 ;
                ComputeTreeIdentifier(pvTreeIdentifier, pTree, computeClass);
            }
            
            /// 
            /// @fn void    TreeIdentifier::AddIdentifier (PTREE pTree, bool computeClass = false) 
            /// 
            /// @brief AddIdentifier
            /// 
            /// @param [in,out] pTree        
            /// @param [in]     computeClass 
            /// 
            void AddIdentifier ( PTREE pTree, bool computeClass = false )
            {
                ComputeTreeIdentifier(pvTreeIdentifier, pTree, computeClass);
            }
            
            /// 
            /// @fn TREE_IDENTIFIER_TYPE    TreeIdentifier::Key () const 
            /// 
            /// @brief Key
            /// 
            /// @returns  TREE_IDENTIFIER_TYPE
            /// 
            TREE_IDENTIFIER_TYPE Key () const
            {
                return pvTreeIdentifier ;
            }
            
            template <class STORED> 
                
                /// 
                /// @fn static bool TreeIdentifier::UniqueTree (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert = true) 
                /// 
                /// @brief UniqueTree
                /// 
                /// @param [in]     tree      
                /// @param [in,out] mapStored 
                /// @param [in]     stored    
                /// @param [in]     insert    
                /// 
                /// @returns  bool
                /// 
                static bool UniqueTree (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert = true) ;
            
            /// 
            /// @fn static bool TreeIdentifier::UniqueTree (PTREE &tree, MapTreeIdentifier<PTREE> &mapTree, bool insert = true) 
            /// 
            /// @brief UniqueTree
            /// 
            /// @param [in]     tree    
            /// @param [in,out] mapTree 
            /// @param [in]     insert  
            /// 
            /// @returns  bool
            /// 
            static  bool UniqueTree ( PTREE &tree, MapTreeIdentifier<PTREE> &mapTree, bool insert = true )
            {
                return UniqueTree<PTREE> (tree, mapTree, tree, insert);
            }
            
            template <class STORED> 
                
                /// 
                /// @fn static STORED   TreeIdentifier::Retrieve (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored) 
                /// 
                //| @brief Retrieve
                /// 
                //| @param [in]     tree      
                //| @param [in,out] mapStored 
                /// 
                //| @returns  STORED
                /// 
                static STORED   Retrieve (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored) ;
            
            template <class STORED> 
                
                /// 
                /// @fn static bool TreeIdentifier::Replace (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert = true) 
                /// 
                /// @brief Replace
                /// 
                /// @param [in]     tree      
                /// @param [in]     mapStored 
                /// @param [in,out] stored    
                /// @param [in]     insert    
                /// 
                /// @returns  STORED
                /// 
                static bool Replace (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert = true) ;
        
        private :
        
            /// 
            /// @fn void    TreeIdentifier::ComputeTreeIdentifier (TREE_IDENTIFIER_TYPE &TreeIdentifier, PTREE pTree, bool computeClass) 
            /// 
            /// @brief ComputeTreeIdentifier
            /// 
            /// @param [in,out] TreeIdentifier 
            /// @param [in,out] pTree          
            /// @param [in]     computeClass   
            /// 
            void                    ComputeTreeIdentifier (TREE_IDENTIFIER_TYPE &TreeIdentifier, PTREE pTree, bool computeClass) ;
            TREE_IDENTIFIER_TYPE    pvTreeIdentifier ; ///< pvTreeIdentifier
    };
    
    template <class STORED> 
        
        /// 
        /// @fn static STORED   Retrieve (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored) 
        /// 
        /// @brief Retrieve
        /// 
        /// @param [in]     tree      
        /// @param [in,out] mapStored 
        /// 
        /// @returns  STORED
        /// 
        static STORED   Retrieve (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored) ;
    template <class STORED> 
        /// 
        /// @fn bool    TreeIdentifier::UniqueTree (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert) 
        /// 
        //| @brief UniqueTree
        /// 
        //| @param [in]     tree      
        //| @param [in,out] mapStored 
        //| @param [in]     stored    
        //| @param [in]     insert    
        /// 
        //| @returns  bool
        /// 
        bool TreeIdentifier::UniqueTree ( const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert )
        {
            TreeIdentifier  treeIdentifier (tree, true) ;
            
            // if ident is already here not unique
            auto             iter = mapStored.find(treeIdentifier.Key());
            
            if ( iter != mapStored.end() ) {
                auto &currList = (*iter).second ;
                for ( auto &entry : currList ) {
                    if ( QCompareTree(entry.tree, tree, (PTREE)0, -1) ) 
                        return false ;
                }
                
                // tree was not found, insert it
                if ( insert ) {
                    PTREE   keyTree = copytree(tree);
                    currList.push_back(StoredElement<STORED> (keyTree, stored));
                }
            } else if ( insert ) {
                PTREE   keyTree = copytree(tree);
                mapStored [treeIdentifier.Key()].push_back(StoredElement<STORED> (keyTree, stored));
            }
            return true ;
        }
        
    template <class STORED> 
        /// 
        /// @fn bool    TreeIdentifier::Replace (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert) 
        /// 
        //| @brief Replace
        /// 
        //| @param [in]     tree      
        //| @param [in]     mapStored 
        /// @param [in,out] mapStored 
        //| @param [in,out] stored    
        //| @param [in]     insert    
        /// 
        //| @returns  STORED
        /// @returns  bool
        /// 
        bool TreeIdentifier::Replace ( const PTREE &tree, MapTreeIdentifier<STORED> &mapStored, STORED &stored, bool insert )
        {
            TreeIdentifier  treeIdentifier (tree, true) ;
            
            // if ident is already here replace
            auto             iter = mapStored.find(treeIdentifier.Key());
            
            if ( iter != mapStored.end() ) {
                auto &currList = (*iter).second ;
                for ( auto &entry : currList ) {
                    if ( QCompareTree(entry.tree, tree, (PTREE)0, -1) ) {
                        entry.stored =  stored ;
                        return true ;
                    }
                }
                
                // tree was not found, insert it
                if ( insert ) {
                    PTREE   keyTree = copytree(tree);
                    currList.push_back(StoredElement<STORED> (keyTree, stored));
                }
            } else if ( insert ) {
                PTREE   keyTree = copytree(tree);
                mapStored [treeIdentifier.Key()].push_back(StoredElement<STORED> (keyTree, stored));
            }
            return true ;
        }
        
    template <class STORED> 
        /// 
        /// @fn STORED  TreeIdentifier::Retrieve (const PTREE &tree, MapTreeIdentifier<STORED> &mapStored) 
        /// 
        //| @brief Retrieve
        /// 
        //| @param [in]     tree      
        //| @param [in,out] mapStored 
        /// 
        //| @returns  STORED
        /// 
        STORED TreeIdentifier::Retrieve ( const PTREE &tree, MapTreeIdentifier<STORED> &mapStored )
        {
            TreeIdentifier  treeIdentifier (tree, true) ;
            
            // if ident is already here not unique
            auto             iter = mapStored.find(treeIdentifier.Key());
            
            if ( iter != mapStored.end() ) {
                auto &currList = (*iter).second ;
                for ( auto &entry : currList ) {
                    if ( QCompareTree(entry.tree, tree, (PTREE)0, -1) ) 
                        return entry.stored ;
                }
            }
            
            // failure create an empty one
            STORED  stored ;
            
            return stored ;
        }
#endif
