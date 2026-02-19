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
    
    
    static signed char * _tokenArray [179];
    static int (metachop::*(_tokenFuncArray [179])) ();
    static int _tokenNbFuncArray [179];

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

extern metachop * parser_metachop;

#endif
#define NODE_LIST_metachop  412
#define NODE_TREE_metachop  411
#define SPACE_metachop  410
#define SEP_OMIT_metachop   409
#define SEP_BEFORE_metachop     408
#define SEP_AFTER_metachop  407
#define AFERAFER_metachop   406
#define ALINEA_metachop     405
#define CHOP_DEF_metachop   404
#define NIL_metachop    403
#define IN_LANG_metachop    402
#define NEXT_metachop   401
#define DEF_IDENT_metachop  400
#define BOX_metachop    399
#define EXPO_metachop   398
#define EXPO_AFF_metachop   397
#define ETOIETOIEGAL_metachop   396
#define IN_metachop     395
#define PARSE_metachop  394
#define NEXTL_metachop  393
#define VALUE_metachop  392
#define INFESUPE_metachop   391
#define FOREACH_metachop    390
#define INFESEPOSUPE_metachop   389
#define INFESEPBSUPE_metachop   388
#define INFESEPASUPE_metachop   387
#define AOUVAOUV_metachop   386
#define ARRO_metachop   385
#define NL_BEG_metachop     384
#define TAB_BEG_metachop    383
#define SPACE_BEG_metachop  382
#define MAKETREE_SUP_metachop   381
#define MAKETREE_INF_metachop   380
#define PARSE_ELEM_metachop     379
#define SIMP_ETOI_metachop  378
#define ETOI_ETOI_metachop  377
#define TUNSIGNED_metachop  376
#define BDECR_metachop  375
#define BINCR_metachop  374
#define ADDR_metachop   373
#define NOT_metachop    372
#define LNEG_metachop   371
#define POS_metachop    370
#define NEG_metachop    369
#define PARAM_TYPE_metachop     368
#define STRING_LIST_metachop    367
#define LABEL_metachop  366
#define THROW_ANSI_metachop     365
#define ELSE_metachop   364
#define DECL_TYPE_metachop  363
#define CLASSNAME_metachop  362
#define TIDENT_metachop     361
#define TSIGNED_metachop    360
#define TSHORT_metachop     359
#define TCHAR_metachop  358
#define TINT_metachop   357
#define RSHI_metachop   356
#define LSHI_metachop   355
#define LT_metachop     354
#define GT_metachop     353
#define GEQU_metachop   352
#define LEQU_metachop   351
#define SPACE_ARROW_metachop    350
#define TAB_DIRECTIVE_metachop  349
#define ENUM_PARAMETERS_UNDER_metachop  348
#define ENUM_VERT_VALUE_metachop    347
#define PROTECTED_ARRAY_S_TYPEDEF_metachop  346
#define PROTECTED_ARRAY_TYPEDEF_metachop    345
#define PROTECTED_ARRAY_S_metachop  344
#define PROTECTED_ARRAY_metachop    343
#define PROTECT_MEMB_metachop   342
#define LANGUAGE_metachop   341
#define ELIPSIS_EXPRESSION_metachop     340
#define EXP_metachop    339
#define ADECR_metachop  338
#define AINCR_metachop  337
#define ARROW_metachop  336
#define REF_metachop    335
#define VARIADIC_EXPRESSION_metachop    334
#define EXP_BRA_metachop    333
#define EXP_LIST_metachop   332
#define ARROW_MEMB_metachop     331
#define DOT_MEMB_metachop   330
#define POINETOI_metachop   329
#define TIRESUPEETOI_metachop   328
#define SUPESUPE_metachop   327
#define INFEINFE_metachop   326
#define SUPEEGAL_metachop   325
#define INFEEGAL_metachop   324
#define NONE_metachop   323
#define NEW_DECLARATOR_metachop     322
#define USING_NAMESPACE_metachop    321
#define NAMESPACE_ALIAS_metachop    320
#define REM_metachop    319
#define DIV_metachop    318
#define MUL_metachop    317
#define POURC_metachop  316
#define MESSAGE_MAP_metachop    315
#define MACRO_metachop  314
#define TDOUBLE_metachop    313
#define TFLOAT_metachop     312
#define TLONG_metachop  311
#define OR_metachop     310
#define VBARVBAR_metachop   309
#define AND_metachop    308
#define COMPOUND_EXT_metachop   307
#define EXTERNAL_metachop   306
#define MUTABLE_metachop    305
#define TIRESUPE_metachop   304
#define CAPTURE_ALL_metachop    303
#define LAMBDA_metachop     302
#define INLINE_NAMESPACE_metachop   301
#define INITIALIZER_metachop    300
#define LOR_metachop    299
#define VBAR_metachop   298
#define DELETE_FUNCTION_metachop    297
#define FUNC_metachop   296
#define ALL_OF_metachop     295
#define EXTENSION_metachop  294
#define __EXTENSION___metachop  293
#define STAT_VOID_metachop  292
#define TYPEDEF_metachop    291
#define TEMPLATE_DECL_metachop  290
#define SUPE_metachop   289
#define CLASS_PARAM_metachop    288
#define TEMPLATE_metachop   287
#define EXP_SEQ_metachop    286
#define LXOR_metachop   285
#define CHAP_metachop   284
#define EXCEPTION_LIST_metachop     283
#define EXCEPTION_ANSI_metachop     282
#define EXCEPTION_metachop  281
#define NEQU_metachop   280
#define EQU_metachop    279
#define EXCLEGAL_metachop   278
#define EGALEGAL_metachop   277
#define ENUM_CLASS_metachop     276
#define PRAGMA_metachop     275
#define PARAMETERS_metachop     274
#define FUNC_HEADER_metachop    273
#define INDENT_FUNCTION_TYPE_metachop   272
#define COMMENT_PLUS_metachop   271
#define COMMENT_END_metachop    270
#define COMMENT_MIDDLE_metachop     269
#define COMMENT_START_metachop  268
#define MARGIN_VALUE_metachop   267
#define BRACE_ALIGN_VALUE_metachop  266
#define DECL_ALIGN_metachop     265
#define ASSIGN_ALIGN_metachop   264
#define SINGLE_SWITCH_INDENT_VALUE_metachop     263
#define SIMPLIFY_VALUE_metachop     262
#define SIMPLIFY_metachop   261
#define MODE_VALUE_metachop     260
#define TAB_VALUE_metachop  259
#define CONFIG_metachop     258
#define NOT_MANAGED_metachop    257
#define NO_PRETTY_metachop  256
#define ALINE_metachop  255
#define ERROR_metachop  254
#define UNDEF_metachop  253
#define TYP_AFF_BRA_metachop    252
#define TYP_AFF_CALL_metachop   251
#define MEMBER_DECLARATOR_metachop  250
#define TYP_ARRAY_metachop  249
#define FOR_DECLARATION_metachop    248
#define DECLARATION_metachop    247
#define CTOR_INITIALIZER_metachop   246
#define BRACE_MARKER_metachop   245
#define CTOR_INIT_metachop  244
#define LONGLONG_metachop   243
#define IUNLONGLONG_metachop    242
#define IUNLONG_metachop    241
#define IUN_metachop    240
#define ILONGLONG_metachop  239
#define ILONG_metachop  238
#define RANGE_MODIFIER_metachop     237
#define COND_AFF_metachop   236
#define INTE_metachop   235
#define COMPOUND_metachop   234
#define CLASS_DECL_metachop     233
#define AFER_metachop   232
#define CATCH_ANSI_metachop     231
#define EXCEPT_ANSI_ALL_metachop    230
#define CAST_metachop   229
#define TYP_BIT_metachop    228
#define PROTECT_metachop    227
#define BASE_LIST_metachop  226
#define ATTRIBUTE_CALL_metachop     225
#define XOR_AFF_metachop    224
#define OR_AFF_metachop     223
#define AND_AFF_metachop    222
#define RSH_AFF_metachop    221
#define LSH_AFF_metachop    220
#define MIN_AFF_metachop    219
#define PLU_AFF_metachop    218
#define REM_AFF_metachop    217
#define DIV_AFF_metachop    216
#define MUL_AFF_metachop    215
#define AFF_metachop    214
#define ASM_CALL_metachop   213
#define EXP_ARRAY_metachop  212
#define VAR_LIST_metachop   211
#define TYP_LIST_metachop   210
#define TYP_AFF_metachop    209
#define ABST_DECLARATOR_metachop    208
#define DECLARATOR_metachop     207
#define LAND_metachop   206
#define INIT_NEW_metachop   205
#define VIRG_metachop   204
#define QUALIFIED_metachop  203
#define MINUS_metachop  202
#define TYP_metachop    201
#define PFER_metachop   200
#define DESTRUCT_metachop   199
#define TYP_REF_metachop    198
#define TYP_VARIADIC_metachop   197
#define TYP_MOV_metachop    196
#define TYP_ADDR_metachop   195
#define INFE_metachop   194
#define _TYPEDEF_PROTECTEDARRAY_S_metachop  193
#define _TYPEDEF_PROTECTEDARRAY_metachop    192
#define _PROTECTEDPOINTER_S_metachop    191
#define _PROTECTEDPOINTER_metachop  190
#define _PROTECTEDARRAY_S_metachop  189
#define _PROTECTEDARRAY_metachop    188
#define USING_metachop  187
#define NAMESPACE_metachop  186
#define CATCH_metachop  185
#define DPOI_metachop   184
#define PUBLIC_metachop     183
#define PROTECTED_metachop  182
#define PRIVATE_metachop    181
#define CHAPEGAL_metachop   180
#define VBAREGAL_metachop   179
#define ETCOEGAL_metachop   178
#define SUPESUPEEGAL_metachop   177
#define INFEINFEEGAL_metachop   176
#define TIREEGAL_metachop   175
#define PLUSEGAL_metachop   174
#define POURCEGAL_metachop  173
#define ETOIEGAL_metachop   172
#define EGAL_metachop   171
#define ASM_metachop    170
#define CFER_metachop   169
#define COUV_metachop   168
#define VA_ARG_metachop     167
#define DELETE_metachop     166
#define NEW_metachop    165
#define SIZEOF_metachop     164
#define TIRETIRE_metachop   163
#define PLUSPLUS_metachop   162
#define EXCL_metachop   161
#define PLUS_metachop   160
#define TIRE_metachop   159
#define DEFAULT_metachop    158
#define CASE_metachop   157
#define TRY_metachop    156
#define THROW_metachop  155
#define FORALLSONS_metachop     154
#define WHILE_metachop  153
#define SWITCH_metachop     152
#define RETURN_metachop     151
#define PVIR_metachop   150
#define IF_metachop     149
#define FOR_metachop    148
#define AOUV_metachop   147
#define DO_metachop     146
#define CONTINUE_metachop   145
#define BREAK_metachop  144
#define OPERATOR_metachop   143
#define TILD_metachop   142
#define ETCO_metachop   141
#define POINPOINPOIN_metachop   140
#define ETCOETCO_metachop   139
#define ETOI_metachop   138
#define POUV_metachop   137
#define UNSIGNED_metachop   136
#define SIGNED_metachop     135
#define SHORT_metachop  134
#define LONG_metachop   133
#define CHAR_metachop   132
#define INT_metachop    131
#define DPOIDPOI_metachop   130
#define VOID_metachop   129
#define FLOAT_metachop  128
#define DOUBLE_metachop     127
#define DECLTYPE_metachop   126
#define TYPENAME_metachop   125
#define CLASS_metachop  124
#define UNION_metachop  123
#define STRUCT_metachop     122
#define ENUM_metachop   121
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
