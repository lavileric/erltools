/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2489 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2489 "cplus.met"
{
#line 2489 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2489 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2489 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2489 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2489 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2489 "cplus.met"
#line 2489 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2489 "cplus.met"
#line 2491 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 129, cplus)){
#line 2491 "cplus.met"
#line 2492 "cplus.met"
        {
#line 2492 "cplus.met"
            PPTREE _ptTree0=0;
#line 2492 "cplus.met"
            {
#line 2492 "cplus.met"
                PPTREE _ptTree1=0;
#line 2492 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2492 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2492 "cplus.met"
                }
#line 2492 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2492 "cplus.met"
            }
#line 2492 "cplus.met"
            _retValue =_ptTree0;
#line 2492 "cplus.met"
            goto abstract_declarator_ret;
#line 2492 "cplus.met"
        }
#line 2492 "cplus.met"
    }
#line 2492 "cplus.met"
#line 2493 "cplus.met"
    retTree = (PPTREE) 0;
#line 2493 "cplus.met"
#line 2494 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2494 "cplus.met"
    switch( lexEl.Value) {
#line 2494 "cplus.met"
#line 2495 "cplus.met"
        case ETOI : 
#line 2495 "cplus.met"
            tokenAhead = 0 ;
#line 2495 "cplus.met"
            CommTerm();
#line 2495 "cplus.met"
#line 2495 "cplus.met"
            {
#line 2495 "cplus.met"
                PPTREE _ptTree0=0;
#line 2495 "cplus.met"
                {
#line 2495 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2495 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2495 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2495 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2495 "cplus.met"
                    }
#line 2495 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2495 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2495 "cplus.met"
                }
#line 2495 "cplus.met"
                _retValue =_ptTree0;
#line 2495 "cplus.met"
                goto abstract_declarator_ret;
#line 2495 "cplus.met"
            }
#line 2495 "cplus.met"
            break;
#line 2495 "cplus.met"
#line 2496 "cplus.met"
        case ETCOETCO : 
#line 2496 "cplus.met"
            tokenAhead = 0 ;
#line 2496 "cplus.met"
            CommTerm();
#line 2496 "cplus.met"
#line 2496 "cplus.met"
            {
#line 2496 "cplus.met"
                PPTREE _ptTree0=0;
#line 2496 "cplus.met"
                {
#line 2496 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2496 "cplus.met"
                    _ptRes1= MakeTree(TYP_MOV, 1);
#line 2496 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2496 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2496 "cplus.met"
                    }
#line 2496 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2496 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2496 "cplus.met"
                }
#line 2496 "cplus.met"
                _retValue =_ptTree0;
#line 2496 "cplus.met"
                goto abstract_declarator_ret;
#line 2496 "cplus.met"
            }
#line 2496 "cplus.met"
            break;
#line 2496 "cplus.met"
#line 2497 "cplus.met"
        case POINPOINPOIN : 
#line 2497 "cplus.met"
            tokenAhead = 0 ;
#line 2497 "cplus.met"
            CommTerm();
#line 2497 "cplus.met"
#line 2497 "cplus.met"
            {
#line 2497 "cplus.met"
                PPTREE _ptTree0=0;
#line 2497 "cplus.met"
                {
#line 2497 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2497 "cplus.met"
                    _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2497 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2497 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2497 "cplus.met"
                    }
#line 2497 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2497 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2497 "cplus.met"
                }
#line 2497 "cplus.met"
                _retValue =_ptTree0;
#line 2497 "cplus.met"
                goto abstract_declarator_ret;
#line 2497 "cplus.met"
            }
#line 2497 "cplus.met"
            break;
#line 2497 "cplus.met"
#line 2498 "cplus.met"
        case ETCO : 
#line 2498 "cplus.met"
            tokenAhead = 0 ;
#line 2498 "cplus.met"
            CommTerm();
#line 2498 "cplus.met"
#line 2498 "cplus.met"
            {
#line 2498 "cplus.met"
                PPTREE _ptTree0=0;
#line 2498 "cplus.met"
                {
#line 2498 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2498 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2498 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2498 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2498 "cplus.met"
                    }
#line 2498 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2498 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2498 "cplus.met"
                }
#line 2498 "cplus.met"
                _retValue =_ptTree0;
#line 2498 "cplus.met"
                goto abstract_declarator_ret;
#line 2498 "cplus.met"
            }
#line 2498 "cplus.met"
            break;
#line 2498 "cplus.met"
#line 2499 "cplus.met"
        case TILD : 
#line 2499 "cplus.met"
            tokenAhead = 0 ;
#line 2499 "cplus.met"
            CommTerm();
#line 2499 "cplus.met"
#line 2499 "cplus.met"
            {
#line 2499 "cplus.met"
                PPTREE _ptTree0=0;
#line 2499 "cplus.met"
                {
#line 2499 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2499 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2499 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2499 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2499 "cplus.met"
                    }
#line 2499 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2499 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2499 "cplus.met"
                }
#line 2499 "cplus.met"
                _retValue =_ptTree0;
#line 2499 "cplus.met"
                goto abstract_declarator_ret;
#line 2499 "cplus.met"
            }
#line 2499 "cplus.met"
            break;
#line 2499 "cplus.met"
#line 2503 "cplus.met"
        case POUV : 
#line 2503 "cplus.met"
            tokenAhead = 0 ;
#line 2503 "cplus.met"
            CommTerm();
#line 2503 "cplus.met"
#line 2501 "cplus.met"
#line 2502 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2502 "cplus.met"
#line 2503 "cplus.met"
                
#line 2503 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2503 "cplus.met"
                goto abstract_declarator_exit;
#line 2503 "cplus.met"
#line 2503 "cplus.met"
            }
#line 2503 "cplus.met"
#line 2504 "cplus.met"
            {
#line 2504 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2504 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2504 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2504 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2504 "cplus.met"
                }
#line 2504 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2504 "cplus.met"
                retTree=_ptRes0;
#line 2504 "cplus.met"
            }
#line 2504 "cplus.met"
#line 2505 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2505 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2505 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2505 "cplus.met"
            } else {
#line 2505 "cplus.met"
                tokenAhead = 0 ;
#line 2505 "cplus.met"
            }
