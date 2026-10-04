/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2637 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2637 "cplus.met"
{
#line 2637 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2637 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2637 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2637 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2637 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2637 "cplus.met"
#line 2637 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2637 "cplus.met"
#line 2639 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 129, cplus)){
#line 2639 "cplus.met"
#line 2640 "cplus.met"
        {
#line 2640 "cplus.met"
            PPTREE _ptTree0=0;
#line 2640 "cplus.met"
            {
#line 2640 "cplus.met"
                PPTREE _ptTree1=0;
#line 2640 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2640 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2640 "cplus.met"
                }
#line 2640 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2640 "cplus.met"
            }
#line 2640 "cplus.met"
            _retValue =_ptTree0;
#line 2640 "cplus.met"
            goto abstract_declarator_ret;
#line 2640 "cplus.met"
        }
#line 2640 "cplus.met"
    }
#line 2640 "cplus.met"
#line 2641 "cplus.met"
    retTree = (PPTREE) 0;
#line 2641 "cplus.met"
#line 2642 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2642 "cplus.met"
    switch( lexEl.Value) {
#line 2642 "cplus.met"
#line 2643 "cplus.met"
        case ETOI : 
#line 2643 "cplus.met"
            tokenAhead = 0 ;
#line 2643 "cplus.met"
            CommTerm();
#line 2643 "cplus.met"
#line 2643 "cplus.met"
            {
#line 2643 "cplus.met"
                PPTREE _ptTree0=0;
#line 2643 "cplus.met"
                {
#line 2643 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2643 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2643 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2643 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2643 "cplus.met"
                    }
#line 2643 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2643 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2643 "cplus.met"
                }
#line 2643 "cplus.met"
                _retValue =_ptTree0;
#line 2643 "cplus.met"
                goto abstract_declarator_ret;
#line 2643 "cplus.met"
            }
#line 2643 "cplus.met"
            break;
#line 2643 "cplus.met"
#line 2644 "cplus.met"
        case ETCOETCO : 
#line 2644 "cplus.met"
            tokenAhead = 0 ;
#line 2644 "cplus.met"
            CommTerm();
#line 2644 "cplus.met"
#line 2644 "cplus.met"
            {
#line 2644 "cplus.met"
                PPTREE _ptTree0=0;
#line 2644 "cplus.met"
                {
#line 2644 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2644 "cplus.met"
                    _ptRes1= MakeTree(TYP_MOV, 1);
#line 2644 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2644 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2644 "cplus.met"
                    }
#line 2644 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2644 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2644 "cplus.met"
                }
#line 2644 "cplus.met"
                _retValue =_ptTree0;
#line 2644 "cplus.met"
                goto abstract_declarator_ret;
#line 2644 "cplus.met"
            }
#line 2644 "cplus.met"
            break;
#line 2644 "cplus.met"
#line 2645 "cplus.met"
        case POINPOINPOIN : 
#line 2645 "cplus.met"
            tokenAhead = 0 ;
#line 2645 "cplus.met"
            CommTerm();
#line 2645 "cplus.met"
#line 2645 "cplus.met"
            {
#line 2645 "cplus.met"
                PPTREE _ptTree0=0;
#line 2645 "cplus.met"
                {
#line 2645 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2645 "cplus.met"
                    _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2645 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2645 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2645 "cplus.met"
                    }
#line 2645 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2645 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2645 "cplus.met"
                }
#line 2645 "cplus.met"
                _retValue =_ptTree0;
#line 2645 "cplus.met"
                goto abstract_declarator_ret;
#line 2645 "cplus.met"
            }
#line 2645 "cplus.met"
            break;
#line 2645 "cplus.met"
#line 2646 "cplus.met"
        case ETCO : 
#line 2646 "cplus.met"
            tokenAhead = 0 ;
#line 2646 "cplus.met"
            CommTerm();
#line 2646 "cplus.met"
#line 2646 "cplus.met"
            {
#line 2646 "cplus.met"
                PPTREE _ptTree0=0;
#line 2646 "cplus.met"
                {
#line 2646 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2646 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2646 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2646 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2646 "cplus.met"
                    }
#line 2646 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2646 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2646 "cplus.met"
                }
#line 2646 "cplus.met"
                _retValue =_ptTree0;
#line 2646 "cplus.met"
                goto abstract_declarator_ret;
#line 2646 "cplus.met"
            }
#line 2646 "cplus.met"
            break;
#line 2646 "cplus.met"
#line 2647 "cplus.met"
        case TILD : 
#line 2647 "cplus.met"
            tokenAhead = 0 ;
#line 2647 "cplus.met"
            CommTerm();
#line 2647 "cplus.met"
#line 2647 "cplus.met"
            {
#line 2647 "cplus.met"
                PPTREE _ptTree0=0;
#line 2647 "cplus.met"
                {
#line 2647 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2647 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2647 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2647 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2647 "cplus.met"
                    }
#line 2647 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2647 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2647 "cplus.met"
                }
#line 2647 "cplus.met"
                _retValue =_ptTree0;
#line 2647 "cplus.met"
                goto abstract_declarator_ret;
#line 2647 "cplus.met"
            }
#line 2647 "cplus.met"
            break;
#line 2647 "cplus.met"
#line 2651 "cplus.met"
        case POUV : 
#line 2651 "cplus.met"
            tokenAhead = 0 ;
#line 2651 "cplus.met"
            CommTerm();
#line 2651 "cplus.met"
#line 2649 "cplus.met"
#line 2650 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2650 "cplus.met"
#line 2651 "cplus.met"
                
#line 2651 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2651 "cplus.met"
                goto abstract_declarator_exit;
#line 2651 "cplus.met"
#line 2651 "cplus.met"
            }
#line 2651 "cplus.met"
#line 2652 "cplus.met"
            {
#line 2652 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2652 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2652 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2652 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2652 "cplus.met"
                }
#line 2652 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2652 "cplus.met"
                retTree=_ptRes0;
#line 2652 "cplus.met"
            }
#line 2652 "cplus.met"
#line 2653 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2653 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2653 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2653 "cplus.met"
            } else {
#line 2653 "cplus.met"
                tokenAhead = 0 ;
#line 2653 "cplus.met"
            }
#line 2653 "cplus.met"
#line 2654 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2654 "cplus.met"
#line 2655 "cplus.met"
                                         { PPTREE theTree ;
#line 2655 "cplus.met"
                                    theTree = valTree ;
#line 2655 "cplus.met"
                                    if (theTree) {
#line 2655 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2655 "cplus.met"
                                     if (NumberTree(theTree)
#line 2655 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2655 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2655 "cplus.met"
                                     else
#line 2655 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2655 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2655 "cplus.met"
                                        /* modif portage sun */
#line 2655 "cplus.met"
                                        retTree = valTree;
#line 2655 "cplus.met"
                                    }
#line 2655 "cplus.met"
                                       }
#line 2655 "cplus.met"
                                
#line 2655 "cplus.met"
            }
