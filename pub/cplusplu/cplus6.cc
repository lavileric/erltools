/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 982 "cplus.met"
PPTREE cplus::other_config ( int error_free)
#line 982 "cplus.met"
{
#line 982 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 982 "cplus.met"
    int _value,_nbPre = 0 ;
#line 982 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 982 "cplus.met"
    int _Debug = TRACE_RULE("other_config",TRACE_ENTER,(PPTREE)0);
#line 982 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 982 "cplus.met"
#line 983 "cplus.met"
    {
#line 983 "cplus.met"
        PPTREE _ptTree0=0;
#line 983 "cplus.met"
        {
#line 983 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 983 "cplus.met"
            _ptRes1= MakeTree(PRAGMA, 1);
#line 983 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 983 "cplus.met"
            if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 983 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(other_config_exit,"PRAGMA_CONTENT")
#line 983 "cplus.met"
            } else {
#line 983 "cplus.met"
                tokenAhead = 0 ;
#line 983 "cplus.met"
            }
#line 983 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 983 "cplus.met"
            _ptTree0=_ptRes1;
#line 983 "cplus.met"
        }
#line 983 "cplus.met"
        _retValue =_ptTree0;
#line 983 "cplus.met"
        goto other_config_ret;
#line 983 "cplus.met"
    }
#line 983 "cplus.met"
#line 983 "cplus.met"
#line 983 "cplus.met"

#line 984 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 984 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 984 "cplus.met"
return((PPTREE) 0);
#line 984 "cplus.met"

#line 984 "cplus.met"
other_config_exit :
#line 984 "cplus.met"

#line 984 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_EXIT,(PPTREE)0);
#line 984 "cplus.met"
    _funcLevel--;
#line 984 "cplus.met"
    return((PPTREE) -1) ;
#line 984 "cplus.met"

#line 984 "cplus.met"
other_config_ret :
#line 984 "cplus.met"
    
#line 984 "cplus.met"
    _Debug = TRACE_RULE("other_config",TRACE_RETURN,_retValue);
#line 984 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 984 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 984 "cplus.met"
    return _retValue ;
#line 984 "cplus.met"
}
#line 984 "cplus.met"

#line 984 "cplus.met"
#line 3417 "cplus.met"
PPTREE cplus::parameter_list ( int error_free)
#line 3417 "cplus.met"
{
#line 3417 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3417 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3417 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3417 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list",TRACE_ENTER,(PPTREE)0);
#line 3417 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3417 "cplus.met"
#line 3417 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3417 "cplus.met"
#line 3417 "cplus.met"
    PPTREE paramList = (PPTREE) 0,none = (PPTREE) 0;
#line 3417 "cplus.met"
#line 3419 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3419 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3419 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,"(")
#line 3419 "cplus.met"
    } else {
#line 3419 "cplus.met"
        tokenAhead = 0 ;
#line 3419 "cplus.met"
    }
#line 3419 "cplus.met"
#line 3420 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3420 "cplus.met"
#line 3421 "cplus.met"
#line 3422 "cplus.met"
         { int exit = 0 ;
#line 3422 "cplus.met"
#line 3423 "cplus.met"
        {
#line 3423 "cplus.met"
            PPTREE _ptTree0=0;
#line 3423 "cplus.met"
            {
#line 3423 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3423 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 3423 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3423 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3423 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                    TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3423 "cplus.met"
                } else {
#line 3423 "cplus.met"
                    tokenAhead = 0 ;
#line 3423 "cplus.met"
                }
#line 3423 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3423 "cplus.met"
                _ptTree0=_ptRes1;
#line 3423 "cplus.met"
            }
#line 3423 "cplus.met"
            paramList =AddList(paramList , _ptTree0);
#line 3423 "cplus.met"
        }
#line 3423 "cplus.met"
#line 3423 "cplus.met"
        _addlist1 = paramList ;
#line 3423 "cplus.met"
#line 3424 "cplus.met"
        while ((! ( exit )) && 
#line 3424 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3424 "cplus.met"
#line 3425 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3425 "cplus.met"
#line 3426 "cplus.met"
#line 3426 "cplus.met"
                {
#line 3426 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3426 "cplus.met"
                    {
#line 3426 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3426 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3426 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3426 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3426 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,none,paramList);
                            TOKEN_EXIT(parameter_list_exit,"IDENT")
#line 3426 "cplus.met"
                        } else {
#line 3426 "cplus.met"
                            tokenAhead = 0 ;
#line 3426 "cplus.met"
                        }
#line 3426 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3426 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3426 "cplus.met"
                    }
#line 3426 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3426 "cplus.met"
                }
#line 3426 "cplus.met"
#line 3426 "cplus.met"
                if (paramList){
#line 3426 "cplus.met"
#line 3426 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3426 "cplus.met"
                } else {
#line 3426 "cplus.met"
#line 3426 "cplus.met"
                    paramList = _addlist1 ;
#line 3426 "cplus.met"
                }
#line 3426 "cplus.met"
            } else {
#line 3426 "cplus.met"
#line 3428 "cplus.met"
#line 3429 "cplus.met"
                {
#line 3429 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3429 "cplus.met"
                    {
#line 3429 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3429 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 3429 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3429 "cplus.met"
                    }
#line 3429 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3429 "cplus.met"
                }
#line 3429 "cplus.met"
#line 3429 "cplus.met"
                if (paramList){
#line 3429 "cplus.met"
#line 3429 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3429 "cplus.met"
                } else {
#line 3429 "cplus.met"
#line 3429 "cplus.met"
                    paramList = _addlist1 ;
#line 3429 "cplus.met"
                }
#line 3429 "cplus.met"
#line 3430 "cplus.met"
                 exit = 1 ;
#line 3430 "cplus.met"
#line 3431 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3431 "cplus.met"
#line 3431 "cplus.met"
                }
#line 3431 "cplus.met"
#line 3431 "cplus.met"
            }
#line 3431 "cplus.met"
        } 
#line 3431 "cplus.met"
#line 3434 "cplus.met"
        if ((! ( exit )) && 
#line 3434 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3434 "cplus.met"
#line 3435 "cplus.met"
            {
#line 3435 "cplus.met"
                PPTREE _ptTree0=0;
#line 3435 "cplus.met"
                {
#line 3435 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3435 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3435 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3435 "cplus.met"
                }
#line 3435 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3435 "cplus.met"
            }
#line 3435 "cplus.met"
#line 3435 "cplus.met"
        }
#line 3435 "cplus.met"
#line 3436 "cplus.met"
         } 
#line 3436 "cplus.met"
#line 3436 "cplus.met"
#line 3436 "cplus.met"
    } else {
#line 3436 "cplus.met"
#line 3439 "cplus.met"
        paramList =AddList(paramList ,none );
#line 3439 "cplus.met"
    }
#line 3439 "cplus.met"
#line 3440 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3440 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3440 "cplus.met"
        MulFreeTree(3,_addlist1,none,paramList);
        TOKEN_EXIT(parameter_list_exit,")")
#line 3440 "cplus.met"
    } else {
#line 3440 "cplus.met"
        tokenAhead = 0 ;
#line 3440 "cplus.met"
    }
#line 3440 "cplus.met"
#line 3441 "cplus.met"
    {
#line 3441 "cplus.met"
        _retValue = paramList ;
#line 3441 "cplus.met"
        goto parameter_list_ret;
#line 3441 "cplus.met"
        
#line 3441 "cplus.met"
    }
#line 3441 "cplus.met"
#line 3441 "cplus.met"
#line 3441 "cplus.met"

#line 3442 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3442 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3442 "cplus.met"
return((PPTREE) 0);
#line 3442 "cplus.met"

#line 3442 "cplus.met"
parameter_list_exit :
#line 3442 "cplus.met"

#line 3442 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_EXIT,(PPTREE)0);
#line 3442 "cplus.met"
    _funcLevel--;
#line 3442 "cplus.met"
    return((PPTREE) -1) ;
#line 3442 "cplus.met"

#line 3442 "cplus.met"
parameter_list_ret :
#line 3442 "cplus.met"
    
#line 3442 "cplus.met"
    _Debug = TRACE_RULE("parameter_list",TRACE_RETURN,_retValue);
#line 3442 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3442 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3442 "cplus.met"
    return _retValue ;
#line 3442 "cplus.met"
}
#line 3442 "cplus.met"

#line 3442 "cplus.met"
#line 3444 "cplus.met"
PPTREE cplus::parameter_list_extended ( int error_free)
#line 3444 "cplus.met"
{
#line 3444 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3444 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3444 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3444 "cplus.met"
    int _Debug = TRACE_RULE("parameter_list_extended",TRACE_ENTER,(PPTREE)0);
#line 3444 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3444 "cplus.met"
#line 3444 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3444 "cplus.met"
#line 3444 "cplus.met"
    PPTREE paramList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3444 "cplus.met"
#line 3446 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3446 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3446 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,"(")
#line 3446 "cplus.met"
    } else {
#line 3446 "cplus.met"
        tokenAhead = 0 ;
#line 3446 "cplus.met"
    }
#line 3446 "cplus.met"
#line 3447 "cplus.met"
     { int followed = 0;
#line 3447 "cplus.met"
#line 3448 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3448 "cplus.met"
#line 3449 "cplus.met"
#line 3450 "cplus.met"
         { int exit = 0 ;
#line 3450 "cplus.met"
#line 3451 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 12, cplus))){
#line 3451 "cplus.met"
#line 3452 "cplus.met"
#line 3453 "cplus.met"
             followed = 1 ;
#line 3453 "cplus.met"
#line 3454 "cplus.met"
            paramList =AddList(paramList ,valTree );
#line 3454 "cplus.met"
#line 3454 "cplus.met"
#line 3454 "cplus.met"
        } else {
#line 3454 "cplus.met"
#line 3457 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_strict), 13, cplus))){
#line 3457 "cplus.met"
#line 3458 "cplus.met"
                paramList =AddList(paramList ,valTree );
#line 3458 "cplus.met"
#line 3458 "cplus.met"
            } else {
#line 3458 "cplus.met"
#line 3460 "cplus.met"
#line 3461 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3461 "cplus.met"
#line 3462 "cplus.met"
                    {
#line 3462 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3462 "cplus.met"
                        {
#line 3462 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3462 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3462 "cplus.met"
                            ReplaceTree(_ptRes1, 1, valTree );
#line 3462 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3462 "cplus.met"
                        }
#line 3462 "cplus.met"
                        paramList =AddList(paramList , _ptTree0);
#line 3462 "cplus.met"
                    }
#line 3462 "cplus.met"
#line 3462 "cplus.met"
                }
#line 3462 "cplus.met"
#line 3463 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3463 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3463 "cplus.met"
#line 3464 "cplus.met"
                     followed = 1;
#line 3464 "cplus.met"
                }
