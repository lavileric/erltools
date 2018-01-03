/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 810 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 810 "cplus.met"
{
#line 810 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 810 "cplus.met"
    int _value,_nbPre = 0 ;
#line 810 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 810 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 810 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 810 "cplus.met"
#line 811 "cplus.met"
    {
#line 811 "cplus.met"
        PPTREE _ptTree0=0;
#line 811 "cplus.met"
        {
#line 811 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 811 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 811 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 811 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 811 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 811 "cplus.met"
            } else {
#line 811 "cplus.met"
                tokenAhead = 0 ;
#line 811 "cplus.met"
            }
#line 811 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 811 "cplus.met"
            _ptTree0=_ptRes1;
#line 811 "cplus.met"
        }
#line 811 "cplus.met"
        _retValue =_ptTree0;
#line 811 "cplus.met"
        goto other_config_ret;
#line 811 "cplus.met"
    }
#line 811 "cplus.met"
#line 811 "cplus.met"
#line 811 "cplus.met"

#line 812 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 812 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 812 "cplus.met"
return((PPTREE) 0);
#line 812 "cplus.met"

#line 812 "cplus.met"
other_config_exit :
#line 812 "cplus.met"

#line 812 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 812 "cplus.met"
    _funcLevel--;
#line 812 "cplus.met"
    return((PPTREE) -1) ;
#line 812 "cplus.met"

#line 812 "cplus.met"
other_config_ret :
#line 812 "cplus.met"
    
#line 812 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 812 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 812 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 812 "cplus.met"
    return _retValue ;
#line 812 "cplus.met"
}
#line 812 "cplus.met"

#line 812 "cplus.met"
#line 3071 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3071 "cplus.met"
{
#line 3071 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3071 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3071 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3071 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3071 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3071 "cplus.met"
#line 3071 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3071 "cplus.met"
#line 3071 "cplus.met"
    PPTREE paramList = (PPTREE) 0;
#line 3071 "cplus.met"
#line 3073 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3073 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3073 "cplus.met"
        MulFreeTree(2,_addlist1,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3073 "cplus.met"
    } else {
#line 3073 "cplus.met"
        tokenAhead = 0 ;
#line 3073 "cplus.met"
    }
#line 3073 "cplus.met"
#line 3074 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3074 "cplus.met"
#line 3075 "cplus.met"
#line 3076 "cplus.met"
         { int exit = 0 ;
#line 3076 "cplus.met"
#line 3077 "cplus.met"
        {
#line 3077 "cplus.met"
            PPTREE _ptTree0=0;
#line 3077 "cplus.met"
            {
#line 3077 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3077 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3077 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3077 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3077 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,_addlist1,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3077 "cplus.met"
                } else {
#line 3077 "cplus.met"
                    tokenAhead = 0 ;
#line 3077 "cplus.met"
                }
#line 3077 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3077 "cplus.met"
                _ptTree0=_ptRes1;
#line 3077 "cplus.met"
            }
#line 3077 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3077 "cplus.met"
        }
#line 3077 "cplus.met"
#line 3077 "cplus.met"
        _addlist1 = paramList ;
#line 3077 "cplus.met"
#line 3078 "cplus.met"
        while ((! ( exit )) && 
#line 3078 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3078 "cplus.met"
#line 3079 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3079 "cplus.met"
#line 3080 "cplus.met"
#line 3080 "cplus.met"
                {
#line 3080 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3080 "cplus.met"
                    {
#line 3080 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3080 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3080 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3080 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3080 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,_addlist1,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3080 "cplus.met"
                        } else {
#line 3080 "cplus.met"
                            tokenAhead = 0 ;
#line 3080 "cplus.met"
                        }
#line 3080 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3080 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3080 "cplus.met"
                    }
#line 3080 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3080 "cplus.met"
                }
#line 3080 "cplus.met"
#line 3080 "cplus.met"
                if (paramList){
#line 3080 "cplus.met"
#line 3080 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3080 "cplus.met"
                } else {
#line 3080 "cplus.met"
#line 3080 "cplus.met"
                    paramList = _addlist1 ;
#line 3080 "cplus.met"
                }
#line 3080 "cplus.met"
            } else {
#line 3080 "cplus.met"
#line 3082 "cplus.met"
#line 3083 "cplus.met"
                {
#line 3083 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3083 "cplus.met"
                    {
#line 3083 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3083 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3083 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3083 "cplus.met"
                    }
#line 3083 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3083 "cplus.met"
                }
#line 3083 "cplus.met"
#line 3083 "cplus.met"
                if (paramList){
#line 3083 "cplus.met"
#line 3083 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3083 "cplus.met"
                } else {
#line 3083 "cplus.met"
#line 3083 "cplus.met"
                    paramList = _addlist1 ;
#line 3083 "cplus.met"
                }
#line 3083 "cplus.met"
#line 3084 "cplus.met"
                 exit = 1 ;
#line 3084 "cplus.met"
#line 3085 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3085 "cplus.met"
#line 3085 "cplus.met"
                }
#line 3085 "cplus.met"
#line 3085 "cplus.met"
            }
#line 3085 "cplus.met"
        } 
#line 3085 "cplus.met"
#line 3088 "cplus.met"
        if ((! ( exit )) && 
#line 3088 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3088 "cplus.met"
#line 3089 "cplus.met"
            {
#line 3089 "cplus.met"
                PPTREE _ptTree0=0;
#line 3089 "cplus.met"
                {
#line 3089 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3089 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3089 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3089 "cplus.met"
                }
#line 3089 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3089 "cplus.met"
            }
#line 3089 "cplus.met"
#line 3089 "cplus.met"
        }
#line 3089 "cplus.met"
#line 3090 "cplus.met"
         } 
#line 3090 "cplus.met"
#line 3090 "cplus.met"
#line 3090 "cplus.met"
    }
#line 3090 "cplus.met"
#line 3092 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3092 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3092 "cplus.met"
        MulFreeTree(2,_addlist1,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3092 "cplus.met"
    } else {
#line 3092 "cplus.met"
        tokenAhead = 0 ;
#line 3092 "cplus.met"
    }
#line 3092 "cplus.met"
#line 3093 "cplus.met"
    {
#line 3093 "cplus.met"
        _retValue = paramList ;
#line 3093 "cplus.met"
        goto parameter_list_ret;
#line 3093 "cplus.met"
        
#line 3093 "cplus.met"
    }
#line 3093 "cplus.met"
#line 3093 "cplus.met"
#line 3093 "cplus.met"

#line 3094 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3094 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3094 "cplus.met"
return((PPTREE) 0);
#line 3094 "cplus.met"

#line 3094 "cplus.met"
parameter_list_exit :
#line 3094 "cplus.met"

#line 3094 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3094 "cplus.met"
    _funcLevel--;
#line 3094 "cplus.met"
    return((PPTREE) -1) ;
#line 3094 "cplus.met"

#line 3094 "cplus.met"
parameter_list_ret :
#line 3094 "cplus.met"
    
#line 3094 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3094 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3094 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3094 "cplus.met"
    return _retValue ;
#line 3094 "cplus.met"
}
#line 3094 "cplus.met"

