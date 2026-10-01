/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2634 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2634 "cplus.met"
{
#line 2634 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2634 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2634 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2634 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2634 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2634 "cplus.met"
#line 2634 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2634 "cplus.met"
#line 2636 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 129, cplus)){
#line 2636 "cplus.met"
#line 2637 "cplus.met"
        {
#line 2637 "cplus.met"
            PPTREE _ptTree0=0;
#line 2637 "cplus.met"
            {
#line 2637 "cplus.met"
                PPTREE _ptTree1=0;
#line 2637 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2637 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2637 "cplus.met"
                }
#line 2637 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2637 "cplus.met"
            }
#line 2637 "cplus.met"
            _retValue =_ptTree0;
#line 2637 "cplus.met"
            goto abstract_declarator_ret;
#line 2637 "cplus.met"
        }
#line 2637 "cplus.met"
    }
#line 2637 "cplus.met"
#line 2638 "cplus.met"
    retTree = (PPTREE) 0;
#line 2638 "cplus.met"
#line 2639 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2639 "cplus.met"
    switch( lexEl.Value) {
#line 2639 "cplus.met"
#line 2640 "cplus.met"
        case ETOI : 
#line 2640 "cplus.met"
            tokenAhead = 0 ;
#line 2640 "cplus.met"
            CommTerm();
#line 2640 "cplus.met"
#line 2640 "cplus.met"
            {
#line 2640 "cplus.met"
                PPTREE _ptTree0=0;
#line 2640 "cplus.met"
                {
#line 2640 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2640 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2640 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2640 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2640 "cplus.met"
                    }
#line 2640 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2640 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2640 "cplus.met"
                }
#line 2640 "cplus.met"
                _retValue =_ptTree0;
#line 2640 "cplus.met"
                goto abstract_declarator_ret;
#line 2640 "cplus.met"
            }
#line 2640 "cplus.met"
            break;
#line 2640 "cplus.met"
#line 2641 "cplus.met"
        case ETCOETCO : 
#line 2641 "cplus.met"
            tokenAhead = 0 ;
#line 2641 "cplus.met"
            CommTerm();
#line 2641 "cplus.met"
#line 2641 "cplus.met"
            {
#line 2641 "cplus.met"
                PPTREE _ptTree0=0;
#line 2641 "cplus.met"
                {
#line 2641 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2641 "cplus.met"
                    _ptRes1= MakeTree(TYP_MOV, 1);
#line 2641 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2641 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2641 "cplus.met"
                    }
#line 2641 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2641 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2641 "cplus.met"
                }
#line 2641 "cplus.met"
                _retValue =_ptTree0;
#line 2641 "cplus.met"
                goto abstract_declarator_ret;
#line 2641 "cplus.met"
            }
#line 2641 "cplus.met"
            break;
#line 2641 "cplus.met"
#line 2642 "cplus.met"
        case POINPOINPOIN : 
#line 2642 "cplus.met"
            tokenAhead = 0 ;
#line 2642 "cplus.met"
            CommTerm();
#line 2642 "cplus.met"
#line 2642 "cplus.met"
            {
#line 2642 "cplus.met"
                PPTREE _ptTree0=0;
#line 2642 "cplus.met"
                {
#line 2642 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2642 "cplus.met"
                    _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2642 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2642 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2642 "cplus.met"
                    }
#line 2642 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2642 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2642 "cplus.met"
                }
#line 2642 "cplus.met"
                _retValue =_ptTree0;
#line 2642 "cplus.met"
                goto abstract_declarator_ret;
#line 2642 "cplus.met"
            }
#line 2642 "cplus.met"
            break;
#line 2642 "cplus.met"
#line 2643 "cplus.met"
        case ETCO : 
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
                    _ptRes1= MakeTree(TYP_REF, 1);
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
        case TILD : 
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
                    _ptRes1= MakeTree(DESTRUCT, 1);
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
#line 2648 "cplus.met"
        case POUV : 
#line 2648 "cplus.met"
            tokenAhead = 0 ;
#line 2648 "cplus.met"
            CommTerm();
#line 2648 "cplus.met"
#line 2646 "cplus.met"
#line 2647 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2647 "cplus.met"
#line 2648 "cplus.met"
                
#line 2648 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2648 "cplus.met"
                goto abstract_declarator_exit;
#line 2648 "cplus.met"
#line 2648 "cplus.met"
            }
#line 2648 "cplus.met"
#line 2649 "cplus.met"
            {
#line 2649 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2649 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2649 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2649 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2649 "cplus.met"
                }
#line 2649 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2649 "cplus.met"
                retTree=_ptRes0;
#line 2649 "cplus.met"
            }
#line 2649 "cplus.met"
#line 2650 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2650 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2650 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2650 "cplus.met"
            } else {
#line 2650 "cplus.met"
                tokenAhead = 0 ;
#line 2650 "cplus.met"
            }
#line 2650 "cplus.met"
#line 2651 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2651 "cplus.met"
#line 2652 "cplus.met"
                                         { PPTREE theTree ;
#line 2652 "cplus.met"
                                    theTree = valTree ;
#line 2652 "cplus.met"
                                    if (theTree) {
#line 2652 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2652 "cplus.met"
                                     if (NumberTree(theTree)
#line 2652 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2652 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2652 "cplus.met"
                                     else
#line 2652 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2652 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2652 "cplus.met"
                                        /* modif portage sun */
#line 2652 "cplus.met"
                                        retTree = valTree;
#line 2652 "cplus.met"
                                    }
#line 2652 "cplus.met"
                                       }
#line 2652 "cplus.met"
                                
#line 2652 "cplus.met"
            }
#line 2652 "cplus.met"
#line 2652 "cplus.met"
            break;
#line 2652 "cplus.met"
#line 2669 "cplus.met"
        case META : 
#line 2669 "cplus.met"
        case IDENT : 
#line 2669 "cplus.met"
#line 2670 "cplus.met"
#line 2671 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2671 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2671 "cplus.met"
            }
