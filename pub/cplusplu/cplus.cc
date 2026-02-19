/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2480 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2480 "cplus.met"
{
#line 2480 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2480 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2480 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2480 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2480 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2480 "cplus.met"
#line 2480 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2480 "cplus.met"
#line 2482 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 128, cplus)){
#line 2482 "cplus.met"
#line 2483 "cplus.met"
        {
#line 2483 "cplus.met"
            PPTREE _ptTree0=0;
#line 2483 "cplus.met"
            {
#line 2483 "cplus.met"
                PPTREE _ptTree1=0;
#line 2483 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2483 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2483 "cplus.met"
                }
#line 2483 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2483 "cplus.met"
            }
#line 2483 "cplus.met"
            _retValue =_ptTree0;
#line 2483 "cplus.met"
            goto abstract_declarator_ret;
#line 2483 "cplus.met"
        }
#line 2483 "cplus.met"
    }
#line 2483 "cplus.met"
#line 2484 "cplus.met"
    retTree = (PPTREE) 0;
#line 2484 "cplus.met"
#line 2485 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2485 "cplus.met"
    switch( lexEl.Value) {
#line 2485 "cplus.met"
#line 2486 "cplus.met"
        case ETOI : 
#line 2486 "cplus.met"
            tokenAhead = 0 ;
#line 2486 "cplus.met"
            CommTerm();
#line 2486 "cplus.met"
#line 2486 "cplus.met"
            {
#line 2486 "cplus.met"
                PPTREE _ptTree0=0;
#line 2486 "cplus.met"
                {
#line 2486 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2486 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2486 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2486 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2486 "cplus.met"
                    }
#line 2486 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2486 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2486 "cplus.met"
                }
#line 2486 "cplus.met"
                _retValue =_ptTree0;
#line 2486 "cplus.met"
                goto abstract_declarator_ret;
#line 2486 "cplus.met"
            }
#line 2486 "cplus.met"
            break;
#line 2486 "cplus.met"
#line 2487 "cplus.met"
        case ETCOETCO : 
#line 2487 "cplus.met"
            tokenAhead = 0 ;
#line 2487 "cplus.met"
            CommTerm();
#line 2487 "cplus.met"
#line 2487 "cplus.met"
            {
#line 2487 "cplus.met"
                PPTREE _ptTree0=0;
#line 2487 "cplus.met"
                {
#line 2487 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2487 "cplus.met"
                    _ptRes1= MakeTree(TYP_MOV, 1);
#line 2487 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2487 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2487 "cplus.met"
                    }
#line 2487 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2487 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2487 "cplus.met"
                }
#line 2487 "cplus.met"
                _retValue =_ptTree0;
#line 2487 "cplus.met"
                goto abstract_declarator_ret;
#line 2487 "cplus.met"
            }
#line 2487 "cplus.met"
            break;
#line 2487 "cplus.met"
#line 2488 "cplus.met"
        case POINPOINPOIN : 
#line 2488 "cplus.met"
            tokenAhead = 0 ;
#line 2488 "cplus.met"
            CommTerm();
#line 2488 "cplus.met"
#line 2488 "cplus.met"
            {
#line 2488 "cplus.met"
                PPTREE _ptTree0=0;
#line 2488 "cplus.met"
                {
#line 2488 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2488 "cplus.met"
                    _ptRes1= MakeTree(TYP_VARIADIC, 1);
#line 2488 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2488 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2488 "cplus.met"
                    }
#line 2488 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2488 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2488 "cplus.met"
                }
#line 2488 "cplus.met"
                _retValue =_ptTree0;
#line 2488 "cplus.met"
                goto abstract_declarator_ret;
#line 2488 "cplus.met"
            }
#line 2488 "cplus.met"
            break;
#line 2488 "cplus.met"
#line 2489 "cplus.met"
        case ETCO : 
#line 2489 "cplus.met"
            tokenAhead = 0 ;
#line 2489 "cplus.met"
            CommTerm();
#line 2489 "cplus.met"
#line 2489 "cplus.met"
            {
#line 2489 "cplus.met"
                PPTREE _ptTree0=0;
#line 2489 "cplus.met"
                {
#line 2489 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2489 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2489 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2489 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2489 "cplus.met"
                    }
#line 2489 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2489 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2489 "cplus.met"
                }
#line 2489 "cplus.met"
                _retValue =_ptTree0;
#line 2489 "cplus.met"
                goto abstract_declarator_ret;
#line 2489 "cplus.met"
            }
#line 2489 "cplus.met"
            break;
#line 2489 "cplus.met"
#line 2490 "cplus.met"
        case TILD : 
#line 2490 "cplus.met"
            tokenAhead = 0 ;
#line 2490 "cplus.met"
            CommTerm();
#line 2490 "cplus.met"
#line 2490 "cplus.met"
            {
#line 2490 "cplus.met"
                PPTREE _ptTree0=0;
#line 2490 "cplus.met"
                {
#line 2490 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2490 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2490 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2490 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2490 "cplus.met"
                    }
#line 2490 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2490 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2490 "cplus.met"
                }
#line 2490 "cplus.met"
                _retValue =_ptTree0;
#line 2490 "cplus.met"
                goto abstract_declarator_ret;
#line 2490 "cplus.met"
            }
#line 2490 "cplus.met"
            break;
#line 2490 "cplus.met"
#line 2494 "cplus.met"
        case POUV : 
#line 2494 "cplus.met"
            tokenAhead = 0 ;
#line 2494 "cplus.met"
            CommTerm();
#line 2494 "cplus.met"
#line 2492 "cplus.met"
#line 2493 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2493 "cplus.met"
#line 2494 "cplus.met"
                
#line 2494 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2494 "cplus.met"
                goto abstract_declarator_exit;
#line 2494 "cplus.met"
#line 2494 "cplus.met"
            }
#line 2494 "cplus.met"
#line 2495 "cplus.met"
            {
#line 2495 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2495 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2495 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2495 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2495 "cplus.met"
                }
