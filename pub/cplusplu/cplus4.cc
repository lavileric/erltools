/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3535 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3535 "cplus.met"
{
#line 3535 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3535 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3535 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3535 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3535 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3535 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3535 "cplus.met"
#line 3535 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0;
#line 3535 "cplus.met"
#line 3537 "cplus.met"
     bool isDecl = false ;
#line 3537 "cplus.met"
#line 3538 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3538 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3538 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3538 "cplus.met"
    } else {
#line 3538 "cplus.met"
        tokenAhead = 0 ;
#line 3538 "cplus.met"
    }
#line 3538 "cplus.met"
#line 3539 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 68, cplus)){
#line 3539 "cplus.met"
#line 3540 "cplus.met"
        {
#line 3540 "cplus.met"
            PPTREE _ptRes0=0;
#line 3540 "cplus.met"
            _ptRes0= MakeTree(FOR, 4);
#line 3540 "cplus.met"
            ReplaceTree(_ptRes0, 1, opt );
#line 3540 "cplus.met"
            statTree=_ptRes0;
#line 3540 "cplus.met"
        }
#line 3540 "cplus.met"
    } else {
#line 3540 "cplus.met"
#line 3542 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 46, cplus)){
#line 3542 "cplus.met"
#line 3543 "cplus.met"
#line 3544 "cplus.met"
            {
#line 3544 "cplus.met"
                PPTREE _ptRes0=0;
#line 3544 "cplus.met"
                _ptRes0= MakeTree(FOR, 4);
#line 3544 "cplus.met"
                ReplaceTree(_ptRes0, 1, opt );
#line 3544 "cplus.met"
                statTree=_ptRes0;
#line 3544 "cplus.met"
            }
#line 3544 "cplus.met"
#line 3545 "cplus.met"
             isDecl = true ;
#line 3545 "cplus.met"
#line 3545 "cplus.met"
#line 3545 "cplus.met"
        } else {
#line 3545 "cplus.met"
#line 3548 "cplus.met"
            {
#line 3548 "cplus.met"
                PPTREE _ptRes0=0;
#line 3548 "cplus.met"
                _ptRes0= MakeTree(FOR, 4);
#line 3548 "cplus.met"
                statTree=_ptRes0;
#line 3548 "cplus.met"
            }
#line 3548 "cplus.met"
        }
#line 3548 "cplus.met"
    }
#line 3548 "cplus.met"
#line 3549 "cplus.met"
    if (( isDecl ) && 
#line 3549 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1))){
#line 3549 "cplus.met"
#line 3550 "cplus.met"
#line 3551 "cplus.met"
        {
#line 3551 "cplus.met"
            PPTREE _ptTree0=0;
#line 3551 "cplus.met"
            {
#line 3551 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3551 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3551 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3551 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3551 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,opt,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3551 "cplus.met"
                }
#line 3551 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3551 "cplus.met"
                _ptTree0=_ptRes1;
#line 3551 "cplus.met"
            }
#line 3551 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3551 "cplus.met"
        }
#line 3551 "cplus.met"
#line 3551 "cplus.met"
#line 3551 "cplus.met"
    } else {
#line 3551 "cplus.met"
#line 3554 "cplus.met"
#line 3555 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3555 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3555 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3555 "cplus.met"
        } else {
#line 3555 "cplus.met"
            tokenAhead = 0 ;
#line 3555 "cplus.met"
        }
#line 3555 "cplus.met"
#line 3556 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3556 "cplus.met"
#line 3557 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3557 "cplus.met"
#line 3557 "cplus.met"
        }
#line 3557 "cplus.met"
#line 3558 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3558 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3558 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3558 "cplus.met"
        } else {
#line 3558 "cplus.met"
            tokenAhead = 0 ;
#line 3558 "cplus.met"
        }
#line 3558 "cplus.met"
#line 3559 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3559 "cplus.met"
#line 3560 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3560 "cplus.met"
#line 3560 "cplus.met"
        }
#line 3560 "cplus.met"
#line 3560 "cplus.met"
    }
#line 3560 "cplus.met"
#line 3562 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3562 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3562 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,")")
#line 3562 "cplus.met"
    } else {
#line 3562 "cplus.met"
        tokenAhead = 0 ;
#line 3562 "cplus.met"
    }
#line 3562 "cplus.met"
#line 3563 "cplus.met"
    {
#line 3563 "cplus.met"
        switchContext = 0 ;
#line 3563 "cplus.met"
#line 3564 "cplus.met"
        {
#line 3564 "cplus.met"
            PPTREE _ptTree0=0;
#line 3564 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 3564 "cplus.met"
                MulFreeTree(3,_ptTree0,opt,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3564 "cplus.met"
            }
#line 3564 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3564 "cplus.met"
        }
#line 3564 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3564 "cplus.met"
    }
#line 3564 "cplus.met"
#line 3565 "cplus.met"
    {
#line 3565 "cplus.met"
        _retValue = statTree ;
#line 3565 "cplus.met"
        goto for_statement_ret;
#line 3565 "cplus.met"
        
#line 3565 "cplus.met"
    }
#line 3565 "cplus.met"
#line 3565 "cplus.met"
#line 3565 "cplus.met"

#line 3566 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3566 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3566 "cplus.met"
switchContext =  _oldswitchContext;
#line 3566 "cplus.met"
return((PPTREE) 0);
#line 3566 "cplus.met"

#line 3566 "cplus.met"
for_statement_exit :
#line 3566 "cplus.met"

#line 3566 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3566 "cplus.met"
    _funcLevel--;
#line 3566 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3566 "cplus.met"
    return((PPTREE) -1) ;
#line 3566 "cplus.met"

