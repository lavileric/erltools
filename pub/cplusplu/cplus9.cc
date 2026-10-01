/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3736 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3736 "cplus.met"
{
#line 3736 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3736 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3736 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3736 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3736 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3736 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3736 "cplus.met"
#line 3736 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3736 "cplus.met"
#line 3738 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3738 "cplus.met"
    switch( lexEl.Value) {
#line 3738 "cplus.met"
#line 3739 "cplus.met"
        case BREAK : 
#line 3739 "cplus.met"
            tokenAhead = 0 ;
#line 3739 "cplus.met"
            CommTerm();
#line 3739 "cplus.met"
#line 3740 "cplus.met"
#line 3741 "cplus.met"
            {
#line 3741 "cplus.met"
                PPTREE _ptRes0=0;
#line 3741 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3741 "cplus.met"
                statTree=_ptRes0;
#line 3741 "cplus.met"
            }
#line 3741 "cplus.met"
#line 3742 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3742 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3742 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3742 "cplus.met"
            } else {
#line 3742 "cplus.met"
                tokenAhead = 0 ;
#line 3742 "cplus.met"
            }
#line 3742 "cplus.met"
#line 3742 "cplus.met"
            break;
#line 3742 "cplus.met"
#line 3744 "cplus.met"
        case CONTINUE : 
#line 3744 "cplus.met"
            tokenAhead = 0 ;
#line 3744 "cplus.met"
            CommTerm();
#line 3744 "cplus.met"
#line 3745 "cplus.met"
#line 3746 "cplus.met"
            {
#line 3746 "cplus.met"
                PPTREE _ptRes0=0;
#line 3746 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3746 "cplus.met"
                statTree=_ptRes0;
#line 3746 "cplus.met"
            }
#line 3746 "cplus.met"
#line 3747 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3747 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3747 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3747 "cplus.met"
            } else {
#line 3747 "cplus.met"
                tokenAhead = 0 ;
#line 3747 "cplus.met"
            }
#line 3747 "cplus.met"
#line 3747 "cplus.met"
            break;
#line 3747 "cplus.met"
#line 3749 "cplus.met"
        case DO : 
#line 3749 "cplus.met"
            tokenAhead = 0 ;
#line 3749 "cplus.met"
            CommTerm();
#line 3749 "cplus.met"
#line 3750 "cplus.met"
#line 3751 "cplus.met"
            {
#line 3751 "cplus.met"
                switchContext = 0 ;
#line 3751 "cplus.met"
#line 3752 "cplus.met"
                {
#line 3752 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3752 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3752 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3752 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3752 "cplus.met"
                    }
#line 3752 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3752 "cplus.met"
                    statTree=_ptRes0;
#line 3752 "cplus.met"
                }
#line 3752 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3752 "cplus.met"
            }
#line 3752 "cplus.met"
#line 3753 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3753 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3753 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3753 "cplus.met"
            } else {
#line 3753 "cplus.met"
                tokenAhead = 0 ;
#line 3753 "cplus.met"
            }
#line 3753 "cplus.met"
#line 3754 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3754 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3754 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3754 "cplus.met"
            } else {
#line 3754 "cplus.met"
                tokenAhead = 0 ;
#line 3754 "cplus.met"
            }
#line 3754 "cplus.met"
#line 3755 "cplus.met"
            {
#line 3755 "cplus.met"
                PPTREE _ptTree0=0;
#line 3755 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3755 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3755 "cplus.met"
                }
#line 3755 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3755 "cplus.met"
            }
#line 3755 "cplus.met"
#line 3756 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3756 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3756 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3756 "cplus.met"
            } else {
#line 3756 "cplus.met"
                tokenAhead = 0 ;
#line 3756 "cplus.met"
            }
#line 3756 "cplus.met"
#line 3757 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3757 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3757 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3757 "cplus.met"
            } else {
#line 3757 "cplus.met"
                tokenAhead = 0 ;
#line 3757 "cplus.met"
            }
#line 3757 "cplus.met"
#line 3757 "cplus.met"
            break;
#line 3757 "cplus.met"
#line 3759 "cplus.met"
        case AOUV : 
#line 3759 "cplus.met"
#line 3759 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 3759 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3759 "cplus.met"
            }
#line 3759 "cplus.met"
            break;
#line 3759 "cplus.met"
#line 3760 "cplus.met"
        case FOR : 
#line 3760 "cplus.met"
            tokenAhead = 0 ;
#line 3760 "cplus.met"
            CommTerm();
#line 3760 "cplus.met"
#line 3760 "cplus.met"
            {
#line 3760 "cplus.met"
                PPTREE _ptTree0=0;
#line 3760 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 3760 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3760 "cplus.met"
                }
#line 3760 "cplus.met"
                _retValue =_ptTree0;
#line 3760 "cplus.met"
                goto statement_ret;
#line 3760 "cplus.met"
            }
#line 3760 "cplus.met"
            break;
#line 3760 "cplus.met"
#line 3761 "cplus.met"
        case GOTO : 
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
                _ptRes0= MakeTree(GOTO, 1);
#line 3763 "cplus.met"
                {
#line 3763 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3763 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3763 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3763 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3763 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3763 "cplus.met"
                    } else {
#line 3763 "cplus.met"
                        tokenAhead = 0 ;
#line 3763 "cplus.met"
                    }
#line 3763 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3763 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3763 "cplus.met"
                }
#line 3763 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3763 "cplus.met"
                statTree=_ptRes0;
#line 3763 "cplus.met"
            }
#line 3763 "cplus.met"
#line 3764 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3764 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3764 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3764 "cplus.met"
            } else {
#line 3764 "cplus.met"
                tokenAhead = 0 ;
#line 3764 "cplus.met"
            }
#line 3764 "cplus.met"
#line 3764 "cplus.met"
            break;
#line 3764 "cplus.met"
#line 3766 "cplus.met"
        case IF : 
#line 3766 "cplus.met"
            tokenAhead = 0 ;
#line 3766 "cplus.met"
            CommTerm();
#line 3766 "cplus.met"
#line 3767 "cplus.met"
#line 3768 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CONSTEVAL,"consteval") && (tokenAhead = 0,CommTerm(),1)){
#line 3768 "cplus.met"
#line 3769 "cplus.met"
                {
#line 3769 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3769 "cplus.met"
                    _ptRes0= MakeTree(IF, 3);
#line 3769 "cplus.met"
                    {
#line 3769 "cplus.met"
                        PPTREE _ptRes1=0;
#line 3769 "cplus.met"
                        _ptRes1= MakeTree(CONSTEVAL, 0);
#line 3769 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3769 "cplus.met"
                    }
#line 3769 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3769 "cplus.met"
                    statTree=_ptRes0;
#line 3769 "cplus.met"
                }
#line 3769 "cplus.met"
            } else {
#line 3769 "cplus.met"
#line 3771 "cplus.met"
#line 3772 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3772 "cplus.met"
                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3772 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,"(")
#line 3772 "cplus.met"
                } else {
#line 3772 "cplus.met"
                    tokenAhead = 0 ;
#line 3772 "cplus.met"
                }
