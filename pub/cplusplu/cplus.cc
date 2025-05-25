/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2463 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2463 "cplus.met"
{
#line 2463 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2463 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2463 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2463 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2463 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2463 "cplus.met"
#line 2463 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2463 "cplus.met"
#line 2465 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 126, cplus)){
#line 2465 "cplus.met"
#line 2466 "cplus.met"
        {
#line 2466 "cplus.met"
            PPTREE _ptTree0=0;
#line 2466 "cplus.met"
            {
#line 2466 "cplus.met"
                PPTREE _ptTree1=0;
#line 2466 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2466 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2466 "cplus.met"
                }
#line 2466 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2466 "cplus.met"
            }
#line 2466 "cplus.met"
            _retValue =_ptTree0;
#line 2466 "cplus.met"
            goto abstract_declarator_ret;
#line 2466 "cplus.met"
        }
#line 2466 "cplus.met"
    }
#line 2466 "cplus.met"
#line 2467 "cplus.met"
    retTree = (PPTREE) 0;
#line 2467 "cplus.met"
#line 2468 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2468 "cplus.met"
    switch( lexEl.Value) {
#line 2468 "cplus.met"
#line 2469 "cplus.met"
        case ETOI : 
#line 2469 "cplus.met"
            tokenAhead = 0 ;
#line 2469 "cplus.met"
            CommTerm();
#line 2469 "cplus.met"
#line 2469 "cplus.met"
            {
#line 2469 "cplus.met"
                PPTREE _ptTree0=0;
#line 2469 "cplus.met"
                {
#line 2469 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2469 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2469 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2469 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2469 "cplus.met"
                    }
#line 2469 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2469 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2469 "cplus.met"
                }
#line 2469 "cplus.met"
                _retValue =_ptTree0;
#line 2469 "cplus.met"
                goto abstract_declarator_ret;
#line 2469 "cplus.met"
            }
#line 2469 "cplus.met"
            break;
#line 2469 "cplus.met"
#line 2470 "cplus.met"
        case ETCO : 
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
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2470 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2470 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
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
                goto abstract_declarator_ret;
#line 2470 "cplus.met"
            }
#line 2470 "cplus.met"
            break;
#line 2470 "cplus.met"
#line 2471 "cplus.met"
        case TILD : 
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
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2471 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2471 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
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
                goto abstract_declarator_ret;
#line 2471 "cplus.met"
            }
#line 2471 "cplus.met"
            break;
#line 2471 "cplus.met"
#line 2475 "cplus.met"
        case POUV : 
#line 2475 "cplus.met"
            tokenAhead = 0 ;
#line 2475 "cplus.met"
            CommTerm();
#line 2475 "cplus.met"
#line 2473 "cplus.met"
#line 2474 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2474 "cplus.met"
#line 2475 "cplus.met"
                
#line 2475 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2475 "cplus.met"
                goto abstract_declarator_exit;
#line 2475 "cplus.met"
#line 2475 "cplus.met"
            }
#line 2475 "cplus.met"
#line 2476 "cplus.met"
            {
#line 2476 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2476 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2476 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2476 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2476 "cplus.met"
                }
#line 2476 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2476 "cplus.met"
                retTree=_ptRes0;
#line 2476 "cplus.met"
            }
#line 2476 "cplus.met"
#line 2477 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2477 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2477 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2477 "cplus.met"
            } else {
#line 2477 "cplus.met"
                tokenAhead = 0 ;
#line 2477 "cplus.met"
            }
#line 2477 "cplus.met"
#line 2478 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 51, cplus)){
#line 2478 "cplus.met"
#line 2479 "cplus.met"
                                         { PPTREE theTree ;
#line 2479 "cplus.met"
                                    theTree = valTree ;
#line 2479 "cplus.met"
                                    if (theTree) {
#line 2479 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2479 "cplus.met"
                                     if (NumberTree(theTree)
#line 2479 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2479 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2479 "cplus.met"
                                     else
#line 2479 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2479 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2479 "cplus.met"
                                        /* modif portage sun */
#line 2479 "cplus.met"
                                        retTree = valTree;
#line 2479 "cplus.met"
                                    }
#line 2479 "cplus.met"
                                       }
#line 2479 "cplus.met"
                                
#line 2479 "cplus.met"
            }
#line 2479 "cplus.met"
#line 2479 "cplus.met"
            break;
#line 2479 "cplus.met"
#line 2496 "cplus.met"
        case META : 
#line 2496 "cplus.met"
        case IDENT : 
#line 2496 "cplus.met"
#line 2497 "cplus.met"
#line 2498 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2498 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2498 "cplus.met"
            }
#line 2498 "cplus.met"
#line 2499 "cplus.met"
            {
#line 2499 "cplus.met"
                PPTREE _ptTree0=0;
#line 2499 "cplus.met"
                {
#line 2499 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2499 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2499 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2499 "cplus.met"
                    }
#line 2499 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2499 "cplus.met"
                }
#line 2499 "cplus.met"
                _retValue =_ptTree0;
#line 2499 "cplus.met"
                goto abstract_declarator_ret;
#line 2499 "cplus.met"
            }
#line 2499 "cplus.met"
#line 2499 "cplus.met"
            break;
#line 2499 "cplus.met"
#line 2505 "cplus.met"
        default : 
#line 2505 "cplus.met"
#line 2504 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 51, cplus)){
#line 2504 "cplus.met"
#line 2506 "cplus.met"
                retTree = valTree ;
#line 2506 "cplus.met"
#line 2506 "cplus.met"
            }
#line 2506 "cplus.met"
            break;
#line 2506 "cplus.met"
    }
#line 2506 "cplus.met"
#line 2508 "cplus.met"
    {
#line 2508 "cplus.met"
        _retValue = retTree ;
#line 2508 "cplus.met"
        goto abstract_declarator_ret;
#line 2508 "cplus.met"
        
#line 2508 "cplus.met"
    }
#line 2508 "cplus.met"
#line 2508 "cplus.met"
#line 2508 "cplus.met"

#line 2509 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2509 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2509 "cplus.met"
return((PPTREE) 0);
#line 2509 "cplus.met"

#line 2509 "cplus.met"
abstract_declarator_exit :
#line 2509 "cplus.met"

#line 2509 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2509 "cplus.met"
    _funcLevel--;
#line 2509 "cplus.met"
    return((PPTREE) -1) ;
#line 2509 "cplus.met"

#line 2509 "cplus.met"
abstract_declarator_ret :
#line 2509 "cplus.met"
    
#line 2509 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2509 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2509 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2509 "cplus.met"
    return _retValue ;
#line 2509 "cplus.met"
}
#line 2509 "cplus.met"

#line 2509 "cplus.met"
#line 2838 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2838 "cplus.met"
{
#line 2838 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2838 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2838 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2838 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2838 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2838 "cplus.met"
#line 2838 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2838 "cplus.met"
#line 2840 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2840 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2840 "cplus.met"
    }
