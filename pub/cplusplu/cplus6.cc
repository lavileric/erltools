/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3257 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3257 "cplus.met"
{
#line 3257 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3257 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3257 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3257 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3257 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3257 "cplus.met"
#line 3257 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3257 "cplus.met"
#line 3257 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3257 "cplus.met"
#line 3259 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3259 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3259 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3259 "cplus.met"
    } else {
#line 3259 "cplus.met"
        tokenAhead = 0 ;
#line 3259 "cplus.met"
    }
#line 3259 "cplus.met"
#line 3260 "cplus.met"
     { int followed = 0;
#line 3260 "cplus.met"
#line 3261 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3261 "cplus.met"
#line 3262 "cplus.met"
#line 3263 "cplus.met"
         { int exit = 0 ;
#line 3263 "cplus.met"
#line 3264 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 11, cplus))){
#line 3264 "cplus.met"
#line 3265 "cplus.met"
#line 3266 "cplus.met"
             followed = 1 ;
#line 3266 "cplus.met"
#line 3267 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3267 "cplus.met"
#line 3267 "cplus.met"
#line 3267 "cplus.met"
        } else {
#line 3267 "cplus.met"
#line 3270 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_strict), 12, cplus))){
#line 3270 "cplus.met"
#line 3271 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3271 "cplus.met"
#line 3271 "cplus.met"
            } else {
#line 3271 "cplus.met"
#line 3273 "cplus.met"
#line 3274 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3274 "cplus.met"
#line 3275 "cplus.met"
                    {
#line 3275 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3275 "cplus.met"
                        {
#line 3275 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3275 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3275 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3275 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3275 "cplus.met"
                        }
#line 3275 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3275 "cplus.met"
                    }
#line 3275 "cplus.met"
#line 3275 "cplus.met"
                }
#line 3275 "cplus.met"
#line 3276 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3276 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3276 "cplus.met"
#line 3277 "cplus.met"
                     followed = 1;
#line 3277 "cplus.met"
                }
#line 3277 "cplus.met"
#line 3278 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3278 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3278 "cplus.met"
#line 3279 "cplus.met"
#line 3280 "cplus.met"
                     followed = 1;
#line 3280 "cplus.met"
#line 3281 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3281 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3281 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3281 "cplus.met"
                    } else {
#line 3281 "cplus.met"
                        tokenAhead = 0 ;
#line 3281 "cplus.met"
                    }
#line 3281 "cplus.met"
#line 3281 "cplus.met"
#line 3281 "cplus.met"
                }
#line 3281 "cplus.met"
#line 3281 "cplus.met"
            }
#line 3281 "cplus.met"
        }
#line 3281 "cplus.met"
#line 3281 "cplus.met"
        _addlist1 = paramList ;
#line 3281 "cplus.met"
#line 3284 "cplus.met"
        while ( followed && !exit ) { 
#line 3284 "cplus.met"
#line 3285 "cplus.met"
#line 3286 "cplus.met"
             followed = 0 ;
#line 3286 "cplus.met"
#line 3287 "cplus.met"
            if ((PUSH_CALL_AFF(valTree = ,_Tak(arg_declarator_followed)))){
#line 3287 "cplus.met"
#line 3288 "cplus.met"
#line 3289 "cplus.met"
                 followed = 1 ;
#line 3289 "cplus.met"
#line 3290 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3290 "cplus.met"
#line 3290 "cplus.met"
                if (paramList){
#line 3290 "cplus.met"
#line 3290 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3290 "cplus.met"
                } else {
#line 3290 "cplus.met"
#line 3290 "cplus.met"
                    paramList = _addlist1 ;
#line 3290 "cplus.met"
                }
#line 3290 "cplus.met"
#line 3290 "cplus.met"
#line 3290 "cplus.met"
            } else {
#line 3290 "cplus.met"
#line 3293 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3293 "cplus.met"
#line 3294 "cplus.met"
#line 3294 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3294 "cplus.met"
#line 3294 "cplus.met"
                    if (paramList){
#line 3294 "cplus.met"
#line 3294 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3294 "cplus.met"
                    } else {
#line 3294 "cplus.met"
#line 3294 "cplus.met"
                        paramList = _addlist1 ;
#line 3294 "cplus.met"
                    }
#line 3294 "cplus.met"
                } else {
#line 3294 "cplus.met"
#line 3296 "cplus.met"
#line 3297 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3297 "cplus.met"
#line 3298 "cplus.met"
#line 3299 "cplus.met"
                        {
#line 3299 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3299 "cplus.met"
                            {
#line 3299 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3299 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3299 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3299 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3299 "cplus.met"
                            }
#line 3299 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3299 "cplus.met"
                        }
#line 3299 "cplus.met"
#line 3299 "cplus.met"
                        if (paramList){
#line 3299 "cplus.met"
#line 3299 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3299 "cplus.met"
                        } else {
#line 3299 "cplus.met"
#line 3299 "cplus.met"
                            paramList = _addlist1 ;
#line 3299 "cplus.met"
                        }
#line 3299 "cplus.met"
#line 3300 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3300 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3300 "cplus.met"
#line 3301 "cplus.met"
                             followed = 1;
#line 3301 "cplus.met"
                        }
#line 3301 "cplus.met"
#line 3302 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3302 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3302 "cplus.met"
#line 3303 "cplus.met"
#line 3304 "cplus.met"
                             followed = 1;
#line 3304 "cplus.met"
#line 3305 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3305 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3305 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3305 "cplus.met"
                            } else {
#line 3305 "cplus.met"
                                tokenAhead = 0 ;
#line 3305 "cplus.met"
                            }
#line 3305 "cplus.met"
#line 3305 "cplus.met"
#line 3305 "cplus.met"
                        }
#line 3305 "cplus.met"
#line 3305 "cplus.met"
#line 3306 "cplus.met"
                    } else {
#line 3306 "cplus.met"
#line 3309 "cplus.met"
#line 3310 "cplus.met"
                        {
#line 3310 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3310 "cplus.met"
                            {
#line 3310 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3310 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3310 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3310 "cplus.met"
                            }
#line 3310 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3310 "cplus.met"
                        }
#line 3310 "cplus.met"
#line 3310 "cplus.met"
                        if (paramList){
#line 3310 "cplus.met"
#line 3310 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3310 "cplus.met"
                        } else {
#line 3310 "cplus.met"
#line 3310 "cplus.met"
                            paramList = _addlist1 ;
#line 3310 "cplus.met"
                        }
#line 3310 "cplus.met"
#line 3311 "cplus.met"
                         exit = 1 ;
#line 3311 "cplus.met"
#line 3312 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3312 "cplus.met"
#line 3312 "cplus.met"
                        }
#line 3312 "cplus.met"
#line 3314 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3314 "cplus.met"
#line 3315 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3315 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3315 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3315 "cplus.met"
                            } else {
#line 3315 "cplus.met"
                                tokenAhead = 0 ;
#line 3315 "cplus.met"
                            }
#line 3315 "cplus.met"
                        }
#line 3315 "cplus.met"
#line 3315 "cplus.met"
                    }
#line 3315 "cplus.met"
#line 3315 "cplus.met"
                }
