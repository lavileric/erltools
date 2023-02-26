/// 
/// @file Cl.h
/// 
/// @brief Cl.h
/// 
#pragma Attachment

/// 
/// @def  bidon
/// 
/// @brief  bidon
/// 
#define bidon bidon
/// 
/// @def  bidon
/// 
/// @brief  bidon
/// 
#define bidon(x) +1

int e ;    ///< e
int a ;    ///< description of thevariable
           ///< description of the variable
int b, c ; ///< b c

/// 
/// @class  CL
/// 
/// @brief  CL description of the class
/// 

class CL {
    
    public :
    
        /// 
        /// @enum  BEAUTY
        /// 
        /// @brief  my own description of beauty
        ///      . some details
        /// 
        enum BEAUTY { nice, pretty, charming, witty };
        
        /// 
        /// @enum  BEAUTY
        /// 
        /// @brief  BEAUTY
        /// 
        enum class BEAUTY { nice, pretty, charming };
        
        /// 
        /// @fn CL::CL () 
        /// 
        /// @brief CL
        /// 
                CL () ;
        
        /// 
        /// @fn CL::~CL (int a) 
        /// 
        /// @brief CL
        /// 
        /// @param [in] a 
        /// 
                ~CL (int a) ;
        
        /// 
        /// @fn void    CL::funct (bool bl) 
        /// 
        /// @brief funct
        /// 
        /// @param [in] bl 
        /// 
        void    funct (bool bl) ;
        
        /// 
        /// @fn CL::operator= (int a) 
        /// 
        /// @brief =
        /// 
        /// @param [in] a 
        /// 
                operator= (int a) ;
        
        /// 
        /// @fn CL::operator< (int a, int b) 
        /// 
        /// @brief 
        /// 
        /// @param [in] a 
        /// @param [in] b 
        /// 
        operator< ( int a, int b ) {}
        
        /// 
        /// @fn void    CL::toto (int i) 
        /// 
        /// @brief toto explications sur CL
        /// 
        /// @param [in] i mon explicication sur le paramètres
        /// 
        void    toto (int i) ;
        int     a ; ///< comment 2
                    ///< comment
        int     b ; ///< comment
};

/// 
/// @class  DL
/// 
/// @brief  DL
/// 

class DL {
    
    public :
    
        /// 
        /// @fn DL::DL () 
        /// 
        /// @brief Ma propre description de la fonctions
        /// 
        DL () {}
        
        /// 
        /// @fn void    DL::toto (int i) 
        /// 
        /// @brief toto explications sur CL
        /// 
        /// @param [in] i mon explicication sur le paramètres
        /// 
        virtual void    toto (int i) ;
        
        /// 
        /// @fn float   DL::toto (float i) 
        /// 
        /// @brief toto explications sur CL
        /// 
        /// @param [in] i mon explicication sur le paramètres
        /// 
        /// @returns  float
        /// 
        virtual float   toto (float i) ;
        
        /// 
        /// @fn float   DL::titi (float *i) 
        /// 
        /// @brief titi explications sur CL
        /// 
        /// @param [in,out] i mon explicication sur le paramètres
        /// 
        /// @returns  float
        /// 
        virtual float   titi (float *i) ;
        
        /// 
        /// @fn int DL::tutu (float f) 
        /// 
        /// @brief tutu
        /// 
        /// @param [in] f 
        /// 
        /// @returns  int
        /// 
        virtual int tutu ( float f ) {}
};

/// 
/// @class  DLSon
/// 
/// @brief  DLSon
/// 

class DLSon : public DL {
    
    public :
    
        /// 
        /// @fn void    DLSon::toto (int i) 
        /// 
        //| @brief toto explications sur CL
        /// 
        //| @param [in] i mon explicication sur le paramètres
        /// 
        virtual void    toto (int i) ;
        
        /// 
        /// @fn float   DLSon::titi (float *i) 
        /// 
        //| @brief titi explications sur CL
        /// 
        //| @param [in,out] i mon explicication sur le paramètres
        /// 
        //| @returns  float
        /// 
        virtual float titi ( float *i )
        {
            return 0 ;
        }
        
        /// 
        /// @fn int DLSon::tutu (float f) 
        /// 
        //| @brief tutu
        /// 
        //| @param [in] f 
        /// 
        //| @returns  int
        /// 
        virtual int tutu (float f) ;
        
        /// 
        /// @fn static void DLSon::staticFunct (int i) 
        /// 
        /// @brief staticFunct
        /// 
        /// @param [in] i
        /// 
        static void staticFunct (int i) ;
        
        /// 
        /// @fn void    DLSon::NotTotallyDefined (char par0, int *par1, float *par2) 
        /// 
        /// @brief NotTotallyDefined
        /// 
        /// @param [in]     par0 
        /// @param [in,out] par1 a comment on par1
        /// @param [in]     par2 
        /// 
        void        NotTotallyDefined (char par0, int *par1, float *par2) ;
};