#line 2840 "cplus.met"
#line 2841 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2841 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2841 "cplus.met"
#line 2842 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2842 "cplus.met"
        switch( lexEl.Value) {
#line 2842 "cplus.met"
#line 2843 "cplus.met"
            case PLUS : 
#line 2843 "cplus.met"
                tokenAhead = 0 ;
#line 2843 "cplus.met"
                CommTerm();
#line 2843 "cplus.met"
#line 2843 "cplus.met"
                {
#line 2843 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2843 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2843 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2843 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2843 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2843 "cplus.met"
                    }
#line 2843 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2843 "cplus.met"
                    expTree=_ptRes0;
#line 2843 "cplus.met"
                }
#line 2843 "cplus.met"
                break;
#line 2843 "cplus.met"
#line 2844 "cplus.met"
            case TIRE : 
#line 2844 "cplus.met"
                tokenAhead = 0 ;
#line 2844 "cplus.met"
                CommTerm();
#line 2844 "cplus.met"
#line 2844 "cplus.met"
                {
#line 2844 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2844 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2844 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2844 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2844 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2844 "cplus.met"
                    }
#line 2844 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2844 "cplus.met"
                    expTree=_ptRes0;
#line 2844 "cplus.met"
                }
#line 2844 "cplus.met"
                break;
#line 2844 "cplus.met"
            default :
#line 2844 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2844 "cplus.met"
                break;
#line 2844 "cplus.met"
        }
#line 2844 "cplus.met"
    } 
#line 2844 "cplus.met"
#line 2846 "cplus.met"
    {
#line 2846 "cplus.met"
        _retValue = expTree ;
#line 2846 "cplus.met"
        goto additive_expression_ret;
#line 2846 "cplus.met"
        
#line 2846 "cplus.met"
    }
#line 2846 "cplus.met"
#line 2846 "cplus.met"
#line 2846 "cplus.met"

#line 2847 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2847 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2847 "cplus.met"
return((PPTREE) 0);
#line 2847 "cplus.met"

#line 2847 "cplus.met"
additive_expression_exit :
#line 2847 "cplus.met"

#line 2847 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2847 "cplus.met"
    _funcLevel--;
#line 2847 "cplus.met"
    return((PPTREE) -1) ;
#line 2847 "cplus.met"

#line 2847 "cplus.met"
additive_expression_ret :
#line 2847 "cplus.met"
    
#line 2847 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2847 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2847 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2847 "cplus.met"
    return _retValue ;
#line 2847 "cplus.met"
}
#line 2847 "cplus.met"

#line 2847 "cplus.met"
#line 2938 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2938 "cplus.met"
{
#line 2938 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2938 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2938 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2938 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2938 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2938 "cplus.met"
#line 2938 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2938 "cplus.met"
#line 2940 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2940 "cplus.met"
#line 2941 "cplus.met"
#line 2942 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2942 "cplus.met"
        switch( lexEl.Value) {
#line 2942 "cplus.met"
#line 2943 "cplus.met"
            case NEW : 
#line 2943 "cplus.met"
#line 2943 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2943 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2943 "cplus.met"
                }
#line 2943 "cplus.met"
                break;
#line 2943 "cplus.met"
#line 2944 "cplus.met"
            case DELETE : 
#line 2944 "cplus.met"
#line 2944 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2944 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2944 "cplus.met"
                }
#line 2944 "cplus.met"
                break;
#line 2944 "cplus.met"
            default :
#line 2944 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2944 "cplus.met"
                break;
#line 2944 "cplus.met"
        }
#line 2944 "cplus.met"
#line 2946 "cplus.met"
        {
#line 2946 "cplus.met"
            PPTREE _ptRes0=0;
#line 2946 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2946 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2946 "cplus.met"
            retTree=_ptRes0;
#line 2946 "cplus.met"
        }
#line 2946 "cplus.met"
#line 2946 "cplus.met"
#line 2946 "cplus.met"
    } else {
#line 2946 "cplus.met"
#line 2949 "cplus.met"
#line 2950 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2950 "cplus.met"
        switch( lexEl.Value) {
#line 2950 "cplus.met"
#line 2951 "cplus.met"
            case NEW : 
#line 2951 "cplus.met"
#line 2951 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2951 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2951 "cplus.met"
                }
#line 2951 "cplus.met"
                break;
#line 2951 "cplus.met"
#line 2952 "cplus.met"
            case DELETE : 
#line 2952 "cplus.met"
#line 2952 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2952 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2952 "cplus.met"
                }
#line 2952 "cplus.met"
                break;
#line 2952 "cplus.met"
            default :
#line 2952 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2952 "cplus.met"
                break;
#line 2952 "cplus.met"
        }
#line 2952 "cplus.met"
#line 2954 "cplus.met"
        retTree = valTree ;
#line 2954 "cplus.met"
#line 2954 "cplus.met"
    }
#line 2954 "cplus.met"
#line 2956 "cplus.met"
    {
#line 2956 "cplus.met"
        _retValue = retTree ;
#line 2956 "cplus.met"
        goto alloc_expression_ret;
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
alloc_expression_exit :
#line 2957 "cplus.met"

#line 2957 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2957 "cplus.met"
    _funcLevel--;
#line 2957 "cplus.met"
    return((PPTREE) -1) ;
#line 2957 "cplus.met"

#line 2957 "cplus.met"
alloc_expression_ret :
#line 2957 "cplus.met"
    
#line 2957 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
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
#line 2988 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2988 "cplus.met"
{
#line 2988 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2988 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2988 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2988 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2988 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2988 "cplus.met"
#line 2988 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2988 "cplus.met"
#line 2988 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2988 "cplus.met"
#line 2990 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2990 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2990 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2990 "cplus.met"
    } else {
#line 2990 "cplus.met"
        tokenAhead = 0 ;
#line 2990 "cplus.met"
    }
#line 2990 "cplus.met"
#line 2991 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 103, cplus))){
#line 2991 "cplus.met"
#line 2992 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2992 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2992 "cplus.met"
        }
#line 2992 "cplus.met"
    }
#line 2992 "cplus.met"
#line 2993 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2993 "cplus.met"
#line 2994 "cplus.met"
#line 2995 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2995 "cplus.met"
#line 2997 "cplus.met"
#line 2997 "cplus.met"
            _addlist1 = list ;
#line 2997 "cplus.met"
#line 2996 "cplus.met"
            do {
#line 2996 "cplus.met"
#line 2997 "cplus.met"
                {
#line 2997 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2997 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 85, cplus))== (PPTREE) -1 ) {
#line 2997 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2997 "cplus.met"
                    }
#line 2997 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2997 "cplus.met"
                }
#line 2997 "cplus.met"
#line 2997 "cplus.met"
                if (list){
#line 2997 "cplus.met"
#line 2997 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2997 "cplus.met"
                } else {
#line 2997 "cplus.met"
#line 2997 "cplus.met"
                    list = _addlist1 ;
#line 2997 "cplus.met"
                }
#line 2997 "cplus.met"
#line 2997 "cplus.met"
#line 2998 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2998 "cplus.met"
        }
#line 2998 "cplus.met"
#line 2999 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2999 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2999 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2999 "cplus.met"
        } else {
#line 2999 "cplus.met"
            tokenAhead = 0 ;
#line 2999 "cplus.met"
        }
