#ifndef _PARSER
#define _PARSER



#ifdef __cplusplus
class : public virtual Parser {
    public :
    
    static int init ; 
    
     () {
        ptTokenArray = _tokenArray;
        ptTokenFuncArray = _tokenFuncArray;
        ptTokenNbFuncArray = _tokenNbFuncArray;
        InitConst ();
    }
    
    ~ () {}
    
    virtual void AsLanguage () { SwitchLang("");}
    
    virtual void * rootGrammar () { return (void *) this;}
    
    
    static signed char * _tokenArray [0];
    static int (::*(_tokenFuncArray [0])) ();
    static int _tokenNbFuncArray [0];

    signed char **ptTokenArray;
    int (::** ptTokenFuncArray) ();
    int *ptTokenNbFuncArray;

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        PLACE_HOLD_CONST
    } ; 
} ; 

extern  * parser_;

#endif
#undef _Tak
#define _Tak(func) func 
#endif
