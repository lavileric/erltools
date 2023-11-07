/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3128 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3128 "cplus.met"
{
#line 3128 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3128 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3128 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3128 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3128 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3128 "cplus.met"
#line 3128 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3128 "cplus.met"
#line 3128 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3128 "cplus.met"
#line 3130 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3130 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3130 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3130 "cplus.met"
    } else {
#line 3130 "cplus.met"
        tokenAhead = 0 ;
#line 3130 "cplus.met"
    }
#line 3130 "cplus.met"
#line 3131 "cplus.met"
     { int followed = 0;
#line 3131 "cplus.met"
#line 3132 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3132 "cplus.met"
#line 3133 "cplus.met"
#line 3134 "cplus.met"
         { int exit = 0 ;
#line 3134 "cplus.met"
#line 3135 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3135 "cplus.met"
#line 3136 "cplus.met"
#line 3137 "cplus.met"
             followed = 1 ;
#line 3137 "cplus.met"
#line 3138 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3138 "cplus.met"
#line 3138 "cplus.met"
#line 3138 "cplus.met"
        } else {
#line 3138 "cplus.met"
#line 3141 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3141 "cplus.met"
#line 3142 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3142 "cplus.met"
#line 3142 "cplus.met"
            } else {
#line 3142 "cplus.met"
#line 3144 "cplus.met"
#line 3145 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3145 "cplus.met"
#line 3146 "cplus.met"
                    {
#line 3146 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3146 "cplus.met"
                        {
#line 3146 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3146 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3146 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3146 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3146 "cplus.met"
                        }
#line 3146 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3146 "cplus.met"
                    }
#line 3146 "cplus.met"
#line 3146 "cplus.met"
                }
#line 3146 "cplus.met"
#line 3147 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3147 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3147 "cplus.met"
#line 3148 "cplus.met"
                     followed = 1;
#line 3148 "cplus.met"
                }
#line 3148 "cplus.met"
#line 3149 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3149 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3149 "cplus.met"
#line 3150 "cplus.met"
#line 3151 "cplus.met"
                     followed = 1;
#line 3151 "cplus.met"
#line 3152 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3152 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3152 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3152 "cplus.met"
                    } else {
#line 3152 "cplus.met"
                        tokenAhead = 0 ;
#line 3152 "cplus.met"
                    }
#line 3152 "cplus.met"
#line 3152 "cplus.met"
#line 3152 "cplus.met"
                }
#line 3152 "cplus.met"
#line 3152 "cplus.met"
            }
#line 3152 "cplus.met"
        }
#line 3152 "cplus.met"
#line 3152 "cplus.met"
        _addlist1 = paramList ;
#line 3152 "cplus.met"
#line 3155 "cplus.met"
        while ( followed && !exit ) { 
#line 3155 "cplus.met"
#line 3156 "cplus.met"
#line 3157 "cplus.met"
             followed = 0 ;
#line 3157 "cplus.met"
#line 3158 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus))){
#line 3158 "cplus.met"
#line 3159 "cplus.met"
#line 3160 "cplus.met"
                 followed = 1 ;
#line 3160 "cplus.met"
#line 3161 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3161 "cplus.met"
#line 3161 "cplus.met"
                if (paramList){
#line 3161 "cplus.met"
#line 3161 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3161 "cplus.met"
                } else {
#line 3161 "cplus.met"
#line 3161 "cplus.met"
                    paramList = _addlist1 ;
#line 3161 "cplus.met"
                }
#line 3161 "cplus.met"
#line 3161 "cplus.met"
#line 3161 "cplus.met"
            } else {
#line 3161 "cplus.met"
#line 3164 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3164 "cplus.met"
#line 3165 "cplus.met"
#line 3165 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3165 "cplus.met"
#line 3165 "cplus.met"
                    if (paramList){
#line 3165 "cplus.met"
#line 3165 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3165 "cplus.met"
                    } else {
#line 3165 "cplus.met"
#line 3165 "cplus.met"
                        paramList = _addlist1 ;
#line 3165 "cplus.met"
                    }
#line 3165 "cplus.met"
                } else {
#line 3165 "cplus.met"
#line 3167 "cplus.met"
#line 3168 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3168 "cplus.met"
#line 3169 "cplus.met"
#line 3170 "cplus.met"
                        {
#line 3170 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3170 "cplus.met"
                            {
#line 3170 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3170 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3170 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3170 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3170 "cplus.met"
                            }
#line 3170 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3170 "cplus.met"
                        }
#line 3170 "cplus.met"
#line 3170 "cplus.met"
                        if (paramList){
#line 3170 "cplus.met"
#line 3170 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3170 "cplus.met"
                        } else {
#line 3170 "cplus.met"
#line 3170 "cplus.met"
                            paramList = _addlist1 ;
#line 3170 "cplus.met"
                        }
#line 3170 "cplus.met"
#line 3171 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3171 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3171 "cplus.met"
#line 3172 "cplus.met"
                             followed = 1;
#line 3172 "cplus.met"
                        }
#line 3172 "cplus.met"
#line 3173 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3173 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3173 "cplus.met"
#line 3174 "cplus.met"
#line 3175 "cplus.met"
                             followed = 1;
#line 3175 "cplus.met"
#line 3176 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3176 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3176 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3176 "cplus.met"
                            } else {
#line 3176 "cplus.met"
                                tokenAhead = 0 ;
#line 3176 "cplus.met"
                            }
#line 3176 "cplus.met"
#line 3176 "cplus.met"
#line 3176 "cplus.met"
                        }
#line 3176 "cplus.met"
#line 3176 "cplus.met"
#line 3177 "cplus.met"
                    } else {
#line 3177 "cplus.met"
#line 3180 "cplus.met"
#line 3181 "cplus.met"
                        {
#line 3181 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3181 "cplus.met"
                            {
#line 3181 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3181 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3181 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3181 "cplus.met"
                            }
#line 3181 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3181 "cplus.met"
                        }
#line 3181 "cplus.met"
#line 3181 "cplus.met"
                        if (paramList){
#line 3181 "cplus.met"
#line 3181 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3181 "cplus.met"
                        } else {
#line 3181 "cplus.met"
#line 3181 "cplus.met"
                            paramList = _addlist1 ;
#line 3181 "cplus.met"
                        }
#line 3181 "cplus.met"
#line 3182 "cplus.met"
                         exit = 1 ;
#line 3182 "cplus.met"
#line 3183 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3183 "cplus.met"
#line 3183 "cplus.met"
                        }
#line 3183 "cplus.met"
#line 3185 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3185 "cplus.met"
#line 3186 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3186 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3186 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3186 "cplus.met"
                            } else {
#line 3186 "cplus.met"
                                tokenAhead = 0 ;
#line 3186 "cplus.met"
                            }
#line 3186 "cplus.met"
                        }
#line 3186 "cplus.met"
#line 3186 "cplus.met"
                    }
#line 3186 "cplus.met"
#line 3186 "cplus.met"
                }
#line 3186 "cplus.met"
            }
#line 3186 "cplus.met"
#line 3186 "cplus.met"
        } 
#line 3186 "cplus.met"
#line 3190 "cplus.met"
        if ((! ( exit )) && 
#line 3190 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3190 "cplus.met"
#line 3191 "cplus.met"
            {
#line 3191 "cplus.met"
                PPTREE _ptTree0=0;
#line 3191 "cplus.met"
                {
#line 3191 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3191 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3191 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3191 "cplus.met"
                }
#line 3191 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3191 "cplus.met"
            }
#line 3191 "cplus.met"
#line 3191 "cplus.met"
        }
#line 3191 "cplus.met"
#line 3192 "cplus.met"
         }  
#line 3192 "cplus.met"
#line 3192 "cplus.met"
#line 3192 "cplus.met"
    }
#line 3192 "cplus.met"
#line 3194 "cplus.met"
     } 
#line 3194 "cplus.met"
#line 3195 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3195 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3195 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3195 "cplus.met"
    } else {
#line 3195 "cplus.met"
        tokenAhead = 0 ;
#line 3195 "cplus.met"
    }
#line 3195 "cplus.met"
#line 3196 "cplus.met"
    {
#line 3196 "cplus.met"
        _retValue = paramList ;
#line 3196 "cplus.met"
        goto parameter_list_extended_ret;
#line 3196 "cplus.met"
        
#line 3196 "cplus.met"
    }
#line 3196 "cplus.met"
#line 3196 "cplus.met"
#line 3196 "cplus.met"

#line 3197 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3197 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3197 "cplus.met"
return((PPTREE) 0);
#line 3197 "cplus.met"

#line 3197 "cplus.met"
parameter_list_extended_exit :
#line 3197 "cplus.met"

#line 3197 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3197 "cplus.met"
    _funcLevel--;
#line 3197 "cplus.met"
    return((PPTREE) -1) ;
#line 3197 "cplus.met"

#line 3197 "cplus.met"
parameter_list_extended_ret :
#line 3197 "cplus.met"
    
#line 3197 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3197 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3197 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3197 "cplus.met"
    return _retValue ;
#line 3197 "cplus.met"
}
#line 3197 "cplus.met"

#line 3197 "cplus.met"
#line 3621 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3621 "cplus.met"
{
#line 3621 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3621 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3621 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3621 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3621 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3621 "cplus.met"
#line 3621 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3621 "cplus.met"
#line 3623 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 77, cplus)) || 
#line 3623 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 140, cplus))) || 
#line 3623 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 41, cplus))) || 
#line 3623 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 144, cplus))) || 
#line 3623 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 143, cplus))) || 
#line 3623 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 63, cplus))){
#line 3623 "cplus.met"
#line 3624 "cplus.met"
        {
#line 3624 "cplus.met"
            _retValue = retValue ;
#line 3624 "cplus.met"
            goto parse_entry_ret;
#line 3624 "cplus.met"
            
#line 3624 "cplus.met"
        }
#line 3624 "cplus.met"
    } else {
#line 3624 "cplus.met"
#line 3626 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3626 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3626 "cplus.met"
        }
#line 3626 "cplus.met"
    }
#line 3626 "cplus.met"
#line 3626 "cplus.met"
#line 3626 "cplus.met"

#line 3627 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3627 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3627 "cplus.met"
return((PPTREE) 0);
#line 3627 "cplus.met"