#line 2999 "cplus.met"
#line 3000 "cplus.met"
        {
#line 3000 "cplus.met"
            PPTREE _ptTree0=0;
#line 3000 "cplus.met"
            {
#line 3000 "cplus.met"
                PPTREE _ptRes1=0;
#line 3000 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 3000 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3000 "cplus.met"
                _ptTree0=_ptRes1;
#line 3000 "cplus.met"
            }
#line 3000 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3000 "cplus.met"
        }
#line 3000 "cplus.met"
#line 3000 "cplus.met"
#line 3000 "cplus.met"
    }
#line 3000 "cplus.met"
#line 3002 "cplus.met"
    {
#line 3002 "cplus.met"
        _retValue = retTree ;
#line 3002 "cplus.met"
        goto allocation_expression_ret;
#line 3002 "cplus.met"
        
#line 3002 "cplus.met"
    }
#line 3002 "cplus.met"
#line 3002 "cplus.met"
#line 3002 "cplus.met"

#line 3003 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3003 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3003 "cplus.met"
return((PPTREE) 0);
#line 3003 "cplus.met"

#line 3003 "cplus.met"
allocation_expression_exit :
#line 3003 "cplus.met"

#line 3003 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3003 "cplus.met"
    _funcLevel--;
#line 3003 "cplus.met"
    return((PPTREE) -1) ;
#line 3003 "cplus.met"

#line 3003 "cplus.met"
allocation_expression_ret :
#line 3003 "cplus.met"
    
#line 3003 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 3003 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3003 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3003 "cplus.met"
    return _retValue ;
#line 3003 "cplus.met"
}
#line 3003 "cplus.met"

#line 3003 "cplus.met"
#line 2792 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2792 "cplus.met"
{
#line 2792 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2792 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2792 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2792 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2792 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2792 "cplus.met"
#line 2792 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2792 "cplus.met"
#line 2794 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 61, cplus))== (PPTREE) -1 ) {
#line 2794 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2794 "cplus.met"
    }
#line 2794 "cplus.met"
#line 2795 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2795 "cplus.met"
#line 2796 "cplus.met"
        {
#line 2796 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2796 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2796 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2796 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 61, cplus))== (PPTREE) -1 ) {
#line 2796 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
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
        goto and_expression_ret;
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
and_expression_exit :
#line 2798 "cplus.met"

#line 2798 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2798 "cplus.met"
    _funcLevel--;
#line 2798 "cplus.met"
    return((PPTREE) -1) ;
#line 2798 "cplus.met"

#line 2798 "cplus.met"
and_expression_ret :
#line 2798 "cplus.met"
    
#line 2798 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
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
#line 2630 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2630 "cplus.met"
{
#line 2630 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2630 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2630 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2630 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2630 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2630 "cplus.met"
#line 2630 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2630 "cplus.met"
#line 2632 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2632 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2632 "cplus.met"
    }
#line 2632 "cplus.met"
#line 2633 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2633 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2633 "cplus.met"
#line 2634 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2634 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2634 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2634 "cplus.met"
        } else {
#line 2634 "cplus.met"
            tokenAhead = 0 ;
#line 2634 "cplus.met"
        }
#line 2634 "cplus.met"
    }
#line 2634 "cplus.met"
#line 2635 "cplus.met"
    {
#line 2635 "cplus.met"
        _retValue = retTree ;
#line 2635 "cplus.met"
        goto arg_declarator_ret;
#line 2635 "cplus.met"
        
#line 2635 "cplus.met"
    }
#line 2635 "cplus.met"
#line 2635 "cplus.met"
#line 2635 "cplus.met"

#line 2636 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2636 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2636 "cplus.met"
return((PPTREE) 0);
#line 2636 "cplus.met"

#line 2636 "cplus.met"
arg_declarator_exit :
#line 2636 "cplus.met"

#line 2636 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2636 "cplus.met"
    _funcLevel--;
#line 2636 "cplus.met"
    return((PPTREE) -1) ;
#line 2636 "cplus.met"

#line 2636 "cplus.met"
arg_declarator_ret :
#line 2636 "cplus.met"
    
#line 2636 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2636 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2636 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2636 "cplus.met"
    return _retValue ;
#line 2636 "cplus.met"
}
#line 2636 "cplus.met"

#line 2636 "cplus.met"
#line 2622 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2622 "cplus.met"
{
#line 2622 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2622 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2622 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2622 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2622 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2622 "cplus.met"
#line 2622 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2622 "cplus.met"
#line 2624 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_base_type), 9, cplus))){
#line 2624 "cplus.met"
#line 2625 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_expression), 10, cplus))){
#line 2625 "cplus.met"
#line 2626 "cplus.met"
            if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2626 "cplus.met"
                MulFreeTree(1,retTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2626 "cplus.met"
            }
#line 2626 "cplus.met"
        }
#line 2626 "cplus.met"
    }
#line 2626 "cplus.met"
#line 2627 "cplus.met"
    {
#line 2627 "cplus.met"
        _retValue = retTree ;
#line 2627 "cplus.met"
        goto arg_declarator_base_ret;
#line 2627 "cplus.met"
        
#line 2627 "cplus.met"
    }
#line 2627 "cplus.met"
#line 2627 "cplus.met"
#line 2627 "cplus.met"

#line 2628 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2628 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2628 "cplus.met"
return((PPTREE) 0);
#line 2628 "cplus.met"

#line 2628 "cplus.met"
arg_declarator_base_exit :
#line 2628 "cplus.met"

#line 2628 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2628 "cplus.met"
    _funcLevel--;
#line 2628 "cplus.met"
    return((PPTREE) -1) ;
#line 2628 "cplus.met"

#line 2628 "cplus.met"
arg_declarator_base_ret :
#line 2628 "cplus.met"
    
#line 2628 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2628 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2628 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2628 "cplus.met"
    return _retValue ;
#line 2628 "cplus.met"
}
#line 2628 "cplus.met"

#line 2628 "cplus.met"
#line 2598 "cplus.met"
PPTREE cplus::arg_declarator_base_type ( int error_free)
#line 2598 "cplus.met"
{
#line 2598 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2598 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2598 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2598 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_ENTER,(PPTREE)0);
#line 2598 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2598 "cplus.met"
#line 2598 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2598 "cplus.met"
#line 2600 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2600 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2600 "cplus.met"
    }
#line 2600 "cplus.met"
#line 2601 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 50, cplus)){
#line 2601 "cplus.met"
#line 2602 "cplus.met"
        {
#line 2602 "cplus.met"
            PPTREE _ptRes0=0;
#line 2602 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2602 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2602 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2602 "cplus.met"
            valTree=_ptRes0;
#line 2602 "cplus.met"
        }
#line 2602 "cplus.met"
    } else {
#line 2602 "cplus.met"
#line 2604 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2604 "cplus.met"
#line 2605 "cplus.met"
            {
#line 2605 "cplus.met"
                PPTREE _ptRes0=0;
#line 2605 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2605 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2605 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2605 "cplus.met"
                valTree=_ptRes0;
#line 2605 "cplus.met"
            }
#line 2605 "cplus.met"
        } else {
#line 2605 "cplus.met"
#line 2607 "cplus.met"
            valTree = retTree ;
#line 2607 "cplus.met"
        }
#line 2607 "cplus.met"
    }
