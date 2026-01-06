/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3474 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3474 "cplus.met"
{
#line 3474 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3474 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3474 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3474 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3474 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3474 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3474 "cplus.met"
#line 3474 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0;
#line 3474 "cplus.met"
#line 3476 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3476 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3476 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3476 "cplus.met"
    } else {
#line 3476 "cplus.met"
        tokenAhead = 0 ;
#line 3476 "cplus.met"
    }
#line 3476 "cplus.met"
#line 3477 "cplus.met"
    {
#line 3477 "cplus.met"
        PPTREE _ptRes0=0;
#line 3477 "cplus.met"
        _ptRes0= MakeTree(FOR, 4);
#line 3477 "cplus.met"
        statTree=_ptRes0;
#line 3477 "cplus.met"
    }
#line 3477 "cplus.met"
#line 3478 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 68, cplus)){
#line 3478 "cplus.met"
#line 3479 "cplus.met"
        ReplaceTree(statTree ,1 ,opt );
#line 3479 "cplus.met"
#line 3479 "cplus.met"
    } else {
#line 3479 "cplus.met"
#line 3481 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 46, cplus)){
#line 3481 "cplus.met"
#line 3482 "cplus.met"
            ReplaceTree(statTree ,1 ,opt );
#line 3482 "cplus.met"
#line 3482 "cplus.met"
        }
#line 3482 "cplus.met"
    }
#line 3482 "cplus.met"
#line 3483 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3483 "cplus.met"
#line 3484 "cplus.met"
#line 3485 "cplus.met"
        {
#line 3485 "cplus.met"
            PPTREE _ptTree0=0;
#line 3485 "cplus.met"
            {
#line 3485 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3485 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3485 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3485 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3485 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,opt,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3485 "cplus.met"
                }
#line 3485 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3485 "cplus.met"
                _ptTree0=_ptRes1;
#line 3485 "cplus.met"
            }
#line 3485 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3485 "cplus.met"
        }
#line 3485 "cplus.met"
#line 3485 "cplus.met"
#line 3485 "cplus.met"
    } else {
#line 3485 "cplus.met"
#line 3488 "cplus.met"
#line 3489 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3489 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3489 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3489 "cplus.met"
        } else {
#line 3489 "cplus.met"
            tokenAhead = 0 ;
#line 3489 "cplus.met"
        }
#line 3489 "cplus.met"
#line 3490 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3490 "cplus.met"
#line 3491 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3491 "cplus.met"
#line 3491 "cplus.met"
        }
#line 3491 "cplus.met"
#line 3492 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3492 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3492 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3492 "cplus.met"
        } else {
#line 3492 "cplus.met"
            tokenAhead = 0 ;
#line 3492 "cplus.met"
        }
#line 3492 "cplus.met"
#line 3493 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3493 "cplus.met"
#line 3494 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3494 "cplus.met"
#line 3494 "cplus.met"
        }
#line 3494 "cplus.met"
#line 3494 "cplus.met"
    }
#line 3494 "cplus.met"
#line 3496 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3496 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3496 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,")")
#line 3496 "cplus.met"
    } else {
#line 3496 "cplus.met"
        tokenAhead = 0 ;
#line 3496 "cplus.met"
    }
#line 3496 "cplus.met"
#line 3497 "cplus.met"
    {
#line 3497 "cplus.met"
        switchContext = 0 ;
#line 3497 "cplus.met"
#line 3498 "cplus.met"
        {
#line 3498 "cplus.met"
            PPTREE _ptTree0=0;
#line 3498 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3498 "cplus.met"
                MulFreeTree(3,_ptTree0,opt,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3498 "cplus.met"
            }
#line 3498 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3498 "cplus.met"
        }
#line 3498 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3498 "cplus.met"
    }
#line 3498 "cplus.met"
#line 3499 "cplus.met"
    {
#line 3499 "cplus.met"
        _retValue = statTree ;
#line 3499 "cplus.met"
        goto for_statement_ret;
#line 3499 "cplus.met"
        
#line 3499 "cplus.met"
    }
#line 3499 "cplus.met"
#line 3499 "cplus.met"
#line 3499 "cplus.met"

#line 3500 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3500 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3500 "cplus.met"
switchContext =  _oldswitchContext;
#line 3500 "cplus.met"
return((PPTREE) 0);
#line 3500 "cplus.met"

#line 3500 "cplus.met"
for_statement_exit :
#line 3500 "cplus.met"

#line 3500 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3500 "cplus.met"
    _funcLevel--;
#line 3500 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3500 "cplus.met"
    return((PPTREE) -1) ;
#line 3500 "cplus.met"

#line 3500 "cplus.met"
for_statement_ret :
#line 3500 "cplus.met"
    
#line 3500 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3500 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3500 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3500 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3500 "cplus.met"
    return _retValue ;
#line 3500 "cplus.met"
}
#line 3500 "cplus.met"

#line 3500 "cplus.met"
#line 3398 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3398 "cplus.met"
{
#line 3398 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3398 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3398 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3398 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3398 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3398 "cplus.met"
#line 3398 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3398 "cplus.met"
#line 3398 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3398 "cplus.met"
#line 3402 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 151, cplus))){
#line 3402 "cplus.met"
#line 3404 "cplus.met"
#line 3405 "cplus.met"
        {
#line 3405 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3405 "cplus.met"
            _ptRes0= MakeTree(FUNC, 11);
#line 3405 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3405 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3405 "cplus.met"
            }
#line 3405 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3405 "cplus.met"
            funcTree=_ptRes0;
#line 3405 "cplus.met"
        }
#line 3405 "cplus.met"
#line 3406 "cplus.met"
        {
#line 3406 "cplus.met"
            PPTREE _ptTree0=0;
#line 3406 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 3406 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3406 "cplus.met"
            }
#line 3406 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3406 "cplus.met"
        }
#line 3406 "cplus.met"
#line 3406 "cplus.met"
#line 3406 "cplus.met"
    }
#line 3406 "cplus.met"
#line 3408 "cplus.met"
    {
#line 3408 "cplus.met"
        PPTREE _ptTree0=0;
#line 3408 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 3408 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3408 "cplus.met"
        }
#line 3408 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3408 "cplus.met"
    }
#line 3408 "cplus.met"
#line 3409 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 128, cplus)){
#line 3409 "cplus.met"
#line 3410 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3410 "cplus.met"
#line 3410 "cplus.met"
    }
#line 3410 "cplus.met"
#line 3411 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 65, cplus)){
#line 3411 "cplus.met"
#line 3412 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3412 "cplus.met"
#line 3412 "cplus.met"
    }
#line 3412 "cplus.met"
#line 3413 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3413 "cplus.met"
#line 3414 "cplus.met"
#line 3415 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3415 "cplus.met"
        if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3415 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,"delete")
#line 3415 "cplus.met"
        } else {
#line 3415 "cplus.met"
            tokenAhead = 0 ;
#line 3415 "cplus.met"
        }
#line 3415 "cplus.met"
#line 3416 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3416 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3416 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,";")
#line 3416 "cplus.met"
        } else {
#line 3416 "cplus.met"
            tokenAhead = 0 ;
#line 3416 "cplus.met"
        }
#line 3416 "cplus.met"
#line 3417 "cplus.met"
        {
#line 3417 "cplus.met"
            PPTREE _ptTree0=0;
#line 3417 "cplus.met"
            {
#line 3417 "cplus.met"
                PPTREE _ptTree1=0;
#line 3417 "cplus.met"
                {
#line 3417 "cplus.met"
                    PPTREE _ptRes2=0;
#line 3417 "cplus.met"
                    _ptRes2= MakeTree(DELETE_FUNCTION, 0);
#line 3417 "cplus.met"
                    _ptTree1=_ptRes2;
#line 3417 "cplus.met"
                }
#line 3417 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 10 , _ptTree1);
#line 3417 "cplus.met"
            }
#line 3417 "cplus.met"
            _retValue =_ptTree0;
#line 3417 "cplus.met"
            goto func_declaration_ret;
#line 3417 "cplus.met"
        }