#line 3772 "cplus.met"
#line 3773 "cplus.met"
                {
#line 3773 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3773 "cplus.met"
                    _ptRes0= MakeTree(IF, 3);
#line 3773 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3773 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3773 "cplus.met"
                    }
#line 3773 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3773 "cplus.met"
                    statTree=_ptRes0;
#line 3773 "cplus.met"
                }
#line 3773 "cplus.met"
#line 3774 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3774 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3774 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,")")
#line 3774 "cplus.met"
                } else {
#line 3774 "cplus.met"
                    tokenAhead = 0 ;
#line 3774 "cplus.met"
                }
#line 3774 "cplus.met"
#line 3774 "cplus.met"
            }
#line 3774 "cplus.met"
#line 3776 "cplus.met"
            {
#line 3776 "cplus.met"
                switchContext = 0 ;
#line 3776 "cplus.met"
#line 3777 "cplus.met"
                {
#line 3777 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3777 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3777 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3777 "cplus.met"
                    }
#line 3777 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3777 "cplus.met"
                }
#line 3777 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3777 "cplus.met"
            }
#line 3777 "cplus.met"
#line 3778 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3778 "cplus.met"
#line 3779 "cplus.met"
                {
#line 3779 "cplus.met"
                    switchContext = 0 ;
#line 3779 "cplus.met"
#line 3780 "cplus.met"
                    {
#line 3780 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3780 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3780 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3780 "cplus.met"
                        }
#line 3780 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3780 "cplus.met"
                    }
#line 3780 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3780 "cplus.met"
                }
#line 3780 "cplus.met"
            }
#line 3780 "cplus.met"
#line 3780 "cplus.met"
            break;
#line 3780 "cplus.met"
#line 3782 "cplus.met"
        case PVIR : 
#line 3782 "cplus.met"
            tokenAhead = 0 ;
#line 3782 "cplus.met"
            CommTerm();
#line 3782 "cplus.met"
#line 3782 "cplus.met"
            {
#line 3782 "cplus.met"
                PPTREE _ptRes0=0;
#line 3782 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3782 "cplus.met"
                statTree=_ptRes0;
#line 3782 "cplus.met"
            }
#line 3782 "cplus.met"
            break;
#line 3782 "cplus.met"
#line 3783 "cplus.met"
        case RETURN : 
#line 3783 "cplus.met"
            tokenAhead = 0 ;
#line 3783 "cplus.met"
            CommTerm();
#line 3783 "cplus.met"
#line 3784 "cplus.met"
#line 3785 "cplus.met"
            {
#line 3785 "cplus.met"
                PPTREE _ptRes0=0;
#line 3785 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3785 "cplus.met"
                statTree=_ptRes0;
#line 3785 "cplus.met"
            }
#line 3785 "cplus.met"
#line 3786 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3786 "cplus.met"
#line 3787 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3787 "cplus.met"
#line 3787 "cplus.met"
            }
#line 3787 "cplus.met"
#line 3788 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3788 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3788 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3788 "cplus.met"
            } else {
#line 3788 "cplus.met"
                tokenAhead = 0 ;
#line 3788 "cplus.met"
            }
#line 3788 "cplus.met"
#line 3788 "cplus.met"
            break;
#line 3788 "cplus.met"
#line 3790 "cplus.met"
        case SWITCH : 
#line 3790 "cplus.met"
            tokenAhead = 0 ;
#line 3790 "cplus.met"
            CommTerm();
#line 3790 "cplus.met"
#line 3791 "cplus.met"
#line 3792 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3792 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3792 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3792 "cplus.met"
            } else {
#line 3792 "cplus.met"
                tokenAhead = 0 ;
#line 3792 "cplus.met"
            }
#line 3792 "cplus.met"
#line 3793 "cplus.met"
            {
#line 3793 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3793 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3793 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3793 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3793 "cplus.met"
                }
#line 3793 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3793 "cplus.met"
                statTree=_ptRes0;
#line 3793 "cplus.met"
            }
#line 3793 "cplus.met"
#line 3794 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3794 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3794 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3794 "cplus.met"
            } else {
#line 3794 "cplus.met"
                tokenAhead = 0 ;
#line 3794 "cplus.met"
            }
#line 3794 "cplus.met"
#line 3795 "cplus.met"
            {
#line 3795 "cplus.met"
                switchContext = 0 ;
#line 3795 "cplus.met"
#line 3796 "cplus.met"
                {
#line 3796 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3796 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 151, cplus))== (PPTREE) -1 ) {
#line 3796 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3796 "cplus.met"
                    }
#line 3796 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3796 "cplus.met"
                }
#line 3796 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3796 "cplus.met"
            }
#line 3796 "cplus.met"
#line 3796 "cplus.met"
            break;
#line 3796 "cplus.met"
#line 3798 "cplus.met"
        case WHILE : 
#line 3798 "cplus.met"
            tokenAhead = 0 ;
#line 3798 "cplus.met"
            CommTerm();
#line 3798 "cplus.met"
#line 3799 "cplus.met"
#line 3800 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3800 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3800 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3800 "cplus.met"
            } else {
#line 3800 "cplus.met"
                tokenAhead = 0 ;
#line 3800 "cplus.met"
            }
#line 3800 "cplus.met"
#line 3801 "cplus.met"
            {
#line 3801 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3801 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3801 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3801 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3801 "cplus.met"
                }
#line 3801 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3801 "cplus.met"
                statTree=_ptRes0;
#line 3801 "cplus.met"
            }
#line 3801 "cplus.met"
#line 3802 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3802 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3802 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3802 "cplus.met"
            } else {
#line 3802 "cplus.met"
                tokenAhead = 0 ;
#line 3802 "cplus.met"
            }
#line 3802 "cplus.met"
#line 3803 "cplus.met"
            {
#line 3803 "cplus.met"
                switchContext = 0 ;
#line 3803 "cplus.met"
#line 3804 "cplus.met"
                {
#line 3804 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3804 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3804 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3804 "cplus.met"
                    }
#line 3804 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3804 "cplus.met"
                }
#line 3804 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3804 "cplus.met"
            }
#line 3804 "cplus.met"
#line 3804 "cplus.met"
            break;
#line 3804 "cplus.met"
#line 3806 "cplus.met"
        case FORALLSONS : 
#line 3806 "cplus.met"
            tokenAhead = 0 ;
#line 3806 "cplus.met"
            CommTerm();
#line 3806 "cplus.met"
#line 3807 "cplus.met"
#line 3808 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3808 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3808 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3808 "cplus.met"
            } else {
#line 3808 "cplus.met"
                tokenAhead = 0 ;
#line 3808 "cplus.met"
            }
#line 3808 "cplus.met"
#line 3809 "cplus.met"
            {
#line 3809 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3809 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3809 "cplus.met"
                {
#line 3809 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3809 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3809 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3809 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3809 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3809 "cplus.met"
                    } else {
#line 3809 "cplus.met"
                        tokenAhead = 0 ;
#line 3809 "cplus.met"
                    }
#line 3809 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3809 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3809 "cplus.met"
                }
#line 3809 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3809 "cplus.met"
                statTree=_ptRes0;
#line 3809 "cplus.met"
            }