#line 2607 "cplus.met"
#line 2608 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2608 "cplus.met"
#line 2609 "cplus.met"
#line 2610 "cplus.met"
        {
#line 2610 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2610 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2610 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2610 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2610 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2610 "cplus.met"
            }
#line 2610 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2610 "cplus.met"
            valTree=_ptRes0;
#line 2610 "cplus.met"
        }
#line 2610 "cplus.met"
#line 2610 "cplus.met"
#line 2610 "cplus.met"
    }
#line 2610 "cplus.met"
#line 2612 "cplus.met"
    {
#line 2612 "cplus.met"
        _retValue = valTree ;
#line 2612 "cplus.met"
        goto arg_declarator_base_type_ret;
#line 2612 "cplus.met"
        
#line 2612 "cplus.met"
    }
#line 2612 "cplus.met"
#line 2612 "cplus.met"
#line 2612 "cplus.met"

#line 2613 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2613 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2613 "cplus.met"
return((PPTREE) 0);
#line 2613 "cplus.met"

#line 2613 "cplus.met"
arg_declarator_base_type_exit :
#line 2613 "cplus.met"

#line 2613 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_EXIT,(PPTREE)0);
#line 2613 "cplus.met"
    _funcLevel--;
#line 2613 "cplus.met"
    return((PPTREE) -1) ;
#line 2613 "cplus.met"

#line 2613 "cplus.met"
arg_declarator_base_type_ret :
#line 2613 "cplus.met"
    
#line 2613 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_RETURN,_retValue);
#line 2613 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2613 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2613 "cplus.met"
    return _retValue ;
#line 2613 "cplus.met"
}
#line 2613 "cplus.met"

#line 2613 "cplus.met"
#line 2615 "cplus.met"
PPTREE cplus::arg_declarator_expression ( int error_free)
#line 2615 "cplus.met"
{
#line 2615 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2615 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2615 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2615 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_expression",TRACE_ENTER,(PPTREE)0);
#line 2615 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2615 "cplus.met"
#line 2616 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2616 "cplus.met"
#line 2617 "cplus.met"
        {
#line 2617 "cplus.met"
            PPTREE _ptTree0=0;
#line 2617 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2617 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(arg_declarator_expression_exit,"arg_declarator_expression")
#line 2617 "cplus.met"
            }
#line 2617 "cplus.met"
            _retValue =_ptTree0;
#line 2617 "cplus.met"
            goto arg_declarator_expression_ret;
#line 2617 "cplus.met"
        }
#line 2617 "cplus.met"
    } else {
#line 2617 "cplus.met"
#line 2619 "cplus.met"
        
#line 2619 "cplus.met"
        LEX_EXIT ("",0);
#line 2619 "cplus.met"
        goto arg_declarator_expression_exit;
#line 2619 "cplus.met"
    }
#line 2619 "cplus.met"
#line 2619 "cplus.met"
#line 2619 "cplus.met"

#line 2620 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2620 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2620 "cplus.met"
return((PPTREE) 0);
#line 2620 "cplus.met"

#line 2620 "cplus.met"
arg_declarator_expression_exit :
#line 2620 "cplus.met"

#line 2620 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_EXIT,(PPTREE)0);
#line 2620 "cplus.met"
    _funcLevel--;
#line 2620 "cplus.met"
    return((PPTREE) -1) ;
#line 2620 "cplus.met"

#line 2620 "cplus.met"
arg_declarator_expression_ret :
#line 2620 "cplus.met"
    
#line 2620 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_RETURN,_retValue);
#line 2620 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2620 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2620 "cplus.met"
    return _retValue ;
#line 2620 "cplus.met"
}
#line 2620 "cplus.met"

#line 2620 "cplus.met"
#line 2646 "cplus.met"
PPTREE cplus::arg_declarator_followed_strict ( int error_free)
#line 2646 "cplus.met"
{
#line 2646 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2646 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2646 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2646 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_ENTER,(PPTREE)0);
#line 2646 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2646 "cplus.met"
#line 2646 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2646 "cplus.met"
#line 2648 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2648 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_strict_exit,"arg_declarator_followed_strict")
#line 2648 "cplus.met"
    }
#line 2648 "cplus.met"
#line 2649 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2649 "cplus.met"
#line 2650 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2650 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2650 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_strict_exit,",")
#line 2650 "cplus.met"
        } else {
#line 2650 "cplus.met"
            tokenAhead = 0 ;
#line 2650 "cplus.met"
        }
#line 2650 "cplus.met"
    }
#line 2650 "cplus.met"
#line 2651 "cplus.met"
    {
#line 2651 "cplus.met"
        _retValue = retTree ;
#line 2651 "cplus.met"
        goto arg_declarator_followed_strict_ret;
#line 2651 "cplus.met"
        
#line 2651 "cplus.met"
    }
#line 2651 "cplus.met"
#line 2651 "cplus.met"
#line 2651 "cplus.met"

#line 2652 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2652 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2652 "cplus.met"
return((PPTREE) 0);
#line 2652 "cplus.met"

#line 2652 "cplus.met"
arg_declarator_followed_strict_exit :
#line 2652 "cplus.met"

#line 2652 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_EXIT,(PPTREE)0);
#line 2652 "cplus.met"
    _funcLevel--;
#line 2652 "cplus.met"
    return((PPTREE) -1) ;
#line 2652 "cplus.met"

#line 2652 "cplus.met"
arg_declarator_followed_strict_ret :
#line 2652 "cplus.met"
    
#line 2652 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_RETURN,_retValue);
#line 2652 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2652 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2652 "cplus.met"
    return _retValue ;
#line 2652 "cplus.met"
}
#line 2652 "cplus.met"

#line 2652 "cplus.met"
#line 2638 "cplus.met"
PPTREE cplus::arg_declarator_strict ( int error_free)
#line 2638 "cplus.met"
{
#line 2638 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2638 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2638 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2638 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_strict",TRACE_ENTER,(PPTREE)0);
#line 2638 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2638 "cplus.met"
#line 2638 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2638 "cplus.met"
#line 2640 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2640 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_strict_exit,"arg_declarator_strict")
#line 2640 "cplus.met"
    }
#line 2640 "cplus.met"
#line 2641 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2641 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2641 "cplus.met"
#line 2642 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2642 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2642 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_strict_exit,",")
#line 2642 "cplus.met"
        } else {
#line 2642 "cplus.met"
            tokenAhead = 0 ;
#line 2642 "cplus.met"
        }
#line 2642 "cplus.met"
    }
#line 2642 "cplus.met"
#line 2643 "cplus.met"
    {
#line 2643 "cplus.met"
        _retValue = retTree ;
#line 2643 "cplus.met"
        goto arg_declarator_strict_ret;
#line 2643 "cplus.met"
        
#line 2643 "cplus.met"
    }
#line 2643 "cplus.met"
#line 2643 "cplus.met"
#line 2643 "cplus.met"

#line 2644 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2644 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2644 "cplus.met"
return((PPTREE) 0);
#line 2644 "cplus.met"

#line 2644 "cplus.met"
arg_declarator_strict_exit :
#line 2644 "cplus.met"

