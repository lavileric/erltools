/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3092 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3092 "cplus.met"
{
#line 3092 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3092 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3092 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3092 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3092 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3092 "cplus.met"
#line 3092 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3092 "cplus.met"
#line 3092 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3092 "cplus.met"
#line 3094 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3094 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3094 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3094 "cplus.met"
    } else {
#line 3094 "cplus.met"
        tokenAhead = 0 ;
#line 3094 "cplus.met"
    }
#line 3094 "cplus.met"
#line 3095 "cplus.met"
     { int followed = 0;
#line 3095 "cplus.met"
#line 3096 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3096 "cplus.met"
#line 3097 "cplus.met"
#line 3098 "cplus.met"
         { int exit = 0 ;
#line 3098 "cplus.met"
#line 3099 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3099 "cplus.met"
#line 3100 "cplus.met"
#line 3101 "cplus.met"
             followed = 1 ;
#line 3101 "cplus.met"
#line 3102 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3102 "cplus.met"
#line 3102 "cplus.met"
#line 3102 "cplus.met"
        } else {
#line 3102 "cplus.met"
#line 3105 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3105 "cplus.met"
#line 3106 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3106 "cplus.met"
#line 3106 "cplus.met"
            } else {
#line 3106 "cplus.met"
#line 3108 "cplus.met"
#line 3109 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3109 "cplus.met"
#line 3110 "cplus.met"
                    {
#line 3110 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3110 "cplus.met"
                        {
#line 3110 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3110 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3110 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3110 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3110 "cplus.met"
                        }
#line 3110 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3110 "cplus.met"
                    }
#line 3110 "cplus.met"
#line 3110 "cplus.met"
                }
#line 3110 "cplus.met"
#line 3111 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3111 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3111 "cplus.met"
#line 3112 "cplus.met"
                     followed = 1;
#line 3112 "cplus.met"
                }
#line 3112 "cplus.met"
#line 3113 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3113 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3113 "cplus.met"
#line 3114 "cplus.met"
#line 3115 "cplus.met"
                     followed = 1;
#line 3115 "cplus.met"
#line 3116 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3116 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3116 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3116 "cplus.met"
                    } else {
#line 3116 "cplus.met"
                        tokenAhead = 0 ;
#line 3116 "cplus.met"
                    }
#line 3116 "cplus.met"
#line 3116 "cplus.met"
#line 3116 "cplus.met"
                }
#line 3116 "cplus.met"
#line 3116 "cplus.met"
            }
#line 3116 "cplus.met"
        }
#line 3116 "cplus.met"
#line 3116 "cplus.met"
        _addlist1 = paramList ;
#line 3116 "cplus.met"
#line 3119 "cplus.met"
        while ( followed && !exit ) { 
#line 3119 "cplus.met"
#line 3120 "cplus.met"
#line 3121 "cplus.met"
             followed = 0 ;
#line 3121 "cplus.met"
#line 3122 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3122 "cplus.met"
#line 3123 "cplus.met"
#line 3124 "cplus.met"
                 followed = 1 ;
#line 3124 "cplus.met"
#line 3125 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3125 "cplus.met"
#line 3125 "cplus.met"
                if (paramList){
#line 3125 "cplus.met"
#line 3125 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3125 "cplus.met"
                } else {
#line 3125 "cplus.met"
#line 3125 "cplus.met"
                    paramList = _addlist1 ;
#line 3125 "cplus.met"
                }
#line 3125 "cplus.met"
#line 3125 "cplus.met"
#line 3125 "cplus.met"
            } else {
#line 3125 "cplus.met"
#line 3128 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3128 "cplus.met"
#line 3129 "cplus.met"
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
                } else {
#line 3129 "cplus.met"
#line 3131 "cplus.met"
#line 3132 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3132 "cplus.met"
#line 3133 "cplus.met"
#line 3134 "cplus.met"
                        {
#line 3134 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3134 "cplus.met"
                            {
#line 3134 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3134 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3134 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3134 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3134 "cplus.met"
                            }
#line 3134 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3134 "cplus.met"
                        }
#line 3134 "cplus.met"
#line 3134 "cplus.met"
                        if (paramList){
#line 3134 "cplus.met"
#line 3134 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3134 "cplus.met"
                        } else {
#line 3134 "cplus.met"
#line 3134 "cplus.met"
                            paramList = _addlist1 ;
#line 3134 "cplus.met"
                        }
#line 3134 "cplus.met"
#line 3135 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3135 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3135 "cplus.met"
#line 3136 "cplus.met"
                             followed = 1;
#line 3136 "cplus.met"
                        }
#line 3136 "cplus.met"
#line 3137 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3137 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3137 "cplus.met"
#line 3138 "cplus.met"
#line 3139 "cplus.met"
                             followed = 1;
#line 3139 "cplus.met"
#line 3140 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3140 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3140 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3140 "cplus.met"
                            } else {
#line 3140 "cplus.met"
                                tokenAhead = 0 ;
#line 3140 "cplus.met"
                            }
#line 3140 "cplus.met"
#line 3140 "cplus.met"
#line 3140 "cplus.met"
                        }
#line 3140 "cplus.met"
#line 3140 "cplus.met"
#line 3141 "cplus.met"
                    } else {
#line 3141 "cplus.met"
#line 3144 "cplus.met"
#line 3145 "cplus.met"
                        {
#line 3145 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3145 "cplus.met"
                            {
#line 3145 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3145 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3145 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3145 "cplus.met"
                            }
#line 3145 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3145 "cplus.met"
                        }
#line 3145 "cplus.met"
#line 3145 "cplus.met"
                        if (paramList){
#line 3145 "cplus.met"
#line 3145 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3145 "cplus.met"
                        } else {
#line 3145 "cplus.met"
#line 3145 "cplus.met"
                            paramList = _addlist1 ;
#line 3145 "cplus.met"
                        }
#line 3145 "cplus.met"
#line 3146 "cplus.met"
                         exit = 1 ;
#line 3146 "cplus.met"
#line 3147 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3147 "cplus.met"
#line 3147 "cplus.met"
                        }
#line 3147 "cplus.met"
#line 3149 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3149 "cplus.met"
#line 3150 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3150 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3150 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3150 "cplus.met"
                            } else {
#line 3150 "cplus.met"
                                tokenAhead = 0 ;
#line 3150 "cplus.met"
                            }
#line 3150 "cplus.met"
                        }
#line 3150 "cplus.met"
#line 3150 "cplus.met"
                    }
#line 3150 "cplus.met"
#line 3150 "cplus.met"
                }
#line 3150 "cplus.met"
            }
#line 3150 "cplus.met"
#line 3150 "cplus.met"
        } 
#line 3150 "cplus.met"
#line 3154 "cplus.met"
        if ((! ( exit )) && 
#line 3154 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3154 "cplus.met"
#line 3155 "cplus.met"
            {
#line 3155 "cplus.met"
                PPTREE _ptTree0=0;
#line 3155 "cplus.met"
                {
#line 3155 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3155 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3155 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3155 "cplus.met"
                }
#line 3155 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3155 "cplus.met"
            }
#line 3155 "cplus.met"
#line 3155 "cplus.met"
        }
#line 3155 "cplus.met"
#line 3156 "cplus.met"
         }  
#line 3156 "cplus.met"
#line 3156 "cplus.met"
#line 3156 "cplus.met"
    }
#line 3156 "cplus.met"
#line 3158 "cplus.met"
     } 
#line 3158 "cplus.met"
#line 3159 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3159 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3159 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3159 "cplus.met"
    } else {
#line 3159 "cplus.met"
        tokenAhead = 0 ;
#line 3159 "cplus.met"
    }
#line 3159 "cplus.met"
#line 3160 "cplus.met"
    {
#line 3160 "cplus.met"
        _retValue = paramList ;
#line 3160 "cplus.met"
        goto parameter_list_extended_ret;
#line 3160 "cplus.met"
        
#line 3160 "cplus.met"
    }
#line 3160 "cplus.met"
#line 3160 "cplus.met"
#line 3160 "cplus.met"

#line 3161 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3161 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3161 "cplus.met"
return((PPTREE) 0);
#line 3161 "cplus.met"

#line 3161 "cplus.met"
parameter_list_extended_exit :
#line 3161 "cplus.met"

#line 3161 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3161 "cplus.met"
    _funcLevel--;
#line 3161 "cplus.met"
    return((PPTREE) -1) ;
#line 3161 "cplus.met"

#line 3161 "cplus.met"
parameter_list_extended_ret :
#line 3161 "cplus.met"
    
#line 3161 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3161 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3161 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3161 "cplus.met"
    return _retValue ;
#line 3161 "cplus.met"
}
#line 3161 "cplus.met"

#line 3161 "cplus.met"
#line 3585 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3585 "cplus.met"
{
#line 3585 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3585 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3585 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3585 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3585 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3585 "cplus.met"
#line 3585 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3585 "cplus.met"
#line 3587 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 76, cplus)) || 
#line 3587 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 138, cplus))) || 
#line 3587 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 40, cplus))) || 
#line 3587 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 142, cplus))) || 
#line 3587 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 141, cplus))) || 
#line 3587 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 62, cplus))){
#line 3587 "cplus.met"
#line 3588 "cplus.met"
        {
#line 3588 "cplus.met"
            _retValue = retValue ;
#line 3588 "cplus.met"
            goto parse_entry_ret;
#line 3588 "cplus.met"
            
#line 3588 "cplus.met"
        }
#line 3588 "cplus.met"
    } else {
#line 3588 "cplus.met"
#line 3590 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3590 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3590 "cplus.met"
        }
#line 3590 "cplus.met"
    }
#line 3590 "cplus.met"
#line 3590 "cplus.met"
#line 3590 "cplus.met"

#line 3591 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3591 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3591 "cplus.met"
return((PPTREE) 0);
#line 3591 "cplus.met"

#line 3591 "cplus.met"
parse_entry_exit :
#line 3591 "cplus.met"

#line 3591 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3591 "cplus.met"
    _funcLevel--;
#line 3591 "cplus.met"
    return((PPTREE) -1) ;
#line 3591 "cplus.met"

#line 3591 "cplus.met"
parse_entry_ret :
#line 3591 "cplus.met"
    
#line 3591 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3591 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3591 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3591 "cplus.met"
    return _retValue ;
#line 3591 "cplus.met"
}
#line 3591 "cplus.met"

