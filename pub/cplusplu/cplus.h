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
    static signed char * _tokenArray [146];
    static int (cplus::*(_tokenFuncArray [146])) ();
    static int _tokenNbFuncArray [146];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        BDECR =     340 ,
        BINCR =     339 ,
        ADDR =  338 ,
        NOT =   337 ,
        LNEG =  336 ,
        POS =   335 ,
        NEG =   334 ,
        PARAM_TYPE =    333 ,
        STRING_LIST =   332 ,
        LABEL =     331 ,
        THROW_ANSI =    330 ,
        ELSE =  329 ,
        TUNSIGNED =     328 ,
        TSIGNED =   327 ,
        TFLOAT =    326 ,
        TDOUBLE =   325 ,
        TIDENT =    324 ,
        RSHI =  323 ,
        LSHI =  322 ,
        LT =    321 ,
        GT =    320 ,
        GEQU =  319 ,
        LEQU =  318 ,
        SPACE_ARROW =   317 ,
        TAB_DIRECTIVE =     316 ,
        ENUM_PARAMETERS_UNDER =     315 ,
        ENUM_VERT_VALUE =   314 ,
        PROTECT_MEMB =  313 ,
        LANGUAGE =  312 ,
        EXP =   311 ,
        ADECR =     310 ,
        AINCR =     309 ,
        ARROW =     308 ,
        REF =   307 ,
        EXP_ARRAY =     306 ,
        EXP_LIST =  305 ,
        ARROW_MEMB =    304 ,
        DOT_MEMB =  303 ,
        POINETOI =  302 ,
        TIRESUPEETOI =  301 ,
        TIRESUPE =  300 ,
        SUPESUPE =  299 ,
        INFEINFE =  298 ,
        SUPEEGAL =  297 ,
        INFEEGAL =  296 ,
        NONE =  295 ,
        NEW_DECLARATOR =    294 ,
        USING_NAMESPACE =   293 ,
        NAMESPACE_ALIAS =   292 ,
        REM =   291 ,
        DIV =   290 ,
        MUL =   289 ,
        POURC =     288 ,
        MESSAGE_MAP =   287 ,
        MACRO =     286 ,
        TCHAR =     285 ,
        TSHORT =    284 ,
        TLONG =     283 ,
        TINT =  282 ,
        OR =    281 ,
        VBARVBAR =  280 ,
        AND =   279 ,
        ETCOETCO =  278 ,
        COMPOUND_EXT =  277 ,
        EXTERNAL =  276 ,
        INITIALIZER =   275 ,
        LOR =   274 ,
        VBAR =  273 ,
        FUNC =  272 ,
        ALL_OF =    271 ,
        STAT_VOID =     270 ,
        TEMPLATE_DECL =     269 ,
        SUPE =  268 ,
        CLASS_PARAM =   267 ,
        EXP_SEQ =   266 ,
        LXOR =  265 ,
        CHAP =  264 ,
        EXCEPTION_LIST =    263 ,
        EXCEPTION_ANSI =    262 ,
        EXCEPTION =     261 ,
        NEQU =  260 ,
        EQU =   259 ,
        EXCLEGAL =  258 ,
        EGALEGAL =  257 ,
        PRAGMA =    256 ,
        PARAMETERS =    255 ,
        FUNC_HEADER =   254 ,
        INDENT_FUNCTION_TYPE =  253 ,
        COMMENT_PLUS =  252 ,
        COMMENT_END =   251 ,
        COMMENT_MIDDLE =    250 ,
        COMMENT_START =     249 ,
        MARGIN_VALUE =  248 ,
        BRACE_ALIGN_VALUE =     247 ,
        DECL_ALIGN =    246 ,
        ASSIGN_ALIGN =  245 ,
        SINGLE_SWITCH_INDENT_VALUE =    244 ,
        SIMPLIFY_VALUE =    243 ,
        SIMPLIFY =  242 ,
        MODE_VALUE =    241 ,
        TAB_VALUE =     240 ,
        CONFIG =    239 ,
        NOT_MANAGED =   238 ,
        NO_PRETTY =     237 ,
        ALINE =     236 ,
        ERROR =     235 ,
        UNDEF =     234 ,
        TYP_AFF_CALL =  233 ,
        MEMBER_DECLARATOR =     232 ,
        TYP_ARRAY =     231 ,
        CFER =  230 ,
        COUV =  229 ,
        FOR_DECLARATION =   228 ,
        DECLARATION =   227 ,
        CTOR_INITIALIZER =  226 ,
        CTOR_INIT =     225 ,
        LONGLONG =  224 ,
        IUNLONGLONG =   223 ,
        IUNLONG =   222 ,
        IUN =   221 ,
        ILONGLONG =     220 ,
        ILONG =     219 ,
        RANGE_MODIFIER =    218 ,
        COND_AFF =  217 ,
        INTE =  216 ,
        COMPOUND =  215 ,
        CLASS_DECL =    214 ,
        AFER =  213 ,
        CATCH_ANSI =    212 ,
        EXCEPT_ANSI_ALL =   211 ,
        CAST =  210 ,
        DPOI =  209 ,
        TYP_BIT =   208 ,
        PROTECT =   207 ,
        BASE_LIST =     206 ,
        XOR_AFF =   205 ,
        OR_AFF =    204 ,
        AND_AFF =   203 ,
        RSH_AFF =   202 ,
        LSH_AFF =   201 ,
        MIN_AFF =   200 ,
        PLU_AFF =   199 ,
        REM_AFF =   198 ,
        DIV_AFF =   197 ,
        MUL_AFF =   196 ,
        AFF =   195 ,
        VAR_LIST =  194 ,
        TYP_LIST =  193 ,
        TYP_AFF =   192 ,
        ABST_DECLARATOR =   191 ,
        DECLARATOR =    190 ,
        POINPOINPOIN =  189 ,
        LAND =  188 ,
        INIT_NEW =  187 ,
        VIRG =  186 ,
        QUALIFIED =     185 ,
        MINUS =     184 ,
        TYP =   183 ,
        PFER =  182 ,
        DESTRUCT =  181 ,
        TYP_REF =   180 ,
        TYP_ADDR =  179 ,
        INFE =  178 ,
        USING =     177 ,
        NAMESPACE =     176 ,
        TYPEDEF =   175 ,
        TEMPLATE =  174 ,
        CATCH =     173 ,
        PUBLIC =    172 ,
        PROTECTED =     171 ,
        PRIVATE =   170 ,
        CHAPEGAL =  169 ,
        VBAREGAL =  168 ,
        ETCOEGAL =  167 ,
        SUPESUPEEGAL =  166 ,
        INFEINFEEGAL =  165 ,
        TIREEGAL =  164 ,
        PLUSEGAL =  163 ,
        POURCEGAL =     162 ,
        ETOIEGAL =  161 ,
        EGAL =  160 ,
        ASM =   159 ,
        VA_ARG =    158 ,
        DELETE =    157 ,
        NEW =   156 ,
        SIZEOF =    155 ,
        TIRETIRE =  154 ,
        PLUSPLUS =  153 ,
        EXCL =  152 ,
        PLUS =  151 ,
        TIRE =  150 ,
        POUV =  149 ,
        DEFAULT =   148 ,
        CASE =  147 ,
        TRY =   146 ,
        THROW =     145 ,
        FORALLSONS =    144 ,
        WHILE =     143 ,
        SWITCH =    142 ,
        RETURN =    141 ,
        PVIR =  140 ,
        IF =    139 ,
        FOR =   138 ,
        AOUV =  137 ,
        DO =    136 ,
        CONTINUE =  135 ,
        BREAK =     134 ,
        OPERATOR =  133 ,
        TILD =  132 ,
        ETCO =  131 ,
        ETOI =  130 ,
        SHORT =     129 ,
        UNSIGNED =  128 ,
        SIGNED =    127 ,
        LONG =  126 ,
        DPOIDPOI =  125 ,
        VOID =  124 ,
        FLOAT =     123 ,
        CHAR =  122 ,
        INT =   121 ,
        DOUBLE =    120 ,
        TYPENAME =  119 ,
        CLASS =     118 ,
        UNION =     117 ,
        STRUCT =    116 ,
        ENUM =  115 ,
        CONST =     114 ,
        FRIEND =    113 ,
        VIRTUAL =   112 ,
        INLINE =    111 ,
        VOLATILE =  110 ,
        REGISTER =  109 ,
        EXTERN =    108 ,
        STATIC =    107 ,
        AUTO =  106 ,
        FUNC_SPEC =     105 ,
        TRY_UPPER =     104 ,
        END_CATCH =     103 ,
        END_CATCH_ALL =     102 ,
        AND_CATCH =     101 ,
        CATCH_UPPER =   100 ,
        CATCH_ALL =     99 ,
        END_MESSAGE_MAP =   98 ,
        BEGIN_MESSAGE_MAP =     97 ,
        DECLARE_MESSAGE_MAP =   96 ,
        IMPLEMENT_SERIAL =  95 ,
        IMPLEMENT_DYNCREATE =   94 ,
        IMPLEMENT_DYNAMIC =     93 ,
        DECLARE_SERIAL =    92 ,
        DECLARE_DYNAMIC =   91 ,
        PUSH_FUNCTION =     90 ,
        PUSH_ARGUMENT =     89 ,
        UNDEF_CONTENT =     88 ,
        SMALL_PRAGMA_CONTENT =  87 ,
        PRAGMA_CONTENT =    86 ,
        PRAGMA_ENUM_VERT =  85 ,
        PRAGMA_SPACE_ARROW =    84 ,
        PRAGMA_PARAMETERS =     83 ,
        PRAGMA_PARAMETERS_UNDER =   82 ,
        PRAGMA_FUNC_HEADER =    81 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   80 ,
        PRAGMA_COMMENT_PLUS =   79 ,
        PRAGMA_COMMENT_END =    78 ,
        PRAGMA_COMMENT_MIDDLE =     77 ,
        PRAGMA_COMMENT_START =  76 ,
        PRAGMA_MARGIN =     75 ,
        PRAGMA_DECL_ALIGN =     74 ,
        PRAGMA_ASSIGN_ALIGN =   73 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   72 ,
        PRAGMA_SIMPLIFY =   71 ,
        PRAGMA_BRACE_ALIGN =    70 ,
        PRAGMA_MODE =   69 ,
        PRAGMA_RANGE =  68 ,
        PRAGMA_TAB =    67 ,
        PRAGMA_TAB_DIRECTIVE =  66 ,
        PRAGMA_CONFIG =     65 ,
        PRAGMA_NOT_MANAGED =    64 ,
        PRAGMA_MANAGED =    63 ,
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
#define BDECR_cplus     340
#define BINCR_cplus     339
#define ADDR_cplus  338
#define NOT_cplus   337
#define LNEG_cplus  336
#define POS_cplus   335
#define NEG_cplus   334
#define PARAM_TYPE_cplus    333
#define STRING_LIST_cplus   332
#define LABEL_cplus     331
#define THROW_ANSI_cplus    330
#define ELSE_cplus  329
#define TUNSIGNED_cplus     328
#define TSIGNED_cplus   327
#define TFLOAT_cplus    326
#define TDOUBLE_cplus   325
#define TIDENT_cplus    324
#define RSHI_cplus  323
#define LSHI_cplus  322
#define LT_cplus    321
#define GT_cplus    320
#define GEQU_cplus  319
#define LEQU_cplus  318
#define SPACE_ARROW_cplus   317
#define TAB_DIRECTIVE_cplus     316
#define ENUM_PARAMETERS_UNDER_cplus     315
#define ENUM_VERT_VALUE_cplus   314
#define PROTECT_MEMB_cplus  313
#define LANGUAGE_cplus  312
#define EXP_cplus   311
#define ADECR_cplus     310
#define AINCR_cplus     309
#define ARROW_cplus     308
#define REF_cplus   307
#define EXP_ARRAY_cplus     306
#define EXP_LIST_cplus  305
#define ARROW_MEMB_cplus    304
#define DOT_MEMB_cplus  303
#define POINETOI_cplus  302
#define TIRESUPEETOI_cplus  301
#define TIRESUPE_cplus  300
#define SUPESUPE_cplus  299
#define INFEINFE_cplus  298
#define SUPEEGAL_cplus  297
#define INFEEGAL_cplus  296
#define NONE_cplus  295
#define NEW_DECLARATOR_cplus    294
#define USING_NAMESPACE_cplus   293
#define NAMESPACE_ALIAS_cplus   292
#define REM_cplus   291
#define DIV_cplus   290
#define MUL_cplus   289
#define POURC_cplus     288
#define MESSAGE_MAP_cplus   287
#define MACRO_cplus     286
#define TCHAR_cplus     285
#define TSHORT_cplus    284
#define TLONG_cplus     283
#define TINT_cplus  282
#define OR_cplus    281
#define VBARVBAR_cplus  280
#define AND_cplus   279
#define ETCOETCO_cplus  278
#define COMPOUND_EXT_cplus  277
#define EXTERNAL_cplus  276
#define INITIALIZER_cplus   275
#define LOR_cplus   274
#define VBAR_cplus  273
#define FUNC_cplus  272
#define ALL_OF_cplus    271
#define STAT_VOID_cplus     270
#define TEMPLATE_DECL_cplus     269
#define SUPE_cplus  268
#define CLASS_PARAM_cplus   267
#define EXP_SEQ_cplus   266
#define LXOR_cplus  265
#define CHAP_cplus  264
#define EXCEPTION_LIST_cplus    263
#define EXCEPTION_ANSI_cplus    262
#define EXCEPTION_cplus     261
#define NEQU_cplus  260
#define EQU_cplus   259
#define EXCLEGAL_cplus  258
#define EGALEGAL_cplus  257
#define PRAGMA_cplus    256
#define PARAMETERS_cplus    255
#define FUNC_HEADER_cplus   254
#define INDENT_FUNCTION_TYPE_cplus  253
#define COMMENT_PLUS_cplus  252
#define COMMENT_END_cplus   251
#define COMMENT_MIDDLE_cplus    250
#define COMMENT_START_cplus     249
#define MARGIN_VALUE_cplus  248
#define BRACE_ALIGN_VALUE_cplus     247
#define DECL_ALIGN_cplus    246
#define ASSIGN_ALIGN_cplus  245
#define SINGLE_SWITCH_INDENT_VALUE_cplus    244
#define SIMPLIFY_VALUE_cplus    243
#define SIMPLIFY_cplus  242
#define MODE_VALUE_cplus    241
#define TAB_VALUE_cplus     240
#define CONFIG_cplus    239
#define NOT_MANAGED_cplus   238
#define NO_PRETTY_cplus     237
#define ALINE_cplus     236
#define ERROR_cplus     235
#define UNDEF_cplus     234
#define TYP_AFF_CALL_cplus  233
#define MEMBER_DECLARATOR_cplus     232
#define TYP_ARRAY_cplus     231
#define CFER_cplus  230
#define COUV_cplus  229
#define FOR_DECLARATION_cplus   228
#define DECLARATION_cplus   227
#define CTOR_INITIALIZER_cplus  226
#define CTOR_INIT_cplus     225
#define LONGLONG_cplus  224
#define IUNLONGLONG_cplus   223
#define IUNLONG_cplus   222
#define IUN_cplus   221
#define ILONGLONG_cplus     220
#define ILONG_cplus     219
#define RANGE_MODIFIER_cplus    218
#define COND_AFF_cplus  217
#define INTE_cplus  216
#define COMPOUND_cplus  215
#define CLASS_DECL_cplus    214
#define AFER_cplus  213
#define CATCH_ANSI_cplus    212
#define EXCEPT_ANSI_ALL_cplus   211
#define CAST_cplus  210
#define DPOI_cplus  209
#define TYP_BIT_cplus   208
#define PROTECT_cplus   207
#define BASE_LIST_cplus     206
#define XOR_AFF_cplus   205
#define OR_AFF_cplus    204
#define AND_AFF_cplus   203
#define RSH_AFF_cplus   202
#define LSH_AFF_cplus   201
#define MIN_AFF_cplus   200
#define PLU_AFF_cplus   199
#define REM_AFF_cplus   198
#define DIV_AFF_cplus   197
#define MUL_AFF_cplus   196
#define AFF_cplus   195
#define VAR_LIST_cplus  194
#define TYP_LIST_cplus  193
#define TYP_AFF_cplus   192
#define ABST_DECLARATOR_cplus   191
#define DECLARATOR_cplus    190
#define POINPOINPOIN_cplus  189
#define LAND_cplus  188
#define INIT_NEW_cplus  187
#define VIRG_cplus  186
#define QUALIFIED_cplus     185
#define MINUS_cplus     184
#define TYP_cplus   183
#define PFER_cplus  182
#define DESTRUCT_cplus  181
#define TYP_REF_cplus   180
#define TYP_ADDR_cplus  179
#define INFE_cplus  178
#define USING_cplus     177
#define NAMESPACE_cplus     176
#define TYPEDEF_cplus   175
#define TEMPLATE_cplus  174
#define CATCH_cplus     173
#define PUBLIC_cplus    172
#define PROTECTED_cplus     171
#define PRIVATE_cplus   170
#define CHAPEGAL_cplus  169
#define VBAREGAL_cplus  168
#define ETCOEGAL_cplus  167
#define SUPESUPEEGAL_cplus  166
#define INFEINFEEGAL_cplus  165
#define TIREEGAL_cplus  164
#define PLUSEGAL_cplus  163
#define POURCEGAL_cplus     162
#define ETOIEGAL_cplus  161
#define EGAL_cplus  160
#define ASM_cplus   159
#define VA_ARG_cplus    158
#define DELETE_cplus    157
#define NEW_cplus   156
#define SIZEOF_cplus    155
#define TIRETIRE_cplus  154
#define PLUSPLUS_cplus  153
#define EXCL_cplus  152
#define PLUS_cplus  151
#define TIRE_cplus  150
#define POUV_cplus  149
#define DEFAULT_cplus   148
#define CASE_cplus  147
#define TRY_cplus   146
#define THROW_cplus     145
#define FORALLSONS_cplus    144
#define WHILE_cplus     143
#define SWITCH_cplus    142
#define RETURN_cplus    141
#define PVIR_cplus  140
#define IF_cplus    139
#define FOR_cplus   138
#define AOUV_cplus  137
#define DO_cplus    136
#define CONTINUE_cplus  135
#define BREAK_cplus     134
#define OPERATOR_cplus  133
#define TILD_cplus  132
#define ETCO_cplus  131
#define ETOI_cplus  130
#define SHORT_cplus     129
#define UNSIGNED_cplus  128
#define SIGNED_cplus    127
#define LONG_cplus  126
#define DPOIDPOI_cplus  125
#define VOID_cplus  124
#define FLOAT_cplus     123
#define CHAR_cplus  122
#define INT_cplus   121
#define DOUBLE_cplus    120
#define TYPENAME_cplus  119
#define CLASS_cplus     118
#define UNION_cplus     117
#define STRUCT_cplus    116
#define ENUM_cplus  115
#define CONST_cplus     114
#define FRIEND_cplus    113
#define VIRTUAL_cplus   112
#define INLINE_cplus    111
#define VOLATILE_cplus  110
#define REGISTER_cplus  109
#define EXTERN_cplus    108
#define STATIC_cplus    107
#define AUTO_cplus  106
#define FUNC_SPEC_cplus     105
#define TRY_UPPER_cplus     104
#define END_CATCH_cplus     103
#define END_CATCH_ALL_cplus     102
#define AND_CATCH_cplus     101
#define CATCH_UPPER_cplus   100
#define CATCH_ALL_cplus     99
#define END_MESSAGE_MAP_cplus   98
#define BEGIN_MESSAGE_MAP_cplus     97
#define DECLARE_MESSAGE_MAP_cplus   96
#define IMPLEMENT_SERIAL_cplus  95
#define IMPLEMENT_DYNCREATE_cplus   94
#define IMPLEMENT_DYNAMIC_cplus     93
#define DECLARE_SERIAL_cplus    92
#define DECLARE_DYNAMIC_cplus   91
#define PUSH_FUNCTION_cplus     90
#define PUSH_ARGUMENT_cplus     89
#define UNDEF_CONTENT_cplus     88
#define SMALL_PRAGMA_CONTENT_cplus  87
#define PRAGMA_CONTENT_cplus    86
#define PRAGMA_ENUM_VERT_cplus  85
#define PRAGMA_SPACE_ARROW_cplus    84
#define PRAGMA_PARAMETERS_cplus     83
#define PRAGMA_PARAMETERS_UNDER_cplus   82
#define PRAGMA_FUNC_HEADER_cplus    81
#define PRAGMA_INDENT_FUNCTION_TYPE_cplus   80
#define PRAGMA_COMMENT_PLUS_cplus   79
#define PRAGMA_COMMENT_END_cplus    78
#define PRAGMA_COMMENT_MIDDLE_cplus     77
#define PRAGMA_COMMENT_START_cplus  76
#define PRAGMA_MARGIN_cplus     75
#define PRAGMA_DECL_ALIGN_cplus     74
#define PRAGMA_ASSIGN_ALIGN_cplus   73
#define PRAGMA_SINGLE_SWITCH_INDENT_cplus   72
#define PRAGMA_SIMPLIFY_cplus   71
#define PRAGMA_BRACE_ALIGN_cplus    70
#define PRAGMA_MODE_cplus   69
#define PRAGMA_RANGE_cplus  68
#define PRAGMA_TAB_cplus    67
#define PRAGMA_TAB_DIRECTIVE_cplus  66
#define PRAGMA_CONFIG_cplus     65
#define PRAGMA_NOT_MANAGED_cplus    64
#define PRAGMA_MANAGED_cplus    63
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