#line 3315 "cplus.met"
            }
#line 3315 "cplus.met"
#line 3315 "cplus.met"
        } 
#line 3315 "cplus.met"
#line 3319 "cplus.met"
        if ((! ( exit )) && 
#line 3319 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3319 "cplus.met"
#line 3320 "cplus.met"
            {
#line 3320 "cplus.met"
                PPTREE _ptTree0=0;
#line 3320 "cplus.met"
                {
#line 3320 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3320 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3320 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3320 "cplus.met"
                }
#line 3320 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3320 "cplus.met"
            }
#line 3320 "cplus.met"
#line 3320 "cplus.met"
        }
#line 3320 "cplus.met"
#line 3321 "cplus.met"
         }  
#line 3321 "cplus.met"
#line 3321 "cplus.met"
#line 3321 "cplus.met"
    }
#line 3321 "cplus.met"
#line 3323 "cplus.met"
     } 
#line 3323 "cplus.met"
#line 3324 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3324 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3324 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3324 "cplus.met"
    } else {
#line 3324 "cplus.met"
        tokenAhead = 0 ;
#line 3324 "cplus.met"
    }
#line 3324 "cplus.met"
#line 3325 "cplus.met"
    {
#line 3325 "cplus.met"
        _retValue = paramList ;
#line 3325 "cplus.met"
        goto parameter_list_extended_ret;
#line 3325 "cplus.met"
        
#line 3325 "cplus.met"
    }
#line 3325 "cplus.met"
#line 3325 "cplus.met"
#line 3325 "cplus.met"

#line 3326 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3326 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3326 "cplus.met"
return((PPTREE) 0);
#line 3326 "cplus.met"

#line 3326 "cplus.met"
parameter_list_extended_exit :
#line 3326 "cplus.met"

#line 3326 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3326 "cplus.met"
    _funcLevel--;
#line 3326 "cplus.met"
    return((PPTREE) -1) ;
#line 3326 "cplus.met"

#line 3326 "cplus.met"
parameter_list_extended_ret :
#line 3326 "cplus.met"
    
#line 3326 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3326 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3326 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3326 "cplus.met"
    return _retValue ;
#line 3326 "cplus.met"
}
#line 3326 "cplus.met"

#line 3326 "cplus.met"
#line 3750 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 3750 "cplus.met"
{
#line 3750 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3750 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3750 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3750 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 3750 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3750 "cplus.met"
#line 3750 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 3750 "cplus.met"
#line 3752 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 80, cplus)) || 
#line 3752 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 144, cplus))) || 
#line 3752 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 44, cplus))) || 
#line 3752 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 148, cplus))) || 
#line 3752 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 147, cplus))) || 
#line 3752 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 66, cplus))){
#line 3752 "cplus.met"
#line 3753 "cplus.met"
        {
#line 3753 "cplus.met"
            _retValue = retValue ;
#line 3753 "cplus.met"
            goto parse_entry_ret;
#line 3753 "cplus.met"
            
#line 3753 "cplus.met"
        }
#line 3753 "cplus.met"
    } else {
#line 3753 "cplus.met"
#line 3755 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3755 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 3755 "cplus.met"
        }
#line 3755 "cplus.met"
    }
#line 3755 "cplus.met"
#line 3755 "cplus.met"
#line 3755 "cplus.met"

#line 3756 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3756 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3756 "cplus.met"
return((PPTREE) 0);
#line 3756 "cplus.met"

#line 3756 "cplus.met"
parse_entry_exit :
#line 3756 "cplus.met"

#line 3756 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 3756 "cplus.met"
    _funcLevel--;
#line 3756 "cplus.met"
    return((PPTREE) -1) ;
#line 3756 "cplus.met"

#line 3756 "cplus.met"
parse_entry_ret :
#line 3756 "cplus.met"
    
#line 3756 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 3756 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3756 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3756 "cplus.met"
    return _retValue ;
#line 3756 "cplus.met"
}
#line 3756 "cplus.met"

#line 3756 "cplus.met"
#line 2861 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 2861 "cplus.met"
{
#line 2861 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2861 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2861 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2861 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 2861 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2861 "cplus.met"
#line 2861 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2861 "cplus.met"
#line 2863 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2863 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2863 "cplus.met"
    }
#line 2863 "cplus.met"
#line 2864 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 2864 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 2864 "cplus.met"
#line 2865 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2865 "cplus.met"
        switch( lexEl.Value) {
#line 2865 "cplus.met"
#line 2866 "cplus.met"
            case POINETOI : 
#line 2866 "cplus.met"
                tokenAhead = 0 ;
#line 2866 "cplus.met"
                CommTerm();
#line 2866 "cplus.met"
#line 2866 "cplus.met"
                {
#line 2866 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2866 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 2866 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2866 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2866 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2866 "cplus.met"
                    }
#line 2866 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2866 "cplus.met"
                    expTree=_ptRes0;
#line 2866 "cplus.met"
                }
#line 2866 "cplus.met"
                break;
#line 2866 "cplus.met"
#line 2867 "cplus.met"
            case TIRESUPEETOI : 
#line 2867 "cplus.met"
                tokenAhead = 0 ;
#line 2867 "cplus.met"
                CommTerm();
#line 2867 "cplus.met"
#line 2867 "cplus.met"
                {
#line 2867 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2867 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 2867 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2867 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2867 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 2867 "cplus.met"
                    }
#line 2867 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2867 "cplus.met"
                    expTree=_ptRes0;
#line 2867 "cplus.met"
                }
#line 2867 "cplus.met"
                break;
#line 2867 "cplus.met"
            default :
#line 2867 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 2867 "cplus.met"
                break;
#line 2867 "cplus.met"
        }
#line 2867 "cplus.met"
    } 
#line 2867 "cplus.met"
#line 2869 "cplus.met"
    {
#line 2869 "cplus.met"
        _retValue = expTree ;
#line 2869 "cplus.met"
        goto pm_expression_ret;
#line 2869 "cplus.met"
        
#line 2869 "cplus.met"
    }
#line 2869 "cplus.met"
#line 2869 "cplus.met"
#line 2869 "cplus.met"

#line 2870 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2870 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2870 "cplus.met"
return((PPTREE) 0);
#line 2870 "cplus.met"

#line 2870 "cplus.met"
pm_expression_exit :
#line 2870 "cplus.met"

#line 2870 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 2870 "cplus.met"
    _funcLevel--;
#line 2870 "cplus.met"
    return((PPTREE) -1) ;
#line 2870 "cplus.met"

#line 2870 "cplus.met"
pm_expression_ret :
#line 2870 "cplus.met"
    
#line 2870 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 2870 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2870 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2870 "cplus.met"
    return _retValue ;
#line 2870 "cplus.met"
}
#line 2870 "cplus.met"

#line 2870 "cplus.met"
#line 3039 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 3039 "cplus.met"
{
#line 3039 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3039 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3039 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3039 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 3039 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3039 "cplus.met"
#line 3039 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0,expArray = (PPTREE) 0;
#line 3039 "cplus.met"
#line 3041 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 116, cplus))){
#line 3041 "cplus.met"
#line 3042 "cplus.met"
#line 3043 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 3043 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3043 "cplus.met"
        }
