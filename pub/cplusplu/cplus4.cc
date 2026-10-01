/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3696 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3696 "cplus.met"
{
#line 3696 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3696 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3696 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3696 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3696 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3696 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3696 "cplus.met"
#line 3696 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0;
#line 3696 "cplus.met"
#line 3698 "cplus.met"
     bool isDecl = false ;
#line 3698 "cplus.met"
#line 3699 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3699 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3699 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3699 "cplus.met"
    } else {
#line 3699 "cplus.met"
        tokenAhead = 0 ;
#line 3699 "cplus.met"
    }
#line 3699 "cplus.met"
#line 3700 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 68, cplus)){
#line 3700 "cplus.met"
#line 3701 "cplus.met"
        {
#line 3701 "cplus.met"
            PPTREE _ptRes0=0;
#line 3701 "cplus.met"
            _ptRes0= MakeTree(FOR, 4);
#line 3701 "cplus.met"
            ReplaceTree(_ptRes0, 1, opt );
#line 3701 "cplus.met"
            statTree=_ptRes0;
#line 3701 "cplus.met"
        }
#line 3701 "cplus.met"
    } else {
#line 3701 "cplus.met"
#line 3703 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 46, cplus)){
#line 3703 "cplus.met"
#line 3704 "cplus.met"
#line 3705 "cplus.met"
            {
#line 3705 "cplus.met"
                PPTREE _ptRes0=0;
#line 3705 "cplus.met"
                _ptRes0= MakeTree(FOR, 4);
#line 3705 "cplus.met"
                ReplaceTree(_ptRes0, 1, opt );
#line 3705 "cplus.met"
                statTree=_ptRes0;
#line 3705 "cplus.met"
            }
#line 3705 "cplus.met"
#line 3706 "cplus.met"
             isDecl = true ;
#line 3706 "cplus.met"
#line 3706 "cplus.met"
#line 3706 "cplus.met"
        } else {
#line 3706 "cplus.met"
#line 3709 "cplus.met"
            {
#line 3709 "cplus.met"
                PPTREE _ptRes0=0;
#line 3709 "cplus.met"
                _ptRes0= MakeTree(FOR, 4);
#line 3709 "cplus.met"
                statTree=_ptRes0;
#line 3709 "cplus.met"
            }
#line 3709 "cplus.met"
        }
#line 3709 "cplus.met"
    }
#line 3709 "cplus.met"
#line 3710 "cplus.met"
    if (( isDecl ) && 
#line 3710 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1))){
#line 3710 "cplus.met"
#line 3711 "cplus.met"
#line 3712 "cplus.met"
        {
#line 3712 "cplus.met"
            PPTREE _ptTree0=0;
#line 3712 "cplus.met"
            {
#line 3712 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3712 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3712 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3712 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3712 "cplus.met"
                    MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,opt,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3712 "cplus.met"
                }
#line 3712 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3712 "cplus.met"
                _ptTree0=_ptRes1;
#line 3712 "cplus.met"
            }
#line 3712 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3712 "cplus.met"
        }
#line 3712 "cplus.met"
#line 3712 "cplus.met"
#line 3712 "cplus.met"
    } else {
#line 3712 "cplus.met"
#line 3715 "cplus.met"
#line 3716 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3716 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3716 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3716 "cplus.met"
        } else {
#line 3716 "cplus.met"
            tokenAhead = 0 ;
#line 3716 "cplus.met"
        }
#line 3716 "cplus.met"
#line 3717 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3717 "cplus.met"
#line 3718 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3718 "cplus.met"
#line 3718 "cplus.met"
        }
#line 3718 "cplus.met"
#line 3719 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3719 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3719 "cplus.met"
            MulFreeTree(2,opt,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3719 "cplus.met"
        } else {
#line 3719 "cplus.met"
            tokenAhead = 0 ;
#line 3719 "cplus.met"
        }
#line 3719 "cplus.met"
#line 3720 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3720 "cplus.met"
#line 3721 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3721 "cplus.met"
#line 3721 "cplus.met"
        }
#line 3721 "cplus.met"
#line 3721 "cplus.met"
    }
#line 3721 "cplus.met"
#line 3723 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3723 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3723 "cplus.met"
        MulFreeTree(2,opt,statTree);
        TOKEN_EXIT(for_statement_exit,")")
#line 3723 "cplus.met"
    } else {
#line 3723 "cplus.met"
        tokenAhead = 0 ;
#line 3723 "cplus.met"
    }
#line 3723 "cplus.met"
#line 3724 "cplus.met"
    {
#line 3724 "cplus.met"
        switchContext = 0 ;
#line 3724 "cplus.met"
#line 3725 "cplus.met"
        {
#line 3725 "cplus.met"
            PPTREE _ptTree0=0;
#line 3725 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3725 "cplus.met"
                MulFreeTree(3,_ptTree0,opt,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3725 "cplus.met"
            }
#line 3725 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3725 "cplus.met"
        }
#line 3725 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3725 "cplus.met"
    }
#line 3725 "cplus.met"
#line 3726 "cplus.met"
    {
#line 3726 "cplus.met"
        _retValue = statTree ;
#line 3726 "cplus.met"
        goto for_statement_ret;
#line 3726 "cplus.met"
        
#line 3726 "cplus.met"
    }
#line 3726 "cplus.met"
#line 3726 "cplus.met"
#line 3726 "cplus.met"

#line 3727 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3727 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3727 "cplus.met"
switchContext =  _oldswitchContext;
#line 3727 "cplus.met"
return((PPTREE) 0);
#line 3727 "cplus.met"

#line 3727 "cplus.met"
for_statement_exit :
#line 3727 "cplus.met"

#line 3727 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3727 "cplus.met"
    _funcLevel--;
#line 3727 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3727 "cplus.met"
    return((PPTREE) -1) ;
#line 3727 "cplus.met"

#line 3727 "cplus.met"
for_statement_ret :
#line 3727 "cplus.met"
    
#line 3727 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3727 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3727 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3727 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3727 "cplus.met"
    return _retValue ;
#line 3727 "cplus.met"
}
#line 3727 "cplus.met"

#line 3727 "cplus.met"
#line 3568 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3568 "cplus.met"
{
#line 3568 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3568 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3568 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3568 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3568 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3568 "cplus.met"
#line 3568 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3568 "cplus.met"
#line 3568 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0,listRange = (PPTREE) 0;
#line 3568 "cplus.met"
#line 3572 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 153, cplus))){
#line 3572 "cplus.met"
#line 3574 "cplus.met"
#line 3575 "cplus.met"
        {
#line 3575 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3575 "cplus.met"
            _ptRes0= MakeTree(FUNC, 11);
#line 3575 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 3575 "cplus.met"
                MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,listRange,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3575 "cplus.met"
            }
#line 3575 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3575 "cplus.met"
            funcTree=_ptRes0;
#line 3575 "cplus.met"
        }
#line 3575 "cplus.met"
#line 3576 "cplus.met"
        {
#line 3576 "cplus.met"
            PPTREE _ptTree0=0;
#line 3576 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 3576 "cplus.met"
                MulFreeTree(8,_ptTree0,_addlist1,decList,exception,funcTree,listRange,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3576 "cplus.met"
            }
#line 3576 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3576 "cplus.met"
        }
#line 3576 "cplus.met"
#line 3576 "cplus.met"
#line 3576 "cplus.met"
    }
#line 3576 "cplus.met"
#line 3578 "cplus.met"
    {
#line 3578 "cplus.met"
        PPTREE _ptTree0=0;
#line 3578 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 114, cplus))== (PPTREE) -1 ) {
#line 3578 "cplus.met"
            MulFreeTree(8,_ptTree0,_addlist1,decList,exception,funcTree,listRange,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3578 "cplus.met"
        }
#line 3578 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3578 "cplus.met"
    }
