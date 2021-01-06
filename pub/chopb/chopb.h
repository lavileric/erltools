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
    
    chopb () {
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
    static signed char * _tokenArray [168];
    static int (chopb::*(_tokenFuncArray [168])) ();
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
        TUNSIGNED =     356 ,
        BDECR =     355 ,
        BINCR =     354 ,
        ADDR =  353 ,
        NOT =   352 ,
        LNEG =  351 ,
        POS =   350 ,
        NEG =   349 ,
        PARAM_TYPE =    348 ,
        STRING_LIST =   347 ,
        LABEL =     346 ,
        THROW_ANSI =    345 ,
        ELSE =  344 ,
        DECL_TYPE =     343 ,
        TIDENT =    342 ,
        TSIGNED =   341 ,
        TSHORT =    340 ,
        TCHAR =     339 ,
        TINT =  338 ,
        RSHI =  337 ,
        LSHI =  336 ,
        LT =    335 ,
        GT =    334 ,
        GEQU =  333 ,
        LEQU =  332 ,
        SPACE_ARROW =   331 ,
        TAB_DIRECTIVE =     330 ,
        ENUM_PARAMETERS_UNDER =     329 ,
        ENUM_VERT_VALUE =   328 ,
        PROTECT_MEMB =  327 ,
        LANGUAGE =  326 ,
        EXP =   325 ,
        ADECR =     324 ,
        AINCR =     323 ,
        ARROW =     322 ,
        REF =   321 ,
        EXP_ARRAY =     320 ,
        EXP_BRA =   319 ,
        EXP_LIST =  318 ,
        ARROW_MEMB =    317 ,
        DOT_MEMB =  316 ,
        POINETOI =  315 ,
        TIRESUPEETOI =  314 ,
        TIRESUPE =  313 ,
        SUPESUPE =  312 ,
        INFEINFE =  311 ,
        SUPEEGAL =  310 ,
        INFEEGAL =  309 ,
        NONE =  308 ,
        NEW_DECLARATOR =    307 ,
        USING_NAMESPACE =   306 ,
        NAMESPACE_ALIAS =   305 ,
        REM =   304 ,
        DIV =   303 ,
        MUL =   302 ,
        POURC =     301 ,
        MESSAGE_MAP =   300 ,
        MACRO =     299 ,
        TDOUBLE =   298 ,
        TFLOAT =    297 ,
        TLONG =     296 ,
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
        UNSIGNED =  134 ,
        SIGNED =    133 ,
        SHORT =     132 ,
        LONG =  131 ,
        CHAR =  130 ,
        INT =   129 ,
        DPOIDPOI =  128 ,
        VOID =  127 ,
        FLOAT =     126 ,
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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     392
#define NODE_TREE_chopb     391
#define SPACE_chopb     390
#define SEP_OMIT_chopb  389
#define SEP_BEFORE_chopb    388
#define SEP_AFTER_chopb     387
#define AFERAFER_chopb  386
#define ALINEA_chopb    385
#define CHOP_DEF_chopb  384
#define NIL_chopb   383
#define IN_LANG_chopb   382
#define NEXT_chopb  381
#define DEF_IDENT_chopb     380
#define BOX_chopb   379
#define EXPO_chopb  378
#define EXPO_AFF_chopb  377
#define ETOIETOIEGAL_chopb  376
#define IN_chopb    375
#define PARSE_chopb     374
#define NEXTL_chopb     373
#define VALUE_chopb     372
#define INFESUPE_chopb  371
#define FOREACH_chopb   370
#define INFESEPOSUPE_chopb  369
#define INFESEPBSUPE_chopb  368
#define INFESEPASUPE_chopb  367
#define AOUVAOUV_chopb  366
#define ARRO_chopb  365
#define NL_BEG_chopb    364
#define TAB_BEG_chopb   363
#define SPACE_BEG_chopb     362
#define MAKETREE_SUP_chopb  361
#define MAKETREE_INF_chopb  360
#define PARSE_ELEM_chopb    359
#define SIMP_ETOI_chopb     358
#define ETOI_ETOI_chopb     357
#define TUNSIGNED_chopb     356
#define BDECR_chopb     355
#define BINCR_chopb     354
#define ADDR_chopb  353
#define NOT_chopb   352
#define LNEG_chopb  351
#define POS_chopb   350
#define NEG_chopb   349
#define PARAM_TYPE_chopb    348
#define STRING_LIST_chopb   347
#define LABEL_chopb     346
#define THROW_ANSI_chopb    345
#define ELSE_chopb  344
#define DECL_TYPE_chopb     343
#define TIDENT_chopb    342
#define TSIGNED_chopb   341
#define TSHORT_chopb    340
#define TCHAR_chopb     339
#define TINT_chopb  338
#define RSHI_chopb  337
#define LSHI_chopb  336
#define LT_chopb    335
#define GT_chopb    334
#define GEQU_chopb  333
#define LEQU_chopb  332
#define SPACE_ARROW_chopb   331
#define TAB_DIRECTIVE_chopb     330
#define ENUM_PARAMETERS_UNDER_chopb     329
#define ENUM_VERT_VALUE_chopb   328
#define PROTECT_MEMB_chopb  327
#define LANGUAGE_chopb  326
#define EXP_chopb   325
#define ADECR_chopb     324
#define AINCR_chopb     323
#define ARROW_chopb     322
#define REF_chopb   321
#define EXP_ARRAY_chopb     320
#define EXP_BRA_chopb   319
#define EXP_LIST_chopb  318
#define ARROW_MEMB_chopb    317
#define DOT_MEMB_chopb  316
#define POINETOI_chopb  315
#define TIRESUPEETOI_chopb  314
#define TIRESUPE_chopb  313
#define SUPESUPE_chopb  312
#define INFEINFE_chopb  311
#define SUPEEGAL_chopb  310
#define INFEEGAL_chopb  309
#define NONE_chopb  308
#define NEW_DECLARATOR_chopb    307
#define USING_NAMESPACE_chopb   306
#define NAMESPACE_ALIAS_chopb   305
#define REM_chopb   304
#define DIV_chopb   303
#define MUL_chopb   302
#define POURC_chopb     301
#define MESSAGE_MAP_chopb   300
#define MACRO_chopb     299
#define TDOUBLE_chopb   298
#define TFLOAT_chopb    297
#define TLONG_chopb     296
#define OR_chopb    295
#define VBARVBAR_chopb  294
#define AND_chopb   293
#define ETCOETCO_chopb  292
#define COMPOUND_EXT_chopb  291
#define EXTERNAL_chopb  290
#define INLINE_NAMESPACE_chopb  289
#define INITIALIZER_chopb   288
#define LOR_chopb   287
#define VBAR_chopb  286
#define DELETE_FUNCTION_chopb   285
#define FUNC_chopb  284
#define ALL_OF_chopb    283
#define EXTENSION_chopb     282
#define __EXTENSION___chopb     281
#define STAT_VOID_chopb     280
#define TYPEDEF_chopb   279
#define TEMPLATE_DECL_chopb     278
#define SUPE_chopb  277
#define CLASS_PARAM_chopb   276
#define TEMPLATE_chopb  275
#define EXP_SEQ_chopb   274
#define LXOR_chopb  273
#define CHAP_chopb  272
#define EXCEPTION_LIST_chopb    271
#define EXCEPTION_ANSI_chopb    270
#define EXCEPTION_chopb     269
#define NEQU_chopb  268
#define EQU_chopb   267
#define EXCLEGAL_chopb  266
#define EGALEGAL_chopb  265
#define ENUM_CLASS_chopb    264
#define PRAGMA_chopb    263
#define PARAMETERS_chopb    262
#define FUNC_HEADER_chopb   261
#define INDENT_FUNCTION_TYPE_chopb  260
#define COMMENT_PLUS_chopb  259
#define COMMENT_END_chopb   258
#define COMMENT_MIDDLE_chopb    257
#define COMMENT_START_chopb     256
#define MARGIN_VALUE_chopb  255
#define BRACE_ALIGN_VALUE_chopb     254
#define DECL_ALIGN_chopb    253
#define ASSIGN_ALIGN_chopb  252
#define SINGLE_SWITCH_INDENT_VALUE_chopb    251
#define SIMPLIFY_VALUE_chopb    250
#define SIMPLIFY_chopb  249
#define MODE_VALUE_chopb    248
#define TAB_VALUE_chopb     247
#define CONFIG_chopb    246
#define NOT_MANAGED_chopb   245
#define NO_PRETTY_chopb     244
#define ALINE_chopb     243
#define ERROR_chopb     242
#define UNDEF_chopb     241
#define TYP_AFF_BRA_chopb   240
#define TYP_AFF_CALL_chopb  239
#define MEMBER_DECLARATOR_chopb     238
#define TYP_ARRAY_chopb     237
#define CFER_chopb  236
#define COUV_chopb  235
#define FOR_DECLARATION_chopb   234
#define DECLARATION_chopb   233
#define CTOR_INITIALIZER_chopb  232
#define BRACE_MARKER_chopb  231
#define CTOR_INIT_chopb     230
#define LONGLONG_chopb  229
#define IUNLONGLONG_chopb   228
#define IUNLONG_chopb   227
#define IUN_chopb   226
#define ILONGLONG_chopb     225
#define ILONG_chopb     224
#define RANGE_MODIFIER_chopb    223
#define COND_AFF_chopb  222
#define INTE_chopb  221
#define COMPOUND_chopb  220
#define CLASS_DECL_chopb    219
#define AFER_chopb  218
#define CATCH_ANSI_chopb    217
#define EXCEPT_ANSI_ALL_chopb   216
#define CAST_chopb  215
#define TYP_BIT_chopb   214
#define PROTECT_chopb   213
#define BASE_LIST_chopb     212
#define ATTRIBUTE_CALL_chopb    211
#define XOR_AFF_chopb   210
#define OR_AFF_chopb    209
#define AND_AFF_chopb   208
#define RSH_AFF_chopb   207
#define LSH_AFF_chopb   206
#define MIN_AFF_chopb   205
#define PLU_AFF_chopb   204
#define REM_AFF_chopb   203
#define DIV_AFF_chopb   202
#define MUL_AFF_chopb   201
#define AFF_chopb   200
#define ASM_CALL_chopb  199
#define VAR_LIST_chopb  198
#define TYP_LIST_chopb  197
#define TYP_AFF_chopb   196
#define ABST_DECLARATOR_chopb   195
#define DECLARATOR_chopb    194
#define POINPOINPOIN_chopb  193
#define LAND_chopb  192
#define INIT_NEW_chopb  191
#define VIRG_chopb  190
#define QUALIFIED_chopb     189
#define MINUS_chopb     188
#define TYP_chopb   187
#define PFER_chopb  186
#define DESTRUCT_chopb  185
#define TYP_REF_chopb   184
#define TYP_ADDR_chopb  183
#define INFE_chopb  182
#define USING_chopb     181
#define NAMESPACE_chopb     180
#define CATCH_chopb     179
#define DPOI_chopb  178
#define PUBLIC_chopb    177
#define PROTECTED_chopb     176
#define PRIVATE_chopb   175
#define CHAPEGAL_chopb  174
#define VBAREGAL_chopb  173
#define ETCOEGAL_chopb  172
#define SUPESUPEEGAL_chopb  171
#define INFEINFEEGAL_chopb  170
#define TIREEGAL_chopb  169
#define PLUSEGAL_chopb  168
#define POURCEGAL_chopb     167
#define ETOIEGAL_chopb  166
#define EGAL_chopb  165
#define ASM_chopb   164
#define VA_ARG_chopb    163
#define DELETE_chopb    162
#define NEW_chopb   161
#define SIZEOF_chopb    160
#define TIRETIRE_chopb  159
#define PLUSPLUS_chopb  158
#define EXCL_chopb  157
#define PLUS_chopb  156
#define TIRE_chopb  155
#define POUV_chopb  154
#define DEFAULT_chopb   153
#define CASE_chopb  152
#define TRY_chopb   151
#define THROW_chopb     150
#define FORALLSONS_chopb    149
#define WHILE_chopb     148
#define SWITCH_chopb    147
#define RETURN_chopb    146
#define PVIR_chopb  145
#define IF_chopb    144
#define FOR_chopb   143
#define AOUV_chopb  142
#define DO_chopb    141
#define CONTINUE_chopb  140
#define BREAK_chopb     139
#define OPERATOR_chopb  138
#define TILD_chopb  137
#define ETCO_chopb  136
#define ETOI_chopb  135
#define UNSIGNED_chopb  134
#define SIGNED_chopb    133
#define SHORT_chopb     132
#define LONG_chopb  131
#define CHAR_chopb  130
#define INT_chopb   129
#define DPOIDPOI_chopb  128
#define VOID_chopb  127
#define FLOAT_chopb     126
#define DOUBLE_chopb    125
#define DECLTYPE_chopb  124
#define TYPENAME_chopb  123
#define CLASS_chopb     122
#define UNION_chopb     121
#define STRUCT_chopb    120
#define ENUM_chopb  119
#define CONSTEXPR_chopb     118
#define CONST_chopb     117
#define FRIEND_chopb    116
#define VIRTUAL_chopb   115
#define INLINE_chopb    114
#define __ASM___chopb   113
#define __ATTRIBUTE___chopb     112
#define VOLATILE_chopb  111
#define REGISTER_chopb  110
#define EXTERN_chopb    109
#define STATIC_chopb    108
#define AUTO_chopb  107
#define FUNC_SPEC_chopb     106
#define TRY_UPPER_chopb     105
#define END_CATCH_chopb     104
#define END_CATCH_ALL_chopb     103
#define AND_CATCH_chopb     102
#define CATCH_UPPER_chopb   101
#define CATCH_ALL_chopb     100
#define END_MESSAGE_MAP_chopb   99
#define BEGIN_MESSAGE_MAP_chopb     98
#define DECLARE_MESSAGE_MAP_chopb   97
#define IMPLEMENT_SERIAL_chopb  96
#define IMPLEMENT_DYNCREATE_chopb   95
#define IMPLEMENT_DYNAMIC_chopb     94
#define DECLARE_SERIAL_chopb    93
#define DECLARE_DYNAMIC_chopb   92
#define PUSH_FUNCTION_chopb     91
#define PUSH_ARGUMENT_chopb     90
#define UNDEF_CONTENT_chopb     89
#define SMALL_PRAGMA_CONTENT_chopb  88
#define PRAGMA_CONTENT_chopb    87
#define PRAGMA_ENUM_VERT_chopb  86
#define PRAGMA_SPACE_ARROW_chopb    85
#define PRAGMA_PARAMETERS_chopb     84
#define PRAGMA_PARAMETERS_UNDER_chopb   83
#define PRAGMA_FUNC_HEADER_chopb    82
#define PRAGMA_INDENT_FUNCTION_TYPE_chopb   81
#define PRAGMA_COMMENT_PLUS_chopb   80
#define PRAGMA_COMMENT_END_chopb    79
#define PRAGMA_COMMENT_MIDDLE_chopb     78
#define PRAGMA_COMMENT_START_chopb  77
#define PRAGMA_MARGIN_chopb     76
#define PRAGMA_DECL_ALIGN_chopb     75
#define PRAGMA_ASSIGN_ALIGN_chopb   74
#define PRAGMA_SINGLE_SWITCH_INDENT_chopb   73
#define PRAGMA_SIMPLIFY_chopb   72
#define PRAGMA_BRACE_ALIGN_chopb    71
#define PRAGMA_MODE_chopb   70
#define PRAGMA_RANGE_chopb  69
#define PRAGMA_TAB_chopb    68
#define PRAGMA_TAB_DIRECTIVE_chopb  67
#define PRAGMA_CONFIG_chopb     66
#define PRAGMA_NOT_MANAGED_chopb    65
#define PRAGMA_MANAGED_chopb    64
#define PRAGMA_NOPRETTY_chopb   63
#define PRAGMA_PRETTY_chopb     62
#define INCLUDE_LOCAL_chopb     61
#define INCLUDE_SYS_chopb   60
#define END_LINE_chopb  59
#define DEFINE_NAME_chopb   58
#define DEFINED_NOT_CONTINUED_chopb     57
#define DEFINED_CONTINUED_chopb     56
#define POINT_chopb     55
#define SLAS_chopb  54
#define SLASEGAL_chopb  53
#define CARRIAGE_RETURN_chopb   52
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
#define INTEGER_chopb   26
#define FLOATVAL_chopb  25
#define UINTEGER_chopb  24
#define LINTEGER_chopb  23
#define LLINTEGER_chopb     22
#define ULLINTEGER_chopb    21
#define ULINTEGER_chopb     20
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