#line 3464 "cplus.met"
#line 3465 "cplus.met"
                if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3465 "cplus.met"
                   (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3465 "cplus.met"
#line 3466 "cplus.met"
#line 3467 "cplus.met"
                     followed = 1;
#line 3467 "cplus.met"
#line 3468 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3468 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3468 "cplus.met"
                        MulFreeTree(3,_addlist1,paramList,valTree);
                        TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3468 "cplus.met"
                    } else {
#line 3468 "cplus.met"
                        tokenAhead = 0 ;
#line 3468 "cplus.met"
                    }
#line 3468 "cplus.met"
#line 3468 "cplus.met"
#line 3468 "cplus.met"
                }
#line 3468 "cplus.met"
#line 3468 "cplus.met"
            }
#line 3468 "cplus.met"
        }
#line 3468 "cplus.met"
#line 3468 "cplus.met"
        _addlist1 = paramList ;
#line 3468 "cplus.met"
#line 3471 "cplus.met"
        while ( followed && !exit ) { 
#line 3471 "cplus.met"
#line 3472 "cplus.met"
#line 3473 "cplus.met"
             followed = 0 ;
#line 3473 "cplus.met"
#line 3474 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 11, cplus))){
#line 3474 "cplus.met"
#line 3475 "cplus.met"
#line 3476 "cplus.met"
                 followed = 1 ;
#line 3476 "cplus.met"
#line 3477 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 3477 "cplus.met"
#line 3477 "cplus.met"
                if (paramList){
#line 3477 "cplus.met"
#line 3477 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3477 "cplus.met"
                } else {
#line 3477 "cplus.met"
#line 3477 "cplus.met"
                    paramList = _addlist1 ;
#line 3477 "cplus.met"
                }
#line 3477 "cplus.met"
#line 3477 "cplus.met"
#line 3477 "cplus.met"
            } else {
#line 3477 "cplus.met"
#line 3480 "cplus.met"
                if ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus))){
#line 3480 "cplus.met"
#line 3481 "cplus.met"
#line 3481 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,valTree );
#line 3481 "cplus.met"
#line 3481 "cplus.met"
                    if (paramList){
#line 3481 "cplus.met"
#line 3481 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3481 "cplus.met"
                    } else {
#line 3481 "cplus.met"
#line 3481 "cplus.met"
                        paramList = _addlist1 ;
#line 3481 "cplus.met"
                    }
#line 3481 "cplus.met"
                } else {
#line 3481 "cplus.met"
#line 3483 "cplus.met"
#line 3484 "cplus.met"
                    if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(valTree))) ){
#line 3484 "cplus.met"
#line 3485 "cplus.met"
#line 3486 "cplus.met"
                        {
#line 3486 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3486 "cplus.met"
                            {
#line 3486 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3486 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3486 "cplus.met"
                                ReplaceTree(_ptRes1, 1, valTree );
#line 3486 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3486 "cplus.met"
                            }
#line 3486 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3486 "cplus.met"
                        }
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                        if (paramList){
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3486 "cplus.met"
                        } else {
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                            paramList = _addlist1 ;
#line 3486 "cplus.met"
                        }
#line 3486 "cplus.met"
#line 3487 "cplus.met"
                        if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")) || 
#line 3487 "cplus.met"
                           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,","))){
#line 3487 "cplus.met"
#line 3488 "cplus.met"
                             followed = 1;
#line 3488 "cplus.met"
                        }
#line 3488 "cplus.met"
#line 3489 "cplus.met"
                        if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 3489 "cplus.met"
                           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 3489 "cplus.met"
#line 3490 "cplus.met"
#line 3491 "cplus.met"
                             followed = 1;
#line 3491 "cplus.met"
#line 3492 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3492 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3492 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,",")
#line 3492 "cplus.met"
                            } else {
#line 3492 "cplus.met"
                                tokenAhead = 0 ;
#line 3492 "cplus.met"
                            }
#line 3492 "cplus.met"
#line 3492 "cplus.met"
#line 3492 "cplus.met"
                        }
#line 3492 "cplus.met"
#line 3492 "cplus.met"
#line 3493 "cplus.met"
                    } else {
#line 3493 "cplus.met"
#line 3496 "cplus.met"
#line 3497 "cplus.met"
                        {
#line 3497 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3497 "cplus.met"
                            {
#line 3497 "cplus.met"
                                PPTREE _ptRes1=0;
#line 3497 "cplus.met"
                                _ptRes1= MakeTree(VAR_LIST, 0);
#line 3497 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3497 "cplus.met"
                            }
#line 3497 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3497 "cplus.met"
                        }
#line 3497 "cplus.met"
#line 3497 "cplus.met"
                        if (paramList){
#line 3497 "cplus.met"
#line 3497 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3497 "cplus.met"
                        } else {
#line 3497 "cplus.met"
#line 3497 "cplus.met"
                            paramList = _addlist1 ;
#line 3497 "cplus.met"
                        }
#line 3497 "cplus.met"
#line 3498 "cplus.met"
                         exit = 1 ;
#line 3498 "cplus.met"
#line 3499 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 3499 "cplus.met"
#line 3499 "cplus.met"
                        }
#line 3499 "cplus.met"
#line 3501 "cplus.met"
                        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3501 "cplus.met"
#line 3502 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3502 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3502 "cplus.met"
                                MulFreeTree(3,_addlist1,paramList,valTree);
                                TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3502 "cplus.met"
                            } else {
#line 3502 "cplus.met"
                                tokenAhead = 0 ;
#line 3502 "cplus.met"
                            }
#line 3502 "cplus.met"
                        }
#line 3502 "cplus.met"
#line 3502 "cplus.met"
                    }
#line 3502 "cplus.met"
#line 3502 "cplus.met"
                }
#line 3502 "cplus.met"
            }
#line 3502 "cplus.met"
#line 3502 "cplus.met"
        } 
#line 3502 "cplus.met"
#line 3506 "cplus.met"
        if ((! ( exit )) && 
#line 3506 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 3506 "cplus.met"
#line 3507 "cplus.met"
            {
#line 3507 "cplus.met"
                PPTREE _ptTree0=0;
#line 3507 "cplus.met"
                {
#line 3507 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3507 "cplus.met"
                    _ptRes1= MakeTree(VAR_LIST, 0);
#line 3507 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3507 "cplus.met"
                }
#line 3507 "cplus.met"
                paramList =AddList(paramList , _ptTree0);
#line 3507 "cplus.met"
            }
#line 3507 "cplus.met"
#line 3507 "cplus.met"
        }
#line 3507 "cplus.met"
#line 3508 "cplus.met"
         }  
#line 3508 "cplus.met"
#line 3508 "cplus.met"
#line 3508 "cplus.met"
    }
#line 3508 "cplus.met"
#line 3510 "cplus.met"
     } 
#line 3510 "cplus.met"
#line 3511 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3511 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3511 "cplus.met"
        MulFreeTree(3,_addlist1,paramList,valTree);
        TOKEN_EXIT(parameter_list_extended_exit,")")
#line 3511 "cplus.met"
    } else {
#line 3511 "cplus.met"
        tokenAhead = 0 ;
#line 3511 "cplus.met"
    }
#line 3511 "cplus.met"
#line 3512 "cplus.met"
    {
#line 3512 "cplus.met"
        _retValue = paramList ;
#line 3512 "cplus.met"
        goto parameter_list_extended_ret;
#line 3512 "cplus.met"
        
#line 3512 "cplus.met"
    }
#line 3512 "cplus.met"
#line 3512 "cplus.met"
#line 3512 "cplus.met"

#line 3513 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3513 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3513 "cplus.met"
return((PPTREE) 0);
#line 3513 "cplus.met"

#line 3513 "cplus.met"
parameter_list_extended_exit :
#line 3513 "cplus.met"

#line 3513 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_EXIT,(PPTREE)0);
#line 3513 "cplus.met"
    _funcLevel--;
#line 3513 "cplus.met"
    return((PPTREE) -1) ;
#line 3513 "cplus.met"

#line 3513 "cplus.met"
parameter_list_extended_ret :
#line 3513 "cplus.met"
    
#line 3513 "cplus.met"
    _Debug = TRACE_RULE("parameter_list_extended",TRACE_RETURN,_retValue);
#line 3513 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3513 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3513 "cplus.met"
    return _retValue ;
#line 3513 "cplus.met"
}
#line 3513 "cplus.met"

