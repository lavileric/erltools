/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3592 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3592 "cplus.met"
{
#line 3592 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3592 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3592 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3592 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3592 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3592 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3592 "cplus.met"
#line 3592 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3592 "cplus.met"
#line 3594 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3594 "cplus.met"
    switch( lexEl.Value) {
#line 3594 "cplus.met"
#line 3595 "cplus.met"
        case BREAK : 
#line 3595 "cplus.met"
            tokenAhead = 0 ;
#line 3595 "cplus.met"
            CommTerm();
#line 3595 "cplus.met"
#line 3596 "cplus.met"
#line 3597 "cplus.met"
            {
#line 3597 "cplus.met"
                PPTREE _ptRes0=0;
#line 3597 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3597 "cplus.met"
                statTree=_ptRes0;
#line 3597 "cplus.met"
            }
#line 3597 "cplus.met"
#line 3598 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3598 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3598 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3598 "cplus.met"
            } else {
#line 3598 "cplus.met"
                tokenAhead = 0 ;
#line 3598 "cplus.met"
            }
#line 3598 "cplus.met"
#line 3598 "cplus.met"
            break;
#line 3598 "cplus.met"
#line 3600 "cplus.met"
        case CONTINUE : 
#line 3600 "cplus.met"
            tokenAhead = 0 ;
#line 3600 "cplus.met"
            CommTerm();
#line 3600 "cplus.met"
#line 3601 "cplus.met"
#line 3602 "cplus.met"
            {
#line 3602 "cplus.met"
                PPTREE _ptRes0=0;
#line 3602 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3602 "cplus.met"
                statTree=_ptRes0;
#line 3602 "cplus.met"
            }
#line 3602 "cplus.met"
#line 3603 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3603 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3603 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3603 "cplus.met"
            } else {
#line 3603 "cplus.met"
                tokenAhead = 0 ;
#line 3603 "cplus.met"
            }
#line 3603 "cplus.met"
#line 3603 "cplus.met"
            break;
#line 3603 "cplus.met"
#line 3605 "cplus.met"
        case DO : 
#line 3605 "cplus.met"
            tokenAhead = 0 ;
#line 3605 "cplus.met"
            CommTerm();
#line 3605 "cplus.met"
#line 3606 "cplus.met"
#line 3607 "cplus.met"
            {
#line 3607 "cplus.met"
                switchContext = 0 ;
#line 3607 "cplus.met"
#line 3608 "cplus.met"
                {
#line 3608 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3608 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3608 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3608 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3608 "cplus.met"
                    }
#line 3608 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3608 "cplus.met"
                    statTree=_ptRes0;
#line 3608 "cplus.met"
                }
#line 3608 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3608 "cplus.met"
            }
#line 3608 "cplus.met"
#line 3609 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3609 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3609 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3609 "cplus.met"
            } else {
#line 3609 "cplus.met"
                tokenAhead = 0 ;
#line 3609 "cplus.met"
            }
#line 3609 "cplus.met"
#line 3610 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3610 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3610 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3610 "cplus.met"
            } else {
#line 3610 "cplus.met"
                tokenAhead = 0 ;
#line 3610 "cplus.met"
            }
#line 3610 "cplus.met"
#line 3611 "cplus.met"
            {
#line 3611 "cplus.met"
                PPTREE _ptTree0=0;
#line 3611 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3611 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3611 "cplus.met"
                }
#line 3611 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3611 "cplus.met"
            }
#line 3611 "cplus.met"
#line 3612 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3612 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3612 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3612 "cplus.met"
            } else {
#line 3612 "cplus.met"
                tokenAhead = 0 ;
#line 3612 "cplus.met"
            }
#line 3612 "cplus.met"
#line 3613 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3613 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3613 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3613 "cplus.met"
            } else {
#line 3613 "cplus.met"
                tokenAhead = 0 ;
#line 3613 "cplus.met"
            }
#line 3613 "cplus.met"
#line 3613 "cplus.met"
            break;
#line 3613 "cplus.met"
#line 3615 "cplus.met"
        case AOUV : 
#line 3615 "cplus.met"
#line 3615 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3615 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3615 "cplus.met"
            }
#line 3615 "cplus.met"
            break;
#line 3615 "cplus.met"
#line 3616 "cplus.met"
        case FOR : 
#line 3616 "cplus.met"
            tokenAhead = 0 ;
#line 3616 "cplus.met"
            CommTerm();
#line 3616 "cplus.met"
#line 3616 "cplus.met"
            {
#line 3616 "cplus.met"
                PPTREE _ptTree0=0;
#line 3616 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 3616 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3616 "cplus.met"
                }
#line 3616 "cplus.met"
                _retValue =_ptTree0;
#line 3616 "cplus.met"
                goto statement_ret;
#line 3616 "cplus.met"
            }
#line 3616 "cplus.met"
            break;
#line 3616 "cplus.met"
#line 3617 "cplus.met"
        case GOTO : 
#line 3617 "cplus.met"
            tokenAhead = 0 ;
#line 3617 "cplus.met"
            CommTerm();
#line 3617 "cplus.met"
#line 3618 "cplus.met"
#line 3619 "cplus.met"
            {
#line 3619 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3619 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3619 "cplus.met"
                {
#line 3619 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3619 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3619 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3619 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3619 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3619 "cplus.met"
                    } else {
#line 3619 "cplus.met"
                        tokenAhead = 0 ;
#line 3619 "cplus.met"
                    }
#line 3619 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3619 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3619 "cplus.met"
                }
#line 3619 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3619 "cplus.met"
                statTree=_ptRes0;
#line 3619 "cplus.met"
            }
#line 3619 "cplus.met"
#line 3620 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3620 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3620 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3620 "cplus.met"
            } else {
#line 3620 "cplus.met"
                tokenAhead = 0 ;
#line 3620 "cplus.met"
            }
#line 3620 "cplus.met"
#line 3620 "cplus.met"
            break;
#line 3620 "cplus.met"
#line 3622 "cplus.met"
        case IF : 
#line 3622 "cplus.met"
            tokenAhead = 0 ;
#line 3622 "cplus.met"
            CommTerm();
#line 3622 "cplus.met"
#line 3623 "cplus.met"
#line 3624 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CONSTEVAL,"consteval") && (tokenAhead = 0,CommTerm(),1)){
#line 3624 "cplus.met"
#line 3625 "cplus.met"
                {
#line 3625 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3625 "cplus.met"
                    _ptRes0= MakeTree(IF, 3);
#line 3625 "cplus.met"
                    {
#line 3625 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3625 "cplus.met"
                        _ptRes1= MakeTree(CONSTEVAL, 0);
#line 3625 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3625 "cplus.met"
                    }
#line 3625 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3625 "cplus.met"
                    statTree=_ptRes0;
#line 3625 "cplus.met"
                }
#line 3625 "cplus.met"
            } else {
#line 3625 "cplus.met"
#line 3627 "cplus.met"
#line 3628 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3628 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3628 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,"(")
#line 3628 "cplus.met"
                } else {
#line 3628 "cplus.met"
                    tokenAhead = 0 ;
#line 3628 "cplus.met"
                }