#line 3809 "cplus.met"
#line 3810 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3810 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3810 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3810 "cplus.met"
            } else {
#line 3810 "cplus.met"
                tokenAhead = 0 ;
#line 3810 "cplus.met"
            }
#line 3810 "cplus.met"
#line 3811 "cplus.met"
            {
#line 3811 "cplus.met"
                switchContext = 0 ;
#line 3811 "cplus.met"
#line 3812 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 147, cplus))){
#line 3812 "cplus.met"
#line 3813 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3813 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3813 "cplus.met"
                    }
#line 3813 "cplus.met"
                }
#line 3813 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3813 "cplus.met"
            }
#line 3813 "cplus.met"
#line 3814 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3814 "cplus.met"
#line 3815 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3815 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3815 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3815 "cplus.met"
            } else {
#line 3815 "cplus.met"
                tokenAhead = 0 ;
#line 3815 "cplus.met"
            }
#line 3815 "cplus.met"
#line 3815 "cplus.met"
            break;
#line 3815 "cplus.met"
#line 3817 "cplus.met"
        case THROW : 
#line 3817 "cplus.met"
            tokenAhead = 0 ;
#line 3817 "cplus.met"
            CommTerm();
#line 3817 "cplus.met"
#line 3818 "cplus.met"
#line 3819 "cplus.met"
            {
#line 3819 "cplus.met"
                PPTREE _ptRes0=0;
#line 3819 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3819 "cplus.met"
                statTree=_ptRes0;
#line 3819 "cplus.met"
            }
#line 3819 "cplus.met"
#line 3820 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 67, cplus)){
#line 3820 "cplus.met"
#line 3821 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3821 "cplus.met"
#line 3821 "cplus.met"
            }
#line 3821 "cplus.met"
#line 3822 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3822 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3822 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3822 "cplus.met"
            } else {
#line 3822 "cplus.met"
                tokenAhead = 0 ;
#line 3822 "cplus.met"
            }
#line 3822 "cplus.met"
#line 3822 "cplus.met"
            break;
#line 3822 "cplus.met"
#line 3824 "cplus.met"
        case TRY : 
#line 3824 "cplus.met"
#line 3824 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 3824 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3824 "cplus.met"
            }
#line 3824 "cplus.met"
            break;
#line 3824 "cplus.met"
#line 3825 "cplus.met"
        case META : 
#line 3825 "cplus.met"
#line 3826 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3826 "cplus.met"
#line 3827 "cplus.met"
#line 3828 "cplus.met"
                {
#line 3828 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3828 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3828 "cplus.met"
                    {
#line 3828 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3828 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3828 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3828 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3828 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3828 "cplus.met"
                        } else {
#line 3828 "cplus.met"
                            tokenAhead = 0 ;
#line 3828 "cplus.met"
                        }
#line 3828 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3828 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3828 "cplus.met"
                    }
#line 3828 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3828 "cplus.met"
                    statTree=_ptRes0;
#line 3828 "cplus.met"
                }
#line 3828 "cplus.met"
#line 3829 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3829 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3829 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3829 "cplus.met"
                } else {
#line 3829 "cplus.met"
                    tokenAhead = 0 ;
#line 3829 "cplus.met"
                }
#line 3829 "cplus.met"
#line 3830 "cplus.met"
                {
#line 3830 "cplus.met"
                    switchContext = 0 ;
#line 3830 "cplus.met"
#line 3831 "cplus.met"
                    {
#line 3831 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3831 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3831 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3831 "cplus.met"
                        }
#line 3831 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3831 "cplus.met"
                    }
#line 3831 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3831 "cplus.met"
                }
#line 3831 "cplus.met"
#line 3831 "cplus.met"
#line 3831 "cplus.met"
            } else {
#line 3831 "cplus.met"
#line 3834 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3834 "cplus.met"
#line 3836 "cplus.met"
                    
#line 3836 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3836 "cplus.met"
                    goto statement_exit;
#line 3836 "cplus.met"
#line 3837 "cplus.met"
                } else {
#line 3837 "cplus.met"
#line 3839 "cplus.met"
#line 3840 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3840 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3840 "cplus.met"
                    }
#line 3840 "cplus.met"
#line 3841 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3841 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3841 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3841 "cplus.met"
                    } else {
#line 3841 "cplus.met"
                        tokenAhead = 0 ;
#line 3841 "cplus.met"
                    }
#line 3841 "cplus.met"
#line 3841 "cplus.met"
                }
#line 3841 "cplus.met"
            }
#line 3841 "cplus.met"
            break;
#line 3841 "cplus.met"
#line 3845 "cplus.met"
        case CASE : 
#line 3845 "cplus.met"
#line 3846 "cplus.met"
            if (! (switchContext)){
#line 3846 "cplus.met"
#line 3847 "cplus.met"
                
#line 3847 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3847 "cplus.met"
                goto statement_exit;
#line 3847 "cplus.met"
#line 3847 "cplus.met"
            } else {
#line 3847 "cplus.met"
#line 3849 "cplus.met"
                {
#line 3849 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3849 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 150, cplus))== (PPTREE) -1 ) {
#line 3849 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3849 "cplus.met"
                    }
#line 3849 "cplus.met"
                    _retValue =_ptTree0;
#line 3849 "cplus.met"
                    goto statement_ret;
#line 3849 "cplus.met"
                }
#line 3849 "cplus.met"
            }
#line 3849 "cplus.met"
            break;
#line 3849 "cplus.met"
#line 3850 "cplus.met"
        case DEFAULT : 
#line 3850 "cplus.met"
#line 3851 "cplus.met"
            if (! (switchContext)){
#line 3851 "cplus.met"
#line 3852 "cplus.met"
                
#line 3852 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3852 "cplus.met"
                goto statement_exit;
#line 3852 "cplus.met"
#line 3852 "cplus.met"
            } else {
#line 3852 "cplus.met"
#line 3854 "cplus.met"
                {
#line 3854 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3854 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 150, cplus))== (PPTREE) -1 ) {
#line 3854 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3854 "cplus.met"
                    }
#line 3854 "cplus.met"
                    _retValue =_ptTree0;
#line 3854 "cplus.met"
                    goto statement_ret;
#line 3854 "cplus.met"
                }
#line 3854 "cplus.met"
            }
#line 3854 "cplus.met"
            break;
#line 3854 "cplus.met"
#line 3855 "cplus.met"
        case IDENT : 
#line 3855 "cplus.met"
#line 3856 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3856 "cplus.met"
            switch( lexEl.Value) {
#line 3856 "cplus.met"
#line 3857 "cplus.met"
                case META : 
#line 3857 "cplus.met"
                case FUNC_SPEC : 
#line 3857 "cplus.met"
#line 3858 "cplus.met"
#line 3859 "cplus.met"
                    {
#line 3859 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3859 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3859 "cplus.met"
                        {
#line 3859 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3859 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3859 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3859 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3859 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3859 "cplus.met"
                            } else {
#line 3859 "cplus.met"
                                tokenAhead = 0 ;
#line 3859 "cplus.met"
                            }
#line 3859 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3859 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3859 "cplus.met"
                        }
#line 3859 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3859 "cplus.met"
                        statTree=_ptRes0;
#line 3859 "cplus.met"
                    }
