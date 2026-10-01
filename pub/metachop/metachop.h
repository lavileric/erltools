#ifndef METACHOP_PARSER
#define METACHOP_PARSER

        extern char * parseLanguage;
        #include "decmetac.h"
    


#ifdef __cplusplus
#include "chopb.h"
typedef int (pretty::** _FUNC_MEMB_METACHOP) ();
class metachop: public chopb,public virtual Parser {
    public :
    
    static int init ; 
    
    metachop() { _InitArrays () ;}
    virtual void _InitArrays () {
        ptTokenArray = _tokenArray;
        ptTokenFuncArray =(_FUNC_MEMB_METACHOP) _tokenFuncArray;
        ptTokenNbFuncArray = _tokenNbFuncArray;
        InitConst ();
        
    }
    
    ~metachop () {}
    
    virtual void AsLanguage () { SwitchLang("metachop");}
    
    virtual void * rootGrammar () { return (void *) this;}
    virtual int Lex() ;
    virtual PPTREE main_entry ( int error_free) ;
    virtual PPTREE primary_expression ( int error_free) ;
    virtual PPTREE prog ( int error_free) ;
    
    
    static signed char * _tokenArray [180];
    static int (metachop::*(_tokenFuncArray [180])) ();
    static int _tokenNbFuncArray [180];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     415 ,
        NODE_TREE =     414 ,
        SPACE =     413 ,
        SEP_OMIT =  412 ,
        SEP_BEFORE =    411 ,
        SEP_AFTER =     410 ,
        AFERAFER =  409 ,
        ALINEA =    408 ,
        CHOP_DEF =  407 ,
        NIL =   406 ,
        IN_LANG =   405 ,
        NEXT =  404 ,
        DEF_IDENT =     403 ,
        BOX =   402 ,
        EXPO =  401 ,
        EXPO_AFF =  400 ,
        ETOIETOIEGAL =  399 ,
        IN =    398 ,
        PARSE =     397 ,
        NEXTL =     396 ,
        VALUE =     395 ,
        INFESUPE =  394 ,
        FOREACH =   393 ,
        INFESEPOSUPE =  392 ,
        INFESEPBSUPE =  391 ,
        INFESEPASUPE =  390 ,
        AOUVAOUV =  389 ,
        ARRO =  388 ,
        NL_BEG =    387 ,
        TAB_BEG =   386 ,
        SPACE_BEG =     385 ,
        MAKETREE_SUP =  384 ,
        MAKETREE_INF =  383 ,
        PARSE_ELEM =    382 ,
        SIMP_ETOI =     381 ,
        ETOI_ETOI =     380 ,
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

extern metachop * parser_metachop;

#endif
#define NODE_LIST_metachop  415
#define NODE_TREE_metachop  414
#define SPACE_metachop  413
#define SEP_OMIT_metachop   412
#define SEP_BEFORE_metachop     411
#define SEP_AFTER_metachop  410
#define AFERAFER_metachop   409
#define ALINEA_metachop     408
#define CHOP_DEF_metachop   407
#define NIL_metachop    406
#define IN_LANG_metachop    405
#define NEXT_metachop   404
#define DEF_IDENT_metachop  403
#define BOX_metachop    402
#define EXPO_metachop   401
#define EXPO_AFF_metachop   400
#define ETOIETOIEGAL_metachop   399
#define IN_metachop     398
#define PARSE_metachop  397
#define NEXTL_metachop  396
#define VALUE_metachop  395
#define INFESUPE_metachop   394
#define FOREACH_metachop    393
#define INFESEPOSUPE_metachop   392
#define INFESEPBSUPE_metachop   391
#define INFESEPASUPE_metachop   390
#define AOUVAOUV_metachop   389
#define ARRO_metachop   388
#define NL_BEG_metachop     387
#define TAB_BEG_metachop    386
#define SPACE_BEG_metachop  385
#define MAKETREE_SUP_metachop   384
#define MAKETREE_INF_metachop   383
#define PARSE_ELEM_metachop     382
#define SIMP_ETOI_metachop  381
#define ETOI_ETOI_metachop  380
#define TUNSIGNED_metachop  379
#define BDECR_metachop  378
#define BINCR_metachop  377
#define ADDR_metachop   376
#define NOT_metachop    375
#define LNEG_metachop   374
#define POS_metachop    373
#define NEG_metachop    372
#define PARAM_TYPE_metachop     371
#define STRING_LIST_metachop    370
#define LABEL_metachop  369
#define THROW_ANSI_metachop     368
#define ELSE_metachop   367
#define DECL_TYPE_metachop  366
#define CLASSNAME_metachop  365
#define TIDENT_metachop     364
#define TSIGNED_metachop    363
#define TSHORT_metachop     362
#define TCHAR_metachop  361
#define TINT_metachop   360
#define RSHI_metachop   359
#define LSHI_metachop   358
#define LT_metachop     357
#define GT_metachop     356
#define GEQU_metachop   355
#define LEQU_metachop   354
#define SPACE_ARROW_metachop    353
#define TAB_DIRECTIVE_metachop  352
#define ENUM_PARAMETERS_UNDER_metachop  351
#define ENUM_VERT_VALUE_metachop    350
#define PROTECTED_ARRAY_S_TYPEDEF_metachop  349
#define PROTECTED_ARRAY_TYPEDEF_metachop    348
#define PROTECTED_ARRAY_S_metachop  347
#define PROTECTED_ARRAY_metachop    346
#define PROTECT_MEMB_metachop   345
#define LANGUAGE_metachop   344
#define ELIPSIS_EXPRESSION_metachop     343
#define EXP_metachop    342
#define ADECR_metachop  341
#define AINCR_metachop  340
#define ARROW_metachop  339
#define REF_metachop    338
#define VARIADIC_EXPRESSION_metachop    337
#define EXP_BRA_metachop    336
#define EXP_LIST_metachop   335
#define ARROW_MEMB_metachop     334
#define DOT_MEMB_metachop   333
#define POINETOI_metachop   332
#define TIRESUPEETOI_metachop   331
#define SUPESUPE_metachop   330
#define INFEINFE_metachop   329
#define SUPEEGAL_metachop   328
#define INFEEGAL_metachop   327
#define NONE_metachop   326
#define NEW_DECLARATOR_metachop     325
#define USING_TYPE_metachop     324
#define USING_NAMESPACE_metachop    323
#define NAMESPACE_ALIAS_metachop    322
#define REM_metachop    321
#define DIV_metachop    320
#define MUL_metachop    319
#define POURC_metachop  318
#define MESSAGE_MAP_metachop    317
#define MACRO_metachop  316
#define TDOUBLE_metachop    315
#define TFLOAT_metachop     314
#define TLONG_metachop  313
#define OR_metachop     312
#define VBARVBAR_metachop   311
#define AND_metachop    310
#define COMPOUND_EXT_metachop   309
#define EXTERNAL_metachop   308
#define MUTABLE_metachop    307
#define TIRESUPE_metachop   306
#define CAPTURE_ALL_metachop    305
#define LAMBDA_metachop     304
#define INLINE_NAMESPACE_metachop   303
#define INITIALIZER_metachop    302
#define LOR_metachop    301
#define VBAR_metachop   300
#define DELETE_FUNCTION_metachop    299
#define FUNC_metachop   298
#define ALL_OF_metachop     297
#define EXTENSION_metachop  296
#define __EXTENSION___metachop  295
#define STAT_VOID_metachop  294
#define TYPEDEF_metachop    293
#define TEMPLATE_DECL_metachop  292
#define SUPE_metachop   291
#define CLASS_PARAM_metachop    290
#define TEMPLATE_metachop   289
#define EXP_SEQ_metachop    288
#define LXOR_metachop   287
#define CHAP_metachop   286
#define EXCEPTION_LIST_metachop     285
#define EXCEPTION_ANSI_metachop     284
#define EXCEPTION_metachop  283
#define NEQU_metachop   282
#define EQU_metachop    281
#define EXCLEGAL_metachop   280
#define EGALEGAL_metachop   279
#define ENUM_CLASS_metachop     278
#define PRAGMA_metachop     277
#define PARAMETERS_metachop     276
#define FUNC_HEADER_metachop    275
#define INDENT_FUNCTION_TYPE_metachop   274
#define COMMENT_PLUS_metachop   273
#define COMMENT_END_metachop    272
#define COMMENT_MIDDLE_metachop     271
#define COMMENT_START_metachop  270
#define MARGIN_VALUE_metachop   269
#define BRACE_ALIGN_VALUE_metachop  268
#define DECL_ALIGN_metachop     267
#define ASSIGN_ALIGN_metachop   266
#define SINGLE_SWITCH_INDENT_VALUE_metachop     265
#define SIMPLIFY_VALUE_metachop     264
#define SIMPLIFY_metachop   263
#define MODE_VALUE_metachop     262
#define TAB_VALUE_metachop  261
#define CONFIG_metachop     260
#define NOT_MANAGED_metachop    259
#define NO_PRETTY_metachop  258
#define ALINE_metachop  257
#define ERROR_metachop  256
#define UNDEF_metachop  255
#define TYP_AFF_BRA_metachop    254
#define TYP_AFF_CALL_metachop   253
#define MEMBER_DECLARATOR_metachop  252
#define TYP_ARRAY_metachop  251
#define FOR_DECLARATION_metachop    250
#define DECLARATION_metachop    249
#define CTOR_INITIALIZER_metachop   248
#define BRACE_MARKER_metachop   247
#define CTOR_INIT_metachop  246
#define LONGLONG_metachop   245
#define IUNLONGLONG_metachop    244
#define IUNLONG_metachop    243
#define IUN_metachop    242
#define ILONGLONG_metachop  241
#define ILONG_metachop  240
#define RANGE_MODIFIER_metachop     239
#define COND_AFF_metachop   238
#define INTE_metachop   237
#define COMPOUND_metachop   236
#define CLASS_DECL_metachop     235
#define AFER_metachop   234
#define CATCH_ANSI_metachop     233
#define EXCEPT_ANSI_ALL_metachop    232
#define CAST_metachop   231
#define TYP_BIT_metachop    230
#define PROTECT_metachop    229
#define BASE_LIST_metachop  228
#define ATTRIBUTE_CALL_metachop     227
#define XOR_AFF_metachop    226
#define OR_AFF_metachop     225
#define AND_AFF_metachop    224
#define RSH_AFF_metachop    223
#define LSH_AFF_metachop    222
#define MIN_AFF_metachop    221
#define PLU_AFF_metachop    220
#define REM_AFF_metachop    219
#define DIV_AFF_metachop    218
#define MUL_AFF_metachop    217
#define AFF_metachop    216
#define ASM_CALL_metachop   215
#define EXP_ARRAY_metachop  214
#define VAR_LIST_metachop   213
#define TYP_LIST_metachop   212
#define TYP_AFF_metachop    211
#define ABST_DECLARATOR_metachop    210
#define DECLARATOR_metachop     209
#define LAND_metachop   208
#define INIT_NEW_metachop   207
#define VIRG_metachop   206
#define QUALIFIED_metachop  205
#define MINUS_metachop  204
#define TYP_metachop    203
#define PFER_metachop   202
#define DESTRUCT_metachop   201
#define TYP_REF_metachop    200
#define TYP_VARIADIC_metachop   199
#define TYP_MOV_metachop    198
#define TYP_ADDR_metachop   197
#define INFE_metachop   196
#define _TYPEDEF_PROTECTEDARRAY_S_metachop  195
#define _TYPEDEF_PROTECTEDARRAY_metachop    194
#define _PROTECTEDPOINTER_S_metachop    193
#define _PROTECTEDPOINTER_metachop  192
#define _PROTECTEDARRAY_S_metachop  191
#define _PROTECTEDARRAY_metachop    190
#define USING_metachop  189
#define NAMESPACE_metachop  188
#define CATCH_metachop  187
#define DPOI_metachop   186
#define PUBLIC_metachop     185
#define PROTECTED_metachop  184
#define PRIVATE_metachop    183
#define CHAPEGAL_metachop   182
#define VBAREGAL_metachop   181
#define ETCOEGAL_metachop   180
#define SUPESUPEEGAL_metachop   179
#define INFEINFEEGAL_metachop   178
#define TIREEGAL_metachop   177
#define PLUSEGAL_metachop   176
#define POURCEGAL_metachop  175
#define ETOIEGAL_metachop   174
#define EGAL_metachop   173
#define ASM_metachop    172
#define CFER_metachop   171
#define COUV_metachop   170
#define VA_ARG_metachop     169
#define DELETE_metachop     168
#define NEW_metachop    167
#define SIZEOF_metachop     166
#define TIRETIRE_metachop   165
#define PLUSPLUS_metachop   164
#define EXCL_metachop   163
#define PLUS_metachop   162
#define TIRE_metachop   161
#define DEFAULT_metachop    160
#define CASE_metachop   159
#define TRY_metachop    158
#define THROW_metachop  157
#define FORALLSONS_metachop     156
#define WHILE_metachop  155
#define SWITCH_metachop     154
#define RETURN_metachop     153
#define PVIR_metachop   152
#define IF_metachop     151
#define FOR_metachop    150
#define AOUV_metachop   149
#define DO_metachop     148
#define CONTINUE_metachop   147
#define BREAK_metachop  146
#define OPERATOR_metachop   145
#define TILD_metachop   144
#define ETCO_metachop   143
#define POINPOINPOIN_metachop   142
#define ETCOETCO_metachop   141
#define ETOI_metachop   140
#define POUV_metachop   139
#define UNSIGNED_metachop   138
#define SIGNED_metachop     137
#define SHORT_metachop  136
#define LONG_metachop   135
#define CHAR_metachop   134
#define INT_metachop    133
#define DPOIDPOI_metachop   132
#define VOID_metachop   131
#define FLOAT_metachop  130
#define DOUBLE_metachop     129
#define DECLTYPE_metachop   128
#define TYPENAME_metachop   127
#define CLASS_metachop  126
#define UNION_metachop  125
#define STRUCT_metachop     124
#define ENUM_metachop   123
#define NOEXCEPT_metachop   122
#define CONSTEVAL_metachop  121
#define CONSTEXPR_metachop  120
#define CONST_metachop  119
#define FRIEND_metachop     118
#define VIRTUAL_metachop    117
#define INLINE_metachop     116
#define __ASM___metachop    115
#define __ATTRIBUTE___metachop  114
#define VOLATILE_metachop   113
#define REGISTER_metachop   112
#define EXTERN_metachop     111
#define STATIC_metachop     110
#define AUTO_metachop   109
#define FUNC_SPEC_metachop  108
#define TRY_UPPER_metachop  107
#define END_CATCH_metachop  106
#define END_CATCH_ALL_metachop  105
#define AND_CATCH_metachop  104
#define CATCH_UPPER_metachop    103
#define CATCH_ALL_metachop  102
#define END_MESSAGE_MAP_metachop    101
#define BEGIN_MESSAGE_MAP_metachop  100
#define DECLARE_MESSAGE_MAP_metachop    99
#define IMPLEMENT_SERIAL_metachop   98
#define IMPLEMENT_DYNCREATE_metachop    97
#define IMPLEMENT_DYNAMIC_metachop  96
#define DECLARE_SERIAL_metachop     95
#define DECLARE_DYNAMIC_metachop    94
#define PUSH_FUNCTION_metachop  93
#define PUSH_ARGUMENT_metachop  92
#define UNDEF_CONTENT_metachop  91
#define SMALL_PRAGMA_CONTENT_metachop   90
#define PRAGMA_CONTENT_metachop     89
#define PRAGMA_ENUM_VERT_metachop   88
#define PRAGMA_SPACE_ARROW_metachop     87
#define PRAGMA_PARAMETERS_metachop  86
#define PRAGMA_PARAMETERS_UNDER_metachop    85
#define PRAGMA_FUNC_HEADER_metachop     84
#define PRAGMA_INDENT_FUNCTION_TYPE_metachop    83
#define PRAGMA_COMMENT_PLUS_metachop    82
#define PRAGMA_COMMENT_END_metachop     81
#define PRAGMA_COMMENT_MIDDLE_metachop  80
#define PRAGMA_COMMENT_START_metachop   79
#define PRAGMA_MARGIN_metachop  78
#define PRAGMA_DECL_ALIGN_metachop  77
#define PRAGMA_ASSIGN_ALIGN_metachop    76
#define PRAGMA_SINGLE_SWITCH_INDENT_metachop    75
#define PRAGMA_SIMPLIFY_metachop    74
#define PRAGMA_BRACE_ALIGN_metachop     73
#define PRAGMA_MODE_metachop    72
#define PRAGMA_RANGE_metachop   71
#define PRAGMA_TAB_metachop     70
#define PRAGMA_TAB_DIRECTIVE_metachop   69
#define PRAGMA_CONFIG_metachop  68
#define PRAGMA_NOT_MANAGED_metachop     67
#define PRAGMA_MANAGED_metachop     66
#define PRAGMA_NOPRETTY_metachop    65
#define PRAGMA_PRETTY_metachop  64
#define INCLUDE_LOCAL_metachop  63
#define INCLUDE_SYS_metachop    62
#define END_LINE_metachop   61
#define DEFINE_NAME_metachop    60
#define DEFINED_NOT_CONTINUED_metachop  59
#define DEFINED_CONTINUED_metachop  58
#define POINT_metachop  57
#define SLAS_metachop   56
#define SLASEGAL_metachop   55
#define CARRIAGE_RETURN_metachop    54
#define SHARP_VAL_metachop  53
#define LINE_REFERENCE_DIR_metachop     52
#define UNDEF_DIR_metachop  51
#define DEFINE_DIR_metachop     50
#define ERROR_DIR_metachop  49
#define PRAGMA_DIR_metachop     48
#define LINE_DIR_metachop   47
#define ENDIF_DIR_metachop  46
#define ELIF_DIR_metachop   45
#define ELSE_DIR_metachop   44
#define IF_DIR_metachop     43
#define IFNDEF_DIR_metachop     42
#define IFDEF_DIR_metachop  41
#define INCLUDE_DIR_metachop    40
#define OCTAL_metachop  39
#define UOCTAL_metachop     38
#define LOCTAL_metachop     37
#define ULOCTAL_metachop    36
#define LLOCTAL_metachop    35
#define ULLOCTAL_metachop   34
#define BINARY_metachop     33
#define HEXA_metachop   32
#define UHEXA_metachop  31
#define LHEXA_metachop  30
#define LLHEXA_metachop     29
#define ULLHEXA_metachop    28
#define ULHEXA_metachop     27
#define FLOATVAL_metachop   26
#define UINTEGER_metachop   25
#define LINTEGER_metachop   24
#define LLINTEGER_metachop  23
#define ULLINTEGER_metachop     22
#define ULINTEGER_metachop  21
#define INTEGER_metachop    20
#define CHARACT_metachop    19
#define STRING_metachop     18
#define DQUOTE_metachop     17
#define IDENT_metachop  16
#define GOTO_REL_metachop   15
#define GOTO_metachop   14
#define STR_metachop    13
#define UNMARK_metachop     12
#define MARK_metachop   11
#define TAB_VIRT_metachop   10
#define TAB_metachop    9
#define NEWLINE_metachop    8
#define ATTRIBUTS_metachop  7
#define PLUS____TIRETIRETIRETIRETIRETIRE_____metachop   6
#undef _Tak
#define _Tak(func) func 
#endif