#line 3628 "cplus.met"
#line 3629 "cplus.met"
                {
#line 3629 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3629 "cplus.met"
                    _ptRes0= MakeTree(IF, 3);
#line 3629 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3629 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3629 "cplus.met"
                    }
#line 3629 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3629 "cplus.met"
                    statTree=_ptRes0;
#line 3629 "cplus.met"
                }
#line 3629 "cplus.met"
#line 3630 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3630 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3630 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,")")
#line 3630 "cplus.met"
                } else {
#line 3630 "cplus.met"
                    tokenAhead = 0 ;
#line 3630 "cplus.met"
                }
#line 3630 "cplus.met"
#line 3630 "cplus.met"
            }
#line 3630 "cplus.met"
#line 3632 "cplus.met"
            {
#line 3632 "cplus.met"
                switchContext = 0 ;
#line 3632 "cplus.met"
#line 3633 "cplus.met"
                {
#line 3633 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3633 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3633 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3633 "cplus.met"
                    }
#line 3633 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3633 "cplus.met"
                }
#line 3633 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3633 "cplus.met"
            }
#line 3633 "cplus.met"
#line 3634 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3634 "cplus.met"
#line 3635 "cplus.met"
                {
#line 3635 "cplus.met"
                    switchContext = 0 ;
#line 3635 "cplus.met"
#line 3636 "cplus.met"
                    {
#line 3636 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3636 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3636 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3636 "cplus.met"
                        }
#line 3636 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3636 "cplus.met"
                    }
#line 3636 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3636 "cplus.met"
                }
#line 3636 "cplus.met"
            }
#line 3636 "cplus.met"
#line 3636 "cplus.met"
            break;
#line 3636 "cplus.met"
#line 3638 "cplus.met"
        case PVIR : 
#line 3638 "cplus.met"
            tokenAhead = 0 ;
#line 3638 "cplus.met"
            CommTerm();
#line 3638 "cplus.met"
#line 3638 "cplus.met"
            {
#line 3638 "cplus.met"
                PPTREE _ptRes0=0;
#line 3638 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3638 "cplus.met"
                statTree=_ptRes0;
#line 3638 "cplus.met"
            }
#line 3638 "cplus.met"
            break;
#line 3638 "cplus.met"
#line 3639 "cplus.met"
        case RETURN : 
#line 3639 "cplus.met"
            tokenAhead = 0 ;
#line 3639 "cplus.met"
            CommTerm();
#line 3639 "cplus.met"
#line 3640 "cplus.met"
#line 3641 "cplus.met"
            {
#line 3641 "cplus.met"
                PPTREE _ptRes0=0;
#line 3641 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3641 "cplus.met"
                statTree=_ptRes0;
#line 3641 "cplus.met"
            }
#line 3641 "cplus.met"
#line 3642 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3642 "cplus.met"
#line 3643 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3643 "cplus.met"
#line 3643 "cplus.met"
            }
#line 3643 "cplus.met"
#line 3644 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3644 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3644 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3644 "cplus.met"
            } else {
#line 3644 "cplus.met"
                tokenAhead = 0 ;
#line 3644 "cplus.met"
            }
#line 3644 "cplus.met"
#line 3644 "cplus.met"
            break;
#line 3644 "cplus.met"
#line 3646 "cplus.met"
        case SWITCH : 
#line 3646 "cplus.met"
            tokenAhead = 0 ;
#line 3646 "cplus.met"
            CommTerm();
#line 3646 "cplus.met"
#line 3647 "cplus.met"
#line 3648 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3648 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3648 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3648 "cplus.met"
            } else {
#line 3648 "cplus.met"
                tokenAhead = 0 ;
#line 3648 "cplus.met"
            }
#line 3648 "cplus.met"
#line 3649 "cplus.met"
            {
#line 3649 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3649 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3649 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3649 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3649 "cplus.met"
                }
#line 3649 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3649 "cplus.met"
                statTree=_ptRes0;
#line 3649 "cplus.met"
            }
#line 3649 "cplus.met"
#line 3650 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3650 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3650 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3650 "cplus.met"
            } else {
#line 3650 "cplus.met"
                tokenAhead = 0 ;
#line 3650 "cplus.met"
            }
#line 3650 "cplus.met"
#line 3651 "cplus.met"
            {
#line 3651 "cplus.met"
                switchContext = 0 ;
#line 3651 "cplus.met"
#line 3652 "cplus.met"
                {
#line 3652 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3652 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 151, cplus))== (PPTREE) -1 ) {
#line 3652 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3652 "cplus.met"
                    }
#line 3652 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3652 "cplus.met"
                }
#line 3652 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3652 "cplus.met"
            }
#line 3652 "cplus.met"
#line 3652 "cplus.met"
            break;
#line 3652 "cplus.met"
#line 3654 "cplus.met"
        case WHILE : 
#line 3654 "cplus.met"
            tokenAhead = 0 ;
#line 3654 "cplus.met"
            CommTerm();
#line 3654 "cplus.met"
#line 3655 "cplus.met"
#line 3656 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3656 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3656 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3656 "cplus.met"
            } else {
#line 3656 "cplus.met"
                tokenAhead = 0 ;
#line 3656 "cplus.met"
            }
#line 3656 "cplus.met"
#line 3657 "cplus.met"
            {
#line 3657 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3657 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3657 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3657 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3657 "cplus.met"
                }
#line 3657 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3657 "cplus.met"
                statTree=_ptRes0;
#line 3657 "cplus.met"
            }
#line 3657 "cplus.met"
#line 3658 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3658 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3658 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3658 "cplus.met"
            } else {
#line 3658 "cplus.met"
                tokenAhead = 0 ;
#line 3658 "cplus.met"
            }
#line 3658 "cplus.met"
#line 3659 "cplus.met"
            {
#line 3659 "cplus.met"
                switchContext = 0 ;
#line 3659 "cplus.met"
#line 3660 "cplus.met"
                {
#line 3660 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3660 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3660 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3660 "cplus.met"
                    }
#line 3660 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3660 "cplus.met"
                }
#line 3660 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3660 "cplus.met"
            }
#line 3660 "cplus.met"
#line 3660 "cplus.met"
            break;
#line 3660 "cplus.met"
#line 3662 "cplus.met"
        case FORALLSONS : 
#line 3662 "cplus.met"
            tokenAhead = 0 ;
#line 3662 "cplus.met"
            CommTerm();
#line 3662 "cplus.met"
#line 3663 "cplus.met"
#line 3664 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3664 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3664 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3664 "cplus.met"
            } else {
#line 3664 "cplus.met"
                tokenAhead = 0 ;
#line 3664 "cplus.met"
            }
#line 3664 "cplus.met"
#line 3665 "cplus.met"
            {
#line 3665 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3665 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3665 "cplus.met"
                {
#line 3665 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3665 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3665 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3665 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3665 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3665 "cplus.met"
                    } else {
#line 3665 "cplus.met"
                        tokenAhead = 0 ;
#line 3665 "cplus.met"
                    }
#line 3665 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3665 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3665 "cplus.met"
                }