#line 3094 "cplus.met"
#line 3096 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3096 "cplus.met"
{
#line 3096 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3096 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3096 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3096 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3096 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3096 "cplus.met"
#line 3096 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3096 "cplus.met"
#line 3096 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3096 "cplus.met"
#line 3098 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3098 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3098 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3098 "cplus.met"
    } else {
#line 3098 "cplus.met"
        tokenAhead = 0 ;
#line 3098 "cplus.met"
    }
#line 3098 "cplus.met"
#line 3099 "cplus.met"
     { int followed = 0;
#line 3099 "cplus.met"
#line 3100 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3100 "cplus.met"
#line 3101 "cplus.met"
#line 3102 "cplus.met"
         { int exit = 0 ;
#line 3102 "cplus.met"
#line 3103 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3103 "cplus.met"
#line 3104 "cplus.met"
#line 3105 "cplus.met"
             followed = 1 ;
#line 3105 "cplus.met"
#line 3106 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3106 "cplus.met"
#line 3106 "cplus.met"
#line 3106 "cplus.met"
        } else {
#line 3106 "cplus.met"
#line 3109 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3109 "cplus.met"
#line 3110 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3110 "cplus.met"
#line 3110 "cplus.met"
            } else {
#line 3110 "cplus.met"
#line 3112 "cplus.met"
#line 3113 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3113 "cplus.met"
#line 3114 "cplus.met"
                    {
#line 3114 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3114 "cplus.met"
                        {
#line 3114 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3114 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3114 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3114 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3114 "cplus.met"
                        }
#line 3114 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3114 "cplus.met"
                    }
#line 3114 "cplus.met"
#line 3114 "cplus.met"
                }
#line 3114 "cplus.met"
#line 3115 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3115 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3115 "cplus.met"
#line 3116 "cplus.met"
                     followed = 1;
#line 3116 "cplus.met"
                }
#line 3116 "cplus.met"
#line 3117 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3117 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3117 "cplus.met"
#line 3118 "cplus.met"
#line 3119 "cplus.met"
                     followed = 1;
#line 3119 "cplus.met"
#line 3120 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3120 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3120 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3120 "cplus.met"
                    } else {
#line 3120 "cplus.met"
                        tokenAhead = 0 ;
#line 3120 "cplus.met"
                    }
#line 3120 "cplus.met"
#line 3120 "cplus.met"
#line 3120 "cplus.met"
                }
#line 3120 "cplus.met"
#line 3120 "cplus.met"
            }
#line 3120 "cplus.met"
        }
#line 3120 "cplus.met"
#line 3120 "cplus.met"
        _addlist1 = paramList ;
#line 3120 "cplus.met"
#line 3123 "cplus.met"
        while ( followed && !exit ) { 
#line 3123 "cplus.met"
#line 3124 "cplus.met"
#line 3125 "cplus.met"
             followed = 0 ;
#line 3125 "cplus.met"
#line 3126 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3126 "cplus.met"
#line 3127 "cplus.met"
#line 3128 "cplus.met"
                 followed = 1 ;
#line 3128 "cplus.met"
#line 3129 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3129 "cplus.met"
#line 3129 "cplus.met"
                if (paramList){
#line 3129 "cplus.met"
#line 3129 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3129 "cplus.met"
                } else {
#line 3129 "cplus.met"
#line 3129 "cplus.met"
                    paramList = _addlist1 ;
#line 3129 "cplus.met"
                }
#line 3129 "cplus.met"
#line 3129 "cplus.met"
#line 3129 "cplus.met"
            } else {
#line 3129 "cplus.met"
#line 3132 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3132 "cplus.met"
#line 3133 "cplus.met"
#line 3133 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3133 "cplus.met"
#line 3133 "cplus.met"
                    if (paramList){
#line 3133 "cplus.met"
#line 3133 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3133 "cplus.met"
                    } else {
#line 3133 "cplus.met"
#line 3133 "cplus.met"
                        paramList = _addlist1 ;
#line 3133 "cplus.met"
                    }
#line 3133 "cplus.met"
                } else {
#line 3133 "cplus.met"
#line 3135 "cplus.met"
#line 3136 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3136 "cplus.met"
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
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3138 "cplus.met"
                        }
#line 3138 "cplus.met"
#line 3138 "cplus.met"
                        if (paramList){
#line 3138 "cplus.met"
#line 3138 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3138 "cplus.met"
                        } else {
#line 3138 "cplus.met"
#line 3138 "cplus.met"
                            paramList = _addlist1 ;
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
#line 3145 "cplus.met"
                    } else {
#line 3145 "cplus.met"
#line 3148 "cplus.met"
#line 3149 "cplus.met"
                        {
#line 3149 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3149 "cplus.met"
                            {
#line 3149 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3149 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3149 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3149 "cplus.met"
                            }
#line 3149 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3149 "cplus.met"
                        }
#line 3149 "cplus.met"
#line 3149 "cplus.met"
                        if (paramList){
#line 3149 "cplus.met"
#line 3149 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3149 "cplus.met"
                        } else {
#line 3149 "cplus.met"
#line 3149 "cplus.met"
                            paramList = _addlist1 ;
#line 3149 "cplus.met"
                        }
#line 3149 "cplus.met"
#line 3150 "cplus.met"
                         exit = 1 ;
#line 3150 "cplus.met"
#line 3151 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3151 "cplus.met"
#line 3151 "cplus.met"
                        }
#line 3151 "cplus.met"
#line 3153 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3153 "cplus.met"
#line 3154 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3154 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3154 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3154 "cplus.met"
                            } else {
#line 3154 "cplus.met"
                                tokenAhead = 0 ;
#line 3154 "cplus.met"
                            }
#line 3154 "cplus.met"
                        }
#line 3154 "cplus.met"
#line 3154 "cplus.met"
                    }
#line 3154 "cplus.met"
#line 3154 "cplus.met"
                }
#line 3154 "cplus.met"
            }
#line 3154 "cplus.met"
#line 3154 "cplus.met"
        } 
#line 3154 "cplus.met"
#line 3158 "cplus.met"
        if ((! ( exit )) && 
#line 3158 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3158 "cplus.met"
#line 3159 "cplus.met"
            {
#line 3159 "cplus.met"
                PPTREE _ptTree0=0;
#line 3159 "cplus.met"
                {
#line 3159 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3159 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3159 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3159 "cplus.met"
                }
#line 3159 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3159 "cplus.met"
            }
#line 3159 "cplus.met"
#line 3159 "cplus.met"
        }
#line 3159 "cplus.met"
#line 3160 "cplus.met"
         }  
#line 3160 "cplus.met"
#line 3160 "cplus.met"
#line 3160 "cplus.met"
    }
#line 3160 "cplus.met"
#line 3162 "cplus.met"
     } 
#line 3162 "cplus.met"
#line 3163 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3163 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3163 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3163 "cplus.met"
    } else {
#line 3163 "cplus.met"
        tokenAhead = 0 ;
#line 3163 "cplus.met"
    }
#line 3163 "cplus.met"
#line 3164 "cplus.met"
    {
#line 3164 "cplus.met"
        _retValue = paramList ;
#line 3164 "cplus.met"
        goto parameter_list_extended_ret;
#line 3164 "cplus.met"
        
#line 3164 "cplus.met"
    }