#line 2505 "cplus.met"
#line 2506 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2506 "cplus.met"
#line 2507 "cplus.met"
                                         { PPTREE theTree ;
#line 2507 "cplus.met"
                                    theTree = valTree ;
#line 2507 "cplus.met"
                                    if (theTree) {
#line 2507 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2507 "cplus.met"
                                     if (NumberTree(theTree)
#line 2507 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2507 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2507 "cplus.met"
                                     else
#line 2507 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2507 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2507 "cplus.met"
                                        /* modif portage sun */
#line 2507 "cplus.met"
                                        retTree = valTree;
#line 2507 "cplus.met"
                                    }
#line 2507 "cplus.met"
                                       }
#line 2507 "cplus.met"
                                
#line 2507 "cplus.met"
            }
#line 2507 "cplus.met"
#line 2507 "cplus.met"
            break;
#line 2507 "cplus.met"
#line 2524 "cplus.met"
        case META : 
#line 2524 "cplus.met"
        case IDENT : 
#line 2524 "cplus.met"
#line 2525 "cplus.met"
#line 2526 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2526 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2526 "cplus.met"
            }
#line 2526 "cplus.met"
#line 2527 "cplus.met"
            {
#line 2527 "cplus.met"
                PPTREE _ptTree0=0;
#line 2527 "cplus.met"
                {
#line 2527 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2527 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2527 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2527 "cplus.met"
                    }
#line 2527 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2527 "cplus.met"
                }
#line 2527 "cplus.met"
                _retValue =_ptTree0;
#line 2527 "cplus.met"
                goto abstract_declarator_ret;
#line 2527 "cplus.met"
            }
#line 2527 "cplus.met"
#line 2527 "cplus.met"
            break;
#line 2527 "cplus.met"
#line 2533 "cplus.met"
        default : 
#line 2533 "cplus.met"
#line 2532 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2532 "cplus.met"
#line 2534 "cplus.met"
                retTree = valTree ;
#line 2534 "cplus.met"
#line 2534 "cplus.met"
            }
#line 2534 "cplus.met"
            break;
#line 2534 "cplus.met"
    }
#line 2534 "cplus.met"
#line 2536 "cplus.met"
    {
#line 2536 "cplus.met"
        _retValue = retTree ;
#line 2536 "cplus.met"
        goto abstract_declarator_ret;
#line 2536 "cplus.met"
        
#line 2536 "cplus.met"
    }
#line 2536 "cplus.met"
#line 2536 "cplus.met"
#line 2536 "cplus.met"

#line 2537 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2537 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2537 "cplus.met"
return((PPTREE) 0);
#line 2537 "cplus.met"

#line 2537 "cplus.met"
abstract_declarator_exit :
#line 2537 "cplus.met"

#line 2537 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2537 "cplus.met"
    _funcLevel--;
#line 2537 "cplus.met"
    return((PPTREE) -1) ;
#line 2537 "cplus.met"

#line 2537 "cplus.met"
abstract_declarator_ret :
#line 2537 "cplus.met"
    
#line 2537 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2537 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2537 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2537 "cplus.met"
    return _retValue ;
#line 2537 "cplus.met"
}
#line 2537 "cplus.met"

#line 2537 "cplus.met"
#line 2876 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2876 "cplus.met"
{
#line 2876 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2876 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2876 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2876 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2876 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2876 "cplus.met"
#line 2876 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2876 "cplus.met"
#line 2878 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2878 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2878 "cplus.met"
    }
#line 2878 "cplus.met"
#line 2879 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2879 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2879 "cplus.met"
#line 2880 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2880 "cplus.met"
        switch( lexEl.Value) {
#line 2880 "cplus.met"
#line 2881 "cplus.met"
            case PLUS : 
#line 2881 "cplus.met"
                tokenAhead = 0 ;
#line 2881 "cplus.met"
                CommTerm();
#line 2881 "cplus.met"
#line 2881 "cplus.met"
                {
#line 2881 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2881 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2881 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2881 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2881 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2881 "cplus.met"
                    }
#line 2881 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2881 "cplus.met"
                    expTree=_ptRes0;
#line 2881 "cplus.met"
                }
#line 2881 "cplus.met"
                break;
#line 2881 "cplus.met"
#line 2882 "cplus.met"
            case TIRE : 
#line 2882 "cplus.met"
                tokenAhead = 0 ;
#line 2882 "cplus.met"
                CommTerm();
#line 2882 "cplus.met"
#line 2882 "cplus.met"
                {
#line 2882 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2882 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2882 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2882 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2882 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2882 "cplus.met"
                    }
#line 2882 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2882 "cplus.met"
                    expTree=_ptRes0;
#line 2882 "cplus.met"
                }
#line 2882 "cplus.met"
                break;
#line 2882 "cplus.met"
            default :
#line 2882 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2882 "cplus.met"
                break;
#line 2882 "cplus.met"
        }
#line 2882 "cplus.met"
    } 
#line 2882 "cplus.met"
#line 2884 "cplus.met"
    {
#line 2884 "cplus.met"
        _retValue = expTree ;
#line 2884 "cplus.met"
        goto additive_expression_ret;
#line 2884 "cplus.met"
        
#line 2884 "cplus.met"
    }
#line 2884 "cplus.met"
#line 2884 "cplus.met"
#line 2884 "cplus.met"

#line 2885 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2885 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2885 "cplus.met"
return((PPTREE) 0);
#line 2885 "cplus.met"

#line 2885 "cplus.met"
additive_expression_exit :
#line 2885 "cplus.met"

#line 2885 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2885 "cplus.met"
    _funcLevel--;
#line 2885 "cplus.met"
    return((PPTREE) -1) ;
#line 2885 "cplus.met"

#line 2885 "cplus.met"
additive_expression_ret :
#line 2885 "cplus.met"
    
#line 2885 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2885 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2885 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2885 "cplus.met"
    return _retValue ;
#line 2885 "cplus.met"
}
#line 2885 "cplus.met"

#line 2885 "cplus.met"
#line 2976 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2976 "cplus.met"
{
#line 2976 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2976 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2976 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2976 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2976 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2976 "cplus.met"
#line 2976 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2976 "cplus.met"
#line 2978 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2978 "cplus.met"
#line 2979 "cplus.met"
#line 2980 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2980 "cplus.met"
        switch( lexEl.Value) {
#line 2980 "cplus.met"
#line 2981 "cplus.met"
            case NEW : 
#line 2981 "cplus.met"
#line 2981 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2981 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2981 "cplus.met"
                }
#line 2981 "cplus.met"
                break;
#line 2981 "cplus.met"
#line 2982 "cplus.met"
            case DELETE : 
#line 2982 "cplus.met"
#line 2982 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 2982 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2982 "cplus.met"
                }
#line 2982 "cplus.met"
                break;
#line 2982 "cplus.met"
            default :
#line 2982 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2982 "cplus.met"
                break;
