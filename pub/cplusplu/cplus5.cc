/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 817 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 817 "cplus.met"
{
#line 817 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 817 "cplus.met"
    int _value,_nbPre = 0 ;
#line 817 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 817 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 817 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 817 "cplus.met"
#line 818 "cplus.met"
    {
#line 818 "cplus.met"
        PPTREE _ptTree0=0;
#line 818 "cplus.met"
        {
#line 818 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 818 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 818 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 818 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 818 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 818 "cplus.met"
            } else {
#line 818 "cplus.met"
                tokenAhead = 0 ;
#line 818 "cplus.met"
            }
#line 818 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 818 "cplus.met"
            _ptTree0=_ptRes1;
#line 818 "cplus.met"
        }
#line 818 "cplus.met"
        _retValue =_ptTree0;
#line 818 "cplus.met"
        goto other_config_ret;
#line 818 "cplus.met"
    }
#line 818 "cplus.met"
#line 818 "cplus.met"
#line 818 "cplus.met"

#line 819 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 819 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 819 "cplus.met"
return((PPTREE) 0);
#line 819 "cplus.met"

#line 819 "cplus.met"
other_config_exit :
#line 819 "cplus.met"

#line 819 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 819 "cplus.met"
    _funcLevel--;
#line 819 "cplus.met"
    return((PPTREE) -1) ;
#line 819 "cplus.met"

#line 819 "cplus.met"
other_config_ret :
#line 819 "cplus.met"
    
#line 819 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 819 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 819 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 819 "cplus.met"
    return _retValue ;
#line 819 "cplus.met"
}
#line 819 "cplus.met"

#line 819 "cplus.met"
#line 3095 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3095 "cplus.met"
{
#line 3095 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3095 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3095 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3095 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3095 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3095 "cplus.met"
#line 3095 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3095 "cplus.met"
#line 3095 "cplus.met"
    PPTREE paramList = (PPTREE) 0;
#line 3095 "cplus.met"
#line 3097 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3097 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3097 "cplus.met"
        MulFreeTree(2,_addlist1,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3097 "cplus.met"
    } else {
#line 3097 "cplus.met"
        tokenAhead = 0 ;
#line 3097 "cplus.met"
    }
#line 3097 "cplus.met"
#line 3098 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3098 "cplus.met"
#line 3099 "cplus.met"
#line 3100 "cplus.met"
         { int exit = 0 ;
#line 3100 "cplus.met"
#line 3101 "cplus.met"
        {
#line 3101 "cplus.met"
            PPTREE _ptTree0=0;
#line 3101 "cplus.met"
            {
#line 3101 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3101 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3101 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3101 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3101 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,_addlist1,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3101 "cplus.met"
                } else {
#line 3101 "cplus.met"
                    tokenAhead = 0 ;
#line 3101 "cplus.met"
                }
#line 3101 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3101 "cplus.met"
                _ptTree0=_ptRes1;
#line 3101 "cplus.met"
            }
#line 3101 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3101 "cplus.met"
        }
#line 3101 "cplus.met"
#line 3101 "cplus.met"
        _addlist1 = paramList ;
#line 3101 "cplus.met"
#line 3102 "cplus.met"
        while ((! ( exit )) && 
#line 3102 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3102 "cplus.met"
#line 3103 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3103 "cplus.met"
#line 3104 "cplus.met"
#line 3104 "cplus.met"
                {
#line 3104 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3104 "cplus.met"
                    {
#line 3104 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3104 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3104 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3104 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3104 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,_addlist1,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3104 "cplus.met"
                        } else {
#line 3104 "cplus.met"
                            tokenAhead = 0 ;
#line 3104 "cplus.met"
                        }
#line 3104 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3104 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3104 "cplus.met"
                    }
#line 3104 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3104 "cplus.met"
                }
#line 3104 "cplus.met"
#line 3104 "cplus.met"
                if (paramList){
#line 3104 "cplus.met"
#line 3104 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3104 "cplus.met"
                } else {
#line 3104 "cplus.met"
#line 3104 "cplus.met"
                    paramList = _addlist1 ;
#line 3104 "cplus.met"
                }
#line 3104 "cplus.met"
            } else {
#line 3104 "cplus.met"
#line 3106 "cplus.met"
#line 3107 "cplus.met"
                {
#line 3107 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3107 "cplus.met"
                    {
#line 3107 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3107 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3107 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3107 "cplus.met"
                    }
#line 3107 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3107 "cplus.met"
                }
#line 3107 "cplus.met"
#line 3107 "cplus.met"
                if (paramList){
#line 3107 "cplus.met"
#line 3107 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3107 "cplus.met"
                } else {
#line 3107 "cplus.met"
#line 3107 "cplus.met"
                    paramList = _addlist1 ;
#line 3107 "cplus.met"
                }
#line 3107 "cplus.met"
#line 3108 "cplus.met"
                 exit = 1 ;
#line 3108 "cplus.met"
#line 3109 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3109 "cplus.met"
#line 3109 "cplus.met"
                }
#line 3109 "cplus.met"
#line 3109 "cplus.met"
            }
#line 3109 "cplus.met"
        } 
#line 3109 "cplus.met"
#line 3112 "cplus.met"
        if ((! ( exit )) && 
#line 3112 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3112 "cplus.met"
#line 3113 "cplus.met"
            {
#line 3113 "cplus.met"
                PPTREE _ptTree0=0;
#line 3113 "cplus.met"
                {
#line 3113 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3113 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3113 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3113 "cplus.met"
                }
#line 3113 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3113 "cplus.met"
            }
#line 3113 "cplus.met"
#line 3113 "cplus.met"
        }
#line 3113 "cplus.met"
#line 3114 "cplus.met"
         } 
#line 3114 "cplus.met"
#line 3114 "cplus.met"
#line 3114 "cplus.met"
    }
#line 3114 "cplus.met"
#line 3116 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3116 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3116 "cplus.met"
        MulFreeTree(2,_addlist1,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3116 "cplus.met"
    } else {
#line 3116 "cplus.met"
        tokenAhead = 0 ;
#line 3116 "cplus.met"
    }
#line 3116 "cplus.met"
#line 3117 "cplus.met"
    {
#line 3117 "cplus.met"
        _retValue = paramList ;
#line 3117 "cplus.met"
        goto parameter_list_ret;
#line 3117 "cplus.met"
        
#line 3117 "cplus.met"
    }
#line 3117 "cplus.met"
#line 3117 "cplus.met"
#line 3117 "cplus.met"

#line 3118 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3118 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3118 "cplus.met"
return((PPTREE) 0);
#line 3118 "cplus.met"

#line 3118 "cplus.met"
parameter_list_exit :
#line 3118 "cplus.met"

#line 3118 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3118 "cplus.met"
    _funcLevel--;
#line 3118 "cplus.met"
    return((PPTREE) -1) ;
#line 3118 "cplus.met"

#line 3118 "cplus.met"
parameter_list_ret :
#line 3118 "cplus.met"
    
#line 3118 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3118 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3118 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3118 "cplus.met"
    return _retValue ;
#line 3118 "cplus.met"
}
#line 3118 "cplus.met"