#line 3417 "cplus.met"
#line 3417 "cplus.met"
#line 3417 "cplus.met"
    } else {
#line 3417 "cplus.met"
#line 3420 "cplus.met"
#line 3420 "cplus.met"
        _addlist1 = decList ;
#line 3420 "cplus.met"
#line 3421 "cplus.met"
        while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 45, cplus)) { 
#line 3421 "cplus.met"
#line 3422 "cplus.met"
#line 3422 "cplus.met"
            _addlist1 =AddList(_addlist1 ,opt );
#line 3422 "cplus.met"
#line 3422 "cplus.met"
            if (decList){
#line 3422 "cplus.met"
#line 3422 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3422 "cplus.met"
            } else {
#line 3422 "cplus.met"
#line 3422 "cplus.met"
                decList = _addlist1 ;
#line 3422 "cplus.met"
            }
#line 3422 "cplus.met"
        } 
#line 3422 "cplus.met"
#line 3423 "cplus.met"
        ReplaceTree(funcTree ,6 ,decList );
#line 3423 "cplus.met"
#line 3424 "cplus.met"
        {
#line 3424 "cplus.met"
            PPTREE _ptTree0=0;
#line 3424 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 3424 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3424 "cplus.met"
            }
#line 3424 "cplus.met"
            ReplaceTree(funcTree , 7 , _ptTree0);
#line 3424 "cplus.met"
        }
#line 3424 "cplus.met"
#line 3425 "cplus.met"
        {
#line 3425 "cplus.met"
            PPTREE _ptTree0=0;
#line 3425 "cplus.met"
            {
#line 3425 "cplus.met"
                PPTREE _ptTree1=0;
#line 3425 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3425 "cplus.met"
                    MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                    PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3425 "cplus.met"
                }
#line 3425 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3425 "cplus.met"
            }
#line 3425 "cplus.met"
            _retValue =_ptTree0;
#line 3425 "cplus.met"
            goto func_declaration_ret;
#line 3425 "cplus.met"
        }
#line 3425 "cplus.met"
#line 3425 "cplus.met"
    }
#line 3425 "cplus.met"
#line 3425 "cplus.met"
#line 3426 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3426 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3426 "cplus.met"
return((PPTREE) 0);
#line 3426 "cplus.met"

#line 3426 "cplus.met"
func_declaration_exit :
#line 3426 "cplus.met"

#line 3426 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3426 "cplus.met"
    _funcLevel--;
#line 3426 "cplus.met"
    return((PPTREE) -1) ;
#line 3426 "cplus.met"

#line 3426 "cplus.met"
func_declaration_ret :
#line 3426 "cplus.met"
    
#line 3426 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3426 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3426 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3426 "cplus.met"
    return _retValue ;
#line 3426 "cplus.met"
}
#line 3426 "cplus.met"

#line 3426 "cplus.met"
#line 2447 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2447 "cplus.met"
{
#line 2447 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2447 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2447 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2447 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2447 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2447 "cplus.met"
#line 2447 "cplus.met"
    PPTREE valTree = (PPTREE) 0,funcDecl = (PPTREE) 0;
#line 2447 "cplus.met"
#line 2449 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 127, cplus)){
#line 2449 "cplus.met"
#line 2450 "cplus.met"
        {
#line 2450 "cplus.met"
            PPTREE _ptTree0=0;
#line 2450 "cplus.met"
            {
#line 2450 "cplus.met"
                PPTREE _ptTree1=0;
#line 2450 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2450 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2450 "cplus.met"
                }
#line 2450 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2450 "cplus.met"
            }
#line 2450 "cplus.met"
            _retValue =_ptTree0;
#line 2450 "cplus.met"
            goto func_declarator_ret;
#line 2450 "cplus.met"
        }
#line 2450 "cplus.met"
    }
#line 2450 "cplus.met"
#line 2451 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2451 "cplus.met"
    switch( lexEl.Value) {
#line 2451 "cplus.met"
#line 2455 "cplus.met"
        case POUV : 
#line 2455 "cplus.met"
            tokenAhead = 0 ;
#line 2455 "cplus.met"
            CommTerm();
#line 2455 "cplus.met"
#line 2453 "cplus.met"
#line 2454 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")){
#line 2454 "cplus.met"
#line 2455 "cplus.met"
                {
#line 2455 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2455 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2455 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2455 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2455 "cplus.met"
                    }
#line 2455 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2455 "cplus.met"
                    funcDecl=_ptRes0;
#line 2455 "cplus.met"
                }
#line 2455 "cplus.met"
            } else {
#line 2455 "cplus.met"
#line 2457 "cplus.met"
                
#line 2457 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                LEX_EXIT ("",0);
#line 2457 "cplus.met"
                goto func_declarator_exit;
#line 2457 "cplus.met"
            }
#line 2457 "cplus.met"
#line 2458 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2458 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2458 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                TOKEN_EXIT(func_declarator_exit,")")
#line 2458 "cplus.met"
            } else {
#line 2458 "cplus.met"
                tokenAhead = 0 ;
#line 2458 "cplus.met"
            }
#line 2458 "cplus.met"
#line 2459 "cplus.met"
            {
#line 2459 "cplus.met"
                _retValue = funcDecl ;
#line 2459 "cplus.met"
                goto func_declarator_ret;
#line 2459 "cplus.met"
                
#line 2459 "cplus.met"
            }
#line 2459 "cplus.met"
#line 2459 "cplus.met"
            break;
#line 2459 "cplus.met"
#line 2461 "cplus.met"
        case ETOI : 
#line 2461 "cplus.met"
            tokenAhead = 0 ;
#line 2461 "cplus.met"
            CommTerm();
#line 2461 "cplus.met"
#line 2461 "cplus.met"
            {
#line 2461 "cplus.met"
                PPTREE _ptTree0=0;
#line 2461 "cplus.met"
                {
#line 2461 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2461 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2461 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2461 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2461 "cplus.met"
                    }
#line 2461 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2461 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2461 "cplus.met"
                }
#line 2461 "cplus.met"
                _retValue =_ptTree0;
#line 2461 "cplus.met"
                goto func_declarator_ret;
#line 2461 "cplus.met"
            }
#line 2461 "cplus.met"
            break;
#line 2461 "cplus.met"
#line 2462 "cplus.met"
        case ETCO : 
#line 2462 "cplus.met"
            tokenAhead = 0 ;
#line 2462 "cplus.met"
            CommTerm();
#line 2462 "cplus.met"
#line 2462 "cplus.met"
            {
#line 2462 "cplus.met"
                PPTREE _ptTree0=0;
#line 2462 "cplus.met"
                {
#line 2462 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2462 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2462 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2462 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2462 "cplus.met"
                    }
#line 2462 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2462 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2462 "cplus.met"
                }
#line 2462 "cplus.met"
                _retValue =_ptTree0;
#line 2462 "cplus.met"
                goto func_declarator_ret;
#line 2462 "cplus.met"
            }
#line 2462 "cplus.met"
            break;
#line 2462 "cplus.met"
#line 2463 "cplus.met"
        case TILD : 
#line 2463 "cplus.met"
#line 2463 "cplus.met"
            {
#line 2463 "cplus.met"
                PPTREE _ptTree0=0;
#line 2463 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2463 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2463 "cplus.met"
                }