#line 3578 "cplus.met"
#line 3579 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 130, cplus)){
#line 3579 "cplus.met"
#line 3580 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3580 "cplus.met"
#line 3580 "cplus.met"
    }
#line 3580 "cplus.met"
#line 3587 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 65, cplus)){
#line 3587 "cplus.met"
#line 3589 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3589 "cplus.met"
#line 3589 "cplus.met"
    }
#line 3589 "cplus.met"
#line 3590 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3590 "cplus.met"
#line 3591 "cplus.met"
#line 3592 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3592 "cplus.met"
        if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 3592 "cplus.met"
            MulFreeTree(7,_addlist1,decList,exception,funcTree,listRange,opt,range);
            TOKEN_EXIT(func_declaration_exit,"delete")
#line 3592 "cplus.met"
        } else {
#line 3592 "cplus.met"
            tokenAhead = 0 ;
#line 3592 "cplus.met"
        }
#line 3592 "cplus.met"
#line 3593 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3593 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3593 "cplus.met"
            MulFreeTree(7,_addlist1,decList,exception,funcTree,listRange,opt,range);
            TOKEN_EXIT(func_declaration_exit,";")
#line 3593 "cplus.met"
        } else {
#line 3593 "cplus.met"
            tokenAhead = 0 ;
#line 3593 "cplus.met"
        }
#line 3593 "cplus.met"
#line 3594 "cplus.met"
        {
#line 3594 "cplus.met"
            PPTREE _ptTree0=0;
#line 3594 "cplus.met"
            {
#line 3594 "cplus.met"
                PPTREE _ptTree1=0;
#line 3594 "cplus.met"
                {
#line 3594 "cplus.met"
                    PPTREE _ptRes2=0;
#line 3594 "cplus.met"
                    _ptRes2= MakeTree(DELETE_FUNCTION, 0);
#line 3594 "cplus.met"
                    _ptTree1=_ptRes2;
#line 3594 "cplus.met"
                }
#line 3594 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 10 , _ptTree1);
#line 3594 "cplus.met"
            }
#line 3594 "cplus.met"
            _retValue =_ptTree0;
#line 3594 "cplus.met"
            goto func_declaration_ret;
#line 3594 "cplus.met"
        }
#line 3594 "cplus.met"
#line 3594 "cplus.met"
#line 3594 "cplus.met"
    } else {
#line 3594 "cplus.met"
#line 3597 "cplus.met"
#line 3597 "cplus.met"
        _addlist1 = decList ;
#line 3597 "cplus.met"
#line 3598 "cplus.met"
        while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 45, cplus)) { 
#line 3598 "cplus.met"
#line 3599 "cplus.met"
#line 3599 "cplus.met"
            _addlist1 =AddList(_addlist1 ,opt );
#line 3599 "cplus.met"
#line 3599 "cplus.met"
            if (decList){
#line 3599 "cplus.met"
#line 3599 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3599 "cplus.met"
            } else {
#line 3599 "cplus.met"
#line 3599 "cplus.met"
                decList = _addlist1 ;
#line 3599 "cplus.met"
            }
#line 3599 "cplus.met"
        } 
#line 3599 "cplus.met"
#line 3600 "cplus.met"
        ReplaceTree(funcTree ,6 ,decList );
#line 3600 "cplus.met"
#line 3601 "cplus.met"
        {
#line 3601 "cplus.met"
            PPTREE _ptTree0=0;
#line 3601 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 3601 "cplus.met"
                MulFreeTree(8,_ptTree0,_addlist1,decList,exception,funcTree,listRange,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3601 "cplus.met"
            }
#line 3601 "cplus.met"
            ReplaceTree(funcTree , 7 , _ptTree0);
#line 3601 "cplus.met"
        }
#line 3601 "cplus.met"
#line 3602 "cplus.met"
        {
#line 3602 "cplus.met"
            PPTREE _ptTree0=0;
#line 3602 "cplus.met"
            {
#line 3602 "cplus.met"
                PPTREE _ptTree1=0;
#line 3602 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3602 "cplus.met"
                    MulFreeTree(9,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,listRange,opt,range);
                    PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3602 "cplus.met"
                }
#line 3602 "cplus.met"
                _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3602 "cplus.met"
            }
#line 3602 "cplus.met"
            _retValue =_ptTree0;
#line 3602 "cplus.met"
            goto func_declaration_ret;
#line 3602 "cplus.met"
        }
#line 3602 "cplus.met"
#line 3602 "cplus.met"
    }
#line 3602 "cplus.met"
#line 3602 "cplus.met"
#line 3603 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3603 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3603 "cplus.met"
return((PPTREE) 0);
#line 3603 "cplus.met"

#line 3603 "cplus.met"
func_declaration_exit :
#line 3603 "cplus.met"

#line 3603 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3603 "cplus.met"
    _funcLevel--;
#line 3603 "cplus.met"
    return((PPTREE) -1) ;
#line 3603 "cplus.met"

#line 3603 "cplus.met"
func_declaration_ret :
#line 3603 "cplus.met"
    
#line 3603 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3603 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3603 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3603 "cplus.met"
    return _retValue ;
#line 3603 "cplus.met"
}
#line 3603 "cplus.met"

#line 3603 "cplus.met"
#line 2610 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2610 "cplus.met"
{
#line 2610 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2610 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2610 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2610 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2610 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2610 "cplus.met"
#line 2610 "cplus.met"
    PPTREE valTree = (PPTREE) 0,funcDecl = (PPTREE) 0;
#line 2610 "cplus.met"
#line 2612 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 129, cplus)){
#line 2612 "cplus.met"
#line 2613 "cplus.met"
        {
#line 2613 "cplus.met"
            PPTREE _ptTree0=0;
#line 2613 "cplus.met"
            {
#line 2613 "cplus.met"
                PPTREE _ptTree1=0;
#line 2613 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2613 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2613 "cplus.met"
                }
#line 2613 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2613 "cplus.met"
            }
#line 2613 "cplus.met"
            _retValue =_ptTree0;
#line 2613 "cplus.met"
            goto func_declarator_ret;
#line 2613 "cplus.met"
        }
#line 2613 "cplus.met"
    }
#line 2613 "cplus.met"
#line 2614 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2614 "cplus.met"
    switch( lexEl.Value) {
#line 2614 "cplus.met"
#line 2618 "cplus.met"
        case POUV : 
#line 2618 "cplus.met"
            tokenAhead = 0 ;
#line 2618 "cplus.met"
            CommTerm();
#line 2618 "cplus.met"
#line 2616 "cplus.met"
#line 2617 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")){
#line 2617 "cplus.met"
#line 2618 "cplus.met"
                {
#line 2618 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2618 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2618 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 2618 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2618 "cplus.met"
                    }
#line 2618 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2618 "cplus.met"
                    funcDecl=_ptRes0;
#line 2618 "cplus.met"
                }
#line 2618 "cplus.met"
            } else {
#line 2618 "cplus.met"
#line 2620 "cplus.met"
                
#line 2620 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                LEX_EXIT ("",0);
#line 2620 "cplus.met"
                goto func_declarator_exit;
#line 2620 "cplus.met"
            }
#line 2620 "cplus.met"
#line 2621 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2621 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2621 "cplus.met"
                MulFreeTree(2,funcDecl,valTree);
                TOKEN_EXIT(func_declarator_exit,")")
#line 2621 "cplus.met"
            } else {
#line 2621 "cplus.met"
                tokenAhead = 0 ;
#line 2621 "cplus.met"
            }
#line 2621 "cplus.met"
#line 2622 "cplus.met"
            {
#line 2622 "cplus.met"
                _retValue = funcDecl ;
#line 2622 "cplus.met"
                goto func_declarator_ret;
#line 2622 "cplus.met"
                
#line 2622 "cplus.met"
            }
#line 2622 "cplus.met"
#line 2622 "cplus.met"
            break;
#line 2622 "cplus.met"
#line 2624 "cplus.met"
        case ETOI : 
