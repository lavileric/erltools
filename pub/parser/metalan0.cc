/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "metalang.h"


#line 226 "metalang.met"
PPTREE metalang::main_entry ( int error_free)
#line 226 "metalang.met"
{
#line 226 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 226 "metalang.met"
    int _value,_nbPre = 0 ;
#line 226 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 226 "metalang.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 226 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 226 "metalang.met"
#line 227 "metalang.met"
    {
#line 227 "metalang.met"
        PPTREE _ptTree0=0;
#line 227 "metalang.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(langage)(error_free), 13, metalang))== (PPTREE) -1 ) {
#line 227 "metalang.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 227 "metalang.met"
        }
#line 227 "metalang.met"
        _retValue =_ptTree0;
#line 227 "metalang.met"
        goto main_entry_ret;
#line 227 "metalang.met"
    }
#line 227 "metalang.met"
#line 227 "metalang.met"
#line 227 "metalang.met"

#line 228 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 228 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 228 "metalang.met"
return((PPTREE) 0);
#line 228 "metalang.met"

#line 228 "metalang.met"
main_entry_exit :
#line 228 "metalang.met"

#line 228 "metalang.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 228 "metalang.met"
    _funcLevel--;
#line 228 "metalang.met"
    return((PPTREE) -1) ;
#line 228 "metalang.met"

#line 228 "metalang.met"
main_entry_ret :
#line 228 "metalang.met"
    
#line 228 "metalang.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 228 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 228 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 228 "metalang.met"
    return _retValue ;
#line 228 "metalang.met"
}
#line 228 "metalang.met"

#line 228 "metalang.met"
#line 783 "metalang.met"
PPTREE metalang::maketree_follow ( int error_free)
#line 783 "metalang.met"
{
#line 783 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 783 "metalang.met"
    int _value,_nbPre = 0 ;
#line 783 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 783 "metalang.met"
    int _Debug = TRACE_RULE("maketree_follow",TRACE_ENTER,(PPTREE)0);
#line 783 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 783 "metalang.met"
#line 783 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 783 "metalang.met"
#line 783 "metalang.met"
    PPTREE list = (PPTREE) 0;
#line 783 "metalang.met"
#line 783 "metalang.met"
    _addlist1 = list ;
#line 783 "metalang.met"
#line 785 "metalang.met"
    do {
#line 785 "metalang.met"
#line 786 "metalang.met"
        {
#line 786 "metalang.met"
            PPTREE _ptTree0=0;
#line 786 "metalang.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(gen_param)(error_free), 11, metalang))== (PPTREE) -1 ) {
#line 786 "metalang.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(maketree_follow_exit,"maketree_follow")
#line 786 "metalang.met"
            }
#line 786 "metalang.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 786 "metalang.met"
        }
#line 786 "metalang.met"
#line 786 "metalang.met"
        if (list){
#line 786 "metalang.met"
#line 786 "metalang.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 786 "metalang.met"
        } else {
#line 786 "metalang.met"
#line 786 "metalang.met"
            list = _addlist1 ;
#line 786 "metalang.met"
        }
#line 786 "metalang.met"
#line 786 "metalang.met"
#line 787 "metalang.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 787 "metalang.met"
#line 788 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 788 "metalang.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 788 "metalang.met"
        MulFreeTree(2,_addlist1,list);
        TOKEN_EXIT(maketree_follow_exit,")")
#line 788 "metalang.met"
    } else {
#line 788 "metalang.met"
        tokenAhead = 0 ;
#line 788 "metalang.met"
    }
#line 788 "metalang.met"
#line 789 "metalang.met"
    {
#line 789 "metalang.met"
        _retValue = list ;
#line 789 "metalang.met"
        goto maketree_follow_ret;
#line 789 "metalang.met"
        
#line 789 "metalang.met"
    }
#line 789 "metalang.met"
#line 789 "metalang.met"
#line 789 "metalang.met"

#line 790 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 790 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 790 "metalang.met"
return((PPTREE) 0);
#line 790 "metalang.met"

#line 790 "metalang.met"
maketree_follow_exit :
#line 790 "metalang.met"

#line 790 "metalang.met"
    _Debug = TRACE_RULE("maketree_follow",TRACE_EXIT,(PPTREE)0);
#line 790 "metalang.met"
    _funcLevel--;
#line 790 "metalang.met"
    return((PPTREE) -1) ;
#line 790 "metalang.met"

#line 790 "metalang.met"
maketree_follow_ret :
#line 790 "metalang.met"
    
#line 790 "metalang.met"
    _Debug = TRACE_RULE("maketree_follow",TRACE_RETURN,_retValue);
#line 790 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 790 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 790 "metalang.met"
    return _retValue ;
#line 790 "metalang.met"
}
#line 790 "metalang.met"

#line 790 "metalang.met"
#line 667 "metalang.met"
PPTREE metalang::one_condition ( int error_free)
#line 667 "metalang.met"
{
#line 667 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 667 "metalang.met"
    int _value,_nbPre = 0 ;
#line 667 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 667 "metalang.met"
    int _Debug = TRACE_RULE("one_condition",TRACE_ENTER,(PPTREE)0);
#line 667 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 667 "metalang.met"
#line 667 "metalang.met"
    PPTREE ident = (PPTREE) 0,condTree = (PPTREE) 0;
#line 667 "metalang.met"
#line 669 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 669 "metalang.met"
    switch( lexEl.Value) {
#line 669 "metalang.met"
#line 670 "metalang.met"
        case SEE : 
#line 670 "metalang.met"
            tokenAhead = 0 ;
#line 670 "metalang.met"
            CommTerm();
#line 670 "metalang.met"
#line 670 "metalang.met"
            {
#line 670 "metalang.met"
                PPTREE _ptTree0=0;
#line 670 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(see_follow)(error_free), 19, metalang))== (PPTREE) -1 ) {
#line 670 "metalang.met"
                    MulFreeTree(3,_ptTree0,condTree,ident);
                    PROG_EXIT(one_condition_exit,"one_condition")
#line 670 "metalang.met"
                }
#line 670 "metalang.met"
                _retValue =_ptTree0;
#line 670 "metalang.met"
                goto one_condition_ret;
#line 670 "metalang.met"
            }
#line 670 "metalang.met"
            break;
#line 670 "metalang.met"
#line 671 "metalang.met"
        case TAKE : 
#line 671 "metalang.met"
            tokenAhead = 0 ;
#line 671 "metalang.met"
            CommTerm();
#line 671 "metalang.met"
#line 671 "metalang.met"
            {
#line 671 "metalang.met"
                PPTREE _ptTree0=0;
#line 671 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow)(error_free), 23, metalang))== (PPTREE) -1 ) {
#line 671 "metalang.met"
                    MulFreeTree(3,_ptTree0,condTree,ident);
                    PROG_EXIT(one_condition_exit,"one_condition")
#line 671 "metalang.met"
                }
#line 671 "metalang.met"
                _retValue =_ptTree0;
#line 671 "metalang.met"
                goto one_condition_ret;
#line 671 "metalang.met"
            }
#line 671 "metalang.met"
            break;
#line 671 "metalang.met"
#line 672 "metalang.met"
        case NOT : 
#line 672 "metalang.met"
            tokenAhead = 0 ;
#line 672 "metalang.met"
            CommTerm();
#line 672 "metalang.met"
#line 672 "metalang.met"
            {
#line 672 "metalang.met"
                PPTREE _ptTree0=0;
#line 672 "metalang.met"
                {
#line 672 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 672 "metalang.met"
                    _ptRes1= MakeTree(NOT, 1);
#line 672 "metalang.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(one_condition)(error_free), 16, metalang))== (PPTREE) -1 ) {
#line 672 "metalang.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,condTree,ident);
                        PROG_EXIT(one_condition_exit,"one_condition")
#line 672 "metalang.met"
                    }
#line 672 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 672 "metalang.met"
                    _ptTree0=_ptRes1;
#line 672 "metalang.met"
                }
#line 672 "metalang.met"
                _retValue =_ptTree0;
#line 672 "metalang.met"
                goto one_condition_ret;
#line 672 "metalang.met"
            }
#line 672 "metalang.met"
            break;
#line 672 "metalang.met"
#line 673 "metalang.met"
        case SEEL : 
#line 673 "metalang.met"
#line 673 "metalang.met"
            {
#line 673 "metalang.met"
                PPTREE _ptTree0=0;
#line 673 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(seel_stat)(error_free), 20, metalang))== (PPTREE) -1 ) {
#line 673 "metalang.met"
                    MulFreeTree(3,_ptTree0,condTree,ident);
                    PROG_EXIT(one_condition_exit,"one_condition")
#line 673 "metalang.met"
                }
#line 673 "metalang.met"
                _retValue =_ptTree0;
#line 673 "metalang.met"
                goto one_condition_ret;
#line 673 "metalang.met"
            }
#line 673 "metalang.met"
            break;
#line 673 "metalang.met"
#line 674 "metalang.met"
        case TAKEL : 
#line 674 "metalang.met"
#line 674 "metalang.met"
            {
#line 674 "metalang.met"
                PPTREE _ptTree0=0;
#line 674 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(takel_stat)(error_free), 24, metalang))== (PPTREE) -1 ) {
#line 674 "metalang.met"
                    MulFreeTree(3,_ptTree0,condTree,ident);
                    PROG_EXIT(one_condition_exit,"one_condition")
#line 674 "metalang.met"
                }
#line 674 "metalang.met"
                _retValue =_ptTree0;
#line 674 "metalang.met"
                goto one_condition_ret;
#line 674 "metalang.met"
            }
#line 674 "metalang.met"
            break;
#line 674 "metalang.met"
#line 675 "metalang.met"
        case IN : 
#line 675 "metalang.met"
            tokenAhead = 0 ;
#line 675 "metalang.met"
            CommTerm();
#line 675 "metalang.met"
#line 676 "metalang.met"
#line 677 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 677 "metalang.met"
            if (  !SEE_TOKEN( CONTEXT,"context") || !(CommTerm(),1)) {
#line 677 "metalang.met"
                MulFreeTree(2,condTree,ident);
                TOKEN_EXIT(one_condition_exit,"context")
#line 677 "metalang.met"
            } else {
#line 677 "metalang.met"
                tokenAhead = 0 ;
#line 677 "metalang.met"
            }