#line 3164 "cplus.met"
#line 3164 "cplus.met"
#line 3164 "cplus.met"

#line 3165 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3165 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3165 "cplus.met"
return((PPTREE) 0);
#line 3165 "cplus.met"

#line 3165 "cplus.met"
parameter_list_extended_exit :
#line 3165 "cplus.met"

#line 3165 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3165 "cplus.met"
    _funcLevel--;
#line 3165 "cplus.met"
    return((PPTREE) -1) ;
#line 3165 "cplus.met"

#line 3165 "cplus.met"
parameter_list_extended_ret :
#line 3165 "cplus.met"
    
#line 3165 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3165 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3165 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3165 "cplus.met"
    return _retValue ;
#line 3165 "cplus.met"
}
#line 3165 "cplus.met"

#line 3165 "cplus.met"
#line 3571 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3571 "cplus.met"
{
#line 3571 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3571 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3571 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3571 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3571 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3571 "cplus.met"
#line 3571 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3571 "cplus.met"
#line 3573 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 73, cplus)) || 
#line 3573 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 132, cplus))) || 
#line 3573 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 38, cplus))) || 
#line 3573 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 136, cplus))) || 
#line 3573 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 135, cplus))) || 
#line 3573 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 59, cplus))){
#line 3573 "cplus.met"
#line 3579 "cplus.met"
        {
#line 3579 "cplus.met"
            _retValue = retValue ;
#line 3579 "cplus.met"
            goto parse_entry_ret;
#line 3579 "cplus.met"
            
#line 3579 "cplus.met"
        }
#line 3579 "cplus.met"
    } else {
#line 3579 "cplus.met"
#line 3581 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3581 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3581 "cplus.met"
        }
#line 3581 "cplus.met"
    }
#line 3581 "cplus.met"
#line 3581 "cplus.met"
#line 3581 "cplus.met"

#line 3582 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3582 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3582 "cplus.met"
return((PPTREE) 0);
#line 3582 "cplus.met"

#line 3582 "cplus.met"
parse_entry_exit :
#line 3582 "cplus.met"

#line 3582 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3582 "cplus.met"
    _funcLevel--;
#line 3582 "cplus.met"
    return((PPTREE) -1) ;
#line 3582 "cplus.met"

#line 3582 "cplus.met"
parse_entry_ret :
#line 3582 "cplus.met"
    
#line 3582 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3582 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3582 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3582 "cplus.met"
    return _retValue ;
#line 3582 "cplus.met"
}
#line 3582 "cplus.met"

#line 3582 "cplus.met"
#line 2694 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2694 "cplus.met"
{
#line 2694 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2694 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2694 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2694 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2694 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2694 "cplus.met"
#line 2694 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2694 "cplus.met"
#line 2696 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2696 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2696 "cplus.met"
    }
#line 2696 "cplus.met"
#line 2697 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2697 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2697 "cplus.met"
#line 2698 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2698 "cplus.met"
        switch( lexEl.Value) {
#line 2698 "cplus.met"
#line 2699 "cplus.met"
            case POINETOI : 
#line 2699 "cplus.met"
                tokenAhead = 0 ;
#line 2699 "cplus.met"
                CommTerm();
#line 2699 "cplus.met"
#line 2699 "cplus.met"
                {
#line 2699 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2699 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2699 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2699 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2699 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2699 "cplus.met"
                    }
#line 2699 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2699 "cplus.met"
                    expTree=_ptRes0;
#line 2699 "cplus.met"
                }
#line 2699 "cplus.met"
                break;
#line 2699 "cplus.met"
#line 2701 "cplus.met"
            case TIRESUPEETOI : 
#line 2701 "cplus.met"
                tokenAhead = 0 ;
#line 2701 "cplus.met"
                CommTerm();
#line 2701 "cplus.met"
#line 2701 "cplus.met"
                {
#line 2701 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2701 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2701 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2701 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2701 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2701 "cplus.met"
                    }
#line 2701 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2701 "cplus.met"
                    expTree=_ptRes0;
#line 2701 "cplus.met"
                }
#line 2701 "cplus.met"
                break;
#line 2701 "cplus.met"
            default :
#line 2701 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2701 "cplus.met"
                break;
#line 2701 "cplus.met"
        }
#line 2701 "cplus.met"
    } 
#line 2701 "cplus.met"
#line 2704 "cplus.met"
    {
#line 2704 "cplus.met"
        _retValue = expTree ;
#line 2704 "cplus.met"
        goto pm_expression_ret;
#line 2704 "cplus.met"
        
#line 2704 "cplus.met"
    }
#line 2704 "cplus.met"
#line 2704 "cplus.met"
#line 2704 "cplus.met"

#line 2705 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2705 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2705 "cplus.met"
return((PPTREE) 0);
#line 2705 "cplus.met"

#line 2705 "cplus.met"
pm_expression_exit :
#line 2705 "cplus.met"

#line 2705 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2705 "cplus.met"
    _funcLevel--;
#line 2705 "cplus.met"
    return((PPTREE) -1) ;
#line 2705 "cplus.met"

#line 2705 "cplus.met"
pm_expression_ret :
#line 2705 "cplus.met"
    
#line 2705 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2705 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2705 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2705 "cplus.met"
    return _retValue ;
#line 2705 "cplus.met"
}
#line 2705 "cplus.met"

#line 2705 "cplus.met"
#line 2864 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 2864 "cplus.met"
{
#line 2864 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2864 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2864 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2864 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 2864 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2864 "cplus.met"
#line 2864 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2864 "cplus.met"
#line 2866 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 108, cplus))){
#line 2866 "cplus.met"
#line 2867 "cplus.met"
#line 2868 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 2868 "cplus.met"
            MulFreeTree(2,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2868 "cplus.met"
        }
#line 2868 "cplus.met"
#line 2869 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 2869 "cplus.met"
#line 2870 "cplus.met"
            
#line 2870 "cplus.met"
            MulFreeTree(2,expList,expTree);
            LEX_EXIT ("",0);
#line 2870 "cplus.met"
            goto postfix_expression_exit;
#line 2870 "cplus.met"
#line 2870 "cplus.met"
        }
#line 2870 "cplus.met"
#line 2870 "cplus.met"
#line 2870 "cplus.met"
    }