#line 3627 "cplus.met"
parse_entry_exit :
#line 3627 "cplus.met"

#line 3627 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3627 "cplus.met"
    _funcLevel--;
#line 3627 "cplus.met"
    return((PPTREE) -1) ;
#line 3627 "cplus.met"

#line 3627 "cplus.met"
parse_entry_ret :
#line 3627 "cplus.met"
    
#line 3627 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3627 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3627 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3627 "cplus.met"
    return _retValue ;
#line 3627 "cplus.met"
}
#line 3627 "cplus.met"

#line 3627 "cplus.met"
#line 2732 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2732 "cplus.met"
{
#line 2732 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2732 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2732 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2732 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2732 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2732 "cplus.met"
#line 2732 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2732 "cplus.met"
#line 2734 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2734 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2734 "cplus.met"
    }
#line 2734 "cplus.met"
#line 2735 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2735 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2735 "cplus.met"
#line 2736 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2736 "cplus.met"
        switch( lexEl.Value) {
#line 2736 "cplus.met"
#line 2737 "cplus.met"
            case POINETOI : 
#line 2737 "cplus.met"
                tokenAhead = 0 ;
#line 2737 "cplus.met"
                CommTerm();
#line 2737 "cplus.met"
#line 2737 "cplus.met"
                {
#line 2737 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2737 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2737 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2737 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2737 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2737 "cplus.met"
                    }
#line 2737 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2737 "cplus.met"
                    expTree=_ptRes0;
#line 2737 "cplus.met"
                }
#line 2737 "cplus.met"
                break;
#line 2737 "cplus.met"
#line 2738 "cplus.met"
            case TIRESUPEETOI : 
#line 2738 "cplus.met"
                tokenAhead = 0 ;
#line 2738 "cplus.met"
                CommTerm();
#line 2738 "cplus.met"
#line 2738 "cplus.met"
                {
#line 2738 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2738 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2738 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2738 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2738 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2738 "cplus.met"
                    }
#line 2738 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2738 "cplus.met"
                    expTree=_ptRes0;
#line 2738 "cplus.met"
                }
#line 2738 "cplus.met"
                break;
#line 2738 "cplus.met"
            default :
#line 2738 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2738 "cplus.met"
                break;
#line 2738 "cplus.met"
        }
#line 2738 "cplus.met"
    } 
#line 2738 "cplus.met"
#line 2740 "cplus.met"
    {
#line 2740 "cplus.met"
        _retValue = expTree ;
#line 2740 "cplus.met"
        goto pm_expression_ret;
#line 2740 "cplus.met"
        
#line 2740 "cplus.met"
    }
#line 2740 "cplus.met"
#line 2740 "cplus.met"
#line 2740 "cplus.met"

#line 2741 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2741 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2741 "cplus.met"
return((PPTREE) 0);
#line 2741 "cplus.met"

#line 2741 "cplus.met"
pm_expression_exit :
#line 2741 "cplus.met"

#line 2741 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2741 "cplus.met"
    _funcLevel--;
#line 2741 "cplus.met"
    return((PPTREE) -1) ;
#line 2741 "cplus.met"

#line 2741 "cplus.met"
pm_expression_ret :
#line 2741 "cplus.met"
    
#line 2741 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2741 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2741 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2741 "cplus.met"
    return _retValue ;
#line 2741 "cplus.met"
}
#line 2741 "cplus.met"

#line 2741 "cplus.met"
#line 2910 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 2910 "cplus.met"
{
#line 2910 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2910 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2910 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2910 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 2910 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2910 "cplus.met"
#line 2910 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0,expArray = (PPTREE) 0;
#line 2910 "cplus.met"
#line 2912 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 113, cplus))){
#line 2912 "cplus.met"
#line 2913 "cplus.met"
#line 2914 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2914 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2914 "cplus.met"
        }
#line 2914 "cplus.met"
#line 2915 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 2915 "cplus.met"
#line 2916 "cplus.met"
            
#line 2916 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            LEX_EXIT ("",0);
#line 2916 "cplus.met"
            goto postfix_expression_exit;
#line 2916 "cplus.met"
#line 2916 "cplus.met"
        }
#line 2916 "cplus.met"
#line 2916 "cplus.met"
#line 2916 "cplus.met"
    }
#line 2916 "cplus.met"
#line 2918 "cplus.met"
    while ((((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2918 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 2918 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 2918 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 2918 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 2918 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) || 
#line 2918 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AOUV,"{"))) { 
#line 2918 "cplus.met"
#line 2919 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2919 "cplus.met"
        switch( lexEl.Value) {
#line 2919 "cplus.met"
#line 2922 "cplus.met"
            case POUV : 
#line 2922 "cplus.met"
                tokenAhead = 0 ;
#line 2922 "cplus.met"
                CommTerm();
#line 2922 "cplus.met"
#line 2921 "cplus.met"
#line 2922 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2922 "cplus.met"
#line 2923 "cplus.met"
                    {
#line 2923 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2923 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2923 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2923 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2923 "cplus.met"
                        expTree=_ptRes0;
#line 2923 "cplus.met"
                    }
#line 2923 "cplus.met"
                } else {
#line 2923 "cplus.met"
#line 2925 "cplus.met"
                    {
#line 2925 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2925 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 2925 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2925 "cplus.met"
                        expTree=_ptRes0;
#line 2925 "cplus.met"
                    }
#line 2925 "cplus.met"
                }
#line 2925 "cplus.met"
#line 2926 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2926 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2926 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 2926 "cplus.met"
                } else {
#line 2926 "cplus.met"
                    tokenAhead = 0 ;
#line 2926 "cplus.met"
                }
#line 2926 "cplus.met"
#line 2926 "cplus.met"
                break;
#line 2926 "cplus.met"
#line 2930 "cplus.met"
            case AOUV : 
#line 2930 "cplus.met"
                tokenAhead = 0 ;
#line 2930 "cplus.met"
                CommTerm();
#line 2930 "cplus.met"
#line 2929 "cplus.met"
#line 2930 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2930 "cplus.met"
#line 2931 "cplus.met"
                    {
#line 2931 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2931 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 2931 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2931 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2931 "cplus.met"
                        expTree=_ptRes0;
#line 2931 "cplus.met"
                    }
#line 2931 "cplus.met"
                } else {
#line 2931 "cplus.met"
#line 2933 "cplus.met"
                    {
#line 2933 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2933 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 2933 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 2933 "cplus.met"
                        expTree=_ptRes0;
#line 2933 "cplus.met"
                    }
#line 2933 "cplus.met"
                }
#line 2933 "cplus.met"
#line 2934 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2934 "cplus.met"
                if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2934 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"}")
#line 2934 "cplus.met"
                } else {
#line 2934 "cplus.met"
                    tokenAhead = 0 ;
#line 2934 "cplus.met"
                }
#line 2934 "cplus.met"
#line 2934 "cplus.met"
                break;
#line 2934 "cplus.met"
#line 2938 "cplus.met"
            case COUV : 
#line 2938 "cplus.met"
                tokenAhead = 0 ;
#line 2938 "cplus.met"
                CommTerm();
#line 2938 "cplus.met"
#line 2937 "cplus.met"
#line 2938 "cplus.met"
                if ( (expArray=NQUICK_CALL(_Tak(array_expression_follow)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2938 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2938 "cplus.met"
                }
#line 2938 "cplus.met"
#line 2939 "cplus.met"
                ReplaceTree(expArray ,1 ,expTree );
#line 2939 "cplus.met"
#line 2940 "cplus.met"
                expTree = expArray ;
#line 2940 "cplus.met"
#line 2940 "cplus.met"
                break;
#line 2940 "cplus.met"
#line 2942 "cplus.met"
            case META : 
#line 2942 "cplus.met"
            case POINT : 
#line 2942 "cplus.met"
                tokenAhead = 0 ;
#line 2942 "cplus.met"
                CommTerm();
#line 2942 "cplus.met"
#line 2942 "cplus.met"
                {
#line 2942 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2942 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 2942 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2942 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2942 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2942 "cplus.met"
                    }
#line 2942 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2942 "cplus.met"
                    expTree=_ptRes0;
#line 2942 "cplus.met"
                }
#line 2942 "cplus.met"
                break;
#line 2942 "cplus.met"
#line 2943 "cplus.met"
            case TIRESUPE : 
#line 2943 "cplus.met"
                tokenAhead = 0 ;
#line 2943 "cplus.met"
                CommTerm();
#line 2943 "cplus.met"
#line 2943 "cplus.met"
                {
#line 2943 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2943 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 2943 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2943 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2943 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 2943 "cplus.met"
                    }
#line 2943 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2943 "cplus.met"
                    expTree=_ptRes0;
#line 2943 "cplus.met"
                }
#line 2943 "cplus.met"
                break;
#line 2943 "cplus.met"
#line 2944 "cplus.met"
            case PLUSPLUS : 
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
                    _ptRes0= MakeTree(AINCR, 1);
#line 2944 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2944 "cplus.met"
                    expTree=_ptRes0;
#line 2944 "cplus.met"
                }
#line 2944 "cplus.met"
                break;
#line 2944 "cplus.met"
#line 2945 "cplus.met"
            case TIRETIRE : 
#line 2945 "cplus.met"
                tokenAhead = 0 ;
#line 2945 "cplus.met"
                CommTerm();
#line 2945 "cplus.met"
#line 2945 "cplus.met"
                {
#line 2945 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2945 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 2945 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2945 "cplus.met"
                    expTree=_ptRes0;
#line 2945 "cplus.met"
                }
#line 2945 "cplus.met"
                break;
#line 2945 "cplus.met"
            default :
