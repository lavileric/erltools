/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 818 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 818 "cplus.met"
{
#line 818 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 818 "cplus.met"
    int _value,_nbPre = 0 ;
#line 818 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 818 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 818 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 818 "cplus.met"
#line 819 "cplus.met"
    {
#line 819 "cplus.met"
        PPTREE _ptTree0=0;
#line 819 "cplus.met"
        {
#line 819 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 819 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 819 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 819 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 819 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 819 "cplus.met"
            } else {
#line 819 "cplus.met"
                tokenAhead = 0 ;
#line 819 "cplus.met"
            }
#line 819 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 819 "cplus.met"
            _ptTree0=_ptRes1;
#line 819 "cplus.met"
        }
#line 819 "cplus.met"
        _retValue =_ptTree0;
#line 819 "cplus.met"
        goto other_config_ret;
#line 819 "cplus.met"
    }
#line 819 "cplus.met"
#line 819 "cplus.met"
#line 819 "cplus.met"

#line 820 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 820 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 820 "cplus.met"
return((PPTREE) 0);
#line 820 "cplus.met"

#line 820 "cplus.met"
other_config_exit :
#line 820 "cplus.met"

#line 820 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 820 "cplus.met"
    _funcLevel--;
#line 820 "cplus.met"
    return((PPTREE) -1) ;
#line 820 "cplus.met"

#line 820 "cplus.met"
other_config_ret :
#line 820 "cplus.met"
    
#line 820 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 820 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 820 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 820 "cplus.met"
    return _retValue ;
#line 820 "cplus.met"
}
#line 820 "cplus.met"

#line 820 "cplus.met"
#line 3115 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3115 "cplus.met"
{
#line 3115 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3115 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3115 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3115 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3115 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3115 "cplus.met"
#line 3115 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3115 "cplus.met"
#line 3115 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3115 "cplus.met"
#line 3117 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3117 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3117 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3117 "cplus.met"
    } else {
#line 3117 "cplus.met"
        tokenAhead = 0 ;
#line 3117 "cplus.met"
    }
#line 3117 "cplus.met"
#line 3118 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3118 "cplus.met"
#line 3119 "cplus.met"
#line 3120 "cplus.met"
         { int exit = 0 ;
#line 3120 "cplus.met"
#line 3121 "cplus.met"
        {
#line 3121 "cplus.met"
            PPTREE _ptTree0=0;
#line 3121 "cplus.met"
            {
#line 3121 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3121 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3121 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3121 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3121 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3121 "cplus.met"
                } else {
#line 3121 "cplus.met"
                    tokenAhead = 0 ;
#line 3121 "cplus.met"
                }
#line 3121 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3121 "cplus.met"
                _ptTree0=_ptRes1;
#line 3121 "cplus.met"
            }
#line 3121 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3121 "cplus.met"
        }
#line 3121 "cplus.met"
#line 3121 "cplus.met"
        _addlist1 = paramList ;
#line 3121 "cplus.met"
#line 3122 "cplus.met"
        while ((! ( exit )) && 
#line 3122 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3122 "cplus.met"
#line 3123 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3123 "cplus.met"
#line 3124 "cplus.met"
#line 3124 "cplus.met"
                {
#line 3124 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3124 "cplus.met"
                    {
#line 3124 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3124 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3124 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3124 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3124 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3124 "cplus.met"
                        } else {
#line 3124 "cplus.met"
                            tokenAhead = 0 ;
#line 3124 "cplus.met"
                        }
#line 3124 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3124 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3124 "cplus.met"
                    }
#line 3124 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3124 "cplus.met"
                }
#line 3124 "cplus.met"
#line 3124 "cplus.met"
                if (paramList){
#line 3124 "cplus.met"
#line 3124 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3124 "cplus.met"
                } else {
#line 3124 "cplus.met"
#line 3124 "cplus.met"
                    paramList = _addlist1 ;
#line 3124 "cplus.met"
                }
#line 3124 "cplus.met"
            } else {
#line 3124 "cplus.met"
#line 3126 "cplus.met"
#line 3127 "cplus.met"
                {
#line 3127 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3127 "cplus.met"
                    {
#line 3127 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3127 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3127 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3127 "cplus.met"
                    }
#line 3127 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3127 "cplus.met"
                }
#line 3127 "cplus.met"
#line 3127 "cplus.met"
                if (paramList){
#line 3127 "cplus.met"
#line 3127 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3127 "cplus.met"
                } else {
#line 3127 "cplus.met"
#line 3127 "cplus.met"
                    paramList = _addlist1 ;
#line 3127 "cplus.met"
                }
#line 3127 "cplus.met"
#line 3128 "cplus.met"
                 exit = 1 ;
#line 3128 "cplus.met"
#line 3129 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3129 "cplus.met"
#line 3129 "cplus.met"
                }
#line 3129 "cplus.met"
#line 3129 "cplus.met"
            }
#line 3129 "cplus.met"
        } 
#line 3129 "cplus.met"
#line 3132 "cplus.met"
        if ((! ( exit )) && 
#line 3132 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3132 "cplus.met"
#line 3133 "cplus.met"
            {
#line 3133 "cplus.met"
                PPTREE _ptTree0=0;
#line 3133 "cplus.met"
                {
#line 3133 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3133 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3133 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3133 "cplus.met"
                }
#line 3133 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3133 "cplus.met"
            }
#line 3133 "cplus.met"
#line 3133 "cplus.met"
        }
#line 3133 "cplus.met"
#line 3134 "cplus.met"
         } 
#line 3134 "cplus.met"
#line 3134 "cplus.met"
#line 3134 "cplus.met"
    } else {
#line 3134 "cplus.met"
#line 3137 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3137 "cplus.met"
    }
#line 3137 "cplus.met"
#line 3138 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3138 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3138 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3138 "cplus.met"
    } else {
#line 3138 "cplus.met"
        tokenAhead = 0 ;
#line 3138 "cplus.met"
    }
#line 3138 "cplus.met"
#line 3139 "cplus.met"
    {
#line 3139 "cplus.met"
        _retValue = paramList ;
#line 3139 "cplus.met"
        goto parameter_list_ret;
#line 3139 "cplus.met"
        
#line 3139 "cplus.met"
    }
#line 3139 "cplus.met"
#line 3139 "cplus.met"
#line 3139 "cplus.met"

#line 3140 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3140 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3140 "cplus.met"
return((PPTREE) 0);
#line 3140 "cplus.met"

#line 3140 "cplus.met"
parameter_list_exit :
#line 3140 "cplus.met"

#line 3140 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3140 "cplus.met"
    _funcLevel--;
#line 3140 "cplus.met"
    return((PPTREE) -1) ;
#line 3140 "cplus.met"

#line 3140 "cplus.met"
parameter_list_ret :
#line 3140 "cplus.met"
    
#line 3140 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3140 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3140 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3140 "cplus.met"
    return _retValue ;
#line 3140 "cplus.met"
}
#line 3140 "cplus.met"

#line 3140 "cplus.met"
#line 3142 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3142 "cplus.met"
{
#line 3142 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3142 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3142 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3142 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3142 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3142 "cplus.met"
#line 3142 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3142 "cplus.met"
#line 3142 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3142 "cplus.met"
#line 3144 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3144 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3144 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3144 "cplus.met"
    } else {
#line 3144 "cplus.met"
        tokenAhead = 0 ;
#line 3144 "cplus.met"
    }