#line 2671 "cplus.met"
#line 2672 "cplus.met"
            {
#line 2672 "cplus.met"
                PPTREE _ptTree0=0;
#line 2672 "cplus.met"
                {
#line 2672 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2672 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2672 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2672 "cplus.met"
                    }
#line 2672 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2672 "cplus.met"
                }
#line 2672 "cplus.met"
                _retValue =_ptTree0;
#line 2672 "cplus.met"
                goto abstract_declarator_ret;
#line 2672 "cplus.met"
            }
#line 2672 "cplus.met"
#line 2672 "cplus.met"
            break;
#line 2672 "cplus.met"
#line 2678 "cplus.met"
        default : 
#line 2678 "cplus.met"
#line 2677 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2677 "cplus.met"
#line 2679 "cplus.met"
                retTree = valTree ;
#line 2679 "cplus.met"
#line 2679 "cplus.met"
            }
#line 2679 "cplus.met"
            break;
#line 2679 "cplus.met"
    }
#line 2679 "cplus.met"
#line 2681 "cplus.met"
    {
#line 2681 "cplus.met"
        _retValue = retTree ;
#line 2681 "cplus.met"
        goto abstract_declarator_ret;
#line 2681 "cplus.met"
        
#line 2681 "cplus.met"
    }
#line 2681 "cplus.met"
#line 2681 "cplus.met"
#line 2681 "cplus.met"

#line 2682 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2682 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2682 "cplus.met"
return((PPTREE) 0);
#line 2682 "cplus.met"

#line 2682 "cplus.met"
abstract_declarator_exit :
#line 2682 "cplus.met"

#line 2682 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2682 "cplus.met"
    _funcLevel--;
#line 2682 "cplus.met"
    return((PPTREE) -1) ;
#line 2682 "cplus.met"

#line 2682 "cplus.met"
abstract_declarator_ret :
#line 2682 "cplus.met"
    
#line 2682 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2682 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2682 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2682 "cplus.met"
    return _retValue ;
#line 2682 "cplus.met"
}
#line 2682 "cplus.met"

#line 2682 "cplus.met"
#line 3021 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 3021 "cplus.met"
{
#line 3021 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3021 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3021 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3021 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 3021 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3021 "cplus.met"
#line 3021 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3021 "cplus.met"
#line 3023 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3023 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 3023 "cplus.met"
    }
#line 3023 "cplus.met"
#line 3024 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 3024 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 3024 "cplus.met"
#line 3025 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3025 "cplus.met"
        switch( lexEl.Value) {
#line 3025 "cplus.met"
#line 3026 "cplus.met"
            case PLUS : 
#line 3026 "cplus.met"
                tokenAhead = 0 ;
#line 3026 "cplus.met"
                CommTerm();
#line 3026 "cplus.met"
#line 3026 "cplus.met"
                {
#line 3026 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3026 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 3026 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3026 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3026 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 3026 "cplus.met"
                    }
#line 3026 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3026 "cplus.met"
                    expTree=_ptRes0;
#line 3026 "cplus.met"
                }
#line 3026 "cplus.met"
                break;
#line 3026 "cplus.met"
#line 3027 "cplus.met"
            case TIRE : 
#line 3027 "cplus.met"
                tokenAhead = 0 ;
#line 3027 "cplus.met"
                CommTerm();
#line 3027 "cplus.met"
#line 3027 "cplus.met"
                {
#line 3027 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3027 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 3027 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3027 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 3027 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 3027 "cplus.met"
                    }
#line 3027 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3027 "cplus.met"
                    expTree=_ptRes0;
#line 3027 "cplus.met"
                }
#line 3027 "cplus.met"
                break;
#line 3027 "cplus.met"
            default :
#line 3027 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 3027 "cplus.met"
                break;
#line 3027 "cplus.met"
        }
#line 3027 "cplus.met"
    } 
#line 3027 "cplus.met"
#line 3029 "cplus.met"
    {
#line 3029 "cplus.met"
        _retValue = expTree ;
#line 3029 "cplus.met"
        goto additive_expression_ret;
#line 3029 "cplus.met"
        
#line 3029 "cplus.met"
    }
#line 3029 "cplus.met"
#line 3029 "cplus.met"
#line 3029 "cplus.met"

#line 3030 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3030 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3030 "cplus.met"
return((PPTREE) 0);
#line 3030 "cplus.met"

#line 3030 "cplus.met"
additive_expression_exit :
#line 3030 "cplus.met"

#line 3030 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 3030 "cplus.met"
    _funcLevel--;
#line 3030 "cplus.met"
    return((PPTREE) -1) ;
#line 3030 "cplus.met"

#line 3030 "cplus.met"
additive_expression_ret :
#line 3030 "cplus.met"
    
#line 3030 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 3030 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3030 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3030 "cplus.met"
    return _retValue ;
#line 3030 "cplus.met"
}
#line 3030 "cplus.met"

#line 3030 "cplus.met"
#line 3121 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 3121 "cplus.met"
{
#line 3121 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3121 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3121 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3121 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 3121 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3121 "cplus.met"
#line 3121 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 3121 "cplus.met"
#line 3123 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 3123 "cplus.met"
#line 3124 "cplus.met"
#line 3125 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3125 "cplus.met"
        switch( lexEl.Value) {
#line 3125 "cplus.met"
#line 3126 "cplus.met"
            case NEW : 
#line 3126 "cplus.met"
#line 3126 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 3126 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3126 "cplus.met"
                }
#line 3126 "cplus.met"
                break;
#line 3126 "cplus.met"
#line 3127 "cplus.met"
            case DELETE : 
#line 3127 "cplus.met"
#line 3127 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 3127 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3127 "cplus.met"
                }
#line 3127 "cplus.met"
                break;
#line 3127 "cplus.met"
            default :
#line 3127 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 3127 "cplus.met"
                break;
#line 3127 "cplus.met"
        }
#line 3127 "cplus.met"
#line 3129 "cplus.met"
        {
#line 3129 "cplus.met"
            PPTREE _ptRes0=0;
#line 3129 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 3129 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 3129 "cplus.met"
            retTree=_ptRes0;
#line 3129 "cplus.met"
        }