#line 2945 "cplus.met"
                MulFreeTree(3,expArray,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or { or [ or POINT or -> or ++ or --")
#line 2945 "cplus.met"
                break;
#line 2945 "cplus.met"
        }
#line 2945 "cplus.met"
    } 
#line 2945 "cplus.met"
#line 2947 "cplus.met"
    {
#line 2947 "cplus.met"
        _retValue = expTree ;
#line 2947 "cplus.met"
        goto postfix_expression_ret;
#line 2947 "cplus.met"
        
#line 2947 "cplus.met"
    }
#line 2947 "cplus.met"
#line 2947 "cplus.met"
#line 2947 "cplus.met"

#line 2948 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2948 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2948 "cplus.met"
return((PPTREE) 0);
#line 2948 "cplus.met"

#line 2948 "cplus.met"
postfix_expression_exit :
#line 2948 "cplus.met"

#line 2948 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 2948 "cplus.met"
    _funcLevel--;
#line 2948 "cplus.met"
    return((PPTREE) -1) ;
#line 2948 "cplus.met"

#line 2948 "cplus.met"
postfix_expression_ret :
#line 2948 "cplus.met"
    
#line 2948 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 2948 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2948 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2948 "cplus.met"
    return _retValue ;
#line 2948 "cplus.met"
}
#line 2948 "cplus.met"

#line 2948 "cplus.met"
#line 2963 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 2963 "cplus.met"
{
#line 2963 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2963 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2963 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2963 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 2963 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2963 "cplus.met"
#line 2963 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2963 "cplus.met"
#line 2965 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2965 "cplus.met"
    switch( lexEl.Value) {
#line 2965 "cplus.met"
#line 2968 "cplus.met"
        case POUV : 
#line 2968 "cplus.met"
            tokenAhead = 0 ;
#line 2968 "cplus.met"
            CommTerm();
#line 2968 "cplus.met"
#line 2967 "cplus.met"
#line 2968 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2968 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2968 "cplus.met"
            }
#line 2968 "cplus.met"
#line 2969 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2969 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2969 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2969 "cplus.met"
            } else {
#line 2969 "cplus.met"
                tokenAhead = 0 ;
#line 2969 "cplus.met"
            }
#line 2969 "cplus.met"
#line 2970 "cplus.met"
            {
#line 2970 "cplus.met"
                PPTREE _ptTree0=0;
#line 2970 "cplus.met"
                {
#line 2970 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2970 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 2970 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 2970 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2970 "cplus.met"
                }
#line 2970 "cplus.met"
                _retValue =_ptTree0;
#line 2970 "cplus.met"
                goto primary_expression_ret;
#line 2970 "cplus.met"
            }
#line 2970 "cplus.met"
#line 2970 "cplus.met"
            break;
#line 2970 "cplus.met"
#line 2972 "cplus.met"
        case OPERATOR : 
#line 2972 "cplus.met"
#line 2972 "cplus.met"
            {
#line 2972 "cplus.met"
                PPTREE _ptTree0=0;
#line 2972 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
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
        case TILD : 
#line 2973 "cplus.met"
#line 2973 "cplus.met"
            {
#line 2973 "cplus.met"
                PPTREE _ptTree0=0;
#line 2973 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2973 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2973 "cplus.met"
                }
#line 2973 "cplus.met"
                _retValue =_ptTree0;
#line 2973 "cplus.met"
                goto primary_expression_ret;
#line 2973 "cplus.met"
            }
#line 2973 "cplus.met"
            break;
#line 2973 "cplus.met"
#line 2974 "cplus.met"
        case META : 
#line 2974 "cplus.met"
#line 2975 "cplus.met"
#line 2976 "cplus.met"
            {
#line 2976 "cplus.met"
                PPTREE _ptTree0=0;
#line 2976 "cplus.met"
                {
#line 2976 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2976 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 2976 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 2976 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 2976 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 2976 "cplus.met"
                    } else {
#line 2976 "cplus.met"
                        tokenAhead = 0 ;
#line 2976 "cplus.met"
                    }
#line 2976 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2976 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2976 "cplus.met"
                }
#line 2976 "cplus.met"
                _retValue =_ptTree0;
#line 2976 "cplus.met"
                goto primary_expression_ret;
#line 2976 "cplus.met"
            }
#line 2976 "cplus.met"
#line 2976 "cplus.met"
            break;
#line 2976 "cplus.met"
#line 2978 "cplus.met"
        case IDENT : 
#line 2978 "cplus.met"
#line 2979 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 2979 "cplus.met"
#line 2980 "cplus.met"
#line 2981 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2981 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2981 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 2981 "cplus.met"
                } else {
#line 2981 "cplus.met"
                    tokenAhead = 0 ;
#line 2981 "cplus.met"
                }
#line 2981 "cplus.met"
#line 2982 "cplus.met"
                {
#line 2982 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2982 "cplus.met"
                    {
#line 2982 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2982 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 2982 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 2982 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2982 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 2982 "cplus.met"
                        } else {
#line 2982 "cplus.met"
                            tokenAhead = 0 ;
#line 2982 "cplus.met"
                        }
#line 2982 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2982 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2982 "cplus.met"
                    }
#line 2982 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2982 "cplus.met"
                }
#line 2982 "cplus.met"
#line 2983 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2983 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2983 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 2983 "cplus.met"
                } else {
#line 2983 "cplus.met"
                    tokenAhead = 0 ;
#line 2983 "cplus.met"
                }
#line 2983 "cplus.met"
#line 2984 "cplus.met"
                {
#line 2984 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2984 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2984 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2984 "cplus.met"
                    }
#line 2984 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 2984 "cplus.met"
                }
#line 2984 "cplus.met"
#line 2985 "cplus.met"
                {
#line 2985 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2985 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 2985 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 2985 "cplus.met"
                    expTree=_ptRes0;
#line 2985 "cplus.met"
                }
#line 2985 "cplus.met"
#line 2986 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2986 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2986 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 2986 "cplus.met"
                } else {
#line 2986 "cplus.met"
                    tokenAhead = 0 ;
#line 2986 "cplus.met"
                }
#line 2986 "cplus.met"
#line 2987 "cplus.met"
                {
#line 2987 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2987 "cplus.met"
                    {
#line 2987 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2987 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 2987 "cplus.met"
                        {
#line 2987 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2987 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 2987 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 2987 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2987 "cplus.met"
                        }
#line 2987 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2987 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 2987 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2987 "cplus.met"
                    }
#line 2987 "cplus.met"
                    _retValue =_ptTree0;
#line 2987 "cplus.met"
                    goto primary_expression_ret;
#line 2987 "cplus.met"
                }
#line 2987 "cplus.met"
#line 2987 "cplus.met"
#line 2987 "cplus.met"
            } else {
#line 2987 "cplus.met"
#line 2990 "cplus.met"
                {
#line 2990 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2990 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
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
            }
#line 2990 "cplus.met"
            break;
#line 2990 "cplus.met"
#line 2991 "cplus.met"
        case STRING : 
#line 2991 "cplus.met"
#line 2991 "cplus.met"
            {
#line 2991 "cplus.met"
                PPTREE _ptTree0=0;
#line 2991 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2991 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2991 "cplus.met"
                }
#line 2991 "cplus.met"
                _retValue =_ptTree0;
#line 2991 "cplus.met"
                goto primary_expression_ret;
#line 2991 "cplus.met"
            }
#line 2991 "cplus.met"
            break;
#line 2991 "cplus.met"
#line 2992 "cplus.met"
        case VA_ARG : 
#line 2992 "cplus.met"
            tokenAhead = 0 ;
#line 2992 "cplus.met"
            CommTerm();
#line 2992 "cplus.met"
#line 2993 "cplus.met"
#line 2994 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2994 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2994 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 2994 "cplus.met"
            } else {
#line 2994 "cplus.met"
                tokenAhead = 0 ;
#line 2994 "cplus.met"
            }
#line 2994 "cplus.met"
#line 2995 "cplus.met"
            {
#line 2995 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2995 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 2995 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2995 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2995 "cplus.met"
                }
#line 2995 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2995 "cplus.met"
                expTree=_ptRes0;
#line 2995 "cplus.met"
            }
#line 2995 "cplus.met"
#line 2996 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2996 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2996 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 2996 "cplus.met"
            } else {
#line 2996 "cplus.met"
                tokenAhead = 0 ;
#line 2996 "cplus.met"
            }
#line 2996 "cplus.met"
#line 2997 "cplus.met"
            {
#line 2997 "cplus.met"
                PPTREE _ptTree0=0;
#line 2997 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 2997 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 2997 "cplus.met"
                }
#line 2997 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 2997 "cplus.met"
            }
#line 2997 "cplus.met"
#line 2998 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2998 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2998 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 2998 "cplus.met"
            } else {
#line 2998 "cplus.met"
                tokenAhead = 0 ;
#line 2998 "cplus.met"
            }
#line 2998 "cplus.met"
#line 2999 "cplus.met"
            {
#line 2999 "cplus.met"
                _retValue = expTree ;
#line 2999 "cplus.met"
                goto primary_expression_ret;
#line 2999 "cplus.met"
                
#line 2999 "cplus.met"
            }
#line 2999 "cplus.met"
#line 2999 "cplus.met"
            break;
#line 2999 "cplus.met"
#line 3001 "cplus.met"
        default : 
#line 3001 "cplus.met"
#line 3001 "cplus.met"
            {
#line 3001 "cplus.met"
                PPTREE _ptTree0=0;
#line 3001 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3001 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3001 "cplus.met"
                }
#line 3001 "cplus.met"
                _retValue =_ptTree0;
#line 3001 "cplus.met"
                goto primary_expression_ret;
#line 3001 "cplus.met"
            }
#line 3001 "cplus.met"
            break;
#line 3001 "cplus.met"
    }
#line 3001 "cplus.met"
#line 3001 "cplus.met"
#line 3002 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3002 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3002 "cplus.met"
return((PPTREE) 0);
#line 3002 "cplus.met"

#line 3002 "cplus.met"
primary_expression_exit :
#line 3002 "cplus.met"

#line 3002 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 3002 "cplus.met"
    _funcLevel--;
#line 3002 "cplus.met"
    return((PPTREE) -1) ;
#line 3002 "cplus.met"

#line 3002 "cplus.met"
primary_expression_ret :
#line 3002 "cplus.met"
    
#line 3002 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 3002 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3002 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3002 "cplus.met"
    return _retValue ;
#line 3002 "cplus.met"
}
#line 3002 "cplus.met"