#line 2644 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_EXIT,(PPTREE)0);
#line 2644 "cplus.met"
    _funcLevel--;
#line 2644 "cplus.met"
    return((PPTREE) -1) ;
#line 2644 "cplus.met"

#line 2644 "cplus.met"
arg_declarator_strict_ret :
#line 2644 "cplus.met"
    
#line 2644 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_RETURN,_retValue);
#line 2644 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2644 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2644 "cplus.met"
    return _retValue ;
#line 2644 "cplus.met"
}
#line 2644 "cplus.met"

#line 2644 "cplus.met"
#line 2654 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2654 "cplus.met"
{
#line 2654 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2654 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2654 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2654 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2654 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2654 "cplus.met"
#line 2654 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2654 "cplus.met"
#line 2656 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2656 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2656 "cplus.met"
    }
#line 2656 "cplus.met"
#line 2657 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 50, cplus)){
#line 2657 "cplus.met"
#line 2658 "cplus.met"
        {
#line 2658 "cplus.met"
            PPTREE _ptRes0=0;
#line 2658 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2658 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2658 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2658 "cplus.met"
            valTree=_ptRes0;
#line 2658 "cplus.met"
        }
#line 2658 "cplus.met"
    } else {
#line 2658 "cplus.met"
#line 2660 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2660 "cplus.met"
#line 2661 "cplus.met"
            {
#line 2661 "cplus.met"
                PPTREE _ptRes0=0;
#line 2661 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2661 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2661 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2661 "cplus.met"
                valTree=_ptRes0;
#line 2661 "cplus.met"
            }
#line 2661 "cplus.met"
        } else {
#line 2661 "cplus.met"
#line 2663 "cplus.met"
            valTree = retTree ;
#line 2663 "cplus.met"
        }
#line 2663 "cplus.met"
    }
#line 2663 "cplus.met"
#line 2664 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2664 "cplus.met"
#line 2665 "cplus.met"
#line 2666 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 152, cplus)){
#line 2666 "cplus.met"
#line 2667 "cplus.met"
            {
#line 2667 "cplus.met"
                PPTREE _ptRes0=0;
#line 2667 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2667 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2667 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2667 "cplus.met"
                valTree=_ptRes0;
#line 2667 "cplus.met"
            }
#line 2667 "cplus.met"
        } else {
#line 2667 "cplus.met"
#line 2669 "cplus.met"
            {
#line 2669 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2669 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2669 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2669 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2669 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2669 "cplus.met"
                }
#line 2669 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2669 "cplus.met"
                valTree=_ptRes0;
#line 2669 "cplus.met"
            }
#line 2669 "cplus.met"
        }
#line 2669 "cplus.met"
#line 2669 "cplus.met"
#line 2669 "cplus.met"
    }
#line 2669 "cplus.met"
#line 2671 "cplus.met"
    {
#line 2671 "cplus.met"
        _retValue = valTree ;
#line 2671 "cplus.met"
        goto arg_declarator_type_ret;
#line 2671 "cplus.met"
        
#line 2671 "cplus.met"
    }
#line 2671 "cplus.met"
#line 2671 "cplus.met"
#line 2671 "cplus.met"

#line 2672 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2672 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2672 "cplus.met"
return((PPTREE) 0);
#line 2672 "cplus.met"

#line 2672 "cplus.met"
arg_declarator_type_exit :
#line 2672 "cplus.met"

#line 2672 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2672 "cplus.met"
    _funcLevel--;
#line 2672 "cplus.met"
    return((PPTREE) -1) ;
#line 2672 "cplus.met"

#line 2672 "cplus.met"
arg_declarator_type_ret :
#line 2672 "cplus.met"
    
#line 2672 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2672 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2672 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2672 "cplus.met"
    return _retValue ;
#line 2672 "cplus.met"
}
#line 2672 "cplus.met"

#line 2672 "cplus.met"
#line 2317 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2317 "cplus.met"
{
#line 2317 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2317 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2317 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2317 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2317 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2317 "cplus.met"
#line 2317 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2317 "cplus.met"
#line 2319 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2319 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2319 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2319 "cplus.met"
    } else {
#line 2319 "cplus.met"
        tokenAhead = 0 ;
#line 2319 "cplus.met"
    }
#line 2319 "cplus.met"
#line 2320 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 15, cplus)){
#line 2320 "cplus.met"
#line 2321 "cplus.met"
        {
#line 2321 "cplus.met"
            PPTREE _ptRes0=0;
#line 2321 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2321 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2321 "cplus.met"
            retTree=_ptRes0;
#line 2321 "cplus.met"
        }
#line 2321 "cplus.met"
    } else {
#line 2321 "cplus.met"
#line 2323 "cplus.met"
        {
#line 2323 "cplus.met"
            PPTREE _ptRes0=0;
#line 2323 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2323 "cplus.met"
            retTree=_ptRes0;
#line 2323 "cplus.met"
        }
#line 2323 "cplus.met"
    }
#line 2323 "cplus.met"
#line 2324 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2324 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2324 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2324 "cplus.met"
    } else {
#line 2324 "cplus.met"
        tokenAhead = 0 ;
#line 2324 "cplus.met"
    }
#line 2324 "cplus.met"
#line 2325 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 64, cplus)){
#line 2325 "cplus.met"
#line 2326 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2326 "cplus.met"
#line 2326 "cplus.met"
    }
#line 2326 "cplus.met"
#line 2327 "cplus.met"
    {
#line 2327 "cplus.met"
        _retValue = retTree ;
#line 2327 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2327 "cplus.met"
        
#line 2327 "cplus.met"
    }
#line 2327 "cplus.met"
#line 2327 "cplus.met"
#line 2327 "cplus.met"

#line 2328 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2328 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2328 "cplus.met"
return((PPTREE) 0);
#line 2328 "cplus.met"

#line 2328 "cplus.met"
arg_typ_declarator_exit :
#line 2328 "cplus.met"

#line 2328 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2328 "cplus.met"
    _funcLevel--;
#line 2328 "cplus.met"
    return((PPTREE) -1) ;
#line 2328 "cplus.met"

#line 2328 "cplus.met"
arg_typ_declarator_ret :
#line 2328 "cplus.met"
    
#line 2328 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2328 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2328 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2328 "cplus.met"
    return _retValue ;
#line 2328 "cplus.met"
}
#line 2328 "cplus.met"

#line 2328 "cplus.met"
#line 2560 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2560 "cplus.met"
{
#line 2560 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2560 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2560 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2560 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2560 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2560 "cplus.met"
#line 2560 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2560 "cplus.met"
#line 2560 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2560 "cplus.met"
#line 2562 "cplus.met"
     { int followed = 0;
#line 2562 "cplus.met"
#line 2563 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 11, cplus)){
#line 2563 "cplus.met"
#line 2564 "cplus.met"
         followed = 1;
#line 2564 "cplus.met"
    } else {
#line 2564 "cplus.met"
#line 2566 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator_strict)(error_free), 12, cplus))== (PPTREE) -1 ) {
#line 2566 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2566 "cplus.met"
        }
#line 2566 "cplus.met"
    }