#line 3859 "cplus.met"
#line 3860 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3860 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3860 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3860 "cplus.met"
                    } else {
#line 3860 "cplus.met"
                        tokenAhead = 0 ;
#line 3860 "cplus.met"
                    }
#line 3860 "cplus.met"
#line 3861 "cplus.met"
                    {
#line 3861 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3861 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3861 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3861 "cplus.met"
                        }
#line 3861 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3861 "cplus.met"
                    }
#line 3861 "cplus.met"
#line 3862 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3862 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3862 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3862 "cplus.met"
                    } else {
#line 3862 "cplus.met"
                        tokenAhead = 0 ;
#line 3862 "cplus.met"
                    }
#line 3862 "cplus.met"
#line 3862 "cplus.met"
                    break;
#line 3862 "cplus.met"
#line 3867 "cplus.met"
                default : 
#line 3867 "cplus.met"
#line 3865 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 92, cplus)){
#line 3865 "cplus.met"
#line 3866 "cplus.met"
#line 3867 "cplus.met"
                        {
#line 3867 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3867 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3867 "cplus.met"
                            {
#line 3867 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3867 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3867 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3867 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3867 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3867 "cplus.met"
                                } else {
#line 3867 "cplus.met"
                                    tokenAhead = 0 ;
#line 3867 "cplus.met"
                                }
#line 3867 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3867 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3867 "cplus.met"
                            }
#line 3867 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3867 "cplus.met"
                            statTree=_ptRes0;
#line 3867 "cplus.met"
                        }
#line 3867 "cplus.met"
#line 3868 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3868 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3868 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3868 "cplus.met"
                        } else {
#line 3868 "cplus.met"
                            tokenAhead = 0 ;
#line 3868 "cplus.met"
                        }
#line 3868 "cplus.met"
#line 3869 "cplus.met"
                        {
#line 3869 "cplus.met"
                            switchContext = 0 ;
#line 3869 "cplus.met"
#line 3870 "cplus.met"
                            {
#line 3870 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3870 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3870 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3870 "cplus.met"
                                }
#line 3870 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3870 "cplus.met"
                            }
#line 3870 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3870 "cplus.met"
                        }
#line 3870 "cplus.met"
#line 3870 "cplus.met"
#line 3870 "cplus.met"
                    } else {
#line 3870 "cplus.met"
#line 3873 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3873 "cplus.met"
#line 3876 "cplus.met"
                            
#line 3876 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3876 "cplus.met"
                            goto statement_exit;
#line 3876 "cplus.met"
#line 3877 "cplus.met"
                        } else {
#line 3877 "cplus.met"
#line 3879 "cplus.met"
#line 3880 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 3880 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3880 "cplus.met"
                            }
#line 3880 "cplus.met"
#line 3880 "cplus.met"
                        }
#line 3880 "cplus.met"
                    }
#line 3880 "cplus.met"
                    break;
#line 3880 "cplus.met"
            }
#line 3880 "cplus.met"
            break;
#line 3880 "cplus.met"
#line 3886 "cplus.met"
        default : 
#line 3886 "cplus.met"
#line 3884 "cplus.met"
#line 3885 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, cplus)){
#line 3885 "cplus.met"
#line 3886 "cplus.met"
                
#line 3886 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3886 "cplus.met"
                goto statement_exit;
#line 3886 "cplus.met"
#line 3886 "cplus.met"
            } else {
#line 3886 "cplus.met"
#line 3888 "cplus.met"
#line 3889 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3889 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3889 "cplus.met"
                }
#line 3889 "cplus.met"
#line 3890 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3890 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3890 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3890 "cplus.met"
                } else {
#line 3890 "cplus.met"
                    tokenAhead = 0 ;
#line 3890 "cplus.met"
                }
#line 3890 "cplus.met"
#line 3890 "cplus.met"
            }
#line 3890 "cplus.met"
#line 3890 "cplus.met"
            break;
#line 3890 "cplus.met"
    }
#line 3890 "cplus.met"
#line 3894 "cplus.met"
    {
#line 3894 "cplus.met"
        _retValue = statTree ;
#line 3894 "cplus.met"
        goto statement_ret;
#line 3894 "cplus.met"
        
#line 3894 "cplus.met"
    }
#line 3894 "cplus.met"
#line 3894 "cplus.met"
#line 3894 "cplus.met"

#line 3895 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3895 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3895 "cplus.met"
switchContext =  _oldswitchContext;
#line 3895 "cplus.met"
return((PPTREE) 0);
#line 3895 "cplus.met"

#line 3895 "cplus.met"
statement_exit :
#line 3895 "cplus.met"

#line 3895 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3895 "cplus.met"
    _funcLevel--;
#line 3895 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3895 "cplus.met"
    return((PPTREE) -1) ;
#line 3895 "cplus.met"

#line 3895 "cplus.met"
statement_ret :
#line 3895 "cplus.met"
    
#line 3895 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3895 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3895 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3895 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3895 "cplus.met"
    return _retValue ;
#line 3895 "cplus.met"
}
#line 3895 "cplus.met"

#line 3895 "cplus.met"
#line 3729 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3729 "cplus.met"
{
#line 3729 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3729 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3729 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3729 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3729 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3729 "cplus.met"
#line 3729 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3729 "cplus.met"
#line 3731 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3731 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3731 "cplus.met"
    }
#line 3731 "cplus.met"
#line 3732 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3732 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3732 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3732 "cplus.met"
    } else {
#line 3732 "cplus.met"
        tokenAhead = 0 ;
#line 3732 "cplus.met"
    }
#line 3732 "cplus.met"
#line 3733 "cplus.met"
    {
#line 3733 "cplus.met"
        _retValue = statTree ;
#line 3733 "cplus.met"
        goto statement_expression_ret;
#line 3733 "cplus.met"
        
#line 3733 "cplus.met"
    }
#line 3733 "cplus.met"
#line 3733 "cplus.met"
#line 3733 "cplus.met"

#line 3734 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3734 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3734 "cplus.met"
return((PPTREE) 0);
#line 3734 "cplus.met"

#line 3734 "cplus.met"
statement_expression_exit :
#line 3734 "cplus.met"

#line 3734 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3734 "cplus.met"
    _funcLevel--;
#line 3734 "cplus.met"
    return((PPTREE) -1) ;
#line 3734 "cplus.met"

#line 3734 "cplus.met"
statement_expression_ret :
#line 3734 "cplus.met"
    
#line 3734 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3734 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3734 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3734 "cplus.met"
    return _retValue ;
#line 3734 "cplus.met"
}
#line 3734 "cplus.met"

#line 3734 "cplus.met"
#line 3263 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 3263 "cplus.met"
{
#line 3263 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3263 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3263 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3263 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 3263 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3263 "cplus.met"
#line 3263 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3263 "cplus.met"
#line 3263 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3263 "cplus.met"
#line 3265 "cplus.met"
    {
#line 3265 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3265 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 3265 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3265 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 3265 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 3265 "cplus.met"
        } else {
#line 3265 "cplus.met"
            tokenAhead = 0 ;
#line 3265 "cplus.met"
        }
#line 3265 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3265 "cplus.met"
        retTree=_ptRes0;
#line 3265 "cplus.met"
    }