#line 3118 "cplus.met"
#line 3120 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3120 "cplus.met"
{
#line 3120 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3120 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3120 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3120 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3120 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3120 "cplus.met"
#line 3120 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3120 "cplus.met"
#line 3120 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3120 "cplus.met"
#line 3122 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3122 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3122 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3122 "cplus.met"
    } else {
#line 3122 "cplus.met"
        tokenAhead = 0 ;
#line 3122 "cplus.met"
    }
#line 3122 "cplus.met"
#line 3123 "cplus.met"
     { int followed = 0;
#line 3123 "cplus.met"
#line 3124 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3124 "cplus.met"
#line 3125 "cplus.met"
#line 3126 "cplus.met"
         { int exit = 0 ;
#line 3126 "cplus.met"
#line 3127 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3127 "cplus.met"
#line 3128 "cplus.met"
#line 3129 "cplus.met"
             followed = 1 ;
#line 3129 "cplus.met"
#line 3130 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3130 "cplus.met"
#line 3130 "cplus.met"
#line 3130 "cplus.met"
        } else {
#line 3130 "cplus.met"
#line 3133 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3133 "cplus.met"
#line 3134 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3134 "cplus.met"
#line 3134 "cplus.met"
            } else {
#line 3134 "cplus.met"
#line 3136 "cplus.met"
#line 3137 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3137 "cplus.met"
#line 3138 "cplus.met"
                    {
#line 3138 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3138 "cplus.met"
                        {
#line 3138 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3138 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3138 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3138 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3138 "cplus.met"
                        }
#line 3138 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3138 "cplus.met"
                    }
#line 3138 "cplus.met"
#line 3138 "cplus.met"
                }
#line 3138 "cplus.met"
#line 3139 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3139 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3139 "cplus.met"
#line 3140 "cplus.met"
                     followed = 1;
#line 3140 "cplus.met"
                }
#line 3140 "cplus.met"
#line 3141 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3141 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3141 "cplus.met"
#line 3142 "cplus.met"
#line 3143 "cplus.met"
                     followed = 1;
#line 3143 "cplus.met"
#line 3144 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3144 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3144 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3144 "cplus.met"
                    } else {
#line 3144 "cplus.met"
                        tokenAhead = 0 ;
#line 3144 "cplus.met"
                    }
#line 3144 "cplus.met"
#line 3144 "cplus.met"
#line 3144 "cplus.met"
                }
#line 3144 "cplus.met"
#line 3144 "cplus.met"
            }
#line 3144 "cplus.met"
        }
#line 3144 "cplus.met"
#line 3144 "cplus.met"
        _addlist1 = paramList ;
#line 3144 "cplus.met"
#line 3147 "cplus.met"
        while ( followed && !exit ) { 
#line 3147 "cplus.met"
#line 3148 "cplus.met"
#line 3149 "cplus.met"
             followed = 0 ;
#line 3149 "cplus.met"
#line 3150 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3150 "cplus.met"
#line 3151 "cplus.met"
#line 3152 "cplus.met"
                 followed = 1 ;
#line 3152 "cplus.met"
#line 3153 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3153 "cplus.met"
#line 3153 "cplus.met"
                if (paramList){
#line 3153 "cplus.met"
#line 3153 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3153 "cplus.met"
                } else {
#line 3153 "cplus.met"
#line 3153 "cplus.met"
                    paramList = _addlist1 ;
#line 3153 "cplus.met"
                }
#line 3153 "cplus.met"
#line 3153 "cplus.met"
#line 3153 "cplus.met"
            } else {
#line 3153 "cplus.met"
#line 3156 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3156 "cplus.met"
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                    if (paramList){
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3157 "cplus.met"
                    } else {
#line 3157 "cplus.met"
#line 3157 "cplus.met"
                        paramList = _addlist1 ;
#line 3157 "cplus.met"
                    }
#line 3157 "cplus.met"
                } else {
#line 3157 "cplus.met"
#line 3159 "cplus.met"
#line 3160 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3160 "cplus.met"
#line 3161 "cplus.met"
#line 3162 "cplus.met"
                        {
#line 3162 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3162 "cplus.met"
                            {
#line 3162 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3162 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3162 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3162 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3162 "cplus.met"
                            }
#line 3162 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3162 "cplus.met"
                        }
#line 3162 "cplus.met"
#line 3162 "cplus.met"
                        if (paramList){
#line 3162 "cplus.met"
#line 3162 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3162 "cplus.met"
                        } else {
#line 3162 "cplus.met"
#line 3162 "cplus.met"
                            paramList = _addlist1 ;
#line 3162 "cplus.met"
                        }
#line 3162 "cplus.met"
#line 3163 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3163 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3163 "cplus.met"
#line 3164 "cplus.met"
                             followed = 1;
#line 3164 "cplus.met"
                        }
#line 3164 "cplus.met"
#line 3165 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3165 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3165 "cplus.met"
#line 3166 "cplus.met"
#line 3167 "cplus.met"
                             followed = 1;
#line 3167 "cplus.met"
#line 3168 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3168 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3168 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3168 "cplus.met"
                            } else {
#line 3168 "cplus.met"
                                tokenAhead = 0 ;
#line 3168 "cplus.met"
                            }
#line 3168 "cplus.met"
#line 3168 "cplus.met"
#line 3168 "cplus.met"
                        }
#line 3168 "cplus.met"
#line 3168 "cplus.met"
#line 3169 "cplus.met"
                    } else {
#line 3169 "cplus.met"
#line 3172 "cplus.met"
#line 3173 "cplus.met"
                        {
#line 3173 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3173 "cplus.met"
                            {
#line 3173 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3173 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3173 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3173 "cplus.met"
                            }
#line 3173 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3173 "cplus.met"
                        }
#line 3173 "cplus.met"
#line 3173 "cplus.met"
                        if (paramList){
#line 3173 "cplus.met"
#line 3173 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3173 "cplus.met"
                        } else {
#line 3173 "cplus.met"
#line 3173 "cplus.met"
                            paramList = _addlist1 ;
#line 3173 "cplus.met"
                        }
#line 3173 "cplus.met"
#line 3174 "cplus.met"
                         exit = 1 ;
#line 3174 "cplus.met"
#line 3175 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3175 "cplus.met"
#line 3175 "cplus.met"
                        }
#line 3175 "cplus.met"
#line 3177 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3177 "cplus.met"
#line 3178 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3178 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3178 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3178 "cplus.met"
                            } else {
#line 3178 "cplus.met"
                                tokenAhead = 0 ;
#line 3178 "cplus.met"
                            }
#line 3178 "cplus.met"
                        }
#line 3178 "cplus.met"
#line 3178 "cplus.met"
                    }
#line 3178 "cplus.met"
#line 3178 "cplus.met"
                }
#line 3178 "cplus.met"
            }
#line 3178 "cplus.met"
#line 3178 "cplus.met"
        } 
#line 3178 "cplus.met"
#line 3182 "cplus.met"
        if ((! ( exit )) && 
#line 3182 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3182 "cplus.met"
#line 3183 "cplus.met"
            {
#line 3183 "cplus.met"
                PPTREE _ptTree0=0;
#line 3183 "cplus.met"
                {
#line 3183 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3183 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3183 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3183 "cplus.met"
                }
#line 3183 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3183 "cplus.met"
            }
#line 3183 "cplus.met"
#line 3183 "cplus.met"
        }
#line 3183 "cplus.met"
#line 3184 "cplus.met"
         }  