#line 2566 "cplus.met"
#line 2567 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2567 "cplus.met"
#line 2568 "cplus.met"
#line 2569 "cplus.met"
     {  int exit = 0 ; 
#line 2569 "cplus.met"
#line 2569 "cplus.met"
    _addlist1 = retTree ;
#line 2569 "cplus.met"
#line 2570 "cplus.met"
    while ( followed && !exit ) { 
#line 2570 "cplus.met"
#line 2571 "cplus.met"
#line 2572 "cplus.met"
         followed = 0;
#line 2572 "cplus.met"
#line 2573 "cplus.met"
        if (PUSH_CALL_AFF(valTree = ,_Tak(arg_declarator_followed))){
#line 2573 "cplus.met"
#line 2574 "cplus.met"
#line 2575 "cplus.met"
             followed = 1;
#line 2575 "cplus.met"
#line 2576 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2576 "cplus.met"
#line 2576 "cplus.met"
            if (retTree){
#line 2576 "cplus.met"
#line 2576 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2576 "cplus.met"
            } else {
#line 2576 "cplus.met"
#line 2576 "cplus.met"
                retTree = _addlist1 ;
#line 2576 "cplus.met"
            }
#line 2576 "cplus.met"
#line 2576 "cplus.met"
#line 2576 "cplus.met"
        } else {
#line 2576 "cplus.met"
#line 2579 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2579 "cplus.met"
#line 2580 "cplus.met"
#line 2581 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2581 "cplus.met"
#line 2581 "cplus.met"
                if (retTree){
#line 2581 "cplus.met"
#line 2581 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2581 "cplus.met"
                } else {
#line 2581 "cplus.met"
#line 2581 "cplus.met"
                    retTree = _addlist1 ;
#line 2581 "cplus.met"
                }
#line 2581 "cplus.met"
#line 2581 "cplus.met"
#line 2581 "cplus.met"
            } else {
#line 2581 "cplus.met"
#line 2584 "cplus.met"
#line 2585 "cplus.met"
                {
#line 2585 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2585 "cplus.met"
                    {
#line 2585 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2585 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2585 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2585 "cplus.met"
                    }
#line 2585 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2585 "cplus.met"
                }
#line 2585 "cplus.met"
#line 2585 "cplus.met"
                if (retTree){
#line 2585 "cplus.met"
#line 2585 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2585 "cplus.met"
                } else {
#line 2585 "cplus.met"
#line 2585 "cplus.met"
                    retTree = _addlist1 ;
#line 2585 "cplus.met"
                }
#line 2585 "cplus.met"
#line 2586 "cplus.met"
                 exit = 1 ;
#line 2586 "cplus.met"
#line 2587 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2587 "cplus.met"
#line 2587 "cplus.met"
                }
#line 2587 "cplus.met"
#line 2587 "cplus.met"
            }
#line 2587 "cplus.met"
        }
#line 2587 "cplus.met"
#line 2587 "cplus.met"
    } 
#line 2587 "cplus.met"
#line 2591 "cplus.met"
    if ((! ( exit )) && 
#line 2591 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2591 "cplus.met"
#line 2592 "cplus.met"
        {
#line 2592 "cplus.met"
            PPTREE _ptTree0=0;
#line 2592 "cplus.met"
            {
#line 2592 "cplus.met"
                PPTREE _ptRes1=0;
#line 2592 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2592 "cplus.met"
                _ptTree0=_ptRes1;
#line 2592 "cplus.met"
            }
#line 2592 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2592 "cplus.met"
        }
#line 2592 "cplus.met"
#line 2592 "cplus.met"
    }
#line 2592 "cplus.met"
#line 2593 "cplus.met"
     } } 
#line 2593 "cplus.met"
#line 2593 "cplus.met"
#line 2595 "cplus.met"
    {
#line 2595 "cplus.met"
        _retValue = retTree ;
#line 2595 "cplus.met"
        goto arg_typ_list_ret;
#line 2595 "cplus.met"
        
#line 2595 "cplus.met"
    }
#line 2595 "cplus.met"
#line 2595 "cplus.met"
#line 2595 "cplus.met"

#line 2596 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2596 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2596 "cplus.met"
return((PPTREE) 0);
#line 2596 "cplus.met"

#line 2596 "cplus.met"
arg_typ_list_exit :
#line 2596 "cplus.met"

#line 2596 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2596 "cplus.met"
    _funcLevel--;
#line 2596 "cplus.met"
    return((PPTREE) -1) ;
#line 2596 "cplus.met"

#line 2596 "cplus.met"
arg_typ_list_ret :
#line 2596 "cplus.met"
    
#line 2596 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2596 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2596 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2596 "cplus.met"
    return _retValue ;
#line 2596 "cplus.met"
}
#line 2596 "cplus.met"

#line 2596 "cplus.met"
#line 3029 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 3029 "cplus.met"
{
#line 3029 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3029 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3029 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3029 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 3029 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3029 "cplus.met"
#line 3029 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3029 "cplus.met"
#line 3031 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 66, cplus)){
#line 3031 "cplus.met"
#line 3032 "cplus.met"
        {
#line 3032 "cplus.met"
            PPTREE _ptRes0=0;
#line 3032 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3032 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 3032 "cplus.met"
            expTree=_ptRes0;
#line 3032 "cplus.met"
        }
#line 3032 "cplus.met"
    } else {
#line 3032 "cplus.met"
#line 3034 "cplus.met"
        {
#line 3034 "cplus.met"
            PPTREE _ptRes0=0;
#line 3034 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3034 "cplus.met"
            expTree=_ptRes0;
#line 3034 "cplus.met"
        }
#line 3034 "cplus.met"
    }
#line 3034 "cplus.met"
#line 3035 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3035 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3035 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 3035 "cplus.met"
    } else {
#line 3035 "cplus.met"
        tokenAhead = 0 ;
#line 3035 "cplus.met"
    }
#line 3035 "cplus.met"
#line 3036 "cplus.met"
    {
#line 3036 "cplus.met"
        _retValue = expTree ;
#line 3036 "cplus.met"
        goto array_expression_follow_ret;
#line 3036 "cplus.met"
        
#line 3036 "cplus.met"
    }
#line 3036 "cplus.met"
#line 3036 "cplus.met"
#line 3036 "cplus.met"

#line 3037 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3037 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3037 "cplus.met"
return((PPTREE) 0);
#line 3037 "cplus.met"

#line 3037 "cplus.met"
array_expression_follow_exit :
#line 3037 "cplus.met"

#line 3037 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 3037 "cplus.met"
    _funcLevel--;
#line 3037 "cplus.met"
    return((PPTREE) -1) ;
#line 3037 "cplus.met"

#line 3037 "cplus.met"
array_expression_follow_ret :
#line 3037 "cplus.met"
    
#line 3037 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 3037 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3037 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3037 "cplus.met"
    return _retValue ;
#line 3037 "cplus.met"
}
#line 3037 "cplus.met"

#line 3037 "cplus.met"
#line 2252 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2252 "cplus.met"
{
#line 2252 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2252 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2252 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2252 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2252 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2252 "cplus.met"
#line 2252 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2252 "cplus.met"
#line 2254 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2254 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2254 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2254 "cplus.met"
    } else {
#line 2254 "cplus.met"
        tokenAhead = 0 ;
#line 2254 "cplus.met"
    }