#line 3591 "cplus.met"
#line 2704 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2704 "cplus.met"
{
#line 2704 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2704 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2704 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2704 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2704 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2704 "cplus.met"
#line 2704 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2704 "cplus.met"
#line 2706 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2706 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2706 "cplus.met"
    }
#line 2706 "cplus.met"
#line 2707 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2707 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2707 "cplus.met"
#line 2708 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2708 "cplus.met"
        switch( lexEl.Value) {
#line 2708 "cplus.met"
#line 2709 "cplus.met"
            case POINETOI : 
#line 2709 "cplus.met"
                tokenAhead = 0 ;
#line 2709 "cplus.met"
                CommTerm();
#line 2709 "cplus.met"
#line 2709 "cplus.met"
                {
#line 2709 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2709 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2709 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2709 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2709 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2709 "cplus.met"
                    }
#line 2709 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2709 "cplus.met"
                    expTree=_ptRes0;
#line 2709 "cplus.met"
                }
#line 2709 "cplus.met"
                break;
#line 2709 "cplus.met"
#line 2710 "cplus.met"
            case TIRESUPEETOI : 
#line 2710 "cplus.met"
                tokenAhead = 0 ;
#line 2710 "cplus.met"
                CommTerm();
#line 2710 "cplus.met"
#line 2710 "cplus.met"
                {
#line 2710 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2710 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2710 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2710 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2710 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2710 "cplus.met"
                    }
#line 2710 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2710 "cplus.met"
                    expTree=_ptRes0;
#line 2710 "cplus.met"
                }
#line 2710 "cplus.met"
                break;
#line 2710 "cplus.met"
            default :
#line 2710 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2710 "cplus.met"
                break;
#line 2710 "cplus.met"
        }
#line 2710 "cplus.met"
    } 
#line 2710 "cplus.met"
#line 2712 "cplus.met"
    {
#line 2712 "cplus.met"
        _retValue = expTree ;
#line 2712 "cplus.met"
        goto pm_expression_ret;
#line 2712 "cplus.met"
        
#line 2712 "cplus.met"
    }
#line 2712 "cplus.met"
#line 2712 "cplus.met"
#line 2712 "cplus.met"

#line 2713 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2713 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2713 "cplus.met"
return((PPTREE) 0);
#line 2713 "cplus.met"

#line 2713 "cplus.met"
pm_expression_exit :
#line 2713 "cplus.met"

#line 2713 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2713 "cplus.met"
    _funcLevel--;
#line 2713 "cplus.met"
    return((PPTREE) -1) ;
#line 2713 "cplus.met"

#line 2713 "cplus.met"
pm_expression_ret :
#line 2713 "cplus.met"
    
#line 2713 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2713 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2713 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2713 "cplus.met"
    return _retValue ;
#line 2713 "cplus.met"
}
#line 2713 "cplus.met"

#line 2713 "cplus.met"
#line 2872 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 2872 "cplus.met"
{
#line 2872 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2872 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2872 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2872 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 2872 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2872 "cplus.met"
#line 2872 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2872 "cplus.met"
#line 2874 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 112, cplus))){
#line 2874 "cplus.met"
#line 2875 "cplus.met"
#line 2876 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2876 "cplus.met"
            MulFreeTree(2,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2876 "cplus.met"
        }
#line 2876 "cplus.met"
#line 2877 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 2877 "cplus.met"
#line 2878 "cplus.met"
            
#line 2878 "cplus.met"
            MulFreeTree(2,expList,expTree);
            LEX_EXIT ("",0);
#line 2878 "cplus.met"
            goto postfix_expression_exit;
#line 2878 "cplus.met"
#line 2878 "cplus.met"
        }
#line 2878 "cplus.met"
#line 2878 "cplus.met"
#line 2878 "cplus.met"
    }
#line 2878 "cplus.met"
#line 2880 "cplus.met"
    while ((((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2880 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 2880 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 2880 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 2880 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 2880 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) || 
#line 2880 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AOUV,"{"))) { 
#line 2880 "cplus.met"
#line 2881 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2881 "cplus.met"
        switch( lexEl.Value) {
#line 2881 "cplus.met"
#line 2884 "cplus.met"
            case POUV : 
#line 2884 "cplus.met"
                tokenAhead = 0 ;
#line 2884 "cplus.met"
                CommTerm();
#line 2884 "cplus.met"
#line 2883 "cplus.met"
#line 2884 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 62, cplus)){
#line 2884 "cplus.met"
#line 2885 "cplus.met"
                    {
#line 2885 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2885 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2885 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2885 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2885 "cplus.met"
                        expTree=_ptRes0;
#line 2885 "cplus.met"
                    }
#line 2885 "cplus.met"
                } else {
#line 2885 "cplus.met"
#line 2887 "cplus.met"
                    {
#line 2887 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2887 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2887 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2887 "cplus.met"
                        expTree=_ptRes0;
#line 2887 "cplus.met"
                    }
#line 2887 "cplus.met"
                }
#line 2887 "cplus.met"
#line 2888 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2888 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2888 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 2888 "cplus.met"
                } else {
#line 2888 "cplus.met"
                    tokenAhead = 0 ;
#line 2888 "cplus.met"
                }
#line 2888 "cplus.met"
#line 2888 "cplus.met"
                break;
#line 2888 "cplus.met"
#line 2892 "cplus.met"
            case AOUV : 
#line 2892 "cplus.met"
                tokenAhead = 0 ;
#line 2892 "cplus.met"
                CommTerm();
#line 2892 "cplus.met"
#line 2891 "cplus.met"
#line 2892 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 62, cplus)){
#line 2892 "cplus.met"
#line 2893 "cplus.met"
                    {
#line 2893 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2893 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 2893 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2893 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2893 "cplus.met"
                        expTree=_ptRes0;
#line 2893 "cplus.met"
                    }
#line 2893 "cplus.met"
                } else {
#line 2893 "cplus.met"
#line 2895 "cplus.met"
                    {
#line 2895 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2895 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 2895 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2895 "cplus.met"
                        expTree=_ptRes0;
#line 2895 "cplus.met"
                    }
#line 2895 "cplus.met"
                }
#line 2895 "cplus.met"
#line 2896 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2896 "cplus.met"
                if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2896 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"}")
#line 2896 "cplus.met"
                } else {
#line 2896 "cplus.met"
                    tokenAhead = 0 ;
#line 2896 "cplus.met"
                }
#line 2896 "cplus.met"
#line 2896 "cplus.met"
                break;
#line 2896 "cplus.met"
#line 2900 "cplus.met"
            case COUV : 
#line 2900 "cplus.met"
                tokenAhead = 0 ;
#line 2900 "cplus.met"
                CommTerm();
#line 2900 "cplus.met"
#line 2899 "cplus.met"
#line 2900 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 62, cplus)){
#line 2900 "cplus.met"
#line 2901 "cplus.met"
                    {
#line 2901 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2901 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2901 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2901 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2901 "cplus.met"
                        expTree=_ptRes0;
#line 2901 "cplus.met"
                    }
#line 2901 "cplus.met"
                } else {
#line 2901 "cplus.met"
#line 2903 "cplus.met"
                    {
#line 2903 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2903 "cplus.met"
                        _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2903 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2903 "cplus.met"
                        expTree=_ptRes0;
#line 2903 "cplus.met"
                    }
#line 2903 "cplus.met"
                }
#line 2903 "cplus.met"
#line 2904 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2904 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2904 "cplus.met"
                    MulFreeTree(2,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"]")
#line 2904 "cplus.met"
                } else {
#line 2904 "cplus.met"
                    tokenAhead = 0 ;
#line 2904 "cplus.met"
                }
#line 2904 "cplus.met"
#line 2904 "cplus.met"
                break;
#line 2904 "cplus.met"
#line 2906 "cplus.met"
            case META : 
#line 2906 "cplus.met"
            case POINT : 
#line 2906 "cplus.met"
                tokenAhead = 0 ;
#line 2906 "cplus.met"
                CommTerm();
#line 2906 "cplus.met"
#line 2906 "cplus.met"
                {
#line 2906 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2906 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 2906 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2906 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2906 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2906 "cplus.met"
                    }
#line 2906 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2906 "cplus.met"
                    expTree=_ptRes0;
#line 2906 "cplus.met"
                }
#line 2906 "cplus.met"
                break;
#line 2906 "cplus.met"
#line 2907 "cplus.met"
            case TIRESUPE : 
#line 2907 "cplus.met"
                tokenAhead = 0 ;
#line 2907 "cplus.met"
                CommTerm();
#line 2907 "cplus.met"
#line 2907 "cplus.met"
                {
#line 2907 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2907 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 2907 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2907 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2907 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2907 "cplus.met"
                    }
#line 2907 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2907 "cplus.met"
                    expTree=_ptRes0;
#line 2907 "cplus.met"
                }
#line 2907 "cplus.met"
                break;
#line 2907 "cplus.met"
#line 2908 "cplus.met"
            case PLUSPLUS : 
#line 2908 "cplus.met"
                tokenAhead = 0 ;
#line 2908 "cplus.met"
                CommTerm();
#line 2908 "cplus.met"
#line 2908 "cplus.met"
                {
#line 2908 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2908 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 2908 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2908 "cplus.met"
                    expTree=_ptRes0;
#line 2908 "cplus.met"
                }
#line 2908 "cplus.met"
                break;
#line 2908 "cplus.met"
#line 2909 "cplus.met"
            case TIRETIRE : 
#line 2909 "cplus.met"
                tokenAhead = 0 ;
#line 2909 "cplus.met"
                CommTerm();
#line 2909 "cplus.met"
#line 2909 "cplus.met"
                {
#line 2909 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2909 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 2909 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2909 "cplus.met"
                    expTree=_ptRes0;
#line 2909 "cplus.met"
                }
#line 2909 "cplus.met"
                break;
#line 2909 "cplus.met"
            default :