#line 3265 "cplus.met"
#line 3266 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 3266 "cplus.met"
#line 3267 "cplus.met"
#line 3268 "cplus.met"
        list =AddList(list ,retTree );
#line 3268 "cplus.met"
#line 3268 "cplus.met"
        _addlist1 = list ;
#line 3268 "cplus.met"
#line 3269 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 3269 "cplus.met"
#line 3270 "cplus.met"
#line 3270 "cplus.met"
            {
#line 3270 "cplus.met"
                PPTREE _ptTree0=0;
#line 3270 "cplus.met"
                {
#line 3270 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3270 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 3270 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3270 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 3270 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
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
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3270 "cplus.met"
            }
#line 3270 "cplus.met"
#line 3270 "cplus.met"
            if (list){
#line 3270 "cplus.met"
#line 3270 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3270 "cplus.met"
            } else {
#line 3270 "cplus.met"
#line 3270 "cplus.met"
                list = _addlist1 ;
#line 3270 "cplus.met"
            }
#line 3270 "cplus.met"
        } 
#line 3270 "cplus.met"
#line 3271 "cplus.met"
        {
#line 3271 "cplus.met"
            PPTREE _ptRes0=0;
#line 3271 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 3271 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 3271 "cplus.met"
            retTree=_ptRes0;
#line 3271 "cplus.met"
        }
#line 3271 "cplus.met"
#line 3271 "cplus.met"
#line 3271 "cplus.met"
    }
#line 3271 "cplus.met"
#line 3273 "cplus.met"
    {
#line 3273 "cplus.met"
        _retValue = retTree ;
#line 3273 "cplus.met"
        goto string_list_ret;
#line 3273 "cplus.met"
        
#line 3273 "cplus.met"
    }
#line 3273 "cplus.met"
#line 3273 "cplus.met"
#line 3273 "cplus.met"

#line 3274 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3274 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3274 "cplus.met"
return((PPTREE) 0);
#line 3274 "cplus.met"

#line 3274 "cplus.met"
string_list_exit :
#line 3274 "cplus.met"

#line 3274 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 3274 "cplus.met"
    _funcLevel--;
#line 3274 "cplus.met"
    return((PPTREE) -1) ;
#line 3274 "cplus.met"

#line 3274 "cplus.met"
string_list_ret :
#line 3274 "cplus.met"
    
#line 3274 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 3274 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3274 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3274 "cplus.met"
    return _retValue ;
#line 3274 "cplus.met"
}
#line 3274 "cplus.met"

#line 3274 "cplus.met"
#line 3902 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3902 "cplus.met"
{
#line 3902 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3902 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3902 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3902 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3902 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3902 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3902 "cplus.met"
#line 3902 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3902 "cplus.met"
#line 3902 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3902 "cplus.met"
#line 3904 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3904 "cplus.met"
    switch( lexEl.Value) {
#line 3904 "cplus.met"
#line 3905 "cplus.met"
        case CASE : 
#line 3905 "cplus.met"
            tokenAhead = 0 ;
#line 3905 "cplus.met"
            CommTerm();
#line 3905 "cplus.met"
#line 3906 "cplus.met"
#line 3907 "cplus.met"
            {
#line 3907 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3907 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3907 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3907 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3907 "cplus.met"
                }
#line 3907 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3907 "cplus.met"
                retTree=_ptRes0;
#line 3907 "cplus.met"
            }
#line 3907 "cplus.met"
#line 3908 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3908 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3908 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3908 "cplus.met"
            } else {
#line 3908 "cplus.met"
                tokenAhead = 0 ;
#line 3908 "cplus.met"
            }
#line 3908 "cplus.met"
#line 3909 "cplus.met"
            {
#line 3909 "cplus.met"
                switchContext = 0 ;
#line 3909 "cplus.met"
#line 3910 "cplus.met"
#line 3910 "cplus.met"
                _addlist1 = list ;
#line 3910 "cplus.met"
#line 3910 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 147, cplus)) || 
#line 3910 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 143, cplus))) { 
#line 3910 "cplus.met"
#line 3911 "cplus.met"
#line 3911 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3911 "cplus.met"
#line 3911 "cplus.met"
                    if (list){
#line 3911 "cplus.met"
#line 3911 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3911 "cplus.met"
                    } else {
#line 3911 "cplus.met"
#line 3911 "cplus.met"
                        list = _addlist1 ;
#line 3911 "cplus.met"
                    }
#line 3911 "cplus.met"
                } 
#line 3911 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3911 "cplus.met"
            }
#line 3911 "cplus.met"
#line 3912 "cplus.met"
            {
#line 3912 "cplus.met"
                PPTREE _ptTree0=0;
#line 3912 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3912 "cplus.met"
                _retValue =_ptTree0;
#line 3912 "cplus.met"
                goto switch_elem_ret;
#line 3912 "cplus.met"
            }
#line 3912 "cplus.met"
#line 3912 "cplus.met"
            break;
#line 3912 "cplus.met"
#line 3914 "cplus.met"
        case DEFAULT : 
#line 3914 "cplus.met"
            tokenAhead = 0 ;
#line 3914 "cplus.met"
            CommTerm();
#line 3914 "cplus.met"
#line 3915 "cplus.met"
#line 3916 "cplus.met"
            {
#line 3916 "cplus.met"
                PPTREE _ptRes0=0;
#line 3916 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3916 "cplus.met"
                retTree=_ptRes0;
#line 3916 "cplus.met"
            }
#line 3916 "cplus.met"
#line 3917 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3917 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3917 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3917 "cplus.met"
            } else {
#line 3917 "cplus.met"
                tokenAhead = 0 ;
#line 3917 "cplus.met"
            }
#line 3917 "cplus.met"
#line 3918 "cplus.met"
            {
#line 3918 "cplus.met"
                switchContext = 0 ;
#line 3918 "cplus.met"
#line 3919 "cplus.met"
#line 3919 "cplus.met"
                _addlist2 = list ;
#line 3919 "cplus.met"
#line 3919 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 147, cplus)) || 
#line 3919 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 143, cplus))) { 
#line 3919 "cplus.met"
#line 3920 "cplus.met"
#line 3920 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3920 "cplus.met"
#line 3920 "cplus.met"
                    if (list){
#line 3920 "cplus.met"
#line 3920 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3920 "cplus.met"
                    } else {
#line 3920 "cplus.met"
#line 3920 "cplus.met"
                        list = _addlist2 ;
#line 3920 "cplus.met"
                    }
#line 3920 "cplus.met"
                } 
#line 3920 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3920 "cplus.met"
            }
#line 3920 "cplus.met"
#line 3921 "cplus.met"
            {
#line 3921 "cplus.met"
                PPTREE _ptTree0=0;
#line 3921 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3921 "cplus.met"
                _retValue =_ptTree0;
#line 3921 "cplus.met"
                goto switch_elem_ret;
#line 3921 "cplus.met"
            }
#line 3921 "cplus.met"
#line 3921 "cplus.met"
            break;
