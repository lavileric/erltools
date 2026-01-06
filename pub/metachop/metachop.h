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
    
    
    static signed char * _tokenArray [178];
    static int (metachop::*(_tokenFuncArray [178])) ();
    static int _tokenNbFuncArray [178];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     405 ,
        NODE_TREE =     404 ,
        SPACE =     403 ,
        SEP_OMIT =  402 ,
        SEP_BEFORE =    401 ,
        SEP_AFTER =     400 ,
        AFERAFER =  399 ,
        ALINEA =    398 ,
        CHOP_DEF =  397 ,
        NIL =   396 ,
        IN_LANG =   395 ,
        NEXT =  394 ,
        DEF_IDENT =     393 ,
        BOX =   392 ,
        EXPO =  391 ,
        EXPO_AFF =  390 ,
        ETOIETOIEGAL =  389 ,
        IN =    388 ,
        PARSE =     387 ,
        NEXTL =     386 ,
        VALUE =     385 ,
        INFESUPE =  384 ,
        FOREACH =   383 ,
        INFESEPOSUPE =  382 ,
        INFESEPBSUPE =  381 ,
        INFESEPASUPE =  380 ,
        AOUVAOUV =  379 ,
        ARRO =  378 ,
        NL_BEG =    377 ,
        TAB_BEG =   376 ,
        SPACE_BEG =     375 ,
        MAKETREE_SUP =  374 ,
        MAKETREE_INF =  373 ,
        PARSE_ELEM =    372 ,
        SIMP_ETOI =     371 ,
        ETOI_ETOI =     370 ,
        TUNSIGNED =     369 ,
        BDECR =     368 ,
        BINCR =     367 ,
        ADDR =  366 ,
        NOT =   365 ,
        LNEG =  364 ,
        POS =   363 ,
        NEG =   362 ,
        PARAM_TYPE =    361 ,
        STRING_LIST =   360 ,
        LABEL =     359 ,
        THROW_ANSI =    358 ,
        ELSE =  357 ,
        DECL_TYPE =     356 ,
        CLASSNAME =     355 ,
        TIDENT =    354 ,
        TSIGNED =   353 ,
        TSHORT =    352 ,
        TCHAR =     351 ,
        TINT =  350 ,
        RSHI =  349 ,
        LSHI =  348 ,
        LT =    347 ,
        GT =    346 ,
        GEQU =  345 ,
        LEQU =  344 ,
        SPACE_ARROW =   343 ,
        TAB_DIRECTIVE =     342 ,
        ENUM_PARAMETERS_UNDER =     341 ,
        ENUM_VERT_VALUE =   340 ,
        PROTECTED_ARRAY_S_TYPEDEF =     339 ,
        PROTECTED_ARRAY_TYPEDEF =   338 ,
        PROTECTED_ARRAY_S =     337 ,
        PROTECTED_ARRAY =   336 ,
        PROTECT_MEMB =  335 ,
        LANGUAGE =  334 ,
        EXP =   333 ,
        ADECR =     332 ,
        AINCR =     331 ,
        ARROW =     330 ,
        REF =   329 ,
        EXP_BRA =   328 ,
        EXP_LIST =  327 ,
        ARROW_MEMB =    326 ,
        DOT_MEMB =  325 ,
        POINETOI =  324 ,
        TIRESUPEETOI =  323 ,
        TIRESUPE =  322 ,
        SUPESUPE =  321 ,
        INFEINFE =  320 ,
        SUPEEGAL =  319 ,
        INFEEGAL =  318 ,
        NONE =  317 ,
        NEW_DECLARATOR =    316 ,
        USING_NAMESPACE =   315 ,
        NAMESPACE_ALIAS =   314 ,
        REM =   313 ,
        DIV =   312 ,
        MUL =   311 ,
        POURC =     310 ,
        MESSAGE_MAP =   309 ,
        MACRO =     308 ,
        TDOUBLE =   307 ,
        TFLOAT =    306 ,
        TLONG =     305 ,
        OR =    304 ,
        VBARVBAR =  303 ,
        AND =   302 ,
        ETCOETCO =  301 ,
        COMPOUND_EXT =  300 ,
        EXTERNAL =  299 ,
        INLINE_NAMESPACE =  298 ,
        INITIALIZER =   297 ,
        LOR =   296 ,
        VBAR =  295 ,
        DELETE_FUNCTION =   294 ,
        FUNC =  293 ,
        ALL_OF =    292 ,
        EXTENSION =     291 ,
        __EXTENSION__ =     290 ,
        STAT_VOID =     289 ,
        TYPEDEF =   288 ,
        TEMPLATE_DECL =     287 ,
        SUPE =  286 ,
        CLASS_PARAM =   285 ,
        TEMPLATE =  284 ,
        EXP_SEQ =   283 ,
        LXOR =  282 ,
        CHAP =  281 ,
        EXCEPTION_LIST =    280 ,
        EXCEPTION_ANSI =    279 ,
        EXCEPTION =     278 ,
        NEQU =  277 ,
        EQU =   276 ,
        EXCLEGAL =  275 ,
        EGALEGAL =  274 ,
        ENUM_CLASS =    273 ,
        PRAGMA =    272 ,
        PARAMETERS =    271 ,
        FUNC_HEADER =   270 ,
        INDENT_FUNCTION_TYPE =  269 ,
        COMMENT_PLUS =  268 ,
        COMMENT_END =   267 ,
        COMMENT_MIDDLE =    266 ,
        COMMENT_START =     265 ,
        MARGIN_VALUE =  264 ,
        BRACE_ALIGN_VALUE =     263 ,
        DECL_ALIGN =    262 ,
        ASSIGN_ALIGN =  261 ,
        SINGLE_SWITCH_INDENT_VALUE =    260 ,
        SIMPLIFY_VALUE =    259 ,
        SIMPLIFY =  258 ,
        MODE_VALUE =    257 ,
        TAB_VALUE =     256 ,
        CONFIG =    255 ,
        NOT_MANAGED =   254 ,
        NO_PRETTY =     253 ,
        ALINE =     252 ,
        ERROR =     251 ,
        UNDEF =     250 ,
        TYP_AFF_BRA =   249 ,
        TYP_AFF_CALL =  248 ,
        MEMBER_DECLARATOR =     247 ,
        TYP_ARRAY =     246 ,
        COUV =  245 ,
        FOR_DECLARATION =   244 ,
        DECLARATION =   243 ,
        CTOR_INITIALIZER =  242 ,
        BRACE_MARKER =  241 ,
        CTOR_INIT =     240 ,
        LONGLONG =  239 ,
        IUNLONGLONG =   238 ,
        IUNLONG =   237 ,
        IUN =   236 ,
        ILONGLONG =     235 ,
        ILONG =     234 ,
        RANGE_MODIFIER =    233 ,
        COND_AFF =  232 ,
        INTE =  231 ,
        COMPOUND =  230 ,
        CLASS_DECL =    229 ,
        AFER =  228 ,
        CATCH_ANSI =    227 ,
        EXCEPT_ANSI_ALL =   226 ,
        CAST =  225 ,
        TYP_BIT =   224 ,
        PROTECT =   223 ,
        BASE_LIST =     222 ,
        ATTRIBUTE_CALL =    221 ,
        XOR_AFF =   220 ,
        OR_AFF =    219 ,
        AND_AFF =   218 ,
        RSH_AFF =   217 ,
        LSH_AFF =   216 ,
        MIN_AFF =   215 ,
        PLU_AFF =   214 ,
        REM_AFF =   213 ,
        DIV_AFF =   212 ,
        MUL_AFF =   211 ,
        AFF =   210 ,
        ASM_CALL =  209 ,
        EXP_ARRAY =     208 ,
        VAR_LIST =  207 ,
        TYP_LIST =  206 ,
        TYP_AFF =   205 ,
        ABST_DECLARATOR =   204 ,
        DECLARATOR =    203 ,
        LAND =  202 ,
        INIT_NEW =  201 ,
        VIRG =  200 ,
        QUALIFIED =     199 ,
        MINUS =     198 ,
        TYP =   197 ,
        PFER =  196 ,
        DESTRUCT =  195 ,
        TYP_REF =   194 ,
        TYP_ADDR =  193 ,
        INFE =  192 ,
        _TYPEDEF_PROTECTEDARRAY_S =     191 ,
        _TYPEDEF_PROTECTEDARRAY =   190 ,
        _PROTECTEDPOINTER_S =   189 ,
        _PROTECTEDPOINTER =     188 ,
        _PROTECTEDARRAY_S =     187 ,
        _PROTECTEDARRAY =   186 ,
        USING =     185 ,
        NAMESPACE =     184 ,
        CATCH =     183 ,
        DPOI =  182 ,
        PUBLIC =    181 ,
        PROTECTED =     180 ,
        PRIVATE =   179 ,
        CHAPEGAL =  178 ,
        VBAREGAL =  177 ,
        ETCOEGAL =  176 ,
        SUPESUPEEGAL =  175 ,
        INFEINFEEGAL =  174 ,
        TIREEGAL =  173 ,
        PLUSEGAL =  172 ,
        POURCEGAL =     171 ,
        ETOIEGAL =  170 ,
        EGAL =  169 ,
        ASM =   168 ,
        CFER =  167 ,
        POINPOINPOIN =  166 ,
        VA_ARG =    165 ,
        DELETE =    164 ,
        NEW =   163 ,
        SIZEOF =    162 ,
        TIRETIRE =  161 ,
        PLUSPLUS =  160 ,
        EXCL =  159 ,
        PLUS =  158 ,
        TIRE =  157 ,
        DEFAULT =   156 ,
        CASE =  155 ,
        TRY =   154 ,
        THROW =     153 ,
        FORALLSONS =    152 ,
        WHILE =     151 ,
        SWITCH =    150 ,
        RETURN =    149 ,
        PVIR =  148 ,
        IF =    147 ,
        FOR =   146 ,
        AOUV =  145 ,
        DO =    144 ,
        CONTINUE =  143 ,
        BREAK =     142 ,
        OPERATOR =  141 ,
        TILD =  140 ,
        ETCO =  139 ,
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
#define NODE_LIST_metachop  405
#define NODE_TREE_metachop  404
#define SPACE_metachop  403
#define SEP_OMIT_metachop   402
#define SEP_BEFORE_metachop     401
#define SEP_AFTER_metachop  400
#define AFERAFER_metachop   399
#define ALINEA_metachop     398
#define CHOP_DEF_metachop   397
#define NIL_metachop    396
#define IN_LANG_metachop    395
#define NEXT_metachop   394
#define DEF_IDENT_metachop  393
#define BOX_metachop    392
#define EXPO_metachop   391
#define EXPO_AFF_metachop   390
#define ETOIETOIEGAL_metachop   389
#define IN_metachop     388
#define PARSE_metachop  387
#define NEXTL_metachop  386
#define VALUE_metachop  385
#define INFESUPE_metachop   384
#define FOREACH_metachop    383
#define INFESEPOSUPE_metachop   382
#define INFESEPBSUPE_metachop   381
#define INFESEPASUPE_metachop   380
#define AOUVAOUV_metachop   379
#define ARRO_metachop   378
#define NL_BEG_metachop     377
#define TAB_BEG_metachop    376
#define SPACE_BEG_metachop  375
#define MAKETREE_SUP_metachop   374
#define MAKETREE_INF_metachop   373
#define PARSE_ELEM_metachop     372
#define SIMP_ETOI_metachop  371
#define ETOI_ETOI_metachop  370
#define TUNSIGNED_metachop  369
#define BDECR_metachop  368
#define BINCR_metachop  367
#define ADDR_metachop   366
#define NOT_metachop    365
#define LNEG_metachop   364
#define POS_metachop    363
#define NEG_metachop    362
#define PARAM_TYPE_metachop     361
#define STRING_LIST_metachop    360
#define LABEL_metachop  359
#define THROW_ANSI_metachop     358
#define ELSE_metachop   357
#define DECL_TYPE_metachop  356
#define CLASSNAME_metachop  355
#define TIDENT_metachop     354
#define TSIGNED_metachop    353
#define TSHORT_metachop     352
#define TCHAR_metachop  351
#define TINT_metachop   350
#define RSHI_metachop   349
#define LSHI_metachop   348
#define LT_metachop     347
#define GT_metachop     346
#define GEQU_metachop   345
#define LEQU_metachop   344
#define SPACE_ARROW_metachop    343
#define TAB_DIRECTIVE_metachop  342
#define ENUM_PARAMETERS_UNDER_metachop  341
#define ENUM_VERT_VALUE_metachop    340
#define PROTECTED_ARRAY_S_TYPEDEF_metachop  339
#define PROTECTED_ARRAY_TYPEDEF_metachop    338
#define PROTECTED_ARRAY_S_metachop  337
#define PROTECTED_ARRAY_metachop    336
#define PROTECT_MEMB_metachop   335
#define LANGUAGE_metachop   334
#define EXP_metachop    333
#define ADECR_metachop  332
#define AINCR_metachop  331
#define ARROW_metachop  330
#define REF_metachop    329
#define EXP_BRA_metachop    328
#define EXP_LIST_metachop   327
#define ARROW_MEMB_metachop     326
#define DOT_MEMB_metachop   325
#define POINETOI_metachop   324
#define TIRESUPEETOI_metachop   323
#define TIRESUPE_metachop   322
#define SUPESUPE_metachop   321
#define INFEINFE_metachop   320
#define SUPEEGAL_metachop   319
#define INFEEGAL_metachop   318
#define NONE_metachop   317
#define NEW_DECLARATOR_metachop     316
#define USING_NAMESPACE_metachop    315
#define NAMESPACE_ALIAS_metachop    314
#define REM_metachop    313
#define DIV_metachop    312
#define MUL_metachop    311
#define POURC_metachop  310
#define MESSAGE_MAP_metachop    309
#define MACRO_metachop  308
#define TDOUBLE_metachop    307
#define TFLOAT_metachop     306
#define TLONG_metachop  305
#define OR_metachop     304
#define VBARVBAR_metachop   303
#define AND_metachop    302
#define ETCOETCO_metachop   301
#define COMPOUND_EXT_metachop   300
#define EXTERNAL_metachop   299
#define INLINE_NAMESPACE_metachop   298
#define INITIALIZER_metachop    297
#define LOR_metachop    296
#define VBAR_metachop   295
#define DELETE_FUNCTION_metachop    294
#define FUNC_metachop   293
#define ALL_OF_metachop     292
#define EXTENSION_metachop  291
#define __EXTENSION___metachop  290
#define STAT_VOID_metachop  289
#define TYPEDEF_metachop    288
#define TEMPLATE_DECL_metachop  287
#define SUPE_metachop   286
#define CLASS_PARAM_metachop    285
#define TEMPLATE_metachop   284
#define EXP_SEQ_metachop    283
#define LXOR_metachop   282
#define CHAP_metachop   281
#define EXCEPTION_LIST_metachop     280
#define EXCEPTION_ANSI_metachop     279
#define EXCEPTION_metachop  278
#define NEQU_metachop   277
#define EQU_metachop    276
#define EXCLEGAL_metachop   275
#define EGALEGAL_metachop   274
#define ENUM_CLASS_metachop     273
#define PRAGMA_metachop     272
#define PARAMETERS_metachop     271
#define FUNC_HEADER_metachop    270
#define INDENT_FUNCTION_TYPE_metachop   269
#define COMMENT_PLUS_metachop   268
#define COMMENT_END_metachop    267
#define COMMENT_MIDDLE_metachop     266
#define COMMENT_START_metachop  265
#define MARGIN_VALUE_metachop   264
#define BRACE_ALIGN_VALUE_metachop  263
#define DECL_ALIGN_metachop     262
#define ASSIGN_ALIGN_metachop   261
#define SINGLE_SWITCH_INDENT_VALUE_metachop     260
#define SIMPLIFY_VALUE_metachop     259
#define SIMPLIFY_metachop   258
#define MODE_VALUE_metachop     257
#define TAB_VALUE_metachop  256
#define CONFIG_metachop     255
#define NOT_MANAGED_metachop    254
#define NO_PRETTY_metachop  253
#define ALINE_metachop  252
#define ERROR_metachop  251
#define UNDEF_metachop  250
#define TYP_AFF_BRA_metachop    249
#define TYP_AFF_CALL_metachop   248
#define MEMBER_DECLARATOR_metachop  247
#define TYP_ARRAY_metachop  246
#define COUV_metachop   245
#define FOR_DECLARATION_metachop    244
#define DECLARATION_metachop    243
#define CTOR_INITIALIZER_metachop   242
#define BRACE_MARKER_metachop   241
#define CTOR_INIT_metachop  240
#define LONGLONG_metachop   239
#define IUNLONGLONG_metachop    238
#define IUNLONG_metachop    237
#define IUN_metachop    236
#define ILONGLONG_metachop  235
#define ILONG_metachop  234
#define RANGE_MODIFIER_metachop     233
#define COND_AFF_metachop   232
#define INTE_metachop   231
#define COMPOUND_metachop   230
#define CLASS_DECL_metachop     229
#define AFER_metachop   228
#define CATCH_ANSI_metachop     227
#define EXCEPT_ANSI_ALL_metachop    226
#define CAST_metachop   225
#define TYP_BIT_metachop    224
#define PROTECT_metachop    223
#define BASE_LIST_metachop  222
#define ATTRIBUTE_CALL_metachop     221
#define XOR_AFF_metachop    220
#define OR_AFF_metachop     219
#define AND_AFF_metachop    218
#define RSH_AFF_metachop    217
#define LSH_AFF_metachop    216
#define MIN_AFF_metachop    215
#define PLU_AFF_metachop    214
#define REM_AFF_metachop    213
#define DIV_AFF_metachop    212
#define MUL_AFF_metachop    211
#define AFF_metachop    210
#define ASM_CALL_metachop   209
#define EXP_ARRAY_metachop  208
#define VAR_LIST_metachop   207
#define TYP_LIST_metachop   206
#define TYP_AFF_metachop    205
#define ABST_DECLARATOR_metachop    204
#define DECLARATOR_metachop     203
#define LAND_metachop   202
#define INIT_NEW_metachop   201
#define VIRG_metachop   200
#define QUALIFIED_metachop  199
#define MINUS_metachop  198
#define TYP_metachop    197
#define PFER_metachop   196
#define DESTRUCT_metachop   195
#define TYP_REF_metachop    194
#define TYP_ADDR_metachop   193
#define INFE_metachop   192
#define _TYPEDEF_PROTECTEDARRAY_S_metachop  191
#define _TYPEDEF_PROTECTEDARRAY_metachop    190
#define _PROTECTEDPOINTER_S_metachop    189
#define _PROTECTEDPOINTER_metachop  188
#define _PROTECTEDARRAY_S_metachop  187
#define _PROTECTEDARRAY_metachop    186
#define USING_metachop  185
#define NAMESPACE_metachop  184
#define CATCH_metachop  183
#define DPOI_metachop   182
#define PUBLIC_metachop     181
#define PROTECTED_metachop  180
#define PRIVATE_metachop    179
#define CHAPEGAL_metachop   178
#define VBAREGAL_metachop   177
#define ETCOEGAL_metachop   176
#define SUPESUPEEGAL_metachop   175
#define INFEINFEEGAL_metachop   174
#define TIREEGAL_metachop   173
#define PLUSEGAL_metachop   172
#define POURCEGAL_metachop  171
#define ETOIEGAL_metachop   170
#define EGAL_metachop   169
#define ASM_metachop    168
#define CFER_metachop   167
#define POINPOINPOIN_metachop   166
#define VA_ARG_metachop     165
#define DELETE_metachop     164
#define NEW_metachop    163
#define SIZEOF_metachop     162
#define TIRETIRE_metachop   161
#define PLUSPLUS_metachop   160
#define EXCL_metachop   159
#define PLUS_metachop   158
#define TIRE_metachop   157
#define DEFAULT_metachop    156
#define CASE_metachop   155
#define TRY_metachop    154
#define THROW_metachop  153
#define FORALLSONS_metachop     152
#define WHILE_metachop  151
#define SWITCH_metachop     150
#define RETURN_metachop     149
#define PVIR_metachop   148
#define IF_metachop     147
#define FOR_metachop    146
#define AOUV_metachop   145
#define DO_metachop     144
#define CONTINUE_metachop   143
#define BREAK_metachop  142
#define OPERATOR_metachop   141
#define TILD_metachop   140
#define ETCO_metachop   139
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