#line 3144 "cplus.met"
#line 3145 "cplus.met"
     { int followed = 0;
#line 3145 "cplus.met"
#line 3146 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3146 "cplus.met"
#line 3147 "cplus.met"
#line 3148 "cplus.met"
         { int exit = 0 ;
#line 3148 "cplus.met"
#line 3149 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3149 "cplus.met"
#line 3150 "cplus.met"
#line 3151 "cplus.met"
             followed = 1 ;
#line 3151 "cplus.met"
#line 3152 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3152 "cplus.met"
#line 3152 "cplus.met"
#line 3152 "cplus.met"
        } else {
#line 3152 "cplus.met"
#line 3155 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3155 "cplus.met"
#line 3156 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3156 "cplus.met"
#line 3156 "cplus.met"
            } else {
#line 3156 "cplus.met"
#line 3158 "cplus.met"
#line 3159 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3159 "cplus.met"
#line 3160 "cplus.met"
                    {
#line 3160 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3160 "cplus.met"
                        {
#line 3160 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3160 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3160 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3160 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3160 "cplus.met"
                        }
#line 3160 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3160 "cplus.met"
                    }
#line 3160 "cplus.met"
#line 3160 "cplus.met"
                }
#line 3160 "cplus.met"
#line 3161 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3161 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3161 "cplus.met"
#line 3162 "cplus.met"
                     followed = 1;
#line 3162 "cplus.met"
                }
#line 3162 "cplus.met"
#line 3163 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3163 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3163 "cplus.met"
#line 3164 "cplus.met"
#line 3165 "cplus.met"
                     followed = 1;
#line 3165 "cplus.met"
#line 3166 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3166 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3166 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3166 "cplus.met"
                    } else {
#line 3166 "cplus.met"
                        tokenAhead = 0 ;
#line 3166 "cplus.met"
                    }
#line 3166 "cplus.met"
#line 3166 "cplus.met"
#line 3166 "cplus.met"
                }
#line 3166 "cplus.met"
#line 3166 "cplus.met"
            }
#line 3166 "cplus.met"
        }
#line 3166 "cplus.met"
#line 3166 "cplus.met"
        _addlist1 = paramList ;
#line 3166 "cplus.met"
#line 3169 "cplus.met"
        while ( followed && !exit ) { 
#line 3169 "cplus.met"
#line 3170 "cplus.met"
#line 3171 "cplus.met"
             followed = 0 ;
#line 3171 "cplus.met"
#line 3172 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3172 "cplus.met"
#line 3173 "cplus.met"
#line 3174 "cplus.met"
                 followed = 1 ;
#line 3174 "cplus.met"
#line 3175 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3175 "cplus.met"
#line 3175 "cplus.met"
                if (paramList){
#line 3175 "cplus.met"
#line 3175 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3175 "cplus.met"
                } else {
#line 3175 "cplus.met"
#line 3175 "cplus.met"
                    paramList = _addlist1 ;
#line 3175 "cplus.met"
                }
#line 3175 "cplus.met"
#line 3175 "cplus.met"
#line 3175 "cplus.met"
            } else {
#line 3175 "cplus.met"
#line 3178 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3178 "cplus.met"
#line 3179 "cplus.met"
#line 3179 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3179 "cplus.met"
#line 3179 "cplus.met"
                    if (paramList){
#line 3179 "cplus.met"
#line 3179 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3179 "cplus.met"
                    } else {
#line 3179 "cplus.met"
#line 3179 "cplus.met"
                        paramList = _addlist1 ;
#line 3179 "cplus.met"
                    }
#line 3179 "cplus.met"
                } else {
#line 3179 "cplus.met"
#line 3181 "cplus.met"
#line 3182 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3182 "cplus.met"
#line 3183 "cplus.met"
#line 3184 "cplus.met"
                        {
#line 3184 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3184 "cplus.met"
                            {
#line 3184 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3184 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3184 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3184 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3184 "cplus.met"
                            }
#line 3184 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3184 "cplus.met"
                        }
#line 3184 "cplus.met"
#line 3184 "cplus.met"
                        if (paramList){
#line 3184 "cplus.met"
#line 3184 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3184 "cplus.met"
                        } else {
#line 3184 "cplus.met"
#line 3184 "cplus.met"
                            paramList = _addlist1 ;
#line 3184 "cplus.met"
                        }
#line 3184 "cplus.met"
#line 3185 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3185 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3185 "cplus.met"
#line 3186 "cplus.met"
                             followed = 1;
#line 3186 "cplus.met"
                        }
#line 3186 "cplus.met"
#line 3187 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3187 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3187 "cplus.met"
#line 3188 "cplus.met"
#line 3189 "cplus.met"
                             followed = 1;
#line 3189 "cplus.met"
#line 3190 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3190 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3190 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3190 "cplus.met"
                            } else {
#line 3190 "cplus.met"
                                tokenAhead = 0 ;
#line 3190 "cplus.met"
                            }
#line 3190 "cplus.met"
#line 3190 "cplus.met"
#line 3190 "cplus.met"
                        }
#line 3190 "cplus.met"
#line 3190 "cplus.met"
#line 3191 "cplus.met"
                    } else {
#line 3191 "cplus.met"
#line 3194 "cplus.met"
#line 3195 "cplus.met"
                        {
#line 3195 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3195 "cplus.met"
                            {
#line 3195 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3195 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3195 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3195 "cplus.met"
                            }
#line 3195 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3195 "cplus.met"
                        }
#line 3195 "cplus.met"
#line 3195 "cplus.met"
                        if (paramList){
#line 3195 "cplus.met"
#line 3195 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3195 "cplus.met"
                        } else {
#line 3195 "cplus.met"
#line 3195 "cplus.met"
                            paramList = _addlist1 ;
#line 3195 "cplus.met"
                        }
#line 3195 "cplus.met"
#line 3196 "cplus.met"
                         exit = 1 ;
#line 3196 "cplus.met"
#line 3197 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3197 "cplus.met"
#line 3197 "cplus.met"
                        }
#line 3197 "cplus.met"
#line 3199 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3199 "cplus.met"
#line 3200 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3200 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3200 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3200 "cplus.met"
                            } else {
#line 3200 "cplus.met"
                                tokenAhead = 0 ;
#line 3200 "cplus.met"
                            }
#line 3200 "cplus.met"
                        }
#line 3200 "cplus.met"
#line 3200 "cplus.met"
                    }
#line 3200 "cplus.met"
#line 3200 "cplus.met"
                }
#line 3200 "cplus.met"
            }
#line 3200 "cplus.met"
#line 3200 "cplus.met"
        } 
#line 3200 "cplus.met"
#line 3204 "cplus.met"
        if ((! ( exit )) && 
#line 3204 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3204 "cplus.met"
#line 3205 "cplus.met"
            {
#line 3205 "cplus.met"
                PPTREE _ptTree0=0;
#line 3205 "cplus.met"
                {
#line 3205 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3205 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3205 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3205 "cplus.met"
                }
#line 3205 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3205 "cplus.met"
            }
#line 3205 "cplus.met"
#line 3205 "cplus.met"
        }
#line 3205 "cplus.met"
#line 3206 "cplus.met"
         }  