#line 677 "metalang.met"
#line 678 "metalang.met"
            {
#line 678 "metalang.met"
                PPTREE _ptTree0=0;
#line 678 "metalang.met"
                {
#line 678 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 678 "metalang.met"
                    _ptRes1= MakeTree(IN_CONTEXT, 1);
#line 678 "metalang.met"
                    {
#line 678 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 678 "metalang.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 678 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 678 "metalang.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 678 "metalang.met"
                            MulFreeTree(7,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,condTree,ident);
                            TOKEN_EXIT(one_condition_exit,"IDENT")
#line 678 "metalang.met"
                        } else {
#line 678 "metalang.met"
                            tokenAhead = 0 ;
#line 678 "metalang.met"
                        }
#line 678 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 678 "metalang.met"
                        _ptTree1=_ptRes2;
#line 678 "metalang.met"
                    }
#line 678 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 678 "metalang.met"
                    _ptTree0=_ptRes1;
#line 678 "metalang.met"
                }
#line 678 "metalang.met"
                _retValue =_ptTree0;
#line 678 "metalang.met"
                goto one_condition_ret;
#line 678 "metalang.met"
            }
#line 678 "metalang.met"
#line 678 "metalang.met"
            break;
#line 678 "metalang.met"
#line 680 "metalang.met"
        case META : 
#line 680 "metalang.met"
        case IDENT : 
#line 680 "metalang.met"
#line 681 "metalang.met"
#line 682 "metalang.met"
            {
#line 682 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 682 "metalang.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 682 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 682 "metalang.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 682 "metalang.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,condTree,ident);
                    TOKEN_EXIT(one_condition_exit,"IDENT")
#line 682 "metalang.met"
                } else {
#line 682 "metalang.met"
                    tokenAhead = 0 ;
#line 682 "metalang.met"
                }
#line 682 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 682 "metalang.met"
                ident=_ptRes0;
#line 682 "metalang.met"
            }
#line 682 "metalang.met"
#line 683 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 683 "metalang.met"
            switch( lexEl.Value) {
#line 683 "metalang.met"
#line 684 "metalang.met"
                case POUV : 
#line 684 "metalang.met"
                    tokenAhead = 0 ;
#line 684 "metalang.met"
                    CommTerm();
#line 684 "metalang.met"
#line 684 "metalang.met"
                    {
#line 684 "metalang.met"
                        PPTREE _ptTree0=0;
#line 684 "metalang.met"
                        {
#line 684 "metalang.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 684 "metalang.met"
                            _ptRes1= MakeTree(FUNC, 2);
#line 684 "metalang.met"
                            ReplaceTree(_ptRes1, 1, ident );
#line 684 "metalang.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(func_follow)(error_free), 10, metalang))== (PPTREE) -1 ) {
#line 684 "metalang.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,condTree,ident);
                                PROG_EXIT(one_condition_exit,"one_condition")
#line 684 "metalang.met"
                            }
#line 684 "metalang.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 684 "metalang.met"
                            _ptTree0=_ptRes1;
#line 684 "metalang.met"
                        }
#line 684 "metalang.met"
                        _retValue =_ptTree0;
#line 684 "metalang.met"
                        goto one_condition_ret;
#line 684 "metalang.met"
                    }
#line 684 "metalang.met"
                    break;
#line 684 "metalang.met"
#line 687 "metalang.met"
                case EGAL : 
#line 687 "metalang.met"
                    tokenAhead = 0 ;
#line 687 "metalang.met"
                    CommTerm();
#line 687 "metalang.met"
#line 686 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 686 "metalang.met"
                    switch( lexEl.Value) {
#line 686 "metalang.met"
#line 687 "metalang.met"
                        case TAKE : 
#line 687 "metalang.met"
                            tokenAhead = 0 ;
#line 687 "metalang.met"
                            CommTerm();
#line 687 "metalang.met"
#line 687 "metalang.met"
                            {
#line 687 "metalang.met"
                                PPTREE _ptTree0=0;
#line 687 "metalang.met"
                                {
#line 687 "metalang.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 687 "metalang.met"
                                    _ptRes1= MakeTree(EQUAL, 2);
#line 687 "metalang.met"
                                    ReplaceTree(_ptRes1, 1, ident );
#line 687 "metalang.met"
                                    if ( (_ptTree1=NQUICK_CALL(_Tak(take_follow)(error_free), 23, metalang))== (PPTREE) -1 ) {
#line 687 "metalang.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,condTree,ident);
                                        PROG_EXIT(one_condition_exit,"one_condition")
#line 687 "metalang.met"
                                    }
#line 687 "metalang.met"
                                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 687 "metalang.met"
                                    _ptTree0=_ptRes1;
#line 687 "metalang.met"
                                }
#line 687 "metalang.met"
                                _retValue =_ptTree0;
#line 687 "metalang.met"
                                goto one_condition_ret;
#line 687 "metalang.met"
                            }
#line 687 "metalang.met"
                            break;
#line 687 "metalang.met"
#line 691 "metalang.met"
                        case POUV : 
#line 691 "metalang.met"
                            tokenAhead = 0 ;
#line 691 "metalang.met"
                            CommTerm();
#line 691 "metalang.met"
#line 690 "metalang.met"
#line 691 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 691 "metalang.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 691 "metalang.met"
                                MulFreeTree(2,condTree,ident);
                                TOKEN_EXIT(one_condition_exit,")")
#line 691 "metalang.met"
                            } else {
#line 691 "metalang.met"
                                tokenAhead = 0 ;
#line 691 "metalang.met"
                            }
#line 691 "metalang.met"
#line 692 "metalang.met"
                            {
#line 692 "metalang.met"
                                PPTREE _ptTree0=0;
#line 692 "metalang.met"
                                {
#line 692 "metalang.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 692 "metalang.met"
                                    _ptRes1= MakeTree(EQUAL, 2);
#line 692 "metalang.met"
                                    ReplaceTree(_ptRes1, 1, ident );
#line 692 "metalang.met"
                                    {
#line 692 "metalang.met"
                                        PPTREE _ptRes2=0;
#line 692 "metalang.met"
                                        _ptRes2= MakeTree(NIL, 0);
#line 692 "metalang.met"
                                        _ptTree1=_ptRes2;
#line 692 "metalang.met"
                                    }
#line 692 "metalang.met"
                                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 692 "metalang.met"
                                    _ptTree0=_ptRes1;
#line 692 "metalang.met"
                                }
#line 692 "metalang.met"
                                _retValue =_ptTree0;
#line 692 "metalang.met"
                                goto one_condition_ret;
#line 692 "metalang.met"
                            }
#line 692 "metalang.met"
#line 692 "metalang.met"
                            break;
#line 692 "metalang.met"
#line 694 "metalang.met"
                        default : 
#line 694 "metalang.met"
#line 694 "metalang.met"
                            {
#line 694 "metalang.met"
                                PPTREE _ptTree0=0;
#line 694 "metalang.met"
                                {
#line 694 "metalang.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 694 "metalang.met"
                                    _ptRes1= MakeTree(EQUAL, 2);
#line 694 "metalang.met"
                                    ReplaceTree(_ptRes1, 1, ident );
#line 694 "metalang.met"
                                    if ( (_ptTree1=NQUICK_CALL(_Tak(expr)(error_free), 8, metalang))== (PPTREE) -1 ) {
#line 694 "metalang.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,condTree,ident);
                                        PROG_EXIT(one_condition_exit,"one_condition")
#line 694 "metalang.met"
                                    }
#line 694 "metalang.met"
                                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 694 "metalang.met"
                                    _ptTree0=_ptRes1;
#line 694 "metalang.met"
                                }
#line 694 "metalang.met"
                                _retValue =_ptTree0;
#line 694 "metalang.met"
                                goto one_condition_ret;
#line 694 "metalang.met"
                            }
#line 694 "metalang.met"
                            break;
#line 694 "metalang.met"
                    }
#line 694 "metalang.met"
                    break;
#line 694 "metalang.met"
#line 696 "metalang.met"
                default : 
#line 696 "metalang.met"
#line 696 "metalang.met"
                    {
#line 696 "metalang.met"
                        _retValue = ident ;
#line 696 "metalang.met"
                        goto one_condition_ret;
#line 696 "metalang.met"
                        
#line 696 "metalang.met"
                    }
#line 696 "metalang.met"
                    break;
#line 696 "metalang.met"
            }
#line 696 "metalang.met"
#line 696 "metalang.met"
            break;
#line 696 "metalang.met"
#line 699 "metalang.met"
        case AOUVAOUV : 
#line 699 "metalang.met"
#line 699 "metalang.met"
            {
#line 699 "metalang.met"
                PPTREE _ptTree0=0;
#line 699 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(asit)(error_free), 2, metalang))== (PPTREE) -1 ) {
#line 699 "metalang.met"
                    MulFreeTree(3,_ptTree0,condTree,ident);
                    PROG_EXIT(one_condition_exit,"one_condition")
#line 699 "metalang.met"
                }
#line 699 "metalang.met"
                _retValue =_ptTree0;
#line 699 "metalang.met"
                goto one_condition_ret;
#line 699 "metalang.met"
            }
#line 699 "metalang.met"
            break;
#line 699 "metalang.met"
#line 702 "metalang.met"
        case POUV : 
#line 702 "metalang.met"
            tokenAhead = 0 ;
#line 702 "metalang.met"
            CommTerm();
#line 702 "metalang.met"
#line 701 "metalang.met"
#line 702 "metalang.met"
            {
#line 702 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 702 "metalang.met"
                _ptRes0= MakeTree(COND, 1);
#line 702 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(condition)(error_free), 3, metalang))== (PPTREE) -1 ) {
#line 702 "metalang.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,condTree,ident);
                    PROG_EXIT(one_condition_exit,"one_condition")
#line 702 "metalang.met"
                }
#line 702 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 702 "metalang.met"
                condTree=_ptRes0;
#line 702 "metalang.met"
            }
#line 702 "metalang.met"
#line 703 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 703 "metalang.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 703 "metalang.met"
                MulFreeTree(2,condTree,ident);
                TOKEN_EXIT(one_condition_exit,")")
#line 703 "metalang.met"
            } else {
#line 703 "metalang.met"
                tokenAhead = 0 ;
#line 703 "metalang.met"
            }
#line 703 "metalang.met"
#line 704 "metalang.met"
            {
#line 704 "metalang.met"
                _retValue = condTree ;
#line 704 "metalang.met"
                goto one_condition_ret;
#line 704 "metalang.met"
                
#line 704 "metalang.met"
            }
#line 704 "metalang.met"
#line 704 "metalang.met"
            break;
#line 704 "metalang.met"
#line 706 "metalang.met"
        case DEFAULT : 
#line 706 "metalang.met"
            tokenAhead = 0 ;
#line 706 "metalang.met"
            CommTerm();