#line 2909 "cplus.met"
                MulFreeTree(2,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or { or [ or POINT or -> or ++ or --")
#line 2909 "cplus.met"
                break;
#line 2909 "cplus.met"
        }
#line 2909 "cplus.met"
    } 
#line 2909 "cplus.met"
#line 2911 "cplus.met"
    {
#line 2911 "cplus.met"
        _retValue = expTree ;
#line 2911 "cplus.met"
        goto postfix_expression_ret;
#line 2911 "cplus.met"
        
#line 2911 "cplus.met"
    }
#line 2911 "cplus.met"
#line 2911 "cplus.met"
#line 2911 "cplus.met"

#line 2912 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2912 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2912 "cplus.met"
return((PPTREE) 0);
#line 2912 "cplus.met"

#line 2912 "cplus.met"
postfix_expression_exit :
#line 2912 "cplus.met"

#line 2912 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 2912 "cplus.met"
    _funcLevel--;
#line 2912 "cplus.met"
    return((PPTREE) -1) ;
#line 2912 "cplus.met"

#line 2912 "cplus.met"
postfix_expression_ret :
#line 2912 "cplus.met"
    
#line 2912 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 2912 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2912 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2912 "cplus.met"
    return _retValue ;
#line 2912 "cplus.met"
}
#line 2912 "cplus.met"

#line 2912 "cplus.met"
#line 2927 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 2927 "cplus.met"
{
#line 2927 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2927 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2927 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2927 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 2927 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2927 "cplus.met"
#line 2927 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2927 "cplus.met"
#line 2929 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2929 "cplus.met"
    switch( lexEl.Value) {
#line 2929 "cplus.met"
#line 2932 "cplus.met"
        case POUV : 
#line 2932 "cplus.met"
            tokenAhead = 0 ;
#line 2932 "cplus.met"
            CommTerm();
#line 2932 "cplus.met"
#line 2931 "cplus.met"
#line 2932 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2932 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2932 "cplus.met"
            }
#line 2932 "cplus.met"
#line 2933 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2933 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2933 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2933 "cplus.met"
            } else {
#line 2933 "cplus.met"
                tokenAhead = 0 ;
#line 2933 "cplus.met"
            }
#line 2933 "cplus.met"
#line 2934 "cplus.met"
            {
#line 2934 "cplus.met"
                PPTREE _ptTree0=0;
#line 2934 "cplus.met"
                {
#line 2934 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2934 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 2934 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 2934 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2934 "cplus.met"
                }
#line 2934 "cplus.met"
                _retValue =_ptTree0;
#line 2934 "cplus.met"
                goto primary_expression_ret;
#line 2934 "cplus.met"
            }
#line 2934 "cplus.met"
#line 2934 "cplus.met"
            break;
#line 2934 "cplus.met"
#line 2936 "cplus.met"
        case OPERATOR : 
#line 2936 "cplus.met"
#line 2936 "cplus.met"
            {
#line 2936 "cplus.met"
                PPTREE _ptTree0=0;
#line 2936 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2936 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2936 "cplus.met"
                }
#line 2936 "cplus.met"
                _retValue =_ptTree0;
#line 2936 "cplus.met"
                goto primary_expression_ret;
#line 2936 "cplus.met"
            }
#line 2936 "cplus.met"
            break;
#line 2936 "cplus.met"
#line 2937 "cplus.met"
        case TILD : 
#line 2937 "cplus.met"
#line 2937 "cplus.met"
            {
#line 2937 "cplus.met"
                PPTREE _ptTree0=0;
#line 2937 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2937 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2937 "cplus.met"
                }
#line 2937 "cplus.met"
                _retValue =_ptTree0;
#line 2937 "cplus.met"
                goto primary_expression_ret;
#line 2937 "cplus.met"
            }
#line 2937 "cplus.met"
            break;
#line 2937 "cplus.met"
#line 2938 "cplus.met"
        case META : 
#line 2938 "cplus.met"
#line 2939 "cplus.met"
#line 2940 "cplus.met"
            {
#line 2940 "cplus.met"
                PPTREE _ptTree0=0;
#line 2940 "cplus.met"
                {
#line 2940 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2940 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 2940 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 2940 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 2940 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 2940 "cplus.met"
                    } else {
#line 2940 "cplus.met"
                        tokenAhead = 0 ;
#line 2940 "cplus.met"
                    }
#line 2940 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2940 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2940 "cplus.met"
                }
#line 2940 "cplus.met"
                _retValue =_ptTree0;
#line 2940 "cplus.met"
                goto primary_expression_ret;
#line 2940 "cplus.met"
            }
#line 2940 "cplus.met"
#line 2940 "cplus.met"
            break;
#line 2940 "cplus.met"
#line 2942 "cplus.met"
        case IDENT : 
#line 2942 "cplus.met"
#line 2943 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 2943 "cplus.met"
#line 2944 "cplus.met"
#line 2945 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2945 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2945 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 2945 "cplus.met"
                } else {
#line 2945 "cplus.met"
                    tokenAhead = 0 ;
#line 2945 "cplus.met"
                }
#line 2945 "cplus.met"
#line 2946 "cplus.met"
                {
#line 2946 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2946 "cplus.met"
                    {
#line 2946 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2946 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 2946 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 2946 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2946 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 2946 "cplus.met"
                        } else {
#line 2946 "cplus.met"
                            tokenAhead = 0 ;
#line 2946 "cplus.met"
                        }
#line 2946 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2946 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2946 "cplus.met"
                    }
#line 2946 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2946 "cplus.met"
                }
#line 2946 "cplus.met"
#line 2947 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2947 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2947 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 2947 "cplus.met"
                } else {
#line 2947 "cplus.met"
                    tokenAhead = 0 ;
#line 2947 "cplus.met"
                }
#line 2947 "cplus.met"
#line 2948 "cplus.met"
                {
#line 2948 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2948 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2948 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2948 "cplus.met"
                    }
#line 2948 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2948 "cplus.met"
                }
#line 2948 "cplus.met"
#line 2949 "cplus.met"
                {
#line 2949 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2949 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 2949 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 2949 "cplus.met"
                    expTree=_ptRes0;
#line 2949 "cplus.met"
                }
#line 2949 "cplus.met"
#line 2950 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2950 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2950 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 2950 "cplus.met"
                } else {
#line 2950 "cplus.met"
                    tokenAhead = 0 ;
#line 2950 "cplus.met"
                }
#line 2950 "cplus.met"
#line 2951 "cplus.met"
                {
#line 2951 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2951 "cplus.met"
                    {
#line 2951 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2951 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 2951 "cplus.met"
                        {
#line 2951 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2951 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 2951 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 2951 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2951 "cplus.met"
                        }
#line 2951 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2951 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 2951 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2951 "cplus.met"
                    }
#line 2951 "cplus.met"
                    _retValue =_ptTree0;
#line 2951 "cplus.met"
                    goto primary_expression_ret;
#line 2951 "cplus.met"
                }
#line 2951 "cplus.met"
#line 2951 "cplus.met"
#line 2951 "cplus.met"
            } else {
#line 2951 "cplus.met"
#line 2954 "cplus.met"
                {
#line 2954 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2954 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2954 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2954 "cplus.met"
                    }
#line 2954 "cplus.met"
                    _retValue =_ptTree0;
#line 2954 "cplus.met"
                    goto primary_expression_ret;
#line 2954 "cplus.met"
                }
#line 2954 "cplus.met"
            }
#line 2954 "cplus.met"
            break;
#line 2954 "cplus.met"
#line 2955 "cplus.met"
        case STRING : 
#line 2955 "cplus.met"
#line 2955 "cplus.met"
            {
#line 2955 "cplus.met"
                PPTREE _ptTree0=0;
#line 2955 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 2955 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2955 "cplus.met"
                }
#line 2955 "cplus.met"
                _retValue =_ptTree0;
#line 2955 "cplus.met"
                goto primary_expression_ret;
#line 2955 "cplus.met"
            }
#line 2955 "cplus.met"
            break;
#line 2955 "cplus.met"
#line 2956 "cplus.met"
        case VA_ARG : 
#line 2956 "cplus.met"
            tokenAhead = 0 ;
#line 2956 "cplus.met"
            CommTerm();
#line 2956 "cplus.met"
#line 2957 "cplus.met"
#line 2958 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2958 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2958 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 2958 "cplus.met"
            } else {
#line 2958 "cplus.met"
                tokenAhead = 0 ;
#line 2958 "cplus.met"
            }
#line 2958 "cplus.met"
#line 2959 "cplus.met"
            {
#line 2959 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2959 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 2959 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2959 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2959 "cplus.met"
                }
#line 2959 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2959 "cplus.met"
                expTree=_ptRes0;
#line 2959 "cplus.met"
            }
#line 2959 "cplus.met"
#line 2960 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2960 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2960 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 2961 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2961 "cplus.met"
                }
#line 2961 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 2961 "cplus.met"
            }
#line 2961 "cplus.met"
#line 2962 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2962 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2962 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
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
                _retValue = expTree ;
#line 2963 "cplus.met"
                goto primary_expression_ret;
#line 2963 "cplus.met"
                
#line 2963 "cplus.met"
            }
#line 2963 "cplus.met"
#line 2963 "cplus.met"
            break;
#line 2963 "cplus.met"
#line 2965 "cplus.met"
        default : 
#line 2965 "cplus.met"
#line 2965 "cplus.met"
            {
#line 2965 "cplus.met"
                PPTREE _ptTree0=0;
#line 2965 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2965 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2965 "cplus.met"
                }
#line 2965 "cplus.met"
                _retValue =_ptTree0;
#line 2965 "cplus.met"
                goto primary_expression_ret;
#line 2965 "cplus.met"
            }
#line 2965 "cplus.met"
            break;
#line 2965 "cplus.met"
    }
#line 2965 "cplus.met"
#line 2965 "cplus.met"
#line 2966 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2966 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2966 "cplus.met"
return((PPTREE) 0);
#line 2966 "cplus.met"

#line 2966 "cplus.met"
primary_expression_exit :
#line 2966 "cplus.met"

#line 2966 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 2966 "cplus.met"
    _funcLevel--;
#line 2966 "cplus.met"
    return((PPTREE) -1) ;
#line 2966 "cplus.met"

#line 2966 "cplus.met"
primary_expression_ret :
#line 2966 "cplus.met"
    
#line 2966 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 2966 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2966 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2966 "cplus.met"
    return _retValue ;
#line 2966 "cplus.met"
}
#line 2966 "cplus.met"