#line 3043 "cplus.met"
#line 3044 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 3044 "cplus.met"
#line 3045 "cplus.met"
            
#line 3045 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            LEX_EXIT ("",0);
#line 3045 "cplus.met"
            goto postfix_expression_exit;
#line 3045 "cplus.met"
#line 3045 "cplus.met"
        }
#line 3045 "cplus.met"
#line 3045 "cplus.met"
#line 3045 "cplus.met"
    }
#line 3045 "cplus.met"
#line 3047 "cplus.met"
    while ((((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 3047 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 3047 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 3047 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 3047 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 3047 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) || 
#line 3047 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AOUV,"{"))) { 
#line 3047 "cplus.met"
#line 3048 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3048 "cplus.met"
        switch( lexEl.Value) {
#line 3048 "cplus.met"
#line 3051 "cplus.met"
            case POUV : 
#line 3051 "cplus.met"
                tokenAhead = 0 ;
#line 3051 "cplus.met"
                CommTerm();
#line 3051 "cplus.met"
#line 3050 "cplus.met"
#line 3051 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 66, cplus)){
#line 3051 "cplus.met"
#line 3052 "cplus.met"
                    {
#line 3052 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3052 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 3052 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3052 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 3052 "cplus.met"
                        expTree=_ptRes0;
#line 3052 "cplus.met"
                    }
#line 3052 "cplus.met"
                } else {
#line 3052 "cplus.met"
#line 3054 "cplus.met"
                    {
#line 3054 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3054 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 3054 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3054 "cplus.met"
                        expTree=_ptRes0;
#line 3054 "cplus.met"
                    }
#line 3054 "cplus.met"
                }
#line 3054 "cplus.met"
#line 3055 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3055 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3055 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 3055 "cplus.met"
                } else {
#line 3055 "cplus.met"
                    tokenAhead = 0 ;
#line 3055 "cplus.met"
                }
#line 3055 "cplus.met"
#line 3055 "cplus.met"
                break;
#line 3055 "cplus.met"
#line 3059 "cplus.met"
            case AOUV : 
#line 3059 "cplus.met"
                tokenAhead = 0 ;
#line 3059 "cplus.met"
                CommTerm();
#line 3059 "cplus.met"
#line 3058 "cplus.met"
#line 3059 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 66, cplus)){
#line 3059 "cplus.met"
#line 3060 "cplus.met"
                    {
#line 3060 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3060 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 3060 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3060 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 3060 "cplus.met"
                        expTree=_ptRes0;
#line 3060 "cplus.met"
                    }
#line 3060 "cplus.met"
                } else {
#line 3060 "cplus.met"
#line 3062 "cplus.met"
                    {
#line 3062 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3062 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 3062 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3062 "cplus.met"
                        expTree=_ptRes0;
#line 3062 "cplus.met"
                    }
#line 3062 "cplus.met"
                }
#line 3062 "cplus.met"
#line 3063 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3063 "cplus.met"
                if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3063 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"}")
#line 3063 "cplus.met"
                } else {
#line 3063 "cplus.met"
                    tokenAhead = 0 ;
#line 3063 "cplus.met"
                }
#line 3063 "cplus.met"
#line 3063 "cplus.met"
                break;
#line 3063 "cplus.met"
#line 3067 "cplus.met"
            case COUV : 
#line 3067 "cplus.met"
                tokenAhead = 0 ;
#line 3067 "cplus.met"
                CommTerm();
#line 3067 "cplus.met"
#line 3066 "cplus.met"
#line 3067 "cplus.met"
                if ( (expArray=NQUICK_CALL(_Tak(array_expression_follow)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 3067 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3067 "cplus.met"
                }
#line 3067 "cplus.met"
#line 3068 "cplus.met"
                ReplaceTree(expArray ,1 ,expTree );
#line 3068 "cplus.met"
#line 3069 "cplus.met"
                expTree = expArray ;
#line 3069 "cplus.met"
#line 3069 "cplus.met"
                break;
#line 3069 "cplus.met"
#line 3071 "cplus.met"
            case META : 
#line 3071 "cplus.met"
            case POINT : 
#line 3071 "cplus.met"
                tokenAhead = 0 ;
#line 3071 "cplus.met"
                CommTerm();
#line 3071 "cplus.met"
#line 3071 "cplus.met"
                {
#line 3071 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3071 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 3071 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3071 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 3071 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3071 "cplus.met"
                    }
#line 3071 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3071 "cplus.met"
                    expTree=_ptRes0;
#line 3071 "cplus.met"
                }
#line 3071 "cplus.met"
                break;
#line 3071 "cplus.met"
#line 3072 "cplus.met"
            case TIRESUPE : 
#line 3072 "cplus.met"
                tokenAhead = 0 ;
#line 3072 "cplus.met"
                CommTerm();
#line 3072 "cplus.met"
#line 3072 "cplus.met"
                {
#line 3072 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3072 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 3072 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3072 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 3072 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3072 "cplus.met"
                    }
#line 3072 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3072 "cplus.met"
                    expTree=_ptRes0;
#line 3072 "cplus.met"
                }
#line 3072 "cplus.met"
                break;
#line 3072 "cplus.met"
#line 3073 "cplus.met"
            case PLUSPLUS : 
#line 3073 "cplus.met"
                tokenAhead = 0 ;
#line 3073 "cplus.met"
                CommTerm();
#line 3073 "cplus.met"
#line 3073 "cplus.met"
                {
#line 3073 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3073 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 3073 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3073 "cplus.met"
                    expTree=_ptRes0;
#line 3073 "cplus.met"
                }
#line 3073 "cplus.met"
                break;
#line 3073 "cplus.met"
#line 3074 "cplus.met"
            case TIRETIRE : 
#line 3074 "cplus.met"
                tokenAhead = 0 ;
#line 3074 "cplus.met"
                CommTerm();
#line 3074 "cplus.met"
#line 3074 "cplus.met"
                {
#line 3074 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3074 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 3074 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3074 "cplus.met"
                    expTree=_ptRes0;
#line 3074 "cplus.met"
                }
#line 3074 "cplus.met"
                break;
#line 3074 "cplus.met"
            default :
#line 3074 "cplus.met"
                MulFreeTree(3,expArray,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or { or [ or POINT or -> or ++ or --")
#line 3074 "cplus.met"
                break;
#line 3074 "cplus.met"
        }
#line 3074 "cplus.met"
    } 
#line 3074 "cplus.met"
#line 3076 "cplus.met"
    {
#line 3076 "cplus.met"
        _retValue = expTree ;
#line 3076 "cplus.met"
        goto postfix_expression_ret;
#line 3076 "cplus.met"
        
#line 3076 "cplus.met"
    }
#line 3076 "cplus.met"
#line 3076 "cplus.met"
#line 3076 "cplus.met"

#line 3077 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3077 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3077 "cplus.met"
return((PPTREE) 0);
#line 3077 "cplus.met"

#line 3077 "cplus.met"
postfix_expression_exit :
#line 3077 "cplus.met"

#line 3077 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 3077 "cplus.met"
    _funcLevel--;
#line 3077 "cplus.met"
    return((PPTREE) -1) ;
#line 3077 "cplus.met"

#line 3077 "cplus.met"
postfix_expression_ret :
#line 3077 "cplus.met"
    
#line 3077 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 3077 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3077 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3077 "cplus.met"
    return _retValue ;
#line 3077 "cplus.met"
}
#line 3077 "cplus.met"