#line 3184 "cplus.met"
#line 3184 "cplus.met"
#line 3184 "cplus.met"
    }
#line 3184 "cplus.met"
#line 3186 "cplus.met"
     } 
#line 3186 "cplus.met"
#line 3187 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3187 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3187 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3187 "cplus.met"
    } else {
#line 3187 "cplus.met"
        tokenAhead = 0 ;
#line 3187 "cplus.met"
    }
#line 3187 "cplus.met"
#line 3188 "cplus.met"
    {
#line 3188 "cplus.met"
        _retValue = paramList ;
#line 3188 "cplus.met"
        goto parameter_list_extended_ret;
#line 3188 "cplus.met"
        
#line 3188 "cplus.met"
    }
#line 3188 "cplus.met"
#line 3188 "cplus.met"
#line 3188 "cplus.met"

#line 3189 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3189 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3189 "cplus.met"
return((PPTREE) 0);
#line 3189 "cplus.met"

#line 3189 "cplus.met"
parameter_list_extended_exit :
#line 3189 "cplus.met"

#line 3189 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3189 "cplus.met"
    _funcLevel--;
#line 3189 "cplus.met"
    return((PPTREE) -1) ;
#line 3189 "cplus.met"

#line 3189 "cplus.met"
parameter_list_extended_ret :
#line 3189 "cplus.met"
    
#line 3189 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3189 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3189 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3189 "cplus.met"
    return _retValue ;
#line 3189 "cplus.met"
}
#line 3189 "cplus.met"

#line 3189 "cplus.met"
#line 3595 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3595 "cplus.met"
{
#line 3595 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3595 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3595 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3595 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3595 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3595 "cplus.met"
#line 3595 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3595 "cplus.met"
#line 3597 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 74, cplus)) || 
#line 3597 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 133, cplus))) || 
#line 3597 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 38, cplus))) || 
#line 3597 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 137, cplus))) || 
#line 3597 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 136, cplus))) || 
#line 3597 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 60, cplus))){
#line 3597 "cplus.met"
#line 3603 "cplus.met"
        {
#line 3603 "cplus.met"
            _retValue = retValue ;
#line 3603 "cplus.met"
            goto parse_entry_ret;
#line 3603 "cplus.met"
            
#line 3603 "cplus.met"
        }
#line 3603 "cplus.met"
    } else {
#line 3603 "cplus.met"
#line 3605 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3605 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3605 "cplus.met"
        }
#line 3605 "cplus.met"
    }
#line 3605 "cplus.met"
#line 3605 "cplus.met"
#line 3605 "cplus.met"

#line 3606 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3606 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3606 "cplus.met"
return((PPTREE) 0);
#line 3606 "cplus.met"

#line 3606 "cplus.met"
parse_entry_exit :
#line 3606 "cplus.met"

#line 3606 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3606 "cplus.met"
    _funcLevel--;
#line 3606 "cplus.met"
    return((PPTREE) -1) ;
#line 3606 "cplus.met"

#line 3606 "cplus.met"
parse_entry_ret :
#line 3606 "cplus.met"
    
#line 3606 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3606 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3606 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3606 "cplus.met"
    return _retValue ;
#line 3606 "cplus.met"
}
#line 3606 "cplus.met"

#line 3606 "cplus.met"
#line 2718 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2718 "cplus.met"
{
#line 2718 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2718 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2718 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2718 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2718 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2718 "cplus.met"
#line 2718 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2718 "cplus.met"
#line 2720 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2720 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2720 "cplus.met"
    }
#line 2720 "cplus.met"
#line 2721 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2721 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2721 "cplus.met"
#line 2722 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2722 "cplus.met"
        switch( lexEl.Value) {
#line 2722 "cplus.met"
#line 2723 "cplus.met"
            case POINETOI : 
#line 2723 "cplus.met"
                tokenAhead = 0 ;
#line 2723 "cplus.met"
                CommTerm();
#line 2723 "cplus.met"
#line 2723 "cplus.met"
                {
#line 2723 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2723 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2723 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2723 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2723 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2723 "cplus.met"
                    }
#line 2723 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2723 "cplus.met"
                    expTree=_ptRes0;
#line 2723 "cplus.met"
                }
#line 2723 "cplus.met"
                break;
#line 2723 "cplus.met"
#line 2725 "cplus.met"
            case TIRESUPEETOI : 
#line 2725 "cplus.met"
                tokenAhead = 0 ;
#line 2725 "cplus.met"
                CommTerm();
#line 2725 "cplus.met"
#line 2725 "cplus.met"
                {
#line 2725 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2725 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2725 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2725 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2725 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2725 "cplus.met"
                    }
#line 2725 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2725 "cplus.met"
                    expTree=_ptRes0;
#line 2725 "cplus.met"
                }
#line 2725 "cplus.met"
                break;
#line 2725 "cplus.met"
            default :
#line 2725 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2725 "cplus.met"
                break;
#line 2725 "cplus.met"
        }
#line 2725 "cplus.met"
    } 
#line 2725 "cplus.met"
#line 2728 "cplus.met"
    {
#line 2728 "cplus.met"
        _retValue = expTree ;
#line 2728 "cplus.met"
        goto pm_expression_ret;
#line 2728 "cplus.met"
        
#line 2728 "cplus.met"
    }
#line 2728 "cplus.met"
#line 2728 "cplus.met"
#line 2728 "cplus.met"

#line 2729 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2729 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2729 "cplus.met"
return((PPTREE) 0);
#line 2729 "cplus.met"

#line 2729 "cplus.met"
pm_expression_exit :
#line 2729 "cplus.met"

#line 2729 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2729 "cplus.met"
    _funcLevel--;
#line 2729 "cplus.met"
    return((PPTREE) -1) ;
#line 2729 "cplus.met"

#line 2729 "cplus.met"
pm_expression_ret :
#line 2729 "cplus.met"
    
#line 2729 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2729 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2729 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2729 "cplus.met"
    return _retValue ;
#line 2729 "cplus.met"
}
#line 2729 "cplus.met"

#line 2729 "cplus.met"
#line 2888 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 2888 "cplus.met"
{
#line 2888 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2888 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2888 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2888 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 2888 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2888 "cplus.met"
#line 2888 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2888 "cplus.met"
#line 2890 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 109, cplus))){
#line 2890 "cplus.met"
#line 2891 "cplus.met"
#line 2892 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2892 "cplus.met"
            MulFreeTree(2,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2892 "cplus.met"
        }
#line 2892 "cplus.met"
#line 2893 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 2893 "cplus.met"
#line 2894 "cplus.met"
            
#line 2894 "cplus.met"
            MulFreeTree(2,expList,expTree);
            LEX_EXIT ("",0);
#line 2894 "cplus.met"
            goto postfix_expression_exit;
#line 2894 "cplus.met"
#line 2894 "cplus.met"
        }
#line 2894 "cplus.met"
#line 2894 "cplus.met"
#line 2894 "cplus.met"
    }