#line 706 "metalang.met"
#line 707 "metalang.met"
#line 708 "metalang.met"
            if (! (cDef)){
#line 708 "metalang.met"
#line 709 "metalang.met"
                {
#line 709 "metalang.met"
                    PPTREE _ptTree0=0;
#line 709 "metalang.met"
                    {
#line 709 "metalang.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 709 "metalang.met"
                        _ptRes1= MakeTree(SEE, 1);
#line 709 "metalang.met"
                        {
#line 709 "metalang.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 709 "metalang.met"
                            _ptRes2= MakeTree(EXCLA, 1);
#line 709 "metalang.met"
                            {
#line 709 "metalang.met"
                                PPTREE _ptRes3=0;
#line 709 "metalang.met"
                                _ptRes3= MakeTree(IDENT, 1);
#line 709 "metalang.met"
                                ReplaceTree(_ptRes3, 1, MakeString ("NOTHING"));
#line 709 "metalang.met"
                                _ptTree2=_ptRes3;
#line 709 "metalang.met"
                            }
#line 709 "metalang.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 709 "metalang.met"
                            _ptTree1=_ptRes2;
#line 709 "metalang.met"
                        }
#line 709 "metalang.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 709 "metalang.met"
                        _ptTree0=_ptRes1;
#line 709 "metalang.met"
                    }
#line 709 "metalang.met"
                    _retValue =_ptTree0;
#line 709 "metalang.met"
                    goto one_condition_ret;
#line 709 "metalang.met"
                }
#line 709 "metalang.met"
            } else {
#line 709 "metalang.met"
#line 712 "metalang.met"
                {
#line 712 "metalang.met"
                    PPTREE _ptTree0=0;
#line 712 "metalang.met"
                    {
#line 712 "metalang.met"
                        PPTREE _ptRes1=0;
#line 712 "metalang.met"
                        _ptRes1= MakeTree(SEEL, 1);
#line 712 "metalang.met"
                        _ptTree0=_ptRes1;
#line 712 "metalang.met"
                    }
#line 712 "metalang.met"
                    _retValue =_ptTree0;
#line 712 "metalang.met"
                    goto one_condition_ret;
#line 712 "metalang.met"
                }
#line 712 "metalang.met"
            }
#line 712 "metalang.met"
#line 712 "metalang.met"
            break;
#line 712 "metalang.met"
        default :
#line 712 "metalang.met"
            MulFreeTree(2,condTree,ident);
            CASE_EXIT(one_condition_exit,"either see or take or not or seel or takel or in or IDENT or {{ or ( or default")
#line 712 "metalang.met"
            break;
#line 712 "metalang.met"
    }
#line 712 "metalang.met"
#line 712 "metalang.met"
#line 714 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 714 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 714 "metalang.met"
return((PPTREE) 0);
#line 714 "metalang.met"

#line 714 "metalang.met"
one_condition_exit :
#line 714 "metalang.met"

#line 714 "metalang.met"
    _Debug = TRACE_RULE("one_condition",TRACE_EXIT,(PPTREE)0);
#line 714 "metalang.met"
    _funcLevel--;
#line 714 "metalang.met"
    return((PPTREE) -1) ;
#line 714 "metalang.met"

#line 714 "metalang.met"
one_condition_ret :
#line 714 "metalang.met"
    
#line 714 "metalang.met"
    _Debug = TRACE_RULE("one_condition",TRACE_RETURN,_retValue);
#line 714 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 714 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 714 "metalang.met"
    return _retValue ;
#line 714 "metalang.met"
}
#line 714 "metalang.met"

#line 714 "metalang.met"
#line 859 "metalang.met"
PPTREE metalang::parse_entry ( int error_free)
#line 859 "metalang.met"
{
#line 859 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 859 "metalang.met"
    int _value,_nbPre = 0 ;
#line 859 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 859 "metalang.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 859 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 859 "metalang.met"
#line 859 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 859 "metalang.met"
#line 859 "metalang.met"
    PPTREE retValue = (PPTREE) 0,list = (PPTREE) 0;
#line 859 "metalang.met"
#line 861 "metalang.met"
    if ((NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(declaration), 5, metalang)) || 
#line 861 "metalang.met"
       (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(definition), 6, metalang))){
#line 861 "metalang.met"
#line 862 "metalang.met"
        {
#line 862 "metalang.met"
            _retValue = retValue ;
#line 862 "metalang.met"
            goto parse_entry_ret;
#line 862 "metalang.met"
            
#line 862 "metalang.met"
        }
#line 862 "metalang.met"
    } else {
#line 862 "metalang.met"
#line 864 "metalang.met"
        if (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(langage), 13, metalang)){
#line 864 "metalang.met"
#line 865 "metalang.met"
            {
#line 865 "metalang.met"
                _retValue = retValue ;
#line 865 "metalang.met"
                goto parse_entry_ret;
#line 865 "metalang.met"
                
#line 865 "metalang.met"
            }
#line 865 "metalang.met"
        } else {
#line 865 "metalang.met"
#line 867 "metalang.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DECLARE,"declare") && (tokenAhead = 0,CommTerm(),1)){
#line 867 "metalang.met"
#line 868 "metalang.met"
#line 868 "metalang.met"
                _addlist1 = list ;
#line 868 "metalang.met"
#line 869 "metalang.met"
                do {
#line 869 "metalang.met"
#line 870 "metalang.met"
                    {
#line 870 "metalang.met"
                        PPTREE _ptTree0=0;
#line 870 "metalang.met"
                        {
#line 870 "metalang.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 870 "metalang.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 870 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 870 "metalang.met"
                            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 870 "metalang.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retValue);
                                TOKEN_EXIT(parse_entry_exit,"IDENT")
#line 870 "metalang.met"
                            } else {
#line 870 "metalang.met"
                                tokenAhead = 0 ;
#line 870 "metalang.met"
                            }
#line 870 "metalang.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 870 "metalang.met"
                            _ptTree0=_ptRes1;
#line 870 "metalang.met"
                        }
#line 870 "metalang.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 870 "metalang.met"
                    }
#line 870 "metalang.met"
#line 870 "metalang.met"
                    if (list){
#line 870 "metalang.met"
#line 870 "metalang.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 870 "metalang.met"
                    } else {
#line 870 "metalang.met"
#line 870 "metalang.met"
                        list = _addlist1 ;
#line 870 "metalang.met"
                    }
#line 870 "metalang.met"
#line 870 "metalang.met"
#line 871 "metalang.met"
                } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 871 "metalang.met"
#line 872 "metalang.met"
                {
#line 872 "metalang.met"
                    PPTREE _ptRes0=0;
#line 872 "metalang.met"
                    _ptRes0= MakeTree(DECLARE, 1);
#line 872 "metalang.met"
                    ReplaceTree(_ptRes0, 1, list );
#line 872 "metalang.met"
                    retValue=_ptRes0;
#line 872 "metalang.met"
                }
#line 872 "metalang.met"
#line 873 "metalang.met"
                {
#line 873 "metalang.met"
                    _retValue = retValue ;
#line 873 "metalang.met"
                    goto parse_entry_ret;
#line 873 "metalang.met"
                    
#line 873 "metalang.met"
                }
#line 873 "metalang.met"
#line 873 "metalang.met"
#line 873 "metalang.met"
            } else {
#line 873 "metalang.met"
#line 876 "metalang.met"
                if (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(condition), 3, metalang)){
#line 876 "metalang.met"
#line 877 "metalang.met"
                    {
#line 877 "metalang.met"
                        _retValue = retValue ;
#line 877 "metalang.met"
                        goto parse_entry_ret;
#line 877 "metalang.met"
                        
#line 877 "metalang.met"
                    }
#line 877 "metalang.met"
                } else {
#line 877 "metalang.met"
#line 879 "metalang.met"
                    if (NPUSH_CALL_AFF_VERIF(retValue = ,_Tak(pattern_rec), 17, metalang)){
#line 879 "metalang.met"
#line 880 "metalang.met"
                        {
#line 880 "metalang.met"
                            _retValue = retValue ;
#line 880 "metalang.met"
                            goto parse_entry_ret;
#line 880 "metalang.met"
                            
#line 880 "metalang.met"
                        }
#line 880 "metalang.met"
                    } else {
#line 880 "metalang.met"
#line 882 "metalang.met"
                        
#line 882 "metalang.met"
                        MulFreeTree(3,_addlist1,list,retValue);
                        LEX_EXIT ("",0);
#line 882 "metalang.met"
                        goto parse_entry_exit;
#line 882 "metalang.met"
                    }
#line 882 "metalang.met"
                }
#line 882 "metalang.met"
            }
#line 882 "metalang.met"
        }
#line 882 "metalang.met"
    }
#line 882 "metalang.met"
#line 883 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 883 "metalang.met"
    if (  !SEE_TOKEN( USE,"use") || !(CommTerm(),1)) {
#line 883 "metalang.met"
        MulFreeTree(3,_addlist1,list,retValue);
        TOKEN_EXIT(parse_entry_exit,"use")
#line 883 "metalang.met"
    } else {
#line 883 "metalang.met"
        tokenAhead = 0 ;
#line 883 "metalang.met"
    }
#line 883 "metalang.met"
#line 883 "metalang.met"
#line 883 "metalang.met"

#line 884 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 884 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 884 "metalang.met"
return((PPTREE) 0);
#line 884 "metalang.met"

#line 884 "metalang.met"
parse_entry_exit :
#line 884 "metalang.met"

#line 884 "metalang.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 884 "metalang.met"
    _funcLevel--;
#line 884 "metalang.met"
    return((PPTREE) -1) ;
#line 884 "metalang.met"

#line 884 "metalang.met"
parse_entry_ret :
#line 884 "metalang.met"
    
#line 884 "metalang.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 884 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 884 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 884 "metalang.met"
    return _retValue ;
#line 884 "metalang.met"
}
#line 884 "metalang.met"

