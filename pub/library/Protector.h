/// 
/// @file Protector.h
/// 
/// @brief Protector.h
/// 
#ifndef PROTECTOR_FILE
    /// 
    /// @def  PROTECTOR_FILE
    /// 
    /// @brief  PROTECTOR_FILE
    /// 
#   define PROTECTOR_FILE 
    
    template <class Protected> 
        
        /// 
        /// @class  Protector
        /// 
        /// @brief  Protector
        /// 
        
        class Protector {
            
            public :
            
                /// 
                /// @fn Protector::Protector (Protected &val) 
                /// 
                /// @brief Protector
                /// 
                /// @param [in,out] val 
                /// 
                Protector ( Protected &val )
                    : refVal(val),  store(val)
                {}
                
                /// 
                /// @fn Protector::Protector (Protected &val, Protected assignment) 
                /// 
                /// @brief Protector
                /// 
                /// @param [in,out] val        
                /// @param [in,out] assignment 
                /// 
                Protector ( Protected &val, Protected assignment )
                    : refVal(val),  store(val)
                {
                    val =  assignment ;
                }
                
                /// 
                /// @fn Protector::Protector (Protected &val, Protected assignment, Protected restore) 
                /// 
                /// @brief Protector
                /// 
                /// @param [in,out] val        
                /// @param [in,out] assignment 
                /// @param [in,out] restore    
                /// 
                Protector ( Protected &val, Protected assignment, Protected restore )
                    : refVal(val),  store(restore)
                {
                    val =  assignment ;
                }
                
                /// 
                /// @fn Protector::~Protector () 
                /// 
                /// @brief Protector
                /// 
                ~Protector ()
                {
                    refVal =  store ;
                }
                
                /// 
                /// @fn Protected   Protector::Stored () const 
                /// 
                /// @brief Stored
                /// 
                /// @returns  Protected
                /// 
                Protected Stored () const
                {
                    return store ;
                }
            
            private :
            
                Protected   &refVal ; ///< refVal
                Protected   store ;   ///< store
        };
    
    template <class Protected> 
        
        /// 
        /// @class  BlockEnd
        /// 
        /// @brief  BlockEnd
        /// 
        
        class BlockEnd : public Protector<Protected> {
            
            public :
            
                /// 
                /// @fn BlockEnd::BlockEnd (Protected &val, Protected assignment) 
                /// 
                /// @brief BlockedEnd
                /// 
                /// @param [in,out] val        
                /// @param [in,out] assignment 
                /// 
                BlockEnd ( Protected &val, Protected assignment )
                    : Protector<Protected> (val, val, assignment)
                {}
        };
#endif