#line 3665 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3665 "cplus.met"
                statTree=_ptRes0;
#line 3665 "cplus.met"
            }
#line 3665 "cplus.met"
#line 3666 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3666 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3666 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3666 "cplus.met"
            } else {
#line 3666 "cplus.met"
                tokenAhead = 0 ;
#line 3666 "cplus.met"
            }
#line 3666 "cplus.met"
#line 3667 "cplus.met"
            {
#line 3667 "cplus.met"
                switchContext = 0 ;
#line 3667 "cplus.met"
#line 3668 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 147, cplus))){
#line 3668 "cplus.met"
#line 3669 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3669 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3669 "cplus.met"
                    }
#line 3669 "cplus.met"
                }
#line 3669 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3669 "cplus.met"
            }
#line 3669 "cplus.met"
#line 3670 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3670 "cplus.met"
#line 3671 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3671 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3671 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3671 "cplus.met"
            } else {
#line 3671 "cplus.met"
                tokenAhead = 0 ;
#line 3671 "cplus.met"
            }
#line 3671 "cplus.met"
#line 3671 "cplus.met"
            break;
#line 3671 "cplus.met"
#line 3673 "cplus.met"
        case THROW : 
#line 3673 "cplus.met"
            tokenAhead = 0 ;
#line 3673 "cplus.met"
            CommTerm();
#line 3673 "cplus.met"
#line 3674 "cplus.met"
#line 3675 "cplus.met"
            {
#line 3675 "cplus.met"
                PPTREE _ptRes0=0;
#line 3675 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3675 "cplus.met"
                statTree=_ptRes0;
#line 3675 "cplus.met"
            }
#line 3675 "cplus.met"
#line 3676 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3676 "cplus.met"
#line 3677 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3677 "cplus.met"
#line 3677 "cplus.met"
            }
#line 3677 "cplus.met"
#line 3678 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3678 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3678 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3678 "cplus.met"
            } else {
#line 3678 "cplus.met"
                tokenAhead = 0 ;
#line 3678 "cplus.met"
            }
#line 3678 "cplus.met"
#line 3678 "cplus.met"
            break;
#line 3678 "cplus.met"
#line 3680 "cplus.met"
        case TRY : 
#line 3680 "cplus.met"
#line 3680 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 3680 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3680 "cplus.met"
            }
#line 3680 "cplus.met"
            break;
#line 3680 "cplus.met"
#line 3681 "cplus.met"
        case META : 
#line 3681 "cplus.met"
#line 3682 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3682 "cplus.met"
#line 3683 "cplus.met"
#line 3684 "cplus.met"
                {
#line 3684 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3684 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3684 "cplus.met"
                    {
#line 3684 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3684 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3684 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3684 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3684 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3684 "cplus.met"
                        } else {
#line 3684 "cplus.met"
                            tokenAhead = 0 ;
#line 3684 "cplus.met"
                        }
#line 3684 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3684 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3684 "cplus.met"
                    }
#line 3684 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3684 "cplus.met"
                    statTree=_ptRes0;
#line 3684 "cplus.met"
                }
#line 3684 "cplus.met"
#line 3685 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3685 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3685 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3685 "cplus.met"
                } else {
#line 3685 "cplus.met"
                    tokenAhead = 0 ;
#line 3685 "cplus.met"
                }
#line 3685 "cplus.met"
#line 3686 "cplus.met"
                {
#line 3686 "cplus.met"
                    switchContext = 0 ;
#line 3686 "cplus.met"
#line 3687 "cplus.met"
                    {
#line 3687 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3687 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3687 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3687 "cplus.met"
                        }
#line 3687 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3687 "cplus.met"
                    }
#line 3687 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3687 "cplus.met"
                }
#line 3687 "cplus.met"
#line 3687 "cplus.met"
#line 3687 "cplus.met"
            } else {
#line 3687 "cplus.met"
#line 3690 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3690 "cplus.met"
#line 3692 "cplus.met"
                    
#line 3692 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3692 "cplus.met"
                    goto statement_exit;
#line 3692 "cplus.met"
#line 3693 "cplus.met"
                } else {
#line 3693 "cplus.met"
#line 3695 "cplus.met"
#line 3696 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3696 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3696 "cplus.met"
                    }
#line 3696 "cplus.met"
#line 3697 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3697 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3697 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3697 "cplus.met"
                    } else {
#line 3697 "cplus.met"
                        tokenAhead = 0 ;
#line 3697 "cplus.met"
                    }
#line 3697 "cplus.met"
#line 3697 "cplus.met"
                }
#line 3697 "cplus.met"
            }
#line 3697 "cplus.met"
            break;
#line 3697 "cplus.met"
#line 3701 "cplus.met"
        case CASE : 
#line 3701 "cplus.met"
#line 3702 "cplus.met"
            if (! (switchContext)){
#line 3702 "cplus.met"
#line 3703 "cplus.met"
                
#line 3703 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3703 "cplus.met"
                goto statement_exit;
#line 3703 "cplus.met"
#line 3703 "cplus.met"
            } else {
#line 3703 "cplus.met"
#line 3705 "cplus.met"
                {
#line 3705 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3705 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 150, cplus))== (PPTREE) -1 ) {
#line 3705 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3705 "cplus.met"
                    }
#line 3705 "cplus.met"
                    _retValue =_ptTree0;
#line 3705 "cplus.met"
                    goto statement_ret;
#line 3705 "cplus.met"
                }
#line 3705 "cplus.met"
            }
#line 3705 "cplus.met"
            break;
#line 3705 "cplus.met"
#line 3706 "cplus.met"
        case DEFAULT : 
#line 3706 "cplus.met"
#line 3707 "cplus.met"
            if (! (switchContext)){
#line 3707 "cplus.met"
#line 3708 "cplus.met"
                
#line 3708 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3708 "cplus.met"
                goto statement_exit;
#line 3708 "cplus.met"
#line 3708 "cplus.met"
            } else {
#line 3708 "cplus.met"
#line 3710 "cplus.met"
                {
#line 3710 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3710 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 150, cplus))== (PPTREE) -1 ) {
#line 3710 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3710 "cplus.met"
                    }
#line 3710 "cplus.met"
                    _retValue =_ptTree0;
#line 3710 "cplus.met"
                    goto statement_ret;
#line 3710 "cplus.met"
                }
#line 3710 "cplus.met"
            }
#line 3710 "cplus.met"
            break;
#line 3710 "cplus.met"
#line 3711 "cplus.met"
        case IDENT : 
#line 3711 "cplus.met"
#line 3712 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3712 "cplus.met"
            switch( lexEl.Value) {
#line 3712 "cplus.met"
#line 3713 "cplus.met"
                case META : 
#line 3713 "cplus.met"
                case FUNC_SPEC : 
#line 3713 "cplus.met"
#line 3714 "cplus.met"
#line 3715 "cplus.met"
                    {
#line 3715 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3715 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3715 "cplus.met"
                        {
#line 3715 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3715 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3715 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3715 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3715 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3715 "cplus.met"
                            } else {
#line 3715 "cplus.met"
                                tokenAhead = 0 ;
#line 3715 "cplus.met"
                            }
#line 3715 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3715 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3715 "cplus.met"
                        }
#line 3715 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3715 "cplus.met"
                        statTree=_ptRes0;
#line 3715 "cplus.met"
                    }