#line 3077 "cplus.met"
#line 3092 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 3092 "cplus.met"
{
#line 3092 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3092 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3092 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3092 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 3092 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3092 "cplus.met"
#line 3092 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3092 "cplus.met"
#line 3094 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3094 "cplus.met"
    switch( lexEl.Value) {
#line 3094 "cplus.met"
#line 3097 "cplus.met"
        case POUV : 
#line 3097 "cplus.met"
            tokenAhead = 0 ;
#line 3097 "cplus.met"
            CommTerm();
#line 3097 "cplus.met"
#line 3096 "cplus.met"
#line 3097 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3097 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3097 "cplus.met"
            }
#line 3097 "cplus.met"
#line 3098 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3098 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3098 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 3098 "cplus.met"
            } else {
#line 3098 "cplus.met"
                tokenAhead = 0 ;
#line 3098 "cplus.met"
            }
#line 3098 "cplus.met"
#line 3099 "cplus.met"
            {
#line 3099 "cplus.met"
                PPTREE _ptTree0=0;
#line 3099 "cplus.met"
                {
#line 3099 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3099 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 3099 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 3099 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3099 "cplus.met"
                }
#line 3099 "cplus.met"
                _retValue =_ptTree0;
#line 3099 "cplus.met"
                goto primary_expression_ret;
#line 3099 "cplus.met"
            }
#line 3099 "cplus.met"
#line 3099 "cplus.met"
            break;
#line 3099 "cplus.met"
#line 3101 "cplus.met"
        case OPERATOR : 
#line 3101 "cplus.met"
#line 3101 "cplus.met"
            {
#line 3101 "cplus.met"
                PPTREE _ptTree0=0;
#line 3101 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3101 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3101 "cplus.met"
                }
#line 3101 "cplus.met"
                _retValue =_ptTree0;
#line 3101 "cplus.met"
                goto primary_expression_ret;
#line 3101 "cplus.met"
            }
#line 3101 "cplus.met"
            break;
#line 3101 "cplus.met"
#line 3102 "cplus.met"
        case TILD : 
#line 3102 "cplus.met"
#line 3102 "cplus.met"
            {
#line 3102 "cplus.met"
                PPTREE _ptTree0=0;
#line 3102 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 3102 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3102 "cplus.met"
                }
#line 3102 "cplus.met"
                _retValue =_ptTree0;
#line 3102 "cplus.met"
                goto primary_expression_ret;
#line 3102 "cplus.met"
            }
#line 3102 "cplus.met"
            break;
#line 3102 "cplus.met"
#line 3103 "cplus.met"
        case META : 
#line 3103 "cplus.met"
#line 3104 "cplus.met"
#line 3105 "cplus.met"
            {
#line 3105 "cplus.met"
                PPTREE _ptTree0=0;
#line 3105 "cplus.met"
                {
#line 3105 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3105 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 3105 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 3105 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 3105 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 3105 "cplus.met"
                    } else {
#line 3105 "cplus.met"
                        tokenAhead = 0 ;
#line 3105 "cplus.met"
                    }
#line 3105 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3105 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3105 "cplus.met"
                }
#line 3105 "cplus.met"
                _retValue =_ptTree0;
#line 3105 "cplus.met"
                goto primary_expression_ret;
#line 3105 "cplus.met"
            }
#line 3105 "cplus.met"
#line 3105 "cplus.met"
            break;
#line 3105 "cplus.met"
#line 3107 "cplus.met"
        case IDENT : 
#line 3107 "cplus.met"
#line 3108 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 3108 "cplus.met"
#line 3109 "cplus.met"
#line 3110 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3110 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3110 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 3110 "cplus.met"
                } else {
#line 3110 "cplus.met"
                    tokenAhead = 0 ;
#line 3110 "cplus.met"
                }
#line 3110 "cplus.met"
#line 3111 "cplus.met"
                {
#line 3111 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3111 "cplus.met"
                    {
#line 3111 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3111 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3111 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 3111 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3111 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 3111 "cplus.met"
                        } else {
#line 3111 "cplus.met"
                            tokenAhead = 0 ;
#line 3111 "cplus.met"
                        }
#line 3111 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3111 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3111 "cplus.met"
                    }
#line 3111 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 3111 "cplus.met"
                }
#line 3111 "cplus.met"
#line 3112 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3112 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3112 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 3112 "cplus.met"
                } else {
#line 3112 "cplus.met"
                    tokenAhead = 0 ;
#line 3112 "cplus.met"
                }
#line 3112 "cplus.met"
#line 3113 "cplus.met"
                {
#line 3113 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3113 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 3113 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3113 "cplus.met"
                    }
#line 3113 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 3113 "cplus.met"
                }
#line 3113 "cplus.met"
#line 3114 "cplus.met"
                {
#line 3114 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3114 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 3114 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 3114 "cplus.met"
                    expTree=_ptRes0;
#line 3114 "cplus.met"
                }
#line 3114 "cplus.met"
#line 3115 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3115 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3115 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 3115 "cplus.met"
                } else {
#line 3115 "cplus.met"
                    tokenAhead = 0 ;
#line 3115 "cplus.met"
                }
#line 3115 "cplus.met"
#line 3116 "cplus.met"
                {
#line 3116 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3116 "cplus.met"
                    {
#line 3116 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3116 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 3116 "cplus.met"
                        {
#line 3116 "cplus.met"
                            PPTREE _ptRes2=0;
#line 3116 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 3116 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 3116 "cplus.met"
                            _ptTree1=_ptRes2;
#line 3116 "cplus.met"
                        }
#line 3116 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3116 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 3116 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3116 "cplus.met"
                    }
#line 3116 "cplus.met"
                    _retValue =_ptTree0;
#line 3116 "cplus.met"
                    goto primary_expression_ret;
#line 3116 "cplus.met"
                }
#line 3116 "cplus.met"
#line 3116 "cplus.met"
#line 3116 "cplus.met"
            } else {
#line 3116 "cplus.met"
#line 3119 "cplus.met"
                {
#line 3119 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3119 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 3119 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3119 "cplus.met"
                    }
#line 3119 "cplus.met"
                    _retValue =_ptTree0;
#line 3119 "cplus.met"
                    goto primary_expression_ret;
#line 3119 "cplus.met"
                }
#line 3119 "cplus.met"
            }
#line 3119 "cplus.met"
            break;
#line 3119 "cplus.met"
#line 3120 "cplus.met"
        case STRING : 
#line 3120 "cplus.met"
#line 3120 "cplus.met"
            {
#line 3120 "cplus.met"
                PPTREE _ptTree0=0;
#line 3120 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3120 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3120 "cplus.met"
                }
#line 3120 "cplus.met"
                _retValue =_ptTree0;
#line 3120 "cplus.met"
                goto primary_expression_ret;
#line 3120 "cplus.met"
            }
#line 3120 "cplus.met"
            break;