#line 2624 "cplus.met"
            tokenAhead = 0 ;
#line 2624 "cplus.met"
            CommTerm();
#line 2624 "cplus.met"
#line 2624 "cplus.met"
            {
#line 2624 "cplus.met"
                PPTREE _ptTree0=0;
#line 2624 "cplus.met"
                {
#line 2624 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2624 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2624 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2624 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2624 "cplus.met"
                    }
#line 2624 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2624 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2624 "cplus.met"
                }
#line 2624 "cplus.met"
                _retValue =_ptTree0;
#line 2624 "cplus.met"
                goto func_declarator_ret;
#line 2624 "cplus.met"
            }
#line 2624 "cplus.met"
            break;
#line 2624 "cplus.met"
#line 2625 "cplus.met"
        case ETCOETCO : 
#line 2625 "cplus.met"
            tokenAhead = 0 ;
#line 2625 "cplus.met"
            CommTerm();
#line 2625 "cplus.met"
#line 2625 "cplus.met"
            {
#line 2625 "cplus.met"
                PPTREE _ptTree0=0;
#line 2625 "cplus.met"
                {
#line 2625 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2625 "cplus.met"
                    _ptRes1= MakeTree(TYP_MOV, 1);
#line 2625 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2625 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2625 "cplus.met"
                    }
#line 2625 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2625 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2625 "cplus.met"
                }
#line 2625 "cplus.met"
                _retValue =_ptTree0;
#line 2625 "cplus.met"
                goto func_declarator_ret;
#line 2625 "cplus.met"
            }
#line 2625 "cplus.met"
            break;
#line 2625 "cplus.met"
#line 2626 "cplus.met"
        case POINPOINPOIN : 
#line 2626 "cplus.met"
            tokenAhead = 0 ;
#line 2626 "cplus.met"
            CommTerm();
#line 2626 "cplus.met"
#line 2626 "cplus.met"
            {
#line 2626 "cplus.met"
                PPTREE _ptTree0=0;
#line 2626 "cplus.met"
                {
#line 2626 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2626 "cplus.met"
                    _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2626 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2626 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2626 "cplus.met"
                    }
#line 2626 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2626 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2626 "cplus.met"
                }
#line 2626 "cplus.met"
                _retValue =_ptTree0;
#line 2626 "cplus.met"
                goto func_declarator_ret;
#line 2626 "cplus.met"
            }
#line 2626 "cplus.met"
            break;
#line 2626 "cplus.met"
#line 2627 "cplus.met"
        case ETCO : 
#line 2627 "cplus.met"
            tokenAhead = 0 ;
#line 2627 "cplus.met"
            CommTerm();
#line 2627 "cplus.met"
#line 2627 "cplus.met"
            {
#line 2627 "cplus.met"
                PPTREE _ptTree0=0;
#line 2627 "cplus.met"
                {
#line 2627 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2627 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2627 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2627 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,funcDecl,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2627 "cplus.met"
                    }
#line 2627 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2627 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2627 "cplus.met"
                }
#line 2627 "cplus.met"
                _retValue =_ptTree0;
#line 2627 "cplus.met"
                goto func_declarator_ret;
#line 2627 "cplus.met"
            }
#line 2627 "cplus.met"
            break;
#line 2627 "cplus.met"
#line 2628 "cplus.met"
        case TILD : 
#line 2628 "cplus.met"
#line 2628 "cplus.met"
            {
#line 2628 "cplus.met"
                PPTREE _ptTree0=0;
#line 2628 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2628 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2628 "cplus.met"
                }
#line 2628 "cplus.met"
                _retValue =_ptTree0;
#line 2628 "cplus.met"
                goto func_declarator_ret;
#line 2628 "cplus.met"
            }
#line 2628 "cplus.met"
            break;
#line 2628 "cplus.met"
#line 2629 "cplus.met"
        case META : 
#line 2629 "cplus.met"
        case IDENT : 
#line 2629 "cplus.met"
#line 2629 "cplus.met"
            {
#line 2629 "cplus.met"
                PPTREE _ptTree0=0;
#line 2629 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2629 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2629 "cplus.met"
                }
#line 2629 "cplus.met"
                _retValue =_ptTree0;
#line 2629 "cplus.met"
                goto func_declarator_ret;
#line 2629 "cplus.met"
            }
#line 2629 "cplus.met"
            break;
#line 2629 "cplus.met"
#line 2630 "cplus.met"
        case OPERATOR : 
#line 2630 "cplus.met"
#line 2630 "cplus.met"
            {
#line 2630 "cplus.met"
                PPTREE _ptTree0=0;
#line 2630 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2630 "cplus.met"
                    MulFreeTree(3,_ptTree0,funcDecl,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2630 "cplus.met"
                }
#line 2630 "cplus.met"
                _retValue =_ptTree0;
#line 2630 "cplus.met"
                goto func_declarator_ret;
#line 2630 "cplus.met"
            }
#line 2630 "cplus.met"
            break;
#line 2630 "cplus.met"
        default :
#line 2630 "cplus.met"
            MulFreeTree(2,funcDecl,valTree);
            CASE_EXIT(func_declarator_exit,"either ( or * or && or ... or & or ~ or IDENT or operator")
#line 2630 "cplus.met"
            break;
#line 2630 "cplus.met"
    }
#line 2630 "cplus.met"
#line 2630 "cplus.met"
#line 2631 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2631 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2631 "cplus.met"
return((PPTREE) 0);
#line 2631 "cplus.met"

#line 2631 "cplus.met"
func_declarator_exit :
#line 2631 "cplus.met"

#line 2631 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2631 "cplus.met"
    _funcLevel--;
#line 2631 "cplus.met"
    return((PPTREE) -1) ;
#line 2631 "cplus.met"

#line 2631 "cplus.met"
func_declarator_ret :
#line 2631 "cplus.met"
    
#line 2631 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2631 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2631 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2631 "cplus.met"
    return _retValue ;
#line 2631 "cplus.met"
}
#line 2631 "cplus.met"

#line 2631 "cplus.met"
#line 3679 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3679 "cplus.met"
{
#line 3679 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3679 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3679 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3679 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3679 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3679 "cplus.met"
#line 3680 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3680 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3680 "cplus.met"
    }
#line 3680 "cplus.met"
#line 3681 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3681 "cplus.met"
    switch( lexEl.Value) {
#line 3681 "cplus.met"
#line 3681 "cplus.met"
        case ETOI : 
#line 3681 "cplus.met"
#line 3681 "cplus.met"
            break;
#line 3681 "cplus.met"
#line 3683 "cplus.met"
        case META : 
#line 3683 "cplus.met"
        case IDENT : 
#line 3683 "cplus.met"
#line 3683 "cplus.met"
            break;
#line 3683 "cplus.met"
        default :
#line 3683 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3683 "cplus.met"
            break;
#line 3683 "cplus.met"
    }
#line 3683 "cplus.met"
#line 3683 "cplus.met"
#line 3684 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3684 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3684 "cplus.met"
return((PPTREE) 0);
#line 3684 "cplus.met"

#line 3684 "cplus.met"
ident_mul_exit :
#line 3684 "cplus.met"

#line 3684 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3684 "cplus.met"
    _funcLevel--;
#line 3684 "cplus.met"
    return((PPTREE) -1) ;
#line 3684 "cplus.met"

#line 3684 "cplus.met"
ident_mul_ret :
#line 3684 "cplus.met"
    
#line 3684 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3684 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3684 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3684 "cplus.met"
    return _retValue ;
#line 3684 "cplus.met"
}
#line 3684 "cplus.met"

#line 3684 "cplus.met"
#line 1690 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1690 "cplus.met"
{
#line 1690 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1690 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1690 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1690 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1690 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1690 "cplus.met"
#line 1691 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1691 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1691 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1691 "cplus.met"
    } else {
#line 1691 "cplus.met"
        tokenAhead = 0 ;
#line 1691 "cplus.met"
    }
