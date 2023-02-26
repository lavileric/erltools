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
    
    
    static signed char * _tokenArray [173];
    static int (metachop::*(_tokenFuncArray [173])) ();
    static int _tokenNbFuncArray [173];

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

extern metachop * parser_metachop;

#endif
#define NODE_LIST_metachop  393
#define NODE_TREE_metachop  392
#define SPACE_metachop  391
#define SEP_OMIT_metachop   390
#define SEP_BEFORE_metachop     389
#define SEP_AFTER_metachop  388
#define AFERAFER_metachop   387
#define ALINEA_metachop     386
#define CHOP_DEF_metachop   385
#define NIL_metachop    384
#define IN_LANG_metachop    383
#define NEXT_metachop   382
#define DEF_IDENT_metachop  381
#define BOX_metachop    380
#define EXPO_metachop   379
#define EXPO_AFF_metachop   378
#define ETOIETOIEGAL_metachop   377
#define IN_metachop     376
#define PARSE_metachop  375
#define NEXTL_metachop  374
#define VALUE_metachop  373
#define INFESUPE_metachop   372
#define FOREACH_metachop    371
#define INFESEPOSUPE_metachop   370
#define INFESEPBSUPE_metachop   369
#define INFESEPASUPE_metachop   368
#define AOUVAOUV_metachop   367
#define ARRO_metachop   366
#define NL_BEG_metachop     365
#define TAB_BEG_metachop    364
#define SPACE_BEG_metachop  363
#define MAKETREE_SUP_metachop   362
#define MAKETREE_INF_metachop   361
#define PARSE_ELEM_metachop     360
#define SIMP_ETOI_metachop  359
#define ETOI_ETOI_metachop  358
#define TUNSIGNED_metachop  357
#define BDECR_metachop  356
#define BINCR_metachop  355
#define ADDR_metachop   354
#define NOT_metachop    353
#define LNEG_metachop   352
#define POS_metachop    351
#define NEG_metachop    350
#define PARAM_TYPE_metachop     349
#define STRING_LIST_metachop    348
#define LABEL_metachop  347
#define THROW_ANSI_metachop     346
#define ELSE_metachop   345
#define DECL_TYPE_metachop  344
#define TIDENT_metachop     343
#define TSIGNED_metachop    342
#define TSHORT_metachop     341
#define TCHAR_metachop  340
#define TINT_metachop   339
#define RSHI_metachop   338
#define LSHI_metachop   337
#define LT_metachop     336
#define GT_metachop     335
#define GEQU_metachop   334
#define LEQU_metachop   333
#define SPACE_ARROW_metachop    332
#define TAB_DIRECTIVE_metachop  331
#define ENUM_PARAMETERS_UNDER_metachop  330
#define ENUM_VERT_VALUE_metachop    329
#define PROTECT_MEMB_metachop   328
#define LANGUAGE_metachop   327
#define EXP_metachop    326
#define ADECR_metachop  325
#define AINCR_metachop  324
#define ARROW_metachop  323
#define REF_metachop    322
#define EXP_BRA_metachop    321
#define EXP_LIST_metachop   320
#define ARROW_MEMB_metachop     319
#define DOT_MEMB_metachop   318
#define POINETOI_metachop   317
#define TIRESUPEETOI_metachop   316
#define TIRESUPE_metachop   315
#define SUPESUPE_metachop   314
#define INFEINFE_metachop   313
#define SUPEEGAL_metachop   312
#define INFEEGAL_metachop   311
#define NONE_metachop   310
#define NEW_DECLARATOR_metachop     309
#define USING_NAMESPACE_metachop    308
#define NAMESPACE_ALIAS_metachop    307
#define REM_metachop    306
#define DIV_metachop    305
#define MUL_metachop    304
#define POURC_metachop  303
#define MESSAGE_MAP_metachop    302
#define MACRO_metachop  301
#define TDOUBLE_metachop    300
#define TFLOAT_metachop     299
#define TLONG_metachop  298
#define OR_metachop     297
#define VBARVBAR_metachop   296
#define AND_metachop    295
#define ETCOETCO_metachop   294
#define COMPOUND_EXT_metachop   293
#define EXTERNAL_metachop   292
#define INLINE_NAMESPACE_metachop   291
#define INITIALIZER_metachop    290
#define LOR_metachop    289
#define VBAR_metachop   288
#define DELETE_FUNCTION_metachop    287
#define FUNC_metachop   286
#define ALL_OF_metachop     285
#define EXTENSION_metachop  284
#define __EXTENSION___metachop  283
#define STAT_VOID_metachop  282
#define TYPEDEF_metachop    281
#define TEMPLATE_DECL_metachop  280
#define SUPE_metachop   279
#define CLASS_PARAM_metachop    278
#define TEMPLATE_metachop   277
#define EXP_SEQ_metachop    276
#define LXOR_metachop   275
#define CHAP_metachop   274
#define EXCEPTION_LIST_metachop     273
#define EXCEPTION_ANSI_metachop     272
#define EXCEPTION_metachop  271
#define NEQU_metachop   270
#define EQU_metachop    269
#define EXCLEGAL_metachop   268
#define EGALEGAL_metachop   267
#define ENUM_CLASS_metachop     266
#define PRAGMA_metachop     265
#define PARAMETERS_metachop     264
#define FUNC_HEADER_metachop    263
#define INDENT_FUNCTION_TYPE_metachop   262
#define COMMENT_PLUS_metachop   261
#define COMMENT_END_metachop    260
#define COMMENT_MIDDLE_metachop     259
#define COMMENT_START_metachop  258
#define MARGIN_VALUE_metachop   257
#define BRACE_ALIGN_VALUE_metachop  256
#define DECL_ALIGN_metachop     255
#define ASSIGN_ALIGN_metachop   254
#define SINGLE_SWITCH_INDENT_VALUE_metachop     253
#define SIMPLIFY_VALUE_metachop     252
#define SIMPLIFY_metachop   251
#define MODE_VALUE_metachop     250
#define TAB_VALUE_metachop  249
#define CONFIG_metachop     248
#define NOT_MANAGED_metachop    247
#define NO_PRETTY_metachop  246
#define ALINE_metachop  245
#define ERROR_metachop  244
#define UNDEF_metachop  243
#define TYP_AFF_BRA_metachop    242
#define TYP_AFF_CALL_metachop   241
#define MEMBER_DECLARATOR_metachop  240
#define TYP_ARRAY_metachop  239
#define COUV_metachop   238
#define FOR_DECLARATION_metachop    237
#define DECLARATION_metachop    236
#define CTOR_INITIALIZER_metachop   235
#define BRACE_MARKER_metachop   234
#define CTOR_INIT_metachop  233
#define LONGLONG_metachop   232
#define IUNLONGLONG_metachop    231
#define IUNLONG_metachop    230
#define IUN_metachop    229
#define ILONGLONG_metachop  228
#define ILONG_metachop  227
#define RANGE_MODIFIER_metachop     226
#define COND_AFF_metachop   225
#define INTE_metachop   224
#define COMPOUND_metachop   223
#define CLASS_DECL_metachop     222
#define AFER_metachop   221
#define CATCH_ANSI_metachop     220
#define EXCEPT_ANSI_ALL_metachop    219
#define CAST_metachop   218
#define TYP_BIT_metachop    217
#define PROTECT_metachop    216
#define BASE_LIST_metachop  215
#define ATTRIBUTE_CALL_metachop     214
#define XOR_AFF_metachop    213
#define OR_AFF_metachop     212
#define AND_AFF_metachop    211
#define RSH_AFF_metachop    210
#define LSH_AFF_metachop    209
#define MIN_AFF_metachop    208
#define PLU_AFF_metachop    207
#define REM_AFF_metachop    206
#define DIV_AFF_metachop    205
#define MUL_AFF_metachop    204
#define AFF_metachop    203
#define ASM_CALL_metachop   202
#define EXP_ARRAY_metachop  201
#define VAR_LIST_metachop   200
#define TYP_LIST_metachop   199
#define TYP_AFF_metachop    198
#define ABST_DECLARATOR_metachop    197
#define DECLARATOR_metachop     196
#define POINPOINPOIN_metachop   195
#define LAND_metachop   194
#define INIT_NEW_metachop   193
#define VIRG_metachop   192
#define QUALIFIED_metachop  191
#define MINUS_metachop  190
#define TYP_metachop    189
#define PFER_metachop   188
#define DESTRUCT_metachop   187
#define TYP_REF_metachop    186
#define TYP_ADDR_metachop   185
#define INFE_metachop   184
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
#define POUV_metachop   155
#define DEFAULT_metachop    154
#define CASE_metachop   153
#define TRY_metachop    152
#define THROW_metachop  151
#define FORALLSONS_metachop     150
#define WHILE_metachop  149
#define SWITCH_metachop     148
#define RETURN_metachop     147
#define PVIR_metachop   146
#define IF_metachop     145
#define FOR_metachop    144
#define AOUV_metachop   143
#define DO_metachop     142
#define CONTINUE_metachop   141
#define BREAK_metachop  140
#define OPERATOR_metachop   139
#define TILD_metachop   138
#define ETCO_metachop   137
#define ETOI_metachop   136
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