#line 884 "metalang.met"
#line 468 "metalang.met"
PPTREE metalang::pattern_rec ( int error_free)
#line 468 "metalang.met"
{
#line 468 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 468 "metalang.met"
    int _value,_nbPre = 0 ;
#line 468 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 468 "metalang.met"
    int _Debug = TRACE_RULE("pattern_rec",TRACE_ENTER,(PPTREE)0);
#line 468 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 468 "metalang.met"
#line 468 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0,_addlist4 = (PPTREE) 0;
#line 468 "metalang.met"
#line 468 "metalang.met"
    PPTREE patTree = (PPTREE) 0,ident = (PPTREE) 0,list = (PPTREE) 0,switchTree = (PPTREE) 0,listskip = (PPTREE) 0;
#line 468 "metalang.met"
#line 470 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 470 "metalang.met"
    switch( lexEl.Value) {
#line 470 "metalang.met"
#line 471 "metalang.met"
        case TAKE : 
#line 471 "metalang.met"
            tokenAhead = 0 ;
#line 471 "metalang.met"
            CommTerm();
#line 471 "metalang.met"
#line 471 "metalang.met"
            if ( (patTree=NQUICK_CALL(_Tak(take_follow)(error_free), 23, metalang))== (PPTREE) -1 ) {
#line 471 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 471 "metalang.met"
            }
#line 471 "metalang.met"
            break;
#line 471 "metalang.met"
#line 472 "metalang.met"
        case RETURN : 
#line 472 "metalang.met"
            tokenAhead = 0 ;
#line 472 "metalang.met"
            CommTerm();
#line 472 "metalang.met"
#line 472 "metalang.met"
            {
#line 472 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 472 "metalang.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 472 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(gen_param)(error_free), 11, metalang))== (PPTREE) -1 ) {
#line 472 "metalang.met"
                    MulFreeTree(11,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 472 "metalang.met"
                }
#line 472 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 472 "metalang.met"
                patTree=_ptRes0;
#line 472 "metalang.met"
            }
#line 472 "metalang.met"
            break;
#line 472 "metalang.met"
#line 473 "metalang.met"
        case STORE_COMMENT_LINE : 
#line 473 "metalang.met"
            tokenAhead = 0 ;
#line 473 "metalang.met"
            CommTerm();
#line 473 "metalang.met"
#line 474 "metalang.met"
#line 475 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 475 "metalang.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 475 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"(")
#line 475 "metalang.met"
            } else {
#line 475 "metalang.met"
                tokenAhead = 0 ;
#line 475 "metalang.met"
            }
#line 475 "metalang.met"
#line 476 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 476 "metalang.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 476 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,")")
#line 476 "metalang.met"
            } else {
#line 476 "metalang.met"
                tokenAhead = 0 ;
#line 476 "metalang.met"
            }
#line 476 "metalang.met"
#line 477 "metalang.met"
            {
#line 477 "metalang.met"
                PPTREE _ptTree0=0;
#line 477 "metalang.met"
                {
#line 477 "metalang.met"
                    PPTREE _ptRes1=0;
#line 477 "metalang.met"
                    _ptRes1= MakeTree(STORE_COMMENT_LINE, 0);
#line 477 "metalang.met"
                    _ptTree0=_ptRes1;
#line 477 "metalang.met"
                }
#line 477 "metalang.met"
                _retValue =_ptTree0;
#line 477 "metalang.met"
                goto pattern_rec_ret;
#line 477 "metalang.met"
            }
#line 477 "metalang.met"
#line 477 "metalang.met"
            break;
#line 477 "metalang.met"
#line 479 "metalang.met"
        case SKIP : 
#line 479 "metalang.met"
            tokenAhead = 0 ;
#line 479 "metalang.met"
            CommTerm();
#line 479 "metalang.met"
#line 480 "metalang.met"
#line 480 "metalang.met"
            _addlist2 = listskip ;
#line 480 "metalang.met"
#line 481 "metalang.met"
            do {
#line 481 "metalang.met"
#line 482 "metalang.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")){
#line 482 "metalang.met"
#line 483 "metalang.met"
#line 483 "metalang.met"
                    {
#line 483 "metalang.met"
                        PPTREE _ptTree0=0;
#line 483 "metalang.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(set)(error_free), 21, metalang))== (PPTREE) -1 ) {
#line 483 "metalang.met"
                            MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                            PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 483 "metalang.met"
                        }
#line 483 "metalang.met"
                        _addlist2 =AddList(_addlist2 , _ptTree0);
#line 483 "metalang.met"
                    }
#line 483 "metalang.met"
#line 483 "metalang.met"
                    if (listskip){
#line 483 "metalang.met"
#line 483 "metalang.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 483 "metalang.met"
                    } else {
#line 483 "metalang.met"
#line 483 "metalang.met"
                        listskip = _addlist2 ;
#line 483 "metalang.met"
                    }
#line 483 "metalang.met"
                } else {
#line 483 "metalang.met"
#line 485 "metalang.met"
#line 485 "metalang.met"
                    {
#line 485 "metalang.met"
                        PPTREE _ptTree0=0;
#line 485 "metalang.met"
                        {
#line 485 "metalang.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 485 "metalang.met"
                            _ptRes1= MakeTree(CHARACTER, 1);
#line 485 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 485 "metalang.met"
                            if ( ! TERM_OR_META(CHARACTER,"CHARACTER") || !(BUILD_TERM_META(_ptTree1))) {
#line 485 "metalang.met"
                                MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                TOKEN_EXIT(pattern_rec_exit,"CHARACTER")
#line 485 "metalang.met"
                            } else {
#line 485 "metalang.met"
                                tokenAhead = 0 ;
#line 485 "metalang.met"
                            }
#line 485 "metalang.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 485 "metalang.met"
                            _ptTree0=_ptRes1;
#line 485 "metalang.met"
                        }
#line 485 "metalang.met"
                        _addlist2 =AddList(_addlist2 , _ptTree0);
#line 485 "metalang.met"
                    }
#line 485 "metalang.met"
#line 485 "metalang.met"
                    if (listskip){
#line 485 "metalang.met"
#line 485 "metalang.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 485 "metalang.met"
                    } else {
#line 485 "metalang.met"
#line 485 "metalang.met"
                        listskip = _addlist2 ;
#line 485 "metalang.met"
                    }
#line 485 "metalang.met"
                }
#line 485 "metalang.met"
#line 485 "metalang.met"
#line 486 "metalang.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 486 "metalang.met"
#line 487 "metalang.met"
            {
#line 487 "metalang.met"
                PPTREE _ptTree0=0;
#line 487 "metalang.met"
                {
#line 487 "metalang.met"
                    PPTREE _ptRes1=0;
#line 487 "metalang.met"
                    _ptRes1= MakeTree(SKIP, 1);
#line 487 "metalang.met"
                    ReplaceTree(_ptRes1, 1, listskip );
#line 487 "metalang.met"
                    _ptTree0=_ptRes1;
#line 487 "metalang.met"
                }
#line 487 "metalang.met"
                _retValue =_ptTree0;
#line 487 "metalang.met"
                goto pattern_rec_ret;
#line 487 "metalang.met"
            }
#line 487 "metalang.met"
#line 487 "metalang.met"
            break;
#line 487 "metalang.met"
#line 489 "metalang.met"
        case REPLACETREE : 
#line 489 "metalang.met"
            tokenAhead = 0 ;
#line 489 "metalang.met"
            CommTerm();
#line 489 "metalang.met"
#line 490 "metalang.met"
#line 491 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 491 "metalang.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 491 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"(")
#line 491 "metalang.met"
            } else {
#line 491 "metalang.met"
                tokenAhead = 0 ;
#line 491 "metalang.met"
            }
#line 491 "metalang.met"
#line 492 "metalang.met"
            {
#line 492 "metalang.met"
                PPTREE _ptTree0=0;
#line 492 "metalang.met"
                {
#line 492 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 492 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 492 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 492 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 492 "metalang.met"
                        MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        TOKEN_EXIT(pattern_rec_exit,"IDENT")
#line 492 "metalang.met"
                    } else {
#line 492 "metalang.met"
                        tokenAhead = 0 ;
#line 492 "metalang.met"
                    }
#line 492 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 492 "metalang.met"
                    _ptTree0=_ptRes1;
#line 492 "metalang.met"
                }
#line 492 "metalang.met"
                list =AddList(list , _ptTree0);
#line 492 "metalang.met"
            }
#line 492 "metalang.met"
#line 493 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 493 "metalang.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 493 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,",")
#line 493 "metalang.met"
            } else {
#line 493 "metalang.met"
                tokenAhead = 0 ;
#line 493 "metalang.met"
            }
#line 493 "metalang.met"
#line 494 "metalang.met"
            {
#line 494 "metalang.met"
                PPTREE _ptTree0=0;
#line 494 "metalang.met"
                {
#line 494 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 494 "metalang.met"
                    _ptRes1= MakeTree(NUMB, 1);
#line 494 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 494 "metalang.met"
                    if ( ! TERM_OR_META(NUMB,"NUMB") || !(BUILD_TERM_META(_ptTree1))) {
#line 494 "metalang.met"
                        MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        TOKEN_EXIT(pattern_rec_exit,"NUMB")
#line 494 "metalang.met"
                    } else {
#line 494 "metalang.met"
                        tokenAhead = 0 ;
#line 494 "metalang.met"
                    }
#line 494 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 494 "metalang.met"
                    _ptTree0=_ptRes1;
#line 494 "metalang.met"
                }
#line 494 "metalang.met"
                list =AddList(list , _ptTree0);
#line 494 "metalang.met"
            }
#line 494 "metalang.met"
#line 495 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 495 "metalang.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 495 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,",")
#line 495 "metalang.met"
            } else {
#line 495 "metalang.met"
                tokenAhead = 0 ;
#line 495 "metalang.met"
            }
#line 495 "metalang.met"
#line 496 "metalang.met"
            {
#line 496 "metalang.met"
                PPTREE _ptTree0=0;
#line 496 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(gen_param)(error_free), 11, metalang))== (PPTREE) -1 ) {
#line 496 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 496 "metalang.met"
                }
#line 496 "metalang.met"
                list =AddList(list , _ptTree0);
#line 496 "metalang.met"
            }
#line 496 "metalang.met"
#line 497 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 497 "metalang.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 497 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,")")
#line 497 "metalang.met"
            } else {
#line 497 "metalang.met"
                tokenAhead = 0 ;
#line 497 "metalang.met"
            }
#line 497 "metalang.met"
#line 498 "metalang.met"
            {
#line 498 "metalang.met"
                PPTREE _ptRes0=0;
#line 498 "metalang.met"
                _ptRes0= MakeTree(REPLACETREE, 1);
#line 498 "metalang.met"
                ReplaceTree(_ptRes0, 1, list );
#line 498 "metalang.met"
                patTree=_ptRes0;
#line 498 "metalang.met"
            }
#line 498 "metalang.met"
#line 498 "metalang.met"
            break;
#line 498 "metalang.met"
#line 500 "metalang.met"
        case ADDLIST : 
#line 500 "metalang.met"
            tokenAhead = 0 ;
#line 500 "metalang.met"
            CommTerm();
#line 500 "metalang.met"
#line 501 "metalang.met"
#line 502 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 502 "metalang.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 502 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"(")
#line 502 "metalang.met"
            } else {
#line 502 "metalang.met"
                tokenAhead = 0 ;
#line 502 "metalang.met"
            }
