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
    static signed char * _tokenArray [162];
    static int (chopb::*(_tokenFuncArray [162])) ();
    static int _tokenNbFuncArray [162];

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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     376
#define NODE_TREE_chopb     375
#define SPACE_chopb     374
#define SEP_OMIT_chopb  373
#define SEP_BEFORE_chopb    372
#define SEP_AFTER_chopb     371
#define AFERAFER_chopb  370
#define ALINEA_chopb    369
#define CHOP_DEF_chopb  368
#define NIL_chopb   367
#define IN_LANG_chopb   366
#define NEXT_chopb  365
#define DEF_IDENT_chopb     364
#define BOX_chopb   363
#define EXPO_chopb  362
#define EXPO_AFF_chopb  361
#define ETOIETOIEGAL_chopb  360
#define IN_chopb    359
#define PARSE_chopb     358
#define NEXTL_chopb     357
#define VALUE_chopb     356
#define INFESUPE_chopb  355
#define FOREACH_chopb   354
#define INFESEPOSUPE_chopb  353
#define INFESEPBSUPE_chopb  352
#define INFESEPASUPE_chopb  351
#define AOUVAOUV_chopb  350
#define ARRO_chopb  349
#define NL_BEG_chopb    348
#define TAB_BEG_chopb   347
#define SPACE_BEG_chopb     346
#define MAKETREE_SUP_chopb  345
#define MAKETREE_INF_chopb  344
#define PARSE_ELEM_chopb    343
#define SIMP_ETOI_chopb     342
#define ETOI_ETOI_chopb     341
#define BDECR_chopb     340
#define BINCR_chopb     339
#define ADDR_chopb  338
#define NOT_chopb   337
#define LNEG_chopb  336
#define POS_chopb   335
#define NEG_chopb   334
#define PARAM_TYPE_chopb    333
#define STRING_LIST_chopb   332
#define LABEL_chopb     331
#define THROW_ANSI_chopb    330
#define ELSE_chopb  329
#define TUNSIGNED_chopb     328
#define TSIGNED_chopb   327
#define TFLOAT_chopb    326
#define TDOUBLE_chopb   325
#define TIDENT_chopb    324
#define RSHI_chopb  323
#define LSHI_chopb  322
#define LT_chopb    321
#define GT_chopb    320
#define GEQU_chopb  319
#define LEQU_chopb  318
#define SPACE_ARROW_chopb   317
#define TAB_DIRECTIVE_chopb     316
#define ENUM_PARAMETERS_UNDER_chopb     315
#define ENUM_VERT_VALUE_chopb   314
#define PROTECT_MEMB_chopb  313
#define LANGUAGE_chopb  312
#define EXP_chopb   311
#define ADECR_chopb     310
#define AINCR_chopb     309
#define ARROW_chopb     308
#define REF_chopb   307
#define EXP_ARRAY_chopb     306
#define EXP_LIST_chopb  305
#define ARROW_MEMB_chopb    304
#define DOT_MEMB_chopb  303
#define POINETOI_chopb  302
#define TIRESUPEETOI_chopb  301
#define TIRESUPE_chopb  300
#define SUPESUPE_chopb  299
#define INFEINFE_chopb  298
#define SUPEEGAL_chopb  297
#define INFEEGAL_chopb  296
#define NONE_chopb  295
#define NEW_DECLARATOR_chopb    294
#define USING_NAMESPACE_chopb   293
#define NAMESPACE_ALIAS_chopb   292
#define REM_chopb   291
#define DIV_chopb   290
#define MUL_chopb   289
#define POURC_chopb     288
#define MESSAGE_MAP_chopb   287
#define MACRO_chopb     286
#define TCHAR_chopb     285
#define TSHORT_chopb    284
#define TLONG_chopb     283
#define TINT_chopb  282
#define OR_chopb    281
#define VBARVBAR_chopb  280
#define AND_chopb   279
#define ETCOETCO_chopb  278
#define COMPOUND_EXT_chopb  277
#define EXTERNAL_chopb  276
#define INITIALIZER_chopb   275
#define LOR_chopb   274
#define VBAR_chopb  273
#define FUNC_chopb  272
#define ALL_OF_chopb    271
#define STAT_VOID_chopb     270
#define TEMPLATE_DECL_chopb     269
#define SUPE_chopb  268
#define CLASS_PARAM_chopb   267
#define EXP_SEQ_chopb   266
#define LXOR_chopb  265
#define CHAP_chopb  264
#define EXCEPTION_LIST_chopb    263
#define EXCEPTION_ANSI_chopb    262
#define EXCEPTION_chopb     261
#define NEQU_chopb  260
#define EQU_chopb   259
#define EXCLEGAL_chopb  258
#define EGALEGAL_chopb  257
#define PRAGMA_chopb    256
#define PARAMETERS_chopb    255
#define FUNC_HEADER_chopb   254
#define INDENT_FUNCTION_TYPE_chopb  253
#define COMMENT_PLUS_chopb  252
#define COMMENT_END_chopb   251
#define COMMENT_MIDDLE_chopb    250
#define COMMENT_START_chopb     249
#define MARGIN_VALUE_chopb  248
#define BRACE_ALIGN_VALUE_chopb     247
#define DECL_ALIGN_chopb    246
#define ASSIGN_ALIGN_chopb  245
#define SINGLE_SWITCH_INDENT_VALUE_chopb    244
#define SIMPLIFY_VALUE_chopb    243
#define SIMPLIFY_chopb  242
#define MODE_VALUE_chopb    241
#define TAB_VALUE_chopb     240
#define CONFIG_chopb    239
#define NOT_MANAGED_chopb   238
#define NO_PRETTY_chopb     237
#define ALINE_chopb     236
#define ERROR_chopb     235
#define UNDEF_chopb     234
#define TYP_AFF_CALL_chopb  233
#define MEMBER_DECLARATOR_chopb     232
#define TYP_ARRAY_chopb     231
#define CFER_chopb  230
#define COUV_chopb  229
#define FOR_DECLARATION_chopb   228
#define DECLARATION_chopb   227
#define CTOR_INITIALIZER_chopb  226
#define CTOR_INIT_chopb     225
#define LONGLONG_chopb  224
#define IUNLONGLONG_chopb   223
#define IUNLONG_chopb   222
#define IUN_chopb   221
#define ILONGLONG_chopb     220
#define ILONG_chopb     219
#define RANGE_MODIFIER_chopb    218
#define COND_AFF_chopb  217
#define INTE_chopb  216
#define COMPOUND_chopb  215
#define CLASS_DECL_chopb    214
#define AFER_chopb  213
#define CATCH_ANSI_chopb    212
#define EXCEPT_ANSI_ALL_chopb   211
#define CAST_chopb  210
#define DPOI_chopb  209
#define TYP_BIT_chopb   208
#define PROTECT_chopb   207
#define BASE_LIST_chopb     206
#define XOR_AFF_chopb   205
#define OR_AFF_chopb    204
#define AND_AFF_chopb   203
#define RSH_AFF_chopb   202
#define LSH_AFF_chopb   201
#define MIN_AFF_chopb   200
#define PLU_AFF_chopb   199
#define REM_AFF_chopb   198
#define DIV_AFF_chopb   197
#define MUL_AFF_chopb   196
#define AFF_chopb   195
#define VAR_LIST_chopb  194
#define TYP_LIST_chopb  193
#define TYP_AFF_chopb   192
#define ABST_DECLARATOR_chopb   191
#define DECLARATOR_chopb    190
#define POINPOINPOIN_chopb  189
#define LAND_chopb  188
#define INIT_NEW_chopb  187
#define VIRG_chopb  186
#define QUALIFIED_chopb     185
#define MINUS_chopb     184
#define TYP_chopb   183
#define PFER_chopb  182
#define DESTRUCT_chopb  181
#define TYP_REF_chopb   180
#define TYP_ADDR_chopb  179
#define INFE_chopb  178
#define USING_chopb     177
#define NAMESPACE_chopb     176
#define TYPEDEF_chopb   175
#define TEMPLATE_chopb  174
#define CATCH_chopb     173
#define PUBLIC_chopb    172
#define PROTECTED_chopb     171
#define PRIVATE_chopb   170
#define CHAPEGAL_chopb  169
#define VBAREGAL_chopb  168
#define ETCOEGAL_chopb  167
#define SUPESUPEEGAL_chopb  166
#define INFEINFEEGAL_chopb  165
#define TIREEGAL_chopb  164
#define PLUSEGAL_chopb  163
#define POURCEGAL_chopb     162
#define ETOIEGAL_chopb  161
#define EGAL_chopb  160
#define ASM_chopb   159
#define VA_ARG_chopb    158
#define DELETE_chopb    157
#define NEW_chopb   156
#define SIZEOF_chopb    155
#define TIRETIRE_chopb  154
#define PLUSPLUS_chopb  153
#define EXCL_chopb  152
#define PLUS_chopb  151
#define TIRE_chopb  150
#define POUV_chopb  149
#define DEFAULT_chopb   148
#define CASE_chopb  147
#define TRY_chopb   146
#define THROW_chopb     145
#define FORALLSONS_chopb    144
#define WHILE_chopb     143
#define SWITCH_chopb    142
#define RETURN_chopb    141
#define PVIR_chopb  140
#define IF_chopb    139
#define FOR_chopb   138
#define AOUV_chopb  137
#define DO_chopb    136
#define CONTINUE_chopb  135
#define BREAK_chopb     134
#define OPERATOR_chopb  133
#define TILD_chopb  132
#define ETCO_chopb  131
#define ETOI_chopb  130
#define SHORT_chopb     129
#define UNSIGNED_chopb  128
#define SIGNED_chopb    127
#define LONG_chopb  126
#define DPOIDPOI_chopb  125
#define VOID_chopb  124
#define FLOAT_chopb     123
#define CHAR_chopb  122
#define INT_chopb   121
#define DOUBLE_chopb    120
#define TYPENAME_chopb  119
#define CLASS_chopb     118
#define UNION_chopb     117
#define STRUCT_chopb    116
#define ENUM_chopb  115
#define CONST_chopb     114
#define FRIEND_chopb    113
#define VIRTUAL_chopb   112
#define INLINE_chopb    111
#define VOLATILE_chopb  110
#define REGISTER_chopb  109
#define EXTERN_chopb    108
#define STATIC_chopb    107
#define AUTO_chopb  106
#define FUNC_SPEC_chopb     105
#define TRY_UPPER_chopb     104
#define END_CATCH_chopb     103
#define END_CATCH_ALL_chopb     102
#define AND_CATCH_chopb     101
#define CATCH_UPPER_chopb   100
#define CATCH_ALL_chopb     99
#define END_MESSAGE_MAP_chopb   98
#define BEGIN_MESSAGE_MAP_chopb     97
#define DECLARE_MESSAGE_MAP_chopb   96
#define IMPLEMENT_SERIAL_chopb  95
#define IMPLEMENT_DYNCREATE_chopb   94
#define IMPLEMENT_DYNAMIC_chopb     93
#define DECLARE_SERIAL_chopb    92
#define DECLARE_DYNAMIC_chopb   91
#define PUSH_FUNCTION_chopb     90
#define PUSH_ARGUMENT_chopb     89
#define UNDEF_CONTENT_chopb     88
#define SMALL_PRAGMA_CONTENT_chopb  87
#define PRAGMA_CONTENT_chopb    86
#define PRAGMA_ENUM_VERT_chopb  85
#define PRAGMA_SPACE_ARROW_chopb    84
#define PRAGMA_PARAMETERS_chopb     83
#define PRAGMA_PARAMETERS_UNDER_chopb   82
#define PRAGMA_FUNC_HEADER_chopb    81
#define PRAGMA_INDENT_FUNCTION_TYPE_chopb   80
#define PRAGMA_COMMENT_PLUS_chopb   79
#define PRAGMA_COMMENT_END_chopb    78
#define PRAGMA_COMMENT_MIDDLE_chopb     77
#define PRAGMA_COMMENT_START_chopb  76
#define PRAGMA_MARGIN_chopb     75
#define PRAGMA_DECL_ALIGN_chopb     74
#define PRAGMA_ASSIGN_ALIGN_chopb   73
#define PRAGMA_SINGLE_SWITCH_INDENT_chopb   72
#define PRAGMA_SIMPLIFY_chopb   71
#define PRAGMA_BRACE_ALIGN_chopb    70
#define PRAGMA_MODE_chopb   69
#define PRAGMA_RANGE_chopb  68
#define PRAGMA_TAB_chopb    67
#define PRAGMA_TAB_DIRECTIVE_chopb  66
#define PRAGMA_CONFIG_chopb     65
#define PRAGMA_NOT_MANAGED_chopb    64
#define PRAGMA_MANAGED_chopb    63
#define PRAGMA_NOPRETTY_chopb   62
#define PRAGMA_PRETTY_chopb     61
#define INCLUDE_LOCAL_chopb     60
#define INCLUDE_SYS_chopb   59
#define END_LINE_chopb  58
#define DEFINE_NAME_chopb   57
#define DEFINED_NOT_CONTINUED_chopb     56
#define DEFINED_CONTINUED_chopb     55
#define POINT_chopb     54
#define SLAS_chopb  53
#define SLASEGAL_chopb  52
#define CARRIAGE_RETURN_chopb   51
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
