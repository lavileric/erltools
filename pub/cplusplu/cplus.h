#ifndef CPLUS_PARSER
#define CPLUS_PARSER

         extern int hasGotError;
        #include "interf.h"
        #ifdef CONST
        #undef CONST
        #endif
        #ifdef ERROR
        #undef ERROR
        #endif
        #ifdef VOID
        #undef VOID
        #endif
        #ifdef DELETE
        #undef DELETE
        #endif
    


#ifdef __cplusplus
#include "pretty.h"
typedef int (pretty::** _FUNC_MEMB_CPLUS) ();
class cplus: public pretty,public virtual Parser {
    public :
    
    static int init ; 
    
    cplus() { _InitArrays () ;}
    virtual void _InitArrays () {
        ptTokenArray = _tokenArray;
        ptTokenFuncArray =(_FUNC_MEMB_CPLUS) _tokenFuncArray;
        ptTokenNbFuncArray = _tokenNbFuncArray;
        InitConst ();
        keepCarriage = 0 ;
        keepAll = 0 ;
        inside_signed = 0 ;
        inside_long = 0 ;
        switchContext = 0 ;
        noString = 0 ;
        
    }
    
    ~cplus () {}
    
    virtual void AsLanguage () { SwitchLang("cplus");}
    
    virtual void * rootGrammar () { return (void *) this;}
    virtual int Lex() ;
    virtual int LexComment() ;
    virtual int LexDefine() ;
    virtual int LexDefineName() ;
    virtual int LexEndLine() ;
    virtual int LexInclude() ;
    virtual int LexMeta() ;
    virtual int LexPragma() ;
    virtual int LexPragmaSmall() ;
    virtual int LexUndef() ;
    virtual int PushArgument() ;
    virtual int PushFunction() ;
    virtual PPTREE abstract_declarator ( int error_free) ;
    virtual PPTREE additive_expression ( int error_free) ;
    virtual PPTREE alloc_expression ( int error_free) ;
    virtual PPTREE allocation_expression ( int error_free) ;
    virtual PPTREE and_expression ( int error_free) ;
    virtual PPTREE arg_declarator ( int error_free) ;
    virtual PPTREE arg_declarator_base ( int error_free) ;
    virtual PPTREE arg_declarator_base_type ( int error_free) ;
    virtual PPTREE arg_declarator_expression ( int error_free) ;
    virtual PPTREE arg_declarator_followed ( int error_free) ;
    virtual PPTREE arg_declarator_followed_strict ( int error_free) ;
    virtual PPTREE arg_declarator_strict ( int error_free) ;
    virtual PPTREE arg_declarator_type ( int error_free) ;
    virtual PPTREE arg_typ_declarator ( int error_free) ;
    virtual PPTREE arg_typ_list ( int error_free) ;
    virtual PPTREE array_expression_follow ( int error_free) ;
    virtual PPTREE asm_call ( int error_free) ;
    virtual PPTREE asm_declaration ( int error_free) ;
    virtual PPTREE assignment_end ( int error_free) ;
    virtual PPTREE assignment_expression ( int error_free) ;
    virtual PPTREE attribute_call ( int error_free) ;
    virtual PPTREE base_specifier ( int error_free) ;
    virtual PPTREE base_specifier_elem ( int error_free) ;
    virtual PPTREE bidon ( int error_free) ;
    virtual PPTREE bit_field_decl ( int error_free) ;
    virtual PPTREE cast_expression ( int error_free) ;
    virtual PPTREE cast_expression_value ( int error_free) ;
    virtual PPTREE catch_unit ( int error_free) ;
    virtual PPTREE catch_unit_ansi ( int error_free) ;
    virtual PPTREE class_declaration ( int error_free) ;
    virtual PPTREE comment_eater ( int error_free) ;
    virtual PPTREE complete_class_name ( int error_free) ;
    virtual PPTREE compound_statement ( int error_free) ;
    virtual PPTREE conditional_expression ( int error_free) ;
    virtual PPTREE const_or_volatile ( int error_free) ;
    virtual PPTREE constan ( int error_free) ;
    virtual PPTREE ctor_initializer ( int error_free) ;
    virtual PPTREE data_decl_exotic ( int error_free) ;
    virtual PPTREE data_decl_sc_decl ( int error_free) ;
    virtual PPTREE data_decl_sc_decl_full ( int error_free) ;
    virtual PPTREE data_decl_sc_decl_short ( int error_free) ;
    virtual PPTREE data_decl_sc_ty_decl ( int error_free) ;
    virtual PPTREE data_decl_sc_ty_decl_full ( int error_free) ;
    virtual PPTREE data_decl_sc_ty_decl_short ( int error_free) ;
    virtual PPTREE data_declaration ( int error_free) ;
    virtual PPTREE data_declaration_for ( int error_free) ;
    virtual PPTREE data_declaration_for_full ( int error_free) ;
    virtual PPTREE data_declaration_for_short ( int error_free) ;
    virtual PPTREE data_declaration_strict ( int error_free) ;
    virtual PPTREE deallocation_expression ( int error_free) ;
    virtual PPTREE declarator ( int error_free) ;
    virtual PPTREE declarator_follow ( int error_free) ;
    virtual PPTREE declarator_list ( int error_free) ;
    virtual PPTREE declarator_list_init ( int error_free) ;
    virtual PPTREE declarator_value ( int error_free) ;
    virtual PPTREE define_dir ( int error_free) ;
    virtual PPTREE directive ( int error_free) ;
    virtual PPTREE end_pragma ( int error_free) ;
    virtual PPTREE end_pragma_managed ( int error_free) ;
    virtual PPTREE enum_declarator ( int error_free) ;
    virtual PPTREE enum_val ( int error_free) ;
    virtual PPTREE equality_expression ( int error_free) ;
    virtual PPTREE exception ( int error_free) ;
    virtual PPTREE exception_ansi ( int error_free) ;
    virtual PPTREE exception_list ( int error_free) ;
    virtual PPTREE exclusive_or_expression ( int error_free) ;
    virtual PPTREE expression ( int error_free) ;
    virtual PPTREE expression_for ( int error_free) ;
    virtual PPTREE ext_all ( int error_free) ;
    virtual PPTREE ext_all_ext ( int error_free) ;
    virtual PPTREE ext_all_no_linkage ( int error_free) ;
    virtual PPTREE ext_data_decl_sc_ty ( int error_free) ;
    virtual PPTREE ext_data_decl_sc_ty_full ( int error_free) ;
    virtual PPTREE ext_data_decl_sc_ty_short ( int error_free) ;
    virtual PPTREE ext_data_decl_simp ( int error_free) ;
    virtual PPTREE ext_data_declaration ( int error_free) ;
    virtual PPTREE ext_decl_dir ( int error_free) ;
    virtual PPTREE ext_decl_if_dir ( int error_free) ;
    virtual PPTREE ext_decl_ifdef_dir ( int error_free) ;
    virtual PPTREE for_statement ( int error_free) ;
    virtual PPTREE func_declaration ( int error_free) ;
    virtual PPTREE func_declarator ( int error_free) ;
    virtual PPTREE ident_mul ( int error_free) ;
    virtual PPTREE include_dir ( int error_free) ;
    virtual PPTREE inclusive_or_expression ( int error_free) ;
    virtual PPTREE initializer ( int error_free) ;
    virtual PPTREE inline_namespace ( int error_free) ;
    virtual PPTREE inside_declaration ( int error_free) ;
    virtual PPTREE inside_declaration1 ( int error_free) ;
    virtual PPTREE inside_declaration2 ( int error_free) ;
    virtual PPTREE inside_declaration_extension ( int error_free) ;
    virtual PPTREE label_beg ( int error_free) ;
    virtual PPTREE lambda ( int error_free) ;
    virtual PPTREE linkage_specification ( int error_free) ;
    virtual PPTREE logical_and_expression ( int error_free) ;
    virtual PPTREE logical_or_expression ( int error_free) ;
    virtual PPTREE long_type ( int error_free) ;
    virtual PPTREE macro ( int error_free) ;
    virtual PPTREE macro_extended ( int error_free) ;
    virtual PPTREE main_entry ( int error_free) ;
    virtual PPTREE member_declarator ( int error_free) ;
    virtual PPTREE message_map ( int error_free) ;
    virtual PPTREE multiplicative_expression ( int error_free) ;
    virtual PPTREE name_space ( int error_free) ;
    virtual PPTREE new_1 ( int error_free) ;
    virtual PPTREE new_2 ( int error_free) ;
    virtual PPTREE new_declarator ( int error_free) ;
    virtual PPTREE new_type_name ( int error_free) ;
    virtual PPTREE none_statement ( int error_free) ;
    virtual PPTREE operator_function_name ( int error_free) ;
    virtual PPTREE other_config ( int error_free) ;
    virtual PPTREE parameter_list ( int error_free) ;
    virtual PPTREE parameter_list_extended ( int error_free) ;
    virtual PPTREE parse_entry ( int error_free) ;
    virtual PPTREE pm_expression ( int error_free) ;
    virtual PPTREE postfix_expression ( int error_free) ;
    virtual PPTREE primary_expression ( int error_free) ;
    virtual PPTREE program ( int error_free) ;
    virtual PPTREE protect_declare ( int error_free) ;
    virtual PPTREE protected_array_declaration ( int error_free) ;
    virtual PPTREE ptr_operator ( int error_free) ;
    virtual PPTREE qualified_name ( int error_free) ;
    virtual PPTREE qualified_name_elem ( int error_free) ;
    virtual PPTREE quick_prog ( int error_free) ;
    virtual PPTREE quick_prog_elem ( int error_free) ;
    virtual PPTREE range_in_liste ( int error_free) ;
    virtual PPTREE range_modifier ( int error_free) ;
    virtual PPTREE range_modifier_function ( int error_free) ;
    virtual PPTREE range_modifier_ident ( int error_free) ;
    virtual PPTREE range_pragma ( int error_free) ;
    virtual PPTREE relational_expression ( int error_free) ;
    virtual PPTREE sc_specifier ( int error_free) ;
    virtual PPTREE shift_expression ( int error_free) ;
    virtual PPTREE short_long_int_char ( int error_free) ;
    virtual PPTREE signed_type ( int error_free) ;
    virtual PPTREE simple_ident ( int error_free) ;
    virtual PPTREE simple_type ( int error_free) ;
    virtual PPTREE simple_type_name ( int error_free) ;
    virtual PPTREE sizeof_type ( int error_free) ;
    virtual int specific() ;
    virtual PPTREE stat_all ( int error_free) ;
    virtual PPTREE stat_dir ( int error_free) ;
    virtual PPTREE stat_dir_switch ( int error_free) ;
    virtual PPTREE stat_if_dir ( int error_free) ;
    virtual PPTREE stat_ifdef_dir ( int error_free) ;
    virtual PPTREE statement ( int error_free) ;
    virtual PPTREE statement_expression ( int error_free) ;
    virtual PPTREE string_list ( int error_free) ;
    virtual PPTREE switch_elem ( int error_free) ;
    virtual PPTREE switch_list ( int error_free) ;
    virtual PPTREE template_type ( int error_free) ;
    virtual int the_exit() ;
    virtual PPTREE type_and_declarator ( int error_free) ;
    virtual PPTREE type_descr ( int error_free) ;
    virtual PPTREE type_name ( int error_free) ;
    virtual PPTREE type_specifier ( int error_free) ;
    virtual PPTREE type_specifier_without_param ( int error_free) ;
    virtual PPTREE typedef_and_declarator ( int error_free) ;
    virtual PPTREE unary_expression ( int error_free) ;
    virtual PPTREE unsigned_type ( int error_free) ;
    
    
    int keepCarriage;
    int keepAll;
    int inside_signed;
    int inside_long;
    int switchContext;
    int noString;
    static signed char * _tokenArray [160];
    static int (cplus::*(_tokenFuncArray [160])) ();
    static int _tokenNbFuncArray [160];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        TUNSIGNED =     376 ,
        BDECR =     375 ,
        BINCR =     374 ,
        ADDR =  373 ,
        NOT =   372 ,
        LNEG =  371 ,
        POS =   370 ,
        NEG =   369 ,
        PARAM_TYPE =    368 ,
        STRING_LIST =   367 ,
        LABEL =     366 ,
        THROW_ANSI =    365 ,
        ELSE =  364 ,
        DECL_TYPE =     363 ,
        CLASSNAME =     362 ,
        TIDENT =    361 ,
        TSIGNED =   360 ,
        TSHORT =    359 ,
        TCHAR =     358 ,
        TINT =  357 ,
        RSHI =  356 ,
        LSHI =  355 ,
        LT =    354 ,
        GT =    353 ,
        GEQU =  352 ,
        LEQU =  351 ,
        SPACE_ARROW =   350 ,
        TAB_DIRECTIVE =     349 ,
        ENUM_PARAMETERS_UNDER =     348 ,
        ENUM_VERT_VALUE =   347 ,
        PROTECTED_ARRAY_S_TYPEDEF =     346 ,
        PROTECTED_ARRAY_TYPEDEF =   345 ,
        PROTECTED_ARRAY_S =     344 ,
        PROTECTED_ARRAY =   343 ,
        PROTECT_MEMB =  342 ,
        LANGUAGE =  341 ,
        ELIPSIS_EXPRESSION =    340 ,
        EXP =   339 ,
        ADECR =     338 ,
        AINCR =     337 ,
        ARROW =     336 ,
        REF =   335 ,
        VARIADIC_EXPRESSION =   334 ,
        EXP_BRA =   333 ,
        EXP_LIST =  332 ,
        ARROW_MEMB =    331 ,
        DOT_MEMB =  330 ,
        POINETOI =  329 ,
        TIRESUPEETOI =  328 ,
        SUPESUPE =  327 ,
        INFEINFE =  326 ,
        SUPEEGAL =  325 ,
        INFEEGAL =  324 ,
        NONE =  323 ,
        NEW_DECLARATOR =    322 ,
        USING_NAMESPACE =   321 ,
        NAMESPACE_ALIAS =   320 ,
        REM =   319 ,
        DIV =   318 ,
        MUL =   317 ,
        POURC =     316 ,
        MESSAGE_MAP =   315 ,
        MACRO =     314 ,
        TDOUBLE =   313 ,
        TFLOAT =    312 ,
        TLONG =     311 ,
        OR =    310 ,
        VBARVBAR =  309 ,
        AND =   308 ,
        COMPOUND_EXT =  307 ,
        EXTERNAL =  306 ,
        MUTABLE =   305 ,
        TIRESUPE =  304 ,
        CAPTURE_ALL =   303 ,
        LAMBDA =    302 ,
        INLINE_NAMESPACE =  301 ,
        INITIALIZER =   300 ,
        LOR =   299 ,
        VBAR =  298 ,
        DELETE_FUNCTION =   297 ,
        FUNC =  296 ,
        ALL_OF =    295 ,
        EXTENSION =     294 ,
        __EXTENSION__ =     293 ,
        STAT_VOID =     292 ,
        TYPEDEF =   291 ,
        TEMPLATE_DECL =     290 ,
        SUPE =  289 ,
        CLASS_PARAM =   288 ,
        TEMPLATE =  287 ,
        EXP_SEQ =   286 ,
        LXOR =  285 ,
        CHAP =  284 ,
        EXCEPTION_LIST =    283 ,
        EXCEPTION_ANSI =    282 ,
        EXCEPTION =     281 ,
        NEQU =  280 ,
        EQU =   279 ,
        EXCLEGAL =  278 ,
        EGALEGAL =  277 ,
        ENUM_CLASS =    276 ,
        PRAGMA =    275 ,
        PARAMETERS =    274 ,
        FUNC_HEADER =   273 ,
        INDENT_FUNCTION_TYPE =  272 ,
        COMMENT_PLUS =  271 ,
        COMMENT_END =   270 ,
        COMMENT_MIDDLE =    269 ,
        COMMENT_START =     268 ,
        MARGIN_VALUE =  267 ,
        BRACE_ALIGN_VALUE =     266 ,
        DECL_ALIGN =    265 ,
        ASSIGN_ALIGN =  264 ,
        SINGLE_SWITCH_INDENT_VALUE =    263 ,
        SIMPLIFY_VALUE =    262 ,
        SIMPLIFY =  261 ,
        MODE_VALUE =    260 ,
        TAB_VALUE =     259 ,
        CONFIG =    258 ,
        NOT_MANAGED =   257 ,
        NO_PRETTY =     256 ,
        ALINE =     255 ,
        ERROR =     254 ,
        UNDEF =     253 ,
        TYP_AFF_BRA =   252 ,
        TYP_AFF_CALL =  251 ,
        MEMBER_DECLARATOR =     250 ,
        TYP_ARRAY =     249 ,
        FOR_DECLARATION =   248 ,
        DECLARATION =   247 ,
        CTOR_INITIALIZER =  246 ,
        BRACE_MARKER =  245 ,
        CTOR_INIT =     244 ,
        LONGLONG =  243 ,
        IUNLONGLONG =   242 ,
        IUNLONG =   241 ,
        IUN =   240 ,
        ILONGLONG =     239 ,
        ILONG =     238 ,
        RANGE_MODIFIER =    237 ,
        COND_AFF =  236 ,
        INTE =  235 ,
        COMPOUND =  234 ,
        CLASS_DECL =    233 ,
        AFER =  232 ,
        CATCH_ANSI =    231 ,
        EXCEPT_ANSI_ALL =   230 ,
        CAST =  229 ,
        TYP_BIT =   228 ,
        PROTECT =   227 ,
        BASE_LIST =     226 ,
        ATTRIBUTE_CALL =    225 ,
        XOR_AFF =   224 ,
        OR_AFF =    223 ,
        AND_AFF =   222 ,
        RSH_AFF =   221 ,
        LSH_AFF =   220 ,
        MIN_AFF =   219 ,
        PLU_AFF =   218 ,
        REM_AFF =   217 ,
        DIV_AFF =   216 ,
        MUL_AFF =   215 ,
        AFF =   214 ,
        ASM_CALL =  213 ,
        EXP_ARRAY =     212 ,
        VAR_LIST =  211 ,
        TYP_LIST =  210 ,
        TYP_AFF =   209 ,
        ABST_DECLARATOR =   208 ,
        DECLARATOR =    207 ,
        LAND =  206 ,
        INIT_NEW =  205 ,
        VIRG =  204 ,
        QUALIFIED =     203 ,
        MINUS =     202 ,
        TYP =   201 ,
        PFER =  200 ,
        DESTRUCT =  199 ,
        TYP_REF =   198 ,
        TYP_VARIADIC =  197 ,
        TYP_MOV =   196 ,
        TYP_ADDR =  195 ,
        INFE =  194 ,
        _TYPEDEF_PROTECTEDARRAY_S =     193 ,
        _TYPEDEF_PROTECTEDARRAY =   192 ,
        _PROTECTEDPOINTER_S =   191 ,
        _PROTECTEDPOINTER =     190 ,
        _PROTECTEDARRAY_S =     189 ,
        _PROTECTEDARRAY =   188 ,
        USING =     187 ,
        NAMESPACE =     186 ,
        CATCH =     185 ,
        DPOI =  184 ,
        PUBLIC =    183 ,
        PROTECTED =     182 ,
        PRIVATE =   181 ,
        CHAPEGAL =  180 ,
        VBAREGAL =  179 ,
        ETCOEGAL =  178 ,
        SUPESUPEEGAL =  177 ,
        INFEINFEEGAL =  176 ,
        TIREEGAL =  175 ,
        PLUSEGAL =  174 ,
        POURCEGAL =     173 ,
        ETOIEGAL =  172 ,
        EGAL =  171 ,
        ASM =   170 ,
        CFER =  169 ,
        COUV =  168 ,
        VA_ARG =    167 ,
        DELETE =    166 ,
        NEW =   165 ,
        SIZEOF =    164 ,
        TIRETIRE =  163 ,
        PLUSPLUS =  162 ,
        EXCL =  161 ,
        PLUS =  160 ,
        TIRE =  159 ,
        DEFAULT =   158 ,
        CASE =  157 ,
        TRY =   156 ,
        THROW =     155 ,
        FORALLSONS =    154 ,
        WHILE =     153 ,
        SWITCH =    152 ,
        RETURN =    151 ,
        PVIR =  150 ,
        IF =    149 ,
        FOR =   148 ,
        AOUV =  147 ,
        DO =    146 ,
        CONTINUE =  145 ,
        BREAK =     144 ,
        OPERATOR =  143 ,
        TILD =  142 ,
        ETCO =  141 ,
        POINPOINPOIN =  140 ,
        ETCOETCO =  139 ,
        ETOI =  138 ,
        POUV =  137 ,
        UNSIGNED =  136 ,
        SIGNED =    135 ,
        SHORT =     134 ,
        LONG =  133 ,
        CHAR =  132 ,
        INT =   131 ,
        DPOIDPOI =  130 ,
        VOID =  129 ,
        FLOAT =     128 ,
        DOUBLE =    127 ,
        DECLTYPE =  126 ,
        TYPENAME =  125 ,
        CLASS =     124 ,
        UNION =     123 ,
        STRUCT =    122 ,
        ENUM =  121 ,
        CONSTEXPR =     120 ,
        CONST =     119 ,
        FRIEND =    118 ,
        VIRTUAL =   117 ,
        INLINE =    116 ,
        __ASM__ =   115 ,
        __ATTRIBUTE__ =     114 ,
        VOLATILE =  113 ,
        REGISTER =  112 ,
        EXTERN =    111 ,
        STATIC =    110 ,
        AUTO =  109 ,
        FUNC_SPEC =     108 ,
        TRY_UPPER =     107 ,
        END_CATCH =     106 ,
        END_CATCH_ALL =     105 ,
        AND_CATCH =     104 ,
        CATCH_UPPER =   103 ,
        CATCH_ALL =     102 ,
        END_MESSAGE_MAP =   101 ,
        BEGIN_MESSAGE_MAP =     100 ,
        DECLARE_MESSAGE_MAP =   99 ,
        IMPLEMENT_SERIAL =  98 ,
        IMPLEMENT_DYNCREATE =   97 ,
        IMPLEMENT_DYNAMIC =     96 ,
        DECLARE_SERIAL =    95 ,
        DECLARE_DYNAMIC =   94 ,
        PUSH_FUNCTION =     93 ,
        PUSH_ARGUMENT =     92 ,
        UNDEF_CONTENT =     91 ,
        SMALL_PRAGMA_CONTENT =  90 ,
        PRAGMA_CONTENT =    89 ,
        PRAGMA_ENUM_VERT =  88 ,
        PRAGMA_SPACE_ARROW =    87 ,
        PRAGMA_PARAMETERS =     86 ,
        PRAGMA_PARAMETERS_UNDER =   85 ,
        PRAGMA_FUNC_HEADER =    84 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   83 ,
        PRAGMA_COMMENT_PLUS =   82 ,
        PRAGMA_COMMENT_END =    81 ,
        PRAGMA_COMMENT_MIDDLE =     80 ,
        PRAGMA_COMMENT_START =  79 ,
        PRAGMA_MARGIN =     78 ,
        PRAGMA_DECL_ALIGN =     77 ,
        PRAGMA_ASSIGN_ALIGN =   76 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   75 ,
        PRAGMA_SIMPLIFY =   74 ,
        PRAGMA_BRACE_ALIGN =    73 ,
        PRAGMA_MODE =   72 ,
        PRAGMA_RANGE =  71 ,
        PRAGMA_TAB =    70 ,
        PRAGMA_TAB_DIRECTIVE =  69 ,
        PRAGMA_CONFIG =     68 ,
        PRAGMA_NOT_MANAGED =    67 ,
        PRAGMA_MANAGED =    66 ,
        PRAGMA_NOPRETTY =   65 ,
        PRAGMA_PRETTY =     64 ,
        INCLUDE_LOCAL =     63 ,
        INCLUDE_SYS =   62 ,
        END_LINE =  61 ,
        DEFINE_NAME =   60 ,
        DEFINED_NOT_CONTINUED =     59 ,
        DEFINED_CONTINUED =     58 ,
        POINT =     57 ,
        SLAS =  56 ,
        SLASEGAL =  55 ,
        CARRIAGE_RETURN =   54 ,
        SHARP_VAL =     53 ,
        LINE_REFERENCE_DIR =    52 ,
        UNDEF_DIR =     51 ,
        DEFINE_DIR =    50 ,
        ERROR_DIR =     49 ,
        PRAGMA_DIR =    48 ,
        LINE_DIR =  47 ,
        ENDIF_DIR =     46 ,
        ELIF_DIR =  45 ,
        ELSE_DIR =  44 ,
        IF_DIR =    43 ,
        IFNDEF_DIR =    42 ,
        IFDEF_DIR =     41 ,
        INCLUDE_DIR =   40 ,
        OCTAL =     39 ,
        UOCTAL =    38 ,
        LOCTAL =    37 ,
        ULOCTAL =   36 ,
        LLOCTAL =   35 ,
        ULLOCTAL =  34 ,
        BINARY =    33 ,
        HEXA =  32 ,
        UHEXA =     31 ,
        LHEXA =     30 ,
        LLHEXA =    29 ,
        ULLHEXA =   28 ,
        ULHEXA =    27 ,
        FLOATVAL =  26 ,
        UINTEGER =  25 ,
        LINTEGER =  24 ,
        LLINTEGER =     23 ,
        ULLINTEGER =    22 ,
        ULINTEGER =     21 ,
        INTEGER =   20 ,
        CHARACT =   19 ,
        STRING =    18 ,
        DQUOTE =    17 ,
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

extern cplus * parser_cplus;

#endif
#define TUNSIGNED_cplus     376
#define BDECR_cplus     375
#define BINCR_cplus     374
#define ADDR_cplus  373
#define NOT_cplus   372
#define LNEG_cplus  371
#define POS_cplus   370
#define NEG_cplus   369
#define PARAM_TYPE_cplus    368
#define STRING_LIST_cplus   367
#define LABEL_cplus     366
#define THROW_ANSI_cplus    365
#define ELSE_cplus  364
#define DECL_TYPE_cplus     363
#define CLASSNAME_cplus     362
#define TIDENT_cplus    361
#define TSIGNED_cplus   360
#define TSHORT_cplus    359
#define TCHAR_cplus     358
#define TINT_cplus  357
#define RSHI_cplus  356
#define LSHI_cplus  355
#define LT_cplus    354
#define GT_cplus    353
#define GEQU_cplus  352
#define LEQU_cplus  351
#define SPACE_ARROW_cplus   350
#define TAB_DIRECTIVE_cplus     349
#define ENUM_PARAMETERS_UNDER_cplus     348
#define ENUM_VERT_VALUE_cplus   347
#define PROTECTED_ARRAY_S_TYPEDEF_cplus     346
#define PROTECTED_ARRAY_TYPEDEF_cplus   345
#define PROTECTED_ARRAY_S_cplus     344
#define PROTECTED_ARRAY_cplus   343
#define PROTECT_MEMB_cplus  342
#define LANGUAGE_cplus  341
#define ELIPSIS_EXPRESSION_cplus    340
#define EXP_cplus   339
#define ADECR_cplus     338
#define AINCR_cplus     337
#define ARROW_cplus     336
#define REF_cplus   335
#define VARIADIC_EXPRESSION_cplus   334
#define EXP_BRA_cplus   333
#define EXP_LIST_cplus  332
#define ARROW_MEMB_cplus    331
#define DOT_MEMB_cplus  330
#define POINETOI_cplus  329
#define TIRESUPEETOI_cplus  328
#define SUPESUPE_cplus  327
#define INFEINFE_cplus  326
#define SUPEEGAL_cplus  325
#define INFEEGAL_cplus  324
#define NONE_cplus  323
#define NEW_DECLARATOR_cplus    322
#define USING_NAMESPACE_cplus   321
#define NAMESPACE_ALIAS_cplus   320
#define REM_cplus   319
#define DIV_cplus   318
#define MUL_cplus   317
#define POURC_cplus     316
#define MESSAGE_MAP_cplus   315
#define MACRO_cplus     314
#define TDOUBLE_cplus   313
#define TFLOAT_cplus    312
#define TLONG_cplus     311
#define OR_cplus    310
#define VBARVBAR_cplus  309
#define AND_cplus   308
#define COMPOUND_EXT_cplus  307
#define EXTERNAL_cplus  306
#define MUTABLE_cplus   305
#define TIRESUPE_cplus  304
#define CAPTURE_ALL_cplus   303
#define LAMBDA_cplus    302
#define INLINE_NAMESPACE_cplus  301
#define INITIALIZER_cplus   300
#define LOR_cplus   299
#define VBAR_cplus  298
#define DELETE_FUNCTION_cplus   297
#define FUNC_cplus  296
#define ALL_OF_cplus    295
#define EXTENSION_cplus     294
#define __EXTENSION___cplus     293
#define STAT_VOID_cplus     292
#define TYPEDEF_cplus   291
#define TEMPLATE_DECL_cplus     290
#define SUPE_cplus  289
#define CLASS_PARAM_cplus   288
#define TEMPLATE_cplus  287
#define EXP_SEQ_cplus   286
#define LXOR_cplus  285
#define CHAP_cplus  284
#define EXCEPTION_LIST_cplus    283
#define EXCEPTION_ANSI_cplus    282
#define EXCEPTION_cplus     281
#define NEQU_cplus  280
#define EQU_cplus   279
#define EXCLEGAL_cplus  278
#define EGALEGAL_cplus  277
#define ENUM_CLASS_cplus    276
#define PRAGMA_cplus    275
#define PARAMETERS_cplus    274
#define FUNC_HEADER_cplus   273
#define INDENT_FUNCTION_TYPE_cplus  272
#define COMMENT_PLUS_cplus  271
#define COMMENT_END_cplus   270
#define COMMENT_MIDDLE_cplus    269
#define COMMENT_START_cplus     268
#define MARGIN_VALUE_cplus  267
#define BRACE_ALIGN_VALUE_cplus     266
#define DECL_ALIGN_cplus    265
#define ASSIGN_ALIGN_cplus  264
#define SINGLE_SWITCH_INDENT_VALUE_cplus    263
#define SIMPLIFY_VALUE_cplus    262
#define SIMPLIFY_cplus  261
#define MODE_VALUE_cplus    260
#define TAB_VALUE_cplus     259
#define CONFIG_cplus    258
#define NOT_MANAGED_cplus   257
#define NO_PRETTY_cplus     256
#define ALINE_cplus     255
#define ERROR_cplus     254
#define UNDEF_cplus     253
#define TYP_AFF_BRA_cplus   252
#define TYP_AFF_CALL_cplus  251
#define MEMBER_DECLARATOR_cplus     250
#define TYP_ARRAY_cplus     249
#define FOR_DECLARATION_cplus   248
#define DECLARATION_cplus   247
#define CTOR_INITIALIZER_cplus  246
#define BRACE_MARKER_cplus  245
#define CTOR_INIT_cplus     244
#define LONGLONG_cplus  243
#define IUNLONGLONG_cplus   242
#define IUNLONG_cplus   241
#define IUN_cplus   240
#define ILONGLONG_cplus     239
#define ILONG_cplus     238
#define RANGE_MODIFIER_cplus    237
#define COND_AFF_cplus  236
#define INTE_cplus  235
#define COMPOUND_cplus  234
#define CLASS_DECL_cplus    233
#define AFER_cplus  232
#define CATCH_ANSI_cplus    231
#define EXCEPT_ANSI_ALL_cplus   230
#define CAST_cplus  229
#define TYP_BIT_cplus   228
#define PROTECT_cplus   227
#define BASE_LIST_cplus     226
#define ATTRIBUTE_CALL_cplus    225
#define XOR_AFF_cplus   224
#define OR_AFF_cplus    223
#define AND_AFF_cplus   222
#define RSH_AFF_cplus   221
#define LSH_AFF_cplus   220
#define MIN_AFF_cplus   219
#define PLU_AFF_cplus   218
#define REM_AFF_cplus   217
#define DIV_AFF_cplus   216
#define MUL_AFF_cplus   215
#define AFF_cplus   214
#define ASM_CALL_cplus  213
#define EXP_ARRAY_cplus     212
#define VAR_LIST_cplus  211
#define TYP_LIST_cplus  210
#define TYP_AFF_cplus   209
#define ABST_DECLARATOR_cplus   208
#define DECLARATOR_cplus    207
#define LAND_cplus  206
#define INIT_NEW_cplus  205
#define VIRG_cplus  204
#define QUALIFIED_cplus     203
#define MINUS_cplus     202
#define TYP_cplus   201
#define PFER_cplus  200
#define DESTRUCT_cplus  199
#define TYP_REF_cplus   198
#define TYP_VARIADIC_cplus  197
#define TYP_MOV_cplus   196
#define TYP_ADDR_cplus  195
#define INFE_cplus  194
#define _TYPEDEF_PROTECTEDARRAY_S_cplus     193
#define _TYPEDEF_PROTECTEDARRAY_cplus   192
#define _PROTECTEDPOINTER_S_cplus   191
#define _PROTECTEDPOINTER_cplus     190
#define _PROTECTEDARRAY_S_cplus     189
#define _PROTECTEDARRAY_cplus   188
#define USING_cplus     187
#define NAMESPACE_cplus     186
#define CATCH_cplus     185
#define DPOI_cplus  184
#define PUBLIC_cplus    183
#define PROTECTED_cplus     182
#define PRIVATE_cplus   181
#define CHAPEGAL_cplus  180
#define VBAREGAL_cplus  179
#define ETCOEGAL_cplus  178
#define SUPESUPEEGAL_cplus  177
#define INFEINFEEGAL_cplus  176
#define TIREEGAL_cplus  175
#define PLUSEGAL_cplus  174
#define POURCEGAL_cplus     173
#define ETOIEGAL_cplus  172
#define EGAL_cplus  171
#define ASM_cplus   170
#define CFER_cplus  169
#define COUV_cplus  168
#define VA_ARG_cplus    167
#define DELETE_cplus    166
#define NEW_cplus   165
#define SIZEOF_cplus    164
#define TIRETIRE_cplus  163
#define PLUSPLUS_cplus  162
#define EXCL_cplus  161
#define PLUS_cplus  160
#define TIRE_cplus  159
#define DEFAULT_cplus   158
#define CASE_cplus  157
#define TRY_cplus   156
#define THROW_cplus     155
#define FORALLSONS_cplus    154
#define WHILE_cplus     153
#define SWITCH_cplus    152
#define RETURN_cplus    151
#define PVIR_cplus  150
#define IF_cplus    149
#define FOR_cplus   148
#define AOUV_cplus  147
#define DO_cplus    146
#define CONTINUE_cplus  145
#define BREAK_cplus     144
#define OPERATOR_cplus  143
#define TILD_cplus  142
#define ETCO_cplus  141
#define POINPOINPOIN_cplus  140
#define ETCOETCO_cplus  139
#define ETOI_cplus  138
#define POUV_cplus  137
#define UNSIGNED_cplus  136
#define SIGNED_cplus    135
#define SHORT_cplus     134
#define LONG_cplus  133
#define CHAR_cplus  132
#define INT_cplus   131
#define DPOIDPOI_cplus  130
#define VOID_cplus  129
#define FLOAT_cplus     128
#define DOUBLE_cplus    127
#define DECLTYPE_cplus  126
#define TYPENAME_cplus  125
#define CLASS_cplus     124
#define UNION_cplus     123
#define STRUCT_cplus    122
#define ENUM_cplus  121
#define CONSTEXPR_cplus     120
#define CONST_cplus     119
#define FRIEND_cplus    118
#define VIRTUAL_cplus   117
#define INLINE_cplus    116
#define __ASM___cplus   115
#define __ATTRIBUTE___cplus     114
#define VOLATILE_cplus  113
#define REGISTER_cplus  112
#define EXTERN_cplus    111
#define STATIC_cplus    110
#define AUTO_cplus  109
#define FUNC_SPEC_cplus     108
#define TRY_UPPER_cplus     107
#define END_CATCH_cplus     106
#define END_CATCH_ALL_cplus     105
#define AND_CATCH_cplus     104
#define CATCH_UPPER_cplus   103
#define CATCH_ALL_cplus     102
#define END_MESSAGE_MAP_cplus   101
#define BEGIN_MESSAGE_MAP_cplus     100
#define DECLARE_MESSAGE_MAP_cplus   99
#define IMPLEMENT_SERIAL_cplus  98
#define IMPLEMENT_DYNCREATE_cplus   97
#define IMPLEMENT_DYNAMIC_cplus     96
#define DECLARE_SERIAL_cplus    95
#define DECLARE_DYNAMIC_cplus   94
#define PUSH_FUNCTION_cplus     93
#define PUSH_ARGUMENT_cplus     92
#define UNDEF_CONTENT_cplus     91
#define SMALL_PRAGMA_CONTENT_cplus  90
#define PRAGMA_CONTENT_cplus    89
#define PRAGMA_ENUM_VERT_cplus  88
#define PRAGMA_SPACE_ARROW_cplus    87
#define PRAGMA_PARAMETERS_cplus     86
#define PRAGMA_PARAMETERS_UNDER_cplus   85
#define PRAGMA_FUNC_HEADER_cplus    84
#define PRAGMA_INDENT_FUNCTION_TYPE_cplus   83
#define PRAGMA_COMMENT_PLUS_cplus   82
#define PRAGMA_COMMENT_END_cplus    81
#define PRAGMA_COMMENT_MIDDLE_cplus     80
#define PRAGMA_COMMENT_START_cplus  79
#define PRAGMA_MARGIN_cplus     78
#define PRAGMA_DECL_ALIGN_cplus     77
#define PRAGMA_ASSIGN_ALIGN_cplus   76
#define PRAGMA_SINGLE_SWITCH_INDENT_cplus   75
#define PRAGMA_SIMPLIFY_cplus   74
#define PRAGMA_BRACE_ALIGN_cplus    73
#define PRAGMA_MODE_cplus   72
#define PRAGMA_RANGE_cplus  71
#define PRAGMA_TAB_cplus    70
#define PRAGMA_TAB_DIRECTIVE_cplus  69
#define PRAGMA_CONFIG_cplus     68
#define PRAGMA_NOT_MANAGED_cplus    67
#define PRAGMA_MANAGED_cplus    66
#define PRAGMA_NOPRETTY_cplus   65
#define PRAGMA_PRETTY_cplus     64
#define INCLUDE_LOCAL_cplus     63
#define INCLUDE_SYS_cplus   62
#define END_LINE_cplus  61
#define DEFINE_NAME_cplus   60
#define DEFINED_NOT_CONTINUED_cplus     59
#define DEFINED_CONTINUED_cplus     58
#define POINT_cplus     57
#define SLAS_cplus  56
#define SLASEGAL_cplus  55
#define CARRIAGE_RETURN_cplus   54
#define SHARP_VAL_cplus     53
#define LINE_REFERENCE_DIR_cplus    52
#define UNDEF_DIR_cplus     51
#define DEFINE_DIR_cplus    50
#define ERROR_DIR_cplus     49
#define PRAGMA_DIR_cplus    48
#define LINE_DIR_cplus  47
#define ENDIF_DIR_cplus     46
#define ELIF_DIR_cplus  45
#define ELSE_DIR_cplus  44
#define IF_DIR_cplus    43
#define IFNDEF_DIR_cplus    42
#define IFDEF_DIR_cplus     41
#define INCLUDE_DIR_cplus   40
#define OCTAL_cplus     39
#define UOCTAL_cplus    38
#define LOCTAL_cplus    37
#define ULOCTAL_cplus   36
#define LLOCTAL_cplus   35
#define ULLOCTAL_cplus  34
#define BINARY_cplus    33
#define HEXA_cplus  32
#define UHEXA_cplus     31
#define LHEXA_cplus     30
#define LLHEXA_cplus    29
#define ULLHEXA_cplus   28
#define ULHEXA_cplus    27
#define FLOATVAL_cplus  26
#define UINTEGER_cplus  25
#define LINTEGER_cplus  24
#define LLINTEGER_cplus     23
#define ULLINTEGER_cplus    22
#define ULINTEGER_cplus     21
#define INTEGER_cplus   20
#define CHARACT_cplus   19
#define STRING_cplus    18
#define DQUOTE_cplus    17
#define IDENT_cplus     16
#define GOTO_REL_cplus  15
#define GOTO_cplus  14
#define STR_cplus   13
#define UNMARK_cplus    12
#define MARK_cplus  11
#define TAB_VIRT_cplus  10
#define TAB_cplus   9
#define NEWLINE_cplus   8
#define ATTRIBUTS_cplus     7
#define PLUS____TIRETIRETIRETIRETIRETIRE_____cplus  6
#undef _Tak
#define _Tak(func) func 
#endif