#line 3129 "cplus.met"
#line 3129 "cplus.met"
#line 3129 "cplus.met"
    } else {
#line 3129 "cplus.met"
#line 3132 "cplus.met"
#line 3133 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3133 "cplus.met"
        switch( lexEl.Value) {
#line 3133 "cplus.met"
#line 3134 "cplus.met"
            case NEW : 
#line 3134 "cplus.met"
#line 3134 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 3134 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3134 "cplus.met"
                }
#line 3134 "cplus.met"
                break;
#line 3134 "cplus.met"
#line 3135 "cplus.met"
            case DELETE : 
#line 3135 "cplus.met"
#line 3135 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 3135 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 3135 "cplus.met"
                }
#line 3135 "cplus.met"
                break;
#line 3135 "cplus.met"
            default :
#line 3135 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 3135 "cplus.met"
                break;
#line 3135 "cplus.met"
        }
#line 3135 "cplus.met"
#line 3137 "cplus.met"
        retTree = valTree ;
#line 3137 "cplus.met"
#line 3137 "cplus.met"
    }
#line 3137 "cplus.met"
#line 3139 "cplus.met"
    {
#line 3139 "cplus.met"
        _retValue = retTree ;
#line 3139 "cplus.met"
        goto alloc_expression_ret;
#line 3139 "cplus.met"
        
#line 3139 "cplus.met"
    }
#line 3139 "cplus.met"
#line 3139 "cplus.met"
#line 3139 "cplus.met"

#line 3140 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3140 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3140 "cplus.met"
return((PPTREE) 0);
#line 3140 "cplus.met"

#line 3140 "cplus.met"
alloc_expression_exit :
#line 3140 "cplus.met"

#line 3140 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 3140 "cplus.met"
    _funcLevel--;
#line 3140 "cplus.met"
    return((PPTREE) -1) ;
#line 3140 "cplus.met"

#line 3140 "cplus.met"
alloc_expression_ret :
#line 3140 "cplus.met"
    
#line 3140 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 3140 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3140 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3140 "cplus.met"
    return _retValue ;
#line 3140 "cplus.met"
}
#line 3140 "cplus.met"

#line 3140 "cplus.met"
#line 3171 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 3171 "cplus.met"
{
#line 3171 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3171 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3171 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3171 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 3171 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3171 "cplus.met"
#line 3171 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3171 "cplus.met"
#line 3171 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3171 "cplus.met"
#line 3173 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3173 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 3173 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 3173 "cplus.met"
    } else {
#line 3173 "cplus.met"
        tokenAhead = 0 ;
#line 3173 "cplus.met"
    }
#line 3173 "cplus.met"
#line 3174 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 105, cplus))){
#line 3174 "cplus.met"
#line 3175 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 3175 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3175 "cplus.met"
        }
#line 3175 "cplus.met"
    }
#line 3175 "cplus.met"
#line 3176 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3176 "cplus.met"
#line 3177 "cplus.met"
#line 3178 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3178 "cplus.met"
#line 3180 "cplus.met"
#line 3180 "cplus.met"
            _addlist1 = list ;
#line 3180 "cplus.met"
#line 3179 "cplus.met"
            do {
#line 3179 "cplus.met"
#line 3180 "cplus.met"
                {
#line 3180 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3180 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 3180 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3180 "cplus.met"
                    }
#line 3180 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3180 "cplus.met"
                }
#line 3180 "cplus.met"
#line 3180 "cplus.met"
                if (list){
#line 3180 "cplus.met"
#line 3180 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3180 "cplus.met"
                } else {
#line 3180 "cplus.met"
#line 3180 "cplus.met"
                    list = _addlist1 ;
#line 3180 "cplus.met"
                }
#line 3180 "cplus.met"
#line 3180 "cplus.met"
#line 3181 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3181 "cplus.met"
        }
#line 3181 "cplus.met"
#line 3182 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3182 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3182 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 3182 "cplus.met"
        } else {
#line 3182 "cplus.met"
            tokenAhead = 0 ;
#line 3182 "cplus.met"
        }
#line 3182 "cplus.met"
#line 3183 "cplus.met"
        {
#line 3183 "cplus.met"
            PPTREE _ptTree0=0;
#line 3183 "cplus.met"
            {
#line 3183 "cplus.met"
                PPTREE _ptRes1=0;
#line 3183 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 3183 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3183 "cplus.met"
                _ptTree0=_ptRes1;
#line 3183 "cplus.met"
            }
#line 3183 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3183 "cplus.met"
        }
#line 3183 "cplus.met"
#line 3183 "cplus.met"
#line 3183 "cplus.met"
    }
#line 3183 "cplus.met"
#line 3185 "cplus.met"
    {
#line 3185 "cplus.met"
        _retValue = retTree ;
#line 3185 "cplus.met"
        goto allocation_expression_ret;
#line 3185 "cplus.met"
        
#line 3185 "cplus.met"
    }
#line 3185 "cplus.met"
#line 3185 "cplus.met"
#line 3185 "cplus.met"

#line 3186 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3186 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3186 "cplus.met"
return((PPTREE) 0);
#line 3186 "cplus.met"

#line 3186 "cplus.met"
allocation_expression_exit :
#line 3186 "cplus.met"

#line 3186 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3186 "cplus.met"
    _funcLevel--;
#line 3186 "cplus.met"
    return((PPTREE) -1) ;
#line 3186 "cplus.met"

#line 3186 "cplus.met"
allocation_expression_ret :
#line 3186 "cplus.met"
    
#line 3186 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 3186 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3186 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3186 "cplus.met"
    return _retValue ;
#line 3186 "cplus.met"
}
#line 3186 "cplus.met"

#line 3186 "cplus.met"
#line 2975 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2975 "cplus.met"
{
#line 2975 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2975 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2975 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2975 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2975 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2975 "cplus.met"
#line 2975 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2975 "cplus.met"
#line 2977 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2977 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2977 "cplus.met"
    }
#line 2977 "cplus.met"
#line 2978 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2978 "cplus.met"
#line 2979 "cplus.met"
        {
#line 2979 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2979 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2979 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2979 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2979 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2979 "cplus.met"
            }
