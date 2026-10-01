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
        TUNSIGNED =     378 ,
        BDECR =     377 ,
        BINCR =     376 ,
        ADDR =  375 ,
        NOT =   374 ,
        LNEG =  373 ,
        POS =   372 ,
        NEG =   371 ,
        PARAM_TYPE =    370 ,
        STRING_LIST =   369 ,
        LABEL =     368 ,
        THROW_ANSI =    367 ,
        ELSE =  366 ,
        DECL_TYPE =     365 ,
        CLASSNAME =     364 ,
        TIDENT =    363 ,
        TSIGNED =   362 ,
        TSHORT =    361 ,
        TCHAR =     360 ,
        TINT =  359 ,
        RSHI =  358 ,
        LSHI =  357 ,
        LT =    356 ,
        GT =    355 ,
        GEQU =  354 ,
        LEQU =  353 ,
        SPACE_ARROW =   352 ,
        TAB_DIRECTIVE =     351 ,
        ENUM_PARAMETERS_UNDER =     350 ,
        ENUM_VERT_VALUE =   349 ,
        PROTECTED_ARRAY_S_TYPEDEF =     348 ,
        PROTECTED_ARRAY_TYPEDEF =   347 ,
        PROTECTED_ARRAY_S =     346 ,
        PROTECTED_ARRAY =   345 ,
        PROTECT_MEMB =  344 ,
        LANGUAGE =  343 ,
        ELIPSIS_EXPRESSION =    342 ,
        EXP =   341 ,
        ADECR =     340 ,
        AINCR =     339 ,
        ARROW =     338 ,
        REF =   337 ,
        VARIADIC_EXPRESSION =   336 ,
        EXP_BRA =   335 ,
        EXP_LIST =  334 ,
        ARROW_MEMB =    333 ,
        DOT_MEMB =  332 ,
        POINETOI =  331 ,
        TIRESUPEETOI =  330 ,
        SUPESUPE =  329 ,
        INFEINFE =  328 ,
        SUPEEGAL =  327 ,
        INFEEGAL =  326 ,
        NONE =  325 ,
        NEW_DECLARATOR =    324 ,
        USING_TYPE =    323 ,
        USING_NAMESPACE =   322 ,
        NAMESPACE_ALIAS =   321 ,
        REM =   320 ,
        DIV =   319 ,
        MUL =   318 ,
        POURC =     317 ,
        MESSAGE_MAP =   316 ,
        MACRO =     315 ,
        TDOUBLE =   314 ,
        TFLOAT =    313 ,
        TLONG =     312 ,
        OR =    311 ,
        VBARVBAR =  310 ,
        AND =   309 ,
        COMPOUND_EXT =  308 ,
        EXTERNAL =  307 ,
        MUTABLE =   306 ,
        TIRESUPE =  305 ,
        CAPTURE_ALL =   304 ,
        LAMBDA =    303 ,
        INLINE_NAMESPACE =  302 ,
        INITIALIZER =   301 ,
        LOR =   300 ,
        VBAR =  299 ,
        DELETE_FUNCTION =   298 ,
        FUNC =  297 ,
        ALL_OF =    296 ,
        EXTENSION =     295 ,
        __EXTENSION__ =     294 ,
        STAT_VOID =     293 ,
        TYPEDEF =   292 ,
        TEMPLATE_DECL =     291 ,
        SUPE =  290 ,
        CLASS_PARAM =   289 ,
        TEMPLATE =  288 ,
        EXP_SEQ =   287 ,
        LXOR =  286 ,
        CHAP =  285 ,
        EXCEPTION_LIST =    284 ,
        EXCEPTION_ANSI =    283 ,
        EXCEPTION =     282 ,
        NEQU =  281 ,
        EQU =   280 ,
        EXCLEGAL =  279 ,
        EGALEGAL =  278 ,
        ENUM_CLASS =    277 ,
        PRAGMA =    276 ,
        PARAMETERS =    275 ,
        FUNC_HEADER =   274 ,
        INDENT_FUNCTION_TYPE =  273 ,
        COMMENT_PLUS =  272 ,
        COMMENT_END =   271 ,
        COMMENT_MIDDLE =    270 ,
        COMMENT_START =     269 ,
        MARGIN_VALUE =  268 ,
        BRACE_ALIGN_VALUE =     267 ,
        DECL_ALIGN =    266 ,
        ASSIGN_ALIGN =  265 ,
        SINGLE_SWITCH_INDENT_VALUE =    264 ,
        SIMPLIFY_VALUE =    263 ,
        SIMPLIFY =  262 ,
        MODE_VALUE =    261 ,
        TAB_VALUE =     260 ,
        CONFIG =    259 ,
        NOT_MANAGED =   258 ,
        NO_PRETTY =     257 ,
        ALINE =     256 ,
        ERROR =     255 ,
        UNDEF =     254 ,
        TYP_AFF_BRA =   253 ,
        TYP_AFF_CALL =  252 ,
        MEMBER_DECLARATOR =     251 ,
        TYP_ARRAY =     250 ,
        FOR_DECLARATION =   249 ,
        DECLARATION =   248 ,
        CTOR_INITIALIZER =  247 ,
        BRACE_MARKER =  246 ,
        CTOR_INIT =     245 ,
        LONGLONG =  244 ,
        IUNLONGLONG =   243 ,
        IUNLONG =   242 ,
        IUN =   241 ,
        ILONGLONG =     240 ,
        ILONG =     239 ,
        RANGE_MODIFIER =    238 ,
        COND_AFF =  237 ,
        INTE =  236 ,
        COMPOUND =  235 ,
        CLASS_DECL =    234 ,
        AFER =  233 ,
        CATCH_ANSI =    232 ,
        EXCEPT_ANSI_ALL =   231 ,
        CAST =  230 ,
        TYP_BIT =   229 ,
        PROTECT =   228 ,
        BASE_LIST =     227 ,
        ATTRIBUTE_CALL =    226 ,
        XOR_AFF =   225 ,
        OR_AFF =    224 ,
        AND_AFF =   223 ,
        RSH_AFF =   222 ,
        LSH_AFF =   221 ,
        MIN_AFF =   220 ,
        PLU_AFF =   219 ,
        REM_AFF =   218 ,
        DIV_AFF =   217 ,
        MUL_AFF =   216 ,
        AFF =   215 ,
        ASM_CALL =  214 ,
        EXP_ARRAY =     213 ,
        VAR_LIST =  212 ,
        TYP_LIST =  211 ,
        TYP_AFF =   210 ,
        ABST_DECLARATOR =   209 ,
        DECLARATOR =    208 ,
        LAND =  207 ,
        INIT_NEW =  206 ,
        VIRG =  205 ,
        QUALIFIED =     204 ,
        MINUS =     203 ,
        TYP =   202 ,
        PFER =  201 ,
        DESTRUCT =  200 ,
        TYP_REF =   199 ,
        TYP_VARIADIC =  198 ,
        TYP_MOV =   197 ,
        TYP_ADDR =  196 ,
        INFE =  195 ,
        _TYPEDEF_PROTECTEDARRAY_S =     194 ,
        _TYPEDEF_PROTECTEDARRAY =   193 ,
        _PROTECTEDPOINTER_S =   192 ,
        _PROTECTEDPOINTER =     191 ,
        _PROTECTEDARRAY_S =     190 ,
        _PROTECTEDARRAY =   189 ,
        USING =     188 ,
        NAMESPACE =     187 ,
        CATCH =     186 ,
        DPOI =  185 ,
        PUBLIC =    184 ,
        PROTECTED =     183 ,
        PRIVATE =   182 ,
        CHAPEGAL =  181 ,
        VBAREGAL =  180 ,
        ETCOEGAL =  179 ,
        SUPESUPEEGAL =  178 ,
        INFEINFEEGAL =  177 ,
        TIREEGAL =  176 ,
        PLUSEGAL =  175 ,
        POURCEGAL =     174 ,
        ETOIEGAL =  173 ,
        EGAL =  172 ,
        ASM =   171 ,
        CFER =  170 ,
        COUV =  169 ,
        VA_ARG =    168 ,
        DELETE =    167 ,
        NEW =   166 ,
        SIZEOF =    165 ,
        TIRETIRE =  164 ,
        PLUSPLUS =  163 ,
        EXCL =  162 ,
        PLUS =  161 ,
        TIRE =  160 ,
        DEFAULT =   159 ,
        CASE =  158 ,
        TRY =   157 ,
        THROW =     156 ,
        FORALLSONS =    155 ,
        WHILE =     154 ,
        SWITCH =    153 ,
        RETURN =    152 ,
        PVIR =  151 ,
        IF =    150 ,
        FOR =   149 ,
        AOUV =  148 ,
        DO =    147 ,
        CONTINUE =  146 ,
        BREAK =     145 ,
        OPERATOR =  144 ,
        TILD =  143 ,
        ETCO =  142 ,
        POINPOINPOIN =  141 ,
        ETCOETCO =  140 ,
        ETOI =  139 ,
        POUV =  138 ,
        UNSIGNED =  137 ,
        SIGNED =    136 ,
        SHORT =     135 ,
        LONG =  134 ,
        CHAR =  133 ,
        INT =   132 ,
        DPOIDPOI =  131 ,
        VOID =  130 ,
        FLOAT =     129 ,
        DOUBLE =    128 ,
        DECLTYPE =  127 ,
        TYPENAME =  126 ,
        CLASS =     125 ,
        UNION =     124 ,
        STRUCT =    123 ,
        ENUM =  122 ,
        NOEXCEPT =  121 ,
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
#define TUNSIGNED_cplus     378
#define BDECR_cplus     377
#define BINCR_cplus     376
#define ADDR_cplus  375
#define NOT_cplus   374
#define LNEG_cplus  373
#define POS_cplus   372
#define NEG_cplus   371
#define PARAM_TYPE_cplus    370
#define STRING_LIST_cplus   369
#define LABEL_cplus     368
#define THROW_ANSI_cplus    367
#define ELSE_cplus  366
#define DECL_TYPE_cplus     365
#define CLASSNAME_cplus     364
#define TIDENT_cplus    363
#define TSIGNED_cplus   362
#define TSHORT_cplus    361
#define TCHAR_cplus     360
#define TINT_cplus  359
#define RSHI_cplus  358
#define LSHI_cplus  357
#define LT_cplus    356
#define GT_cplus    355
#define GEQU_cplus  354
#define LEQU_cplus  353
#define SPACE_ARROW_cplus   352
#define TAB_DIRECTIVE_cplus     351
#define ENUM_PARAMETERS_UNDER_cplus     350
#define ENUM_VERT_VALUE_cplus   349
#define PROTECTED_ARRAY_S_TYPEDEF_cplus     348
#define PROTECTED_ARRAY_TYPEDEF_cplus   347
#define PROTECTED_ARRAY_S_cplus     346
#define PROTECTED_ARRAY_cplus   345
#define PROTECT_MEMB_cplus  344
#define LANGUAGE_cplus  343
#define ELIPSIS_EXPRESSION_cplus    342
#define EXP_cplus   341
#define ADECR_cplus     340
#define AINCR_cplus     339
#define ARROW_cplus     338
#define REF_cplus   337
#define VARIADIC_EXPRESSION_cplus   336
#define EXP_BRA_cplus   335
#define EXP_LIST_cplus  334
#define ARROW_MEMB_cplus    333
#define DOT_MEMB_cplus  332
#define POINETOI_cplus  331
#define TIRESUPEETOI_cplus  330
#define SUPESUPE_cplus  329
#define INFEINFE_cplus  328
#define SUPEEGAL_cplus  327
#define INFEEGAL_cplus  326
#define NONE_cplus  325
#define NEW_DECLARATOR_cplus    324
#define USING_TYPE_cplus    323
#define USING_NAMESPACE_cplus   322
#define NAMESPACE_ALIAS_cplus   321
#define REM_cplus   320
#define DIV_cplus   319
#define MUL_cplus   318
#define POURC_cplus     317
#define MESSAGE_MAP_cplus   316
#define MACRO_cplus     315
#define TDOUBLE_cplus   314
#define TFLOAT_cplus    313
#define TLONG_cplus     312
#define OR_cplus    311
#define VBARVBAR_cplus  310
#define AND_cplus   309
#define COMPOUND_EXT_cplus  308
#define EXTERNAL_cplus  307
#define MUTABLE_cplus   306
#define TIRESUPE_cplus  305
#define CAPTURE_ALL_cplus   304
#define LAMBDA_cplus    303
#define INLINE_NAMESPACE_cplus  302
#define INITIALIZER_cplus   301
#define LOR_cplus   300
#define VBAR_cplus  299
#define DELETE_FUNCTION_cplus   298
#define FUNC_cplus  297
#define ALL_OF_cplus    296
#define EXTENSION_cplus     295
#define __EXTENSION___cplus     294
#define STAT_VOID_cplus     293
#define TYPEDEF_cplus   292
#define TEMPLATE_DECL_cplus     291
#define SUPE_cplus  290
#define CLASS_PARAM_cplus   289
#define TEMPLATE_cplus  288
#define EXP_SEQ_cplus   287
#define LXOR_cplus  286
#define CHAP_cplus  285
#define EXCEPTION_LIST_cplus    284
#define EXCEPTION_ANSI_cplus    283
#define EXCEPTION_cplus     282
#define NEQU_cplus  281
#define EQU_cplus   280
#define EXCLEGAL_cplus  279
#define EGALEGAL_cplus  278
#define ENUM_CLASS_cplus    277
#define PRAGMA_cplus    276
#define PARAMETERS_cplus    275
#define FUNC_HEADER_cplus   274
#define INDENT_FUNCTION_TYPE_cplus  273
#define COMMENT_PLUS_cplus  272
#define COMMENT_END_cplus   271
#define COMMENT_MIDDLE_cplus    270
#define COMMENT_START_cplus     269
#define MARGIN_VALUE_cplus  268
#define BRACE_ALIGN_VALUE_cplus     267
#define DECL_ALIGN_cplus    266
#define ASSIGN_ALIGN_cplus  265
#define SINGLE_SWITCH_INDENT_VALUE_cplus    264
#define SIMPLIFY_VALUE_cplus    263
#define SIMPLIFY_cplus  262
#define MODE_VALUE_cplus    261
#define TAB_VALUE_cplus     260
#define CONFIG_cplus    259
#define NOT_MANAGED_cplus   258
#define NO_PRETTY_cplus     257
#define ALINE_cplus     256
#define ERROR_cplus     255
#define UNDEF_cplus     254
#define TYP_AFF_BRA_cplus   253
#define TYP_AFF_CALL_cplus  252
#define MEMBER_DECLARATOR_cplus     251
#define TYP_ARRAY_cplus     250
#define FOR_DECLARATION_cplus   249
#define DECLARATION_cplus   248
#define CTOR_INITIALIZER_cplus  247
#define BRACE_MARKER_cplus  246
#define CTOR_INIT_cplus     245
#define LONGLONG_cplus  244
#define IUNLONGLONG_cplus   243
#define IUNLONG_cplus   242
#define IUN_cplus   241
#define ILONGLONG_cplus     240
#define ILONG_cplus     239
#define RANGE_MODIFIER_cplus    238
#define COND_AFF_cplus  237
#define INTE_cplus  236
#define COMPOUND_cplus  235
#define CLASS_DECL_cplus    234
#define AFER_cplus  233
#define CATCH_ANSI_cplus    232
#define EXCEPT_ANSI_ALL_cplus   231
#define CAST_cplus  230
#define TYP_BIT_cplus   229
#define PROTECT_cplus   228
#define BASE_LIST_cplus     227
#define ATTRIBUTE_CALL_cplus    226
#define XOR_AFF_cplus   225
#define OR_AFF_cplus    224
#define AND_AFF_cplus   223
#define RSH_AFF_cplus   222
#define LSH_AFF_cplus   221
#define MIN_AFF_cplus   220
#define PLU_AFF_cplus   219
#define REM_AFF_cplus   218
#define DIV_AFF_cplus   217
#define MUL_AFF_cplus   216
#define AFF_cplus   215
#define ASM_CALL_cplus  214
#define EXP_ARRAY_cplus     213
#define VAR_LIST_cplus  212
#define TYP_LIST_cplus  211
#define TYP_AFF_cplus   210
#define ABST_DECLARATOR_cplus   209
#define DECLARATOR_cplus    208
#define LAND_cplus  207
#define INIT_NEW_cplus  206
#define VIRG_cplus  205
#define QUALIFIED_cplus     204
#define MINUS_cplus     203
#define TYP_cplus   202
#define PFER_cplus  201
#define DESTRUCT_cplus  200
#define TYP_REF_cplus   199
#define TYP_VARIADIC_cplus  198
#define TYP_MOV_cplus   197
#define TYP_ADDR_cplus  196
#define INFE_cplus  195
#define _TYPEDEF_PROTECTEDARRAY_S_cplus     194
#define _TYPEDEF_PROTECTEDARRAY_cplus   193
#define _PROTECTEDPOINTER_S_cplus   192
#define _PROTECTEDPOINTER_cplus     191
#define _PROTECTEDARRAY_S_cplus     190
#define _PROTECTEDARRAY_cplus   189
#define USING_cplus     188
#define NAMESPACE_cplus     187
#define CATCH_cplus     186
#define DPOI_cplus  185
#define PUBLIC_cplus    184
#define PROTECTED_cplus     183
#define PRIVATE_cplus   182
#define CHAPEGAL_cplus  181
#define VBAREGAL_cplus  180
#define ETCOEGAL_cplus  179
#define SUPESUPEEGAL_cplus  178
#define INFEINFEEGAL_cplus  177
#define TIREEGAL_cplus  176
#define PLUSEGAL_cplus  175
#define POURCEGAL_cplus     174
#define ETOIEGAL_cplus  173
#define EGAL_cplus  172
#define ASM_cplus   171
#define CFER_cplus  170
#define COUV_cplus  169
#define VA_ARG_cplus    168
#define DELETE_cplus    167
#define NEW_cplus   166
#define SIZEOF_cplus    165
#define TIRETIRE_cplus  164
#define PLUSPLUS_cplus  163
#define EXCL_cplus  162
#define PLUS_cplus  161
#define TIRE_cplus  160
#define DEFAULT_cplus   159
#define CASE_cplus  158
#define TRY_cplus   157
#define THROW_cplus     156
#define FORALLSONS_cplus    155
#define WHILE_cplus     154
#define SWITCH_cplus    153
#define RETURN_cplus    152
#define PVIR_cplus  151
#define IF_cplus    150
#define FOR_cplus   149
#define AOUV_cplus  148
#define DO_cplus    147
#define CONTINUE_cplus  146
#define BREAK_cplus     145
#define OPERATOR_cplus  144
#define TILD_cplus  143
#define ETCO_cplus  142
#define POINPOINPOIN_cplus  141
#define ETCOETCO_cplus  140
#define ETOI_cplus  139
#define POUV_cplus  138
#define UNSIGNED_cplus  137
#define SIGNED_cplus    136
#define SHORT_cplus     135
#define LONG_cplus  134
#define CHAR_cplus  133
#define INT_cplus   132
#define DPOIDPOI_cplus  131
#define VOID_cplus  130
#define FLOAT_cplus     129
#define DOUBLE_cplus    128
#define DECLTYPE_cplus  127
#define TYPENAME_cplus  126
#define CLASS_cplus     125
#define UNION_cplus     124
#define STRUCT_cplus    123
#define ENUM_cplus  122
#define NOEXCEPT_cplus  121
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