#line 1691 "cplus.met"
#line 1692 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1692 "cplus.met"
    switch( lexEl.Value) {
#line 1692 "cplus.met"
#line 1693 "cplus.met"
        case META : 
#line 1693 "cplus.met"
        case INCLUDE_SYS : 
#line 1693 "cplus.met"
#line 1694 "cplus.met"
#line 1695 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1695 "cplus.met"
#line 1696 "cplus.met"
            {
#line 1696 "cplus.met"
                PPTREE _ptTree0=0;
#line 1696 "cplus.met"
                {
#line 1696 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1696 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1696 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1696 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1696 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1696 "cplus.met"
                    } else {
#line 1696 "cplus.met"
                        tokenAhead = 0 ;
#line 1696 "cplus.met"
                    }
#line 1696 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1696 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1696 "cplus.met"
                }
#line 1696 "cplus.met"
                _retValue =_ptTree0;
#line 1696 "cplus.met"
                goto include_dir_ret;
#line 1696 "cplus.met"
            }
#line 1696 "cplus.met"
#line 1696 "cplus.met"
            break;
#line 1696 "cplus.met"
#line 1698 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1698 "cplus.met"
#line 1699 "cplus.met"
#line 1700 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1700 "cplus.met"
#line 1701 "cplus.met"
            {
#line 1701 "cplus.met"
                PPTREE _ptTree0=0;
#line 1701 "cplus.met"
                {
#line 1701 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1701 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1701 "cplus.met"
                    {
#line 1701 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1701 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1701 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1701 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1701 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1701 "cplus.met"
                        } else {
#line 1701 "cplus.met"
                            tokenAhead = 0 ;
#line 1701 "cplus.met"
                        }
#line 1701 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1701 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1701 "cplus.met"
                    }
#line 1701 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1701 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1701 "cplus.met"
                }
#line 1701 "cplus.met"
                _retValue =_ptTree0;
#line 1701 "cplus.met"
                goto include_dir_ret;
#line 1701 "cplus.met"
            }
#line 1701 "cplus.met"
#line 1701 "cplus.met"
            break;
#line 1701 "cplus.met"
        default :
#line 1701 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1701 "cplus.met"
            break;
#line 1701 "cplus.met"
    }
#line 1701 "cplus.met"
#line 1701 "cplus.met"
#line 1703 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1703 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1703 "cplus.met"
return((PPTREE) 0);
#line 1703 "cplus.met"

#line 1703 "cplus.met"
include_dir_exit :
#line 1703 "cplus.met"

#line 1703 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1703 "cplus.met"
    _funcLevel--;
#line 1703 "cplus.met"
    return((PPTREE) -1) ;
#line 1703 "cplus.met"

#line 1703 "cplus.met"
include_dir_ret :
#line 1703 "cplus.met"
    
#line 1703 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1703 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1703 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1703 "cplus.met"
    return _retValue ;
#line 1703 "cplus.met"
}
#line 1703 "cplus.met"

#line 1703 "cplus.met"
#line 2959 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2959 "cplus.met"
{
#line 2959 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2959 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2959 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2959 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2959 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2959 "cplus.met"
#line 2959 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2959 "cplus.met"
#line 2961 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2961 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2961 "cplus.met"
    }
#line 2961 "cplus.met"
#line 2962 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2962 "cplus.met"
#line 2963 "cplus.met"
        {
#line 2963 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2963 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2963 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2963 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2963 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2963 "cplus.met"
            }
#line 2963 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2963 "cplus.met"
            expTree=_ptRes0;
#line 2963 "cplus.met"
        }
#line 2963 "cplus.met"
    } 
#line 2963 "cplus.met"
#line 2964 "cplus.met"
    {
#line 2964 "cplus.met"
        _retValue = expTree ;
#line 2964 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2964 "cplus.met"
        
#line 2964 "cplus.met"
    }
#line 2964 "cplus.met"
#line 2964 "cplus.met"
#line 2964 "cplus.met"

#line 2965 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2965 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2965 "cplus.met"
return((PPTREE) 0);
#line 2965 "cplus.met"

#line 2965 "cplus.met"
inclusive_or_expression_exit :
#line 2965 "cplus.met"

#line 2965 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2965 "cplus.met"
    _funcLevel--;
#line 2965 "cplus.met"
    return((PPTREE) -1) ;
#line 2965 "cplus.met"

#line 2965 "cplus.met"
inclusive_or_expression_ret :
#line 2965 "cplus.met"
    
#line 2965 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2965 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2965 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2965 "cplus.met"
    return _retValue ;
#line 2965 "cplus.met"
}
#line 2965 "cplus.met"

#line 2965 "cplus.met"
#line 2714 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2714 "cplus.met"
{
#line 2714 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2714 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2714 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2714 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2714 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2714 "cplus.met"
#line 2714 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2714 "cplus.met"
#line 2714 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2714 "cplus.met"
#line 2716 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2716 "cplus.met"
    switch( lexEl.Value) {
#line 2716 "cplus.met"
#line 2720 "cplus.met"
        case AOUV : 
#line 2720 "cplus.met"
            tokenAhead = 0 ;
#line 2720 "cplus.met"
            CommTerm();
#line 2720 "cplus.met"
#line 2718 "cplus.met"
#line 2718 "cplus.met"
            _addlist1 = initList ;
#line 2718 "cplus.met"
#line 2719 "cplus.met"
            do {
#line 2719 "cplus.met"
#line 2720 "cplus.met"
                {
#line 2720 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2720 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2720 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2720 "cplus.met"
                    }
#line 2720 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2720 "cplus.met"
                }
#line 2720 "cplus.met"
#line 2720 "cplus.met"
                if (initList){
#line 2720 "cplus.met"
#line 2720 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2720 "cplus.met"
                } else {
#line 2720 "cplus.met"
#line 2720 "cplus.met"
                    initList = _addlist1 ;
#line 2720 "cplus.met"
                }
#line 2720 "cplus.met"
#line 2720 "cplus.met"
#line 2721 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2721 "cplus.met"
#line 2722 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2722 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2722 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2722 "cplus.met"
            } else {
#line 2722 "cplus.met"
                tokenAhead = 0 ;
#line 2722 "cplus.met"
            }
#line 2722 "cplus.met"
#line 2723 "cplus.met"
            {
#line 2723 "cplus.met"
                PPTREE _ptTree0=0;
#line 2723 "cplus.met"
                {
#line 2723 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2723 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2723 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2723 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2723 "cplus.met"
                }
#line 2723 "cplus.met"
                _retValue =_ptTree0;
#line 2723 "cplus.met"
                goto initializer_ret;
#line 2723 "cplus.met"
            }
#line 2723 "cplus.met"
#line 2723 "cplus.met"
            break;
#line 2723 "cplus.met"
#line 2726 "cplus.met"
        default : 
#line 2726 "cplus.met"
#line 2726 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 21, cplus)){
#line 2726 "cplus.met"
#line 2727 "cplus.met"
                {
#line 2727 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2727 "cplus.met"
                    {
#line 2727 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2727 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2727 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2727 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2727 "cplus.met"
                    }
#line 2727 "cplus.met"
                    _retValue =_ptTree0;
#line 2727 "cplus.met"
                    goto initializer_ret;
#line 2727 "cplus.met"
                }
#line 2727 "cplus.met"
            } else {
#line 2727 "cplus.met"
#line 2729 "cplus.met"
                {
#line 2729 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2729 "cplus.met"
                    {
#line 2729 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2729 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2729 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2729 "cplus.met"
                    }
#line 2729 "cplus.met"
                    _retValue =_ptTree0;
#line 2729 "cplus.met"
                    goto initializer_ret;
#line 2729 "cplus.met"
                }
#line 2729 "cplus.met"
            }
#line 2729 "cplus.met"
            break;
#line 2729 "cplus.met"
    }