#line 502 "metalang.met"
#line 503 "metalang.met"
            {
#line 503 "metalang.met"
                PPTREE _ptTree0=0;
#line 503 "metalang.met"
                {
#line 503 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 503 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 503 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 503 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 503 "metalang.met"
                        MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        TOKEN_EXIT(pattern_rec_exit,"IDENT")
#line 503 "metalang.met"
                    } else {
#line 503 "metalang.met"
                        tokenAhead = 0 ;
#line 503 "metalang.met"
                    }
#line 503 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 503 "metalang.met"
                    _ptTree0=_ptRes1;
#line 503 "metalang.met"
                }
#line 503 "metalang.met"
                list =AddList(list , _ptTree0);
#line 503 "metalang.met"
            }
#line 503 "metalang.met"
#line 504 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 504 "metalang.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 504 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,",")
#line 504 "metalang.met"
            } else {
#line 504 "metalang.met"
                tokenAhead = 0 ;
#line 504 "metalang.met"
            }
#line 504 "metalang.met"
#line 505 "metalang.met"
            {
#line 505 "metalang.met"
                PPTREE _ptTree0=0;
#line 505 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(gen_param)(error_free), 11, metalang))== (PPTREE) -1 ) {
#line 505 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 505 "metalang.met"
                }
#line 505 "metalang.met"
                list =AddList(list , _ptTree0);
#line 505 "metalang.met"
            }
#line 505 "metalang.met"
#line 506 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 506 "metalang.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 506 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,")")
#line 506 "metalang.met"
            } else {
#line 506 "metalang.met"
                tokenAhead = 0 ;
#line 506 "metalang.met"
            }
#line 506 "metalang.met"
#line 507 "metalang.met"
            {
#line 507 "metalang.met"
                PPTREE _ptRes0=0;
#line 507 "metalang.met"
                _ptRes0= MakeTree(ADDLIST, 1);
#line 507 "metalang.met"
                ReplaceTree(_ptRes0, 1, list );
#line 507 "metalang.met"
                patTree=_ptRes0;
#line 507 "metalang.met"
            }
#line 507 "metalang.met"
#line 507 "metalang.met"
            break;
#line 507 "metalang.met"
#line 509 "metalang.met"
        case META : 
#line 509 "metalang.met"
        case IDENT : 
#line 509 "metalang.met"
#line 510 "metalang.met"
#line 511 "metalang.met"
             { int is_meta;
#line 511 "metalang.met"
#line 512 "metalang.met"
            if ((tokenAhead == 5|| (LexMeta(),TRACE_LEX(1)))&&SEE_TOKEN( META,"META")){
#line 512 "metalang.met"
#line 513 "metalang.met"
                 is_meta=1;
#line 513 "metalang.met"
            } else {
#line 513 "metalang.met"
#line 515 "metalang.met"
                 is_meta=0;
#line 515 "metalang.met"
            }
#line 515 "metalang.met"
#line 516 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 516 "metalang.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(ident))) {
#line 516 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"IDENT")
#line 516 "metalang.met"
            } else {
#line 516 "metalang.met"
                tokenAhead = 0 ;
#line 516 "metalang.met"
            }
#line 516 "metalang.met"
#line 517 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 517 "metalang.met"
            switch( lexEl.Value) {
#line 517 "metalang.met"
#line 520 "metalang.met"
                case EGAL : 
#line 520 "metalang.met"
                    tokenAhead = 0 ;
#line 520 "metalang.met"
                    CommTerm();
#line 520 "metalang.met"
#line 519 "metalang.met"
#line 520 "metalang.met"
                    {
#line 520 "metalang.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 520 "metalang.met"
                        _ptRes0= MakeTree(EQUAL, 2);
#line 520 "metalang.met"
                        {
#line 520 "metalang.met"
                            PPTREE _ptRes1=0;
#line 520 "metalang.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 520 "metalang.met"
                            ReplaceTree(_ptRes1, 1, ident );
#line 520 "metalang.met"
                            _ptTree0=_ptRes1;
#line 520 "metalang.met"
                        }
#line 520 "metalang.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 520 "metalang.met"
                        patTree=_ptRes0;
#line 520 "metalang.met"
                    }
#line 520 "metalang.met"
#line 521 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 521 "metalang.met"
                    switch( lexEl.Value) {
#line 521 "metalang.met"
#line 522 "metalang.met"
                        case TAKE : 
#line 522 "metalang.met"
                            tokenAhead = 0 ;
#line 522 "metalang.met"
                            CommTerm();
#line 522 "metalang.met"
#line 522 "metalang.met"
                            {
#line 522 "metalang.met"
                                PPTREE _ptTree0=0;
#line 522 "metalang.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow)(error_free), 23, metalang))== (PPTREE) -1 ) {
#line 522 "metalang.met"
                                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 522 "metalang.met"
                                }
#line 522 "metalang.met"
                                ReplaceTree(patTree , 2 , _ptTree0);
#line 522 "metalang.met"
                            }
#line 522 "metalang.met"
                            break;
#line 522 "metalang.met"
#line 524 "metalang.met"
                        case META : 
#line 524 "metalang.met"
                        case IDENT : 
#line 524 "metalang.met"
#line 525 "metalang.met"
#line 526 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 526 "metalang.met"
                            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(ident))) {
#line 526 "metalang.met"
                                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                TOKEN_EXIT(pattern_rec_exit,"IDENT")
#line 526 "metalang.met"
                            } else {
#line 526 "metalang.met"
                                tokenAhead = 0 ;
#line 526 "metalang.met"
                            }
#line 526 "metalang.met"
#line 527 "metalang.met"
                            if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))){
#line 527 "metalang.met"
#line 528 "metalang.met"
                                {
#line 528 "metalang.met"
                                    PPTREE _ptTree0=0;
#line 528 "metalang.met"
                                    {
#line 528 "metalang.met"
                                        PPTREE _ptRes1=0;
#line 528 "metalang.met"
                                        _ptRes1= MakeTree(IDENT, 1);
#line 528 "metalang.met"
                                        ReplaceTree(_ptRes1, 1, ident );
#line 528 "metalang.met"
                                        _ptTree0=_ptRes1;
#line 528 "metalang.met"
                                    }
#line 528 "metalang.met"
                                    ReplaceTree(patTree , 2 , _ptTree0);
#line 528 "metalang.met"
                                }
#line 528 "metalang.met"
#line 528 "metalang.met"
                            } else {
#line 528 "metalang.met"
#line 530 "metalang.met"
#line 531 "metalang.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 531 "metalang.met"
                                if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 531 "metalang.met"
                                    MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                    TOKEN_EXIT(pattern_rec_exit,"(")
#line 531 "metalang.met"
                                } else {
#line 531 "metalang.met"
                                    tokenAhead = 0 ;
#line 531 "metalang.met"
                                }
#line 531 "metalang.met"
#line 532 "metalang.met"
                                {
#line 532 "metalang.met"
                                    PPTREE _ptTree0=0;
#line 532 "metalang.met"
                                    {
#line 532 "metalang.met"
                                        PPTREE _ptTree1=0,_ptRes1=0;
#line 532 "metalang.met"
                                        _ptRes1= MakeTree(FUNC, 2);
#line 532 "metalang.met"
                                        {
#line 532 "metalang.met"
                                            PPTREE _ptRes2=0;
#line 532 "metalang.met"
                                            _ptRes2= MakeTree(IDENT, 1);
#line 532 "metalang.met"
                                            ReplaceTree(_ptRes2, 1, ident );
#line 532 "metalang.met"
                                            _ptTree1=_ptRes2;
#line 532 "metalang.met"
                                        }
#line 532 "metalang.met"
                                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 532 "metalang.met"
                                        if ( (_ptTree1=NQUICK_CALL(_Tak(func_follow)(error_free), 10, metalang))== (PPTREE) -1 ) {
#line 532 "metalang.met"
                                            MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                            PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 532 "metalang.met"
                                        }
#line 532 "metalang.met"
                                        ReplaceTree(_ptRes1, 2, _ptTree1);
#line 532 "metalang.met"
                                        _ptTree0=_ptRes1;
#line 532 "metalang.met"
                                    }
#line 532 "metalang.met"
                                    ReplaceTree(patTree , 2 , _ptTree0);
#line 532 "metalang.met"
                                }
#line 532 "metalang.met"
#line 532 "metalang.met"
                            }
#line 532 "metalang.met"
#line 532 "metalang.met"
                            break;
#line 532 "metalang.met"
#line 537 "metalang.met"
                        case MAKETREE : 
#line 537 "metalang.met"
                            tokenAhead = 0 ;
#line 537 "metalang.met"
                            CommTerm();
#line 537 "metalang.met"
#line 538 "metalang.met"
#line 539 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 539 "metalang.met"
                            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 539 "metalang.met"
                                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                TOKEN_EXIT(pattern_rec_exit,"(")
#line 539 "metalang.met"
                            } else {
#line 539 "metalang.met"
                                tokenAhead = 0 ;
#line 539 "metalang.met"
                            }
#line 539 "metalang.met"
#line 540 "metalang.met"
                            {
#line 540 "metalang.met"
                                PPTREE _ptTree0=0;
#line 540 "metalang.met"
                                {
#line 540 "metalang.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 540 "metalang.met"
                                    _ptRes1= MakeTree(MAKETREE, 1);
#line 540 "metalang.met"
                                    if ( (_ptTree1=NQUICK_CALL(_Tak(maketree_follow)(error_free), 15, metalang))== (PPTREE) -1 ) {
#line 540 "metalang.met"
                                        MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                        PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 540 "metalang.met"
                                    }
#line 540 "metalang.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 540 "metalang.met"
                                    _ptTree0=_ptRes1;
#line 540 "metalang.met"
                                }
#line 540 "metalang.met"
                                ReplaceTree(patTree , 2 , _ptTree0);
#line 540 "metalang.met"
                            }
#line 540 "metalang.met"
#line 540 "metalang.met"
                            break;
#line 540 "metalang.met"
#line 543 "metalang.met"
                        case ADDLIST : 
#line 543 "metalang.met"
                            tokenAhead = 0 ;
#line 543 "metalang.met"
                            CommTerm();
#line 543 "metalang.met"
#line 544 "metalang.met"
#line 545 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 545 "metalang.met"
                            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 545 "metalang.met"
                                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                TOKEN_EXIT(pattern_rec_exit,"(")
#line 545 "metalang.met"
                            } else {
#line 545 "metalang.met"
                                tokenAhead = 0 ;
#line 545 "metalang.met"
                            }
