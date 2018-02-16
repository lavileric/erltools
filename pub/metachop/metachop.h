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
        NODE_LIST =     377 ,
        NODE_TREE =     376 ,
        SPACE =     375 ,
        SEP_OMIT =  374 ,
        SEP_BEFORE =    373 ,
        SEP_AFTER =     372 ,
        AFERAFER =  371 ,
        ALINEA =    370 ,
        CHOP_DEF =  369 ,
        NIL =   368 ,
        IN_LANG =   367 ,
        NEXT =  366 ,
        DEF_IDENT =     365 ,
        BOX =   364 ,
        EXPO =  363 ,
        EXPO_AFF =  362 ,
        ETOIETOIEGAL =  361 ,
        IN =    360 ,
        PARSE =     359 ,
        NEXTL =     358 ,
        VALUE =     357 ,
        INFESUPE =  356 ,
        FOREACH =   355 ,
        INFESEPOSUPE =  354 ,
        INFESEPBSUPE =  353 ,
        INFESEPASUPE =  352 ,
        AOUVAOUV =  351 ,
        ARRO =  350 ,
        NL_BEG =    349 ,
        TAB_BEG =   348 ,
        SPACE_BEG =     347 ,
        MAKETREE_SUP =  346 ,
        MAKETREE_INF =  345 ,
        PARSE_ELEM =    344 ,
        SIMP_ETOI =     343 ,
        ETOI_ETOI =     342 ,
        BDECR =     341 ,
        BINCR =     340 ,
        ADDR =  339 ,
        NOT =   338 ,
        LNEG =  337 ,
        POS =   336 ,
        NEG =   335 ,
        PARAM_TYPE =    334 ,
        STRING_LIST =   333 ,
        LABEL =     332 ,
        THROW_ANSI =    331 ,
        ELSE =  330 ,
        TUNSIGNED =     329 ,
        TSIGNED =   328 ,
        TFLOAT =    327 ,
        TDOUBLE =   326 ,
        TIDENT =    325 ,
        RSHI =  324 ,
        LSHI =  323 ,
        LT =    322 ,
        GT =    321 ,
        GEQU =  320 ,
        LEQU =  319 ,
        SPACE_ARROW =   318 ,
        TAB_DIRECTIVE =     317 ,
        ENUM_PARAMETERS_UNDER =     316 ,
        ENUM_VERT_VALUE =   315 ,
        PROTECT_MEMB =  314 ,
        LANGUAGE =  313 ,
        EXP =   312 ,
        ADECR =     311 ,
        AINCR =     310 ,
        ARROW =     309 ,
        REF =   308 ,
        EXP_ARRAY =     307 ,
        EXP_LIST =  306 ,
        ARROW_MEMB =    305 ,
        DOT_MEMB =  304 ,
        POINETOI =  303 ,
        TIRESUPEETOI =  302 ,
        TIRESUPE =  301 ,
        SUPESUPE =  300 ,
        INFEINFE =  299 ,
        SUPEEGAL =  298 ,
        INFEEGAL =  297 ,
        NONE =  296 ,
        NEW_DECLARATOR =    295 ,
        USING_NAMESPACE =   294 ,
        NAMESPACE_ALIAS =   293 ,
        REM =   292 ,
        DIV =   291 ,
        MUL =   290 ,
        POURC =     289 ,
        MESSAGE_MAP =   288 ,
        MACRO =     287 ,
        TCHAR =     286 ,
        TSHORT =    285 ,
        TLONG =     284 ,
        TINT =  283 ,
        OR =    282 ,
        VBARVBAR =  281 ,
        AND =   280 ,
        ETCOETCO =  279 ,
        COMPOUND_EXT =  278 ,
        EXTERNAL =  277 ,
        INITIALIZER =   276 ,
        LOR =   275 ,
        VBAR =  274 ,
        FUNC =  273 ,
        ALL_OF =    272 ,
        STAT_VOID =     271 ,
        TEMPLATE_DECL =     270 ,
        SUPE =  269 ,
        CLASS_PARAM =   268 ,
        EXP_SEQ =   267 ,
        LXOR =  266 ,
        CHAP =  265 ,
        EXCEPTION_LIST =    264 ,
        EXCEPTION_ANSI =    263 ,
        EXCEPTION =     262 ,
        NEQU =  261 ,
        EQU =   260 ,
        EXCLEGAL =  259 ,
        EGALEGAL =  258 ,
        PRAGMA =    257 ,
        PARAMETERS =    256 ,
        FUNC_HEADER =   255 ,
        INDENT_FUNCTION_TYPE =  254 ,
        COMMENT_PLUS =  253 ,
        COMMENT_END =   252 ,
        COMMENT_MIDDLE =    251 ,
        COMMENT_START =     250 ,
        MARGIN_VALUE =  249 ,
        BRACE_ALIGN_VALUE =     248 ,
        DECL_ALIGN =    247 ,
        ASSIGN_ALIGN =  246 ,
        SINGLE_SWITCH_INDENT_VALUE =    245 ,
        SIMPLIFY_VALUE =    244 ,
        SIMPLIFY =  243 ,
        MODE_VALUE =    242 ,
        TAB_VALUE =     241 ,
        CONFIG =    240 ,
        NOT_MANAGED =   239 ,
        NO_PRETTY =     238 ,
        ALINE =     237 ,
        ERROR =     236 ,
        UNDEF =     235 ,
        TYP_AFF_CALL =  234 ,
        MEMBER_DECLARATOR =     233 ,
        TYP_ARRAY =     232 ,
        CFER =  231 ,
        COUV =  230 ,
        FOR_DECLARATION =   229 ,
        DECLARATION =   228 ,
        CTOR_INITIALIZER =  227 ,
        CTOR_INIT =     226 ,
        LONGLONG =  225 ,
        IUNLONGLONG =   224 ,
        IUNLONG =   223 ,
        IUN =   222 ,
        ILONGLONG =     221 ,
        ILONG =     220 ,
        RANGE_MODIFIER =    219 ,
        COND_AFF =  218 ,
        INTE =  217 ,
        COMPOUND =  216 ,
        CLASS_DECL =    215 ,
        AFER =  214 ,
        CATCH_ANSI =    213 ,
        EXCEPT_ANSI_ALL =   212 ,
        CAST =  211 ,
        TYP_BIT =   210 ,
        PROTECT =   209 ,
        BASE_LIST =     208 ,
        XOR_AFF =   207 ,
        OR_AFF =    206 ,
        AND_AFF =   205 ,
        RSH_AFF =   204 ,
        LSH_AFF =   203 ,
        MIN_AFF =   202 ,
        PLU_AFF =   201 ,
        REM_AFF =   200 ,
        DIV_AFF =   199 ,
        MUL_AFF =   198 ,
        AFF =   197 ,
        VAR_LIST =  196 ,
        TYP_LIST =  195 ,
        TYP_AFF =   194 ,
        ABST_DECLARATOR =   193 ,
        DECLARATOR =    192 ,
        POINPOINPOIN =  191 ,
        LAND =  190 ,
        INIT_NEW =  189 ,
        VIRG =  188 ,
        QUALIFIED =     187 ,
        MINUS =     186 ,
        TYP =   185 ,
        PFER =  184 ,
        DESTRUCT =  183 ,
        TYP_REF =   182 ,
        TYP_ADDR =  181 ,
        INFE =  180 ,
        USING =     179 ,
        NAMESPACE =     178 ,
        TYPEDEF =   177 ,
        TEMPLATE =  176 ,
        CATCH =     175 ,
        DPOI =  174 ,
        PUBLIC =    173 ,
        PROTECTED =     172 ,
        PRIVATE =   171 ,
        CHAPEGAL =  170 ,
        VBAREGAL =  169 ,
        ETCOEGAL =  168 ,
        SUPESUPEEGAL =  167 ,
        INFEINFEEGAL =  166 ,
        TIREEGAL =  165 ,
        PLUSEGAL =  164 ,
        POURCEGAL =     163 ,
        ETOIEGAL =  162 ,
        EGAL =  161 ,
        ASM =   160 ,
        VA_ARG =    159 ,
        DELETE =    158 ,
        NEW =   157 ,
        SIZEOF =    156 ,
        TIRETIRE =  155 ,
        PLUSPLUS =  154 ,
        EXCL =  153 ,
        PLUS =  152 ,
        TIRE =  151 ,
        POUV =  150 ,
        DEFAULT =   149 ,
        CASE =  148 ,
        TRY =   147 ,
        THROW =     146 ,
        FORALLSONS =    145 ,
        WHILE =     144 ,
        SWITCH =    143 ,
        RETURN =    142 ,
        PVIR =  141 ,
        IF =    140 ,
        FOR =   139 ,
        AOUV =  138 ,
        DO =    137 ,
        CONTINUE =  136 ,
        BREAK =     135 ,
        OPERATOR =  134 ,
        TILD =  133 ,
        ETCO =  132 ,
        ETOI =  131 ,
        SHORT =     130 ,
        UNSIGNED =  129 ,
        SIGNED =    128 ,
        LONG =  127 ,
        DPOIDPOI =  126 ,
        VOID =  125 ,
        FLOAT =     124 ,
        CHAR =  123 ,
        INT =   122 ,
        DOUBLE =    121 ,
        TYPENAME =  120 ,
        CLASS =     119 ,
        UNION =     118 ,
        STRUCT =    117 ,
        ENUM =  116 ,
        CONST =     115 ,
        FRIEND =    114 ,
        VIRTUAL =   113 ,
        INLINE =    112 ,
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
#define NODE_LIST_metachop  377
#define NODE_TREE_metachop  376
#define SPACE_metachop  375
#define SEP_OMIT_metachop   374
#define SEP_BEFORE_metachop     373
#define SEP_AFTER_metachop  372
#define AFERAFER_metachop   371
#define ALINEA_metachop     370
#define CHOP_DEF_metachop   369
#define NIL_metachop    368
#define IN_LANG_metachop    367
#define NEXT_metachop   366
#define DEF_IDENT_metachop  365
#define BOX_metachop    364
#define EXPO_metachop   363
#define EXPO_AFF_metachop   362
#define ETOIETOIEGAL_metachop   361
#define IN_metachop     360
#define PARSE_metachop  359
#define NEXTL_metachop  358
#define VALUE_metachop  357
#define INFESUPE_metachop   356
#define FOREACH_metachop    355
#define INFESEPOSUPE_metachop   354
#define INFESEPBSUPE_metachop   353
#define INFESEPASUPE_metachop   352
#define AOUVAOUV_metachop   351
#define ARRO_metachop   350
#define NL_BEG_metachop     349
#define TAB_BEG_metachop    348
#define SPACE_BEG_metachop  347
#define MAKETREE_SUP_metachop   346
#define MAKETREE_INF_metachop   345
#define PARSE_ELEM_metachop     344
#define SIMP_ETOI_metachop  343
#define ETOI_ETOI_metachop  342
#define BDECR_metachop  341
#define BINCR_metachop  340
#define ADDR_metachop   339
#define NOT_metachop    338
#define LNEG_metachop   337
#define POS_metachop    336
#define NEG_metachop    335
#define PARAM_TYPE_metachop     334
#define STRING_LIST_metachop    333
#define LABEL_metachop  332
#define THROW_ANSI_metachop     331
#define ELSE_metachop   330
#define TUNSIGNED_metachop  329
#define TSIGNED_metachop    328
#define TFLOAT_metachop     327
#define TDOUBLE_metachop    326
#define TIDENT_metachop     325
#define RSHI_metachop   324
#define LSHI_metachop   323
#define LT_metachop     322
#define GT_metachop     321
#define GEQU_metachop   320
#define LEQU_metachop   319
#define SPACE_ARROW_metachop    318
#define TAB_DIRECTIVE_metachop  317
#define ENUM_PARAMETERS_UNDER_metachop  316
#define ENUM_VERT_VALUE_metachop    315
#define PROTECT_MEMB_metachop   314
#define LANGUAGE_metachop   313
#define EXP_metachop    312
#define ADECR_metachop  311
#define AINCR_metachop  310
#define ARROW_metachop  309
#define REF_metachop    308
#define EXP_ARRAY_metachop  307
#define EXP_LIST_metachop   306
#define ARROW_MEMB_metachop     305
#define DOT_MEMB_metachop   304
#define POINETOI_metachop   303
#define TIRESUPEETOI_metachop   302
#define TIRESUPE_metachop   301
#define SUPESUPE_metachop   300
#define INFEINFE_metachop   299
#define SUPEEGAL_metachop   298
#define INFEEGAL_metachop   297
#define NONE_metachop   296
#define NEW_DECLARATOR_metachop     295
#define USING_NAMESPACE_metachop    294
#define NAMESPACE_ALIAS_metachop    293
#define REM_metachop    292
#define DIV_metachop    291
#define MUL_metachop    290
#define POURC_metachop  289
#define MESSAGE_MAP_metachop    288
#define MACRO_metachop  287
#define TCHAR_metachop  286
#define TSHORT_metachop     285
#define TLONG_metachop  284
#define TINT_metachop   283
#define OR_metachop     282
#define VBARVBAR_metachop   281
#define AND_metachop    280
#define ETCOETCO_metachop   279
#define COMPOUND_EXT_metachop   278
#define EXTERNAL_metachop   277
#define INITIALIZER_metachop    276
#define LOR_metachop    275
#define VBAR_metachop   274
#define FUNC_metachop   273
#define ALL_OF_metachop     272
#define STAT_VOID_metachop  271
#define TEMPLATE_DECL_metachop  270
#define SUPE_metachop   269
#define CLASS_PARAM_metachop    268
#define EXP_SEQ_metachop    267
#define LXOR_metachop   266
#define CHAP_metachop   265
#define EXCEPTION_LIST_metachop     264
#define EXCEPTION_ANSI_metachop     263
#define EXCEPTION_metachop  262
#define NEQU_metachop   261
#define EQU_metachop    260
#define EXCLEGAL_metachop   259
#define EGALEGAL_metachop   258
#define PRAGMA_metachop     257
#define PARAMETERS_metachop     256
#define FUNC_HEADER_metachop    255
#define INDENT_FUNCTION_TYPE_metachop   254
#define COMMENT_PLUS_metachop   253
#define COMMENT_END_metachop    252
#define COMMENT_MIDDLE_metachop     251
#define COMMENT_START_metachop  250
#define MARGIN_VALUE_metachop   249
#define BRACE_ALIGN_VALUE_metachop  248
#define DECL_ALIGN_metachop     247
#define ASSIGN_ALIGN_metachop   246
#define SINGLE_SWITCH_INDENT_VALUE_metachop     245
#define SIMPLIFY_VALUE_metachop     244
#define SIMPLIFY_metachop   243
#define MODE_VALUE_metachop     242
#define TAB_VALUE_metachop  241
#define CONFIG_metachop     240
#define NOT_MANAGED_metachop    239
#define NO_PRETTY_metachop  238
#define ALINE_metachop  237
#define ERROR_metachop  236
#define UNDEF_metachop  235
#define TYP_AFF_CALL_metachop   234
#define MEMBER_DECLARATOR_metachop  233
#define TYP_ARRAY_metachop  232
#define CFER_metachop   231
#define COUV_metachop   230
#define FOR_DECLARATION_metachop    229
#define DECLARATION_metachop    228
#define CTOR_INITIALIZER_metachop   227
#define CTOR_INIT_metachop  226
#define LONGLONG_metachop   225
#define IUNLONGLONG_metachop    224
#define IUNLONG_metachop    223
#define IUN_metachop    222
#define ILONGLONG_metachop  221
#define ILONG_metachop  220
#define RANGE_MODIFIER_metachop     219
#define COND_AFF_metachop   218
#define INTE_metachop   217
#define COMPOUND_metachop   216
#define CLASS_DECL_metachop     215
#define AFER_metachop   214
#define CATCH_ANSI_metachop     213
#define EXCEPT_ANSI_ALL_metachop    212
#define CAST_metachop   211
#define TYP_BIT_metachop    210
#define PROTECT_metachop    209
#define BASE_LIST_metachop  208
#define XOR_AFF_metachop    207
#define OR_AFF_metachop     206
#define AND_AFF_metachop    205
#define RSH_AFF_metachop    204
#define LSH_AFF_metachop    203
#define MIN_AFF_metachop    202
#define PLU_AFF_metachop    201
#define REM_AFF_metachop    200
#define DIV_AFF_metachop    199
#define MUL_AFF_metachop    198
#define AFF_metachop    197
#define VAR_LIST_metachop   196
#define TYP_LIST_metachop   195
#define TYP_AFF_metachop    194
#define ABST_DECLARATOR_metachop    193
#define DECLARATOR_metachop     192
#define POINPOINPOIN_metachop   191
#define LAND_metachop   190
#define INIT_NEW_metachop   189
#define VIRG_metachop   188
#define QUALIFIED_metachop  187
#define MINUS_metachop  186
#define TYP_metachop    185
#define PFER_metachop   184
#define DESTRUCT_metachop   183
#define TYP_REF_metachop    182
#define TYP_ADDR_metachop   181
#define INFE_metachop   180
#define USING_metachop  179
#define NAMESPACE_metachop  178
#define TYPEDEF_metachop    177
#define TEMPLATE_metachop   176
#define CATCH_metachop  175
#define DPOI_metachop   174
#define PUBLIC_metachop     173
#define PROTECTED_metachop  172
#define PRIVATE_metachop    171
#define CHAPEGAL_metachop   170
#define VBAREGAL_metachop   169
#define ETCOEGAL_metachop   168
#define SUPESUPEEGAL_metachop   167
#define INFEINFEEGAL_metachop   166
#define TIREEGAL_metachop   165
#define PLUSEGAL_metachop   164
#define POURCEGAL_metachop  163
#define ETOIEGAL_metachop   162
#define EGAL_metachop   161
#define ASM_metachop    160
#define VA_ARG_metachop     159
#define DELETE_metachop     158
#define NEW_metachop    157
#define SIZEOF_metachop     156
#define TIRETIRE_metachop   155
#define PLUSPLUS_metachop   154
#define EXCL_metachop   153
#define PLUS_metachop   152
#define TIRE_metachop   151
#define POUV_metachop   150
#define DEFAULT_metachop    149
#define CASE_metachop   148
#define TRY_metachop    147
#define THROW_metachop  146
#define FORALLSONS_metachop     145
#define WHILE_metachop  144
#define SWITCH_metachop     143
#define RETURN_metachop     142
#define PVIR_metachop   141
#define IF_metachop     140
#define FOR_metachop    139
#define AOUV_metachop   138
#define DO_metachop     137
#define CONTINUE_metachop   136
#define BREAK_metachop  135
#define OPERATOR_metachop   134
#define TILD_metachop   133
#define ETCO_metachop   132
#define ETOI_metachop   131
#define SHORT_metachop  130
#define UNSIGNED_metachop   129
#define SIGNED_metachop     128
#define LONG_metachop   127
#define DPOIDPOI_metachop   126
#define VOID_metachop   125
#define FLOAT_metachop  124
#define CHAR_metachop   123
#define INT_metachop    122
#define DOUBLE_metachop     121
#define TYPENAME_metachop   120
#define CLASS_metachop  119
#define UNION_metachop  118
#define STRUCT_metachop     117
#define ENUM_metachop   116
#define CONST_metachop  115
#define FRIEND_metachop     114
#define VIRTUAL_metachop    113
#define INLINE_metachop     112
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