#line 2463 "cplus.met"
                _retValue =_ptTree0;
#line 2463 "cplus.met"
                goto func_declarator_ret;
#line 2463 "cplus.met"
            }
#line 2463 "cplus.met"
            break;
#line 2463 "cplus.met"
#line 2464 "cplus.met"
        case META : 
#line 2464 "cplus.met"
        case IDENT : 
#line 2464 "cplus.met"
#line 2464 "cplus.met"
            {
#line 2464 "cplus.met"
                PPTREE _ptTree0=0;
#line 2464 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 2464 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2464 "cplus.met"
                }
#line 2464 "cplus.met"
                _retValue =_ptTree0;
#line 2464 "cplus.met"
                goto func_declarator_ret;
#line 2464 "cplus.met"
            }
#line 2464 "cplus.met"
            break;
#line 2464 "cplus.met"
#line 2465 "cplus.met"
        case OPERATOR : 
#line 2465 "cplus.met"
#line 2465 "cplus.met"
            {
#line 2465 "cplus.met"
                PPTREE _ptTree0=0;
#line 2465 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2465 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2465 "cplus.met"
                }
#line 2465 "cplus.met"
                _retValue =_ptTree0;
#line 2465 "cplus.met"
                goto func_declarator_ret;
#line 2465 "cplus.met"
            }
#line 2465 "cplus.met"
            break;
#line 2465 "cplus.met"
        default :
#line 2465 "cplus.met"
            MulFreeTree(2,funcDecl,valTree);
            CASE_EXIT(func_declarator_exit,"either ( or * or & or ~ or IDENT or operator")
#line 2465 "cplus.met"
            break;
#line 2465 "cplus.met"
    }
#line 2465 "cplus.met"
#line 2465 "cplus.met"
#line 2466 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2466 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2466 "cplus.met"
return((PPTREE) 0);
#line 2466 "cplus.met"

#line 2466 "cplus.met"
func_declarator_exit :
#line 2466 "cplus.met"

#line 2466 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2466 "cplus.met"
    _funcLevel--;
#line 2466 "cplus.met"
    return((PPTREE) -1) ;
#line 2466 "cplus.met"

#line 2466 "cplus.met"
func_declarator_ret :
#line 2466 "cplus.met"
    
#line 2466 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2466 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2466 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2466 "cplus.met"
    return _retValue ;
#line 2466 "cplus.met"
}
#line 2466 "cplus.met"

#line 2466 "cplus.met"
#line 3457 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3457 "cplus.met"
{
#line 3457 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3457 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3457 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3457 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3457 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3457 "cplus.met"
#line 3458 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3458 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3458 "cplus.met"
    }
#line 3458 "cplus.met"
#line 3459 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3459 "cplus.met"
    switch( lexEl.Value) {
#line 3459 "cplus.met"
#line 3459 "cplus.met"
        case ETOI : 
#line 3459 "cplus.met"
#line 3459 "cplus.met"
            break;
#line 3459 "cplus.met"
#line 3461 "cplus.met"
        case META : 
#line 3461 "cplus.met"
        case IDENT : 
#line 3461 "cplus.met"
#line 3461 "cplus.met"
            break;
#line 3461 "cplus.met"
        default :
#line 3461 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3461 "cplus.met"
            break;
#line 3461 "cplus.met"
    }
#line 3461 "cplus.met"
#line 3461 "cplus.met"
#line 3462 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3462 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3462 "cplus.met"
return((PPTREE) 0);
#line 3462 "cplus.met"

#line 3462 "cplus.met"
ident_mul_exit :
#line 3462 "cplus.met"

#line 3462 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3462 "cplus.met"
    _funcLevel--;
#line 3462 "cplus.met"
    return((PPTREE) -1) ;
#line 3462 "cplus.met"

#line 3462 "cplus.met"
ident_mul_ret :
#line 3462 "cplus.met"
    
#line 3462 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3462 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3462 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3462 "cplus.met"
    return _retValue ;
#line 3462 "cplus.met"
}
#line 3462 "cplus.met"

#line 3462 "cplus.met"
#line 1546 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1546 "cplus.met"
{
#line 1546 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1546 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1546 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1546 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1546 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1546 "cplus.met"
#line 1547 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1547 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1547 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1547 "cplus.met"
    } else {
#line 1547 "cplus.met"
        tokenAhead = 0 ;
#line 1547 "cplus.met"
    }
#line 1547 "cplus.met"
#line 1548 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1548 "cplus.met"
    switch( lexEl.Value) {
#line 1548 "cplus.met"
#line 1549 "cplus.met"
        case META : 
#line 1549 "cplus.met"
        case INCLUDE_SYS : 
#line 1549 "cplus.met"
#line 1550 "cplus.met"
#line 1551 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1551 "cplus.met"
#line 1552 "cplus.met"
            {
#line 1552 "cplus.met"
                PPTREE _ptTree0=0;
#line 1552 "cplus.met"
                {
#line 1552 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1552 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1552 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1552 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1552 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1552 "cplus.met"
                    } else {
#line 1552 "cplus.met"
                        tokenAhead = 0 ;
#line 1552 "cplus.met"
                    }
#line 1552 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1552 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1552 "cplus.met"
                }
#line 1552 "cplus.met"
                _retValue =_ptTree0;
#line 1552 "cplus.met"
                goto include_dir_ret;
#line 1552 "cplus.met"
            }
#line 1552 "cplus.met"
#line 1552 "cplus.met"
            break;
#line 1552 "cplus.met"
#line 1554 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1554 "cplus.met"
#line 1555 "cplus.met"
#line 1556 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1556 "cplus.met"
#line 1557 "cplus.met"
            {
#line 1557 "cplus.met"
                PPTREE _ptTree0=0;
#line 1557 "cplus.met"
                {
#line 1557 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1557 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1557 "cplus.met"
                    {
#line 1557 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1557 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1557 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1557 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1557 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1557 "cplus.met"
                        } else {
#line 1557 "cplus.met"
                            tokenAhead = 0 ;
#line 1557 "cplus.met"
                        }
#line 1557 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1557 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1557 "cplus.met"
                    }
#line 1557 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1557 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1557 "cplus.met"
                }
#line 1557 "cplus.met"
                _retValue =_ptTree0;
#line 1557 "cplus.met"
                goto include_dir_ret;
#line 1557 "cplus.met"
            }
#line 1557 "cplus.met"
#line 1557 "cplus.met"
            break;
#line 1557 "cplus.met"
        default :
#line 1557 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1557 "cplus.met"
            break;
#line 1557 "cplus.met"
    }
#line 1557 "cplus.met"
#line 1557 "cplus.met"
#line 1559 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1559 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1559 "cplus.met"
return((PPTREE) 0);
#line 1559 "cplus.met"

#line 1559 "cplus.met"
include_dir_exit :
#line 1559 "cplus.met"

#line 1559 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1559 "cplus.met"
    _funcLevel--;
#line 1559 "cplus.met"
    return((PPTREE) -1) ;
#line 1559 "cplus.met"

#line 1559 "cplus.met"
include_dir_ret :
#line 1559 "cplus.met"
    
#line 1559 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1559 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1559 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1559 "cplus.met"
    return _retValue ;
#line 1559 "cplus.met"
}
#line 1559 "cplus.met"

#line 1559 "cplus.met"
#line 2792 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2792 "cplus.met"
{
#line 2792 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2792 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2792 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2792 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2792 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2792 "cplus.met"
#line 2792 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2792 "cplus.met"
#line 2794 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2794 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2794 "cplus.met"
    }
#line 2794 "cplus.met"
#line 2795 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2795 "cplus.met"
#line 2796 "cplus.met"
        {
#line 2796 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2796 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2796 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2796 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2796 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2796 "cplus.met"
            }