#line 2729 "cplus.met"
#line 2729 "cplus.met"
#line 2730 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2730 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2730 "cplus.met"
return((PPTREE) 0);
#line 2730 "cplus.met"

#line 2730 "cplus.met"
initializer_exit :
#line 2730 "cplus.met"

#line 2730 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2730 "cplus.met"
    _funcLevel--;
#line 2730 "cplus.met"
    return((PPTREE) -1) ;
#line 2730 "cplus.met"

#line 2730 "cplus.met"
initializer_ret :
#line 2730 "cplus.met"
    
#line 2730 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2730 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2730 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2730 "cplus.met"
    return _retValue ;
#line 2730 "cplus.met"
}
#line 2730 "cplus.met"

#line 2730 "cplus.met"
#line 1793 "cplus.met"
PPTREE cplus::inline_namespace ( int error_free)
#line 1793 "cplus.met"
{
#line 1793 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1793 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1793 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1793 "cplus.met"
    int _Debug = TRACE_RULE("inline_namespace",TRACE_ENTER,(PPTREE)0);
#line 1793 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1793 "cplus.met"
#line 1794 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1794 "cplus.met"
    if (  !SEE_TOKEN( INLINE,"inline") || !(CommTerm(),1)) {
#line 1794 "cplus.met"
            TOKEN_EXIT(inline_namespace_exit,"inline")
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
        {
#line 1795 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1795 "cplus.met"
            _ptRes1= MakeTree(INLINE_NAMESPACE, 1);
#line 1795 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(name_space)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1795 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                PROG_EXIT(inline_namespace_exit,"inline_namespace")
#line 1795 "cplus.met"
            }
#line 1795 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1795 "cplus.met"
            _ptTree0=_ptRes1;
#line 1795 "cplus.met"
        }
#line 1795 "cplus.met"
        _retValue =_ptTree0;
#line 1795 "cplus.met"
        goto inline_namespace_ret;
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
inline_namespace_exit :
#line 1796 "cplus.met"

#line 1796 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_EXIT,(PPTREE)0);
#line 1796 "cplus.met"
    _funcLevel--;
#line 1796 "cplus.met"
    return((PPTREE) -1) ;
#line 1796 "cplus.met"

#line 1796 "cplus.met"
inline_namespace_ret :
#line 1796 "cplus.met"
    
#line 1796 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_RETURN,_retValue);
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
#line 1946 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1946 "cplus.met"
{
#line 1946 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1946 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1946 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1946 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1946 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1946 "cplus.met"
#line 1946 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1946 "cplus.met"
#line 1948 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 91, cplus))) && 
#line 1948 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 69, cplus)))) && 
#line 1948 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 89, cplus)))) && 
#line 1948 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 90, cplus)))){
#line 1948 "cplus.met"
#line 1949 "cplus.met"
        
#line 1949 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1949 "cplus.met"
        goto inside_declaration_exit;
#line 1949 "cplus.met"
#line 1949 "cplus.met"
    }
#line 1949 "cplus.met"
#line 1950 "cplus.met"
    {
#line 1950 "cplus.met"
        _retValue = retTree ;
#line 1950 "cplus.met"
        goto inside_declaration_ret;
#line 1950 "cplus.met"
        
#line 1950 "cplus.met"
    }
#line 1950 "cplus.met"
#line 1950 "cplus.met"
#line 1950 "cplus.met"

#line 1951 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1951 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1951 "cplus.met"
return((PPTREE) 0);
#line 1951 "cplus.met"

#line 1951 "cplus.met"
inside_declaration_exit :
#line 1951 "cplus.met"

#line 1951 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1951 "cplus.met"
    _funcLevel--;
#line 1951 "cplus.met"
    return((PPTREE) -1) ;
#line 1951 "cplus.met"

#line 1951 "cplus.met"
inside_declaration_ret :
#line 1951 "cplus.met"
    
#line 1951 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1951 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1951 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1951 "cplus.met"
    return _retValue ;
#line 1951 "cplus.met"
}
#line 1951 "cplus.met"

#line 1951 "cplus.met"
#line 1926 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1926 "cplus.met"
{
#line 1926 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1926 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1926 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1926 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1926 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1926 "cplus.met"
#line 1926 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1926 "cplus.met"
#line 1928 "cplus.met"
    {
#line 1928 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1928 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1928 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1928 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1928 "cplus.met"
        }
#line 1928 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1928 "cplus.met"
        otherTree=_ptRes0;
#line 1928 "cplus.met"
    }
#line 1928 "cplus.met"
#line 1929 "cplus.met"
    {
#line 1929 "cplus.met"
        PPTREE _ptTree0=0;
#line 1929 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1929 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1929 "cplus.met"
        }
#line 1929 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1929 "cplus.met"
    }
#line 1929 "cplus.met"
#line 1930 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1930 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1930 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1930 "cplus.met"
    } else {
#line 1930 "cplus.met"
        tokenAhead = 0 ;
#line 1930 "cplus.met"
    }
#line 1930 "cplus.met"
#line 1931 "cplus.met"
    {
#line 1931 "cplus.met"
        PPTREE _ptTree0=0;
#line 1931 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1931 "cplus.met"
        _retValue =_ptTree0;
#line 1931 "cplus.met"
        goto inside_declaration1_ret;
#line 1931 "cplus.met"
    }
#line 1931 "cplus.met"
#line 1931 "cplus.met"
#line 1931 "cplus.met"

#line 1932 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1932 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1932 "cplus.met"
return((PPTREE) 0);
#line 1932 "cplus.met"

#line 1932 "cplus.met"
inside_declaration1_exit :
#line 1932 "cplus.met"

#line 1932 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1932 "cplus.met"
    _funcLevel--;
#line 1932 "cplus.met"
    return((PPTREE) -1) ;
#line 1932 "cplus.met"

#line 1932 "cplus.met"
inside_declaration1_ret :
#line 1932 "cplus.met"
    
#line 1932 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1932 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1932 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1932 "cplus.met"
    return _retValue ;
#line 1932 "cplus.met"
}
#line 1932 "cplus.met"

#line 1932 "cplus.met"
#line 1934 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1934 "cplus.met"
{
#line 1934 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1934 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1934 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1934 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1934 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1934 "cplus.met"
#line 1934 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1934 "cplus.met"
#line 1936 "cplus.met"
    {
#line 1936 "cplus.met"
        PPTREE _ptRes0=0;
#line 1936 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1936 "cplus.met"
        otherTree=_ptRes0;
#line 1936 "cplus.met"
    }
#line 1936 "cplus.met"
#line 1937 "cplus.met"
    {
#line 1937 "cplus.met"
        PPTREE _ptTree0=0;
#line 1937 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 1937 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1937 "cplus.met"
        }
#line 1937 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1937 "cplus.met"
    }
#line 1937 "cplus.met"
#line 1938 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1938 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1938 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1938 "cplus.met"
    } else {
#line 1938 "cplus.met"
        tokenAhead = 0 ;
#line 1938 "cplus.met"
    }
#line 1938 "cplus.met"
#line 1939 "cplus.met"
    {
#line 1939 "cplus.met"
        PPTREE _ptTree0=0;
#line 1939 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1939 "cplus.met"
        _retValue =_ptTree0;
#line 1939 "cplus.met"
        goto inside_declaration2_ret;
#line 1939 "cplus.met"
    }
#line 1939 "cplus.met"
#line 1939 "cplus.met"
#line 1939 "cplus.met"

#line 1940 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1940 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1940 "cplus.met"
return((PPTREE) 0);
#line 1940 "cplus.met"

#line 1940 "cplus.met"
inside_declaration2_exit :
#line 1940 "cplus.met"

#line 1940 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1940 "cplus.met"
    _funcLevel--;
#line 1940 "cplus.met"
    return((PPTREE) -1) ;
#line 1940 "cplus.met"

#line 1940 "cplus.met"
inside_declaration2_ret :
#line 1940 "cplus.met"
    