#line 2254 "cplus.met"
#line 2255 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2255 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2255 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2255 "cplus.met"
    } else {
#line 2255 "cplus.met"
        tokenAhead = 0 ;
#line 2255 "cplus.met"
    }
#line 2255 "cplus.met"
#line 2256 "cplus.met"
    {
#line 2256 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2256 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2256 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 66, cplus))== (PPTREE) -1 ) {
#line 2256 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2256 "cplus.met"
        }
#line 2256 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2256 "cplus.met"
        retTree=_ptRes0;
#line 2256 "cplus.met"
    }
#line 2256 "cplus.met"
#line 2257 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2257 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2257 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2257 "cplus.met"
    } else {
#line 2257 "cplus.met"
        tokenAhead = 0 ;
#line 2257 "cplus.met"
    }
#line 2257 "cplus.met"
#line 2258 "cplus.met"
    {
#line 2258 "cplus.met"
        _retValue = retTree ;
#line 2258 "cplus.met"
        goto asm_call_ret;
#line 2258 "cplus.met"
        
#line 2258 "cplus.met"
    }
#line 2258 "cplus.met"
#line 2258 "cplus.met"
#line 2258 "cplus.met"

#line 2259 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2259 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2259 "cplus.met"
return((PPTREE) 0);
#line 2259 "cplus.met"

#line 2259 "cplus.met"
asm_call_exit :
#line 2259 "cplus.met"

#line 2259 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2259 "cplus.met"
    _funcLevel--;
#line 2259 "cplus.met"
    return((PPTREE) -1) ;
#line 2259 "cplus.met"

#line 2259 "cplus.met"
asm_call_ret :
#line 2259 "cplus.met"
    
#line 2259 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2259 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2259 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2259 "cplus.met"
    return _retValue ;
#line 2259 "cplus.met"
}
#line 2259 "cplus.met"

#line 2259 "cplus.met"
#line 1007 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 1007 "cplus.met"
{
#line 1007 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1007 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1007 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1007 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 1007 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1007 "cplus.met"
#line 1007 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1007 "cplus.met"
#line 1009 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1009 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 1009 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 1009 "cplus.met"
    } else {
#line 1009 "cplus.met"
        tokenAhead = 0 ;
#line 1009 "cplus.met"
    }
#line 1009 "cplus.met"
#line 1010 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1010 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1010 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 1010 "cplus.met"
    } else {
#line 1010 "cplus.met"
        tokenAhead = 0 ;
#line 1010 "cplus.met"
    }
#line 1010 "cplus.met"
#line 1011 "cplus.met"
    {
#line 1011 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1011 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 1011 "cplus.met"
        {
#line 1011 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1011 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1011 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1011 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1011 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 1011 "cplus.met"
            } else {
#line 1011 "cplus.met"
                tokenAhead = 0 ;
#line 1011 "cplus.met"
            }
#line 1011 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1011 "cplus.met"
            _ptTree0=_ptRes1;
#line 1011 "cplus.met"
        }
#line 1011 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1011 "cplus.met"
        retTree=_ptRes0;
#line 1011 "cplus.met"
    }
#line 1011 "cplus.met"
#line 1012 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1012 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1012 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 1012 "cplus.met"
    } else {
#line 1012 "cplus.met"
        tokenAhead = 0 ;
#line 1012 "cplus.met"
    }
#line 1012 "cplus.met"
#line 1013 "cplus.met"
    {
#line 1013 "cplus.met"
        _retValue = retTree ;
#line 1013 "cplus.met"
        goto asm_declaration_ret;
#line 1013 "cplus.met"
        
#line 1013 "cplus.met"
    }
#line 1013 "cplus.met"
#line 1013 "cplus.met"
#line 1013 "cplus.met"

#line 1014 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1014 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1014 "cplus.met"
return((PPTREE) 0);
#line 1014 "cplus.met"

#line 1014 "cplus.met"
asm_declaration_exit :
#line 1014 "cplus.met"

#line 1014 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 1014 "cplus.met"
    _funcLevel--;
#line 1014 "cplus.met"
    return((PPTREE) -1) ;
#line 1014 "cplus.met"

#line 1014 "cplus.met"
asm_declaration_ret :
#line 1014 "cplus.met"
    
#line 1014 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 1014 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1014 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1014 "cplus.met"
    return _retValue ;
#line 1014 "cplus.met"
}
#line 1014 "cplus.met"

#line 1014 "cplus.met"
#line 2719 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2719 "cplus.met"
{
#line 2719 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2719 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2719 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2719 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2719 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2719 "cplus.met"
#line 2720 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2720 "cplus.met"
    switch( lexEl.Value) {
#line 2720 "cplus.met"
#line 2721 "cplus.met"
        case EGAL : 
#line 2721 "cplus.met"
            tokenAhead = 0 ;
#line 2721 "cplus.met"
            CommTerm();
#line 2721 "cplus.met"
#line 2721 "cplus.met"
            {
#line 2721 "cplus.met"
                PPTREE _ptTree0=0;
#line 2721 "cplus.met"
                {
#line 2721 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2721 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2721 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2721 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2721 "cplus.met"
                    }
#line 2721 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2721 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2721 "cplus.met"
                }
#line 2721 "cplus.met"
                _retValue =_ptTree0;
#line 2721 "cplus.met"
                goto assignment_end_ret;
#line 2721 "cplus.met"
            }
#line 2721 "cplus.met"
            break;
#line 2721 "cplus.met"
#line 2722 "cplus.met"
        case ETOIEGAL : 
#line 2722 "cplus.met"
            tokenAhead = 0 ;
#line 2722 "cplus.met"
            CommTerm();
#line 2722 "cplus.met"
#line 2722 "cplus.met"
            {
#line 2722 "cplus.met"
                PPTREE _ptTree0=0;
#line 2722 "cplus.met"
                {
#line 2722 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2722 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2722 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2722 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2722 "cplus.met"
                    }
#line 2722 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2722 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2722 "cplus.met"
                }
#line 2722 "cplus.met"
                _retValue =_ptTree0;
#line 2722 "cplus.met"
                goto assignment_end_ret;
#line 2722 "cplus.met"
            }
#line 2722 "cplus.met"
            break;
#line 2722 "cplus.met"
#line 2723 "cplus.met"
        case META : 
#line 2723 "cplus.met"
        case SLASEGAL : 
#line 2723 "cplus.met"
            tokenAhead = 0 ;
#line 2723 "cplus.met"
            CommTerm();
#line 2723 "cplus.met"
#line 2723 "cplus.met"
            {
#line 2723 "cplus.met"
                PPTREE _ptTree0=0;
#line 2723 "cplus.met"
                {
#line 2723 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2723 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2723 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2723 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2723 "cplus.met"
                    }
#line 2723 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2723 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2723 "cplus.met"
                }
#line 2723 "cplus.met"
                _retValue =_ptTree0;
#line 2723 "cplus.met"
                goto assignment_end_ret;
#line 2723 "cplus.met"
            }
#line 2723 "cplus.met"
            break;
#line 2723 "cplus.met"
#line 2724 "cplus.met"
        case POURCEGAL : 