#line 2966 "cplus.met"
#line 754 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 754 "cplus.met"
{
#line 754 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 754 "cplus.met"
    int _value,_nbPre = 0 ;
#line 754 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 754 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 754 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 754 "cplus.met"
#line 754 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 754 "cplus.met"
#line 754 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 754 "cplus.met"
#line 756 "cplus.met"
     debut : 
#line 756 "cplus.met"
#line 756 "cplus.met"
    _addlist1 = list ;
#line 756 "cplus.met"
#line 757 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 64, cplus)) { 
#line 757 "cplus.met"
#line 758 "cplus.met"
#line 758 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 758 "cplus.met"
#line 758 "cplus.met"
        if (list){
#line 758 "cplus.met"
#line 758 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 758 "cplus.met"
        } else {
#line 758 "cplus.met"
#line 758 "cplus.met"
            list = _addlist1 ;
#line 758 "cplus.met"
        }
#line 758 "cplus.met"
    } 
#line 758 "cplus.met"
#line 759 "cplus.met"
    {
#line 759 "cplus.met"
        PPTREE _ptTree0=0;
#line 759 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 759 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 759 "cplus.met"
        }
#line 759 "cplus.met"
        list =AddList(list , _ptTree0);
#line 759 "cplus.met"
    }
#line 759 "cplus.met"
#line 760 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 26, cplus)){
#line 760 "cplus.met"
#line 760 "cplus.met"
    }
#line 760 "cplus.met"
#line 762 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 762 "cplus.met"
#line 763 "cplus.met"
#line 765 "cplus.met"
        dumperror ();
#line 765 "cplus.met"
#line 767 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 767 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 767 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 767 "cplus.met"
        } else {
#line 767 "cplus.met"
            tokenAhead = 0 ;
#line 767 "cplus.met"
        }
#line 767 "cplus.met"
#line 768 "cplus.met"
         hasGotError = 1 ;
#line 768 "cplus.met"
#line 769 "cplus.met"
         goto debut ;
#line 769 "cplus.met"
#line 769 "cplus.met"
#line 769 "cplus.met"
    }
#line 769 "cplus.met"
#line 771 "cplus.met"
    if ( hasGotError && ! _inhibit_exit_on_error  ){
#line 771 "cplus.met"
#line 772 "cplus.met"
         exit (-1);
#line 772 "cplus.met"
    }
#line 772 "cplus.met"
#line 773 "cplus.met"
    {
#line 773 "cplus.met"
        PPTREE _ptTree0=0;
#line 773 "cplus.met"
        {
#line 773 "cplus.met"
            PPTREE _ptRes1=0;
#line 773 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 773 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 773 "cplus.met"
            _ptTree0=_ptRes1;
#line 773 "cplus.met"
        }
#line 773 "cplus.met"
        _retValue =_ptTree0;
#line 773 "cplus.met"
        goto program_ret;
#line 773 "cplus.met"
    }
#line 773 "cplus.met"
#line 773 "cplus.met"
#line 773 "cplus.met"

#line 774 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 774 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 774 "cplus.met"
return((PPTREE) 0);
#line 774 "cplus.met"

#line 774 "cplus.met"
program_exit :
#line 774 "cplus.met"

#line 774 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 774 "cplus.met"
    _funcLevel--;
#line 774 "cplus.met"
    return((PPTREE) -1) ;
#line 774 "cplus.met"

#line 774 "cplus.met"
program_ret :
#line 774 "cplus.met"
    
#line 774 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 774 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 774 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 774 "cplus.met"
    return _retValue ;
#line 774 "cplus.met"
}
#line 774 "cplus.met"

#line 774 "cplus.met"
#line 1833 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1833 "cplus.met"
{
#line 1833 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1833 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1833 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1833 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1833 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1833 "cplus.met"
#line 1833 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1833 "cplus.met"
#line 1833 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1833 "cplus.met"
#line 1835 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1835 "cplus.met"
    switch( lexEl.Value) {
#line 1835 "cplus.met"
#line 1836 "cplus.met"
        case PUBLIC : 
#line 1836 "cplus.met"
            tokenAhead = 0 ;
#line 1836 "cplus.met"
            CommTerm();
#line 1836 "cplus.met"
#line 1836 "cplus.met"
            {
#line 1836 "cplus.met"
                PPTREE _ptRes0=0;
#line 1836 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1836 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1836 "cplus.met"
                retTree=_ptRes0;
#line 1836 "cplus.met"
            }
#line 1836 "cplus.met"
            break;
#line 1836 "cplus.met"
#line 1837 "cplus.met"
        case PROTECTED : 
#line 1837 "cplus.met"
            tokenAhead = 0 ;
#line 1837 "cplus.met"
            CommTerm();
#line 1837 "cplus.met"
#line 1837 "cplus.met"
            {
#line 1837 "cplus.met"
                PPTREE _ptRes0=0;
#line 1837 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1837 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1837 "cplus.met"
                retTree=_ptRes0;
#line 1837 "cplus.met"
            }
#line 1837 "cplus.met"
            break;
#line 1837 "cplus.met"
#line 1838 "cplus.met"
        case PRIVATE : 
#line 1838 "cplus.met"
            tokenAhead = 0 ;
#line 1838 "cplus.met"
            CommTerm();
#line 1838 "cplus.met"
#line 1838 "cplus.met"
            {
#line 1838 "cplus.met"
                PPTREE _ptRes0=0;
#line 1838 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1838 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1838 "cplus.met"
                retTree=_ptRes0;
#line 1838 "cplus.met"
            }
#line 1838 "cplus.met"
            break;
#line 1838 "cplus.met"
        default :
#line 1838 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1838 "cplus.met"
            break;
#line 1838 "cplus.met"
    }
#line 1838 "cplus.met"
#line 1840 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1840 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1840 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1840 "cplus.met"
    } else {
#line 1840 "cplus.met"
        tokenAhead = 0 ;
#line 1840 "cplus.met"
    }
#line 1840 "cplus.met"
#line 1840 "cplus.met"
    _addlist1 = list ;
#line 1840 "cplus.met"
#line 1841 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 83, cplus)) { 
#line 1841 "cplus.met"
#line 1842 "cplus.met"
#line 1842 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1842 "cplus.met"
#line 1842 "cplus.met"
        if (list){
#line 1842 "cplus.met"
#line 1842 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1842 "cplus.met"
        } else {
#line 1842 "cplus.met"
#line 1842 "cplus.met"
            list = _addlist1 ;
#line 1842 "cplus.met"
        }
#line 1842 "cplus.met"
    } 
#line 1842 "cplus.met"
#line 1843 "cplus.met"
    {
#line 1843 "cplus.met"
        PPTREE _ptTree0=0;
#line 1843 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1843 "cplus.met"
        _retValue =_ptTree0;
#line 1843 "cplus.met"
        goto protect_declare_ret;
#line 1843 "cplus.met"
    }
#line 1843 "cplus.met"
#line 1843 "cplus.met"
#line 1843 "cplus.met"

#line 1844 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1844 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1844 "cplus.met"
return((PPTREE) 0);
#line 1844 "cplus.met"

#line 1844 "cplus.met"
protect_declare_exit :
#line 1844 "cplus.met"

#line 1844 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1844 "cplus.met"
    _funcLevel--;
#line 1844 "cplus.met"
    return((PPTREE) -1) ;
#line 1844 "cplus.met"

#line 1844 "cplus.met"
protect_declare_ret :
#line 1844 "cplus.met"
    
#line 1844 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1844 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1844 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1844 "cplus.met"
    return _retValue ;
#line 1844 "cplus.met"
}
#line 1844 "cplus.met"

#line 1844 "cplus.met"
#line 2161 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2161 "cplus.met"
{
#line 2161 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2161 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2161 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2161 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2161 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2161 "cplus.met"
#line 2161 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2161 "cplus.met"
#line 2163 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2163 "cplus.met"
    switch( lexEl.Value) {
#line 2163 "cplus.met"
#line 2166 "cplus.met"
        case ETOI : 
#line 2166 "cplus.met"
            tokenAhead = 0 ;
#line 2166 "cplus.met"
            CommTerm();
#line 2166 "cplus.met"
#line 2165 "cplus.met"
#line 2166 "cplus.met"
            {
#line 2166 "cplus.met"
                PPTREE _ptRes0=0;
#line 2166 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2166 "cplus.met"
                retTree=_ptRes0;
#line 2166 "cplus.met"
            }
#line 2166 "cplus.met"
#line 2167 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 30, cplus)){
#line 2167 "cplus.met"
#line 2168 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2168 "cplus.met"
#line 2168 "cplus.met"
            }
#line 2168 "cplus.met"
#line 2169 "cplus.met"
            {
#line 2169 "cplus.met"
                _retValue = retTree ;
#line 2169 "cplus.met"
                goto ptr_operator_ret;
#line 2169 "cplus.met"
                
#line 2169 "cplus.met"
            }
#line 2169 "cplus.met"
#line 2169 "cplus.met"
            break;
#line 2169 "cplus.met"
#line 2173 "cplus.met"
        case ETCO : 
#line 2173 "cplus.met"
            tokenAhead = 0 ;
#line 2173 "cplus.met"
            CommTerm();
#line 2173 "cplus.met"
#line 2172 "cplus.met"
#line 2173 "cplus.met"
            {
#line 2173 "cplus.met"
                PPTREE _ptRes0=0;
#line 2173 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2173 "cplus.met"
                retTree=_ptRes0;
#line 2173 "cplus.met"
            }
#line 2173 "cplus.met"
#line 2174 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 30, cplus)){
#line 2174 "cplus.met"
#line 2175 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2175 "cplus.met"
#line 2175 "cplus.met"
            }
#line 2175 "cplus.met"
#line 2176 "cplus.met"
            {
#line 2176 "cplus.met"
                _retValue = retTree ;
#line 2176 "cplus.met"
                goto ptr_operator_ret;
#line 2176 "cplus.met"
                
#line 2176 "cplus.met"
            }
#line 2176 "cplus.met"
#line 2176 "cplus.met"
            break;
#line 2176 "cplus.met"
#line 2180 "cplus.met"
        case DPOIDPOI : 
#line 2180 "cplus.met"
#line 2179 "cplus.met"
#line 2180 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2180 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2180 "cplus.met"
            }
#line 2180 "cplus.met"
#line 2180 "cplus.met"
            break;
#line 2180 "cplus.met"
#line 2182 "cplus.met"
        case META : 
#line 2182 "cplus.met"
        case IDENT : 
#line 2182 "cplus.met"
#line 2183 "cplus.met"
#line 2184 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2184 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2184 "cplus.met"
            }
#line 2184 "cplus.met"
#line 2184 "cplus.met"
            break;
#line 2184 "cplus.met"
        default :
#line 2184 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2184 "cplus.met"
            break;
#line 2184 "cplus.met"
    }
