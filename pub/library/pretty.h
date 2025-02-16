#ifndef PRETTY_PARSER
#define PRETTY_PARSER

         extern int hasGotError;
        #ifdef STR
        #undef STR
        #endif
    


#ifdef __cplusplus
class pretty: public virtual Parser {
    public :
    
    static int init ; 
    
    pretty() { _InitArrays () ;}
    virtual void _InitArrays () {
        ptTokenArray = _tokenArray;
        ptTokenFuncArray = _tokenFuncArray;
        ptTokenNbFuncArray = _tokenNbFuncArray;
        InitConst ();
    }
    
    ~pretty () {}
    
    virtual void AsLanguage () { SwitchLang("pretty");}
    
    virtual void * rootGrammar () { return (void *) this;}
    virtual PPTREE bidon ( int error_free) ;
    virtual PPTREE parse_entry ( int error_free) ;
    
    
    static signed char * _tokenArray [2];
    static int (pretty::*(_tokenFuncArray [2])) ();
    static int _tokenNbFuncArray [2];

    signed char **ptTokenArray;
    int (pretty::** ptTokenFuncArray) ();
    int *ptTokenNbFuncArray;

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        GOTO_REL =  15 ,
        GOTO =  14 ,
        STR =   13 ,
        UNMARK =    12 ,
        MARK =  11 ,
        TAB_VIRT =  10 ,
        TAB =   9 ,
        NEWLINE =   8 ,
        ATTRIBUTS =     7 ,
        PLUS____TIRETIRETIRETIRETIRETIRE____ =  6 ,
        PLACE_HOLD_CONST
    } ; 
} ; 

extern pretty * parser_pretty;

#endif
#define GOTO_REL_pretty     15
#define GOTO_pretty     14
#define STR_pretty  13
#define UNMARK_pretty   12
#define MARK_pretty     11
#define TAB_VIRT_pretty     10
#define TAB_pretty  9
#define NEWLINE_pretty  8
#define ATTRIBUTS_pretty    7
#define PLUS____TIRETIRETIRETIRETIRETIRE_____pretty     6
#undef _Tak
#define _Tak(func) func 
#endif