#line 3002 "cplus.met"
#line 770 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 770 "cplus.met"
{
#line 770 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 770 "cplus.met"
    int _value,_nbPre = 0 ;
#line 770 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 770 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 770 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 770 "cplus.met"
#line 770 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 770 "cplus.met"
#line 770 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 770 "cplus.met"
#line 772 "cplus.met"
     debut : 
#line 772 "cplus.met"
#line 772 "cplus.met"
    _addlist1 = list ;
#line 772 "cplus.met"
#line 773 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 65, cplus)) { 
#line 773 "cplus.met"
#line 774 "cplus.met"
#line 774 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 774 "cplus.met"
#line 774 "cplus.met"
        if (list){
#line 774 "cplus.met"
#line 774 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 774 "cplus.met"
        } else {
#line 774 "cplus.met"
#line 774 "cplus.met"
            list = _addlist1 ;
#line 774 "cplus.met"
        }
#line 774 "cplus.met"
    } 
#line 774 "cplus.met"
#line 775 "cplus.met"
    {
#line 775 "cplus.met"
        PPTREE _ptTree0=0;
#line 775 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 775 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 775 "cplus.met"
        }
#line 775 "cplus.met"
        list =AddList(list , _ptTree0);
#line 775 "cplus.met"
    }
#line 775 "cplus.met"
#line 776 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 27, cplus)){
#line 776 "cplus.met"
#line 776 "cplus.met"
    }
#line 776 "cplus.met"
#line 778 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 778 "cplus.met"
#line 779 "cplus.met"
#line 781 "cplus.met"
        dumperror ();
#line 781 "cplus.met"
#line 783 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 783 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 783 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 783 "cplus.met"
        } else {
#line 783 "cplus.met"
            tokenAhead = 0 ;
#line 783 "cplus.met"
        }
#line 783 "cplus.met"
#line 784 "cplus.met"
         hasGotError = 1 ;
#line 784 "cplus.met"
#line 785 "cplus.met"
         goto debut ;
#line 785 "cplus.met"
#line 785 "cplus.met"
#line 785 "cplus.met"
    }
#line 785 "cplus.met"
#line 787 "cplus.met"
    if ( hasGotError && ! _inhibit_exit_on_error  ){
#line 787 "cplus.met"
#line 788 "cplus.met"
         exit (-1);
#line 788 "cplus.met"
    }
#line 788 "cplus.met"
#line 789 "cplus.met"
    {
#line 789 "cplus.met"
        PPTREE _ptTree0=0;
#line 789 "cplus.met"
        {
#line 789 "cplus.met"
            PPTREE _ptRes1=0;
#line 789 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 789 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 789 "cplus.met"
            _ptTree0=_ptRes1;
#line 789 "cplus.met"
        }
#line 789 "cplus.met"
        _retValue =_ptTree0;
#line 789 "cplus.met"
        goto program_ret;
#line 789 "cplus.met"
    }
#line 789 "cplus.met"
#line 789 "cplus.met"
#line 789 "cplus.met"

#line 790 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 790 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 790 "cplus.met"
return((PPTREE) 0);
#line 790 "cplus.met"

#line 790 "cplus.met"
program_exit :
#line 790 "cplus.met"

#line 790 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 790 "cplus.met"
    _funcLevel--;
#line 790 "cplus.met"
    return((PPTREE) -1) ;
#line 790 "cplus.met"

#line 790 "cplus.met"
program_ret :
#line 790 "cplus.met"
    
#line 790 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 790 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 790 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 790 "cplus.met"
    return _retValue ;
#line 790 "cplus.met"
}
#line 790 "cplus.met"

#line 790 "cplus.met"
#line 1853 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1853 "cplus.met"
{
#line 1853 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1853 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1853 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1853 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1853 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1853 "cplus.met"
#line 1853 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1853 "cplus.met"
#line 1853 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1853 "cplus.met"
#line 1855 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1855 "cplus.met"
    switch( lexEl.Value) {
#line 1855 "cplus.met"
#line 1856 "cplus.met"
        case PUBLIC : 
#line 1856 "cplus.met"
            tokenAhead = 0 ;
#line 1856 "cplus.met"
            CommTerm();
#line 1856 "cplus.met"
#line 1856 "cplus.met"
            {
#line 1856 "cplus.met"
                PPTREE _ptRes0=0;
#line 1856 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1856 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1856 "cplus.met"
                retTree=_ptRes0;
#line 1856 "cplus.met"
            }
#line 1856 "cplus.met"
            break;
#line 1856 "cplus.met"
#line 1857 "cplus.met"
        case PROTECTED : 
#line 1857 "cplus.met"
            tokenAhead = 0 ;
#line 1857 "cplus.met"
            CommTerm();
#line 1857 "cplus.met"
#line 1857 "cplus.met"
            {
#line 1857 "cplus.met"
                PPTREE _ptRes0=0;
#line 1857 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1857 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1857 "cplus.met"
                retTree=_ptRes0;
#line 1857 "cplus.met"
            }
#line 1857 "cplus.met"
            break;
#line 1857 "cplus.met"
#line 1858 "cplus.met"
        case PRIVATE : 
#line 1858 "cplus.met"
            tokenAhead = 0 ;
#line 1858 "cplus.met"
            CommTerm();
#line 1858 "cplus.met"
#line 1858 "cplus.met"
            {
#line 1858 "cplus.met"
                PPTREE _ptRes0=0;
#line 1858 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1858 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1858 "cplus.met"
                retTree=_ptRes0;
#line 1858 "cplus.met"
            }
#line 1858 "cplus.met"
            break;
#line 1858 "cplus.met"
        default :
#line 1858 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1858 "cplus.met"
            break;
#line 1858 "cplus.met"
    }
#line 1858 "cplus.met"
#line 1860 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1860 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1860 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1860 "cplus.met"
    } else {
#line 1860 "cplus.met"
        tokenAhead = 0 ;
#line 1860 "cplus.met"
    }
#line 1860 "cplus.met"
#line 1860 "cplus.met"
    _addlist1 = list ;
#line 1860 "cplus.met"
#line 1861 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 84, cplus)) { 
#line 1861 "cplus.met"
#line 1862 "cplus.met"
#line 1862 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1862 "cplus.met"
#line 1862 "cplus.met"
        if (list){
#line 1862 "cplus.met"
#line 1862 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1862 "cplus.met"
        } else {
#line 1862 "cplus.met"
#line 1862 "cplus.met"
            list = _addlist1 ;
#line 1862 "cplus.met"
        }
#line 1862 "cplus.met"
    } 
#line 1862 "cplus.met"
#line 1863 "cplus.met"
    {
#line 1863 "cplus.met"
        PPTREE _ptTree0=0;
#line 1863 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1863 "cplus.met"
        _retValue =_ptTree0;
#line 1863 "cplus.met"
        goto protect_declare_ret;
#line 1863 "cplus.met"
    }
#line 1863 "cplus.met"
#line 1863 "cplus.met"
#line 1863 "cplus.met"

#line 1864 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1864 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1864 "cplus.met"
return((PPTREE) 0);
#line 1864 "cplus.met"

#line 1864 "cplus.met"
protect_declare_exit :
#line 1864 "cplus.met"

#line 1864 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1864 "cplus.met"
    _funcLevel--;
#line 1864 "cplus.met"
    return((PPTREE) -1) ;
#line 1864 "cplus.met"

#line 1864 "cplus.met"
protect_declare_ret :
#line 1864 "cplus.met"
    
#line 1864 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1864 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1864 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1864 "cplus.met"
    return _retValue ;
#line 1864 "cplus.met"
}
#line 1864 "cplus.met"

#line 1864 "cplus.met"
#line 2180 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2180 "cplus.met"
{
#line 2180 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2180 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2180 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2180 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2180 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2180 "cplus.met"
#line 2180 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2180 "cplus.met"
#line 2182 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2182 "cplus.met"
    switch( lexEl.Value) {
#line 2182 "cplus.met"
#line 2185 "cplus.met"
        case ETOI : 
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
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2185 "cplus.met"
                retTree=_ptRes0;
#line 2185 "cplus.met"
            }
#line 2185 "cplus.met"
#line 2186 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 31, cplus)){
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
        case ETCO : 
#line 2192 "cplus.met"
            tokenAhead = 0 ;
#line 2192 "cplus.met"
            CommTerm();
#line 2192 "cplus.met"
#line 2191 "cplus.met"
#line 2192 "cplus.met"
            {
#line 2192 "cplus.met"
                PPTREE _ptRes0=0;
#line 2192 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2192 "cplus.met"
                retTree=_ptRes0;
#line 2192 "cplus.met"
            }
#line 2192 "cplus.met"
#line 2193 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 31, cplus)){
#line 2193 "cplus.met"
#line 2194 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2194 "cplus.met"
#line 2194 "cplus.met"
            }
#line 2194 "cplus.met"
#line 2195 "cplus.met"
            {
#line 2195 "cplus.met"
                _retValue = retTree ;
#line 2195 "cplus.met"
                goto ptr_operator_ret;
#line 2195 "cplus.met"
                
#line 2195 "cplus.met"
            }
#line 2195 "cplus.met"
#line 2195 "cplus.met"
            break;
#line 2195 "cplus.met"
#line 2199 "cplus.met"
        case DPOIDPOI : 
#line 2199 "cplus.met"
#line 2198 "cplus.met"
#line 2199 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2199 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2199 "cplus.met"
            }
#line 2199 "cplus.met"
#line 2199 "cplus.met"
            break;
#line 2199 "cplus.met"
#line 2201 "cplus.met"
        case META : 
#line 2201 "cplus.met"
        case IDENT : 
#line 2201 "cplus.met"
#line 2202 "cplus.met"
#line 2203 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2203 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2203 "cplus.met"
            }
#line 2203 "cplus.met"
#line 2203 "cplus.met"
            break;
#line 2203 "cplus.met"
        default :
#line 2203 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2203 "cplus.met"
            break;
#line 2203 "cplus.met"
    }
#line 2203 "cplus.met"
#line 2206 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 31, cplus)){
#line 2206 "cplus.met"
#line 2207 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2207 "cplus.met"
#line 2207 "cplus.met"
    }
#line 2207 "cplus.met"
#line 2208 "cplus.met"
    {
#line 2208 "cplus.met"
        _retValue = retour ;
#line 2208 "cplus.met"
        goto ptr_operator_ret;
#line 2208 "cplus.met"
        
#line 2208 "cplus.met"
    }