#line 2982 "cplus.met"
        }
#line 2982 "cplus.met"
#line 2984 "cplus.met"
        {
#line 2984 "cplus.met"
            PPTREE _ptRes0=0;
#line 2984 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2984 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2984 "cplus.met"
            retTree=_ptRes0;
#line 2984 "cplus.met"
        }
#line 2984 "cplus.met"
#line 2984 "cplus.met"
#line 2984 "cplus.met"
    } else {
#line 2984 "cplus.met"
#line 2987 "cplus.met"
#line 2988 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2988 "cplus.met"
        switch( lexEl.Value) {
#line 2988 "cplus.met"
#line 2989 "cplus.met"
            case NEW : 
#line 2989 "cplus.met"
#line 2989 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2989 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2989 "cplus.met"
                }
#line 2989 "cplus.met"
                break;
#line 2989 "cplus.met"
#line 2990 "cplus.met"
            case DELETE : 
#line 2990 "cplus.met"
#line 2990 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 2990 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2990 "cplus.met"
                }
#line 2990 "cplus.met"
                break;
#line 2990 "cplus.met"
            default :
#line 2990 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2990 "cplus.met"
                break;
#line 2990 "cplus.met"
        }
#line 2990 "cplus.met"
#line 2992 "cplus.met"
        retTree = valTree ;
#line 2992 "cplus.met"
#line 2992 "cplus.met"
    }
#line 2992 "cplus.met"
#line 2994 "cplus.met"
    {
#line 2994 "cplus.met"
        _retValue = retTree ;
#line 2994 "cplus.met"
        goto alloc_expression_ret;
#line 2994 "cplus.met"
        
#line 2994 "cplus.met"
    }
#line 2994 "cplus.met"
#line 2994 "cplus.met"
#line 2994 "cplus.met"

#line 2995 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2995 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2995 "cplus.met"
return((PPTREE) 0);
#line 2995 "cplus.met"

#line 2995 "cplus.met"
alloc_expression_exit :
#line 2995 "cplus.met"

#line 2995 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2995 "cplus.met"
    _funcLevel--;
#line 2995 "cplus.met"
    return((PPTREE) -1) ;
#line 2995 "cplus.met"

#line 2995 "cplus.met"
alloc_expression_ret :
#line 2995 "cplus.met"
    
#line 2995 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2995 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2995 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2995 "cplus.met"
    return _retValue ;
#line 2995 "cplus.met"
}
#line 2995 "cplus.met"

#line 2995 "cplus.met"
#line 3026 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 3026 "cplus.met"
{
#line 3026 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3026 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3026 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3026 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 3026 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3026 "cplus.met"
#line 3026 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3026 "cplus.met"
#line 3026 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3026 "cplus.met"
#line 3028 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3028 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 3028 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 3028 "cplus.met"
    } else {
#line 3028 "cplus.met"
        tokenAhead = 0 ;
#line 3028 "cplus.met"
    }
#line 3028 "cplus.met"
#line 3029 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 105, cplus))){
#line 3029 "cplus.met"
#line 3030 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 3030 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3030 "cplus.met"
        }
#line 3030 "cplus.met"
    }
#line 3030 "cplus.met"
#line 3031 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3031 "cplus.met"
#line 3032 "cplus.met"
#line 3033 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3033 "cplus.met"
#line 3035 "cplus.met"
#line 3035 "cplus.met"
            _addlist1 = list ;
#line 3035 "cplus.met"
#line 3034 "cplus.met"
            do {
#line 3034 "cplus.met"
#line 3035 "cplus.met"
                {
#line 3035 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3035 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 3035 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3035 "cplus.met"
                    }
#line 3035 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3035 "cplus.met"
                }
#line 3035 "cplus.met"
#line 3035 "cplus.met"
                if (list){
#line 3035 "cplus.met"
#line 3035 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3035 "cplus.met"
                } else {
#line 3035 "cplus.met"
#line 3035 "cplus.met"
                    list = _addlist1 ;
#line 3035 "cplus.met"
                }
#line 3035 "cplus.met"
#line 3035 "cplus.met"
#line 3036 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3036 "cplus.met"
        }
#line 3036 "cplus.met"
#line 3037 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3037 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3037 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 3037 "cplus.met"
        } else {
#line 3037 "cplus.met"
            tokenAhead = 0 ;
#line 3037 "cplus.met"
        }
#line 3037 "cplus.met"
#line 3038 "cplus.met"
        {
#line 3038 "cplus.met"
            PPTREE _ptTree0=0;
#line 3038 "cplus.met"
            {
#line 3038 "cplus.met"
                PPTREE _ptRes1=0;
#line 3038 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 3038 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3038 "cplus.met"
                _ptTree0=_ptRes1;
#line 3038 "cplus.met"
            }
#line 3038 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3038 "cplus.met"
        }
#line 3038 "cplus.met"
#line 3038 "cplus.met"
#line 3038 "cplus.met"
    }
#line 3038 "cplus.met"
#line 3040 "cplus.met"
    {
#line 3040 "cplus.met"
        _retValue = retTree ;
#line 3040 "cplus.met"
        goto allocation_expression_ret;
#line 3040 "cplus.met"
        
#line 3040 "cplus.met"
    }
#line 3040 "cplus.met"
#line 3040 "cplus.met"
#line 3040 "cplus.met"

#line 3041 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3041 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3041 "cplus.met"
return((PPTREE) 0);
#line 3041 "cplus.met"

#line 3041 "cplus.met"
allocation_expression_exit :
#line 3041 "cplus.met"

#line 3041 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3041 "cplus.met"
    _funcLevel--;
#line 3041 "cplus.met"
    return((PPTREE) -1) ;
#line 3041 "cplus.met"

#line 3041 "cplus.met"
allocation_expression_ret :
#line 3041 "cplus.met"
    
#line 3041 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 3041 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3041 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3041 "cplus.met"
    return _retValue ;
#line 3041 "cplus.met"
}
#line 3041 "cplus.met"

#line 3041 "cplus.met"
#line 2830 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2830 "cplus.met"
{
#line 2830 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2830 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2830 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2830 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2830 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2830 "cplus.met"
#line 2830 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2830 "cplus.met"
#line 2832 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2832 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2832 "cplus.met"
    }
#line 2832 "cplus.met"
#line 2833 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2833 "cplus.met"
#line 2834 "cplus.met"
        {
#line 2834 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2834 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2834 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2834 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2834 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2834 "cplus.met"
            }
#line 2834 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2834 "cplus.met"
            expTree=_ptRes0;