#line 3715 "cplus.met"
#line 3716 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3716 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3716 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3716 "cplus.met"
                    } else {
#line 3716 "cplus.met"
                        tokenAhead = 0 ;
#line 3716 "cplus.met"
                    }
#line 3716 "cplus.met"
#line 3717 "cplus.met"
                    {
#line 3717 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3717 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3717 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3717 "cplus.met"
                        }
#line 3717 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3717 "cplus.met"
                    }
#line 3717 "cplus.met"
#line 3718 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3718 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3718 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3718 "cplus.met"
                    } else {
#line 3718 "cplus.met"
                        tokenAhead = 0 ;
#line 3718 "cplus.met"
                    }
#line 3718 "cplus.met"
#line 3718 "cplus.met"
                    break;
#line 3718 "cplus.met"
#line 3723 "cplus.met"
                default : 
#line 3723 "cplus.met"
#line 3721 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3721 "cplus.met"
#line 3722 "cplus.met"
#line 3723 "cplus.met"
                        {
#line 3723 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3723 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3723 "cplus.met"
                            {
#line 3723 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3723 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3723 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3723 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3723 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3723 "cplus.met"
                                } else {
#line 3723 "cplus.met"
                                    tokenAhead = 0 ;
#line 3723 "cplus.met"
                                }
#line 3723 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3723 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3723 "cplus.met"
                            }
#line 3723 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3723 "cplus.met"
                            statTree=_ptRes0;
#line 3723 "cplus.met"
                        }
#line 3723 "cplus.met"
#line 3724 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3724 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3724 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3724 "cplus.met"
                        } else {
#line 3724 "cplus.met"
                            tokenAhead = 0 ;
#line 3724 "cplus.met"
                        }
#line 3724 "cplus.met"
#line 3725 "cplus.met"
                        {
#line 3725 "cplus.met"
                            switchContext = 0 ;
#line 3725 "cplus.met"
#line 3726 "cplus.met"
                            {
#line 3726 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3726 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3726 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3726 "cplus.met"
                                }
#line 3726 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3726 "cplus.met"
                            }
#line 3726 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3726 "cplus.met"
                        }
#line 3726 "cplus.met"
#line 3726 "cplus.met"
#line 3726 "cplus.met"
                    } else {
#line 3726 "cplus.met"
#line 3729 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3729 "cplus.met"
#line 3732 "cplus.met"
                            
#line 3732 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3732 "cplus.met"
                            goto statement_exit;
#line 3732 "cplus.met"
#line 3733 "cplus.met"
                        } else {
#line 3733 "cplus.met"
#line 3735 "cplus.met"
#line 3736 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 3736 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3736 "cplus.met"
                            }
#line 3736 "cplus.met"
#line 3736 "cplus.met"
                        }
#line 3736 "cplus.met"
                    }
#line 3736 "cplus.met"
                    break;
#line 3736 "cplus.met"
            }
#line 3736 "cplus.met"
            break;
#line 3736 "cplus.met"
#line 3742 "cplus.met"
        default : 
#line 3742 "cplus.met"
#line 3740 "cplus.met"
#line 3741 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3741 "cplus.met"
#line 3742 "cplus.met"
                
#line 3742 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3742 "cplus.met"
                goto statement_exit;
#line 3742 "cplus.met"
#line 3742 "cplus.met"
            } else {
#line 3742 "cplus.met"
#line 3744 "cplus.met"
#line 3745 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3745 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3745 "cplus.met"
                }
#line 3745 "cplus.met"
#line 3746 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3746 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3746 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3746 "cplus.met"
                } else {
#line 3746 "cplus.met"
                    tokenAhead = 0 ;
#line 3746 "cplus.met"
                }
#line 3746 "cplus.met"
#line 3746 "cplus.met"
            }
#line 3746 "cplus.met"
#line 3746 "cplus.met"
            break;
#line 3746 "cplus.met"
    }
#line 3746 "cplus.met"
#line 3750 "cplus.met"
    {
#line 3750 "cplus.met"
        _retValue = statTree ;
#line 3750 "cplus.met"
        goto statement_ret;
#line 3750 "cplus.met"
        
#line 3750 "cplus.met"
    }
#line 3750 "cplus.met"
#line 3750 "cplus.met"
#line 3750 "cplus.met"

#line 3751 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3751 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3751 "cplus.met"
switchContext =  _oldswitchContext;
#line 3751 "cplus.met"
return((PPTREE) 0);
#line 3751 "cplus.met"

#line 3751 "cplus.met"
statement_exit :
#line 3751 "cplus.met"

#line 3751 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3751 "cplus.met"
    _funcLevel--;
#line 3751 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3751 "cplus.met"
    return((PPTREE) -1) ;
#line 3751 "cplus.met"

#line 3751 "cplus.met"
statement_ret :
#line 3751 "cplus.met"
    
#line 3751 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3751 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3751 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3751 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3751 "cplus.met"
    return _retValue ;
#line 3751 "cplus.met"
}
#line 3751 "cplus.met"

#line 3751 "cplus.met"
#line 3585 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3585 "cplus.met"
{
#line 3585 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3585 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3585 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3585 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3585 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3585 "cplus.met"
#line 3585 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3585 "cplus.met"
#line 3587 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3587 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3587 "cplus.met"
    }
#line 3587 "cplus.met"
#line 3588 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3588 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3588 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3588 "cplus.met"
    } else {
#line 3588 "cplus.met"
        tokenAhead = 0 ;
#line 3588 "cplus.met"
    }
#line 3588 "cplus.met"
#line 3589 "cplus.met"
    {
#line 3589 "cplus.met"
        _retValue = statTree ;
#line 3589 "cplus.met"
        goto statement_expression_ret;
#line 3589 "cplus.met"
        
#line 3589 "cplus.met"
    }
#line 3589 "cplus.met"
#line 3589 "cplus.met"
#line 3589 "cplus.met"

#line 3590 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3590 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3590 "cplus.met"
return((PPTREE) 0);
#line 3590 "cplus.met"

#line 3590 "cplus.met"
statement_expression_exit :
#line 3590 "cplus.met"

#line 3590 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3590 "cplus.met"
    _funcLevel--;
#line 3590 "cplus.met"
    return((PPTREE) -1) ;
#line 3590 "cplus.met"

#line 3590 "cplus.met"
statement_expression_ret :
#line 3590 "cplus.met"
    
#line 3590 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3590 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3590 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3590 "cplus.met"
    return _retValue ;
#line 3590 "cplus.met"
}
#line 3590 "cplus.met"

#line 3590 "cplus.met"
#line 3119 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 3119 "cplus.met"
{
#line 3119 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3119 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3119 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3119 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 3119 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3119 "cplus.met"
#line 3119 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3119 "cplus.met"
#line 3119 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3119 "cplus.met"
#line 3121 "cplus.met"
    {
#line 3121 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3121 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 3121 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3121 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 3121 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 3121 "cplus.met"
        } else {
#line 3121 "cplus.met"
            tokenAhead = 0 ;
#line 3121 "cplus.met"
        }
#line 3121 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3121 "cplus.met"
        retTree=_ptRes0;
#line 3121 "cplus.met"
    }