#line 2495 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2495 "cplus.met"
                retTree=_ptRes0;
#line 2495 "cplus.met"
            }
#line 2495 "cplus.met"
#line 2496 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2496 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2496 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2496 "cplus.met"
            } else {
#line 2496 "cplus.met"
                tokenAhead = 0 ;
#line 2496 "cplus.met"
            }
#line 2496 "cplus.met"
#line 2497 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2497 "cplus.met"
#line 2498 "cplus.met"
                                         { PPTREE theTree ;
#line 2498 "cplus.met"
                                    theTree = valTree ;
#line 2498 "cplus.met"
                                    if (theTree) {
#line 2498 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2498 "cplus.met"
                                     if (NumberTree(theTree)
#line 2498 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2498 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2498 "cplus.met"
                                     else
#line 2498 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2498 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2498 "cplus.met"
                                        /* modif portage sun */
#line 2498 "cplus.met"
                                        retTree = valTree;
#line 2498 "cplus.met"
                                    }
#line 2498 "cplus.met"
                                       }
#line 2498 "cplus.met"
                                
#line 2498 "cplus.met"
            }
#line 2498 "cplus.met"
#line 2498 "cplus.met"
            break;
#line 2498 "cplus.met"
#line 2515 "cplus.met"
        case META : 
#line 2515 "cplus.met"
        case IDENT : 
#line 2515 "cplus.met"
#line 2516 "cplus.met"
#line 2517 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2517 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2517 "cplus.met"
            }
#line 2517 "cplus.met"
#line 2518 "cplus.met"
            {
#line 2518 "cplus.met"
                PPTREE _ptTree0=0;
#line 2518 "cplus.met"
                {
#line 2518 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2518 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2518 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2518 "cplus.met"
                    }
#line 2518 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2518 "cplus.met"
                }
#line 2518 "cplus.met"
                _retValue =_ptTree0;
#line 2518 "cplus.met"
                goto abstract_declarator_ret;
#line 2518 "cplus.met"
            }
#line 2518 "cplus.met"
#line 2518 "cplus.met"
            break;
#line 2518 "cplus.met"
#line 2524 "cplus.met"
        default : 
#line 2524 "cplus.met"
#line 2523 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2523 "cplus.met"
#line 2525 "cplus.met"
                retTree = valTree ;
#line 2525 "cplus.met"
#line 2525 "cplus.met"
            }
#line 2525 "cplus.met"
            break;
#line 2525 "cplus.met"
    }
#line 2525 "cplus.met"
#line 2527 "cplus.met"
    {
#line 2527 "cplus.met"
        _retValue = retTree ;
#line 2527 "cplus.met"
        goto abstract_declarator_ret;
#line 2527 "cplus.met"
        
#line 2527 "cplus.met"
    }
#line 2527 "cplus.met"
#line 2527 "cplus.met"
#line 2527 "cplus.met"

#line 2528 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2528 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2528 "cplus.met"
return((PPTREE) 0);
#line 2528 "cplus.met"

#line 2528 "cplus.met"
abstract_declarator_exit :
#line 2528 "cplus.met"

#line 2528 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2528 "cplus.met"
    _funcLevel--;
#line 2528 "cplus.met"
    return((PPTREE) -1) ;
#line 2528 "cplus.met"

#line 2528 "cplus.met"
abstract_declarator_ret :
#line 2528 "cplus.met"
    
#line 2528 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2528 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2528 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2528 "cplus.met"
    return _retValue ;
#line 2528 "cplus.met"
}
#line 2528 "cplus.met"

#line 2528 "cplus.met"
#line 2867 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2867 "cplus.met"
{
#line 2867 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2867 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2867 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2867 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2867 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2867 "cplus.met"
#line 2867 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2867 "cplus.met"
#line 2869 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2869 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2869 "cplus.met"
    }
#line 2869 "cplus.met"
#line 2870 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2870 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2870 "cplus.met"
#line 2871 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2871 "cplus.met"
        switch( lexEl.Value) {
#line 2871 "cplus.met"
#line 2872 "cplus.met"
            case PLUS : 
#line 2872 "cplus.met"
                tokenAhead = 0 ;
#line 2872 "cplus.met"
                CommTerm();
#line 2872 "cplus.met"
#line 2872 "cplus.met"
                {
#line 2872 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2872 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2872 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2872 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2872 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2872 "cplus.met"
                    }
#line 2872 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2872 "cplus.met"
                    expTree=_ptRes0;
#line 2872 "cplus.met"
                }
#line 2872 "cplus.met"
                break;
#line 2872 "cplus.met"
#line 2873 "cplus.met"
            case TIRE : 
#line 2873 "cplus.met"
                tokenAhead = 0 ;
#line 2873 "cplus.met"
                CommTerm();
#line 2873 "cplus.met"
#line 2873 "cplus.met"
                {
#line 2873 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2873 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2873 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2873 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 2873 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2873 "cplus.met"
                    }
#line 2873 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2873 "cplus.met"
                    expTree=_ptRes0;
#line 2873 "cplus.met"
                }
#line 2873 "cplus.met"
                break;
#line 2873 "cplus.met"
            default :
#line 2873 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2873 "cplus.met"
                break;
#line 2873 "cplus.met"
        }
#line 2873 "cplus.met"
    } 
#line 2873 "cplus.met"
#line 2875 "cplus.met"
    {
#line 2875 "cplus.met"
        _retValue = expTree ;
#line 2875 "cplus.met"
        goto additive_expression_ret;
#line 2875 "cplus.met"
        
#line 2875 "cplus.met"
    }
#line 2875 "cplus.met"
#line 2875 "cplus.met"
#line 2875 "cplus.met"

#line 2876 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2876 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2876 "cplus.met"
return((PPTREE) 0);
#line 2876 "cplus.met"

#line 2876 "cplus.met"
additive_expression_exit :
#line 2876 "cplus.met"

#line 2876 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2876 "cplus.met"
    _funcLevel--;
#line 2876 "cplus.met"
    return((PPTREE) -1) ;
#line 2876 "cplus.met"