#line 2834 "cplus.met"
        }
#line 2834 "cplus.met"
    } 
#line 2834 "cplus.met"
#line 2835 "cplus.met"
    {
#line 2835 "cplus.met"
        _retValue = expTree ;
#line 2835 "cplus.met"
        goto and_expression_ret;
#line 2835 "cplus.met"
        
#line 2835 "cplus.met"
    }
#line 2835 "cplus.met"
#line 2835 "cplus.met"
#line 2835 "cplus.met"

#line 2836 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2836 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2836 "cplus.met"
return((PPTREE) 0);
#line 2836 "cplus.met"

#line 2836 "cplus.met"
and_expression_exit :
#line 2836 "cplus.met"

#line 2836 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2836 "cplus.met"
    _funcLevel--;
#line 2836 "cplus.met"
    return((PPTREE) -1) ;
#line 2836 "cplus.met"

#line 2836 "cplus.met"
and_expression_ret :
#line 2836 "cplus.met"
    
#line 2836 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2836 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2836 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2836 "cplus.met"
    return _retValue ;
#line 2836 "cplus.met"
}
#line 2836 "cplus.met"

#line 2836 "cplus.met"
#line 2659 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2659 "cplus.met"
{
#line 2659 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2659 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2659 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2659 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2659 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2659 "cplus.met"
#line 2659 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2659 "cplus.met"
#line 2661 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2661 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2661 "cplus.met"
    }
#line 2661 "cplus.met"
#line 2662 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2662 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2662 "cplus.met"
#line 2663 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2663 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2663 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2663 "cplus.met"
        } else {
#line 2663 "cplus.met"
            tokenAhead = 0 ;
#line 2663 "cplus.met"
        }
#line 2663 "cplus.met"
    }
#line 2663 "cplus.met"
#line 2664 "cplus.met"
    {
#line 2664 "cplus.met"
        _retValue = retTree ;
#line 2664 "cplus.met"
        goto arg_declarator_ret;
#line 2664 "cplus.met"
        
#line 2664 "cplus.met"
    }
#line 2664 "cplus.met"
#line 2664 "cplus.met"
#line 2664 "cplus.met"

#line 2665 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2665 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2665 "cplus.met"
return((PPTREE) 0);
#line 2665 "cplus.met"

#line 2665 "cplus.met"
arg_declarator_exit :
#line 2665 "cplus.met"

#line 2665 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2665 "cplus.met"
    _funcLevel--;
#line 2665 "cplus.met"
    return((PPTREE) -1) ;
#line 2665 "cplus.met"

#line 2665 "cplus.met"
arg_declarator_ret :
#line 2665 "cplus.met"
    
#line 2665 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2665 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2665 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2665 "cplus.met"
    return _retValue ;
#line 2665 "cplus.met"
}
#line 2665 "cplus.met"

#line 2665 "cplus.met"
#line 2650 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2650 "cplus.met"
{
#line 2650 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2650 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2650 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2650 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2650 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2650 "cplus.met"
#line 2650 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2650 "cplus.met"
#line 2652 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_base_type), 9, cplus))){
#line 2652 "cplus.met"
#line 2653 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_expression), 10, cplus))){
#line 2653 "cplus.met"
#line 2654 "cplus.met"
            if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2654 "cplus.met"
                MulFreeTree(1,retTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2654 "cplus.met"
            }
#line 2654 "cplus.met"
        }
#line 2654 "cplus.met"
    }
#line 2654 "cplus.met"
#line 2655 "cplus.met"
    {
#line 2655 "cplus.met"
        _retValue = retTree ;
#line 2655 "cplus.met"
        goto arg_declarator_base_ret;
#line 2655 "cplus.met"
        
#line 2655 "cplus.met"
    }
#line 2655 "cplus.met"
#line 2655 "cplus.met"
#line 2655 "cplus.met"

#line 2656 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2656 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2656 "cplus.met"
return((PPTREE) 0);
#line 2656 "cplus.met"

#line 2656 "cplus.met"
arg_declarator_base_exit :
#line 2656 "cplus.met"

#line 2656 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2656 "cplus.met"
    _funcLevel--;
#line 2656 "cplus.met"
    return((PPTREE) -1) ;
#line 2656 "cplus.met"

#line 2656 "cplus.met"
arg_declarator_base_ret :
#line 2656 "cplus.met"
    
#line 2656 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2656 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2656 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2656 "cplus.met"
    return _retValue ;
#line 2656 "cplus.met"
}
#line 2656 "cplus.met"

#line 2656 "cplus.met"
#line 2626 "cplus.met"
PPTREE cplus::arg_declarator_base_type ( int error_free)
#line 2626 "cplus.met"
{
#line 2626 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2626 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2626 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2626 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_ENTER,(PPTREE)0);
#line 2626 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2626 "cplus.met"
#line 2626 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2626 "cplus.met"
#line 2628 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2628 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2628 "cplus.met"
    }
#line 2628 "cplus.met"
#line 2629 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2629 "cplus.met"
#line 2630 "cplus.met"
        {
#line 2630 "cplus.met"
            PPTREE _ptRes0=0;
#line 2630 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2630 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2630 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2630 "cplus.met"
            valTree=_ptRes0;
#line 2630 "cplus.met"
        }
#line 2630 "cplus.met"
    } else {
#line 2630 "cplus.met"
#line 2632 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2632 "cplus.met"
#line 2633 "cplus.met"
            {
#line 2633 "cplus.met"
                PPTREE _ptRes0=0;
#line 2633 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2633 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2633 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2633 "cplus.met"
                valTree=_ptRes0;
#line 2633 "cplus.met"
            }
#line 2633 "cplus.met"
        } else {
#line 2633 "cplus.met"
#line 2635 "cplus.met"
            valTree = retTree ;
#line 2635 "cplus.met"
        }
#line 2635 "cplus.met"
    }
#line 2635 "cplus.met"
#line 2636 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2636 "cplus.met"
#line 2637 "cplus.met"
#line 2638 "cplus.met"
        {
#line 2638 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2638 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2638 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2638 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2638 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2638 "cplus.met"
            }
#line 2638 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2638 "cplus.met"
            valTree=_ptRes0;
#line 2638 "cplus.met"
        }
#line 2638 "cplus.met"
#line 2638 "cplus.met"
#line 2638 "cplus.met"
    }
#line 2638 "cplus.met"
#line 2640 "cplus.met"
    {
#line 2640 "cplus.met"
        _retValue = valTree ;
#line 2640 "cplus.met"
        goto arg_declarator_base_type_ret;
#line 2640 "cplus.met"
        
#line 2640 "cplus.met"
    }