#line 2184 "cplus.met"
#line 2187 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 30, cplus)){
#line 2187 "cplus.met"
#line 2188 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2188 "cplus.met"
#line 2188 "cplus.met"
    }
#line 2188 "cplus.met"
#line 2189 "cplus.met"
    {
#line 2189 "cplus.met"
        _retValue = retour ;
#line 2189 "cplus.met"
        goto ptr_operator_ret;
#line 2189 "cplus.met"
        
#line 2189 "cplus.met"
    }
#line 2189 "cplus.met"
#line 2189 "cplus.met"
#line 2189 "cplus.met"

#line 2190 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2190 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2190 "cplus.met"
return((PPTREE) 0);
#line 2190 "cplus.met"

#line 2190 "cplus.met"
ptr_operator_exit :
#line 2190 "cplus.met"

#line 2190 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2190 "cplus.met"
    _funcLevel--;
#line 2190 "cplus.met"
    return((PPTREE) -1) ;
#line 2190 "cplus.met"

#line 2190 "cplus.met"
ptr_operator_ret :
#line 2190 "cplus.met"
    
#line 2190 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2190 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2190 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2190 "cplus.met"
    return _retValue ;
#line 2190 "cplus.met"
}
#line 2190 "cplus.met"

#line 2190 "cplus.met"
#line 1773 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1773 "cplus.met"
{
#line 1773 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1773 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1773 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1773 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1773 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1773 "cplus.met"
#line 1773 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1773 "cplus.met"
#line 1775 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1775 "cplus.met"
#line 1776 "cplus.met"
        {
#line 1776 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1776 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1776 "cplus.met"
            {
#line 1776 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1776 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1776 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1776 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1776 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1776 "cplus.met"
                } else {
#line 1776 "cplus.met"
                    tokenAhead = 0 ;
#line 1776 "cplus.met"
                }
#line 1776 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1776 "cplus.met"
                _ptTree0=_ptRes1;
#line 1776 "cplus.met"
            }
#line 1776 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1776 "cplus.met"
            retTree=_ptRes0;
#line 1776 "cplus.met"
        }
#line 1776 "cplus.met"
    } else {
#line 1776 "cplus.met"
#line 1778 "cplus.met"
        {
#line 1778 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1778 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1778 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1778 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1778 "cplus.met"
                MulFreeTree(6,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1778 "cplus.met"
            } else {
#line 1778 "cplus.met"
                tokenAhead = 0 ;
#line 1778 "cplus.met"
            }
#line 1778 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1778 "cplus.met"
            retTree=_ptRes0;
#line 1778 "cplus.met"
        }
#line 1778 "cplus.met"
    }
#line 1778 "cplus.met"
#line 1779 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1779 "cplus.met"
#line 1780 "cplus.met"
#line 1781 "cplus.met"
        {
#line 1781 "cplus.met"
            PPTREE _ptRes0=0;
#line 1781 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1781 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1781 "cplus.met"
            retTree=_ptRes0;
#line 1781 "cplus.met"
        }
#line 1781 "cplus.met"
#line 1782 "cplus.met"
        inter = retTree ;
#line 1782 "cplus.met"
#line 1783 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1783 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 117, cplus))) { 
#line 1783 "cplus.met"
#line 1784 "cplus.met"
#line 1785 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1785 "cplus.met"
#line 1786 "cplus.met"
                {
#line 1786 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1786 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1786 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1786 "cplus.met"
                    val=_ptRes0;
#line 1786 "cplus.met"
                }
#line 1786 "cplus.met"
            }
#line 1786 "cplus.met"
#line 1787 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1787 "cplus.met"
#line 1788 "cplus.met"
            inter = val ;
#line 1788 "cplus.met"
#line 1788 "cplus.met"
        } 
#line 1788 "cplus.met"
#line 1788 "cplus.met"
#line 1789 "cplus.met"
    }
#line 1789 "cplus.met"
#line 1791 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 143, cplus)){
#line 1791 "cplus.met"
#line 1792 "cplus.met"
#line 1793 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1793 "cplus.met"
#line 1794 "cplus.met"
        retTree = templateVal ;
#line 1794 "cplus.met"
#line 1795 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1795 "cplus.met"
#line 1796 "cplus.met"
            {
#line 1796 "cplus.met"
                PPTREE _ptTree0=0;
#line 1796 "cplus.met"
                {
#line 1796 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1796 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1796 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1796 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 1796 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1796 "cplus.met"
                    }
#line 1796 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1796 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1796 "cplus.met"
                }
#line 1796 "cplus.met"
                _retValue =_ptTree0;
#line 1796 "cplus.met"
                goto qualified_name_ret;
#line 1796 "cplus.met"
            }
#line 1796 "cplus.met"
        } else {
#line 1796 "cplus.met"
#line 1798 "cplus.met"
            {
#line 1798 "cplus.met"
                _retValue = retTree ;
#line 1798 "cplus.met"
                goto qualified_name_ret;
#line 1798 "cplus.met"
                
#line 1798 "cplus.met"
            }
#line 1798 "cplus.met"
        }
#line 1798 "cplus.met"
#line 1798 "cplus.met"
#line 1798 "cplus.met"
    }
#line 1798 "cplus.met"
#line 1800 "cplus.met"
    {
#line 1800 "cplus.met"
        _retValue = retTree ;
#line 1800 "cplus.met"
        goto qualified_name_ret;
#line 1800 "cplus.met"
        
#line 1800 "cplus.met"
    }
#line 1800 "cplus.met"
#line 1800 "cplus.met"
#line 1800 "cplus.met"

#line 1801 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1801 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1801 "cplus.met"
return((PPTREE) 0);
#line 1801 "cplus.met"

#line 1801 "cplus.met"
qualified_name_exit :
#line 1801 "cplus.met"

#line 1801 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1801 "cplus.met"
    _funcLevel--;
#line 1801 "cplus.met"
    return((PPTREE) -1) ;
#line 1801 "cplus.met"

#line 1801 "cplus.met"
qualified_name_ret :
#line 1801 "cplus.met"
    
#line 1801 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1801 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1801 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1801 "cplus.met"
    return _retValue ;
#line 1801 "cplus.met"
}
#line 1801 "cplus.met"

#line 1801 "cplus.met"
#line 1751 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1751 "cplus.met"
{
#line 1751 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1751 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1751 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1751 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1751 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1751 "cplus.met"
#line 1752 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1752 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1752 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1752 "cplus.met"
    } else {
#line 1752 "cplus.met"
        tokenAhead = 0 ;
#line 1752 "cplus.met"
    }
#line 1752 "cplus.met"
#line 1753 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1753 "cplus.met"
    switch( lexEl.Value) {
#line 1753 "cplus.met"
#line 1754 "cplus.met"
        case TILD : 
#line 1754 "cplus.met"
            tokenAhead = 0 ;
#line 1754 "cplus.met"
            CommTerm();
#line 1754 "cplus.met"
#line 1754 "cplus.met"
            {
#line 1754 "cplus.met"
                PPTREE _ptTree0=0;
#line 1754 "cplus.met"
                {
#line 1754 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1754 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1754 "cplus.met"
                    {
#line 1754 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1754 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1754 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1754 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1754 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1754 "cplus.met"
                        } else {
#line 1754 "cplus.met"
                            tokenAhead = 0 ;
#line 1754 "cplus.met"
                        }
#line 1754 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1754 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1754 "cplus.met"
                    }
#line 1754 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1754 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1754 "cplus.met"
                }
#line 1754 "cplus.met"
                _retValue =_ptTree0;
#line 1754 "cplus.met"
                goto qualified_name_elem_ret;
#line 1754 "cplus.met"
            }
#line 1754 "cplus.met"
            break;
#line 1754 "cplus.met"
#line 1755 "cplus.met"
        case META : 
#line 1755 "cplus.met"
        case IDENT : 
#line 1755 "cplus.met"
#line 1755 "cplus.met"
            {
#line 1755 "cplus.met"
                PPTREE _ptTree0=0;
#line 1755 "cplus.met"
                {
#line 1755 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1755 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1755 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1755 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1755 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1755 "cplus.met"
                    } else {
#line 1755 "cplus.met"
                        tokenAhead = 0 ;
#line 1755 "cplus.met"
                    }
#line 1755 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1755 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1755 "cplus.met"
                }
#line 1755 "cplus.met"
                _retValue =_ptTree0;
#line 1755 "cplus.met"
                goto qualified_name_elem_ret;
#line 1755 "cplus.met"
            }
#line 1755 "cplus.met"
            break;
#line 1755 "cplus.met"
#line 1756 "cplus.met"
        case OPERATOR : 
#line 1756 "cplus.met"
#line 1756 "cplus.met"
            {
#line 1756 "cplus.met"
                PPTREE _ptTree0=0;
#line 1756 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1756 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1756 "cplus.met"
                }
#line 1756 "cplus.met"
                _retValue =_ptTree0;
#line 1756 "cplus.met"
                goto qualified_name_elem_ret;
#line 1756 "cplus.met"
            }
#line 1756 "cplus.met"
            break;
#line 1756 "cplus.met"
        default :
#line 1756 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1756 "cplus.met"
            break;
#line 1756 "cplus.met"
    }
#line 1756 "cplus.met"
#line 1756 "cplus.met"
#line 1757 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1757 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1757 "cplus.met"
return((PPTREE) 0);
#line 1757 "cplus.met"

#line 1757 "cplus.met"
qualified_name_elem_exit :
#line 1757 "cplus.met"

#line 1757 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1757 "cplus.met"
    _funcLevel--;
#line 1757 "cplus.met"
    return((PPTREE) -1) ;
#line 1757 "cplus.met"

#line 1757 "cplus.met"
qualified_name_elem_ret :
#line 1757 "cplus.met"
    
#line 1757 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1757 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1757 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1757 "cplus.met"
    return _retValue ;
#line 1757 "cplus.met"
}
#line 1757 "cplus.met"

#line 1757 "cplus.met"
#line 787 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 787 "cplus.met"
{
#line 787 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 787 "cplus.met"
    int _value,_nbPre = 0 ;
#line 787 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 787 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 787 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 787 "cplus.met"
#line 787 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 787 "cplus.met"
#line 789 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 119, cplus)) && 
#line 789 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 789 "cplus.met"
#line 790 "cplus.met"
#line 791 "cplus.met"
        FreeTree (valTree );
#line 791 "cplus.met"
#line 792 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 792 "cplus.met"
#line 792 "cplus.met"
    } 