#line 2724 "cplus.met"
            tokenAhead = 0 ;
#line 2724 "cplus.met"
            CommTerm();
#line 2724 "cplus.met"
#line 2724 "cplus.met"
            {
#line 2724 "cplus.met"
                PPTREE _ptTree0=0;
#line 2724 "cplus.met"
                {
#line 2724 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2724 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2724 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2724 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2724 "cplus.met"
                    }
#line 2724 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2724 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2724 "cplus.met"
                }
#line 2724 "cplus.met"
                _retValue =_ptTree0;
#line 2724 "cplus.met"
                goto assignment_end_ret;
#line 2724 "cplus.met"
            }
#line 2724 "cplus.met"
            break;
#line 2724 "cplus.met"
#line 2725 "cplus.met"
        case PLUSEGAL : 
#line 2725 "cplus.met"
            tokenAhead = 0 ;
#line 2725 "cplus.met"
            CommTerm();
#line 2725 "cplus.met"
#line 2725 "cplus.met"
            {
#line 2725 "cplus.met"
                PPTREE _ptTree0=0;
#line 2725 "cplus.met"
                {
#line 2725 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2725 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2725 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2725 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2725 "cplus.met"
                    }
#line 2725 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2725 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2725 "cplus.met"
                }
#line 2725 "cplus.met"
                _retValue =_ptTree0;
#line 2725 "cplus.met"
                goto assignment_end_ret;
#line 2725 "cplus.met"
            }
#line 2725 "cplus.met"
            break;
#line 2725 "cplus.met"
#line 2726 "cplus.met"
        case TIREEGAL : 
#line 2726 "cplus.met"
            tokenAhead = 0 ;
#line 2726 "cplus.met"
            CommTerm();
#line 2726 "cplus.met"
#line 2726 "cplus.met"
            {
#line 2726 "cplus.met"
                PPTREE _ptTree0=0;
#line 2726 "cplus.met"
                {
#line 2726 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2726 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2726 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2726 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2726 "cplus.met"
                    }
#line 2726 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2726 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2726 "cplus.met"
                }
#line 2726 "cplus.met"
                _retValue =_ptTree0;
#line 2726 "cplus.met"
                goto assignment_end_ret;
#line 2726 "cplus.met"
            }
#line 2726 "cplus.met"
            break;
#line 2726 "cplus.met"
#line 2727 "cplus.met"
        case INFEINFEEGAL : 
#line 2727 "cplus.met"
            tokenAhead = 0 ;
#line 2727 "cplus.met"
            CommTerm();
#line 2727 "cplus.met"
#line 2727 "cplus.met"
            {
#line 2727 "cplus.met"
                PPTREE _ptTree0=0;
#line 2727 "cplus.met"
                {
#line 2727 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2727 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2727 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2727 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2727 "cplus.met"
                    }
#line 2727 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2727 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2727 "cplus.met"
                }
#line 2727 "cplus.met"
                _retValue =_ptTree0;
#line 2727 "cplus.met"
                goto assignment_end_ret;
#line 2727 "cplus.met"
            }
#line 2727 "cplus.met"
            break;
#line 2727 "cplus.met"
#line 2728 "cplus.met"
        case SUPESUPEEGAL : 
#line 2728 "cplus.met"
            tokenAhead = 0 ;
#line 2728 "cplus.met"
            CommTerm();
#line 2728 "cplus.met"
#line 2728 "cplus.met"
            {
#line 2728 "cplus.met"
                PPTREE _ptTree0=0;
#line 2728 "cplus.met"
                {
#line 2728 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2728 "cplus.met"
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2728 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2728 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2728 "cplus.met"
                    }
#line 2728 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2728 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2728 "cplus.met"
                }
#line 2728 "cplus.met"
                _retValue =_ptTree0;
#line 2728 "cplus.met"
                goto assignment_end_ret;
#line 2728 "cplus.met"
            }
#line 2728 "cplus.met"
            break;
#line 2728 "cplus.met"
#line 2729 "cplus.met"
        case ETCOEGAL : 
#line 2729 "cplus.met"
            tokenAhead = 0 ;
#line 2729 "cplus.met"
            CommTerm();
#line 2729 "cplus.met"
#line 2729 "cplus.met"
            {
#line 2729 "cplus.met"
                PPTREE _ptTree0=0;
#line 2729 "cplus.met"
                {
#line 2729 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2729 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2729 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2729 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2729 "cplus.met"
                    }
#line 2729 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2729 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2729 "cplus.met"
                }
#line 2729 "cplus.met"
                _retValue =_ptTree0;
#line 2729 "cplus.met"
                goto assignment_end_ret;
#line 2729 "cplus.met"
            }
#line 2729 "cplus.met"
            break;
#line 2729 "cplus.met"
#line 2730 "cplus.met"
        case VBAREGAL : 
#line 2730 "cplus.met"
            tokenAhead = 0 ;
#line 2730 "cplus.met"
            CommTerm();
#line 2730 "cplus.met"
#line 2730 "cplus.met"
            {
#line 2730 "cplus.met"
                PPTREE _ptTree0=0;
#line 2730 "cplus.met"
                {
#line 2730 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2730 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2730 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2730 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2730 "cplus.met"
                    }
#line 2730 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2730 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2730 "cplus.met"
                }
#line 2730 "cplus.met"
                _retValue =_ptTree0;
#line 2730 "cplus.met"
                goto assignment_end_ret;
#line 2730 "cplus.met"
            }
#line 2730 "cplus.met"
            break;
#line 2730 "cplus.met"
#line 2731 "cplus.met"
        case CHAPEGAL : 
#line 2731 "cplus.met"
            tokenAhead = 0 ;
#line 2731 "cplus.met"
            CommTerm();
#line 2731 "cplus.met"
#line 2731 "cplus.met"
            {
#line 2731 "cplus.met"
                PPTREE _ptTree0=0;
#line 2731 "cplus.met"
                {
#line 2731 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2731 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2731 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 2731 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2731 "cplus.met"
                    }
#line 2731 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2731 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2731 "cplus.met"
                }
#line 2731 "cplus.met"
                _retValue =_ptTree0;
#line 2731 "cplus.met"
                goto assignment_end_ret;
#line 2731 "cplus.met"
            }
#line 2731 "cplus.met"
            break;
#line 2731 "cplus.met"
        default :
#line 2731 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2731 "cplus.met"
            break;
#line 2731 "cplus.met"
    }
#line 2731 "cplus.met"
#line 2731 "cplus.met"
#line 2732 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2732 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2732 "cplus.met"
return((PPTREE) 0);
#line 2732 "cplus.met"

#line 2732 "cplus.met"
assignment_end_exit :
#line 2732 "cplus.met"

#line 2732 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2732 "cplus.met"
    _funcLevel--;
#line 2732 "cplus.met"
    return((PPTREE) -1) ;
#line 2732 "cplus.met"

#line 2732 "cplus.met"
assignment_end_ret :
#line 2732 "cplus.met"
    
#line 2732 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2732 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2732 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2732 "cplus.met"
    return _retValue ;
#line 2732 "cplus.met"
}
#line 2732 "cplus.met"

#line 2732 "cplus.met"