#line 3566 "cplus.met"
for_statement_ret :
#line 3566 "cplus.met"
    
#line 3566 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3566 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3566 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3566 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3566 "cplus.met"
    return _retValue ;
#line 3566 "cplus.met"
}
#line 3566 "cplus.met"

#line 3566 "cplus.met"
#line 3414 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3414 "cplus.met"
{
#line 3414 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3414 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3414 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3414 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3414 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3414 "cplus.met"
#line 3414 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3414 "cplus.met"
#line 3414 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3414 "cplus.met"
#line 3418 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 152, cplus))){
#line 3418 "cplus.met"
#line 3420 "cplus.met"
#line 3421 "cplus.met"
        {
#line 3421 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3421 "cplus.met"
            _ptRes0= MakeTree(FUNC, 11);
#line 3421 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3421 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3421 "cplus.met"
            }
#line 3421 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3421 "cplus.met"
            funcTree=_ptRes0;
#line 3421 "cplus.met"
        }
#line 3421 "cplus.met"
#line 3422 "cplus.met"
        {
#line 3422 "cplus.met"
            PPTREE _ptTree0=0;
#line 3422 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 3422 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3422 "cplus.met"
            }
#line 3422 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3422 "cplus.met"
        }
#line 3422 "cplus.met"
#line 3422 "cplus.met"
#line 3422 "cplus.met"
    }
#line 3422 "cplus.met"
#line 3424 "cplus.met"
    {
#line 3424 "cplus.met"
        PPTREE _ptTree0=0;
#line 3424 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 3424 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3424 "cplus.met"
        }
#line 3424 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3424 "cplus.met"
    }
#line 3424 "cplus.met"
#line 3425 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 129, cplus)){
#line 3425 "cplus.met"
#line 3426 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3426 "cplus.met"
#line 3426 "cplus.met"
    }
#line 3426 "cplus.met"
#line 3427 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 65, cplus)){
#line 3427 "cplus.met"
#line 3428 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3428 "cplus.met"
#line 3428 "cplus.met"
    }
#line 3428 "cplus.met"
#line 3429 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3429 "cplus.met"
#line 3430 "cplus.met"
#line 3431 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3431 "cplus.met"
        if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3431 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,"delete")
#line 3431 "cplus.met"
        } else {
#line 3431 "cplus.met"
            tokenAhead = 0 ;
#line 3431 "cplus.met"
        }
#line 3431 "cplus.met"
#line 3432 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3432 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3432 "cplus.met"
            MulFreeTree(6,_addlist1,decList,exception,funcTree,opt,range);
            TOKEN_EXIT(func_declaration_exit,";")
#line 3432 "cplus.met"
        } else {
#line 3432 "cplus.met"
            tokenAhead = 0 ;
#line 3432 "cplus.met"
        }
#line 3432 "cplus.met"
#line 3433 "cplus.met"
        {
#line 3433 "cplus.met"
            PPTREE _ptTree0=0;
#line 3433 "cplus.met"
            {
#line 3433 "cplus.met"
                PPTREE _ptTree1=0;
#line 3433 "cplus.met"
                {
#line 3433 "cplus.met"
                    PPTREE _ptRes2=0;
#line 3433 "cplus.met"
                    _ptRes2= MakeTree(DELETE_FUNCTION, 0);
#line 3433 "cplus.met"
                    _ptTree1=_ptRes2;
#line 3433 "cplus.met"
                }
#line 3433 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 10 , _ptTree1);
#line 3433 "cplus.met"
            }
#line 3433 "cplus.met"
            _retValue =_ptTree0;
#line 3433 "cplus.met"
            goto func_declaration_ret;
#line 3433 "cplus.met"
        }
#line 3433 "cplus.met"
#line 3433 "cplus.met"
#line 3433 "cplus.met"
    } else {
#line 3433 "cplus.met"
#line 3436 "cplus.met"
#line 3436 "cplus.met"
        _addlist1 = decList ;
#line 3436 "cplus.met"
#line 3437 "cplus.met"
        while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 45, cplus)) { 
#line 3437 "cplus.met"
#line 3438 "cplus.met"
#line 3438 "cplus.met"
            _addlist1 =AddList(_addlist1 ,opt );
#line 3438 "cplus.met"
#line 3438 "cplus.met"
            if (decList){
#line 3438 "cplus.met"
#line 3438 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3438 "cplus.met"
            } else {
#line 3438 "cplus.met"
#line 3438 "cplus.met"
                decList = _addlist1 ;
#line 3438 "cplus.met"
            }
#line 3438 "cplus.met"
        } 
#line 3438 "cplus.met"
#line 3439 "cplus.met"
        ReplaceTree(funcTree ,6 ,decList );
#line 3439 "cplus.met"
#line 3440 "cplus.met"
        {
#line 3440 "cplus.met"
            PPTREE _ptTree0=0;
#line 3440 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 3440 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3440 "cplus.met"
            }
#line 3440 "cplus.met"
            ReplaceTree(funcTree , 7 , _ptTree0);
#line 3440 "cplus.met"
        }
#line 3440 "cplus.met"
#line 3441 "cplus.met"
        {
#line 3441 "cplus.met"
            PPTREE _ptTree0=0;
#line 3441 "cplus.met"
            {
#line 3441 "cplus.met"
                PPTREE _ptTree1=0;
#line 3441 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3441 "cplus.met"
                    MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                    PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3441 "cplus.met"
                }
#line 3441 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3441 "cplus.met"
            }
#line 3441 "cplus.met"
            _retValue =_ptTree0;
#line 3441 "cplus.met"
            goto func_declaration_ret;
#line 3441 "cplus.met"
        }
#line 3441 "cplus.met"
#line 3441 "cplus.met"
    }
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
func_declaration_exit :
#line 3442 "cplus.met"