#line 3921 "cplus.met"
#line 3927 "cplus.met"
        default : 
#line 3927 "cplus.met"
#line 3924 "cplus.met"
#line 3926 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 144, cplus)){
#line 3926 "cplus.met"
#line 3928 "cplus.met"
                {
#line 3928 "cplus.met"
                    _retValue = retTree ;
#line 3928 "cplus.met"
                    goto switch_elem_ret;
#line 3928 "cplus.met"
                    
#line 3928 "cplus.met"
                }
#line 3928 "cplus.met"
            } else {
#line 3928 "cplus.met"
#line 3930 "cplus.met"
                
#line 3930 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3930 "cplus.met"
                goto switch_elem_exit;
#line 3930 "cplus.met"
            }
#line 3930 "cplus.met"
#line 3930 "cplus.met"
            break;
#line 3930 "cplus.met"
    }
#line 3930 "cplus.met"
#line 3930 "cplus.met"
#line 3932 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3932 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3932 "cplus.met"
switchContext =  _oldswitchContext;
#line 3932 "cplus.met"
return((PPTREE) 0);
#line 3932 "cplus.met"

#line 3932 "cplus.met"
switch_elem_exit :
#line 3932 "cplus.met"

#line 3932 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3932 "cplus.met"
    _funcLevel--;
#line 3932 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3932 "cplus.met"
    return((PPTREE) -1) ;
#line 3932 "cplus.met"

#line 3932 "cplus.met"
switch_elem_ret :
#line 3932 "cplus.met"
    
#line 3932 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3932 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3932 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3932 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3932 "cplus.met"
    return _retValue ;
#line 3932 "cplus.met"
}
#line 3932 "cplus.met"

#line 3932 "cplus.met"
#line 3935 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3935 "cplus.met"
{
#line 3935 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3935 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3935 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3935 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3935 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3935 "cplus.met"
#line 3935 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3935 "cplus.met"
#line 3935 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3935 "cplus.met"
#line 3937 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3937 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3937 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3937 "cplus.met"
    } else {
#line 3937 "cplus.met"
        tokenAhead = 0 ;
#line 3937 "cplus.met"
    }
#line 3937 "cplus.met"
#line 3937 "cplus.met"
    _addlist1 = list ;
#line 3937 "cplus.met"
#line 3938 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 150, cplus)) { 
#line 3938 "cplus.met"
#line 3939 "cplus.met"
#line 3939 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3939 "cplus.met"
#line 3939 "cplus.met"
        if (list){
#line 3939 "cplus.met"
#line 3939 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3939 "cplus.met"
        } else {
#line 3939 "cplus.met"
#line 3939 "cplus.met"
            list = _addlist1 ;
#line 3939 "cplus.met"
        }
#line 3939 "cplus.met"
    } 
#line 3939 "cplus.met"
#line 3940 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3940 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3940 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3940 "cplus.met"
    } else {
#line 3940 "cplus.met"
        tokenAhead = 0 ;
#line 3940 "cplus.met"
    }
#line 3940 "cplus.met"
#line 3941 "cplus.met"
    {
#line 3941 "cplus.met"
        _retValue = list ;
#line 3941 "cplus.met"
        goto switch_list_ret;
#line 3941 "cplus.met"
        
#line 3941 "cplus.met"
    }
#line 3941 "cplus.met"
#line 3941 "cplus.met"
#line 3941 "cplus.met"

#line 3942 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3942 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3942 "cplus.met"
return((PPTREE) 0);
#line 3942 "cplus.met"

#line 3942 "cplus.met"
switch_list_exit :
#line 3942 "cplus.met"

#line 3942 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3942 "cplus.met"
    _funcLevel--;
#line 3942 "cplus.met"
    return((PPTREE) -1) ;
#line 3942 "cplus.met"

#line 3942 "cplus.met"
switch_list_ret :
#line 3942 "cplus.met"
    
#line 3942 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3942 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3942 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3942 "cplus.met"
    return _retValue ;
#line 3942 "cplus.met"
}
#line 3942 "cplus.met"

#line 3942 "cplus.met"
#line 2029 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 2029 "cplus.met"
{
#line 2029 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2029 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2029 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2029 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 2029 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2029 "cplus.met"
#line 2029 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2029 "cplus.met"
#line 2029 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 2029 "cplus.met"
#line 2031 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2031 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 2031 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 2031 "cplus.met"
    } else {
#line 2031 "cplus.met"
        tokenAhead = 0 ;
#line 2031 "cplus.met"
    }
#line 2031 "cplus.met"
#line 2031 "cplus.met"
    _addlist1 = listParam ;
#line 2031 "cplus.met"
#line 2032 "cplus.met"
    do {
#line 2032 "cplus.met"
#line 2034 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 2034 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 155, cplus))){
#line 2034 "cplus.met"
#line 2036 "cplus.met"
#line 2036 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 2036 "cplus.met"
#line 2036 "cplus.met"
            if (listParam){
#line 2036 "cplus.met"
#line 2036 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2036 "cplus.met"
            } else {
#line 2036 "cplus.met"
#line 2036 "cplus.met"
                listParam = _addlist1 ;
#line 2036 "cplus.met"
            }
#line 2036 "cplus.met"
        }
#line 2036 "cplus.met"
#line 2036 "cplus.met"
#line 2037 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2037 "cplus.met"
#line 2038 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2038 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 2038 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 2038 "cplus.met"
    } else {
#line 2038 "cplus.met"
        tokenAhead = 0 ;
#line 2038 "cplus.met"
    }
#line 2038 "cplus.met"
#line 2039 "cplus.met"
    {
#line 2039 "cplus.met"
        PPTREE _ptTree0=0;
#line 2039 "cplus.met"
        {
#line 2039 "cplus.met"
            PPTREE _ptRes1=0;
#line 2039 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 2039 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 2039 "cplus.met"
            _ptTree0=_ptRes1;
#line 2039 "cplus.met"
        }
#line 2039 "cplus.met"
        _retValue =_ptTree0;
#line 2039 "cplus.met"
        goto template_type_ret;
#line 2039 "cplus.met"
    }
#line 2039 "cplus.met"
#line 2039 "cplus.met"
#line 2039 "cplus.met"

#line 2040 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2040 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2040 "cplus.met"
return((PPTREE) 0);
#line 2040 "cplus.met"

#line 2040 "cplus.met"
template_type_exit :
#line 2040 "cplus.met"

#line 2040 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 2040 "cplus.met"
    _funcLevel--;
#line 2040 "cplus.met"
    return((PPTREE) -1) ;
#line 2040 "cplus.met"

#line 2040 "cplus.met"
template_type_ret :
#line 2040 "cplus.met"
    
#line 2040 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 2040 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2040 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2040 "cplus.met"
    return _retValue ;
#line 2040 "cplus.met"
}
#line 2040 "cplus.met"

#line 2040 "cplus.met"
#line 3515 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3515 "cplus.met"
{
#line 3515 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3515 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3515 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3515 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3515 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3515 "cplus.met"
#line 3515 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3515 "cplus.met"
#line 3517 "cplus.met"
    {
#line 3517 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3517 "cplus.met"
        _ptRes0= MakeTree(FUNC, 11);
#line 3517 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 3517 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3517 "cplus.met"
        }
#line 3517 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3517 "cplus.met"
        funcTree=_ptRes0;
#line 3517 "cplus.met"
    }