#line 2655 "cplus.met"
#line 2655 "cplus.met"
            break;
#line 2655 "cplus.met"
#line 2672 "cplus.met"
        case META : 
#line 2672 "cplus.met"
        case IDENT : 
#line 2672 "cplus.met"
#line 2673 "cplus.met"
#line 2674 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2674 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2674 "cplus.met"
            }
#line 2674 "cplus.met"
#line 2675 "cplus.met"
            {
#line 2675 "cplus.met"
                PPTREE _ptTree0=0;
#line 2675 "cplus.met"
                {
#line 2675 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2675 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2675 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2675 "cplus.met"
                    }
#line 2675 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2675 "cplus.met"
                }
#line 2675 "cplus.met"
                _retValue =_ptTree0;
#line 2675 "cplus.met"
                goto abstract_declarator_ret;
#line 2675 "cplus.met"
            }
#line 2675 "cplus.met"
#line 2675 "cplus.met"
            break;
#line 2675 "cplus.met"
#line 2681 "cplus.met"
        default : 
#line 2681 "cplus.met"
#line 2680 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2680 "cplus.met"
#line 2682 "cplus.met"
                retTree = valTree ;
#line 2682 "cplus.met"
#line 2682 "cplus.met"
            }
#line 2682 "cplus.met"
            break;
#line 2682 "cplus.met"
    }
#line 2682 "cplus.met"
#line 2684 "cplus.met"
    {
#line 2684 "cplus.met"
        _retValue = retTree ;
#line 2684 "cplus.met"
        goto abstract_declarator_ret;
#line 2684 "cplus.met"
        
#line 2684 "cplus.met"
    }
#line 2684 "cplus.met"
#line 2684 "cplus.met"
#line 2684 "cplus.met"

#line 2685 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2685 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2685 "cplus.met"
return((PPTREE) 0);
#line 2685 "cplus.met"

#line 2685 "cplus.met"
abstract_declarator_exit :
#line 2685 "cplus.met"

#line 2685 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2685 "cplus.met"
    _funcLevel--;
#line 2685 "cplus.met"
    return((PPTREE) -1) ;
#line 2685 "cplus.met"

#line 2685 "cplus.met"
abstract_declarator_ret :
#line 2685 "cplus.met"
    
#line 2685 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2685 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2685 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2685 "cplus.met"
    return _retValue ;
#line 2685 "cplus.met"
}
#line 2685 "cplus.met"

#line 2685 "cplus.met"
#line 3024 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 3024 "cplus.met"
{
#line 3024 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3024 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3024 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3024 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 3024 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3024 "cplus.met"
#line 3024 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3024 "cplus.met"
#line 3026 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3026 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 3026 "cplus.met"
    }
#line 3026 "cplus.met"
#line 3027 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 3027 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 3027 "cplus.met"
#line 3028 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3028 "cplus.met"
        switch( lexEl.Value) {
#line 3028 "cplus.met"
#line 3029 "cplus.met"
            case PLUS : 
#line 3029 "cplus.met"
                tokenAhead = 0 ;
#line 3029 "cplus.met"
                CommTerm();
#line 3029 "cplus.met"
#line 3029 "cplus.met"
                {
#line 3029 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3029 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 3029 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3029 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3029 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 3029 "cplus.met"
                    }
#line 3029 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3029 "cplus.met"
                    expTree=_ptRes0;
#line 3029 "cplus.met"
                }
#line 3029 "cplus.met"
                break;
#line 3029 "cplus.met"
#line 3030 "cplus.met"
            case TIRE : 
#line 3030 "cplus.met"
                tokenAhead = 0 ;
#line 3030 "cplus.met"
                CommTerm();
#line 3030 "cplus.met"
#line 3030 "cplus.met"
                {
#line 3030 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3030 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 3030 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3030 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3030 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 3030 "cplus.met"
                    }
#line 3030 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3030 "cplus.met"
                    expTree=_ptRes0;
#line 3030 "cplus.met"
                }
#line 3030 "cplus.met"
                break;
#line 3030 "cplus.met"
            default :
#line 3030 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 3030 "cplus.met"
                break;
#line 3030 "cplus.met"
        }
#line 3030 "cplus.met"
    } 
#line 3030 "cplus.met"
#line 3032 "cplus.met"
    {
#line 3032 "cplus.met"
        _retValue = expTree ;
#line 3032 "cplus.met"
        goto additive_expression_ret;
#line 3032 "cplus.met"
        
#line 3032 "cplus.met"
    }
#line 3032 "cplus.met"
#line 3032 "cplus.met"
#line 3032 "cplus.met"

#line 3033 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3033 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3033 "cplus.met"
return((PPTREE) 0);
#line 3033 "cplus.met"

#line 3033 "cplus.met"
additive_expression_exit :
#line 3033 "cplus.met"

#line 3033 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 3033 "cplus.met"
    _funcLevel--;
#line 3033 "cplus.met"
    return((PPTREE) -1) ;
#line 3033 "cplus.met"

#line 3033 "cplus.met"
additive_expression_ret :
#line 3033 "cplus.met"
    
#line 3033 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 3033 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3033 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3033 "cplus.met"
    return _retValue ;
#line 3033 "cplus.met"
}
#line 3033 "cplus.met"

#line 3033 "cplus.met"
#line 3124 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 3124 "cplus.met"
{
#line 3124 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3124 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3124 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3124 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 3124 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3124 "cplus.met"
#line 3124 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3124 "cplus.met"
#line 3126 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 3126 "cplus.met"
#line 3127 "cplus.met"
#line 3128 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3128 "cplus.met"
        switch( lexEl.Value) {
#line 3128 "cplus.met"
#line 3129 "cplus.met"
            case NEW : 
#line 3129 "cplus.met"
#line 3129 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 3129 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3129 "cplus.met"
                }
#line 3129 "cplus.met"
                break;
#line 3129 "cplus.met"
#line 3130 "cplus.met"
            case DELETE : 
#line 3130 "cplus.met"
#line 3130 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 3130 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3130 "cplus.met"
                }
#line 3130 "cplus.met"
                break;
#line 3130 "cplus.met"
            default :
#line 3130 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 3130 "cplus.met"
                break;
#line 3130 "cplus.met"
        }