#line 2876 "cplus.met"
additive_expression_ret :
#line 2876 "cplus.met"
    
#line 2876 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2876 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2876 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2876 "cplus.met"
    return _retValue ;
#line 2876 "cplus.met"
}
#line 2876 "cplus.met"

#line 2876 "cplus.met"
#line 2967 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2967 "cplus.met"
{
#line 2967 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2967 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2967 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2967 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2967 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2967 "cplus.met"
#line 2967 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2967 "cplus.met"
#line 2969 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2969 "cplus.met"
#line 2970 "cplus.met"
#line 2971 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2971 "cplus.met"
        switch( lexEl.Value) {
#line 2971 "cplus.met"
#line 2972 "cplus.met"
            case NEW : 
#line 2972 "cplus.met"
#line 2972 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2972 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2972 "cplus.met"
                }
#line 2972 "cplus.met"
                break;
#line 2972 "cplus.met"
#line 2973 "cplus.met"
            case DELETE : 
#line 2973 "cplus.met"
#line 2973 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 2973 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2973 "cplus.met"
                }
#line 2973 "cplus.met"
                break;
#line 2973 "cplus.met"
            default :
#line 2973 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2973 "cplus.met"
                break;
#line 2973 "cplus.met"
        }
#line 2973 "cplus.met"
#line 2975 "cplus.met"
        {
#line 2975 "cplus.met"
            PPTREE _ptRes0=0;
#line 2975 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2975 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2975 "cplus.met"
            retTree=_ptRes0;
#line 2975 "cplus.met"
        }
#line 2975 "cplus.met"
#line 2975 "cplus.met"
#line 2975 "cplus.met"
    } else {
#line 2975 "cplus.met"
#line 2978 "cplus.met"
#line 2979 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2979 "cplus.met"
        switch( lexEl.Value) {
#line 2979 "cplus.met"
#line 2980 "cplus.met"
            case NEW : 
#line 2980 "cplus.met"
#line 2980 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2980 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2980 "cplus.met"
                }
#line 2980 "cplus.met"
                break;
#line 2980 "cplus.met"
#line 2981 "cplus.met"
            case DELETE : 
#line 2981 "cplus.met"
#line 2981 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 2981 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2981 "cplus.met"
                }
#line 2981 "cplus.met"
                break;
#line 2981 "cplus.met"
            default :
#line 2981 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2981 "cplus.met"
                break;
#line 2981 "cplus.met"
        }
#line 2981 "cplus.met"
#line 2983 "cplus.met"
        retTree = valTree ;
#line 2983 "cplus.met"
#line 2983 "cplus.met"
    }
#line 2983 "cplus.met"
#line 2985 "cplus.met"
    {
#line 2985 "cplus.met"
        _retValue = retTree ;
#line 2985 "cplus.met"
        goto alloc_expression_ret;
#line 2985 "cplus.met"
        
#line 2985 "cplus.met"
    }
#line 2985 "cplus.met"
#line 2985 "cplus.met"
#line 2985 "cplus.met"

#line 2986 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2986 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2986 "cplus.met"
return((PPTREE) 0);
#line 2986 "cplus.met"

#line 2986 "cplus.met"
alloc_expression_exit :
#line 2986 "cplus.met"

#line 2986 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2986 "cplus.met"
    _funcLevel--;
#line 2986 "cplus.met"
    return((PPTREE) -1) ;
#line 2986 "cplus.met"

#line 2986 "cplus.met"
alloc_expression_ret :
#line 2986 "cplus.met"
    
#line 2986 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2986 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2986 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2986 "cplus.met"
    return _retValue ;
#line 2986 "cplus.met"
}
#line 2986 "cplus.met"

#line 2986 "cplus.met"
#line 3017 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 3017 "cplus.met"
{
#line 3017 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3017 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3017 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3017 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 3017 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3017 "cplus.met"
#line 3017 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3017 "cplus.met"
#line 3017 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3017 "cplus.met"
#line 3019 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3019 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 3019 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 3019 "cplus.met"
    } else {
#line 3019 "cplus.met"
        tokenAhead = 0 ;
#line 3019 "cplus.met"
    }
#line 3019 "cplus.met"
#line 3020 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 105, cplus))){
#line 3020 "cplus.met"
#line 3021 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 3021 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3021 "cplus.met"
        }
#line 3021 "cplus.met"
    }
#line 3021 "cplus.met"
#line 3022 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3022 "cplus.met"
#line 3023 "cplus.met"
#line 3024 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3024 "cplus.met"
#line 3026 "cplus.met"
#line 3026 "cplus.met"
            _addlist1 = list ;
#line 3026 "cplus.met"
#line 3025 "cplus.met"
            do {
#line 3025 "cplus.met"
#line 3026 "cplus.met"
                {
#line 3026 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3026 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 3026 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3026 "cplus.met"
                    }
#line 3026 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3026 "cplus.met"
                }
#line 3026 "cplus.met"
#line 3026 "cplus.met"
                if (list){
#line 3026 "cplus.met"
#line 3026 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3026 "cplus.met"
                } else {
#line 3026 "cplus.met"
#line 3026 "cplus.met"
                    list = _addlist1 ;
#line 3026 "cplus.met"
                }
#line 3026 "cplus.met"
#line 3026 "cplus.met"
#line 3027 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3027 "cplus.met"
        }
#line 3027 "cplus.met"
#line 3028 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3028 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3028 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 3028 "cplus.met"
        } else {
#line 3028 "cplus.met"
            tokenAhead = 0 ;
#line 3028 "cplus.met"
        }
#line 3028 "cplus.met"
#line 3029 "cplus.met"
        {
#line 3029 "cplus.met"
            PPTREE _ptTree0=0;
#line 3029 "cplus.met"
            {
#line 3029 "cplus.met"
                PPTREE _ptRes1=0;
#line 3029 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 3029 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3029 "cplus.met"
                _ptTree0=_ptRes1;
#line 3029 "cplus.met"
            }
#line 3029 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3029 "cplus.met"
        }