#line 2894 "cplus.met"
#line 2896 "cplus.met"
    while (((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2896 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 2896 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 2896 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 2896 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 2896 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) { 
#line 2896 "cplus.met"
#line 2902 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2902 "cplus.met"
        switch( lexEl.Value) {
#line 2902 "cplus.met"
#line 2905 "cplus.met"
            case POUV : 
#line 2905 "cplus.met"
                tokenAhead = 0 ;
#line 2905 "cplus.met"
                CommTerm();
#line 2905 "cplus.met"
#line 2904 "cplus.met"
#line 2905 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2905 "cplus.met"
#line 2906 "cplus.met"
                    {
#line 2906 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2906 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2906 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2906 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2906 "cplus.met"
                        expTree=_ptRes0;
#line 2906 "cplus.met"
                    }
#line 2906 "cplus.met"
                } else {
#line 2906 "cplus.met"
#line 2908 "cplus.met"
                    {
#line 2908 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2908 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2908 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2908 "cplus.met"
                        expTree=_ptRes0;
#line 2908 "cplus.met"
                    }
#line 2908 "cplus.met"
                }
#line 2908 "cplus.met"
#line 2909 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2909 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2909 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 2909 "cplus.met"
                } else {
#line 2909 "cplus.met"
                    tokenAhead = 0 ;
#line 2909 "cplus.met"
                }
#line 2909 "cplus.met"
#line 2909 "cplus.met"
                break;
#line 2909 "cplus.met"
#line 2913 "cplus.met"
            case COUV : 
#line 2913 "cplus.met"
                tokenAhead = 0 ;
#line 2913 "cplus.met"
                CommTerm();
#line 2913 "cplus.met"
#line 2912 "cplus.met"
#line 2913 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2913 "cplus.met"
#line 2914 "cplus.met"
                    {
#line 2914 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2914 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2914 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2914 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2914 "cplus.met"
                        expTree=_ptRes0;
#line 2914 "cplus.met"
                    }
#line 2914 "cplus.met"
                } else {
#line 2914 "cplus.met"
#line 2916 "cplus.met"
                    {
#line 2916 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2916 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2916 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2916 "cplus.met"
                        expTree=_ptRes0;
#line 2916 "cplus.met"
                    }
#line 2916 "cplus.met"
                }
#line 2916 "cplus.met"
#line 2917 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2917 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2917 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"]")
#line 2917 "cplus.met"
                } else {
#line 2917 "cplus.met"
                    tokenAhead = 0 ;
#line 2917 "cplus.met"
                }
#line 2917 "cplus.met"
#line 2917 "cplus.met"
                break;
#line 2917 "cplus.met"
#line 2919 "cplus.met"
            case META : 
#line 2919 "cplus.met"
            case POINT : 
#line 2919 "cplus.met"
                tokenAhead = 0 ;
#line 2919 "cplus.met"
                CommTerm();
#line 2919 "cplus.met"
#line 2919 "cplus.met"
                {
#line 2919 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2919 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 2919 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2919 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2919 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2919 "cplus.met"
                    }
#line 2919 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2919 "cplus.met"
                    expTree=_ptRes0;
#line 2919 "cplus.met"
                }
#line 2919 "cplus.met"
                break;
#line 2919 "cplus.met"
#line 2921 "cplus.met"
            case TIRESUPE : 
#line 2921 "cplus.met"
                tokenAhead = 0 ;
#line 2921 "cplus.met"
                CommTerm();
#line 2921 "cplus.met"
#line 2921 "cplus.met"
                {
#line 2921 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2921 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 2921 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2921 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2921 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2921 "cplus.met"
                    }
#line 2921 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2921 "cplus.met"
                    expTree=_ptRes0;
#line 2921 "cplus.met"
                }
#line 2921 "cplus.met"
                break;
#line 2921 "cplus.met"
#line 2923 "cplus.met"
            case PLUSPLUS : 
#line 2923 "cplus.met"
                tokenAhead = 0 ;
#line 2923 "cplus.met"
                CommTerm();
#line 2923 "cplus.met"
#line 2923 "cplus.met"
                {
#line 2923 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2923 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 2923 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2923 "cplus.met"
                    expTree=_ptRes0;
#line 2923 "cplus.met"
                }
#line 2923 "cplus.met"
                break;
#line 2923 "cplus.met"
#line 2924 "cplus.met"
            case TIRETIRE : 
#line 2924 "cplus.met"
                tokenAhead = 0 ;
#line 2924 "cplus.met"
                CommTerm();
#line 2924 "cplus.met"
#line 2924 "cplus.met"
                {
#line 2924 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2924 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 2924 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2924 "cplus.met"
                    expTree=_ptRes0;
#line 2924 "cplus.met"
                }
#line 2924 "cplus.met"
                break;
#line 2924 "cplus.met"
            default :
#line 2924 "cplus.met"
                MulFreeTree(2,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or [ or POINT or -> or ++ or --")
#line 2924 "cplus.met"
                break;
#line 2924 "cplus.met"
        }
#line 2924 "cplus.met"
    } 
#line 2924 "cplus.met"
#line 2926 "cplus.met"
    {
#line 2926 "cplus.met"
        _retValue = expTree ;
#line 2926 "cplus.met"
        goto postfix_expression_ret;
#line 2926 "cplus.met"
        
#line 2926 "cplus.met"
    }
#line 2926 "cplus.met"
#line 2926 "cplus.met"
#line 2926 "cplus.met"

#line 2927 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2927 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2927 "cplus.met"
return((PPTREE) 0);
#line 2927 "cplus.met"

#line 2927 "cplus.met"
postfix_expression_exit :
#line 2927 "cplus.met"

#line 2927 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 2927 "cplus.met"
    _funcLevel--;
#line 2927 "cplus.met"
    return((PPTREE) -1) ;
#line 2927 "cplus.met"

#line 2927 "cplus.met"
postfix_expression_ret :
#line 2927 "cplus.met"
    
#line 2927 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 2927 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2927 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2927 "cplus.met"
    return _retValue ;
#line 2927 "cplus.met"
}
#line 2927 "cplus.met"

#line 2927 "cplus.met"
#line 2942 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 2942 "cplus.met"
{
#line 2942 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2942 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2942 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2942 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 2942 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2942 "cplus.met"
#line 2942 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2942 "cplus.met"
#line 2944 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2944 "cplus.met"
    switch( lexEl.Value) {
#line 2944 "cplus.met"
#line 2947 "cplus.met"
        case POUV : 
#line 2947 "cplus.met"
            tokenAhead = 0 ;
#line 2947 "cplus.met"
            CommTerm();
#line 2947 "cplus.met"
#line 2946 "cplus.met"
#line 2947 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2947 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2947 "cplus.met"
            }
#line 2947 "cplus.met"
#line 2948 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2948 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2948 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2948 "cplus.met"
            } else {
#line 2948 "cplus.met"
                tokenAhead = 0 ;
#line 2948 "cplus.met"
            }
#line 2948 "cplus.met"
#line 2949 "cplus.met"
            {
#line 2949 "cplus.met"
                PPTREE _ptTree0=0;
#line 2949 "cplus.met"
                {
#line 2949 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2949 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 2949 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 2949 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2949 "cplus.met"
                }
#line 2949 "cplus.met"
                _retValue =_ptTree0;
#line 2949 "cplus.met"
                goto primary_expression_ret;
#line 2949 "cplus.met"
            }
#line 2949 "cplus.met"
#line 2949 "cplus.met"
            break;
#line 2949 "cplus.met"
#line 2951 "cplus.met"
        case OPERATOR : 