#line 3513 "cplus.met"
#line 4007 "cplus.met"
PPTREE cplus::parse_entry ( int error_free)
#line 4007 "cplus.met"
{
#line 4007 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 4007 "cplus.met"
    int _value,_nbPre = 0 ;
#line 4007 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 4007 "cplus.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 4007 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 4007 "cplus.met"
#line 4007 "cplus.met"
    PPTREE retValue = (PPTREE) 0;
#line 4007 "cplus.met"
#line 4009 "cplus.met"
    if ((((((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(func_declaration), 81, cplus)) || 
#line 4009 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(statement), 147, cplus))) || 
#line 4009 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(data_declaration), 45, cplus))) || 
#line 4009 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_list), 151, cplus))) || 
#line 4009 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(switch_elem), 150, cplus))) || 
#line 4009 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(expression), 67, cplus))){
#line 4009 "cplus.met"
#line 4010 "cplus.met"
        {
#line 4010 "cplus.met"
            _retValue = retValue ;
#line 4010 "cplus.met"
            goto parse_entry_ret;
#line 4010 "cplus.met"
            
#line 4010 "cplus.met"
        }
#line 4010 "cplus.met"
    } else {
#line 4010 "cplus.met"
#line 4012 "cplus.met"
        if ( (NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 4012 "cplus.met"
            MulFreeTree(1,retValue);
            PROG_EXIT(parse_entry_exit,"parse_entry")
#line 4012 "cplus.met"
        }
#line 4012 "cplus.met"
    }
#line 4012 "cplus.met"
#line 4012 "cplus.met"
#line 4012 "cplus.met"

#line 4013 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 4013 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 4013 "cplus.met"
return((PPTREE) 0);
#line 4013 "cplus.met"

#line 4013 "cplus.met"
parse_entry_exit :
#line 4013 "cplus.met"

#line 4013 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 4013 "cplus.met"
    _funcLevel--;
#line 4013 "cplus.met"
    return((PPTREE) -1) ;
#line 4013 "cplus.met"

#line 4013 "cplus.met"
parse_entry_ret :
#line 4013 "cplus.met"
    
#line 4013 "cplus.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 4013 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 4013 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 4013 "cplus.met"
    return _retValue ;
#line 4013 "cplus.met"
}
#line 4013 "cplus.met"

#line 4013 "cplus.met"
#line 3044 "cplus.met"
PPTREE cplus::pm_expression ( int error_free)
#line 3044 "cplus.met"
{
#line 3044 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3044 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3044 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3044 "cplus.met"
    int _Debug = TRACE_RULE("pm_expression",TRACE_ENTER,(PPTREE)0);
#line 3044 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3044 "cplus.met"
#line 3044 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3044 "cplus.met"
#line 3046 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3046 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 3046 "cplus.met"
    }
#line 3046 "cplus.met"
#line 3047 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINETOI,".*")) || 
#line 3047 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPEETOI,"->*"))) { 
#line 3047 "cplus.met"
#line 3048 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3048 "cplus.met"
        switch( lexEl.Value) {
#line 3048 "cplus.met"
#line 3049 "cplus.met"
            case POINETOI : 
#line 3049 "cplus.met"
                tokenAhead = 0 ;
#line 3049 "cplus.met"
                CommTerm();
#line 3049 "cplus.met"
#line 3049 "cplus.met"
                {
#line 3049 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3049 "cplus.met"
                    _ptRes0= MakeTree(DOT_MEMB, 2);
#line 3049 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3049 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3049 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 3049 "cplus.met"
                    }
#line 3049 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3049 "cplus.met"
                    expTree=_ptRes0;
#line 3049 "cplus.met"
                }
#line 3049 "cplus.met"
                break;
#line 3049 "cplus.met"
#line 3050 "cplus.met"
            case TIRESUPEETOI : 
#line 3050 "cplus.met"
                tokenAhead = 0 ;
#line 3050 "cplus.met"
                CommTerm();
#line 3050 "cplus.met"
#line 3050 "cplus.met"
                {
#line 3050 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3050 "cplus.met"
                    _ptRes0= MakeTree(ARROW_MEMB, 2);
#line 3050 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3050 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3050 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(pm_expression_exit,"pm_expression")
#line 3050 "cplus.met"
                    }
#line 3050 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3050 "cplus.met"
                    expTree=_ptRes0;
#line 3050 "cplus.met"
                }
#line 3050 "cplus.met"
                break;
#line 3050 "cplus.met"
            default :
#line 3050 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(pm_expression_exit,"either .* or ->*")
#line 3050 "cplus.met"
                break;
#line 3050 "cplus.met"
        }
#line 3050 "cplus.met"
    } 
#line 3050 "cplus.met"
#line 3052 "cplus.met"
    {
#line 3052 "cplus.met"
        _retValue = expTree ;
#line 3052 "cplus.met"
        goto pm_expression_ret;
#line 3052 "cplus.met"
        
#line 3052 "cplus.met"
    }
#line 3052 "cplus.met"
#line 3052 "cplus.met"
#line 3052 "cplus.met"

#line 3053 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3053 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3053 "cplus.met"
return((PPTREE) 0);
#line 3053 "cplus.met"

#line 3053 "cplus.met"
pm_expression_exit :
#line 3053 "cplus.met"

#line 3053 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_EXIT,(PPTREE)0);
#line 3053 "cplus.met"
    _funcLevel--;
#line 3053 "cplus.met"
    return((PPTREE) -1) ;
#line 3053 "cplus.met"

#line 3053 "cplus.met"
pm_expression_ret :
#line 3053 "cplus.met"
    
#line 3053 "cplus.met"
    _Debug = TRACE_RULE("pm_expression",TRACE_RETURN,_retValue);
#line 3053 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3053 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3053 "cplus.met"
    return _retValue ;
#line 3053 "cplus.met"
}
#line 3053 "cplus.met"

#line 3053 "cplus.met"
#line 3222 "cplus.met"
PPTREE cplus::postfix_expression ( int error_free)
#line 3222 "cplus.met"
{
#line 3222 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3222 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3222 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3222 "cplus.met"
    int _Debug = TRACE_RULE("postfix_expression",TRACE_ENTER,(PPTREE)0);
#line 3222 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3222 "cplus.met"
#line 3222 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expList = (PPTREE) 0,expArray = (PPTREE) 0;
#line 3222 "cplus.met"
#line 3224 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(primary_expression), 119, cplus))){
#line 3224 "cplus.met"
#line 3225 "cplus.met"
#line 3226 "cplus.met"
        if ( (expTree=NQUICK_CALL(_Tak(simple_type_name)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3226 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3226 "cplus.met"
        }
#line 3226 "cplus.met"
#line 3227 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 3227 "cplus.met"
#line 3228 "cplus.met"
            
#line 3228 "cplus.met"
            MulFreeTree(3,expArray,expList,expTree);
            LEX_EXIT ("",0);
#line 3228 "cplus.met"
            goto postfix_expression_exit;
#line 3228 "cplus.met"
#line 3228 "cplus.met"
        }
#line 3228 "cplus.met"
#line 3228 "cplus.met"
#line 3228 "cplus.met"
    }
#line 3228 "cplus.met"
#line 3230 "cplus.met"
    while (((((((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 3230 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) || 
#line 3230 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINT,"POINT"))) || 
#line 3230 "cplus.met"
              ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRESUPE,"->"))) || 
#line 3230 "cplus.met"
             ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUSPLUS,"++"))) || 
#line 3230 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRETIRE,"--"))) || 
#line 3230 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AOUV,"{"))) || 
#line 3230 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))) { 
#line 3230 "cplus.met"
#line 3231 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3231 "cplus.met"
        switch( lexEl.Value) {
#line 3231 "cplus.met"
#line 3234 "cplus.met"
            case POUV : 
#line 3234 "cplus.met"
                tokenAhead = 0 ;
#line 3234 "cplus.met"
                CommTerm();
#line 3234 "cplus.met"
#line 3233 "cplus.met"
#line 3234 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 3234 "cplus.met"
#line 3235 "cplus.met"
                    {
#line 3235 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3235 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 3235 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3235 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 3235 "cplus.met"
                        expTree=_ptRes0;
#line 3235 "cplus.met"
                    }
#line 3235 "cplus.met"
                } else {
#line 3235 "cplus.met"
#line 3237 "cplus.met"
                    {
#line 3237 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3237 "cplus.met"
                        _ptRes0= MakeTree(EXP_LIST, 2);
#line 3237 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3237 "cplus.met"
                        expTree=_ptRes0;
#line 3237 "cplus.met"
                    }
#line 3237 "cplus.met"
                }
#line 3237 "cplus.met"
#line 3238 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3238 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3238 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,")")
#line 3238 "cplus.met"
                } else {
#line 3238 "cplus.met"
                    tokenAhead = 0 ;
#line 3238 "cplus.met"
                }
#line 3238 "cplus.met"
#line 3238 "cplus.met"
                break;
#line 3238 "cplus.met"
#line 3242 "cplus.met"
            case AOUV : 
#line 3242 "cplus.met"
                tokenAhead = 0 ;
#line 3242 "cplus.met"
                CommTerm();
#line 3242 "cplus.met"
#line 3241 "cplus.met"
#line 3242 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 3242 "cplus.met"
#line 3243 "cplus.met"
                    {
#line 3243 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3243 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 3243 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3243 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 3243 "cplus.met"
                        expTree=_ptRes0;
#line 3243 "cplus.met"
                    }
#line 3243 "cplus.met"
                } else {
#line 3243 "cplus.met"
#line 3245 "cplus.met"
                    {
#line 3245 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3245 "cplus.met"
                        _ptRes0= MakeTree(EXP_BRA, 2);
#line 3245 "cplus.met"
                        ReplaceTree(_ptRes0, 1, expTree );
#line 3245 "cplus.met"
                        expTree=_ptRes0;
#line 3245 "cplus.met"
                    }
#line 3245 "cplus.met"
                }
#line 3245 "cplus.met"
#line 3246 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3246 "cplus.met"
                if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3246 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    TOKEN_EXIT(postfix_expression_exit,"}")
#line 3246 "cplus.met"
                } else {
#line 3246 "cplus.met"
                    tokenAhead = 0 ;
#line 3246 "cplus.met"
                }
#line 3246 "cplus.met"
#line 3246 "cplus.met"
                break;
#line 3246 "cplus.met"
#line 3250 "cplus.met"
            case COUV : 
#line 3250 "cplus.met"
                tokenAhead = 0 ;
#line 3250 "cplus.met"
                CommTerm();