#line 3120 "cplus.met"
#line 3121 "cplus.met"
        case VA_ARG : 
#line 3121 "cplus.met"
            tokenAhead = 0 ;
#line 3121 "cplus.met"
            CommTerm();
#line 3121 "cplus.met"
#line 3122 "cplus.met"
#line 3123 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3123 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3123 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 3123 "cplus.met"
            } else {
#line 3123 "cplus.met"
                tokenAhead = 0 ;
#line 3123 "cplus.met"
            }
#line 3123 "cplus.met"
#line 3124 "cplus.met"
            {
#line 3124 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3124 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 3124 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 3124 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3124 "cplus.met"
                }
#line 3124 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3124 "cplus.met"
                expTree=_ptRes0;
#line 3124 "cplus.met"
            }
#line 3124 "cplus.met"
#line 3125 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3125 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3125 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 3125 "cplus.met"
            } else {
#line 3125 "cplus.met"
                tokenAhead = 0 ;
#line 3125 "cplus.met"
            }
#line 3125 "cplus.met"
#line 3126 "cplus.met"
            {
#line 3126 "cplus.met"
                PPTREE _ptTree0=0;
#line 3126 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 3126 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3126 "cplus.met"
                }
#line 3126 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 3126 "cplus.met"
            }
#line 3126 "cplus.met"
#line 3127 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3127 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3127 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 3127 "cplus.met"
            } else {
#line 3127 "cplus.met"
                tokenAhead = 0 ;
#line 3127 "cplus.met"
            }
#line 3127 "cplus.met"
#line 3128 "cplus.met"
            {
#line 3128 "cplus.met"
                _retValue = expTree ;
#line 3128 "cplus.met"
                goto primary_expression_ret;
#line 3128 "cplus.met"
                
#line 3128 "cplus.met"
            }
#line 3128 "cplus.met"
#line 3128 "cplus.met"
            break;
#line 3128 "cplus.met"
#line 3130 "cplus.met"
        default : 
#line 3130 "cplus.met"
#line 3130 "cplus.met"
            {
#line 3130 "cplus.met"
                PPTREE _ptTree0=0;
#line 3130 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 35, cplus))== (PPTREE) -1 ) {
#line 3130 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3130 "cplus.met"
                }
#line 3130 "cplus.met"
                _retValue =_ptTree0;
#line 3130 "cplus.met"
                goto primary_expression_ret;
#line 3130 "cplus.met"
            }
#line 3130 "cplus.met"
            break;
#line 3130 "cplus.met"
    }
#line 3130 "cplus.met"
#line 3130 "cplus.met"
#line 3131 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3131 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3131 "cplus.met"
return((PPTREE) 0);
#line 3131 "cplus.met"

#line 3131 "cplus.met"
primary_expression_exit :
#line 3131 "cplus.met"

#line 3131 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 3131 "cplus.met"
    _funcLevel--;
#line 3131 "cplus.met"
    return((PPTREE) -1) ;
#line 3131 "cplus.met"

#line 3131 "cplus.met"
primary_expression_ret :
#line 3131 "cplus.met"
    
#line 3131 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 3131 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3131 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3131 "cplus.met"
    return _retValue ;
#line 3131 "cplus.met"
}
#line 3131 "cplus.met"

#line 3131 "cplus.met"
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
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 68, cplus)) { 
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 107, cplus))== (PPTREE) -1 ) {
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
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 30, cplus)){
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
#line 1956 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 1956 "cplus.met"
{
#line 1956 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1956 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1956 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1956 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 1956 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1956 "cplus.met"
#line 1956 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1956 "cplus.met"
#line 1956 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 1956 "cplus.met"
#line 1958 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1958 "cplus.met"
    switch( lexEl.Value) {
#line 1958 "cplus.met"
#line 1959 "cplus.met"
        case PUBLIC : 
#line 1959 "cplus.met"
            tokenAhead = 0 ;
#line 1959 "cplus.met"
            CommTerm();
#line 1959 "cplus.met"
#line 1959 "cplus.met"
            {
#line 1959 "cplus.met"
                PPTREE _ptRes0=0;
#line 1959 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1959 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 1959 "cplus.met"
                retTree=_ptRes0;
#line 1959 "cplus.met"
            }
#line 1959 "cplus.met"
            break;
#line 1959 "cplus.met"
#line 1960 "cplus.met"
        case PROTECTED : 
#line 1960 "cplus.met"
            tokenAhead = 0 ;
#line 1960 "cplus.met"
            CommTerm();
#line 1960 "cplus.met"
#line 1960 "cplus.met"
            {
#line 1960 "cplus.met"
                PPTREE _ptRes0=0;
#line 1960 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1960 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 1960 "cplus.met"
                retTree=_ptRes0;
#line 1960 "cplus.met"
            }
#line 1960 "cplus.met"
            break;
#line 1960 "cplus.met"
#line 1961 "cplus.met"
        case PRIVATE : 
#line 1961 "cplus.met"
            tokenAhead = 0 ;
#line 1961 "cplus.met"
            CommTerm();
#line 1961 "cplus.met"
#line 1961 "cplus.met"
            {
#line 1961 "cplus.met"
                PPTREE _ptRes0=0;
#line 1961 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 1961 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 1961 "cplus.met"
                retTree=_ptRes0;
#line 1961 "cplus.met"
            }
#line 1961 "cplus.met"
            break;
#line 1961 "cplus.met"
        default :
#line 1961 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 1961 "cplus.met"
            break;
#line 1961 "cplus.met"
    }
#line 1961 "cplus.met"
#line 1963 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1963 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 1963 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 1963 "cplus.met"
    } else {
#line 1963 "cplus.met"
        tokenAhead = 0 ;
#line 1963 "cplus.met"
    }
#line 1963 "cplus.met"
#line 1963 "cplus.met"
    _addlist1 = list ;
#line 1963 "cplus.met"
#line 1964 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 87, cplus)) { 
#line 1964 "cplus.met"
#line 1965 "cplus.met"
#line 1965 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 1965 "cplus.met"
#line 1965 "cplus.met"
        if (list){
#line 1965 "cplus.met"
#line 1965 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1965 "cplus.met"
        } else {
#line 1965 "cplus.met"
#line 1965 "cplus.met"
            list = _addlist1 ;
#line 1965 "cplus.met"
        }
#line 1965 "cplus.met"
    } 
#line 1965 "cplus.met"
#line 1966 "cplus.met"
    {
#line 1966 "cplus.met"
        PPTREE _ptTree0=0;
#line 1966 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1966 "cplus.met"
        _retValue =_ptTree0;
#line 1966 "cplus.met"
        goto protect_declare_ret;
#line 1966 "cplus.met"
    }
#line 1966 "cplus.met"
#line 1966 "cplus.met"
#line 1966 "cplus.met"

#line 1967 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1967 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1967 "cplus.met"
return((PPTREE) 0);
#line 1967 "cplus.met"

#line 1967 "cplus.met"
protect_declare_exit :
#line 1967 "cplus.met"

#line 1967 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 1967 "cplus.met"
    _funcLevel--;
#line 1967 "cplus.met"
    return((PPTREE) -1) ;
#line 1967 "cplus.met"