#line 2979 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2979 "cplus.met"
            expTree=_ptRes0;
#line 2979 "cplus.met"
        }
#line 2979 "cplus.met"
    } 
#line 2979 "cplus.met"
#line 2980 "cplus.met"
    {
#line 2980 "cplus.met"
        _retValue = expTree ;
#line 2980 "cplus.met"
        goto and_expression_ret;
#line 2980 "cplus.met"
        
#line 2980 "cplus.met"
    }
#line 2980 "cplus.met"
#line 2980 "cplus.met"
#line 2980 "cplus.met"

#line 2981 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2981 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2981 "cplus.met"
return((PPTREE) 0);
#line 2981 "cplus.met"

#line 2981 "cplus.met"
and_expression_exit :
#line 2981 "cplus.met"

#line 2981 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2981 "cplus.met"
    _funcLevel--;
#line 2981 "cplus.met"
    return((PPTREE) -1) ;
#line 2981 "cplus.met"

#line 2981 "cplus.met"
and_expression_ret :
#line 2981 "cplus.met"
    
#line 2981 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2981 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2981 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2981 "cplus.met"
    return _retValue ;
#line 2981 "cplus.met"
}
#line 2981 "cplus.met"

#line 2981 "cplus.met"
#line 2804 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2804 "cplus.met"
{
#line 2804 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2804 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2804 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2804 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2804 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2804 "cplus.met"
#line 2804 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2804 "cplus.met"
#line 2806 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2806 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2806 "cplus.met"
    }
#line 2806 "cplus.met"
#line 2807 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2807 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2807 "cplus.met"
#line 2808 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2808 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2808 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2808 "cplus.met"
        } else {
#line 2808 "cplus.met"
            tokenAhead = 0 ;
#line 2808 "cplus.met"
        }
#line 2808 "cplus.met"
    }
#line 2808 "cplus.met"
#line 2809 "cplus.met"
    {
#line 2809 "cplus.met"
        _retValue = retTree ;
#line 2809 "cplus.met"
        goto arg_declarator_ret;
#line 2809 "cplus.met"
        
#line 2809 "cplus.met"
    }
#line 2809 "cplus.met"
#line 2809 "cplus.met"
#line 2809 "cplus.met"

#line 2810 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2810 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2810 "cplus.met"
return((PPTREE) 0);
#line 2810 "cplus.met"

#line 2810 "cplus.met"
arg_declarator_exit :
#line 2810 "cplus.met"

#line 2810 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2810 "cplus.met"
    _funcLevel--;
#line 2810 "cplus.met"
    return((PPTREE) -1) ;
#line 2810 "cplus.met"

#line 2810 "cplus.met"
arg_declarator_ret :
#line 2810 "cplus.met"
    
#line 2810 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2810 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2810 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2810 "cplus.met"
    return _retValue ;
#line 2810 "cplus.met"
}
#line 2810 "cplus.met"

#line 2810 "cplus.met"
#line 2795 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2795 "cplus.met"
{
#line 2795 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2795 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2795 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2795 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2795 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2795 "cplus.met"
#line 2795 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2795 "cplus.met"
#line 2797 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_base_type), 9, cplus))){
#line 2797 "cplus.met"
#line 2798 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_expression), 10, cplus))){
#line 2798 "cplus.met"
#line 2799 "cplus.met"
            if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2799 "cplus.met"
                MulFreeTree(1,retTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2799 "cplus.met"
            }
#line 2799 "cplus.met"
        }
#line 2799 "cplus.met"
    }
#line 2799 "cplus.met"
#line 2800 "cplus.met"
    {
#line 2800 "cplus.met"
        _retValue = retTree ;
#line 2800 "cplus.met"
        goto arg_declarator_base_ret;
#line 2800 "cplus.met"
        
#line 2800 "cplus.met"
    }
#line 2800 "cplus.met"
#line 2800 "cplus.met"
#line 2800 "cplus.met"

#line 2801 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2801 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2801 "cplus.met"
return((PPTREE) 0);
#line 2801 "cplus.met"

#line 2801 "cplus.met"
arg_declarator_base_exit :
#line 2801 "cplus.met"

#line 2801 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2801 "cplus.met"
    _funcLevel--;
#line 2801 "cplus.met"
    return((PPTREE) -1) ;
#line 2801 "cplus.met"

#line 2801 "cplus.met"
arg_declarator_base_ret :
#line 2801 "cplus.met"
    
#line 2801 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2801 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2801 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2801 "cplus.met"
    return _retValue ;
#line 2801 "cplus.met"
}
#line 2801 "cplus.met"

#line 2801 "cplus.met"
#line 2771 "cplus.met"
PPTREE cplus::arg_declarator_base_type ( int error_free)
#line 2771 "cplus.met"
{
#line 2771 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2771 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2771 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2771 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_ENTER,(PPTREE)0);
#line 2771 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2771 "cplus.met"
#line 2771 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2771 "cplus.met"
#line 2773 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2773 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2773 "cplus.met"
    }
#line 2773 "cplus.met"
#line 2774 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2774 "cplus.met"
#line 2775 "cplus.met"
        {
#line 2775 "cplus.met"
            PPTREE _ptRes0=0;
#line 2775 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2775 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2775 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2775 "cplus.met"
            valTree=_ptRes0;
#line 2775 "cplus.met"
        }
#line 2775 "cplus.met"
    } else {
#line 2775 "cplus.met"
#line 2777 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2777 "cplus.met"
#line 2778 "cplus.met"
            {
#line 2778 "cplus.met"
                PPTREE _ptRes0=0;
#line 2778 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
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
            valTree = retTree ;
#line 2780 "cplus.met"
        }
#line 2780 "cplus.met"
    }
#line 2780 "cplus.met"
#line 2781 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2781 "cplus.met"
#line 2782 "cplus.met"
#line 2783 "cplus.met"
        {
#line 2783 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2783 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2783 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2783 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2783 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2783 "cplus.met"
            }
#line 2783 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2783 "cplus.met"
            valTree=_ptRes0;
#line 2783 "cplus.met"
        }