#line 3130 "cplus.met"
#line 3132 "cplus.met"
        {
#line 3132 "cplus.met"
            PPTREE _ptRes0=0;
#line 3132 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 3132 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 3132 "cplus.met"
            retTree=_ptRes0;
#line 3132 "cplus.met"
        }
#line 3132 "cplus.met"
#line 3132 "cplus.met"
#line 3132 "cplus.met"
    } else {
#line 3132 "cplus.met"
#line 3135 "cplus.met"
#line 3136 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3136 "cplus.met"
        switch( lexEl.Value) {
#line 3136 "cplus.met"
#line 3137 "cplus.met"
            case NEW : 
#line 3137 "cplus.met"
#line 3137 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 3137 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3137 "cplus.met"
                }
#line 3137 "cplus.met"
                break;
#line 3137 "cplus.met"
#line 3138 "cplus.met"
            case DELETE : 
#line 3138 "cplus.met"
#line 3138 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 3138 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3138 "cplus.met"
                }
#line 3138 "cplus.met"
                break;
#line 3138 "cplus.met"
            default :
#line 3138 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 3138 "cplus.met"
                break;
#line 3138 "cplus.met"
        }
#line 3138 "cplus.met"
#line 3140 "cplus.met"
        retTree = valTree ;
#line 3140 "cplus.met"
#line 3140 "cplus.met"
    }
#line 3140 "cplus.met"
#line 3142 "cplus.met"
    {
#line 3142 "cplus.met"
        _retValue = retTree ;
#line 3142 "cplus.met"
        goto alloc_expression_ret;
#line 3142 "cplus.met"
        
#line 3142 "cplus.met"
    }
#line 3142 "cplus.met"
#line 3142 "cplus.met"
#line 3142 "cplus.met"

#line 3143 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3143 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3143 "cplus.met"
return((PPTREE) 0);
#line 3143 "cplus.met"

#line 3143 "cplus.met"
alloc_expression_exit :
#line 3143 "cplus.met"

#line 3143 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 3143 "cplus.met"
    _funcLevel--;
#line 3143 "cplus.met"
    return((PPTREE) -1) ;
#line 3143 "cplus.met"

#line 3143 "cplus.met"
alloc_expression_ret :
#line 3143 "cplus.met"
    
#line 3143 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 3143 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3143 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3143 "cplus.met"
    return _retValue ;
#line 3143 "cplus.met"
}
#line 3143 "cplus.met"

#line 3143 "cplus.met"
#line 3174 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 3174 "cplus.met"
{
#line 3174 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3174 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3174 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3174 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 3174 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3174 "cplus.met"
#line 3174 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3174 "cplus.met"
#line 3174 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3174 "cplus.met"
#line 3176 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3176 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 3176 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 3176 "cplus.met"
    } else {
#line 3176 "cplus.met"
        tokenAhead = 0 ;
#line 3176 "cplus.met"
    }
#line 3176 "cplus.met"
#line 3177 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 105, cplus))){
#line 3177 "cplus.met"
#line 3178 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 3178 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3178 "cplus.met"
        }
#line 3178 "cplus.met"
    }
#line 3178 "cplus.met"
#line 3179 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3179 "cplus.met"
#line 3180 "cplus.met"
#line 3181 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3181 "cplus.met"
#line 3183 "cplus.met"
#line 3183 "cplus.met"
            _addlist1 = list ;
#line 3183 "cplus.met"
#line 3182 "cplus.met"
            do {
#line 3182 "cplus.met"
#line 3183 "cplus.met"
                {
#line 3183 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3183 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 3183 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3183 "cplus.met"
                    }
#line 3183 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3183 "cplus.met"
                }
#line 3183 "cplus.met"
#line 3183 "cplus.met"
                if (list){
#line 3183 "cplus.met"
#line 3183 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3183 "cplus.met"
                } else {
#line 3183 "cplus.met"
#line 3183 "cplus.met"
                    list = _addlist1 ;
#line 3183 "cplus.met"
                }
#line 3183 "cplus.met"
#line 3183 "cplus.met"
#line 3184 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3184 "cplus.met"
        }
#line 3184 "cplus.met"
#line 3185 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3185 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3185 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 3185 "cplus.met"
        } else {
#line 3185 "cplus.met"
            tokenAhead = 0 ;
#line 3185 "cplus.met"
        }
#line 3185 "cplus.met"
#line 3186 "cplus.met"
        {
#line 3186 "cplus.met"
            PPTREE _ptTree0=0;
#line 3186 "cplus.met"
            {
#line 3186 "cplus.met"
                PPTREE _ptRes1=0;
#line 3186 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 3186 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3186 "cplus.met"
                _ptTree0=_ptRes1;
#line 3186 "cplus.met"
            }
#line 3186 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3186 "cplus.met"
        }
#line 3186 "cplus.met"
#line 3186 "cplus.met"
#line 3186 "cplus.met"
    }
#line 3186 "cplus.met"
#line 3188 "cplus.met"
    {
#line 3188 "cplus.met"
        _retValue = retTree ;
#line 3188 "cplus.met"
        goto allocation_expression_ret;
#line 3188 "cplus.met"
        
#line 3188 "cplus.met"
    }
#line 3188 "cplus.met"
#line 3188 "cplus.met"
#line 3188 "cplus.met"

#line 3189 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3189 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3189 "cplus.met"
return((PPTREE) 0);
#line 3189 "cplus.met"

#line 3189 "cplus.met"
allocation_expression_exit :
#line 3189 "cplus.met"

#line 3189 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3189 "cplus.met"
    _funcLevel--;
#line 3189 "cplus.met"
    return((PPTREE) -1) ;
#line 3189 "cplus.met"

#line 3189 "cplus.met"
allocation_expression_ret :
#line 3189 "cplus.met"
    
#line 3189 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 3189 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3189 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3189 "cplus.met"
    return _retValue ;
#line 3189 "cplus.met"
}
#line 3189 "cplus.met"

#line 3189 "cplus.met"
#line 2978 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2978 "cplus.met"
{
#line 2978 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2978 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2978 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2978 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2978 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2978 "cplus.met"
#line 2978 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2978 "cplus.met"
#line 2980 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2980 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2980 "cplus.met"
    }
#line 2980 "cplus.met"
#line 2981 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2981 "cplus.met"
#line 2982 "cplus.met"
        {
#line 2982 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2982 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2982 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2982 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2982 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2982 "cplus.met"
            }
#line 2982 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2982 "cplus.met"
            expTree=_ptRes0;
#line 2982 "cplus.met"
        }
#line 2982 "cplus.met"
    } 
