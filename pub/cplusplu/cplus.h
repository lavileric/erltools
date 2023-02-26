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
    virtual PPTREE arg_declarator_followed ( int error_free) ;
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
    static signed char * _tokenArray [154];
    static int (cplus::*(_tokenFuncArray [154])) ();
    static int _tokenNbFuncArray [154];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        TUNSIGNED =     357 ,
        BDECR =     356 ,
        BINCR =     355 ,
        ADDR =  354 ,
        NOT =   353 ,
        LNEG =  352 ,
        POS =   351 ,
        NEG =   350 ,
        PARAM_TYPE =    349 ,
        STRING_LIST =   348 ,
        LABEL =     347 ,
        THROW_ANSI =    346 ,
        ELSE =  345 ,
        DECL_TYPE =     344 ,
        TIDENT =    343 ,
        TSIGNED =   342 ,
        TSHORT =    341 ,
        TCHAR =     340 ,
        TINT =  339 ,
        RSHI =  338 ,
        LSHI =  337 ,
        LT =    336 ,
        GT =    335 ,
        GEQU =  334 ,
        LEQU =  333 ,
        SPACE_ARROW =   332 ,
        TAB_DIRECTIVE =     331 ,
        ENUM_PARAMETERS_UNDER =     330 ,
        ENUM_VERT_VALUE =   329 ,
        PROTECT_MEMB =  328 ,
        LANGUAGE =  327 ,
        EXP =   326 ,
        ADECR =     325 ,
        AINCR =     324 ,
        ARROW =     323 ,
        REF =   322 ,
        EXP_BRA =   321 ,
        EXP_LIST =  320 ,
        ARROW_MEMB =    319 ,
        DOT_MEMB =  318 ,
        POINETOI =  317 ,
        TIRESUPEETOI =  316 ,
        TIRESUPE =  315 ,
        SUPESUPE =  314 ,
        INFEINFE =  313 ,
        SUPEEGAL =  312 ,
        INFEEGAL =  311 ,
        NONE =  310 ,
        NEW_DECLARATOR =    309 ,
        USING_NAMESPACE =   308 ,
        NAMESPACE_ALIAS =   307 ,
        REM =   306 ,
        DIV =   305 ,
        MUL =   304 ,
        POURC =     303 ,
        MESSAGE_MAP =   302 ,
        MACRO =     301 ,
        TDOUBLE =   300 ,
        TFLOAT =    299 ,
        TLONG =     298 ,
        OR =    297 ,
        VBARVBAR =  296 ,
        AND =   295 ,
        ETCOETCO =  294 ,
        COMPOUND_EXT =  293 ,
        EXTERNAL =  292 ,
        INLINE_NAMESPACE =  291 ,
        INITIALIZER =   290 ,
        LOR =   289 ,
        VBAR =  288 ,
        DELETE_FUNCTION =   287 ,
        FUNC =  286 ,
        ALL_OF =    285 ,
        EXTENSION =     284 ,
        __EXTENSION__ =     283 ,
        STAT_VOID =     282 ,
        TYPEDEF =   281 ,
        TEMPLATE_DECL =     280 ,
        SUPE =  279 ,
        CLASS_PARAM =   278 ,
        TEMPLATE =  277 ,
        EXP_SEQ =   276 ,
        LXOR =  275 ,
        CHAP =  274 ,
        EXCEPTION_LIST =    273 ,
        EXCEPTION_ANSI =    272 ,
        EXCEPTION =     271 ,
        NEQU =  270 ,
        EQU =   269 ,
        EXCLEGAL =  268 ,
        EGALEGAL =  267 ,
        ENUM_CLASS =    266 ,
        PRAGMA =    265 ,
        PARAMETERS =    264 ,
        FUNC_HEADER =   263 ,
        INDENT_FUNCTION_TYPE =  262 ,
        COMMENT_PLUS =  261 ,
        COMMENT_END =   260 ,
        COMMENT_MIDDLE =    259 ,
        COMMENT_START =     258 ,
        MARGIN_VALUE =  257 ,
        BRACE_ALIGN_VALUE =     256 ,
        DECL_ALIGN =    255 ,
        ASSIGN_ALIGN =  254 ,
        SINGLE_SWITCH_INDENT_VALUE =    253 ,
        SIMPLIFY_VALUE =    252 ,
        SIMPLIFY =  251 ,
        MODE_VALUE =    250 ,
        TAB_VALUE =     249 ,
        CONFIG =    248 ,
        NOT_MANAGED =   247 ,
        NO_PRETTY =     246 ,
        ALINE =     245 ,
        ERROR =     244 ,
        UNDEF =     243 ,
        TYP_AFF_BRA =   242 ,
        TYP_AFF_CALL =  241 ,
        MEMBER_DECLARATOR =     240 ,
        TYP_ARRAY =     239 ,
        COUV =  238 ,
        FOR_DECLARATION =   237 ,
        DECLARATION =   236 ,
        CTOR_INITIALIZER =  235 ,
        BRACE_MARKER =  234 ,
        CTOR_INIT =     233 ,
        LONGLONG =  232 ,
        IUNLONGLONG =   231 ,
        IUNLONG =   230 ,
        IUN =   229 ,
        ILONGLONG =     228 ,
        ILONG =     227 ,
        RANGE_MODIFIER =    226 ,
        COND_AFF =  225 ,
        INTE =  224 ,
        COMPOUND =  223 ,
        CLASS_DECL =    222 ,
        AFER =  221 ,
        CATCH_ANSI =    220 ,
        EXCEPT_ANSI_ALL =   219 ,
        CAST =  218 ,
        TYP_BIT =   217 ,
        PROTECT =   216 ,
        BASE_LIST =     215 ,
        ATTRIBUTE_CALL =    214 ,
        XOR_AFF =   213 ,
        OR_AFF =    212 ,
        AND_AFF =   211 ,
        RSH_AFF =   210 ,
        LSH_AFF =   209 ,
        MIN_AFF =   208 ,
        PLU_AFF =   207 ,
        REM_AFF =   206 ,
        DIV_AFF =   205 ,
        MUL_AFF =   204 ,
        AFF =   203 ,
        ASM_CALL =  202 ,
        EXP_ARRAY =     201 ,
        VAR_LIST =  200 ,
        TYP_LIST =  199 ,
        TYP_AFF =   198 ,
        ABST_DECLARATOR =   197 ,
        DECLARATOR =    196 ,
        POINPOINPOIN =  195 ,
        LAND =  194 ,
        INIT_NEW =  193 ,
        VIRG =  192 ,
        QUALIFIED =     191 ,
        MINUS =     190 ,
        TYP =   189 ,
        PFER =  188 ,
        DESTRUCT =  187 ,
        TYP_REF =   186 ,
        TYP_ADDR =  185 ,
        INFE =  184 ,
        USING =     183 ,
        NAMESPACE =     182 ,
        CATCH =     181 ,
        DPOI =  180 ,
        PUBLIC =    179 ,
        PROTECTED =     178 ,
        PRIVATE =   177 ,
        CHAPEGAL =  176 ,
        VBAREGAL =  175 ,
        ETCOEGAL =  174 ,
        SUPESUPEEGAL =  173 ,
        INFEINFEEGAL =  172 ,
        TIREEGAL =  171 ,
        PLUSEGAL =  170 ,
        POURCEGAL =     169 ,
        ETOIEGAL =  168 ,
        EGAL =  167 ,
        ASM =   166 ,
        CFER =  165 ,
        VA_ARG =    164 ,
        DELETE =    163 ,
        NEW =   162 ,
        SIZEOF =    161 ,
        TIRETIRE =  160 ,
        PLUSPLUS =  159 ,
        EXCL =  158 ,
        PLUS =  157 ,
        TIRE =  156 ,
        POUV =  155 ,
        DEFAULT =   154 ,
        CASE =  153 ,
        TRY =   152 ,
        THROW =     151 ,
        FORALLSONS =    150 ,
        WHILE =     149 ,
        SWITCH =    148 ,
        RETURN =    147 ,
        PVIR =  146 ,
        IF =    145 ,
        FOR =   144 ,
        AOUV =  143 ,
        DO =    142 ,
        CONTINUE =  141 ,
        BREAK =     140 ,
        OPERATOR =  139 ,
        TILD =  138 ,
        ETCO =  137 ,
        ETOI =  136 ,
        UNSIGNED =  135 ,
        SIGNED =    134 ,
        SHORT =     133 ,
        LONG =  132 ,
        CHAR =  131 ,
        INT =   130 ,
        DPOIDPOI =  129 ,
        VOID =  128 ,
        FLOAT =     127 ,
        DOUBLE =    126 ,
        DECLTYPE =  125 ,
        TYPENAME =  124 ,
        CLASS =     123 ,
        UNION =     122 ,
        STRUCT =    121 ,
        ENUM =  120 ,
        CONSTEXPR =     119 ,
        CONST =     118 ,
        FRIEND =    117 ,
        VIRTUAL =   116 ,
        INLINE =    115 ,
        __ASM__ =   114 ,
        __ATTRIBUTE__ =     113 ,
        VOLATILE =  112 ,
        REGISTER =  111 ,
        EXTERN =    110 ,
        STATIC =    109 ,
        AUTO =  108 ,
        FUNC_SPEC =     107 ,
        TRY_UPPER =     106 ,
        END_CATCH =     105 ,
        END_CATCH_ALL =     104 ,
        AND_CATCH =     103 ,
        CATCH_UPPER =   102 ,
        CATCH_ALL =     101 ,
        END_MESSAGE_MAP =   100 ,
        BEGIN_MESSAGE_MAP =     99 ,
        DECLARE_MESSAGE_MAP =   98 ,
        IMPLEMENT_SERIAL =  97 ,
        IMPLEMENT_DYNCREATE =   96 ,
        IMPLEMENT_DYNAMIC =     95 ,
        DECLARE_SERIAL =    94 ,
        DECLARE_DYNAMIC =   93 ,
        PUSH_FUNCTION =     92 ,
        PUSH_ARGUMENT =     91 ,
        UNDEF_CONTENT =     90 ,
        SMALL_PRAGMA_CONTENT =  89 ,
        PRAGMA_CONTENT =    88 ,
        PRAGMA_ENUM_VERT =  87 ,
        PRAGMA_SPACE_ARROW =    86 ,
        PRAGMA_PARAMETERS =     85 ,
        PRAGMA_PARAMETERS_UNDER =   84 ,
        PRAGMA_FUNC_HEADER =    83 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   82 ,
        PRAGMA_COMMENT_PLUS =   81 ,
        PRAGMA_COMMENT_END =    80 ,
        PRAGMA_COMMENT_MIDDLE =     79 ,
        PRAGMA_COMMENT_START =  78 ,
        PRAGMA_MARGIN =     77 ,
        PRAGMA_DECL_ALIGN =     76 ,
        PRAGMA_ASSIGN_ALIGN =   75 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   74 ,
        PRAGMA_SIMPLIFY =   73 ,
        PRAGMA_BRACE_ALIGN =    72 ,
        PRAGMA_MODE =   71 ,
        PRAGMA_RANGE =  70 ,
        PRAGMA_TAB =    69 ,
        PRAGMA_TAB_DIRECTIVE =  68 ,
        PRAGMA_CONFIG =     67 ,
        PRAGMA_NOT_MANAGED =    66 ,
        PRAGMA_MANAGED =    65 ,
        PRAGMA_NOPRETTY =   64 ,
        PRAGMA_PRETTY =     63 ,
        INCLUDE_LOCAL =     62 ,
        INCLUDE_SYS =   61 ,
        END_LINE =  60 ,
        DEFINE_NAME =   59 ,
        DEFINED_NOT_CONTINUED =     58 ,
        DEFINED_CONTINUED =     57 ,
        POINT =     56 ,
        SLAS =  55 ,
        SLASEGAL =  54 ,
        CARRIAGE_RETURN =   53 ,
        SHARP_VAL =     52 ,
        LINE_REFERENCE_DIR =    51 ,
        UNDEF_DIR =     50 ,
        DEFINE_DIR =    49 ,
        ERROR_DIR =     48 ,
        PRAGMA_DIR =    47 ,
        LINE_DIR =  46 ,
        ENDIF_DIR =     45 ,
        ELIF_DIR =  44 ,
        ELSE_DIR =  43 ,
        IF_DIR =    42 ,
        IFNDEF_DIR =    41 ,
        IFDEF_DIR =     40 ,
        INCLUDE_DIR =   39 ,
        OCTAL =     38 ,
        UOCTAL =    37 ,
        LOCTAL =    36 ,
        ULOCTAL =   35 ,
        LLOCTAL =   34 ,
        ULLOCTAL =  33 ,
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
#define TUNSIGNED_cplus     357
#define BDECR_cplus     356
#define BINCR_cplus     355
#define ADDR_cplus  354
#define NOT_cplus   353
#define LNEG_cplus  352
#define POS_cplus   351
#define NEG_cplus   350
#define PARAM_TYPE_cplus    349
#define STRING_LIST_cplus   348
#define LABEL_cplus     347
#define THROW_ANSI_cplus    346
#define ELSE_cplus  345
#define DECL_TYPE_cplus     344
#define TIDENT_cplus    343
#define TSIGNED_cplus   342
#define TSHORT_cplus    341
#define TCHAR_cplus     340
#define TINT_cplus  339
#define RSHI_cplus  338
#define LSHI_cplus  337
#define LT_cplus    336
#define GT_cplus    335
#define GEQU_cplus  334
#define LEQU_cplus  333
#define SPACE_ARROW_cplus   332
#define TAB_DIRECTIVE_cplus     331
#define ENUM_PARAMETERS_UNDER_cplus     330
#define ENUM_VERT_VALUE_cplus   329
#define PROTECT_MEMB_cplus  328
#define LANGUAGE_cplus  327
#define EXP_cplus   326
#define ADECR_cplus     325
#define AINCR_cplus     324
#define ARROW_cplus     323
#define REF_cplus   322
#define EXP_BRA_cplus   321
#define EXP_LIST_cplus  320
#define ARROW_MEMB_cplus    319
#define DOT_MEMB_cplus  318
#define POINETOI_cplus  317
#define TIRESUPEETOI_cplus  316
#define TIRESUPE_cplus  315
#define SUPESUPE_cplus  314
#define INFEINFE_cplus  313
#define SUPEEGAL_cplus  312
#define INFEEGAL_cplus  311
#define NONE_cplus  310
#define NEW_DECLARATOR_cplus    309
#define USING_NAMESPACE_cplus   308
#define NAMESPACE_ALIAS_cplus   307
#define REM_cplus   306
#define DIV_cplus   305
#define MUL_cplus   304
#define POURC_cplus     303
#define MESSAGE_MAP_cplus   302
#define MACRO_cplus     301
#define TDOUBLE_cplus   300
#define TFLOAT_cplus    299
#define TLONG_cplus     298
#define OR_cplus    297
#define VBARVBAR_cplus  296
#define AND_cplus   295
#define ETCOETCO_cplus  294
#define COMPOUND_EXT_cplus  293
#define EXTERNAL_cplus  292
#define INLINE_NAMESPACE_cplus  291
#define INITIALIZER_cplus   290
#define LOR_cplus   289
#define VBAR_cplus  288
#define DELETE_FUNCTION_cplus   287
#define FUNC_cplus  286
#define ALL_OF_cplus    285
#define EXTENSION_cplus     284
#define __EXTENSION___cplus     283
#define STAT_VOID_cplus     282
#define TYPEDEF_cplus   281
#define TEMPLATE_DECL_cplus     280
#define SUPE_cplus  279
#define CLASS_PARAM_cplus   278
#define TEMPLATE_cplus  277
#define EXP_SEQ_cplus   276
#define LXOR_cplus  275
#define CHAP_cplus  274
#define EXCEPTION_LIST_cplus    273
#define EXCEPTION_ANSI_cplus    272
#define EXCEPTION_cplus     271
#define NEQU_cplus  270
#define EQU_cplus   269
#define EXCLEGAL_cplus  268
#define EGALEGAL_cplus  267
#define ENUM_CLASS_cplus    266
#define PRAGMA_cplus    265
#define PARAMETERS_cplus    264
#define FUNC_HEADER_cplus   263
#define INDENT_FUNCTION_TYPE_cplus  262
#define COMMENT_PLUS_cplus  261
#define COMMENT_END_cplus   260
#define COMMENT_MIDDLE_cplus    259
#define COMMENT_START_cplus     258
#define MARGIN_VALUE_cplus  257
#define BRACE_ALIGN_VALUE_cplus     256
#define DECL_ALIGN_cplus    255
#define ASSIGN_ALIGN_cplus  254
#define SINGLE_SWITCH_INDENT_VALUE_cplus    253
#define SIMPLIFY_VALUE_cplus    252
#define SIMPLIFY_cplus  251
#define MODE_VALUE_cplus    250
#define TAB_VALUE_cplus     249
#define CONFIG_cplus    248
#define NOT_MANAGED_cplus   247
#define NO_PRETTY_cplus     246
#define ALINE_cplus     245
#define ERROR_cplus     244
#define UNDEF_cplus     243
#define TYP_AFF_BRA_cplus   242
#define TYP_AFF_CALL_cplus  241
#define MEMBER_DECLARATOR_cplus     240
#define TYP_ARRAY_cplus     239
#define COUV_cplus  238
#define FOR_DECLARATION_cplus   237
#define DECLARATION_cplus   236
#define CTOR_INITIALIZER_cplus  235
#define BRACE_MARKER_cplus  234
#define CTOR_INIT_cplus     233
#define LONGLONG_cplus  232
#define IUNLONGLONG_cplus   231
#define IUNLONG_cplus   230
#define IUN_cplus   229
#define ILONGLONG_cplus     228
#define ILONG_cplus     227
#define RANGE_MODIFIER_cplus    226
#define COND_AFF_cplus  225
#define INTE_cplus  224
#define COMPOUND_cplus  223
#define CLASS_DECL_cplus    222
#define AFER_cplus  221
#define CATCH_ANSI_cplus    220
#define EXCEPT_ANSI_ALL_cplus   219
#define CAST_cplus  218
#define TYP_BIT_cplus   217
#define PROTECT_cplus   216
#define BASE_LIST_cplus     215
#define ATTRIBUTE_CALL_cplus    214
#define XOR_AFF_cplus   213
#define OR_AFF_cplus    212
#define AND_AFF_cplus   211
#define RSH_AFF_cplus   210
#define LSH_AFF_cplus   209
#define MIN_AFF_cplus   208
#define PLU_AFF_cplus   207
#define REM_AFF_cplus   206
#define DIV_AFF_cplus   205
#define MUL_AFF_cplus   204
#define AFF_cplus   203
#define ASM_CALL_cplus  202
#define EXP_ARRAY_cplus     201
#define VAR_LIST_cplus  200
#define TYP_LIST_cplus  199
#define TYP_AFF_cplus   198
#define ABST_DECLARATOR_cplus   197
#define DECLARATOR_cplus    196
#define POINPOINPOIN_cplus  195
#define LAND_cplus  194
#define INIT_NEW_cplus  193
#define VIRG_cplus  192
#define QUALIFIED_cplus     191
#define MINUS_cplus     190
#define TYP_cplus   189
#define PFER_cplus  188
#define DESTRUCT_cplus  187
#define TYP_REF_cplus   186
#define TYP_ADDR_cplus  185
#define INFE_cplus  184
#define USING_cplus     183
#define NAMESPACE_cplus     182
#define CATCH_cplus     181
#define DPOI_cplus  180
#define PUBLIC_cplus    179
#define PROTECTED_cplus     178
#define PRIVATE_cplus   177
#define CHAPEGAL_cplus  176
#define VBAREGAL_cplus  175
#define ETCOEGAL_cplus  174
#define SUPESUPEEGAL_cplus  173
#define INFEINFEEGAL_cplus  172
#define TIREEGAL_cplus  171
#define PLUSEGAL_cplus  170
#define POURCEGAL_cplus     169
#define ETOIEGAL_cplus  168
#define EGAL_cplus  167
#define ASM_cplus   166
#define CFER_cplus  165
#define VA_ARG_cplus    164
#define DELETE_cplus    163
#define NEW_cplus   162
#define SIZEOF_cplus    161
#define TIRETIRE_cplus  160
#define PLUSPLUS_cplus  159
#define EXCL_cplus  158
#define PLUS_cplus  157
#define TIRE_cplus  156
#define POUV_cplus  155
#define DEFAULT_cplus   154
#define CASE_cplus  153
#define TRY_cplus   152
#define THROW_cplus     151
#define FORALLSONS_cplus    150
#define WHILE_cplus     149
#define SWITCH_cplus    148
#define RETURN_cplus    147
#define PVIR_cplus  146
#define IF_cplus    145
#define FOR_cplus   144
#define AOUV_cplus  143
#define DO_cplus    142
#define CONTINUE_cplus  141
#define BREAK_cplus     140
#define OPERATOR_cplus  139
#define TILD_cplus  138
#define ETCO_cplus  137
#define ETOI_cplus  136
#define UNSIGNED_cplus  135
#define SIGNED_cplus    134
#define SHORT_cplus     133
#define LONG_cplus  132
#define CHAR_cplus  131
#define INT_cplus   130
#define DPOIDPOI_cplus  129
#define VOID_cplus  128
#define FLOAT_cplus     127
#define DOUBLE_cplus    126
#define DECLTYPE_cplus  125
#define TYPENAME_cplus  124
#define CLASS_cplus     123
#define UNION_cplus     122
#define STRUCT_cplus    121
#define ENUM_cplus  120
#define CONSTEXPR_cplus     119
#define CONST_cplus     118
#define FRIEND_cplus    117
#define VIRTUAL_cplus   116
#define INLINE_cplus    115
#define __ASM___cplus   114
#define __ATTRIBUTE___cplus     113
#define VOLATILE_cplus  112
#define REGISTER_cplus  111
#define EXTERN_cplus    110
#define STATIC_cplus    109
#define AUTO_cplus  108
#define FUNC_SPEC_cplus     107
#define TRY_UPPER_cplus     106
#define END_CATCH_cplus     105
#define END_CATCH_ALL_cplus     104
#define AND_CATCH_cplus     103
#define CATCH_UPPER_cplus   102
#define CATCH_ALL_cplus     101
#define END_MESSAGE_MAP_cplus   100
#define BEGIN_MESSAGE_MAP_cplus     99
#define DECLARE_MESSAGE_MAP_cplus   98
#define IMPLEMENT_SERIAL_cplus  97
#define IMPLEMENT_DYNCREATE_cplus   96
#define IMPLEMENT_DYNAMIC_cplus     95
#define DECLARE_SERIAL_cplus    94
#define DECLARE_DYNAMIC_cplus   93
#define PUSH_FUNCTION_cplus     92
#define PUSH_ARGUMENT_cplus     91
#define UNDEF_CONTENT_cplus     90
#define SMALL_PRAGMA_CONTENT_cplus  89
#define PRAGMA_CONTENT_cplus    88
#define PRAGMA_ENUM_VERT_cplus  87
#define PRAGMA_SPACE_ARROW_cplus    86
#define PRAGMA_PARAMETERS_cplus     85
#define PRAGMA_PARAMETERS_UNDER_cplus   84
#define PRAGMA_FUNC_HEADER_cplus    83
#define PRAGMA_INDENT_FUNCTION_TYPE_cplus   82
#define PRAGMA_COMMENT_PLUS_cplus   81
#define PRAGMA_COMMENT_END_cplus    80
#define PRAGMA_COMMENT_MIDDLE_cplus     79
#define PRAGMA_COMMENT_START_cplus  78
#define PRAGMA_MARGIN_cplus     77
#define PRAGMA_DECL_ALIGN_cplus     76
#define PRAGMA_ASSIGN_ALIGN_cplus   75
#define PRAGMA_SINGLE_SWITCH_INDENT_cplus   74
#define PRAGMA_SIMPLIFY_cplus   73
#define PRAGMA_BRACE_ALIGN_cplus    72
#define PRAGMA_MODE_cplus   71
#define PRAGMA_RANGE_cplus  70
#define PRAGMA_TAB_cplus    69
#define PRAGMA_TAB_DIRECTIVE_cplus  68
#define PRAGMA_CONFIG_cplus     67
#define PRAGMA_NOT_MANAGED_cplus    66
#define PRAGMA_MANAGED_cplus    65
#define PRAGMA_NOPRETTY_cplus   64
#define PRAGMA_PRETTY_cplus     63
#define INCLUDE_LOCAL_cplus     62
#define INCLUDE_SYS_cplus   61
#define END_LINE_cplus  60
#define DEFINE_NAME_cplus   59
#define DEFINED_NOT_CONTINUED_cplus     58
#define DEFINED_CONTINUED_cplus     57
#define POINT_cplus     56
#define SLAS_cplus  55
#define SLASEGAL_cplus  54
#define CARRIAGE_RETURN_cplus   53
#define SHARP_VAL_cplus     52
#define LINE_REFERENCE_DIR_cplus    51
#define UNDEF_DIR_cplus     50
#define DEFINE_DIR_cplus    49
#define ERROR_DIR_cplus     48
#define PRAGMA_DIR_cplus    47
#define LINE_DIR_cplus  46
#define ENDIF_DIR_cplus     45
#define ELIF_DIR_cplus  44
#define ELSE_DIR_cplus  43
#define IF_DIR_cplus    42
#define IFNDEF_DIR_cplus    41
#define IFDEF_DIR_cplus     40
#define INCLUDE_DIR_cplus   39
#define OCTAL_cplus     38
#define UOCTAL_cplus    37
#define LOCTAL_cplus    36
#define ULOCTAL_cplus   35
#define LLOCTAL_cplus   34
#define ULLOCTAL_cplus  33
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