#line 2783 "cplus.met"
#line 2783 "cplus.met"
#line 2783 "cplus.met"
    }
#line 2783 "cplus.met"
#line 2785 "cplus.met"
    {
#line 2785 "cplus.met"
        _retValue = valTree ;
#line 2785 "cplus.met"
        goto arg_declarator_base_type_ret;
#line 2785 "cplus.met"
        
#line 2785 "cplus.met"
    }
#line 2785 "cplus.met"
#line 2785 "cplus.met"
#line 2785 "cplus.met"

#line 2786 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2786 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2786 "cplus.met"
return((PPTREE) 0);
#line 2786 "cplus.met"

#line 2786 "cplus.met"
arg_declarator_base_type_exit :
#line 2786 "cplus.met"

#line 2786 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_EXIT,(PPTREE)0);
#line 2786 "cplus.met"
    _funcLevel--;
#line 2786 "cplus.met"
    return((PPTREE) -1) ;
#line 2786 "cplus.met"

#line 2786 "cplus.met"
arg_declarator_base_type_ret :
#line 2786 "cplus.met"
    
#line 2786 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_RETURN,_retValue);
#line 2786 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2786 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2786 "cplus.met"
    return _retValue ;
#line 2786 "cplus.met"
}
#line 2786 "cplus.met"

#line 2786 "cplus.met"
#line 2788 "cplus.met"
PPTREE cplus::arg_declarator_expression ( int error_free)
#line 2788 "cplus.met"
{
#line 2788 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2788 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2788 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2788 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_expression",TRACE_ENTER,(PPTREE)0);
#line 2788 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2788 "cplus.met"
#line 2789 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2789 "cplus.met"
#line 2790 "cplus.met"
        {
#line 2790 "cplus.met"
            PPTREE _ptTree0=0;
#line 2790 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2790 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(arg_declarator_expression_exit,"arg_declarator_expression")
#line 2790 "cplus.met"
            }
#line 2790 "cplus.met"
            _retValue =_ptTree0;
#line 2790 "cplus.met"
            goto arg_declarator_expression_ret;
#line 2790 "cplus.met"
        }
#line 2790 "cplus.met"
    } else {
#line 2790 "cplus.met"
#line 2792 "cplus.met"
        
#line 2792 "cplus.met"
        LEX_EXIT ("",0);
#line 2792 "cplus.met"
        goto arg_declarator_expression_exit;
#line 2792 "cplus.met"
    }
#line 2792 "cplus.met"
#line 2792 "cplus.met"
#line 2792 "cplus.met"

#line 2793 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2793 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2793 "cplus.met"
return((PPTREE) 0);
#line 2793 "cplus.met"

#line 2793 "cplus.met"
arg_declarator_expression_exit :
#line 2793 "cplus.met"

#line 2793 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_EXIT,(PPTREE)0);
#line 2793 "cplus.met"
    _funcLevel--;
#line 2793 "cplus.met"
    return((PPTREE) -1) ;
#line 2793 "cplus.met"

#line 2793 "cplus.met"
arg_declarator_expression_ret :
#line 2793 "cplus.met"
    
#line 2793 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_RETURN,_retValue);
#line 2793 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2793 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2793 "cplus.met"
    return _retValue ;
#line 2793 "cplus.met"
}
#line 2793 "cplus.met"

#line 2793 "cplus.met"
#line 2821 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2821 "cplus.met"
{
#line 2821 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2821 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2821 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2821 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2821 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2821 "cplus.met"
#line 2821 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2821 "cplus.met"
#line 2823 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2823 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2823 "cplus.met"
    }
#line 2823 "cplus.met"
#line 2824 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2824 "cplus.met"
#line 2825 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2825 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2825 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2825 "cplus.met"
        } else {
#line 2825 "cplus.met"
            tokenAhead = 0 ;
#line 2825 "cplus.met"
        }
#line 2825 "cplus.met"
    }
#line 2825 "cplus.met"
#line 2826 "cplus.met"
    {
#line 2826 "cplus.met"
        _retValue = retTree ;
#line 2826 "cplus.met"
        goto arg_declarator_followed_ret;
#line 2826 "cplus.met"
        
#line 2826 "cplus.met"
    }
#line 2826 "cplus.met"
#line 2826 "cplus.met"
#line 2826 "cplus.met"

#line 2827 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2827 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2827 "cplus.met"
return((PPTREE) 0);
#line 2827 "cplus.met"

#line 2827 "cplus.met"
arg_declarator_followed_exit :
#line 2827 "cplus.met"

#line 2827 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2827 "cplus.met"
    _funcLevel--;
#line 2827 "cplus.met"
    return((PPTREE) -1) ;
#line 2827 "cplus.met"

#line 2827 "cplus.met"
arg_declarator_followed_ret :
#line 2827 "cplus.met"
    
#line 2827 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
#line 2827 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2827 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2827 "cplus.met"
    return _retValue ;
#line 2827 "cplus.met"
}
#line 2827 "cplus.met"

#line 2827 "cplus.met"
#line 2829 "cplus.met"
PPTREE cplus::arg_declarator_followed_strict ( int error_free)
#line 2829 "cplus.met"
{
#line 2829 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2829 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2829 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2829 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_ENTER,(PPTREE)0);
#line 2829 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2829 "cplus.met"
#line 2829 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2829 "cplus.met"
#line 2831 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2831 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_strict_exit,"arg_declarator_followed_strict")
#line 2831 "cplus.met"
    }
#line 2831 "cplus.met"
#line 2832 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2832 "cplus.met"
#line 2833 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2833 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2833 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_strict_exit,",")
#line 2833 "cplus.met"
        } else {
#line 2833 "cplus.met"
            tokenAhead = 0 ;
#line 2833 "cplus.met"
        }
#line 2833 "cplus.met"
    }
#line 2833 "cplus.met"
#line 2834 "cplus.met"
    {
#line 2834 "cplus.met"
        _retValue = retTree ;
#line 2834 "cplus.met"
        goto arg_declarator_followed_strict_ret;
#line 2834 "cplus.met"
        
#line 2834 "cplus.met"
    }