#line 3250 "cplus.met"
#line 3249 "cplus.met"
#line 3250 "cplus.met"
                if ( (expArray=NQUICK_CALL(_Tak(array_expression_follow)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 3250 "cplus.met"
                    MulFreeTree(3,expArray,expList,expTree);
                    PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3250 "cplus.met"
                }
#line 3250 "cplus.met"
#line 3251 "cplus.met"
                ReplaceTree(expArray ,1 ,expTree );
#line 3251 "cplus.met"
#line 3252 "cplus.met"
                expTree = expArray ;
#line 3252 "cplus.met"
#line 3252 "cplus.met"
                break;
#line 3252 "cplus.met"
#line 3254 "cplus.met"
            case POINPOINPOIN : 
#line 3254 "cplus.met"
                tokenAhead = 0 ;
#line 3254 "cplus.met"
                CommTerm();
#line 3254 "cplus.met"
#line 3254 "cplus.met"
                {
#line 3254 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3254 "cplus.met"
                    _ptRes0= MakeTree(VARIADIC_EXPRESSION, 1);
#line 3254 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3254 "cplus.met"
                    expTree=_ptRes0;
#line 3254 "cplus.met"
                }
#line 3254 "cplus.met"
                break;
#line 3254 "cplus.met"
#line 3255 "cplus.met"
            case META : 
#line 3255 "cplus.met"
            case POINT : 
#line 3255 "cplus.met"
                tokenAhead = 0 ;
#line 3255 "cplus.met"
                CommTerm();
#line 3255 "cplus.met"
#line 3255 "cplus.met"
                {
#line 3255 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3255 "cplus.met"
                    _ptRes0= MakeTree(REF, 2);
#line 3255 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3255 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 3255 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3255 "cplus.met"
                    }
#line 3255 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3255 "cplus.met"
                    expTree=_ptRes0;
#line 3255 "cplus.met"
                }
#line 3255 "cplus.met"
                break;
#line 3255 "cplus.met"
#line 3256 "cplus.met"
            case TIRESUPE : 
#line 3256 "cplus.met"
                tokenAhead = 0 ;
#line 3256 "cplus.met"
                CommTerm();
#line 3256 "cplus.met"
#line 3256 "cplus.met"
                {
#line 3256 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3256 "cplus.met"
                    _ptRes0= MakeTree(ARROW, 2);
#line 3256 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3256 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(primary_expression)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 3256 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,expArray,expList,expTree);
                        PROG_EXIT(postfix_expression_exit,"postfix_expression")
#line 3256 "cplus.met"
                    }
#line 3256 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3256 "cplus.met"
                    expTree=_ptRes0;
#line 3256 "cplus.met"
                }
#line 3256 "cplus.met"
                break;
#line 3256 "cplus.met"
#line 3257 "cplus.met"
            case PLUSPLUS : 
#line 3257 "cplus.met"
                tokenAhead = 0 ;
#line 3257 "cplus.met"
                CommTerm();
#line 3257 "cplus.met"
#line 3257 "cplus.met"
                {
#line 3257 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3257 "cplus.met"
                    _ptRes0= MakeTree(AINCR, 1);
#line 3257 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3257 "cplus.met"
                    expTree=_ptRes0;
#line 3257 "cplus.met"
                }
#line 3257 "cplus.met"
                break;
#line 3257 "cplus.met"
#line 3258 "cplus.met"
            case TIRETIRE : 
#line 3258 "cplus.met"
                tokenAhead = 0 ;
#line 3258 "cplus.met"
                CommTerm();
#line 3258 "cplus.met"
#line 3258 "cplus.met"
                {
#line 3258 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3258 "cplus.met"
                    _ptRes0= MakeTree(ADECR, 1);
#line 3258 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3258 "cplus.met"
                    expTree=_ptRes0;
#line 3258 "cplus.met"
                }
#line 3258 "cplus.met"
                break;
#line 3258 "cplus.met"
            default :
#line 3258 "cplus.met"
                MulFreeTree(3,expArray,expList,expTree);
                CASE_EXIT(postfix_expression_exit,"either ( or { or [ or ... or POINT or -> or ++ or --")
#line 3258 "cplus.met"
                break;
#line 3258 "cplus.met"
        }
#line 3258 "cplus.met"
    } 
#line 3258 "cplus.met"
#line 3260 "cplus.met"
    {
#line 3260 "cplus.met"
        _retValue = expTree ;
#line 3260 "cplus.met"
        goto postfix_expression_ret;
#line 3260 "cplus.met"
        
#line 3260 "cplus.met"
    }
#line 3260 "cplus.met"
#line 3260 "cplus.met"
#line 3260 "cplus.met"

#line 3261 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3261 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3261 "cplus.met"
return((PPTREE) 0);
#line 3261 "cplus.met"

#line 3261 "cplus.met"
postfix_expression_exit :
#line 3261 "cplus.met"

#line 3261 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_EXIT,(PPTREE)0);
#line 3261 "cplus.met"
    _funcLevel--;
#line 3261 "cplus.met"
    return((PPTREE) -1) ;
#line 3261 "cplus.met"

#line 3261 "cplus.met"
postfix_expression_ret :
#line 3261 "cplus.met"
    
#line 3261 "cplus.met"
    _Debug = TRACE_RULE("postfix_expression",TRACE_RETURN,_retValue);
#line 3261 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3261 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3261 "cplus.met"
    return _retValue ;
#line 3261 "cplus.met"
}
#line 3261 "cplus.met"

#line 3261 "cplus.met"
#line 3276 "cplus.met"
PPTREE cplus::primary_expression ( int error_free)
#line 3276 "cplus.met"
{
#line 3276 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3276 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3276 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3276 "cplus.met"
    int _Debug = TRACE_RULE("primary_expression",TRACE_ENTER,(PPTREE)0);
#line 3276 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3276 "cplus.met"
#line 3276 "cplus.met"
    PPTREE result = (PPTREE) 0,expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3276 "cplus.met"
#line 3278 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3278 "cplus.met"
    switch( lexEl.Value) {
#line 3278 "cplus.met"
#line 3281 "cplus.met"
        case POUV : 
#line 3281 "cplus.met"
            tokenAhead = 0 ;
#line 3281 "cplus.met"
            CommTerm();
#line 3281 "cplus.met"
#line 3280 "cplus.met"
#line 3281 "cplus.met"
            if ( (expTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3281 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3281 "cplus.met"
            }
#line 3281 "cplus.met"
#line 3282 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3282 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3282 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 3282 "cplus.met"
            } else {
#line 3282 "cplus.met"
                tokenAhead = 0 ;
#line 3282 "cplus.met"
            }
#line 3282 "cplus.met"
#line 3283 "cplus.met"
            {
#line 3283 "cplus.met"
                PPTREE _ptTree0=0;
#line 3283 "cplus.met"
                {
#line 3283 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3283 "cplus.met"
                    _ptRes1= MakeTree(EXP, 1);
#line 3283 "cplus.met"
                    ReplaceTree(_ptRes1, 1, expTree );
#line 3283 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3283 "cplus.met"
                }
#line 3283 "cplus.met"
                _retValue =_ptTree0;
#line 3283 "cplus.met"
                goto primary_expression_ret;
#line 3283 "cplus.met"
            }
#line 3283 "cplus.met"
#line 3283 "cplus.met"
            break;
#line 3283 "cplus.met"
#line 3285 "cplus.met"
        case OPERATOR : 
#line 3285 "cplus.met"
#line 3285 "cplus.met"
            {
#line 3285 "cplus.met"
                PPTREE _ptTree0=0;
#line 3285 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 3285 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3285 "cplus.met"
                }
#line 3285 "cplus.met"
                _retValue =_ptTree0;
#line 3285 "cplus.met"
                goto primary_expression_ret;
#line 3285 "cplus.met"
            }
#line 3285 "cplus.met"
            break;
#line 3285 "cplus.met"
#line 3286 "cplus.met"
        case TILD : 
#line 3286 "cplus.met"
#line 3286 "cplus.met"
            {
#line 3286 "cplus.met"
                PPTREE _ptTree0=0;
#line 3286 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 3286 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3286 "cplus.met"
                }
#line 3286 "cplus.met"
                _retValue =_ptTree0;
#line 3286 "cplus.met"
                goto primary_expression_ret;
#line 3286 "cplus.met"
            }
#line 3286 "cplus.met"
            break;
#line 3286 "cplus.met"
#line 3287 "cplus.met"
        case META : 
#line 3287 "cplus.met"
#line 3288 "cplus.met"
#line 3289 "cplus.met"
            {
#line 3289 "cplus.met"
                PPTREE _ptTree0=0;
#line 3289 "cplus.met"
                {
#line 3289 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3289 "cplus.met"
                    _ptRes1= MakeTree(META, 1);
#line 3289 "cplus.met"
                    (tokenAhead == 7|| (LexMeta(),TRACE_LEX(1)));
#line 3289 "cplus.met"
                    if ( ! TERM_OR_META(META,"META") || !(BUILD_TERM_META(_ptTree1))) {
#line 3289 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                        TOKEN_EXIT(primary_expression_exit,"META")
#line 3289 "cplus.met"
                    } else {
#line 3289 "cplus.met"
                        tokenAhead = 0 ;
#line 3289 "cplus.met"
                    }
#line 3289 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3289 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3289 "cplus.met"
                }
#line 3289 "cplus.met"
                _retValue =_ptTree0;
#line 3289 "cplus.met"
                goto primary_expression_ret;
#line 3289 "cplus.met"
            }
#line 3289 "cplus.met"
#line 3289 "cplus.met"
            break;
#line 3289 "cplus.met"
#line 3291 "cplus.met"
        case IDENT : 
#line 3291 "cplus.met"
#line 3292 "cplus.met"
            if ((tokenAhead == 12|| (PushFunction(),TRACE_LEX(1)))&&TERM_OR_META(PUSH_FUNCTION,"PUSH_FUNCTION") && !(tokenAhead = 0) && ( BUILD_TERM_META(result))) {
#line 3292 "cplus.met"
#line 3293 "cplus.met"
#line 3294 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3294 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3294 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,"(")
#line 3294 "cplus.met"
                } else {
#line 3294 "cplus.met"
                    tokenAhead = 0 ;
#line 3294 "cplus.met"
                }
#line 3294 "cplus.met"
#line 3295 "cplus.met"
                {
#line 3295 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3295 "cplus.met"
                    {
#line 3295 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3295 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3295 "cplus.met"
                        (tokenAhead == 11|| (PushArgument(),TRACE_LEX(1)));
#line 3295 "cplus.met"
                        if ( ! TERM_OR_META(PUSH_ARGUMENT,"PUSH_ARGUMENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3295 "cplus.met"
                            MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expTree,list,result);
                            TOKEN_EXIT(primary_expression_exit,"PUSH_ARGUMENT")
#line 3295 "cplus.met"
                        } else {
#line 3295 "cplus.met"
                            tokenAhead = 0 ;
#line 3295 "cplus.met"
                        }
#line 3295 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3295 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3295 "cplus.met"
                    }
#line 3295 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 3295 "cplus.met"
                }
