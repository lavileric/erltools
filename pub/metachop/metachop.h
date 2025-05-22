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
    
    
    static signed char * _tokenArray [175];
    static int (metachop::*(_tokenFuncArray [175])) ();
    static int _tokenNbFuncArray [175];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     404 ,
        NODE_TREE =     403 ,
        SPACE =     402 ,
        SEP_OMIT =  401 ,
        SEP_BEFORE =    400 ,
        SEP_AFTER =     399 ,
        AFERAFER =  398 ,
        ALINEA =    397 ,
        CHOP_DEF =  396 ,
        NIL =   395 ,
        IN_LANG =   394 ,
        NEXT =  393 ,
        DEF_IDENT =     392 ,
        BOX =   391 ,
        EXPO =  390 ,
        EXPO_AFF =  389 ,
        ETOIETOIEGAL =  388 ,
        IN =    387 ,
        PARSE =     386 ,
        NEXTL =     385 ,
        VALUE =     384 ,
        INFESUPE =  383 ,
        FOREACH =   382 ,
        INFESEPOSUPE =  381 ,
        INFESEPBSUPE =  380 ,
        INFESEPASUPE =  379 ,
        AOUVAOUV =  378 ,
        ARRO =  377 ,
        NL_BEG =    376 ,
        TAB_BEG =   375 ,
        SPACE_BEG =     374 ,
        MAKETREE_SUP =  373 ,
        MAKETREE_INF =  372 ,
        PARSE_ELEM =    371 ,
        SIMP_ETOI =     370 ,
        ETOI_ETOI =     369 ,
        TUNSIGNED =     368 ,
        BDECR =     367 ,
        BINCR =     366 ,
        ADDR =  365 ,
        NOT =   364 ,
        LNEG =  363 ,
        POS =   362 ,
        NEG =   361 ,
        PARAM_TYPE =    360 ,
        STRING_LIST =   359 ,
        LABEL =     358 ,
        THROW_ANSI =    357 ,
        ELSE =  356 ,
        DECL_TYPE =     355 ,
        CLASSNAME =     354 ,
        TIDENT =    353 ,
        TSIGNED =   352 ,
        TSHORT =    351 ,
        TCHAR =     350 ,
        TINT =  349 ,
        RSHI =  348 ,
        LSHI =  347 ,
        LT =    346 ,
        GT =    345 ,
        GEQU =  344 ,
        LEQU =  343 ,
        SPACE_ARROW =   342 ,
        TAB_DIRECTIVE =     341 ,
        ENUM_PARAMETERS_UNDER =     340 ,
        ENUM_VERT_VALUE =   339 ,
        PROTECTED_ARRAY_S_TYPEDEF =     338 ,
        PROTECTED_ARRAY_TYPEDEF =   337 ,
        PROTECTED_ARRAY_S =     336 ,
        PROTECTED_ARRAY =   335 ,
        PROTECT_MEMB =  334 ,
        LANGUAGE =  333 ,
        EXP =   332 ,
        ADECR =     331 ,
        AINCR =     330 ,
        ARROW =     329 ,
        REF =   328 ,
        EXP_BRA =   327 ,
        EXP_LIST =  326 ,
        ARROW_MEMB =    325 ,
        DOT_MEMB =  324 ,
        POINETOI =  323 ,
        TIRESUPEETOI =  322 ,
        TIRESUPE =  321 ,
        SUPESUPE =  320 ,
        INFEINFE =  319 ,
        SUPEEGAL =  318 ,
        INFEEGAL =  317 ,
        NONE =  316 ,
        NEW_DECLARATOR =    315 ,
        USING_NAMESPACE =   314 ,
        NAMESPACE_ALIAS =   313 ,
        REM =   312 ,
        DIV =   311 ,
        MUL =   310 ,
        POURC =     309 ,
        MESSAGE_MAP =   308 ,
        MACRO =     307 ,
        TDOUBLE =   306 ,
        TFLOAT =    305 ,
        TLONG =     304 ,
        OR =    303 ,
        VBARVBAR =  302 ,
        AND =   301 ,
        ETCOETCO =  300 ,
        COMPOUND_EXT =  299 ,
        EXTERNAL =  298 ,
        INLINE_NAMESPACE =  297 ,
        INITIALIZER =   296 ,
        LOR =   295 ,
        VBAR =  294 ,
        DELETE_FUNCTION =   293 ,
        FUNC =  292 ,
        ALL_OF =    291 ,
        EXTENSION =     290 ,
        __EXTENSION__ =     289 ,
        STAT_VOID =     288 ,
        TYPEDEF =   287 ,
        TEMPLATE_DECL =     286 ,
        SUPE =  285 ,
        CLASS_PARAM =   284 ,
        TEMPLATE =  283 ,
        EXP_SEQ =   282 ,
        LXOR =  281 ,
        CHAP =  280 ,
        EXCEPTION_LIST =    279 ,
        EXCEPTION_ANSI =    278 ,
        EXCEPTION =     277 ,
        NEQU =  276 ,
        EQU =   275 ,
        EXCLEGAL =  274 ,
        EGALEGAL =  273 ,
        ENUM_CLASS =    272 ,
        PRAGMA =    271 ,
        PARAMETERS =    270 ,
        FUNC_HEADER =   269 ,
        INDENT_FUNCTION_TYPE =  268 ,
        COMMENT_PLUS =  267 ,
        COMMENT_END =   266 ,
        COMMENT_MIDDLE =    265 ,
        COMMENT_START =     264 ,
        MARGIN_VALUE =  263 ,
        BRACE_ALIGN_VALUE =     262 ,
        DECL_ALIGN =    261 ,
        ASSIGN_ALIGN =  260 ,
        SINGLE_SWITCH_INDENT_VALUE =    259 ,
        SIMPLIFY_VALUE =    258 ,
        SIMPLIFY =  257 ,
        MODE_VALUE =    256 ,
        TAB_VALUE =     255 ,
        CONFIG =    254 ,
        NOT_MANAGED =   253 ,
        NO_PRETTY =     252 ,
        ALINE =     251 ,
        ERROR =     250 ,
        UNDEF =     249 ,
        TYP_AFF_BRA =   248 ,
        TYP_AFF_CALL =  247 ,
        MEMBER_DECLARATOR =     246 ,
        TYP_ARRAY =     245 ,
        COUV =  244 ,
        FOR_DECLARATION =   243 ,
        DECLARATION =   242 ,
        CTOR_INITIALIZER =  241 ,
        BRACE_MARKER =  240 ,
        CTOR_INIT =     239 ,
        LONGLONG =  238 ,
        IUNLONGLONG =   237 ,
        IUNLONG =   236 ,
        IUN =   235 ,
        ILONGLONG =     234 ,
        ILONG =     233 ,
        RANGE_MODIFIER =    232 ,
        COND_AFF =  231 ,
        INTE =  230 ,
        COMPOUND =  229 ,
        CLASS_DECL =    228 ,
        AFER =  227 ,
        CATCH_ANSI =    226 ,
        EXCEPT_ANSI_ALL =   225 ,
        CAST =  224 ,
        TYP_BIT =   223 ,
        PROTECT =   222 ,
        BASE_LIST =     221 ,
        ATTRIBUTE_CALL =    220 ,
        XOR_AFF =   219 ,
        OR_AFF =    218 ,
        AND_AFF =   217 ,
        RSH_AFF =   216 ,
        LSH_AFF =   215 ,
        MIN_AFF =   214 ,
        PLU_AFF =   213 ,
        REM_AFF =   212 ,
        DIV_AFF =   211 ,
        MUL_AFF =   210 ,
        AFF =   209 ,
        ASM_CALL =  208 ,
        EXP_ARRAY =     207 ,
        VAR_LIST =  206 ,
        TYP_LIST =  205 ,
        TYP_AFF =   204 ,
        ABST_DECLARATOR =   203 ,
        DECLARATOR =    202 ,
        POINPOINPOIN =  201 ,
        LAND =  200 ,
        INIT_NEW =  199 ,
        VIRG =  198 ,
        QUALIFIED =     197 ,
        MINUS =     196 ,
        TYP =   195 ,
        PFER =  194 ,
        DESTRUCT =  193 ,
        TYP_REF =   192 ,
        TYP_ADDR =  191 ,
        INFE =  190 ,
        _TYPEDEF_PROTECTEDARRAY_S =     189 ,
        _TYPEDEF_PROTECTEDARRAY =   188 ,
        _PROTECTEDPOINTER_S =   187 ,
        _PROTECTEDPOINTER =     186 ,
        _PROTECTEDARRAY_S =     185 ,
        _PROTECTEDARRAY =   184 ,
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
        DEFAULT =   155 ,
        CASE =  154 ,
        TRY =   153 ,
        THROW =     152 ,
        FORALLSONS =    151 ,
        WHILE =     150 ,
        SWITCH =    149 ,
        RETURN =    148 ,
        PVIR =  147 ,
        IF =    146 ,
        FOR =   145 ,
        AOUV =  144 ,
        DO =    143 ,
        CONTINUE =  142 ,
        BREAK =     141 ,
        OPERATOR =  140 ,
        TILD =  139 ,
        ETCO =  138 ,
        ETOI =  137 ,
        POUV =  136 ,
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