#line 1940 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1940 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1940 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1940 "cplus.met"
    return _retValue ;
#line 1940 "cplus.met"
}
#line 1940 "cplus.met"

#line 1940 "cplus.met"
#line 1942 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1942 "cplus.met"
{
#line 1942 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1942 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1942 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1942 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1942 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1942 "cplus.met"
#line 1943 "cplus.met"
    
#line 1943 "cplus.met"
    LEX_EXIT ("",0);
#line 1943 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1943 "cplus.met"
#line 1943 "cplus.met"
#line 1943 "cplus.met"

#line 1944 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1944 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1944 "cplus.met"
return((PPTREE) 0);
#line 1944 "cplus.met"

#line 1944 "cplus.met"
inside_declaration_extension_exit :
#line 1944 "cplus.met"

#line 1944 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1944 "cplus.met"
    _funcLevel--;
#line 1944 "cplus.met"
    return((PPTREE) -1) ;
#line 1944 "cplus.met"

#line 1944 "cplus.met"
inside_declaration_extension_ret :
#line 1944 "cplus.met"
    
#line 1944 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1944 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1944 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1944 "cplus.met"
    return _retValue ;
#line 1944 "cplus.met"
}
#line 1944 "cplus.met"

#line 1944 "cplus.met"
#line 3674 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3674 "cplus.met"
{
#line 3674 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3674 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3674 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3674 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3674 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3674 "cplus.met"
#line 3675 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3675 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3675 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3675 "cplus.met"
    } else {
#line 3675 "cplus.met"
        tokenAhead = 0 ;
#line 3675 "cplus.met"
    }
#line 3675 "cplus.met"
#line 3676 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3676 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3676 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3676 "cplus.met"
    } else {
#line 3676 "cplus.met"
        tokenAhead = 0 ;
#line 3676 "cplus.met"
    }
#line 3676 "cplus.met"
#line 3676 "cplus.met"
#line 3676 "cplus.met"

#line 3677 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3677 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3677 "cplus.met"
return((PPTREE) 0);
#line 3677 "cplus.met"

#line 3677 "cplus.met"
label_beg_exit :
#line 3677 "cplus.met"

#line 3677 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3677 "cplus.met"
    _funcLevel--;
#line 3677 "cplus.met"
    return((PPTREE) -1) ;
#line 3677 "cplus.met"

#line 3677 "cplus.met"
label_beg_ret :
#line 3677 "cplus.met"
    
#line 3677 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3677 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3677 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3677 "cplus.met"
    return _retValue ;
#line 3677 "cplus.met"
}
#line 3677 "cplus.met"

#line 3677 "cplus.met"
#line 3606 "cplus.met"
PPTREE cplus::lambda ( int error_free)
#line 3606 "cplus.met"
{
#line 3606 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3606 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3606 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3606 "cplus.met"
    int _Debug = TRACE_RULE("lambda",TRACE_ENTER,(PPTREE)0);
#line 3606 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3606 "cplus.met"
#line 3606 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3606 "cplus.met"
#line 3606 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listCapture = (PPTREE) 0,listDecl = (PPTREE) 0;
#line 3606 "cplus.met"
#line 3608 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3608 "cplus.met"
    if (  !SEE_TOKEN( COUV,"[") || !(CommTerm(),1)) {
#line 3608 "cplus.met"
        MulFreeTree(5,_addlist1,_addlist2,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,"[")
#line 3608 "cplus.met"
    } else {
#line 3608 "cplus.met"
        tokenAhead = 0 ;
#line 3608 "cplus.met"
    }
#line 3608 "cplus.met"
#line 3609 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3609 "cplus.met"
#line 3610 "cplus.met"
#line 3611 "cplus.met"
        {
#line 3611 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3611 "cplus.met"
            _ptRes0= MakeTree(LAMBDA, 5);
#line 3611 "cplus.met"
            {
#line 3611 "cplus.met"
                PPTREE _ptRes1=0;
#line 3611 "cplus.met"
                _ptRes1= MakeTree(CAPTURE_ALL, 0);
#line 3611 "cplus.met"
                _ptTree0=_ptRes1;
#line 3611 "cplus.met"
            }
#line 3611 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3611 "cplus.met"
            retTree=_ptRes0;
#line 3611 "cplus.met"
        }
#line 3611 "cplus.met"
#line 3611 "cplus.met"
#line 3611 "cplus.met"
    } else {
#line 3611 "cplus.met"
#line 3614 "cplus.met"
#line 3615 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( CFER,"]"))){
#line 3615 "cplus.met"
#line 3616 "cplus.met"
#line 3616 "cplus.met"
            _addlist2 = listCapture ;
#line 3616 "cplus.met"
#line 3617 "cplus.met"
            do {
#line 3617 "cplus.met"
#line 3618 "cplus.met"
#line 3619 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3619 "cplus.met"
                switch( lexEl.Value) {
#line 3619 "cplus.met"
#line 3621 "cplus.met"
                    case ETCO : 
#line 3621 "cplus.met"
                        tokenAhead = 0 ;
#line 3621 "cplus.met"
                        CommTerm();
#line 3621 "cplus.met"
#line 3621 "cplus.met"
                        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 3621 "cplus.met"
#line 3622 "cplus.met"
#line 3622 "cplus.met"
                            {
#line 3622 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3622 "cplus.met"
                                {
#line 3622 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3622 "cplus.met"
                                    _ptRes1= MakeTree(TYP_REF, 1);
#line 3622 "cplus.met"
                                    {
#line 3622 "cplus.met"
                                        PPTREE _ptTree2=0,_ptRes2=0;
#line 3622 "cplus.met"
                                        _ptRes2= MakeTree(IDENT, 1);
#line 3622 "cplus.met"
                                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3622 "cplus.met"
                                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 3622 "cplus.met"
                                            MulFreeTree(10,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,listCapture,listDecl,retTree);
                                            TOKEN_EXIT(lambda_exit,"IDENT")
#line 3622 "cplus.met"
                                        } else {
#line 3622 "cplus.met"
                                            tokenAhead = 0 ;
#line 3622 "cplus.met"
                                        }
#line 3622 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 3622 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 3622 "cplus.met"
                                    }
#line 3622 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3622 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 3622 "cplus.met"
                                }
#line 3622 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 3622 "cplus.met"
                            }
#line 3622 "cplus.met"
#line 3622 "cplus.met"
                            if (listCapture){
#line 3622 "cplus.met"
#line 3622 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 3622 "cplus.met"
                            } else {
#line 3622 "cplus.met"
#line 3622 "cplus.met"
                                listCapture = _addlist2 ;
#line 3622 "cplus.met"
                            }
#line 3622 "cplus.met"
                        } else {
#line 3622 "cplus.met"
#line 3624 "cplus.met"
#line 3624 "cplus.met"
                            {
#line 3624 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3624 "cplus.met"
                                {
#line 3624 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3624 "cplus.met"
                                    _ptRes1= MakeTree(TYP_REF, 1);
#line 3624 "cplus.met"
                                    {
#line 3624 "cplus.met"
                                        PPTREE _ptRes2=0;
#line 3624 "cplus.met"
                                        _ptRes2= MakeTree(IDENT, 1);
#line 3624 "cplus.met"
                                        ReplaceTree(_ptRes2, 1, MakeString (""));
#line 3624 "cplus.met"
                                        _ptTree1=_ptRes2;
#line 3624 "cplus.met"
                                    }
#line 3624 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3624 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 3624 "cplus.met"
                                }
#line 3624 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 3624 "cplus.met"
                            }
#line 3624 "cplus.met"
#line 3624 "cplus.met"
                            if (listCapture){
#line 3624 "cplus.met"
#line 3624 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 3624 "cplus.met"
                            } else {
#line 3624 "cplus.met"
#line 3624 "cplus.met"
                                listCapture = _addlist2 ;
#line 3624 "cplus.met"
                            }
#line 3624 "cplus.met"
                        }
#line 3624 "cplus.met"
                        break;
#line 3624 "cplus.met"
#line 3625 "cplus.met"
                    default : 
#line 3625 "cplus.met"
#line 3625 "cplus.met"
#line 3625 "cplus.met"
                        {
#line 3625 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3625 "cplus.met"
                            {
#line 3625 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3625 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3625 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3625 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3625 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,listCapture,listDecl,retTree);
                                    TOKEN_EXIT(lambda_exit,"IDENT")
#line 3625 "cplus.met"
                                } else {
#line 3625 "cplus.met"
                                    tokenAhead = 0 ;
#line 3625 "cplus.met"
                                }
#line 3625 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3625 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3625 "cplus.met"
                            }
#line 3625 "cplus.met"
                            _addlist2 =AddList(_addlist2 , _ptTree0);
#line 3625 "cplus.met"
                        }