#line 2834 "cplus.met"
#line 2834 "cplus.met"
#line 2834 "cplus.met"

#line 2835 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2835 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2835 "cplus.met"
return((PPTREE) 0);
#line 2835 "cplus.met"

#line 2835 "cplus.met"
arg_declarator_followed_strict_exit :
#line 2835 "cplus.met"

#line 2835 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_EXIT,(PPTREE)0);
#line 2835 "cplus.met"
    _funcLevel--;
#line 2835 "cplus.met"
    return((PPTREE) -1) ;
#line 2835 "cplus.met"

#line 2835 "cplus.met"
arg_declarator_followed_strict_ret :
#line 2835 "cplus.met"
    
#line 2835 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_RETURN,_retValue);
#line 2835 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2835 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2835 "cplus.met"
    return _retValue ;
#line 2835 "cplus.met"
}
#line 2835 "cplus.met"

#line 2835 "cplus.met"
#line 2812 "cplus.met"
PPTREE cplus::arg_declarator_strict ( int error_free)
#line 2812 "cplus.met"
{
#line 2812 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2812 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2812 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2812 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_strict",TRACE_ENTER,(PPTREE)0);
#line 2812 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2812 "cplus.met"
#line 2812 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2812 "cplus.met"
#line 2814 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2814 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_strict_exit,"arg_declarator_strict")
#line 2814 "cplus.met"
    }
#line 2814 "cplus.met"
#line 2815 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2815 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2815 "cplus.met"
#line 2816 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2816 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2816 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_strict_exit,",")
#line 2816 "cplus.met"
        } else {
#line 2816 "cplus.met"
            tokenAhead = 0 ;
#line 2816 "cplus.met"
        }
#line 2816 "cplus.met"
    }
#line 2816 "cplus.met"
#line 2817 "cplus.met"
    {
#line 2817 "cplus.met"
        _retValue = retTree ;
#line 2817 "cplus.met"
        goto arg_declarator_strict_ret;
#line 2817 "cplus.met"
        
#line 2817 "cplus.met"
    }
#line 2817 "cplus.met"
#line 2817 "cplus.met"
#line 2817 "cplus.met"

#line 2818 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2818 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2818 "cplus.met"
return((PPTREE) 0);
#line 2818 "cplus.met"

#line 2818 "cplus.met"
arg_declarator_strict_exit :
#line 2818 "cplus.met"

#line 2818 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_EXIT,(PPTREE)0);
#line 2818 "cplus.met"
    _funcLevel--;
#line 2818 "cplus.met"
    return((PPTREE) -1) ;
#line 2818 "cplus.met"

#line 2818 "cplus.met"
arg_declarator_strict_ret :
#line 2818 "cplus.met"
    
#line 2818 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_RETURN,_retValue);
#line 2818 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2818 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2818 "cplus.met"
    return _retValue ;
#line 2818 "cplus.met"
}
#line 2818 "cplus.met"

#line 2818 "cplus.met"
#line 2837 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2837 "cplus.met"
{
#line 2837 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2837 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2837 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2837 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2837 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2837 "cplus.met"
#line 2837 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2837 "cplus.met"
#line 2839 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2839 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2839 "cplus.met"
    }
#line 2839 "cplus.met"
#line 2840 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2840 "cplus.met"
#line 2841 "cplus.met"
        {
#line 2841 "cplus.met"
            PPTREE _ptRes0=0;
#line 2841 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2841 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2841 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2841 "cplus.met"
            valTree=_ptRes0;
#line 2841 "cplus.met"
        }
#line 2841 "cplus.met"
    } else {
#line 2841 "cplus.met"
#line 2843 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2843 "cplus.met"
#line 2844 "cplus.met"
            {
#line 2844 "cplus.met"
                PPTREE _ptRes0=0;
#line 2844 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
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
            valTree = retTree ;
#line 2846 "cplus.met"
        }
#line 2846 "cplus.met"
    }
#line 2846 "cplus.met"
#line 2847 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2847 "cplus.met"
#line 2848 "cplus.met"
#line 2849 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 155, cplus)){
#line 2849 "cplus.met"
#line 2850 "cplus.met"
            {
#line 2850 "cplus.met"
                PPTREE _ptRes0=0;
#line 2850 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2850 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2850 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2850 "cplus.met"
                valTree=_ptRes0;
#line 2850 "cplus.met"
            }
#line 2850 "cplus.met"
        } else {
#line 2850 "cplus.met"
#line 2852 "cplus.met"
            {
#line 2852 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2852 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2852 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2852 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2852 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2852 "cplus.met"
                }
#line 2852 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2852 "cplus.met"
                valTree=_ptRes0;
#line 2852 "cplus.met"
            }
#line 2852 "cplus.met"
        }
#line 2852 "cplus.met"
#line 2852 "cplus.met"
#line 2852 "cplus.met"
    }
#line 2852 "cplus.met"
#line 2854 "cplus.met"
    {
#line 2854 "cplus.met"
        _retValue = valTree ;
#line 2854 "cplus.met"
        goto arg_declarator_type_ret;
#line 2854 "cplus.met"
        
#line 2854 "cplus.met"
    }
#line 2854 "cplus.met"
#line 2854 "cplus.met"
#line 2854 "cplus.met"

#line 2855 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2855 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2855 "cplus.met"
return((PPTREE) 0);
#line 2855 "cplus.met"

#line 2855 "cplus.met"
arg_declarator_type_exit :
#line 2855 "cplus.met"

#line 2855 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2855 "cplus.met"
    _funcLevel--;
#line 2855 "cplus.met"
    return((PPTREE) -1) ;
#line 2855 "cplus.met"

#line 2855 "cplus.met"
arg_declarator_type_ret :
#line 2855 "cplus.met"
    
#line 2855 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2855 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2855 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2855 "cplus.met"
    return _retValue ;
#line 2855 "cplus.met"
}
#line 2855 "cplus.met"