#line 2870 "cplus.met"
#line 2872 "cplus.met"
    while (((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2872 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 2872 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 2872 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 2872 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 2872 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) { 
#line 2872 "cplus.met"
#line 2878 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2878 "cplus.met"
        switch( lexEl.Value) {
#line 2878 "cplus.met"
#line 2881 "cplus.met"
            case POUV : 
#line 2881 "cplus.met"
                tokenAhead = 0 ;
#line 2881 "cplus.met"
                CommTerm();
#line 2881 "cplus.met"
#line 2880 "cplus.met"
#line 2881 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 59, cplus)){
#line 2881 "cplus.met"
#line 2882 "cplus.met"
                    {
#line 2882 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2882 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2882 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2882 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2882 "cplus.met"
                        expTree=_ptRes0;
#line 2882 "cplus.met"
                    }
#line 2882 "cplus.met"
                } else {
#line 2882 "cplus.met"
#line 2884 "cplus.met"
                    {
#line 2884 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2884 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2884 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2884 "cplus.met"
                        expTree=_ptRes0;
#line 2884 "cplus.met"
                    }
#line 2884 "cplus.met"
                }
#line 2884 "cplus.met"
#line 2885 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2885 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2885 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 2885 "cplus.met"
                } else {
#line 2885 "cplus.met"
                    tokenAhead = 0 ;
#line 2885 "cplus.met"
                }
#line 2885 "cplus.met"
#line 2885 "cplus.met"
                break;
#line 2885 "cplus.met"
#line 2889 "cplus.met"
            case COUV : 
#line 2889 "cplus.met"
                tokenAhead = 0 ;
#line 2889 "cplus.met"
                CommTerm();
#line 2889 "cplus.met"
#line 2888 "cplus.met"
#line 2889 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 59, cplus)){
#line 2889 "cplus.met"
#line 2890 "cplus.met"
                    {
#line 2890 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2890 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2890 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2890 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2890 "cplus.met"
                        expTree=_ptRes0;
#line 2890 "cplus.met"
                    }
#line 2890 "cplus.met"
                } else {
#line 2890 "cplus.met"
#line 2892 "cplus.met"
                    {
#line 2892 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2892 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2892 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2892 "cplus.met"
                        expTree=_ptRes0;
#line 2892 "cplus.met"
                    }
#line 2892 "cplus.met"
                }
#line 2892 "cplus.met"
#line 2893 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2893 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2893 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"]")
#line 2893 "cplus.met"
                } else {
#line 2893 "cplus.met"
                    tokenAhead = 0 ;
#line 2893 "cplus.met"
                }
#line 2893 "cplus.met"
#line 2893 "cplus.met"
                break;
#line 2893 "cplus.met"
#line 2895 "cplus.met"
            case META : 
#line 2895 "cplus.met"
            case POINT : 
#line 2895 "cplus.met"
                tokenAhead = 0 ;
#line 2895 "cplus.met"
                CommTerm();
#line 2895 "cplus.met"
#line 2895 "cplus.met"
                {
#line 2895 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2895 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 2895 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2895 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 2895 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2895 "cplus.met"
                    }
#line 2895 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2895 "cplus.met"
                    expTree=_ptRes0;
#line 2895 "cplus.met"
                }
#line 2895 "cplus.met"
                break;
#line 2895 "cplus.met"
#line 2897 "cplus.met"
            case TIRESUPE : 
#line 2897 "cplus.met"
                tokenAhead = 0 ;
#line 2897 "cplus.met"
                CommTerm();
#line 2897 "cplus.met"
#line 2897 "cplus.met"
                {
#line 2897 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2897 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 2897 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2897 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 2897 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2897 "cplus.met"
                    }
#line 2897 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2897 "cplus.met"
                    expTree=_ptRes0;
#line 2897 "cplus.met"
                }
#line 2897 "cplus.met"
                break;
#line 2897 "cplus.met"
#line 2899 "cplus.met"
            case PLUSPLUS : 
#line 2899 "cplus.met"
                tokenAhead = 0 ;
#line 2899 "cplus.met"
                CommTerm();
#line 2899 "cplus.met"
#line 2899 "cplus.met"
                {
#line 2899 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2899 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 2899 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2899 "cplus.met"
                    expTree=_ptRes0;
#line 2899 "cplus.met"
                }
#line 2899 "cplus.met"
                break;
#line 2899 "cplus.met"
#line 2900 "cplus.met"
            case TIRETIRE : 
#line 2900 "cplus.met"
                tokenAhead = 0 ;
#line 2900 "cplus.met"
                CommTerm();
#line 2900 "cplus.met"
#line 2900 "cplus.met"
                {
#line 2900 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2900 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 2900 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2900 "cplus.met"
                    expTree=_ptRes0;
#line 2900 "cplus.met"
                }
#line 2900 "cplus.met"
                break;
#line 2900 "cplus.met"
            default :
#line 2900 "cplus.met"
                MulFreeTree(2,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or [ or POINT or -> or ++ or --")
#line 2900 "cplus.met"
                break;
#line 2900 "cplus.met"
        }
#line 2900 "cplus.met"
    } 
#line 2900 "cplus.met"
#line 2902 "cplus.met"
    {
#line 2902 "cplus.met"
        _retValue = expTree ;
#line 2902 "cplus.met"
        goto postfix_expression_ret;
#line 2902 "cplus.met"
        
#line 2902 "cplus.met"
    }
#line 2902 "cplus.met"
#line 2902 "cplus.met"
#line 2902 "cplus.met"

#line 2903 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2903 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2903 "cplus.met"
return((PPTREE) 0);
#line 2903 "cplus.met"

#line 2903 "cplus.met"
postfix_expression_exit :
#line 2903 "cplus.met"

#line 2903 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 2903 "cplus.met"
    _funcLevel--;
#line 2903 "cplus.met"
    return((PPTREE) -1) ;
#line 2903 "cplus.met"

#line 2903 "cplus.met"
postfix_expression_ret :
#line 2903 "cplus.met"
    
#line 2903 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 2903 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2903 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2903 "cplus.met"
    return _retValue ;
#line 2903 "cplus.met"
}
#line 2903 "cplus.met"

#line 2903 "cplus.met"
#line 2918 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 2918 "cplus.met"
{
#line 2918 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2918 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2918 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2918 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 2918 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2918 "cplus.met"
#line 2918 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2918 "cplus.met"
#line 2920 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2920 "cplus.met"
    switch( lexEl.Value) {
#line 2920 "cplus.met"
#line 2923 "cplus.met"
        case POUV : 
#line 2923 "cplus.met"
            tokenAhead = 0 ;
#line 2923 "cplus.met"
            CommTerm();
#line 2923 "cplus.met"
#line 2922 "cplus.met"
#line 2923 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2923 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2923 "cplus.met"
            }
#line 2923 "cplus.met"
#line 2924 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2924 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2924 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2924 "cplus.met"
            } else {
#line 2924 "cplus.met"
                tokenAhead = 0 ;
#line 2924 "cplus.met"
            }
#line 2924 "cplus.met"
#line 2925 "cplus.met"
            {
#line 2925 "cplus.met"
                PPTREE _ptTree0=0;
#line 2925 "cplus.met"
                {
#line 2925 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2925 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 2925 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 2925 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2925 "cplus.met"
                }
#line 2925 "cplus.met"
                _retValue =_ptTree0;
#line 2925 "cplus.met"
                goto primary_expression_ret;
#line 2925 "cplus.met"
            }
#line 2925 "cplus.met"
#line 2925 "cplus.met"
            break;
#line 2925 "cplus.met"
#line 2927 "cplus.met"
        case OPERATOR : 
#line 2927 "cplus.met"
#line 2927 "cplus.met"
            {
#line 2927 "cplus.met"
                PPTREE _ptTree0=0;
#line 2927 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2927 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2927 "cplus.met"
                }
#line 2927 "cplus.met"
                _retValue =_ptTree0;
#line 2927 "cplus.met"
                goto primary_expression_ret;
#line 2927 "cplus.met"
            }
#line 2927 "cplus.met"
            break;
#line 2927 "cplus.met"
#line 2928 "cplus.met"
        case TILD : 