#line 2951 "cplus.met"
#line 2951 "cplus.met"
            {
#line 2951 "cplus.met"
                PPTREE _ptTree0=0;
#line 2951 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2951 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2951 "cplus.met"
                }
#line 2951 "cplus.met"
                _retValue =_ptTree0;
#line 2951 "cplus.met"
                goto primary_expression_ret;
#line 2951 "cplus.met"
            }
#line 2951 "cplus.met"
            break;
#line 2951 "cplus.met"
#line 2952 "cplus.met"
        case TILD : 
#line 2952 "cplus.met"
#line 2952 "cplus.met"
            {
#line 2952 "cplus.met"
                PPTREE _ptTree0=0;
#line 2952 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2952 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2952 "cplus.met"
                }
#line 2952 "cplus.met"
                _retValue =_ptTree0;
#line 2952 "cplus.met"
                goto primary_expression_ret;
#line 2952 "cplus.met"
            }
#line 2952 "cplus.met"
            break;
#line 2952 "cplus.met"
#line 2953 "cplus.met"
        case META : 
#line 2953 "cplus.met"
#line 2954 "cplus.met"
#line 2955 "cplus.met"
            {
#line 2955 "cplus.met"
                PPTREE _ptTree0=0;
#line 2955 "cplus.met"
                {
#line 2955 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2955 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 2955 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 2955 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 2955 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 2955 "cplus.met"
                    } else {
#line 2955 "cplus.met"
                        tokenAhead = 0 ;
#line 2955 "cplus.met"
                    }
#line 2955 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2955 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2955 "cplus.met"
                }
#line 2955 "cplus.met"
                _retValue =_ptTree0;
#line 2955 "cplus.met"
                goto primary_expression_ret;
#line 2955 "cplus.met"
            }
#line 2955 "cplus.met"
#line 2955 "cplus.met"
            break;
#line 2955 "cplus.met"
#line 2957 "cplus.met"
        case IDENT : 
#line 2957 "cplus.met"
#line 2958 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 2958 "cplus.met"
#line 2959 "cplus.met"
#line 2960 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2960 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2960 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 2960 "cplus.met"
                } else {
#line 2960 "cplus.met"
                    tokenAhead = 0 ;
#line 2960 "cplus.met"
                }
#line 2960 "cplus.met"
#line 2961 "cplus.met"
                {
#line 2961 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2961 "cplus.met"
                    {
#line 2961 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2961 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 2961 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 2961 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2961 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 2961 "cplus.met"
                        } else {
#line 2961 "cplus.met"
                            tokenAhead = 0 ;
#line 2961 "cplus.met"
                        }
#line 2961 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2961 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2961 "cplus.met"
                    }
#line 2961 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2961 "cplus.met"
                }
#line 2961 "cplus.met"
#line 2962 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2962 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2962 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 2962 "cplus.met"
                } else {
#line 2962 "cplus.met"
                    tokenAhead = 0 ;
#line 2962 "cplus.met"
                }
#line 2962 "cplus.met"
#line 2963 "cplus.met"
                {
#line 2963 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2963 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2963 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2963 "cplus.met"
                    }
#line 2963 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2963 "cplus.met"
                }
#line 2963 "cplus.met"
#line 2964 "cplus.met"
                {
#line 2964 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2964 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 2964 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 2964 "cplus.met"
                    expTree=_ptRes0;
#line 2964 "cplus.met"
                }
#line 2964 "cplus.met"
#line 2965 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2965 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2965 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 2965 "cplus.met"
                } else {
#line 2965 "cplus.met"
                    tokenAhead = 0 ;
#line 2965 "cplus.met"
                }
#line 2965 "cplus.met"
#line 2966 "cplus.met"
                {
#line 2966 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2966 "cplus.met"
                    {
#line 2966 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2966 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 2966 "cplus.met"
                        {
#line 2966 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2966 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 2966 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 2966 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2966 "cplus.met"
                        }
#line 2966 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2966 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 2966 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2966 "cplus.met"
                    }
#line 2966 "cplus.met"
                    _retValue =_ptTree0;
#line 2966 "cplus.met"
                    goto primary_expression_ret;
#line 2966 "cplus.met"
                }
#line 2966 "cplus.met"
#line 2966 "cplus.met"
#line 2966 "cplus.met"
            } else {
#line 2966 "cplus.met"
#line 2969 "cplus.met"
                {
#line 2969 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2969 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2969 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2969 "cplus.met"
                    }
#line 2969 "cplus.met"
                    _retValue =_ptTree0;
#line 2969 "cplus.met"
                    goto primary_expression_ret;
#line 2969 "cplus.met"
                }
#line 2969 "cplus.met"
            }
#line 2969 "cplus.met"
            break;
#line 2969 "cplus.met"
#line 2970 "cplus.met"
        case STRING : 
#line 2970 "cplus.met"
#line 2970 "cplus.met"
            {
#line 2970 "cplus.met"
                PPTREE _ptTree0=0;
#line 2970 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2970 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2970 "cplus.met"
                }
#line 2970 "cplus.met"
                _retValue =_ptTree0;
#line 2970 "cplus.met"
                goto primary_expression_ret;
#line 2970 "cplus.met"
            }
#line 2970 "cplus.met"
            break;
#line 2970 "cplus.met"
#line 2971 "cplus.met"
        case VA_ARG : 
#line 2971 "cplus.met"
            tokenAhead = 0 ;
#line 2971 "cplus.met"
            CommTerm();
#line 2971 "cplus.met"
#line 2972 "cplus.met"
#line 2973 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2973 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2973 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 2973 "cplus.met"
            } else {
#line 2973 "cplus.met"
                tokenAhead = 0 ;
#line 2973 "cplus.met"
            }
#line 2973 "cplus.met"
#line 2974 "cplus.met"
            {
#line 2974 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2974 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 2974 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2974 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2974 "cplus.met"
                }
#line 2974 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2974 "cplus.met"
                expTree=_ptRes0;
#line 2974 "cplus.met"
            }
#line 2974 "cplus.met"
#line 2975 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2975 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2975 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 2975 "cplus.met"
            } else {
#line 2975 "cplus.met"
                tokenAhead = 0 ;
#line 2975 "cplus.met"
            }
#line 2975 "cplus.met"
#line 2976 "cplus.met"
            {
#line 2976 "cplus.met"
                PPTREE _ptTree0=0;
#line 2976 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2976 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2976 "cplus.met"
                }
#line 2976 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 2976 "cplus.met"
            }
#line 2976 "cplus.met"
#line 2977 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2977 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2977 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2977 "cplus.met"
            } else {
#line 2977 "cplus.met"
                tokenAhead = 0 ;
#line 2977 "cplus.met"
            }
#line 2977 "cplus.met"
#line 2978 "cplus.met"
            {
#line 2978 "cplus.met"
                _retValue = expTree ;
#line 2978 "cplus.met"
                goto primary_expression_ret;
#line 2978 "cplus.met"
                
#line 2978 "cplus.met"
            }
#line 2978 "cplus.met"
#line 2978 "cplus.met"
            break;
#line 2978 "cplus.met"
#line 2980 "cplus.met"
        default : 
#line 2980 "cplus.met"
#line 2980 "cplus.met"
            {
#line 2980 "cplus.met"
                PPTREE _ptTree0=0;
#line 2980 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 2980 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2980 "cplus.met"
                }
