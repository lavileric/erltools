/// 
/// @file smarter.cc
/// 
/// @brief smarter.cc
/// 
int     bidule ; ///< bidule

/// 
/// @fn PTREE   Test1 (PTREE &assign, const PTREE &refInTree = 0, FindChain &findChain, bool multiple, int level
///    , bool searchExt = false, bool forSure = false, bool optional = true, bool addition = false, bool stopAtAddr = false) 
/// 
/// @brief	Test1 :
/// 		- perform
/// 
/// @param [in]     assign     The assignment.
/// @param [in]     refInTree  .
/// @param [in,out] findChain  List of examined values to protect against recursion
/// @param [in]     multiple   
/// @param [in]     level      
/// @param [in]     searchExt  
/// @param [in]     forSure    
/// @param [in]     optional   
/// @param [in]     addition   
/// @param [in]     stopAtAddr 
/// 
/// @returns	A PTREE.
/// 
PTREE   Test1 (PTREE &assign, const PTREE &refInTree = 0, FindChain &findChain, bool multiple, int level, bool searchExt = false, bool forSure = false
    , bool optional = true, bool addition = false, bool stopAtAddr = false) ;

/// 
/// @fn PTREE   Test1 (PTREE &assign, const PTREE &refInTree, FindChain &findChain, bool multiple, int level, bool searchExt
///    , bool forSure, bool optional, bool addition, bool stopAtAddr) 
/// 
//| @brief	Test1 :
//| 		- perform
/// 
//| @param [in]     assign     The assignment.
//| @param [in]     refInTree  .
//| @param [in,out] findChain  List of examined values to protect against recursion
//| @param [in]     multiple   
//| @param [in]     level      
//| @param [in]     searchExt  
//| @param [in]     forSure    
//| @param [in]     optional   
//| @param [in]     addition   
//| @param [in]     stopAtAddr 
/// 
//| @returns	A PTREE.
/// 
PTREE Test1 ( PTREE &assign, const PTREE &refInTree, FindChain &findChain, bool multiple, int level, bool searchExt, bool forSure, bool optional, bool addition
    , bool stopAtAddr )
  {}

namespace first {

    namespace second {
    
        /// 
        /// @fn char    *first::second::funct (int i) 
        /// 
        /// @brief funct
        /// 
        /// @param [in,out] i describing the parameter i
        /// 
        /// @returns  char
        /// 
        char    *funct (int i) ;
    }
    
    /// 
    /// @fn char    *first::second::funct (int i) 
    /// 
    //| @brief funct
    /// 
    //| @param [in,out] i describing the parameter i
    /// 
    //| @returns  char
    /// 
}

char *first::second::funct ( int i ) {}

/// 
/// @class  myClass
/// 
/// @brief  myClass
/// 

class myClass {
    /// 
    /// @fn char    *myClass::funct (int i) 
    /// 
    /// @brief funct
    /// 
    /// @param [in,out] i describing the parameter i in class
    /// 
    /// @returns  char
    /// 
    char    *funct (int i) ;
};

/// 
/// @fn char    *myClass::funct (int i) 
/// 
//| @brief funct
/// 
//| @param [in,out] i describing the parameter i in class
/// 
//| @returns  char
/// 
char *myClass::funct ( int i ) {}

/// 
/// @fn char    function (int param, char toto) 
/// 
/// @brief function
/// 
/// @param          param theParameter
/// @param [in,out] toto  
/// 
/// @returns  char
/// 
char    function (int param, char toto) ;

/// 
/// @fn EString newIdent (Value(aFunct [4])) 
/// 
/// @brief newIdent
/// 
/// @param [in,out] aFunct 
/// 
/// @returns  EString
/// 
EString newIdent (Value(aFunct [4])) ;
EString newIdent (aFunct [4]) ;

template <class Stored> 
    /// 
    /// @fn void    _INFLATE (std::vector<Stored> &_stoVector, unsigned int pos) 
    /// 
    /// @brief _INFLATE
    /// 
    /// @param [in,out] _stoVector 
    /// @param [in,out] pos        
    /// 
    /// @returns  void
    /// 
    inline void _INFLATE ( std::vector<Stored> &_stoVector, unsigned int pos )
    {
        auto size = _stoVector.size();
        
        if ( pos >= size ) {
            size =  size + 10 ;
            if ( size <= pos ) {
                size =  pos + 1 ;
            }
            _stoVector.resize(size);
        }
    }