#line 792 "cplus.met"
#line 794 "cplus.met"
    ExtUnputBuf();
#line 794 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 794 "cplus.met"
        NextChar() ;
#line 794 "cplus.met"
    ptStockBuf = -1;
#line 794 "cplus.met"
    lexEl.Erase();
#line 794 "cplus.met"
    tokenAhead = 0;
#line 794 "cplus.met"
    oldLine=line,oldCol=col;
#line 794 "cplus.met"
    if ( !lexCallLex) {
#line 794 "cplus.met"
        PUT_COORD_CALL;
#line 794 "cplus.met"
    }
#line 794 "cplus.met"
#line 795 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 795 "cplus.met"
#line 796 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 796 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 796 "cplus.met"
        }
#line 796 "cplus.met"
    }
#line 796 "cplus.met"
#line 797 "cplus.met"
    {
#line 797 "cplus.met"
        _retValue = list ;
#line 797 "cplus.met"
        goto quick_prog_ret;
#line 797 "cplus.met"
        
#line 797 "cplus.met"
    }
#line 797 "cplus.met"
#line 797 "cplus.met"
#line 797 "cplus.met"

#line 798 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 798 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 798 "cplus.met"
return((PPTREE) 0);
#line 798 "cplus.met"

#line 798 "cplus.met"
quick_prog_exit :
#line 798 "cplus.met"

#line 798 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 798 "cplus.met"
    _funcLevel--;
#line 798 "cplus.met"
    return((PPTREE) -1) ;
#line 798 "cplus.met"

#line 798 "cplus.met"
quick_prog_ret :
#line 798 "cplus.met"
    
#line 798 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 798 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 798 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 798 "cplus.met"
    return _retValue ;
#line 798 "cplus.met"
}
#line 798 "cplus.met"

#line 798 "cplus.met"
#line 820 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 820 "cplus.met"
{
#line 820 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 820 "cplus.met"
    int _value,_nbPre = 0 ;
#line 820 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 820 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 820 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 820 "cplus.met"
#line 820 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 820 "cplus.met"
#line 822 "cplus.met"
     debut :
#line 822 "cplus.met"
#line 823 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 823 "cplus.met"
    switch( lexEl.Value) {
#line 823 "cplus.met"
#line 824 "cplus.met"
        case META : 
#line 824 "cplus.met"
        case INCLUDE_DIR : 
#line 824 "cplus.met"
#line 824 "cplus.met"
            {
#line 824 "cplus.met"
                PPTREE _ptTree0=0;
#line 824 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 824 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 824 "cplus.met"
                }
#line 824 "cplus.met"
                _retValue =_ptTree0;
#line 824 "cplus.met"
                goto quick_prog_elem_ret;
#line 824 "cplus.met"
            }
#line 824 "cplus.met"
            break;
#line 824 "cplus.met"
#line 825 "cplus.met"
        case PRAGMA_DIR : 
#line 825 "cplus.met"
            tokenAhead = 0 ;
#line 825 "cplus.met"
            CommTerm();
#line 825 "cplus.met"
#line 826 "cplus.met"
#line 827 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 124, cplus)){
#line 827 "cplus.met"
#line 827 "cplus.met"
            }
#line 827 "cplus.met"
#line 829 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 829 "cplus.met"
            switch( lexEl.Value) {
#line 829 "cplus.met"
#line 830 "cplus.met"
                case META : 
#line 830 "cplus.met"
                case PRAGMA_CONFIG : 
#line 830 "cplus.met"
                    tokenAhead = 0 ;
#line 830 "cplus.met"
                    CommTerm();
#line 830 "cplus.met"
#line 831 "cplus.met"
#line 832 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 832 "cplus.met"
                    switch( lexEl.Value) {
#line 832 "cplus.met"
#line 833 "cplus.met"
                        case META : 
#line 833 "cplus.met"
                        case PRAGMA_TAB : 
#line 833 "cplus.met"
                            tokenAhead = 0 ;
#line 833 "cplus.met"
                            CommTerm();
#line 833 "cplus.met"
#line 834 "cplus.met"
#line 835 "cplus.met"
                            {
#line 835 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 835 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 835 "cplus.met"
                                {
#line 835 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 835 "cplus.met"
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 835 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 835 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 835 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 835 "cplus.met"
                                    } else {
#line 835 "cplus.met"
                                        tokenAhead = 0 ;
#line 835 "cplus.met"
                                    }
#line 835 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 835 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 835 "cplus.met"
                                }
#line 835 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 835 "cplus.met"
                                retTree=_ptRes0;
#line 835 "cplus.met"
                            }
#line 835 "cplus.met"
#line 836 "cplus.met"
                            AnalyzeTab (retTree );
#line 836 "cplus.met"
#line 837 "cplus.met"
                            {
#line 837 "cplus.met"
                                _retValue = retTree ;
#line 837 "cplus.met"
                                goto quick_prog_elem_ret;
#line 837 "cplus.met"
                                
#line 837 "cplus.met"
                            }
#line 837 "cplus.met"
#line 837 "cplus.met"
                            break;
#line 837 "cplus.met"
#line 839 "cplus.met"
                        case PRAGMA_MODE : 
#line 839 "cplus.met"
                            tokenAhead = 0 ;
#line 839 "cplus.met"
                            CommTerm();
#line 839 "cplus.met"
#line 840 "cplus.met"
#line 841 "cplus.met"
                            {
#line 841 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 841 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 841 "cplus.met"
                                {
#line 841 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 841 "cplus.met"
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
#line 841 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 841 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 841 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 841 "cplus.met"
                                    } else {
#line 841 "cplus.met"
                                        tokenAhead = 0 ;
#line 841 "cplus.met"
                                    }
#line 841 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 841 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 841 "cplus.met"
                                }
#line 841 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 841 "cplus.met"
                                retTree=_ptRes0;
#line 841 "cplus.met"
                            }
#line 841 "cplus.met"
#line 842 "cplus.met"
                            AnalyzeMode (retTree );
#line 842 "cplus.met"
#line 843 "cplus.met"
                            {
#line 843 "cplus.met"
                                _retValue = retTree ;
#line 843 "cplus.met"
                                goto quick_prog_elem_ret;
#line 843 "cplus.met"
                                
#line 843 "cplus.met"
                            }
#line 843 "cplus.met"
#line 843 "cplus.met"
                            break;
#line 843 "cplus.met"
#line 845 "cplus.met"
                        case PRAGMA_ENUM_VERT : 
#line 845 "cplus.met"
                            tokenAhead = 0 ;
#line 845 "cplus.met"
                            CommTerm();
#line 845 "cplus.met"
#line 846 "cplus.met"
#line 847 "cplus.met"
                            {
#line 847 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 847 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 847 "cplus.met"
                                {
#line 847 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 847 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
#line 847 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 847 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 847 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 847 "cplus.met"
                                    } else {
#line 847 "cplus.met"
                                        tokenAhead = 0 ;
#line 847 "cplus.met"
                                    }
#line 847 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 847 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 847 "cplus.met"
                                }
#line 847 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 847 "cplus.met"
                                retTree=_ptRes0;
#line 847 "cplus.met"
                            }
#line 847 "cplus.met"
#line 848 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 848 "cplus.met"
#line 849 "cplus.met"
                            {
#line 849 "cplus.met"
                                _retValue = retTree ;
#line 849 "cplus.met"
                                goto quick_prog_elem_ret;
#line 849 "cplus.met"
                                
#line 849 "cplus.met"
                            }
#line 849 "cplus.met"
#line 849 "cplus.met"
                            break;
#line 849 "cplus.met"
#line 851 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 851 "cplus.met"
                            tokenAhead = 0 ;
#line 851 "cplus.met"
                            CommTerm();
#line 851 "cplus.met"
#line 852 "cplus.met"
#line 853 "cplus.met"
                            {
#line 853 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 853 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 853 "cplus.met"
                                {
#line 853 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 853 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 853 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 853 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 853 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 853 "cplus.met"
                                    } else {
#line 853 "cplus.met"
                                        tokenAhead = 0 ;
#line 853 "cplus.met"
                                    }
#line 853 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 853 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 853 "cplus.met"
                                }
#line 853 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 853 "cplus.met"
                                retTree=_ptRes0;
#line 853 "cplus.met"
                            }
#line 853 "cplus.met"
#line 854 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
#line 854 "cplus.met"
#line 855 "cplus.met"
                            {
#line 855 "cplus.met"
                                _retValue = retTree ;
#line 855 "cplus.met"
                                goto quick_prog_elem_ret;
#line 855 "cplus.met"
                                
#line 855 "cplus.met"
                            }
#line 855 "cplus.met"
#line 855 "cplus.met"
                            break;
#line 855 "cplus.met"
#line 857 "cplus.met"
                        case PRAGMA_TAB_DIRECTIVE : 
#line 857 "cplus.met"
                            tokenAhead = 0 ;
#line 857 "cplus.met"
                            CommTerm();
#line 857 "cplus.met"
#line 858 "cplus.met"
#line 859 "cplus.met"
                            {
#line 859 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 859 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 859 "cplus.met"
                                {
#line 859 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 859 "cplus.met"
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
#line 859 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 859 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 859 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 859 "cplus.met"
                                    } else {
#line 859 "cplus.met"
                                        tokenAhead = 0 ;
#line 859 "cplus.met"
                                    }
#line 859 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 859 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 859 "cplus.met"
                                }
#line 859 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 859 "cplus.met"
                                retTree=_ptRes0;
#line 859 "cplus.met"
                            }
#line 859 "cplus.met"
#line 860 "cplus.met"
                            AnalyzeTabDirective (retTree );
#line 860 "cplus.met"
#line 861 "cplus.met"
                            {
#line 861 "cplus.met"
                                _retValue = retTree ;
#line 861 "cplus.met"
                                goto quick_prog_elem_ret;
#line 861 "cplus.met"
                                
#line 861 "cplus.met"
                            }
#line 861 "cplus.met"
#line 861 "cplus.met"
                            break;
#line 861 "cplus.met"
#line 863 "cplus.met"
                        case PRAGMA_SPACE_ARROW : 
#line 863 "cplus.met"
                            tokenAhead = 0 ;
#line 863 "cplus.met"
                            CommTerm();