#line 3442 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3442 "cplus.met"
    _funcLevel--;
#line 3442 "cplus.met"
    return((PPTREE) -1) ;
#line 3442 "cplus.met"

#line 3442 "cplus.met"
func_declaration_ret :
#line 3442 "cplus.met"
    
#line 3442 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
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
#line 2456 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2456 "cplus.met"
{
#line 2456 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2456 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2456 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2456 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2456 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2456 "cplus.met"
#line 2456 "cplus.met"
    PPTREE valTree = (PPTREE) 0,funcDecl = (PPTREE) 0;
#line 2456 "cplus.met"
#line 2458 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 128, cplus)){
#line 2458 "cplus.met"
#line 2459 "cplus.met"
        {
#line 2459 "cplus.met"
            PPTREE _ptTree0=0;
#line 2459 "cplus.met"
            {
#line 2459 "cplus.met"
                PPTREE _ptTree1=0;
#line 2459 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2459 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2459 "cplus.met"
                }
#line 2459 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2459 "cplus.met"
            }
#line 2459 "cplus.met"
            _retValue =_ptTree0;
#line 2459 "cplus.met"
            goto func_declarator_ret;
#line 2459 "cplus.met"
        }
#line 2459 "cplus.met"
    }
#line 2459 "cplus.met"
#line 2460 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2460 "cplus.met"
    switch( lexEl.Value) {
#line 2460 "cplus.met"
#line 2464 "cplus.met"
        case POUV : 
#line 2464 "cplus.met"
            tokenAhead = 0 ;
#line 2464 "cplus.met"
            CommTerm();
#line 2464 "cplus.met"
#line 2462 "cplus.met"
#line 2463 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")){
#line 2463 "cplus.met"
#line 2464 "cplus.met"
                {
#line 2464 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2464 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2464 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2464 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2464 "cplus.met"
                    }
#line 2464 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2464 "cplus.met"
                    funcDecl=_ptRes0;
#line 2464 "cplus.met"
                }
#line 2464 "cplus.met"
            } else {
#line 2464 "cplus.met"
#line 2466 "cplus.met"
                
#line 2466 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                LEX_EXIT ("",0);
#line 2466 "cplus.met"
                goto func_declarator_exit;
#line 2466 "cplus.met"
            }
#line 2466 "cplus.met"
#line 2467 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2467 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2467 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                TOKEN_EXIT(func_declarator_exit,")")
#line 2467 "cplus.met"
            } else {
#line 2467 "cplus.met"
                tokenAhead = 0 ;
#line 2467 "cplus.met"
            }
#line 2467 "cplus.met"
#line 2468 "cplus.met"
            {
#line 2468 "cplus.met"
                _retValue = funcDecl ;
#line 2468 "cplus.met"
                goto func_declarator_ret;
#line 2468 "cplus.met"
                
#line 2468 "cplus.met"
            }
#line 2468 "cplus.met"
#line 2468 "cplus.met"
            break;
#line 2468 "cplus.met"
#line 2470 "cplus.met"
        case ETOI : 
#line 2470 "cplus.met"
            tokenAhead = 0 ;
#line 2470 "cplus.met"
            CommTerm();
#line 2470 "cplus.met"
#line 2470 "cplus.met"
            {
#line 2470 "cplus.met"
                PPTREE _ptTree0=0;
#line 2470 "cplus.met"
                {
#line 2470 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2470 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2470 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2470 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2470 "cplus.met"
                    }
#line 2470 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2470 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2470 "cplus.met"
                }
#line 2470 "cplus.met"
                _retValue =_ptTree0;
#line 2470 "cplus.met"
                goto func_declarator_ret;
#line 2470 "cplus.met"
            }
#line 2470 "cplus.met"
            break;
#line 2470 "cplus.met"
#line 2471 "cplus.met"
        case ETCOETCO : 
#line 2471 "cplus.met"
            tokenAhead = 0 ;
#line 2471 "cplus.met"
            CommTerm();
#line 2471 "cplus.met"
#line 2471 "cplus.met"
            {
#line 2471 "cplus.met"
                PPTREE _ptTree0=0;
#line 2471 "cplus.met"
                {
#line 2471 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2471 "cplus.met"
                    _ptRes1= MakeTree(TYP_MOV, 1);
#line 2471 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2471 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2471 "cplus.met"
                    }
#line 2471 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2471 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2471 "cplus.met"
                }
#line 2471 "cplus.met"
                _retValue =_ptTree0;
#line 2471 "cplus.met"
                goto func_declarator_ret;
#line 2471 "cplus.met"
            }
#line 2471 "cplus.met"
            break;
#line 2471 "cplus.met"
#line 2472 "cplus.met"
        case POINPOINPOIN : 
#line 2472 "cplus.met"
            tokenAhead = 0 ;
#line 2472 "cplus.met"
            CommTerm();
#line 2472 "cplus.met"
#line 2472 "cplus.met"
            {
#line 2472 "cplus.met"
                PPTREE _ptTree0=0;
#line 2472 "cplus.met"
                {
#line 2472 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2472 "cplus.met"
                    _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2472 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2472 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2472 "cplus.met"
                    }
#line 2472 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2472 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2472 "cplus.met"
                }
#line 2472 "cplus.met"
                _retValue =_ptTree0;
#line 2472 "cplus.met"
                goto func_declarator_ret;
#line 2472 "cplus.met"
            }
#line 2472 "cplus.met"
            break;
#line 2472 "cplus.met"
#line 2473 "cplus.met"
        case ETCO : 
#line 2473 "cplus.met"
            tokenAhead = 0 ;
#line 2473 "cplus.met"
            CommTerm();