#line 3625 "cplus.met"
#line 3625 "cplus.met"
                        if (listCapture){
#line 3625 "cplus.met"
#line 3625 "cplus.met"
                            _addlist2 = SonTree (_addlist2 ,2 );
#line 3625 "cplus.met"
                        } else {
#line 3625 "cplus.met"
#line 3625 "cplus.met"
                            listCapture = _addlist2 ;
#line 3625 "cplus.met"
                        }
#line 3625 "cplus.met"
                        break;
#line 3625 "cplus.met"
                }
#line 3625 "cplus.met"
#line 3625 "cplus.met"
#line 3625 "cplus.met"
#line 3628 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3628 "cplus.met"
#line 3629 "cplus.met"
            {
#line 3629 "cplus.met"
                PPTREE _ptRes0=0;
#line 3629 "cplus.met"
                _ptRes0= MakeTree(LAMBDA, 5);
#line 3629 "cplus.met"
                ReplaceTree(_ptRes0, 1, listCapture );
#line 3629 "cplus.met"
                retTree=_ptRes0;
#line 3629 "cplus.met"
            }
#line 3629 "cplus.met"
#line 3629 "cplus.met"
#line 3629 "cplus.met"
        } else {
#line 3629 "cplus.met"
#line 3632 "cplus.met"
            {
#line 3632 "cplus.met"
                PPTREE _ptRes0=0;
#line 3632 "cplus.met"
                _ptRes0= MakeTree(LAMBDA, 5);
#line 3632 "cplus.met"
                retTree=_ptRes0;
#line 3632 "cplus.met"
            }
#line 3632 "cplus.met"
        }
#line 3632 "cplus.met"
#line 3632 "cplus.met"
    }
#line 3632 "cplus.met"
#line 3634 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3634 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3634 "cplus.met"
        MulFreeTree(5,_addlist1,_addlist2,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,"]")
#line 3634 "cplus.met"
    } else {
#line 3634 "cplus.met"
        tokenAhead = 0 ;
#line 3634 "cplus.met"
    }
#line 3634 "cplus.met"
#line 3635 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3635 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3635 "cplus.met"
        MulFreeTree(5,_addlist1,_addlist2,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,"(")
#line 3635 "cplus.met"
    } else {
#line 3635 "cplus.met"
        tokenAhead = 0 ;
#line 3635 "cplus.met"
    }
#line 3635 "cplus.met"
#line 3636 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3636 "cplus.met"
#line 3637 "cplus.met"
#line 3638 "cplus.met"
        {
#line 3638 "cplus.met"
            PPTREE _ptTree0=0;
#line 3638 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 3638 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,listCapture,listDecl,retTree);
                PROG_EXIT(lambda_exit,"lambda")
#line 3638 "cplus.met"
            }
#line 3638 "cplus.met"
            listDecl =AddList(listDecl , _ptTree0);
#line 3638 "cplus.met"
        }
#line 3638 "cplus.met"
#line 3638 "cplus.met"
        _addlist1 = listDecl ;
#line 3638 "cplus.met"
#line 3639 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 3639 "cplus.met"
#line 3640 "cplus.met"
#line 3640 "cplus.met"
            {
#line 3640 "cplus.met"
                PPTREE _ptTree0=0;
#line 3640 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 3640 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,listCapture,listDecl,retTree);
                    PROG_EXIT(lambda_exit,"lambda")
#line 3640 "cplus.met"
                }
#line 3640 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3640 "cplus.met"
            }
#line 3640 "cplus.met"
#line 3640 "cplus.met"
            if (listDecl){
#line 3640 "cplus.met"
#line 3640 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3640 "cplus.met"
            } else {
#line 3640 "cplus.met"
#line 3640 "cplus.met"
                listDecl = _addlist1 ;
#line 3640 "cplus.met"
            }
#line 3640 "cplus.met"
        } 
#line 3640 "cplus.met"
#line 3641 "cplus.met"
        ReplaceTree(retTree ,2 ,listDecl );
#line 3641 "cplus.met"
#line 3641 "cplus.met"
#line 3641 "cplus.met"
    }
#line 3641 "cplus.met"
#line 3643 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3643 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3643 "cplus.met"
        MulFreeTree(5,_addlist1,_addlist2,listCapture,listDecl,retTree);
        TOKEN_EXIT(lambda_exit,")")
#line 3643 "cplus.met"
    } else {
#line 3643 "cplus.met"
        tokenAhead = 0 ;
#line 3643 "cplus.met"
    }
#line 3643 "cplus.met"
#line 3644 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TIRESUPE,"->") && (tokenAhead = 0,CommTerm(),1)){
#line 3644 "cplus.met"
#line 3645 "cplus.met"
        {
#line 3645 "cplus.met"
            PPTREE _ptTree0=0;
#line 3645 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 3645 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,listCapture,listDecl,retTree);
                PROG_EXIT(lambda_exit,"lambda")
#line 3645 "cplus.met"
            }
#line 3645 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3645 "cplus.met"
        }
#line 3645 "cplus.met"
#line 3645 "cplus.met"
    }
#line 3645 "cplus.met"
#line 3646 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(MUTABLE,"mutable") && (tokenAhead = 0,CommTerm(),1)){
#line 3646 "cplus.met"
#line 3647 "cplus.met"
        {
#line 3647 "cplus.met"
            PPTREE _ptTree0=0;
#line 3647 "cplus.met"
            {
#line 3647 "cplus.met"
                PPTREE _ptRes1=0;
#line 3647 "cplus.met"
                _ptRes1= MakeTree(MUTABLE, 0);
#line 3647 "cplus.met"
                _ptTree0=_ptRes1;
#line 3647 "cplus.met"
            }
#line 3647 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 3647 "cplus.met"
        }
#line 3647 "cplus.met"
#line 3647 "cplus.met"
    }
#line 3647 "cplus.met"
#line 3648 "cplus.met"
    {
#line 3648 "cplus.met"
        PPTREE _ptTree0=0;
#line 3648 "cplus.met"
        {
#line 3648 "cplus.met"
            PPTREE _ptTree1=0;
#line 3648 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3648 "cplus.met"
                MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,listCapture,listDecl,retTree);
                PROG_EXIT(lambda_exit,"lambda")
#line 3648 "cplus.met"
            }
#line 3648 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 5 , _ptTree1);
#line 3648 "cplus.met"
        }
#line 3648 "cplus.met"
        _retValue =_ptTree0;
#line 3648 "cplus.met"
        goto lambda_ret;
#line 3648 "cplus.met"
    }
#line 3648 "cplus.met"
#line 3648 "cplus.met"
#line 3648 "cplus.met"

#line 3649 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3649 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3649 "cplus.met"
return((PPTREE) 0);
#line 3649 "cplus.met"

#line 3649 "cplus.met"
lambda_exit :
#line 3649 "cplus.met"

#line 3649 "cplus.met"
    _Debug = TRACE_RULE("lambda",TRACE_EXIT,(PPTREE)0);
#line 3649 "cplus.met"
    _funcLevel--;
