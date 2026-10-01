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
    static signed char * _tokenArray [177];
    static int (chopb::*(_tokenFuncArray [177])) ();
    static int _tokenNbFuncArray [177];

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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     415
#define NODE_TREE_chopb     414
#define SPACE_chopb     413
#define SEP_OMIT_chopb  412
#define SEP_BEFORE_chopb    411
#define SEP_AFTER_chopb     410
#define AFERAFER_chopb  409
#define ALINEA_chopb    408
#define CHOP_DEF_chopb  407
#define NIL_chopb   406
#define IN_LANG_chopb   405
#define NEXT_chopb  404
#define DEF_IDENT_chopb     403
#define BOX_chopb   402
#define EXPO_chopb  401
#define EXPO_AFF_chopb  400
#define ETOIETOIEGAL_chopb  399
#define IN_chopb    398
#define PARSE_chopb     397
#define NEXTL_chopb     396
#define VALUE_chopb     395
#define INFESUPE_chopb  394
#define FOREACH_chopb   393
#define INFESEPOSUPE_chopb  392
#define INFESEPBSUPE_chopb  391
#define INFESEPASUPE_chopb  390
#define AOUVAOUV_chopb  389
#define ARRO_chopb  388
#define NL_BEG_chopb    387
#define TAB_BEG_chopb   386
#define SPACE_BEG_chopb     385
#define MAKETREE_SUP_chopb  384
#define MAKETREE_INF_chopb  383
#define PARSE_ELEM_chopb    382
#define SIMP_ETOI_chopb     381
#define ETOI_ETOI_chopb     380
#define TUNSIGNED_chopb     379
#define BDECR_chopb     378
#define BINCR_chopb     377
#define ADDR_chopb  376
#define NOT_chopb   375
#define LNEG_chopb  374
#define POS_chopb   373
#define NEG_chopb   372
#define PARAM_TYPE_chopb    371
#define STRING_LIST_chopb   370
#define LABEL_chopb     369
#define THROW_ANSI_chopb    368
#define ELSE_chopb  367
#define DECL_TYPE_chopb     366
#define CLASSNAME_chopb     365
#define TIDENT_chopb    364
#define TSIGNED_chopb   363
#define TSHORT_chopb    362
#define TCHAR_chopb     361
#define TINT_chopb  360
#define RSHI_chopb  359
#define LSHI_chopb  358
#define LT_chopb    357
#define GT_chopb    356
#define GEQU_chopb  355
#define LEQU_chopb  354
#define SPACE_ARROW_chopb   353
#define TAB_DIRECTIVE_chopb     352
#define ENUM_PARAMETERS_UNDER_chopb     351
#define ENUM_VERT_VALUE_chopb   350
#define PROTECTED_ARRAY_S_TYPEDEF_chopb     349
#define PROTECTED_ARRAY_TYPEDEF_chopb   348
#define PROTECTED_ARRAY_S_chopb     347
#define PROTECTED_ARRAY_chopb   346
#define PROTECT_MEMB_chopb  345
#define LANGUAGE_chopb  344
#define ELIPSIS_EXPRESSION_chopb    343
#define EXP_chopb   342
#define ADECR_chopb     341
#define AINCR_chopb     340
#define ARROW_chopb     339
#define REF_chopb   338
#define VARIADIC_EXPRESSION_chopb   337
#define EXP_BRA_chopb   336
#define EXP_LIST_chopb  335
#define ARROW_MEMB_chopb    334
#define DOT_MEMB_chopb  333
#define POINETOI_chopb  332
#define TIRESUPEETOI_chopb  331
#define SUPESUPE_chopb  330
#define INFEINFE_chopb  329
#define SUPEEGAL_chopb  328
#define INFEEGAL_chopb  327
#define NONE_chopb  326
#define NEW_DECLARATOR_chopb    325
#define USING_TYPE_chopb    324
#define USING_NAMESPACE_chopb   323
#define NAMESPACE_ALIAS_chopb   322
#define REM_chopb   321
#define DIV_chopb   320
#define MUL_chopb   319
#define POURC_chopb     318
#define MESSAGE_MAP_chopb   317
#define MACRO_chopb     316
#define TDOUBLE_chopb   315
#define TFLOAT_chopb    314
#define TLONG_chopb     313
#define OR_chopb    312
#define VBARVBAR_chopb  311
#define AND_chopb   310
#define COMPOUND_EXT_chopb  309
#define EXTERNAL_chopb  308
#define MUTABLE_chopb   307
#define TIRESUPE_chopb  306
#define CAPTURE_ALL_chopb   305
#define LAMBDA_chopb    304
#define INLINE_NAMESPACE_chopb  303
#define INITIALIZER_chopb   302
#define LOR_chopb   301
#define VBAR_chopb  300
#define DELETE_FUNCTION_chopb   299
#define FUNC_chopb  298
#define ALL_OF_chopb    297
#define EXTENSION_chopb     296
#define __EXTENSION___chopb     295
#define STAT_VOID_chopb     294
#define TYPEDEF_chopb   293
#define TEMPLATE_DECL_chopb     292
#define SUPE_chopb  291
#define CLASS_PARAM_chopb   290
#define TEMPLATE_chopb  289
#define EXP_SEQ_chopb   288
#define LXOR_chopb  287
#define CHAP_chopb  286
#define EXCEPTION_LIST_chopb    285
#define EXCEPTION_ANSI_chopb    284
#define EXCEPTION_chopb     283
#define NEQU_chopb  282
#define EQU_chopb   281
#define EXCLEGAL_chopb  280
#define EGALEGAL_chopb  279
#define ENUM_CLASS_chopb    278
#define PRAGMA_chopb    277
#define PARAMETERS_chopb    276
#define FUNC_HEADER_chopb   275
#define INDENT_FUNCTION_TYPE_chopb  274
#define COMMENT_PLUS_chopb  273
#define COMMENT_END_chopb   272
#define COMMENT_MIDDLE_chopb    271
#define COMMENT_START_chopb     270
#define MARGIN_VALUE_chopb  269
#define BRACE_ALIGN_VALUE_chopb     268
#define DECL_ALIGN_chopb    267
#define ASSIGN_ALIGN_chopb  266
#define SINGLE_SWITCH_INDENT_VALUE_chopb    265
#define SIMPLIFY_VALUE_chopb    264
#define SIMPLIFY_chopb  263
#define MODE_VALUE_chopb    262
#define TAB_VALUE_chopb     261
#define CONFIG_chopb    260
#define NOT_MANAGED_chopb   259
#define NO_PRETTY_chopb     258
#define ALINE_chopb     257
#define ERROR_chopb     256
#define UNDEF_chopb     255
#define TYP_AFF_BRA_chopb   254
#define TYP_AFF_CALL_chopb  253
#define MEMBER_DECLARATOR_chopb     252
#define TYP_ARRAY_chopb     251
#define FOR_DECLARATION_chopb   250
#define DECLARATION_chopb   249
#define CTOR_INITIALIZER_chopb  248
#define BRACE_MARKER_chopb  247
#define CTOR_INIT_chopb     246
#define LONGLONG_chopb  245
#define IUNLONGLONG_chopb   244
#define IUNLONG_chopb   243
#define IUN_chopb   242
#define ILONGLONG_chopb     241
#define ILONG_chopb     240
#define RANGE_MODIFIER_chopb    239
#define COND_AFF_chopb  238
#define INTE_chopb  237
#define COMPOUND_chopb  236
#define CLASS_DECL_chopb    235
#define AFER_chopb  234
#define CATCH_ANSI_chopb    233
#define EXCEPT_ANSI_ALL_chopb   232
#define CAST_chopb  231
#define TYP_BIT_chopb   230
#define PROTECT_chopb   229
#define BASE_LIST_chopb     228
#define ATTRIBUTE_CALL_chopb    227
#define XOR_AFF_chopb   226
#define OR_AFF_chopb    225
#define AND_AFF_chopb   224
#define RSH_AFF_chopb   223
#define LSH_AFF_chopb   222
#define MIN_AFF_chopb   221
#define PLU_AFF_chopb   220
#define REM_AFF_chopb   219
#define DIV_AFF_chopb   218
#define MUL_AFF_chopb   217
#define AFF_chopb   216
#define ASM_CALL_chopb  215
#define EXP_ARRAY_chopb     214
#define VAR_LIST_chopb  213
#define TYP_LIST_chopb  212
#define TYP_AFF_chopb   211
#define ABST_DECLARATOR_chopb   210
#define DECLARATOR_chopb    209
#define LAND_chopb  208
#define INIT_NEW_chopb  207
#define VIRG_chopb  206
#define QUALIFIED_chopb     205
#define MINUS_chopb     204
#define TYP_chopb   203
#define PFER_chopb  202
#define DESTRUCT_chopb  201
#define TYP_REF_chopb   200
#define TYP_VARIADIC_chopb  199
#define TYP_MOV_chopb   198
#define TYP_ADDR_chopb  197
#define INFE_chopb  196
#define _TYPEDEF_PROTECTEDARRAY_S_chopb     195
#define _TYPEDEF_PROTECTEDARRAY_chopb   194
#define _PROTECTEDPOINTER_S_chopb   193
#define _PROTECTEDPOINTER_chopb     192
#define _PROTECTEDARRAY_S_chopb     191
#define _PROTECTEDARRAY_chopb   190
#define USING_chopb     189
#define NAMESPACE_chopb     188
#define CATCH_chopb     187
#define DPOI_chopb  186
#define PUBLIC_chopb    185
#define PROTECTED_chopb     184
#define PRIVATE_chopb   183
#define CHAPEGAL_chopb  182
#define VBAREGAL_chopb  181
#define ETCOEGAL_chopb  180
#define SUPESUPEEGAL_chopb  179
#define INFEINFEEGAL_chopb  178
#define TIREEGAL_chopb  177
#define PLUSEGAL_chopb  176
#define POURCEGAL_chopb     175
#define ETOIEGAL_chopb  174
#define EGAL_chopb  173
#define ASM_chopb   172
#define CFER_chopb  171
#define COUV_chopb  170
#define VA_ARG_chopb    169
#define DELETE_chopb    168
#define NEW_chopb   167
#define SIZEOF_chopb    166
#define TIRETIRE_chopb  165
#define PLUSPLUS_chopb  164
#define EXCL_chopb  163
#define PLUS_chopb  162
#define TIRE_chopb  161
#define DEFAULT_chopb   160
#define CASE_chopb  159
#define TRY_chopb   158
#define THROW_chopb     157
#define FORALLSONS_chopb    156
#define WHILE_chopb     155
#define SWITCH_chopb    154
#define RETURN_chopb    153
#define PVIR_chopb  152
#define IF_chopb    151
#define FOR_chopb   150
#define AOUV_chopb  149
#define DO_chopb    148
#define CONTINUE_chopb  147
#define BREAK_chopb     146
#define OPERATOR_chopb  145
#define TILD_chopb  144
#define ETCO_chopb  143
#define POINPOINPOIN_chopb  142
#define ETCOETCO_chopb  141
#define ETOI_chopb  140
#define POUV_chopb  139
#define UNSIGNED_chopb  138
#define SIGNED_chopb    137
#define SHORT_chopb     136
#define LONG_chopb  135
#define CHAR_chopb  134
#define INT_chopb   133
#define DPOIDPOI_chopb  132
#define VOID_chopb  131
#define FLOAT_chopb     130
#define DOUBLE_chopb    129
#define DECLTYPE_chopb  128
#define TYPENAME_chopb  127
#define CLASS_chopb     126
#define UNION_chopb     125
#define STRUCT_chopb    124
#define ENUM_chopb  123
#define NOEXCEPT_chopb  122
#define CONSTEVAL_chopb     121
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
