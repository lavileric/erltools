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
    static signed char * _tokenArray [161];
    static int (chopb::*(_tokenFuncArray [161])) ();
    static int _tokenNbFuncArray [161];

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

extern chopb * parser_chopb;

#endif
#define NODE_LIST_chopb     373
#define NODE_TREE_chopb     372
#define SPACE_chopb     371
#define SEP_OMIT_chopb  370
#define SEP_BEFORE_chopb    369
#define SEP_AFTER_chopb     368
#define AFERAFER_chopb  367
#define ALINEA_chopb    366
#define CHOP_DEF_chopb  365
#define NIL_chopb   364
#define IN_LANG_chopb   363
#define NEXT_chopb  362
#define DEF_IDENT_chopb     361
#define BOX_chopb   360
#define EXPO_chopb  359
#define EXPO_AFF_chopb  358
#define ETOIETOIEGAL_chopb  357
#define IN_chopb    356
#define PARSE_chopb     355
#define NEXTL_chopb     354
#define VALUE_chopb     353
#define INFESUPE_chopb  352
#define FOREACH_chopb   351
#define INFESEPOSUPE_chopb  350
#define INFESEPBSUPE_chopb  349
#define INFESEPASUPE_chopb  348
#define AOUVAOUV_chopb  347
#define ARRO_chopb  346
#define NL_BEG_chopb    345
#define TAB_BEG_chopb   344
#define SPACE_BEG_chopb     343
#define MAKETREE_SUP_chopb  342
#define MAKETREE_INF_chopb  341
#define PARSE_ELEM_chopb    340
#define SIMP_ETOI_chopb     339
#define ETOI_ETOI_chopb     338
#define BDECR_chopb     337
#define BINCR_chopb     336
#define ADDR_chopb  335
#define NOT_chopb   334
#define LNEG_chopb  333
#define POS_chopb   332
#define NEG_chopb   331
#define PARAM_TYPE_chopb    330
#define STRING_LIST_chopb   329
#define LABEL_chopb     328
#define THROW_ANSI_chopb    327
#define ELSE_chopb  326
#define TUNSIGNED_chopb     325
#define TSIGNED_chopb   324
#define TFLOAT_chopb    323
#define TDOUBLE_chopb   322
#define TIDENT_chopb    321
#define RSHI_chopb  320
#define LSHI_chopb  319
#define LT_chopb    318
#define GT_chopb    317
#define GEQU_chopb  316
#define LEQU_chopb  315
#define SPACE_ARROW_chopb   314
#define TAB_DIRECTIVE_chopb     313
#define ENUM_PARAMETERS_UNDER_chopb     312
#define ENUM_VERT_VALUE_chopb   311
#define PROTECT_MEMB_chopb  310
#define LANGUAGE_chopb  309
#define EXP_chopb   308
#define ADECR_chopb     307
#define AINCR_chopb     306
#define ARROW_chopb     305
#define REF_chopb   304
#define EXP_ARRAY_chopb     303
#define EXP_LIST_chopb  302
#define ARROW_MEMB_chopb    301
#define DOT_MEMB_chopb  300
#define POINETOI_chopb  299
#define TIRESUPEETOI_chopb  298
#define TIRESUPE_chopb  297
#define SUPESUPE_chopb  296
#define INFEINFE_chopb  295
#define SUPEEGAL_chopb  294
#define INFEEGAL_chopb  293
#define NONE_chopb  292
#define NEW_DECLARATOR_chopb    291
#define USING_NAMESPACE_chopb   290
#define NAMESPACE_ALIAS_chopb   289
#define REM_chopb   288
#define DIV_chopb   287
#define MUL_chopb   286
#define POURC_chopb     285
#define MESSAGE_MAP_chopb   284
#define MACRO_chopb     283
#define TCHAR_chopb     282
#define TSHORT_chopb    281
#define TLONG_chopb     280
#define TINT_chopb  279
#define OR_chopb    278
#define VBARVBAR_chopb  277
#define AND_chopb   276
#define ETCOETCO_chopb  275
#define COMPOUND_EXT_chopb  274
#define EXTERNAL_chopb  273
#define INITIALIZER_chopb   272
#define LOR_chopb   271
#define VBAR_chopb  270
#define FUNC_chopb  269
#define ALL_OF_chopb    268
#define STAT_VOID_chopb     267
#define TEMPLATE_DECL_chopb     266
#define SUPE_chopb  265
#define CLASS_PARAM_chopb   264
#define EXP_SEQ_chopb   263
#define LXOR_chopb  262
#define CHAP_chopb  261
#define EXCEPTION_LIST_chopb    260
#define EXCEPTION_ANSI_chopb    259
#define EXCEPTION_chopb     258
#define NEQU_chopb  257
#define EQU_chopb   256
#define EXCLEGAL_chopb  255
#define EGALEGAL_chopb  254
#define PRAGMA_chopb    253
#define PARAMETERS_chopb    252
#define FUNC_HEADER_chopb   251
#define INDENT_FUNCTION_TYPE_chopb  250
#define COMMENT_PLUS_chopb  249
#define COMMENT_END_chopb   248
#define COMMENT_MIDDLE_chopb    247
#define COMMENT_START_chopb     246
#define MARGIN_VALUE_chopb  245
#define BRACE_ALIGN_VALUE_chopb     244
#define DECL_ALIGN_chopb    243
#define ASSIGN_ALIGN_chopb  242
#define SINGLE_SWITCH_INDENT_VALUE_chopb    241
#define SIMPLIFY_VALUE_chopb    240
#define SIMPLIFY_chopb  239
#define MODE_VALUE_chopb    238
#define TAB_VALUE_chopb     237
#define CONFIG_chopb    236
#define NO_PRETTY_chopb     235
#define ALINE_chopb     234
#define ERROR_chopb     233
#define UNDEF_chopb     232
#define TYP_AFF_CALL_chopb  231
#define MEMBER_DECLARATOR_chopb     230
#define TYP_ARRAY_chopb     229
#define CFER_chopb  228
#define COUV_chopb  227
#define FOR_DECLARATION_chopb   226
#define DECLARATION_chopb   225
#define CTOR_INITIALIZER_chopb  224
#define CTOR_INIT_chopb     223
#define LONGLONG_chopb  222
#define IUNLONGLONG_chopb   221
#define IUNLONG_chopb   220
#define IUN_chopb   219
#define ILONGLONG_chopb     218
#define ILONG_chopb     217
#define RANGE_MODIFIER_chopb    216
#define COND_AFF_chopb  215
#define INTE_chopb  214
#define COMPOUND_chopb  213
#define CLASS_DECL_chopb    212
#define AFER_chopb  211
#define CATCH_ANSI_chopb    210
#define EXCEPT_ANSI_ALL_chopb   209
#define CAST_chopb  208
#define DPOI_chopb  207
#define TYP_BIT_chopb   206
#define PROTECT_chopb   205
#define BASE_LIST_chopb     204
#define XOR_AFF_chopb   203
#define OR_AFF_chopb    202
#define AND_AFF_chopb   201
#define RSH_AFF_chopb   200
#define LSH_AFF_chopb   199
#define MIN_AFF_chopb   198
#define PLU_AFF_chopb   197
#define REM_AFF_chopb   196
#define DIV_AFF_chopb   195
#define MUL_AFF_chopb   194
#define AFF_chopb   193
#define VAR_LIST_chopb  192
#define TYP_LIST_chopb  191
#define TYP_AFF_chopb   190
#define ABST_DECLARATOR_chopb   189
#define DECLARATOR_chopb    188
#define POINPOINPOIN_chopb  187
#define LAND_chopb  186
#define INIT_NEW_chopb  185
#define VIRG_chopb  184
#define QUALIFIED_chopb     183
#define MINUS_chopb     182
#define TYP_chopb   181
#define PFER_chopb  180
#define DESTRUCT_chopb  179
#define TYP_REF_chopb   178
#define TYP_ADDR_chopb  177
#define INFE_chopb  176
#define USING_chopb     175
#define NAMESPACE_chopb     174
#define TYPEDEF_chopb   173
#define TEMPLATE_chopb  172
#define CATCH_chopb     171
#define PUBLIC_chopb    170
#define PROTECTED_chopb     169
#define PRIVATE_chopb   168
#define CHAPEGAL_chopb  167
#define VBAREGAL_chopb  166
#define ETCOEGAL_chopb  165
#define SUPESUPEEGAL_chopb  164
#define INFEINFEEGAL_chopb  163
#define TIREEGAL_chopb  162
#define PLUSEGAL_chopb  161
#define POURCEGAL_chopb     160
#define ETOIEGAL_chopb  159
#define EGAL_chopb  158
#define ASM_chopb   157
#define VA_ARG_chopb    156
#define DELETE_chopb    155
#define NEW_chopb   154
#define SIZEOF_chopb    153
#define TIRETIRE_chopb  152
#define PLUSPLUS_chopb  151
#define EXCL_chopb  150
#define PLUS_chopb  149
#define TIRE_chopb  148
#define POUV_chopb  147
#define DEFAULT_chopb   146
#define CASE_chopb  145
#define TRY_chopb   144
#define THROW_chopb     143
#define FORALLSONS_chopb    142
#define WHILE_chopb     141
#define SWITCH_chopb    140
#define RETURN_chopb    139
#define PVIR_chopb  138
#define IF_chopb    137
#define FOR_chopb   136
#define AOUV_chopb  135
#define DO_chopb    134
#define CONTINUE_chopb  133
#define BREAK_chopb     132
#define OPERATOR_chopb  131
#define TILD_chopb  130
#define ETCO_chopb  129
#define ETOI_chopb  128
#define SHORT_chopb     127
#define UNSIGNED_chopb  126
#define SIGNED_chopb    125
#define LONG_chopb  124
#define DPOIDPOI_chopb  123
#define VOID_chopb  122
#define FLOAT_chopb     121
#define CHAR_chopb  120
#define INT_chopb   119
#define DOUBLE_chopb    118
#define TYPENAME_chopb  117
#define CLASS_chopb     116
#define UNION_chopb     115
#define STRUCT_chopb    114
#define ENUM_chopb  113
#define CONST_chopb     112
#define FRIEND_chopb    111
#define VIRTUAL_chopb   110
#define INLINE_chopb    109
#define VOLATILE_chopb  108
#define REGISTER_chopb  107
#define EXTERN_chopb    106
#define STATIC_chopb    105
#define AUTO_chopb  104
#define FUNC_SPEC_chopb     103
#define TRY_UPPER_chopb     102
#define END_CATCH_chopb     101
#define END_CATCH_ALL_chopb     100
#define AND_CATCH_chopb     99
#define CATCH_UPPER_chopb   98
#define CATCH_ALL_chopb     97
#define END_MESSAGE_MAP_chopb   96
#define BEGIN_MESSAGE_MAP_chopb     95
#define DECLARE_MESSAGE_MAP_chopb   94
#define IMPLEMENT_SERIAL_chopb  93
#define IMPLEMENT_DYNCREATE_chopb   92
#define IMPLEMENT_DYNAMIC_chopb     91
#define DECLARE_SERIAL_chopb    90
#define DECLARE_DYNAMIC_chopb   89
#define PUSH_FUNCTION_chopb     88
#define PUSH_ARGUMENT_chopb     87
#define UNDEF_CONTENT_chopb     86
#define SMALL_PRAGMA_CONTENT_chopb  85
#define PRAGMA_CONTENT_chopb    84
#define PRAGMA_ENUM_VERT_chopb  83
#define PRAGMA_SPACE_ARROW_chopb    82
#define PRAGMA_PARAMETERS_chopb     81
#define PRAGMA_PARAMETERS_UNDER_chopb   80
#define PRAGMA_FUNC_HEADER_chopb    79
#define PRAGMA_INDENT_FUNCTION_TYPE_chopb   78
#define PRAGMA_COMMENT_PLUS_chopb   77
#define PRAGMA_COMMENT_END_chopb    76
#define PRAGMA_COMMENT_MIDDLE_chopb     75
#define PRAGMA_COMMENT_START_chopb  74
#define PRAGMA_MARGIN_chopb     73
#define PRAGMA_DECL_ALIGN_chopb     72
#define PRAGMA_ASSIGN_ALIGN_chopb   71
#define PRAGMA_SINGLE_SWITCH_INDENT_chopb   70
#define PRAGMA_SIMPLIFY_chopb   69
#define PRAGMA_BRACE_ALIGN_chopb    68
#define PRAGMA_MODE_chopb   67
#define PRAGMA_RANGE_chopb  66
#define PRAGMA_TAB_chopb    65
#define PRAGMA_TAB_DIRECTIVE_chopb  64
#define PRAGMA_CONFIG_chopb     63
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