#line 2982 "cplus.met"
#line 2983 "cplus.met"
    {
#line 2983 "cplus.met"
        _retValue = expTree ;
#line 2983 "cplus.met"
        goto and_expression_ret;
#line 2983 "cplus.met"
        
#line 2983 "cplus.met"
    }
#line 2983 "cplus.met"
#line 2983 "cplus.met"
#line 2983 "cplus.met"

#line 2984 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2984 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2984 "cplus.met"
return((PPTREE) 0);
#line 2984 "cplus.met"

#line 2984 "cplus.met"
and_expression_exit :
#line 2984 "cplus.met"

#line 2984 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2984 "cplus.met"
    _funcLevel--;
#line 2984 "cplus.met"
    return((PPTREE) -1) ;
#line 2984 "cplus.met"

#line 2984 "cplus.met"
and_expression_ret :
#line 2984 "cplus.met"
    
#line 2984 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2984 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2984 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2984 "cplus.met"
    return _retValue ;
#line 2984 "cplus.met"
}
#line 2984 "cplus.met"

#line 2984 "cplus.met"
#line 2807 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2807 "cplus.met"
{
#line 2807 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2807 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2807 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2807 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2807 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2807 "cplus.met"
#line 2807 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2807 "cplus.met"
#line 2809 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2809 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2809 "cplus.met"
    }
#line 2809 "cplus.met"
#line 2810 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2810 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2810 "cplus.met"
#line 2811 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2811 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2811 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2811 "cplus.met"
        } else {
#line 2811 "cplus.met"
            tokenAhead = 0 ;
#line 2811 "cplus.met"
        }
#line 2811 "cplus.met"
    }
#line 2811 "cplus.met"
#line 2812 "cplus.met"
    {
#line 2812 "cplus.met"
        _retValue = retTree ;
#line 2812 "cplus.met"
        goto arg_declarator_ret;
#line 2812 "cplus.met"
        
#line 2812 "cplus.met"
    }
#line 2812 "cplus.met"
#line 2812 "cplus.met"
#line 2812 "cplus.met"

#line 2813 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2813 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2813 "cplus.met"
return((PPTREE) 0);
#line 2813 "cplus.met"

#line 2813 "cplus.met"
arg_declarator_exit :
#line 2813 "cplus.met"

#line 2813 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2813 "cplus.met"
    _funcLevel--;
#line 2813 "cplus.met"
    return((PPTREE) -1) ;
#line 2813 "cplus.met"

#line 2813 "cplus.met"
arg_declarator_ret :
#line 2813 "cplus.met"
    
#line 2813 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2813 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2813 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2813 "cplus.met"
    return _retValue ;
#line 2813 "cplus.met"
}
#line 2813 "cplus.met"

#line 2813 "cplus.met"
#line 2798 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2798 "cplus.met"
{
#line 2798 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2798 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2798 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2798 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2798 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2798 "cplus.met"
#line 2798 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2798 "cplus.met"
#line 2800 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_base_type), 9, cplus))){
#line 2800 "cplus.met"
#line 2801 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_expression), 10, cplus))){
#line 2801 "cplus.met"
#line 2802 "cplus.met"
            if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2802 "cplus.met"
                MulFreeTree(1,retTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2802 "cplus.met"
            }
#line 2802 "cplus.met"
        }
#line 2802 "cplus.met"
    }
#line 2802 "cplus.met"
#line 2803 "cplus.met"
    {
#line 2803 "cplus.met"
        _retValue = retTree ;
#line 2803 "cplus.met"
        goto arg_declarator_base_ret;
#line 2803 "cplus.met"
        
#line 2803 "cplus.met"
    }
#line 2803 "cplus.met"
#line 2803 "cplus.met"
#line 2803 "cplus.met"

#line 2804 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2804 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2804 "cplus.met"
return((PPTREE) 0);
#line 2804 "cplus.met"

#line 2804 "cplus.met"
arg_declarator_base_exit :
#line 2804 "cplus.met"

#line 2804 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2804 "cplus.met"
    _funcLevel--;
#line 2804 "cplus.met"
    return((PPTREE) -1) ;
#line 2804 "cplus.met"

#line 2804 "cplus.met"
arg_declarator_base_ret :
#line 2804 "cplus.met"
    
#line 2804 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2804 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2804 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2804 "cplus.met"
    return _retValue ;
#line 2804 "cplus.met"
}
#line 2804 "cplus.met"

#line 2804 "cplus.met"
#line 2774 "cplus.met"
PPTREE cplus::arg_declarator_base_type ( int error_free)
#line 2774 "cplus.met"
{
#line 2774 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2774 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2774 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2774 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_ENTER,(PPTREE)0);
#line 2774 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2774 "cplus.met"
#line 2774 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2774 "cplus.met"
#line 2776 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2776 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2776 "cplus.met"
    }
#line 2776 "cplus.met"
#line 2777 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2777 "cplus.met"
#line 2778 "cplus.met"
        {
#line 2778 "cplus.met"
            PPTREE _ptRes0=0;
#line 2778 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2778 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2778 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2778 "cplus.met"
            valTree=_ptRes0;
#line 2778 "cplus.met"
        }
#line 2778 "cplus.met"
    } else {
#line 2778 "cplus.met"
#line 2780 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2780 "cplus.met"
#line 2781 "cplus.met"
            {
#line 2781 "cplus.met"
                PPTREE _ptRes0=0;
#line 2781 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2781 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2781 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2781 "cplus.met"
                valTree=_ptRes0;
#line 2781 "cplus.met"
            }
#line 2781 "cplus.met"
        } else {
#line 2781 "cplus.met"
#line 2783 "cplus.met"
            valTree = retTree ;
#line 2783 "cplus.met"
        }
#line 2783 "cplus.met"
    }
#line 2783 "cplus.met"
#line 2784 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2784 "cplus.met"
#line 2785 "cplus.met"
#line 2786 "cplus.met"
        {
#line 2786 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2786 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2786 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2786 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2786 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2786 "cplus.met"
            }
#line 2786 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2786 "cplus.met"
            valTree=_ptRes0;
#line 2786 "cplus.met"
        }
#line 2786 "cplus.met"
#line 2786 "cplus.met"
#line 2786 "cplus.met"
    }
#line 2786 "cplus.met"
#line 2788 "cplus.met"
    {
#line 2788 "cplus.met"
        _retValue = valTree ;
#line 2788 "cplus.met"
        goto arg_declarator_base_type_ret;
#line 2788 "cplus.met"
        
#line 2788 "cplus.met"
    }
#line 2788 "cplus.met"
#line 2788 "cplus.met"
#line 2788 "cplus.met"

#line 2789 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2789 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2789 "cplus.met"
return((PPTREE) 0);
#line 2789 "cplus.met"