#line 3029 "cplus.met"
#line 3029 "cplus.met"
#line 3029 "cplus.met"
    }
#line 3029 "cplus.met"
#line 3031 "cplus.met"
    {
#line 3031 "cplus.met"
        _retValue = retTree ;
#line 3031 "cplus.met"
        goto allocation_expression_ret;
#line 3031 "cplus.met"
        
#line 3031 "cplus.met"
    }
#line 3031 "cplus.met"
#line 3031 "cplus.met"
#line 3031 "cplus.met"

#line 3032 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3032 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3032 "cplus.met"
return((PPTREE) 0);
#line 3032 "cplus.met"

#line 3032 "cplus.met"
allocation_expression_exit :
#line 3032 "cplus.met"

#line 3032 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3032 "cplus.met"
    _funcLevel--;
#line 3032 "cplus.met"
    return((PPTREE) -1) ;
#line 3032 "cplus.met"

#line 3032 "cplus.met"
allocation_expression_ret :
#line 3032 "cplus.met"
    
#line 3032 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 3032 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3032 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3032 "cplus.met"
    return _retValue ;
#line 3032 "cplus.met"
}
#line 3032 "cplus.met"

#line 3032 "cplus.met"
#line 2821 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2821 "cplus.met"
{
#line 2821 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2821 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2821 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2821 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2821 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2821 "cplus.met"
#line 2821 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2821 "cplus.met"
#line 2823 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2823 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2823 "cplus.met"
    }
#line 2823 "cplus.met"
#line 2824 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2824 "cplus.met"
#line 2825 "cplus.met"
        {
#line 2825 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2825 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2825 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2825 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2825 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2825 "cplus.met"
            }
#line 2825 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2825 "cplus.met"
            expTree=_ptRes0;
#line 2825 "cplus.met"
        }
#line 2825 "cplus.met"
    } 
#line 2825 "cplus.met"
#line 2826 "cplus.met"
    {
#line 2826 "cplus.met"
        _retValue = expTree ;
#line 2826 "cplus.met"
        goto and_expression_ret;
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
and_expression_exit :
#line 2827 "cplus.met"

#line 2827 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2827 "cplus.met"
    _funcLevel--;
#line 2827 "cplus.met"
    return((PPTREE) -1) ;
#line 2827 "cplus.met"

#line 2827 "cplus.met"
and_expression_ret :
#line 2827 "cplus.met"
    
#line 2827 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
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
#line 2650 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2650 "cplus.met"
{
#line 2650 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2650 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2650 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2650 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2650 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2650 "cplus.met"
#line 2650 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2650 "cplus.met"
#line 2652 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2652 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2652 "cplus.met"
    }
#line 2652 "cplus.met"
#line 2653 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2653 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2653 "cplus.met"
#line 2654 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2654 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2654 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2654 "cplus.met"
        } else {
#line 2654 "cplus.met"
            tokenAhead = 0 ;
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
        goto arg_declarator_ret;
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
arg_declarator_exit :
#line 2656 "cplus.met"

#line 2656 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2656 "cplus.met"
    _funcLevel--;
#line 2656 "cplus.met"
    return((PPTREE) -1) ;
#line 2656 "cplus.met"

#line 2656 "cplus.met"
arg_declarator_ret :
#line 2656 "cplus.met"
    
#line 2656 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
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
#line 2641 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2641 "cplus.met"
{
#line 2641 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2641 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2641 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2641 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2641 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2641 "cplus.met"
#line 2641 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2641 "cplus.met"
#line 2643 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_base_type), 9, cplus))){
#line 2643 "cplus.met"
#line 2644 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_expression), 10, cplus))){
#line 2644 "cplus.met"
#line 2645 "cplus.met"
            if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2645 "cplus.met"
                MulFreeTree(1,retTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2645 "cplus.met"
            }
#line 2645 "cplus.met"
        }
#line 2645 "cplus.met"
    }
#line 2645 "cplus.met"
#line 2646 "cplus.met"
    {
#line 2646 "cplus.met"
        _retValue = retTree ;
#line 2646 "cplus.met"
        goto arg_declarator_base_ret;
#line 2646 "cplus.met"
        
#line 2646 "cplus.met"
    }
#line 2646 "cplus.met"
#line 2646 "cplus.met"
#line 2646 "cplus.met"

#line 2647 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2647 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2647 "cplus.met"
return((PPTREE) 0);
#line 2647 "cplus.met"

#line 2647 "cplus.met"
arg_declarator_base_exit :
#line 2647 "cplus.met"

#line 2647 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2647 "cplus.met"
    _funcLevel--;
#line 2647 "cplus.met"
    return((PPTREE) -1) ;
#line 2647 "cplus.met"

#line 2647 "cplus.met"
arg_declarator_base_ret :
#line 2647 "cplus.met"
    
#line 2647 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2647 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2647 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2647 "cplus.met"
    return _retValue ;
#line 2647 "cplus.met"
}
#line 2647 "cplus.met"

#line 2647 "cplus.met"
#line 2617 "cplus.met"
PPTREE cplus::arg_declarator_base_type ( int error_free)
#line 2617 "cplus.met"
{
#line 2617 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2617 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2617 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2617 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_ENTER,(PPTREE)0);
#line 2617 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2617 "cplus.met"
#line 2617 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2617 "cplus.met"
#line 2619 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 2619 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2619 "cplus.met"
    }
#line 2619 "cplus.met"
#line 2620 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2620 "cplus.met"
#line 2621 "cplus.met"
        {
#line 2621 "cplus.met"
            PPTREE _ptRes0=0;
#line 2621 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2621 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2621 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2621 "cplus.met"
            valTree=_ptRes0;
#line 2621 "cplus.met"
        }
#line 2621 "cplus.met"
    } else {
#line 2621 "cplus.met"
#line 2623 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2623 "cplus.met"
#line 2624 "cplus.met"
            {
#line 2624 "cplus.met"
                PPTREE _ptRes0=0;
#line 2624 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2624 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2624 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2624 "cplus.met"
                valTree=_ptRes0;
#line 2624 "cplus.met"
            }
#line 2624 "cplus.met"
        } else {
#line 2624 "cplus.met"
#line 2626 "cplus.met"
            valTree = retTree ;
#line 2626 "cplus.met"
        }