#line 2208 "cplus.met"
#line 2208 "cplus.met"
#line 2208 "cplus.met"

#line 2209 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2209 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2209 "cplus.met"
return((PPTREE) 0);
#line 2209 "cplus.met"

#line 2209 "cplus.met"
ptr_operator_exit :
#line 2209 "cplus.met"

#line 2209 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2209 "cplus.met"
    _funcLevel--;
#line 2209 "cplus.met"
    return((PPTREE) -1) ;
#line 2209 "cplus.met"

#line 2209 "cplus.met"
ptr_operator_ret :
#line 2209 "cplus.met"
    
#line 2209 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2209 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2209 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2209 "cplus.met"
    return _retValue ;
#line 2209 "cplus.met"
}
#line 2209 "cplus.met"

#line 2209 "cplus.met"
#line 1793 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 1793 "cplus.met"
{
#line 1793 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1793 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1793 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1793 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 1793 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1793 "cplus.met"
#line 1793 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 1793 "cplus.met"
#line 1795 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 1795 "cplus.met"
#line 1796 "cplus.met"
        {
#line 1796 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1796 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 1796 "cplus.met"
            {
#line 1796 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1796 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1796 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1796 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1796 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 1796 "cplus.met"
                } else {
#line 1796 "cplus.met"
                    tokenAhead = 0 ;
#line 1796 "cplus.met"
                }
#line 1796 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1796 "cplus.met"
                _ptTree0=_ptRes1;
#line 1796 "cplus.met"
            }
#line 1796 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1796 "cplus.met"
            retTree=_ptRes0;
#line 1796 "cplus.met"
        }
#line 1796 "cplus.met"
    } else {
#line 1796 "cplus.met"
#line 1798 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(simple_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1798 "cplus.met"
            MulFreeTree(4,inter,retTree,templateVal,val);
            PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1798 "cplus.met"
        }
#line 1798 "cplus.met"
    }
#line 1798 "cplus.met"
#line 1799 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1799 "cplus.met"
#line 1800 "cplus.met"
#line 1801 "cplus.met"
        {
#line 1801 "cplus.met"
            PPTREE _ptRes0=0;
#line 1801 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 1801 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 1801 "cplus.met"
            retTree=_ptRes0;
#line 1801 "cplus.met"
        }
#line 1801 "cplus.met"
#line 1802 "cplus.met"
        inter = retTree ;
#line 1802 "cplus.met"
#line 1803 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 1803 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 118, cplus))) { 
#line 1803 "cplus.met"
#line 1804 "cplus.met"
#line 1805 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 1805 "cplus.met"
#line 1806 "cplus.met"
                {
#line 1806 "cplus.met"
                    PPTREE _ptRes0=0;
#line 1806 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 1806 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 1806 "cplus.met"
                    val=_ptRes0;
#line 1806 "cplus.met"
                }
#line 1806 "cplus.met"
            }
#line 1806 "cplus.met"
#line 1807 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 1807 "cplus.met"
#line 1808 "cplus.met"
            inter = val ;
#line 1808 "cplus.met"
#line 1808 "cplus.met"
        } 
#line 1808 "cplus.met"
#line 1808 "cplus.met"
#line 1809 "cplus.met"
    }
#line 1809 "cplus.met"
#line 1811 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 145, cplus)){
#line 1811 "cplus.met"
#line 1812 "cplus.met"
#line 1813 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 1813 "cplus.met"
#line 1814 "cplus.met"
        retTree = templateVal ;
#line 1814 "cplus.met"
#line 1815 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 1815 "cplus.met"
#line 1816 "cplus.met"
            {
#line 1816 "cplus.met"
                PPTREE _ptTree0=0;
#line 1816 "cplus.met"
                {
#line 1816 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1816 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 1816 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 1816 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 1816 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 1816 "cplus.met"
                    }
#line 1816 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1816 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1816 "cplus.met"
                }
#line 1816 "cplus.met"
                _retValue =_ptTree0;
#line 1816 "cplus.met"
                goto qualified_name_ret;
#line 1816 "cplus.met"
            }
#line 1816 "cplus.met"
        } else {
#line 1816 "cplus.met"
#line 1818 "cplus.met"
            {
#line 1818 "cplus.met"
                _retValue = retTree ;
#line 1818 "cplus.met"
                goto qualified_name_ret;
#line 1818 "cplus.met"
                
#line 1818 "cplus.met"
            }
#line 1818 "cplus.met"
        }
#line 1818 "cplus.met"
#line 1818 "cplus.met"
#line 1818 "cplus.met"
    }
#line 1818 "cplus.met"
#line 1820 "cplus.met"
    {
#line 1820 "cplus.met"
        _retValue = retTree ;
#line 1820 "cplus.met"
        goto qualified_name_ret;
#line 1820 "cplus.met"
        
#line 1820 "cplus.met"
    }
#line 1820 "cplus.met"
#line 1820 "cplus.met"
#line 1820 "cplus.met"

#line 1821 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1821 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1821 "cplus.met"
return((PPTREE) 0);
#line 1821 "cplus.met"

#line 1821 "cplus.met"
qualified_name_exit :
#line 1821 "cplus.met"

#line 1821 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 1821 "cplus.met"
    _funcLevel--;
#line 1821 "cplus.met"
    return((PPTREE) -1) ;
#line 1821 "cplus.met"

#line 1821 "cplus.met"
qualified_name_ret :
#line 1821 "cplus.met"
    
#line 1821 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 1821 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1821 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1821 "cplus.met"
    return _retValue ;
#line 1821 "cplus.met"
}
#line 1821 "cplus.met"

#line 1821 "cplus.met"
#line 1767 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 1767 "cplus.met"
{
#line 1767 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1767 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1767 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1767 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 1767 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1767 "cplus.met"
#line 1768 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1768 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 1768 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 1768 "cplus.met"
    } else {
#line 1768 "cplus.met"
        tokenAhead = 0 ;
#line 1768 "cplus.met"
    }
#line 1768 "cplus.met"
#line 1769 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1769 "cplus.met"
    switch( lexEl.Value) {
#line 1769 "cplus.met"
#line 1770 "cplus.met"
        case TILD : 
#line 1770 "cplus.met"
            tokenAhead = 0 ;
#line 1770 "cplus.met"
            CommTerm();
#line 1770 "cplus.met"
#line 1770 "cplus.met"
            {
#line 1770 "cplus.met"
                PPTREE _ptTree0=0;
#line 1770 "cplus.met"
                {
#line 1770 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1770 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 1770 "cplus.met"
                    {
#line 1770 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1770 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 1770 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1770 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 1770 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 1770 "cplus.met"
                        } else {
#line 1770 "cplus.met"
                            tokenAhead = 0 ;
#line 1770 "cplus.met"
                        }
#line 1770 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1770 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1770 "cplus.met"
                    }
#line 1770 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1770 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1770 "cplus.met"
                }
#line 1770 "cplus.met"
                _retValue =_ptTree0;
#line 1770 "cplus.met"
                goto qualified_name_elem_ret;
#line 1770 "cplus.met"
            }
#line 1770 "cplus.met"
            break;
#line 1770 "cplus.met"
#line 1771 "cplus.met"
        case META : 
#line 1771 "cplus.met"
        case IDENT : 
#line 1771 "cplus.met"
#line 1771 "cplus.met"
            {
#line 1771 "cplus.met"
                PPTREE _ptTree0=0;
#line 1771 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1771 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1771 "cplus.met"
                }
#line 1771 "cplus.met"
                _retValue =_ptTree0;
#line 1771 "cplus.met"
                goto qualified_name_elem_ret;
#line 1771 "cplus.met"
            }
#line 1771 "cplus.met"
            break;
#line 1771 "cplus.met"
#line 1772 "cplus.met"
        case OPERATOR : 
#line 1772 "cplus.met"
#line 1772 "cplus.met"
            {
#line 1772 "cplus.met"
                PPTREE _ptTree0=0;
#line 1772 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 1772 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 1772 "cplus.met"
                }
#line 1772 "cplus.met"
                _retValue =_ptTree0;
#line 1772 "cplus.met"
                goto qualified_name_elem_ret;
#line 1772 "cplus.met"
            }
#line 1772 "cplus.met"
            break;
#line 1772 "cplus.met"
        default :
#line 1772 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 1772 "cplus.met"
            break;
#line 1772 "cplus.met"
    }
#line 1772 "cplus.met"
#line 1772 "cplus.met"
#line 1773 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1773 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1773 "cplus.met"
return((PPTREE) 0);
#line 1773 "cplus.met"

#line 1773 "cplus.met"
qualified_name_elem_exit :
#line 1773 "cplus.met"

#line 1773 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 1773 "cplus.met"
    _funcLevel--;
#line 1773 "cplus.met"
    return((PPTREE) -1) ;
#line 1773 "cplus.met"

#line 1773 "cplus.met"
qualified_name_elem_ret :
#line 1773 "cplus.met"
    
#line 1773 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 1773 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1773 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1773 "cplus.met"
    return _retValue ;
#line 1773 "cplus.met"
}
#line 1773 "cplus.met"

#line 1773 "cplus.met"
#line 803 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 803 "cplus.met"
{
#line 803 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 803 "cplus.met"
    int _value,_nbPre = 0 ;
#line 803 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 803 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 803 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 803 "cplus.met"
#line 803 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 803 "cplus.met"
#line 805 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 120, cplus)) && 
#line 805 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 805 "cplus.met"
#line 806 "cplus.met"
#line 807 "cplus.met"
        FreeTree (valTree );
#line 807 "cplus.met"
#line 808 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 808 "cplus.met"
#line 808 "cplus.met"
    } 
#line 808 "cplus.met"
#line 810 "cplus.met"
    ExtUnputBuf();
#line 810 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 810 "cplus.met"
        NextChar() ;
#line 810 "cplus.met"
    ptStockBuf = -1;
#line 810 "cplus.met"
    lexEl.Erase();
#line 810 "cplus.met"
    tokenAhead = 0;
#line 810 "cplus.met"
    oldLine=line,oldCol=col;
#line 810 "cplus.met"
    if ( !lexCallLex) {
#line 810 "cplus.met"
        PUT_COORD_CALL;
#line 810 "cplus.met"
    }