#line 3206 "cplus.met"
#line 3206 "cplus.met"
#line 3206 "cplus.met"
    }
#line 3206 "cplus.met"
#line 3208 "cplus.met"
     } 
#line 3208 "cplus.met"
#line 3209 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3209 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3209 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3209 "cplus.met"
    } else {
#line 3209 "cplus.met"
        tokenAhead = 0 ;
#line 3209 "cplus.met"
    }
#line 3209 "cplus.met"
#line 3210 "cplus.met"
    {
#line 3210 "cplus.met"
        _retValue = paramList ;
#line 3210 "cplus.met"
        goto parameter_list_extended_ret;
#line 3210 "cplus.met"
        
#line 3210 "cplus.met"
    }
#line 3210 "cplus.met"
#line 3210 "cplus.met"
#line 3210 "cplus.met"

#line 3211 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3211 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3211 "cplus.met"
return((PPTREE) 0);
#line 3211 "cplus.met"

#line 3211 "cplus.met"
parameter_list_extended_exit :
#line 3211 "cplus.met"

#line 3211 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3211 "cplus.met"
    _funcLevel--;
#line 3211 "cplus.met"
    return((PPTREE) -1) ;
#line 3211 "cplus.met"

#line 3211 "cplus.met"
parameter_list_extended_ret :
#line 3211 "cplus.met"
    
#line 3211 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3211 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3211 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3211 "cplus.met"
    return _retValue ;
#line 3211 "cplus.met"
}
#line 3211 "cplus.met"

#line 3211 "cplus.met"
#line 3617 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3617 "cplus.met"
{
#line 3617 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3617 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3617 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3617 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3617 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3617 "cplus.met"
#line 3617 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3617 "cplus.met"
#line 3619 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 74, cplus)) || 
#line 3619 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 133, cplus))) || 
#line 3619 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 38, cplus))) || 
#line 3619 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 137, cplus))) || 
#line 3619 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 136, cplus))) || 
#line 3619 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 60, cplus))){
#line 3619 "cplus.met"
#line 3625 "cplus.met"
        {
#line 3625 "cplus.met"
            _retValue = retValue ;
#line 3625 "cplus.met"
            goto parse_entry_ret;
#line 3625 "cplus.met"
            
#line 3625 "cplus.met"
        }
#line 3625 "cplus.met"
    } else {
#line 3625 "cplus.met"
#line 3627 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3627 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3627 "cplus.met"
        }
#line 3627 "cplus.met"
    }
#line 3627 "cplus.met"
#line 3627 "cplus.met"
#line 3627 "cplus.met"

#line 3628 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3628 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3628 "cplus.met"
return((PPTREE) 0);
#line 3628 "cplus.met"

#line 3628 "cplus.met"
parse_entry_exit :
#line 3628 "cplus.met"

#line 3628 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3628 "cplus.met"
    _funcLevel--;
#line 3628 "cplus.met"
    return((PPTREE) -1) ;
#line 3628 "cplus.met"

#line 3628 "cplus.met"
parse_entry_ret :
#line 3628 "cplus.met"
    
#line 3628 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3628 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3628 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3628 "cplus.met"
    return _retValue ;
#line 3628 "cplus.met"
}
#line 3628 "cplus.met"

#line 3628 "cplus.met"
#line 2738 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2738 "cplus.met"
{
#line 2738 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2738 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2738 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2738 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2738 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2738 "cplus.met"
#line 2738 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2738 "cplus.met"
#line 2740 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2740 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2740 "cplus.met"
    }
#line 2740 "cplus.met"
#line 2741 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2741 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2741 "cplus.met"
#line 2742 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2742 "cplus.met"
        switch( lexEl.Value) {
#line 2742 "cplus.met"
#line 2743 "cplus.met"
            case POINETOI : 
#line 2743 "cplus.met"
                tokenAhead = 0 ;
#line 2743 "cplus.met"
                CommTerm();
#line 2743 "cplus.met"
#line 2743 "cplus.met"
                {
#line 2743 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2743 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2743 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2743 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2743 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2743 "cplus.met"
                    }
#line 2743 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2743 "cplus.met"
                    expTree=_ptRes0;
#line 2743 "cplus.met"
                }
#line 2743 "cplus.met"
                break;
#line 2743 "cplus.met"
#line 2745 "cplus.met"
            case TIRESUPEETOI : 
#line 2745 "cplus.met"
                tokenAhead = 0 ;
#line 2745 "cplus.met"
                CommTerm();
#line 2745 "cplus.met"
#line 2745 "cplus.met"
                {
#line 2745 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2745 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2745 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2745 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2745 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2745 "cplus.met"
                    }
#line 2745 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2745 "cplus.met"
                    expTree=_ptRes0;
#line 2745 "cplus.met"
                }
#line 2745 "cplus.met"
                break;
#line 2745 "cplus.met"
            default :
#line 2745 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2745 "cplus.met"
                break;
#line 2745 "cplus.met"
        }
#line 2745 "cplus.met"
    } 
#line 2745 "cplus.met"
#line 2748 "cplus.met"
    {
#line 2748 "cplus.met"
        _retValue = expTree ;
#line 2748 "cplus.met"
        goto pm_expression_ret;
#line 2748 "cplus.met"
        
#line 2748 "cplus.met"
    }
#line 2748 "cplus.met"
#line 2748 "cplus.met"
#line 2748 "cplus.met"

#line 2749 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2749 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2749 "cplus.met"
return((PPTREE) 0);
#line 2749 "cplus.met"

#line 2749 "cplus.met"
pm_expression_exit :
#line 2749 "cplus.met"

#line 2749 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2749 "cplus.met"
    _funcLevel--;
#line 2749 "cplus.met"
    return((PPTREE) -1) ;
#line 2749 "cplus.met"

#line 2749 "cplus.met"
pm_expression_ret :
#line 2749 "cplus.met"
    
#line 2749 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2749 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2749 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2749 "cplus.met"
    return _retValue ;
#line 2749 "cplus.met"
}
#line 2749 "cplus.met"

#line 2749 "cplus.met"
#line 2908 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 2908 "cplus.met"
{
#line 2908 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2908 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2908 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2908 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 2908 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2908 "cplus.met"
#line 2908 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2908 "cplus.met"
#line 2910 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 109, cplus))){
#line 2910 "cplus.met"
#line 2911 "cplus.met"
#line 2912 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2912 "cplus.met"
            MulFreeTree(2,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2912 "cplus.met"
        }
#line 2912 "cplus.met"
#line 2913 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 2913 "cplus.met"
#line 2914 "cplus.met"
            
#line 2914 "cplus.met"
            MulFreeTree(2,expList,expTree);
            LEX_EXIT ("",0);
#line 2914 "cplus.met"
            goto postfix_expression_exit;
#line 2914 "cplus.met"
#line 2914 "cplus.met"
        }
#line 2914 "cplus.met"
#line 2914 "cplus.met"
#line 2914 "cplus.met"
    }