#line 3121 "cplus.met"
#line 3122 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 3122 "cplus.met"
#line 3123 "cplus.met"
#line 3124 "cplus.met"
        list =AddList(list ,retTree );
#line 3124 "cplus.met"
#line 3124 "cplus.met"
        _addlist1 = list ;
#line 3124 "cplus.met"
#line 3125 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 3125 "cplus.met"
#line 3126 "cplus.met"
#line 3126 "cplus.met"
            {
#line 3126 "cplus.met"
                PPTREE _ptTree0=0;
#line 3126 "cplus.met"
                {
#line 3126 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3126 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 3126 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3126 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 3126 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 3126 "cplus.met"
                    } else {
#line 3126 "cplus.met"
                        tokenAhead = 0 ;
#line 3126 "cplus.met"
                    }
#line 3126 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3126 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3126 "cplus.met"
                }
#line 3126 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3126 "cplus.met"
            }
#line 3126 "cplus.met"
#line 3126 "cplus.met"
            if (list){
#line 3126 "cplus.met"
#line 3126 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3126 "cplus.met"
            } else {
#line 3126 "cplus.met"
#line 3126 "cplus.met"
                list = _addlist1 ;
#line 3126 "cplus.met"
            }
#line 3126 "cplus.met"
        } 
#line 3126 "cplus.met"
#line 3127 "cplus.met"
        {
#line 3127 "cplus.met"
            PPTREE _ptRes0=0;
#line 3127 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 3127 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 3127 "cplus.met"
            retTree=_ptRes0;
#line 3127 "cplus.met"
        }
#line 3127 "cplus.met"
#line 3127 "cplus.met"
#line 3127 "cplus.met"
    }
#line 3127 "cplus.met"
#line 3129 "cplus.met"
    {
#line 3129 "cplus.met"
        _retValue = retTree ;
#line 3129 "cplus.met"
        goto string_list_ret;
#line 3129 "cplus.met"
        
#line 3129 "cplus.met"
    }
#line 3129 "cplus.met"
#line 3129 "cplus.met"
#line 3129 "cplus.met"

#line 3130 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3130 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3130 "cplus.met"
return((PPTREE) 0);
#line 3130 "cplus.met"

#line 3130 "cplus.met"
string_list_exit :
#line 3130 "cplus.met"

#line 3130 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 3130 "cplus.met"
    _funcLevel--;
#line 3130 "cplus.met"
    return((PPTREE) -1) ;
#line 3130 "cplus.met"

#line 3130 "cplus.met"
string_list_ret :
#line 3130 "cplus.met"
    
#line 3130 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 3130 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3130 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3130 "cplus.met"
    return _retValue ;
#line 3130 "cplus.met"
}
#line 3130 "cplus.met"

#line 3130 "cplus.met"
#line 3758 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3758 "cplus.met"
{
#line 3758 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3758 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3758 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3758 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3758 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3758 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3758 "cplus.met"
#line 3758 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3758 "cplus.met"
#line 3758 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3758 "cplus.met"
#line 3760 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3760 "cplus.met"
    switch( lexEl.Value) {
#line 3760 "cplus.met"
#line 3761 "cplus.met"
        case CASE : 
#line 3761 "cplus.met"
            tokenAhead = 0 ;
#line 3761 "cplus.met"
            CommTerm();
#line 3761 "cplus.met"
#line 3762 "cplus.met"
#line 3763 "cplus.met"
            {
#line 3763 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3763 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3763 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3763 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3763 "cplus.met"
                }
#line 3763 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3763 "cplus.met"
                retTree=_ptRes0;
#line 3763 "cplus.met"
            }
#line 3763 "cplus.met"
#line 3764 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3764 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3764 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3764 "cplus.met"
            } else {
#line 3764 "cplus.met"
                tokenAhead = 0 ;
#line 3764 "cplus.met"
            }
#line 3764 "cplus.met"
#line 3765 "cplus.met"
            {
#line 3765 "cplus.met"
                switchContext = 0 ;
#line 3765 "cplus.met"
#line 3766 "cplus.met"
#line 3766 "cplus.met"
                _addlist1 = list ;
#line 3766 "cplus.met"
#line 3766 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 147, cplus)) || 
#line 3766 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 143, cplus))) { 
#line 3766 "cplus.met"
#line 3767 "cplus.met"
#line 3767 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3767 "cplus.met"
#line 3767 "cplus.met"
                    if (list){
#line 3767 "cplus.met"
#line 3767 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3767 "cplus.met"
                    } else {
#line 3767 "cplus.met"
#line 3767 "cplus.met"
                        list = _addlist1 ;
#line 3767 "cplus.met"
                    }
#line 3767 "cplus.met"
                } 
#line 3767 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3767 "cplus.met"
            }
#line 3767 "cplus.met"
#line 3768 "cplus.met"
            {
#line 3768 "cplus.met"
                PPTREE _ptTree0=0;
#line 3768 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3768 "cplus.met"
                _retValue =_ptTree0;
#line 3768 "cplus.met"
                goto switch_elem_ret;
#line 3768 "cplus.met"
            }
#line 3768 "cplus.met"
#line 3768 "cplus.met"
            break;
#line 3768 "cplus.met"
#line 3770 "cplus.met"
        case DEFAULT : 
#line 3770 "cplus.met"
            tokenAhead = 0 ;
#line 3770 "cplus.met"
            CommTerm();
#line 3770 "cplus.met"
#line 3771 "cplus.met"
#line 3772 "cplus.met"
            {
#line 3772 "cplus.met"
                PPTREE _ptRes0=0;
#line 3772 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3772 "cplus.met"
                retTree=_ptRes0;
#line 3772 "cplus.met"
            }
#line 3772 "cplus.met"
#line 3773 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3773 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3773 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3773 "cplus.met"
            } else {
#line 3773 "cplus.met"
                tokenAhead = 0 ;
#line 3773 "cplus.met"
            }
#line 3773 "cplus.met"
#line 3774 "cplus.met"
            {
#line 3774 "cplus.met"
                switchContext = 0 ;
#line 3774 "cplus.met"
#line 3775 "cplus.met"
#line 3775 "cplus.met"
                _addlist2 = list ;
#line 3775 "cplus.met"
#line 3775 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 147, cplus)) || 
#line 3775 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 143, cplus))) { 
#line 3775 "cplus.met"
#line 3776 "cplus.met"
#line 3776 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3776 "cplus.met"
#line 3776 "cplus.met"
                    if (list){
#line 3776 "cplus.met"
#line 3776 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3776 "cplus.met"
                    } else {
#line 3776 "cplus.met"
#line 3776 "cplus.met"
                        list = _addlist2 ;
#line 3776 "cplus.met"
                    }
#line 3776 "cplus.met"
                } 
#line 3776 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3776 "cplus.met"
            }