#line 2626 "cplus.met"
    }
#line 2626 "cplus.met"
#line 2627 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2627 "cplus.met"
#line 2628 "cplus.met"
#line 2629 "cplus.met"
        {
#line 2629 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2629 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2629 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2629 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2629 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2629 "cplus.met"
            }
#line 2629 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2629 "cplus.met"
            valTree=_ptRes0;
#line 2629 "cplus.met"
        }
#line 2629 "cplus.met"
#line 2629 "cplus.met"
#line 2629 "cplus.met"
    }
#line 2629 "cplus.met"
#line 2631 "cplus.met"
    {
#line 2631 "cplus.met"
        _retValue = valTree ;
#line 2631 "cplus.met"
        goto arg_declarator_base_type_ret;
#line 2631 "cplus.met"
        
#line 2631 "cplus.met"
    }
#line 2631 "cplus.met"
#line 2631 "cplus.met"
#line 2631 "cplus.met"

#line 2632 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2632 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2632 "cplus.met"
return((PPTREE) 0);
#line 2632 "cplus.met"

#line 2632 "cplus.met"
arg_declarator_base_type_exit :
#line 2632 "cplus.met"

#line 2632 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_EXIT,(PPTREE)0);
#line 2632 "cplus.met"
    _funcLevel--;
#line 2632 "cplus.met"
    return((PPTREE) -1) ;
#line 2632 "cplus.met"

#line 2632 "cplus.met"
arg_declarator_base_type_ret :
#line 2632 "cplus.met"
    
#line 2632 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_RETURN,_retValue);
#line 2632 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2632 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2632 "cplus.met"
    return _retValue ;
#line 2632 "cplus.met"
}
#line 2632 "cplus.met"

#line 2632 "cplus.met"
#line 2634 "cplus.met"
PPTREE cplus::arg_declarator_expression ( int error_free)
#line 2634 "cplus.met"
{
#line 2634 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2634 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2634 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2634 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_expression",TRACE_ENTER,(PPTREE)0);
#line 2634 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2634 "cplus.met"
#line 2635 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2635 "cplus.met"
#line 2636 "cplus.met"
        {
#line 2636 "cplus.met"
            PPTREE _ptTree0=0;
#line 2636 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2636 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(arg_declarator_expression_exit,"arg_declarator_expression")
#line 2636 "cplus.met"
            }
#line 2636 "cplus.met"
            _retValue =_ptTree0;
#line 2636 "cplus.met"
            goto arg_declarator_expression_ret;
#line 2636 "cplus.met"
        }
#line 2636 "cplus.met"
    } else {
#line 2636 "cplus.met"
#line 2638 "cplus.met"
        
#line 2638 "cplus.met"
        LEX_EXIT ("",0);
#line 2638 "cplus.met"
        goto arg_declarator_expression_exit;
#line 2638 "cplus.met"
    }
#line 2638 "cplus.met"
#line 2638 "cplus.met"
#line 2638 "cplus.met"

#line 2639 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2639 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2639 "cplus.met"
return((PPTREE) 0);
#line 2639 "cplus.met"

#line 2639 "cplus.met"
arg_declarator_expression_exit :
#line 2639 "cplus.met"

#line 2639 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_EXIT,(PPTREE)0);
#line 2639 "cplus.met"
    _funcLevel--;
#line 2639 "cplus.met"
    return((PPTREE) -1) ;
#line 2639 "cplus.met"

#line 2639 "cplus.met"
arg_declarator_expression_ret :
#line 2639 "cplus.met"
    
#line 2639 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_RETURN,_retValue);
#line 2639 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2639 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2639 "cplus.met"
    return _retValue ;
#line 2639 "cplus.met"
}
#line 2639 "cplus.met"

#line 2639 "cplus.met"
#line 2667 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2667 "cplus.met"
{
#line 2667 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2667 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2667 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2667 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2667 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2667 "cplus.met"
#line 2667 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2667 "cplus.met"
#line 2669 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2669 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2669 "cplus.met"
    }
#line 2669 "cplus.met"
#line 2670 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2670 "cplus.met"
#line 2671 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2671 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2671 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
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
        goto arg_declarator_followed_ret;
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
arg_declarator_followed_exit :
#line 2673 "cplus.met"

#line 2673 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2673 "cplus.met"
    _funcLevel--;
#line 2673 "cplus.met"
    return((PPTREE) -1) ;
#line 2673 "cplus.met"

#line 2673 "cplus.met"
arg_declarator_followed_ret :
#line 2673 "cplus.met"
    
#line 2673 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
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
#line 2675 "cplus.met"
PPTREE cplus::arg_declarator_followed_strict ( int error_free)
#line 2675 "cplus.met"
{
#line 2675 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2675 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2675 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2675 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_ENTER,(PPTREE)0);
#line 2675 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2675 "cplus.met"
#line 2675 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2675 "cplus.met"
#line 2677 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2677 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_strict_exit,"arg_declarator_followed_strict")
#line 2677 "cplus.met"
    }
#line 2677 "cplus.met"
#line 2678 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2678 "cplus.met"
#line 2679 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2679 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2679 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_strict_exit,",")
#line 2679 "cplus.met"
        } else {
#line 2679 "cplus.met"
            tokenAhead = 0 ;
#line 2679 "cplus.met"
        }
#line 2679 "cplus.met"
    }
#line 2679 "cplus.met"
#line 2680 "cplus.met"
    {
#line 2680 "cplus.met"
        _retValue = retTree ;
#line 2680 "cplus.met"
        goto arg_declarator_followed_strict_ret;
#line 2680 "cplus.met"
        
#line 2680 "cplus.met"
    }
#line 2680 "cplus.met"
#line 2680 "cplus.met"
#line 2680 "cplus.met"