#line 2914 "cplus.met"
#line 2916 "cplus.met"
    while (((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2916 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 2916 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 2916 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 2916 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 2916 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) { 
#line 2916 "cplus.met"
#line 2922 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2922 "cplus.met"
        switch( lexEl.Value) {
#line 2922 "cplus.met"
#line 2925 "cplus.met"
            case POUV : 
#line 2925 "cplus.met"
                tokenAhead = 0 ;
#line 2925 "cplus.met"
                CommTerm();
#line 2925 "cplus.met"
#line 2924 "cplus.met"
#line 2925 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2925 "cplus.met"
#line 2926 "cplus.met"
                    {
#line 2926 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2926 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2926 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2926 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2926 "cplus.met"
                        expTree=_ptRes0;
#line 2926 "cplus.met"
                    }
#line 2926 "cplus.met"
                } else {
#line 2926 "cplus.met"
#line 2928 "cplus.met"
                    {
#line 2928 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2928 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2928 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2928 "cplus.met"
                        expTree=_ptRes0;
#line 2928 "cplus.met"
                    }
#line 2928 "cplus.met"
                }
#line 2928 "cplus.met"
#line 2929 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2929 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2929 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 2929 "cplus.met"
                } else {
#line 2929 "cplus.met"
                    tokenAhead = 0 ;
#line 2929 "cplus.met"
                }
#line 2929 "cplus.met"
#line 2929 "cplus.met"
                break;
#line 2929 "cplus.met"
#line 2933 "cplus.met"
            case COUV : 
#line 2933 "cplus.met"
                tokenAhead = 0 ;
#line 2933 "cplus.met"
                CommTerm();
#line 2933 "cplus.met"
#line 2932 "cplus.met"
#line 2933 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2933 "cplus.met"
#line 2934 "cplus.met"
                    {
#line 2934 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2934 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2934 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2934 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2934 "cplus.met"
                        expTree=_ptRes0;
#line 2934 "cplus.met"
                    }
#line 2934 "cplus.met"
                } else {
#line 2934 "cplus.met"
#line 2936 "cplus.met"
                    {
#line 2936 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2936 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2936 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2936 "cplus.met"
                        expTree=_ptRes0;
#line 2936 "cplus.met"
                    }
#line 2936 "cplus.met"
                }
#line 2936 "cplus.met"
#line 2937 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2937 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2937 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"]")
#line 2937 "cplus.met"
                } else {
#line 2937 "cplus.met"
                    tokenAhead = 0 ;
#line 2937 "cplus.met"
                }
#line 2937 "cplus.met"
#line 2937 "cplus.met"
                break;
#line 2937 "cplus.met"
#line 2939 "cplus.met"
            case META : 
#line 2939 "cplus.met"
            case POINT : 
#line 2939 "cplus.met"
                tokenAhead = 0 ;
#line 2939 "cplus.met"
                CommTerm();
#line 2939 "cplus.met"
#line 2939 "cplus.met"
                {
#line 2939 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2939 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 2939 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2939 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2939 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2939 "cplus.met"
                    }
#line 2939 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2939 "cplus.met"
                    expTree=_ptRes0;
#line 2939 "cplus.met"
                }
#line 2939 "cplus.met"
                break;
#line 2939 "cplus.met"
#line 2941 "cplus.met"
            case TIRESUPE : 
#line 2941 "cplus.met"
                tokenAhead = 0 ;
#line 2941 "cplus.met"
                CommTerm();
#line 2941 "cplus.met"
#line 2941 "cplus.met"
                {
#line 2941 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2941 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 2941 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2941 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2941 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2941 "cplus.met"
                    }
#line 2941 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2941 "cplus.met"
                    expTree=_ptRes0;
#line 2941 "cplus.met"
                }
#line 2941 "cplus.met"
                break;
#line 2941 "cplus.met"
#line 2943 "cplus.met"
            case PLUSPLUS : 
#line 2943 "cplus.met"
                tokenAhead = 0 ;
#line 2943 "cplus.met"
                CommTerm();
#line 2943 "cplus.met"
#line 2943 "cplus.met"
                {
#line 2943 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2943 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 2943 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2943 "cplus.met"
                    expTree=_ptRes0;
#line 2943 "cplus.met"
                }
#line 2943 "cplus.met"
                break;
#line 2943 "cplus.met"
#line 2944 "cplus.met"
            case TIRETIRE : 
#line 2944 "cplus.met"
                tokenAhead = 0 ;
#line 2944 "cplus.met"
                CommTerm();
#line 2944 "cplus.met"
#line 2944 "cplus.met"
                {
#line 2944 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2944 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 2944 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2944 "cplus.met"
                    expTree=_ptRes0;
#line 2944 "cplus.met"
                }
#line 2944 "cplus.met"
                break;
#line 2944 "cplus.met"
            default :
#line 2944 "cplus.met"
                MulFreeTree(2,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or [ or POINT or -> or ++ or --")
#line 2944 "cplus.met"
                break;
#line 2944 "cplus.met"
        }
#line 2944 "cplus.met"
    } 
#line 2944 "cplus.met"
#line 2946 "cplus.met"
    {
#line 2946 "cplus.met"
        _retValue = expTree ;
#line 2946 "cplus.met"
        goto postfix_expression_ret;
#line 2946 "cplus.met"
        
#line 2946 "cplus.met"
    }
#line 2946 "cplus.met"
#line 2946 "cplus.met"
#line 2946 "cplus.met"

#line 2947 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2947 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2947 "cplus.met"
return((PPTREE) 0);
#line 2947 "cplus.met"

#line 2947 "cplus.met"
postfix_expression_exit :
#line 2947 "cplus.met"

#line 2947 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 2947 "cplus.met"
    _funcLevel--;
#line 2947 "cplus.met"
    return((PPTREE) -1) ;
#line 2947 "cplus.met"

#line 2947 "cplus.met"
postfix_expression_ret :
#line 2947 "cplus.met"
    
#line 2947 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 2947 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2947 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2947 "cplus.met"
    return _retValue ;
#line 2947 "cplus.met"
}
#line 2947 "cplus.met"

#line 2947 "cplus.met"
#line 2962 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 2962 "cplus.met"
{
#line 2962 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2962 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2962 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2962 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 2962 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2962 "cplus.met"
#line 2962 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2962 "cplus.met"
#line 2964 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2964 "cplus.met"
    switch( lexEl.Value) {
#line 2964 "cplus.met"
#line 2967 "cplus.met"
        case POUV : 
#line 2967 "cplus.met"
            tokenAhead = 0 ;
#line 2967 "cplus.met"
            CommTerm();
#line 2967 "cplus.met"
#line 2966 "cplus.met"
#line 2967 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2967 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2967 "cplus.met"
            }
#line 2967 "cplus.met"
#line 2968 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2968 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2968 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2968 "cplus.met"
            } else {
#line 2968 "cplus.met"
                tokenAhead = 0 ;
#line 2968 "cplus.met"
            }
#line 2968 "cplus.met"
#line 2969 "cplus.met"
            {
#line 2969 "cplus.met"
                PPTREE _ptTree0=0;
#line 2969 "cplus.met"
                {
#line 2969 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2969 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 2969 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 2969 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2969 "cplus.met"
                }
#line 2969 "cplus.met"
                _retValue =_ptTree0;
#line 2969 "cplus.met"
                goto primary_expression_ret;
#line 2969 "cplus.met"
            }
#line 2969 "cplus.met"
#line 2969 "cplus.met"
            break;
#line 2969 "cplus.met"
#line 2971 "cplus.met"
        case OPERATOR : 