#line 3776 "cplus.met"
#line 3777 "cplus.met"
            {
#line 3777 "cplus.met"
                PPTREE _ptTree0=0;
#line 3777 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3777 "cplus.met"
                _retValue =_ptTree0;
#line 3777 "cplus.met"
                goto switch_elem_ret;
#line 3777 "cplus.met"
            }
#line 3777 "cplus.met"
#line 3777 "cplus.met"
            break;
#line 3777 "cplus.met"
#line 3783 "cplus.met"
        default : 
#line 3783 "cplus.met"
#line 3780 "cplus.met"
#line 3782 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 144, cplus)){
#line 3782 "cplus.met"
#line 3784 "cplus.met"
                {
#line 3784 "cplus.met"
                    _retValue = retTree ;
#line 3784 "cplus.met"
                    goto switch_elem_ret;
#line 3784 "cplus.met"
                    
#line 3784 "cplus.met"
                }
#line 3784 "cplus.met"
            } else {
#line 3784 "cplus.met"
#line 3786 "cplus.met"
                
#line 3786 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3786 "cplus.met"
                goto switch_elem_exit;
#line 3786 "cplus.met"
            }
#line 3786 "cplus.met"
#line 3786 "cplus.met"
            break;
#line 3786 "cplus.met"
    }
#line 3786 "cplus.met"
#line 3786 "cplus.met"
#line 3788 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3788 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3788 "cplus.met"
switchContext =  _oldswitchContext;
#line 3788 "cplus.met"
return((PPTREE) 0);
#line 3788 "cplus.met"

#line 3788 "cplus.met"
switch_elem_exit :
#line 3788 "cplus.met"

#line 3788 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3788 "cplus.met"
    _funcLevel--;
#line 3788 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3788 "cplus.met"
    return((PPTREE) -1) ;
#line 3788 "cplus.met"

#line 3788 "cplus.met"
switch_elem_ret :
#line 3788 "cplus.met"
    
#line 3788 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3788 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3788 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3788 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3788 "cplus.met"
    return _retValue ;
#line 3788 "cplus.met"
}
#line 3788 "cplus.met"

#line 3788 "cplus.met"
#line 3791 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3791 "cplus.met"
{
#line 3791 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3791 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3791 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3791 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3791 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3791 "cplus.met"
#line 3791 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3791 "cplus.met"
#line 3791 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3791 "cplus.met"
#line 3793 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3793 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3793 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3793 "cplus.met"
    } else {
#line 3793 "cplus.met"
        tokenAhead = 0 ;
#line 3793 "cplus.met"
    }
#line 3793 "cplus.met"
#line 3793 "cplus.met"
    _addlist1 = list ;
#line 3793 "cplus.met"
#line 3794 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 150, cplus)) { 
#line 3794 "cplus.met"
#line 3795 "cplus.met"
#line 3795 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3795 "cplus.met"
#line 3795 "cplus.met"
        if (list){
#line 3795 "cplus.met"
#line 3795 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3795 "cplus.met"
        } else {
#line 3795 "cplus.met"
#line 3795 "cplus.met"
            list = _addlist1 ;
#line 3795 "cplus.met"
        }
#line 3795 "cplus.met"
    } 
#line 3795 "cplus.met"
#line 3796 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3796 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3796 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3796 "cplus.met"
    } else {
#line 3796 "cplus.met"
        tokenAhead = 0 ;
#line 3796 "cplus.met"
    }
#line 3796 "cplus.met"
#line 3797 "cplus.met"
    {
#line 3797 "cplus.met"
        _retValue = list ;
#line 3797 "cplus.met"
        goto switch_list_ret;
#line 3797 "cplus.met"
        
#line 3797 "cplus.met"
    }
#line 3797 "cplus.met"
#line 3797 "cplus.met"
#line 3797 "cplus.met"

#line 3798 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3798 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3798 "cplus.met"
return((PPTREE) 0);
#line 3798 "cplus.met"

#line 3798 "cplus.met"
switch_list_exit :
#line 3798 "cplus.met"

#line 3798 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3798 "cplus.met"
    _funcLevel--;
#line 3798 "cplus.met"
    return((PPTREE) -1) ;
#line 3798 "cplus.met"

#line 3798 "cplus.met"
switch_list_ret :
#line 3798 "cplus.met"
    
#line 3798 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3798 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3798 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3798 "cplus.met"
    return _retValue ;
#line 3798 "cplus.met"
}
#line 3798 "cplus.met"

#line 3798 "cplus.met"
#line 1885 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1885 "cplus.met"
{
#line 1885 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1885 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1885 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1885 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1885 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1885 "cplus.met"
#line 1885 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1885 "cplus.met"
#line 1885 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1885 "cplus.met"
#line 1887 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1887 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1887 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1887 "cplus.met"
    } else {
#line 1887 "cplus.met"
        tokenAhead = 0 ;
#line 1887 "cplus.met"
    }
#line 1887 "cplus.met"
#line 1887 "cplus.met"
    _addlist1 = listParam ;
#line 1887 "cplus.met"
#line 1888 "cplus.met"
    do {
#line 1888 "cplus.met"
#line 1890 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1890 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 155, cplus))){
#line 1890 "cplus.met"
#line 1892 "cplus.met"
#line 1892 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 1892 "cplus.met"
#line 1892 "cplus.met"
            if (listParam){
#line 1892 "cplus.met"
#line 1892 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 1892 "cplus.met"
            } else {
#line 1892 "cplus.met"
#line 1892 "cplus.met"
                listParam = _addlist1 ;
#line 1892 "cplus.met"
            }
#line 1892 "cplus.met"
        }
#line 1892 "cplus.met"
#line 1892 "cplus.met"
#line 1893 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1893 "cplus.met"
#line 1894 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1894 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1894 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 1894 "cplus.met"
    } else {
#line 1894 "cplus.met"
        tokenAhead = 0 ;
#line 1894 "cplus.met"
    }
#line 1894 "cplus.met"
#line 1895 "cplus.met"
    {
#line 1895 "cplus.met"
        PPTREE _ptTree0=0;
#line 1895 "cplus.met"
        {
#line 1895 "cplus.met"
            PPTREE _ptRes1=0;
#line 1895 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1895 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1895 "cplus.met"
            _ptTree0=_ptRes1;
#line 1895 "cplus.met"
        }
#line 1895 "cplus.met"
        _retValue =_ptTree0;
#line 1895 "cplus.met"
        goto template_type_ret;
#line 1895 "cplus.met"
    }
#line 1895 "cplus.met"
#line 1895 "cplus.met"
#line 1895 "cplus.met"

#line 1896 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1896 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1896 "cplus.met"
return((PPTREE) 0);
#line 1896 "cplus.met"

#line 1896 "cplus.met"
template_type_exit :
#line 1896 "cplus.met"

#line 1896 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1896 "cplus.met"
    _funcLevel--;
#line 1896 "cplus.met"
    return((PPTREE) -1) ;
#line 1896 "cplus.met"

#line 1896 "cplus.met"
template_type_ret :
#line 1896 "cplus.met"
    
#line 1896 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1896 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1896 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1896 "cplus.met"
    return _retValue ;
