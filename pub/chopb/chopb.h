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
    static signed char * _tokenArray [170];
    static int (chopb::*(_tokenFuncArray [170])) ();
    static int _tokenNbFuncArray [170];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     393 ,
        NODE_TREE =     392 ,
        SPACE =     391 ,
        SEP_OMIT =  390 ,
        SEP_BEFORE =    389 ,
        SEP_AFTER =     388 ,
        AFERAFER =  387 ,
        ALINEA =    386 ,
        CHOP_DEF =  385 ,
        NIL =   384 ,
        IN_LANG =   383 ,
        NEXT =  382 ,
        DEF_IDENT =     381 ,
        BOX =   380 ,
        EXPO =  379 ,
        EXPO_AFF =  378 ,
        ETOIETOIEGAL =  377 ,
        IN =    376 ,
        PARSE =     375 ,
        NEXTL =     374 ,
        VALUE =     373 ,
        INFESUPE =  372 ,
        FOREACH =   371 ,
        INFESEPOSUPE =  370 ,
        INFESEPBSUPE =  369 ,
        INFESEPASUPE =  368 ,
        AOUVAOUV =  367 ,
        ARRO =  366 ,
        NL_BEG =    365 ,
        TAB_BEG =   364 ,
        SPACE_BEG =     363 ,
        MAKETREE_SUP =  362 ,
        MAKETREE_INF =  361 ,
        PARSE_ELEM =    360 ,
        SIMP_ETOI =     359 ,
        ETOI_ETOI =     358 ,
        TUNSIGNED =     357 ,
        BDECR =     356 ,
        BINCR =     355 ,
        ADDR =  354 ,
        NOT =   353 ,
        LNEG =  352 ,
        POS =   351 ,
        NEG =   350 ,
        PARAM_TYPE =    349 ,
        STRING_LIST =   348 ,
        LABEL =     347 ,
        THROW_ANSI =    346 ,
        ELSE =  345 ,
        DECL_TYPE =     344 ,
        TIDENT =    343 ,
        TSIGNED =   342 ,
        TSHORT =    341 ,
        TCHAR =     340 ,
        TINT =  339 ,
        RSHI =  338 ,
        LSHI =  337 ,
        LT =    336 ,
        GT =    335 ,
        GEQU =  334 ,
        LEQU =  333 ,
        SPACE_ARROW =   332 ,
        TAB_DIRECTIVE =     331 ,
        ENUM_PARAMETERS_UNDER =     330 ,
        ENUM_VERT_VALUE =   329 ,
        PROTECT_MEMB =  328 ,
        LANGUAGE =  327 ,
        EXP =   326 ,
        ADECR =     325 ,
        AINCR =     324 ,
        ARROW =     323 ,
        REF =   322 ,
        EXP_BRA =   321 ,
        EXP_LIST =  320 ,
        ARROW_MEMB =    319 ,
        DOT_MEMB =  318 ,
        POINETOI =  317 ,
        TIRESUPEETOI =  316 ,
        TIRESUPE =  315 ,
        SUPESUPE =  314 ,
        INFEINFE =  313 ,
        SUPEEGAL =  312 ,
        INFEEGAL =  311 ,
        NONE =  310 ,
        NEW_DECLARATOR =    309 ,
        USING_NAMESPACE =   308 ,
        NAMESPACE_ALIAS =   307 ,
        REM =   306 ,
        DIV =   305 ,
        MUL =   304 ,
        POURC =     303 ,
        MESSAGE_MAP =   302 ,
        MACRO =     301 ,
        TDOUBLE =   300 ,
        TFLOAT =    299 ,
        TLONG =     298 ,
        OR =    297 ,
        VBARVBAR =  296 ,
        AND =   295 ,
        ETCOETCO =  294 ,
        COMPOUND_EXT =  293 ,
        EXTERNAL =  292 ,
        INLINE_NAMESPACE =  291 ,
        INITIALIZER =   290 ,
        LOR =   289 ,
        VBAR =  288 ,
        DELETE_FUNCTION =   287 ,
        FUNC =  286 ,
        ALL_OF =    285 ,
        EXTENSION =     284 ,
        __EXTENSION__ =     283 ,
        STAT_VOID =     282 ,
        TYPEDEF =   281 ,
        TEMPLATE_DECL =     280 ,
        SUPE =  279 ,
        CLASS_PARAM =   278 ,
        TEMPLATE =  277 ,
        EXP_SEQ =   276 ,
        LXOR =  275 ,
        CHAP =  274 ,
        EXCEPTION_LIST =    273 ,
        EXCEPTION_ANSI =    272 ,
        EXCEPTION =     271 ,
        NEQU =  270 ,
        EQU =   269 ,
        EXCLEGAL =  268 ,
        EGALEGAL =  267 ,
        ENUM_CLASS =    266 ,
        PRAGMA =    265 ,
        PARAMETERS =    264 ,
        FUNC_HEADER =   263 ,
        INDENT_FUNCTION_TYPE =  262 ,
        COMMENT_PLUS =  261 ,
        COMMENT_END =   260 ,
        COMMENT_MIDDLE =    259 ,
        COMMENT_START =     258 ,
        MARGIN_VALUE =  257 ,
        BRACE_ALIGN_VALUE =     256 ,
        DECL_ALIGN =    255 ,
        ASSIGN_ALIGN =  254 ,
        SINGLE_SWITCH_INDENT_VALUE =    253 ,
        SIMPLIFY_VALUE =    252 ,
        SIMPLIFY =  251 ,
        MODE_VALUE =    250 ,
        TAB_VALUE =     249 ,
        CONFIG =    248 ,
        NOT_MANAGED =   247 ,
        NO_PRETTY =     246 ,
        ALINE =     245 ,
        ERROR =     244 ,
        UNDEF =     243 ,
        TYP_AFF_BRA =   242 ,
        TYP_AFF_CALL =  241 ,
        MEMBER_DECLARATOR =     240 ,
        TYP_ARRAY =     239 ,
        COUV =  238 ,
        FOR_DECLARATION =   237 ,
        DECLARATION =   236 ,
        CTOR_INITIALIZER =  235 ,
        BRACE_MARKER =  234 ,
        CTOR_INIT =     233 ,
        LONGLONG =  232 ,
        IUNLONGLONG =   231 ,
        IUNLONG =   230 ,
        IUN =   229 ,
        ILONGLONG =     228 ,
        ILONG =     227 ,
        RANGE_MODIFIER =    226 ,
        COND_AFF =  225 ,
        INTE =  224 ,
        COMPOUND =  223 ,
        CLASS_DECL =    222 ,
        AFER =  221 ,
        CATCH_ANSI =    220 ,
        EXCEPT_ANSI_ALL =   219 ,
        CAST =  218 ,
        TYP_BIT =   217 ,
        PROTECT =   216 ,
        BASE_LIST =     215 ,
        ATTRIBUTE_CALL =    214 ,
        XOR_AFF =   213 ,
        OR_AFF =    212 ,
        AND_AFF =   211 ,
        RSH_AFF =   210 ,
        LSH_AFF =   209 ,
        MIN_AFF =   208 ,
        PLU_AFF =   207 ,
        REM_AFF =   206 ,
        DIV_AFF =   205 ,
        MUL_AFF =   204 ,
        AFF =   203 ,
        ASM_CALL =  202 ,
        EXP_ARRAY =     201 ,
        VAR_LIST =  200 ,
        TYP_LIST =  199 ,
        TYP_AFF =   198 ,
        ABST_DECLARATOR =   197 ,
        DECLARATOR =    196 ,
        POINPOINPOIN =  195 ,
        LAND =  194 ,
        INIT_NEW =  193 ,
        VIRG =  192 ,
        QUALIFIED =     191 ,
        MINUS =     190 ,
        TYP =   189 ,
        PFER =  188 ,
        DESTRUCT =  187 ,
        TYP_REF =   186 ,
        TYP_ADDR =  185 ,
        INFE =  184 ,
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
        POUV =  155 ,
        DEFAULT =   154 ,
        CASE =  153 ,
        TRY =   152 ,
        THROW =     151 ,
        FORALLSONS =    150 ,
        WHILE =     149 ,
        SWITCH =    148 ,
        RETURN =    147 ,
        PVIR =  146 ,
        IF =    145 ,
        FOR =   144 ,
        AOUV =  143 ,
        DO =    142 ,
        CONTINUE =  141 ,
        BREAK =     140 ,
        OPERATOR =  139 ,
        TILD =  138 ,
        ETCO =  137 ,
        ETOI =  136 ,
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
#define NODE_LIST_chopb     393
#define NODE_TREE_chopb     392
#define SPACE_chopb     391
#define SEP_OMIT_chopb  390
#define SEP_BEFORE_chopb    389
#define SEP_AFTER_chopb     388
#define AFERAFER_chopb  387
#define ALINEA_chopb    386
#define CHOP_DEF_chopb  385
#define NIL_chopb   384
#define IN_LANG_chopb   383
#define NEXT_chopb  382
#define DEF_IDENT_chopb     381
#define BOX_chopb   380
#define EXPO_chopb  379
#define EXPO_AFF_chopb  378
#define ETOIETOIEGAL_chopb  377
#define IN_chopb    376
#define PARSE_chopb     375
#define NEXTL_chopb     374
#define VALUE_chopb     373
#define INFESUPE_chopb  372
#define FOREACH_chopb   371
#define INFESEPOSUPE_chopb  370
#define INFESEPBSUPE_chopb  369
#define INFESEPASUPE_chopb  368
#define AOUVAOUV_chopb  367
#define ARRO_chopb  366
#define NL_BEG_chopb    365
#define TAB_BEG_chopb   364
#define SPACE_BEG_chopb     363
#define MAKETREE_SUP_chopb  362
#define MAKETREE_INF_chopb  361
#define PARSE_ELEM_chopb    360
#define SIMP_ETOI_chopb     359
#define ETOI_ETOI_chopb     358
#define TUNSIGNED_chopb     357
#define BDECR_chopb     356
#define BINCR_chopb     355
#define ADDR_chopb  354
#define NOT_chopb   353
#define LNEG_chopb  352
#define POS_chopb   351
#define NEG_chopb   350
#define PARAM_TYPE_chopb    349
#define STRING_LIST_chopb   348
#define LABEL_chopb     347
#define THROW_ANSI_chopb    346
#define ELSE_chopb  345
#define DECL_TYPE_chopb     344
#define TIDENT_chopb    343
#define TSIGNED_chopb   342
#define TSHORT_chopb    341
#define TCHAR_chopb     340
#define TINT_chopb  339
#define RSHI_chopb  338
#define LSHI_chopb  337
#define LT_chopb    336
#define GT_chopb    335
#define GEQU_chopb  334
#define LEQU_chopb  333
#define SPACE_ARROW_chopb   332
#define TAB_DIRECTIVE_chopb     331
#define ENUM_PARAMETERS_UNDER_chopb     330
#define ENUM_VERT_VALUE_chopb   329
#define PROTECT_MEMB_chopb  328
#define LANGUAGE_chopb  327
#define EXP_chopb   326
#define ADECR_chopb     325
#define AINCR_chopb     324
#define ARROW_chopb     323
#define REF_chopb   322
#define EXP_BRA_chopb   321
#define EXP_LIST_chopb  320
#define ARROW_MEMB_chopb    319
#define DOT_MEMB_chopb  318
#define POINETOI_chopb  317
#define TIRESUPEETOI_chopb  316
#define TIRESUPE_chopb  315
#define SUPESUPE_chopb  314
#define INFEINFE_chopb  313
#define SUPEEGAL_chopb  312
#define INFEEGAL_chopb  311
#define NONE_chopb  310
#define NEW_DECLARATOR_chopb    309
#define USING_NAMESPACE_chopb   308
#define NAMESPACE_ALIAS_chopb   307
#define REM_chopb   306
#define DIV_chopb   305
#define MUL_chopb   304
#define POURC_chopb     303
#define MESSAGE_MAP_chopb   302
#define MACRO_chopb     301
#define TDOUBLE_chopb   300
#define TFLOAT_chopb    299
#define TLONG_chopb     298
#define OR_chopb    297
#define VBARVBAR_chopb  296
#define AND_chopb   295
#define ETCOETCO_chopb  294
#define COMPOUND_EXT_chopb  293
#define EXTERNAL_chopb  292
#define INLINE_NAMESPACE_chopb  291
#define INITIALIZER_chopb   290
#define LOR_chopb   289
#define VBAR_chopb  288
#define DELETE_FUNCTION_chopb   287
#define FUNC_chopb  286
#define ALL_OF_chopb    285
#define EXTENSION_chopb     284
#define __EXTENSION___chopb     283
#define STAT_VOID_chopb     282
#define TYPEDEF_chopb   281
#define TEMPLATE_DECL_chopb     280
#define SUPE_chopb  279
#define CLASS_PARAM_chopb   278
#define TEMPLATE_chopb  277
#define EXP_SEQ_chopb   276
#define LXOR_chopb  275
#define CHAP_chopb  274
#define EXCEPTION_LIST_chopb    273
#define EXCEPTION_ANSI_chopb    272
#define EXCEPTION_chopb     271
#define NEQU_chopb  270
#define EQU_chopb   269
#define EXCLEGAL_chopb  268
#define EGALEGAL_chopb  267
#define ENUM_CLASS_chopb    266
#define PRAGMA_chopb    265
#define PARAMETERS_chopb    264
#define FUNC_HEADER_chopb   263
#define INDENT_FUNCTION_TYPE_chopb  262
#define COMMENT_PLUS_chopb  261
#define COMMENT_END_chopb   260
#define COMMENT_MIDDLE_chopb    259
#define COMMENT_START_chopb     258
#define MARGIN_VALUE_chopb  257
#define BRACE_ALIGN_VALUE_chopb     256
#define DECL_ALIGN_chopb    255
#define ASSIGN_ALIGN_chopb  254
#define SINGLE_SWITCH_INDENT_VALUE_chopb    253
#define SIMPLIFY_VALUE_chopb    252
#define SIMPLIFY_chopb  251
#define MODE_VALUE_chopb    250
#define TAB_VALUE_chopb     249
#define CONFIG_chopb    248
#define NOT_MANAGED_chopb   247
#define NO_PRETTY_chopb     246
#define ALINE_chopb     245
#define ERROR_chopb     244
#define UNDEF_chopb     243
#define TYP_AFF_BRA_chopb   242
#define TYP_AFF_CALL_chopb  241
#define MEMBER_DECLARATOR_chopb     240
#define TYP_ARRAY_chopb     239
#define COUV_chopb  238
#define FOR_DECLARATION_chopb   237
#define DECLARATION_chopb   236
#define CTOR_INITIALIZER_chopb  235
#define BRACE_MARKER_chopb  234
#define CTOR_INIT_chopb     233
#define LONGLONG_chopb  232
#define IUNLONGLONG_chopb   231
#define IUNLONG_chopb   230
#define IUN_chopb   229
#define ILONGLONG_chopb     228
#define ILONG_chopb     227
#define RANGE_MODIFIER_chopb    226
#define COND_AFF_chopb  225
#define INTE_chopb  224
#define COMPOUND_chopb  223
#define CLASS_DECL_chopb    222
#define AFER_chopb  221
#define CATCH_ANSI_chopb    220
#define EXCEPT_ANSI_ALL_chopb   219
#define CAST_chopb  218
#define TYP_BIT_chopb   217
#define PROTECT_chopb   216
#define BASE_LIST_chopb     215
#define ATTRIBUTE_CALL_chopb    214
#define XOR_AFF_chopb   213
#define OR_AFF_chopb    212
#define AND_AFF_chopb   211
#define RSH_AFF_chopb   210
#define LSH_AFF_chopb   209
#define MIN_AFF_chopb   208
#define PLU_AFF_chopb   207
#define REM_AFF_chopb   206
#define DIV_AFF_chopb   205
#define MUL_AFF_chopb   204
#define AFF_chopb   203
#define ASM_CALL_chopb  202
#define EXP_ARRAY_chopb     201
#define VAR_LIST_chopb  200
#define TYP_LIST_chopb  199
#define TYP_AFF_chopb   198
#define ABST_DECLARATOR_chopb   197
#define DECLARATOR_chopb    196
#define POINPOINPOIN_chopb  195
#define LAND_chopb  194
#define INIT_NEW_chopb  193
#define VIRG_chopb  192
#define QUALIFIED_chopb     191
#define MINUS_chopb     190
#define TYP_chopb   189
#define PFER_chopb  188
#define DESTRUCT_chopb  187
#define TYP_REF_chopb   186
#define TYP_ADDR_chopb  185
#define INFE_chopb  184
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
#define POUV_chopb  155
#define DEFAULT_chopb   154
#define CASE_chopb  153
#define TRY_chopb   152
#define THROW_chopb     151
#define FORALLSONS_chopb    150
#define WHILE_chopb     149
#define SWITCH_chopb    148
#define RETURN_chopb    147
#define PVIR_chopb  146
#define IF_chopb    145
#define FOR_chopb   144
#define AOUV_chopb  143
#define DO_chopb    142
#define CONTINUE_chopb  141
#define BREAK_chopb     140
#define OPERATOR_chopb  139
#define TILD_chopb  138
#define ETCO_chopb  137
#define ETOI_chopb  136
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