#line 810 "cplus.met"
#line 811 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 811 "cplus.met"
#line 812 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 812 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 812 "cplus.met"
        }
#line 812 "cplus.met"
    }
#line 812 "cplus.met"
#line 813 "cplus.met"
    {
#line 813 "cplus.met"
        _retValue = list ;
#line 813 "cplus.met"
        goto quick_prog_ret;
#line 813 "cplus.met"
        
#line 813 "cplus.met"
    }
#line 813 "cplus.met"
#line 813 "cplus.met"
#line 813 "cplus.met"

#line 814 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 814 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 814 "cplus.met"
return((PPTREE) 0);
#line 814 "cplus.met"

#line 814 "cplus.met"
quick_prog_exit :
#line 814 "cplus.met"

#line 814 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 814 "cplus.met"
    _funcLevel--;
#line 814 "cplus.met"
    return((PPTREE) -1) ;
#line 814 "cplus.met"

#line 814 "cplus.met"
quick_prog_ret :
#line 814 "cplus.met"
    
#line 814 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 814 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 814 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 814 "cplus.met"
    return _retValue ;
#line 814 "cplus.met"
}
#line 814 "cplus.met"

#line 814 "cplus.met"
#line 836 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 836 "cplus.met"
{
#line 836 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 836 "cplus.met"
    int _value,_nbPre = 0 ;
#line 836 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 836 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 836 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 836 "cplus.met"
#line 836 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 836 "cplus.met"
#line 838 "cplus.met"
     debut :
#line 838 "cplus.met"
#line 839 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 839 "cplus.met"
    switch( lexEl.Value) {
#line 839 "cplus.met"
#line 840 "cplus.met"
        case META : 
#line 840 "cplus.met"
        case INCLUDE_DIR : 
#line 840 "cplus.met"
#line 840 "cplus.met"
            {
#line 840 "cplus.met"
                PPTREE _ptTree0=0;
#line 840 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 840 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 840 "cplus.met"
                }
#line 840 "cplus.met"
                _retValue =_ptTree0;
#line 840 "cplus.met"
                goto quick_prog_elem_ret;
#line 840 "cplus.met"
            }
#line 840 "cplus.met"
            break;
#line 840 "cplus.met"
#line 841 "cplus.met"
        case PRAGMA_DIR : 
#line 841 "cplus.met"
            tokenAhead = 0 ;
#line 841 "cplus.met"
            CommTerm();
#line 841 "cplus.met"
#line 842 "cplus.met"
#line 843 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 125, cplus)){
#line 843 "cplus.met"
#line 843 "cplus.met"
            }
#line 843 "cplus.met"
#line 845 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 845 "cplus.met"
            switch( lexEl.Value) {
#line 845 "cplus.met"
#line 846 "cplus.met"
                case META : 
#line 846 "cplus.met"
                case PRAGMA_CONFIG : 
#line 846 "cplus.met"
                    tokenAhead = 0 ;
#line 846 "cplus.met"
                    CommTerm();
#line 846 "cplus.met"
#line 847 "cplus.met"
#line 848 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 848 "cplus.met"
                    switch( lexEl.Value) {
#line 848 "cplus.met"
#line 849 "cplus.met"
                        case META : 
#line 849 "cplus.met"
                        case PRAGMA_TAB : 
#line 849 "cplus.met"
                            tokenAhead = 0 ;
#line 849 "cplus.met"
                            CommTerm();
#line 849 "cplus.met"
#line 850 "cplus.met"
#line 851 "cplus.met"
                            {
#line 851 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 851 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 851 "cplus.met"
                                {
#line 851 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 851 "cplus.met"
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 851 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 851 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 851 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 851 "cplus.met"
                                    } else {
#line 851 "cplus.met"
                                        tokenAhead = 0 ;
#line 851 "cplus.met"
                                    }
#line 851 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 851 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 851 "cplus.met"
                                }
#line 851 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 851 "cplus.met"
                                retTree=_ptRes0;
#line 851 "cplus.met"
                            }
#line 851 "cplus.met"
#line 852 "cplus.met"
                            AnalyzeTab (retTree );
#line 852 "cplus.met"
#line 853 "cplus.met"
                            {
#line 853 "cplus.met"
                                _retValue = retTree ;
#line 853 "cplus.met"
                                goto quick_prog_elem_ret;
#line 853 "cplus.met"
                                
#line 853 "cplus.met"
                            }
#line 853 "cplus.met"
#line 853 "cplus.met"
                            break;
#line 853 "cplus.met"
#line 855 "cplus.met"
                        case PRAGMA_MODE : 
#line 855 "cplus.met"
                            tokenAhead = 0 ;
#line 855 "cplus.met"
                            CommTerm();
#line 855 "cplus.met"
#line 856 "cplus.met"
#line 857 "cplus.met"
                            {
#line 857 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 857 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 857 "cplus.met"
                                {
#line 857 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 857 "cplus.met"
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
#line 857 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 857 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 857 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 857 "cplus.met"
                                    } else {
#line 857 "cplus.met"
                                        tokenAhead = 0 ;
#line 857 "cplus.met"
                                    }
#line 857 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 857 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 857 "cplus.met"
                                }
#line 857 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 857 "cplus.met"
                                retTree=_ptRes0;
#line 857 "cplus.met"
                            }
#line 857 "cplus.met"
#line 858 "cplus.met"
                            AnalyzeMode (retTree );
#line 858 "cplus.met"
#line 859 "cplus.met"
                            {
#line 859 "cplus.met"
                                _retValue = retTree ;
#line 859 "cplus.met"
                                goto quick_prog_elem_ret;
#line 859 "cplus.met"
                                
#line 859 "cplus.met"
                            }
#line 859 "cplus.met"
#line 859 "cplus.met"
                            break;
#line 859 "cplus.met"
#line 861 "cplus.met"
                        case PRAGMA_ENUM_VERT : 
#line 861 "cplus.met"
                            tokenAhead = 0 ;
#line 861 "cplus.met"
                            CommTerm();
#line 861 "cplus.met"
#line 862 "cplus.met"
#line 863 "cplus.met"
                            {
#line 863 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 863 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 863 "cplus.met"
                                {
#line 863 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 863 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
#line 863 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 863 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 863 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 863 "cplus.met"
                                    } else {
#line 863 "cplus.met"
                                        tokenAhead = 0 ;
#line 863 "cplus.met"
                                    }
#line 863 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 863 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 863 "cplus.met"
                                }
#line 863 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 863 "cplus.met"
                                retTree=_ptRes0;
#line 863 "cplus.met"
                            }
#line 863 "cplus.met"
#line 864 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 864 "cplus.met"
#line 865 "cplus.met"
                            {
#line 865 "cplus.met"
                                _retValue = retTree ;
#line 865 "cplus.met"
                                goto quick_prog_elem_ret;
#line 865 "cplus.met"
                                
#line 865 "cplus.met"
                            }
#line 865 "cplus.met"
#line 865 "cplus.met"
                            break;
#line 865 "cplus.met"
#line 867 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 867 "cplus.met"
                            tokenAhead = 0 ;
#line 867 "cplus.met"
                            CommTerm();
#line 867 "cplus.met"
#line 868 "cplus.met"
#line 869 "cplus.met"
                            {
#line 869 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 869 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 869 "cplus.met"
                                {
#line 869 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 869 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 869 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 869 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 869 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 869 "cplus.met"
                                    } else {
#line 869 "cplus.met"
                                        tokenAhead = 0 ;
#line 869 "cplus.met"
                                    }
#line 869 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 869 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 869 "cplus.met"
                                }
#line 869 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 869 "cplus.met"
                                retTree=_ptRes0;
#line 869 "cplus.met"
                            }
#line 869 "cplus.met"
#line 870 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
#line 870 "cplus.met"
#line 871 "cplus.met"
                            {
#line 871 "cplus.met"
                                _retValue = retTree ;
#line 871 "cplus.met"
                                goto quick_prog_elem_ret;
#line 871 "cplus.met"
                                
#line 871 "cplus.met"
                            }
#line 871 "cplus.met"
#line 871 "cplus.met"
                            break;
#line 871 "cplus.met"
#line 873 "cplus.met"
                        case PRAGMA_TAB_DIRECTIVE : 
#line 873 "cplus.met"
                            tokenAhead = 0 ;
#line 873 "cplus.met"
                            CommTerm();
#line 873 "cplus.met"
#line 874 "cplus.met"
#line 875 "cplus.met"
                            {
#line 875 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 875 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 875 "cplus.met"
                                {
#line 875 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 875 "cplus.met"
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
#line 875 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 875 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 875 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 875 "cplus.met"
                                    } else {
#line 875 "cplus.met"
                                        tokenAhead = 0 ;
#line 875 "cplus.met"
                                    }
#line 875 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 875 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 875 "cplus.met"
                                }
#line 875 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 875 "cplus.met"
                                retTree=_ptRes0;
#line 875 "cplus.met"
                            }
#line 875 "cplus.met"
#line 876 "cplus.met"
                            AnalyzeTabDirective (retTree );
#line 876 "cplus.met"
#line 877 "cplus.met"
                            {
#line 877 "cplus.met"
                                _retValue = retTree ;
#line 877 "cplus.met"
                                goto quick_prog_elem_ret;
#line 877 "cplus.met"
                                
#line 877 "cplus.met"
                            }
#line 877 "cplus.met"
#line 877 "cplus.met"
                            break;
#line 877 "cplus.met"
#line 879 "cplus.met"
                        case PRAGMA_SPACE_ARROW : 
#line 879 "cplus.met"
                            tokenAhead = 0 ;
#line 879 "cplus.met"
                            CommTerm();
#line 879 "cplus.met"
#line 880 "cplus.met"
#line 881 "cplus.met"
                            {
#line 881 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 881 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 881 "cplus.met"
                                {
#line 881 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 881 "cplus.met"
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
#line 881 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 881 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 881 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 881 "cplus.met"
                                    } else {
#line 881 "cplus.met"
                                        tokenAhead = 0 ;
#line 881 "cplus.met"
                                    }
#line 881 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 881 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 881 "cplus.met"
                                }
#line 881 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 881 "cplus.met"
                                retTree=_ptRes0;