#line 2971 "cplus.met"
#line 2971 "cplus.met"
            {
#line 2971 "cplus.met"
                PPTREE _ptTree0=0;
#line 2971 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2971 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2971 "cplus.met"
                }
#line 2971 "cplus.met"
                _retValue =_ptTree0;
#line 2971 "cplus.met"
                goto primary_expression_ret;
#line 2971 "cplus.met"
            }
#line 2971 "cplus.met"
            break;
#line 2971 "cplus.met"
#line 2972 "cplus.met"
        case TILD : 
#line 2972 "cplus.met"
#line 2972 "cplus.met"
            {
#line 2972 "cplus.met"
                PPTREE _ptTree0=0;
#line 2972 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2972 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2972 "cplus.met"
                }
#line 2972 "cplus.met"
                _retValue =_ptTree0;
#line 2972 "cplus.met"
                goto primary_expression_ret;
#line 2972 "cplus.met"
            }
#line 2972 "cplus.met"
            break;
#line 2972 "cplus.met"
#line 2973 "cplus.met"
        case META : 
#line 2973 "cplus.met"
#line 2974 "cplus.met"
#line 2975 "cplus.met"
            {
#line 2975 "cplus.met"
                PPTREE _ptTree0=0;
#line 2975 "cplus.met"
                {
#line 2975 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2975 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 2975 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 2975 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 2975 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 2975 "cplus.met"
                    } else {
#line 2975 "cplus.met"
                        tokenAhead = 0 ;
#line 2975 "cplus.met"
                    }
#line 2975 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2975 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2975 "cplus.met"
                }
#line 2975 "cplus.met"
                _retValue =_ptTree0;
#line 2975 "cplus.met"
                goto primary_expression_ret;
#line 2975 "cplus.met"
            }
#line 2975 "cplus.met"
#line 2975 "cplus.met"
            break;
#line 2975 "cplus.met"
#line 2977 "cplus.met"
        case IDENT : 
#line 2977 "cplus.met"
#line 2978 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 2978 "cplus.met"
#line 2979 "cplus.met"
#line 2980 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2980 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2980 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 2980 "cplus.met"
                } else {
#line 2980 "cplus.met"
                    tokenAhead = 0 ;
#line 2980 "cplus.met"
                }
#line 2980 "cplus.met"
#line 2981 "cplus.met"
                {
#line 2981 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2981 "cplus.met"
                    {
#line 2981 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2981 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 2981 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 2981 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2981 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 2981 "cplus.met"
                        } else {
#line 2981 "cplus.met"
                            tokenAhead = 0 ;
#line 2981 "cplus.met"
                        }
#line 2981 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2981 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2981 "cplus.met"
                    }
#line 2981 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2981 "cplus.met"
                }
#line 2981 "cplus.met"
#line 2982 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2982 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2982 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 2982 "cplus.met"
                } else {
#line 2982 "cplus.met"
                    tokenAhead = 0 ;
#line 2982 "cplus.met"
                }
#line 2982 "cplus.met"
#line 2983 "cplus.met"
                {
#line 2983 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2983 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2983 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2983 "cplus.met"
                    }
#line 2983 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2983 "cplus.met"
                }
#line 2983 "cplus.met"
#line 2984 "cplus.met"
                {
#line 2984 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2984 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 2984 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 2984 "cplus.met"
                    expTree=_ptRes0;
#line 2984 "cplus.met"
                }
#line 2984 "cplus.met"
#line 2985 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2985 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2985 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 2985 "cplus.met"
                } else {
#line 2985 "cplus.met"
                    tokenAhead = 0 ;
#line 2985 "cplus.met"
                }
#line 2985 "cplus.met"
#line 2986 "cplus.met"
                {
#line 2986 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2986 "cplus.met"
                    {
#line 2986 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2986 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 2986 "cplus.met"
                        {
#line 2986 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2986 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 2986 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 2986 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2986 "cplus.met"
                        }
#line 2986 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2986 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 2986 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2986 "cplus.met"
                    }
#line 2986 "cplus.met"
                    _retValue =_ptTree0;
#line 2986 "cplus.met"
                    goto primary_expression_ret;
#line 2986 "cplus.met"
                }
#line 2986 "cplus.met"
#line 2986 "cplus.met"
#line 2986 "cplus.met"
            } else {
#line 2986 "cplus.met"
#line 2989 "cplus.met"
                {
#line 2989 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2989 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2989 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2989 "cplus.met"
                    }
#line 2989 "cplus.met"
                    _retValue =_ptTree0;
#line 2989 "cplus.met"
                    goto primary_expression_ret;
#line 2989 "cplus.met"
                }
#line 2989 "cplus.met"
            }
#line 2989 "cplus.met"
            break;
#line 2989 "cplus.met"
#line 2990 "cplus.met"
        case STRING : 
#line 2990 "cplus.met"
#line 2990 "cplus.met"
            {
#line 2990 "cplus.met"
                PPTREE _ptTree0=0;
#line 2990 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2990 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2990 "cplus.met"
                }
#line 2990 "cplus.met"
                _retValue =_ptTree0;
#line 2990 "cplus.met"
                goto primary_expression_ret;
#line 2990 "cplus.met"
            }
#line 2990 "cplus.met"
            break;
#line 2990 "cplus.met"
#line 2991 "cplus.met"
        case VA_ARG : 
#line 2991 "cplus.met"
            tokenAhead = 0 ;
#line 2991 "cplus.met"
            CommTerm();
#line 2991 "cplus.met"
#line 2992 "cplus.met"
#line 2993 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2993 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2993 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 2993 "cplus.met"
            } else {
#line 2993 "cplus.met"
                tokenAhead = 0 ;
#line 2993 "cplus.met"
            }
#line 2993 "cplus.met"
#line 2994 "cplus.met"
            {
#line 2994 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2994 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 2994 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2994 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2994 "cplus.met"
                }
#line 2994 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2994 "cplus.met"
                expTree=_ptRes0;
#line 2994 "cplus.met"
            }
#line 2994 "cplus.met"
#line 2995 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2995 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2995 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 2995 "cplus.met"
            } else {
#line 2995 "cplus.met"
                tokenAhead = 0 ;
#line 2995 "cplus.met"
            }
#line 2995 "cplus.met"
#line 2996 "cplus.met"
            {
#line 2996 "cplus.met"
                PPTREE _ptTree0=0;
#line 2996 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2996 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2996 "cplus.met"
                }
#line 2996 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 2996 "cplus.met"
            }
#line 2996 "cplus.met"
#line 2997 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2997 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2997 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2997 "cplus.met"
            } else {
#line 2997 "cplus.met"
                tokenAhead = 0 ;
#line 2997 "cplus.met"
            }
#line 2997 "cplus.met"
#line 2998 "cplus.met"
            {
#line 2998 "cplus.met"
                _retValue = expTree ;
#line 2998 "cplus.met"
                goto primary_expression_ret;
#line 2998 "cplus.met"
                
#line 2998 "cplus.met"
            }
#line 2998 "cplus.met"
#line 2998 "cplus.met"
            break;
#line 2998 "cplus.met"
#line 3000 "cplus.met"
        default : 
#line 3000 "cplus.met"
#line 3000 "cplus.met"
            {
#line 3000 "cplus.met"
                PPTREE _ptTree0=0;
#line 3000 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 3000 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3000 "cplus.met"
                }