#line 2928 "cplus.met"
#line 2928 "cplus.met"
            {
#line 2928 "cplus.met"
                PPTREE _ptTree0=0;
#line 2928 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2928 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2928 "cplus.met"
                }
#line 2928 "cplus.met"
                _retValue =_ptTree0;
#line 2928 "cplus.met"
                goto primary_expression_ret;
#line 2928 "cplus.met"
            }
#line 2928 "cplus.met"
            break;
#line 2928 "cplus.met"
#line 2929 "cplus.met"
        case META : 
#line 2929 "cplus.met"
#line 2930 "cplus.met"
#line 2931 "cplus.met"
            {
#line 2931 "cplus.met"
                PPTREE _ptTree0=0;
#line 2931 "cplus.met"
                {
#line 2931 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2931 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 2931 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 2931 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 2931 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 2931 "cplus.met"
                    } else {
#line 2931 "cplus.met"
                        tokenAhead = 0 ;
#line 2931 "cplus.met"
                    }
#line 2931 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2931 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2931 "cplus.met"
                }
#line 2931 "cplus.met"
                _retValue =_ptTree0;
#line 2931 "cplus.met"
                goto primary_expression_ret;
#line 2931 "cplus.met"
            }
#line 2931 "cplus.met"
#line 2931 "cplus.met"
            break;
#line 2931 "cplus.met"
#line 2933 "cplus.met"
        case IDENT : 
#line 2933 "cplus.met"
#line 2934 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 2934 "cplus.met"
#line 2935 "cplus.met"
#line 2936 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2936 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2936 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 2936 "cplus.met"
                } else {
#line 2936 "cplus.met"
                    tokenAhead = 0 ;
#line 2936 "cplus.met"
                }
#line 2936 "cplus.met"
#line 2937 "cplus.met"
                {
#line 2937 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2937 "cplus.met"
                    {
#line 2937 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2937 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 2937 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 2937 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2937 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 2937 "cplus.met"
                        } else {
#line 2937 "cplus.met"
                            tokenAhead = 0 ;
#line 2937 "cplus.met"
                        }
#line 2937 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2937 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2937 "cplus.met"
                    }
#line 2937 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2937 "cplus.met"
                }
#line 2937 "cplus.met"
#line 2938 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2938 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2938 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 2938 "cplus.met"
                } else {
#line 2938 "cplus.met"
                    tokenAhead = 0 ;
#line 2938 "cplus.met"
                }
#line 2938 "cplus.met"
#line 2939 "cplus.met"
                {
#line 2939 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2939 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2939 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2939 "cplus.met"
                    }
#line 2939 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2939 "cplus.met"
                }
#line 2939 "cplus.met"
#line 2940 "cplus.met"
                {
#line 2940 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2940 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 2940 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 2940 "cplus.met"
                    expTree=_ptRes0;
#line 2940 "cplus.met"
                }
#line 2940 "cplus.met"
#line 2941 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2941 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2941 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 2941 "cplus.met"
                } else {
#line 2941 "cplus.met"
                    tokenAhead = 0 ;
#line 2941 "cplus.met"
                }
#line 2941 "cplus.met"
#line 2942 "cplus.met"
                {
#line 2942 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2942 "cplus.met"
                    {
#line 2942 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2942 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 2942 "cplus.met"
                        {
#line 2942 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2942 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 2942 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 2942 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2942 "cplus.met"
                        }
#line 2942 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2942 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 2942 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2942 "cplus.met"
                    }
#line 2942 "cplus.met"
                    _retValue =_ptTree0;
#line 2942 "cplus.met"
                    goto primary_expression_ret;
#line 2942 "cplus.met"
                }
#line 2942 "cplus.met"
#line 2942 "cplus.met"
#line 2942 "cplus.met"
            } else {
#line 2942 "cplus.met"
#line 2945 "cplus.met"
                {
#line 2945 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2945 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2945 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2945 "cplus.met"
                    }
#line 2945 "cplus.met"
                    _retValue =_ptTree0;
#line 2945 "cplus.met"
                    goto primary_expression_ret;
#line 2945 "cplus.met"
                }
#line 2945 "cplus.met"
            }
#line 2945 "cplus.met"
            break;
#line 2945 "cplus.met"
#line 2946 "cplus.met"
        case STRING : 
#line 2946 "cplus.met"
#line 2946 "cplus.met"
            {
#line 2946 "cplus.met"
                PPTREE _ptTree0=0;
#line 2946 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 2946 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2946 "cplus.met"
                }
#line 2946 "cplus.met"
                _retValue =_ptTree0;
#line 2946 "cplus.met"
                goto primary_expression_ret;
#line 2946 "cplus.met"
            }
#line 2946 "cplus.met"
            break;
#line 2946 "cplus.met"
#line 2947 "cplus.met"
        case VA_ARG : 
#line 2947 "cplus.met"
            tokenAhead = 0 ;
#line 2947 "cplus.met"
            CommTerm();
#line 2947 "cplus.met"
#line 2948 "cplus.met"
#line 2949 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2949 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2949 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 2949 "cplus.met"
            } else {
#line 2949 "cplus.met"
                tokenAhead = 0 ;
#line 2949 "cplus.met"
            }
#line 2949 "cplus.met"
#line 2950 "cplus.met"
            {
#line 2950 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2950 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 2950 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2950 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2950 "cplus.met"
                }
#line 2950 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2950 "cplus.met"
                expTree=_ptRes0;
#line 2950 "cplus.met"
            }
#line 2950 "cplus.met"
#line 2951 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2951 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2951 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 2951 "cplus.met"
            } else {
#line 2951 "cplus.met"
                tokenAhead = 0 ;
#line 2951 "cplus.met"
            }
#line 2951 "cplus.met"
#line 2952 "cplus.met"
            {
#line 2952 "cplus.met"
                PPTREE _ptTree0=0;
#line 2952 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 2952 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2952 "cplus.met"
                }
#line 2952 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 2952 "cplus.met"
            }
#line 2952 "cplus.met"
#line 2953 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2953 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2953 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2953 "cplus.met"
            } else {
#line 2953 "cplus.met"
                tokenAhead = 0 ;
#line 2953 "cplus.met"
            }
#line 2953 "cplus.met"
#line 2954 "cplus.met"
            {
#line 2954 "cplus.met"
                _retValue = expTree ;
#line 2954 "cplus.met"
                goto primary_expression_ret;
#line 2954 "cplus.met"
                
#line 2954 "cplus.met"
            }
#line 2954 "cplus.met"
#line 2954 "cplus.met"
            break;
#line 2954 "cplus.met"
#line 2956 "cplus.met"
        default : 
#line 2956 "cplus.met"
#line 2956 "cplus.met"
            {
#line 2956 "cplus.met"
                PPTREE _ptTree0=0;
#line 2956 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 2956 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2956 "cplus.met"
                }
#line 2956 "cplus.met"
                _retValue =_ptTree0;
#line 2956 "cplus.met"
                goto primary_expression_ret;
#line 2956 "cplus.met"
            }
#line 2956 "cplus.met"
            break;
#line 2956 "cplus.met"
    }
