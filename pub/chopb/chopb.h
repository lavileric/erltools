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
    static signed char * _tokenArray [172];
    static int (chopb::*(_tokenFuncArray [172])) ();
    static int _tokenNbFuncArray [172];

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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     404
#define NODE_TREE_chopb     403
#define SPACE_chopb     402
#define SEP_OMIT_chopb  401
#define SEP_BEFORE_chopb    400
#define SEP_AFTER_chopb     399
#define AFERAFER_chopb  398
#define ALINEA_chopb    397
#define CHOP_DEF_chopb  396
#define NIL_chopb   395
#define IN_LANG_chopb   394
#define NEXT_chopb  393
#define DEF_IDENT_chopb     392
#define BOX_chopb   391
#define EXPO_chopb  390
#define EXPO_AFF_chopb  389
#define ETOIETOIEGAL_chopb  388
#define IN_chopb    387
#define PARSE_chopb     386
#define NEXTL_chopb     385
#define VALUE_chopb     384
#define INFESUPE_chopb  383
#define FOREACH_chopb   382
#define INFESEPOSUPE_chopb  381
#define INFESEPBSUPE_chopb  380
#define INFESEPASUPE_chopb  379
#define AOUVAOUV_chopb  378
#define ARRO_chopb  377
#define NL_BEG_chopb    376
#define TAB_BEG_chopb   375
#define SPACE_BEG_chopb     374
#define MAKETREE_SUP_chopb  373
#define MAKETREE_INF_chopb  372
#define PARSE_ELEM_chopb    371
#define SIMP_ETOI_chopb     370
#define ETOI_ETOI_chopb     369
#define TUNSIGNED_chopb     368
#define BDECR_chopb     367
#define BINCR_chopb     366
#define ADDR_chopb  365
#define NOT_chopb   364
#define LNEG_chopb  363
#define POS_chopb   362
#define NEG_chopb   361
#define PARAM_TYPE_chopb    360
#define STRING_LIST_chopb   359
#define LABEL_chopb     358
#define THROW_ANSI_chopb    357
#define ELSE_chopb  356
#define DECL_TYPE_chopb     355
#define CLASSNAME_chopb     354
#define TIDENT_chopb    353
#define TSIGNED_chopb   352
#define TSHORT_chopb    351
#define TCHAR_chopb     350
#define TINT_chopb  349
#define RSHI_chopb  348
#define LSHI_chopb  347
#define LT_chopb    346
#define GT_chopb    345
#define GEQU_chopb  344
#define LEQU_chopb  343
#define SPACE_ARROW_chopb   342
#define TAB_DIRECTIVE_chopb     341
#define ENUM_PARAMETERS_UNDER_chopb     340
#define ENUM_VERT_VALUE_chopb   339
#define PROTECTED_ARRAY_S_TYPEDEF_chopb     338
#define PROTECTED_ARRAY_TYPEDEF_chopb   337
#define PROTECTED_ARRAY_S_chopb     336
#define PROTECTED_ARRAY_chopb   335
#define PROTECT_MEMB_chopb  334
#define LANGUAGE_chopb  333
#define EXP_chopb   332
#define ADECR_chopb     331
#define AINCR_chopb     330
#define ARROW_chopb     329
#define REF_chopb   328
#define EXP_BRA_chopb   327
#define EXP_LIST_chopb  326
#define ARROW_MEMB_chopb    325
#define DOT_MEMB_chopb  324
#define POINETOI_chopb  323
#define TIRESUPEETOI_chopb  322
#define TIRESUPE_chopb  321
#define SUPESUPE_chopb  320
#define INFEINFE_chopb  319
#define SUPEEGAL_chopb  318
#define INFEEGAL_chopb  317
#define NONE_chopb  316
#define NEW_DECLARATOR_chopb    315
#define USING_NAMESPACE_chopb   314
#define NAMESPACE_ALIAS_chopb   313
#define REM_chopb   312
#define DIV_chopb   311
#define MUL_chopb   310
#define POURC_chopb     309
#define MESSAGE_MAP_chopb   308
#define MACRO_chopb     307
#define TDOUBLE_chopb   306
#define TFLOAT_chopb    305
#define TLONG_chopb     304
#define OR_chopb    303
#define VBARVBAR_chopb  302
#define AND_chopb   301
#define ETCOETCO_chopb  300
#define COMPOUND_EXT_chopb  299
#define EXTERNAL_chopb  298
#define INLINE_NAMESPACE_chopb  297
#define INITIALIZER_chopb   296
#define LOR_chopb   295
#define VBAR_chopb  294
#define DELETE_FUNCTION_chopb   293
#define FUNC_chopb  292
#define ALL_OF_chopb    291
#define EXTENSION_chopb     290
#define __EXTENSION___chopb     289
#define STAT_VOID_chopb     288
#define TYPEDEF_chopb   287
#define TEMPLATE_DECL_chopb     286
#define SUPE_chopb  285
#define CLASS_PARAM_chopb   284
#define TEMPLATE_chopb  283
#define EXP_SEQ_chopb   282
#define LXOR_chopb  281
#define CHAP_chopb  280
#define EXCEPTION_LIST_chopb    279
#define EXCEPTION_ANSI_chopb    278
#define EXCEPTION_chopb     277
#define NEQU_chopb  276
#define EQU_chopb   275
#define EXCLEGAL_chopb  274
#define EGALEGAL_chopb  273
#define ENUM_CLASS_chopb    272
#define PRAGMA_chopb    271
#define PARAMETERS_chopb    270
#define FUNC_HEADER_chopb   269
#define INDENT_FUNCTION_TYPE_chopb  268
#define COMMENT_PLUS_chopb  267
#define COMMENT_END_chopb   266
#define COMMENT_MIDDLE_chopb    265
#define COMMENT_START_chopb     264
#define MARGIN_VALUE_chopb  263
#define BRACE_ALIGN_VALUE_chopb     262
#define DECL_ALIGN_chopb    261
#define ASSIGN_ALIGN_chopb  260
#define SINGLE_SWITCH_INDENT_VALUE_chopb    259
#define SIMPLIFY_VALUE_chopb    258
#define SIMPLIFY_chopb  257
#define MODE_VALUE_chopb    256
#define TAB_VALUE_chopb     255
#define CONFIG_chopb    254
#define NOT_MANAGED_chopb   253
#define NO_PRETTY_chopb     252
#define ALINE_chopb     251
#define ERROR_chopb     250
#define UNDEF_chopb     249
#define TYP_AFF_BRA_chopb   248
#define TYP_AFF_CALL_chopb  247
#define MEMBER_DECLARATOR_chopb     246
#define TYP_ARRAY_chopb     245
#define COUV_chopb  244
#define FOR_DECLARATION_chopb   243
#define DECLARATION_chopb   242
#define CTOR_INITIALIZER_chopb  241
#define BRACE_MARKER_chopb  240
#define CTOR_INIT_chopb     239
#define LONGLONG_chopb  238
#define IUNLONGLONG_chopb   237
#define IUNLONG_chopb   236
#define IUN_chopb   235
#define ILONGLONG_chopb     234
#define ILONG_chopb     233
#define RANGE_MODIFIER_chopb    232
#define COND_AFF_chopb  231
#define INTE_chopb  230
#define COMPOUND_chopb  229
#define CLASS_DECL_chopb    228
#define AFER_chopb  227
#define CATCH_ANSI_chopb    226
#define EXCEPT_ANSI_ALL_chopb   225
#define CAST_chopb  224
#define TYP_BIT_chopb   223
#define PROTECT_chopb   222
#define BASE_LIST_chopb     221
#define ATTRIBUTE_CALL_chopb    220
#define XOR_AFF_chopb   219
#define OR_AFF_chopb    218
#define AND_AFF_chopb   217
#define RSH_AFF_chopb   216
#define LSH_AFF_chopb   215
#define MIN_AFF_chopb   214
#define PLU_AFF_chopb   213
#define REM_AFF_chopb   212
#define DIV_AFF_chopb   211
#define MUL_AFF_chopb   210
#define AFF_chopb   209
#define ASM_CALL_chopb  208
#define EXP_ARRAY_chopb     207
#define VAR_LIST_chopb  206
#define TYP_LIST_chopb  205
#define TYP_AFF_chopb   204
#define ABST_DECLARATOR_chopb   203
#define DECLARATOR_chopb    202
#define POINPOINPOIN_chopb  201
#define LAND_chopb  200
#define INIT_NEW_chopb  199
#define VIRG_chopb  198
#define QUALIFIED_chopb     197
#define MINUS_chopb     196
#define TYP_chopb   195
#define PFER_chopb  194
#define DESTRUCT_chopb  193
#define TYP_REF_chopb   192
#define TYP_ADDR_chopb  191
#define INFE_chopb  190
#define _TYPEDEF_PROTECTEDARRAY_S_chopb     189
#define _TYPEDEF_PROTECTEDARRAY_chopb   188
#define _PROTECTEDPOINTER_S_chopb   187
#define _PROTECTEDPOINTER_chopb     186
#define _PROTECTEDARRAY_S_chopb     185
#define _PROTECTEDARRAY_chopb   184
#define USING_chopb     183
#define NAMESPACE_chopb     182
#define CATCH_chopb     181
#define DPOI_chopb  180
#define PUBLIC_chopb    179
#define PROTECTED_chopb     178
#define PRIVATE_chopb   177
#define CHAPEGAL_chopb  176
#define VBAREGAL_chopb  175
#define ETCOEGAL_chopb  174
#define SUPESUPEEGAL_chopb  173
#define INFEINFEEGAL_chopb  172
#define TIREEGAL_chopb  171
#define PLUSEGAL_chopb  170
#define POURCEGAL_chopb     169
#define ETOIEGAL_chopb  168
#define EGAL_chopb  167
#define ASM_chopb   166
#define CFER_chopb  165
#define VA_ARG_chopb    164
#define DELETE_chopb    163
#define NEW_chopb   162
#define SIZEOF_chopb    161
#define TIRETIRE_chopb  160
#define PLUSPLUS_chopb  159
#define EXCL_chopb  158
#define PLUS_chopb  157
#define TIRE_chopb  156
#define DEFAULT_chopb   155
#define CASE_chopb  154
#define TRY_chopb   153
#define THROW_chopb     152
#define FORALLSONS_chopb    151
#define WHILE_chopb     150
#define SWITCH_chopb    149
#define RETURN_chopb    148
#define PVIR_chopb  147
#define IF_chopb    146
#define FOR_chopb   145
#define AOUV_chopb  144
#define DO_chopb    143
#define CONTINUE_chopb  142
#define BREAK_chopb     141
#define OPERATOR_chopb  140
#define TILD_chopb  139
#define ETCO_chopb  138
#define ETOI_chopb  137
#define POUV_chopb  136
#define UNSIGNED_chopb  135
#define SIGNED_chopb    134
#define SHORT_chopb     133
#define LONG_chopb  132
#define CHAR_chopb  131
#define INT_chopb   130
#define DPOIDPOI_chopb  129
#define VOID_chopb  128
#define FLOAT_chopb     127
#define DOUBLE_chopb    126
#define DECLTYPE_chopb  125
#define TYPENAME_chopb  124
#define CLASS_chopb     123
#define UNION_chopb     122
#define STRUCT_chopb    121
#define ENUM_chopb  120
#define CONSTEXPR_chopb     119
#define CONST_chopb     118
#define FRIEND_chopb    117
#define VIRTUAL_chopb   116
#define INLINE_chopb    115
#define __ASM___chopb   114
#define __ATTRIBUTE___chopb     113
#define VOLATILE_chopb  112
#define REGISTER_chopb  111
#define EXTERN_chopb    110
#define STATIC_chopb    109
#define AUTO_chopb  108
#define FUNC_SPEC_chopb     107
#define TRY_UPPER_chopb     106
#define END_CATCH_chopb     105
#define END_CATCH_ALL_chopb     104
#define AND_CATCH_chopb     103
#define CATCH_UPPER_chopb   102
#define CATCH_ALL_chopb     101
#define END_MESSAGE_MAP_chopb   100
#define BEGIN_MESSAGE_MAP_chopb     99
#define DECLARE_MESSAGE_MAP_chopb   98
#define IMPLEMENT_SERIAL_chopb  97
#define IMPLEMENT_DYNCREATE_chopb   96
#define IMPLEMENT_DYNAMIC_chopb     95
#define DECLARE_SERIAL_chopb    94
#define DECLARE_DYNAMIC_chopb   93
#define PUSH_FUNCTION_chopb     92
#define PUSH_ARGUMENT_chopb     91
#define UNDEF_CONTENT_chopb     90
#define SMALL_PRAGMA_CONTENT_chopb  89
#define PRAGMA_CONTENT_chopb    88
#define PRAGMA_ENUM_VERT_chopb  87
#define PRAGMA_SPACE_ARROW_chopb    86
#define PRAGMA_PARAMETERS_chopb     85
#define PRAGMA_PARAMETERS_UNDER_chopb   84
#define PRAGMA_FUNC_HEADER_chopb    83
#define PRAGMA_INDENT_FUNCTION_TYPE_chopb   82
#define PRAGMA_COMMENT_PLUS_chopb   81
#define PRAGMA_COMMENT_END_chopb    80
#define PRAGMA_COMMENT_MIDDLE_chopb     79
#define PRAGMA_COMMENT_START_chopb  78
#define PRAGMA_MARGIN_chopb     77
#define PRAGMA_DECL_ALIGN_chopb     76
#define PRAGMA_ASSIGN_ALIGN_chopb   75
#define PRAGMA_SINGLE_SWITCH_INDENT_chopb   74
#define PRAGMA_SIMPLIFY_chopb   73
#define PRAGMA_BRACE_ALIGN_chopb    72
#define PRAGMA_MODE_chopb   71
#define PRAGMA_RANGE_chopb  70
#define PRAGMA_TAB_chopb    69
#define PRAGMA_TAB_DIRECTIVE_chopb  68
#define PRAGMA_CONFIG_chopb     67
#define PRAGMA_NOT_MANAGED_chopb    66
#define PRAGMA_MANAGED_chopb    65
#define PRAGMA_NOPRETTY_chopb   64
#define PRAGMA_PRETTY_chopb     63
#define INCLUDE_LOCAL_chopb     62
#define INCLUDE_SYS_chopb   61
#define END_LINE_chopb  60
#define DEFINE_NAME_chopb   59
#define DEFINED_NOT_CONTINUED_chopb     58
#define DEFINED_CONTINUED_chopb     57
#define POINT_chopb     56
#define SLAS_chopb  55
#define SLASEGAL_chopb  54
#define CARRIAGE_RETURN_chopb   53
#define SHARP_VAL_chopb     52
#define LINE_REFERENCE_DIR_chopb    51
#define UNDEF_DIR_chopb     50
#define DEFINE_DIR_chopb    49
#define ERROR_DIR_chopb     48
#define PRAGMA_DIR_chopb    47
#define LINE_DIR_chopb  46
#define ENDIF_DIR_chopb     45
#define ELIF_DIR_chopb  44
#define ELSE_DIR_chopb  43
#define IF_DIR_chopb    42
#define IFNDEF_DIR_chopb    41
#define IFDEF_DIR_chopb     40
#define INCLUDE_DIR_chopb   39
#define OCTAL_chopb     38
#define UOCTAL_chopb    37
#define LOCTAL_chopb    36
#define ULOCTAL_chopb   35
#define LLOCTAL_chopb   34
#define ULLOCTAL_chopb  33
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