#line 1967 "cplus.met"
protect_declare_ret :
#line 1967 "cplus.met"
    
#line 1967 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 1967 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1967 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1967 "cplus.met"
    return _retValue ;
#line 1967 "cplus.met"
}
#line 1967 "cplus.met"

#line 1967 "cplus.met"
#line 1016 "cplus.met"
PPTREE cplus::protected_array_declaration ( int error_free)
#line 1016 "cplus.met"
{
#line 1016 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1016 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1016 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1016 "cplus.met"
    int _Debug = TRACE_RULE("protected_array_declaration",TRACE_ENTER,(PPTREE)0);
#line 1016 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1016 "cplus.met"
#line 1016 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0,valTreeRS = (PPTREE) 0;
#line 1016 "cplus.met"
#line 1018 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDARRAY,"_protectedArray") && (tokenAhead = 0,CommTerm(),1)){
#line 1018 "cplus.met"
#line 1019 "cplus.met"
#line 1020 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1020 "cplus.met"
        if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1020 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1020 "cplus.met"
        } else {
#line 1020 "cplus.met"
            tokenAhead = 0 ;
#line 1020 "cplus.met"
        }
#line 1020 "cplus.met"
#line 1021 "cplus.met"
        {
#line 1021 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1021 "cplus.met"
            _ptRes0= MakeTree(PROTECTED_ARRAY, 5);
#line 1021 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 1021 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1021 "cplus.met"
            }
#line 1021 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1021 "cplus.met"
            valTreeR=_ptRes0;
#line 1021 "cplus.met"
        }
#line 1021 "cplus.met"
#line 1022 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1022 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1022 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1022 "cplus.met"
        } else {
#line 1022 "cplus.met"
            tokenAhead = 0 ;
#line 1022 "cplus.met"
        }
#line 1022 "cplus.met"
#line 1023 "cplus.met"
        {
#line 1023 "cplus.met"
            PPTREE _ptTree0=0;
#line 1023 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1023 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1023 "cplus.met"
            }
#line 1023 "cplus.met"
            ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1023 "cplus.met"
        }
#line 1023 "cplus.met"
#line 1024 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1024 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1024 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1024 "cplus.met"
        } else {
#line 1024 "cplus.met"
            tokenAhead = 0 ;
#line 1024 "cplus.met"
        }
#line 1024 "cplus.met"
#line 1025 "cplus.met"
        {
#line 1025 "cplus.met"
            PPTREE _ptTree0=0;
#line 1025 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1025 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1025 "cplus.met"
            }
#line 1025 "cplus.met"
            ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1025 "cplus.met"
        }
#line 1025 "cplus.met"
#line 1026 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1026 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1026 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1026 "cplus.met"
        } else {
#line 1026 "cplus.met"
            tokenAhead = 0 ;
#line 1026 "cplus.met"
        }
#line 1026 "cplus.met"
#line 1027 "cplus.met"
        {
#line 1027 "cplus.met"
            PPTREE _ptTree0=0;
#line 1027 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1027 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1027 "cplus.met"
            }
#line 1027 "cplus.met"
            ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1027 "cplus.met"
        }
#line 1027 "cplus.met"
#line 1028 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1028 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1028 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1028 "cplus.met"
        } else {
#line 1028 "cplus.met"
            tokenAhead = 0 ;
#line 1028 "cplus.met"
        }
#line 1028 "cplus.met"
#line 1029 "cplus.met"
        {
#line 1029 "cplus.met"
            PPTREE _ptTree0=0;
#line 1029 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1029 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1029 "cplus.met"
            }
#line 1029 "cplus.met"
            ReplaceTree(valTreeR , 5 , _ptTree0);
#line 1029 "cplus.met"
        }
#line 1029 "cplus.met"
#line 1030 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1030 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1030 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1030 "cplus.met"
        } else {
#line 1030 "cplus.met"
            tokenAhead = 0 ;
#line 1030 "cplus.met"
        }
#line 1030 "cplus.met"
#line 1031 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1031 "cplus.met"
#line 1031 "cplus.met"
        }
#line 1031 "cplus.met"
#line 1033 "cplus.met"
        {
#line 1033 "cplus.met"
            _retValue = valTreeR ;
#line 1033 "cplus.met"
            goto protected_array_declaration_ret;
#line 1033 "cplus.met"
            
#line 1033 "cplus.met"
        }
#line 1033 "cplus.met"
#line 1033 "cplus.met"
#line 1033 "cplus.met"
    } else {
#line 1033 "cplus.met"
#line 1036 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDARRAY_S,"_protectedArray_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1036 "cplus.met"
#line 1037 "cplus.met"
#line 1038 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1038 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1038 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1038 "cplus.met"
            } else {
#line 1038 "cplus.met"
                tokenAhead = 0 ;
#line 1038 "cplus.met"
            }
#line 1038 "cplus.met"
#line 1039 "cplus.met"
            {
#line 1039 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1039 "cplus.met"
                _ptRes0= MakeTree(PROTECTED_ARRAY_S, 4);
#line 1039 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1039 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1039 "cplus.met"
                }
#line 1039 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1039 "cplus.met"
                valTreeRS=_ptRes0;
#line 1039 "cplus.met"
            }
#line 1039 "cplus.met"
#line 1040 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1040 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1040 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1040 "cplus.met"
            } else {
#line 1040 "cplus.met"
                tokenAhead = 0 ;
#line 1040 "cplus.met"
            }
#line 1040 "cplus.met"
#line 1041 "cplus.met"
            {
#line 1041 "cplus.met"
                PPTREE _ptTree0=0;
#line 1041 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1041 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1041 "cplus.met"
                }
#line 1041 "cplus.met"
                ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1041 "cplus.met"
            }
#line 1041 "cplus.met"
#line 1042 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1042 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1042 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1042 "cplus.met"
            } else {
#line 1042 "cplus.met"
                tokenAhead = 0 ;
#line 1042 "cplus.met"
            }
#line 1042 "cplus.met"
#line 1043 "cplus.met"
            {
#line 1043 "cplus.met"
                PPTREE _ptTree0=0;
#line 1043 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1043 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1043 "cplus.met"
                }
#line 1043 "cplus.met"
                ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1043 "cplus.met"
            }
#line 1043 "cplus.met"
#line 1044 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1044 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1044 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1044 "cplus.met"
            } else {
#line 1044 "cplus.met"
                tokenAhead = 0 ;
#line 1044 "cplus.met"
            }
#line 1044 "cplus.met"
#line 1045 "cplus.met"
            {
#line 1045 "cplus.met"
                PPTREE _ptTree0=0;
#line 1045 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1045 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1045 "cplus.met"
                }
#line 1045 "cplus.met"
                ReplaceTree(valTreeRS , 4 , _ptTree0);
#line 1045 "cplus.met"
            }
#line 1045 "cplus.met"
#line 1046 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1046 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1046 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1046 "cplus.met"
            } else {
#line 1046 "cplus.met"
                tokenAhead = 0 ;
#line 1046 "cplus.met"
            }
#line 1046 "cplus.met"
#line 1047 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1047 "cplus.met"
#line 1047 "cplus.met"
            }