#line 3517 "cplus.met"
#line 3518 "cplus.met"
    {
#line 3518 "cplus.met"
        PPTREE _ptTree0=0;
#line 3518 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 3518 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3518 "cplus.met"
        }
#line 3518 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3518 "cplus.met"
    }
#line 3518 "cplus.met"
#line 3519 "cplus.met"
    {
#line 3519 "cplus.met"
        PPTREE _ptTree0=0;
#line 3519 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 3519 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3519 "cplus.met"
        }
#line 3519 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3519 "cplus.met"
    }
#line 3519 "cplus.met"
#line 3520 "cplus.met"
    {
#line 3520 "cplus.met"
        _retValue = funcTree ;
#line 3520 "cplus.met"
        goto type_and_declarator_ret;
#line 3520 "cplus.met"
        
#line 3520 "cplus.met"
    }
#line 3520 "cplus.met"
#line 3520 "cplus.met"
#line 3520 "cplus.met"

#line 3521 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3521 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3521 "cplus.met"
return((PPTREE) 0);
#line 3521 "cplus.met"

#line 3521 "cplus.met"
type_and_declarator_exit :
#line 3521 "cplus.met"

#line 3521 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3521 "cplus.met"
    _funcLevel--;
#line 3521 "cplus.met"
    return((PPTREE) -1) ;
#line 3521 "cplus.met"

#line 3521 "cplus.met"
type_and_declarator_ret :
#line 3521 "cplus.met"
    
#line 3521 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3521 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3521 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3521 "cplus.met"
    return _retValue ;
#line 3521 "cplus.met"
}
#line 3521 "cplus.met"

#line 3521 "cplus.met"
#line 3413 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3413 "cplus.met"
{
#line 3413 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3413 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3413 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3413 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3413 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3413 "cplus.met"
#line 3414 "cplus.met"
    {
#line 3414 "cplus.met"
        PPTREE _ptTree0=0;
#line 3414 "cplus.met"
        {
#line 3414 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3414 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3414 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3414 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3414 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3414 "cplus.met"
            } else {
#line 3414 "cplus.met"
                tokenAhead = 0 ;
#line 3414 "cplus.met"
            }
#line 3414 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3414 "cplus.met"
            _ptTree0=_ptRes1;
#line 3414 "cplus.met"
        }
#line 3414 "cplus.met"
        _retValue =_ptTree0;
#line 3414 "cplus.met"
        goto type_descr_ret;
#line 3414 "cplus.met"
    }
#line 3414 "cplus.met"
#line 3414 "cplus.met"
#line 3414 "cplus.met"

#line 3415 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3415 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3415 "cplus.met"
return((PPTREE) 0);
#line 3415 "cplus.met"

#line 3415 "cplus.met"
type_descr_exit :
#line 3415 "cplus.met"

#line 3415 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3415 "cplus.met"
    _funcLevel--;
#line 3415 "cplus.met"
    return((PPTREE) -1) ;
#line 3415 "cplus.met"

#line 3415 "cplus.met"
type_descr_ret :
#line 3415 "cplus.met"
    
#line 3415 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3415 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3415 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3415 "cplus.met"
    return _retValue ;
#line 3415 "cplus.met"
}
#line 3415 "cplus.met"

#line 3415 "cplus.met"
#line 2857 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2857 "cplus.met"
{
#line 2857 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2857 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2857 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2857 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2857 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2857 "cplus.met"
#line 2857 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2857 "cplus.met"
#line 2859 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2859 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2859 "cplus.met"
    }
#line 2859 "cplus.met"
#line 2860 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2860 "cplus.met"
#line 2861 "cplus.met"
        {
#line 2861 "cplus.met"
            PPTREE _ptRes0=0;
#line 2861 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2861 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2861 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2861 "cplus.met"
            valTree=_ptRes0;
#line 2861 "cplus.met"
        }
#line 2861 "cplus.met"
    } else {
#line 2861 "cplus.met"
#line 2863 "cplus.met"
        valTree = retTree ;
#line 2863 "cplus.met"
    }
#line 2863 "cplus.met"
#line 2864 "cplus.met"
    {
#line 2864 "cplus.met"
        _retValue = valTree ;
#line 2864 "cplus.met"
        goto type_name_ret;
#line 2864 "cplus.met"
        
#line 2864 "cplus.met"
    }
#line 2864 "cplus.met"
#line 2864 "cplus.met"
#line 2864 "cplus.met"

#line 2865 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2865 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2865 "cplus.met"
return((PPTREE) 0);
#line 2865 "cplus.met"

#line 2865 "cplus.met"
type_name_exit :
#line 2865 "cplus.met"

#line 2865 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2865 "cplus.met"
    _funcLevel--;
#line 2865 "cplus.met"
    return((PPTREE) -1) ;
#line 2865 "cplus.met"

#line 2865 "cplus.met"
type_name_ret :
#line 2865 "cplus.met"
    
#line 2865 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2865 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2865 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2865 "cplus.met"
    return _retValue ;
#line 2865 "cplus.met"
}
#line 2865 "cplus.met"

#line 2865 "cplus.met"
#line 2005 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 2005 "cplus.met"
{
#line 2005 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2005 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2005 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2005 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 2005 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2005 "cplus.met"
#line 2005 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2005 "cplus.met"
#line 2005 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 2005 "cplus.met"
#line 2007 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 157, cplus))== (PPTREE) -1 ) {
#line 2007 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 2007 "cplus.met"
    }
#line 2007 "cplus.met"
#line 2008 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 2008 "cplus.met"
#line 2009 "cplus.met"
#line 2009 "cplus.met"
        _addlist1 = listParam ;
#line 2009 "cplus.met"
#line 2010 "cplus.met"
        do {
#line 2010 "cplus.met"
#line 2011 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(conditional_expression), 34, cplus)) || 
#line 2011 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 155, cplus))){
#line 2011 "cplus.met"
#line 2012 "cplus.met"
#line 2012 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 2012 "cplus.met"
#line 2012 "cplus.met"
                if (listParam){
#line 2012 "cplus.met"
#line 2012 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2012 "cplus.met"
                } else {
#line 2012 "cplus.met"
#line 2012 "cplus.met"
                    listParam = _addlist1 ;
#line 2012 "cplus.met"
                }
#line 2012 "cplus.met"
            }
#line 2012 "cplus.met"
#line 2012 "cplus.met"
#line 2013 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2013 "cplus.met"
#line 2014 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2014 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 2014 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 2014 "cplus.met"
        } else {
#line 2014 "cplus.met"
            tokenAhead = 0 ;
#line 2014 "cplus.met"
        }
#line 2014 "cplus.met"
#line 2015 "cplus.met"
        {
#line 2015 "cplus.met"
            PPTREE _ptRes0=0;
#line 2015 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 2015 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 2015 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 2015 "cplus.met"
            ret=_ptRes0;
#line 2015 "cplus.met"
        }