#line 3000 "cplus.met"
                _retValue =_ptTree0;
#line 3000 "cplus.met"
                goto primary_expression_ret;
#line 3000 "cplus.met"
            }
#line 3000 "cplus.met"
            break;
#line 3000 "cplus.met"
    }
#line 3000 "cplus.met"
#line 3000 "cplus.met"
#line 3001 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3001 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3001 "cplus.met"
return((PPTREE) 0);
#line 3001 "cplus.met"

#line 3001 "cplus.met"
primary_expression_exit :
#line 3001 "cplus.met"

#line 3001 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 3001 "cplus.met"
    _funcLevel--;
#line 3001 "cplus.met"
    return((PPTREE) -1) ;
#line 3001 "cplus.met"

#line 3001 "cplus.met"
primary_expression_ret :
#line 3001 "cplus.met"
    
#line 3001 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 3001 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3001 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3001 "cplus.met"
    return _retValue ;
#line 3001 "cplus.met"
}
#line 3001 "cplus.met"

#line 3001 "cplus.met"
#line 756 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 756 "cplus.met"
{
#line 756 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 756 "cplus.met"
    int _value,_nbPre = 0 ;
#line 756 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 756 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 756 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 756 "cplus.met"
#line 756 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 756 "cplus.met"
#line 756 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 756 "cplus.met"
#line 758 "cplus.met"
     debut : 
#line 758 "cplus.met"
#line 758 "cplus.met"
    _addlist1 = list ;
#line 758 "cplus.met"
#line 759 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 62, cplus)) { 
#line 759 "cplus.met"
#line 760 "cplus.met"
#line 760 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 760 "cplus.met"
#line 760 "cplus.met"
        if (list){
#line 760 "cplus.met"
#line 760 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 760 "cplus.met"
        } else {
#line 760 "cplus.met"
#line 760 "cplus.met"
            list = _addlist1 ;
#line 760 "cplus.met"
        }
#line 760 "cplus.met"
    } 
#line 760 "cplus.met"
#line 761 "cplus.met"
    {
#line 761 "cplus.met"
        PPTREE _ptTree0=0;
#line 761 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 761 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 761 "cplus.met"
        }
#line 761 "cplus.met"
        list =AddList(list , _ptTree0);
#line 761 "cplus.met"
    }
#line 761 "cplus.met"
#line 762 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 24, cplus)){
#line 762 "cplus.met"
#line 762 "cplus.met"
    }
#line 762 "cplus.met"
#line 764 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 764 "cplus.met"
#line 765 "cplus.met"
#line 767 "cplus.met"
        dumperror ();
#line 767 "cplus.met"
#line 769 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 769 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 769 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 769 "cplus.met"
        } else {
#line 769 "cplus.met"
            tokenAhead = 0 ;
#line 769 "cplus.met"
        }
#line 769 "cplus.met"
#line 770 "cplus.met"
         hasGotError = 1 ;
#line 770 "cplus.met"
#line 771 "cplus.met"
         goto debut ;
#line 771 "cplus.met"
#line 771 "cplus.met"
#line 771 "cplus.met"
    }
#line 771 "cplus.met"
#line 773 "cplus.met"
    if ( hasGotError && ! _inhibit_exit_on_error  ){
#line 773 "cplus.met"
#line 774 "cplus.met"
         exit (-1);
#line 774 "cplus.met"
    }
#line 774 "cplus.met"
#line 775 "cplus.met"
    {
#line 775 "cplus.met"
        PPTREE _ptTree0=0;
#line 775 "cplus.met"
        {
#line 775 "cplus.met"
            PPTREE _ptRes1=0;
#line 775 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 775 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 775 "cplus.met"
            _ptTree0=_ptRes1;
#line 775 "cplus.met"
        }
#line 775 "cplus.met"
        _retValue =_ptTree0;
#line 775 "cplus.met"
        goto program_ret;
#line 775 "cplus.met"
    }
#line 775 "cplus.met"
#line 775 "cplus.met"
#line 775 "cplus.met"

#line 776 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 776 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 776 "cplus.met"
return((PPTREE) 0);
#line 776 "cplus.met"

#line 776 "cplus.met"
program_exit :
#line 776 "cplus.met"

#line 776 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 776 "cplus.met"
    _funcLevel--;
#line 776 "cplus.met"
    return((PPTREE) -1) ;
#line 776 "cplus.met"

#line 776 "cplus.met"
program_ret :
#line 776 "cplus.met"
    
#line 776 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 776 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 776 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 776 "cplus.met"
    return _retValue ;
#line 776 "cplus.met"
}
#line 776 "cplus.met"

#line 776 "cplus.met"
#line 1906 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1906 "cplus.met"
{
#line 1906 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1906 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1906 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1906 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1906 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1906 "cplus.met"
#line 1906 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1906 "cplus.met"
#line 1906 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1906 "cplus.met"
#line 1908 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1908 "cplus.met"
    switch( lexEl.Value) {
#line 1908 "cplus.met"
#line 1909 "cplus.met"
        case PUBLIC : 
#line 1909 "cplus.met"
            tokenAhead = 0 ;
#line 1909 "cplus.met"
            CommTerm();
#line 1909 "cplus.met"
#line 1909 "cplus.met"
            {
#line 1909 "cplus.met"
                PPTREE _ptRes0=0;
#line 1909 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1909 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1909 "cplus.met"
                retTree=_ptRes0;
#line 1909 "cplus.met"
            }
#line 1909 "cplus.met"
            break;
#line 1909 "cplus.met"
#line 1910 "cplus.met"
        case PROTECTED : 
#line 1910 "cplus.met"
            tokenAhead = 0 ;
#line 1910 "cplus.met"
            CommTerm();
#line 1910 "cplus.met"
#line 1910 "cplus.met"
            {
#line 1910 "cplus.met"
                PPTREE _ptRes0=0;
#line 1910 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1910 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1910 "cplus.met"
                retTree=_ptRes0;
#line 1910 "cplus.met"
            }
#line 1910 "cplus.met"
            break;
#line 1910 "cplus.met"
#line 1911 "cplus.met"
        case PRIVATE : 
#line 1911 "cplus.met"
            tokenAhead = 0 ;
#line 1911 "cplus.met"
            CommTerm();
#line 1911 "cplus.met"
#line 1911 "cplus.met"
            {
#line 1911 "cplus.met"
                PPTREE _ptRes0=0;
#line 1911 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1911 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1911 "cplus.met"
                retTree=_ptRes0;
#line 1911 "cplus.met"
            }
#line 1911 "cplus.met"
            break;
#line 1911 "cplus.met"
        default :
#line 1911 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1911 "cplus.met"
            break;
#line 1911 "cplus.met"
    }
#line 1911 "cplus.met"
#line 1913 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1913 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1913 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1913 "cplus.met"
    } else {
#line 1913 "cplus.met"
        tokenAhead = 0 ;
#line 1913 "cplus.met"
    }
#line 1913 "cplus.met"
#line 1913 "cplus.met"
    _addlist1 = list ;
#line 1913 "cplus.met"
#line 1914 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 80, cplus)) { 
#line 1914 "cplus.met"
#line 1915 "cplus.met"
#line 1915 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1915 "cplus.met"
#line 1915 "cplus.met"
        if (list){
#line 1915 "cplus.met"
#line 1915 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1915 "cplus.met"
        } else {
#line 1915 "cplus.met"
#line 1915 "cplus.met"
            list = _addlist1 ;
#line 1915 "cplus.met"
        }