#line 545 "metalang.met"
#line 546 "metalang.met"
                            {
#line 546 "metalang.met"
                                PPTREE _ptTree0=0;
#line 546 "metalang.met"
                                {
#line 546 "metalang.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 546 "metalang.met"
                                    _ptRes1= MakeTree(IDENT, 1);
#line 546 "metalang.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 546 "metalang.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 546 "metalang.met"
                                        MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                        TOKEN_EXIT(pattern_rec_exit,"IDENT")
#line 546 "metalang.met"
                                    } else {
#line 546 "metalang.met"
                                        tokenAhead = 0 ;
#line 546 "metalang.met"
                                    }
#line 546 "metalang.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 546 "metalang.met"
                                    _ptTree0=_ptRes1;
#line 546 "metalang.met"
                                }
#line 546 "metalang.met"
                                list =AddList(list , _ptTree0);
#line 546 "metalang.met"
                            }
#line 546 "metalang.met"
#line 547 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 547 "metalang.met"
                            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 547 "metalang.met"
                                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                TOKEN_EXIT(pattern_rec_exit,",")
#line 547 "metalang.met"
                            } else {
#line 547 "metalang.met"
                                tokenAhead = 0 ;
#line 547 "metalang.met"
                            }
#line 547 "metalang.met"
#line 548 "metalang.met"
                            {
#line 548 "metalang.met"
                                PPTREE _ptTree0=0;
#line 548 "metalang.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(gen_param)(error_free), 11, metalang))== (PPTREE) -1 ) {
#line 548 "metalang.met"
                                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 548 "metalang.met"
                                }
#line 548 "metalang.met"
                                list =AddList(list , _ptTree0);
#line 548 "metalang.met"
                            }
#line 548 "metalang.met"
#line 549 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 549 "metalang.met"
                            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 549 "metalang.met"
                                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                TOKEN_EXIT(pattern_rec_exit,"(")
#line 549 "metalang.met"
                            } else {
#line 549 "metalang.met"
                                tokenAhead = 0 ;
#line 549 "metalang.met"
                            }
#line 549 "metalang.met"
#line 550 "metalang.met"
                            {
#line 550 "metalang.met"
                                PPTREE _ptTree0=0;
#line 550 "metalang.met"
                                {
#line 550 "metalang.met"
                                    PPTREE _ptRes1=0;
#line 550 "metalang.met"
                                    _ptRes1= MakeTree(ADDLIST, 1);
#line 550 "metalang.met"
                                    ReplaceTree(_ptRes1, 1, list );
#line 550 "metalang.met"
                                    _ptTree0=_ptRes1;
#line 550 "metalang.met"
                                }
#line 550 "metalang.met"
                                ReplaceTree(patTree , 2 , _ptTree0);
#line 550 "metalang.met"
                            }
#line 550 "metalang.met"
#line 550 "metalang.met"
                            break;
#line 550 "metalang.met"
#line 554 "metalang.met"
                        case POUV : 
#line 554 "metalang.met"
                            tokenAhead = 0 ;
#line 554 "metalang.met"
                            CommTerm();
#line 554 "metalang.met"
#line 553 "metalang.met"
#line 554 "metalang.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 554 "metalang.met"
                            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 554 "metalang.met"
                                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                                TOKEN_EXIT(pattern_rec_exit,")")
#line 554 "metalang.met"
                            } else {
#line 554 "metalang.met"
                                tokenAhead = 0 ;
#line 554 "metalang.met"
                            }
#line 554 "metalang.met"
#line 555 "metalang.met"
                            {
#line 555 "metalang.met"
                                PPTREE _ptTree0=0;
#line 555 "metalang.met"
                                {
#line 555 "metalang.met"
                                    PPTREE _ptRes1=0;
#line 555 "metalang.met"
                                    _ptRes1= MakeTree(NIL, 0);
#line 555 "metalang.met"
                                    _ptTree0=_ptRes1;
#line 555 "metalang.met"
                                }
#line 555 "metalang.met"
                                ReplaceTree(patTree , 2 , _ptTree0);
#line 555 "metalang.met"
                            }
#line 555 "metalang.met"
#line 555 "metalang.met"
                            break;
#line 555 "metalang.met"
                        default :
#line 555 "metalang.met"
                            MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                            CASE_EXIT(pattern_rec_exit,"either take or IDENT or maketree or addlist or (")
#line 555 "metalang.met"
                            break;
#line 555 "metalang.met"
                    }
#line 555 "metalang.met"
#line 555 "metalang.met"
                    break;
#line 555 "metalang.met"
#line 559 "metalang.met"
                case POUV : 
#line 559 "metalang.met"
                    tokenAhead = 0 ;
#line 559 "metalang.met"
                    CommTerm();
#line 559 "metalang.met"
#line 559 "metalang.met"
                    {
#line 559 "metalang.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 559 "metalang.met"
                        _ptRes0= MakeTree(FUNC, 2);
#line 559 "metalang.met"
                        {
#line 559 "metalang.met"
                            PPTREE _ptRes1=0;
#line 559 "metalang.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 559 "metalang.met"
                            ReplaceTree(_ptRes1, 1, ident );
#line 559 "metalang.met"
                            _ptTree0=_ptRes1;
#line 559 "metalang.met"
                        }
#line 559 "metalang.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 559 "metalang.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(func_follow)(error_free), 10, metalang))== (PPTREE) -1 ) {
#line 559 "metalang.met"
                            MulFreeTree(11,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                            PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 559 "metalang.met"
                        }
#line 559 "metalang.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 559 "metalang.met"
                        patTree=_ptRes0;
#line 559 "metalang.met"
                    }
#line 559 "metalang.met"
                    break;
#line 559 "metalang.met"
#line 562 "metalang.met"
                default : 
#line 562 "metalang.met"
#line 562 "metalang.met"
                    if ( is_meta ){
#line 562 "metalang.met"
#line 563 "metalang.met"
                        {
#line 563 "metalang.met"
                            PPTREE _ptRes0=0;
#line 563 "metalang.met"
                            _ptRes0= MakeTree(META, 1);
#line 563 "metalang.met"
                            ReplaceTree(_ptRes0, 1, ident );
#line 563 "metalang.met"
                            patTree=_ptRes0;
#line 563 "metalang.met"
                        }
#line 563 "metalang.met"
                    } else {
#line 563 "metalang.met"
#line 565 "metalang.met"
                        
#line 565 "metalang.met"
                        MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        LEX_EXIT ("",0);
#line 565 "metalang.met"
                        goto pattern_rec_exit;
#line 565 "metalang.met"
                    }
#line 565 "metalang.met"
                    break;
#line 565 "metalang.met"
            }
#line 565 "metalang.met"
#line 567 "metalang.met"
             } 
#line 567 "metalang.met"
#line 567 "metalang.met"
            break;
#line 567 "metalang.met"
#line 569 "metalang.met"
        case WITH : 
#line 569 "metalang.met"
            tokenAhead = 0 ;
#line 569 "metalang.met"
            CommTerm();
#line 569 "metalang.met"
#line 570 "metalang.met"
#line 571 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 571 "metalang.met"
            if (  !SEE_TOKEN( CONTEXT,"context") || !(CommTerm(),1)) {
#line 571 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"context")
#line 571 "metalang.met"
            } else {
#line 571 "metalang.met"
                tokenAhead = 0 ;
#line 571 "metalang.met"
            }
#line 571 "metalang.met"
#line 572 "metalang.met"
            {
#line 572 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 572 "metalang.met"
                _ptRes0= MakeTree(WITH_CONTEXT, 2);
#line 572 "metalang.met"
                {
#line 572 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 572 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 572 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 572 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 572 "metalang.met"
                        MulFreeTree(13,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        TOKEN_EXIT(pattern_rec_exit,"IDENT")
#line 572 "metalang.met"
                    } else {
#line 572 "metalang.met"
                        tokenAhead = 0 ;
#line 572 "metalang.met"
                    }
#line 572 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 572 "metalang.met"
                    _ptTree0=_ptRes1;
#line 572 "metalang.met"
                }
#line 572 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 572 "metalang.met"
                patTree=_ptRes0;
#line 572 "metalang.met"
            }
#line 572 "metalang.met"
#line 573 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 573 "metalang.met"
            if (  !SEE_TOKEN( DO,"do") || !(CommTerm(),1)) {
#line 573 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"do")
#line 573 "metalang.met"
            } else {
#line 573 "metalang.met"
                tokenAhead = 0 ;
#line 573 "metalang.met"
            }
#line 573 "metalang.met"
#line 574 "metalang.met"
            {
#line 574 "metalang.met"
                PPTREE _ptTree0=0;
#line 574 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 574 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 574 "metalang.met"
                }
#line 574 "metalang.met"
                ReplaceTree(patTree , 2 , _ptTree0);
#line 574 "metalang.met"
            }
#line 574 "metalang.met"
#line 574 "metalang.met"
            break;
#line 574 "metalang.met"
#line 576 "metalang.met"
        case WITHOUT : 
#line 576 "metalang.met"
            tokenAhead = 0 ;
#line 576 "metalang.met"
            CommTerm();
#line 576 "metalang.met"
#line 577 "metalang.met"
#line 578 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 578 "metalang.met"
            if (  !SEE_TOKEN( CONTEXT,"context") || !(CommTerm(),1)) {
#line 578 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"context")
#line 578 "metalang.met"
            } else {
#line 578 "metalang.met"
                tokenAhead = 0 ;
#line 578 "metalang.met"
            }
#line 578 "metalang.met"
#line 579 "metalang.met"
            {
#line 579 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 579 "metalang.met"
                _ptRes0= MakeTree(WITHOUT_CONTEXT, 2);
#line 579 "metalang.met"
                {
#line 579 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 579 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 579 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 579 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 579 "metalang.met"
                        MulFreeTree(13,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        TOKEN_EXIT(pattern_rec_exit,"IDENT")
#line 579 "metalang.met"
                    } else {
#line 579 "metalang.met"
                        tokenAhead = 0 ;
#line 579 "metalang.met"
                    }
#line 579 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 579 "metalang.met"
                    _ptTree0=_ptRes1;
#line 579 "metalang.met"
                }
#line 579 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 579 "metalang.met"
                patTree=_ptRes0;
#line 579 "metalang.met"
            }
#line 579 "metalang.met"
#line 581 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 581 "metalang.met"
            if (  !SEE_TOKEN( DO,"do") || !(CommTerm(),1)) {
#line 581 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"do")
#line 581 "metalang.met"
            } else {
#line 581 "metalang.met"
                tokenAhead = 0 ;
#line 581 "metalang.met"
            }
#line 581 "metalang.met"
#line 582 "metalang.met"
            {
#line 582 "metalang.met"
                PPTREE _ptTree0=0;
#line 582 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 582 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 582 "metalang.met"
                }