#line 2789 "cplus.met"
arg_declarator_base_type_exit :
#line 2789 "cplus.met"

#line 2789 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_EXIT,(PPTREE)0);
#line 2789 "cplus.met"
    _funcLevel--;
#line 2789 "cplus.met"
    return((PPTREE) -1) ;
#line 2789 "cplus.met"

#line 2789 "cplus.met"
arg_declarator_base_type_ret :
#line 2789 "cplus.met"
    
#line 2789 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_RETURN,_retValue);
#line 2789 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2789 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2789 "cplus.met"
    return _retValue ;
#line 2789 "cplus.met"
}
#line 2789 "cplus.met"

#line 2789 "cplus.met"
#line 2791 "cplus.met"
PPTREE cplus::arg_declarator_expression ( int error_free)
#line 2791 "cplus.met"
{
#line 2791 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2791 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2791 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2791 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_expression",TRACE_ENTER,(PPTREE)0);
#line 2791 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2791 "cplus.met"
#line 2792 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2792 "cplus.met"
#line 2793 "cplus.met"
        {
#line 2793 "cplus.met"
            PPTREE _ptTree0=0;
#line 2793 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2793 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(arg_declarator_expression_exit,"arg_declarator_expression")
#line 2793 "cplus.met"
            }
#line 2793 "cplus.met"
            _retValue =_ptTree0;
#line 2793 "cplus.met"
            goto arg_declarator_expression_ret;
#line 2793 "cplus.met"
        }
#line 2793 "cplus.met"
    } else {
#line 2793 "cplus.met"
#line 2795 "cplus.met"
        
#line 2795 "cplus.met"
        LEX_EXIT ("",0);
#line 2795 "cplus.met"
        goto arg_declarator_expression_exit;
#line 2795 "cplus.met"
    }
#line 2795 "cplus.met"
#line 2795 "cplus.met"
#line 2795 "cplus.met"

#line 2796 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2796 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2796 "cplus.met"
return((PPTREE) 0);
#line 2796 "cplus.met"

#line 2796 "cplus.met"
arg_declarator_expression_exit :
#line 2796 "cplus.met"

#line 2796 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_EXIT,(PPTREE)0);
#line 2796 "cplus.met"
    _funcLevel--;
#line 2796 "cplus.met"
    return((PPTREE) -1) ;
#line 2796 "cplus.met"

#line 2796 "cplus.met"
arg_declarator_expression_ret :
#line 2796 "cplus.met"
    
#line 2796 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_RETURN,_retValue);
#line 2796 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2796 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2796 "cplus.met"
    return _retValue ;
#line 2796 "cplus.met"
}
#line 2796 "cplus.met"

#line 2796 "cplus.met"
#line 2824 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2824 "cplus.met"
{
#line 2824 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2824 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2824 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2824 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2824 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2824 "cplus.met"
#line 2824 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2824 "cplus.met"
#line 2826 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2826 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2826 "cplus.met"
    }
#line 2826 "cplus.met"
#line 2827 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2827 "cplus.met"
#line 2828 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2828 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2828 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2828 "cplus.met"
        } else {
#line 2828 "cplus.met"
            tokenAhead = 0 ;
#line 2828 "cplus.met"
        }
#line 2828 "cplus.met"
    }
#line 2828 "cplus.met"
#line 2829 "cplus.met"
    {
#line 2829 "cplus.met"
        _retValue = retTree ;
#line 2829 "cplus.met"
        goto arg_declarator_followed_ret;
#line 2829 "cplus.met"
        
#line 2829 "cplus.met"
    }
#line 2829 "cplus.met"
#line 2829 "cplus.met"
#line 2829 "cplus.met"

#line 2830 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2830 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2830 "cplus.met"
return((PPTREE) 0);
#line 2830 "cplus.met"

#line 2830 "cplus.met"
arg_declarator_followed_exit :
#line 2830 "cplus.met"

#line 2830 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2830 "cplus.met"
    _funcLevel--;
#line 2830 "cplus.met"
    return((PPTREE) -1) ;
#line 2830 "cplus.met"

#line 2830 "cplus.met"
arg_declarator_followed_ret :
#line 2830 "cplus.met"
    
#line 2830 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
#line 2830 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2830 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2830 "cplus.met"
    return _retValue ;
#line 2830 "cplus.met"
}
#line 2830 "cplus.met"

#line 2830 "cplus.met"
#line 2832 "cplus.met"
PPTREE cplus::arg_declarator_followed_strict ( int error_free)
#line 2832 "cplus.met"
{
#line 2832 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2832 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2832 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2832 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_ENTER,(PPTREE)0);
#line 2832 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2832 "cplus.met"
#line 2832 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2832 "cplus.met"
#line 2834 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2834 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_strict_exit,"arg_declarator_followed_strict")
#line 2834 "cplus.met"
    }
#line 2834 "cplus.met"
#line 2835 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2835 "cplus.met"
#line 2836 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2836 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2836 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_strict_exit,",")
#line 2836 "cplus.met"
        } else {
#line 2836 "cplus.met"
            tokenAhead = 0 ;
#line 2836 "cplus.met"
        }
#line 2836 "cplus.met"
    }
#line 2836 "cplus.met"
#line 2837 "cplus.met"
    {
#line 2837 "cplus.met"
        _retValue = retTree ;
#line 2837 "cplus.met"
        goto arg_declarator_followed_strict_ret;
#line 2837 "cplus.met"
        
#line 2837 "cplus.met"
    }
#line 2837 "cplus.met"
#line 2837 "cplus.met"
#line 2837 "cplus.met"

#line 2838 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2838 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2838 "cplus.met"
return((PPTREE) 0);
#line 2838 "cplus.met"

#line 2838 "cplus.met"
arg_declarator_followed_strict_exit :
#line 2838 "cplus.met"

#line 2838 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_EXIT,(PPTREE)0);
#line 2838 "cplus.met"
    _funcLevel--;
#line 2838 "cplus.met"
    return((PPTREE) -1) ;
#line 2838 "cplus.met"

#line 2838 "cplus.met"
arg_declarator_followed_strict_ret :
#line 2838 "cplus.met"
    
#line 2838 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_RETURN,_retValue);
#line 2838 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2838 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2838 "cplus.met"
    return _retValue ;
#line 2838 "cplus.met"
}
#line 2838 "cplus.met"