#line 2956 "cplus.met"
#line 2956 "cplus.met"
#line 2957 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2957 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2957 "cplus.met"
return((PPTREE) 0);
#line 2957 "cplus.met"

#line 2957 "cplus.met"
primary_expression_exit :
#line 2957 "cplus.met"

#line 2957 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 2957 "cplus.met"
    _funcLevel--;
#line 2957 "cplus.met"
    return((PPTREE) -1) ;
#line 2957 "cplus.met"

#line 2957 "cplus.met"
primary_expression_ret :
#line 2957 "cplus.met"
    
#line 2957 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 2957 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2957 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2957 "cplus.met"
    return _retValue ;
#line 2957 "cplus.met"
}
#line 2957 "cplus.met"

#line 2957 "cplus.met"
#line 753 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 753 "cplus.met"
{
#line 753 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 753 "cplus.met"
    int _value,_nbPre = 0 ;
#line 753 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 753 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 753 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 753 "cplus.met"
#line 753 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 753 "cplus.met"
#line 753 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 753 "cplus.met"
#line 755 "cplus.met"
     debut : 
#line 755 "cplus.met"
#line 755 "cplus.met"
    _addlist1 = list ;
#line 755 "cplus.met"
#line 756 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 61, cplus)) { 
#line 756 "cplus.met"
#line 757 "cplus.met"
#line 757 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 757 "cplus.met"
#line 757 "cplus.met"
        if (list){
#line 757 "cplus.met"
#line 757 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 757 "cplus.met"
        } else {
#line 757 "cplus.met"
#line 757 "cplus.met"
            list = _addlist1 ;
#line 757 "cplus.met"
        }
#line 757 "cplus.met"
    } 
#line 757 "cplus.met"
#line 758 "cplus.met"
    {
#line 758 "cplus.met"
        PPTREE _ptTree0=0;
#line 758 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 758 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 758 "cplus.met"
        }
#line 758 "cplus.met"
        list =AddList(list , _ptTree0);
#line 758 "cplus.met"
    }
#line 758 "cplus.met"
#line 759 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 24, cplus)){
#line 759 "cplus.met"
#line 759 "cplus.met"
    }
#line 759 "cplus.met"
#line 761 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 761 "cplus.met"
#line 762 "cplus.met"
#line 764 "cplus.met"
        dumperror ();
#line 764 "cplus.met"
#line 766 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 766 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 766 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 766 "cplus.met"
        } else {
#line 766 "cplus.met"
            tokenAhead = 0 ;
#line 766 "cplus.met"
        }
#line 766 "cplus.met"
#line 767 "cplus.met"
         hasGotError = 1 ;
#line 767 "cplus.met"
#line 768 "cplus.met"
         goto debut ;
#line 768 "cplus.met"
#line 768 "cplus.met"
#line 768 "cplus.met"
    }
#line 768 "cplus.met"
#line 770 "cplus.met"
    if ( hasGotError ){
#line 770 "cplus.met"
#line 771 "cplus.met"
         exit (-1);
#line 771 "cplus.met"
    }
#line 771 "cplus.met"
#line 772 "cplus.met"
    {
#line 772 "cplus.met"
        PPTREE _ptTree0=0;
#line 772 "cplus.met"
        {
#line 772 "cplus.met"
            PPTREE _ptRes1=0;
#line 772 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 772 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 772 "cplus.met"
            _ptTree0=_ptRes1;
#line 772 "cplus.met"
        }
#line 772 "cplus.met"
        _retValue =_ptTree0;
#line 772 "cplus.met"
        goto program_ret;
#line 772 "cplus.met"
    }
#line 772 "cplus.met"
#line 772 "cplus.met"
#line 772 "cplus.met"

#line 773 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 773 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 773 "cplus.met"
return((PPTREE) 0);
#line 773 "cplus.met"

#line 773 "cplus.met"
program_exit :
#line 773 "cplus.met"

#line 773 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 773 "cplus.met"
    _funcLevel--;
#line 773 "cplus.met"
    return((PPTREE) -1) ;
#line 773 "cplus.met"

#line 773 "cplus.met"
program_ret :
#line 773 "cplus.met"
    
#line 773 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 773 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 773 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 773 "cplus.met"
    return _retValue ;
#line 773 "cplus.met"
}
#line 773 "cplus.met"

#line 773 "cplus.met"
#line 1866 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1866 "cplus.met"
{
#line 1866 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1866 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1866 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1866 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1866 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1866 "cplus.met"
#line 1866 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1866 "cplus.met"
#line 1866 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1866 "cplus.met"
#line 1868 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1868 "cplus.met"
    switch( lexEl.Value) {
#line 1868 "cplus.met"
#line 1869 "cplus.met"
        case PUBLIC : 
#line 1869 "cplus.met"
            tokenAhead = 0 ;
#line 1869 "cplus.met"
            CommTerm();
#line 1869 "cplus.met"
#line 1869 "cplus.met"
            {
#line 1869 "cplus.met"
                PPTREE _ptRes0=0;
#line 1869 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1869 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1869 "cplus.met"
                retTree=_ptRes0;
#line 1869 "cplus.met"
            }
#line 1869 "cplus.met"
            break;
#line 1869 "cplus.met"
#line 1870 "cplus.met"
        case PROTECTED : 
#line 1870 "cplus.met"
            tokenAhead = 0 ;
#line 1870 "cplus.met"
            CommTerm();
#line 1870 "cplus.met"
#line 1870 "cplus.met"
            {
#line 1870 "cplus.met"
                PPTREE _ptRes0=0;
#line 1870 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1870 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1870 "cplus.met"
                retTree=_ptRes0;
#line 1870 "cplus.met"
            }
#line 1870 "cplus.met"
            break;
#line 1870 "cplus.met"
#line 1871 "cplus.met"
        case PRIVATE : 
#line 1871 "cplus.met"
            tokenAhead = 0 ;
#line 1871 "cplus.met"
            CommTerm();
#line 1871 "cplus.met"
#line 1871 "cplus.met"
            {
#line 1871 "cplus.met"
                PPTREE _ptRes0=0;
#line 1871 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1871 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1871 "cplus.met"
                retTree=_ptRes0;
#line 1871 "cplus.met"
            }
#line 1871 "cplus.met"
            break;
#line 1871 "cplus.met"
        default :
#line 1871 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1871 "cplus.met"
            break;
#line 1871 "cplus.met"
    }
#line 1871 "cplus.met"
#line 1873 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1873 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1873 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1873 "cplus.met"
    } else {
#line 1873 "cplus.met"
        tokenAhead = 0 ;
#line 1873 "cplus.met"
    }
#line 1873 "cplus.met"
#line 1873 "cplus.met"
    _addlist1 = list ;
#line 1873 "cplus.met"
#line 1874 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 79, cplus)) { 
#line 1874 "cplus.met"
#line 1875 "cplus.met"
#line 1875 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1875 "cplus.met"
#line 1875 "cplus.met"
        if (list){
#line 1875 "cplus.met"
#line 1875 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1875 "cplus.met"
        } else {
#line 1875 "cplus.met"
#line 1875 "cplus.met"
            list = _addlist1 ;
#line 1875 "cplus.met"
        }
#line 1875 "cplus.met"
    } 