#line 1915 "cplus.met"
    } 
#line 1915 "cplus.met"
#line 1916 "cplus.met"
    {
#line 1916 "cplus.met"
        PPTREE _ptTree0=0;
#line 1916 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1916 "cplus.met"
        _retValue =_ptTree0;
#line 1916 "cplus.met"
        goto protect_declare_ret;
#line 1916 "cplus.met"
    }
#line 1916 "cplus.met"
#line 1916 "cplus.met"
#line 1916 "cplus.met"

#line 1917 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1917 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1917 "cplus.met"
return((PPTREE) 0);
#line 1917 "cplus.met"

#line 1917 "cplus.met"
protect_declare_exit :
#line 1917 "cplus.met"

#line 1917 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1917 "cplus.met"
    _funcLevel--;
#line 1917 "cplus.met"
    return((PPTREE) -1) ;
#line 1917 "cplus.met"

#line 1917 "cplus.met"
protect_declare_ret :
#line 1917 "cplus.met"
    
#line 1917 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1917 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1917 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1917 "cplus.met"
    return _retValue ;
#line 1917 "cplus.met"
}
#line 1917 "cplus.met"

#line 1917 "cplus.met"
#line 2189 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2189 "cplus.met"
{
#line 2189 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2189 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2189 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2189 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2189 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2189 "cplus.met"
#line 2189 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2189 "cplus.met"
#line 2191 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2191 "cplus.met"
    switch( lexEl.Value) {
#line 2191 "cplus.met"
#line 2194 "cplus.met"
        case ETOI : 
#line 2194 "cplus.met"
            tokenAhead = 0 ;
#line 2194 "cplus.met"
            CommTerm();
#line 2194 "cplus.met"
#line 2193 "cplus.met"
#line 2194 "cplus.met"
            {
#line 2194 "cplus.met"
                PPTREE _ptRes0=0;
#line 2194 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2194 "cplus.met"
                retTree=_ptRes0;
#line 2194 "cplus.met"
            }
#line 2194 "cplus.met"
#line 2195 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2195 "cplus.met"
#line 2196 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2196 "cplus.met"
#line 2196 "cplus.met"
            }
#line 2196 "cplus.met"
#line 2197 "cplus.met"
            {
#line 2197 "cplus.met"
                _retValue = retTree ;
#line 2197 "cplus.met"
                goto ptr_operator_ret;
#line 2197 "cplus.met"
                
#line 2197 "cplus.met"
            }
#line 2197 "cplus.met"
#line 2197 "cplus.met"
            break;
#line 2197 "cplus.met"
#line 2201 "cplus.met"
        case ETCO : 
#line 2201 "cplus.met"
            tokenAhead = 0 ;
#line 2201 "cplus.met"
            CommTerm();
#line 2201 "cplus.met"
#line 2200 "cplus.met"
#line 2201 "cplus.met"
            {
#line 2201 "cplus.met"
                PPTREE _ptRes0=0;
#line 2201 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2201 "cplus.met"
                retTree=_ptRes0;
#line 2201 "cplus.met"
            }
#line 2201 "cplus.met"
#line 2202 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2202 "cplus.met"
#line 2203 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2203 "cplus.met"
#line 2203 "cplus.met"
            }
#line 2203 "cplus.met"
#line 2204 "cplus.met"
            {
#line 2204 "cplus.met"
                _retValue = retTree ;
#line 2204 "cplus.met"
                goto ptr_operator_ret;
#line 2204 "cplus.met"
                
#line 2204 "cplus.met"
            }
#line 2204 "cplus.met"
#line 2204 "cplus.met"
            break;
#line 2204 "cplus.met"
#line 2208 "cplus.met"
        case DPOIDPOI : 
#line 2208 "cplus.met"
#line 2207 "cplus.met"
#line 2208 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2208 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2208 "cplus.met"
            }
#line 2208 "cplus.met"
#line 2208 "cplus.met"
            break;
#line 2208 "cplus.met"
#line 2210 "cplus.met"
        case META : 
#line 2210 "cplus.met"
        case IDENT : 
#line 2210 "cplus.met"
#line 2211 "cplus.met"
#line 2212 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2212 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2212 "cplus.met"
            }
#line 2212 "cplus.met"
#line 2212 "cplus.met"
            break;
#line 2212 "cplus.met"
        default :
#line 2212 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2212 "cplus.met"
            break;
#line 2212 "cplus.met"
    }
#line 2212 "cplus.met"
#line 2215 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2215 "cplus.met"
#line 2216 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2216 "cplus.met"
#line 2216 "cplus.met"
    }
#line 2216 "cplus.met"
#line 2217 "cplus.met"
    {
#line 2217 "cplus.met"
        _retValue = retour ;
#line 2217 "cplus.met"
        goto ptr_operator_ret;
#line 2217 "cplus.met"
        
#line 2217 "cplus.met"
    }
#line 2217 "cplus.met"
#line 2217 "cplus.met"
#line 2217 "cplus.met"

#line 2218 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2218 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2218 "cplus.met"
return((PPTREE) 0);
#line 2218 "cplus.met"

#line 2218 "cplus.met"
ptr_operator_exit :
#line 2218 "cplus.met"

#line 2218 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2218 "cplus.met"
    _funcLevel--;
#line 2218 "cplus.met"
    return((PPTREE) -1) ;
#line 2218 "cplus.met"

#line 2218 "cplus.met"
ptr_operator_ret :
#line 2218 "cplus.met"
    
#line 2218 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2218 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2218 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2218 "cplus.met"
    return _retValue ;
#line 2218 "cplus.met"
}
#line 2218 "cplus.met"

#line 2218 "cplus.met"
#line 1842 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1842 "cplus.met"
{
#line 1842 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1842 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1842 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1842 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1842 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1842 "cplus.met"
#line 1842 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1842 "cplus.met"
#line 1844 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1844 "cplus.met"
#line 1845 "cplus.met"
        {
#line 1845 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1845 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1845 "cplus.met"
            {
#line 1845 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1845 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1845 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1845 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1845 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1845 "cplus.met"
                } else {
#line 1845 "cplus.met"
                    tokenAhead = 0 ;
#line 1845 "cplus.met"
                }
#line 1845 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1845 "cplus.met"
                _ptTree0=_ptRes1;
#line 1845 "cplus.met"
            }
#line 1845 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1845 "cplus.met"
            retTree=_ptRes0;
#line 1845 "cplus.met"
        }
#line 1845 "cplus.met"
    } else {
#line 1845 "cplus.met"
#line 1847 "cplus.met"
        {
#line 1847 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1847 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1847 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1847 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1847 "cplus.met"
                MulFreeTree(6,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1847 "cplus.met"
            } else {
#line 1847 "cplus.met"
                tokenAhead = 0 ;
#line 1847 "cplus.met"
            }
#line 1847 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1847 "cplus.met"
            retTree=_ptRes0;
#line 1847 "cplus.met"
        }
#line 1847 "cplus.met"
    }