#line 2473 "cplus.met"
#line 2473 "cplus.met"
            {
#line 2473 "cplus.met"
                PPTREE _ptTree0=0;
#line 2473 "cplus.met"
                {
#line 2473 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2473 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2473 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2473 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2473 "cplus.met"
                    }
#line 2473 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2473 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2473 "cplus.met"
                }
#line 2473 "cplus.met"
                _retValue =_ptTree0;
#line 2473 "cplus.met"
                goto func_declarator_ret;
#line 2473 "cplus.met"
            }
#line 2473 "cplus.met"
            break;
#line 2473 "cplus.met"
#line 2474 "cplus.met"
        case TILD : 
#line 2474 "cplus.met"
#line 2474 "cplus.met"
            {
#line 2474 "cplus.met"
                PPTREE _ptTree0=0;
#line 2474 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2474 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2474 "cplus.met"
                }
#line 2474 "cplus.met"
                _retValue =_ptTree0;
#line 2474 "cplus.met"
                goto func_declarator_ret;
#line 2474 "cplus.met"
            }
#line 2474 "cplus.met"
            break;
#line 2474 "cplus.met"
#line 2475 "cplus.met"
        case META : 
#line 2475 "cplus.met"
        case IDENT : 
#line 2475 "cplus.met"
#line 2475 "cplus.met"
            {
#line 2475 "cplus.met"
                PPTREE _ptTree0=0;
#line 2475 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2475 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2475 "cplus.met"
                }
#line 2475 "cplus.met"
                _retValue =_ptTree0;
#line 2475 "cplus.met"
                goto func_declarator_ret;
#line 2475 "cplus.met"
            }
#line 2475 "cplus.met"
            break;
#line 2475 "cplus.met"
#line 2476 "cplus.met"
        case OPERATOR : 
#line 2476 "cplus.met"
#line 2476 "cplus.met"
            {
#line 2476 "cplus.met"
                PPTREE _ptTree0=0;
#line 2476 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 2476 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2476 "cplus.met"
                }
#line 2476 "cplus.met"
                _retValue =_ptTree0;
#line 2476 "cplus.met"
                goto func_declarator_ret;
#line 2476 "cplus.met"
            }
#line 2476 "cplus.met"
            break;
#line 2476 "cplus.met"
        default :
#line 2476 "cplus.met"
            MulFreeTree(2,funcDecl,valTree);
            CASE_EXIT(func_declarator_exit,"either ( or * or && or ... or & or ~ or IDENT or operator")
#line 2476 "cplus.met"
            break;
#line 2476 "cplus.met"
    }
#line 2476 "cplus.met"
#line 2476 "cplus.met"
#line 2477 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2477 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2477 "cplus.met"
return((PPTREE) 0);
#line 2477 "cplus.met"

#line 2477 "cplus.met"
func_declarator_exit :
#line 2477 "cplus.met"

#line 2477 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2477 "cplus.met"
    _funcLevel--;
#line 2477 "cplus.met"
    return((PPTREE) -1) ;
#line 2477 "cplus.met"

#line 2477 "cplus.met"
func_declarator_ret :
#line 2477 "cplus.met"
    
#line 2477 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2477 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2477 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2477 "cplus.met"
    return _retValue ;
#line 2477 "cplus.met"
}
#line 2477 "cplus.met"

#line 2477 "cplus.met"
#line 3518 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3518 "cplus.met"
{
#line 3518 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3518 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3518 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3518 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3518 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3518 "cplus.met"
#line 3519 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3519 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3519 "cplus.met"
    }
#line 3519 "cplus.met"
#line 3520 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3520 "cplus.met"
    switch( lexEl.Value) {
#line 3520 "cplus.met"
#line 3520 "cplus.met"
        case ETOI : 
#line 3520 "cplus.met"
#line 3520 "cplus.met"
            break;
#line 3520 "cplus.met"
#line 3522 "cplus.met"
        case META : 
#line 3522 "cplus.met"
        case IDENT : 
#line 3522 "cplus.met"
#line 3522 "cplus.met"
            break;
#line 3522 "cplus.met"
        default :
#line 3522 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3522 "cplus.met"
            break;
#line 3522 "cplus.met"
    }
#line 3522 "cplus.met"
#line 3522 "cplus.met"
#line 3523 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3523 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3523 "cplus.met"
return((PPTREE) 0);
#line 3523 "cplus.met"

#line 3523 "cplus.met"
ident_mul_exit :
#line 3523 "cplus.met"

#line 3523 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3523 "cplus.met"
    _funcLevel--;
#line 3523 "cplus.met"
    return((PPTREE) -1) ;
#line 3523 "cplus.met"

#line 3523 "cplus.met"
ident_mul_ret :
#line 3523 "cplus.met"
    
#line 3523 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3523 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3523 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3523 "cplus.met"
    return _retValue ;
#line 3523 "cplus.met"
}
#line 3523 "cplus.met"

#line 3523 "cplus.met"
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
#line 2805 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2805 "cplus.met"
{
#line 2805 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2805 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2805 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2805 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2805 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2805 "cplus.met"
#line 2805 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2805 "cplus.met"
#line 2807 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2807 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2807 "cplus.met"
    }
#line 2807 "cplus.met"
#line 2808 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2808 "cplus.met"
#line 2809 "cplus.met"
        {
#line 2809 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2809 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2809 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2809 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2809 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2809 "cplus.met"
            }
#line 2809 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2809 "cplus.met"
            expTree=_ptRes0;
#line 2809 "cplus.met"
        }
#line 2809 "cplus.met"
    } 
