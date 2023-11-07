/// 
/// @file decjson.h
/// 
/// @brief decjson.h
/// 
#pragma none

#ifndef INCLUDE_DECJSON
    /// 
    /// @def  INCLUDE_DECJSON
    /// 
    /// @brief  INCLUDE_DECISL
    /// 
#   define INCLUDE_DECJSON 
#   include "deccplus.h"
    
    /// 
    /// @class  DecompJson
    /// 
    /// @brief  DecompJson
    /// 
    
    class DecompJson : public DecompCplus {
        
        public :
        
            /// 
            /// @fn DecompJson::DecompJson () 
            /// 
            /// @brief DecompJson
            /// 
            DecompJson () {}
            
            /// 
            /// @fn virtual DecompJson::~DecompJson () 
            /// 
            /// @brief DecompJson
            /// 
            virtual ~DecompJson () {}
            
            static DecompJson   *ptDecomp ; ///< ptDecomp
            virtual PTREE       IntDecomp (const PTREE &, int = 0) ;
            virtual void        ChopTree (PTREE, int = 0) ;
    };
    extern "C" {
    
        /// 
        /// @fn void    decomp_json (PTREE tree) 
        /// 
        /// @brief decomp_json
        /// 
        /// @param [in,out] tree 
        /// 
        inline void decomp_json ( PTREE tree )
        {
            
            // call cplus since treatment of commentaries is  
            // only done there 
            DecompJson::ptDecomp -> Decomp(tree);
        }
    }
#endif