#line 1875 "cplus.met"
#line 1876 "cplus.met"
    {
#line 1876 "cplus.met"
        PPTREE _ptTree0=0;
#line 1876 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1876 "cplus.met"
        _retValue =_ptTree0;
#line 1876 "cplus.met"
        goto protect_declare_ret;
#line 1876 "cplus.met"
    }
#line 1876 "cplus.met"
#line 1876 "cplus.met"
#line 1876 "cplus.met"

#line 1877 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1877 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1877 "cplus.met"
return((PPTREE) 0);
#line 1877 "cplus.met"

#line 1877 "cplus.met"
protect_declare_exit :
#line 1877 "cplus.met"

#line 1877 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1877 "cplus.met"
    _funcLevel--;
#line 1877 "cplus.met"
    return((PPTREE) -1) ;
#line 1877 "cplus.met"

#line 1877 "cplus.met"
protect_declare_ret :
#line 1877 "cplus.met"
    
#line 1877 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1877 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1877 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1877 "cplus.met"
    return _retValue ;
#line 1877 "cplus.met"
}
#line 1877 "cplus.met"

#line 1877 "cplus.met"
#line 2149 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2149 "cplus.met"
{
#line 2149 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2149 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2149 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2149 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2149 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2149 "cplus.met"
#line 2149 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2149 "cplus.met"
#line 2151 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2151 "cplus.met"
    switch( lexEl.Value) {
#line 2151 "cplus.met"
#line 2154 "cplus.met"
        case ETOI : 
#line 2154 "cplus.met"
            tokenAhead = 0 ;
#line 2154 "cplus.met"
            CommTerm();
#line 2154 "cplus.met"
#line 2153 "cplus.met"
#line 2154 "cplus.met"
            {
#line 2154 "cplus.met"
                PPTREE _ptRes0=0;
#line 2154 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2154 "cplus.met"
                retTree=_ptRes0;
#line 2154 "cplus.met"
            }
#line 2154 "cplus.met"
#line 2155 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2155 "cplus.met"
#line 2156 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2156 "cplus.met"
#line 2156 "cplus.met"
            }
#line 2156 "cplus.met"
#line 2157 "cplus.met"
            {
#line 2157 "cplus.met"
                _retValue = retTree ;
#line 2157 "cplus.met"
                goto ptr_operator_ret;
#line 2157 "cplus.met"
                
#line 2157 "cplus.met"
            }
#line 2157 "cplus.met"
#line 2157 "cplus.met"
            break;
#line 2157 "cplus.met"
#line 2161 "cplus.met"
        case ETCO : 
#line 2161 "cplus.met"
            tokenAhead = 0 ;
#line 2161 "cplus.met"
            CommTerm();
#line 2161 "cplus.met"
#line 2160 "cplus.met"
#line 2161 "cplus.met"
            {
#line 2161 "cplus.met"
                PPTREE _ptRes0=0;
#line 2161 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2161 "cplus.met"
                retTree=_ptRes0;
#line 2161 "cplus.met"
            }
#line 2161 "cplus.met"
#line 2162 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2162 "cplus.met"
#line 2163 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2163 "cplus.met"
#line 2163 "cplus.met"
            }
#line 2163 "cplus.met"
#line 2164 "cplus.met"
            {
#line 2164 "cplus.met"
                _retValue = retTree ;
#line 2164 "cplus.met"
                goto ptr_operator_ret;
#line 2164 "cplus.met"
                
#line 2164 "cplus.met"
            }
#line 2164 "cplus.met"
#line 2164 "cplus.met"
            break;
#line 2164 "cplus.met"
#line 2168 "cplus.met"
        case DPOIDPOI : 
#line 2168 "cplus.met"
#line 2167 "cplus.met"
#line 2168 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 91, cplus))== (PPTREE) -1 ) {
#line 2168 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2168 "cplus.met"
            }
#line 2168 "cplus.met"
#line 2168 "cplus.met"
            break;
#line 2168 "cplus.met"
#line 2170 "cplus.met"
        case META : 
#line 2170 "cplus.met"
        case IDENT : 
#line 2170 "cplus.met"
#line 2171 "cplus.met"
#line 2172 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 91, cplus))== (PPTREE) -1 ) {
#line 2172 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2172 "cplus.met"
            }
#line 2172 "cplus.met"
#line 2172 "cplus.met"
            break;
#line 2172 "cplus.met"
        default :
#line 2172 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2172 "cplus.met"
            break;
#line 2172 "cplus.met"
    }
#line 2172 "cplus.met"
#line 2175 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 2175 "cplus.met"
#line 2176 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2176 "cplus.met"
#line 2176 "cplus.met"
    }
#line 2176 "cplus.met"
#line 2177 "cplus.met"
    {
#line 2177 "cplus.met"
        _retValue = retour ;
#line 2177 "cplus.met"
        goto ptr_operator_ret;
#line 2177 "cplus.met"
        
#line 2177 "cplus.met"
    }
#line 2177 "cplus.met"
#line 2177 "cplus.met"
#line 2177 "cplus.met"

#line 2178 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2178 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2178 "cplus.met"
return((PPTREE) 0);
#line 2178 "cplus.met"

#line 2178 "cplus.met"
ptr_operator_exit :
#line 2178 "cplus.met"

#line 2178 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2178 "cplus.met"
    _funcLevel--;
#line 2178 "cplus.met"
    return((PPTREE) -1) ;
#line 2178 "cplus.met"

#line 2178 "cplus.met"
ptr_operator_ret :
#line 2178 "cplus.met"
    
#line 2178 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2178 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2178 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2178 "cplus.met"
    return _retValue ;
#line 2178 "cplus.met"
}
#line 2178 "cplus.met"

#line 2178 "cplus.met"
#line 1802 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1802 "cplus.met"
{
#line 1802 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1802 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1802 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1802 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1802 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1802 "cplus.met"
#line 1802 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1802 "cplus.met"
#line 1804 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1804 "cplus.met"
#line 1805 "cplus.met"
        {
#line 1805 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1805 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1805 "cplus.met"
            {
#line 1805 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1805 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1805 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1805 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1805 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1805 "cplus.met"
                } else {
#line 1805 "cplus.met"
                    tokenAhead = 0 ;
#line 1805 "cplus.met"
                }
#line 1805 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1805 "cplus.met"
                _ptTree0=_ptRes1;
#line 1805 "cplus.met"
            }
#line 1805 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1805 "cplus.met"
            retTree=_ptRes0;
#line 1805 "cplus.met"
        }
#line 1805 "cplus.met"
    } else {
#line 1805 "cplus.met"
#line 1807 "cplus.met"
        {
#line 1807 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1807 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1807 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1807 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1807 "cplus.met"
                MulFreeTree(6,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1807 "cplus.met"
            } else {
#line 1807 "cplus.met"
                tokenAhead = 0 ;
#line 1807 "cplus.met"
            }
#line 1807 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1807 "cplus.met"
            retTree=_ptRes0;
#line 1807 "cplus.met"
        }
#line 1807 "cplus.met"
    }
#line 1807 "cplus.met"
#line 1808 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1808 "cplus.met"
#line 1809 "cplus.met"
#line 1810 "cplus.met"
        {
#line 1810 "cplus.met"
            PPTREE _ptRes0=0;
#line 1810 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1810 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1810 "cplus.met"
            retTree=_ptRes0;
#line 1810 "cplus.met"
        }