#line 2980 "cplus.met"
                _retValue =_ptTree0;
#line 2980 "cplus.met"
                goto primary_expression_ret;
#line 2980 "cplus.met"
            }
#line 2980 "cplus.met"
            break;
#line 2980 "cplus.met"
    }
#line 2980 "cplus.met"
#line 2980 "cplus.met"
#line 2981 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2981 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2981 "cplus.met"
return((PPTREE) 0);
#line 2981 "cplus.met"

#line 2981 "cplus.met"
primary_expression_exit :
#line 2981 "cplus.met"

#line 2981 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 2981 "cplus.met"
    _funcLevel--;
#line 2981 "cplus.met"
    return((PPTREE) -1) ;
#line 2981 "cplus.met"

#line 2981 "cplus.met"
primary_expression_ret :
#line 2981 "cplus.met"
    
#line 2981 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 2981 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2981 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2981 "cplus.met"
    return _retValue ;
#line 2981 "cplus.met"
}
#line 2981 "cplus.met"

#line 2981 "cplus.met"
#line 755 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 755 "cplus.met"
{
#line 755 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 755 "cplus.met"
    int _value,_nbPre = 0 ;
#line 755 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 755 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 755 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 755 "cplus.met"
#line 755 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 755 "cplus.met"
#line 755 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 755 "cplus.met"
#line 757 "cplus.met"
     debut : 
#line 757 "cplus.met"
#line 757 "cplus.met"
    _addlist1 = list ;
#line 757 "cplus.met"
#line 758 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 62, cplus)) { 
#line 758 "cplus.met"
#line 759 "cplus.met"
#line 759 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 759 "cplus.met"
#line 759 "cplus.met"
        if (list){
#line 759 "cplus.met"
#line 759 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 759 "cplus.met"
        } else {
#line 759 "cplus.met"
#line 759 "cplus.met"
            list = _addlist1 ;
#line 759 "cplus.met"
        }
#line 759 "cplus.met"
    } 
#line 759 "cplus.met"
#line 760 "cplus.met"
    {
#line 760 "cplus.met"
        PPTREE _ptTree0=0;
#line 760 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 760 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 760 "cplus.met"
        }
#line 760 "cplus.met"
        list =AddList(list , _ptTree0);
#line 760 "cplus.met"
    }
#line 760 "cplus.met"
#line 761 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 24, cplus)){
#line 761 "cplus.met"
#line 761 "cplus.met"
    }
#line 761 "cplus.met"
#line 763 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 763 "cplus.met"
#line 764 "cplus.met"
#line 766 "cplus.met"
        dumperror ();
#line 766 "cplus.met"
#line 768 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 768 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 768 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 768 "cplus.met"
        } else {
#line 768 "cplus.met"
            tokenAhead = 0 ;
#line 768 "cplus.met"
        }
#line 768 "cplus.met"
#line 769 "cplus.met"
         hasGotError = 1 ;
#line 769 "cplus.met"
#line 770 "cplus.met"
         goto debut ;
#line 770 "cplus.met"
#line 770 "cplus.met"
#line 770 "cplus.met"
    }
#line 770 "cplus.met"
#line 772 "cplus.met"
    if ( hasGotError ){
#line 772 "cplus.met"
#line 773 "cplus.met"
         exit (-1);
#line 773 "cplus.met"
    }
#line 773 "cplus.met"
#line 774 "cplus.met"
    {
#line 774 "cplus.met"
        PPTREE _ptTree0=0;
#line 774 "cplus.met"
        {
#line 774 "cplus.met"
            PPTREE _ptRes1=0;
#line 774 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 774 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 774 "cplus.met"
            _ptTree0=_ptRes1;
#line 774 "cplus.met"
        }
#line 774 "cplus.met"
        _retValue =_ptTree0;
#line 774 "cplus.met"
        goto program_ret;
#line 774 "cplus.met"
    }
#line 774 "cplus.met"
#line 774 "cplus.met"
#line 774 "cplus.met"

#line 775 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 775 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 775 "cplus.met"
return((PPTREE) 0);
#line 775 "cplus.met"

#line 775 "cplus.met"
program_exit :
#line 775 "cplus.met"

#line 775 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 775 "cplus.met"
    _funcLevel--;
#line 775 "cplus.met"
    return((PPTREE) -1) ;
#line 775 "cplus.met"

#line 775 "cplus.met"
program_ret :
#line 775 "cplus.met"
    
#line 775 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 775 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 775 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 775 "cplus.met"
    return _retValue ;
#line 775 "cplus.met"
}
#line 775 "cplus.met"

#line 775 "cplus.met"
#line 1890 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1890 "cplus.met"
{
#line 1890 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1890 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1890 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1890 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1890 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1890 "cplus.met"
#line 1890 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1890 "cplus.met"
#line 1890 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1890 "cplus.met"
#line 1892 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1892 "cplus.met"
    switch( lexEl.Value) {
#line 1892 "cplus.met"
#line 1893 "cplus.met"
        case PUBLIC : 
#line 1893 "cplus.met"
            tokenAhead = 0 ;
#line 1893 "cplus.met"
            CommTerm();
#line 1893 "cplus.met"
#line 1893 "cplus.met"
            {
#line 1893 "cplus.met"
                PPTREE _ptRes0=0;
#line 1893 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1893 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1893 "cplus.met"
                retTree=_ptRes0;
#line 1893 "cplus.met"
            }
#line 1893 "cplus.met"
            break;
#line 1893 "cplus.met"
#line 1894 "cplus.met"
        case PROTECTED : 
#line 1894 "cplus.met"
            tokenAhead = 0 ;
#line 1894 "cplus.met"
            CommTerm();
#line 1894 "cplus.met"
#line 1894 "cplus.met"
            {
#line 1894 "cplus.met"
                PPTREE _ptRes0=0;
#line 1894 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1894 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1894 "cplus.met"
                retTree=_ptRes0;
#line 1894 "cplus.met"
            }
#line 1894 "cplus.met"
            break;
#line 1894 "cplus.met"
#line 1895 "cplus.met"
        case PRIVATE : 
#line 1895 "cplus.met"
            tokenAhead = 0 ;
#line 1895 "cplus.met"
            CommTerm();
#line 1895 "cplus.met"
#line 1895 "cplus.met"
            {
#line 1895 "cplus.met"
                PPTREE _ptRes0=0;
#line 1895 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1895 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1895 "cplus.met"
                retTree=_ptRes0;
#line 1895 "cplus.met"
            }
#line 1895 "cplus.met"
            break;
#line 1895 "cplus.met"
        default :
#line 1895 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1895 "cplus.met"
            break;
#line 1895 "cplus.met"
    }
#line 1895 "cplus.met"
#line 1897 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1897 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1897 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1897 "cplus.met"
    } else {
#line 1897 "cplus.met"
        tokenAhead = 0 ;
#line 1897 "cplus.met"
    }
#line 1897 "cplus.met"
#line 1897 "cplus.met"
    _addlist1 = list ;
#line 1897 "cplus.met"
#line 1898 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 80, cplus)) { 
#line 1898 "cplus.met"
#line 1899 "cplus.met"
#line 1899 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1899 "cplus.met"
#line 1899 "cplus.met"
        if (list){
#line 1899 "cplus.met"
#line 1899 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1899 "cplus.met"
        } else {
#line 1899 "cplus.met"
#line 1899 "cplus.met"
            list = _addlist1 ;
#line 1899 "cplus.met"
        }