#line 2838 "cplus.met"
#line 2815 "cplus.met"
PPTREE cplus::arg_declarator_strict ( int error_free)
#line 2815 "cplus.met"
{
#line 2815 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2815 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2815 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2815 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_strict",TRACE_ENTER,(PPTREE)0);
#line 2815 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2815 "cplus.met"
#line 2815 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2815 "cplus.met"
#line 2817 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2817 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_strict_exit,"arg_declarator_strict")
#line 2817 "cplus.met"
    }
#line 2817 "cplus.met"
#line 2818 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2818 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2818 "cplus.met"
#line 2819 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2819 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2819 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_strict_exit,",")
#line 2819 "cplus.met"
        } else {
#line 2819 "cplus.met"
            tokenAhead = 0 ;
#line 2819 "cplus.met"
        }
#line 2819 "cplus.met"
    }
#line 2819 "cplus.met"
#line 2820 "cplus.met"
    {
#line 2820 "cplus.met"
        _retValue = retTree ;
#line 2820 "cplus.met"
        goto arg_declarator_strict_ret;
#line 2820 "cplus.met"
        
#line 2820 "cplus.met"
    }
#line 2820 "cplus.met"
#line 2820 "cplus.met"
#line 2820 "cplus.met"

#line 2821 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2821 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2821 "cplus.met"
return((PPTREE) 0);
#line 2821 "cplus.met"

#line 2821 "cplus.met"
arg_declarator_strict_exit :
#line 2821 "cplus.met"

#line 2821 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_EXIT,(PPTREE)0);
#line 2821 "cplus.met"
    _funcLevel--;
#line 2821 "cplus.met"
    return((PPTREE) -1) ;
#line 2821 "cplus.met"

#line 2821 "cplus.met"
arg_declarator_strict_ret :
#line 2821 "cplus.met"
    
#line 2821 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_RETURN,_retValue);
#line 2821 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2821 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2821 "cplus.met"
    return _retValue ;
#line 2821 "cplus.met"
}
#line 2821 "cplus.met"

#line 2821 "cplus.met"
#line 2840 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2840 "cplus.met"
{
#line 2840 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2840 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2840 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2840 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2840 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2840 "cplus.met"
#line 2840 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2840 "cplus.met"
#line 2842 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2842 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2842 "cplus.met"
    }
#line 2842 "cplus.met"
#line 2843 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2843 "cplus.met"
#line 2844 "cplus.met"
        {
#line 2844 "cplus.met"
            PPTREE _ptRes0=0;
#line 2844 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2844 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2844 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2844 "cplus.met"
            valTree=_ptRes0;
#line 2844 "cplus.met"
        }
#line 2844 "cplus.met"
    } else {
#line 2844 "cplus.met"
#line 2846 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2846 "cplus.met"
#line 2847 "cplus.met"
            {
#line 2847 "cplus.met"
                PPTREE _ptRes0=0;
#line 2847 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2847 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2847 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2847 "cplus.met"
                valTree=_ptRes0;
#line 2847 "cplus.met"
            }
#line 2847 "cplus.met"
        } else {
#line 2847 "cplus.met"
#line 2849 "cplus.met"
            valTree = retTree ;
#line 2849 "cplus.met"
        }
#line 2849 "cplus.met"
    }
#line 2849 "cplus.met"
#line 2850 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2850 "cplus.met"
#line 2851 "cplus.met"
#line 2852 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 155, cplus)){
#line 2852 "cplus.met"
#line 2853 "cplus.met"
            {
#line 2853 "cplus.met"
                PPTREE _ptRes0=0;
#line 2853 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2853 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2853 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2853 "cplus.met"
                valTree=_ptRes0;
#line 2853 "cplus.met"
            }
#line 2853 "cplus.met"
        } else {
#line 2853 "cplus.met"
#line 2855 "cplus.met"
            {
#line 2855 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2855 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2855 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2855 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2855 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2855 "cplus.met"
                }
#line 2855 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2855 "cplus.met"
                valTree=_ptRes0;
#line 2855 "cplus.met"
            }
#line 2855 "cplus.met"
        }
#line 2855 "cplus.met"
#line 2855 "cplus.met"
#line 2855 "cplus.met"
    }
#line 2855 "cplus.met"
#line 2857 "cplus.met"
    {
#line 2857 "cplus.met"
        _retValue = valTree ;
#line 2857 "cplus.met"
        goto arg_declarator_type_ret;
#line 2857 "cplus.met"
        
#line 2857 "cplus.met"
    }
#line 2857 "cplus.met"
#line 2857 "cplus.met"
#line 2857 "cplus.met"

#line 2858 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2858 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2858 "cplus.met"
return((PPTREE) 0);
#line 2858 "cplus.met"

#line 2858 "cplus.met"
arg_declarator_type_exit :
#line 2858 "cplus.met"

#line 2858 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2858 "cplus.met"
    _funcLevel--;
#line 2858 "cplus.met"
    return((PPTREE) -1) ;
#line 2858 "cplus.met"

#line 2858 "cplus.met"
arg_declarator_type_ret :
#line 2858 "cplus.met"
    
#line 2858 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2858 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2858 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2858 "cplus.met"
    return _retValue ;
#line 2858 "cplus.met"
}
#line 2858 "cplus.met"

#line 2858 "cplus.met"
#line 2487 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2487 "cplus.met"
{
#line 2487 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2487 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2487 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2487 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2487 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2487 "cplus.met"
#line 2487 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2487 "cplus.met"
#line 2489 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2489 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2489 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2489 "cplus.met"
    } else {
#line 2489 "cplus.met"
        tokenAhead = 0 ;
#line 2489 "cplus.met"
    }
#line 2489 "cplus.met"
#line 2490 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 16, cplus)){
#line 2490 "cplus.met"
#line 2491 "cplus.met"
        {
#line 2491 "cplus.met"
            PPTREE _ptRes0=0;
#line 2491 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2491 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2491 "cplus.met"
            retTree=_ptRes0;
#line 2491 "cplus.met"
        }
#line 2491 "cplus.met"
    } else {
#line 2491 "cplus.met"
#line 2493 "cplus.met"
        {
#line 2493 "cplus.met"
            PPTREE _ptRes0=0;
#line 2493 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2493 "cplus.met"
            retTree=_ptRes0;
#line 2493 "cplus.met"
        }
#line 2493 "cplus.met"
    }
#line 2493 "cplus.met"
#line 2494 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2494 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2494 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2494 "cplus.met"
    } else {
#line 2494 "cplus.met"
        tokenAhead = 0 ;
#line 2494 "cplus.met"
    }
#line 2494 "cplus.met"
#line 2495 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 65, cplus)){
#line 2495 "cplus.met"
#line 2496 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2496 "cplus.met"
#line 2496 "cplus.met"
    }
