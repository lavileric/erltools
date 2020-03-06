#ifndef CONFIG_PARSER
#define CONFIG_PARSER

 extern char * theLanguage;


#ifdef __cplusplus
class config: public virtual Parser {
    public :
    
    static int init ; 
    
    config () {
        ptTokenArray = _tokenArray;
        ptTokenFuncArray = _tokenFuncArray;
        ptTokenNbFuncArray = _tokenNbFuncArray;
        InitConst ();
    }
    
    ~config () {}
    
    virtual void AsLanguage () { SwitchLang("config");}
    
    virtual void * rootGrammar () { return (void *) this;}
    virtual int Lex() ;
    virtual PPTREE langage ( int error_free) ;
    virtual PPTREE main_entry ( int error_free) ;
    virtual PPTREE parse_entry ( int error_free) ;
    
    
    static signed char * _tokenArray [3];
    static int (config::*(_tokenFuncArray [3])) ();
    static int _tokenNbFuncArray [3];

    signed char **ptTokenArray;
    int (config::** ptTokenFuncArray) ();
    int *ptTokenNbFuncArray;

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        CHARACTER =     8 ,
        FOO_UPP =   7 ,
        FOO_LOW =   6 ,
        PLACE_HOLD_CONST
    } ; 
} ; 

extern config * parser_config;

#endif
#define CHARACTER_config    8
#define FOO_UPP_config  7
#define FOO_LOW_config  6
#undef _Tak
#define _Tak(func) func 
#endif