#line 2855 "cplus.met"
#line 2484 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2484 "cplus.met"
{
#line 2484 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2484 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2484 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2484 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2484 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2484 "cplus.met"
#line 2484 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2484 "cplus.met"
#line 2486 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2486 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2486 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2486 "cplus.met"
    } else {
#line 2486 "cplus.met"
        tokenAhead = 0 ;
#line 2486 "cplus.met"
    }
#line 2486 "cplus.met"
#line 2487 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 16, cplus)){
#line 2487 "cplus.met"
#line 2488 "cplus.met"
        {
#line 2488 "cplus.met"
            PPTREE _ptRes0=0;
#line 2488 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2488 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2488 "cplus.met"
            retTree=_ptRes0;
#line 2488 "cplus.met"
        }
#line 2488 "cplus.met"
    } else {
#line 2488 "cplus.met"
#line 2490 "cplus.met"
        {
#line 2490 "cplus.met"
            PPTREE _ptRes0=0;
#line 2490 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2490 "cplus.met"
            retTree=_ptRes0;
#line 2490 "cplus.met"
        }
#line 2490 "cplus.met"
    }
#line 2490 "cplus.met"
#line 2491 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2491 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2491 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2491 "cplus.met"
    } else {
#line 2491 "cplus.met"
        tokenAhead = 0 ;
#line 2491 "cplus.met"
    }
#line 2491 "cplus.met"
#line 2492 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 65, cplus)){
#line 2492 "cplus.met"
#line 2493 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2493 "cplus.met"
#line 2493 "cplus.met"
    }
#line 2493 "cplus.met"
#line 2494 "cplus.met"
    {
#line 2494 "cplus.met"
        _retValue = retTree ;
#line 2494 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2494 "cplus.met"
        
#line 2494 "cplus.met"
    }
#line 2494 "cplus.met"
#line 2494 "cplus.met"
#line 2494 "cplus.met"

#line 2495 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2495 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2495 "cplus.met"
return((PPTREE) 0);
#line 2495 "cplus.met"

#line 2495 "cplus.met"
arg_typ_declarator_exit :
#line 2495 "cplus.met"

#line 2495 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2495 "cplus.met"
    _funcLevel--;
#line 2495 "cplus.met"
    return((PPTREE) -1) ;
#line 2495 "cplus.met"

#line 2495 "cplus.met"
arg_typ_declarator_ret :
#line 2495 "cplus.met"
    
#line 2495 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2495 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2495 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2495 "cplus.met"
    return _retValue ;
#line 2495 "cplus.met"
}
#line 2495 "cplus.met"

#line 2495 "cplus.met"
#line 2733 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2733 "cplus.met"
{
#line 2733 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2733 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2733 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2733 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2733 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2733 "cplus.met"
#line 2733 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2733 "cplus.met"
#line 2733 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2733 "cplus.met"
#line 2735 "cplus.met"
     { int followed = 0;
#line 2735 "cplus.met"
#line 2736 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 12, cplus)){
#line 2736 "cplus.met"
#line 2737 "cplus.met"
         followed = 1;
#line 2737 "cplus.met"
    } else {
#line 2737 "cplus.met"
#line 2739 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator_strict)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2739 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2739 "cplus.met"
        }
#line 2739 "cplus.met"
    }
#line 2739 "cplus.met"
#line 2740 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2740 "cplus.met"
#line 2741 "cplus.met"
#line 2742 "cplus.met"
     {  int exit = 0 ; 
#line 2742 "cplus.met"
#line 2742 "cplus.met"
    _addlist1 = retTree ;
#line 2742 "cplus.met"
#line 2743 "cplus.met"
    while ( followed && !exit ) { 
#line 2743 "cplus.met"
#line 2744 "cplus.met"
#line 2745 "cplus.met"
         followed = 0;
#line 2745 "cplus.met"
#line 2746 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 11, cplus)){
#line 2746 "cplus.met"
#line 2747 "cplus.met"
#line 2748 "cplus.met"
             followed = 1;
#line 2748 "cplus.met"
#line 2749 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2749 "cplus.met"
#line 2749 "cplus.met"
            if (retTree){
#line 2749 "cplus.met"
#line 2749 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2749 "cplus.met"
            } else {
#line 2749 "cplus.met"
#line 2749 "cplus.met"
                retTree = _addlist1 ;
#line 2749 "cplus.met"
            }
#line 2749 "cplus.met"
#line 2749 "cplus.met"
#line 2749 "cplus.met"
        } else {
#line 2749 "cplus.met"
#line 2752 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2752 "cplus.met"
#line 2753 "cplus.met"
#line 2754 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2754 "cplus.met"
#line 2754 "cplus.met"
                if (retTree){
#line 2754 "cplus.met"
#line 2754 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2754 "cplus.met"
                } else {
#line 2754 "cplus.met"
#line 2754 "cplus.met"
                    retTree = _addlist1 ;
#line 2754 "cplus.met"
                }
#line 2754 "cplus.met"
#line 2754 "cplus.met"
#line 2754 "cplus.met"
            } else {
#line 2754 "cplus.met"
#line 2757 "cplus.met"
#line 2758 "cplus.met"
                {
#line 2758 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2758 "cplus.met"
                    {
#line 2758 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2758 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2758 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2758 "cplus.met"
                    }
#line 2758 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2758 "cplus.met"
                }
#line 2758 "cplus.met"
#line 2758 "cplus.met"
                if (retTree){
#line 2758 "cplus.met"
#line 2758 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2758 "cplus.met"
                } else {
#line 2758 "cplus.met"
#line 2758 "cplus.met"
                    retTree = _addlist1 ;
#line 2758 "cplus.met"
                }
#line 2758 "cplus.met"
#line 2759 "cplus.met"
                 exit = 1 ;
#line 2759 "cplus.met"
#line 2760 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2760 "cplus.met"
#line 2760 "cplus.met"
                }
#line 2760 "cplus.met"
#line 2760 "cplus.met"
            }
#line 2760 "cplus.met"
        }
#line 2760 "cplus.met"
#line 2760 "cplus.met"
    } 