#line 2640 "cplus.met"
#line 2640 "cplus.met"
#line 2640 "cplus.met"

#line 2641 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2641 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2641 "cplus.met"
return((PPTREE) 0);
#line 2641 "cplus.met"

#line 2641 "cplus.met"
arg_declarator_base_type_exit :
#line 2641 "cplus.met"

#line 2641 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_EXIT,(PPTREE)0);
#line 2641 "cplus.met"
    _funcLevel--;
#line 2641 "cplus.met"
    return((PPTREE) -1) ;
#line 2641 "cplus.met"

#line 2641 "cplus.met"
arg_declarator_base_type_ret :
#line 2641 "cplus.met"
    
#line 2641 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_RETURN,_retValue);
#line 2641 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2641 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2641 "cplus.met"
    return _retValue ;
#line 2641 "cplus.met"
}
#line 2641 "cplus.met"

#line 2641 "cplus.met"
#line 2643 "cplus.met"
PPTREE cplus::arg_declarator_expression ( int error_free)
#line 2643 "cplus.met"
{
#line 2643 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2643 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2643 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2643 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_expression",TRACE_ENTER,(PPTREE)0);
#line 2643 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2643 "cplus.met"
#line 2644 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2644 "cplus.met"
#line 2645 "cplus.met"
        {
#line 2645 "cplus.met"
            PPTREE _ptTree0=0;
#line 2645 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2645 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(arg_declarator_expression_exit,"arg_declarator_expression")
#line 2645 "cplus.met"
            }
#line 2645 "cplus.met"
            _retValue =_ptTree0;
#line 2645 "cplus.met"
            goto arg_declarator_expression_ret;
#line 2645 "cplus.met"
        }
#line 2645 "cplus.met"
    } else {
#line 2645 "cplus.met"
#line 2647 "cplus.met"
        
#line 2647 "cplus.met"
        LEX_EXIT ("",0);
#line 2647 "cplus.met"
        goto arg_declarator_expression_exit;
#line 2647 "cplus.met"
    }
#line 2647 "cplus.met"
#line 2647 "cplus.met"
#line 2647 "cplus.met"

#line 2648 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2648 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2648 "cplus.met"
return((PPTREE) 0);
#line 2648 "cplus.met"

#line 2648 "cplus.met"
arg_declarator_expression_exit :
#line 2648 "cplus.met"

#line 2648 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_EXIT,(PPTREE)0);
#line 2648 "cplus.met"
    _funcLevel--;
#line 2648 "cplus.met"
    return((PPTREE) -1) ;
#line 2648 "cplus.met"

#line 2648 "cplus.met"
arg_declarator_expression_ret :
#line 2648 "cplus.met"
    
#line 2648 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_RETURN,_retValue);
#line 2648 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2648 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2648 "cplus.met"
    return _retValue ;
#line 2648 "cplus.met"
}
#line 2648 "cplus.met"

#line 2648 "cplus.met"
#line 2676 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2676 "cplus.met"
{
#line 2676 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2676 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2676 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2676 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2676 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2676 "cplus.met"
#line 2676 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2676 "cplus.met"
#line 2678 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2678 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2678 "cplus.met"
    }
#line 2678 "cplus.met"
#line 2679 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2679 "cplus.met"
#line 2680 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2680 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2680 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2680 "cplus.met"
        } else {
#line 2680 "cplus.met"
            tokenAhead = 0 ;
#line 2680 "cplus.met"
        }
#line 2680 "cplus.met"
    }
#line 2680 "cplus.met"
#line 2681 "cplus.met"
    {
#line 2681 "cplus.met"
        _retValue = retTree ;
#line 2681 "cplus.met"
        goto arg_declarator_followed_ret;
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
arg_declarator_followed_exit :
#line 2682 "cplus.met"

#line 2682 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2682 "cplus.met"
    _funcLevel--;
#line 2682 "cplus.met"
    return((PPTREE) -1) ;
#line 2682 "cplus.met"

#line 2682 "cplus.met"
arg_declarator_followed_ret :
#line 2682 "cplus.met"
    
#line 2682 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
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
#line 2684 "cplus.met"
PPTREE cplus::arg_declarator_followed_strict ( int error_free)
#line 2684 "cplus.met"
{
#line 2684 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2684 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2684 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2684 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_ENTER,(PPTREE)0);
#line 2684 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2684 "cplus.met"
#line 2684 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2684 "cplus.met"
#line 2686 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2686 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_strict_exit,"arg_declarator_followed_strict")
#line 2686 "cplus.met"
    }
#line 2686 "cplus.met"
#line 2687 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2687 "cplus.met"
#line 2688 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2688 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2688 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_strict_exit,",")
#line 2688 "cplus.met"
        } else {
#line 2688 "cplus.met"
            tokenAhead = 0 ;
#line 2688 "cplus.met"
        }
#line 2688 "cplus.met"
    }
#line 2688 "cplus.met"
#line 2689 "cplus.met"
    {
#line 2689 "cplus.met"
        _retValue = retTree ;
#line 2689 "cplus.met"
        goto arg_declarator_followed_strict_ret;
#line 2689 "cplus.met"
        
#line 2689 "cplus.met"
    }
#line 2689 "cplus.met"
#line 2689 "cplus.met"
#line 2689 "cplus.met"

#line 2690 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2690 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2690 "cplus.met"
return((PPTREE) 0);
#line 2690 "cplus.met"

#line 2690 "cplus.met"
arg_declarator_followed_strict_exit :
#line 2690 "cplus.met"

#line 2690 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_EXIT,(PPTREE)0);
#line 2690 "cplus.met"
    _funcLevel--;
#line 2690 "cplus.met"
    return((PPTREE) -1) ;
#line 2690 "cplus.met"

#line 2690 "cplus.met"
arg_declarator_followed_strict_ret :
#line 2690 "cplus.met"
    
#line 2690 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_RETURN,_retValue);
#line 2690 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2690 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2690 "cplus.met"
    return _retValue ;
#line 2690 "cplus.met"
}
#line 2690 "cplus.met"

#line 2690 "cplus.met"
#line 2667 "cplus.met"
PPTREE cplus::arg_declarator_strict ( int error_free)
#line 2667 "cplus.met"
{
#line 2667 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2667 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2667 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2667 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_strict",TRACE_ENTER,(PPTREE)0);
#line 2667 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2667 "cplus.met"
#line 2667 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2667 "cplus.met"
#line 2669 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2669 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_strict_exit,"arg_declarator_strict")
#line 2669 "cplus.met"
    }