#line 881 "cplus.met"
                            }
#line 881 "cplus.met"
#line 882 "cplus.met"
                            AnalyzeSpaceArrow (retTree );
#line 882 "cplus.met"
#line 883 "cplus.met"
                            {
#line 883 "cplus.met"
                                _retValue = retTree ;
#line 883 "cplus.met"
                                goto quick_prog_elem_ret;
#line 883 "cplus.met"
                                
#line 883 "cplus.met"
                            }
#line 883 "cplus.met"
#line 883 "cplus.met"
                            break;
#line 883 "cplus.met"
#line 885 "cplus.met"
                        case PRAGMA_BRACE_ALIGN : 
#line 885 "cplus.met"
                            tokenAhead = 0 ;
#line 885 "cplus.met"
                            CommTerm();
#line 885 "cplus.met"
#line 886 "cplus.met"
#line 887 "cplus.met"
                            {
#line 887 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 887 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 887 "cplus.met"
                                {
#line 887 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 887 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 887 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 887 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 887 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 887 "cplus.met"
                                    } else {
#line 887 "cplus.met"
                                        tokenAhead = 0 ;
#line 887 "cplus.met"
                                    }
#line 887 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 887 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 887 "cplus.met"
                                }
#line 887 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 887 "cplus.met"
                                retTree=_ptRes0;
#line 887 "cplus.met"
                            }
#line 887 "cplus.met"
#line 888 "cplus.met"
                            AnalyzeBraceAlign (retTree );
#line 888 "cplus.met"
#line 889 "cplus.met"
                            {
#line 889 "cplus.met"
                                _retValue = retTree ;
#line 889 "cplus.met"
                                goto quick_prog_elem_ret;
#line 889 "cplus.met"
                                
#line 889 "cplus.met"
                            }
#line 889 "cplus.met"
#line 889 "cplus.met"
                            break;
#line 889 "cplus.met"
#line 891 "cplus.met"
                        case PRAGMA_SIMPLIFY : 
#line 891 "cplus.met"
                            tokenAhead = 0 ;
#line 891 "cplus.met"
                            CommTerm();
#line 891 "cplus.met"
#line 892 "cplus.met"
#line 893 "cplus.met"
                            {
#line 893 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 893 "cplus.met"
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 893 "cplus.met"
                                {
#line 893 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 893 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 893 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 893 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 893 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 893 "cplus.met"
                                    } else {
#line 893 "cplus.met"
                                        tokenAhead = 0 ;
#line 893 "cplus.met"
                                    }
#line 893 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 893 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 893 "cplus.met"
                                }
#line 893 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 893 "cplus.met"
                                retTree=_ptRes0;
#line 893 "cplus.met"
                            }
#line 893 "cplus.met"
#line 894 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 894 "cplus.met"
#line 895 "cplus.met"
                            {
#line 895 "cplus.met"
                                _retValue = retTree ;
#line 895 "cplus.met"
                                goto quick_prog_elem_ret;
#line 895 "cplus.met"
                                
#line 895 "cplus.met"
                            }
#line 895 "cplus.met"
#line 895 "cplus.met"
                            break;
#line 895 "cplus.met"
#line 897 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 897 "cplus.met"
                            tokenAhead = 0 ;
#line 897 "cplus.met"
                            CommTerm();
#line 897 "cplus.met"
#line 898 "cplus.met"
#line 899 "cplus.met"
                            {
#line 899 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 899 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 899 "cplus.met"
                                {
#line 899 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 899 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 899 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 899 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 899 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 899 "cplus.met"
                                    } else {
#line 899 "cplus.met"
                                        tokenAhead = 0 ;
#line 899 "cplus.met"
                                    }
#line 899 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 899 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 899 "cplus.met"
                                }
#line 899 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 899 "cplus.met"
                                retTree=_ptRes0;
#line 899 "cplus.met"
                            }
#line 899 "cplus.met"
#line 900 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
#line 900 "cplus.met"
#line 901 "cplus.met"
                            {
#line 901 "cplus.met"
                                _retValue = retTree ;
#line 901 "cplus.met"
                                goto quick_prog_elem_ret;
#line 901 "cplus.met"
                                
#line 901 "cplus.met"
                            }
#line 901 "cplus.met"
#line 901 "cplus.met"
                            break;
#line 901 "cplus.met"
#line 903 "cplus.met"
                        case PRAGMA_ASSIGN_ALIGN : 
#line 903 "cplus.met"
                            tokenAhead = 0 ;
#line 903 "cplus.met"
                            CommTerm();
#line 903 "cplus.met"
#line 904 "cplus.met"
#line 905 "cplus.met"
                            {
#line 905 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 905 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 905 "cplus.met"
                                {
#line 905 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 905 "cplus.met"
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 905 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 905 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 905 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 905 "cplus.met"
                                    } else {
#line 905 "cplus.met"
                                        tokenAhead = 0 ;
#line 905 "cplus.met"
                                    }
#line 905 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 905 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 905 "cplus.met"
                                }
#line 905 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 905 "cplus.met"
                                retTree=_ptRes0;
#line 905 "cplus.met"
                            }
#line 905 "cplus.met"
#line 906 "cplus.met"
                            AnalyzeAssignAlign (retTree );
#line 906 "cplus.met"
#line 907 "cplus.met"
                            {
#line 907 "cplus.met"
                                _retValue = retTree ;
#line 907 "cplus.met"
                                goto quick_prog_elem_ret;
#line 907 "cplus.met"
                                
#line 907 "cplus.met"
                            }
#line 907 "cplus.met"
#line 907 "cplus.met"
                            break;
#line 907 "cplus.met"
#line 909 "cplus.met"
                        case PRAGMA_DECL_ALIGN : 
#line 909 "cplus.met"
                            tokenAhead = 0 ;
#line 909 "cplus.met"
                            CommTerm();
#line 909 "cplus.met"
#line 910 "cplus.met"
#line 911 "cplus.met"
                            {
#line 911 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 911 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 911 "cplus.met"
                                {
#line 911 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 911 "cplus.met"
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 911 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 911 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 911 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 911 "cplus.met"
                                    } else {
#line 911 "cplus.met"
                                        tokenAhead = 0 ;
#line 911 "cplus.met"
                                    }
#line 911 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 911 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 911 "cplus.met"
                                }
#line 911 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 911 "cplus.met"
                                retTree=_ptRes0;
#line 911 "cplus.met"
                            }
#line 911 "cplus.met"
#line 912 "cplus.met"
                            AnalyzeDeclAlign (retTree );
#line 912 "cplus.met"
#line 913 "cplus.met"
                            {
#line 913 "cplus.met"
                                _retValue = retTree ;
#line 913 "cplus.met"
                                goto quick_prog_elem_ret;
#line 913 "cplus.met"
                                
#line 913 "cplus.met"
                            }
#line 913 "cplus.met"
#line 913 "cplus.met"
                            break;
#line 913 "cplus.met"
#line 915 "cplus.met"
                        case PRAGMA_MARGIN : 
#line 915 "cplus.met"
                            tokenAhead = 0 ;
#line 915 "cplus.met"
                            CommTerm();
#line 915 "cplus.met"
#line 916 "cplus.met"
#line 917 "cplus.met"
                            {
#line 917 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 917 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 917 "cplus.met"
                                {
#line 917 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 917 "cplus.met"
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 917 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 917 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 917 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 917 "cplus.met"
                                    } else {
#line 917 "cplus.met"
                                        tokenAhead = 0 ;
#line 917 "cplus.met"
                                    }
#line 917 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 917 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 917 "cplus.met"
                                }
#line 917 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 917 "cplus.met"
                                retTree=_ptRes0;
#line 917 "cplus.met"
                            }
#line 917 "cplus.met"
#line 918 "cplus.met"
                            AnalyzeMargin (retTree );
#line 918 "cplus.met"
#line 919 "cplus.met"
                            {
#line 919 "cplus.met"
                                _retValue = retTree ;
#line 919 "cplus.met"
                                goto quick_prog_elem_ret;
#line 919 "cplus.met"
                                
#line 919 "cplus.met"
                            }
#line 919 "cplus.met"
#line 919 "cplus.met"
                            break;
#line 919 "cplus.met"
#line 921 "cplus.met"
                        case PRAGMA_COMMENT_START : 
#line 921 "cplus.met"
                            tokenAhead = 0 ;
#line 921 "cplus.met"
                            CommTerm();
#line 921 "cplus.met"
#line 922 "cplus.met"
#line 923 "cplus.met"
                            {
#line 923 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 923 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 923 "cplus.met"
                                {
#line 923 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 923 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_START, 1);
#line 923 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 923 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 923 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 923 "cplus.met"
                                    } else {
#line 923 "cplus.met"
                                        tokenAhead = 0 ;
#line 923 "cplus.met"
                                    }
#line 923 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 923 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 923 "cplus.met"
                                }
#line 923 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 923 "cplus.met"
                                retTree=_ptRes0;
#line 923 "cplus.met"
                            }
#line 923 "cplus.met"
#line 924 "cplus.met"
                            AnalyzeComment (retTree );
#line 924 "cplus.met"
#line 925 "cplus.met"
                            {
#line 925 "cplus.met"
                                _retValue = retTree ;
#line 925 "cplus.met"
                                goto quick_prog_elem_ret;
#line 925 "cplus.met"
                                
#line 925 "cplus.met"
                            }
#line 925 "cplus.met"
#line 925 "cplus.met"
                            break;
#line 925 "cplus.met"
#line 927 "cplus.met"
                        case PRAGMA_COMMENT_MIDDLE : 
#line 927 "cplus.met"
                            tokenAhead = 0 ;
#line 927 "cplus.met"
                            CommTerm();
#line 927 "cplus.met"
#line 928 "cplus.met"
#line 929 "cplus.met"
                            {
#line 929 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 929 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 929 "cplus.met"
                                {
#line 929 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 929 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 929 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 929 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 929 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 929 "cplus.met"
                                    } else {
#line 929 "cplus.met"
                                        tokenAhead = 0 ;
#line 929 "cplus.met"
                                    }
#line 929 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 929 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 929 "cplus.met"
                                }
#line 929 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 929 "cplus.met"
                                retTree=_ptRes0;