#line 1899 "cplus.met"
    } 
#line 1899 "cplus.met"
#line 1900 "cplus.met"
    {
#line 1900 "cplus.met"
        PPTREE _ptTree0=0;
#line 1900 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1900 "cplus.met"
        _retValue =_ptTree0;
#line 1900 "cplus.met"
        goto protect_declare_ret;
#line 1900 "cplus.met"
    }
#line 1900 "cplus.met"
#line 1900 "cplus.met"
#line 1900 "cplus.met"

#line 1901 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1901 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1901 "cplus.met"
return((PPTREE) 0);
#line 1901 "cplus.met"

#line 1901 "cplus.met"
protect_declare_exit :
#line 1901 "cplus.met"

#line 1901 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1901 "cplus.met"
    _funcLevel--;
#line 1901 "cplus.met"
    return((PPTREE) -1) ;
#line 1901 "cplus.met"

#line 1901 "cplus.met"
protect_declare_ret :
#line 1901 "cplus.met"
    
#line 1901 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1901 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1901 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1901 "cplus.met"
    return _retValue ;
#line 1901 "cplus.met"
}
#line 1901 "cplus.met"

#line 1901 "cplus.met"
#line 2173 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2173 "cplus.met"
{
#line 2173 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2173 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2173 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2173 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2173 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2173 "cplus.met"
#line 2173 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2173 "cplus.met"
#line 2175 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2175 "cplus.met"
    switch( lexEl.Value) {
#line 2175 "cplus.met"
#line 2178 "cplus.met"
        case ETOI : 
#line 2178 "cplus.met"
            tokenAhead = 0 ;
#line 2178 "cplus.met"
            CommTerm();
#line 2178 "cplus.met"
#line 2177 "cplus.met"
#line 2178 "cplus.met"
            {
#line 2178 "cplus.met"
                PPTREE _ptRes0=0;
#line 2178 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2178 "cplus.met"
                retTree=_ptRes0;
#line 2178 "cplus.met"
            }
#line 2178 "cplus.met"
#line 2179 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2179 "cplus.met"
#line 2180 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2180 "cplus.met"
#line 2180 "cplus.met"
            }
#line 2180 "cplus.met"
#line 2181 "cplus.met"
            {
#line 2181 "cplus.met"
                _retValue = retTree ;
#line 2181 "cplus.met"
                goto ptr_operator_ret;
#line 2181 "cplus.met"
                
#line 2181 "cplus.met"
            }
#line 2181 "cplus.met"
#line 2181 "cplus.met"
            break;
#line 2181 "cplus.met"
#line 2185 "cplus.met"
        case ETCO : 
#line 2185 "cplus.met"
            tokenAhead = 0 ;
#line 2185 "cplus.met"
            CommTerm();
#line 2185 "cplus.met"
#line 2184 "cplus.met"
#line 2185 "cplus.met"
            {
#line 2185 "cplus.met"
                PPTREE _ptRes0=0;
#line 2185 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2185 "cplus.met"
                retTree=_ptRes0;
#line 2185 "cplus.met"
            }
#line 2185 "cplus.met"
#line 2186 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2186 "cplus.met"
#line 2187 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2187 "cplus.met"
#line 2187 "cplus.met"
            }
#line 2187 "cplus.met"
#line 2188 "cplus.met"
            {
#line 2188 "cplus.met"
                _retValue = retTree ;
#line 2188 "cplus.met"
                goto ptr_operator_ret;
#line 2188 "cplus.met"
                
#line 2188 "cplus.met"
            }
#line 2188 "cplus.met"
#line 2188 "cplus.met"
            break;
#line 2188 "cplus.met"
#line 2192 "cplus.met"
        case DPOIDPOI : 
#line 2192 "cplus.met"
#line 2191 "cplus.met"
#line 2192 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2192 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2192 "cplus.met"
            }
#line 2192 "cplus.met"
#line 2192 "cplus.met"
            break;
#line 2192 "cplus.met"
#line 2194 "cplus.met"
        case META : 
#line 2194 "cplus.met"
        case IDENT : 
#line 2194 "cplus.met"
#line 2195 "cplus.met"
#line 2196 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2196 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2196 "cplus.met"
            }
#line 2196 "cplus.met"
#line 2196 "cplus.met"
            break;
#line 2196 "cplus.met"
        default :
#line 2196 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2196 "cplus.met"
            break;
#line 2196 "cplus.met"
    }
#line 2196 "cplus.met"
#line 2199 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2199 "cplus.met"
#line 2200 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2200 "cplus.met"
#line 2200 "cplus.met"
    }
#line 2200 "cplus.met"
#line 2201 "cplus.met"
    {
#line 2201 "cplus.met"
        _retValue = retour ;
#line 2201 "cplus.met"
        goto ptr_operator_ret;
#line 2201 "cplus.met"
        
#line 2201 "cplus.met"
    }
#line 2201 "cplus.met"
#line 2201 "cplus.met"
#line 2201 "cplus.met"

#line 2202 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2202 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2202 "cplus.met"
return((PPTREE) 0);
#line 2202 "cplus.met"

#line 2202 "cplus.met"
ptr_operator_exit :
#line 2202 "cplus.met"

#line 2202 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2202 "cplus.met"
    _funcLevel--;
#line 2202 "cplus.met"
    return((PPTREE) -1) ;
#line 2202 "cplus.met"

#line 2202 "cplus.met"
ptr_operator_ret :
#line 2202 "cplus.met"
    
#line 2202 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2202 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2202 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2202 "cplus.met"
    return _retValue ;
#line 2202 "cplus.met"
}
#line 2202 "cplus.met"

#line 2202 "cplus.met"
#line 1826 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1826 "cplus.met"
{
#line 1826 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1826 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1826 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1826 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1826 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1826 "cplus.met"
#line 1826 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1826 "cplus.met"
#line 1828 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1828 "cplus.met"
#line 1829 "cplus.met"
        {
#line 1829 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1829 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1829 "cplus.met"
            {
#line 1829 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1829 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1829 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1829 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1829 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1829 "cplus.met"
                } else {
#line 1829 "cplus.met"
                    tokenAhead = 0 ;
#line 1829 "cplus.met"
                }
#line 1829 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1829 "cplus.met"
                _ptTree0=_ptRes1;
#line 1829 "cplus.met"
            }
#line 1829 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1829 "cplus.met"
            retTree=_ptRes0;
#line 1829 "cplus.met"
        }
#line 1829 "cplus.met"
    } else {
#line 1829 "cplus.met"
#line 1831 "cplus.met"
        {
#line 1831 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1831 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1831 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1831 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1831 "cplus.met"
                MulFreeTree(6,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1831 "cplus.met"
            } else {
#line 1831 "cplus.met"
                tokenAhead = 0 ;
#line 1831 "cplus.met"
            }
#line 1831 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1831 "cplus.met"
            retTree=_ptRes0;
#line 1831 "cplus.met"
        }
#line 1831 "cplus.met"
    }