#line 2681 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2681 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2681 "cplus.met"
return((PPTREE) 0);
#line 2681 "cplus.met"

#line 2681 "cplus.met"
arg_declarator_followed_strict_exit :
#line 2681 "cplus.met"

#line 2681 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_EXIT,(PPTREE)0);
#line 2681 "cplus.met"
    _funcLevel--;
#line 2681 "cplus.met"
    return((PPTREE) -1) ;
#line 2681 "cplus.met"

#line 2681 "cplus.met"
arg_declarator_followed_strict_ret :
#line 2681 "cplus.met"
    
#line 2681 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_RETURN,_retValue);
#line 2681 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2681 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2681 "cplus.met"
    return _retValue ;
#line 2681 "cplus.met"
}
#line 2681 "cplus.met"

#line 2681 "cplus.met"
#line 2658 "cplus.met"
PPTREE cplus::arg_declarator_strict ( int error_free)
#line 2658 "cplus.met"
{
#line 2658 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2658 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2658 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2658 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_strict",TRACE_ENTER,(PPTREE)0);
#line 2658 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2658 "cplus.met"
#line 2658 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2658 "cplus.met"
#line 2660 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2660 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_strict_exit,"arg_declarator_strict")
#line 2660 "cplus.met"
    }
#line 2660 "cplus.met"
#line 2661 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2661 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2661 "cplus.met"
#line 2662 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2662 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2662 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_strict_exit,",")
#line 2662 "cplus.met"
        } else {
#line 2662 "cplus.met"
            tokenAhead = 0 ;
#line 2662 "cplus.met"
        }
#line 2662 "cplus.met"
    }
#line 2662 "cplus.met"
#line 2663 "cplus.met"
    {
#line 2663 "cplus.met"
        _retValue = retTree ;
#line 2663 "cplus.met"
        goto arg_declarator_strict_ret;
#line 2663 "cplus.met"
        
#line 2663 "cplus.met"
    }
#line 2663 "cplus.met"
#line 2663 "cplus.met"
#line 2663 "cplus.met"

#line 2664 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2664 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2664 "cplus.met"
return((PPTREE) 0);
#line 2664 "cplus.met"

#line 2664 "cplus.met"
arg_declarator_strict_exit :
#line 2664 "cplus.met"

#line 2664 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_EXIT,(PPTREE)0);
#line 2664 "cplus.met"
    _funcLevel--;
#line 2664 "cplus.met"
    return((PPTREE) -1) ;
#line 2664 "cplus.met"

#line 2664 "cplus.met"
arg_declarator_strict_ret :
#line 2664 "cplus.met"
    
#line 2664 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_RETURN,_retValue);
#line 2664 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2664 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2664 "cplus.met"
    return _retValue ;
#line 2664 "cplus.met"
}
#line 2664 "cplus.met"

#line 2664 "cplus.met"
#line 2683 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2683 "cplus.met"
{
#line 2683 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2683 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2683 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2683 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2683 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2683 "cplus.met"
#line 2683 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2683 "cplus.met"
#line 2685 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 2685 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2685 "cplus.met"
    }
#line 2685 "cplus.met"
#line 2686 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2686 "cplus.met"
#line 2687 "cplus.met"
        {
#line 2687 "cplus.met"
            PPTREE _ptRes0=0;
#line 2687 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2687 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2687 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2687 "cplus.met"
            valTree=_ptRes0;
#line 2687 "cplus.met"
        }
#line 2687 "cplus.met"
    } else {
#line 2687 "cplus.met"
#line 2689 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2689 "cplus.met"
#line 2690 "cplus.met"
            {
#line 2690 "cplus.met"
                PPTREE _ptRes0=0;
#line 2690 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2690 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2690 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2690 "cplus.met"
                valTree=_ptRes0;
#line 2690 "cplus.met"
            }
#line 2690 "cplus.met"
        } else {
#line 2690 "cplus.met"
#line 2692 "cplus.met"
            valTree = retTree ;
#line 2692 "cplus.met"
        }
#line 2692 "cplus.met"
    }
#line 2692 "cplus.met"
#line 2693 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2693 "cplus.met"
#line 2694 "cplus.met"
#line 2695 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 154, cplus)){
#line 2695 "cplus.met"
#line 2696 "cplus.met"
            {
#line 2696 "cplus.met"
                PPTREE _ptRes0=0;
#line 2696 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2696 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2696 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2696 "cplus.met"
                valTree=_ptRes0;
#line 2696 "cplus.met"
            }
#line 2696 "cplus.met"
        } else {
#line 2696 "cplus.met"
#line 2698 "cplus.met"
            {
#line 2698 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2698 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2698 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2698 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2698 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2698 "cplus.met"
                }
#line 2698 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2698 "cplus.met"
                valTree=_ptRes0;
#line 2698 "cplus.met"
            }
#line 2698 "cplus.met"
        }
#line 2698 "cplus.met"
#line 2698 "cplus.met"
#line 2698 "cplus.met"
    }
#line 2698 "cplus.met"
#line 2700 "cplus.met"
    {
#line 2700 "cplus.met"
        _retValue = valTree ;
#line 2700 "cplus.met"
        goto arg_declarator_type_ret;
#line 2700 "cplus.met"
        
#line 2700 "cplus.met"
    }
#line 2700 "cplus.met"
#line 2700 "cplus.met"
#line 2700 "cplus.met"

#line 2701 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2701 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2701 "cplus.met"
return((PPTREE) 0);
#line 2701 "cplus.met"

#line 2701 "cplus.met"
arg_declarator_type_exit :
#line 2701 "cplus.met"

#line 2701 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2701 "cplus.met"
    _funcLevel--;
#line 2701 "cplus.met"
    return((PPTREE) -1) ;
#line 2701 "cplus.met"

#line 2701 "cplus.met"
arg_declarator_type_ret :
#line 2701 "cplus.met"
    
#line 2701 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2701 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2701 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2701 "cplus.met"
    return _retValue ;
#line 2701 "cplus.met"
}
#line 2701 "cplus.met"