#line 2796 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2796 "cplus.met"
            expTree=_ptRes0;
#line 2796 "cplus.met"
        }
#line 2796 "cplus.met"
    } 
#line 2796 "cplus.met"
#line 2797 "cplus.met"
    {
#line 2797 "cplus.met"
        _retValue = expTree ;
#line 2797 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2797 "cplus.met"
        
#line 2797 "cplus.met"
    }
#line 2797 "cplus.met"
#line 2797 "cplus.met"
#line 2797 "cplus.met"

#line 2798 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2798 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2798 "cplus.met"
return((PPTREE) 0);
#line 2798 "cplus.met"

#line 2798 "cplus.met"
inclusive_or_expression_exit :
#line 2798 "cplus.met"

#line 2798 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2798 "cplus.met"
    _funcLevel--;
#line 2798 "cplus.met"
    return((PPTREE) -1) ;
#line 2798 "cplus.met"

#line 2798 "cplus.met"
inclusive_or_expression_ret :
#line 2798 "cplus.met"
    
#line 2798 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2798 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2798 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2798 "cplus.met"
    return _retValue ;
#line 2798 "cplus.met"
}
#line 2798 "cplus.met"

#line 2798 "cplus.met"
#line 2547 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2547 "cplus.met"
{
#line 2547 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2547 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2547 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2547 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2547 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2547 "cplus.met"
#line 2547 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2547 "cplus.met"
#line 2547 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2547 "cplus.met"
#line 2549 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2549 "cplus.met"
    switch( lexEl.Value) {
#line 2549 "cplus.met"
#line 2553 "cplus.met"
        case AOUV : 
#line 2553 "cplus.met"
            tokenAhead = 0 ;
#line 2553 "cplus.met"
            CommTerm();
#line 2553 "cplus.met"
#line 2551 "cplus.met"
#line 2551 "cplus.met"
            _addlist1 = initList ;
#line 2551 "cplus.met"
#line 2552 "cplus.met"
            do {
#line 2552 "cplus.met"
#line 2553 "cplus.met"
                {
#line 2553 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2553 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2553 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2553 "cplus.met"
                    }
#line 2553 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2553 "cplus.met"
                }
#line 2553 "cplus.met"
#line 2553 "cplus.met"
                if (initList){
#line 2553 "cplus.met"
#line 2553 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2553 "cplus.met"
                } else {
#line 2553 "cplus.met"
#line 2553 "cplus.met"
                    initList = _addlist1 ;
#line 2553 "cplus.met"
                }
#line 2553 "cplus.met"
#line 2553 "cplus.met"
#line 2554 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2554 "cplus.met"
#line 2555 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2555 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2555 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2555 "cplus.met"
            } else {
#line 2555 "cplus.met"
                tokenAhead = 0 ;
#line 2555 "cplus.met"
            }
#line 2555 "cplus.met"
#line 2556 "cplus.met"
            {
#line 2556 "cplus.met"
                PPTREE _ptTree0=0;
#line 2556 "cplus.met"
                {
#line 2556 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2556 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2556 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2556 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2556 "cplus.met"
                }
#line 2556 "cplus.met"
                _retValue =_ptTree0;
#line 2556 "cplus.met"
                goto initializer_ret;
#line 2556 "cplus.met"
            }
#line 2556 "cplus.met"
#line 2556 "cplus.met"
            break;
#line 2556 "cplus.met"
#line 2559 "cplus.met"
        default : 
#line 2559 "cplus.met"
#line 2559 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 21, cplus)){
#line 2559 "cplus.met"
#line 2560 "cplus.met"
                {
#line 2560 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2560 "cplus.met"
                    {
#line 2560 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2560 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2560 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2560 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2560 "cplus.met"
                    }
#line 2560 "cplus.met"
                    _retValue =_ptTree0;
#line 2560 "cplus.met"
                    goto initializer_ret;
#line 2560 "cplus.met"
                }
#line 2560 "cplus.met"
            } else {
#line 2560 "cplus.met"
#line 2562 "cplus.met"
                {
#line 2562 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2562 "cplus.met"
                    {
#line 2562 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2562 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2562 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2562 "cplus.met"
                    }
#line 2562 "cplus.met"
                    _retValue =_ptTree0;
#line 2562 "cplus.met"
                    goto initializer_ret;
#line 2562 "cplus.met"
                }
#line 2562 "cplus.met"
            }
#line 2562 "cplus.met"
            break;
#line 2562 "cplus.met"
    }
#line 2562 "cplus.met"
#line 2562 "cplus.met"
#line 2563 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2563 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2563 "cplus.met"
return((PPTREE) 0);
#line 2563 "cplus.met"

#line 2563 "cplus.met"
initializer_exit :
#line 2563 "cplus.met"

#line 2563 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2563 "cplus.met"
    _funcLevel--;
#line 2563 "cplus.met"
    return((PPTREE) -1) ;
#line 2563 "cplus.met"

#line 2563 "cplus.met"
initializer_ret :
#line 2563 "cplus.met"
    
#line 2563 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2563 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2563 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2563 "cplus.met"
    return _retValue ;
#line 2563 "cplus.met"
}
#line 2563 "cplus.met"

#line 2563 "cplus.met"
#line 1649 "cplus.met"
PPTREE cplus::inline_namespace ( int error_free)
#line 1649 "cplus.met"
{
#line 1649 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1649 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1649 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1649 "cplus.met"
    int _Debug = TRACE_RULE("inline_namespace",TRACE_ENTER,(PPTREE)0);
#line 1649 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1649 "cplus.met"
#line 1650 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1650 "cplus.met"
    if (  !SEE_TOKEN( INLINE,"inline") || !(CommTerm(),1)) {
#line 1650 "cplus.met"
            TOKEN_EXIT(inline_namespace_exit,"inline")
#line 1650 "cplus.met"
    } else {
#line 1650 "cplus.met"
        tokenAhead = 0 ;
#line 1650 "cplus.met"
    }
#line 1650 "cplus.met"
#line 1651 "cplus.met"
    {
#line 1651 "cplus.met"
        PPTREE _ptTree0=0;
#line 1651 "cplus.met"
        {
#line 1651 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1651 "cplus.met"
            _ptRes1= MakeTree(INLINE_NAMESPACE, 1);
#line 1651 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(name_space)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1651 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                PROG_EXIT(inline_namespace_exit,"inline_namespace")
#line 1651 "cplus.met"
            }
#line 1651 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1651 "cplus.met"
            _ptTree0=_ptRes1;
#line 1651 "cplus.met"
        }
#line 1651 "cplus.met"
        _retValue =_ptTree0;
#line 1651 "cplus.met"
        goto inline_namespace_ret;
#line 1651 "cplus.met"
    }
#line 1651 "cplus.met"
#line 1651 "cplus.met"
#line 1651 "cplus.met"

#line 1652 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1652 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1652 "cplus.met"
return((PPTREE) 0);
#line 1652 "cplus.met"

#line 1652 "cplus.met"
inline_namespace_exit :
#line 1652 "cplus.met"

#line 1652 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_EXIT,(PPTREE)0);
#line 1652 "cplus.met"
    _funcLevel--;
#line 1652 "cplus.met"
    return((PPTREE) -1) ;
#line 1652 "cplus.met"

#line 1652 "cplus.met"
inline_namespace_ret :
#line 1652 "cplus.met"
    
#line 1652 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_RETURN,_retValue);
#line 1652 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1652 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1652 "cplus.met"
    return _retValue ;
#line 1652 "cplus.met"
}
#line 1652 "cplus.met"