#line 1847 "cplus.met"
#line 1848 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1848 "cplus.met"
#line 1849 "cplus.met"
#line 1850 "cplus.met"
        {
#line 1850 "cplus.met"
            PPTREE _ptRes0=0;
#line 1850 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1850 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1850 "cplus.met"
            retTree=_ptRes0;
#line 1850 "cplus.met"
        }
#line 1850 "cplus.met"
#line 1851 "cplus.met"
        inter = retTree ;
#line 1851 "cplus.met"
#line 1852 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1852 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 114, cplus))) { 
#line 1852 "cplus.met"
#line 1853 "cplus.met"
#line 1854 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1854 "cplus.met"
#line 1855 "cplus.met"
                {
#line 1855 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1855 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1855 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1855 "cplus.met"
                    val=_ptRes0;
#line 1855 "cplus.met"
                }
#line 1855 "cplus.met"
            }
#line 1855 "cplus.met"
#line 1856 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1856 "cplus.met"
#line 1857 "cplus.met"
            inter = val ;
#line 1857 "cplus.met"
#line 1857 "cplus.met"
        } 
#line 1857 "cplus.met"
#line 1857 "cplus.met"
#line 1858 "cplus.met"
    }
#line 1858 "cplus.met"
#line 1860 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 138, cplus)){
#line 1860 "cplus.met"
#line 1861 "cplus.met"
#line 1862 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1862 "cplus.met"
#line 1863 "cplus.met"
        retTree = templateVal ;
#line 1863 "cplus.met"
#line 1864 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1864 "cplus.met"
#line 1865 "cplus.met"
            {
#line 1865 "cplus.met"
                PPTREE _ptTree0=0;
#line 1865 "cplus.met"
                {
#line 1865 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1865 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1865 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1865 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 1865 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1865 "cplus.met"
                    }
#line 1865 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1865 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1865 "cplus.met"
                }
#line 1865 "cplus.met"
                _retValue =_ptTree0;
#line 1865 "cplus.met"
                goto qualified_name_ret;
#line 1865 "cplus.met"
            }
#line 1865 "cplus.met"
        } else {
#line 1865 "cplus.met"
#line 1867 "cplus.met"
            {
#line 1867 "cplus.met"
                _retValue = retTree ;
#line 1867 "cplus.met"
                goto qualified_name_ret;
#line 1867 "cplus.met"
                
#line 1867 "cplus.met"
            }
#line 1867 "cplus.met"
        }
#line 1867 "cplus.met"
#line 1867 "cplus.met"
#line 1867 "cplus.met"
    }
#line 1867 "cplus.met"
#line 1869 "cplus.met"
    {
#line 1869 "cplus.met"
        _retValue = retTree ;
#line 1869 "cplus.met"
        goto qualified_name_ret;
#line 1869 "cplus.met"
        
#line 1869 "cplus.met"
    }
#line 1869 "cplus.met"
#line 1869 "cplus.met"
#line 1869 "cplus.met"

#line 1870 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1870 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1870 "cplus.met"
return((PPTREE) 0);
#line 1870 "cplus.met"

#line 1870 "cplus.met"
qualified_name_exit :
#line 1870 "cplus.met"

#line 1870 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1870 "cplus.met"
    _funcLevel--;
#line 1870 "cplus.met"
    return((PPTREE) -1) ;
#line 1870 "cplus.met"

#line 1870 "cplus.met"
qualified_name_ret :
#line 1870 "cplus.met"
    
#line 1870 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1870 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1870 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1870 "cplus.met"
    return _retValue ;
#line 1870 "cplus.met"
}
#line 1870 "cplus.met"

#line 1870 "cplus.met"
#line 1820 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1820 "cplus.met"
{
#line 1820 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1820 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1820 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1820 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1820 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1820 "cplus.met"
#line 1821 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1821 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1821 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1821 "cplus.met"
    } else {
#line 1821 "cplus.met"
        tokenAhead = 0 ;
#line 1821 "cplus.met"
    }
#line 1821 "cplus.met"
#line 1822 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1822 "cplus.met"
    switch( lexEl.Value) {
#line 1822 "cplus.met"
#line 1823 "cplus.met"
        case TILD : 
#line 1823 "cplus.met"
            tokenAhead = 0 ;
#line 1823 "cplus.met"
            CommTerm();
#line 1823 "cplus.met"
#line 1823 "cplus.met"
            {
#line 1823 "cplus.met"
                PPTREE _ptTree0=0;
#line 1823 "cplus.met"
                {
#line 1823 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1823 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1823 "cplus.met"
                    {
#line 1823 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1823 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1823 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1823 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1823 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1823 "cplus.met"
                        } else {
#line 1823 "cplus.met"
                            tokenAhead = 0 ;
#line 1823 "cplus.met"
                        }
#line 1823 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1823 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1823 "cplus.met"
                    }
#line 1823 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1823 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1823 "cplus.met"
                }
#line 1823 "cplus.met"
                _retValue =_ptTree0;
#line 1823 "cplus.met"
                goto qualified_name_elem_ret;
#line 1823 "cplus.met"
            }
#line 1823 "cplus.met"
            break;
#line 1823 "cplus.met"
#line 1824 "cplus.met"
        case META : 
#line 1824 "cplus.met"
        case IDENT : 
#line 1824 "cplus.met"
#line 1824 "cplus.met"
            {
#line 1824 "cplus.met"
                PPTREE _ptTree0=0;
#line 1824 "cplus.met"
                {
#line 1824 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1824 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1824 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1824 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1824 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1824 "cplus.met"
                    } else {
#line 1824 "cplus.met"
                        tokenAhead = 0 ;
#line 1824 "cplus.met"
                    }
#line 1824 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1824 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1824 "cplus.met"
                }
#line 1824 "cplus.met"
                _retValue =_ptTree0;
#line 1824 "cplus.met"
                goto qualified_name_elem_ret;
#line 1824 "cplus.met"
            }
#line 1824 "cplus.met"
            break;
#line 1824 "cplus.met"
#line 1825 "cplus.met"
        case OPERATOR : 
#line 1825 "cplus.met"
#line 1825 "cplus.met"
            {
#line 1825 "cplus.met"
                PPTREE _ptTree0=0;
#line 1825 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 1825 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1825 "cplus.met"
                }
#line 1825 "cplus.met"
                _retValue =_ptTree0;
#line 1825 "cplus.met"
                goto qualified_name_elem_ret;
#line 1825 "cplus.met"
            }
#line 1825 "cplus.met"
            break;
#line 1825 "cplus.met"
        default :
#line 1825 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1825 "cplus.met"
            break;
#line 1825 "cplus.met"
    }
#line 1825 "cplus.met"
#line 1825 "cplus.met"
#line 1826 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1826 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1826 "cplus.met"
return((PPTREE) 0);
#line 1826 "cplus.met"

#line 1826 "cplus.met"
qualified_name_elem_exit :
#line 1826 "cplus.met"

#line 1826 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1826 "cplus.met"
    _funcLevel--;
#line 1826 "cplus.met"
    return((PPTREE) -1) ;
#line 1826 "cplus.met"

#line 1826 "cplus.met"
qualified_name_elem_ret :
#line 1826 "cplus.met"
    
#line 1826 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1826 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1826 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1826 "cplus.met"
    return _retValue ;
#line 1826 "cplus.met"
}
#line 1826 "cplus.met"

#line 1826 "cplus.met"