#line 863 "cplus.met"
#line 864 "cplus.met"
#line 865 "cplus.met"
                            {
#line 865 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 865 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 865 "cplus.met"
                                {
#line 865 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 865 "cplus.met"
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
#line 865 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 865 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 865 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 865 "cplus.met"
                                    } else {
#line 865 "cplus.met"
                                        tokenAhead = 0 ;
#line 865 "cplus.met"
                                    }
#line 865 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 865 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 865 "cplus.met"
                                }
#line 865 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 865 "cplus.met"
                                retTree=_ptRes0;
#line 865 "cplus.met"
                            }
#line 865 "cplus.met"
#line 866 "cplus.met"
                            AnalyzeSpaceArrow (retTree );
#line 866 "cplus.met"
#line 867 "cplus.met"
                            {
#line 867 "cplus.met"
                                _retValue = retTree ;
#line 867 "cplus.met"
                                goto quick_prog_elem_ret;
#line 867 "cplus.met"
                                
#line 867 "cplus.met"
                            }
#line 867 "cplus.met"
#line 867 "cplus.met"
                            break;
#line 867 "cplus.met"
#line 869 "cplus.met"
                        case PRAGMA_BRACE_ALIGN : 
#line 869 "cplus.met"
                            tokenAhead = 0 ;
#line 869 "cplus.met"
                            CommTerm();
#line 869 "cplus.met"
#line 870 "cplus.met"
#line 871 "cplus.met"
                            {
#line 871 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 871 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 871 "cplus.met"
                                {
#line 871 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 871 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 871 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 871 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 871 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 871 "cplus.met"
                                    } else {
#line 871 "cplus.met"
                                        tokenAhead = 0 ;
#line 871 "cplus.met"
                                    }
#line 871 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 871 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 871 "cplus.met"
                                }
#line 871 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 871 "cplus.met"
                                retTree=_ptRes0;
#line 871 "cplus.met"
                            }
#line 871 "cplus.met"
#line 872 "cplus.met"
                            AnalyzeBraceAlign (retTree );
#line 872 "cplus.met"
#line 873 "cplus.met"
                            {
#line 873 "cplus.met"
                                _retValue = retTree ;
#line 873 "cplus.met"
                                goto quick_prog_elem_ret;
#line 873 "cplus.met"
                                
#line 873 "cplus.met"
                            }
#line 873 "cplus.met"
#line 873 "cplus.met"
                            break;
#line 873 "cplus.met"
#line 875 "cplus.met"
                        case PRAGMA_SIMPLIFY : 
#line 875 "cplus.met"
                            tokenAhead = 0 ;
#line 875 "cplus.met"
                            CommTerm();
#line 875 "cplus.met"
#line 876 "cplus.met"
#line 877 "cplus.met"
                            {
#line 877 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 877 "cplus.met"
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 877 "cplus.met"
                                {
#line 877 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 877 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 877 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 877 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 877 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 877 "cplus.met"
                                    } else {
#line 877 "cplus.met"
                                        tokenAhead = 0 ;
#line 877 "cplus.met"
                                    }
#line 877 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 877 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 877 "cplus.met"
                                }
#line 877 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 877 "cplus.met"
                                retTree=_ptRes0;
#line 877 "cplus.met"
                            }
#line 877 "cplus.met"
#line 878 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 878 "cplus.met"
#line 879 "cplus.met"
                            {
#line 879 "cplus.met"
                                _retValue = retTree ;
#line 879 "cplus.met"
                                goto quick_prog_elem_ret;
#line 879 "cplus.met"
                                
#line 879 "cplus.met"
                            }
#line 879 "cplus.met"
#line 879 "cplus.met"
                            break;
#line 879 "cplus.met"
#line 881 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 881 "cplus.met"
                            tokenAhead = 0 ;
#line 881 "cplus.met"
                            CommTerm();
#line 881 "cplus.met"
#line 882 "cplus.met"
#line 883 "cplus.met"
                            {
#line 883 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 883 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 883 "cplus.met"
                                {
#line 883 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 883 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 883 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 883 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 883 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 883 "cplus.met"
                                    } else {
#line 883 "cplus.met"
                                        tokenAhead = 0 ;
#line 883 "cplus.met"
                                    }
#line 883 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 883 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 883 "cplus.met"
                                }
#line 883 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 883 "cplus.met"
                                retTree=_ptRes0;
#line 883 "cplus.met"
                            }
#line 883 "cplus.met"
#line 884 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
#line 884 "cplus.met"
#line 885 "cplus.met"
                            {
#line 885 "cplus.met"
                                _retValue = retTree ;
#line 885 "cplus.met"
                                goto quick_prog_elem_ret;
#line 885 "cplus.met"
                                
#line 885 "cplus.met"
                            }
#line 885 "cplus.met"
#line 885 "cplus.met"
                            break;
#line 885 "cplus.met"
#line 887 "cplus.met"
                        case PRAGMA_ASSIGN_ALIGN : 
#line 887 "cplus.met"
                            tokenAhead = 0 ;
#line 887 "cplus.met"
                            CommTerm();
#line 887 "cplus.met"
#line 888 "cplus.met"
#line 889 "cplus.met"
                            {
#line 889 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 889 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 889 "cplus.met"
                                {
#line 889 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 889 "cplus.met"
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 889 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 889 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 889 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 889 "cplus.met"
                                    } else {
#line 889 "cplus.met"
                                        tokenAhead = 0 ;
#line 889 "cplus.met"
                                    }
#line 889 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 889 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 889 "cplus.met"
                                }
#line 889 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 889 "cplus.met"
                                retTree=_ptRes0;
#line 889 "cplus.met"
                            }
#line 889 "cplus.met"
#line 890 "cplus.met"
                            AnalyzeAssignAlign (retTree );
#line 890 "cplus.met"
#line 891 "cplus.met"
                            {
#line 891 "cplus.met"
                                _retValue = retTree ;
#line 891 "cplus.met"
                                goto quick_prog_elem_ret;
#line 891 "cplus.met"
                                
#line 891 "cplus.met"
                            }
#line 891 "cplus.met"
#line 891 "cplus.met"
                            break;
#line 891 "cplus.met"
#line 893 "cplus.met"
                        case PRAGMA_DECL_ALIGN : 
#line 893 "cplus.met"
                            tokenAhead = 0 ;
#line 893 "cplus.met"
                            CommTerm();
#line 893 "cplus.met"
#line 894 "cplus.met"
#line 895 "cplus.met"
                            {
#line 895 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 895 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 895 "cplus.met"
                                {
#line 895 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 895 "cplus.met"
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 895 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 895 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 895 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 895 "cplus.met"
                                    } else {
#line 895 "cplus.met"
                                        tokenAhead = 0 ;
#line 895 "cplus.met"
                                    }
#line 895 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 895 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 895 "cplus.met"
                                }
#line 895 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 895 "cplus.met"
                                retTree=_ptRes0;
#line 895 "cplus.met"
                            }
#line 895 "cplus.met"
#line 896 "cplus.met"
                            AnalyzeDeclAlign (retTree );
#line 896 "cplus.met"
#line 897 "cplus.met"
                            {
#line 897 "cplus.met"
                                _retValue = retTree ;
#line 897 "cplus.met"
                                goto quick_prog_elem_ret;
#line 897 "cplus.met"
                                
#line 897 "cplus.met"
                            }
#line 897 "cplus.met"
#line 897 "cplus.met"
                            break;
#line 897 "cplus.met"
#line 899 "cplus.met"
                        case PRAGMA_MARGIN : 
#line 899 "cplus.met"
                            tokenAhead = 0 ;
#line 899 "cplus.met"
                            CommTerm();
#line 899 "cplus.met"
#line 900 "cplus.met"
#line 901 "cplus.met"
                            {
#line 901 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 901 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 901 "cplus.met"
                                {
#line 901 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 901 "cplus.met"
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 901 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 901 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 901 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 901 "cplus.met"
                                    } else {
#line 901 "cplus.met"
                                        tokenAhead = 0 ;
#line 901 "cplus.met"
                                    }
#line 901 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 901 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 901 "cplus.met"
                                }
#line 901 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 901 "cplus.met"
                                retTree=_ptRes0;
#line 901 "cplus.met"
                            }
#line 901 "cplus.met"
#line 902 "cplus.met"
                            AnalyzeMargin (retTree );
#line 902 "cplus.met"
#line 903 "cplus.met"
                            {
#line 903 "cplus.met"
                                _retValue = retTree ;
#line 903 "cplus.met"
                                goto quick_prog_elem_ret;
#line 903 "cplus.met"
                                
#line 903 "cplus.met"
                            }
#line 903 "cplus.met"
#line 903 "cplus.met"
                            break;
#line 903 "cplus.met"
#line 905 "cplus.met"
                        case PRAGMA_COMMENT_START : 
#line 905 "cplus.met"
                            tokenAhead = 0 ;
#line 905 "cplus.met"
                            CommTerm();
#line 905 "cplus.met"
#line 906 "cplus.met"
#line 907 "cplus.met"
                            {
#line 907 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 907 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 907 "cplus.met"
                                {
#line 907 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 907 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_START, 1);
#line 907 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 907 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 907 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 907 "cplus.met"
                                    } else {
#line 907 "cplus.met"
                                        tokenAhead = 0 ;
#line 907 "cplus.met"
                                    }
#line 907 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 907 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 907 "cplus.met"
                                }
#line 907 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 907 "cplus.met"
                                retTree=_ptRes0;
#line 907 "cplus.met"
                            }
#line 907 "cplus.met"
#line 908 "cplus.met"
                            AnalyzeComment (retTree );
#line 908 "cplus.met"
#line 909 "cplus.met"
                            {
#line 909 "cplus.met"
                                _retValue = retTree ;
#line 909 "cplus.met"
                                goto quick_prog_elem_ret;
#line 909 "cplus.met"
                                
#line 909 "cplus.met"
                            }
#line 909 "cplus.met"
#line 909 "cplus.met"
                            break;
#line 909 "cplus.met"
#line 911 "cplus.met"
                        case PRAGMA_COMMENT_MIDDLE : 
#line 911 "cplus.met"
                            tokenAhead = 0 ;
#line 911 "cplus.met"
                            CommTerm();
#line 911 "cplus.met"
#line 912 "cplus.met"
#line 913 "cplus.met"
                            {
#line 913 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 913 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 913 "cplus.met"
                                {
#line 913 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 913 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 913 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 913 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 913 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 913 "cplus.met"
                                    } else {
#line 913 "cplus.met"
                                        tokenAhead = 0 ;
#line 913 "cplus.met"
                                    }
#line 913 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 913 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 913 "cplus.met"
                                }