#line 1652 "cplus.met"
#line 1802 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1802 "cplus.met"
{
#line 1802 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1802 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1802 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1802 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1802 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1802 "cplus.met"
#line 1802 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1802 "cplus.met"
#line 1804 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 91, cplus))) && 
#line 1804 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 69, cplus)))) && 
#line 1804 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 89, cplus)))) && 
#line 1804 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 90, cplus)))){
#line 1804 "cplus.met"
#line 1805 "cplus.met"
        
#line 1805 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1805 "cplus.met"
        goto inside_declaration_exit;
#line 1805 "cplus.met"
#line 1805 "cplus.met"
    }
#line 1805 "cplus.met"
#line 1806 "cplus.met"
    {
#line 1806 "cplus.met"
        _retValue = retTree ;
#line 1806 "cplus.met"
        goto inside_declaration_ret;
#line 1806 "cplus.met"
        
#line 1806 "cplus.met"
    }
#line 1806 "cplus.met"
#line 1806 "cplus.met"
#line 1806 "cplus.met"

#line 1807 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1807 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1807 "cplus.met"
return((PPTREE) 0);
#line 1807 "cplus.met"

#line 1807 "cplus.met"
inside_declaration_exit :
#line 1807 "cplus.met"

#line 1807 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1807 "cplus.met"
    _funcLevel--;
#line 1807 "cplus.met"
    return((PPTREE) -1) ;
#line 1807 "cplus.met"

#line 1807 "cplus.met"
inside_declaration_ret :
#line 1807 "cplus.met"
    
#line 1807 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1807 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1807 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1807 "cplus.met"
    return _retValue ;
#line 1807 "cplus.met"
}
#line 1807 "cplus.met"

#line 1807 "cplus.met"
#line 1782 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1782 "cplus.met"
{
#line 1782 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1782 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1782 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1782 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1782 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1782 "cplus.met"
#line 1782 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1782 "cplus.met"
#line 1784 "cplus.met"
    {
#line 1784 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1784 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1784 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 1784 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1784 "cplus.met"
        }
#line 1784 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1784 "cplus.met"
        otherTree=_ptRes0;
#line 1784 "cplus.met"
    }
#line 1784 "cplus.met"
#line 1785 "cplus.met"
    {
#line 1785 "cplus.met"
        PPTREE _ptTree0=0;
#line 1785 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1785 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1785 "cplus.met"
        }
#line 1785 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1785 "cplus.met"
    }
#line 1785 "cplus.met"
#line 1786 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1786 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1786 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1786 "cplus.met"
    } else {
#line 1786 "cplus.met"
        tokenAhead = 0 ;
#line 1786 "cplus.met"
    }
#line 1786 "cplus.met"
#line 1787 "cplus.met"
    {
#line 1787 "cplus.met"
        PPTREE _ptTree0=0;
#line 1787 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1787 "cplus.met"
        _retValue =_ptTree0;
#line 1787 "cplus.met"
        goto inside_declaration1_ret;
#line 1787 "cplus.met"
    }
#line 1787 "cplus.met"
#line 1787 "cplus.met"
#line 1787 "cplus.met"

#line 1788 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1788 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1788 "cplus.met"
return((PPTREE) 0);
#line 1788 "cplus.met"

#line 1788 "cplus.met"
inside_declaration1_exit :
#line 1788 "cplus.met"

#line 1788 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1788 "cplus.met"
    _funcLevel--;
#line 1788 "cplus.met"
    return((PPTREE) -1) ;
#line 1788 "cplus.met"

#line 1788 "cplus.met"
inside_declaration1_ret :
#line 1788 "cplus.met"
    
#line 1788 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1788 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1788 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1788 "cplus.met"
    return _retValue ;
#line 1788 "cplus.met"
}
#line 1788 "cplus.met"

#line 1788 "cplus.met"
#line 1790 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1790 "cplus.met"
{
#line 1790 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1790 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1790 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1790 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1790 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1790 "cplus.met"
#line 1790 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1790 "cplus.met"
#line 1792 "cplus.met"
    {
#line 1792 "cplus.met"
        PPTREE _ptRes0=0;
#line 1792 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1792 "cplus.met"
        otherTree=_ptRes0;
#line 1792 "cplus.met"
    }
#line 1792 "cplus.met"
#line 1793 "cplus.met"
    {
#line 1793 "cplus.met"
        PPTREE _ptTree0=0;
#line 1793 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1793 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1793 "cplus.met"
        }
#line 1793 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1793 "cplus.met"
    }
#line 1793 "cplus.met"
#line 1794 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1794 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1794 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1794 "cplus.met"
    } else {
#line 1794 "cplus.met"
        tokenAhead = 0 ;
#line 1794 "cplus.met"
    }
#line 1794 "cplus.met"
#line 1795 "cplus.met"
    {
#line 1795 "cplus.met"
        PPTREE _ptTree0=0;
#line 1795 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1795 "cplus.met"
        _retValue =_ptTree0;
#line 1795 "cplus.met"
        goto inside_declaration2_ret;
#line 1795 "cplus.met"
    }
#line 1795 "cplus.met"
#line 1795 "cplus.met"
#line 1795 "cplus.met"

#line 1796 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1796 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1796 "cplus.met"
return((PPTREE) 0);
#line 1796 "cplus.met"

#line 1796 "cplus.met"
inside_declaration2_exit :
#line 1796 "cplus.met"

#line 1796 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1796 "cplus.met"
    _funcLevel--;
#line 1796 "cplus.met"
    return((PPTREE) -1) ;
#line 1796 "cplus.met"

#line 1796 "cplus.met"
inside_declaration2_ret :
#line 1796 "cplus.met"
    
#line 1796 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1796 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1796 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1796 "cplus.met"
    return _retValue ;
#line 1796 "cplus.met"
}
#line 1796 "cplus.met"

#line 1796 "cplus.met"
#line 1798 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1798 "cplus.met"
{
#line 1798 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1798 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1798 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1798 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1798 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1798 "cplus.met"
#line 1799 "cplus.met"
    
#line 1799 "cplus.met"
    LEX_EXIT ("",0);
#line 1799 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1799 "cplus.met"
#line 1799 "cplus.met"
#line 1799 "cplus.met"

#line 1800 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1800 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1800 "cplus.met"
return((PPTREE) 0);
#line 1800 "cplus.met"

#line 1800 "cplus.met"
inside_declaration_extension_exit :
#line 1800 "cplus.met"

#line 1800 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1800 "cplus.met"
    _funcLevel--;
#line 1800 "cplus.met"
    return((PPTREE) -1) ;
#line 1800 "cplus.met"

#line 1800 "cplus.met"
inside_declaration_extension_ret :
#line 1800 "cplus.met"
    
#line 1800 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1800 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1800 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1800 "cplus.met"
    return _retValue ;
#line 1800 "cplus.met"
}
#line 1800 "cplus.met"

#line 1800 "cplus.met"
#line 3452 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3452 "cplus.met"
{
#line 3452 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3452 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3452 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3452 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3452 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3452 "cplus.met"
#line 3453 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3453 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3453 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3453 "cplus.met"
    } else {
#line 3453 "cplus.met"
        tokenAhead = 0 ;
#line 3453 "cplus.met"
    }
#line 3453 "cplus.met"
#line 3454 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3454 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3454 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3454 "cplus.met"
    } else {
#line 3454 "cplus.met"
        tokenAhead = 0 ;
#line 3454 "cplus.met"
    }
#line 3454 "cplus.met"
#line 3454 "cplus.met"
#line 3454 "cplus.met"

#line 3455 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3455 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3455 "cplus.met"
return((PPTREE) 0);
#line 3455 "cplus.met"