#line 2669 "cplus.met"
#line 2670 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2670 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2670 "cplus.met"
#line 2671 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2671 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2671 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_strict_exit,",")
#line 2671 "cplus.met"
        } else {
#line 2671 "cplus.met"
            tokenAhead = 0 ;
#line 2671 "cplus.met"
        }
#line 2671 "cplus.met"
    }
#line 2671 "cplus.met"
#line 2672 "cplus.met"
    {
#line 2672 "cplus.met"
        _retValue = retTree ;
#line 2672 "cplus.met"
        goto arg_declarator_strict_ret;
#line 2672 "cplus.met"
        
#line 2672 "cplus.met"
    }
#line 2672 "cplus.met"
#line 2672 "cplus.met"
#line 2672 "cplus.met"

#line 2673 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2673 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2673 "cplus.met"
return((PPTREE) 0);
#line 2673 "cplus.met"

#line 2673 "cplus.met"
arg_declarator_strict_exit :
#line 2673 "cplus.met"

#line 2673 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_EXIT,(PPTREE)0);
#line 2673 "cplus.met"
    _funcLevel--;
#line 2673 "cplus.met"
    return((PPTREE) -1) ;
#line 2673 "cplus.met"

#line 2673 "cplus.met"
arg_declarator_strict_ret :
#line 2673 "cplus.met"
    
#line 2673 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_RETURN,_retValue);
#line 2673 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2673 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2673 "cplus.met"
    return _retValue ;
#line 2673 "cplus.met"
}
#line 2673 "cplus.met"

#line 2673 "cplus.met"
#line 2692 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2692 "cplus.met"
{
#line 2692 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2692 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2692 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2692 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2692 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2692 "cplus.met"
#line 2692 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2692 "cplus.met"
#line 2694 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2694 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2694 "cplus.met"
    }
#line 2694 "cplus.met"
#line 2695 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2695 "cplus.met"
#line 2696 "cplus.met"
        {
#line 2696 "cplus.met"
            PPTREE _ptRes0=0;
#line 2696 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2696 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2696 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2696 "cplus.met"
            valTree=_ptRes0;
#line 2696 "cplus.met"
        }
#line 2696 "cplus.met"
    } else {
#line 2696 "cplus.met"
#line 2698 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2698 "cplus.met"
#line 2699 "cplus.met"
            {
#line 2699 "cplus.met"
                PPTREE _ptRes0=0;
#line 2699 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2699 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2699 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2699 "cplus.met"
                valTree=_ptRes0;
#line 2699 "cplus.met"
            }
#line 2699 "cplus.met"
        } else {
#line 2699 "cplus.met"
#line 2701 "cplus.met"
            valTree = retTree ;
#line 2701 "cplus.met"
        }
#line 2701 "cplus.met"
    }
#line 2701 "cplus.met"
#line 2702 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2702 "cplus.met"
#line 2703 "cplus.met"
#line 2704 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 155, cplus)){
#line 2704 "cplus.met"
#line 2705 "cplus.met"
            {
#line 2705 "cplus.met"
                PPTREE _ptRes0=0;
#line 2705 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2705 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2705 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2705 "cplus.met"
                valTree=_ptRes0;
#line 2705 "cplus.met"
            }
#line 2705 "cplus.met"
        } else {
#line 2705 "cplus.met"
#line 2707 "cplus.met"
            {
#line 2707 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2707 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2707 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2707 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2707 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2707 "cplus.met"
                }
#line 2707 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2707 "cplus.met"
                valTree=_ptRes0;
#line 2707 "cplus.met"
            }
#line 2707 "cplus.met"
        }
#line 2707 "cplus.met"
#line 2707 "cplus.met"
#line 2707 "cplus.met"
    }
#line 2707 "cplus.met"
#line 2709 "cplus.met"
    {
#line 2709 "cplus.met"
        _retValue = valTree ;
#line 2709 "cplus.met"
        goto arg_declarator_type_ret;
#line 2709 "cplus.met"
        
#line 2709 "cplus.met"
    }
#line 2709 "cplus.met"
#line 2709 "cplus.met"
#line 2709 "cplus.met"

#line 2710 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2710 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2710 "cplus.met"
return((PPTREE) 0);
#line 2710 "cplus.met"

#line 2710 "cplus.met"
arg_declarator_type_exit :
#line 2710 "cplus.met"

#line 2710 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2710 "cplus.met"
    _funcLevel--;
#line 2710 "cplus.met"
    return((PPTREE) -1) ;
#line 2710 "cplus.met"

#line 2710 "cplus.met"
arg_declarator_type_ret :
#line 2710 "cplus.met"
    
#line 2710 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2710 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2710 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2710 "cplus.met"
    return _retValue ;
#line 2710 "cplus.met"
}
#line 2710 "cplus.met"

#line 2710 "cplus.met"
#line 2339 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2339 "cplus.met"
{
#line 2339 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2339 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2339 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2339 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2339 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2339 "cplus.met"
#line 2339 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2339 "cplus.met"
#line 2341 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2341 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2341 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2341 "cplus.met"
    } else {
#line 2341 "cplus.met"
        tokenAhead = 0 ;
#line 2341 "cplus.met"
    }
#line 2341 "cplus.met"
#line 2342 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 16, cplus)){
#line 2342 "cplus.met"
#line 2343 "cplus.met"
        {
#line 2343 "cplus.met"
            PPTREE _ptRes0=0;
#line 2343 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2343 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2343 "cplus.met"
            retTree=_ptRes0;
#line 2343 "cplus.met"
        }
#line 2343 "cplus.met"
    } else {
#line 2343 "cplus.met"
#line 2345 "cplus.met"
        {
#line 2345 "cplus.met"
            PPTREE _ptRes0=0;
#line 2345 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2345 "cplus.met"
            retTree=_ptRes0;
#line 2345 "cplus.met"
        }
#line 2345 "cplus.met"
    }
#line 2345 "cplus.met"
#line 2346 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2346 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2346 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2346 "cplus.met"
    } else {
#line 2346 "cplus.met"
        tokenAhead = 0 ;
#line 2346 "cplus.met"
    }
#line 2346 "cplus.met"
#line 2347 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 65, cplus)){
#line 2347 "cplus.met"
#line 2348 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2348 "cplus.met"
#line 2348 "cplus.met"
    }
#line 2348 "cplus.met"
#line 2349 "cplus.met"
    {
#line 2349 "cplus.met"
        _retValue = retTree ;
#line 2349 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2349 "cplus.met"
        
#line 2349 "cplus.met"
    }