#line 2496 "cplus.met"
#line 2497 "cplus.met"
    {
#line 2497 "cplus.met"
        _retValue = retTree ;
#line 2497 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2497 "cplus.met"
        
#line 2497 "cplus.met"
    }
#line 2497 "cplus.met"
#line 2497 "cplus.met"
#line 2497 "cplus.met"

#line 2498 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2498 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2498 "cplus.met"
return((PPTREE) 0);
#line 2498 "cplus.met"

#line 2498 "cplus.met"
arg_typ_declarator_exit :
#line 2498 "cplus.met"

#line 2498 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2498 "cplus.met"
    _funcLevel--;
#line 2498 "cplus.met"
    return((PPTREE) -1) ;
#line 2498 "cplus.met"

#line 2498 "cplus.met"
arg_typ_declarator_ret :
#line 2498 "cplus.met"
    
#line 2498 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2498 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2498 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2498 "cplus.met"
    return _retValue ;
#line 2498 "cplus.met"
}
#line 2498 "cplus.met"

#line 2498 "cplus.met"
#line 2736 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2736 "cplus.met"
{
#line 2736 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2736 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2736 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2736 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2736 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2736 "cplus.met"
#line 2736 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2736 "cplus.met"
#line 2736 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2736 "cplus.met"
#line 2738 "cplus.met"
     { int followed = 0;
#line 2738 "cplus.met"
#line 2739 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 12, cplus)){
#line 2739 "cplus.met"
#line 2740 "cplus.met"
         followed = 1;
#line 2740 "cplus.met"
    } else {
#line 2740 "cplus.met"
#line 2742 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator_strict)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2742 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2742 "cplus.met"
        }
#line 2742 "cplus.met"
    }
#line 2742 "cplus.met"
#line 2743 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2743 "cplus.met"
#line 2744 "cplus.met"
#line 2745 "cplus.met"
     {  int exit = 0 ; 
#line 2745 "cplus.met"
#line 2745 "cplus.met"
    _addlist1 = retTree ;
#line 2745 "cplus.met"
#line 2746 "cplus.met"
    while ( followed && !exit ) { 
#line 2746 "cplus.met"
#line 2747 "cplus.met"
#line 2748 "cplus.met"
         followed = 0;
#line 2748 "cplus.met"
#line 2749 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 11, cplus)){
#line 2749 "cplus.met"
#line 2750 "cplus.met"
#line 2751 "cplus.met"
             followed = 1;
#line 2751 "cplus.met"
#line 2752 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2752 "cplus.met"
#line 2752 "cplus.met"
            if (retTree){
#line 2752 "cplus.met"
#line 2752 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2752 "cplus.met"
            } else {
#line 2752 "cplus.met"
#line 2752 "cplus.met"
                retTree = _addlist1 ;
#line 2752 "cplus.met"
            }
#line 2752 "cplus.met"
#line 2752 "cplus.met"
#line 2752 "cplus.met"
        } else {
#line 2752 "cplus.met"
#line 2755 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2755 "cplus.met"
#line 2756 "cplus.met"
#line 2757 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2757 "cplus.met"
#line 2757 "cplus.met"
                if (retTree){
#line 2757 "cplus.met"
#line 2757 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2757 "cplus.met"
                } else {
#line 2757 "cplus.met"
#line 2757 "cplus.met"
                    retTree = _addlist1 ;
#line 2757 "cplus.met"
                }
#line 2757 "cplus.met"
#line 2757 "cplus.met"
#line 2757 "cplus.met"
            } else {
#line 2757 "cplus.met"
#line 2760 "cplus.met"
#line 2761 "cplus.met"
                {
#line 2761 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2761 "cplus.met"
                    {
#line 2761 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2761 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2761 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2761 "cplus.met"
                    }
#line 2761 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2761 "cplus.met"
                }
#line 2761 "cplus.met"
#line 2761 "cplus.met"
                if (retTree){
#line 2761 "cplus.met"
#line 2761 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2761 "cplus.met"
                } else {
#line 2761 "cplus.met"
#line 2761 "cplus.met"
                    retTree = _addlist1 ;
#line 2761 "cplus.met"
                }
#line 2761 "cplus.met"
#line 2762 "cplus.met"
                 exit = 1 ;
#line 2762 "cplus.met"
#line 2763 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2763 "cplus.met"
#line 2763 "cplus.met"
                }
#line 2763 "cplus.met"
#line 2763 "cplus.met"
            }
#line 2763 "cplus.met"
        }
#line 2763 "cplus.met"
#line 2763 "cplus.met"
    } 
#line 2763 "cplus.met"
#line 2767 "cplus.met"
    if ((! ( exit )) && 
#line 2767 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2767 "cplus.met"
#line 2768 "cplus.met"
        {
#line 2768 "cplus.met"
            PPTREE _ptTree0=0;
#line 2768 "cplus.met"
            {
#line 2768 "cplus.met"
                PPTREE _ptRes1=0;
#line 2768 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2768 "cplus.met"
                _ptTree0=_ptRes1;
#line 2768 "cplus.met"
            }
#line 2768 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2768 "cplus.met"
        }
#line 2768 "cplus.met"
#line 2768 "cplus.met"
    }
#line 2768 "cplus.met"
#line 2769 "cplus.met"
     } } 
#line 2769 "cplus.met"
#line 2769 "cplus.met"
#line 2771 "cplus.met"
    {
#line 2771 "cplus.met"
        _retValue = retTree ;
#line 2771 "cplus.met"
        goto arg_typ_list_ret;
#line 2771 "cplus.met"
        
#line 2771 "cplus.met"
    }
#line 2771 "cplus.met"
#line 2771 "cplus.met"
#line 2771 "cplus.met"

#line 2772 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2772 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2772 "cplus.met"
return((PPTREE) 0);
#line 2772 "cplus.met"

#line 2772 "cplus.met"
arg_typ_list_exit :
#line 2772 "cplus.met"

#line 2772 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2772 "cplus.met"
    _funcLevel--;
#line 2772 "cplus.met"
    return((PPTREE) -1) ;
#line 2772 "cplus.met"

#line 2772 "cplus.met"
arg_typ_list_ret :
#line 2772 "cplus.met"
    
#line 2772 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2772 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2772 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2772 "cplus.met"
    return _retValue ;
#line 2772 "cplus.met"
}
#line 2772 "cplus.met"