#line 2809 "cplus.met"
#line 2810 "cplus.met"
    {
#line 2810 "cplus.met"
        _retValue = expTree ;
#line 2810 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2810 "cplus.met"
        
#line 2810 "cplus.met"
    }
#line 2810 "cplus.met"
#line 2810 "cplus.met"
#line 2810 "cplus.met"

#line 2811 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2811 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2811 "cplus.met"
return((PPTREE) 0);
#line 2811 "cplus.met"

#line 2811 "cplus.met"
inclusive_or_expression_exit :
#line 2811 "cplus.met"

#line 2811 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2811 "cplus.met"
    _funcLevel--;
#line 2811 "cplus.met"
    return((PPTREE) -1) ;
#line 2811 "cplus.met"

#line 2811 "cplus.met"
inclusive_or_expression_ret :
#line 2811 "cplus.met"
    
#line 2811 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2811 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2811 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2811 "cplus.met"
    return _retValue ;
#line 2811 "cplus.met"
}
#line 2811 "cplus.met"

#line 2811 "cplus.met"
#line 2560 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2560 "cplus.met"
{
#line 2560 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2560 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2560 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2560 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2560 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2560 "cplus.met"
#line 2560 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2560 "cplus.met"
#line 2560 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2560 "cplus.met"
#line 2562 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2562 "cplus.met"
    switch( lexEl.Value) {
#line 2562 "cplus.met"
#line 2566 "cplus.met"
        case AOUV : 
#line 2566 "cplus.met"
            tokenAhead = 0 ;
#line 2566 "cplus.met"
            CommTerm();
#line 2566 "cplus.met"
#line 2564 "cplus.met"
#line 2564 "cplus.met"
            _addlist1 = initList ;
#line 2564 "cplus.met"
#line 2565 "cplus.met"
            do {
#line 2565 "cplus.met"
#line 2566 "cplus.met"
                {
#line 2566 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2566 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2566 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2566 "cplus.met"
                    }
#line 2566 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2566 "cplus.met"
                }
#line 2566 "cplus.met"
#line 2566 "cplus.met"
                if (initList){
#line 2566 "cplus.met"
#line 2566 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2566 "cplus.met"
                } else {
#line 2566 "cplus.met"
#line 2566 "cplus.met"
                    initList = _addlist1 ;
#line 2566 "cplus.met"
                }
#line 2566 "cplus.met"
#line 2566 "cplus.met"
#line 2567 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2567 "cplus.met"
#line 2568 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2568 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2568 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2568 "cplus.met"
            } else {
#line 2568 "cplus.met"
                tokenAhead = 0 ;
#line 2568 "cplus.met"
            }
#line 2568 "cplus.met"
#line 2569 "cplus.met"
            {
#line 2569 "cplus.met"
                PPTREE _ptTree0=0;
#line 2569 "cplus.met"
                {
#line 2569 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2569 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2569 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2569 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2569 "cplus.met"
                }
#line 2569 "cplus.met"
                _retValue =_ptTree0;
#line 2569 "cplus.met"
                goto initializer_ret;
#line 2569 "cplus.met"
            }
#line 2569 "cplus.met"
#line 2569 "cplus.met"
            break;
#line 2569 "cplus.met"
#line 2572 "cplus.met"
        default : 
#line 2572 "cplus.met"
#line 2572 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 21, cplus)){
#line 2572 "cplus.met"
#line 2573 "cplus.met"
                {
#line 2573 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2573 "cplus.met"
                    {
#line 2573 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2573 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2573 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2573 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2573 "cplus.met"
                    }
#line 2573 "cplus.met"
                    _retValue =_ptTree0;
#line 2573 "cplus.met"
                    goto initializer_ret;
#line 2573 "cplus.met"
                }
#line 2573 "cplus.met"
            } else {
#line 2573 "cplus.met"
#line 2575 "cplus.met"
                {
#line 2575 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2575 "cplus.met"
                    {
#line 2575 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2575 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2575 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2575 "cplus.met"
                    }
#line 2575 "cplus.met"
                    _retValue =_ptTree0;
#line 2575 "cplus.met"
                    goto initializer_ret;
#line 2575 "cplus.met"
                }
#line 2575 "cplus.met"
            }
#line 2575 "cplus.met"
            break;
#line 2575 "cplus.met"
    }
#line 2575 "cplus.met"
#line 2575 "cplus.met"
#line 2576 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2576 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2576 "cplus.met"
return((PPTREE) 0);
#line 2576 "cplus.met"

#line 2576 "cplus.met"
initializer_exit :
#line 2576 "cplus.met"

#line 2576 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2576 "cplus.met"
    _funcLevel--;
#line 2576 "cplus.met"
    return((PPTREE) -1) ;
#line 2576 "cplus.met"

#line 2576 "cplus.met"
initializer_ret :
#line 2576 "cplus.met"
    
#line 2576 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2576 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2576 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2576 "cplus.met"
    return _retValue ;
#line 2576 "cplus.met"
}
#line 2576 "cplus.met"

#line 2576 "cplus.met"
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
            if ( (_ptTree1=NQUICK_CALL(_Tak(name_space)(error_free), 104, cplus))== (PPTREE) -1 ) {
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
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
#line 3513 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3513 "cplus.met"
{
#line 3513 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3513 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3513 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3513 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3513 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3513 "cplus.met"
#line 3514 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3514 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3514 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3514 "cplus.met"
    } else {
#line 3514 "cplus.met"
        tokenAhead = 0 ;
#line 3514 "cplus.met"
    }
#line 3514 "cplus.met"
#line 3515 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3515 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3515 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3515 "cplus.met"
    } else {
#line 3515 "cplus.met"
        tokenAhead = 0 ;
#line 3515 "cplus.met"
    }
#line 3515 "cplus.met"
#line 3515 "cplus.met"
#line 3515 "cplus.met"