#line 913 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 913 "cplus.met"
                                retTree=_ptRes0;
#line 913 "cplus.met"
                            }
#line 913 "cplus.met"
#line 914 "cplus.met"
                            AnalyzeComment (retTree );
#line 914 "cplus.met"
#line 915 "cplus.met"
                            {
#line 915 "cplus.met"
                                _retValue = retTree ;
#line 915 "cplus.met"
                                goto quick_prog_elem_ret;
#line 915 "cplus.met"
                                
#line 915 "cplus.met"
                            }
#line 915 "cplus.met"
#line 915 "cplus.met"
                            break;
#line 915 "cplus.met"
#line 917 "cplus.met"
                        case PRAGMA_COMMENT_END : 
#line 917 "cplus.met"
                            tokenAhead = 0 ;
#line 917 "cplus.met"
                            CommTerm();
#line 917 "cplus.met"
#line 918 "cplus.met"
#line 919 "cplus.met"
                            {
#line 919 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 919 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 919 "cplus.met"
                                {
#line 919 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 919 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_END, 1);
#line 919 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 919 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 919 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 919 "cplus.met"
                                    } else {
#line 919 "cplus.met"
                                        tokenAhead = 0 ;
#line 919 "cplus.met"
                                    }
#line 919 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 919 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 919 "cplus.met"
                                }
#line 919 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 919 "cplus.met"
                                retTree=_ptRes0;
#line 919 "cplus.met"
                            }
#line 919 "cplus.met"
#line 920 "cplus.met"
                            AnalyzeComment (retTree );
#line 920 "cplus.met"
#line 921 "cplus.met"
                            {
#line 921 "cplus.met"
                                _retValue = retTree ;
#line 921 "cplus.met"
                                goto quick_prog_elem_ret;
#line 921 "cplus.met"
                                
#line 921 "cplus.met"
                            }
#line 921 "cplus.met"
#line 921 "cplus.met"
                            break;
#line 921 "cplus.met"
#line 923 "cplus.met"
                        case PRAGMA_COMMENT_PLUS : 
#line 923 "cplus.met"
                            tokenAhead = 0 ;
#line 923 "cplus.met"
                            CommTerm();
#line 923 "cplus.met"
#line 924 "cplus.met"
#line 925 "cplus.met"
                            {
#line 925 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 925 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 925 "cplus.met"
                                {
#line 925 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 925 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 925 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 925 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 925 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 925 "cplus.met"
                                    } else {
#line 925 "cplus.met"
                                        tokenAhead = 0 ;
#line 925 "cplus.met"
                                    }
#line 925 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 925 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 925 "cplus.met"
                                }
#line 925 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 925 "cplus.met"
                                retTree=_ptRes0;
#line 925 "cplus.met"
                            }
#line 925 "cplus.met"
#line 926 "cplus.met"
                            AnalyzeComment (retTree );
#line 926 "cplus.met"
#line 927 "cplus.met"
                            {
#line 927 "cplus.met"
                                _retValue = retTree ;
#line 927 "cplus.met"
                                goto quick_prog_elem_ret;
#line 927 "cplus.met"
                                
#line 927 "cplus.met"
                            }
#line 927 "cplus.met"
#line 927 "cplus.met"
                            break;
#line 927 "cplus.met"
#line 929 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 929 "cplus.met"
                            tokenAhead = 0 ;
#line 929 "cplus.met"
                            CommTerm();
#line 929 "cplus.met"
#line 930 "cplus.met"
#line 931 "cplus.met"
                            {
#line 931 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 931 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 931 "cplus.met"
                                {
#line 931 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 931 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 931 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 931 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 931 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 931 "cplus.met"
                                    } else {
#line 931 "cplus.met"
                                        tokenAhead = 0 ;
#line 931 "cplus.met"
                                    }
#line 931 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 931 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 931 "cplus.met"
                                }
#line 931 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 931 "cplus.met"
                                retTree=_ptRes0;
#line 931 "cplus.met"
                            }
#line 931 "cplus.met"
#line 932 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
#line 932 "cplus.met"
#line 933 "cplus.met"
                            {
#line 933 "cplus.met"
                                _retValue = retTree ;
#line 933 "cplus.met"
                                goto quick_prog_elem_ret;
#line 933 "cplus.met"
                                
#line 933 "cplus.met"
                            }
#line 933 "cplus.met"
#line 933 "cplus.met"
                            break;
#line 933 "cplus.met"
#line 935 "cplus.met"
                        case PRAGMA_FUNC_HEADER : 
#line 935 "cplus.met"
                            tokenAhead = 0 ;
#line 935 "cplus.met"
                            CommTerm();
#line 935 "cplus.met"
#line 936 "cplus.met"
#line 937 "cplus.met"
                            {
#line 937 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 937 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 937 "cplus.met"
                                {
#line 937 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 937 "cplus.met"
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 937 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 937 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 937 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 937 "cplus.met"
                                    } else {
#line 937 "cplus.met"
                                        tokenAhead = 0 ;
#line 937 "cplus.met"
                                    }
#line 937 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 937 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 937 "cplus.met"
                                }
#line 937 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 937 "cplus.met"
                                retTree=_ptRes0;
#line 937 "cplus.met"
                            }
#line 937 "cplus.met"
#line 938 "cplus.met"
                            AnalyzeFuncHeader (retTree );
#line 938 "cplus.met"
#line 939 "cplus.met"
                            {
#line 939 "cplus.met"
                                _retValue = retTree ;
#line 939 "cplus.met"
                                goto quick_prog_elem_ret;
#line 939 "cplus.met"
                                
#line 939 "cplus.met"
                            }
#line 939 "cplus.met"
#line 939 "cplus.met"
                            break;
#line 939 "cplus.met"
#line 941 "cplus.met"
                        case PRAGMA_PARAMETERS : 
#line 941 "cplus.met"
                            tokenAhead = 0 ;
#line 941 "cplus.met"
                            CommTerm();
#line 941 "cplus.met"
#line 942 "cplus.met"
#line 943 "cplus.met"
                            {
#line 943 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 943 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 943 "cplus.met"
                                {
#line 943 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 943 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 943 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 943 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 943 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 943 "cplus.met"
                                    } else {
#line 943 "cplus.met"
                                        tokenAhead = 0 ;
#line 943 "cplus.met"
                                    }
#line 943 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 943 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 943 "cplus.met"
                                }
#line 943 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 943 "cplus.met"
                                retTree=_ptRes0;
#line 943 "cplus.met"
                            }
#line 943 "cplus.met"
#line 944 "cplus.met"
                            AnalyzeParameters (retTree );
#line 944 "cplus.met"
#line 945 "cplus.met"
                            {
#line 945 "cplus.met"
                                _retValue = retTree ;
#line 945 "cplus.met"
                                goto quick_prog_elem_ret;
#line 945 "cplus.met"
                                
#line 945 "cplus.met"
                            }
#line 945 "cplus.met"
#line 945 "cplus.met"
                            break;
#line 945 "cplus.met"
#line 947 "cplus.met"
                        default : 
#line 947 "cplus.met"
#line 947 "cplus.met"
                            {
#line 947 "cplus.met"
                                PPTREE _ptTree0=0;
#line 947 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 947 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 947 "cplus.met"
                                }
#line 947 "cplus.met"
                                _retValue =_ptTree0;
#line 947 "cplus.met"
                                goto quick_prog_elem_ret;
#line 947 "cplus.met"
                            }
#line 947 "cplus.met"
                            break;
#line 947 "cplus.met"
                    }
#line 947 "cplus.met"
#line 947 "cplus.met"
                    break;
#line 947 "cplus.met"
#line 947 "cplus.met"
                default : 
#line 947 "cplus.met"
#line 947 "cplus.met"
                    break;
#line 947 "cplus.met"
            }
#line 947 "cplus.met"
#line 952 "cplus.met"
            {
#line 952 "cplus.met"
                PPTREE _ptTree0=0;
#line 952 "cplus.met"
                {
#line 952 "cplus.met"
                    PPTREE _ptRes1=0;
#line 952 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 952 "cplus.met"
                    _ptTree0=_ptRes1;
#line 952 "cplus.met"
                }
#line 952 "cplus.met"
                _retValue =_ptTree0;
#line 952 "cplus.met"
                goto quick_prog_elem_ret;
#line 952 "cplus.met"
            }
#line 952 "cplus.met"
#line 952 "cplus.met"
            break;
#line 952 "cplus.met"
#line 954 "cplus.met"
        default : 
#line 954 "cplus.met"
            tokenAhead = 0 ;
#line 954 "cplus.met"
            CommTerm();
#line 954 "cplus.met"
#line 955 "cplus.met"
#line 956 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 956 "cplus.met"
#line 957 "cplus.met"
#line 958 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 958 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 958 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 958 "cplus.met"
                } else {
#line 958 "cplus.met"
                    tokenAhead = 0 ;
#line 958 "cplus.met"
                }
#line 958 "cplus.met"
#line 959 "cplus.met"
                 goto debut;
#line 959 "cplus.met"
#line 959 "cplus.met"
#line 959 "cplus.met"
            } else {
#line 959 "cplus.met"
#line 962 "cplus.met"
                {
#line 962 "cplus.met"
                    _retValue = retTree ;
#line 962 "cplus.met"
                    goto quick_prog_elem_ret;
#line 962 "cplus.met"
                    
#line 962 "cplus.met"
                }
#line 962 "cplus.met"
            }
#line 962 "cplus.met"
#line 962 "cplus.met"
            break;
#line 962 "cplus.met"
    }
#line 962 "cplus.met"
#line 962 "cplus.met"
#line 964 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 964 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 964 "cplus.met"
return((PPTREE) 0);
#line 964 "cplus.met"

#line 964 "cplus.met"
quick_prog_elem_exit :
#line 964 "cplus.met"

#line 964 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 964 "cplus.met"
    _funcLevel--;
#line 964 "cplus.met"
    return((PPTREE) -1) ;
#line 964 "cplus.met"

#line 964 "cplus.met"
quick_prog_elem_ret :
#line 964 "cplus.met"
    
#line 964 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 964 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 964 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 964 "cplus.met"
    return _retValue ;
#line 964 "cplus.met"
}
#line 964 "cplus.met"

#line 964 "cplus.met"
