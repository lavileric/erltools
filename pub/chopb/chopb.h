#ifndef CHOPB_PARSER
#define CHOPB_PARSER

        extern int nb_par_parse;
           #ifdef IN
           #undef IN
           #endif
    


#ifdef __cplusplus
#include "cplus.h"
typedef int (pretty::** _FUNC_MEMB_CHOPB) ();
class chopb: public cplus,public virtual Parser {
    public :
    
    static int init ; 
    
    chopb() { _InitArrays () ;}
    virtual void _InitArrays () {
        ptTokenArray = _tokenArray;
        ptTokenFuncArray =(_FUNC_MEMB_CHOPB) _tokenFuncArray;
        ptTokenNbFuncArray = _tokenNbFuncArray;
        InitConst ();
        inMakeTree = 0 ;
        parse = 0 ;
        or_not_ok = 0 ;
        
    }
    
    ~chopb () {}
    
    virtual void AsLanguage () { SwitchLang("chopb");}
    
    virtual void * rootGrammar () { return (void *) this;}
    virtual int Lex() ;
    virtual int LexComment() ;
    virtual int LexEtoiEtoi() ;
    virtual int LexMeta() ;
    virtual int LexParse() ;
    virtual int LexSup() ;
    virtual PPTREE assignment_expression ( int error_free) ;
    virtual PPTREE cast_expression_value ( int error_free) ;
    virtual PPTREE exclusive_or_expression ( int error_free) ;
    virtual PPTREE expression ( int error_free) ;
    virtual int formatBeg() ;
    virtual PPTREE main_entry ( int error_free) ;
    virtual PPTREE multiplicative_expression ( int error_free) ;
    virtual PPTREE old ( int error_free) ;
    virtual PPTREE postfix_expression ( int error_free) ;
    virtual PPTREE primary_expression ( int error_free) ;
    virtual PPTREE prog ( int error_free) ;
    virtual PPTREE relational_expression ( int error_free) ;
    virtual PPTREE shift_expression ( int error_free) ;
    virtual PPTREE statement ( int error_free) ;
    virtual PPTREE take_follow ( int error_free) ;
    virtual PPTREE take_follow_list ( int error_free) ;
    virtual PPTREE take_follow_super ( int error_free) ;
    
    
    int inMakeTree;
    int parse;
    int or_not_ok;
    static signed char * _tokenArray [176];
    static int (chopb::*(_tokenFuncArray [176])) ();
    static int _tokenNbFuncArray [176];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     412 ,
        NODE_TREE =     411 ,
        SPACE =     410 ,
        SEP_OMIT =  409 ,
        SEP_BEFORE =    408 ,
        SEP_AFTER =     407 ,
        AFERAFER =  406 ,
        ALINEA =    405 ,
        CHOP_DEF =  404 ,
        NIL =   403 ,
        IN_LANG =   402 ,
        NEXT =  401 ,
        DEF_IDENT =     400 ,
        BOX =   399 ,
        EXPO =  398 ,
        EXPO_AFF =  397 ,
        ETOIETOIEGAL =  396 ,
        IN =    395 ,
        PARSE =     394 ,
        NEXTL =     393 ,
        VALUE =     392 ,
        INFESUPE =  391 ,
        FOREACH =   390 ,
        INFESEPOSUPE =  389 ,
        INFESEPBSUPE =  388 ,
        INFESEPASUPE =  387 ,
        AOUVAOUV =  386 ,
        ARRO =  385 ,
        NL_BEG =    384 ,
        TAB_BEG =   383 ,
        SPACE_BEG =     382 ,
        MAKETREE_SUP =  381 ,
        MAKETREE_INF =  380 ,
        PARSE_ELEM =    379 ,
        SIMP_ETOI =     378 ,
        ETOI_ETOI =     377 ,
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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     412
#define NODE_TREE_chopb     411
#define SPACE_chopb     410
#define SEP_OMIT_chopb  409
#define SEP_BEFORE_chopb    408
#define SEP_AFTER_chopb     407
#define AFERAFER_chopb  406
#define ALINEA_chopb    405
#define CHOP_DEF_chopb  404
#define NIL_chopb   403
#define IN_LANG_chopb   402
#define NEXT_chopb  401
#define DEF_IDENT_chopb     400
#define BOX_chopb   399
#define EXPO_chopb  398
#define EXPO_AFF_chopb  397
#define ETOIETOIEGAL_chopb  396
#define IN_chopb    395
#define PARSE_chopb     394
#define NEXTL_chopb     393
#define VALUE_chopb     392
#define INFESUPE_chopb  391
#define FOREACH_chopb   390
#define INFESEPOSUPE_chopb  389
#define INFESEPBSUPE_chopb  388
#define INFESEPASUPE_chopb  387
#define AOUVAOUV_chopb  386
#define ARRO_chopb  385
#define NL_BEG_chopb    384
#define TAB_BEG_chopb   383
#define SPACE_BEG_chopb     382
#define MAKETREE_SUP_chopb  381
#define MAKETREE_INF_chopb  380
#define PARSE_ELEM_chopb    379
#define SIMP_ETOI_chopb     378
#define ETOI_ETOI_chopb     377
#define TUNSIGNED_chopb     376
#define BDECR_chopb     375
#define BINCR_chopb     374
#define ADDR_chopb  373
#define NOT_chopb   372
#define LNEG_chopb  371
#define POS_chopb   370
#define NEG_chopb   369
#define PARAM_TYPE_chopb    368
#define STRING_LIST_chopb   367
#define LABEL_chopb     366
#define THROW_ANSI_chopb    365
#define ELSE_chopb  364
#define DECL_TYPE_chopb     363
#define CLASSNAME_chopb     362
#define TIDENT_chopb    361
#define TSIGNED_chopb   360
#define TSHORT_chopb    359
#define TCHAR_chopb     358
#define TINT_chopb  357
#define RSHI_chopb  356
#define LSHI_chopb  355
#define LT_chopb    354
#define GT_chopb    353
#define GEQU_chopb  352
#define LEQU_chopb  351
#define SPACE_ARROW_chopb   350
#define TAB_DIRECTIVE_chopb     349
#define ENUM_PARAMETERS_UNDER_chopb     348
#define ENUM_VERT_VALUE_chopb   347
#define PROTECTED_ARRAY_S_TYPEDEF_chopb     346
#define PROTECTED_ARRAY_TYPEDEF_chopb   345
#define PROTECTED_ARRAY_S_chopb     344
#define PROTECTED_ARRAY_chopb   343
#define PROTECT_MEMB_chopb  342
#define LANGUAGE_chopb  341
#define ELIPSIS_EXPRESSION_chopb    340
#define EXP_chopb   339
#define ADECR_chopb     338
#define AINCR_chopb     337
#define ARROW_chopb     336
#define REF_chopb   335
#define VARIADIC_EXPRESSION_chopb   334
#define EXP_BRA_chopb   333
#define EXP_LIST_chopb  332
#define ARROW_MEMB_chopb    331
#define DOT_MEMB_chopb  330
#define POINETOI_chopb  329
#define TIRESUPEETOI_chopb  328
#define SUPESUPE_chopb  327
#define INFEINFE_chopb  326
#define SUPEEGAL_chopb  325
#define INFEEGAL_chopb  324
#define NONE_chopb  323
#define NEW_DECLARATOR_chopb    322
#define USING_NAMESPACE_chopb   321
#define NAMESPACE_ALIAS_chopb   320
#define REM_chopb   319
#define DIV_chopb   318
#define MUL_chopb   317
#define POURC_chopb     316
#define MESSAGE_MAP_chopb   315
#define MACRO_chopb     314
#define TDOUBLE_chopb   313
#define TFLOAT_chopb    312
#define TLONG_chopb     311
#define OR_chopb    310
#define VBARVBAR_chopb  309
#define AND_chopb   308
#define COMPOUND_EXT_chopb  307
#define EXTERNAL_chopb  306
#define MUTABLE_chopb   305
#define TIRESUPE_chopb  304
#define CAPTURE_ALL_chopb   303
#define LAMBDA_chopb    302
#define INLINE_NAMESPACE_chopb  301
#define INITIALIZER_chopb   300
#define LOR_chopb   299
#define VBAR_chopb  298
#define DELETE_FUNCTION_chopb   297
#define FUNC_chopb  296
#define ALL_OF_chopb    295
#define EXTENSION_chopb     294
#define __EXTENSION___chopb     293
#define STAT_VOID_chopb     292
#define TYPEDEF_chopb   291
#define TEMPLATE_DECL_chopb     290
#define SUPE_chopb  289
#define CLASS_PARAM_chopb   288
#define TEMPLATE_chopb  287
#define EXP_SEQ_chopb   286
#define LXOR_chopb  285
#define CHAP_chopb  284
#define EXCEPTION_LIST_chopb    283
#define EXCEPTION_ANSI_chopb    282
#define EXCEPTION_chopb     281
#define NEQU_chopb  280
#define EQU_chopb   279
#define EXCLEGAL_chopb  278
#define EGALEGAL_chopb  277
#define ENUM_CLASS_chopb    276
#define PRAGMA_chopb    275
#define PARAMETERS_chopb    274
#define FUNC_HEADER_chopb   273
#define INDENT_FUNCTION_TYPE_chopb  272
#define COMMENT_PLUS_chopb  271
#define COMMENT_END_chopb   270
#define COMMENT_MIDDLE_chopb    269
#define COMMENT_START_chopb     268
#define MARGIN_VALUE_chopb  267
#define BRACE_ALIGN_VALUE_chopb     266
#define DECL_ALIGN_chopb    265
#define ASSIGN_ALIGN_chopb  264
#define SINGLE_SWITCH_INDENT_VALUE_chopb    263
#define SIMPLIFY_VALUE_chopb    262
#define SIMPLIFY_chopb  261
#define MODE_VALUE_chopb    260
#define TAB_VALUE_chopb     259
#define CONFIG_chopb    258
#define NOT_MANAGED_chopb   257
#define NO_PRETTY_chopb     256
#define ALINE_chopb     255
#define ERROR_chopb     254
#define UNDEF_chopb     253
#define TYP_AFF_BRA_chopb   252
#define TYP_AFF_CALL_chopb  251
#define MEMBER_DECLARATOR_chopb     250
#define TYP_ARRAY_chopb     249
#define FOR_DECLARATION_chopb   248
#define DECLARATION_chopb   247
#define CTOR_INITIALIZER_chopb  246
#define BRACE_MARKER_chopb  245
#define CTOR_INIT_chopb     244
#define LONGLONG_chopb  243
#define IUNLONGLONG_chopb   242
#define IUNLONG_chopb   241
#define IUN_chopb   240
#define ILONGLONG_chopb     239
#define ILONG_chopb     238
#define RANGE_MODIFIER_chopb    237
#define COND_AFF_chopb  236
#define INTE_chopb  235
#define COMPOUND_chopb  234
#define CLASS_DECL_chopb    233
#define AFER_chopb  232
#define CATCH_ANSI_chopb    231
#define EXCEPT_ANSI_ALL_chopb   230
#define CAST_chopb  229
#define TYP_BIT_chopb   228
#define PROTECT_chopb   227
#define BASE_LIST_chopb     226
#define ATTRIBUTE_CALL_chopb    225
#define XOR_AFF_chopb   224
#define OR_AFF_chopb    223
#define AND_AFF_chopb   222
#define RSH_AFF_chopb   221
#define LSH_AFF_chopb   220
#define MIN_AFF_chopb   219
#define PLU_AFF_chopb   218
#define REM_AFF_chopb   217
#define DIV_AFF_chopb   216
#define MUL_AFF_chopb   215
#define AFF_chopb   214
#define ASM_CALL_chopb  213
#define EXP_ARRAY_chopb     212
#define VAR_LIST_chopb  211
#define TYP_LIST_chopb  210
#define TYP_AFF_chopb   209
#define ABST_DECLARATOR_chopb   208
#define DECLARATOR_chopb    207
#define LAND_chopb  206
#define INIT_NEW_chopb  205
#define VIRG_chopb  204
#define QUALIFIED_chopb     203
#define MINUS_chopb     202
#define TYP_chopb   201
#define PFER_chopb  200
#define DESTRUCT_chopb  199
#define TYP_REF_chopb   198
#define TYP_VARIADIC_chopb  197
#define TYP_MOV_chopb   196
#define TYP_ADDR_chopb  195
#define INFE_chopb  194
#define _TYPEDEF_PROTECTEDARRAY_S_chopb     193
#define _TYPEDEF_PROTECTEDARRAY_chopb   192
#define _PROTECTEDPOINTER_S_chopb   191
#define _PROTECTEDPOINTER_chopb     190
#define _PROTECTEDARRAY_S_chopb     189
#define _PROTECTEDARRAY_chopb   188
#define USING_chopb     187
#define NAMESPACE_chopb     186
#define CATCH_chopb     185
#define DPOI_chopb  184
#define PUBLIC_chopb    183
#define PROTECTED_chopb     182
#define PRIVATE_chopb   181
#define CHAPEGAL_chopb  180
#define VBAREGAL_chopb  179
#define ETCOEGAL_chopb  178
#define SUPESUPEEGAL_chopb  177
#define INFEINFEEGAL_chopb  176
#define TIREEGAL_chopb  175
#define PLUSEGAL_chopb  174
#define POURCEGAL_chopb     173
#define ETOIEGAL_chopb  172
#define EGAL_chopb  171
#define ASM_chopb   170
#define CFER_chopb  169
#define COUV_chopb  168
#define VA_ARG_chopb    167
#define DELETE_chopb    166
#define NEW_chopb   165
#define SIZEOF_chopb    164
#define TIRETIRE_chopb  163
#define PLUSPLUS_chopb  162
#define EXCL_chopb  161
#define PLUS_chopb  160
#define TIRE_chopb  159
#define DEFAULT_chopb   158
#define CASE_chopb  157
#define TRY_chopb   156
#define THROW_chopb     155
#define FORALLSONS_chopb    154
#define WHILE_chopb     153
#define SWITCH_chopb    152
#define RETURN_chopb    151
#define PVIR_chopb  150
#define IF_chopb    149
#define FOR_chopb   148
#define AOUV_chopb  147
#define DO_chopb    146
#define CONTINUE_chopb  145
#define BREAK_chopb     144
#define OPERATOR_chopb  143
#define TILD_chopb  142
#define ETCO_chopb  141
#define POINPOINPOIN_chopb  140
#define ETCOETCO_chopb  139
#define ETOI_chopb  138
#define POUV_chopb  137
#define UNSIGNED_chopb  136
#define SIGNED_chopb    135
#define SHORT_chopb     134
#define LONG_chopb  133
#define CHAR_chopb  132
#define INT_chopb   131
#define DPOIDPOI_chopb  130
#define VOID_chopb  129
#define FLOAT_chopb     128
#define DOUBLE_chopb    127
#define DECLTYPE_chopb  126
#define TYPENAME_chopb  125
#define CLASS_chopb     124
#define UNION_chopb     123
#define STRUCT_chopb    122
#define ENUM_chopb  121
#define CONSTEXPR_chopb     120
#define CONST_chopb     119
#define FRIEND_chopb    118
#define VIRTUAL_chopb   117
#define INLINE_chopb    116
#define __ASM___chopb   115
#define __ATTRIBUTE___chopb     114
#define VOLATILE_chopb  113
#define REGISTER_chopb  112
#define EXTERN_chopb    111
#define STATIC_chopb    110
#define AUTO_chopb  109
#define FUNC_SPEC_chopb     108
#define TRY_UPPER_chopb     107
#define END_CATCH_chopb     106
#define END_CATCH_ALL_chopb     105
#define AND_CATCH_chopb     104
#define CATCH_UPPER_chopb   103
#define CATCH_ALL_chopb     102
#define END_MESSAGE_MAP_chopb   101
#define BEGIN_MESSAGE_MAP_chopb     100
#define DECLARE_MESSAGE_MAP_chopb   99
#define IMPLEMENT_SERIAL_chopb  98
#define IMPLEMENT_DYNCREATE_chopb   97
#define IMPLEMENT_DYNAMIC_chopb     96
#define DECLARE_SERIAL_chopb    95
#define DECLARE_DYNAMIC_chopb   94
#define PUSH_FUNCTION_chopb     93
#define PUSH_ARGUMENT_chopb     92
#define UNDEF_CONTENT_chopb     91
#define SMALL_PRAGMA_CONTENT_chopb  90
#define PRAGMA_CONTENT_chopb    89
#define PRAGMA_ENUM_VERT_chopb  88
#define PRAGMA_SPACE_ARROW_chopb    87
#define PRAGMA_PARAMETERS_chopb     86
#define PRAGMA_PARAMETERS_UNDER_chopb   85
#define PRAGMA_FUNC_HEADER_chopb    84
#define PRAGMA_INDENT_FUNCTION_TYPE_chopb   83
#define PRAGMA_COMMENT_PLUS_chopb   82
#define PRAGMA_COMMENT_END_chopb    81
#define PRAGMA_COMMENT_MIDDLE_chopb     80
#define PRAGMA_COMMENT_START_chopb  79
#define PRAGMA_MARGIN_chopb     78
#define PRAGMA_DECL_ALIGN_chopb     77
#define PRAGMA_ASSIGN_ALIGN_chopb   76
#define PRAGMA_SINGLE_SWITCH_INDENT_chopb   75
#define PRAGMA_SIMPLIFY_chopb   74
#define PRAGMA_BRACE_ALIGN_chopb    73
#define PRAGMA_MODE_chopb   72
#define PRAGMA_RANGE_chopb  71
#define PRAGMA_TAB_chopb    70
#define PRAGMA_TAB_DIRECTIVE_chopb  69
#define PRAGMA_CONFIG_chopb     68
#define PRAGMA_NOT_MANAGED_chopb    67
#define PRAGMA_MANAGED_chopb    66
#define PRAGMA_NOPRETTY_chopb   65
#define PRAGMA_PRETTY_chopb     64
#define INCLUDE_LOCAL_chopb     63
#define INCLUDE_SYS_chopb   62
#define END_LINE_chopb  61
#define DEFINE_NAME_chopb   60
#define DEFINED_NOT_CONTINUED_chopb     59
#define DEFINED_CONTINUED_chopb     58
#define POINT_chopb     57
#define SLAS_chopb  56
#define SLASEGAL_chopb  55
#define CARRIAGE_RETURN_chopb   54
#define SHARP_VAL_chopb     53
#define LINE_REFERENCE_DIR_chopb    52
#define UNDEF_DIR_chopb     51
#define DEFINE_DIR_chopb    50
#define ERROR_DIR_chopb     49
#define PRAGMA_DIR_chopb    48
#define LINE_DIR_chopb  47
#define ENDIF_DIR_chopb     46
#define ELIF_DIR_chopb  45
#define ELSE_DIR_chopb  44
#define IF_DIR_chopb    43
#define IFNDEF_DIR_chopb    42
#define IFDEF_DIR_chopb     41
#define INCLUDE_DIR_chopb   40
#define OCTAL_chopb     39
#define UOCTAL_chopb    38
#define LOCTAL_chopb    37
#define ULOCTAL_chopb   36
#define LLOCTAL_chopb   35
#define ULLOCTAL_chopb  34
#define BINARY_chopb    33
#define HEXA_chopb  32
#define UHEXA_chopb     31
#define LHEXA_chopb     30
#define LLHEXA_chopb    29
#define ULLHEXA_chopb   28
#define ULHEXA_chopb    27
#define FLOATVAL_chopb  26
#define UINTEGER_chopb  25
#define LINTEGER_chopb  24
#define LLINTEGER_chopb     23
#define ULLINTEGER_chopb    22
#define ULINTEGER_chopb     21
#define INTEGER_chopb   20
#define CHARACT_chopb   19
#define STRING_chopb    18
#define DQUOTE_chopb    17
#define IDENT_chopb     16
#define GOTO_REL_chopb  15
#define GOTO_chopb  14
#define STR_chopb   13
#define UNMARK_chopb    12
#define MARK_chopb  11
#define TAB_VIRT_chopb  10
#define TAB_chopb   9
#define NEWLINE_chopb   8
#define ATTRIBUTS_chopb     7
#define PLUS____TIRETIRETIRETIRETIRETIRE_____chopb  6
#undef _Tak
#define _Tak(func) func 
#endif