#line 3516 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3516 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3516 "cplus.met"
return((PPTREE) 0);
#line 3516 "cplus.met"

#line 3516 "cplus.met"
label_beg_exit :
#line 3516 "cplus.met"

#line 3516 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3516 "cplus.met"
    _funcLevel--;
#line 3516 "cplus.met"
    return((PPTREE) -1) ;
#line 3516 "cplus.met"

#line 3516 "cplus.met"
label_beg_ret :
#line 3516 "cplus.met"
    
#line 3516 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3516 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3516 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3516 "cplus.met"
    return _retValue ;
#line 3516 "cplus.met"
}
#line 3516 "cplus.met"

#line 3516 "cplus.met"
#line 3445 "cplus.met"
PPTREE cplus::lambda ( int error_free)
#line 3445 "cplus.met"
{
#line 3445 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3445 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3445 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3445 "cplus.met"
    int _Debug = TRACE_RULE("lambda",TRACE_ENTER,(PPTREE)0);
#line 3445 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3445 "cplus.met"
#line 3445 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3445 "cplus.met"
#line 3445 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listCapture = (PPTREE) 0,listDecl = (PPTREE) 0,arg = (PPTREE) 0;
#line 3445 "cplus.met"
#line 3447 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3447 "cplus.met"
    if (  !SEE_TOKEN( COUV,"[") || !(CommTerm(),1)) {
#line 3447 "cplus.met"
        MulFreeTree(6,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,"[")
#line 3447 "cplus.met"
    } else {
#line 3447 "cplus.met"
        tokenAhead = 0 ;
#line 3447 "cplus.met"
    }
#line 3447 "cplus.met"
#line 3448 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3448 "cplus.met"
#line 3449 "cplus.met"
#line 3450 "cplus.met"
        {
#line 3450 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3450 "cplus.met"
            _ptRes0= MakeTree(LAMBDA, 5);
#line 3450 "cplus.met"
            {
#line 3450 "cplus.met"
                PPTREE _ptRes1=0;
#line 3450 "cplus.met"
                _ptRes1= MakeTree(CAPTURE_ALL, 0);
#line 3450 "cplus.met"
                _ptTree0=_ptRes1;
#line 3450 "cplus.met"
            }
#line 3450 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3450 "cplus.met"
            retTree=_ptRes0;
#line 3450 "cplus.met"
        }
#line 3450 "cplus.met"
#line 3450 "cplus.met"
#line 3450 "cplus.met"
    } else {
#line 3450 "cplus.met"
#line 3453 "cplus.met"
#line 3454 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( CFER,"]"))){
#line 3454 "cplus.met"
#line 3455 "cplus.met"
#line 3455 "cplus.met"
            _addlist2 = listCapture ;
#line 3455 "cplus.met"
#line 3456 "cplus.met"
            do {
#line 3456 "cplus.met"
#line 3457 "cplus.met"
#line 3458 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3458 "cplus.met"
                switch( lexEl.Value) {
#line 3458 "cplus.met"
#line 3460 "cplus.met"
                    case ETCO : 
#line 3460 "cplus.met"
                        tokenAhead = 0 ;
#line 3460 "cplus.met"
                        CommTerm();
#line 3460 "cplus.met"
#line 3460 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3460 "cplus.met"
#line 3461 "cplus.met"
#line 3461 "cplus.met"
                            {
#line 3461 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3461 "cplus.met"
                                {
#line 3461 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3461 "cplus.met"
                                    _ptRes1= MakeTree(TYP_REF, 1);
#line 3461 "cplus.met"
                                    {
#line 3461 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3461 "cplus.met"
                                        _ptRes2= MakeTree(IDENT, 1);
#line 3461 "cplus.met"
                                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3461 "cplus.met"
                                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 3461 "cplus.met"
                                            MulFreeTree(11,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
                                            TOKEN_EXIT(lambda_exit,"IDENT")
#line 3461 "cplus.met"
                                        } else {
#line 3461 "cplus.met"
                                            tokenAhead = 0 ;
#line 3461 "cplus.met"
                                        }
#line 3461 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3461 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 3461 "cplus.met"
                                    }
#line 3461 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3461 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 3461 "cplus.met"
                                }
#line 3461 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 3461 "cplus.met"
                            }
#line 3461 "cplus.met"
#line 3461 "cplus.met"
                            if (listCapture){
#line 3461 "cplus.met"
#line 3461 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 3461 "cplus.met"
                            } else {
#line 3461 "cplus.met"
#line 3461 "cplus.met"
                                listCapture = _addlist2 ;
#line 3461 "cplus.met"
                            }
#line 3461 "cplus.met"
                        } else {
#line 3461 "cplus.met"
#line 3463 "cplus.met"
#line 3463 "cplus.met"
                            {
#line 3463 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3463 "cplus.met"
                                {
#line 3463 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3463 "cplus.met"
                                    _ptRes1= MakeTree(TYP_REF, 1);
#line 3463 "cplus.met"
                                    {
#line 3463 "cplus.met"
                                        PPTREE _ptRes2=0;
#line 3463 "cplus.met"
                                        _ptRes2= MakeTree(IDENT, 1);
#line 3463 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, MakeString (""));
#line 3463 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 3463 "cplus.met"
                                    }
#line 3463 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3463 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 3463 "cplus.met"
                                }
#line 3463 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 3463 "cplus.met"
                            }
#line 3463 "cplus.met"
#line 3463 "cplus.met"
                            if (listCapture){
#line 3463 "cplus.met"
#line 3463 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 3463 "cplus.met"
                            } else {
#line 3463 "cplus.met"
#line 3463 "cplus.met"
                                listCapture = _addlist2 ;
#line 3463 "cplus.met"
                            }
#line 3463 "cplus.met"
                        }
#line 3463 "cplus.met"
                        break;
#line 3463 "cplus.met"
#line 3464 "cplus.met"
                    default : 
#line 3464 "cplus.met"
#line 3464 "cplus.met"
#line 3464 "cplus.met"
                        {
#line 3464 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3464 "cplus.met"
                            {
#line 3464 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3464 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3464 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3464 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3464 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
                                    TOKEN_EXIT(lambda_exit,"IDENT")
#line 3464 "cplus.met"
                                } else {
#line 3464 "cplus.met"
                                    tokenAhead = 0 ;
#line 3464 "cplus.met"
                                }
#line 3464 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3464 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3464 "cplus.met"
                            }
#line 3464 "cplus.met"
                            _addlist2 =AddList(_addlist2 , _ptTree0);
#line 3464 "cplus.met"
                        }
#line 3464 "cplus.met"
#line 3464 "cplus.met"
                        if (listCapture){
#line 3464 "cplus.met"
#line 3464 "cplus.met"
                            _addlist2 = SonTree (_addlist2 ,2 );
#line 3464 "cplus.met"
                        } else {
#line 3464 "cplus.met"
#line 3464 "cplus.met"
                            listCapture = _addlist2 ;
#line 3464 "cplus.met"
                        }
#line 3464 "cplus.met"
                        break;
#line 3464 "cplus.met"
                }
