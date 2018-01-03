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
    
    
    static signed char * _tokenArray [164];
    static int (metachop::*(_tokenFuncArray [164])) ();
    static int _tokenNbFuncArray [164];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     373 ,
        NODE_TREE =     372 ,
        SPACE =     371 ,
        SEP_OMIT =  370 ,
        SEP_BEFORE =    369 ,
        SEP_AFTER =     368 ,
        AFERAFER =  367 ,
        ALINEA =    366 ,
        CHOP_DEF =  365 ,
        NIL =   364 ,
        IN_LANG =   363 ,
        NEXT =  362 ,
        DEF_IDENT =     361 ,
        BOX =   360 ,
        EXPO =  359 ,
        EXPO_AFF =  358 ,
        ETOIETOIEGAL =  357 ,
        IN =    356 ,
        PARSE =     355 ,
        NEXTL =     354 ,
        VALUE =     353 ,
        INFESUPE =  352 ,
        FOREACH =   351 ,
        INFESEPOSUPE =  350 ,
        INFESEPBSUPE =  349 ,
        INFESEPASUPE =  348 ,
        AOUVAOUV =  347 ,
        ARRO =  346 ,
        NL_BEG =    345 ,
        TAB_BEG =   344 ,
        SPACE_BEG =     343 ,
        MAKETREE_SUP =  342 ,
        MAKETREE_INF =  341 ,
        PARSE_ELEM =    340 ,
        SIMP_ETOI =     339 ,
        ETOI_ETOI =     338 ,
        BDECR =     337 ,
        BINCR =     336 ,
        ADDR =  335 ,
        NOT =   334 ,
        LNEG =  333 ,
        POS =   332 ,
        NEG =   331 ,
        PARAM_TYPE =    330 ,
        STRING_LIST =   329 ,
        LABEL =     328 ,
        THROW_ANSI =    327 ,
        ELSE =  326 ,
        TUNSIGNED =     325 ,
        TSIGNED =   324 ,
        TFLOAT =    323 ,
        TDOUBLE =   322 ,
        TIDENT =    321 ,
        RSHI =  320 ,
        LSHI =  319 ,
        LT =    318 ,
        GT =    317 ,
        GEQU =  316 ,
        LEQU =  315 ,
        SPACE_ARROW =   314 ,
        TAB_DIRECTIVE =     313 ,
        ENUM_PARAMETERS_UNDER =     312 ,
        ENUM_VERT_VALUE =   311 ,
        PROTECT_MEMB =  310 ,
        LANGUAGE =  309 ,
        EXP =   308 ,
        ADECR =     307 ,
        AINCR =     306 ,
        ARROW =     305 ,
        REF =   304 ,
        EXP_ARRAY =     303 ,
        EXP_LIST =  302 ,
        ARROW_MEMB =    301 ,
        DOT_MEMB =  300 ,
        POINETOI =  299 ,
        TIRESUPEETOI =  298 ,
        TIRESUPE =  297 ,
        SUPESUPE =  296 ,
        INFEINFE =  295 ,
        SUPEEGAL =  294 ,
        INFEEGAL =  293 ,
        NONE =  292 ,
        NEW_DECLARATOR =    291 ,
        USING_NAMESPACE =   290 ,
        NAMESPACE_ALIAS =   289 ,
        REM =   288 ,
        DIV =   287 ,
        MUL =   286 ,
        POURC =     285 ,
        MESSAGE_MAP =   284 ,
        MACRO =     283 ,
        TCHAR =     282 ,
        TSHORT =    281 ,
        TLONG =     280 ,
        TINT =  279 ,
        OR =    278 ,
        VBARVBAR =  277 ,
        AND =   276 ,
        ETCOETCO =  275 ,
        COMPOUND_EXT =  274 ,
        EXTERNAL =  273 ,
        INITIALIZER =   272 ,
        LOR =   271 ,
        VBAR =  270 ,
        FUNC =  269 ,
        ALL_OF =    268 ,
        STAT_VOID =     267 ,
        TEMPLATE_DECL =     266 ,
        SUPE =  265 ,
        CLASS_PARAM =   264 ,
        EXP_SEQ =   263 ,
        LXOR =  262 ,
        CHAP =  261 ,
        EXCEPTION_LIST =    260 ,
        EXCEPTION_ANSI =    259 ,
        EXCEPTION =     258 ,
        NEQU =  257 ,
        EQU =   256 ,
        EXCLEGAL =  255 ,
        EGALEGAL =  254 ,
        PRAGMA =    253 ,
        PARAMETERS =    252 ,
        FUNC_HEADER =   251 ,
        INDENT_FUNCTION_TYPE =  250 ,
        COMMENT_PLUS =  249 ,
        COMMENT_END =   248 ,
        COMMENT_MIDDLE =    247 ,
        COMMENT_START =     246 ,
        MARGIN_VALUE =  245 ,
        BRACE_ALIGN_VALUE =     244 ,
        DECL_ALIGN =    243 ,
        ASSIGN_ALIGN =  242 ,
        SINGLE_SWITCH_INDENT_VALUE =    241 ,
        SIMPLIFY_VALUE =    240 ,
        SIMPLIFY =  239 ,
        MODE_VALUE =    238 ,
        TAB_VALUE =     237 ,
        CONFIG =    236 ,
        NO_PRETTY =     235 ,
        ALINE =     234 ,
        ERROR =     233 ,
        UNDEF =     232 ,
        TYP_AFF_CALL =  231 ,
        MEMBER_DECLARATOR =     230 ,
        TYP_ARRAY =     229 ,
        CFER =  228 ,
        COUV =  227 ,
        FOR_DECLARATION =   226 ,
        DECLARATION =   225 ,
        CTOR_INITIALIZER =  224 ,
        CTOR_INIT =     223 ,
        LONGLONG =  222 ,
        IUNLONGLONG =   221 ,
        IUNLONG =   220 ,
        IUN =   219 ,
        ILONGLONG =     218 ,
        ILONG =     217 ,
        RANGE_MODIFIER =    216 ,
        COND_AFF =  215 ,
        INTE =  214 ,
        COMPOUND =  213 ,
        CLASS_DECL =    212 ,
        AFER =  211 ,
        CATCH_ANSI =    210 ,
        EXCEPT_ANSI_ALL =   209 ,
        CAST =  208 ,
        DPOI =  207 ,
        TYP_BIT =   206 ,
        PROTECT =   205 ,
        BASE_LIST =     204 ,
        XOR_AFF =   203 ,
        OR_AFF =    202 ,
        AND_AFF =   201 ,
        RSH_AFF =   200 ,
        LSH_AFF =   199 ,
        MIN_AFF =   198 ,
        PLU_AFF =   197 ,
        REM_AFF =   196 ,
        DIV_AFF =   195 ,
        MUL_AFF =   194 ,
        AFF =   193 ,
        VAR_LIST =  192 ,
        TYP_LIST =  191 ,
        TYP_AFF =   190 ,
        ABST_DECLARATOR =   189 ,
        DECLARATOR =    188 ,
        POINPOINPOIN =  187 ,
        LAND =  186 ,
        INIT_NEW =  185 ,
        VIRG =  184 ,
        QUALIFIED =     183 ,
        MINUS =     182 ,
        TYP =   181 ,
        PFER =  180 ,
        DESTRUCT =  179 ,
        TYP_REF =   178 ,
        TYP_ADDR =  177 ,
        INFE =  176 ,
        USING =     175 ,
        NAMESPACE =     174 ,
        TYPEDEF =   173 ,
        TEMPLATE =  172 ,
        CATCH =     171 ,
        PUBLIC =    170 ,
        PROTECTED =     169 ,
        PRIVATE =   168 ,
        CHAPEGAL =  167 ,
        VBAREGAL =  166 ,
        ETCOEGAL =  165 ,
        SUPESUPEEGAL =  164 ,
        INFEINFEEGAL =  163 ,
        TIREEGAL =  162 ,
        PLUSEGAL =  161 ,
        POURCEGAL =     160 ,
        ETOIEGAL =  159 ,
        EGAL =  158 ,
        ASM =   157 ,
        VA_ARG =    156 ,
        DELETE =    155 ,
        NEW =   154 ,
        SIZEOF =    153 ,
        TIRETIRE =  152 ,
        PLUSPLUS =  151 ,
        EXCL =  150 ,
        PLUS =  149 ,
        TIRE =  148 ,
        POUV =  147 ,
        DEFAULT =   146 ,
        CASE =  145 ,
        TRY =   144 ,
        THROW =     143 ,
        FORALLSONS =    142 ,
        WHILE =     141 ,
        SWITCH =    140 ,
        RETURN =    139 ,
        PVIR =  138 ,
        IF =    137 ,
        FOR =   136 ,
        AOUV =  135 ,
        DO =    134 ,
        CONTINUE =  133 ,
        BREAK =     132 ,
        OPERATOR =  131 ,
        TILD =  130 ,
        ETCO =  129 ,
        ETOI =  128 ,
        SHORT =     127 ,
        UNSIGNED =  126 ,
        SIGNED =    125 ,
        LONG =  124 ,
        DPOIDPOI =  123 ,
        VOID =  122 ,
        FLOAT =     121 ,
        CHAR =  120 ,
        INT =   119 ,
        DOUBLE =    118 ,
        TYPENAME =  117 ,
        CLASS =     116 ,
        UNION =     115 ,
        STRUCT =    114 ,
        ENUM =  113 ,
        CONST =     112 ,
        FRIEND =    111 ,
        VIRTUAL =   110 ,
        INLINE =    109 ,
        VOLATILE =  108 ,
        REGISTER =  107 ,
        EXTERN =    106 ,
        STATIC =    105 ,
        AUTO =  104 ,
        FUNC_SPEC =     103 ,
        TRY_UPPER =     102 ,
        END_CATCH =     101 ,
        END_CATCH_ALL =     100 ,
        AND_CATCH =     99 ,
        CATCH_UPPER =   98 ,
        CATCH_ALL =     97 ,
        END_MESSAGE_MAP =   96 ,
        BEGIN_MESSAGE_MAP =     95 ,
        DECLARE_MESSAGE_MAP =   94 ,
        IMPLEMENT_SERIAL =  93 ,
        IMPLEMENT_DYNCREATE =   92 ,
        IMPLEMENT_DYNAMIC =     91 ,
        DECLARE_SERIAL =    90 ,
        DECLARE_DYNAMIC =   89 ,
        PUSH_FUNCTION =     88 ,
        PUSH_ARGUMENT =     87 ,
        UNDEF_CONTENT =     86 ,
        SMALL_PRAGMA_CONTENT =  85 ,
        PRAGMA_CONTENT =    84 ,
        PRAGMA_ENUM_VERT =  83 ,
        PRAGMA_SPACE_ARROW =    82 ,
        PRAGMA_PARAMETERS =     81 ,
        PRAGMA_PARAMETERS_UNDER =   80 ,
        PRAGMA_FUNC_HEADER =    79 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   78 ,
        PRAGMA_COMMENT_PLUS =   77 ,
        PRAGMA_COMMENT_END =    76 ,
        PRAGMA_COMMENT_MIDDLE =     75 ,
        PRAGMA_COMMENT_START =  74 ,
        PRAGMA_MARGIN =     73 ,
        PRAGMA_DECL_ALIGN =     72 ,
        PRAGMA_ASSIGN_ALIGN =   71 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   70 ,
        PRAGMA_SIMPLIFY =   69 ,
        PRAGMA_BRACE_ALIGN =    68 ,
        PRAGMA_MODE =   67 ,
        PRAGMA_RANGE =  66 ,
        PRAGMA_TAB =    65 ,
        PRAGMA_TAB_DIRECTIVE =  64 ,
        PRAGMA_CONFIG =     63 ,
        PRAGMA_NOPRETTY =   62 ,
        PRAGMA_PRETTY =     61 ,
        INCLUDE_LOCAL =     60 ,
        INCLUDE_SYS =   59 ,
        END_LINE =  58 ,
        DEFINE_NAME =   57 ,
        DEFINED_NOT_CONTINUED =     56 ,
        DEFINED_CONTINUED =     55 ,
        POINT =     54 ,
        SLAS =  53 ,
        SLASEGAL =  52 ,
        CARRIAGE_RETURN =   51 ,
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
#define NODE_LIST_metachop  373
#define NODE_TREE_metachop  372
#define SPACE_metachop  371
#define SEP_OMIT_metachop   370
#define SEP_BEFORE_metachop     369
#define SEP_AFTER_metachop  368
#define AFERAFER_metachop   367
#define ALINEA_metachop     366
#define CHOP_DEF_metachop   365
#define NIL_metachop    364
#define IN_LANG_metachop    363
#define NEXT_metachop   362
#define DEF_IDENT_metachop  361
#define BOX_metachop    360
#define EXPO_metachop   359
#define EXPO_AFF_metachop   358
#define ETOIETOIEGAL_metachop   357
#define IN_metachop     356
#define PARSE_metachop  355
#define NEXTL_metachop  354
#define VALUE_metachop  353
#define INFESUPE_metachop   352
#define FOREACH_metachop    351
#define INFESEPOSUPE_metachop   350
#define INFESEPBSUPE_metachop   349
#define INFESEPASUPE_metachop   348
#define AOUVAOUV_metachop   347
#define ARRO_metachop   346
#define NL_BEG_metachop     345
#define TAB_BEG_metachop    344
#define SPACE_BEG_metachop  343
#define MAKETREE_SUP_metachop   342
#define MAKETREE_INF_metachop   341
#define PARSE_ELEM_metachop     340
#define SIMP_ETOI_metachop  339
#define ETOI_ETOI_metachop  338
#define BDECR_metachop  337
#define BINCR_metachop  336
#define ADDR_metachop   335
#define NOT_metachop    334
#define LNEG_metachop   333
#define POS_metachop    332
#define NEG_metachop    331
#define PARAM_TYPE_metachop     330
#define STRING_LIST_metachop    329
#define LABEL_metachop  328
#define THROW_ANSI_metachop     327
#define ELSE_metachop   326
#define TUNSIGNED_metachop  325
#define TSIGNED_metachop    324
#define TFLOAT_metachop     323
#define TDOUBLE_metachop    322
#define TIDENT_metachop     321
#define RSHI_metachop   320
#define LSHI_metachop   319
#define LT_metachop     318
#define GT_metachop     317
#define GEQU_metachop   316
#define LEQU_metachop   315
#define SPACE_ARROW_metachop    314
#define TAB_DIRECTIVE_metachop  313
#define ENUM_PARAMETERS_UNDER_metachop  312
#define ENUM_VERT_VALUE_metachop    311
#define PROTECT_MEMB_metachop   310
#define LANGUAGE_metachop   309
#define EXP_metachop    308
#define ADECR_metachop  307
#define AINCR_metachop  306
#define ARROW_metachop  305
#define REF_metachop    304
#define EXP_ARRAY_metachop  303
#define EXP_LIST_metachop   302
#define ARROW_MEMB_metachop     301
#define DOT_MEMB_metachop   300
#define POINETOI_metachop   299
#define TIRESUPEETOI_metachop   298
#define TIRESUPE_metachop   297
#define SUPESUPE_metachop   296
#define INFEINFE_metachop   295
#define SUPEEGAL_metachop   294
#define INFEEGAL_metachop   293
#define NONE_metachop   292
#define NEW_DECLARATOR_metachop     291
#define USING_NAMESPACE_metachop    290
#define NAMESPACE_ALIAS_metachop    289
#define REM_metachop    288
#define DIV_metachop    287
#define MUL_metachop    286
#define POURC_metachop  285
#define MESSAGE_MAP_metachop    284
#define MACRO_metachop  283
#define TCHAR_metachop  282
#define TSHORT_metachop     281
#define TLONG_metachop  280
#define TINT_metachop   279
#define OR_metachop     278
#define VBARVBAR_metachop   277
#define AND_metachop    276
#define ETCOETCO_metachop   275
#define COMPOUND_EXT_metachop   274
#define EXTERNAL_metachop   273
#define INITIALIZER_metachop    272
#define LOR_metachop    271
#define VBAR_metachop   270
#define FUNC_metachop   269
#define ALL_OF_metachop     268
#define STAT_VOID_metachop  267
#define TEMPLATE_DECL_metachop  266
#define SUPE_metachop   265
#define CLASS_PARAM_metachop    264
#define EXP_SEQ_metachop    263
#define LXOR_metachop   262
#define CHAP_metachop   261
#define EXCEPTION_LIST_metachop     260
#define EXCEPTION_ANSI_metachop     259
#define EXCEPTION_metachop  258
#define NEQU_metachop   257
#define EQU_metachop    256
#define EXCLEGAL_metachop   255
#define EGALEGAL_metachop   254
#define PRAGMA_metachop     253
#define PARAMETERS_metachop     252
#define FUNC_HEADER_metachop    251
#define INDENT_FUNCTION_TYPE_metachop   250
#define COMMENT_PLUS_metachop   249
#define COMMENT_END_metachop    248
#define COMMENT_MIDDLE_metachop     247
#define COMMENT_START_metachop  246
#define MARGIN_VALUE_metachop   245
#define BRACE_ALIGN_VALUE_metachop  244
#define DECL_ALIGN_metachop     243
#define ASSIGN_ALIGN_metachop   242
#define SINGLE_SWITCH_INDENT_VALUE_metachop     241
#define SIMPLIFY_VALUE_metachop     240
#define SIMPLIFY_metachop   239
#define MODE_VALUE_metachop     238
#define TAB_VALUE_metachop  237
#define CONFIG_metachop     236
#define NO_PRETTY_metachop  235
#define ALINE_metachop  234
#define ERROR_metachop  233
#define UNDEF_metachop  232
#define TYP_AFF_CALL_metachop   231
#define MEMBER_DECLARATOR_metachop  230
#define TYP_ARRAY_metachop  229
#define CFER_metachop   228
#define COUV_metachop   227
#define FOR_DECLARATION_metachop    226
#define DECLARATION_metachop    225
#define CTOR_INITIALIZER_metachop   224
#define CTOR_INIT_metachop  223
#define LONGLONG_metachop   222
#define IUNLONGLONG_metachop    221
#define IUNLONG_metachop    220
#define IUN_metachop    219
#define ILONGLONG_metachop  218
#define ILONG_metachop  217
#define RANGE_MODIFIER_metachop     216
#define COND_AFF_metachop   215
#define INTE_metachop   214
#define COMPOUND_metachop   213
#define CLASS_DECL_metachop     212
#define AFER_metachop   211
#define CATCH_ANSI_metachop     210
#define EXCEPT_ANSI_ALL_metachop    209
#define CAST_metachop   208
#define DPOI_metachop   207
#define TYP_BIT_metachop    206
#define PROTECT_metachop    205
#define BASE_LIST_metachop  204
#define XOR_AFF_metachop    203
#define OR_AFF_metachop     202
#define AND_AFF_metachop    201
#define RSH_AFF_metachop    200
#define LSH_AFF_metachop    199
#define MIN_AFF_metachop    198
#define PLU_AFF_metachop    197
#define REM_AFF_metachop    196
#define DIV_AFF_metachop    195
#define MUL_AFF_metachop    194
#define AFF_metachop    193
#define VAR_LIST_metachop   192
#define TYP_LIST_metachop   191
#define TYP_AFF_metachop    190
#define ABST_DECLARATOR_metachop    189
#define DECLARATOR_metachop     188
#define POINPOINPOIN_metachop   187
#define LAND_metachop   186
#define INIT_NEW_metachop   185
#define VIRG_metachop   184
#define QUALIFIED_metachop  183
#define MINUS_metachop  182
#define TYP_metachop    181
#define PFER_metachop   180
#define DESTRUCT_metachop   179
#define TYP_REF_metachop    178
#define TYP_ADDR_metachop   177
#define INFE_metachop   176
#define USING_metachop  175
#define NAMESPACE_metachop  174
#define TYPEDEF_metachop    173
#define TEMPLATE_metachop   172
#define CATCH_metachop  171
#define PUBLIC_metachop     170
#define PROTECTED_metachop  169
#define PRIVATE_metachop    168
#define CHAPEGAL_metachop   167
#define VBAREGAL_metachop   166
#define ETCOEGAL_metachop   165
#define SUPESUPEEGAL_metachop   164
#define INFEINFEEGAL_metachop   163
#define TIREEGAL_metachop   162
#define PLUSEGAL_metachop   161
#define POURCEGAL_metachop  160
#define ETOIEGAL_metachop   159
#define EGAL_metachop   158
#define ASM_metachop    157
#define VA_ARG_metachop     156
#define DELETE_metachop     155
#define NEW_metachop    154
#define SIZEOF_metachop     153
#define TIRETIRE_metachop   152
#define PLUSPLUS_metachop   151
#define EXCL_metachop   150
#define PLUS_metachop   149
#define TIRE_metachop   148
#define POUV_metachop   147
#define DEFAULT_metachop    146
#define CASE_metachop   145
#define TRY_metachop    144
#define THROW_metachop  143
#define FORALLSONS_metachop     142
#define WHILE_metachop  141
#define SWITCH_metachop     140
#define RETURN_metachop     139
#define PVIR_metachop   138
#define IF_metachop     137
#define FOR_metachop    136
#define AOUV_metachop   135
#define DO_metachop     134
#define CONTINUE_metachop   133
#define BREAK_metachop  132
#define OPERATOR_metachop   131
#define TILD_metachop   130
#define ETCO_metachop   129
#define ETOI_metachop   128
#define SHORT_metachop  127
#define UNSIGNED_metachop   126
#define SIGNED_metachop     125
#define LONG_metachop   124
#define DPOIDPOI_metachop   123
#define VOID_metachop   122
#define FLOAT_metachop  121
#define CHAR_metachop   120
#define INT_metachop    119
#define DOUBLE_metachop     118
#define TYPENAME_metachop   117
#define CLASS_metachop  116
#define UNION_metachop  115
#define STRUCT_metachop     114
#define ENUM_metachop   113
#define CONST_metachop  112
#define FRIEND_metachop     111
#define VIRTUAL_metachop    110
#define INLINE_metachop     109
#define VOLATILE_metachop   108
#define REGISTER_metachop   107
#define EXTERN_metachop     106
#define STATIC_metachop     105
#define AUTO_metachop   104
#define FUNC_SPEC_metachop  103
#define TRY_UPPER_metachop  102
#define END_CATCH_metachop  101
#define END_CATCH_ALL_metachop  100
#define AND_CATCH_metachop  99
#define CATCH_UPPER_metachop    98
#define CATCH_ALL_metachop  97
#define END_MESSAGE_MAP_metachop    96
#define BEGIN_MESSAGE_MAP_metachop  95
#define DECLARE_MESSAGE_MAP_metachop    94
#define IMPLEMENT_SERIAL_metachop   93
#define IMPLEMENT_DYNCREATE_metachop    92
#define IMPLEMENT_DYNAMIC_metachop  91
#define DECLARE_SERIAL_metachop     90
#define DECLARE_DYNAMIC_metachop    89
#define PUSH_FUNCTION_metachop  88
#define PUSH_ARGUMENT_metachop  87
#define UNDEF_CONTENT_metachop  86
#define SMALL_PRAGMA_CONTENT_metachop   85
#define PRAGMA_CONTENT_metachop     84
#define PRAGMA_ENUM_VERT_metachop   83
#define PRAGMA_SPACE_ARROW_metachop     82
#define PRAGMA_PARAMETERS_metachop  81
#define PRAGMA_PARAMETERS_UNDER_metachop    80
#define PRAGMA_FUNC_HEADER_metachop     79
#define PRAGMA_INDENT_FUNCTION_TYPE_metachop    78
#define PRAGMA_COMMENT_PLUS_metachop    77
#define PRAGMA_COMMENT_END_metachop     76
#define PRAGMA_COMMENT_MIDDLE_metachop  75
#define PRAGMA_COMMENT_START_metachop   74
#define PRAGMA_MARGIN_metachop  73
#define PRAGMA_DECL_ALIGN_metachop  72
#define PRAGMA_ASSIGN_ALIGN_metachop    71
#define PRAGMA_SINGLE_SWITCH_INDENT_metachop    70
#define PRAGMA_SIMPLIFY_metachop    69
#define PRAGMA_BRACE_ALIGN_metachop     68
#define PRAGMA_MODE_metachop    67
#define PRAGMA_RANGE_metachop   66
#define PRAGMA_TAB_metachop     65
#define PRAGMA_TAB_DIRECTIVE_metachop   64
#define PRAGMA_CONFIG_metachop  63
#define PRAGMA_NOPRETTY_metachop    62
#define PRAGMA_PRETTY_metachop  61
#define INCLUDE_LOCAL_metachop  60
#define INCLUDE_SYS_metachop    59
#define END_LINE_metachop   58
#define DEFINE_NAME_metachop    57
#define DEFINED_NOT_CONTINUED_metachop  56
#define DEFINED_CONTINUED_metachop  55
#define POINT_metachop  54
#define SLAS_metachop   53
#define SLASEGAL_metachop   52
#define CARRIAGE_RETURN_metachop    51
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