#line 2015 "cplus.met"
#line 2015 "cplus.met"
#line 2015 "cplus.met"
    }
#line 2015 "cplus.met"
#line 2017 "cplus.met"
    {
#line 2017 "cplus.met"
        _retValue = ret ;
#line 2017 "cplus.met"
        goto type_specifier_ret;
#line 2017 "cplus.met"
        
#line 2017 "cplus.met"
    }
#line 2017 "cplus.met"
#line 2017 "cplus.met"
#line 2017 "cplus.met"

#line 2018 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2018 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2018 "cplus.met"
return((PPTREE) 0);
#line 2018 "cplus.met"

#line 2018 "cplus.met"
type_specifier_exit :
#line 2018 "cplus.met"

#line 2018 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 2018 "cplus.met"
    _funcLevel--;
#line 2018 "cplus.met"
    return((PPTREE) -1) ;
#line 2018 "cplus.met"

#line 2018 "cplus.met"
type_specifier_ret :
#line 2018 "cplus.met"
    
#line 2018 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 2018 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2018 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2018 "cplus.met"
    return _retValue ;
#line 2018 "cplus.met"
}
#line 2018 "cplus.met"

#line 2018 "cplus.met"
#line 1992 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1992 "cplus.met"
{
#line 1992 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1992 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1992 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1992 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1992 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1992 "cplus.met"
#line 1992 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0;
#line 1992 "cplus.met"
#line 1994 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 129, cplus)){
#line 1994 "cplus.met"
#line 1995 "cplus.met"
        {
#line 1995 "cplus.met"
            PPTREE _ptTree0=0;
#line 1995 "cplus.met"
            {
#line 1995 "cplus.met"
                PPTREE _ptTree1=0;
#line 1995 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1995 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1995 "cplus.met"
                }
#line 1995 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1995 "cplus.met"
            }
#line 1995 "cplus.met"
            _retValue =_ptTree0;
#line 1995 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1995 "cplus.met"
        }
#line 1995 "cplus.met"
    }
#line 1995 "cplus.met"
#line 1996 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1996 "cplus.met"
    switch( lexEl.Value) {
#line 1996 "cplus.met"
#line 1997 "cplus.met"
        case ENUM : 
#line 1997 "cplus.met"
#line 1997 "cplus.met"
            {
#line 1997 "cplus.met"
                PPTREE _ptTree0=0;
#line 1997 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1997 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1997 "cplus.met"
                }
#line 1997 "cplus.met"
                _retValue =_ptTree0;
#line 1997 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1997 "cplus.met"
            }
#line 1997 "cplus.met"
            break;
#line 1997 "cplus.met"
#line 1998 "cplus.met"
        case STRUCT : 
#line 1998 "cplus.met"
#line 1998 "cplus.met"
            {
#line 1998 "cplus.met"
                PPTREE _ptTree0=0;
#line 1998 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1998 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1998 "cplus.met"
                }
#line 1998 "cplus.met"
                _retValue =_ptTree0;
#line 1998 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1998 "cplus.met"
            }
#line 1998 "cplus.met"
            break;
#line 1998 "cplus.met"
#line 1999 "cplus.met"
        case UNION : 
#line 1999 "cplus.met"
#line 1999 "cplus.met"
            {
#line 1999 "cplus.met"
                PPTREE _ptTree0=0;
#line 1999 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1999 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1999 "cplus.met"
                }
#line 1999 "cplus.met"
                _retValue =_ptTree0;
#line 1999 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1999 "cplus.met"
            }
#line 1999 "cplus.met"
            break;
#line 1999 "cplus.met"
#line 2000 "cplus.met"
        case CLASS : 
#line 2000 "cplus.met"
#line 2000 "cplus.met"
            {
#line 2000 "cplus.met"
                PPTREE _ptTree0=0;
#line 2000 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 2000 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 2000 "cplus.met"
                }
#line 2000 "cplus.met"
                _retValue =_ptTree0;
#line 2000 "cplus.met"
                goto type_specifier_without_param_ret;
#line 2000 "cplus.met"
            }
#line 2000 "cplus.met"
            break;
#line 2000 "cplus.met"
#line 2001 "cplus.met"
        default : 
#line 2001 "cplus.met"
#line 2001 "cplus.met"
            {
#line 2001 "cplus.met"
                PPTREE _ptTree0=0;
#line 2001 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 2001 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 2001 "cplus.met"
                }
#line 2001 "cplus.met"
                _retValue =_ptTree0;
#line 2001 "cplus.met"
                goto type_specifier_without_param_ret;
#line 2001 "cplus.met"
            }
#line 2001 "cplus.met"
            break;
#line 2001 "cplus.met"
    }
#line 2001 "cplus.met"
#line 2001 "cplus.met"
#line 2002 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2002 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2002 "cplus.met"
return((PPTREE) 0);
#line 2002 "cplus.met"

#line 2002 "cplus.met"
type_specifier_without_param_exit :
#line 2002 "cplus.met"

#line 2002 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 2002 "cplus.met"
    _funcLevel--;
#line 2002 "cplus.met"
    return((PPTREE) -1) ;
#line 2002 "cplus.met"

#line 2002 "cplus.met"
type_specifier_without_param_ret :
#line 2002 "cplus.met"
    
#line 2002 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 2002 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2002 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2002 "cplus.met"
    return _retValue ;
#line 2002 "cplus.met"
}
#line 2002 "cplus.met"

#line 2002 "cplus.met"
#line 1787 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1787 "cplus.met"
{
#line 1787 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1787 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1787 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1787 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1787 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1787 "cplus.met"
#line 1787 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1787 "cplus.met"
#line 1789 "cplus.met"
    {
#line 1789 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1789 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1789 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1789 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1789 "cplus.met"
        }
#line 1789 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1789 "cplus.met"
        retTree=_ptRes0;
#line 1789 "cplus.met"
    }
#line 1789 "cplus.met"
#line 1790 "cplus.met"
    {
#line 1790 "cplus.met"
        PPTREE _ptTree0=0;
#line 1790 "cplus.met"
        {
#line 1790 "cplus.met"
            PPTREE _ptTree1=0;
#line 1790 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1790 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1790 "cplus.met"
            }
#line 1790 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1790 "cplus.met"
        }
#line 1790 "cplus.met"
        _retValue =_ptTree0;
#line 1790 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1790 "cplus.met"
    }
#line 1790 "cplus.met"
#line 1790 "cplus.met"
#line 1790 "cplus.met"

#line 1791 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1791 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1791 "cplus.met"
return((PPTREE) 0);
#line 1791 "cplus.met"

#line 1791 "cplus.met"
typedef_and_declarator_exit :
#line 1791 "cplus.met"

#line 1791 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1791 "cplus.met"
    _funcLevel--;
#line 1791 "cplus.met"
    return((PPTREE) -1) ;
#line 1791 "cplus.met"

#line 1791 "cplus.met"
typedef_and_declarator_ret :
#line 1791 "cplus.met"
    
#line 1791 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1791 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1791 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1791 "cplus.met"
    return _retValue ;
#line 1791 "cplus.met"
}
#line 1791 "cplus.met"

#line 1791 "cplus.met"