#line 2760 "cplus.met"
#line 2764 "cplus.met"
    if ((! ( exit )) && 
#line 2764 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2764 "cplus.met"
#line 2765 "cplus.met"
        {
#line 2765 "cplus.met"
            PPTREE _ptTree0=0;
#line 2765 "cplus.met"
            {
#line 2765 "cplus.met"
                PPTREE _ptRes1=0;
#line 2765 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2765 "cplus.met"
                _ptTree0=_ptRes1;
#line 2765 "cplus.met"
            }
#line 2765 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2765 "cplus.met"
        }
#line 2765 "cplus.met"
#line 2765 "cplus.met"
    }
#line 2765 "cplus.met"
#line 2766 "cplus.met"
     } } 
#line 2766 "cplus.met"
#line 2766 "cplus.met"
#line 2768 "cplus.met"
    {
#line 2768 "cplus.met"
        _retValue = retTree ;
#line 2768 "cplus.met"
        goto arg_typ_list_ret;
#line 2768 "cplus.met"
        
#line 2768 "cplus.met"
    }
#line 2768 "cplus.met"
#line 2768 "cplus.met"
#line 2768 "cplus.met"

#line 2769 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2769 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2769 "cplus.met"
return((PPTREE) 0);
#line 2769 "cplus.met"

#line 2769 "cplus.met"
arg_typ_list_exit :
#line 2769 "cplus.met"

#line 2769 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2769 "cplus.met"
    _funcLevel--;
#line 2769 "cplus.met"
    return((PPTREE) -1) ;
#line 2769 "cplus.met"

#line 2769 "cplus.met"
arg_typ_list_ret :
#line 2769 "cplus.met"
    
#line 2769 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2769 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2769 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2769 "cplus.met"
    return _retValue ;
#line 2769 "cplus.met"
}
#line 2769 "cplus.met"

#line 2769 "cplus.met"
#line 3212 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 3212 "cplus.met"
{
#line 3212 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3212 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3212 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3212 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 3212 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3212 "cplus.met"
#line 3212 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3212 "cplus.met"
#line 3214 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 67, cplus)){
#line 3214 "cplus.met"
#line 3215 "cplus.met"
        {
#line 3215 "cplus.met"
            PPTREE _ptRes0=0;
#line 3215 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3215 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 3215 "cplus.met"
            expTree=_ptRes0;
#line 3215 "cplus.met"
        }
#line 3215 "cplus.met"
    } else {
#line 3215 "cplus.met"
#line 3217 "cplus.met"
        {
#line 3217 "cplus.met"
            PPTREE _ptRes0=0;
#line 3217 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3217 "cplus.met"
            expTree=_ptRes0;
#line 3217 "cplus.met"
        }
#line 3217 "cplus.met"
    }
#line 3217 "cplus.met"
#line 3218 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3218 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3218 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 3218 "cplus.met"
    } else {
#line 3218 "cplus.met"
        tokenAhead = 0 ;
#line 3218 "cplus.met"
    }
#line 3218 "cplus.met"
#line 3219 "cplus.met"
    {
#line 3219 "cplus.met"
        _retValue = expTree ;
#line 3219 "cplus.met"
        goto array_expression_follow_ret;
#line 3219 "cplus.met"
        
#line 3219 "cplus.met"
    }
#line 3219 "cplus.met"
#line 3219 "cplus.met"
#line 3219 "cplus.met"

#line 3220 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3220 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3220 "cplus.met"
return((PPTREE) 0);
#line 3220 "cplus.met"

#line 3220 "cplus.met"
array_expression_follow_exit :
#line 3220 "cplus.met"

#line 3220 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 3220 "cplus.met"
    _funcLevel--;
#line 3220 "cplus.met"
    return((PPTREE) -1) ;
#line 3220 "cplus.met"

#line 3220 "cplus.met"
array_expression_follow_ret :
#line 3220 "cplus.met"
    
#line 3220 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 3220 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3220 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3220 "cplus.met"
    return _retValue ;
#line 3220 "cplus.met"
}
#line 3220 "cplus.met"

#line 3220 "cplus.met"
#line 2425 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2425 "cplus.met"
{
#line 2425 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2425 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2425 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2425 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2425 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2425 "cplus.met"
#line 2425 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2425 "cplus.met"
#line 2427 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2427 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2427 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2427 "cplus.met"
    } else {
#line 2427 "cplus.met"
        tokenAhead = 0 ;
#line 2427 "cplus.met"
    }
#line 2427 "cplus.met"
#line 2428 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2428 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2428 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2428 "cplus.met"
    } else {
#line 2428 "cplus.met"
        tokenAhead = 0 ;
#line 2428 "cplus.met"
    }
#line 2428 "cplus.met"
#line 2429 "cplus.met"
    {
#line 2429 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2429 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2429 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2429 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2429 "cplus.met"
        }
#line 2429 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2429 "cplus.met"
        retTree=_ptRes0;
#line 2429 "cplus.met"
    }
#line 2429 "cplus.met"
#line 2430 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2430 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2430 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2430 "cplus.met"
    } else {
#line 2430 "cplus.met"
        tokenAhead = 0 ;
#line 2430 "cplus.met"
    }
#line 2430 "cplus.met"
#line 2431 "cplus.met"
    {
#line 2431 "cplus.met"
        _retValue = retTree ;
#line 2431 "cplus.met"
        goto asm_call_ret;
#line 2431 "cplus.met"
        
#line 2431 "cplus.met"
    }
#line 2431 "cplus.met"
#line 2431 "cplus.met"
#line 2431 "cplus.met"

#line 2432 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2432 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2432 "cplus.met"
return((PPTREE) 0);
#line 2432 "cplus.met"

#line 2432 "cplus.met"
asm_call_exit :
#line 2432 "cplus.met"

#line 2432 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2432 "cplus.met"
    _funcLevel--;
#line 2432 "cplus.met"
    return((PPTREE) -1) ;
#line 2432 "cplus.met"

#line 2432 "cplus.met"
asm_call_ret :
#line 2432 "cplus.met"
    
#line 2432 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2432 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2432 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2432 "cplus.met"
    return _retValue ;
#line 2432 "cplus.met"
}
#line 2432 "cplus.met"

#line 2432 "cplus.met"
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