#line 1047 "cplus.met"
#line 1049 "cplus.met"
            {
#line 1049 "cplus.met"
                _retValue = valTreeRS ;
#line 1049 "cplus.met"
                goto protected_array_declaration_ret;
#line 1049 "cplus.met"
                
#line 1049 "cplus.met"
            }
#line 1049 "cplus.met"
#line 1049 "cplus.met"
#line 1049 "cplus.met"
        } else {
#line 1049 "cplus.met"
#line 1052 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDPOINTER,"_protectedPointer") && (tokenAhead = 0,CommTerm(),1)){
#line 1052 "cplus.met"
#line 1053 "cplus.met"
#line 1054 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1054 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1054 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1054 "cplus.met"
                } else {
#line 1054 "cplus.met"
                    tokenAhead = 0 ;
#line 1054 "cplus.met"
                }
#line 1054 "cplus.met"
#line 1055 "cplus.met"
                {
#line 1055 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1055 "cplus.met"
                    _ptRes0= MakeTree(PROTECTED_ARRAY, 5);
#line 1055 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 1055 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1055 "cplus.met"
                    }
#line 1055 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1055 "cplus.met"
                    valTreeR=_ptRes0;
#line 1055 "cplus.met"
                }
#line 1055 "cplus.met"
#line 1056 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1056 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1056 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1056 "cplus.met"
                } else {
#line 1056 "cplus.met"
                    tokenAhead = 0 ;
#line 1056 "cplus.met"
                }
#line 1056 "cplus.met"
#line 1057 "cplus.met"
                {
#line 1057 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1057 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1057 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1057 "cplus.met"
                    }
#line 1057 "cplus.met"
                    ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1057 "cplus.met"
                }
#line 1057 "cplus.met"
#line 1058 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1058 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1058 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1058 "cplus.met"
                } else {
#line 1058 "cplus.met"
                    tokenAhead = 0 ;
#line 1058 "cplus.met"
                }
#line 1058 "cplus.met"
#line 1059 "cplus.met"
                {
#line 1059 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1059 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1059 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1059 "cplus.met"
                    }
#line 1059 "cplus.met"
                    ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1059 "cplus.met"
                }
#line 1059 "cplus.met"
#line 1060 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1060 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1060 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1060 "cplus.met"
                } else {
#line 1060 "cplus.met"
                    tokenAhead = 0 ;
#line 1060 "cplus.met"
                }
#line 1060 "cplus.met"
#line 1061 "cplus.met"
                {
#line 1061 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1061 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1061 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1061 "cplus.met"
                    }
#line 1061 "cplus.met"
                    ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1061 "cplus.met"
                }
#line 1061 "cplus.met"
#line 1062 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1062 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1062 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1062 "cplus.met"
                } else {
#line 1062 "cplus.met"
                    tokenAhead = 0 ;
#line 1062 "cplus.met"
                }
#line 1062 "cplus.met"
#line 1063 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1063 "cplus.met"
#line 1063 "cplus.met"
                }
#line 1063 "cplus.met"
#line 1065 "cplus.met"
                {
#line 1065 "cplus.met"
                    _retValue = valTreeR ;
#line 1065 "cplus.met"
                    goto protected_array_declaration_ret;
#line 1065 "cplus.met"
                    
#line 1065 "cplus.met"
                }
#line 1065 "cplus.met"
#line 1065 "cplus.met"
#line 1065 "cplus.met"
            } else {
#line 1065 "cplus.met"
#line 1068 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDPOINTER_S,"_protectedPointer_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1068 "cplus.met"
#line 1069 "cplus.met"
#line 1070 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1070 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1070 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1070 "cplus.met"
                    } else {
#line 1070 "cplus.met"
                        tokenAhead = 0 ;
#line 1070 "cplus.met"
                    }
#line 1070 "cplus.met"
#line 1071 "cplus.met"
                    {
#line 1071 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 1071 "cplus.met"
                        _ptRes0= MakeTree(PROTECTED_ARRAY_S, 4);
#line 1071 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1071 "cplus.met"
                            MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1071 "cplus.met"
                        }
#line 1071 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1071 "cplus.met"
                        valTreeRS=_ptRes0;
#line 1071 "cplus.met"
                    }
#line 1071 "cplus.met"
#line 1072 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1072 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1072 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1072 "cplus.met"
                    } else {
#line 1072 "cplus.met"
                        tokenAhead = 0 ;
#line 1072 "cplus.met"
                    }
#line 1072 "cplus.met"
#line 1073 "cplus.met"
                    {
#line 1073 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1073 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1073 "cplus.met"
                            MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1073 "cplus.met"
                        }
#line 1073 "cplus.met"
                        ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1073 "cplus.met"
                    }
#line 1073 "cplus.met"
#line 1074 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1074 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1074 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1074 "cplus.met"
                    } else {
#line 1074 "cplus.met"
                        tokenAhead = 0 ;
#line 1074 "cplus.met"
                    }
#line 1074 "cplus.met"
#line 1075 "cplus.met"
                    {
#line 1075 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1075 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1075 "cplus.met"
                            MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1075 "cplus.met"
                        }
#line 1075 "cplus.met"
                        ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1075 "cplus.met"
                    }
#line 1075 "cplus.met"
#line 1076 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1076 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1076 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1076 "cplus.met"
                    } else {
#line 1076 "cplus.met"
                        tokenAhead = 0 ;
#line 1076 "cplus.met"
                    }
#line 1076 "cplus.met"
#line 1077 "cplus.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1077 "cplus.met"
#line 1077 "cplus.met"
                    }
#line 1077 "cplus.met"
#line 1079 "cplus.met"
                    {
#line 1079 "cplus.met"
                        _retValue = valTreeRS ;
#line 1079 "cplus.met"
                        goto protected_array_declaration_ret;
#line 1079 "cplus.met"
                        
#line 1079 "cplus.met"
                    }
#line 1079 "cplus.met"
#line 1079 "cplus.met"
#line 1079 "cplus.met"
                } else {
#line 1079 "cplus.met"
#line 1082 "cplus.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_TYPEDEF_PROTECTEDARRAY,"_typedef_protectedArray") && (tokenAhead = 0,CommTerm(),1)){
#line 1082 "cplus.met"
#line 1083 "cplus.met"
#line 1084 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1084 "cplus.met"
                        if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1084 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1084 "cplus.met"
                        } else {
#line 1084 "cplus.met"
                            tokenAhead = 0 ;
#line 1084 "cplus.met"
                        }
#line 1084 "cplus.met"
#line 1085 "cplus.met"
                        {
#line 1085 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1085 "cplus.met"
                            _ptRes0= MakeTree(PROTECTED_ARRAY_TYPEDEF, 5);
#line 1085 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 1085 "cplus.met"
                                MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1085 "cplus.met"
                            }
#line 1085 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1085 "cplus.met"
                            valTreeR=_ptRes0;
#line 1085 "cplus.met"
                        }
#line 1085 "cplus.met"
#line 1086 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1086 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1086 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1086 "cplus.met"
                        } else {
#line 1086 "cplus.met"
                            tokenAhead = 0 ;
#line 1086 "cplus.met"
                        }