#line 2349 "cplus.met"
#line 2349 "cplus.met"
#line 2349 "cplus.met"

#line 2350 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2350 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2350 "cplus.met"
return((PPTREE) 0);
#line 2350 "cplus.met"

#line 2350 "cplus.met"
arg_typ_declarator_exit :
#line 2350 "cplus.met"

#line 2350 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2350 "cplus.met"
    _funcLevel--;
#line 2350 "cplus.met"
    return((PPTREE) -1) ;
#line 2350 "cplus.met"

#line 2350 "cplus.met"
arg_typ_declarator_ret :
#line 2350 "cplus.met"
    
#line 2350 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2350 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2350 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2350 "cplus.met"
    return _retValue ;
#line 2350 "cplus.met"
}
#line 2350 "cplus.met"

#line 2350 "cplus.met"
#line 2588 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2588 "cplus.met"
{
#line 2588 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2588 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2588 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2588 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2588 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2588 "cplus.met"
#line 2588 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2588 "cplus.met"
#line 2588 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2588 "cplus.met"
#line 2590 "cplus.met"
     { int followed = 0;
#line 2590 "cplus.met"
#line 2591 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 12, cplus)){
#line 2591 "cplus.met"
#line 2592 "cplus.met"
         followed = 1;
#line 2592 "cplus.met"
    } else {
#line 2592 "cplus.met"
#line 2594 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator_strict)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2594 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2594 "cplus.met"
        }
#line 2594 "cplus.met"
    }
#line 2594 "cplus.met"
#line 2595 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2595 "cplus.met"
#line 2596 "cplus.met"
#line 2597 "cplus.met"
     {  int exit = 0 ; 
#line 2597 "cplus.met"
#line 2597 "cplus.met"
    _addlist1 = retTree ;
#line 2597 "cplus.met"
#line 2598 "cplus.met"
    while ( followed && !exit ) { 
#line 2598 "cplus.met"
#line 2599 "cplus.met"
#line 2600 "cplus.met"
         followed = 0;
#line 2600 "cplus.met"
#line 2601 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 11, cplus)){
#line 2601 "cplus.met"
#line 2602 "cplus.met"
#line 2603 "cplus.met"
             followed = 1;
#line 2603 "cplus.met"
#line 2604 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2604 "cplus.met"
#line 2604 "cplus.met"
            if (retTree){
#line 2604 "cplus.met"
#line 2604 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2604 "cplus.met"
            } else {
#line 2604 "cplus.met"
#line 2604 "cplus.met"
                retTree = _addlist1 ;
#line 2604 "cplus.met"
            }
#line 2604 "cplus.met"
#line 2604 "cplus.met"
#line 2604 "cplus.met"
        } else {
#line 2604 "cplus.met"
#line 2607 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2607 "cplus.met"
#line 2608 "cplus.met"
#line 2609 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2609 "cplus.met"
#line 2609 "cplus.met"
                if (retTree){
#line 2609 "cplus.met"
#line 2609 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2609 "cplus.met"
                } else {
#line 2609 "cplus.met"
#line 2609 "cplus.met"
                    retTree = _addlist1 ;
#line 2609 "cplus.met"
                }
#line 2609 "cplus.met"
#line 2609 "cplus.met"
#line 2609 "cplus.met"
            } else {
#line 2609 "cplus.met"
#line 2612 "cplus.met"
#line 2613 "cplus.met"
                {
#line 2613 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2613 "cplus.met"
                    {
#line 2613 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2613 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2613 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2613 "cplus.met"
                    }
#line 2613 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2613 "cplus.met"
                }
#line 2613 "cplus.met"
#line 2613 "cplus.met"
                if (retTree){
#line 2613 "cplus.met"
#line 2613 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2613 "cplus.met"
                } else {
#line 2613 "cplus.met"
#line 2613 "cplus.met"
                    retTree = _addlist1 ;
#line 2613 "cplus.met"
                }
#line 2613 "cplus.met"
#line 2614 "cplus.met"
                 exit = 1 ;
#line 2614 "cplus.met"
#line 2615 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2615 "cplus.met"
#line 2615 "cplus.met"
                }
#line 2615 "cplus.met"
#line 2615 "cplus.met"
            }
#line 2615 "cplus.met"
        }
#line 2615 "cplus.met"
#line 2615 "cplus.met"
    } 
#line 2615 "cplus.met"
#line 2619 "cplus.met"
    if ((! ( exit )) && 
#line 2619 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2619 "cplus.met"
#line 2620 "cplus.met"
        {
#line 2620 "cplus.met"
            PPTREE _ptTree0=0;
#line 2620 "cplus.met"
            {
#line 2620 "cplus.met"
                PPTREE _ptRes1=0;
#line 2620 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2620 "cplus.met"
                _ptTree0=_ptRes1;
#line 2620 "cplus.met"
            }
#line 2620 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2620 "cplus.met"
        }
#line 2620 "cplus.met"
#line 2620 "cplus.met"
    }
#line 2620 "cplus.met"
#line 2621 "cplus.met"
     } } 
#line 2621 "cplus.met"
#line 2621 "cplus.met"
#line 2623 "cplus.met"
    {
#line 2623 "cplus.met"
        _retValue = retTree ;
#line 2623 "cplus.met"
        goto arg_typ_list_ret;
#line 2623 "cplus.met"
        
#line 2623 "cplus.met"
    }
#line 2623 "cplus.met"
#line 2623 "cplus.met"
#line 2623 "cplus.met"

#line 2624 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2624 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2624 "cplus.met"
return((PPTREE) 0);
#line 2624 "cplus.met"

#line 2624 "cplus.met"
arg_typ_list_exit :
#line 2624 "cplus.met"

#line 2624 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2624 "cplus.met"
    _funcLevel--;
#line 2624 "cplus.met"
    return((PPTREE) -1) ;
#line 2624 "cplus.met"

#line 2624 "cplus.met"
arg_typ_list_ret :
#line 2624 "cplus.met"
    
#line 2624 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2624 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2624 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2624 "cplus.met"
    return _retValue ;
#line 2624 "cplus.met"
}
#line 2624 "cplus.met"