#line 1896 "cplus.met"
}
#line 1896 "cplus.met"

#line 1896 "cplus.met"
#line 3371 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3371 "cplus.met"
{
#line 3371 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3371 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3371 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3371 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3371 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3371 "cplus.met"
#line 3371 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3371 "cplus.met"
#line 3373 "cplus.met"
    {
#line 3373 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3373 "cplus.met"
        _ptRes0= MakeTree(FUNC, 11);
#line 3373 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 3373 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3373 "cplus.met"
        }
#line 3373 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3373 "cplus.met"
        funcTree=_ptRes0;
#line 3373 "cplus.met"
    }
#line 3373 "cplus.met"
#line 3374 "cplus.met"
    {
#line 3374 "cplus.met"
        PPTREE _ptTree0=0;
#line 3374 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 3374 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3374 "cplus.met"
        }
#line 3374 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3374 "cplus.met"
    }
#line 3374 "cplus.met"
#line 3375 "cplus.met"
    {
#line 3375 "cplus.met"
        PPTREE _ptTree0=0;
#line 3375 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 3375 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3375 "cplus.met"
        }
#line 3375 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3375 "cplus.met"
    }
#line 3375 "cplus.met"
#line 3376 "cplus.met"
    {
#line 3376 "cplus.met"
        _retValue = funcTree ;
#line 3376 "cplus.met"
        goto type_and_declarator_ret;
#line 3376 "cplus.met"
        
#line 3376 "cplus.met"
    }
#line 3376 "cplus.met"
#line 3376 "cplus.met"
#line 3376 "cplus.met"

#line 3377 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3377 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3377 "cplus.met"
return((PPTREE) 0);
#line 3377 "cplus.met"

#line 3377 "cplus.met"
type_and_declarator_exit :
#line 3377 "cplus.met"

#line 3377 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3377 "cplus.met"
    _funcLevel--;
#line 3377 "cplus.met"
    return((PPTREE) -1) ;
#line 3377 "cplus.met"

#line 3377 "cplus.met"
type_and_declarator_ret :
#line 3377 "cplus.met"
    
#line 3377 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3377 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3377 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3377 "cplus.met"
    return _retValue ;
#line 3377 "cplus.met"
}
#line 3377 "cplus.met"

#line 3377 "cplus.met"
#line 3269 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3269 "cplus.met"
{
#line 3269 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3269 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3269 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3269 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3269 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3269 "cplus.met"
#line 3270 "cplus.met"
    {
#line 3270 "cplus.met"
        PPTREE _ptTree0=0;
#line 3270 "cplus.met"
        {
#line 3270 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3270 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3270 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3270 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3270 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3270 "cplus.met"
            } else {
#line 3270 "cplus.met"
                tokenAhead = 0 ;
#line 3270 "cplus.met"
            }
#line 3270 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3270 "cplus.met"
            _ptTree0=_ptRes1;
#line 3270 "cplus.met"
        }
#line 3270 "cplus.met"
        _retValue =_ptTree0;
#line 3270 "cplus.met"
        goto type_descr_ret;
#line 3270 "cplus.met"
    }
#line 3270 "cplus.met"
#line 3270 "cplus.met"
#line 3270 "cplus.met"

#line 3271 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3271 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3271 "cplus.met"
return((PPTREE) 0);
#line 3271 "cplus.met"

#line 3271 "cplus.met"
type_descr_exit :
#line 3271 "cplus.met"

#line 3271 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3271 "cplus.met"
    _funcLevel--;
#line 3271 "cplus.met"
    return((PPTREE) -1) ;
#line 3271 "cplus.met"

#line 3271 "cplus.met"
type_descr_ret :
#line 3271 "cplus.met"
    
#line 3271 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3271 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3271 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3271 "cplus.met"
    return _retValue ;
#line 3271 "cplus.met"
}
#line 3271 "cplus.met"

#line 3271 "cplus.met"
#line 2713 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2713 "cplus.met"
{
#line 2713 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2713 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2713 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2713 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2713 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2713 "cplus.met"
#line 2713 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2713 "cplus.met"
#line 2715 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2715 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2715 "cplus.met"
    }
#line 2715 "cplus.met"
#line 2716 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2716 "cplus.met"
#line 2717 "cplus.met"
        {
#line 2717 "cplus.met"
            PPTREE _ptRes0=0;
#line 2717 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2717 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2717 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2717 "cplus.met"
            valTree=_ptRes0;
#line 2717 "cplus.met"
        }
#line 2717 "cplus.met"
    } else {
#line 2717 "cplus.met"
#line 2719 "cplus.met"
        valTree = retTree ;
#line 2719 "cplus.met"
    }
#line 2719 "cplus.met"
#line 2720 "cplus.met"
    {
#line 2720 "cplus.met"
        _retValue = valTree ;
#line 2720 "cplus.met"
        goto type_name_ret;
#line 2720 "cplus.met"
        
#line 2720 "cplus.met"
    }
#line 2720 "cplus.met"
#line 2720 "cplus.met"
#line 2720 "cplus.met"

#line 2721 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2721 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2721 "cplus.met"
return((PPTREE) 0);
#line 2721 "cplus.met"

#line 2721 "cplus.met"
type_name_exit :
#line 2721 "cplus.met"

#line 2721 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2721 "cplus.met"
    _funcLevel--;
#line 2721 "cplus.met"
    return((PPTREE) -1) ;
#line 2721 "cplus.met"

#line 2721 "cplus.met"
type_name_ret :
#line 2721 "cplus.met"
    
#line 2721 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2721 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2721 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2721 "cplus.met"
    return _retValue ;
#line 2721 "cplus.met"
}
#line 2721 "cplus.met"

#line 2721 "cplus.met"
#line 1861 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1861 "cplus.met"
{
#line 1861 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1861 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1861 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1861 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1861 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1861 "cplus.met"
#line 1861 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1861 "cplus.met"
#line 1861 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1861 "cplus.met"
#line 1863 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 157, cplus))== (PPTREE) -1 ) {
#line 1863 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1863 "cplus.met"
    }
#line 1863 "cplus.met"
#line 1864 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1864 "cplus.met"
#line 1865 "cplus.met"
#line 1865 "cplus.met"
        _addlist1 = listParam ;
#line 1865 "cplus.met"
#line 1866 "cplus.met"
        do {
#line 1866 "cplus.met"
#line 1867 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(conditional_expression), 34, cplus)) || 
#line 1867 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 155, cplus))){
#line 1867 "cplus.met"
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                if (listParam){
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1868 "cplus.met"
                } else {
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                    listParam = _addlist1 ;
#line 1868 "cplus.met"
                }
#line 1868 "cplus.met"
            }
#line 1868 "cplus.met"
#line 1868 "cplus.met"
#line 1869 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1869 "cplus.met"
#line 1870 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1870 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1870 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1870 "cplus.met"
        } else {
#line 1870 "cplus.met"
            tokenAhead = 0 ;
#line 1870 "cplus.met"
        }
#line 1870 "cplus.met"
#line 1871 "cplus.met"
        {
#line 1871 "cplus.met"
            PPTREE _ptRes0=0;
#line 1871 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1871 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1871 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1871 "cplus.met"
            ret=_ptRes0;
#line 1871 "cplus.met"
        }