#line 1810 "cplus.met"
#line 1811 "cplus.met"
        inter = retTree ;
#line 1811 "cplus.met"
#line 1812 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1812 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 113, cplus))) { 
#line 1812 "cplus.met"
#line 1813 "cplus.met"
#line 1814 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1814 "cplus.met"
#line 1815 "cplus.met"
                {
#line 1815 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1815 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1815 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1815 "cplus.met"
                    val=_ptRes0;
#line 1815 "cplus.met"
                }
#line 1815 "cplus.met"
            }
#line 1815 "cplus.met"
#line 1816 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1816 "cplus.met"
#line 1817 "cplus.met"
            inter = val ;
#line 1817 "cplus.met"
#line 1817 "cplus.met"
        } 
#line 1817 "cplus.met"
#line 1817 "cplus.met"
#line 1818 "cplus.met"
    }
#line 1818 "cplus.met"
#line 1820 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 137, cplus)){
#line 1820 "cplus.met"
#line 1821 "cplus.met"
#line 1822 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1822 "cplus.met"
#line 1823 "cplus.met"
        retTree = templateVal ;
#line 1823 "cplus.met"
#line 1824 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1824 "cplus.met"
#line 1825 "cplus.met"
            {
#line 1825 "cplus.met"
                PPTREE _ptTree0=0;
#line 1825 "cplus.met"
                {
#line 1825 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1825 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1825 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1825 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 1825 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1825 "cplus.met"
                    }
#line 1825 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1825 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1825 "cplus.met"
                }
#line 1825 "cplus.met"
                _retValue =_ptTree0;
#line 1825 "cplus.met"
                goto qualified_name_ret;
#line 1825 "cplus.met"
            }
#line 1825 "cplus.met"
        } else {
#line 1825 "cplus.met"
#line 1827 "cplus.met"
            {
#line 1827 "cplus.met"
                _retValue = retTree ;
#line 1827 "cplus.met"
                goto qualified_name_ret;
#line 1827 "cplus.met"
                
#line 1827 "cplus.met"
            }
#line 1827 "cplus.met"
        }
#line 1827 "cplus.met"
#line 1827 "cplus.met"
#line 1827 "cplus.met"
    }
#line 1827 "cplus.met"
#line 1829 "cplus.met"
    {
#line 1829 "cplus.met"
        _retValue = retTree ;
#line 1829 "cplus.met"
        goto qualified_name_ret;
#line 1829 "cplus.met"
        
#line 1829 "cplus.met"
    }
#line 1829 "cplus.met"
#line 1829 "cplus.met"
#line 1829 "cplus.met"

#line 1830 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1830 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1830 "cplus.met"
return((PPTREE) 0);
#line 1830 "cplus.met"

#line 1830 "cplus.met"
qualified_name_exit :
#line 1830 "cplus.met"

#line 1830 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1830 "cplus.met"
    _funcLevel--;
#line 1830 "cplus.met"
    return((PPTREE) -1) ;
#line 1830 "cplus.met"

#line 1830 "cplus.met"
qualified_name_ret :
#line 1830 "cplus.met"
    
#line 1830 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1830 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1830 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1830 "cplus.met"
    return _retValue ;
#line 1830 "cplus.met"
}
#line 1830 "cplus.met"

#line 1830 "cplus.met"
#line 1780 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1780 "cplus.met"
{
#line 1780 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1780 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1780 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1780 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1780 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1780 "cplus.met"
#line 1781 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1781 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1781 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1781 "cplus.met"
    } else {
#line 1781 "cplus.met"
        tokenAhead = 0 ;
#line 1781 "cplus.met"
    }
#line 1781 "cplus.met"
#line 1782 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1782 "cplus.met"
    switch( lexEl.Value) {
#line 1782 "cplus.met"
#line 1783 "cplus.met"
        case TILD : 
#line 1783 "cplus.met"
            tokenAhead = 0 ;
#line 1783 "cplus.met"
            CommTerm();
#line 1783 "cplus.met"
#line 1783 "cplus.met"
            {
#line 1783 "cplus.met"
                PPTREE _ptTree0=0;
#line 1783 "cplus.met"
                {
#line 1783 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1783 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1783 "cplus.met"
                    {
#line 1783 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1783 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1783 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1783 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1783 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1783 "cplus.met"
                        } else {
#line 1783 "cplus.met"
                            tokenAhead = 0 ;
#line 1783 "cplus.met"
                        }
#line 1783 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1783 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1783 "cplus.met"
                    }
#line 1783 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1783 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1783 "cplus.met"
                }
#line 1783 "cplus.met"
                _retValue =_ptTree0;
#line 1783 "cplus.met"
                goto qualified_name_elem_ret;
#line 1783 "cplus.met"
            }
#line 1783 "cplus.met"
            break;
#line 1783 "cplus.met"
#line 1784 "cplus.met"
        case META : 
#line 1784 "cplus.met"
        case IDENT : 
#line 1784 "cplus.met"
#line 1784 "cplus.met"
            {
#line 1784 "cplus.met"
                PPTREE _ptTree0=0;
#line 1784 "cplus.met"
                {
#line 1784 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1784 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1784 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1784 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1784 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1784 "cplus.met"
                    } else {
#line 1784 "cplus.met"
                        tokenAhead = 0 ;
#line 1784 "cplus.met"
                    }
#line 1784 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1784 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1784 "cplus.met"
                }
#line 1784 "cplus.met"
                _retValue =_ptTree0;
#line 1784 "cplus.met"
                goto qualified_name_elem_ret;
#line 1784 "cplus.met"
            }
#line 1784 "cplus.met"
            break;
#line 1784 "cplus.met"
#line 1785 "cplus.met"
        case OPERATOR : 
#line 1785 "cplus.met"
#line 1785 "cplus.met"
            {
#line 1785 "cplus.met"
                PPTREE _ptTree0=0;
#line 1785 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1785 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1785 "cplus.met"
                }
#line 1785 "cplus.met"
                _retValue =_ptTree0;
#line 1785 "cplus.met"
                goto qualified_name_elem_ret;
#line 1785 "cplus.met"
            }
#line 1785 "cplus.met"
            break;
#line 1785 "cplus.met"
        default :
#line 1785 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1785 "cplus.met"
            break;
#line 1785 "cplus.met"
    }
#line 1785 "cplus.met"
#line 1785 "cplus.met"
#line 1786 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1786 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1786 "cplus.met"
return((PPTREE) 0);
#line 1786 "cplus.met"

#line 1786 "cplus.met"
qualified_name_elem_exit :
#line 1786 "cplus.met"

#line 1786 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1786 "cplus.met"
    _funcLevel--;
#line 1786 "cplus.met"
    return((PPTREE) -1) ;
#line 1786 "cplus.met"

#line 1786 "cplus.met"
qualified_name_elem_ret :
#line 1786 "cplus.met"
    
#line 1786 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1786 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1786 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1786 "cplus.met"
    return _retValue ;
#line 1786 "cplus.met"
}
#line 1786 "cplus.met"

#line 1786 "cplus.met"