#line 3295 "cplus.met"
#line 3296 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3296 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3296 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,",")
#line 3296 "cplus.met"
                } else {
#line 3296 "cplus.met"
                    tokenAhead = 0 ;
#line 3296 "cplus.met"
                }
#line 3296 "cplus.met"
#line 3297 "cplus.met"
                {
#line 3297 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3297 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3297 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3297 "cplus.met"
                    }
#line 3297 "cplus.met"
                    list =AddList(list , _ptTree0);
#line 3297 "cplus.met"
                }
#line 3297 "cplus.met"
#line 3298 "cplus.met"
                {
#line 3298 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3298 "cplus.met"
                    _ptRes0= MakeTree(EXP_SEQ, 1);
#line 3298 "cplus.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 3298 "cplus.met"
                    expTree=_ptRes0;
#line 3298 "cplus.met"
                }
#line 3298 "cplus.met"
#line 3299 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3299 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3299 "cplus.met"
                    MulFreeTree(3,expTree,list,result);
                    TOKEN_EXIT(primary_expression_exit,")")
#line 3299 "cplus.met"
                } else {
#line 3299 "cplus.met"
                    tokenAhead = 0 ;
#line 3299 "cplus.met"
                }
#line 3299 "cplus.met"
#line 3300 "cplus.met"
                {
#line 3300 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3300 "cplus.met"
                    {
#line 3300 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3300 "cplus.met"
                        _ptRes1= MakeTree(EXP_LIST, 2);
#line 3300 "cplus.met"
                        {
#line 3300 "cplus.met"
                            PPTREE _ptRes2=0;
#line 3300 "cplus.met"
                            _ptRes2= MakeTree(IDENT, 1);
#line 3300 "cplus.met"
                            ReplaceTree(_ptRes2, 1, result );
#line 3300 "cplus.met"
                            _ptTree1=_ptRes2;
#line 3300 "cplus.met"
                        }
#line 3300 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3300 "cplus.met"
                        ReplaceTree(_ptRes1, 2, expTree );
#line 3300 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3300 "cplus.met"
                    }
#line 3300 "cplus.met"
                    _retValue =_ptTree0;
#line 3300 "cplus.met"
                    goto primary_expression_ret;
#line 3300 "cplus.met"
                }
#line 3300 "cplus.met"
#line 3300 "cplus.met"
#line 3300 "cplus.met"
            } else {
#line 3300 "cplus.met"
#line 3303 "cplus.met"
                {
#line 3303 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3303 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 3303 "cplus.met"
                        MulFreeTree(4,_ptTree0,expTree,list,result);
                        PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3303 "cplus.met"
                    }
#line 3303 "cplus.met"
                    _retValue =_ptTree0;
#line 3303 "cplus.met"
                    goto primary_expression_ret;
#line 3303 "cplus.met"
                }
#line 3303 "cplus.met"
            }
#line 3303 "cplus.met"
            break;
#line 3303 "cplus.met"
#line 3304 "cplus.met"
        case STRING : 
#line 3304 "cplus.met"
#line 3304 "cplus.met"
            {
#line 3304 "cplus.met"
                PPTREE _ptTree0=0;
#line 3304 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(string_list)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 3304 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3304 "cplus.met"
                }
#line 3304 "cplus.met"
                _retValue =_ptTree0;
#line 3304 "cplus.met"
                goto primary_expression_ret;
#line 3304 "cplus.met"
            }
#line 3304 "cplus.met"
            break;
#line 3304 "cplus.met"
#line 3305 "cplus.met"
        case POINPOINPOIN : 
#line 3305 "cplus.met"
            tokenAhead = 0 ;
#line 3305 "cplus.met"
            CommTerm();
#line 3305 "cplus.met"
#line 3305 "cplus.met"
            {
#line 3305 "cplus.met"
                PPTREE _ptTree0=0;
#line 3305 "cplus.met"
                {
#line 3305 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3305 "cplus.met"
                    _ptRes1= MakeTree(ELIPSIS_EXPRESSION, 0);
#line 3305 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3305 "cplus.met"
                }
#line 3305 "cplus.met"
                _retValue =_ptTree0;
#line 3305 "cplus.met"
                goto primary_expression_ret;
#line 3305 "cplus.met"
            }
#line 3305 "cplus.met"
            break;
#line 3305 "cplus.met"
#line 3306 "cplus.met"
        case VA_ARG : 
#line 3306 "cplus.met"
            tokenAhead = 0 ;
#line 3306 "cplus.met"
            CommTerm();
#line 3306 "cplus.met"
#line 3307 "cplus.met"
#line 3308 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3308 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3308 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,"(")
#line 3308 "cplus.met"
            } else {
#line 3308 "cplus.met"
                tokenAhead = 0 ;
#line 3308 "cplus.met"
            }
#line 3308 "cplus.met"
#line 3309 "cplus.met"
            {
#line 3309 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3309 "cplus.met"
                _ptRes0= MakeTree(VA_ARG, 2);
#line 3309 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 3309 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3309 "cplus.met"
                }
#line 3309 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3309 "cplus.met"
                expTree=_ptRes0;
#line 3309 "cplus.met"
            }
#line 3309 "cplus.met"
#line 3310 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3310 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3310 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,",")
#line 3310 "cplus.met"
            } else {
#line 3310 "cplus.met"
                tokenAhead = 0 ;
#line 3310 "cplus.met"
            }
#line 3310 "cplus.met"
#line 3311 "cplus.met"
            {
#line 3311 "cplus.met"
                PPTREE _ptTree0=0;
#line 3311 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3311 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3311 "cplus.met"
                }
#line 3311 "cplus.met"
                ReplaceTree(expTree , 2 , _ptTree0);
#line 3311 "cplus.met"
            }
#line 3311 "cplus.met"
#line 3312 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3312 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3312 "cplus.met"
                MulFreeTree(3,expTree,list,result);
                TOKEN_EXIT(primary_expression_exit,")")
#line 3312 "cplus.met"
            } else {
#line 3312 "cplus.met"
                tokenAhead = 0 ;
#line 3312 "cplus.met"
            }
#line 3312 "cplus.met"
#line 3313 "cplus.met"
            {
#line 3313 "cplus.met"
                _retValue = expTree ;
#line 3313 "cplus.met"
                goto primary_expression_ret;
#line 3313 "cplus.met"
                
#line 3313 "cplus.met"
            }
#line 3313 "cplus.met"
#line 3313 "cplus.met"
            break;
#line 3313 "cplus.met"
#line 3315 "cplus.met"
        case COUV : 
#line 3315 "cplus.met"
#line 3315 "cplus.met"
            {
#line 3315 "cplus.met"
                PPTREE _ptTree0=0;
#line 3315 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(lambda)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 3315 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3315 "cplus.met"
                }
#line 3315 "cplus.met"
                _retValue =_ptTree0;
#line 3315 "cplus.met"
                goto primary_expression_ret;
#line 3315 "cplus.met"
            }
#line 3315 "cplus.met"
            break;
#line 3315 "cplus.met"
#line 3316 "cplus.met"
        default : 
#line 3316 "cplus.met"
#line 3316 "cplus.met"
            {
#line 3316 "cplus.met"
                PPTREE _ptTree0=0;
#line 3316 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(constan)(error_free), 36, cplus))== (PPTREE) -1 ) {
#line 3316 "cplus.met"
                    MulFreeTree(4,_ptTree0,expTree,list,result);
                    PROG_EXIT(primary_expression_exit,"primary_expression")
#line 3316 "cplus.met"
                }
#line 3316 "cplus.met"
                _retValue =_ptTree0;
#line 3316 "cplus.met"
                goto primary_expression_ret;
#line 3316 "cplus.met"
            }
#line 3316 "cplus.met"
            break;
#line 3316 "cplus.met"
    }
#line 3316 "cplus.met"
#line 3316 "cplus.met"
#line 3317 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3317 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3317 "cplus.met"
return((PPTREE) 0);
#line 3317 "cplus.met"

#line 3317 "cplus.met"
primary_expression_exit :
#line 3317 "cplus.met"

#line 3317 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_EXIT,(PPTREE)0);
#line 3317 "cplus.met"
    _funcLevel--;
#line 3317 "cplus.met"
    return((PPTREE) -1) ;
#line 3317 "cplus.met"

#line 3317 "cplus.met"
primary_expression_ret :
#line 3317 "cplus.met"
    
#line 3317 "cplus.met"
    _Debug = TRACE_RULE("primary_expression",TRACE_RETURN,_retValue);
#line 3317 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3317 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3317 "cplus.met"
    return _retValue ;
#line 3317 "cplus.met"
}
#line 3317 "cplus.met"

#line 3317 "cplus.met"
#line 920 "cplus.met"
PPTREE cplus::program ( int error_free)
#line 920 "cplus.met"
{
#line 920 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 920 "cplus.met"
    int _value,_nbPre = 0 ;
#line 920 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 920 "cplus.met"
    int _Debug = TRACE_RULE("program",TRACE_ENTER,(PPTREE)0);
#line 920 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 920 "cplus.met"
#line 920 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 920 "cplus.met"
#line 920 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 920 "cplus.met"
#line 922 "cplus.met"
     debut : 
#line 922 "cplus.met"
#line 922 "cplus.met"
    _addlist1 = list ;
#line 922 "cplus.met"
#line 923 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ext_all), 69, cplus)) { 
#line 923 "cplus.met"
#line 924 "cplus.met"
#line 924 "cplus.met"
        _addlist1 =AddList(_addlist1 ,valTree );
#line 924 "cplus.met"
#line 924 "cplus.met"
        if (list){
#line 924 "cplus.met"
#line 924 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 924 "cplus.met"
        } else {
#line 924 "cplus.met"
#line 924 "cplus.met"
            list = _addlist1 ;
#line 924 "cplus.met"
        }
#line 924 "cplus.met"
    } 