#line 929 "cplus.met"
                            }
#line 929 "cplus.met"
#line 930 "cplus.met"
                            AnalyzeComment (retTree );
#line 930 "cplus.met"
#line 931 "cplus.met"
                            {
#line 931 "cplus.met"
                                _retValue = retTree ;
#line 931 "cplus.met"
                                goto quick_prog_elem_ret;
#line 931 "cplus.met"
                                
#line 931 "cplus.met"
                            }
#line 931 "cplus.met"
#line 931 "cplus.met"
                            break;
#line 931 "cplus.met"
#line 933 "cplus.met"
                        case PRAGMA_COMMENT_END : 
#line 933 "cplus.met"
                            tokenAhead = 0 ;
#line 933 "cplus.met"
                            CommTerm();
#line 933 "cplus.met"
#line 934 "cplus.met"
#line 935 "cplus.met"
                            {
#line 935 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 935 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 935 "cplus.met"
                                {
#line 935 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 935 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_END, 1);
#line 935 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 935 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 935 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 935 "cplus.met"
                                    } else {
#line 935 "cplus.met"
                                        tokenAhead = 0 ;
#line 935 "cplus.met"
                                    }
#line 935 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 935 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 935 "cplus.met"
                                }
#line 935 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 935 "cplus.met"
                                retTree=_ptRes0;
#line 935 "cplus.met"
                            }
#line 935 "cplus.met"
#line 936 "cplus.met"
                            AnalyzeComment (retTree );
#line 936 "cplus.met"
#line 937 "cplus.met"
                            {
#line 937 "cplus.met"
                                _retValue = retTree ;
#line 937 "cplus.met"
                                goto quick_prog_elem_ret;
#line 937 "cplus.met"
                                
#line 937 "cplus.met"
                            }
#line 937 "cplus.met"
#line 937 "cplus.met"
                            break;
#line 937 "cplus.met"
#line 939 "cplus.met"
                        case PRAGMA_COMMENT_PLUS : 
#line 939 "cplus.met"
                            tokenAhead = 0 ;
#line 939 "cplus.met"
                            CommTerm();
#line 939 "cplus.met"
#line 940 "cplus.met"
#line 941 "cplus.met"
                            {
#line 941 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 941 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 941 "cplus.met"
                                {
#line 941 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 941 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 941 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 941 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 941 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 941 "cplus.met"
                                    } else {
#line 941 "cplus.met"
                                        tokenAhead = 0 ;
#line 941 "cplus.met"
                                    }
#line 941 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 941 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 941 "cplus.met"
                                }
#line 941 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 941 "cplus.met"
                                retTree=_ptRes0;
#line 941 "cplus.met"
                            }
#line 941 "cplus.met"
#line 942 "cplus.met"
                            AnalyzeComment (retTree );
#line 942 "cplus.met"
#line 943 "cplus.met"
                            {
#line 943 "cplus.met"
                                _retValue = retTree ;
#line 943 "cplus.met"
                                goto quick_prog_elem_ret;
#line 943 "cplus.met"
                                
#line 943 "cplus.met"
                            }
#line 943 "cplus.met"
#line 943 "cplus.met"
                            break;
#line 943 "cplus.met"
#line 945 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 945 "cplus.met"
                            tokenAhead = 0 ;
#line 945 "cplus.met"
                            CommTerm();
#line 945 "cplus.met"
#line 946 "cplus.met"
#line 947 "cplus.met"
                            {
#line 947 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 947 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 947 "cplus.met"
                                {
#line 947 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 947 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 947 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 947 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 947 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 947 "cplus.met"
                                    } else {
#line 947 "cplus.met"
                                        tokenAhead = 0 ;
#line 947 "cplus.met"
                                    }
#line 947 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 947 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 947 "cplus.met"
                                }
#line 947 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 947 "cplus.met"
                                retTree=_ptRes0;
#line 947 "cplus.met"
                            }
#line 947 "cplus.met"
#line 948 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
#line 948 "cplus.met"
#line 949 "cplus.met"
                            {
#line 949 "cplus.met"
                                _retValue = retTree ;
#line 949 "cplus.met"
                                goto quick_prog_elem_ret;
#line 949 "cplus.met"
                                
#line 949 "cplus.met"
                            }
#line 949 "cplus.met"
#line 949 "cplus.met"
                            break;
#line 949 "cplus.met"
#line 951 "cplus.met"
                        case PRAGMA_FUNC_HEADER : 
#line 951 "cplus.met"
                            tokenAhead = 0 ;
#line 951 "cplus.met"
                            CommTerm();
#line 951 "cplus.met"
#line 952 "cplus.met"
#line 953 "cplus.met"
                            {
#line 953 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 953 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 953 "cplus.met"
                                {
#line 953 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 953 "cplus.met"
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 953 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 953 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 953 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 953 "cplus.met"
                                    } else {
#line 953 "cplus.met"
                                        tokenAhead = 0 ;
#line 953 "cplus.met"
                                    }
#line 953 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 953 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 953 "cplus.met"
                                }
#line 953 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 953 "cplus.met"
                                retTree=_ptRes0;
#line 953 "cplus.met"
                            }
#line 953 "cplus.met"
#line 954 "cplus.met"
                            AnalyzeFuncHeader (retTree );
#line 954 "cplus.met"
#line 955 "cplus.met"
                            {
#line 955 "cplus.met"
                                _retValue = retTree ;
#line 955 "cplus.met"
                                goto quick_prog_elem_ret;
#line 955 "cplus.met"
                                
#line 955 "cplus.met"
                            }
#line 955 "cplus.met"
#line 955 "cplus.met"
                            break;
#line 955 "cplus.met"
#line 957 "cplus.met"
                        case PRAGMA_PARAMETERS : 
#line 957 "cplus.met"
                            tokenAhead = 0 ;
#line 957 "cplus.met"
                            CommTerm();
#line 957 "cplus.met"
#line 958 "cplus.met"
#line 959 "cplus.met"
                            {
#line 959 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 959 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 959 "cplus.met"
                                {
#line 959 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 959 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 959 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 959 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 959 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 959 "cplus.met"
                                    } else {
#line 959 "cplus.met"
                                        tokenAhead = 0 ;
#line 959 "cplus.met"
                                    }
#line 959 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 959 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 959 "cplus.met"
                                }
#line 959 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 959 "cplus.met"
                                retTree=_ptRes0;
#line 959 "cplus.met"
                            }
#line 959 "cplus.met"
#line 960 "cplus.met"
                            AnalyzeParameters (retTree );
#line 960 "cplus.met"
#line 961 "cplus.met"
                            {
#line 961 "cplus.met"
                                _retValue = retTree ;
#line 961 "cplus.met"
                                goto quick_prog_elem_ret;
#line 961 "cplus.met"
                                
#line 961 "cplus.met"
                            }
#line 961 "cplus.met"
#line 961 "cplus.met"
                            break;
#line 961 "cplus.met"
#line 963 "cplus.met"
                        default : 
#line 963 "cplus.met"
#line 963 "cplus.met"
                            {
#line 963 "cplus.met"
                                PPTREE _ptTree0=0;
#line 963 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 963 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 963 "cplus.met"
                                }
#line 963 "cplus.met"
                                _retValue =_ptTree0;
#line 963 "cplus.met"
                                goto quick_prog_elem_ret;
#line 963 "cplus.met"
                            }
#line 963 "cplus.met"
                            break;
#line 963 "cplus.met"
                    }
#line 963 "cplus.met"
#line 963 "cplus.met"
                    break;
#line 963 "cplus.met"
#line 963 "cplus.met"
                default : 
#line 963 "cplus.met"
#line 963 "cplus.met"
                    break;
#line 963 "cplus.met"
            }
#line 963 "cplus.met"
#line 968 "cplus.met"
            {
#line 968 "cplus.met"
                PPTREE _ptTree0=0;
#line 968 "cplus.met"
                {
#line 968 "cplus.met"
                    PPTREE _ptRes1=0;
#line 968 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 968 "cplus.met"
                    _ptTree0=_ptRes1;
#line 968 "cplus.met"
                }
#line 968 "cplus.met"
                _retValue =_ptTree0;
#line 968 "cplus.met"
                goto quick_prog_elem_ret;
#line 968 "cplus.met"
            }
#line 968 "cplus.met"
#line 968 "cplus.met"
            break;
#line 968 "cplus.met"
#line 970 "cplus.met"
        default : 
#line 970 "cplus.met"
            tokenAhead = 0 ;
#line 970 "cplus.met"
            CommTerm();
#line 970 "cplus.met"
#line 971 "cplus.met"
#line 972 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 972 "cplus.met"
#line 973 "cplus.met"
#line 974 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 974 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 974 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 974 "cplus.met"
                } else {
#line 974 "cplus.met"
                    tokenAhead = 0 ;
#line 974 "cplus.met"
                }
#line 974 "cplus.met"
#line 975 "cplus.met"
                 goto debut;
#line 975 "cplus.met"
#line 975 "cplus.met"
#line 975 "cplus.met"
            } else {
#line 975 "cplus.met"
#line 978 "cplus.met"
                {
#line 978 "cplus.met"
                    _retValue = retTree ;
#line 978 "cplus.met"
                    goto quick_prog_elem_ret;
#line 978 "cplus.met"
                    
#line 978 "cplus.met"
                }
#line 978 "cplus.met"
            }
#line 978 "cplus.met"
#line 978 "cplus.met"
            break;
#line 978 "cplus.met"
    }
#line 978 "cplus.met"
#line 978 "cplus.met"
#line 980 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 980 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 980 "cplus.met"
return((PPTREE) 0);
#line 980 "cplus.met"

#line 980 "cplus.met"
quick_prog_elem_exit :
#line 980 "cplus.met"

#line 980 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 980 "cplus.met"
    _funcLevel--;
#line 980 "cplus.met"
    return((PPTREE) -1) ;
#line 980 "cplus.met"

#line 980 "cplus.met"
quick_prog_elem_ret :
#line 980 "cplus.met"
    
#line 980 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 980 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 980 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 980 "cplus.met"
    return _retValue ;
#line 980 "cplus.met"
}
#line 980 "cplus.met"

#line 980 "cplus.met"