#line 2624 "cplus.met"
#line 3067 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 3067 "cplus.met"
{
#line 3067 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3067 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3067 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3067 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 3067 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3067 "cplus.met"
#line 3067 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3067 "cplus.met"
#line 3069 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 67, cplus)){
#line 3069 "cplus.met"
#line 3070 "cplus.met"
        {
#line 3070 "cplus.met"
            PPTREE _ptRes0=0;
#line 3070 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3070 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 3070 "cplus.met"
            expTree=_ptRes0;
#line 3070 "cplus.met"
        }
#line 3070 "cplus.met"
    } else {
#line 3070 "cplus.met"
#line 3072 "cplus.met"
        {
#line 3072 "cplus.met"
            PPTREE _ptRes0=0;
#line 3072 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3072 "cplus.met"
            expTree=_ptRes0;
#line 3072 "cplus.met"
        }
#line 3072 "cplus.met"
    }
#line 3072 "cplus.met"
#line 3073 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3073 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3073 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 3073 "cplus.met"
    } else {
#line 3073 "cplus.met"
        tokenAhead = 0 ;
#line 3073 "cplus.met"
    }
#line 3073 "cplus.met"
#line 3074 "cplus.met"
    {
#line 3074 "cplus.met"
        _retValue = expTree ;
#line 3074 "cplus.met"
        goto array_expression_follow_ret;
#line 3074 "cplus.met"
        
#line 3074 "cplus.met"
    }
#line 3074 "cplus.met"
#line 3074 "cplus.met"
#line 3074 "cplus.met"

#line 3075 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3075 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3075 "cplus.met"
return((PPTREE) 0);
#line 3075 "cplus.met"

#line 3075 "cplus.met"
array_expression_follow_exit :
#line 3075 "cplus.met"

#line 3075 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 3075 "cplus.met"
    _funcLevel--;
#line 3075 "cplus.met"
    return((PPTREE) -1) ;
#line 3075 "cplus.met"

#line 3075 "cplus.met"
array_expression_follow_ret :
#line 3075 "cplus.met"
    
#line 3075 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 3075 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3075 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3075 "cplus.met"
    return _retValue ;
#line 3075 "cplus.met"
}
#line 3075 "cplus.met"

#line 3075 "cplus.met"
#line 2280 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2280 "cplus.met"
{
#line 2280 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2280 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2280 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2280 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2280 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2280 "cplus.met"
#line 2280 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2280 "cplus.met"
#line 2282 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2282 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2282 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2282 "cplus.met"
    } else {
#line 2282 "cplus.met"
        tokenAhead = 0 ;
#line 2282 "cplus.met"
    }
#line 2282 "cplus.met"
#line 2283 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2283 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2283 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2283 "cplus.met"
    } else {
#line 2283 "cplus.met"
        tokenAhead = 0 ;
#line 2283 "cplus.met"
    }
#line 2283 "cplus.met"
#line 2284 "cplus.met"
    {
#line 2284 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2284 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2284 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2284 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2284 "cplus.met"
        }
#line 2284 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2284 "cplus.met"
        retTree=_ptRes0;
#line 2284 "cplus.met"
    }
#line 2284 "cplus.met"
#line 2285 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2285 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2285 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2285 "cplus.met"
    } else {
#line 2285 "cplus.met"
        tokenAhead = 0 ;
#line 2285 "cplus.met"
    }
#line 2285 "cplus.met"
#line 2286 "cplus.met"
    {
#line 2286 "cplus.met"
        _retValue = retTree ;
#line 2286 "cplus.met"
        goto asm_call_ret;
#line 2286 "cplus.met"
        
#line 2286 "cplus.met"
    }
#line 2286 "cplus.met"
#line 2286 "cplus.met"
#line 2286 "cplus.met"

#line 2287 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2287 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2287 "cplus.met"
return((PPTREE) 0);
#line 2287 "cplus.met"

#line 2287 "cplus.met"
asm_call_exit :
#line 2287 "cplus.met"

#line 2287 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2287 "cplus.met"
    _funcLevel--;
#line 2287 "cplus.met"
    return((PPTREE) -1) ;
#line 2287 "cplus.met"

#line 2287 "cplus.met"
asm_call_ret :
#line 2287 "cplus.met"
    
#line 2287 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2287 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2287 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2287 "cplus.met"
    return _retValue ;
#line 2287 "cplus.met"
}
#line 2287 "cplus.met"

#line 2287 "cplus.met"
#line 1013 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 1013 "cplus.met"
{
#line 1013 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1013 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1013 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1013 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 1013 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1013 "cplus.met"
#line 1013 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1013 "cplus.met"
#line 1015 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1015 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 1015 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 1015 "cplus.met"
    } else {
#line 1015 "cplus.met"
        tokenAhead = 0 ;
#line 1015 "cplus.met"
    }
#line 1015 "cplus.met"
#line 1016 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1016 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1016 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 1016 "cplus.met"
    } else {
#line 1016 "cplus.met"
        tokenAhead = 0 ;
#line 1016 "cplus.met"
    }
#line 1016 "cplus.met"
#line 1017 "cplus.met"
    {
#line 1017 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1017 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 1017 "cplus.met"
        {
#line 1017 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1017 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1017 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1017 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1017 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 1017 "cplus.met"
            } else {
#line 1017 "cplus.met"
                tokenAhead = 0 ;
#line 1017 "cplus.met"
            }
#line 1017 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1017 "cplus.met"
            _ptTree0=_ptRes1;
#line 1017 "cplus.met"
        }
#line 1017 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1017 "cplus.met"
        retTree=_ptRes0;
#line 1017 "cplus.met"
    }
#line 1017 "cplus.met"
#line 1018 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1018 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1018 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 1018 "cplus.met"
    } else {
#line 1018 "cplus.met"
        tokenAhead = 0 ;
#line 1018 "cplus.met"
    }
#line 1018 "cplus.met"
#line 1019 "cplus.met"
    {
#line 1019 "cplus.met"
        _retValue = retTree ;
#line 1019 "cplus.met"
        goto asm_declaration_ret;
#line 1019 "cplus.met"
        
#line 1019 "cplus.met"
    }
#line 1019 "cplus.met"
#line 1019 "cplus.met"
#line 1019 "cplus.met"

#line 1020 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1020 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1020 "cplus.met"
return((PPTREE) 0);
#line 1020 "cplus.met"

#line 1020 "cplus.met"
asm_declaration_exit :
#line 1020 "cplus.met"

#line 1020 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 1020 "cplus.met"
    _funcLevel--;
#line 1020 "cplus.met"
    return((PPTREE) -1) ;
#line 1020 "cplus.met"

#line 1020 "cplus.met"
asm_declaration_ret :
#line 1020 "cplus.met"
    
#line 1020 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 1020 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1020 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1020 "cplus.met"
    return _retValue ;
#line 1020 "cplus.met"
}
#line 1020 "cplus.met"

#line 1020 "cplus.met"