#line 3649 "cplus.met"
    return((PPTREE) -1) ;
#line 3649 "cplus.met"

#line 3649 "cplus.met"
lambda_ret :
#line 3649 "cplus.met"
    
#line 3649 "cplus.met"
    _Debug = TRACE_RULE("lambda",TRACE_RETURN,_retValue);
#line 3649 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3649 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3649 "cplus.met"
    return _retValue ;
#line 3649 "cplus.met"
}
#line 3649 "cplus.met"

#line 3649 "cplus.met"
#line 1141 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 1141 "cplus.met"
{
#line 1141 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1141 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1141 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1141 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 1141 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1141 "cplus.met"
#line 1141 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1141 "cplus.met"
#line 1141 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 1141 "cplus.met"
#line 1143 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1143 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 1143 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 1143 "cplus.met"
    } else {
#line 1143 "cplus.met"
        tokenAhead = 0 ;
#line 1143 "cplus.met"
    }
#line 1143 "cplus.met"
#line 1144 "cplus.met"
    {
#line 1144 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1144 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 1144 "cplus.met"
        {
#line 1144 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1144 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1144 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1144 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1144 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 1144 "cplus.met"
            } else {
#line 1144 "cplus.met"
                tokenAhead = 0 ;
#line 1144 "cplus.met"
            }
#line 1144 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1144 "cplus.met"
            _ptTree0=_ptRes1;
#line 1144 "cplus.met"
        }
#line 1144 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1144 "cplus.met"
        retTree=_ptRes0;
#line 1144 "cplus.met"
    }
#line 1144 "cplus.met"
#line 1145 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1145 "cplus.met"
    switch( lexEl.Value) {
#line 1145 "cplus.met"
#line 1148 "cplus.met"
        case AOUV : 
#line 1148 "cplus.met"
            tokenAhead = 0 ;
#line 1148 "cplus.met"
            CommTerm();
#line 1148 "cplus.met"
#line 1147 "cplus.met"
#line 1147 "cplus.met"
            _addlist1 = list ;
#line 1147 "cplus.met"
#line 1148 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 69, cplus)) { 
#line 1148 "cplus.met"
#line 1149 "cplus.met"
#line 1149 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 1149 "cplus.met"
#line 1149 "cplus.met"
                if (list){
#line 1149 "cplus.met"
#line 1149 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1149 "cplus.met"
                } else {
#line 1149 "cplus.met"
#line 1149 "cplus.met"
                    list = _addlist1 ;
#line 1149 "cplus.met"
                }
#line 1149 "cplus.met"
            } 
#line 1149 "cplus.met"
#line 1150 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1150 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1150 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1150 "cplus.met"
            } else {
#line 1150 "cplus.met"
                tokenAhead = 0 ;
#line 1150 "cplus.met"
            }
#line 1150 "cplus.met"
#line 1151 "cplus.met"
            {
#line 1151 "cplus.met"
                PPTREE _ptTree0=0;
#line 1151 "cplus.met"
                {
#line 1151 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1151 "cplus.met"
                    {
#line 1151 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1151 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1151 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1151 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1151 "cplus.met"
                    }
#line 1151 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1151 "cplus.met"
                }
#line 1151 "cplus.met"
                _retValue =_ptTree0;
#line 1151 "cplus.met"
                goto linkage_specification_ret;
#line 1151 "cplus.met"
            }
#line 1151 "cplus.met"
#line 1151 "cplus.met"
            break;
#line 1151 "cplus.met"
#line 1153 "cplus.met"
        default : 
#line 1153 "cplus.met"
#line 1153 "cplus.met"
            {
#line 1153 "cplus.met"
                PPTREE _ptTree0=0;
#line 1153 "cplus.met"
                {
#line 1153 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1153 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1153 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1153 "cplus.met"
                    }
#line 1153 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1153 "cplus.met"
                }
#line 1153 "cplus.met"
                _retValue =_ptTree0;
#line 1153 "cplus.met"
                goto linkage_specification_ret;
#line 1153 "cplus.met"
            }
#line 1153 "cplus.met"
            break;
#line 1153 "cplus.met"
    }
#line 1153 "cplus.met"
#line 1153 "cplus.met"
#line 1154 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1154 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1154 "cplus.met"
return((PPTREE) 0);
#line 1154 "cplus.met"

#line 1154 "cplus.met"
linkage_specification_exit :
#line 1154 "cplus.met"

#line 1154 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1154 "cplus.met"
    _funcLevel--;
#line 1154 "cplus.met"
    return((PPTREE) -1) ;
#line 1154 "cplus.met"

#line 1154 "cplus.met"
linkage_specification_ret :
#line 1154 "cplus.met"
    
#line 1154 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1154 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1154 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1154 "cplus.met"
    return _retValue ;
#line 1154 "cplus.met"
}
#line 1154 "cplus.met"

#line 1154 "cplus.met"
#line 2951 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2951 "cplus.met"
{
#line 2951 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2951 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2951 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2951 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2951 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2951 "cplus.met"
#line 2951 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2951 "cplus.met"
#line 2953 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2953 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2953 "cplus.met"
    }
#line 2953 "cplus.met"
#line 2954 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2954 "cplus.met"
#line 2955 "cplus.met"
        {
#line 2955 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2955 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2955 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2955 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2955 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2955 "cplus.met"
            }
#line 2955 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2955 "cplus.met"
            expTree=_ptRes0;
#line 2955 "cplus.met"
        }
#line 2955 "cplus.met"
    } 
#line 2955 "cplus.met"
#line 2956 "cplus.met"
    {
#line 2956 "cplus.met"
        _retValue = expTree ;
#line 2956 "cplus.met"
        goto logical_and_expression_ret;
#line 2956 "cplus.met"
        
#line 2956 "cplus.met"
    }
#line 2956 "cplus.met"
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
logical_and_expression_exit :
#line 2957 "cplus.met"

#line 2957 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2957 "cplus.met"
    _funcLevel--;
#line 2957 "cplus.met"
    return((PPTREE) -1) ;
#line 2957 "cplus.met"

#line 2957 "cplus.met"
logical_and_expression_ret :
#line 2957 "cplus.met"
    
#line 2957 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
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
#line 2943 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2943 "cplus.met"
{
#line 2943 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2943 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2943 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2943 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2943 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2943 "cplus.met"
#line 2943 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2943 "cplus.met"
#line 2945 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2945 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2945 "cplus.met"
    }
#line 2945 "cplus.met"
#line 2946 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2946 "cplus.met"
#line 2947 "cplus.met"
        {
#line 2947 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2947 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2947 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2947 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2947 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2947 "cplus.met"
            }
#line 2947 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2947 "cplus.met"
            expTree=_ptRes0;
#line 2947 "cplus.met"
        }
#line 2947 "cplus.met"
    } 
#line 2947 "cplus.met"
#line 2948 "cplus.met"
    {
#line 2948 "cplus.met"
        _retValue = expTree ;
#line 2948 "cplus.met"
        goto logical_or_expression_ret;
#line 2948 "cplus.met"
        
#line 2948 "cplus.met"
    }
#line 2948 "cplus.met"
#line 2948 "cplus.met"
#line 2948 "cplus.met"

#line 2949 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2949 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2949 "cplus.met"
return((PPTREE) 0);
#line 2949 "cplus.met"

#line 2949 "cplus.met"
logical_or_expression_exit :
#line 2949 "cplus.met"

#line 2949 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2949 "cplus.met"
    _funcLevel--;
#line 2949 "cplus.met"
    return((PPTREE) -1) ;
#line 2949 "cplus.met"

#line 2949 "cplus.met"
logical_or_expression_ret :
#line 2949 "cplus.met"
    
#line 2949 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2949 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2949 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2949 "cplus.met"
    return _retValue ;
#line 2949 "cplus.met"
}
#line 2949 "cplus.met"

#line 2949 "cplus.met"