#line 582 "metalang.met"
                ReplaceTree(patTree , 2 , _ptTree0);
#line 582 "metalang.met"
            }
#line 582 "metalang.met"
#line 582 "metalang.met"
            break;
#line 582 "metalang.met"
#line 584 "metalang.met"
        case REPEAT : 
#line 584 "metalang.met"
            tokenAhead = 0 ;
#line 584 "metalang.met"
            CommTerm();
#line 584 "metalang.met"
#line 585 "metalang.met"
#line 585 "metalang.met"
            _addlist3 = list ;
#line 585 "metalang.met"
#line 586 "metalang.met"
            do {
#line 586 "metalang.met"
#line 587 "metalang.met"
                {
#line 587 "metalang.met"
                    PPTREE _ptTree0=0;
#line 587 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 587 "metalang.met"
                        MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 587 "metalang.met"
                    }
#line 587 "metalang.met"
                    _addlist3 =AddList(_addlist3 , _ptTree0);
#line 587 "metalang.met"
                }
#line 587 "metalang.met"
#line 587 "metalang.met"
                if (list){
#line 587 "metalang.met"
#line 587 "metalang.met"
                    _addlist3 = SonTree (_addlist3 ,2 );
#line 587 "metalang.met"
                } else {
#line 587 "metalang.met"
#line 587 "metalang.met"
                    list = _addlist3 ;
#line 587 "metalang.met"
                }
#line 587 "metalang.met"
#line 587 "metalang.met"
#line 588 "metalang.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 588 "metalang.met"
#line 589 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 589 "metalang.met"
            if (  !SEE_TOKEN( UNTIL,"until") || !(CommTerm(),1)) {
#line 589 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"until")
#line 589 "metalang.met"
            } else {
#line 589 "metalang.met"
                tokenAhead = 0 ;
#line 589 "metalang.met"
            }
#line 589 "metalang.met"
#line 590 "metalang.met"
            {
#line 590 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 590 "metalang.met"
                _ptRes0= MakeTree(REPEAT, 2);
#line 590 "metalang.met"
                ReplaceTree(_ptRes0, 1, list );
#line 590 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(condition)(error_free), 3, metalang))== (PPTREE) -1 ) {
#line 590 "metalang.met"
                    MulFreeTree(11,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 590 "metalang.met"
                }
#line 590 "metalang.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 590 "metalang.met"
                patTree=_ptRes0;
#line 590 "metalang.met"
            }
#line 590 "metalang.met"
#line 590 "metalang.met"
            break;
#line 590 "metalang.met"
#line 592 "metalang.met"
        case IF : 
#line 592 "metalang.met"
            tokenAhead = 0 ;
#line 592 "metalang.met"
            CommTerm();
#line 592 "metalang.met"
#line 593 "metalang.met"
#line 594 "metalang.met"
            {
#line 594 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 594 "metalang.met"
                _ptRes0= MakeTree(IF, 3);
#line 594 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(condition)(error_free), 3, metalang))== (PPTREE) -1 ) {
#line 594 "metalang.met"
                    MulFreeTree(11,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 594 "metalang.met"
                }
#line 594 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 594 "metalang.met"
                patTree=_ptRes0;
#line 594 "metalang.met"
            }
#line 594 "metalang.met"
#line 595 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 595 "metalang.met"
            if (  !SEE_TOKEN( THEN,"then") || !(CommTerm(),1)) {
#line 595 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"then")
#line 595 "metalang.met"
            } else {
#line 595 "metalang.met"
                tokenAhead = 0 ;
#line 595 "metalang.met"
            }
#line 595 "metalang.met"
#line 596 "metalang.met"
            {
#line 596 "metalang.met"
                PPTREE _ptTree0=0;
#line 596 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 596 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 596 "metalang.met"
                }
#line 596 "metalang.met"
                ReplaceTree(patTree , 2 , _ptTree0);
#line 596 "metalang.met"
            }
#line 596 "metalang.met"
#line 597 "metalang.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 597 "metalang.met"
#line 598 "metalang.met"
                {
#line 598 "metalang.met"
                    PPTREE _ptTree0=0;
#line 598 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 598 "metalang.met"
                        MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 598 "metalang.met"
                    }
#line 598 "metalang.met"
                    ReplaceTree(patTree , 3 , _ptTree0);
#line 598 "metalang.met"
                }
#line 598 "metalang.met"
#line 598 "metalang.met"
            }
#line 598 "metalang.met"
#line 598 "metalang.met"
            break;
#line 598 "metalang.met"
#line 600 "metalang.met"
        case WHILE : 
#line 600 "metalang.met"
            tokenAhead = 0 ;
#line 600 "metalang.met"
            CommTerm();
#line 600 "metalang.met"
#line 601 "metalang.met"
#line 602 "metalang.met"
            {
#line 602 "metalang.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 602 "metalang.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 602 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(condition)(error_free), 3, metalang))== (PPTREE) -1 ) {
#line 602 "metalang.met"
                    MulFreeTree(11,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 602 "metalang.met"
                }
#line 602 "metalang.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 602 "metalang.met"
                patTree=_ptRes0;
#line 602 "metalang.met"
            }
#line 602 "metalang.met"
#line 603 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 603 "metalang.met"
            if (  !SEE_TOKEN( DO,"do") || !(CommTerm(),1)) {
#line 603 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"do")
#line 603 "metalang.met"
            } else {
#line 603 "metalang.met"
                tokenAhead = 0 ;
#line 603 "metalang.met"
            }
#line 603 "metalang.met"
#line 604 "metalang.met"
            {
#line 604 "metalang.met"
                PPTREE _ptTree0=0;
#line 604 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 604 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 604 "metalang.met"
                }
#line 604 "metalang.met"
                ReplaceTree(patTree , 2 , _ptTree0);
#line 604 "metalang.met"
            }
#line 604 "metalang.met"
#line 604 "metalang.met"
            break;
#line 604 "metalang.met"
#line 606 "metalang.met"
        case BEGIN : 
#line 606 "metalang.met"
            tokenAhead = 0 ;
#line 606 "metalang.met"
            CommTerm();
#line 606 "metalang.met"
#line 607 "metalang.met"
#line 607 "metalang.met"
            _addlist4 = list ;
#line 607 "metalang.met"
#line 608 "metalang.met"
            do {
#line 608 "metalang.met"
#line 609 "metalang.met"
                {
#line 609 "metalang.met"
                    PPTREE _ptTree0=0;
#line 609 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 609 "metalang.met"
                        MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 609 "metalang.met"
                    }
#line 609 "metalang.met"
                    _addlist4 =AddList(_addlist4 , _ptTree0);
#line 609 "metalang.met"
                }
#line 609 "metalang.met"
#line 609 "metalang.met"
                if (list){
#line 609 "metalang.met"
#line 609 "metalang.met"
                    _addlist4 = SonTree (_addlist4 ,2 );
#line 609 "metalang.met"
                } else {
#line 609 "metalang.met"
#line 609 "metalang.met"
                    list = _addlist4 ;
#line 609 "metalang.met"
                }
#line 609 "metalang.met"
#line 609 "metalang.met"
#line 610 "metalang.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 610 "metalang.met"
#line 611 "metalang.met"
            {
#line 611 "metalang.met"
                PPTREE _ptRes0=0;
#line 611 "metalang.met"
                _ptRes0= MakeTree(BEGIN, 1);
#line 611 "metalang.met"
                ReplaceTree(_ptRes0, 1, list );
#line 611 "metalang.met"
                patTree=_ptRes0;
#line 611 "metalang.met"
            }
#line 611 "metalang.met"
#line 612 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 612 "metalang.met"
            if (  !SEE_TOKEN( END,"end") || !(CommTerm(),1)) {
#line 612 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"end")
#line 612 "metalang.met"
            } else {
#line 612 "metalang.met"
                tokenAhead = 0 ;
#line 612 "metalang.met"
            }
#line 612 "metalang.met"
#line 612 "metalang.met"
            break;
#line 612 "metalang.met"
#line 614 "metalang.met"
        case CASE : 
#line 614 "metalang.met"
            tokenAhead = 0 ;
#line 614 "metalang.met"
            CommTerm();
#line 614 "metalang.met"
#line 615 "metalang.met"
#line 615 "metalang.met"
            _addlist1 = list ;
#line 615 "metalang.met"
#line 616 "metalang.met"
            while (NPUSH_CALL_AFF_VERIF(switchTree = ,_Tak(condition), 3, metalang)) { 
#line 616 "metalang.met"
#line 617 "metalang.met"
#line 618 "metalang.met"
                {
#line 618 "metalang.met"
                    PPTREE _ptRes0=0;
#line 618 "metalang.met"
                    _ptRes0= MakeTree(SWITCH, 2);
#line 618 "metalang.met"
                    ReplaceTree(_ptRes0, 1, switchTree );
#line 618 "metalang.met"
                    switchTree=_ptRes0;
#line 618 "metalang.met"
                }
#line 618 "metalang.met"
#line 619 "metalang.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 619 "metalang.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 619 "metalang.met"
                    MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    TOKEN_EXIT(pattern_rec_exit,":")
#line 619 "metalang.met"
                } else {
#line 619 "metalang.met"
                    tokenAhead = 0 ;
#line 619 "metalang.met"
                }
#line 619 "metalang.met"
#line 620 "metalang.met"
                {
#line 620 "metalang.met"
                    PPTREE _ptTree0=0;
#line 620 "metalang.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 620 "metalang.met"
                        MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 620 "metalang.met"
                    }
#line 620 "metalang.met"
                    ReplaceTree(switchTree , 2 , _ptTree0);
#line 620 "metalang.met"
                }
#line 620 "metalang.met"
#line 621 "metalang.met"
                _addlist1 =AddList(_addlist1 ,switchTree );
#line 621 "metalang.met"
#line 621 "metalang.met"
                if (list){
#line 621 "metalang.met"
#line 621 "metalang.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 621 "metalang.met"
                } else {
#line 621 "metalang.met"
#line 621 "metalang.met"
                    list = _addlist1 ;
#line 621 "metalang.met"
                }
#line 621 "metalang.met"
#line 622 "metalang.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 622 "metalang.met"
#line 622 "metalang.met"
                }
#line 622 "metalang.met"
#line 622 "metalang.met"
            } 
#line 622 "metalang.met"
#line 625 "metalang.met"
            {
#line 625 "metalang.met"
                PPTREE _ptRes0=0;
#line 625 "metalang.met"
                _ptRes0= MakeTree(CASE, 1);
#line 625 "metalang.met"
                ReplaceTree(_ptRes0, 1, list );
#line 625 "metalang.met"
                patTree=_ptRes0;
#line 625 "metalang.met"
            }