#line 1871 "cplus.met"
#line 1871 "cplus.met"
#line 1871 "cplus.met"
    }
#line 1871 "cplus.met"
#line 1873 "cplus.met"
    {
#line 1873 "cplus.met"
        _retValue = ret ;
#line 1873 "cplus.met"
        goto type_specifier_ret;
#line 1873 "cplus.met"
        
#line 1873 "cplus.met"
    }
#line 1873 "cplus.met"
#line 1873 "cplus.met"
#line 1873 "cplus.met"

#line 1874 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1874 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1874 "cplus.met"
return((PPTREE) 0);
#line 1874 "cplus.met"

#line 1874 "cplus.met"
type_specifier_exit :
#line 1874 "cplus.met"

#line 1874 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1874 "cplus.met"
    _funcLevel--;
#line 1874 "cplus.met"
    return((PPTREE) -1) ;
#line 1874 "cplus.met"

#line 1874 "cplus.met"
type_specifier_ret :
#line 1874 "cplus.met"
    
#line 1874 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 1874 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1874 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1874 "cplus.met"
    return _retValue ;
#line 1874 "cplus.met"
}
#line 1874 "cplus.met"

#line 1874 "cplus.met"
#line 1848 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1848 "cplus.met"
{
#line 1848 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1848 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1848 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1848 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1848 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1848 "cplus.met"
#line 1848 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0;
#line 1848 "cplus.met"
#line 1850 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 129, cplus)){
#line 1850 "cplus.met"
#line 1851 "cplus.met"
        {
#line 1851 "cplus.met"
            PPTREE _ptTree0=0;
#line 1851 "cplus.met"
            {
#line 1851 "cplus.met"
                PPTREE _ptTree1=0;
#line 1851 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1851 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1851 "cplus.met"
                }
#line 1851 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1851 "cplus.met"
            }
#line 1851 "cplus.met"
            _retValue =_ptTree0;
#line 1851 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1851 "cplus.met"
        }
#line 1851 "cplus.met"
    }
#line 1851 "cplus.met"
#line 1852 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1852 "cplus.met"
    switch( lexEl.Value) {
#line 1852 "cplus.met"
#line 1853 "cplus.met"
        case ENUM : 
#line 1853 "cplus.met"
#line 1853 "cplus.met"
            {
#line 1853 "cplus.met"
                PPTREE _ptTree0=0;
#line 1853 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1853 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1853 "cplus.met"
                }
#line 1853 "cplus.met"
                _retValue =_ptTree0;
#line 1853 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1853 "cplus.met"
            }
#line 1853 "cplus.met"
            break;
#line 1853 "cplus.met"
#line 1854 "cplus.met"
        case STRUCT : 
#line 1854 "cplus.met"
#line 1854 "cplus.met"
            {
#line 1854 "cplus.met"
                PPTREE _ptTree0=0;
#line 1854 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1854 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1854 "cplus.met"
                }
#line 1854 "cplus.met"
                _retValue =_ptTree0;
#line 1854 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1854 "cplus.met"
            }
#line 1854 "cplus.met"
            break;
#line 1854 "cplus.met"
#line 1855 "cplus.met"
        case UNION : 
#line 1855 "cplus.met"
#line 1855 "cplus.met"
            {
#line 1855 "cplus.met"
                PPTREE _ptTree0=0;
#line 1855 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1855 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1855 "cplus.met"
                }
#line 1855 "cplus.met"
                _retValue =_ptTree0;
#line 1855 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1855 "cplus.met"
            }
#line 1855 "cplus.met"
            break;
#line 1855 "cplus.met"
#line 1856 "cplus.met"
        case CLASS : 
#line 1856 "cplus.met"
#line 1856 "cplus.met"
            {
#line 1856 "cplus.met"
                PPTREE _ptTree0=0;
#line 1856 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1856 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1856 "cplus.met"
                }
#line 1856 "cplus.met"
                _retValue =_ptTree0;
#line 1856 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1856 "cplus.met"
            }
#line 1856 "cplus.met"
            break;
#line 1856 "cplus.met"
#line 1857 "cplus.met"
        default : 
#line 1857 "cplus.met"
#line 1857 "cplus.met"
            {
#line 1857 "cplus.met"
                PPTREE _ptTree0=0;
#line 1857 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1857 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1857 "cplus.met"
                }
#line 1857 "cplus.met"
                _retValue =_ptTree0;
#line 1857 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1857 "cplus.met"
            }
#line 1857 "cplus.met"
            break;
#line 1857 "cplus.met"
    }
#line 1857 "cplus.met"
#line 1857 "cplus.met"
#line 1858 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1858 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1858 "cplus.met"
return((PPTREE) 0);
#line 1858 "cplus.met"

#line 1858 "cplus.met"
type_specifier_without_param_exit :
#line 1858 "cplus.met"

#line 1858 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1858 "cplus.met"
    _funcLevel--;
#line 1858 "cplus.met"
    return((PPTREE) -1) ;
#line 1858 "cplus.met"

#line 1858 "cplus.met"
type_specifier_without_param_ret :
#line 1858 "cplus.met"
    
#line 1858 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1858 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1858 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1858 "cplus.met"
    return _retValue ;
#line 1858 "cplus.met"
}
#line 1858 "cplus.met"

#line 1858 "cplus.met"
#line 1643 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1643 "cplus.met"
{
#line 1643 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1643 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1643 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1643 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1643 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1643 "cplus.met"
#line 1643 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1643 "cplus.met"
#line 1645 "cplus.met"
    {
#line 1645 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1645 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1645 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1645 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1645 "cplus.met"
        }
#line 1645 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1645 "cplus.met"
        retTree=_ptRes0;
#line 1645 "cplus.met"
    }
#line 1645 "cplus.met"
#line 1646 "cplus.met"
    {
#line 1646 "cplus.met"
        PPTREE _ptTree0=0;
#line 1646 "cplus.met"
        {
#line 1646 "cplus.met"
            PPTREE _ptTree1=0;
#line 1646 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1646 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1646 "cplus.met"
            }
#line 1646 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1646 "cplus.met"
        }
#line 1646 "cplus.met"
        _retValue =_ptTree0;
#line 1646 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1646 "cplus.met"
    }
#line 1646 "cplus.met"
#line 1646 "cplus.met"
#line 1646 "cplus.met"

#line 1647 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1647 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1647 "cplus.met"
return((PPTREE) 0);
#line 1647 "cplus.met"

#line 1647 "cplus.met"
typedef_and_declarator_exit :
#line 1647 "cplus.met"

#line 1647 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1647 "cplus.met"
    _funcLevel--;
#line 1647 "cplus.met"
    return((PPTREE) -1) ;
#line 1647 "cplus.met"

#line 1647 "cplus.met"
typedef_and_declarator_ret :
#line 1647 "cplus.met"
    
#line 1647 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1647 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1647 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1647 "cplus.met"
    return _retValue ;
#line 1647 "cplus.met"
}
#line 1647 "cplus.met"

#line 1647 "cplus.met"