#line 3455 "cplus.met"
label_beg_exit :
#line 3455 "cplus.met"

#line 3455 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3455 "cplus.met"
    _funcLevel--;
#line 3455 "cplus.met"
    return((PPTREE) -1) ;
#line 3455 "cplus.met"

#line 3455 "cplus.met"
label_beg_ret :
#line 3455 "cplus.met"
    
#line 3455 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3455 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3455 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3455 "cplus.met"
    return _retValue ;
#line 3455 "cplus.met"
}
#line 3455 "cplus.met"

#line 3455 "cplus.met"
#line 997 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 997 "cplus.met"
{
#line 997 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 997 "cplus.met"
    int _value,_nbPre = 0 ;
#line 997 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 997 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 997 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 997 "cplus.met"
#line 997 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 997 "cplus.met"
#line 997 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 997 "cplus.met"
#line 999 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 999 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 999 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 999 "cplus.met"
    } else {
#line 999 "cplus.met"
        tokenAhead = 0 ;
#line 999 "cplus.met"
    }
#line 999 "cplus.met"
#line 1000 "cplus.met"
    {
#line 1000 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1000 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 1000 "cplus.met"
        {
#line 1000 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1000 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1000 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1000 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1000 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 1000 "cplus.met"
            } else {
#line 1000 "cplus.met"
                tokenAhead = 0 ;
#line 1000 "cplus.met"
            }
#line 1000 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1000 "cplus.met"
            _ptTree0=_ptRes1;
#line 1000 "cplus.met"
        }
#line 1000 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1000 "cplus.met"
        retTree=_ptRes0;
#line 1000 "cplus.met"
    }
#line 1000 "cplus.met"
#line 1001 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1001 "cplus.met"
    switch( lexEl.Value) {
#line 1001 "cplus.met"
#line 1004 "cplus.met"
        case AOUV : 
#line 1004 "cplus.met"
            tokenAhead = 0 ;
#line 1004 "cplus.met"
            CommTerm();
#line 1004 "cplus.met"
#line 1003 "cplus.met"
#line 1003 "cplus.met"
            _addlist1 = list ;
#line 1003 "cplus.met"
#line 1004 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 69, cplus)) { 
#line 1004 "cplus.met"
#line 1005 "cplus.met"
#line 1005 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 1005 "cplus.met"
#line 1005 "cplus.met"
                if (list){
#line 1005 "cplus.met"
#line 1005 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1005 "cplus.met"
                } else {
#line 1005 "cplus.met"
#line 1005 "cplus.met"
                    list = _addlist1 ;
#line 1005 "cplus.met"
                }
#line 1005 "cplus.met"
            } 
#line 1005 "cplus.met"
#line 1006 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1006 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1006 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1006 "cplus.met"
            } else {
#line 1006 "cplus.met"
                tokenAhead = 0 ;
#line 1006 "cplus.met"
            }
#line 1006 "cplus.met"
#line 1007 "cplus.met"
            {
#line 1007 "cplus.met"
                PPTREE _ptTree0=0;
#line 1007 "cplus.met"
                {
#line 1007 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1007 "cplus.met"
                    {
#line 1007 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1007 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1007 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1007 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1007 "cplus.met"
                    }
#line 1007 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1007 "cplus.met"
                }
#line 1007 "cplus.met"
                _retValue =_ptTree0;
#line 1007 "cplus.met"
                goto linkage_specification_ret;
#line 1007 "cplus.met"
            }
#line 1007 "cplus.met"
#line 1007 "cplus.met"
            break;
#line 1007 "cplus.met"
#line 1009 "cplus.met"
        default : 
#line 1009 "cplus.met"
#line 1009 "cplus.met"
            {
#line 1009 "cplus.met"
                PPTREE _ptTree0=0;
#line 1009 "cplus.met"
                {
#line 1009 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1009 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1009 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1009 "cplus.met"
                    }
#line 1009 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1009 "cplus.met"
                }
#line 1009 "cplus.met"
                _retValue =_ptTree0;
#line 1009 "cplus.met"
                goto linkage_specification_ret;
#line 1009 "cplus.met"
            }
#line 1009 "cplus.met"
            break;
#line 1009 "cplus.met"
    }
#line 1009 "cplus.met"
#line 1009 "cplus.met"
#line 1010 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1010 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1010 "cplus.met"
return((PPTREE) 0);
#line 1010 "cplus.met"

#line 1010 "cplus.met"
linkage_specification_exit :
#line 1010 "cplus.met"

#line 1010 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1010 "cplus.met"
    _funcLevel--;
#line 1010 "cplus.met"
    return((PPTREE) -1) ;
#line 1010 "cplus.met"

#line 1010 "cplus.met"
linkage_specification_ret :
#line 1010 "cplus.met"
    
#line 1010 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1010 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1010 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1010 "cplus.met"
    return _retValue ;
#line 1010 "cplus.met"
}
#line 1010 "cplus.met"

#line 1010 "cplus.met"
#line 2784 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2784 "cplus.met"
{
#line 2784 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2784 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2784 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2784 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2784 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2784 "cplus.met"
#line 2784 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2784 "cplus.met"
#line 2786 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2786 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2786 "cplus.met"
    }
#line 2786 "cplus.met"
#line 2787 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2787 "cplus.met"
#line 2788 "cplus.met"
        {
#line 2788 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2788 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2788 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2788 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2788 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2788 "cplus.met"
            }
#line 2788 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2788 "cplus.met"
            expTree=_ptRes0;
#line 2788 "cplus.met"
        }
#line 2788 "cplus.met"
    } 
#line 2788 "cplus.met"
#line 2789 "cplus.met"
    {
#line 2789 "cplus.met"
        _retValue = expTree ;
#line 2789 "cplus.met"
        goto logical_and_expression_ret;
#line 2789 "cplus.met"
        
#line 2789 "cplus.met"
    }
#line 2789 "cplus.met"
#line 2789 "cplus.met"
#line 2789 "cplus.met"

#line 2790 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2790 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2790 "cplus.met"
return((PPTREE) 0);
#line 2790 "cplus.met"

#line 2790 "cplus.met"
logical_and_expression_exit :
#line 2790 "cplus.met"

#line 2790 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2790 "cplus.met"
    _funcLevel--;
#line 2790 "cplus.met"
    return((PPTREE) -1) ;
#line 2790 "cplus.met"

#line 2790 "cplus.met"
logical_and_expression_ret :
#line 2790 "cplus.met"
    
#line 2790 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2790 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2790 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2790 "cplus.met"
    return _retValue ;
#line 2790 "cplus.met"
}
#line 2790 "cplus.met"

#line 2790 "cplus.met"
#line 2776 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2776 "cplus.met"
{
#line 2776 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2776 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2776 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2776 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2776 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2776 "cplus.met"
#line 2776 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2776 "cplus.met"
#line 2778 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2778 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2778 "cplus.met"
    }
#line 2778 "cplus.met"
#line 2779 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2779 "cplus.met"
#line 2780 "cplus.met"
        {
#line 2780 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2780 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2780 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2780 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2780 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2780 "cplus.met"
            }
#line 2780 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2780 "cplus.met"
            expTree=_ptRes0;
#line 2780 "cplus.met"
        }
#line 2780 "cplus.met"
    } 
#line 2780 "cplus.met"
#line 2781 "cplus.met"
    {
#line 2781 "cplus.met"
        _retValue = expTree ;
#line 2781 "cplus.met"
        goto logical_or_expression_ret;
#line 2781 "cplus.met"
        
#line 2781 "cplus.met"
    }
#line 2781 "cplus.met"
#line 2781 "cplus.met"
#line 2781 "cplus.met"