#line 625 "metalang.met"
#line 626 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 626 "metalang.met"
            if (  !SEE_TOKEN( END,"end") || !(CommTerm(),1)) {
#line 626 "metalang.met"
                MulFreeTree(9,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                TOKEN_EXIT(pattern_rec_exit,"end")
#line 626 "metalang.met"
            } else {
#line 626 "metalang.met"
                tokenAhead = 0 ;
#line 626 "metalang.met"
            }
#line 626 "metalang.met"
#line 626 "metalang.met"
            break;
#line 626 "metalang.met"
#line 628 "metalang.met"
        case TAKEL : 
#line 628 "metalang.met"
#line 628 "metalang.met"
            {
#line 628 "metalang.met"
                PPTREE _ptTree0=0;
#line 628 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(takel_stat)(error_free), 24, metalang))== (PPTREE) -1 ) {
#line 628 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 628 "metalang.met"
                }
#line 628 "metalang.met"
                _retValue =_ptTree0;
#line 628 "metalang.met"
                goto pattern_rec_ret;
#line 628 "metalang.met"
            }
#line 628 "metalang.met"
            break;
#line 628 "metalang.met"
#line 629 "metalang.met"
        case STOREL : 
#line 629 "metalang.met"
#line 629 "metalang.met"
            {
#line 629 "metalang.met"
                PPTREE _ptTree0=0;
#line 629 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(storel_stat)(error_free), 22, metalang))== (PPTREE) -1 ) {
#line 629 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 629 "metalang.met"
                }
#line 629 "metalang.met"
                _retValue =_ptTree0;
#line 629 "metalang.met"
                goto pattern_rec_ret;
#line 629 "metalang.met"
            }
#line 629 "metalang.met"
            break;
#line 629 "metalang.met"
#line 630 "metalang.met"
        case AT_BEGINNING : 
#line 630 "metalang.met"
            tokenAhead = 0 ;
#line 630 "metalang.met"
            CommTerm();
#line 630 "metalang.met"
#line 630 "metalang.met"
            {
#line 630 "metalang.met"
                PPTREE _ptTree0=0;
#line 630 "metalang.met"
                {
#line 630 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 630 "metalang.met"
                    _ptRes1= MakeTree(BEGINNING, 1);
#line 630 "metalang.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(pattern_rec)(error_free), 17, metalang))== (PPTREE) -1 ) {
#line 630 "metalang.met"
                        MulFreeTree(12,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                        PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 630 "metalang.met"
                    }
#line 630 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 630 "metalang.met"
                    _ptTree0=_ptRes1;
#line 630 "metalang.met"
                }
#line 630 "metalang.met"
                _retValue =_ptTree0;
#line 630 "metalang.met"
                goto pattern_rec_ret;
#line 630 "metalang.met"
            }
#line 630 "metalang.met"
            break;
#line 630 "metalang.met"
#line 631 "metalang.met"
        case AOUVAOUV : 
#line 631 "metalang.met"
#line 631 "metalang.met"
            {
#line 631 "metalang.met"
                PPTREE _ptTree0=0;
#line 631 "metalang.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(asit)(error_free), 2, metalang))== (PPTREE) -1 ) {
#line 631 "metalang.met"
                    MulFreeTree(10,_ptTree0,_addlist1,_addlist2,_addlist3,_addlist4,ident,list,listskip,patTree,switchTree);
                    PROG_EXIT(pattern_rec_exit,"pattern_rec")
#line 631 "metalang.met"
                }
#line 631 "metalang.met"
                _retValue =_ptTree0;
#line 631 "metalang.met"
                goto pattern_rec_ret;
#line 631 "metalang.met"
            }
#line 631 "metalang.met"
            break;
#line 631 "metalang.met"
#line 632 "metalang.met"
        case RESETL : 
#line 632 "metalang.met"
            tokenAhead = 0 ;
#line 632 "metalang.met"
            CommTerm();
#line 632 "metalang.met"
#line 632 "metalang.met"
            {
#line 632 "metalang.met"
                PPTREE _ptTree0=0;
#line 632 "metalang.met"
                {
#line 632 "metalang.met"
                    PPTREE _ptRes1=0;
#line 632 "metalang.met"
                    _ptRes1= MakeTree(RESETLEX, 0);
#line 632 "metalang.met"
                    _ptTree0=_ptRes1;
#line 632 "metalang.met"
                }
#line 632 "metalang.met"
                _retValue =_ptTree0;
#line 632 "metalang.met"
                goto pattern_rec_ret;
#line 632 "metalang.met"
            }
#line 632 "metalang.met"
            break;
#line 632 "metalang.met"
#line 633 "metalang.met"
        case FORGETL : 
#line 633 "metalang.met"
            tokenAhead = 0 ;
#line 633 "metalang.met"
            CommTerm();
#line 633 "metalang.met"
#line 633 "metalang.met"
            {
#line 633 "metalang.met"
                PPTREE _ptTree0=0;
#line 633 "metalang.met"
                {
#line 633 "metalang.met"
                    PPTREE _ptRes1=0;
#line 633 "metalang.met"
                    _ptRes1= MakeTree(FORGET, 0);
#line 633 "metalang.met"
                    _ptTree0=_ptRes1;
#line 633 "metalang.met"
                }
#line 633 "metalang.met"
                _retValue =_ptTree0;
#line 633 "metalang.met"
                goto pattern_rec_ret;
#line 633 "metalang.met"
            }
#line 633 "metalang.met"
            break;
#line 633 "metalang.met"
#line 634 "metalang.met"
        case RECOVERL : 
#line 634 "metalang.met"
            tokenAhead = 0 ;
#line 634 "metalang.met"
            CommTerm();
#line 634 "metalang.met"
#line 634 "metalang.met"
            {
#line 634 "metalang.met"
                PPTREE _ptTree0=0;
#line 634 "metalang.met"
                {
#line 634 "metalang.met"
                    PPTREE _ptRes1=0;
#line 634 "metalang.met"
                    _ptRes1= MakeTree(RECOVER, 0);
#line 634 "metalang.met"
                    _ptTree0=_ptRes1;
#line 634 "metalang.met"
                }
#line 634 "metalang.met"
                _retValue =_ptTree0;
#line 634 "metalang.met"
                goto pattern_rec_ret;
#line 634 "metalang.met"
            }
#line 634 "metalang.met"
            break;
#line 634 "metalang.met"
#line 635 "metalang.met"
        case FORGET : 
#line 635 "metalang.met"
            tokenAhead = 0 ;
#line 635 "metalang.met"
            CommTerm();
#line 635 "metalang.met"
#line 635 "metalang.met"
            {
#line 635 "metalang.met"
                PPTREE _ptTree0=0;
#line 635 "metalang.met"
                {
#line 635 "metalang.met"
                    PPTREE _ptRes1=0;
#line 635 "metalang.met"
                    _ptRes1= MakeTree(FORGET_SYNTAXIQUE, 0);
#line 635 "metalang.met"
                    _ptTree0=_ptRes1;
#line 635 "metalang.met"
                }
#line 635 "metalang.met"
                _retValue =_ptTree0;
#line 635 "metalang.met"
                goto pattern_rec_ret;
#line 635 "metalang.met"
            }
#line 635 "metalang.met"
            break;
#line 635 "metalang.met"
#line 636 "metalang.met"
        case RECOGNIZE_STRING : 
#line 636 "metalang.met"
            tokenAhead = 0 ;
#line 636 "metalang.met"
            CommTerm();
#line 636 "metalang.met"
#line 636 "metalang.met"
            {
#line 636 "metalang.met"
                PPTREE _ptTree0=0;
#line 636 "metalang.met"
                {
#line 636 "metalang.met"
                    PPTREE _ptRes1=0;
#line 636 "metalang.met"
                    _ptRes1= MakeTree(RECOGNIZE_STRING, 0);
#line 636 "metalang.met"
                    _ptTree0=_ptRes1;
#line 636 "metalang.met"
                }
#line 636 "metalang.met"
                _retValue =_ptTree0;
#line 636 "metalang.met"
                goto pattern_rec_ret;
#line 636 "metalang.met"
            }
#line 636 "metalang.met"
            break;
#line 636 "metalang.met"
#line 637 "metalang.met"
        case BREAK : 
#line 637 "metalang.met"
            tokenAhead = 0 ;
#line 637 "metalang.met"
            CommTerm();
#line 637 "metalang.met"
#line 637 "metalang.met"
            {
#line 637 "metalang.met"
                PPTREE _ptTree0=0;
#line 637 "metalang.met"
                {
#line 637 "metalang.met"
                    PPTREE _ptRes1=0;
#line 637 "metalang.met"
                    _ptRes1= MakeTree(BREAK, 0);
#line 637 "metalang.met"
                    _ptTree0=_ptRes1;
#line 637 "metalang.met"
                }
#line 637 "metalang.met"
                _retValue =_ptTree0;
#line 637 "metalang.met"
                goto pattern_rec_ret;
#line 637 "metalang.met"
            }
#line 637 "metalang.met"
            break;
#line 637 "metalang.met"
#line 637 "metalang.met"
        default : 
#line 637 "metalang.met"
#line 637 "metalang.met"
            break;
#line 637 "metalang.met"
    }
#line 637 "metalang.met"
#line 640 "metalang.met"
    {
#line 640 "metalang.met"
        _retValue = patTree ;
#line 640 "metalang.met"
        goto pattern_rec_ret;
#line 640 "metalang.met"
        
#line 640 "metalang.met"
    }
#line 640 "metalang.met"
#line 640 "metalang.met"
#line 640 "metalang.met"

#line 641 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 641 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 641 "metalang.met"
return((PPTREE) 0);
#line 641 "metalang.met"

#line 641 "metalang.met"
pattern_rec_exit :
#line 641 "metalang.met"

#line 641 "metalang.met"
    _Debug = TRACE_RULE("pattern_rec",TRACE_EXIT,(PPTREE)0);
#line 641 "metalang.met"
    _funcLevel--;
#line 641 "metalang.met"
    return((PPTREE) -1) ;
#line 641 "metalang.met"

#line 641 "metalang.met"
pattern_rec_ret :
#line 641 "metalang.met"
    
#line 641 "metalang.met"
    _Debug = TRACE_RULE("pattern_rec",TRACE_RETURN,_retValue);
#line 641 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 641 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 641 "metalang.met"
    return _retValue ;
#line 641 "metalang.met"
}
#line 641 "metalang.met"

#line 641 "metalang.met"