extern metachop * parser_metachop;

#endif
#define NODE_LIST_metachop  404
#define NODE_TREE_metachop  403
#define SPACE_metachop  402
#define SEP_OMIT_metachop   401
#define SEP_BEFORE_metachop     400
#define SEP_AFTER_metachop  399
#define AFERAFER_metachop   398
#define ALINEA_metachop     397
#define CHOP_DEF_metachop   396
#define NIL_metachop    395
#define IN_LANG_metachop    394
#define NEXT_metachop   393
#define DEF_IDENT_metachop  392
#define BOX_metachop    391
#define EXPO_metachop   390
#define EXPO_AFF_metachop   389
#define ETOIETOIEGAL_metachop   388
#define IN_metachop     387
#define PARSE_metachop  386
#define NEXTL_metachop  385
#define VALUE_metachop  384
#define INFESUPE_metachop   383
#define FOREACH_metachop    382
#define INFESEPOSUPE_metachop   381
#define INFESEPBSUPE_metachop   380
#define INFESEPASUPE_metachop   379
#define AOUVAOUV_metachop   378
#define ARRO_metachop   377
#define NL_BEG_metachop     376
#define TAB_BEG_metachop    375
#define SPACE_BEG_metachop  374
#define MAKETREE_SUP_metachop   373
#define MAKETREE_INF_metachop   372
#define PARSE_ELEM_metachop     371
#define SIMP_ETOI_metachop  370
#define ETOI_ETOI_metachop  369
#define TUNSIGNED_metachop  368
#define BDECR_metachop  367
#define BINCR_metachop  366
#define ADDR_metachop   365
#define NOT_metachop    364
#define LNEG_metachop   363
#define POS_metachop    362
#define NEG_metachop    361
#define PARAM_TYPE_metachop     360
#define STRING_LIST_metachop    359
#define LABEL_metachop  358
#define THROW_ANSI_metachop     357
#define ELSE_metachop   356
#define DECL_TYPE_metachop  355
#define CLASSNAME_metachop  354
#define TIDENT_metachop     353
#define TSIGNED_metachop    352
#define TSHORT_metachop     351
#define TCHAR_metachop  350
#define TINT_metachop   349
#define RSHI_metachop   348
#define LSHI_metachop   347
#define LT_metachop     346
#define GT_metachop     345
#define GEQU_metachop   344
#define LEQU_metachop   343
#define SPACE_ARROW_metachop    342
#define TAB_DIRECTIVE_metachop  341
#define ENUM_PARAMETERS_UNDER_metachop  340
#define ENUM_VERT_VALUE_metachop    339
#define PROTECTED_ARRAY_S_TYPEDEF_metachop  338
#define PROTECTED_ARRAY_TYPEDEF_metachop    337
#define PROTECTED_ARRAY_S_metachop  336
#define PROTECTED_ARRAY_metachop    335
#define PROTECT_MEMB_metachop   334
#define LANGUAGE_metachop   333
#define EXP_metachop    332
#define ADECR_metachop  331
#define AINCR_metachop  330
#define ARROW_metachop  329
#define REF_metachop    328
#define EXP_BRA_metachop    327
#define EXP_LIST_metachop   326
#define ARROW_MEMB_metachop     325
#define DOT_MEMB_metachop   324
#define POINETOI_metachop   323
#define TIRESUPEETOI_metachop   322
#define TIRESUPE_metachop   321
#define SUPESUPE_metachop   320
#define INFEINFE_metachop   319
#define SUPEEGAL_metachop   318
#define INFEEGAL_metachop   317
#define NONE_metachop   316
#define NEW_DECLARATOR_metachop     315
#define USING_NAMESPACE_metachop    314
#define NAMESPACE_ALIAS_metachop    313
#define REM_metachop    312
#define DIV_metachop    311
#define MUL_metachop    310
#define POURC_metachop  309
#define MESSAGE_MAP_metachop    308
#define MACRO_metachop  307
#define TDOUBLE_metachop    306
#define TFLOAT_metachop     305
#define TLONG_metachop  304
#define OR_metachop     303
#define VBARVBAR_metachop   302
#define AND_metachop    301
#define ETCOETCO_metachop   300
#define COMPOUND_EXT_metachop   299
#define EXTERNAL_metachop   298
#define INLINE_NAMESPACE_metachop   297
#define INITIALIZER_metachop    296
#define LOR_metachop    295
#define VBAR_metachop   294
#define DELETE_FUNCTION_metachop    293
#define FUNC_metachop   292
#define ALL_OF_metachop     291
#define EXTENSION_metachop  290
#define __EXTENSION___metachop  289
#define STAT_VOID_metachop  288
#define TYPEDEF_metachop    287
#define TEMPLATE_DECL_metachop  286
#define SUPE_metachop   285
#define CLASS_PARAM_metachop    284
#define TEMPLATE_metachop   283
#define EXP_SEQ_metachop    282
#define LXOR_metachop   281
#define CHAP_metachop   280
#define EXCEPTION_LIST_metachop     279
#define EXCEPTION_ANSI_metachop     278
#define EXCEPTION_metachop  277
#define NEQU_metachop   276
#define EQU_metachop    275
#define EXCLEGAL_metachop   274
#define EGALEGAL_metachop   273
#define ENUM_CLASS_metachop     272
#define PRAGMA_metachop     271
#define PARAMETERS_metachop     270
#define FUNC_HEADER_metachop    269
#define INDENT_FUNCTION_TYPE_metachop   268
#define COMMENT_PLUS_metachop   267
#define COMMENT_END_metachop    266
#define COMMENT_MIDDLE_metachop     265
#define COMMENT_START_metachop  264
#define MARGIN_VALUE_metachop   263
#define BRACE_ALIGN_VALUE_metachop  262
#define DECL_ALIGN_metachop     261
#define ASSIGN_ALIGN_metachop   260
#define SINGLE_SWITCH_INDENT_VALUE_metachop     259
#define SIMPLIFY_VALUE_metachop     258
#define SIMPLIFY_metachop   257
#define MODE_VALUE_metachop     256
#define TAB_VALUE_metachop  255
#define CONFIG_metachop     254
#define NOT_MANAGED_metachop    253
#define NO_PRETTY_metachop  252
#define ALINE_metachop  251
#define ERROR_metachop  250
#define UNDEF_metachop  249
#define TYP_AFF_BRA_metachop    248
#define TYP_AFF_CALL_metachop   247
#define MEMBER_DECLARATOR_metachop  246
#define TYP_ARRAY_metachop  245
#define COUV_metachop   244
#define FOR_DECLARATION_metachop    243
#define DECLARATION_metachop    242
#define CTOR_INITIALIZER_metachop   241
#define BRACE_MARKER_metachop   240
#define CTOR_INIT_metachop  239
#define LONGLONG_metachop   238
#define IUNLONGLONG_metachop    237
#define IUNLONG_metachop    236
#define IUN_metachop    235
#define ILONGLONG_metachop  234
#define ILONG_metachop  233
#define RANGE_MODIFIER_metachop     232
#define COND_AFF_metachop   231
#define INTE_metachop   230
#define COMPOUND_metachop   229
#define CLASS_DECL_metachop     228
#define AFER_metachop   227
#define CATCH_ANSI_metachop     226
#define EXCEPT_ANSI_ALL_metachop    225
#define CAST_metachop   224
#define TYP_BIT_metachop    223
#define PROTECT_metachop    222
#define BASE_LIST_metachop  221
#define ATTRIBUTE_CALL_metachop     220
#define XOR_AFF_metachop    219
#define OR_AFF_metachop     218
#define AND_AFF_metachop    217
#define RSH_AFF_metachop    216
#define LSH_AFF_metachop    215
#define MIN_AFF_metachop    214
#define PLU_AFF_metachop    213
#define REM_AFF_metachop    212
#define DIV_AFF_metachop    211
#define MUL_AFF_metachop    210
#define AFF_metachop    209
#define ASM_CALL_metachop   208
#define EXP_ARRAY_metachop  207
#define VAR_LIST_metachop   206
#define TYP_LIST_metachop   205
#define TYP_AFF_metachop    204
#define ABST_DECLARATOR_metachop    203
#define DECLARATOR_metachop     202
#define POINPOINPOIN_metachop   201
#define LAND_metachop   200
#define INIT_NEW_metachop   199
#define VIRG_metachop   198
#define QUALIFIED_metachop  197
#define MINUS_metachop  196
#define TYP_metachop    195
#define PFER_metachop   194
#define DESTRUCT_metachop   193
#define TYP_REF_metachop    192
#define TYP_ADDR_metachop   191
#define INFE_metachop   190
#define _TYPEDEF_PROTECTEDARRAY_S_metachop  189
#define _TYPEDEF_PROTECTEDARRAY_metachop    188
#define _PROTECTEDPOINTER_S_metachop    187
#define _PROTECTEDPOINTER_metachop  186
#define _PROTECTEDARRAY_S_metachop  185
#define _PROTECTEDARRAY_metachop    184
#define USING_metachop  183
#define NAMESPACE_metachop  182
#define CATCH_metachop  181
#define DPOI_metachop   180
#define PUBLIC_metachop     179
#define PROTECTED_metachop  178
#define PRIVATE_metachop    177
#define CHAPEGAL_metachop   176
#define VBAREGAL_metachop   175
#define ETCOEGAL_metachop   174
#define SUPESUPEEGAL_metachop   173
#define INFEINFEEGAL_metachop   172
#define TIREEGAL_metachop   171
#define PLUSEGAL_metachop   170
#define POURCEGAL_metachop  169
#define ETOIEGAL_metachop   168
#define EGAL_metachop   167
#define ASM_metachop    166
#define CFER_metachop   165
#define VA_ARG_metachop     164
#define DELETE_metachop     163
#define NEW_metachop    162
#define SIZEOF_metachop     161
#define TIRETIRE_metachop   160
#define PLUSPLUS_metachop   159
#define EXCL_metachop   158
#define PLUS_metachop   157
#define TIRE_metachop   156
#define DEFAULT_metachop    155
#define CASE_metachop   154
#define TRY_metachop    153
#define THROW_metachop  152
#define FORALLSONS_metachop     151
#define WHILE_metachop  150
#define SWITCH_metachop     149
#define RETURN_metachop     148
#define PVIR_metachop   147
#define IF_metachop     146
#define FOR_metachop    145
#define AOUV_metachop   144
#define DO_metachop     143
#define CONTINUE_metachop   142
#define BREAK_metachop  141
#define OPERATOR_metachop   140
#define TILD_metachop   139
#define ETCO_metachop   138
#define ETOI_metachop   137
#define POUV_metachop   136
#define UNSIGNED_metachop   135
#define SIGNED_metachop     134
#define SHORT_metachop  133
#define LONG_metachop   132
#define CHAR_metachop   131
#define INT_metachop    130
#define DPOIDPOI_metachop   129
#define VOID_metachop   128
#define FLOAT_metachop  127
#define DOUBLE_metachop     126
#define DECLTYPE_metachop   125
#define TYPENAME_metachop   124
#define CLASS_metachop  123
#define UNION_metachop  122
#define STRUCT_metachop     121
#define ENUM_metachop   120
#define CONSTEXPR_metachop  119
#define CONST_metachop  118
#define FRIEND_metachop     117
#define VIRTUAL_metachop    116
#define INLINE_metachop     115
#define __ASM___metachop    114
#define __ATTRIBUTE___metachop  113
#define VOLATILE_metachop   112
#define REGISTER_metachop   111
#define EXTERN_metachop     110
#define STATIC_metachop     109
#define AUTO_metachop   108
#define FUNC_SPEC_metachop  107
#define TRY_UPPER_metachop  106
#define END_CATCH_metachop  105
#define END_CATCH_ALL_metachop  104
#define AND_CATCH_metachop  103
#define CATCH_UPPER_metachop    102
#define CATCH_ALL_metachop  101
#define END_MESSAGE_MAP_metachop    100
#define BEGIN_MESSAGE_MAP_metachop  99
#define DECLARE_MESSAGE_MAP_metachop    98
#define IMPLEMENT_SERIAL_metachop   97
#define IMPLEMENT_DYNCREATE_metachop    96
#define IMPLEMENT_DYNAMIC_metachop  95
#define DECLARE_SERIAL_metachop     94
#define DECLARE_DYNAMIC_metachop    93
#define PUSH_FUNCTION_metachop  92
#define PUSH_ARGUMENT_metachop  91
#define UNDEF_CONTENT_metachop  90
#define SMALL_PRAGMA_CONTENT_metachop   89
#define PRAGMA_CONTENT_metachop     88
#define PRAGMA_ENUM_VERT_metachop   87
#define PRAGMA_SPACE_ARROW_metachop     86
#define PRAGMA_PARAMETERS_metachop  85
#define PRAGMA_PARAMETERS_UNDER_metachop    84
#define PRAGMA_FUNC_HEADER_metachop     83
#define PRAGMA_INDENT_FUNCTION_TYPE_metachop    82
#define PRAGMA_COMMENT_PLUS_metachop    81
#define PRAGMA_COMMENT_END_metachop     80
#define PRAGMA_COMMENT_MIDDLE_metachop  79
#define PRAGMA_COMMENT_START_metachop   78
#define PRAGMA_MARGIN_metachop  77
#define PRAGMA_DECL_ALIGN_metachop  76
#define PRAGMA_ASSIGN_ALIGN_metachop    75
#define PRAGMA_SINGLE_SWITCH_INDENT_metachop    74
#define PRAGMA_SIMPLIFY_metachop    73
#define PRAGMA_BRACE_ALIGN_metachop     72
#define PRAGMA_MODE_metachop    71
#define PRAGMA_RANGE_metachop   70
#define PRAGMA_TAB_metachop     69
#define PRAGMA_TAB_DIRECTIVE_metachop   68
#define PRAGMA_CONFIG_metachop  67
#define PRAGMA_NOT_MANAGED_metachop     66
#define PRAGMA_MANAGED_metachop     65
#define PRAGMA_NOPRETTY_metachop    64
#define PRAGMA_PRETTY_metachop  63
#define INCLUDE_LOCAL_metachop  62
#define INCLUDE_SYS_metachop    61
#define END_LINE_metachop   60
#define DEFINE_NAME_metachop    59
#define DEFINED_NOT_CONTINUED_metachop  58
#define DEFINED_CONTINUED_metachop  57
#define POINT_metachop  56
#define SLAS_metachop   55
#define SLASEGAL_metachop   54
#define CARRIAGE_RETURN_metachop    53
#define SHARP_VAL_metachop  52
#define LINE_REFERENCE_DIR_metachop     51
#define UNDEF_DIR_metachop  50
#define DEFINE_DIR_metachop     49
#define ERROR_DIR_metachop  48
#define PRAGMA_DIR_metachop     47
#define LINE_DIR_metachop   46
#define ENDIF_DIR_metachop  45
#define ELIF_DIR_metachop   44
#define ELSE_DIR_metachop   43
#define IF_DIR_metachop     42
#define IFNDEF_DIR_metachop     41
#define IFDEF_DIR_metachop  40
#define INCLUDE_DIR_metachop    39
#define OCTAL_metachop  38
#define UOCTAL_metachop     37
#define LOCTAL_metachop     36
#define ULOCTAL_metachop    35
#define LLOCTAL_metachop    34
#define ULLOCTAL_metachop   33
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
