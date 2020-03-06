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
    
    metachop () {
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
    
    
    static signed char * _tokenArray [168];
    static int (metachop::*(_tokenFuncArray [168])) ();
    static int _tokenNbFuncArray [168];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     392 ,
        NODE_TREE =     391 ,
        SPACE =     390 ,
        SEP_OMIT =  389 ,
        SEP_BEFORE =    388 ,
        SEP_AFTER =     387 ,
        AFERAFER =  386 ,
        ALINEA =    385 ,
        CHOP_DEF =  384 ,
        NIL =   383 ,
        IN_LANG =   382 ,
        NEXT =  381 ,
        DEF_IDENT =     380 ,
        BOX =   379 ,
        EXPO =  378 ,
        EXPO_AFF =  377 ,
        ETOIETOIEGAL =  376 ,
        IN =    375 ,
        PARSE =     374 ,
        NEXTL =     373 ,
        VALUE =     372 ,
        INFESUPE =  371 ,
        FOREACH =   370 ,
        INFESEPOSUPE =  369 ,
        INFESEPBSUPE =  368 ,
        INFESEPASUPE =  367 ,
        AOUVAOUV =  366 ,
        ARRO =  365 ,
        NL_BEG =    364 ,
        TAB_BEG =   363 ,
        SPACE_BEG =     362 ,
        MAKETREE_SUP =  361 ,
        MAKETREE_INF =  360 ,
        PARSE_ELEM =    359 ,
        SIMP_ETOI =     358 ,
        ETOI_ETOI =     357 ,
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
        TUNSIGNED =     344 ,
        TSIGNED =   343 ,
        TFLOAT =    342 ,
        TDOUBLE =   341 ,
        DECL_TYPE =     340 ,
        TIDENT =    339 ,
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
        EXP_ARRAY =     321 ,
        EXP_BRA =   320 ,
        EXP_LIST =  319 ,
        ARROW_MEMB =    318 ,
        DOT_MEMB =  317 ,
        POINETOI =  316 ,
        TIRESUPEETOI =  315 ,
        TIRESUPE =  314 ,
        SUPESUPE =  313 ,
        INFEINFE =  312 ,
        SUPEEGAL =  311 ,
        INFEEGAL =  310 ,
        NONE =  309 ,
        NEW_DECLARATOR =    308 ,
        USING_NAMESPACE =   307 ,
        NAMESPACE_ALIAS =   306 ,
        REM =   305 ,
        DIV =   304 ,
        MUL =   303 ,
        POURC =     302 ,
        MESSAGE_MAP =   301 ,
        MACRO =     300 ,
        TCHAR =     299 ,
        TSHORT =    298 ,
        TLONG =     297 ,
        TINT =  296 ,
        OR =    295 ,
        VBARVBAR =  294 ,
        AND =   293 ,
        ETCOETCO =  292 ,
        COMPOUND_EXT =  291 ,
        EXTERNAL =  290 ,
        INLINE_NAMESPACE =  289 ,
        INITIALIZER =   288 ,
        LOR =   287 ,
        VBAR =  286 ,
        DELETE_FUNCTION =   285 ,
        FUNC =  284 ,
        ALL_OF =    283 ,
        EXTENSION =     282 ,
        __EXTENSION__ =     281 ,
        STAT_VOID =     280 ,
        TYPEDEF =   279 ,
        TEMPLATE_DECL =     278 ,
        SUPE =  277 ,
        CLASS_PARAM =   276 ,
        TEMPLATE =  275 ,
        EXP_SEQ =   274 ,
        LXOR =  273 ,
        CHAP =  272 ,
        EXCEPTION_LIST =    271 ,
        EXCEPTION_ANSI =    270 ,
        EXCEPTION =     269 ,
        NEQU =  268 ,
        EQU =   267 ,
        EXCLEGAL =  266 ,
        EGALEGAL =  265 ,
        ENUM_CLASS =    264 ,
        PRAGMA =    263 ,
        PARAMETERS =    262 ,
        FUNC_HEADER =   261 ,
        INDENT_FUNCTION_TYPE =  260 ,
        COMMENT_PLUS =  259 ,
        COMMENT_END =   258 ,
        COMMENT_MIDDLE =    257 ,
        COMMENT_START =     256 ,
        MARGIN_VALUE =  255 ,
        BRACE_ALIGN_VALUE =     254 ,
        DECL_ALIGN =    253 ,
        ASSIGN_ALIGN =  252 ,
        SINGLE_SWITCH_INDENT_VALUE =    251 ,
        SIMPLIFY_VALUE =    250 ,
        SIMPLIFY =  249 ,
        MODE_VALUE =    248 ,
        TAB_VALUE =     247 ,
        CONFIG =    246 ,
        NOT_MANAGED =   245 ,
        NO_PRETTY =     244 ,
        ALINE =     243 ,
        ERROR =     242 ,
        UNDEF =     241 ,
        TYP_AFF_BRA =   240 ,
        TYP_AFF_CALL =  239 ,
        MEMBER_DECLARATOR =     238 ,
        TYP_ARRAY =     237 ,
        CFER =  236 ,
        COUV =  235 ,
        FOR_DECLARATION =   234 ,
        DECLARATION =   233 ,
        CTOR_INITIALIZER =  232 ,
        BRACE_MARKER =  231 ,
        CTOR_INIT =     230 ,
        LONGLONG =  229 ,
        IUNLONGLONG =   228 ,
        IUNLONG =   227 ,
        IUN =   226 ,
        ILONGLONG =     225 ,
        ILONG =     224 ,
        RANGE_MODIFIER =    223 ,
        COND_AFF =  222 ,
        INTE =  221 ,
        COMPOUND =  220 ,
        CLASS_DECL =    219 ,
        AFER =  218 ,
        CATCH_ANSI =    217 ,
        EXCEPT_ANSI_ALL =   216 ,
        CAST =  215 ,
        TYP_BIT =   214 ,
        PROTECT =   213 ,
        BASE_LIST =     212 ,
        ATTRIBUTE_CALL =    211 ,
        XOR_AFF =   210 ,
        OR_AFF =    209 ,
        AND_AFF =   208 ,
        RSH_AFF =   207 ,
        LSH_AFF =   206 ,
        MIN_AFF =   205 ,
        PLU_AFF =   204 ,
        REM_AFF =   203 ,
        DIV_AFF =   202 ,
        MUL_AFF =   201 ,
        AFF =   200 ,
        ASM_CALL =  199 ,
        VAR_LIST =  198 ,
        TYP_LIST =  197 ,
        TYP_AFF =   196 ,
        ABST_DECLARATOR =   195 ,
        DECLARATOR =    194 ,
        POINPOINPOIN =  193 ,
        LAND =  192 ,
        INIT_NEW =  191 ,
        VIRG =  190 ,
        QUALIFIED =     189 ,
        MINUS =     188 ,
        TYP =   187 ,
        PFER =  186 ,
        DESTRUCT =  185 ,
        TYP_REF =   184 ,
        TYP_ADDR =  183 ,
        INFE =  182 ,
        USING =     181 ,
        NAMESPACE =     180 ,
        CATCH =     179 ,
        DPOI =  178 ,
        PUBLIC =    177 ,
        PROTECTED =     176 ,
        PRIVATE =   175 ,
        CHAPEGAL =  174 ,
        VBAREGAL =  173 ,
        ETCOEGAL =  172 ,
        SUPESUPEEGAL =  171 ,
        INFEINFEEGAL =  170 ,
        TIREEGAL =  169 ,
        PLUSEGAL =  168 ,
        POURCEGAL =     167 ,
        ETOIEGAL =  166 ,
        EGAL =  165 ,
        ASM =   164 ,
        VA_ARG =    163 ,
        DELETE =    162 ,
        NEW =   161 ,
        SIZEOF =    160 ,
        TIRETIRE =  159 ,
        PLUSPLUS =  158 ,
        EXCL =  157 ,
        PLUS =  156 ,
        TIRE =  155 ,
        POUV =  154 ,
        DEFAULT =   153 ,
        CASE =  152 ,
        TRY =   151 ,
        THROW =     150 ,
        FORALLSONS =    149 ,
        WHILE =     148 ,
        SWITCH =    147 ,
        RETURN =    146 ,
        PVIR =  145 ,
        IF =    144 ,
        FOR =   143 ,
        AOUV =  142 ,
        DO =    141 ,
        CONTINUE =  140 ,
        BREAK =     139 ,
        OPERATOR =  138 ,
        TILD =  137 ,
        ETCO =  136 ,
        ETOI =  135 ,
        SHORT =     134 ,
        UNSIGNED =  133 ,
        SIGNED =    132 ,
        LONG =  131 ,
        DPOIDPOI =  130 ,
        VOID =  129 ,
        FLOAT =     128 ,
        CHAR =  127 ,
        INT =   126 ,
        DOUBLE =    125 ,
        DECLTYPE =  124 ,
        TYPENAME =  123 ,
        CLASS =     122 ,
        UNION =     121 ,
        STRUCT =    120 ,
        ENUM =  119 ,
        CONSTEXPR =     118 ,
        CONST =     117 ,
        FRIEND =    116 ,
        VIRTUAL =   115 ,
        INLINE =    114 ,
        __ASM__ =   113 ,
        __ATTRIBUTE__ =     112 ,
        VOLATILE =  111 ,
        REGISTER =  110 ,
        EXTERN =    109 ,
        STATIC =    108 ,
        AUTO =  107 ,
        FUNC_SPEC =     106 ,
        TRY_UPPER =     105 ,
        END_CATCH =     104 ,
        END_CATCH_ALL =     103 ,
        AND_CATCH =     102 ,
        CATCH_UPPER =   101 ,
        CATCH_ALL =     100 ,
        END_MESSAGE_MAP =   99 ,
        BEGIN_MESSAGE_MAP =     98 ,
        DECLARE_MESSAGE_MAP =   97 ,
        IMPLEMENT_SERIAL =  96 ,
        IMPLEMENT_DYNCREATE =   95 ,
        IMPLEMENT_DYNAMIC =     94 ,
        DECLARE_SERIAL =    93 ,
        DECLARE_DYNAMIC =   92 ,
        PUSH_FUNCTION =     91 ,
        PUSH_ARGUMENT =     90 ,
        UNDEF_CONTENT =     89 ,
        SMALL_PRAGMA_CONTENT =  88 ,
        PRAGMA_CONTENT =    87 ,
        PRAGMA_ENUM_VERT =  86 ,
        PRAGMA_SPACE_ARROW =    85 ,
        PRAGMA_PARAMETERS =     84 ,
        PRAGMA_PARAMETERS_UNDER =   83 ,
        PRAGMA_FUNC_HEADER =    82 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   81 ,
        PRAGMA_COMMENT_PLUS =   80 ,
        PRAGMA_COMMENT_END =    79 ,
        PRAGMA_COMMENT_MIDDLE =     78 ,
        PRAGMA_COMMENT_START =  77 ,
        PRAGMA_MARGIN =     76 ,
        PRAGMA_DECL_ALIGN =     75 ,
        PRAGMA_ASSIGN_ALIGN =   74 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   73 ,
        PRAGMA_SIMPLIFY =   72 ,
        PRAGMA_BRACE_ALIGN =    71 ,
        PRAGMA_MODE =   70 ,
        PRAGMA_RANGE =  69 ,
        PRAGMA_TAB =    68 ,
        PRAGMA_TAB_DIRECTIVE =  67 ,
        PRAGMA_CONFIG =     66 ,
        PRAGMA_NOT_MANAGED =    65 ,
        PRAGMA_MANAGED =    64 ,
        PRAGMA_NOPRETTY =   63 ,
        PRAGMA_PRETTY =     62 ,
        INCLUDE_LOCAL =     61 ,
        INCLUDE_SYS =   60 ,
        END_LINE =  59 ,
        DEFINE_NAME =   58 ,
        DEFINED_NOT_CONTINUED =     57 ,
        DEFINED_CONTINUED =     56 ,
        POINT =     55 ,
        SLAS =  54 ,
        SLASEGAL =  53 ,
        CARRIAGE_RETURN =   52 ,
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
        INTEGER =   26 ,
        FLOATVAL =  25 ,
        UINTEGER =  24 ,
        LINTEGER =  23 ,
        LLINTEGER =     22 ,
        ULLINTEGER =    21 ,
        ULINTEGER =     20 ,
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
#define NODE_LIST_metachop  392
#define NODE_TREE_metachop  391
#define SPACE_metachop  390
#define SEP_OMIT_metachop   389
#define SEP_BEFORE_metachop     388
#define SEP_AFTER_metachop  387
#define AFERAFER_metachop   386
#define ALINEA_metachop     385
#define CHOP_DEF_metachop   384
#define NIL_metachop    383
#define IN_LANG_metachop    382
#define NEXT_metachop   381
#define DEF_IDENT_metachop  380
#define BOX_metachop    379
#define EXPO_metachop   378
#define EXPO_AFF_metachop   377
#define ETOIETOIEGAL_metachop   376
#define IN_metachop     375
#define PARSE_metachop  374
#define NEXTL_metachop  373
#define VALUE_metachop  372
#define INFESUPE_metachop   371
#define FOREACH_metachop    370
#define INFESEPOSUPE_metachop   369
#define INFESEPBSUPE_metachop   368
#define INFESEPASUPE_metachop   367
#define AOUVAOUV_metachop   366
#define ARRO_metachop   365
#define NL_BEG_metachop     364
#define TAB_BEG_metachop    363
#define SPACE_BEG_metachop  362
#define MAKETREE_SUP_metachop   361
#define MAKETREE_INF_metachop   360
#define PARSE_ELEM_metachop     359
#define SIMP_ETOI_metachop  358
#define ETOI_ETOI_metachop  357
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
#define TUNSIGNED_metachop  344
#define TSIGNED_metachop    343
#define TFLOAT_metachop     342
#define TDOUBLE_metachop    341
#define DECL_TYPE_metachop  340
#define TIDENT_metachop     339
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
#define EXP_ARRAY_metachop  321
#define EXP_BRA_metachop    320
#define EXP_LIST_metachop   319
#define ARROW_MEMB_metachop     318
#define DOT_MEMB_metachop   317
#define POINETOI_metachop   316
#define TIRESUPEETOI_metachop   315
#define TIRESUPE_metachop   314
#define SUPESUPE_metachop   313
#define INFEINFE_metachop   312
#define SUPEEGAL_metachop   311
#define INFEEGAL_metachop   310
#define NONE_metachop   309
#define NEW_DECLARATOR_metachop     308
#define USING_NAMESPACE_metachop    307
#define NAMESPACE_ALIAS_metachop    306
#define REM_metachop    305
#define DIV_metachop    304
#define MUL_metachop    303
#define POURC_metachop  302
#define MESSAGE_MAP_metachop    301
#define MACRO_metachop  300
#define TCHAR_metachop  299
#define TSHORT_metachop     298
#define TLONG_metachop  297
#define TINT_metachop   296
#define OR_metachop     295
#define VBARVBAR_metachop   294
#define AND_metachop    293
#define ETCOETCO_metachop   292
#define COMPOUND_EXT_metachop   291
#define EXTERNAL_metachop   290
#define INLINE_NAMESPACE_metachop   289
#define INITIALIZER_metachop    288
#define LOR_metachop    287
#define VBAR_metachop   286
#define DELETE_FUNCTION_metachop    285
#define FUNC_metachop   284
#define ALL_OF_metachop     283
#define EXTENSION_metachop  282
#define __EXTENSION___metachop  281
#define STAT_VOID_metachop  280
#define TYPEDEF_metachop    279
#define TEMPLATE_DECL_metachop  278
#define SUPE_metachop   277
#define CLASS_PARAM_metachop    276
#define TEMPLATE_metachop   275
#define EXP_SEQ_metachop    274
#define LXOR_metachop   273
#define CHAP_metachop   272
#define EXCEPTION_LIST_metachop     271
#define EXCEPTION_ANSI_metachop     270
#define EXCEPTION_metachop  269
#define NEQU_metachop   268
#define EQU_metachop    267
#define EXCLEGAL_metachop   266
#define EGALEGAL_metachop   265
#define ENUM_CLASS_metachop     264
#define PRAGMA_metachop     263
#define PARAMETERS_metachop     262
#define FUNC_HEADER_metachop    261
#define INDENT_FUNCTION_TYPE_metachop   260
#define COMMENT_PLUS_metachop   259
#define COMMENT_END_metachop    258
#define COMMENT_MIDDLE_metachop     257
#define COMMENT_START_metachop  256
#define MARGIN_VALUE_metachop   255
#define BRACE_ALIGN_VALUE_metachop  254
#define DECL_ALIGN_metachop     253
#define ASSIGN_ALIGN_metachop   252
#define SINGLE_SWITCH_INDENT_VALUE_metachop     251
#define SIMPLIFY_VALUE_metachop     250
#define SIMPLIFY_metachop   249
#define MODE_VALUE_metachop     248
#define TAB_VALUE_metachop  247
#define CONFIG_metachop     246
#define NOT_MANAGED_metachop    245
#define NO_PRETTY_metachop  244
#define ALINE_metachop  243
#define ERROR_metachop  242
#define UNDEF_metachop  241
#define TYP_AFF_BRA_metachop    240
#define TYP_AFF_CALL_metachop   239
#define MEMBER_DECLARATOR_metachop  238
#define TYP_ARRAY_metachop  237
#define CFER_metachop   236
#define COUV_metachop   235
#define FOR_DECLARATION_metachop    234
#define DECLARATION_metachop    233
#define CTOR_INITIALIZER_metachop   232
#define BRACE_MARKER_metachop   231
#define CTOR_INIT_metachop  230
#define LONGLONG_metachop   229
#define IUNLONGLONG_metachop    228
#define IUNLONG_metachop    227
#define IUN_metachop    226
#define ILONGLONG_metachop  225
#define ILONG_metachop  224
#define RANGE_MODIFIER_metachop     223
#define COND_AFF_metachop   222
#define INTE_metachop   221
#define COMPOUND_metachop   220
#define CLASS_DECL_metachop     219
#define AFER_metachop   218
#define CATCH_ANSI_metachop     217
#define EXCEPT_ANSI_ALL_metachop    216
#define CAST_metachop   215
#define TYP_BIT_metachop    214
#define PROTECT_metachop    213
#define BASE_LIST_metachop  212
#define ATTRIBUTE_CALL_metachop     211
#define XOR_AFF_metachop    210
#define OR_AFF_metachop     209
#define AND_AFF_metachop    208
#define RSH_AFF_metachop    207
#define LSH_AFF_metachop    206
#define MIN_AFF_metachop    205
#define PLU_AFF_metachop    204
#define REM_AFF_metachop    203
#define DIV_AFF_metachop    202
#define MUL_AFF_metachop    201
#define AFF_metachop    200
#define ASM_CALL_metachop   199
#define VAR_LIST_metachop   198
#define TYP_LIST_metachop   197
#define TYP_AFF_metachop    196
#define ABST_DECLARATOR_metachop    195
#define DECLARATOR_metachop     194
#define POINPOINPOIN_metachop   193
#define LAND_metachop   192
#define INIT_NEW_metachop   191
#define VIRG_metachop   190
#define QUALIFIED_metachop  189
#define MINUS_metachop  188
#define TYP_metachop    187
#define PFER_metachop   186
#define DESTRUCT_metachop   185
#define TYP_REF_metachop    184
#define TYP_ADDR_metachop   183
#define INFE_metachop   182
#define USING_metachop  181
#define NAMESPACE_metachop  180
#define CATCH_metachop  179
#define DPOI_metachop   178
#define PUBLIC_metachop     177
#define PROTECTED_metachop  176
#define PRIVATE_metachop    175
#define CHAPEGAL_metachop   174
#define VBAREGAL_metachop   173
#define ETCOEGAL_metachop   172
#define SUPESUPEEGAL_metachop   171
#define INFEINFEEGAL_metachop   170
#define TIREEGAL_metachop   169
#define PLUSEGAL_metachop   168
#define POURCEGAL_metachop  167
#define ETOIEGAL_metachop   166
#define EGAL_metachop   165
#define ASM_metachop    164
#define VA_ARG_metachop     163
#define DELETE_metachop     162
#define NEW_metachop    161
#define SIZEOF_metachop     160
#define TIRETIRE_metachop   159
#define PLUSPLUS_metachop   158
#define EXCL_metachop   157
#define PLUS_metachop   156
#define TIRE_metachop   155
#define POUV_metachop   154
#define DEFAULT_metachop    153
#define CASE_metachop   152
#define TRY_metachop    151
#define THROW_metachop  150
#define FORALLSONS_metachop     149
#define WHILE_metachop  148
#define SWITCH_metachop     147
#define RETURN_metachop     146
#define PVIR_metachop   145
#define IF_metachop     144
#define FOR_metachop    143
#define AOUV_metachop   142
#define DO_metachop     141
#define CONTINUE_metachop   140
#define BREAK_metachop  139
#define OPERATOR_metachop   138
#define TILD_metachop   137
#define ETCO_metachop   136
#define ETOI_metachop   135
#define SHORT_metachop  134
#define UNSIGNED_metachop   133
#define SIGNED_metachop     132
#define LONG_metachop   131
#define DPOIDPOI_metachop   130
#define VOID_metachop   129
#define FLOAT_metachop  128
#define CHAR_metachop   127
#define INT_metachop    126
#define DOUBLE_metachop     125
#define DECLTYPE_metachop   124
#define TYPENAME_metachop   123
#define CLASS_metachop  122
#define UNION_metachop  121
#define STRUCT_metachop     120
#define ENUM_metachop   119
#define CONSTEXPR_metachop  118
#define CONST_metachop  117
#define FRIEND_metachop     116
#define VIRTUAL_metachop    115
#define INLINE_metachop     114
#define __ASM___metachop    113
#define __ATTRIBUTE___metachop  112
#define VOLATILE_metachop   111
#define REGISTER_metachop   110
#define EXTERN_metachop     109
#define STATIC_metachop     108
#define AUTO_metachop   107
#define FUNC_SPEC_metachop  106
#define TRY_UPPER_metachop  105
#define END_CATCH_metachop  104
#define END_CATCH_ALL_metachop  103
#define AND_CATCH_metachop  102
#define CATCH_UPPER_metachop    101
#define CATCH_ALL_metachop  100
#define END_MESSAGE_MAP_metachop    99
#define BEGIN_MESSAGE_MAP_metachop  98
#define DECLARE_MESSAGE_MAP_metachop    97
#define IMPLEMENT_SERIAL_metachop   96
#define IMPLEMENT_DYNCREATE_metachop    95
#define IMPLEMENT_DYNAMIC_metachop  94
#define DECLARE_SERIAL_metachop     93
#define DECLARE_DYNAMIC_metachop    92
#define PUSH_FUNCTION_metachop  91
#define PUSH_ARGUMENT_metachop  90
#define UNDEF_CONTENT_metachop  89
#define SMALL_PRAGMA_CONTENT_metachop   88
#define PRAGMA_CONTENT_metachop     87
#define PRAGMA_ENUM_VERT_metachop   86
#define PRAGMA_SPACE_ARROW_metachop     85
#define PRAGMA_PARAMETERS_metachop  84
#define PRAGMA_PARAMETERS_UNDER_metachop    83
#define PRAGMA_FUNC_HEADER_metachop     82
#define PRAGMA_INDENT_FUNCTION_TYPE_metachop    81
#define PRAGMA_COMMENT_PLUS_metachop    80
#define PRAGMA_COMMENT_END_metachop     79
#define PRAGMA_COMMENT_MIDDLE_metachop  78
#define PRAGMA_COMMENT_START_metachop   77
#define PRAGMA_MARGIN_metachop  76
#define PRAGMA_DECL_ALIGN_metachop  75
#define PRAGMA_ASSIGN_ALIGN_metachop    74
#define PRAGMA_SINGLE_SWITCH_INDENT_metachop    73
#define PRAGMA_SIMPLIFY_metachop    72
#define PRAGMA_BRACE_ALIGN_metachop     71
#define PRAGMA_MODE_metachop    70
#define PRAGMA_RANGE_metachop   69
#define PRAGMA_TAB_metachop     68
#define PRAGMA_TAB_DIRECTIVE_metachop   67
#define PRAGMA_CONFIG_metachop  66
#define PRAGMA_NOT_MANAGED_metachop     65
#define PRAGMA_MANAGED_metachop     64
#define PRAGMA_NOPRETTY_metachop    63
#define PRAGMA_PRETTY_metachop  62
#define INCLUDE_LOCAL_metachop  61
#define INCLUDE_SYS_metachop    60
#define END_LINE_metachop   59
#define DEFINE_NAME_metachop    58
#define DEFINED_NOT_CONTINUED_metachop  57
#define DEFINED_CONTINUED_metachop  56
#define POINT_metachop  55
#define SLAS_metachop   54
#define SLASEGAL_metachop   53
#define CARRIAGE_RETURN_metachop    52
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
#define INTEGER_metachop    26
#define FLOATVAL_metachop   25
#define UINTEGER_metachop   24
#define LINTEGER_metachop   23
#define LLINTEGER_metachop  22
#define ULLINTEGER_metachop     21
#define ULINTEGER_metachop  20
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
