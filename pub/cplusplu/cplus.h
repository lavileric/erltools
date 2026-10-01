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
    virtual PPTREE noexcept_call ( int error_free) ;
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
    static signed char * _tokenArray [161];
    static int (cplus::*(_tokenFuncArray [161])) ();
    static int _tokenNbFuncArray [161];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        TUNSIGNED =     379 ,
        BDECR =     378 ,
        BINCR =     377 ,
        ADDR =  376 ,
        NOT =   375 ,
        LNEG =  374 ,
        POS =   373 ,
        NEG =   372 ,
        PARAM_TYPE =    371 ,
        STRING_LIST =   370 ,
        LABEL =     369 ,
        THROW_ANSI =    368 ,
        ELSE =  367 ,
        DECL_TYPE =     366 ,
        CLASSNAME =     365 ,
        TIDENT =    364 ,
        TSIGNED =   363 ,
        TSHORT =    362 ,
        TCHAR =     361 ,
        TINT =  360 ,
        RSHI =  359 ,
        LSHI =  358 ,
        LT =    357 ,
        GT =    356 ,
        GEQU =  355 ,
        LEQU =  354 ,
        SPACE_ARROW =   353 ,
        TAB_DIRECTIVE =     352 ,
        ENUM_PARAMETERS_UNDER =     351 ,
        ENUM_VERT_VALUE =   350 ,
        PROTECTED_ARRAY_S_TYPEDEF =     349 ,
        PROTECTED_ARRAY_TYPEDEF =   348 ,
        PROTECTED_ARRAY_S =     347 ,
        PROTECTED_ARRAY =   346 ,
        PROTECT_MEMB =  345 ,
        LANGUAGE =  344 ,
        ELIPSIS_EXPRESSION =    343 ,
        EXP =   342 ,
        ADECR =     341 ,
        AINCR =     340 ,
        ARROW =     339 ,
        REF =   338 ,
        VARIADIC_EXPRESSION =   337 ,
        EXP_BRA =   336 ,
        EXP_LIST =  335 ,
        ARROW_MEMB =    334 ,
        DOT_MEMB =  333 ,
        POINETOI =  332 ,
        TIRESUPEETOI =  331 ,
        SUPESUPE =  330 ,
        INFEINFE =  329 ,
        SUPEEGAL =  328 ,
        INFEEGAL =  327 ,
        NONE =  326 ,
        NEW_DECLARATOR =    325 ,
        USING_TYPE =    324 ,
        USING_NAMESPACE =   323 ,
        NAMESPACE_ALIAS =   322 ,
        REM =   321 ,
        DIV =   320 ,
        MUL =   319 ,
        POURC =     318 ,
        MESSAGE_MAP =   317 ,
        MACRO =     316 ,
        TDOUBLE =   315 ,
        TFLOAT =    314 ,
        TLONG =     313 ,
        OR =    312 ,
        VBARVBAR =  311 ,
        AND =   310 ,
        COMPOUND_EXT =  309 ,
        EXTERNAL =  308 ,
        MUTABLE =   307 ,
        TIRESUPE =  306 ,
        CAPTURE_ALL =   305 ,
        LAMBDA =    304 ,
        INLINE_NAMESPACE =  303 ,
        INITIALIZER =   302 ,
        LOR =   301 ,
        VBAR =  300 ,
        DELETE_FUNCTION =   299 ,
        FUNC =  298 ,
        ALL_OF =    297 ,
        EXTENSION =     296 ,
        __EXTENSION__ =     295 ,
        STAT_VOID =     294 ,
        TYPEDEF =   293 ,
        TEMPLATE_DECL =     292 ,
        SUPE =  291 ,
        CLASS_PARAM =   290 ,
        TEMPLATE =  289 ,
        EXP_SEQ =   288 ,
        LXOR =  287 ,
        CHAP =  286 ,
        EXCEPTION_LIST =    285 ,
        EXCEPTION_ANSI =    284 ,
        EXCEPTION =     283 ,
        NEQU =  282 ,
        EQU =   281 ,
        EXCLEGAL =  280 ,
        EGALEGAL =  279 ,
        ENUM_CLASS =    278 ,
        PRAGMA =    277 ,
        PARAMETERS =    276 ,
        FUNC_HEADER =   275 ,
        INDENT_FUNCTION_TYPE =  274 ,
        COMMENT_PLUS =  273 ,
        COMMENT_END =   272 ,
        COMMENT_MIDDLE =    271 ,
        COMMENT_START =     270 ,
        MARGIN_VALUE =  269 ,
        BRACE_ALIGN_VALUE =     268 ,
        DECL_ALIGN =    267 ,
        ASSIGN_ALIGN =  266 ,
        SINGLE_SWITCH_INDENT_VALUE =    265 ,
        SIMPLIFY_VALUE =    264 ,
        SIMPLIFY =  263 ,
        MODE_VALUE =    262 ,
        TAB_VALUE =     261 ,
        CONFIG =    260 ,
        NOT_MANAGED =   259 ,
        NO_PRETTY =     258 ,
        ALINE =     257 ,
        ERROR =     256 ,
        UNDEF =     255 ,
        TYP_AFF_BRA =   254 ,
        TYP_AFF_CALL =  253 ,
        MEMBER_DECLARATOR =     252 ,
        TYP_ARRAY =     251 ,
        FOR_DECLARATION =   250 ,
        DECLARATION =   249 ,
        CTOR_INITIALIZER =  248 ,
        BRACE_MARKER =  247 ,
        CTOR_INIT =     246 ,
        LONGLONG =  245 ,
        IUNLONGLONG =   244 ,
        IUNLONG =   243 ,
        IUN =   242 ,
        ILONGLONG =     241 ,
        ILONG =     240 ,
        RANGE_MODIFIER =    239 ,
        COND_AFF =  238 ,
        INTE =  237 ,
        COMPOUND =  236 ,
        CLASS_DECL =    235 ,
        AFER =  234 ,
        CATCH_ANSI =    233 ,
        EXCEPT_ANSI_ALL =   232 ,
        CAST =  231 ,
        TYP_BIT =   230 ,
        PROTECT =   229 ,
        BASE_LIST =     228 ,
        ATTRIBUTE_CALL =    227 ,
        XOR_AFF =   226 ,
        OR_AFF =    225 ,
        AND_AFF =   224 ,
        RSH_AFF =   223 ,
        LSH_AFF =   222 ,
        MIN_AFF =   221 ,
        PLU_AFF =   220 ,
        REM_AFF =   219 ,
        DIV_AFF =   218 ,
        MUL_AFF =   217 ,
        AFF =   216 ,
        ASM_CALL =  215 ,
        EXP_ARRAY =     214 ,
        VAR_LIST =  213 ,
        TYP_LIST =  212 ,
        TYP_AFF =   211 ,
        ABST_DECLARATOR =   210 ,
        DECLARATOR =    209 ,
        LAND =  208 ,
        INIT_NEW =  207 ,
        VIRG =  206 ,
        QUALIFIED =     205 ,
        MINUS =     204 ,
        TYP =   203 ,
        PFER =  202 ,
        DESTRUCT =  201 ,
        TYP_REF =   200 ,
        TYP_VARIADIC =  199 ,
        TYP_MOV =   198 ,
        TYP_ADDR =  197 ,
        INFE =  196 ,
        _TYPEDEF_PROTECTEDARRAY_S =     195 ,
        _TYPEDEF_PROTECTEDARRAY =   194 ,
        _PROTECTEDPOINTER_S =   193 ,
        _PROTECTEDPOINTER =     192 ,
        _PROTECTEDARRAY_S =     191 ,
        _PROTECTEDARRAY =   190 ,
        USING =     189 ,
        NAMESPACE =     188 ,
        CATCH =     187 ,
        DPOI =  186 ,
        PUBLIC =    185 ,
        PROTECTED =     184 ,
        PRIVATE =   183 ,
        CHAPEGAL =  182 ,
        VBAREGAL =  181 ,
        ETCOEGAL =  180 ,
        SUPESUPEEGAL =  179 ,
        INFEINFEEGAL =  178 ,
        TIREEGAL =  177 ,
        PLUSEGAL =  176 ,
        POURCEGAL =     175 ,
        ETOIEGAL =  174 ,
        EGAL =  173 ,
        ASM =   172 ,
        CFER =  171 ,
        COUV =  170 ,
        VA_ARG =    169 ,
        DELETE =    168 ,
        NEW =   167 ,
        SIZEOF =    166 ,
        TIRETIRE =  165 ,
        PLUSPLUS =  164 ,
        EXCL =  163 ,
        PLUS =  162 ,
        TIRE =  161 ,
        DEFAULT =   160 ,
        CASE =  159 ,
        TRY =   158 ,
        THROW =     157 ,
        FORALLSONS =    156 ,
        WHILE =     155 ,
        SWITCH =    154 ,
        RETURN =    153 ,
        PVIR =  152 ,
        IF =    151 ,
        FOR =   150 ,
        AOUV =  149 ,
        DO =    148 ,
        CONTINUE =  147 ,
        BREAK =     146 ,
        OPERATOR =  145 ,
        TILD =  144 ,
        ETCO =  143 ,
        POINPOINPOIN =  142 ,
        ETCOETCO =  141 ,
        ETOI =  140 ,
        POUV =  139 ,
        UNSIGNED =  138 ,
        SIGNED =    137 ,
        SHORT =     136 ,
        LONG =  135 ,
        CHAR =  134 ,
        INT =   133 ,
        DPOIDPOI =  132 ,
        VOID =  131 ,
        FLOAT =     130 ,
        DOUBLE =    129 ,
        DECLTYPE =  128 ,
        TYPENAME =  127 ,
        CLASS =     126 ,
        UNION =     125 ,
        STRUCT =    124 ,
        ENUM =  123 ,
        NOEXCEPT =  122 ,
        CONSTEVAL =     121 ,
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
#define TUNSIGNED_cplus     379
#define BDECR_cplus     378
#define BINCR_cplus     377
#define ADDR_cplus  376
#define NOT_cplus   375
#define LNEG_cplus  374
#define POS_cplus   373
#define NEG_cplus   372
#define PARAM_TYPE_cplus    371
#define STRING_LIST_cplus   370
#define LABEL_cplus     369
#define THROW_ANSI_cplus    368
#define ELSE_cplus  367
#define DECL_TYPE_cplus     366
#define CLASSNAME_cplus     365
#define TIDENT_cplus    364
#define TSIGNED_cplus   363
#define TSHORT_cplus    362
#define TCHAR_cplus     361
#define TINT_cplus  360
#define RSHI_cplus  359
#define LSHI_cplus  358
#define LT_cplus    357
#define GT_cplus    356
#define GEQU_cplus  355
#define LEQU_cplus  354
#define SPACE_ARROW_cplus   353
#define TAB_DIRECTIVE_cplus     352
#define ENUM_PARAMETERS_UNDER_cplus     351
#define ENUM_VERT_VALUE_cplus   350
#define PROTECTED_ARRAY_S_TYPEDEF_cplus     349
#define PROTECTED_ARRAY_TYPEDEF_cplus   348
#define PROTECTED_ARRAY_S_cplus     347
#define PROTECTED_ARRAY_cplus   346
#define PROTECT_MEMB_cplus  345
#define LANGUAGE_cplus  344
#define ELIPSIS_EXPRESSION_cplus    343
#define EXP_cplus   342
#define ADECR_cplus     341
#define AINCR_cplus     340
#define ARROW_cplus     339
#define REF_cplus   338
#define VARIADIC_EXPRESSION_cplus   337
#define EXP_BRA_cplus   336
#define EXP_LIST_cplus  335
#define ARROW_MEMB_cplus    334
#define DOT_MEMB_cplus  333
#define POINETOI_cplus  332
#define TIRESUPEETOI_cplus  331
#define SUPESUPE_cplus  330
#define INFEINFE_cplus  329
#define SUPEEGAL_cplus  328
#define INFEEGAL_cplus  327
#define NONE_cplus  326
#define NEW_DECLARATOR_cplus    325
#define USING_TYPE_cplus    324
#define USING_NAMESPACE_cplus   323
#define NAMESPACE_ALIAS_cplus   322
#define REM_cplus   321
#define DIV_cplus   320
#define MUL_cplus   319
#define POURC_cplus     318
#define MESSAGE_MAP_cplus   317
#define MACRO_cplus     316
#define TDOUBLE_cplus   315
#define TFLOAT_cplus    314
#define TLONG_cplus     313
#define OR_cplus    312
#define VBARVBAR_cplus  311
#define AND_cplus   310
#define COMPOUND_EXT_cplus  309
#define EXTERNAL_cplus  308
#define MUTABLE_cplus   307
#define TIRESUPE_cplus  306
#define CAPTURE_ALL_cplus   305
#define LAMBDA_cplus    304
#define INLINE_NAMESPACE_cplus  303
#define INITIALIZER_cplus   302
#define LOR_cplus   301
#define VBAR_cplus  300
#define DELETE_FUNCTION_cplus   299
#define FUNC_cplus  298
#define ALL_OF_cplus    297
#define EXTENSION_cplus     296
#define __EXTENSION___cplus     295
#define STAT_VOID_cplus     294
#define TYPEDEF_cplus   293
#define TEMPLATE_DECL_cplus     292
#define SUPE_cplus  291
#define CLASS_PARAM_cplus   290
#define TEMPLATE_cplus  289
#define EXP_SEQ_cplus   288
#define LXOR_cplus  287
#define CHAP_cplus  286
#define EXCEPTION_LIST_cplus    285
#define EXCEPTION_ANSI_cplus    284
#define EXCEPTION_cplus     283
#define NEQU_cplus  282
#define EQU_cplus   281
#define EXCLEGAL_cplus  280
#define EGALEGAL_cplus  279
#define ENUM_CLASS_cplus    278
#define PRAGMA_cplus    277
#define PARAMETERS_cplus    276
#define FUNC_HEADER_cplus   275
#define INDENT_FUNCTION_TYPE_cplus  274
#define COMMENT_PLUS_cplus  273
#define COMMENT_END_cplus   272
#define COMMENT_MIDDLE_cplus    271
#define COMMENT_START_cplus     270
#define MARGIN_VALUE_cplus  269
#define BRACE_ALIGN_VALUE_cplus     268
#define DECL_ALIGN_cplus    267
#define ASSIGN_ALIGN_cplus  266
#define SINGLE_SWITCH_INDENT_VALUE_cplus    265
#define SIMPLIFY_VALUE_cplus    264
#define SIMPLIFY_cplus  263
#define MODE_VALUE_cplus    262
#define TAB_VALUE_cplus     261
#define CONFIG_cplus    260
#define NOT_MANAGED_cplus   259
#define NO_PRETTY_cplus     258
#define ALINE_cplus     257
#define ERROR_cplus     256
#define UNDEF_cplus     255
#define TYP_AFF_BRA_cplus   254
#define TYP_AFF_CALL_cplus  253
#define MEMBER_DECLARATOR_cplus     252
#define TYP_ARRAY_cplus     251
#define FOR_DECLARATION_cplus   250
#define DECLARATION_cplus   249
#define CTOR_INITIALIZER_cplus  248
#define BRACE_MARKER_cplus  247
#define CTOR_INIT_cplus     246
#define LONGLONG_cplus  245
#define IUNLONGLONG_cplus   244
#define IUNLONG_cplus   243
#define IUN_cplus   242
#define ILONGLONG_cplus     241
#define ILONG_cplus     240
#define RANGE_MODIFIER_cplus    239
#define COND_AFF_cplus  238
#define INTE_cplus  237
#define COMPOUND_cplus  236
#define CLASS_DECL_cplus    235
#define AFER_cplus  234
#define CATCH_ANSI_cplus    233
#define EXCEPT_ANSI_ALL_cplus   232
#define CAST_cplus  231
#define TYP_BIT_cplus   230
#define PROTECT_cplus   229
#define BASE_LIST_cplus     228
#define ATTRIBUTE_CALL_cplus    227
#define XOR_AFF_cplus   226
#define OR_AFF_cplus    225
#define AND_AFF_cplus   224
#define RSH_AFF_cplus   223
#define LSH_AFF_cplus   222
#define MIN_AFF_cplus   221
#define PLU_AFF_cplus   220
#define REM_AFF_cplus   219
#define DIV_AFF_cplus   218
#define MUL_AFF_cplus   217
#define AFF_cplus   216
#define ASM_CALL_cplus  215
#define EXP_ARRAY_cplus     214
#define VAR_LIST_cplus  213
#define TYP_LIST_cplus  212
#define TYP_AFF_cplus   211
#define ABST_DECLARATOR_cplus   210
#define DECLARATOR_cplus    209
#define LAND_cplus  208
#define INIT_NEW_cplus  207
#define VIRG_cplus  206
#define QUALIFIED_cplus     205
#define MINUS_cplus     204
#define TYP_cplus   203
#define PFER_cplus  202
#define DESTRUCT_cplus  201
#define TYP_REF_cplus   200
#define TYP_VARIADIC_cplus  199
#define TYP_MOV_cplus   198
#define TYP_ADDR_cplus  197
#define INFE_cplus  196
#define _TYPEDEF_PROTECTEDARRAY_S_cplus     195
#define _TYPEDEF_PROTECTEDARRAY_cplus   194
#define _PROTECTEDPOINTER_S_cplus   193
#define _PROTECTEDPOINTER_cplus     192
#define _PROTECTEDARRAY_S_cplus     191
#define _PROTECTEDARRAY_cplus   190
#define USING_cplus     189
#define NAMESPACE_cplus     188
#define CATCH_cplus     187
#define DPOI_cplus  186
#define PUBLIC_cplus    185
#define PROTECTED_cplus     184
#define PRIVATE_cplus   183
#define CHAPEGAL_cplus  182
#define VBAREGAL_cplus  181
#define ETCOEGAL_cplus  180
#define SUPESUPEEGAL_cplus  179
#define INFEINFEEGAL_cplus  178
#define TIREEGAL_cplus  177
#define PLUSEGAL_cplus  176
#define POURCEGAL_cplus     175
#define ETOIEGAL_cplus  174
#define EGAL_cplus  173
#define ASM_cplus   172
#define CFER_cplus  171
#define COUV_cplus  170
#define VA_ARG_cplus    169
#define DELETE_cplus    168
#define NEW_cplus   167
#define SIZEOF_cplus    166
#define TIRETIRE_cplus  165
#define PLUSPLUS_cplus  164
#define EXCL_cplus  163
#define PLUS_cplus  162
#define TIRE_cplus  161
#define DEFAULT_cplus   160
#define CASE_cplus  159
#define TRY_cplus   158
#define THROW_cplus     157
#define FORALLSONS_cplus    156
#define WHILE_cplus     155
#define SWITCH_cplus    154
#define RETURN_cplus    153
#define PVIR_cplus  152
#define IF_cplus    151
#define FOR_cplus   150
#define AOUV_cplus  149
#define DO_cplus    148
#define CONTINUE_cplus  147
#define BREAK_cplus     146
#define OPERATOR_cplus  145
#define TILD_cplus  144
#define ETCO_cplus  143
#define POINPOINPOIN_cplus  142
#define ETCOETCO_cplus  141
#define ETOI_cplus  140
#define POUV_cplus  139
#define UNSIGNED_cplus  138
#define SIGNED_cplus    137
#define SHORT_cplus     136
#define LONG_cplus  135
#define CHAR_cplus  134
#define INT_cplus   133
#define DPOIDPOI_cplus  132
#define VOID_cplus  131
#define FLOAT_cplus     130
#define DOUBLE_cplus    129
#define DECLTYPE_cplus  128
#define TYPENAME_cplus  127
#define CLASS_cplus     126
#define UNION_cplus     125
#define STRUCT_cplus    124
#define ENUM_cplus  123
#define NOEXCEPT_cplus  122
#define CONSTEVAL_cplus     121
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