#line 2701 "cplus.met"
#line 2330 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2330 "cplus.met"
{
#line 2330 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2330 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2330 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2330 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2330 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2330 "cplus.met"
#line 2330 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2330 "cplus.met"
#line 2332 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2332 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2332 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2332 "cplus.met"
    } else {
#line 2332 "cplus.met"
        tokenAhead = 0 ;
#line 2332 "cplus.met"
    }
#line 2332 "cplus.met"
#line 2333 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 16, cplus)){
#line 2333 "cplus.met"
#line 2334 "cplus.met"
        {
#line 2334 "cplus.met"
            PPTREE _ptRes0=0;
#line 2334 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2334 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2334 "cplus.met"
            retTree=_ptRes0;
#line 2334 "cplus.met"
        }
#line 2334 "cplus.met"
    } else {
#line 2334 "cplus.met"
#line 2336 "cplus.met"
        {
#line 2336 "cplus.met"
            PPTREE _ptRes0=0;
#line 2336 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2336 "cplus.met"
            retTree=_ptRes0;
#line 2336 "cplus.met"
        }
#line 2336 "cplus.met"
    }
#line 2336 "cplus.met"
#line 2337 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2337 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2337 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2337 "cplus.met"
    } else {
#line 2337 "cplus.met"
        tokenAhead = 0 ;
#line 2337 "cplus.met"
    }
#line 2337 "cplus.met"
#line 2338 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 65, cplus)){
#line 2338 "cplus.met"
#line 2339 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2339 "cplus.met"
#line 2339 "cplus.met"
    }
#line 2339 "cplus.met"
#line 2340 "cplus.met"
    {
#line 2340 "cplus.met"
        _retValue = retTree ;
#line 2340 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2340 "cplus.met"
        
#line 2340 "cplus.met"
    }
#line 2340 "cplus.met"
#line 2340 "cplus.met"
#line 2340 "cplus.met"

#line 2341 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2341 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2341 "cplus.met"
return((PPTREE) 0);
#line 2341 "cplus.met"

#line 2341 "cplus.met"
arg_typ_declarator_exit :
#line 2341 "cplus.met"

#line 2341 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2341 "cplus.met"
    _funcLevel--;
#line 2341 "cplus.met"
    return((PPTREE) -1) ;
#line 2341 "cplus.met"

#line 2341 "cplus.met"
arg_typ_declarator_ret :
#line 2341 "cplus.met"
    
#line 2341 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2341 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2341 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2341 "cplus.met"
    return _retValue ;
#line 2341 "cplus.met"
}
#line 2341 "cplus.met"

#line 2341 "cplus.met"
#line 2579 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2579 "cplus.met"
{
#line 2579 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2579 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2579 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2579 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2579 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2579 "cplus.met"
#line 2579 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2579 "cplus.met"
#line 2579 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2579 "cplus.met"
#line 2581 "cplus.met"
     { int followed = 0;
#line 2581 "cplus.met"
#line 2582 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 12, cplus)){
#line 2582 "cplus.met"
#line 2583 "cplus.met"
         followed = 1;
#line 2583 "cplus.met"
    } else {
#line 2583 "cplus.met"
#line 2585 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator_strict)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2585 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2585 "cplus.met"
        }
#line 2585 "cplus.met"
    }
#line 2585 "cplus.met"
#line 2586 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2586 "cplus.met"
#line 2587 "cplus.met"
#line 2588 "cplus.met"
     {  int exit = 0 ; 
#line 2588 "cplus.met"
#line 2588 "cplus.met"
    _addlist1 = retTree ;
#line 2588 "cplus.met"
#line 2589 "cplus.met"
    while ( followed && !exit ) { 
#line 2589 "cplus.met"
#line 2590 "cplus.met"
#line 2591 "cplus.met"
         followed = 0;
#line 2591 "cplus.met"
#line 2592 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 11, cplus)){
#line 2592 "cplus.met"
#line 2593 "cplus.met"
#line 2594 "cplus.met"
             followed = 1;
#line 2594 "cplus.met"
#line 2595 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2595 "cplus.met"
#line 2595 "cplus.met"
            if (retTree){
#line 2595 "cplus.met"
#line 2595 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2595 "cplus.met"
            } else {
#line 2595 "cplus.met"
#line 2595 "cplus.met"
                retTree = _addlist1 ;
#line 2595 "cplus.met"
            }
#line 2595 "cplus.met"
#line 2595 "cplus.met"
#line 2595 "cplus.met"
        } else {
#line 2595 "cplus.met"
#line 2598 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2598 "cplus.met"
#line 2599 "cplus.met"
#line 2600 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2600 "cplus.met"
#line 2600 "cplus.met"
                if (retTree){
#line 2600 "cplus.met"
#line 2600 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2600 "cplus.met"
                } else {
#line 2600 "cplus.met"
#line 2600 "cplus.met"
                    retTree = _addlist1 ;
#line 2600 "cplus.met"
                }
#line 2600 "cplus.met"
#line 2600 "cplus.met"
#line 2600 "cplus.met"
            } else {
#line 2600 "cplus.met"
#line 2603 "cplus.met"
#line 2604 "cplus.met"
                {
#line 2604 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2604 "cplus.met"
                    {
#line 2604 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2604 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2604 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2604 "cplus.met"
                    }
#line 2604 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2604 "cplus.met"
                }
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
#line 2605 "cplus.met"
                 exit = 1 ;
#line 2605 "cplus.met"
#line 2606 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2606 "cplus.met"
#line 2606 "cplus.met"
                }
#line 2606 "cplus.met"
#line 2606 "cplus.met"
            }
#line 2606 "cplus.met"
        }
#line 2606 "cplus.met"
#line 2606 "cplus.met"
    } 
