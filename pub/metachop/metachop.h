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
        NODE_LIST =     414 ,
        NODE_TREE =     413 ,
        SPACE =     412 ,
        SEP_OMIT =  411 ,
        SEP_BEFORE =    410 ,
        SEP_AFTER =     409 ,
        AFERAFER =  408 ,
        ALINEA =    407 ,
        CHOP_DEF =  406 ,
        NIL =   405 ,
        IN_LANG =   404 ,
        NEXT =  403 ,
        DEF_IDENT =     402 ,
        BOX =   401 ,
        EXPO =  400 ,
        EXPO_AFF =  399 ,
        ETOIETOIEGAL =  398 ,
        IN =    397 ,
        PARSE =     396 ,
        NEXTL =     395 ,
        VALUE =     394 ,
        INFESUPE =  393 ,
        FOREACH =   392 ,
        INFESEPOSUPE =  391 ,
        INFESEPBSUPE =  390 ,
        INFESEPASUPE =  389 ,
        AOUVAOUV =  388 ,
        ARRO =  387 ,
        NL_BEG =    386 ,
        TAB_BEG =   385 ,
        SPACE_BEG =     384 ,
        MAKETREE_SUP =  383 ,
        MAKETREE_INF =  382 ,
        PARSE_ELEM =    381 ,
        SIMP_ETOI =     380 ,
        ETOI_ETOI =     379 ,
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

extern metachop * parser_metachop;

