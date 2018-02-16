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
        BDECR =     341 ,
        BINCR =     340 ,
        ADDR =  339 ,
        NOT =   338 ,
        LNEG =  337 ,
        POS =   336 ,
        NEG =   335 ,
        PARAM_TYPE =    334 ,
        STRING_LIST =   333 ,
        LABEL =     332 ,
        THROW_ANSI =    331 ,
        ELSE =  330 ,
        TUNSIGNED =     329 ,
        TSIGNED =   328 ,
        TFLOAT =    327 ,
        TDOUBLE =   326 ,
        TIDENT =    325 ,
        RSHI =  324 ,
        LSHI =  323 ,
        LT =    322 ,
        GT =    321 ,
        GEQU =  320 ,
        LEQU =  319 ,
        SPACE_ARROW =   318 ,
        TAB_DIRECTIVE =     317 ,
        ENUM_PARAMETERS_UNDER =     316 ,
        ENUM_VERT_VALUE =   315 ,
        PROTECT_MEMB =  314 ,
        LANGUAGE =  313 ,
        EXP =   312 ,
        ADECR =     311 ,
        AINCR =     310 ,
        ARROW =     309 ,
        REF =   308 ,
        EXP_ARRAY =     307 ,
        EXP_LIST =  306 ,
        ARROW_MEMB =    305 ,
        DOT_MEMB =  304 ,
        POINETOI =  303 ,
        TIRESUPEETOI =  302 ,
        TIRESUPE =  301 ,
        SUPESUPE =  300 ,
        INFEINFE =  299 ,
        SUPEEGAL =  298 ,
        INFEEGAL =  297 ,
        NONE =  296 ,
        NEW_DECLARATOR =    295 ,
        USING_NAMESPACE =   294 ,
        NAMESPACE_ALIAS =   293 ,
        REM =   292 ,
        DIV =   291 ,
        MUL =   290 ,
        POURC =     289 ,
        MESSAGE_MAP =   288 ,
        MACRO =     287 ,
        TCHAR =     286 ,
        TSHORT =    285 ,
        TLONG =     284 ,
        TINT =  283 ,
        OR =    282 ,
        VBARVBAR =  281 ,
        AND =   280 ,
        ETCOETCO =  279 ,
        COMPOUND_EXT =  278 ,
        EXTERNAL =  277 ,
        INITIALIZER =   276 ,
        LOR =   275 ,
        VBAR =  274 ,
        FUNC =  273 ,
        ALL_OF =    272 ,
        STAT_VOID =     271 ,
        TEMPLATE_DECL =     270 ,
        SUPE =  269 ,
        CLASS_PARAM =   268 ,
        EXP_SEQ =   267 ,
        LXOR =  266 ,
        CHAP =  265 ,
        EXCEPTION_LIST =    264 ,
        EXCEPTION_ANSI =    263 ,
        EXCEPTION =     262 ,
        NEQU =  261 ,
        EQU =   260 ,
        EXCLEGAL =  259 ,
        EGALEGAL =  258 ,
        PRAGMA =    257 ,
        PARAMETERS =    256 ,
        FUNC_HEADER =   255 ,
        INDENT_FUNCTION_TYPE =  254 ,
        COMMENT_PLUS =  253 ,
        COMMENT_END =   252 ,
        COMMENT_MIDDLE =    251 ,
        COMMENT_START =     250 ,
        MARGIN_VALUE =  249 ,
        BRACE_ALIGN_VALUE =     248 ,
        DECL_ALIGN =    247 ,
        ASSIGN_ALIGN =  246 ,
        SINGLE_SWITCH_INDENT_VALUE =    245 ,
        SIMPLIFY_VALUE =    244 ,
        SIMPLIFY =  243 ,
        MODE_VALUE =    242 ,
        TAB_VALUE =     241 ,
        CONFIG =    240 ,
        NOT_MANAGED =   239 ,
        NO_PRETTY =     238 ,
        ALINE =     237 ,
        ERROR =     236 ,
        UNDEF =     235 ,
        TYP_AFF_CALL =  234 ,
        MEMBER_DECLARATOR =     233 ,
        TYP_ARRAY =     232 ,
        CFER =  231 ,
        COUV =  230 ,
        FOR_DECLARATION =   229 ,
        DECLARATION =   228 ,
        CTOR_INITIALIZER =  227 ,
        CTOR_INIT =     226 ,
        LONGLONG =  225 ,
        IUNLONGLONG =   224 ,
        IUNLONG =   223 ,
        IUN =   222 ,
        ILONGLONG =     221 ,
        ILONG =     220 ,
        RANGE_MODIFIER =    219 ,
        COND_AFF =  218 ,
        INTE =  217 ,
        COMPOUND =  216 ,
        CLASS_DECL =    215 ,
        AFER =  214 ,
        CATCH_ANSI =    213 ,
        EXCEPT_ANSI_ALL =   212 ,
        CAST =  211 ,
        TYP_BIT =   210 ,
        PROTECT =   209 ,
        BASE_LIST =     208 ,
        XOR_AFF =   207 ,
        OR_AFF =    206 ,
        AND_AFF =   205 ,
        RSH_AFF =   204 ,
        LSH_AFF =   203 ,
        MIN_AFF =   202 ,
        PLU_AFF =   201 ,
        REM_AFF =   200 ,
        DIV_AFF =   199 ,
        MUL_AFF =   198 ,
        AFF =   197 ,
        VAR_LIST =  196 ,
        TYP_LIST =  195 ,
        TYP_AFF =   194 ,
        ABST_DECLARATOR =   193 ,
        DECLARATOR =    192 ,
        POINPOINPOIN =  191 ,
        LAND =  190 ,
        INIT_NEW =  189 ,
        VIRG =  188 ,
        QUALIFIED =     187 ,
        MINUS =     186 ,
        TYP =   185 ,
        PFER =  184 ,
        DESTRUCT =  183 ,
        TYP_REF =   182 ,
        TYP_ADDR =  181 ,
        INFE =  180 ,
        USING =     179 ,
        NAMESPACE =     178 ,
        TYPEDEF =   177 ,
        TEMPLATE =  176 ,
        CATCH =     175 ,
        DPOI =  174 ,
        PUBLIC =    173 ,
        PROTECTED =     172 ,
        PRIVATE =   171 ,
        CHAPEGAL =  170 ,
        VBAREGAL =  169 ,
        ETCOEGAL =  168 ,
        SUPESUPEEGAL =  167 ,
        INFEINFEEGAL =  166 ,
        TIREEGAL =  165 ,
        PLUSEGAL =  164 ,
        POURCEGAL =     163 ,
        ETOIEGAL =  162 ,
        EGAL =  161 ,
        ASM =   160 ,
        VA_ARG =    159 ,
        DELETE =    158 ,
        NEW =   157 ,
        SIZEOF =    156 ,
        TIRETIRE =  155 ,
        PLUSPLUS =  154 ,
        EXCL =  153 ,
        PLUS =  152 ,
        TIRE =  151 ,
        POUV =  150 ,
        DEFAULT =   149 ,
        CASE =  148 ,
        TRY =   147 ,
        THROW =     146 ,
        FORALLSONS =    145 ,
        WHILE =     144 ,
        SWITCH =    143 ,
        RETURN =    142 ,
        PVIR =  141 ,
        IF =    140 ,
        FOR =   139 ,
        AOUV =  138 ,
        DO =    137 ,
        CONTINUE =  136 ,
        BREAK =     135 ,
        OPERATOR =  134 ,
        TILD =  133 ,
        ETCO =  132 ,
        ETOI =  131 ,
        SHORT =     130 ,
        UNSIGNED =  129 ,
        SIGNED =    128 ,
        LONG =  127 ,
        DPOIDPOI =  126 ,
        VOID =  125 ,
        FLOAT =     124 ,
        CHAR =  123 ,
        INT =   122 ,
        DOUBLE =    121 ,
        TYPENAME =  120 ,
        CLASS =     119 ,
        UNION =     118 ,
        STRUCT =    117 ,
        ENUM =  116 ,
        CONST =     115 ,
        FRIEND =    114 ,
        VIRTUAL =   113 ,
        INLINE =    112 ,
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
#define BDECR_cplus     341
#define BINCR_cplus     340
#define ADDR_cplus  339
#define NOT_cplus   338
#define LNEG_cplus  337
#define POS_cplus   336
#define NEG_cplus   335
#define PARAM_TYPE_cplus    334
#define STRING_LIST_cplus   333
#define LABEL_cplus     332
#define THROW_ANSI_cplus    331
#define ELSE_cplus  330
#define TUNSIGNED_cplus     329
#define TSIGNED_cplus   328
#define TFLOAT_cplus    327
#define TDOUBLE_cplus   326
#define TIDENT_cplus    325
#define RSHI_cplus  324
#define LSHI_cplus  323
#define LT_cplus    322
#define GT_cplus    321
#define GEQU_cplus  320
#define LEQU_cplus  319
#define SPACE_ARROW_cplus   318
#define TAB_DIRECTIVE_cplus     317
#define ENUM_PARAMETERS_UNDER_cplus     316
#define ENUM_VERT_VALUE_cplus   315
#define PROTECT_MEMB_cplus  314
#define LANGUAGE_cplus  313
#define EXP_cplus   312
#define ADECR_cplus     311
#define AINCR_cplus     310
#define ARROW_cplus     309
#define REF_cplus   308
#define EXP_ARRAY_cplus     307
#define EXP_LIST_cplus  306
#define ARROW_MEMB_cplus    305
#define DOT_MEMB_cplus  304
#define POINETOI_cplus  303
#define TIRESUPEETOI_cplus  302
#define TIRESUPE_cplus  301
#define SUPESUPE_cplus  300
#define INFEINFE_cplus  299
#define SUPEEGAL_cplus  298
#define INFEEGAL_cplus  297
#define NONE_cplus  296
#define NEW_DECLARATOR_cplus    295
#define USING_NAMESPACE_cplus   294
#define NAMESPACE_ALIAS_cplus   293
#define REM_cplus   292
#define DIV_cplus   291
#define MUL_cplus   290
#define POURC_cplus     289
#define MESSAGE_MAP_cplus   288
#define MACRO_cplus     287
#define TCHAR_cplus     286
#define TSHORT_cplus    285
#define TLONG_cplus     284
#define TINT_cplus  283
#define OR_cplus    282
#define VBARVBAR_cplus  281
#define AND_cplus   280
#define ETCOETCO_cplus  279
#define COMPOUND_EXT_cplus  278
#define EXTERNAL_cplus  277
#define INITIALIZER_cplus   276
#define LOR_cplus   275
#define VBAR_cplus  274
#define FUNC_cplus  273
#define ALL_OF_cplus    272
#define STAT_VOID_cplus     271
#define TEMPLATE_DECL_cplus     270
#define SUPE_cplus  269
#define CLASS_PARAM_cplus   268
#define EXP_SEQ_cplus   267
#define LXOR_cplus  266
#define CHAP_cplus  265
#define EXCEPTION_LIST_cplus    264
#define EXCEPTION_ANSI_cplus    263
#define EXCEPTION_cplus     262
#define NEQU_cplus  261
#define EQU_cplus   260
#define EXCLEGAL_cplus  259
#define EGALEGAL_cplus  258
#define PRAGMA_cplus    257
#define PARAMETERS_cplus    256
#define FUNC_HEADER_cplus   255
#define INDENT_FUNCTION_TYPE_cplus  254
#define COMMENT_PLUS_cplus  253
#define COMMENT_END_cplus   252
#define COMMENT_MIDDLE_cplus    251
#define COMMENT_START_cplus     250
#define MARGIN_VALUE_cplus  249
#define BRACE_ALIGN_VALUE_cplus     248
#define DECL_ALIGN_cplus    247
#define ASSIGN_ALIGN_cplus  246
#define SINGLE_SWITCH_INDENT_VALUE_cplus    245
#define SIMPLIFY_VALUE_cplus    244
#define SIMPLIFY_cplus  243
#define MODE_VALUE_cplus    242
#define TAB_VALUE_cplus     241
#define CONFIG_cplus    240
#define NOT_MANAGED_cplus   239
#define NO_PRETTY_cplus     238
#define ALINE_cplus     237
#define ERROR_cplus     236
#define UNDEF_cplus     235
#define TYP_AFF_CALL_cplus  234
#define MEMBER_DECLARATOR_cplus     233
#define TYP_ARRAY_cplus     232
#define CFER_cplus  231
#define COUV_cplus  230
#define FOR_DECLARATION_cplus   229
#define DECLARATION_cplus   228
#define CTOR_INITIALIZER_cplus  227
#define CTOR_INIT_cplus     226
#define LONGLONG_cplus  225
#define IUNLONGLONG_cplus   224
#define IUNLONG_cplus   223
#define IUN_cplus   222
#define ILONGLONG_cplus     221
#define ILONG_cplus     220
#define RANGE_MODIFIER_cplus    219
#define COND_AFF_cplus  218
#define INTE_cplus  217
#define COMPOUND_cplus  216
#define CLASS_DECL_cplus    215
#define AFER_cplus  214
#define CATCH_ANSI_cplus    213
#define EXCEPT_ANSI_ALL_cplus   212
#define CAST_cplus  211
#define TYP_BIT_cplus   210
#define PROTECT_cplus   209
#define BASE_LIST_cplus     208
#define XOR_AFF_cplus   207
#define OR_AFF_cplus    206
#define AND_AFF_cplus   205
#define RSH_AFF_cplus   204
#define LSH_AFF_cplus   203
#define MIN_AFF_cplus   202
#define PLU_AFF_cplus   201
#define REM_AFF_cplus   200
#define DIV_AFF_cplus   199
#define MUL_AFF_cplus   198
#define AFF_cplus   197
#define VAR_LIST_cplus  196
#define TYP_LIST_cplus  195
#define TYP_AFF_cplus   194
#define ABST_DECLARATOR_cplus   193
#define DECLARATOR_cplus    192
#define POINPOINPOIN_cplus  191
#define LAND_cplus  190
#define INIT_NEW_cplus  189
#define VIRG_cplus  188
#define QUALIFIED_cplus     187
#define MINUS_cplus     186
#define TYP_cplus   185
#define PFER_cplus  184
#define DESTRUCT_cplus  183
#define TYP_REF_cplus   182
#define TYP_ADDR_cplus  181
#define INFE_cplus  180
#define USING_cplus     179
#define NAMESPACE_cplus     178
#define TYPEDEF_cplus   177
#define TEMPLATE_cplus  176
#define CATCH_cplus     175
#define DPOI_cplus  174
#define PUBLIC_cplus    173
#define PROTECTED_cplus     172
#define PRIVATE_cplus   171
#define CHAPEGAL_cplus  170
#define VBAREGAL_cplus  169
#define ETCOEGAL_cplus  168
#define SUPESUPEEGAL_cplus  167
#define INFEINFEEGAL_cplus  166
#define TIREEGAL_cplus  165
#define PLUSEGAL_cplus  164
#define POURCEGAL_cplus     163
#define ETOIEGAL_cplus  162
#define EGAL_cplus  161
#define ASM_cplus   160
#define VA_ARG_cplus    159
#define DELETE_cplus    158
#define NEW_cplus   157
#define SIZEOF_cplus    156
#define TIRETIRE_cplus  155
#define PLUSPLUS_cplus  154
#define EXCL_cplus  153
#define PLUS_cplus  152
#define TIRE_cplus  151
#define POUV_cplus  150
#define DEFAULT_cplus   149
#define CASE_cplus  148
#define TRY_cplus   147
#define THROW_cplus     146
#define FORALLSONS_cplus    145
#define WHILE_cplus     144
#define SWITCH_cplus    143
#define RETURN_cplus    142
#define PVIR_cplus  141
#define IF_cplus    140
#define FOR_cplus   139
#define AOUV_cplus  138
#define DO_cplus    137
#define CONTINUE_cplus  136
#define BREAK_cplus     135
#define OPERATOR_cplus  134
#define TILD_cplus  133
#define ETCO_cplus  132
#define ETOI_cplus  131
#define SHORT_cplus     130
#define UNSIGNED_cplus  129
#define SIGNED_cplus    128
#define LONG_cplus  127
#define DPOIDPOI_cplus  126
#define VOID_cplus  125
#define FLOAT_cplus     124
#define CHAR_cplus  123
#define INT_cplus   122
#define DOUBLE_cplus    121
#define TYPENAME_cplus  120
#define CLASS_cplus     119
#define UNION_cplus     118
#define STRUCT_cplus    117
#define ENUM_cplus  116
#define CONST_cplus     115
#define FRIEND_cplus    114
#define VIRTUAL_cplus   113
#define INLINE_cplus    112
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
