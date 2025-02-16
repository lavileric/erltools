/// 
/// @file DecompFile.h
/// 
/// @brief DecompFile.h
/// 
#ifndef DECOMP_FILE_FILE
    /// 
    /// @def  DECOMP_FILE_FILE
    /// 
    /// @brief  DECOMP_FILE_FILE
    /// 
#   define DECOMP_FILE_FILE 
#   pragma none
#   include "smtoken.h"
#   include "Protector.h"
    
    /// 
    /// @class  DecompFile
    /// 
    /// @brief  DecompFile
    /// 
    
    class DecompFile {
        
        public :
        
            /// 
            /// @fn DecompFile::DecompFile () 
            /// 
            /// @brief DecompFile
            /// 
            DecompFile () {}
            
            /// 
            /// @fn virtual DecompFile::~DecompFile () 
            /// 
            /// @brief DecompFile
            /// 
            virtual ~DecompFile () {}
            
            /// 
            virtual void ChopTree ( PTREE, int = 0 ) {}
            
            /// 
            /// @fn void    DecompFile::ChopTree (EString filePath, PTREE tree, int funcAlone = 0) 
            /// 
            /// @brief ChopTree
            /// 
            /// @param [in] filePath  
            /// @param [in] tree      
            /// @param [in] funcAlone 
            /// 
            virtual void ChopTree ( EString filePath, PTREE tree, int funcAlone = 0 )
            {
                
                // protect output 
                Protector<int>  protector (output) ;
                
                output =  _open(filePath.c_str(), O_CREAT | O_RDWR | O_BINARY | O_TRUNC, 0666 /*S_IWRITE | S_IREAD*/ );
                
                // if file is opened dump tree
                if ( output > 0 ) {
                    try {
                        
                        // dump the tree
                        ChopTree(tree, funcAlone);

                        Flush();
                    } catch ( ... ) {}
                    
                    // close file
                    _close(output);
                }
            }
            
            /// 
            /// @fn void    DecompFile::ChopTreeFile (EString filePath, PTREE tree, int funcAlone = 0) 
            /// 
            /// @brief ChopTreeFile
            /// 
            /// @param [in,out] filePath  
            /// @param [in,out] tree      
            /// @param [in]     funcAlone 
            /// 
            virtual void ChopTreeFile ( EString filePath, PTREE tree, int funcAlone = 0 )
            {
                ChopTree(filePath, tree, funcAlone);
            }
    };
#endif