#line 2772 "cplus.met"
#line 3215 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 3215 "cplus.met"
{
#line 3215 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3215 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3215 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3215 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 3215 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3215 "cplus.met"
#line 3215 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3215 "cplus.met"
#line 3217 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 67, cplus)){
#line 3217 "cplus.met"
#line 3218 "cplus.met"
        {
#line 3218 "cplus.met"
            PPTREE _ptRes0=0;
#line 3218 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3218 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 3218 "cplus.met"
            expTree=_ptRes0;
#line 3218 "cplus.met"
        }
#line 3218 "cplus.met"
    } else {
#line 3218 "cplus.met"
#line 3220 "cplus.met"
        {
#line 3220 "cplus.met"
            PPTREE _ptRes0=0;
#line 3220 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3220 "cplus.met"
            expTree=_ptRes0;
#line 3220 "cplus.met"
        }
#line 3220 "cplus.met"
    }
#line 3220 "cplus.met"
#line 3221 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3221 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3221 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 3221 "cplus.met"
    } else {
#line 3221 "cplus.met"
        tokenAhead = 0 ;
#line 3221 "cplus.met"
    }
#line 3221 "cplus.met"
#line 3222 "cplus.met"
    {
#line 3222 "cplus.met"
        _retValue = expTree ;
#line 3222 "cplus.met"
        goto array_expression_follow_ret;
#line 3222 "cplus.met"
        
#line 3222 "cplus.met"
    }
#line 3222 "cplus.met"
#line 3222 "cplus.met"
#line 3222 "cplus.met"

#line 3223 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3223 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3223 "cplus.met"
return((PPTREE) 0);
#line 3223 "cplus.met"

#line 3223 "cplus.met"
array_expression_follow_exit :
#line 3223 "cplus.met"

#line 3223 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 3223 "cplus.met"
    _funcLevel--;
#line 3223 "cplus.met"
    return((PPTREE) -1) ;
#line 3223 "cplus.met"

#line 3223 "cplus.met"
array_expression_follow_ret :
#line 3223 "cplus.met"
    
#line 3223 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 3223 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3223 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3223 "cplus.met"
    return _retValue ;
#line 3223 "cplus.met"
}
#line 3223 "cplus.met"

#line 3223 "cplus.met"
#line 2428 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2428 "cplus.met"
{
#line 2428 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2428 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2428 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2428 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2428 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2428 "cplus.met"
#line 2428 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2428 "cplus.met"
#line 2430 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2430 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2430 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2430 "cplus.met"
    } else {
#line 2430 "cplus.met"
        tokenAhead = 0 ;
#line 2430 "cplus.met"
    }
#line 2430 "cplus.met"
#line 2431 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2431 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2431 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2431 "cplus.met"
    } else {
#line 2431 "cplus.met"
        tokenAhead = 0 ;
#line 2431 "cplus.met"
    }
#line 2431 "cplus.met"
#line 2432 "cplus.met"
    {
#line 2432 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2432 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2432 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2432 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2432 "cplus.met"
        }
#line 2432 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2432 "cplus.met"
        retTree=_ptRes0;
#line 2432 "cplus.met"
    }
#line 2432 "cplus.met"
#line 2433 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2433 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2433 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2433 "cplus.met"
    } else {
#line 2433 "cplus.met"
        tokenAhead = 0 ;
#line 2433 "cplus.met"
    }
#line 2433 "cplus.met"
#line 2434 "cplus.met"
    {
#line 2434 "cplus.met"
        _retValue = retTree ;
#line 2434 "cplus.met"
        goto asm_call_ret;
#line 2434 "cplus.met"
        
#line 2434 "cplus.met"
    }
#line 2434 "cplus.met"
#line 2434 "cplus.met"
#line 2434 "cplus.met"

#line 2435 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2435 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2435 "cplus.met"
return((PPTREE) 0);
#line 2435 "cplus.met"

#line 2435 "cplus.met"
asm_call_exit :
#line 2435 "cplus.met"

#line 2435 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2435 "cplus.met"
    _funcLevel--;
#line 2435 "cplus.met"
    return((PPTREE) -1) ;
#line 2435 "cplus.met"

#line 2435 "cplus.met"
asm_call_ret :
#line 2435 "cplus.met"
    
#line 2435 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2435 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2435 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2435 "cplus.met"
    return _retValue ;
#line 2435 "cplus.met"
}
#line 2435 "cplus.met"

#line 2435 "cplus.met"
#line 1157 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 1157 "cplus.met"
{
#line 1157 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1157 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1157 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1157 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 1157 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1157 "cplus.met"
#line 1157 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1157 "cplus.met"
#line 1159 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1159 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 1159 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 1159 "cplus.met"
    } else {
#line 1159 "cplus.met"
        tokenAhead = 0 ;
#line 1159 "cplus.met"
    }
#line 1159 "cplus.met"
#line 1160 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1160 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1160 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 1160 "cplus.met"
    } else {
#line 1160 "cplus.met"
        tokenAhead = 0 ;
#line 1160 "cplus.met"
    }
#line 1160 "cplus.met"
#line 1161 "cplus.met"
    {
#line 1161 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1161 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 1161 "cplus.met"
        {
#line 1161 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1161 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1161 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1161 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1161 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 1161 "cplus.met"
            } else {
#line 1161 "cplus.met"
                tokenAhead = 0 ;
#line 1161 "cplus.met"
            }
#line 1161 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1161 "cplus.met"
            _ptTree0=_ptRes1;
#line 1161 "cplus.met"
        }
#line 1161 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1161 "cplus.met"
        retTree=_ptRes0;
#line 1161 "cplus.met"
    }
#line 1161 "cplus.met"
#line 1162 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1162 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1162 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 1162 "cplus.met"
    } else {
#line 1162 "cplus.met"
        tokenAhead = 0 ;
#line 1162 "cplus.met"
    }
#line 1162 "cplus.met"
#line 1163 "cplus.met"
    {
#line 1163 "cplus.met"
        _retValue = retTree ;
#line 1163 "cplus.met"
        goto asm_declaration_ret;
#line 1163 "cplus.met"
        
#line 1163 "cplus.met"
    }
#line 1163 "cplus.met"
#line 1163 "cplus.met"
#line 1163 "cplus.met"

#line 1164 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1164 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1164 "cplus.met"
return((PPTREE) 0);
#line 1164 "cplus.met"

#line 1164 "cplus.met"
asm_declaration_exit :
#line 1164 "cplus.met"

#line 1164 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 1164 "cplus.met"
    _funcLevel--;
#line 1164 "cplus.met"
    return((PPTREE) -1) ;
#line 1164 "cplus.met"

#line 1164 "cplus.met"
asm_declaration_ret :
#line 1164 "cplus.met"
    
#line 1164 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 1164 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1164 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1164 "cplus.met"
    return _retValue ;
#line 1164 "cplus.met"
}
#line 1164 "cplus.met"

#line 1164 "cplus.met"