#line 924 "cplus.met"
#line 925 "cplus.met"
    {
#line 925 "cplus.met"
        PPTREE _ptTree0=0;
#line 925 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 925 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,list,valTree);
            PROG_EXIT(program_exit,"program")
#line 925 "cplus.met"
        }
#line 925 "cplus.met"
        list =AddList(list , _ptTree0);
#line 925 "cplus.met"
    }
#line 925 "cplus.met"
#line 926 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(NOTHING,_Tak(comment_eater), 31, cplus)){
#line 926 "cplus.met"
#line 926 "cplus.met"
    }
#line 926 "cplus.met"
#line 928 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 928 "cplus.met"
#line 929 "cplus.met"
#line 931 "cplus.met"
        dumperror ();
#line 931 "cplus.met"
#line 933 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 933 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 933 "cplus.met"
            MulFreeTree(3,_addlist1,list,valTree);
            TOKEN_EXIT(program_exit,"END_LINE")
#line 933 "cplus.met"
        } else {
#line 933 "cplus.met"
            tokenAhead = 0 ;
#line 933 "cplus.met"
        }
#line 933 "cplus.met"
#line 934 "cplus.met"
         hasGotError = 1 ;
#line 934 "cplus.met"
#line 935 "cplus.met"
         goto debut ;
#line 935 "cplus.met"
#line 935 "cplus.met"
#line 935 "cplus.met"
    }
#line 935 "cplus.met"
#line 937 "cplus.met"
    if ( hasGotError && ! _inhibit_exit_on_error  ){
#line 937 "cplus.met"
#line 938 "cplus.met"
         exit (-1);
#line 938 "cplus.met"
    }
#line 938 "cplus.met"
#line 939 "cplus.met"
    {
#line 939 "cplus.met"
        PPTREE _ptTree0=0;
#line 939 "cplus.met"
        {
#line 939 "cplus.met"
            PPTREE _ptRes1=0;
#line 939 "cplus.met"
            _ptRes1= MakeTree(LANGUAGE, 1);
#line 939 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 939 "cplus.met"
            _ptTree0=_ptRes1;
#line 939 "cplus.met"
        }
#line 939 "cplus.met"
        _retValue =_ptTree0;
#line 939 "cplus.met"
        goto program_ret;
#line 939 "cplus.met"
    }
#line 939 "cplus.met"
#line 939 "cplus.met"
#line 939 "cplus.met"

#line 940 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 940 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 940 "cplus.met"
return((PPTREE) 0);
#line 940 "cplus.met"

#line 940 "cplus.met"
program_exit :
#line 940 "cplus.met"

#line 940 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_EXIT,(PPTREE)0);
#line 940 "cplus.met"
    _funcLevel--;
#line 940 "cplus.met"
    return((PPTREE) -1) ;
#line 940 "cplus.met"

#line 940 "cplus.met"
program_ret :
#line 940 "cplus.met"
    
#line 940 "cplus.met"
    _Debug = TRACE_RULE("program",TRACE_RETURN,_retValue);
#line 940 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 940 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 940 "cplus.met"
    return _retValue ;
#line 940 "cplus.met"
}
#line 940 "cplus.met"

#line 940 "cplus.met"
#line 2106 "cplus.met"
PPTREE cplus::protect_declare ( int error_free)
#line 2106 "cplus.met"
{
#line 2106 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2106 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2106 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2106 "cplus.met"
    int _Debug = TRACE_RULE("protect_declare",TRACE_ENTER,(PPTREE)0);
#line 2106 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2106 "cplus.met"
#line 2106 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2106 "cplus.met"
#line 2106 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2106 "cplus.met"
#line 2108 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2108 "cplus.met"
    switch( lexEl.Value) {
#line 2108 "cplus.met"
#line 2109 "cplus.met"
        case PUBLIC : 
#line 2109 "cplus.met"
            tokenAhead = 0 ;
#line 2109 "cplus.met"
            CommTerm();
#line 2109 "cplus.met"
#line 2109 "cplus.met"
            {
#line 2109 "cplus.met"
                PPTREE _ptRes0=0;
#line 2109 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 2109 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("public"));
#line 2109 "cplus.met"
                retTree=_ptRes0;
#line 2109 "cplus.met"
            }
#line 2109 "cplus.met"
            break;
#line 2109 "cplus.met"
#line 2110 "cplus.met"
        case PROTECTED : 
#line 2110 "cplus.met"
            tokenAhead = 0 ;
#line 2110 "cplus.met"
            CommTerm();
#line 2110 "cplus.met"
#line 2110 "cplus.met"
            {
#line 2110 "cplus.met"
                PPTREE _ptRes0=0;
#line 2110 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 2110 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("protected"));
#line 2110 "cplus.met"
                retTree=_ptRes0;
#line 2110 "cplus.met"
            }
#line 2110 "cplus.met"
            break;
#line 2110 "cplus.met"
#line 2111 "cplus.met"
        case PRIVATE : 
#line 2111 "cplus.met"
            tokenAhead = 0 ;
#line 2111 "cplus.met"
            CommTerm();
#line 2111 "cplus.met"
#line 2111 "cplus.met"
            {
#line 2111 "cplus.met"
                PPTREE _ptRes0=0;
#line 2111 "cplus.met"
                _ptRes0= MakeTree(PROTECT_MEMB, 2);
#line 2111 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("private"));
#line 2111 "cplus.met"
                retTree=_ptRes0;
#line 2111 "cplus.met"
            }
#line 2111 "cplus.met"
            break;
#line 2111 "cplus.met"
        default :
#line 2111 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(protect_declare_exit,"either public or protected or private")
#line 2111 "cplus.met"
            break;
#line 2111 "cplus.met"
    }
#line 2111 "cplus.met"
#line 2113 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2113 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2113 "cplus.met"
        MulFreeTree(4,_addlist1,inter,list,retTree);
        TOKEN_EXIT(protect_declare_exit,":")
#line 2113 "cplus.met"
    } else {
#line 2113 "cplus.met"
        tokenAhead = 0 ;
#line 2113 "cplus.met"
    }
#line 2113 "cplus.met"
#line 2113 "cplus.met"
    _addlist1 = list ;
#line 2113 "cplus.met"
#line 2114 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 88, cplus)) { 
#line 2114 "cplus.met"
#line 2115 "cplus.met"
#line 2115 "cplus.met"
        _addlist1 =AddList(_addlist1 ,inter );
#line 2115 "cplus.met"
#line 2115 "cplus.met"
        if (list){
#line 2115 "cplus.met"
#line 2115 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2115 "cplus.met"
        } else {
#line 2115 "cplus.met"
#line 2115 "cplus.met"
            list = _addlist1 ;
#line 2115 "cplus.met"
        }
#line 2115 "cplus.met"
    } 
#line 2115 "cplus.met"
#line 2116 "cplus.met"
    {
#line 2116 "cplus.met"
        PPTREE _ptTree0=0;
#line 2116 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2116 "cplus.met"
        _retValue =_ptTree0;
#line 2116 "cplus.met"
        goto protect_declare_ret;
#line 2116 "cplus.met"
    }
#line 2116 "cplus.met"
#line 2116 "cplus.met"
#line 2116 "cplus.met"

#line 2117 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2117 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2117 "cplus.met"
return((PPTREE) 0);
#line 2117 "cplus.met"

#line 2117 "cplus.met"
protect_declare_exit :
#line 2117 "cplus.met"

#line 2117 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_EXIT,(PPTREE)0);
#line 2117 "cplus.met"
    _funcLevel--;
#line 2117 "cplus.met"
    return((PPTREE) -1) ;
#line 2117 "cplus.met"

#line 2117 "cplus.met"
protect_declare_ret :
#line 2117 "cplus.met"
    
#line 2117 "cplus.met"
    _Debug = TRACE_RULE("protect_declare",TRACE_RETURN,_retValue);
#line 2117 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2117 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2117 "cplus.met"
    return _retValue ;
#line 2117 "cplus.met"
}
#line 2117 "cplus.met"

#line 2117 "cplus.met"
#line 1166 "cplus.met"
PPTREE cplus::protected_array_declaration ( int error_free)
#line 1166 "cplus.met"
{
#line 1166 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1166 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1166 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1166 "cplus.met"
    int _Debug = TRACE_RULE("protected_array_declaration",TRACE_ENTER,(PPTREE)0);
#line 1166 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1166 "cplus.met"
#line 1166 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0,valTreeRS = (PPTREE) 0;
#line 1166 "cplus.met"
#line 1168 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDARRAY,"_protectedArray") && (tokenAhead = 0,CommTerm(),1)){
#line 1168 "cplus.met"
#line 1169 "cplus.met"
#line 1170 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1170 "cplus.met"
        if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1170 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1170 "cplus.met"
        } else {
#line 1170 "cplus.met"
            tokenAhead = 0 ;
#line 1170 "cplus.met"
        }
#line 1170 "cplus.met"
#line 1171 "cplus.met"
        {
#line 1171 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1171 "cplus.met"
            _ptRes0= MakeTree(PROTECTED_ARRAY, 5);
#line 1171 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 1171 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1171 "cplus.met"
            }
#line 1171 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1171 "cplus.met"
            valTreeR=_ptRes0;
#line 1171 "cplus.met"
        }
#line 1171 "cplus.met"
#line 1172 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1172 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1172 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1172 "cplus.met"
        } else {
#line 1172 "cplus.met"
            tokenAhead = 0 ;
#line 1172 "cplus.met"
        }
#line 1172 "cplus.met"
#line 1173 "cplus.met"
        {
#line 1173 "cplus.met"
            PPTREE _ptTree0=0;
#line 1173 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1173 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1173 "cplus.met"
            }
#line 1173 "cplus.met"
            ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1173 "cplus.met"
        }
#line 1173 "cplus.met"
#line 1174 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1174 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1174 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1174 "cplus.met"
        } else {
#line 1174 "cplus.met"
            tokenAhead = 0 ;
#line 1174 "cplus.met"
        }
#line 1174 "cplus.met"
#line 1175 "cplus.met"
        {
#line 1175 "cplus.met"
            PPTREE _ptTree0=0;
#line 1175 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1175 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1175 "cplus.met"
            }
#line 1175 "cplus.met"
            ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1175 "cplus.met"
        }
