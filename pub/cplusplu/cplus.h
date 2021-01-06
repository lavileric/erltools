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
    
    cplus () {
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
    static signed char * _tokenArray [152];
    static int (cplus::*(_tokenFuncArray [152])) ();
    static int _tokenNbFuncArray [152];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        TUNSIGNED =     356 ,
        BDECR =     355 ,
        BINCR =     354 ,
        ADDR =  353 ,
        NOT =   352 ,
        LNEG =  351 ,
        POS =   350 ,
        NEG =   349 ,
        PARAM_TYPE =    348 ,
        STRING_LIST =   347 ,
        LABEL =     346 ,
        THROW_ANSI =    345 ,
        ELSE =  344 ,
        DECL_TYPE =     343 ,
        TIDENT =    342 ,
        TSIGNED =   341 ,
        TSHORT =    340 ,
        TCHAR =     339 ,
        TINT =  338 ,
        RSHI =  337 ,
        LSHI =  336 ,
        LT =    335 ,
        GT =    334 ,
        GEQU =  333 ,
        LEQU =  332 ,
        SPACE_ARROW =   331 ,
        TAB_DIRECTIVE =     330 ,
        ENUM_PARAMETERS_UNDER =     329 ,
        ENUM_VERT_VALUE =   328 ,
        PROTECT_MEMB =  327 ,
        LANGUAGE =  326 ,
        EXP =   325 ,
        ADECR =     324 ,
        AINCR =     323 ,
        ARROW =     322 ,
        REF =   321 ,
        EXP_ARRAY =     320 ,
        EXP_BRA =   319 ,
        EXP_LIST =  318 ,
        ARROW_MEMB =    317 ,
        DOT_MEMB =  316 ,
        POINETOI =  315 ,
        TIRESUPEETOI =  314 ,
        TIRESUPE =  313 ,
        SUPESUPE =  312 ,
        INFEINFE =  311 ,
        SUPEEGAL =  310 ,
        INFEEGAL =  309 ,
        NONE =  308 ,
        NEW_DECLARATOR =    307 ,
        USING_NAMESPACE =   306 ,
        NAMESPACE_ALIAS =   305 ,
        REM =   304 ,
        DIV =   303 ,
        MUL =   302 ,
        POURC =     301 ,
        MESSAGE_MAP =   300 ,
        MACRO =     299 ,
        TDOUBLE =   298 ,
        TFLOAT =    297 ,
        TLONG =     296 ,
        OR =    295 ,
        VBARVBAR =  294 ,
        AND =   293 ,
        ETCOETCO =  292 ,
        COMPOUND_EXT =  291 ,
        EXTERNAL =  290 ,
        INLINE_NAMESPACE =  289 ,
        INITIALIZER =   288 ,
        LOR =   287 ,
        VBAR =  286 ,
        DELETE_FUNCTION =   285 ,
        FUNC =  284 ,
        ALL_OF =    283 ,
        EXTENSION =     282 ,
        __EXTENSION__ =     281 ,
        STAT_VOID =     280 ,
        TYPEDEF =   279 ,
        TEMPLATE_DECL =     278 ,
        SUPE =  277 ,
        CLASS_PARAM =   276 ,
        TEMPLATE =  275 ,
        EXP_SEQ =   274 ,
        LXOR =  273 ,
        CHAP =  272 ,
        EXCEPTION_LIST =    271 ,
        EXCEPTION_ANSI =    270 ,
        EXCEPTION =     269 ,
        NEQU =  268 ,
        EQU =   267 ,
        EXCLEGAL =  266 ,
        EGALEGAL =  265 ,
        ENUM_CLASS =    264 ,
        PRAGMA =    263 ,
        PARAMETERS =    262 ,
        FUNC_HEADER =   261 ,
        INDENT_FUNCTION_TYPE =  260 ,
        COMMENT_PLUS =  259 ,
        COMMENT_END =   258 ,
        COMMENT_MIDDLE =    257 ,
        COMMENT_START =     256 ,
        MARGIN_VALUE =  255 ,
        BRACE_ALIGN_VALUE =     254 ,
        DECL_ALIGN =    253 ,
        ASSIGN_ALIGN =  252 ,
        SINGLE_SWITCH_INDENT_VALUE =    251 ,
        SIMPLIFY_VALUE =    250 ,
        SIMPLIFY =  249 ,
        MODE_VALUE =    248 ,
        TAB_VALUE =     247 ,
        CONFIG =    246 ,
        NOT_MANAGED =   245 ,
        NO_PRETTY =     244 ,
        ALINE =     243 ,
        ERROR =     242 ,
        UNDEF =     241 ,
        TYP_AFF_BRA =   240 ,
        TYP_AFF_CALL =  239 ,
        MEMBER_DECLARATOR =     238 ,
        TYP_ARRAY =     237 ,
        CFER =  236 ,
        COUV =  235 ,
        FOR_DECLARATION =   234 ,
        DECLARATION =   233 ,
        CTOR_INITIALIZER =  232 ,
        BRACE_MARKER =  231 ,
        CTOR_INIT =     230 ,
        LONGLONG =  229 ,
        IUNLONGLONG =   228 ,
        IUNLONG =   227 ,
        IUN =   226 ,
        ILONGLONG =     225 ,
        ILONG =     224 ,
        RANGE_MODIFIER =    223 ,
        COND_AFF =  222 ,
        INTE =  221 ,
        COMPOUND =  220 ,
        CLASS_DECL =    219 ,
        AFER =  218 ,
        CATCH_ANSI =    217 ,
        EXCEPT_ANSI_ALL =   216 ,
        CAST =  215 ,
        TYP_BIT =   214 ,
        PROTECT =   213 ,
        BASE_LIST =     212 ,
        ATTRIBUTE_CALL =    211 ,
        XOR_AFF =   210 ,
        OR_AFF =    209 ,
        AND_AFF =   208 ,
        RSH_AFF =   207 ,
        LSH_AFF =   206 ,
        MIN_AFF =   205 ,
        PLU_AFF =   204 ,
        REM_AFF =   203 ,
        DIV_AFF =   202 ,
        MUL_AFF =   201 ,
        AFF =   200 ,
        ASM_CALL =  199 ,
        VAR_LIST =  198 ,
        TYP_LIST =  197 ,
        TYP_AFF =   196 ,
        ABST_DECLARATOR =   195 ,
        DECLARATOR =    194 ,
        POINPOINPOIN =  193 ,
        LAND =  192 ,
        INIT_NEW =  191 ,
        VIRG =  190 ,
        QUALIFIED =     189 ,
        MINUS =     188 ,
        TYP =   187 ,
        PFER =  186 ,
        DESTRUCT =  185 ,
        TYP_REF =   184 ,
        TYP_ADDR =  183 ,
        INFE =  182 ,
        USING =     181 ,
        NAMESPACE =     180 ,
        CATCH =     179 ,
        DPOI =  178 ,
        PUBLIC =    177 ,
        PROTECTED =     176 ,
        PRIVATE =   175 ,
        CHAPEGAL =  174 ,
        VBAREGAL =  173 ,
        ETCOEGAL =  172 ,
        SUPESUPEEGAL =  171 ,
        INFEINFEEGAL =  170 ,
        TIREEGAL =  169 ,
        PLUSEGAL =  168 ,
        POURCEGAL =     167 ,
        ETOIEGAL =  166 ,
        EGAL =  165 ,
        ASM =   164 ,
        VA_ARG =    163 ,
        DELETE =    162 ,
        NEW =   161 ,
        SIZEOF =    160 ,
        TIRETIRE =  159 ,
        PLUSPLUS =  158 ,
        EXCL =  157 ,
        PLUS =  156 ,
        TIRE =  155 ,
        POUV =  154 ,
        DEFAULT =   153 ,
        CASE =  152 ,
        TRY =   151 ,
        THROW =     150 ,
        FORALLSONS =    149 ,
        WHILE =     148 ,
        SWITCH =    147 ,
        RETURN =    146 ,
        PVIR =  145 ,
        IF =    144 ,
        FOR =   143 ,
        AOUV =  142 ,
        DO =    141 ,
        CONTINUE =  140 ,
        BREAK =     139 ,
        OPERATOR =  138 ,
        TILD =  137 ,
        ETCO =  136 ,
        ETOI =  135 ,
        UNSIGNED =  134 ,
        SIGNED =    133 ,
        SHORT =     132 ,
        LONG =  131 ,
        CHAR =  130 ,
        INT =   129 ,
        DPOIDPOI =  128 ,
        VOID =  127 ,
        FLOAT =     126 ,
        DOUBLE =    125 ,
        DECLTYPE =  124 ,
        TYPENAME =  123 ,
        CLASS =     122 ,
        UNION =     121 ,
        STRUCT =    120 ,
        ENUM =  119 ,
        CONSTEXPR =     118 ,
        CONST =     117 ,
        FRIEND =    116 ,
        VIRTUAL =   115 ,
        INLINE =    114 ,
        __ASM__ =   113 ,
        __ATTRIBUTE__ =     112 ,
        VOLATILE =  111 ,
        REGISTER =  110 ,
        EXTERN =    109 ,
        STATIC =    108 ,
        AUTO =  107 ,
        FUNC_SPEC =     106 ,
        TRY_UPPER =     105 ,
        END_CATCH =     104 ,
        END_CATCH_ALL =     103 ,
        AND_CATCH =     102 ,
        CATCH_UPPER =   101 ,
        CATCH_ALL =     100 ,
        END_MESSAGE_MAP =   99 ,
        BEGIN_MESSAGE_MAP =     98 ,
        DECLARE_MESSAGE_MAP =   97 ,
        IMPLEMENT_SERIAL =  96 ,
        IMPLEMENT_DYNCREATE =   95 ,
        IMPLEMENT_DYNAMIC =     94 ,
        DECLARE_SERIAL =    93 ,
        DECLARE_DYNAMIC =   92 ,
        PUSH_FUNCTION =     91 ,
        PUSH_ARGUMENT =     90 ,
        UNDEF_CONTENT =     89 ,
        SMALL_PRAGMA_CONTENT =  88 ,
        PRAGMA_CONTENT =    87 ,
        PRAGMA_ENUM_VERT =  86 ,
        PRAGMA_SPACE_ARROW =    85 ,
        PRAGMA_PARAMETERS =     84 ,
        PRAGMA_PARAMETERS_UNDER =   83 ,
        PRAGMA_FUNC_HEADER =    82 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   81 ,
        PRAGMA_COMMENT_PLUS =   80 ,
        PRAGMA_COMMENT_END =    79 ,
        PRAGMA_COMMENT_MIDDLE =     78 ,
        PRAGMA_COMMENT_START =  77 ,
        PRAGMA_MARGIN =     76 ,
        PRAGMA_DECL_ALIGN =     75 ,
        PRAGMA_ASSIGN_ALIGN =   74 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   73 ,
        PRAGMA_SIMPLIFY =   72 ,
        PRAGMA_BRACE_ALIGN =    71 ,
        PRAGMA_MODE =   70 ,
        PRAGMA_RANGE =  69 ,
        PRAGMA_TAB =    68 ,
        PRAGMA_TAB_DIRECTIVE =  67 ,
        PRAGMA_CONFIG =     66 ,
        PRAGMA_NOT_MANAGED =    65 ,
        PRAGMA_MANAGED =    64 ,
        PRAGMA_NOPRETTY =   63 ,
        PRAGMA_PRETTY =     62 ,
        INCLUDE_LOCAL =     61 ,
        INCLUDE_SYS =   60 ,
        END_LINE =  59 ,
        DEFINE_NAME =   58 ,
        DEFINED_NOT_CONTINUED =     57 ,
        DEFINED_CONTINUED =     56 ,
        POINT =     55 ,
        SLAS =  54 ,
        SLASEGAL =  53 ,
        CARRIAGE_RETURN =   52 ,
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
        INTEGER =   26 ,
        FLOATVAL =  25 ,
        UINTEGER =  24 ,
        LINTEGER =  23 ,
        LLINTEGER =     22 ,
        ULLINTEGER =    21 ,
        ULINTEGER =     20 ,
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
#define TUNSIGNED_cplus     356
#define BDECR_cplus     355
#define BINCR_cplus     354
#define ADDR_cplus  353
#define NOT_cplus   352
#define LNEG_cplus  351
#define POS_cplus   350
#define NEG_cplus   349
#define PARAM_TYPE_cplus    348
#define STRING_LIST_cplus   347
#define LABEL_cplus     346
#define THROW_ANSI_cplus    345
#define ELSE_cplus  344
#define DECL_TYPE_cplus     343
#define TIDENT_cplus    342
#define TSIGNED_cplus   341
#define TSHORT_cplus    340
#define TCHAR_cplus     339
#define TINT_cplus  338
#define RSHI_cplus  337
#define LSHI_cplus  336
#define LT_cplus    335
#define GT_cplus    334
#define GEQU_cplus  333
#define LEQU_cplus  332
#define SPACE_ARROW_cplus   331
#define TAB_DIRECTIVE_cplus     330
#define ENUM_PARAMETERS_UNDER_cplus     329
#define ENUM_VERT_VALUE_cplus   328
#define PROTECT_MEMB_cplus  327
#define LANGUAGE_cplus  326
#define EXP_cplus   325
#define ADECR_cplus     324
#define AINCR_cplus     323
#define ARROW_cplus     322
#define REF_cplus   321
#define EXP_ARRAY_cplus     320
#define EXP_BRA_cplus   319
#define EXP_LIST_cplus  318
#define ARROW_MEMB_cplus    317
#define DOT_MEMB_cplus  316
#define POINETOI_cplus  315
#define TIRESUPEETOI_cplus  314
#define TIRESUPE_cplus  313
#define SUPESUPE_cplus  312
#define INFEINFE_cplus  311
#define SUPEEGAL_cplus  310
#define INFEEGAL_cplus  309
#define NONE_cplus  308
#define NEW_DECLARATOR_cplus    307
#define USING_NAMESPACE_cplus   306
#define NAMESPACE_ALIAS_cplus   305
#define REM_cplus   304
#define DIV_cplus   303
#define MUL_cplus   302
#define POURC_cplus     301
#define MESSAGE_MAP_cplus   300
#define MACRO_cplus     299
#define TDOUBLE_cplus   298
#define TFLOAT_cplus    297
#define TLONG_cplus     296
#define OR_cplus    295
#define VBARVBAR_cplus  294
#define AND_cplus   293
#define ETCOETCO_cplus  292
#define COMPOUND_EXT_cplus  291
#define EXTERNAL_cplus  290
#define INLINE_NAMESPACE_cplus  289
#define INITIALIZER_cplus   288
#define LOR_cplus   287
#define VBAR_cplus  286
#define DELETE_FUNCTION_cplus   285
#define FUNC_cplus  284
#define ALL_OF_cplus    283
#define EXTENSION_cplus     282
#define __EXTENSION___cplus     281
#define STAT_VOID_cplus     280
#define TYPEDEF_cplus   279
#define TEMPLATE_DECL_cplus     278
#define SUPE_cplus  277
#define CLASS_PARAM_cplus   276
#define TEMPLATE_cplus  275
#define EXP_SEQ_cplus   274
#define LXOR_cplus  273
#define CHAP_cplus  272
#define EXCEPTION_LIST_cplus    271
#define EXCEPTION_ANSI_cplus    270
#define EXCEPTION_cplus     269
#define NEQU_cplus  268
#define EQU_cplus   267
#define EXCLEGAL_cplus  266
#define EGALEGAL_cplus  265
#define ENUM_CLASS_cplus    264
#define PRAGMA_cplus    263
#define PARAMETERS_cplus    262
#define FUNC_HEADER_cplus   261
#define INDENT_FUNCTION_TYPE_cplus  260
#define COMMENT_PLUS_cplus  259
#define COMMENT_END_cplus   258
#define COMMENT_MIDDLE_cplus    257
#define COMMENT_START_cplus     256
#define MARGIN_VALUE_cplus  255
#define BRACE_ALIGN_VALUE_cplus     254
#define DECL_ALIGN_cplus    253
#define ASSIGN_ALIGN_cplus  252
#define SINGLE_SWITCH_INDENT_VALUE_cplus    251
#define SIMPLIFY_VALUE_cplus    250
#define SIMPLIFY_cplus  249
#define MODE_VALUE_cplus    248
#define TAB_VALUE_cplus     247
#define CONFIG_cplus    246
#define NOT_MANAGED_cplus   245
#define NO_PRETTY_cplus     244
#define ALINE_cplus     243
#define ERROR_cplus     242
#define UNDEF_cplus     241
#define TYP_AFF_BRA_cplus   240
#define TYP_AFF_CALL_cplus  239
#define MEMBER_DECLARATOR_cplus     238
#define TYP_ARRAY_cplus     237
#define CFER_cplus  236
#define COUV_cplus  235
#define FOR_DECLARATION_cplus   234
#define DECLARATION_cplus   233
#define CTOR_INITIALIZER_cplus  232
#define BRACE_MARKER_cplus  231
#define CTOR_INIT_cplus     230
#define LONGLONG_cplus  229
#define IUNLONGLONG_cplus   228
#define IUNLONG_cplus   227
#define IUN_cplus   226
#define ILONGLONG_cplus     225
#define ILONG_cplus     224
#define RANGE_MODIFIER_cplus    223
#define COND_AFF_cplus  222
#define INTE_cplus  221
#define COMPOUND_cplus  220
#define CLASS_DECL_cplus    219
#define AFER_cplus  218
#define CATCH_ANSI_cplus    217
#define EXCEPT_ANSI_ALL_cplus   216
#define CAST_cplus  215
#define TYP_BIT_cplus   214
#define PROTECT_cplus   213
#define BASE_LIST_cplus     212
#define ATTRIBUTE_CALL_cplus    211
#define XOR_AFF_cplus   210
#define OR_AFF_cplus    209
#define AND_AFF_cplus   208
#define RSH_AFF_cplus   207
#define LSH_AFF_cplus   206
#define MIN_AFF_cplus   205
#define PLU_AFF_cplus   204
#define REM_AFF_cplus   203
#define DIV_AFF_cplus   202
#define MUL_AFF_cplus   201
#define AFF_cplus   200
#define ASM_CALL_cplus  199
#define VAR_LIST_cplus  198
#define TYP_LIST_cplus  197
#define TYP_AFF_cplus   196
#define ABST_DECLARATOR_cplus   195
#define DECLARATOR_cplus    194
#define POINPOINPOIN_cplus  193
#define LAND_cplus  192
#define INIT_NEW_cplus  191
#define VIRG_cplus  190
#define QUALIFIED_cplus     189
#define MINUS_cplus     188
#define TYP_cplus   187
#define PFER_cplus  186
#define DESTRUCT_cplus  185
#define TYP_REF_cplus   184
#define TYP_ADDR_cplus  183
#define INFE_cplus  182
#define USING_cplus     181
#define NAMESPACE_cplus     180
#define CATCH_cplus     179
#define DPOI_cplus  178
#define PUBLIC_cplus    177
#define PROTECTED_cplus     176
#define PRIVATE_cplus   175
#define CHAPEGAL_cplus  174
#define VBAREGAL_cplus  173
#define ETCOEGAL_cplus  172
#define SUPESUPEEGAL_cplus  171
#define INFEINFEEGAL_cplus  170
#define TIREEGAL_cplus  169
#define PLUSEGAL_cplus  168
#define POURCEGAL_cplus     167
#define ETOIEGAL_cplus  166
#define EGAL_cplus  165
#define ASM_cplus   164
#define VA_ARG_cplus    163
#define DELETE_cplus    162
#define NEW_cplus   161
#define SIZEOF_cplus    160
#define TIRETIRE_cplus  159
#define PLUSPLUS_cplus  158
#define EXCL_cplus  157
#define PLUS_cplus  156
#define TIRE_cplus  155
#define POUV_cplus  154
#define DEFAULT_cplus   153
#define CASE_cplus  152
#define TRY_cplus   151
#define THROW_cplus     150
#define FORALLSONS_cplus    149
#define WHILE_cplus     148
#define SWITCH_cplus    147
#define RETURN_cplus    146
#define PVIR_cplus  145
#define IF_cplus    144
#define FOR_cplus   143
#define AOUV_cplus  142
#define DO_cplus    141
#define CONTINUE_cplus  140
#define BREAK_cplus     139
#define OPERATOR_cplus  138
#define TILD_cplus  137
#define ETCO_cplus  136
#define ETOI_cplus  135
#define UNSIGNED_cplus  134
#define SIGNED_cplus    133
#define SHORT_cplus     132
#define LONG_cplus  131
#define CHAR_cplus  130
#define INT_cplus   129
#define DPOIDPOI_cplus  128
#define VOID_cplus  127
#define FLOAT_cplus     126
#define DOUBLE_cplus    125
#define DECLTYPE_cplus  124
#define TYPENAME_cplus  123
#define CLASS_cplus     122
#define UNION_cplus     121
#define STRUCT_cplus    120
#define ENUM_cplus  119
#define CONSTEXPR_cplus     118
#define CONST_cplus     117
#define FRIEND_cplus    116
#define VIRTUAL_cplus   115
#define INLINE_cplus    114
#define __ASM___cplus   113
#define __ATTRIBUTE___cplus     112
#define VOLATILE_cplus  111
#define REGISTER_cplus  110
#define EXTERN_cplus    109
#define STATIC_cplus    108
#define AUTO_cplus  107
#define FUNC_SPEC_cplus     106
#define TRY_UPPER_cplus     105
#define END_CATCH_cplus     104
#define END_CATCH_ALL_cplus     103
#define AND_CATCH_cplus     102
#define CATCH_UPPER_cplus   101
#define CATCH_ALL_cplus     100
#define END_MESSAGE_MAP_cplus   99
#define BEGIN_MESSAGE_MAP_cplus     98
#define DECLARE_MESSAGE_MAP_cplus   97
#define IMPLEMENT_SERIAL_cplus  96
#define IMPLEMENT_DYNCREATE_cplus   95
#define IMPLEMENT_DYNAMIC_cplus     94
#define DECLARE_SERIAL_cplus    93
#define DECLARE_DYNAMIC_cplus   92
#define PUSH_FUNCTION_cplus     91
#define PUSH_ARGUMENT_cplus     90
#define UNDEF_CONTENT_cplus     89
#define SMALL_PRAGMA_CONTENT_cplus  88
#define PRAGMA_CONTENT_cplus    87
#define PRAGMA_ENUM_VERT_cplus  86
#define PRAGMA_SPACE_ARROW_cplus    85
#define PRAGMA_PARAMETERS_cplus     84
#define PRAGMA_PARAMETERS_UNDER_cplus   83
#define PRAGMA_FUNC_HEADER_cplus    82
#define PRAGMA_INDENT_FUNCTION_TYPE_cplus   81
#define PRAGMA_COMMENT_PLUS_cplus   80
#define PRAGMA_COMMENT_END_cplus    79
#define PRAGMA_COMMENT_MIDDLE_cplus     78
#define PRAGMA_COMMENT_START_cplus  77
#define PRAGMA_MARGIN_cplus     76
#define PRAGMA_DECL_ALIGN_cplus     75
#define PRAGMA_ASSIGN_ALIGN_cplus   74
#define PRAGMA_SINGLE_SWITCH_INDENT_cplus   73
#define PRAGMA_SIMPLIFY_cplus   72
#define PRAGMA_BRACE_ALIGN_cplus    71
#define PRAGMA_MODE_cplus   70
#define PRAGMA_RANGE_cplus  69
#define PRAGMA_TAB_cplus    68
#define PRAGMA_TAB_DIRECTIVE_cplus  67
#define PRAGMA_CONFIG_cplus     66
#define PRAGMA_NOT_MANAGED_cplus    65
#define PRAGMA_MANAGED_cplus    64
#define PRAGMA_NOPRETTY_cplus   63
#define PRAGMA_PRETTY_cplus     62
#define INCLUDE_LOCAL_cplus     61
#define INCLUDE_SYS_cplus   60
#define END_LINE_cplus  59
#define DEFINE_NAME_cplus   58
#define DEFINED_NOT_CONTINUED_cplus     57
#define DEFINED_CONTINUED_cplus     56
#define POINT_cplus     55
#define SLAS_cplus  54
#define SLASEGAL_cplus  53
#define CARRIAGE_RETURN_cplus   52
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
#define INTEGER_cplus   26
#define FLOATVAL_cplus  25
#define UINTEGER_cplus  24
#define LINTEGER_cplus  23
#define LLINTEGER_cplus     22
#define ULLINTEGER_cplus    21
#define ULINTEGER_cplus     20
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
