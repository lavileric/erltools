#ifndef METALANG_PARSER
#define METALANG_PARSER

        extern int hasGotErrorMeta;
                  extern "C" { extern char * theFileName;}
                   extern "C" { PPTREE ReadInclude(PPTREE,int);}
                   #ifdef IN
                   #undef IN
                   #endif
    


#ifdef __cplusplus
#include "pretty.h"
typedef int (pretty::** _FUNC_MEMB_METALANG) ();
class metalang: public pretty,public virtual Parser {
    public :
    
    static int init ; 
    
    metalang () {
        ptTokenArray = _tokenArray;
        ptTokenFuncArray =(_FUNC_MEMB_METALANG) _tokenFuncArray;
        ptTokenNbFuncArray = _tokenNbFuncArray;
        InitConst ();
        cDef = 0 ;
        keepSpace = 0 ;
        
    }
    
    ~metalang () {}
    
    virtual void AsLanguage () { SwitchLang("metalang");}
    
    virtual void * rootGrammar () { return (void *) this;}
    virtual int Lex() ;
    virtual int LexAsitContent() ;
    virtual int LexComment() ;
    virtual int LexEndLine() ;
    virtual int LexMeta() ;
    virtual PPTREE asit ( int error_free) ;
    virtual PPTREE condition ( int error_free) ;
    virtual PPTREE debut_proc ( int error_free) ;
    virtual PPTREE declaration ( int error_free) ;
    virtual PPTREE definition ( int error_free) ;
    virtual PPTREE end_key ( int error_free) ;
    virtual PPTREE expr ( int error_free) ;
    virtual PPTREE func_call ( int error_free) ;
    virtual PPTREE func_follow ( int error_free) ;
    virtual PPTREE gen_param ( int error_free) ;
    virtual PPTREE grammar_use ( int error_free) ;
    virtual PPTREE langage ( int error_free) ;
    virtual PPTREE main_entry ( int error_free) ;
    virtual PPTREE maketree_follow ( int error_free) ;
    virtual PPTREE one_condition ( int error_free) ;
    virtual PPTREE parse_entry ( int error_free) ;
    virtual PPTREE pattern_rec ( int error_free) ;
    virtual PPTREE see_follow ( int error_free) ;
    virtual PPTREE seel_stat ( int error_free) ;
    virtual PPTREE set ( int error_free) ;
    virtual PPTREE storel_stat ( int error_free) ;
    virtual PPTREE take_follow ( int error_free) ;
    virtual PPTREE takel_stat ( int error_free) ;
    
    
    int cDef;
    int keepSpace;
    static signed char * _tokenArray [25];
    static int (metalang::*(_tokenFuncArray [25])) ();
    static int _tokenNbFuncArray [25];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        SET =   97 ,
        INTER =     96 ,
        FORGET_SYNTAXIQUE =     95 ,
        RECOVER =   94 ,
        RESETLEX =  93 ,
        BEGINNING =     92 ,
        DPOI =  91 ,
        SWITCH =    90 ,
        ELSE =  89 ,
        THEN =  88 ,
        UNTIL =     87 ,
        WITHOUT_CONTEXT =   86 ,
        DO =    85 ,
        WITH_CONTEXT =  84 ,
        BREAK =     83 ,
        RECOGNIZE_STRING =  82 ,
        FORGET =    81 ,
        RECOVERL =  80 ,
        FORGETL =   79 ,
        RESETL =    78 ,
        AT_BEGINNING =  77 ,
        CASE =  76 ,
        WHILE =     75 ,
        IF =    74 ,
        REPEAT =    73 ,
        WITHOUT =   72 ,
        WITH =  71 ,
        STORE_COMMENT_LINE =    70 ,
        RETURN =    69 ,
        COND =  68 ,
        EQUAL =     67 ,
        EGAL =  66 ,
        IN_CONTEXT =    65 ,
        CONTEXT =   64 ,
        POIN =  63 ,
        BEGIN =     62 ,
        GLOBAL =    61 ,
        GRAMMAR_USE =   60 ,
        NIL =   59 ,
        EXCLA =     58 ,
        TOKEN =     57 ,
        FUNC =  56 ,
        SKIP =  55 ,
        CONSTANT =  54 ,
        VIRG =  53 ,
        CFER =  52 ,
        TREE_ARITY =    51 ,
        DECLARE =   50 ,
        PVIR =  49 ,
        AND =   48 ,
        OR =    47 ,
        ASIT =  46 ,
        AFERAFER =  45 ,
        STOREL =    44 ,
        COUV =  43 ,
        LANGUAGE =  42 ,
        USE =   41 ,
        ADDLIST =   40 ,
        REPLACETREE =   39 ,
        MAKETREE =  38 ,
        STRINGLEX =     37 ,
        EXCL =  36 ,
        DIES =  35 ,
        PFER =  34 ,
        END =   33 ,
        LEXDEFINE =     32 ,
        DEFINE =    31 ,
        DEFAULT =   30 ,
        POUV =  29 ,
        IN =    28 ,
        TAKEL =     27 ,
        SEEL =  26 ,
        NOT =   25 ,
        TAKE =  24 ,
        SEE =   23 ,
        AOUVAOUV =  22 ,
        END_LINE =  21 ,
        ASIT_CONTENT =  20 ,
        NUMB =  19 ,
        CHARACTER =     18 ,
        STRING =    17 ,
        IDENT =     16 ,
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

extern metalang * parser_metalang;

#endif
#define SET_metalang    97
#define INTER_metalang  96
#define FORGET_SYNTAXIQUE_metalang  95
#define RECOVER_metalang    94
#define RESETLEX_metalang   93
#define BEGINNING_metalang  92
#define DPOI_metalang   91
#define SWITCH_metalang     90
#define ELSE_metalang   89
#define THEN_metalang   88
#define UNTIL_metalang  87
#define WITHOUT_CONTEXT_metalang    86
#define DO_metalang     85
#define WITH_CONTEXT_metalang   84
#define BREAK_metalang  83
#define RECOGNIZE_STRING_metalang   82
#define FORGET_metalang     81
#define RECOVERL_metalang   80
#define FORGETL_metalang    79
#define RESETL_metalang     78
#define AT_BEGINNING_metalang   77
#define CASE_metalang   76
#define WHILE_metalang  75
#define IF_metalang     74
#define REPEAT_metalang     73
#define WITHOUT_metalang    72
#define WITH_metalang   71
#define STORE_COMMENT_LINE_metalang     70
#define RETURN_metalang     69
#define COND_metalang   68
#define EQUAL_metalang  67
#define EGAL_metalang   66
#define IN_CONTEXT_metalang     65
#define CONTEXT_metalang    64
#define POIN_metalang   63
#define BEGIN_metalang  62
#define GLOBAL_metalang     61
#define GRAMMAR_USE_metalang    60
#define NIL_metalang    59
#define EXCLA_metalang  58
#define TOKEN_metalang  57
#define FUNC_metalang   56
#define SKIP_metalang   55
#define CONSTANT_metalang   54
#define VIRG_metalang   53
#define CFER_metalang   52
#define TREE_ARITY_metalang     51
#define DECLARE_metalang    50
#define PVIR_metalang   49
#define AND_metalang    48
#define OR_metalang     47
#define ASIT_metalang   46
#define AFERAFER_metalang   45
#define STOREL_metalang     44
#define COUV_metalang   43
#define LANGUAGE_metalang   42
#define USE_metalang    41
#define ADDLIST_metalang    40
#define REPLACETREE_metalang    39
#define MAKETREE_metalang   38
#define STRINGLEX_metalang  37
#define EXCL_metalang   36
#define DIES_metalang   35
#define PFER_metalang   34
#define END_metalang    33
#define LEXDEFINE_metalang  32
#define DEFINE_metalang     31
#define DEFAULT_metalang    30
#define POUV_metalang   29
#define IN_metalang     28
#define TAKEL_metalang  27
#define SEEL_metalang   26
#define NOT_metalang    25
#define TAKE_metalang   24
#define SEE_metalang    23
#define AOUVAOUV_metalang   22
#define END_LINE_metalang   21
#define ASIT_CONTENT_metalang   20
#define NUMB_metalang   19
#define CHARACTER_metalang  18
#define STRING_metalang     17
#define IDENT_metalang  16
#define GOTO_REL_metalang   15
#define GOTO_metalang   14
#define STR_metalang    13
#define UNMARK_metalang     12
#define MARK_metalang   11
#define TAB_VIRT_metalang   10
#define TAB_metalang    9
#define NEWLINE_metalang    8
#define ATTRIBUTS_metalang  7
#define PLUS____TIRETIRETIRETIRETIRETIRE_____metalang   6
#undef _Tak
#define _Tak(func) func 
#endif