#line 1086 "cplus.met"
#line 1087 "cplus.met"
                        {
#line 1087 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1087 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1087 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1087 "cplus.met"
                            }
#line 1087 "cplus.met"
                            ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1087 "cplus.met"
                        }
#line 1087 "cplus.met"
#line 1088 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1088 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1088 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1088 "cplus.met"
                        } else {
#line 1088 "cplus.met"
                            tokenAhead = 0 ;
#line 1088 "cplus.met"
                        }
#line 1088 "cplus.met"
#line 1089 "cplus.met"
                        {
#line 1089 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1089 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1089 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1089 "cplus.met"
                            }
#line 1089 "cplus.met"
                            ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1089 "cplus.met"
                        }
#line 1089 "cplus.met"
#line 1090 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1090 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1090 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1090 "cplus.met"
                        } else {
#line 1090 "cplus.met"
                            tokenAhead = 0 ;
#line 1090 "cplus.met"
                        }
#line 1090 "cplus.met"
#line 1091 "cplus.met"
                        {
#line 1091 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1091 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1091 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1091 "cplus.met"
                            }
#line 1091 "cplus.met"
                            ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1091 "cplus.met"
                        }
#line 1091 "cplus.met"
#line 1092 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1092 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1092 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1092 "cplus.met"
                        } else {
#line 1092 "cplus.met"
                            tokenAhead = 0 ;
#line 1092 "cplus.met"
                        }
#line 1092 "cplus.met"
#line 1093 "cplus.met"
                        {
#line 1093 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1093 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1093 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1093 "cplus.met"
                            }
#line 1093 "cplus.met"
                            ReplaceTree(valTreeR , 5 , _ptTree0);
#line 1093 "cplus.met"
                        }
#line 1093 "cplus.met"
#line 1094 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1094 "cplus.met"
                        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1094 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1094 "cplus.met"
                        } else {
#line 1094 "cplus.met"
                            tokenAhead = 0 ;
#line 1094 "cplus.met"
                        }
#line 1094 "cplus.met"
#line 1095 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1095 "cplus.met"
#line 1095 "cplus.met"
                        }
#line 1095 "cplus.met"
#line 1097 "cplus.met"
                        {
#line 1097 "cplus.met"
                            _retValue = valTreeR ;
#line 1097 "cplus.met"
                            goto protected_array_declaration_ret;
#line 1097 "cplus.met"
                            
#line 1097 "cplus.met"
                        }
#line 1097 "cplus.met"
#line 1097 "cplus.met"
#line 1097 "cplus.met"
                    } else {
#line 1097 "cplus.met"
#line 1100 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_TYPEDEF_PROTECTEDARRAY_S,"_typedef_protectedArray_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1100 "cplus.met"
#line 1101 "cplus.met"
#line 1102 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1102 "cplus.met"
                            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1102 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1102 "cplus.met"
                            } else {
#line 1102 "cplus.met"
                                tokenAhead = 0 ;
#line 1102 "cplus.met"
                            }
#line 1102 "cplus.met"
#line 1103 "cplus.met"
                            {
#line 1103 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1103 "cplus.met"
                                _ptRes0= MakeTree(PROTECTED_ARRAY_S_TYPEDEF, 4);
#line 1103 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1103 "cplus.met"
                                    MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1103 "cplus.met"
                                }
#line 1103 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1103 "cplus.met"
                                valTreeRS=_ptRes0;
#line 1103 "cplus.met"
                            }
#line 1103 "cplus.met"
#line 1104 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1104 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1104 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1104 "cplus.met"
                            } else {
#line 1104 "cplus.met"
                                tokenAhead = 0 ;
#line 1104 "cplus.met"
                            }
#line 1104 "cplus.met"
#line 1105 "cplus.met"
                            {
#line 1105 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1105 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 1105 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1105 "cplus.met"
                                }
#line 1105 "cplus.met"
                                ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1105 "cplus.met"
                            }
#line 1105 "cplus.met"
#line 1106 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1106 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1106 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1106 "cplus.met"
                            } else {
#line 1106 "cplus.met"
                                tokenAhead = 0 ;
#line 1106 "cplus.met"
                            }
#line 1106 "cplus.met"
#line 1107 "cplus.met"
                            {
#line 1107 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1107 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1107 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1107 "cplus.met"
                                }
#line 1107 "cplus.met"
                                ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1107 "cplus.met"
                            }
#line 1107 "cplus.met"
#line 1108 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1108 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1108 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1108 "cplus.met"
                            } else {
#line 1108 "cplus.met"
                                tokenAhead = 0 ;
#line 1108 "cplus.met"
                            }
#line 1108 "cplus.met"
#line 1109 "cplus.met"
                            {
#line 1109 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1109 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1109 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1109 "cplus.met"
                                }
#line 1109 "cplus.met"
                                ReplaceTree(valTreeRS , 4 , _ptTree0);
#line 1109 "cplus.met"
                            }
#line 1109 "cplus.met"
#line 1110 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1110 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1110 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1110 "cplus.met"
                            } else {
#line 1110 "cplus.met"
                                tokenAhead = 0 ;
#line 1110 "cplus.met"
                            }
#line 1110 "cplus.met"
#line 1111 "cplus.met"
                            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1111 "cplus.met"
#line 1111 "cplus.met"
                            }
#line 1111 "cplus.met"
#line 1113 "cplus.met"
                            {
#line 1113 "cplus.met"
                                _retValue = valTreeRS ;
#line 1113 "cplus.met"
                                goto protected_array_declaration_ret;
#line 1113 "cplus.met"
                                
#line 1113 "cplus.met"
                            }
#line 1113 "cplus.met"
#line 1113 "cplus.met"
#line 1113 "cplus.met"
                        } else {
#line 1113 "cplus.met"
#line 1116 "cplus.met"
                            
#line 1116 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            LEX_EXIT ("",0);
#line 1116 "cplus.met"
                            goto protected_array_declaration_exit;
#line 1116 "cplus.met"
                        }
#line 1116 "cplus.met"
                    }
#line 1116 "cplus.met"
                }
#line 1116 "cplus.met"
            }
#line 1116 "cplus.met"
        }
#line 1116 "cplus.met"
    }
#line 1116 "cplus.met"
#line 1116 "cplus.met"
#line 1116 "cplus.met"

#line 1117 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1117 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1117 "cplus.met"
return((PPTREE) 0);
#line 1117 "cplus.met"

#line 1117 "cplus.met"
protected_array_declaration_exit :
#line 1117 "cplus.met"

#line 1117 "cplus.met"
    _Debug = TRACE_RULE("protected_array_declaration",TRACE_EXIT,(PPTREE)0);
#line 1117 "cplus.met"
    _funcLevel--;
#line 1117 "cplus.met"
    return((PPTREE) -1) ;
#line 1117 "cplus.met"

#line 1117 "cplus.met"
protected_array_declaration_ret :
#line 1117 "cplus.met"
    
#line 1117 "cplus.met"
    _Debug = TRACE_RULE("protected_array_declaration",TRACE_RETURN,_retValue);
#line 1117 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1117 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1117 "cplus.met"
    return _retValue ;
#line 1117 "cplus.met"
}
#line 1117 "cplus.met"

#line 1117 "cplus.met"