#line 3464 "cplus.met"
#line 3464 "cplus.met"
#line 3464 "cplus.met"
#line 3467 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3467 "cplus.met"
#line 3468 "cplus.met"
            {
#line 3468 "cplus.met"
                PPTREE _ptRes0=0;
#line 3468 "cplus.met"
                _ptRes0= MakeTree(LAMBDA, 5);
#line 3468 "cplus.met"
                ReplaceTree(_ptRes0, 1, listCapture );
#line 3468 "cplus.met"
                retTree=_ptRes0;
#line 3468 "cplus.met"
            }
#line 3468 "cplus.met"
#line 3468 "cplus.met"
#line 3468 "cplus.met"
        } else {
#line 3468 "cplus.met"
#line 3471 "cplus.met"
            {
#line 3471 "cplus.met"
                PPTREE _ptRes0=0;
#line 3471 "cplus.met"
                _ptRes0= MakeTree(LAMBDA, 5);
#line 3471 "cplus.met"
                retTree=_ptRes0;
#line 3471 "cplus.met"
            }
#line 3471 "cplus.met"
        }
#line 3471 "cplus.met"
#line 3471 "cplus.met"
    }
#line 3471 "cplus.met"
#line 3473 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3473 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3473 "cplus.met"
        MulFreeTree(6,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,"]")
#line 3473 "cplus.met"
    } else {
#line 3473 "cplus.met"
        tokenAhead = 0 ;
#line 3473 "cplus.met"
    }
#line 3473 "cplus.met"
#line 3474 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3474 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3474 "cplus.met"
        MulFreeTree(6,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,"(")
#line 3474 "cplus.met"
    } else {
#line 3474 "cplus.met"
        tokenAhead = 0 ;
#line 3474 "cplus.met"
    }
#line 3474 "cplus.met"
#line 3475 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3475 "cplus.met"
#line 3476 "cplus.met"
#line 3477 "cplus.met"
        {
#line 3477 "cplus.met"
            PPTREE _ptTree0=0;
#line 3477 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 3477 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
                PROG_EXIT(lambda_exit,"lambda")
#line 3477 "cplus.met"
            }
#line 3477 "cplus.met"
            listDecl =AddList(listDecl , _ptTree0);
#line 3477 "cplus.met"
        }
#line 3477 "cplus.met"
#line 3477 "cplus.met"
        _addlist1 = listDecl ;
#line 3477 "cplus.met"
#line 3478 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 3478 "cplus.met"
#line 3479 "cplus.met"
#line 3479 "cplus.met"
            {
#line 3479 "cplus.met"
                PPTREE _ptTree0=0;
#line 3479 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 3479 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
                    PROG_EXIT(lambda_exit,"lambda")
#line 3479 "cplus.met"
                }
#line 3479 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3479 "cplus.met"
            }
#line 3479 "cplus.met"
#line 3479 "cplus.met"
            if (listDecl){
#line 3479 "cplus.met"
#line 3479 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3479 "cplus.met"
            } else {
#line 3479 "cplus.met"
#line 3479 "cplus.met"
                listDecl = _addlist1 ;
#line 3479 "cplus.met"
            }
#line 3479 "cplus.met"
        } 
#line 3479 "cplus.met"
#line 3480 "cplus.met"
        ReplaceTree(retTree ,2 ,listDecl );
#line 3480 "cplus.met"
#line 3480 "cplus.met"
#line 3480 "cplus.met"
    }
#line 3480 "cplus.met"
#line 3482 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3482 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3482 "cplus.met"
        MulFreeTree(6,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,")")
#line 3482 "cplus.met"
    } else {
#line 3482 "cplus.met"
        tokenAhead = 0 ;
#line 3482 "cplus.met"
    }
#line 3482 "cplus.met"
#line 3483 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TIRESUPE,"->") && (tokenAhead = 0,CommTerm(),1)){
#line 3483 "cplus.met"
#line 3484 "cplus.met"
        {
#line 3484 "cplus.met"
            PPTREE _ptTree0=0;
#line 3484 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3484 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
                PROG_EXIT(lambda_exit,"lambda")
#line 3484 "cplus.met"
            }
#line 3484 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3484 "cplus.met"
        }
#line 3484 "cplus.met"
#line 3484 "cplus.met"
    }