#line 2606 "cplus.met"
#line 2610 "cplus.met"
    if ((! ( exit )) && 
#line 2610 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2610 "cplus.met"
#line 2611 "cplus.met"
        {
#line 2611 "cplus.met"
            PPTREE _ptTree0=0;
#line 2611 "cplus.met"
            {
#line 2611 "cplus.met"
                PPTREE _ptRes1=0;
#line 2611 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2611 "cplus.met"
                _ptTree0=_ptRes1;
#line 2611 "cplus.met"
            }
#line 2611 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2611 "cplus.met"
        }
#line 2611 "cplus.met"
#line 2611 "cplus.met"
    }
#line 2611 "cplus.met"
#line 2612 "cplus.met"
     } } 
#line 2612 "cplus.met"
#line 2612 "cplus.met"
#line 2614 "cplus.met"
    {
#line 2614 "cplus.met"
        _retValue = retTree ;
#line 2614 "cplus.met"
        goto arg_typ_list_ret;
#line 2614 "cplus.met"
        
#line 2614 "cplus.met"
    }
#line 2614 "cplus.met"
#line 2614 "cplus.met"
#line 2614 "cplus.met"

#line 2615 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2615 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2615 "cplus.met"
return((PPTREE) 0);
#line 2615 "cplus.met"

#line 2615 "cplus.met"
arg_typ_list_exit :
#line 2615 "cplus.met"

#line 2615 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2615 "cplus.met"
    _funcLevel--;
#line 2615 "cplus.met"
    return((PPTREE) -1) ;
#line 2615 "cplus.met"

#line 2615 "cplus.met"
arg_typ_list_ret :
#line 2615 "cplus.met"
    
#line 2615 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2615 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2615 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2615 "cplus.met"
    return _retValue ;
#line 2615 "cplus.met"
}
#line 2615 "cplus.met"

#line 2615 "cplus.met"
#line 3058 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 3058 "cplus.met"
{
#line 3058 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3058 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3058 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3058 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 3058 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3058 "cplus.met"
#line 3058 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3058 "cplus.met"
#line 3060 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 67, cplus)){
#line 3060 "cplus.met"
#line 3061 "cplus.met"
        {
#line 3061 "cplus.met"
            PPTREE _ptRes0=0;
#line 3061 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3061 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 3061 "cplus.met"
            expTree=_ptRes0;
#line 3061 "cplus.met"
        }
#line 3061 "cplus.met"
    } else {
#line 3061 "cplus.met"
#line 3063 "cplus.met"
        {
#line 3063 "cplus.met"
            PPTREE _ptRes0=0;
#line 3063 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3063 "cplus.met"
            expTree=_ptRes0;
#line 3063 "cplus.met"
        }
#line 3063 "cplus.met"
    }
#line 3063 "cplus.met"
#line 3064 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3064 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3064 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 3064 "cplus.met"
    } else {
#line 3064 "cplus.met"
        tokenAhead = 0 ;
#line 3064 "cplus.met"
    }
#line 3064 "cplus.met"
#line 3065 "cplus.met"
    {
#line 3065 "cplus.met"
        _retValue = expTree ;
#line 3065 "cplus.met"
        goto array_expression_follow_ret;
#line 3065 "cplus.met"
        
#line 3065 "cplus.met"
    }
#line 3065 "cplus.met"
#line 3065 "cplus.met"
#line 3065 "cplus.met"

#line 3066 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3066 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3066 "cplus.met"
return((PPTREE) 0);
#line 3066 "cplus.met"

#line 3066 "cplus.met"
array_expression_follow_exit :
#line 3066 "cplus.met"

#line 3066 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 3066 "cplus.met"
    _funcLevel--;
#line 3066 "cplus.met"
    return((PPTREE) -1) ;
#line 3066 "cplus.met"

#line 3066 "cplus.met"
array_expression_follow_ret :
#line 3066 "cplus.met"
    
#line 3066 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 3066 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3066 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3066 "cplus.met"
    return _retValue ;
#line 3066 "cplus.met"
}
#line 3066 "cplus.met"

#line 3066 "cplus.met"
#line 2265 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2265 "cplus.met"
{
#line 2265 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2265 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2265 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2265 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2265 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2265 "cplus.met"
#line 2265 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2265 "cplus.met"
#line 2267 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2267 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2267 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2267 "cplus.met"
    } else {
#line 2267 "cplus.met"
        tokenAhead = 0 ;
#line 2267 "cplus.met"
    }
#line 2267 "cplus.met"
#line 2268 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2268 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2268 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2268 "cplus.met"
    } else {
#line 2268 "cplus.met"
        tokenAhead = 0 ;
#line 2268 "cplus.met"
    }
#line 2268 "cplus.met"
#line 2269 "cplus.met"
    {
#line 2269 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2269 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2269 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2269 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2269 "cplus.met"
        }
#line 2269 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2269 "cplus.met"
        retTree=_ptRes0;
#line 2269 "cplus.met"
    }
#line 2269 "cplus.met"
#line 2270 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2270 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2270 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2270 "cplus.met"
    } else {
#line 2270 "cplus.met"
        tokenAhead = 0 ;
#line 2270 "cplus.met"
    }
#line 2270 "cplus.met"
#line 2271 "cplus.met"
    {
#line 2271 "cplus.met"
        _retValue = retTree ;
#line 2271 "cplus.met"
        goto asm_call_ret;
#line 2271 "cplus.met"
        
#line 2271 "cplus.met"
    }
#line 2271 "cplus.met"
#line 2271 "cplus.met"
#line 2271 "cplus.met"

#line 2272 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2272 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2272 "cplus.met"
return((PPTREE) 0);
#line 2272 "cplus.met"

#line 2272 "cplus.met"
asm_call_exit :
#line 2272 "cplus.met"

#line 2272 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2272 "cplus.met"
    _funcLevel--;
#line 2272 "cplus.met"
    return((PPTREE) -1) ;
#line 2272 "cplus.met"

#line 2272 "cplus.met"
asm_call_ret :
#line 2272 "cplus.met"
    
#line 2272 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2272 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2272 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2272 "cplus.met"
    return _retValue ;
#line 2272 "cplus.met"
}
#line 2272 "cplus.met"

#line 2272 "cplus.met"
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