#line 1831 "cplus.met"
#line 1832 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1832 "cplus.met"
#line 1833 "cplus.met"
#line 1834 "cplus.met"
        {
#line 1834 "cplus.met"
            PPTREE _ptRes0=0;
#line 1834 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1834 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1834 "cplus.met"
            retTree=_ptRes0;
#line 1834 "cplus.met"
        }
#line 1834 "cplus.met"
#line 1835 "cplus.met"
        inter = retTree ;
#line 1835 "cplus.met"
#line 1836 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1836 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 114, cplus))) { 
#line 1836 "cplus.met"
#line 1837 "cplus.met"
#line 1838 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1838 "cplus.met"
#line 1839 "cplus.met"
                {
#line 1839 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1839 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1839 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1839 "cplus.met"
                    val=_ptRes0;
#line 1839 "cplus.met"
                }
#line 1839 "cplus.met"
            }
#line 1839 "cplus.met"
#line 1840 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1840 "cplus.met"
#line 1841 "cplus.met"
            inter = val ;
#line 1841 "cplus.met"
#line 1841 "cplus.met"
        } 
#line 1841 "cplus.met"
#line 1841 "cplus.met"
#line 1842 "cplus.met"
    }
#line 1842 "cplus.met"
#line 1844 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 138, cplus)){
#line 1844 "cplus.met"
#line 1845 "cplus.met"
#line 1846 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1846 "cplus.met"
#line 1847 "cplus.met"
        retTree = templateVal ;
#line 1847 "cplus.met"
#line 1848 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1848 "cplus.met"
#line 1849 "cplus.met"
            {
#line 1849 "cplus.met"
                PPTREE _ptTree0=0;
#line 1849 "cplus.met"
                {
#line 1849 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1849 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1849 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1849 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 1849 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1849 "cplus.met"
                    }
#line 1849 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1849 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1849 "cplus.met"
                }
#line 1849 "cplus.met"
                _retValue =_ptTree0;
#line 1849 "cplus.met"
                goto qualified_name_ret;
#line 1849 "cplus.met"
            }
#line 1849 "cplus.met"
        } else {
#line 1849 "cplus.met"
#line 1851 "cplus.met"
            {
#line 1851 "cplus.met"
                _retValue = retTree ;
#line 1851 "cplus.met"
                goto qualified_name_ret;
#line 1851 "cplus.met"
                
#line 1851 "cplus.met"
            }
#line 1851 "cplus.met"
        }
#line 1851 "cplus.met"
#line 1851 "cplus.met"
#line 1851 "cplus.met"
    }
#line 1851 "cplus.met"
#line 1853 "cplus.met"
    {
#line 1853 "cplus.met"
        _retValue = retTree ;
#line 1853 "cplus.met"
        goto qualified_name_ret;
#line 1853 "cplus.met"
        
#line 1853 "cplus.met"
    }
#line 1853 "cplus.met"
#line 1853 "cplus.met"
#line 1853 "cplus.met"

#line 1854 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1854 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1854 "cplus.met"
return((PPTREE) 0);
#line 1854 "cplus.met"

#line 1854 "cplus.met"
qualified_name_exit :
#line 1854 "cplus.met"

#line 1854 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1854 "cplus.met"
    _funcLevel--;
#line 1854 "cplus.met"
    return((PPTREE) -1) ;
#line 1854 "cplus.met"

#line 1854 "cplus.met"
qualified_name_ret :
#line 1854 "cplus.met"
    
#line 1854 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1854 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1854 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1854 "cplus.met"
    return _retValue ;
#line 1854 "cplus.met"
}
#line 1854 "cplus.met"

#line 1854 "cplus.met"
#line 1804 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1804 "cplus.met"
{
#line 1804 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1804 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1804 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1804 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1804 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1804 "cplus.met"
#line 1805 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1805 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1805 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1805 "cplus.met"
    } else {
#line 1805 "cplus.met"
        tokenAhead = 0 ;
#line 1805 "cplus.met"
    }
#line 1805 "cplus.met"
#line 1806 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1806 "cplus.met"
    switch( lexEl.Value) {
#line 1806 "cplus.met"
#line 1807 "cplus.met"
        case TILD : 
#line 1807 "cplus.met"
            tokenAhead = 0 ;
#line 1807 "cplus.met"
            CommTerm();
#line 1807 "cplus.met"
#line 1807 "cplus.met"
            {
#line 1807 "cplus.met"
                PPTREE _ptTree0=0;
#line 1807 "cplus.met"
                {
#line 1807 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1807 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1807 "cplus.met"
                    {
#line 1807 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1807 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1807 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1807 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1807 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1807 "cplus.met"
                        } else {
#line 1807 "cplus.met"
                            tokenAhead = 0 ;
#line 1807 "cplus.met"
                        }
#line 1807 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1807 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1807 "cplus.met"
                    }
#line 1807 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1807 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1807 "cplus.met"
                }
#line 1807 "cplus.met"
                _retValue =_ptTree0;
#line 1807 "cplus.met"
                goto qualified_name_elem_ret;
#line 1807 "cplus.met"
            }
#line 1807 "cplus.met"
            break;
#line 1807 "cplus.met"
#line 1808 "cplus.met"
        case META : 
#line 1808 "cplus.met"
        case IDENT : 
#line 1808 "cplus.met"
#line 1808 "cplus.met"
            {
#line 1808 "cplus.met"
                PPTREE _ptTree0=0;
#line 1808 "cplus.met"
                {
#line 1808 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1808 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1808 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1808 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1808 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1808 "cplus.met"
                    } else {
#line 1808 "cplus.met"
                        tokenAhead = 0 ;
#line 1808 "cplus.met"
                    }
#line 1808 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1808 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1808 "cplus.met"
                }
#line 1808 "cplus.met"
                _retValue =_ptTree0;
#line 1808 "cplus.met"
                goto qualified_name_elem_ret;
#line 1808 "cplus.met"
            }
#line 1808 "cplus.met"
            break;
#line 1808 "cplus.met"
#line 1809 "cplus.met"
        case OPERATOR : 
#line 1809 "cplus.met"
#line 1809 "cplus.met"
            {
#line 1809 "cplus.met"
                PPTREE _ptTree0=0;
#line 1809 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 1809 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1809 "cplus.met"
                }
#line 1809 "cplus.met"
                _retValue =_ptTree0;
#line 1809 "cplus.met"
                goto qualified_name_elem_ret;
#line 1809 "cplus.met"
            }
#line 1809 "cplus.met"
            break;
#line 1809 "cplus.met"
        default :
#line 1809 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1809 "cplus.met"
            break;
#line 1809 "cplus.met"
    }
#line 1809 "cplus.met"
#line 1809 "cplus.met"
#line 1810 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1810 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1810 "cplus.met"
return((PPTREE) 0);
#line 1810 "cplus.met"

#line 1810 "cplus.met"
qualified_name_elem_exit :
#line 1810 "cplus.met"

#line 1810 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1810 "cplus.met"
    _funcLevel--;
#line 1810 "cplus.met"
    return((PPTREE) -1) ;
#line 1810 "cplus.met"

#line 1810 "cplus.met"
qualified_name_elem_ret :
#line 1810 "cplus.met"
    
#line 1810 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1810 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1810 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1810 "cplus.met"
    return _retValue ;
#line 1810 "cplus.met"
}
#line 1810 "cplus.met"

#line 1810 "cplus.met"
