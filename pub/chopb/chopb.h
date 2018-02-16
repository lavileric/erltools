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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     377
#define NODE_TREE_chopb     376
#define SPACE_chopb     375
#define SEP_OMIT_chopb  374
#define SEP_BEFORE_chopb    373
#define SEP_AFTER_chopb     372
#define AFERAFER_chopb  371
#define ALINEA_chopb    370
#define CHOP_DEF_chopb  369
#define NIL_chopb   368
#define IN_LANG_chopb   367
#define NEXT_chopb  366
#define DEF_IDENT_chopb     365
#define BOX_chopb   364
#define EXPO_chopb  363
#define EXPO_AFF_chopb  362
#define ETOIETOIEGAL_chopb  361
#define IN_chopb    360
#define PARSE_chopb     359
#define NEXTL_chopb     358
#define VALUE_chopb     357
#define INFESUPE_chopb  356
#define FOREACH_chopb   355
#define INFESEPOSUPE_chopb  354
#define INFESEPBSUPE_chopb  353
#define INFESEPASUPE_chopb  352
#define AOUVAOUV_chopb  351
#define ARRO_chopb  350
#define NL_BEG_chopb    349
#define TAB_BEG_chopb   348
#define SPACE_BEG_chopb     347
#define MAKETREE_SUP_chopb  346
#define MAKETREE_INF_chopb  345
#define PARSE_ELEM_chopb    344
#define SIMP_ETOI_chopb     343
#define ETOI_ETOI_chopb     342
#define BDECR_chopb     341
#define BINCR_chopb     340
#define ADDR_chopb  339
#define NOT_chopb   338
#define LNEG_chopb  337
#define POS_chopb   336
#define NEG_chopb   335
#define PARAM_TYPE_chopb    334
#define STRING_LIST_chopb   333
#define LABEL_chopb     332
#define THROW_ANSI_chopb    331
#define ELSE_chopb  330
#define TUNSIGNED_chopb     329
#define TSIGNED_chopb   328
#define TFLOAT_chopb    327
#define TDOUBLE_chopb   326
#define TIDENT_chopb    325
#define RSHI_chopb  324
#define LSHI_chopb  323
#define LT_chopb    322
#define GT_chopb    321
#define GEQU_chopb  320
#define LEQU_chopb  319
#define SPACE_ARROW_chopb   318
#define TAB_DIRECTIVE_chopb     317
#define ENUM_PARAMETERS_UNDER_chopb     316
#define ENUM_VERT_VALUE_chopb   315
#define PROTECT_MEMB_chopb  314
#define LANGUAGE_chopb  313
#define EXP_chopb   312
#define ADECR_chopb     311
#define AINCR_chopb     310
#define ARROW_chopb     309
#define REF_chopb   308
#define EXP_ARRAY_chopb     307
#define EXP_LIST_chopb  306
#define ARROW_MEMB_chopb    305
#define DOT_MEMB_chopb  304
#define POINETOI_chopb  303
#define TIRESUPEETOI_chopb  302
#define TIRESUPE_chopb  301
#define SUPESUPE_chopb  300
#define INFEINFE_chopb  299
#define SUPEEGAL_chopb  298
#define INFEEGAL_chopb  297
#define NONE_chopb  296
#define NEW_DECLARATOR_chopb    295
#define USING_NAMESPACE_chopb   294
#define NAMESPACE_ALIAS_chopb   293
#define REM_chopb   292
#define DIV_chopb   291
#define MUL_chopb   290
#define POURC_chopb     289
#define MESSAGE_MAP_chopb   288
#define MACRO_chopb     287
#define TCHAR_chopb     286
#define TSHORT_chopb    285
#define TLONG_chopb     284
#define TINT_chopb  283
#define OR_chopb    282
#define VBARVBAR_chopb  281
#define AND_chopb   280
#define ETCOETCO_chopb  279
#define COMPOUND_EXT_chopb  278
#define EXTERNAL_chopb  277
#define INITIALIZER_chopb   276
#define LOR_chopb   275
#define VBAR_chopb  274
#define FUNC_chopb  273
#define ALL_OF_chopb    272
#define STAT_VOID_chopb     271
#define TEMPLATE_DECL_chopb     270
#define SUPE_chopb  269
#define CLASS_PARAM_chopb   268
#define EXP_SEQ_chopb   267
#define LXOR_chopb  266
#define CHAP_chopb  265
#define EXCEPTION_LIST_chopb    264
#define EXCEPTION_ANSI_chopb    263
#define EXCEPTION_chopb     262
#define NEQU_chopb  261
#define EQU_chopb   260
#define EXCLEGAL_chopb  259
#define EGALEGAL_chopb  258
#define PRAGMA_chopb    257
#define PARAMETERS_chopb    256
#define FUNC_HEADER_chopb   255
#define INDENT_FUNCTION_TYPE_chopb  254
#define COMMENT_PLUS_chopb  253
#define COMMENT_END_chopb   252
#define COMMENT_MIDDLE_chopb    251
#define COMMENT_START_chopb     250
#define MARGIN_VALUE_chopb  249
#define BRACE_ALIGN_VALUE_chopb     248
#define DECL_ALIGN_chopb    247
#define ASSIGN_ALIGN_chopb  246
#define SINGLE_SWITCH_INDENT_VALUE_chopb    245
#define SIMPLIFY_VALUE_chopb    244
#define SIMPLIFY_chopb  243
#define MODE_VALUE_chopb    242
#define TAB_VALUE_chopb     241
#define CONFIG_chopb    240
#define NOT_MANAGED_chopb   239
#define NO_PRETTY_chopb     238
#define ALINE_chopb     237
#define ERROR_chopb     236
#define UNDEF_chopb     235
#define TYP_AFF_CALL_chopb  234
#define MEMBER_DECLARATOR_chopb     233
#define TYP_ARRAY_chopb     232
#define CFER_chopb  231
#define COUV_chopb  230
#define FOR_DECLARATION_chopb   229
#define DECLARATION_chopb   228
#define CTOR_INITIALIZER_chopb  227
#define CTOR_INIT_chopb     226
#define LONGLONG_chopb  225
#define IUNLONGLONG_chopb   224
#define IUNLONG_chopb   223
#define IUN_chopb   222
#define ILONGLONG_chopb     221
#define ILONG_chopb     220
#define RANGE_MODIFIER_chopb    219
#define COND_AFF_chopb  218
#define INTE_chopb  217
#define COMPOUND_chopb  216
#define CLASS_DECL_chopb    215
#define AFER_chopb  214
#define CATCH_ANSI_chopb    213
#define EXCEPT_ANSI_ALL_chopb   212
#define CAST_chopb  211
#define TYP_BIT_chopb   210
#define PROTECT_chopb   209
#define BASE_LIST_chopb     208
#define XOR_AFF_chopb   207
#define OR_AFF_chopb    206
#define AND_AFF_chopb   205
#define RSH_AFF_chopb   204
#define LSH_AFF_chopb   203
#define MIN_AFF_chopb   202
#define PLU_AFF_chopb   201
#define REM_AFF_chopb   200
#define DIV_AFF_chopb   199
#define MUL_AFF_chopb   198
#define AFF_chopb   197
#define VAR_LIST_chopb  196
#define TYP_LIST_chopb  195
#define TYP_AFF_chopb   194
#define ABST_DECLARATOR_chopb   193
#define DECLARATOR_chopb    192
#define POINPOINPOIN_chopb  191
#define LAND_chopb  190
#define INIT_NEW_chopb  189
#define VIRG_chopb  188
#define QUALIFIED_chopb     187
#define MINUS_chopb     186
#define TYP_chopb   185
#define PFER_chopb  184
#define DESTRUCT_chopb  183
#define TYP_REF_chopb   182
#define TYP_ADDR_chopb  181
#define INFE_chopb  180
#define USING_chopb     179
#define NAMESPACE_chopb     178
#define TYPEDEF_chopb   177
#define TEMPLATE_chopb  176
#define CATCH_chopb     175
#define DPOI_chopb  174
#define PUBLIC_chopb    173
#define PROTECTED_chopb     172
#define PRIVATE_chopb   171
#define CHAPEGAL_chopb  170
#define VBAREGAL_chopb  169
#define ETCOEGAL_chopb  168
#define SUPESUPEEGAL_chopb  167
#define INFEINFEEGAL_chopb  166
#define TIREEGAL_chopb  165
#define PLUSEGAL_chopb  164
#define POURCEGAL_chopb     163
#define ETOIEGAL_chopb  162
#define EGAL_chopb  161
#define ASM_chopb   160
#define VA_ARG_chopb    159
#define DELETE_chopb    158
#define NEW_chopb   157
#define SIZEOF_chopb    156
#define TIRETIRE_chopb  155
#define PLUSPLUS_chopb  154
#define EXCL_chopb  153
#define PLUS_chopb  152
#define TIRE_chopb  151
#define POUV_chopb  150
#define DEFAULT_chopb   149
#define CASE_chopb  148
#define TRY_chopb   147
#define THROW_chopb     146
#define FORALLSONS_chopb    145
#define WHILE_chopb     144
#define SWITCH_chopb    143
#define RETURN_chopb    142
#define PVIR_chopb  141
#define IF_chopb    140
#define FOR_chopb   139
#define AOUV_chopb  138
#define DO_chopb    137
#define CONTINUE_chopb  136
#define BREAK_chopb     135
#define OPERATOR_chopb  134
#define TILD_chopb  133
#define ETCO_chopb  132
#define ETOI_chopb  131
#define SHORT_chopb     130
#define UNSIGNED_chopb  129
#define SIGNED_chopb    128
#define LONG_chopb  127
#define DPOIDPOI_chopb  126
#define VOID_chopb  125
#define FLOAT_chopb     124
#define CHAR_chopb  123
#define INT_chopb   122
#define DOUBLE_chopb    121
#define TYPENAME_chopb  120
#define CLASS_chopb     119
#define UNION_chopb     118
#define STRUCT_chopb    117
#define ENUM_chopb  116
#define CONST_chopb     115
#define FRIEND_chopb    114
#define VIRTUAL_chopb   113
#define INLINE_chopb    112
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