#line 2782 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2782 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2782 "cplus.met"
return((PPTREE) 0);
#line 2782 "cplus.met"

#line 2782 "cplus.met"
logical_or_expression_exit :
#line 2782 "cplus.met"

#line 2782 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2782 "cplus.met"
    _funcLevel--;
#line 2782 "cplus.met"
    return((PPTREE) -1) ;
#line 2782 "cplus.met"

#line 2782 "cplus.met"
logical_or_expression_ret :
#line 2782 "cplus.met"
    
#line 2782 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2782 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2782 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2782 "cplus.met"
    return _retValue ;
#line 2782 "cplus.met"
}
#line 2782 "cplus.met"

#line 2782 "cplus.met"
#line 2192 "cplus.met"
PPTREE cplus::long_type ( int error_free)
#line 2192 "cplus.met"
{
#line 2192 "cplus.met"
    int  _oldinside_long = inside_long;
#line 2192 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2192 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2192 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2192 "cplus.met"
    int _Debug = TRACE_RULE("long_type",TRACE_ENTER,(PPTREE)0);
#line 2192 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2192 "cplus.met"
#line 2192 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2192 "cplus.met"
#line 2194 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2194 "cplus.met"
    if (  !SEE_TOKEN( LONG,"long") || !(CommTerm(),1)) {
#line 2194 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(long_type_exit,"long")
#line 2194 "cplus.met"
    } else {
#line 2194 "cplus.met"
        tokenAhead = 0 ;
#line 2194 "cplus.met"
    }
#line 2194 "cplus.met"
#line 2195 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2195 "cplus.met"
    switch( lexEl.Value) {
#line 2195 "cplus.met"
#line 2196 "cplus.met"
        case FLOAT : 
#line 2196 "cplus.met"
            tokenAhead = 0 ;
#line 2196 "cplus.met"
            CommTerm();
#line 2196 "cplus.met"
#line 2197 "cplus.met"
#line 2198 "cplus.met"
            if ((inside_long) || 
#line 2198 "cplus.met"
               (inside_signed)){
#line 2198 "cplus.met"
#line 2199 "cplus.met"
                
#line 2199 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2199 "cplus.met"
                goto long_type_exit;
#line 2199 "cplus.met"
#line 2199 "cplus.met"
            } else {
#line 2199 "cplus.met"
#line 2201 "cplus.met"
                {
#line 2201 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2201 "cplus.met"
                    {
#line 2201 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2201 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2201 "cplus.met"
                        {
#line 2201 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2201 "cplus.met"
                            _ptRes2= MakeTree(TFLOAT, 0);
#line 2201 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2201 "cplus.met"
                        }
#line 2201 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2201 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2201 "cplus.met"
                    }
#line 2201 "cplus.met"
                    _retValue =_ptTree0;
#line 2201 "cplus.met"
                    goto long_type_ret;
#line 2201 "cplus.met"
                }
#line 2201 "cplus.met"
            }
#line 2201 "cplus.met"
#line 2201 "cplus.met"
            break;
#line 2201 "cplus.met"
#line 2203 "cplus.met"
        case DOUBLE : 
#line 2203 "cplus.met"
            tokenAhead = 0 ;
#line 2203 "cplus.met"
            CommTerm();
#line 2203 "cplus.met"
#line 2204 "cplus.met"
#line 2205 "cplus.met"
            if ((inside_long) || 
#line 2205 "cplus.met"
               (inside_signed)){
#line 2205 "cplus.met"
#line 2206 "cplus.met"
                
#line 2206 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2206 "cplus.met"
                goto long_type_exit;
#line 2206 "cplus.met"
#line 2206 "cplus.met"
            } else {
#line 2206 "cplus.met"
#line 2208 "cplus.met"
                {
#line 2208 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2208 "cplus.met"
                    {
#line 2208 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2208 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2208 "cplus.met"
                        {
#line 2208 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2208 "cplus.met"
                            _ptRes2= MakeTree(TDOUBLE, 0);
#line 2208 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2208 "cplus.met"
                        }
#line 2208 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2208 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2208 "cplus.met"
                    }
#line 2208 "cplus.met"
                    _retValue =_ptTree0;
#line 2208 "cplus.met"
                    goto long_type_ret;
#line 2208 "cplus.met"
                }
#line 2208 "cplus.met"
            }
#line 2208 "cplus.met"
#line 2208 "cplus.met"
            break;
#line 2208 "cplus.met"
#line 2214 "cplus.met"
        default : 
#line 2214 "cplus.met"
#line 2211 "cplus.met"
#line 2212 "cplus.met"
            {
#line 2212 "cplus.met"
                inside_long = 1 ;
#line 2212 "cplus.met"
#line 2213 "cplus.met"
#line 2214 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 134, cplus)){
#line 2214 "cplus.met"
#line 2215 "cplus.met"
                    {
#line 2215 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2215 "cplus.met"
                        {
#line 2215 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2215 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2215 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2215 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2215 "cplus.met"
                        }
#line 2215 "cplus.met"
                        _retValue =_ptTree0;
#line 2215 "cplus.met"
                        goto long_type_ret;
#line 2215 "cplus.met"
                    }
#line 2215 "cplus.met"
                } else {
#line 2215 "cplus.met"
#line 2217 "cplus.met"
                    {
#line 2217 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2217 "cplus.met"
                        {
#line 2217 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2217 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2217 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2217 "cplus.met"
                        }
#line 2217 "cplus.met"
                        _retValue =_ptTree0;
#line 2217 "cplus.met"
                        goto long_type_ret;
#line 2217 "cplus.met"
                    }
#line 2217 "cplus.met"
                }
#line 2217 "cplus.met"
#line 2217 "cplus.met"
                inside_long =  _oldinside_long;
#line 2217 "cplus.met"
            }
#line 2217 "cplus.met"
#line 2217 "cplus.met"
            break;
#line 2217 "cplus.met"
    }
#line 2217 "cplus.met"
#line 2217 "cplus.met"
#line 2220 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2220 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2220 "cplus.met"
inside_long =  _oldinside_long;
#line 2220 "cplus.met"
return((PPTREE) 0);
#line 2220 "cplus.met"

#line 2220 "cplus.met"
long_type_exit :
#line 2220 "cplus.met"

#line 2220 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_EXIT,(PPTREE)0);
#line 2220 "cplus.met"
    _funcLevel--;
#line 2220 "cplus.met"
    inside_long =  _oldinside_long;
#line 2220 "cplus.met"
    return((PPTREE) -1) ;
#line 2220 "cplus.met"

#line 2220 "cplus.met"
long_type_ret :
#line 2220 "cplus.met"
    
#line 2220 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_RETURN,_retValue);
#line 2220 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2220 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2220 "cplus.met"
    inside_long =  _oldinside_long;
#line 2220 "cplus.met"
    return _retValue ;
#line 2220 "cplus.met"
}
#line 2220 "cplus.met"