#endif
#define NODE_LIST_metachop  414
#define NODE_TREE_metachop  413
#define SPACE_metachop  412
#define SEP_OMIT_metachop   411
#define SEP_BEFORE_metachop     410
#define SEP_AFTER_metachop  409
#define AFERAFER_metachop   408
#define ALINEA_metachop     407
#define CHOP_DEF_metachop   406
#define NIL_metachop    405
#define IN_LANG_metachop    404
#define NEXT_metachop   403
#define DEF_IDENT_metachop  402
#define BOX_metachop    401
#define EXPO_metachop   400
#define EXPO_AFF_metachop   399
#define ETOIETOIEGAL_metachop   398
#define IN_metachop     397
#define PARSE_metachop  396
#define NEXTL_metachop  395
#define VALUE_metachop  394
#define INFESUPE_metachop   393
#define FOREACH_metachop    392
#define INFESEPOSUPE_metachop   391
#define INFESEPBSUPE_metachop   390
#define INFESEPASUPE_metachop   389
#define AOUVAOUV_metachop   388
#define ARRO_metachop   387
#define NL_BEG_metachop     386
#define TAB_BEG_metachop    385
#define SPACE_BEG_metachop  384
#define MAKETREE_SUP_metachop   383
#define MAKETREE_INF_metachop   382
#define PARSE_ELEM_metachop     381
#define SIMP_ETOI_metachop  380
#define ETOI_ETOI_metachop  379
#define TUNSIGNED_metachop  378
#define BDECR_metachop  377
#define BINCR_metachop  376
#define ADDR_metachop   375
#define NOT_metachop    374
#define LNEG_metachop   373
#define POS_metachop    372
#define NEG_metachop    371
#define PARAM_TYPE_metachop     370
#define STRING_LIST_metachop    369
#define LABEL_metachop  368
#define THROW_ANSI_metachop     367
#define ELSE_metachop   366
#define DECL_TYPE_metachop  365
#define CLASSNAME_metachop  364
#define TIDENT_metachop     363
#define TSIGNED_metachop    362
#define TSHORT_metachop     361
#define TCHAR_metachop  360
#define TINT_metachop   359
#define RSHI_metachop   358
#define LSHI_metachop   357
#define LT_metachop     356
#define GT_metachop     355
#define GEQU_metachop   354
#define LEQU_metachop   353
#define SPACE_ARROW_metachop    352
#define TAB_DIRECTIVE_metachop  351
#define ENUM_PARAMETERS_UNDER_metachop  350
#define ENUM_VERT_VALUE_metachop    349
#define PROTECTED_ARRAY_S_TYPEDEF_metachop  348
#define PROTECTED_ARRAY_TYPEDEF_metachop    347
#define PROTECTED_ARRAY_S_metachop  346
#define PROTECTED_ARRAY_metachop    345
#define PROTECT_MEMB_metachop   344
#define LANGUAGE_metachop   343
#define ELIPSIS_EXPRESSION_metachop     342
#define EXP_metachop    341
#define ADECR_metachop  340
#define AINCR_metachop  339
#define ARROW_metachop  338
#define REF_metachop    337
#define VARIADIC_EXPRESSION_metachop    336
#define EXP_BRA_metachop    335
#define EXP_LIST_metachop   334
#define ARROW_MEMB_metachop     333
#define DOT_MEMB_metachop   332
#define POINETOI_metachop   331
#define TIRESUPEETOI_metachop   330
#define SUPESUPE_metachop   329
#define INFEINFE_metachop   328
#define SUPEEGAL_metachop   327
#define INFEEGAL_metachop   326
#define NONE_metachop   325
#define NEW_DECLARATOR_metachop     324
#define USING_TYPE_metachop     323
#define USING_NAMESPACE_metachop    322
#define NAMESPACE_ALIAS_metachop    321
#define REM_metachop    320
#define DIV_metachop    319
#define MUL_metachop    318
#define POURC_metachop  317
#define MESSAGE_MAP_metachop    316
#define MACRO_metachop  315
#define TDOUBLE_metachop    314
#define TFLOAT_metachop     313
#define TLONG_metachop  312
#define OR_metachop     311
#define VBARVBAR_metachop   310
#define AND_metachop    309
#define COMPOUND_EXT_metachop   308
#define EXTERNAL_metachop   307
#define MUTABLE_metachop    306
#define TIRESUPE_metachop   305
#define CAPTURE_ALL_metachop    304
#define LAMBDA_metachop     303
#define INLINE_NAMESPACE_metachop   302
#define INITIALIZER_metachop    301
#define LOR_metachop    300
#define VBAR_metachop   299
#define DELETE_FUNCTION_metachop    298
#define FUNC_metachop   297
#define ALL_OF_metachop     296
#define EXTENSION_metachop  295
#define __EXTENSION___metachop  294
#define STAT_VOID_metachop  293
#define TYPEDEF_metachop    292
#define TEMPLATE_DECL_metachop  291
#define SUPE_metachop   290
#define CLASS_PARAM_metachop    289
#define TEMPLATE_metachop   288
#define EXP_SEQ_metachop    287
#define LXOR_metachop   286
#define CHAP_metachop   285
#define EXCEPTION_LIST_metachop     284
#define EXCEPTION_ANSI_metachop     283
#define EXCEPTION_metachop  282
#define NEQU_metachop   281
#define EQU_metachop    280
#define EXCLEGAL_metachop   279
#define EGALEGAL_metachop   278
#define ENUM_CLASS_metachop     277
#define PRAGMA_metachop     276
#define PARAMETERS_metachop     275
#define FUNC_HEADER_metachop    274
#define INDENT_FUNCTION_TYPE_metachop   273
#define COMMENT_PLUS_metachop   272
#define COMMENT_END_metachop    271
#define COMMENT_MIDDLE_metachop     270
#define COMMENT_START_metachop  269
#define MARGIN_VALUE_metachop   268
#define BRACE_ALIGN_VALUE_metachop  267
#define DECL_ALIGN_metachop     266
#define ASSIGN_ALIGN_metachop   265
#define SINGLE_SWITCH_INDENT_VALUE_metachop     264
#define SIMPLIFY_VALUE_metachop     263
#define SIMPLIFY_metachop   262
#define MODE_VALUE_metachop     261
#define TAB_VALUE_metachop  260
#define CONFIG_metachop     259
#define NOT_MANAGED_metachop    258
#define NO_PRETTY_metachop  257
#define ALINE_metachop  256
#define ERROR_metachop  255
#define UNDEF_metachop  254
#define TYP_AFF_BRA_metachop    253
#define TYP_AFF_CALL_metachop   252
#define MEMBER_DECLARATOR_metachop  251
#define TYP_ARRAY_metachop  250
#define FOR_DECLARATION_metachop    249
#define DECLARATION_metachop    248
#define CTOR_INITIALIZER_metachop   247
#define BRACE_MARKER_metachop   246
#define CTOR_INIT_metachop  245
#define LONGLONG_metachop   244
#define IUNLONGLONG_metachop    243
#define IUNLONG_metachop    242
#define IUN_metachop    241
#define ILONGLONG_metachop  240
#define ILONG_metachop  239
#define RANGE_MODIFIER_metachop     238
#define COND_AFF_metachop   237
#define INTE_metachop   236
#define COMPOUND_metachop   235
#define CLASS_DECL_metachop     234
#define AFER_metachop   233
#define CATCH_ANSI_metachop     232
#define EXCEPT_ANSI_ALL_metachop    231
#define CAST_metachop   230
#define TYP_BIT_metachop    229
#define PROTECT_metachop    228
#define BASE_LIST_metachop  227
#define ATTRIBUTE_CALL_metachop     226
#define XOR_AFF_metachop    225
#define OR_AFF_metachop     224
#define AND_AFF_metachop    223
#define RSH_AFF_metachop    222
#define LSH_AFF_metachop    221
#define MIN_AFF_metachop    220
#define PLU_AFF_metachop    219
#define REM_AFF_metachop    218
#define DIV_AFF_metachop    217
#define MUL_AFF_metachop    216
#define AFF_metachop    215
#define ASM_CALL_metachop   214
#define EXP_ARRAY_metachop  213
#define VAR_LIST_metachop   212
#define TYP_LIST_metachop   211
#define TYP_AFF_metachop    210
#define ABST_DECLARATOR_metachop    209
#define DECLARATOR_metachop     208
#define LAND_metachop   207
#define INIT_NEW_metachop   206
#define VIRG_metachop   205
#define QUALIFIED_metachop  204
#define MINUS_metachop  203
#define TYP_metachop    202
#define PFER_metachop   201
#define DESTRUCT_metachop   200
#define TYP_REF_metachop    199
#define TYP_VARIADIC_metachop   198
#define TYP_MOV_metachop    197
#define TYP_ADDR_metachop   196
#define INFE_metachop   195
#define _TYPEDEF_PROTECTEDARRAY_S_metachop  194
#define _TYPEDEF_PROTECTEDARRAY_metachop    193
#define _PROTECTEDPOINTER_S_metachop    192
#define _PROTECTEDPOINTER_metachop  191
#define _PROTECTEDARRAY_S_metachop  190
#define _PROTECTEDARRAY_metachop    189
#define USING_metachop  188
#define NAMESPACE_metachop  187
#define CATCH_metachop  186
#define DPOI_metachop   185
#define PUBLIC_metachop     184
#define PROTECTED_metachop  183
#define PRIVATE_metachop    182
#define CHAPEGAL_metachop   181
#define VBAREGAL_metachop   180
#define ETCOEGAL_metachop   179
#define SUPESUPEEGAL_metachop   178
#define INFEINFEEGAL_metachop   177
#define TIREEGAL_metachop   176
#define PLUSEGAL_metachop   175
#define POURCEGAL_metachop  174
#define ETOIEGAL_metachop   173
#define EGAL_metachop   172
#define ASM_metachop    171
#define CFER_metachop   170
#define COUV_metachop   169
#define VA_ARG_metachop     168
#define DELETE_metachop     167
#define NEW_metachop    166
#define SIZEOF_metachop     165
#define TIRETIRE_metachop   164
#define PLUSPLUS_metachop   163
#define EXCL_metachop   162
#define PLUS_metachop   161
#define TIRE_metachop   160
#define DEFAULT_metachop    159
#define CASE_metachop   158
#define TRY_metachop    157
#define THROW_metachop  156
#define FORALLSONS_metachop     155
#define WHILE_metachop  154
#define SWITCH_metachop     153
#define RETURN_metachop     152
#define PVIR_metachop   151
#define IF_metachop     150
#define FOR_metachop    149
#define AOUV_metachop   148
#define DO_metachop     147
#define CONTINUE_metachop   146
#define BREAK_metachop  145
#define OPERATOR_metachop   144
#define TILD_metachop   143
#define ETCO_metachop   142
#define POINPOINPOIN_metachop   141
#define ETCOETCO_metachop   140
#define ETOI_metachop   139
#define POUV_metachop   138
#define UNSIGNED_metachop   137
#define SIGNED_metachop     136
#define SHORT_metachop  135
#define LONG_metachop   134
#define CHAR_metachop   133
#define INT_metachop    132
#define DPOIDPOI_metachop   131
#define VOID_metachop   130
#define FLOAT_metachop  129
#define DOUBLE_metachop     128
#define DECLTYPE_metachop   127
#define TYPENAME_metachop   126
#define CLASS_metachop  125
#define UNION_metachop  124
#define STRUCT_metachop     123
#define ENUM_metachop   122
#define NOEXCEPT_metachop   121
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