#line 1175 "cplus.met"
#line 1176 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1176 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1176 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1176 "cplus.met"
        } else {
#line 1176 "cplus.met"
            tokenAhead = 0 ;
#line 1176 "cplus.met"
        }
#line 1176 "cplus.met"
#line 1177 "cplus.met"
        {
#line 1177 "cplus.met"
            PPTREE _ptTree0=0;
#line 1177 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1177 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1177 "cplus.met"
            }
#line 1177 "cplus.met"
            ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1177 "cplus.met"
        }
#line 1177 "cplus.met"
#line 1178 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1178 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1178 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1178 "cplus.met"
        } else {
#line 1178 "cplus.met"
            tokenAhead = 0 ;
#line 1178 "cplus.met"
        }
#line 1178 "cplus.met"
#line 1179 "cplus.met"
        {
#line 1179 "cplus.met"
            PPTREE _ptTree0=0;
#line 1179 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1179 "cplus.met"
                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1179 "cplus.met"
            }
#line 1179 "cplus.met"
            ReplaceTree(valTreeR , 5 , _ptTree0);
#line 1179 "cplus.met"
        }
#line 1179 "cplus.met"
#line 1180 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1180 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1180 "cplus.met"
            MulFreeTree(2,valTreeR,valTreeRS);
            TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1180 "cplus.met"
        } else {
#line 1180 "cplus.met"
            tokenAhead = 0 ;
#line 1180 "cplus.met"
        }
#line 1180 "cplus.met"
#line 1181 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1181 "cplus.met"
#line 1181 "cplus.met"
        }
#line 1181 "cplus.met"
#line 1183 "cplus.met"
        {
#line 1183 "cplus.met"
            _retValue = valTreeR ;
#line 1183 "cplus.met"
            goto protected_array_declaration_ret;
#line 1183 "cplus.met"
            
#line 1183 "cplus.met"
        }
#line 1183 "cplus.met"
#line 1183 "cplus.met"
#line 1183 "cplus.met"
    } else {
#line 1183 "cplus.met"
#line 1186 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDARRAY_S,"_protectedArray_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1186 "cplus.met"
#line 1187 "cplus.met"
#line 1188 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1188 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1188 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1188 "cplus.met"
            } else {
#line 1188 "cplus.met"
                tokenAhead = 0 ;
#line 1188 "cplus.met"
            }
#line 1188 "cplus.met"
#line 1189 "cplus.met"
            {
#line 1189 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1189 "cplus.met"
                _ptRes0= MakeTree(PROTECTED_ARRAY_S, 4);
#line 1189 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1189 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1189 "cplus.met"
                }
#line 1189 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1189 "cplus.met"
                valTreeRS=_ptRes0;
#line 1189 "cplus.met"
            }
#line 1189 "cplus.met"
#line 1190 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1190 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1190 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1190 "cplus.met"
            } else {
#line 1190 "cplus.met"
                tokenAhead = 0 ;
#line 1190 "cplus.met"
            }
#line 1190 "cplus.met"
#line 1191 "cplus.met"
            {
#line 1191 "cplus.met"
                PPTREE _ptTree0=0;
#line 1191 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1191 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1191 "cplus.met"
                }
#line 1191 "cplus.met"
                ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1191 "cplus.met"
            }
#line 1191 "cplus.met"
#line 1192 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1192 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1192 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1192 "cplus.met"
            } else {
#line 1192 "cplus.met"
                tokenAhead = 0 ;
#line 1192 "cplus.met"
            }
#line 1192 "cplus.met"
#line 1193 "cplus.met"
            {
#line 1193 "cplus.met"
                PPTREE _ptTree0=0;
#line 1193 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1193 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1193 "cplus.met"
                }
#line 1193 "cplus.met"
                ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1193 "cplus.met"
            }
#line 1193 "cplus.met"
#line 1194 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1194 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1194 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1194 "cplus.met"
            } else {
#line 1194 "cplus.met"
                tokenAhead = 0 ;
#line 1194 "cplus.met"
            }
#line 1194 "cplus.met"
#line 1195 "cplus.met"
            {
#line 1195 "cplus.met"
                PPTREE _ptTree0=0;
#line 1195 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1195 "cplus.met"
                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1195 "cplus.met"
                }
#line 1195 "cplus.met"
                ReplaceTree(valTreeRS , 4 , _ptTree0);
#line 1195 "cplus.met"
            }
#line 1195 "cplus.met"
#line 1196 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1196 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1196 "cplus.met"
                MulFreeTree(2,valTreeR,valTreeRS);
                TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1196 "cplus.met"
            } else {
#line 1196 "cplus.met"
                tokenAhead = 0 ;
#line 1196 "cplus.met"
            }
#line 1196 "cplus.met"
#line 1197 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1197 "cplus.met"
#line 1197 "cplus.met"
            }
#line 1197 "cplus.met"
#line 1199 "cplus.met"
            {
#line 1199 "cplus.met"
                _retValue = valTreeRS ;
#line 1199 "cplus.met"
                goto protected_array_declaration_ret;
#line 1199 "cplus.met"
                
#line 1199 "cplus.met"
            }
#line 1199 "cplus.met"
#line 1199 "cplus.met"
#line 1199 "cplus.met"
        } else {
#line 1199 "cplus.met"
#line 1202 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDPOINTER,"_protectedPointer") && (tokenAhead = 0,CommTerm(),1)){
#line 1202 "cplus.met"
#line 1203 "cplus.met"
#line 1204 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1204 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1204 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1204 "cplus.met"
                } else {
#line 1204 "cplus.met"
                    tokenAhead = 0 ;
#line 1204 "cplus.met"
                }
#line 1204 "cplus.met"
#line 1205 "cplus.met"
                {
#line 1205 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1205 "cplus.met"
                    _ptRes0= MakeTree(PROTECTED_ARRAY, 5);
#line 1205 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 1205 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1205 "cplus.met"
                    }
#line 1205 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1205 "cplus.met"
                    valTreeR=_ptRes0;
#line 1205 "cplus.met"
                }
#line 1205 "cplus.met"
#line 1206 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1206 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1206 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1206 "cplus.met"
                } else {
#line 1206 "cplus.met"
                    tokenAhead = 0 ;
#line 1206 "cplus.met"
                }
#line 1206 "cplus.met"
#line 1207 "cplus.met"
                {
#line 1207 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1207 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1207 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1207 "cplus.met"
                    }
#line 1207 "cplus.met"
                    ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1207 "cplus.met"
                }
#line 1207 "cplus.met"
#line 1208 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1208 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1208 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1208 "cplus.met"
                } else {
#line 1208 "cplus.met"
                    tokenAhead = 0 ;
#line 1208 "cplus.met"
                }
#line 1208 "cplus.met"
#line 1209 "cplus.met"
                {
#line 1209 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1209 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1209 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1209 "cplus.met"
                    }
#line 1209 "cplus.met"
                    ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1209 "cplus.met"
                }
#line 1209 "cplus.met"
#line 1210 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1210 "cplus.met"
                if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1210 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1210 "cplus.met"
                } else {
#line 1210 "cplus.met"
                    tokenAhead = 0 ;
#line 1210 "cplus.met"
                }
#line 1210 "cplus.met"
#line 1211 "cplus.met"
                {
#line 1211 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1211 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1211 "cplus.met"
                        MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                        PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1211 "cplus.met"
                    }
#line 1211 "cplus.met"
                    ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1211 "cplus.met"
                }
#line 1211 "cplus.met"
#line 1212 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1212 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1212 "cplus.met"
                    MulFreeTree(2,valTreeR,valTreeRS);
                    TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1212 "cplus.met"
                } else {
#line 1212 "cplus.met"
                    tokenAhead = 0 ;
#line 1212 "cplus.met"
                }
#line 1212 "cplus.met"
#line 1213 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1213 "cplus.met"
#line 1213 "cplus.met"
                }
#line 1213 "cplus.met"
#line 1215 "cplus.met"
                {
#line 1215 "cplus.met"
                    _retValue = valTreeR ;
#line 1215 "cplus.met"
                    goto protected_array_declaration_ret;
#line 1215 "cplus.met"
                    
#line 1215 "cplus.met"
                }
#line 1215 "cplus.met"
#line 1215 "cplus.met"
#line 1215 "cplus.met"
            } else {
#line 1215 "cplus.met"
#line 1218 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_PROTECTEDPOINTER_S,"_protectedPointer_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1218 "cplus.met"
#line 1219 "cplus.met"
#line 1220 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1220 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1220 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1220 "cplus.met"
                    } else {
#line 1220 "cplus.met"
                        tokenAhead = 0 ;
#line 1220 "cplus.met"
                    }
#line 1220 "cplus.met"
#line 1221 "cplus.met"
                    {
#line 1221 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 1221 "cplus.met"
                        _ptRes0= MakeTree(PROTECTED_ARRAY_S, 4);
#line 1221 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1221 "cplus.met"
                            MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1221 "cplus.met"
                        }
#line 1221 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1221 "cplus.met"
                        valTreeRS=_ptRes0;
#line 1221 "cplus.met"
                    }
#line 1221 "cplus.met"
#line 1222 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1222 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1222 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1222 "cplus.met"
                    } else {
#line 1222 "cplus.met"
                        tokenAhead = 0 ;
#line 1222 "cplus.met"
                    }
#line 1222 "cplus.met"
#line 1223 "cplus.met"
                    {
#line 1223 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1223 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1223 "cplus.met"
                            MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1223 "cplus.met"
                        }
#line 1223 "cplus.met"
                        ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1223 "cplus.met"
                    }
#line 1223 "cplus.met"
#line 1224 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1224 "cplus.met"
                    if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1224 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1224 "cplus.met"
                    } else {
#line 1224 "cplus.met"
                        tokenAhead = 0 ;
#line 1224 "cplus.met"
                    }
#line 1224 "cplus.met"
#line 1225 "cplus.met"
                    {
#line 1225 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1225 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1225 "cplus.met"
                            MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                            PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1225 "cplus.met"
                        }
#line 1225 "cplus.met"
                        ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1225 "cplus.met"
                    }
