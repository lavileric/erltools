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
    static signed char * _tokenArray [175];
    static int (chopb::*(_tokenFuncArray [175])) ();
    static int _tokenNbFuncArray [175];

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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     405
#define NODE_TREE_chopb     404
#define SPACE_chopb     403
#define SEP_OMIT_chopb  402
#define SEP_BEFORE_chopb    401
#define SEP_AFTER_chopb     400
#define AFERAFER_chopb  399
#define ALINEA_chopb    398
#define CHOP_DEF_chopb  397
#define NIL_chopb   396
#define IN_LANG_chopb   395
#define NEXT_chopb  394
#define DEF_IDENT_chopb     393
#define BOX_chopb   392
#define EXPO_chopb  391
#define EXPO_AFF_chopb  390
#define ETOIETOIEGAL_chopb  389
#define IN_chopb    388
#define PARSE_chopb     387
#define NEXTL_chopb     386
#define VALUE_chopb     385
#define INFESUPE_chopb  384
#define FOREACH_chopb   383
#define INFESEPOSUPE_chopb  382
#define INFESEPBSUPE_chopb  381
#define INFESEPASUPE_chopb  380
#define AOUVAOUV_chopb  379
#define ARRO_chopb  378
#define NL_BEG_chopb    377
#define TAB_BEG_chopb   376
#define SPACE_BEG_chopb     375
#define MAKETREE_SUP_chopb  374
#define MAKETREE_INF_chopb  373
#define PARSE_ELEM_chopb    372
#define SIMP_ETOI_chopb     371
#define ETOI_ETOI_chopb     370
#define TUNSIGNED_chopb     369
#define BDECR_chopb     368
#define BINCR_chopb     367
#define ADDR_chopb  366
#define NOT_chopb   365
#define LNEG_chopb  364
#define POS_chopb   363
#define NEG_chopb   362
#define PARAM_TYPE_chopb    361
#define STRING_LIST_chopb   360
#define LABEL_chopb     359
#define THROW_ANSI_chopb    358
#define ELSE_chopb  357
#define DECL_TYPE_chopb     356
#define CLASSNAME_chopb     355
#define TIDENT_chopb    354
#define TSIGNED_chopb   353
#define TSHORT_chopb    352
#define TCHAR_chopb     351
#define TINT_chopb  350
#define RSHI_chopb  349
#define LSHI_chopb  348
#define LT_chopb    347
#define GT_chopb    346
#define GEQU_chopb  345
#define LEQU_chopb  344
#define SPACE_ARROW_chopb   343
#define TAB_DIRECTIVE_chopb     342
#define ENUM_PARAMETERS_UNDER_chopb     341
#define ENUM_VERT_VALUE_chopb   340
#define PROTECTED_ARRAY_S_TYPEDEF_chopb     339
#define PROTECTED_ARRAY_TYPEDEF_chopb   338
#define PROTECTED_ARRAY_S_chopb     337
#define PROTECTED_ARRAY_chopb   336
#define PROTECT_MEMB_chopb  335
#define LANGUAGE_chopb  334
#define EXP_chopb   333
#define ADECR_chopb     332
#define AINCR_chopb     331
#define ARROW_chopb     330
#define REF_chopb   329
#define EXP_BRA_chopb   328
#define EXP_LIST_chopb  327
#define ARROW_MEMB_chopb    326
#define DOT_MEMB_chopb  325
#define POINETOI_chopb  324
#define TIRESUPEETOI_chopb  323
#define TIRESUPE_chopb  322
#define SUPESUPE_chopb  321
#define INFEINFE_chopb  320
#define SUPEEGAL_chopb  319
#define INFEEGAL_chopb  318
#define NONE_chopb  317
#define NEW_DECLARATOR_chopb    316
#define USING_NAMESPACE_chopb   315
#define NAMESPACE_ALIAS_chopb   314
#define REM_chopb   313
#define DIV_chopb   312
#define MUL_chopb   311
#define POURC_chopb     310
#define MESSAGE_MAP_chopb   309
#define MACRO_chopb     308
#define TDOUBLE_chopb   307
#define TFLOAT_chopb    306
#define TLONG_chopb     305
#define OR_chopb    304
#define VBARVBAR_chopb  303
#define AND_chopb   302
#define ETCOETCO_chopb  301
#define COMPOUND_EXT_chopb  300
#define EXTERNAL_chopb  299
#define INLINE_NAMESPACE_chopb  298
#define INITIALIZER_chopb   297
#define LOR_chopb   296
#define VBAR_chopb  295
#define DELETE_FUNCTION_chopb   294
#define FUNC_chopb  293
#define ALL_OF_chopb    292
#define EXTENSION_chopb     291
#define __EXTENSION___chopb     290
#define STAT_VOID_chopb     289
#define TYPEDEF_chopb   288
#define TEMPLATE_DECL_chopb     287
#define SUPE_chopb  286
#define CLASS_PARAM_chopb   285
#define TEMPLATE_chopb  284
#define EXP_SEQ_chopb   283
#define LXOR_chopb  282
#define CHAP_chopb  281
#define EXCEPTION_LIST_chopb    280
#define EXCEPTION_ANSI_chopb    279
#define EXCEPTION_chopb     278
#define NEQU_chopb  277
#define EQU_chopb   276
#define EXCLEGAL_chopb  275
#define EGALEGAL_chopb  274
#define ENUM_CLASS_chopb    273
#define PRAGMA_chopb    272
#define PARAMETERS_chopb    271
#define FUNC_HEADER_chopb   270
#define INDENT_FUNCTION_TYPE_chopb  269
#define COMMENT_PLUS_chopb  268
#define COMMENT_END_chopb   267
#define COMMENT_MIDDLE_chopb    266
#define COMMENT_START_chopb     265
#define MARGIN_VALUE_chopb  264
#define BRACE_ALIGN_VALUE_chopb     263
#define DECL_ALIGN_chopb    262
#define ASSIGN_ALIGN_chopb  261
#define SINGLE_SWITCH_INDENT_VALUE_chopb    260
#define SIMPLIFY_VALUE_chopb    259
#define SIMPLIFY_chopb  258
#define MODE_VALUE_chopb    257
#define TAB_VALUE_chopb     256
#define CONFIG_chopb    255
#define NOT_MANAGED_chopb   254
#define NO_PRETTY_chopb     253
#define ALINE_chopb     252
#define ERROR_chopb     251
#define UNDEF_chopb     250
#define TYP_AFF_BRA_chopb   249
#define TYP_AFF_CALL_chopb  248
#define MEMBER_DECLARATOR_chopb     247
#define TYP_ARRAY_chopb     246
#define COUV_chopb  245
#define FOR_DECLARATION_chopb   244
#define DECLARATION_chopb   243
#define CTOR_INITIALIZER_chopb  242
#define BRACE_MARKER_chopb  241
#define CTOR_INIT_chopb     240
#define LONGLONG_chopb  239
#define IUNLONGLONG_chopb   238
#define IUNLONG_chopb   237
#define IUN_chopb   236
#define ILONGLONG_chopb     235
#define ILONG_chopb     234
#define RANGE_MODIFIER_chopb    233
#define COND_AFF_chopb  232
#define INTE_chopb  231
#define COMPOUND_chopb  230
#define CLASS_DECL_chopb    229
#define AFER_chopb  228
#define CATCH_ANSI_chopb    227
#define EXCEPT_ANSI_ALL_chopb   226
#define CAST_chopb  225
#define TYP_BIT_chopb   224
#define PROTECT_chopb   223
#define BASE_LIST_chopb     222
#define ATTRIBUTE_CALL_chopb    221
#define XOR_AFF_chopb   220
#define OR_AFF_chopb    219
#define AND_AFF_chopb   218
#define RSH_AFF_chopb   217
#define LSH_AFF_chopb   216
#define MIN_AFF_chopb   215
#define PLU_AFF_chopb   214
#define REM_AFF_chopb   213
#define DIV_AFF_chopb   212
#define MUL_AFF_chopb   211
#define AFF_chopb   210
#define ASM_CALL_chopb  209
#define EXP_ARRAY_chopb     208
#define VAR_LIST_chopb  207
#define TYP_LIST_chopb  206
#define TYP_AFF_chopb   205
#define ABST_DECLARATOR_chopb   204
#define DECLARATOR_chopb    203
#define LAND_chopb  202
#define INIT_NEW_chopb  201
#define VIRG_chopb  200
#define QUALIFIED_chopb     199
#define MINUS_chopb     198
#define TYP_chopb   197
#define PFER_chopb  196
#define DESTRUCT_chopb  195
#define TYP_REF_chopb   194
#define TYP_ADDR_chopb  193
#define INFE_chopb  192
#define _TYPEDEF_PROTECTEDARRAY_S_chopb     191
#define _TYPEDEF_PROTECTEDARRAY_chopb   190
#define _PROTECTEDPOINTER_S_chopb   189
#define _PROTECTEDPOINTER_chopb     188
#define _PROTECTEDARRAY_S_chopb     187
#define _PROTECTEDARRAY_chopb   186
#define USING_chopb     185
#define NAMESPACE_chopb     184
#define CATCH_chopb     183
#define DPOI_chopb  182
#define PUBLIC_chopb    181
#define PROTECTED_chopb     180
#define PRIVATE_chopb   179
#define CHAPEGAL_chopb  178
#define VBAREGAL_chopb  177
#define ETCOEGAL_chopb  176
#define SUPESUPEEGAL_chopb  175
#define INFEINFEEGAL_chopb  174
#define TIREEGAL_chopb  173
#define PLUSEGAL_chopb  172
#define POURCEGAL_chopb     171
#define ETOIEGAL_chopb  170
#define EGAL_chopb  169
#define ASM_chopb   168
#define CFER_chopb  167
#define POINPOINPOIN_chopb  166
#define VA_ARG_chopb    165
#define DELETE_chopb    164
#define NEW_chopb   163
#define SIZEOF_chopb    162
#define TIRETIRE_chopb  161
#define PLUSPLUS_chopb  160
#define EXCL_chopb  159
#define PLUS_chopb  158
#define TIRE_chopb  157
#define DEFAULT_chopb   156
#define CASE_chopb  155
#define TRY_chopb   154
#define THROW_chopb     153
#define FORALLSONS_chopb    152
#define WHILE_chopb     151
#define SWITCH_chopb    150
#define RETURN_chopb    149
#define PVIR_chopb  148
#define IF_chopb    147
#define FOR_chopb   146
#define AOUV_chopb  145
#define DO_chopb    144
#define CONTINUE_chopb  143
#define BREAK_chopb     142
#define OPERATOR_chopb  141
#define TILD_chopb  140
#define ETCO_chopb  139
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
