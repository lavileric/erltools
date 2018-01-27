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
    
    
    static signed char * _tokenArray [165];
    static int (metachop::*(_tokenFuncArray [165])) ();
    static int _tokenNbFuncArray [165];

    virtual int SortKeyWord (int ret);
    virtual int UpSortKeyWord (int ret); 
    virtual void InitConst ();
    
    enum constants {
        NODE_LIST =     376 ,
        NODE_TREE =     375 ,
        SPACE =     374 ,
        SEP_OMIT =  373 ,
        SEP_BEFORE =    372 ,
        SEP_AFTER =     371 ,
        AFERAFER =  370 ,
        ALINEA =    369 ,
        CHOP_DEF =  368 ,
        NIL =   367 ,
        IN_LANG =   366 ,
        NEXT =  365 ,
        DEF_IDENT =     364 ,
        BOX =   363 ,
        EXPO =  362 ,
        EXPO_AFF =  361 ,
        ETOIETOIEGAL =  360 ,
        IN =    359 ,
        PARSE =     358 ,
        NEXTL =     357 ,
        VALUE =     356 ,
        INFESUPE =  355 ,
        FOREACH =   354 ,
        INFESEPOSUPE =  353 ,
        INFESEPBSUPE =  352 ,
        INFESEPASUPE =  351 ,
        AOUVAOUV =  350 ,
        ARRO =  349 ,
        NL_BEG =    348 ,
        TAB_BEG =   347 ,
        SPACE_BEG =     346 ,
        MAKETREE_SUP =  345 ,
        MAKETREE_INF =  344 ,
        PARSE_ELEM =    343 ,
        SIMP_ETOI =     342 ,
        ETOI_ETOI =     341 ,
        BDECR =     340 ,
        BINCR =     339 ,
        ADDR =  338 ,
        NOT =   337 ,
        LNEG =  336 ,
        POS =   335 ,
        NEG =   334 ,
        PARAM_TYPE =    333 ,
        STRING_LIST =   332 ,
        LABEL =     331 ,
        THROW_ANSI =    330 ,
        ELSE =  329 ,
        TUNSIGNED =     328 ,
        TSIGNED =   327 ,
        TFLOAT =    326 ,
        TDOUBLE =   325 ,
        TIDENT =    324 ,
        RSHI =  323 ,
        LSHI =  322 ,
        LT =    321 ,
        GT =    320 ,
        GEQU =  319 ,
        LEQU =  318 ,
        SPACE_ARROW =   317 ,
        TAB_DIRECTIVE =     316 ,
        ENUM_PARAMETERS_UNDER =     315 ,
        ENUM_VERT_VALUE =   314 ,
        PROTECT_MEMB =  313 ,
        LANGUAGE =  312 ,
        EXP =   311 ,
        ADECR =     310 ,
        AINCR =     309 ,
        ARROW =     308 ,
        REF =   307 ,
        EXP_ARRAY =     306 ,
        EXP_LIST =  305 ,
        ARROW_MEMB =    304 ,
        DOT_MEMB =  303 ,
        POINETOI =  302 ,
        TIRESUPEETOI =  301 ,
        TIRESUPE =  300 ,
        SUPESUPE =  299 ,
        INFEINFE =  298 ,
        SUPEEGAL =  297 ,
        INFEEGAL =  296 ,
        NONE =  295 ,
        NEW_DECLARATOR =    294 ,
        USING_NAMESPACE =   293 ,
        NAMESPACE_ALIAS =   292 ,
        REM =   291 ,
        DIV =   290 ,
        MUL =   289 ,
        POURC =     288 ,
        MESSAGE_MAP =   287 ,
        MACRO =     286 ,
        TCHAR =     285 ,
        TSHORT =    284 ,
        TLONG =     283 ,
        TINT =  282 ,
        OR =    281 ,
        VBARVBAR =  280 ,
        AND =   279 ,
        ETCOETCO =  278 ,
        COMPOUND_EXT =  277 ,
        EXTERNAL =  276 ,
        INITIALIZER =   275 ,
        LOR =   274 ,
        VBAR =  273 ,
        FUNC =  272 ,
        ALL_OF =    271 ,
        STAT_VOID =     270 ,
        TEMPLATE_DECL =     269 ,
        SUPE =  268 ,
        CLASS_PARAM =   267 ,
        EXP_SEQ =   266 ,
        LXOR =  265 ,
        CHAP =  264 ,
        EXCEPTION_LIST =    263 ,
        EXCEPTION_ANSI =    262 ,
        EXCEPTION =     261 ,
        NEQU =  260 ,
        EQU =   259 ,
        EXCLEGAL =  258 ,
        EGALEGAL =  257 ,
        PRAGMA =    256 ,
        PARAMETERS =    255 ,
        FUNC_HEADER =   254 ,
        INDENT_FUNCTION_TYPE =  253 ,
        COMMENT_PLUS =  252 ,
        COMMENT_END =   251 ,
        COMMENT_MIDDLE =    250 ,
        COMMENT_START =     249 ,
        MARGIN_VALUE =  248 ,
        BRACE_ALIGN_VALUE =     247 ,
        DECL_ALIGN =    246 ,
        ASSIGN_ALIGN =  245 ,
        SINGLE_SWITCH_INDENT_VALUE =    244 ,
        SIMPLIFY_VALUE =    243 ,
        SIMPLIFY =  242 ,
        MODE_VALUE =    241 ,
        TAB_VALUE =     240 ,
        CONFIG =    239 ,
        NOT_MANAGED =   238 ,
        NO_PRETTY =     237 ,
        ALINE =     236 ,
        ERROR =     235 ,
        UNDEF =     234 ,
        TYP_AFF_CALL =  233 ,
        MEMBER_DECLARATOR =     232 ,
        TYP_ARRAY =     231 ,
        CFER =  230 ,
        COUV =  229 ,
        FOR_DECLARATION =   228 ,
        DECLARATION =   227 ,
        CTOR_INITIALIZER =  226 ,
        CTOR_INIT =     225 ,
        LONGLONG =  224 ,
        IUNLONGLONG =   223 ,
        IUNLONG =   222 ,
        IUN =   221 ,
        ILONGLONG =     220 ,
        ILONG =     219 ,
        RANGE_MODIFIER =    218 ,
        COND_AFF =  217 ,
        INTE =  216 ,
        COMPOUND =  215 ,
        CLASS_DECL =    214 ,
        AFER =  213 ,
        CATCH_ANSI =    212 ,
        EXCEPT_ANSI_ALL =   211 ,
        CAST =  210 ,
        DPOI =  209 ,
        TYP_BIT =   208 ,
        PROTECT =   207 ,
        BASE_LIST =     206 ,
        XOR_AFF =   205 ,
        OR_AFF =    204 ,
        AND_AFF =   203 ,
        RSH_AFF =   202 ,
        LSH_AFF =   201 ,
        MIN_AFF =   200 ,
        PLU_AFF =   199 ,
        REM_AFF =   198 ,
        DIV_AFF =   197 ,
        MUL_AFF =   196 ,
        AFF =   195 ,
        VAR_LIST =  194 ,
        TYP_LIST =  193 ,
        TYP_AFF =   192 ,
        ABST_DECLARATOR =   191 ,
        DECLARATOR =    190 ,
        POINPOINPOIN =  189 ,
        LAND =  188 ,
        INIT_NEW =  187 ,
        VIRG =  186 ,
        QUALIFIED =     185 ,
        MINUS =     184 ,
        TYP =   183 ,
        PFER =  182 ,
        DESTRUCT =  181 ,
        TYP_REF =   180 ,
        TYP_ADDR =  179 ,
        INFE =  178 ,
        USING =     177 ,
        NAMESPACE =     176 ,
        TYPEDEF =   175 ,
        TEMPLATE =  174 ,
        CATCH =     173 ,
        PUBLIC =    172 ,
        PROTECTED =     171 ,
        PRIVATE =   170 ,
        CHAPEGAL =  169 ,
        VBAREGAL =  168 ,
        ETCOEGAL =  167 ,
        SUPESUPEEGAL =  166 ,
        INFEINFEEGAL =  165 ,
        TIREEGAL =  164 ,
        PLUSEGAL =  163 ,
        POURCEGAL =     162 ,
        ETOIEGAL =  161 ,
        EGAL =  160 ,
        ASM =   159 ,
        VA_ARG =    158 ,
        DELETE =    157 ,
        NEW =   156 ,
        SIZEOF =    155 ,
        TIRETIRE =  154 ,
        PLUSPLUS =  153 ,
        EXCL =  152 ,
        PLUS =  151 ,
        TIRE =  150 ,
        POUV =  149 ,
        DEFAULT =   148 ,
        CASE =  147 ,
        TRY =   146 ,
        THROW =     145 ,
        FORALLSONS =    144 ,
        WHILE =     143 ,
        SWITCH =    142 ,
        RETURN =    141 ,
        PVIR =  140 ,
        IF =    139 ,
        FOR =   138 ,
        AOUV =  137 ,
        DO =    136 ,
        CONTINUE =  135 ,
        BREAK =     134 ,
        OPERATOR =  133 ,
        TILD =  132 ,
        ETCO =  131 ,
        ETOI =  130 ,
        SHORT =     129 ,
        UNSIGNED =  128 ,
        SIGNED =    127 ,
        LONG =  126 ,
        DPOIDPOI =  125 ,
        VOID =  124 ,
        FLOAT =     123 ,
        CHAR =  122 ,
        INT =   121 ,
        DOUBLE =    120 ,
        TYPENAME =  119 ,
        CLASS =     118 ,
        UNION =     117 ,
        STRUCT =    116 ,
        ENUM =  115 ,
        CONST =     114 ,
        FRIEND =    113 ,
        VIRTUAL =   112 ,
        INLINE =    111 ,
        VOLATILE =  110 ,
        REGISTER =  109 ,
        EXTERN =    108 ,
        STATIC =    107 ,
        AUTO =  106 ,
        FUNC_SPEC =     105 ,
        TRY_UPPER =     104 ,
        END_CATCH =     103 ,
        END_CATCH_ALL =     102 ,
        AND_CATCH =     101 ,
        CATCH_UPPER =   100 ,
        CATCH_ALL =     99 ,
        END_MESSAGE_MAP =   98 ,
        BEGIN_MESSAGE_MAP =     97 ,
        DECLARE_MESSAGE_MAP =   96 ,
        IMPLEMENT_SERIAL =  95 ,
        IMPLEMENT_DYNCREATE =   94 ,
        IMPLEMENT_DYNAMIC =     93 ,
        DECLARE_SERIAL =    92 ,
        DECLARE_DYNAMIC =   91 ,
        PUSH_FUNCTION =     90 ,
        PUSH_ARGUMENT =     89 ,
        UNDEF_CONTENT =     88 ,
        SMALL_PRAGMA_CONTENT =  87 ,
        PRAGMA_CONTENT =    86 ,
        PRAGMA_ENUM_VERT =  85 ,
        PRAGMA_SPACE_ARROW =    84 ,
        PRAGMA_PARAMETERS =     83 ,
        PRAGMA_PARAMETERS_UNDER =   82 ,
        PRAGMA_FUNC_HEADER =    81 ,
        PRAGMA_INDENT_FUNCTION_TYPE =   80 ,
        PRAGMA_COMMENT_PLUS =   79 ,
        PRAGMA_COMMENT_END =    78 ,
        PRAGMA_COMMENT_MIDDLE =     77 ,
        PRAGMA_COMMENT_START =  76 ,
        PRAGMA_MARGIN =     75 ,
        PRAGMA_DECL_ALIGN =     74 ,
        PRAGMA_ASSIGN_ALIGN =   73 ,
        PRAGMA_SINGLE_SWITCH_INDENT =   72 ,
        PRAGMA_SIMPLIFY =   71 ,
        PRAGMA_BRACE_ALIGN =    70 ,
        PRAGMA_MODE =   69 ,
        PRAGMA_RANGE =  68 ,
        PRAGMA_TAB =    67 ,
        PRAGMA_TAB_DIRECTIVE =  66 ,
        PRAGMA_CONFIG =     65 ,
        PRAGMA_NOT_MANAGED =    64 ,
        PRAGMA_MANAGED =    63 ,
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
#define NODE_LIST_metachop  376
#define NODE_TREE_metachop  375
#define SPACE_metachop  374
#define SEP_OMIT_metachop   373
#define SEP_BEFORE_metachop     372
#define SEP_AFTER_metachop  371
#define AFERAFER_metachop   370
#define ALINEA_metachop     369
#define CHOP_DEF_metachop   368
#define NIL_metachop    367
#define IN_LANG_metachop    366
#define NEXT_metachop   365
#define DEF_IDENT_metachop  364
#define BOX_metachop    363
#define EXPO_metachop   362
#define EXPO_AFF_metachop   361
#define ETOIETOIEGAL_metachop   360
#define IN_metachop     359
#define PARSE_metachop  358
#define NEXTL_metachop  357
#define VALUE_metachop  356
#define INFESUPE_metachop   355
#define FOREACH_metachop    354
#define INFESEPOSUPE_metachop   353
#define INFESEPBSUPE_metachop   352
#define INFESEPASUPE_metachop   351
#define AOUVAOUV_metachop   350
#define ARRO_metachop   349
#define NL_BEG_metachop     348
#define TAB_BEG_metachop    347
#define SPACE_BEG_metachop  346
#define MAKETREE_SUP_metachop   345
#define MAKETREE_INF_metachop   344
#define PARSE_ELEM_metachop     343
#define SIMP_ETOI_metachop  342
#define ETOI_ETOI_metachop  341
#define BDECR_metachop  340
#define BINCR_metachop  339
#define ADDR_metachop   338
#define NOT_metachop    337
#define LNEG_metachop   336
#define POS_metachop    335
#define NEG_metachop    334
#define PARAM_TYPE_metachop     333
#define STRING_LIST_metachop    332
#define LABEL_metachop  331
#define THROW_ANSI_metachop     330
#define ELSE_metachop   329
#define TUNSIGNED_metachop  328
#define TSIGNED_metachop    327
#define TFLOAT_metachop     326
#define TDOUBLE_metachop    325
#define TIDENT_metachop     324
#define RSHI_metachop   323
#define LSHI_metachop   322
#define LT_metachop     321
#define GT_metachop     320
#define GEQU_metachop   319
#define LEQU_metachop   318
#define SPACE_ARROW_metachop    317
#define TAB_DIRECTIVE_metachop  316
#define ENUM_PARAMETERS_UNDER_metachop  315
#define ENUM_VERT_VALUE_metachop    314
#define PROTECT_MEMB_metachop   313
#define LANGUAGE_metachop   312
#define EXP_metachop    311
#define ADECR_metachop  310
#define AINCR_metachop  309
#define ARROW_metachop  308
#define REF_metachop    307
#define EXP_ARRAY_metachop  306
#define EXP_LIST_metachop   305
#define ARROW_MEMB_metachop     304
#define DOT_MEMB_metachop   303
#define POINETOI_metachop   302
#define TIRESUPEETOI_metachop   301
#define TIRESUPE_metachop   300
#define SUPESUPE_metachop   299
#define INFEINFE_metachop   298
#define SUPEEGAL_metachop   297
#define INFEEGAL_metachop   296
#define NONE_metachop   295
#define NEW_DECLARATOR_metachop     294
#define USING_NAMESPACE_metachop    293
#define NAMESPACE_ALIAS_metachop    292
#define REM_metachop    291
#define DIV_metachop    290
#define MUL_metachop    289
#define POURC_metachop  288
#define MESSAGE_MAP_metachop    287
#define MACRO_metachop  286
#define TCHAR_metachop  285
#define TSHORT_metachop     284
#define TLONG_metachop  283
#define TINT_metachop   282
#define OR_metachop     281
#define VBARVBAR_metachop   280
#define AND_metachop    279
#define ETCOETCO_metachop   278
#define COMPOUND_EXT_metachop   277
#define EXTERNAL_metachop   276
#define INITIALIZER_metachop    275
#define LOR_metachop    274
#define VBAR_metachop   273
#define FUNC_metachop   272
#define ALL_OF_metachop     271
#define STAT_VOID_metachop  270
#define TEMPLATE_DECL_metachop  269
#define SUPE_metachop   268
#define CLASS_PARAM_metachop    267
#define EXP_SEQ_metachop    266
#define LXOR_metachop   265
#define CHAP_metachop   264
#define EXCEPTION_LIST_metachop     263
#define EXCEPTION_ANSI_metachop     262
#define EXCEPTION_metachop  261
#define NEQU_metachop   260
#define EQU_metachop    259
#define EXCLEGAL_metachop   258
#define EGALEGAL_metachop   257
#define PRAGMA_metachop     256
#define PARAMETERS_metachop     255
#define FUNC_HEADER_metachop    254
#define INDENT_FUNCTION_TYPE_metachop   253
#define COMMENT_PLUS_metachop   252
#define COMMENT_END_metachop    251
#define COMMENT_MIDDLE_metachop     250
#define COMMENT_START_metachop  249
#define MARGIN_VALUE_metachop   248
#define BRACE_ALIGN_VALUE_metachop  247
#define DECL_ALIGN_metachop     246
#define ASSIGN_ALIGN_metachop   245
#define SINGLE_SWITCH_INDENT_VALUE_metachop     244
#define SIMPLIFY_VALUE_metachop     243
#define SIMPLIFY_metachop   242
#define MODE_VALUE_metachop     241
#define TAB_VALUE_metachop  240
#define CONFIG_metachop     239
#define NOT_MANAGED_metachop    238
#define NO_PRETTY_metachop  237
#define ALINE_metachop  236
#define ERROR_metachop  235
#define UNDEF_metachop  234
#define TYP_AFF_CALL_metachop   233
#define MEMBER_DECLARATOR_metachop  232
#define TYP_ARRAY_metachop  231
#define CFER_metachop   230
#define COUV_metachop   229
#define FOR_DECLARATION_metachop    228
#define DECLARATION_metachop    227
#define CTOR_INITIALIZER_metachop   226
#define CTOR_INIT_metachop  225
#define LONGLONG_metachop   224
#define IUNLONGLONG_metachop    223
#define IUNLONG_metachop    222
#define IUN_metachop    221
#define ILONGLONG_metachop  220
#define ILONG_metachop  219
#define RANGE_MODIFIER_metachop     218
#define COND_AFF_metachop   217
#define INTE_metachop   216
#define COMPOUND_metachop   215
#define CLASS_DECL_metachop     214
#define AFER_metachop   213
#define CATCH_ANSI_metachop     212
#define EXCEPT_ANSI_ALL_metachop    211
#define CAST_metachop   210
#define DPOI_metachop   209
#define TYP_BIT_metachop    208
#define PROTECT_metachop    207
#define BASE_LIST_metachop  206
#define XOR_AFF_metachop    205
#define OR_AFF_metachop     204
#define AND_AFF_metachop    203
#define RSH_AFF_metachop    202
#define LSH_AFF_metachop    201
#define MIN_AFF_metachop    200
#define PLU_AFF_metachop    199
#define REM_AFF_metachop    198
#define DIV_AFF_metachop    197
#define MUL_AFF_metachop    196
#define AFF_metachop    195
#define VAR_LIST_metachop   194
#define TYP_LIST_metachop   193
#define TYP_AFF_metachop    192
#define ABST_DECLARATOR_metachop    191
#define DECLARATOR_metachop     190
#define POINPOINPOIN_metachop   189
#define LAND_metachop   188
#define INIT_NEW_metachop   187
#define VIRG_metachop   186
#define QUALIFIED_metachop  185
#define MINUS_metachop  184
#define TYP_metachop    183
#define PFER_metachop   182
#define DESTRUCT_metachop   181
#define TYP_REF_metachop    180
#define TYP_ADDR_metachop   179
#define INFE_metachop   178
#define USING_metachop  177
#define NAMESPACE_metachop  176
#define TYPEDEF_metachop    175
#define TEMPLATE_metachop   174
#define CATCH_metachop  173
#define PUBLIC_metachop     172
#define PROTECTED_metachop  171
#define PRIVATE_metachop    170
#define CHAPEGAL_metachop   169
#define VBAREGAL_metachop   168
#define ETCOEGAL_metachop   167
#define SUPESUPEEGAL_metachop   166
#define INFEINFEEGAL_metachop   165
#define TIREEGAL_metachop   164
#define PLUSEGAL_metachop   163
#define POURCEGAL_metachop  162
#define ETOIEGAL_metachop   161
#define EGAL_metachop   160
#define ASM_metachop    159
#define VA_ARG_metachop     158
#define DELETE_metachop     157
#define NEW_metachop    156
#define SIZEOF_metachop     155
#define TIRETIRE_metachop   154
#define PLUSPLUS_metachop   153
#define EXCL_metachop   152
#define PLUS_metachop   151
#define TIRE_metachop   150
#define POUV_metachop   149
#define DEFAULT_metachop    148
#define CASE_metachop   147
#define TRY_metachop    146
#define THROW_metachop  145
#define FORALLSONS_metachop     144
#define WHILE_metachop  143
#define SWITCH_metachop     142
#define RETURN_metachop     141
#define PVIR_metachop   140
#define IF_metachop     139
#define FOR_metachop    138
#define AOUV_metachop   137
#define DO_metachop     136
#define CONTINUE_metachop   135
#define BREAK_metachop  134
#define OPERATOR_metachop   133
#define TILD_metachop   132
#define ETCO_metachop   131
#define ETOI_metachop   130
#define SHORT_metachop  129
#define UNSIGNED_metachop   128
#define SIGNED_metachop     127
#define LONG_metachop   126
#define DPOIDPOI_metachop   125
#define VOID_metachop   124
#define FLOAT_metachop  123
#define CHAR_metachop   122
#define INT_metachop    121
#define DOUBLE_metachop     120
#define TYPENAME_metachop   119
#define CLASS_metachop  118
#define UNION_metachop  117
#define STRUCT_metachop     116
#define ENUM_metachop   115
#define CONST_metachop  114
#define FRIEND_metachop     113
#define VIRTUAL_metachop    112
#define INLINE_metachop     111
#define VOLATILE_metachop   110
#define REGISTER_metachop   109
#define EXTERN_metachop     108
#define STATIC_metachop     107
#define AUTO_metachop   106
#define FUNC_SPEC_metachop  105
#define TRY_UPPER_metachop  104
#define END_CATCH_metachop  103
#define END_CATCH_ALL_metachop  102
#define AND_CATCH_metachop  101
#define CATCH_UPPER_metachop    100
#define CATCH_ALL_metachop  99
#define END_MESSAGE_MAP_metachop    98
#define BEGIN_MESSAGE_MAP_metachop  97
#define DECLARE_MESSAGE_MAP_metachop    96
#define IMPLEMENT_SERIAL_metachop   95
#define IMPLEMENT_DYNCREATE_metachop    94
#define IMPLEMENT_DYNAMIC_metachop  93
#define DECLARE_SERIAL_metachop     92
#define DECLARE_DYNAMIC_metachop    91
#define PUSH_FUNCTION_metachop  90
#define PUSH_ARGUMENT_metachop  89
#define UNDEF_CONTENT_metachop  88
#define SMALL_PRAGMA_CONTENT_metachop   87
#define PRAGMA_CONTENT_metachop     86
#define PRAGMA_ENUM_VERT_metachop   85
#define PRAGMA_SPACE_ARROW_metachop     84
#define PRAGMA_PARAMETERS_metachop  83
#define PRAGMA_PARAMETERS_UNDER_metachop    82
#define PRAGMA_FUNC_HEADER_metachop     81
#define PRAGMA_INDENT_FUNCTION_TYPE_metachop    80
#define PRAGMA_COMMENT_PLUS_metachop    79
#define PRAGMA_COMMENT_END_metachop     78
#define PRAGMA_COMMENT_MIDDLE_metachop  77
#define PRAGMA_COMMENT_START_metachop   76
#define PRAGMA_MARGIN_metachop  75
#define PRAGMA_DECL_ALIGN_metachop  74
#define PRAGMA_ASSIGN_ALIGN_metachop    73
#define PRAGMA_SINGLE_SWITCH_INDENT_metachop    72
#define PRAGMA_SIMPLIFY_metachop    71
#define PRAGMA_BRACE_ALIGN_metachop     70
#define PRAGMA_MODE_metachop    69
#define PRAGMA_RANGE_metachop   68
#define PRAGMA_TAB_metachop     67
#define PRAGMA_TAB_DIRECTIVE_metachop   66
#define PRAGMA_CONFIG_metachop  65
#define PRAGMA_NOT_MANAGED_metachop     64
#define PRAGMA_MANAGED_metachop     63
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