#line 2220 "cplus.met"
#line 1975 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1975 "cplus.met"
{
#line 1975 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1975 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1975 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1975 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1975 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1975 "cplus.met"
#line 1975 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1975 "cplus.met"
#line 1977 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1977 "cplus.met"
    switch( lexEl.Value) {
#line 1977 "cplus.met"
#line 1978 "cplus.met"
        case META : 
#line 1978 "cplus.met"
        case DECLARE_SERIAL : 
#line 1978 "cplus.met"
            tokenAhead = 0 ;
#line 1978 "cplus.met"
            CommTerm();
#line 1978 "cplus.met"
#line 1978 "cplus.met"
            {
#line 1978 "cplus.met"
                PPTREE _ptRes0=0;
#line 1978 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1978 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1978 "cplus.met"
                retTree=_ptRes0;
#line 1978 "cplus.met"
            }
#line 1978 "cplus.met"
            break;
#line 1978 "cplus.met"
#line 1979 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1979 "cplus.met"
            tokenAhead = 0 ;
#line 1979 "cplus.met"
            CommTerm();
#line 1979 "cplus.met"
#line 1979 "cplus.met"
            {
#line 1979 "cplus.met"
                PPTREE _ptRes0=0;
#line 1979 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1979 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1979 "cplus.met"
                retTree=_ptRes0;
#line 1979 "cplus.met"
            }
#line 1979 "cplus.met"
            break;
#line 1979 "cplus.met"
#line 1980 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1980 "cplus.met"
            tokenAhead = 0 ;
#line 1980 "cplus.met"
            CommTerm();
#line 1980 "cplus.met"
#line 1980 "cplus.met"
            {
#line 1980 "cplus.met"
                PPTREE _ptRes0=0;
#line 1980 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1980 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1980 "cplus.met"
                retTree=_ptRes0;
#line 1980 "cplus.met"
            }
#line 1980 "cplus.met"
            break;
#line 1980 "cplus.met"
#line 1981 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1981 "cplus.met"
            tokenAhead = 0 ;
#line 1981 "cplus.met"
            CommTerm();
#line 1981 "cplus.met"
#line 1981 "cplus.met"
            {
#line 1981 "cplus.met"
                PPTREE _ptRes0=0;
#line 1981 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1981 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1981 "cplus.met"
                retTree=_ptRes0;
#line 1981 "cplus.met"
            }
#line 1981 "cplus.met"
            break;
#line 1981 "cplus.met"
#line 1982 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1982 "cplus.met"
            tokenAhead = 0 ;
#line 1982 "cplus.met"
            CommTerm();
#line 1982 "cplus.met"
#line 1982 "cplus.met"
            {
#line 1982 "cplus.met"
                PPTREE _ptRes0=0;
#line 1982 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1982 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1982 "cplus.met"
                retTree=_ptRes0;
#line 1982 "cplus.met"
            }
#line 1982 "cplus.met"
            break;
#line 1982 "cplus.met"
#line 1983 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1983 "cplus.met"
            tokenAhead = 0 ;
#line 1983 "cplus.met"
            CommTerm();
#line 1983 "cplus.met"
#line 1983 "cplus.met"
            {
#line 1983 "cplus.met"
                PPTREE _ptRes0=0;
#line 1983 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1983 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1983 "cplus.met"
                retTree=_ptRes0;
#line 1983 "cplus.met"
            }
#line 1983 "cplus.met"
            break;
#line 1983 "cplus.met"
#line 1984 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1984 "cplus.met"
            tokenAhead = 0 ;
#line 1984 "cplus.met"
            CommTerm();
#line 1984 "cplus.met"
#line 1984 "cplus.met"
            {
#line 1984 "cplus.met"
                PPTREE _ptRes0=0;
#line 1984 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1984 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1984 "cplus.met"
                retTree=_ptRes0;
#line 1984 "cplus.met"
            }
#line 1984 "cplus.met"
            break;
#line 1984 "cplus.met"
#line 1985 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1985 "cplus.met"
            tokenAhead = 0 ;
#line 1985 "cplus.met"
            CommTerm();
#line 1985 "cplus.met"
#line 1985 "cplus.met"
            {
#line 1985 "cplus.met"
                PPTREE _ptRes0=0;
#line 1985 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1985 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1985 "cplus.met"
                retTree=_ptRes0;
#line 1985 "cplus.met"
            }
#line 1985 "cplus.met"
            break;
#line 1985 "cplus.met"
#line 1986 "cplus.met"
        case CATCH_UPPER : 
#line 1986 "cplus.met"
            tokenAhead = 0 ;
#line 1986 "cplus.met"
            CommTerm();
#line 1986 "cplus.met"
#line 1986 "cplus.met"
            {
#line 1986 "cplus.met"
                PPTREE _ptRes0=0;
#line 1986 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1986 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1986 "cplus.met"
                retTree=_ptRes0;
#line 1986 "cplus.met"
            }
#line 1986 "cplus.met"
            break;
#line 1986 "cplus.met"
#line 1987 "cplus.met"
        case CATCH_ALL : 
#line 1987 "cplus.met"
            tokenAhead = 0 ;
#line 1987 "cplus.met"
            CommTerm();
#line 1987 "cplus.met"
#line 1987 "cplus.met"
            {
#line 1987 "cplus.met"
                PPTREE _ptRes0=0;
#line 1987 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1987 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1987 "cplus.met"
                retTree=_ptRes0;
#line 1987 "cplus.met"
            }
#line 1987 "cplus.met"
            break;
#line 1987 "cplus.met"
#line 1988 "cplus.met"
        case AND_CATCH : 
#line 1988 "cplus.met"
            tokenAhead = 0 ;
#line 1988 "cplus.met"
            CommTerm();
#line 1988 "cplus.met"
#line 1988 "cplus.met"
            {
#line 1988 "cplus.met"
                PPTREE _ptRes0=0;
#line 1988 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1988 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1988 "cplus.met"
                retTree=_ptRes0;
#line 1988 "cplus.met"
            }
#line 1988 "cplus.met"
            break;
#line 1988 "cplus.met"
#line 1989 "cplus.met"
        default : 
#line 1989 "cplus.met"
#line 1989 "cplus.met"
            
#line 1989 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1989 "cplus.met"
            goto macro_exit;
#line 1989 "cplus.met"
            break;
#line 1989 "cplus.met"
    }
#line 1989 "cplus.met"
#line 1991 "cplus.met"
    {
#line 1991 "cplus.met"
        PPTREE _ptRes0=0;
#line 1991 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1991 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1991 "cplus.met"
        retTree=_ptRes0;
#line 1991 "cplus.met"
    }
#line 1991 "cplus.met"
#line 1992 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1992 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1992 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1992 "cplus.met"
    } else {
#line 1992 "cplus.met"
        tokenAhead = 0 ;
#line 1992 "cplus.met"
    }
#line 1992 "cplus.met"
#line 1993 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 67, cplus)){
#line 1993 "cplus.met"
#line 1994 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1994 "cplus.met"
#line 1994 "cplus.met"
    }
#line 1994 "cplus.met"
#line 1995 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1995 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1995 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1995 "cplus.met"
    } else {
#line 1995 "cplus.met"
        tokenAhead = 0 ;
#line 1995 "cplus.met"
    }
#line 1995 "cplus.met"
#line 1996 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1996 "cplus.met"
#line 1996 "cplus.met"
    }
#line 1996 "cplus.met"
#line 1998 "cplus.met"
    {
#line 1998 "cplus.met"
        _retValue = retTree ;
#line 1998 "cplus.met"
        goto macro_ret;
#line 1998 "cplus.met"
        
#line 1998 "cplus.met"
    }
#line 1998 "cplus.met"
#line 1998 "cplus.met"
#line 1998 "cplus.met"

#line 1999 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1999 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1999 "cplus.met"
return((PPTREE) 0);
#line 1999 "cplus.met"

#line 1999 "cplus.met"
macro_exit :
#line 1999 "cplus.met"

#line 1999 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1999 "cplus.met"
    _funcLevel--;
#line 1999 "cplus.met"
    return((PPTREE) -1) ;
#line 1999 "cplus.met"

#line 1999 "cplus.met"
macro_ret :
#line 1999 "cplus.met"
    
#line 1999 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1999 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1999 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1999 "cplus.met"
    return _retValue ;
#line 1999 "cplus.met"
}
#line 1999 "cplus.met"

#line 1999 "cplus.met"
