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
    virtual PPTREE asm_declaration ( int error_free) ;
    virtual PPTREE assignment_end ( int error_free) ;
    virtual PPTREE assignment_expression ( int error_free) ;
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
    virtual PPTREE inside_declaration ( int error_free) ;
    virtual PPTREE inside_declaration1 ( int error_free) ;
    virtual PPTREE inside_declaration2 ( int error_free) ;
    virtual PPTREE inside_declaration_extension ( int error_free) ;
    virtual PPTREE label_beg ( int error_free) ;
    virtual PPTREE linkage_specification ( int error_free) ;
    virtual PPTREE logical_and_expression ( int error_free) ;
    virtual PPTREE logical_or_expression ( int error_free) ;
    virtual PPTREE long_short_int_char ( int error_free) ;
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
    
    
    int keepCarriage;
    int keepAll;
    int switchContext;
    int noString;
    static signed char * _tokenArray [145];
    static int (cplus::*(_tokenFuncArray [145])) ();
    static int _tokenNbFuncArray [145];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        BDECR =     337 ,
        BINCR =     336 ,
        ADDR =  335 ,
        NOT =   334 ,
        LNEG =  333 ,
        POS =   332 ,
        NEG =   331 ,
        PARAM_TYPE =    330 ,
        STRING_LIST =   329 ,
        LABEL =     328 ,
        THROW_ANSI =    327 ,
        ELSE =  326 ,
        TUNSIGNED =     325 ,
        TSIGNED =   324 ,
        TFLOAT =    323 ,
        TDOUBLE =   322 ,
        TIDENT =    321 ,
        RSHI =  320 ,
        LSHI =  319 ,
        LT =    318 ,
        GT =    317 ,
        GEQU =  316 ,
        LEQU =  315 ,
        SPACE_ARROW =   314 ,
        TAB_DIRECTIVE =     313 ,
        ENUM_PARAMETERS_UNDER =     312 ,
        ENUM_VERT_VALUE =   311 ,
        PROTECT_MEMB =  310 ,
        LANGUAGE =  309 ,
        EXP =   308 ,
        ADECR =     307 ,
        AINCR =     306 ,
        ARROW =     305 ,
        REF =   304 ,
        EXP_ARRAY =     303 ,
        EXP_LIST =  302 ,
        ARROW_MEMB =    301 ,
        DOT_MEMB =  300 ,
        POINETOI =  299 ,
        TIRESUPEETOI =  298 ,
        TIRESUPE =  297 ,
        SUPESUPE =  296 ,
        INFEINFE =  295 ,
        SUPEEGAL =  294 ,
        INFEEGAL =  293 ,
        NONE =  292 ,
        NEW_DECLARATOR =    291 ,
        USING_NAMESPACE =   290 ,
        NAMESPACE_ALIAS =   289 ,
        REM =   288 ,
        DIV =   287 ,
        MUL =   286 ,
        POURC =     285 ,
        MESSAGE_MAP =   284 ,
        MACRO =     283 ,
        TCHAR =     282 ,
        TSHORT =    281 ,
        TLONG =     280 ,
        TINT =  279 ,
        OR =    278 ,
        VBARVBAR =  277 ,
        AND =   276 ,
        ETCOETCO =  275 ,
        COMPOUND_EXT =  274 ,
        EXTERNAL =  273 ,
        INITIALIZER =   272 ,
        LOR =   271 ,
        VBAR =  270 ,
        FUNC =  269 ,
        ALL_OF =    268 ,
        STAT_VOID =     267 ,
        TEMPLATE_DECL =     266 ,
        SUPE =  265 ,
        CLASS_PARAM =   264 ,
        EXP_SEQ =   263 ,
        LXOR =  262 ,
        CHAP =  261 ,
        EXCEPTION_LIST =    260 ,
        EXCEPTION_ANSI =    259 ,
        EXCEPTION =     258 ,
        NEQU =  257 ,
        EQU =   256 ,
        EXCLEGAL =  255 ,
        EGALEGAL =  254 ,
        PRAGMA =    253 ,
        PARAMETERS =    252 ,
        FUNC_HEADER =   251 ,
        INDENT_FUNCTION_TYPE =  250 ,
        COMMENT_PLUS =  249 ,
        COMMENT_END =   248 ,
        COMMENT_MIDDLE =    247 ,
        COMMENT_START =     246 ,
        MARGIN_VALUE =  245 ,
        BRACE_ALIGN_VALUE =     244 ,
        DECL_ALIGN =    243 ,
        ASSIGN_ALIGN =  242 ,
        SINGLE_SWITCH_INDENT_VALUE =    241 ,
        SIMPLIFY_VALUE =    240 ,
        SIMPLIFY =  239 ,
        MODE_VALUE =    238 ,
        TAB_VALUE =     237 ,
        CONFIG =    236 ,
        NO_PRETTY =     235 ,
        ALINE =     234 ,
        ERROR =     233 ,
        UNDEF =     232 ,
        TYP_AFF_CALL =  231 ,
        MEMBER_DECLARATOR =     230 ,
        TYP_ARRAY =     229 ,
        CFER =  228 ,
        COUV =  227 ,
        FOR_DECLARATION =   226 ,
        DECLARATION =   225 ,
        CTOR_INITIALIZER =  224 ,
        CTOR_INIT =     223 ,
        LONGLONG =  222 ,
        IUNLONGLONG =   221 ,
        IUNLONG =   220 ,
        IUN =   219 ,
        ILONGLONG =     218 ,
        ILONG =     217 ,
        RANGE_MODIFIER =    216 ,
        COND_AFF =  215 ,
        INTE =  214 ,
        COMPOUND =  213 ,
        CLASS_DECL =    212 ,
        AFER =  211 ,
        CATCH_ANSI =    210 ,
        EXCEPT_ANSI_ALL =   209 ,
        CAST =  208 ,
        DPOI =  207 ,
        TYP_BIT =   206 ,
        PROTECT =   205 ,
        BASE_LIST =     204 ,
        XOR_AFF =   203 ,
        OR_AFF =    202 ,
        AND_AFF =   201 ,
        RSH_AFF =   200 ,
        LSH_AFF =   199 ,
        MIN_AFF =   198 ,
        PLU_AFF =   197 ,
        REM_AFF =   196 ,
        DIV_AFF =   195 ,
        MUL_AFF =   194 ,
        AFF =   193 ,
        VAR_LIST =  192 ,
        TYP_LIST =  191 ,
        TYP_AFF =   190 ,
        ABST_DECLARATOR =   189 ,
        DECLARATOR =    188 ,
        POINPOINPOIN =  187 ,
        LAND =  186 ,
        INIT_NEW =  185 ,
        VIRG =  184 ,
        QUALIFIED =     183 ,
        MINUS =     182 ,
        TYP =   181 ,
        PFER =  180 ,
        DESTRUCT =  179 ,
        TYP_REF =   178 ,
        TYP_ADDR =  177 ,
        INFE =  176 ,
        USING =     175 ,
        NAMESPACE =     174 ,
        TYPEDEF =   173 ,
        TEMPLATE =  172 ,
        CATCH =     171 ,
        PUBLIC =    170 ,
        PROTECTED =     169 ,
        PRIVATE =   168 ,
        CHAPEGAL =  167 ,
        VBAREGAL =  166 ,
        ETCOEGAL =  165 ,
        SUPESUPEEGAL =  164 ,
        INFEINFEEGAL =  163 ,
        TIREEGAL =  162 ,
        PLUSEGAL =  161 ,
        POURCEGAL =     160 ,
        ETOIEGAL =  159 ,
        EGAL =  158 ,
        ASM =   157 ,
        VA_ARG =    156 ,
        DELETE =    155 ,
        NEW =   154 ,
        SIZEOF =    153 ,
        TIRETIRE =  152 ,
        PLUSPLUS =  151 ,
        EXCL =  150 ,
        PLUS =  149 ,
        TIRE =  148 ,
        POUV =  147 ,
        DEFAULT =   146 ,
        CASE =  145 ,
        TRY =   144 ,
        THROW =     143 ,
        FORALLSONS =    142 ,
        WHILE =     141 ,
        SWITCH =    140 ,
        RETURN =    139 ,
        PVIR =  138 ,
        IF =    137 ,
        FOR =   136 ,
        AOUV =  135 ,
        DO =    134 ,
        CONTINUE =  133 ,
        BREAK =     132 ,
        OPERATOR =  131 ,
        TILD =  130 ,
        ETCO =  129 ,
        ETOI =  128 ,
        SHORT =     127 ,
        UNSIGNED =  126 ,
        SIGNED =    125 ,
        LONG =  124 ,
        DPOIDPOI =  123 ,
        VOID =  122 ,
        FLOAT =     121 ,
        CHAR =  120 ,
        INT =   119 ,
        DOUBLE =    118 ,
        TYPENAME =  117 ,
        CLASS =     116 ,
        UNION =     115 ,
        STRUCT =    114 ,
        ENUM =  113 ,
        CONST =     112 ,
        FRIEND =    111 ,
        VIRTUAL =   110 ,
        INLINE =    109 ,
        VOLATILE =  108 ,
        REGISTER =  107 ,
        EXTERN =    106 ,
        STATIC =    105 ,
        AUTO =  104 ,
        FUNC_SPEC =     103 ,
        TRY_UPPER =     102 ,
        END_CATCH =     101 ,
        END_CATCH_ALL =     100 ,
        AND_CATCH =     99 ,
        CATCH_UPPER =   98 ,
        CATCH_ALL =     97 ,
        END_MESSAGE_MAP =   96 ,
        BEGIN_MESSAGE_MAP =     95 ,
        DECLARE_MESSAGE_MAP =   94 ,
        IMPLEMENT_SERIAL =  93 ,
        IMPLEMENT_DYNCREATE =   92 ,
        IMPLEMENT_DYNAMIC =     91 ,
        DECLARE_SERIAL =    90 ,
        DECLARE_DYNAMIC =   89 ,
        PUSH_FUNCTION =     88 ,
        PUSH_ARGUMENT =     87 ,
        UNDEF_CONTENT =     86 ,
        SMALL_PRAGMA_CONTENT =  85 ,
        PRAGMA_CONTENT =    84 ,
        PRAGMA_ENUM_VERT =  83 ,
        PRAGMA_SPACE_ARROW =    82 ,
        PRAGMA_PARAMETERS =     81 ,
        PRAGMA_PARAMETERS_UNDER =   80 ,
        PRAGMA_FUNC_HEADER =    79 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   78 ,
        PRAGMA_COMMENT_PLUS =   77 ,
        PRAGMA_COMMENT_END =    76 ,
        PRAGMA_COMMENT_MIDDLE =     75 ,
        PRAGMA_COMMENT_START =  74 ,
        PRAGMA_MARGIN =     73 ,
        PRAGMA_DECL_ALIGN =     72 ,
        PRAGMA_ASSIGN_ALIGN =   71 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   70 ,
        PRAGMA_SIMPLIFY =   69 ,
        PRAGMA_BRACE_ALIGN =    68 ,
        PRAGMA_MODE =   67 ,
        PRAGMA_RANGE =  66 ,
        PRAGMA_TAB =    65 ,
        PRAGMA_TAB_DIRECTIVE =  64 ,
        PRAGMA_CONFIG =     63 ,
        PRAGMA_NOPRETTY =   62 ,
        PRAGMA_PRETTY =     61 ,
        INCLUDE_LOCAL =     60 ,
        INCLUDE_SYS =   59 ,
        END_LINE =  58 ,
        DEFINE_NAME =   57 ,
        DEFINED_NOT_CONTINUED =     56 ,
        DEFINED_CONTINUED =     55 ,
        POINT =     54 ,
        SLAS =  53 ,
        SLASEGAL =  52 ,
        CARRIAGE_RETURN =   51 ,
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
#define BDECR_cplus     337
#define BINCR_cplus     336
#define ADDR_cplus  335
#define NOT_cplus   334
#define LNEG_cplus  333
#define POS_cplus   332
#define NEG_cplus   331
#define PARAM_TYPE_cplus    330
#define STRING_LIST_cplus   329
#define LABEL_cplus     328
#define THROW_ANSI_cplus    327
#define ELSE_cplus  326
#define TUNSIGNED_cplus     325
#define TSIGNED_cplus   324
#define TFLOAT_cplus    323
#define TDOUBLE_cplus   322
#define TIDENT_cplus    321
#define RSHI_cplus  320
#define LSHI_cplus  319
#define LT_cplus    318
#define GT_cplus    317
#define GEQU_cplus  316
#define LEQU_cplus  315
#define SPACE_ARROW_cplus   314
#define TAB_DIRECTIVE_cplus     313
#define ENUM_PARAMETERS_UNDER_cplus     312
#define ENUM_VERT_VALUE_cplus   311
#define PROTECT_MEMB_cplus  310
#define LANGUAGE_cplus  309
#define EXP_cplus   308
#define ADECR_cplus     307
#define AINCR_cplus     306
#define ARROW_cplus     305
#define REF_cplus   304
#define EXP_ARRAY_cplus     303
#define EXP_LIST_cplus  302
#define ARROW_MEMB_cplus    301
#define DOT_MEMB_cplus  300
#define POINETOI_cplus  299
#define TIRESUPEETOI_cplus  298
#define TIRESUPE_cplus  297
#define SUPESUPE_cplus  296
#define INFEINFE_cplus  295
#define SUPEEGAL_cplus  294
#define INFEEGAL_cplus  293
#define NONE_cplus  292
#define NEW_DECLARATOR_cplus    291
#define USING_NAMESPACE_cplus   290
#define NAMESPACE_ALIAS_cplus   289
#define REM_cplus   288
#define DIV_cplus   287
#define MUL_cplus   286
#define POURC_cplus     285
#define MESSAGE_MAP_cplus   284
#define MACRO_cplus     283
#define TCHAR_cplus     282
#define TSHORT_cplus    281
#define TLONG_cplus     280
#define TINT_cplus  279
#define OR_cplus    278
#define VBARVBAR_cplus  277
#define AND_cplus   276
#define ETCOETCO_cplus  275
#define COMPOUND_EXT_cplus  274
#define EXTERNAL_cplus  273
#define INITIALIZER_cplus   272
#define LOR_cplus   271
#define VBAR_cplus  270
#define FUNC_cplus  269
#define ALL_OF_cplus    268
#define STAT_VOID_cplus     267
#define TEMPLATE_DECL_cplus     266
#define SUPE_cplus  265
#define CLASS_PARAM_cplus   264
#define EXP_SEQ_cplus   263
#define LXOR_cplus  262
#define CHAP_cplus  261
#define EXCEPTION_LIST_cplus    260
#define EXCEPTION_ANSI_cplus    259
#define EXCEPTION_cplus     258
#define NEQU_cplus  257
#define EQU_cplus   256
#define EXCLEGAL_cplus  255
#define EGALEGAL_cplus  254
#define PRAGMA_cplus    253
#define PARAMETERS_cplus    252
#define FUNC_HEADER_cplus   251
#define INDENT_FUNCTION_TYPE_cplus  250
#define COMMENT_PLUS_cplus  249
#define COMMENT_END_cplus   248
#define COMMENT_MIDDLE_cplus    247
#define COMMENT_START_cplus     246
#define MARGIN_VALUE_cplus  245
#define BRACE_ALIGN_VALUE_cplus     244
#define DECL_ALIGN_cplus    243
#define ASSIGN_ALIGN_cplus  242
#define SINGLE_SWITCH_INDENT_VALUE_cplus    241
#define SIMPLIFY_VALUE_cplus    240
#define SIMPLIFY_cplus  239
#define MODE_VALUE_cplus    238
#define TAB_VALUE_cplus     237
#define CONFIG_cplus    236
#define NO_PRETTY_cplus     235
#define ALINE_cplus     234
#define ERROR_cplus     233
#define UNDEF_cplus     232
#define TYP_AFF_CALL_cplus  231
#define MEMBER_DECLARATOR_cplus     230
#define TYP_ARRAY_cplus     229
#define CFER_cplus  228
#define COUV_cplus  227
#define FOR_DECLARATION_cplus   226
#define DECLARATION_cplus   225
#define CTOR_INITIALIZER_cplus  224
#define CTOR_INIT_cplus     223
#define LONGLONG_cplus  222
#define IUNLONGLONG_cplus   221
#define IUNLONG_cplus   220
#define IUN_cplus   219
#define ILONGLONG_cplus     218
#define ILONG_cplus     217
#define RANGE_MODIFIER_cplus    216
#define COND_AFF_cplus  215
#define INTE_cplus  214
#define COMPOUND_cplus  213
#define CLASS_DECL_cplus    212
#define AFER_cplus  211
#define CATCH_ANSI_cplus    210
#define EXCEPT_ANSI_ALL_cplus   209
#define CAST_cplus  208
#define DPOI_cplus  207
#define TYP_BIT_cplus   206
#define PROTECT_cplus   205
#define BASE_LIST_cplus     204
#define XOR_AFF_cplus   203
#define OR_AFF_cplus    202
#define AND_AFF_cplus   201
#define RSH_AFF_cplus   200
#define LSH_AFF_cplus   199
#define MIN_AFF_cplus   198
#define PLU_AFF_cplus   197
#define REM_AFF_cplus   196
#define DIV_AFF_cplus   195
#define MUL_AFF_cplus   194
#define AFF_cplus   193
#define VAR_LIST_cplus  192
#define TYP_LIST_cplus  191
#define TYP_AFF_cplus   190
#define ABST_DECLARATOR_cplus   189
#define DECLARATOR_cplus    188
#define POINPOINPOIN_cplus  187
#define LAND_cplus  186
#define INIT_NEW_cplus  185
#define VIRG_cplus  184
#define QUALIFIED_cplus     183
#define MINUS_cplus     182
#define TYP_cplus   181
#define PFER_cplus  180
#define DESTRUCT_cplus  179
#define TYP_REF_cplus   178
#define TYP_ADDR_cplus  177
#define INFE_cplus  176
#define USING_cplus     175
#define NAMESPACE_cplus     174
#define TYPEDEF_cplus   173
#define TEMPLATE_cplus  172
#define CATCH_cplus     171
#define PUBLIC_cplus    170
#define PROTECTED_cplus     169
#define PRIVATE_cplus   168
#define CHAPEGAL_cplus  167
#define VBAREGAL_cplus  166
#define ETCOEGAL_cplus  165
#define SUPESUPEEGAL_cplus  164
#define INFEINFEEGAL_cplus  163
#define TIREEGAL_cplus  162
#define PLUSEGAL_cplus  161
#define POURCEGAL_cplus     160
#define ETOIEGAL_cplus  159
#define EGAL_cplus  158
#define ASM_cplus   157
#define VA_ARG_cplus    156
#define DELETE_cplus    155
#define NEW_cplus   154
#define SIZEOF_cplus    153
#define TIRETIRE_cplus  152
#define PLUSPLUS_cplus  151
#define EXCL_cplus  150
#define PLUS_cplus  149
#define TIRE_cplus  148
#define POUV_cplus  147
#define DEFAULT_cplus   146
#define CASE_cplus  145
#define TRY_cplus   144
#define THROW_cplus     143
#define FORALLSONS_cplus    142
#define WHILE_cplus     141
#define SWITCH_cplus    140
#define RETURN_cplus    139
#define PVIR_cplus  138
#define IF_cplus    137
#define FOR_cplus   136
#define AOUV_cplus  135
#define DO_cplus    134
#define CONTINUE_cplus  133
#define BREAK_cplus     132
#define OPERATOR_cplus  131
#define TILD_cplus  130
#define ETCO_cplus  129
#define ETOI_cplus  128
#define SHORT_cplus     127
#define UNSIGNED_cplus  126
#define SIGNED_cplus    125
#define LONG_cplus  124
#define DPOIDPOI_cplus  123
#define VOID_cplus  122
#define FLOAT_cplus     121
#define CHAR_cplus  120
#define INT_cplus   119
#define DOUBLE_cplus    118
#define TYPENAME_cplus  117
#define CLASS_cplus     116
#define UNION_cplus     115
#define STRUCT_cplus    114
#define ENUM_cplus  113
#define CONST_cplus     112
#define FRIEND_cplus    111
#define VIRTUAL_cplus   110
#define INLINE_cplus    109
#define VOLATILE_cplus  108
#define REGISTER_cplus  107
#define EXTERN_cplus    106
#define STATIC_cplus    105
#define AUTO_cplus  104
#define FUNC_SPEC_cplus     103
#define TRY_UPPER_cplus     102
#define END_CATCH_cplus     101
#define END_CATCH_ALL_cplus     100
#define AND_CATCH_cplus     99
#define CATCH_UPPER_cplus   98
#define CATCH_ALL_cplus     97
#define END_MESSAGE_MAP_cplus   96
#define BEGIN_MESSAGE_MAP_cplus     95
#define DECLARE_MESSAGE_MAP_cplus   94
#define IMPLEMENT_SERIAL_cplus  93
#define IMPLEMENT_DYNCREATE_cplus   92
#define IMPLEMENT_DYNAMIC_cplus     91
#define DECLARE_SERIAL_cplus    90
#define DECLARE_DYNAMIC_cplus   89
#define PUSH_FUNCTION_cplus     88
#define PUSH_ARGUMENT_cplus     87
#define UNDEF_CONTENT_cplus     86
#define SMALL_PRAGMA_CONTENT_cplus  85
#define PRAGMA_CONTENT_cplus    84
#define PRAGMA_ENUM_VERT_cplus  83
#define PRAGMA_SPACE_ARROW_cplus    82
#define PRAGMA_PARAMETERS_cplus     81
#define PRAGMA_PARAMETERS_UNDER_cplus   80
#define PRAGMA_FUNC_HEADER_cplus    79
#define PRAGMA_INDENT_FUNCTION_TYPE_cplus   78
#define PRAGMA_COMMENT_PLUS_cplus   77
#define PRAGMA_COMMENT_END_cplus    76
#define PRAGMA_COMMENT_MIDDLE_cplus     75
#define PRAGMA_COMMENT_START_cplus  74
#define PRAGMA_MARGIN_cplus     73
#define PRAGMA_DECL_ALIGN_cplus     72
#define PRAGMA_ASSIGN_ALIGN_cplus   71
#define PRAGMA_SINGLE_SWITCH_INDENT_cplus   70
#define PRAGMA_SIMPLIFY_cplus   69
#define PRAGMA_BRACE_ALIGN_cplus    68
#define PRAGMA_MODE_cplus   67
#define PRAGMA_RANGE_cplus  66
#define PRAGMA_TAB_cplus    65
#define PRAGMA_TAB_DIRECTIVE_cplus  64
#define PRAGMA_CONFIG_cplus     63
#define PRAGMA_NOPRETTY_cplus   62
#define PRAGMA_PRETTY_cplus     61
#define INCLUDE_LOCAL_cplus     60
#define INCLUDE_SYS_cplus   59
#define END_LINE_cplus  58
#define DEFINE_NAME_cplus   57
#define DEFINED_NOT_CONTINUED_cplus     56
#define DEFINED_CONTINUED_cplus     55
#define POINT_cplus     54
#define SLAS_cplus  53
#define SLASEGAL_cplus  52
#define CARRIAGE_RETURN_cplus   51
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