#line 3484 "cplus.met"
#line 3485 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(MUTABLE,"mutable") && (tokenAhead = 0,CommTerm(),1)){
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
                _ptRes1= MakeTree(MUTABLE, 0);
#line 3486 "cplus.met"
                _ptTree0=_ptRes1;
#line 3486 "cplus.met"
            }
#line 3486 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 3486 "cplus.met"
        }
#line 3486 "cplus.met"
#line 3486 "cplus.met"
    }
#line 3486 "cplus.met"
#line 3487 "cplus.met"
    {
#line 3487 "cplus.met"
        PPTREE _ptTree0=0;
#line 3487 "cplus.met"
        {
#line 3487 "cplus.met"
            PPTREE _ptTree1=0;
#line 3487 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3487 "cplus.met"
                MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,arg,listCapture,listDecl,retTree);
                PROG_EXIT(lambda_exit,"lambda")
#line 3487 "cplus.met"
            }
#line 3487 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 5 , _ptTree1);
#line 3487 "cplus.met"
        }
#line 3487 "cplus.met"
        _retValue =_ptTree0;
#line 3487 "cplus.met"
        goto lambda_ret;
#line 3487 "cplus.met"
    }
#line 3487 "cplus.met"
#line 3487 "cplus.met"
#line 3487 "cplus.met"

#line 3488 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3488 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3488 "cplus.met"
return((PPTREE) 0);
#line 3488 "cplus.met"

#line 3488 "cplus.met"
lambda_exit :
#line 3488 "cplus.met"

#line 3488 "cplus.met"
    _Debug = TRACE_RULE("lambda",TRACE_EXIT,(PPTREE)0);
#line 3488 "cplus.met"
    _funcLevel--;
#line 3488 "cplus.met"
    return((PPTREE) -1) ;
#line 3488 "cplus.met"

#line 3488 "cplus.met"
lambda_ret :
#line 3488 "cplus.met"
    
#line 3488 "cplus.met"
    _Debug = TRACE_RULE("lambda",TRACE_RETURN,_retValue);
#line 3488 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3488 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3488 "cplus.met"
    return _retValue ;
#line 3488 "cplus.met"
}
#line 3488 "cplus.met"

#line 3488 "cplus.met"
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
#line 2797 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2797 "cplus.met"
{
#line 2797 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2797 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2797 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2797 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2797 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2797 "cplus.met"
#line 2797 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2797 "cplus.met"
#line 2799 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2799 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2799 "cplus.met"
    }
#line 2799 "cplus.met"
#line 2800 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2800 "cplus.met"
#line 2801 "cplus.met"
        {
#line 2801 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2801 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2801 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2801 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2801 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2801 "cplus.met"
            }
#line 2801 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2801 "cplus.met"
            expTree=_ptRes0;
#line 2801 "cplus.met"
        }
#line 2801 "cplus.met"
    } 
#line 2801 "cplus.met"
#line 2802 "cplus.met"
    {
#line 2802 "cplus.met"
        _retValue = expTree ;
#line 2802 "cplus.met"
        goto logical_and_expression_ret;
#line 2802 "cplus.met"
        
#line 2802 "cplus.met"
    }
#line 2802 "cplus.met"
#line 2802 "cplus.met"
#line 2802 "cplus.met"

#line 2803 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2803 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2803 "cplus.met"
return((PPTREE) 0);
#line 2803 "cplus.met"

#line 2803 "cplus.met"
logical_and_expression_exit :
#line 2803 "cplus.met"

#line 2803 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2803 "cplus.met"
    _funcLevel--;
#line 2803 "cplus.met"
    return((PPTREE) -1) ;
#line 2803 "cplus.met"

#line 2803 "cplus.met"
logical_and_expression_ret :
#line 2803 "cplus.met"
    
#line 2803 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2803 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2803 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2803 "cplus.met"
    return _retValue ;
#line 2803 "cplus.met"
}
#line 2803 "cplus.met"

#line 2803 "cplus.met"
#line 2789 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2789 "cplus.met"
{
#line 2789 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2789 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2789 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2789 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2789 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2789 "cplus.met"
#line 2789 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2789 "cplus.met"
#line 2791 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2791 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2791 "cplus.met"
    }
#line 2791 "cplus.met"
#line 2792 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2792 "cplus.met"
#line 2793 "cplus.met"
        {
#line 2793 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2793 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2793 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2793 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2793 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2793 "cplus.met"
            }
#line 2793 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2793 "cplus.met"
            expTree=_ptRes0;
#line 2793 "cplus.met"
        }
#line 2793 "cplus.met"
    } 
#line 2793 "cplus.met"
#line 2794 "cplus.met"
    {
#line 2794 "cplus.met"
        _retValue = expTree ;
#line 2794 "cplus.met"
        goto logical_or_expression_ret;
#line 2794 "cplus.met"
        
#line 2794 "cplus.met"
    }
#line 2794 "cplus.met"
#line 2794 "cplus.met"
#line 2794 "cplus.met"

#line 2795 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2795 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2795 "cplus.met"
return((PPTREE) 0);
#line 2795 "cplus.met"

#line 2795 "cplus.met"
logical_or_expression_exit :
#line 2795 "cplus.met"

#line 2795 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2795 "cplus.met"
    _funcLevel--;
#line 2795 "cplus.met"
    return((PPTREE) -1) ;
#line 2795 "cplus.met"

#line 2795 "cplus.met"
logical_or_expression_ret :
#line 2795 "cplus.met"
    
#line 2795 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2795 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2795 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2795 "cplus.met"
    return _retValue ;
#line 2795 "cplus.met"
}
#line 2795 "cplus.met"

#line 2795 "cplus.met"
