#ifndef METALANG_PARSER
#define METALANG_PARSER

        extern int hasGotErrorMeta;
                  extern char * theFileName; 
                     PPTREE ReadInclude(PPTREE,int,bool); 
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
        COND =  83 ,
        EQUAL =     82 ,
        EGAL =  81 ,
        IN_CONTEXT =    80 ,
        CONTEXT =   79 ,
        POIN =  78 ,
        GLOBAL =    77 ,
        GRAMMAR_USE =   76 ,
        NIL =   75 ,
        EXCLA =     74 ,
        TOKEN =     73 ,
        FUNC =  72 ,
        CONSTANT =  71 ,
        VIRG =  70 ,
        CFER =  69 ,
        TREE_ARITY =    68 ,
        PVIR =  67 ,
        AND =   66 ,
        OR =    65 ,
        ASIT =  64 ,
        AFERAFER =  63 ,
        COUV =  62 ,
        MAKETREE =  61 ,
        STRINGLEX =     60 ,
        EXCL =  59 ,
        DIES =  58 ,
        PFER =  57 ,
        END =   56 ,
        USE =   55 ,
        BREAK =     54 ,
        RECOGNIZE_STRING =  53 ,
        FORGET =    52 ,
        RECOVERL =  51 ,
        FORGETL =   50 ,
        RESETL =    49 ,
        AT_BEGINNING =  48 ,
        STOREL =    47 ,
        CASE =  46 ,
        BEGIN =     45 ,
        WHILE =     44 ,
        IF =    43 ,
        REPEAT =    42 ,
        WITHOUT =   41 ,
        WITH =  40 ,
        ADDLIST =   39 ,
        REPLACETREE =   38 ,
        SKIP =  37 ,
        STORE_COMMENT_LINE =    36 ,
        RETURN =    35 ,
        DEFAULT =   34 ,
        POUV =  33 ,
        AOUVAOUV =  32 ,
        IN =    31 ,
        TAKEL =     30 ,
        SEEL =  29 ,
        NOT =   28 ,
        TAKE =  27 ,
        SEE =   26 ,
        DECLARE =   25 ,
        LANGUAGE =  24 ,
        LEXDEFINE =     23 ,
        DEFINE =    22 ,
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
#define COND_metalang   83
#define EQUAL_metalang  82
#define EGAL_metalang   81
#define IN_CONTEXT_metalang     80
#define CONTEXT_metalang    79
#define POIN_metalang   78
#define GLOBAL_metalang     77
#define GRAMMAR_USE_metalang    76
#define NIL_metalang    75
#define EXCLA_metalang  74
#define TOKEN_metalang  73
#define FUNC_metalang   72
#define CONSTANT_metalang   71
#define VIRG_metalang   70
#define CFER_metalang   69
#define TREE_ARITY_metalang     68
#define PVIR_metalang   67
#define AND_metalang    66
#define OR_metalang     65
#define ASIT_metalang   64
#define AFERAFER_metalang   63
#define COUV_metalang   62
#define MAKETREE_metalang   61
#define STRINGLEX_metalang  60
#define EXCL_metalang   59
#define DIES_metalang   58
#define PFER_metalang   57
#define END_metalang    56
#define USE_metalang    55
#define BREAK_metalang  54
#define RECOGNIZE_STRING_metalang   53
#define FORGET_metalang     52
#define RECOVERL_metalang   51
#define FORGETL_metalang    50
#define RESETL_metalang     49
#define AT_BEGINNING_metalang   48
#define STOREL_metalang     47
#define CASE_metalang   46
#define BEGIN_metalang  45
#define WHILE_metalang  44
#define IF_metalang     43
#define REPEAT_metalang     42
#define WITHOUT_metalang    41
#define WITH_metalang   40
#define ADDLIST_metalang    39
#define REPLACETREE_metalang    38
#define SKIP_metalang   37
#define STORE_COMMENT_LINE_metalang     36
#define RETURN_metalang     35
#define DEFAULT_metalang    34
#define POUV_metalang   33
#define AOUVAOUV_metalang   32
#define IN_metalang     31
#define TAKEL_metalang  30
#define SEEL_metalang   29
#define NOT_metalang    28
#define TAKE_metalang   27
#define SEE_metalang    26
#define DECLARE_metalang    25
#define LANGUAGE_metalang   24
#define LEXDEFINE_metalang  23
#define DEFINE_metalang     22
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
