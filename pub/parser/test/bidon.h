#ifndef BIDON_PARSER
#define BIDON_PARSER 
#ifdef __cplusplus

class bidon {
    
    public :
    
        static int  init ;
        
        bidon ()
        {
            ptTokenArray = _tokenArray ;
            ptTokenFuncArray = _tokenFuncArray ;
            ptTokenNbFuncArray = _tokenNbFuncArray ;
            InitConst();
            aha = 0 ;
        }
        
        virtual void *rootGrammar ()
        {
            return (void *)this ;
        }
        
        virtual int         Lex () ;
        virtual PPTREE      toto (int error_free) ;
        int                 aha ;
        static signed char  *_tokenArray [1];
        static int          (bidon::*(_tokenFuncArray [1]))() ;
        static int          _tokenNbFuncArray [1];
        signed char         **ptTokenArray ;
        int                 (bidon::* *ptTokenFuncArray)() ;
        int                 *ptTokenNbFuncArray ;
        virtual int         SortKeyWord (int ret) ;
        virtual int         UpSortKeyWord (int ret) ;
        virtual void        InitConst () ;
        enum constants { BIDON = 6, PLACE_HOLD_CONST };
};
extern bidon    *parser_bidon ;
#endif
#define BIDON_bidon 6
#undef _Tak
#define _Tak(func) func 
#endif