#line 1225 "cplus.met"
#line 1226 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1226 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1226 "cplus.met"
                        MulFreeTree(2,valTreeR,valTreeRS);
                        TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1226 "cplus.met"
                    } else {
#line 1226 "cplus.met"
                        tokenAhead = 0 ;
#line 1226 "cplus.met"
                    }
#line 1226 "cplus.met"
#line 1227 "cplus.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1227 "cplus.met"
#line 1227 "cplus.met"
                    }
#line 1227 "cplus.met"
#line 1229 "cplus.met"
                    {
#line 1229 "cplus.met"
                        _retValue = valTreeRS ;
#line 1229 "cplus.met"
                        goto protected_array_declaration_ret;
#line 1229 "cplus.met"
                        
#line 1229 "cplus.met"
                    }
#line 1229 "cplus.met"
#line 1229 "cplus.met"
#line 1229 "cplus.met"
                } else {
#line 1229 "cplus.met"
#line 1232 "cplus.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_TYPEDEF_PROTECTEDARRAY,"_typedef_protectedArray") && (tokenAhead = 0,CommTerm(),1)){
#line 1232 "cplus.met"
#line 1233 "cplus.met"
#line 1234 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1234 "cplus.met"
                        if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1234 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1234 "cplus.met"
                        } else {
#line 1234 "cplus.met"
                            tokenAhead = 0 ;
#line 1234 "cplus.met"
                        }
#line 1234 "cplus.met"
#line 1235 "cplus.met"
                        {
#line 1235 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1235 "cplus.met"
                            _ptRes0= MakeTree(PROTECTED_ARRAY_TYPEDEF, 5);
#line 1235 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 1235 "cplus.met"
                                MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1235 "cplus.met"
                            }
#line 1235 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1235 "cplus.met"
                            valTreeR=_ptRes0;
#line 1235 "cplus.met"
                        }
#line 1235 "cplus.met"
#line 1236 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1236 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1236 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1236 "cplus.met"
                        } else {
#line 1236 "cplus.met"
                            tokenAhead = 0 ;
#line 1236 "cplus.met"
                        }
#line 1236 "cplus.met"
#line 1237 "cplus.met"
                        {
#line 1237 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1237 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1237 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1237 "cplus.met"
                            }
#line 1237 "cplus.met"
                            ReplaceTree(valTreeR , 2 , _ptTree0);
#line 1237 "cplus.met"
                        }
#line 1237 "cplus.met"
#line 1238 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1238 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1238 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1238 "cplus.met"
                        } else {
#line 1238 "cplus.met"
                            tokenAhead = 0 ;
#line 1238 "cplus.met"
                        }
#line 1238 "cplus.met"
#line 1239 "cplus.met"
                        {
#line 1239 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1239 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1239 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1239 "cplus.met"
                            }
#line 1239 "cplus.met"
                            ReplaceTree(valTreeR , 3 , _ptTree0);
#line 1239 "cplus.met"
                        }
#line 1239 "cplus.met"
#line 1240 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1240 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1240 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1240 "cplus.met"
                        } else {
#line 1240 "cplus.met"
                            tokenAhead = 0 ;
#line 1240 "cplus.met"
                        }
#line 1240 "cplus.met"
#line 1241 "cplus.met"
                        {
#line 1241 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1241 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1241 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1241 "cplus.met"
                            }
#line 1241 "cplus.met"
                            ReplaceTree(valTreeR , 4 , _ptTree0);
#line 1241 "cplus.met"
                        }
#line 1241 "cplus.met"
#line 1242 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1242 "cplus.met"
                        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1242 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1242 "cplus.met"
                        } else {
#line 1242 "cplus.met"
                            tokenAhead = 0 ;
#line 1242 "cplus.met"
                        }
#line 1242 "cplus.met"
#line 1243 "cplus.met"
                        {
#line 1243 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1243 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1243 "cplus.met"
                                MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1243 "cplus.met"
                            }
#line 1243 "cplus.met"
                            ReplaceTree(valTreeR , 5 , _ptTree0);
#line 1243 "cplus.met"
                        }
#line 1243 "cplus.met"
#line 1244 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1244 "cplus.met"
                        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1244 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1244 "cplus.met"
                        } else {
#line 1244 "cplus.met"
                            tokenAhead = 0 ;
#line 1244 "cplus.met"
                        }
#line 1244 "cplus.met"
#line 1245 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1245 "cplus.met"
#line 1245 "cplus.met"
                        }
#line 1245 "cplus.met"
#line 1247 "cplus.met"
                        {
#line 1247 "cplus.met"
                            _retValue = valTreeR ;
#line 1247 "cplus.met"
                            goto protected_array_declaration_ret;
#line 1247 "cplus.met"
                            
#line 1247 "cplus.met"
                        }
#line 1247 "cplus.met"
#line 1247 "cplus.met"
#line 1247 "cplus.met"
                    } else {
#line 1247 "cplus.met"
#line 1250 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(_TYPEDEF_PROTECTEDARRAY_S,"_typedef_protectedArray_s") && (tokenAhead = 0,CommTerm(),1)){
#line 1250 "cplus.met"
#line 1251 "cplus.met"
#line 1252 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1252 "cplus.met"
                            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1252 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,"(")
#line 1252 "cplus.met"
                            } else {
#line 1252 "cplus.met"
                                tokenAhead = 0 ;
#line 1252 "cplus.met"
                            }
#line 1252 "cplus.met"
#line 1253 "cplus.met"
                            {
#line 1253 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1253 "cplus.met"
                                _ptRes0= MakeTree(PROTECTED_ARRAY_S_TYPEDEF, 4);
#line 1253 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1253 "cplus.met"
                                    MulFreeTree(4,_ptRes0,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1253 "cplus.met"
                                }
#line 1253 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1253 "cplus.met"
                                valTreeRS=_ptRes0;
#line 1253 "cplus.met"
                            }
#line 1253 "cplus.met"
#line 1254 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1254 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1254 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1254 "cplus.met"
                            } else {
#line 1254 "cplus.met"
                                tokenAhead = 0 ;
#line 1254 "cplus.met"
                            }
#line 1254 "cplus.met"
#line 1255 "cplus.met"
                            {
#line 1255 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1255 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1255 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1255 "cplus.met"
                                }
#line 1255 "cplus.met"
                                ReplaceTree(valTreeRS , 2 , _ptTree0);
#line 1255 "cplus.met"
                            }
#line 1255 "cplus.met"
#line 1256 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1256 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1256 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1256 "cplus.met"
                            } else {
#line 1256 "cplus.met"
                                tokenAhead = 0 ;
#line 1256 "cplus.met"
                            }
#line 1256 "cplus.met"
#line 1257 "cplus.met"
                            {
#line 1257 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1257 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1257 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1257 "cplus.met"
                                }
#line 1257 "cplus.met"
                                ReplaceTree(valTreeRS , 3 , _ptTree0);
#line 1257 "cplus.met"
                            }
#line 1257 "cplus.met"
#line 1258 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1258 "cplus.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 1258 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,",")
#line 1258 "cplus.met"
                            } else {
#line 1258 "cplus.met"
                                tokenAhead = 0 ;
#line 1258 "cplus.met"
                            }
#line 1258 "cplus.met"
#line 1259 "cplus.met"
                            {
#line 1259 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1259 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 1259 "cplus.met"
                                    MulFreeTree(3,_ptTree0,valTreeR,valTreeRS);
                                    PROG_EXIT(protected_array_declaration_exit,"protected_array_declaration")
#line 1259 "cplus.met"
                                }
#line 1259 "cplus.met"
                                ReplaceTree(valTreeRS , 4 , _ptTree0);
#line 1259 "cplus.met"
                            }
#line 1259 "cplus.met"
#line 1260 "cplus.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1260 "cplus.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1260 "cplus.met"
                                MulFreeTree(2,valTreeR,valTreeRS);
                                TOKEN_EXIT(protected_array_declaration_exit,")")
#line 1260 "cplus.met"
                            } else {
#line 1260 "cplus.met"
                                tokenAhead = 0 ;
#line 1260 "cplus.met"
                            }
#line 1260 "cplus.met"
#line 1261 "cplus.met"
                            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1261 "cplus.met"
#line 1261 "cplus.met"
                            }
#line 1261 "cplus.met"
#line 1263 "cplus.met"
                            {
#line 1263 "cplus.met"
                                _retValue = valTreeRS ;
#line 1263 "cplus.met"
                                goto protected_array_declaration_ret;
#line 1263 "cplus.met"
                                
#line 1263 "cplus.met"
                            }
#line 1263 "cplus.met"
#line 1263 "cplus.met"
#line 1263 "cplus.met"
                        } else {
#line 1263 "cplus.met"
#line 1266 "cplus.met"
                            
#line 1266 "cplus.met"
                            MulFreeTree(2,valTreeR,valTreeRS);
                            LEX_EXIT ("",0);
#line 1266 "cplus.met"
                            goto protected_array_declaration_exit;
#line 1266 "cplus.met"
                        }
#line 1266 "cplus.met"
                    }
#line 1266 "cplus.met"
                }
#line 1266 "cplus.met"
            }
#line 1266 "cplus.met"
        }
#line 1266 "cplus.met"
    }
#line 1266 "cplus.met"
#line 1266 "cplus.met"
#line 1266 "cplus.met"

#line 1267 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1267 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1267 "cplus.met"
return((PPTREE) 0);
#line 1267 "cplus.met"

#line 1267 "cplus.met"
protected_array_declaration_exit :
#line 1267 "cplus.met"

#line 1267 "cplus.met"
    _Debug = TRACE_RULE("protected_array_declaration",TRACE_EXIT,(PPTREE)0);
#line 1267 "cplus.met"
    _funcLevel--;
#line 1267 "cplus.met"
    return((PPTREE) -1) ;
#line 1267 "cplus.met"

#line 1267 "cplus.met"
protected_array_declaration_ret :
#line 1267 "cplus.met"
    
#line 1267 "cplus.met"
    _Debug = TRACE_RULE("protected_array_declaration",TRACE_RETURN,_retValue);
#line 1267 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1267 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1267 "cplus.met"
    return _retValue ;
#line 1267 "cplus.met"
}
#line 1267 "cplus.met"

#line 1267 "cplus.met"
