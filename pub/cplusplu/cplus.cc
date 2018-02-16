/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2356 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2356 "cplus.met"
{
#line 2356 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2356 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2356 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2356 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2356 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2356 "cplus.met"
#line 2356 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2356 "cplus.met"
#line 2358 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2358 "cplus.met"
#line 2359 "cplus.met"
        {
#line 2359 "cplus.met"
            PPTREE _ptTree0=0;
#line 2359 "cplus.met"
            {
#line 2359 "cplus.met"
                PPTREE _ptTree1=0;
#line 2359 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2359 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2359 "cplus.met"
                }
#line 2359 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2359 "cplus.met"
            }
#line 2359 "cplus.met"
            _retValue =_ptTree0;
#line 2359 "cplus.met"
            goto abstract_declarator_ret;
#line 2359 "cplus.met"
        }
#line 2359 "cplus.met"
    }
#line 2359 "cplus.met"
#line 2360 "cplus.met"
    retTree = (PPTREE) 0;
#line 2360 "cplus.met"
#line 2361 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2361 "cplus.met"
    switch( lexEl.Value) {
#line 2361 "cplus.met"
#line 2362 "cplus.met"
        case ETOI : 
#line 2362 "cplus.met"
            tokenAhead = 0 ;
#line 2362 "cplus.met"
            CommTerm();
#line 2362 "cplus.met"
#line 2362 "cplus.met"
            {
#line 2362 "cplus.met"
                PPTREE _ptTree0=0;
#line 2362 "cplus.met"
                {
#line 2362 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2362 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2362 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2362 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2362 "cplus.met"
                    }
#line 2362 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2362 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2362 "cplus.met"
                }
#line 2362 "cplus.met"
                _retValue =_ptTree0;
#line 2362 "cplus.met"
                goto abstract_declarator_ret;
#line 2362 "cplus.met"
            }
#line 2362 "cplus.met"
            break;
#line 2362 "cplus.met"
#line 2363 "cplus.met"
        case ETCO : 
#line 2363 "cplus.met"
            tokenAhead = 0 ;
#line 2363 "cplus.met"
            CommTerm();
#line 2363 "cplus.met"
#line 2363 "cplus.met"
            {
#line 2363 "cplus.met"
                PPTREE _ptTree0=0;
#line 2363 "cplus.met"
                {
#line 2363 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2363 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2363 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2363 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2363 "cplus.met"
                    }
#line 2363 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2363 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2363 "cplus.met"
                }
#line 2363 "cplus.met"
                _retValue =_ptTree0;
#line 2363 "cplus.met"
                goto abstract_declarator_ret;
#line 2363 "cplus.met"
            }
#line 2363 "cplus.met"
            break;
#line 2363 "cplus.met"
#line 2364 "cplus.met"
        case TILD : 
#line 2364 "cplus.met"
            tokenAhead = 0 ;
#line 2364 "cplus.met"
            CommTerm();
#line 2364 "cplus.met"
#line 2364 "cplus.met"
            {
#line 2364 "cplus.met"
                PPTREE _ptTree0=0;
#line 2364 "cplus.met"
                {
#line 2364 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2364 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2364 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2364 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2364 "cplus.met"
                    }
#line 2364 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2364 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2364 "cplus.met"
                }
#line 2364 "cplus.met"
                _retValue =_ptTree0;
#line 2364 "cplus.met"
                goto abstract_declarator_ret;
#line 2364 "cplus.met"
            }
#line 2364 "cplus.met"
            break;
#line 2364 "cplus.met"
#line 2368 "cplus.met"
        case POUV : 
#line 2368 "cplus.met"
            tokenAhead = 0 ;
#line 2368 "cplus.met"
            CommTerm();
#line 2368 "cplus.met"
#line 2366 "cplus.met"
#line 2367 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2367 "cplus.met"
#line 2368 "cplus.met"
                
#line 2368 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2368 "cplus.met"
                goto abstract_declarator_exit;
#line 2368 "cplus.met"
#line 2368 "cplus.met"
            }
#line 2368 "cplus.met"
#line 2369 "cplus.met"
            {
#line 2369 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2369 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2369 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2369 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2369 "cplus.met"
                }
#line 2369 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2369 "cplus.met"
                retTree=_ptRes0;
#line 2369 "cplus.met"
            }
#line 2369 "cplus.met"
#line 2370 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2370 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2370 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2370 "cplus.met"
            } else {
#line 2370 "cplus.met"
                tokenAhead = 0 ;
#line 2370 "cplus.met"
            }
#line 2370 "cplus.met"
#line 2371 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2371 "cplus.met"
#line 2372 "cplus.met"
                                         { PPTREE theTree ;
#line 2372 "cplus.met"
                                    theTree = valTree ;
#line 2372 "cplus.met"
                                    if (theTree) {
#line 2372 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2372 "cplus.met"
                                     if (NumberTree(theTree)
#line 2372 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2372 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2372 "cplus.met"
                                     else
#line 2372 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2372 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2372 "cplus.met"
                                        /* modif portage sun */
#line 2372 "cplus.met"
                                        retTree = valTree;
#line 2372 "cplus.met"
                                    }
#line 2372 "cplus.met"
                                       }
#line 2372 "cplus.met"
                                
#line 2372 "cplus.met"
            }
#line 2372 "cplus.met"
#line 2372 "cplus.met"
            break;
#line 2372 "cplus.met"
#line 2389 "cplus.met"
        case META : 
#line 2389 "cplus.met"
        case IDENT : 
#line 2389 "cplus.met"
#line 2390 "cplus.met"
#line 2391 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2391 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2391 "cplus.met"
            }
#line 2391 "cplus.met"
#line 2392 "cplus.met"
            {
#line 2392 "cplus.met"
                PPTREE _ptTree0=0;
#line 2392 "cplus.met"
                {
#line 2392 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2392 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2392 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2392 "cplus.met"
                    }
#line 2392 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2392 "cplus.met"
                }
#line 2392 "cplus.met"
                _retValue =_ptTree0;
#line 2392 "cplus.met"
                goto abstract_declarator_ret;
#line 2392 "cplus.met"
            }
#line 2392 "cplus.met"
#line 2392 "cplus.met"
            break;
#line 2392 "cplus.met"
#line 2398 "cplus.met"
        default : 
#line 2398 "cplus.met"
#line 2397 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2397 "cplus.met"
#line 2399 "cplus.met"
                retTree = valTree ;
#line 2399 "cplus.met"
#line 2399 "cplus.met"
            }
#line 2399 "cplus.met"
            break;
#line 2399 "cplus.met"
    }
#line 2399 "cplus.met"
#line 2401 "cplus.met"
    {
#line 2401 "cplus.met"
        _retValue = retTree ;
#line 2401 "cplus.met"
        goto abstract_declarator_ret;
#line 2401 "cplus.met"
        
#line 2401 "cplus.met"
    }
#line 2401 "cplus.met"
#line 2401 "cplus.met"
#line 2401 "cplus.met"

#line 2402 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2402 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2402 "cplus.met"
return((PPTREE) 0);
#line 2402 "cplus.met"

#line 2402 "cplus.met"
abstract_declarator_exit :
#line 2402 "cplus.met"

#line 2402 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2402 "cplus.met"
    _funcLevel--;
#line 2402 "cplus.met"
    return((PPTREE) -1) ;
#line 2402 "cplus.met"

#line 2402 "cplus.met"
abstract_declarator_ret :
#line 2402 "cplus.met"
    
#line 2402 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2402 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2402 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2402 "cplus.met"
    return _retValue ;
#line 2402 "cplus.met"
}
#line 2402 "cplus.met"

#line 2402 "cplus.met"
#line 2713 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2713 "cplus.met"
{
#line 2713 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2713 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2713 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2713 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2713 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2713 "cplus.met"
#line 2713 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2713 "cplus.met"
#line 2715 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2715 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2715 "cplus.met"
    }
#line 2715 "cplus.met"
#line 2716 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2716 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2716 "cplus.met"
#line 2717 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2717 "cplus.met"
        switch( lexEl.Value) {
#line 2717 "cplus.met"
#line 2718 "cplus.met"
            case PLUS : 
#line 2718 "cplus.met"
                tokenAhead = 0 ;
#line 2718 "cplus.met"
                CommTerm();
#line 2718 "cplus.met"
#line 2718 "cplus.met"
                {
#line 2718 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2718 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2718 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2718 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2718 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2718 "cplus.met"
                    }
#line 2718 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2718 "cplus.met"
                    expTree=_ptRes0;
#line 2718 "cplus.met"
                }
#line 2718 "cplus.met"
                break;
#line 2718 "cplus.met"
#line 2720 "cplus.met"
            case TIRE : 
#line 2720 "cplus.met"
                tokenAhead = 0 ;
#line 2720 "cplus.met"
                CommTerm();
#line 2720 "cplus.met"
#line 2720 "cplus.met"
                {
#line 2720 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2720 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2720 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2720 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2720 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2720 "cplus.met"
                    }
#line 2720 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2720 "cplus.met"
                    expTree=_ptRes0;
#line 2720 "cplus.met"
                }
#line 2720 "cplus.met"
                break;
#line 2720 "cplus.met"
            default :
#line 2720 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2720 "cplus.met"
                break;
#line 2720 "cplus.met"
        }
#line 2720 "cplus.met"
    } 
#line 2720 "cplus.met"
#line 2723 "cplus.met"
    {
#line 2723 "cplus.met"
        _retValue = expTree ;
#line 2723 "cplus.met"
        goto additive_expression_ret;
#line 2723 "cplus.met"
        
#line 2723 "cplus.met"
    }
#line 2723 "cplus.met"
#line 2723 "cplus.met"
#line 2723 "cplus.met"

#line 2724 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2724 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2724 "cplus.met"
return((PPTREE) 0);
#line 2724 "cplus.met"

#line 2724 "cplus.met"
additive_expression_exit :
#line 2724 "cplus.met"

#line 2724 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2724 "cplus.met"
    _funcLevel--;
#line 2724 "cplus.met"
    return((PPTREE) -1) ;
#line 2724 "cplus.met"

#line 2724 "cplus.met"
additive_expression_ret :
#line 2724 "cplus.met"
    
#line 2724 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2724 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2724 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2724 "cplus.met"
    return _retValue ;
#line 2724 "cplus.met"
}
#line 2724 "cplus.met"

#line 2724 "cplus.met"
#line 2817 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2817 "cplus.met"
{
#line 2817 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2817 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2817 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2817 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2817 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2817 "cplus.met"
#line 2817 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2817 "cplus.met"
#line 2819 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2819 "cplus.met"
#line 2820 "cplus.met"
#line 2821 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2821 "cplus.met"
        switch( lexEl.Value) {
#line 2821 "cplus.met"
#line 2822 "cplus.met"
            case NEW : 
#line 2822 "cplus.met"
#line 2822 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2822 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2822 "cplus.met"
                }
#line 2822 "cplus.met"
                break;
#line 2822 "cplus.met"
#line 2823 "cplus.met"
            case DELETE : 
#line 2823 "cplus.met"
#line 2823 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 43, cplus))== (PPTREE) -1 ) {
#line 2823 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2823 "cplus.met"
                }
#line 2823 "cplus.met"
                break;
#line 2823 "cplus.met"
            default :
#line 2823 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2823 "cplus.met"
                break;
#line 2823 "cplus.met"
        }
#line 2823 "cplus.met"
#line 2825 "cplus.met"
        {
#line 2825 "cplus.met"
            PPTREE _ptRes0=0;
#line 2825 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2825 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2825 "cplus.met"
            retTree=_ptRes0;
#line 2825 "cplus.met"
        }
#line 2825 "cplus.met"
#line 2825 "cplus.met"
#line 2825 "cplus.met"
    } else {
#line 2825 "cplus.met"
#line 2828 "cplus.met"
#line 2829 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2829 "cplus.met"
        switch( lexEl.Value) {
#line 2829 "cplus.met"
#line 2830 "cplus.met"
            case NEW : 
#line 2830 "cplus.met"
#line 2830 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2830 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2830 "cplus.met"
                }
#line 2830 "cplus.met"
                break;
#line 2830 "cplus.met"
#line 2831 "cplus.met"
            case DELETE : 
#line 2831 "cplus.met"
#line 2831 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 43, cplus))== (PPTREE) -1 ) {
#line 2831 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2831 "cplus.met"
                }
#line 2831 "cplus.met"
                break;
#line 2831 "cplus.met"
            default :
#line 2831 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2831 "cplus.met"
                break;
#line 2831 "cplus.met"
        }
#line 2831 "cplus.met"
#line 2833 "cplus.met"
        retTree = valTree ;
#line 2833 "cplus.met"
#line 2833 "cplus.met"
    }
#line 2833 "cplus.met"
#line 2835 "cplus.met"
    {
#line 2835 "cplus.met"
        _retValue = retTree ;
#line 2835 "cplus.met"
        goto alloc_expression_ret;
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
alloc_expression_exit :
#line 2836 "cplus.met"

#line 2836 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2836 "cplus.met"
    _funcLevel--;
#line 2836 "cplus.met"
    return((PPTREE) -1) ;
#line 2836 "cplus.met"

#line 2836 "cplus.met"
alloc_expression_ret :
#line 2836 "cplus.met"
    
#line 2836 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
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
#line 2867 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2867 "cplus.met"
{
#line 2867 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2867 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2867 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2867 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2867 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2867 "cplus.met"
#line 2867 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2867 "cplus.met"
#line 2867 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2867 "cplus.met"
#line 2869 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2869 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2869 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2869 "cplus.met"
    } else {
#line 2869 "cplus.met"
        tokenAhead = 0 ;
#line 2869 "cplus.met"
    }
#line 2869 "cplus.met"
#line 2870 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 96, cplus))){
#line 2870 "cplus.met"
#line 2871 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2871 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2871 "cplus.met"
        }
#line 2871 "cplus.met"
    }
#line 2871 "cplus.met"
#line 2872 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2872 "cplus.met"
#line 2873 "cplus.met"
#line 2874 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2874 "cplus.met"
#line 2876 "cplus.met"
#line 2876 "cplus.met"
            _addlist1 = list ;
#line 2876 "cplus.met"
#line 2875 "cplus.met"
            do {
#line 2875 "cplus.met"
#line 2876 "cplus.met"
                {
#line 2876 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2876 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 2876 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2876 "cplus.met"
                    }
#line 2876 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2876 "cplus.met"
                }
#line 2876 "cplus.met"
#line 2876 "cplus.met"
                if (list){
#line 2876 "cplus.met"
#line 2876 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2876 "cplus.met"
                } else {
#line 2876 "cplus.met"
#line 2876 "cplus.met"
                    list = _addlist1 ;
#line 2876 "cplus.met"
                }
#line 2876 "cplus.met"
#line 2876 "cplus.met"
#line 2877 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2877 "cplus.met"
        }
#line 2877 "cplus.met"
#line 2878 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2878 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2878 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2878 "cplus.met"
        } else {
#line 2878 "cplus.met"
            tokenAhead = 0 ;
#line 2878 "cplus.met"
        }
#line 2878 "cplus.met"
#line 2879 "cplus.met"
        {
#line 2879 "cplus.met"
            PPTREE _ptTree0=0;
#line 2879 "cplus.met"
            {
#line 2879 "cplus.met"
                PPTREE _ptRes1=0;
#line 2879 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 2879 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2879 "cplus.met"
                _ptTree0=_ptRes1;
#line 2879 "cplus.met"
            }
#line 2879 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2879 "cplus.met"
        }
#line 2879 "cplus.met"
#line 2879 "cplus.met"
#line 2879 "cplus.met"
    }
#line 2879 "cplus.met"
#line 2881 "cplus.met"
    {
#line 2881 "cplus.met"
        _retValue = retTree ;
#line 2881 "cplus.met"
        goto allocation_expression_ret;
#line 2881 "cplus.met"
        
#line 2881 "cplus.met"
    }
#line 2881 "cplus.met"
#line 2881 "cplus.met"
#line 2881 "cplus.met"

#line 2882 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2882 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2882 "cplus.met"
return((PPTREE) 0);
#line 2882 "cplus.met"

#line 2882 "cplus.met"
allocation_expression_exit :
#line 2882 "cplus.met"

#line 2882 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2882 "cplus.met"
    _funcLevel--;
#line 2882 "cplus.met"
    return((PPTREE) -1) ;
#line 2882 "cplus.met"

#line 2882 "cplus.met"
allocation_expression_ret :
#line 2882 "cplus.met"
    
#line 2882 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 2882 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2882 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2882 "cplus.met"
    return _retValue ;
#line 2882 "cplus.met"
}
#line 2882 "cplus.met"

#line 2882 "cplus.met"
#line 2663 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2663 "cplus.met"
{
#line 2663 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2663 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2663 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2663 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2663 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2663 "cplus.met"
#line 2663 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2663 "cplus.met"
#line 2665 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 2665 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2665 "cplus.met"
    }
#line 2665 "cplus.met"
#line 2666 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2666 "cplus.met"
#line 2667 "cplus.met"
        {
#line 2667 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2667 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2667 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2667 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 2667 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2667 "cplus.met"
            }
#line 2667 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2667 "cplus.met"
            expTree=_ptRes0;
#line 2667 "cplus.met"
        }
#line 2667 "cplus.met"
    } 
#line 2667 "cplus.met"
#line 2668 "cplus.met"
    {
#line 2668 "cplus.met"
        _retValue = expTree ;
#line 2668 "cplus.met"
        goto and_expression_ret;
#line 2668 "cplus.met"
        
#line 2668 "cplus.met"
    }
#line 2668 "cplus.met"
#line 2668 "cplus.met"
#line 2668 "cplus.met"

#line 2669 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2669 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2669 "cplus.met"
return((PPTREE) 0);
#line 2669 "cplus.met"

#line 2669 "cplus.met"
and_expression_exit :
#line 2669 "cplus.met"

#line 2669 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2669 "cplus.met"
    _funcLevel--;
#line 2669 "cplus.met"
    return((PPTREE) -1) ;
#line 2669 "cplus.met"

#line 2669 "cplus.met"
and_expression_ret :
#line 2669 "cplus.met"
    
#line 2669 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2669 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2669 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2669 "cplus.met"
    return _retValue ;
#line 2669 "cplus.met"
}
#line 2669 "cplus.met"

#line 2669 "cplus.met"
#line 2508 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2508 "cplus.met"
{
#line 2508 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2508 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2508 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2508 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2508 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2508 "cplus.met"
#line 2508 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2508 "cplus.met"
#line 2510 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2510 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2510 "cplus.met"
    }
#line 2510 "cplus.met"
#line 2511 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2511 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2511 "cplus.met"
#line 2512 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2512 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2512 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2512 "cplus.met"
        } else {
#line 2512 "cplus.met"
            tokenAhead = 0 ;
#line 2512 "cplus.met"
        }
#line 2512 "cplus.met"
    }
#line 2512 "cplus.met"
#line 2513 "cplus.met"
    {
#line 2513 "cplus.met"
        _retValue = retTree ;
#line 2513 "cplus.met"
        goto arg_declarator_ret;
#line 2513 "cplus.met"
        
#line 2513 "cplus.met"
    }
#line 2513 "cplus.met"
#line 2513 "cplus.met"
#line 2513 "cplus.met"

#line 2514 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2514 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2514 "cplus.met"
return((PPTREE) 0);
#line 2514 "cplus.met"

#line 2514 "cplus.met"
arg_declarator_exit :
#line 2514 "cplus.met"

#line 2514 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2514 "cplus.met"
    _funcLevel--;
#line 2514 "cplus.met"
    return((PPTREE) -1) ;
#line 2514 "cplus.met"

#line 2514 "cplus.met"
arg_declarator_ret :
#line 2514 "cplus.met"
    
#line 2514 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2514 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2514 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2514 "cplus.met"
    return _retValue ;
#line 2514 "cplus.met"
}
#line 2514 "cplus.met"

#line 2514 "cplus.met"
#line 2491 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2491 "cplus.met"
{
#line 2491 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2491 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2491 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2491 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2491 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2491 "cplus.met"
#line 2491 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2491 "cplus.met"
#line 2493 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2493 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2493 "cplus.met"
    }
#line 2493 "cplus.met"
#line 2494 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 2494 "cplus.met"
#line 2495 "cplus.met"
        {
#line 2495 "cplus.met"
            PPTREE _ptRes0=0;
#line 2495 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2495 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2495 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2495 "cplus.met"
            valTree=_ptRes0;
#line 2495 "cplus.met"
        }
#line 2495 "cplus.met"
    } else {
#line 2495 "cplus.met"
#line 2497 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2497 "cplus.met"
#line 2498 "cplus.met"
            {
#line 2498 "cplus.met"
                PPTREE _ptRes0=0;
#line 2498 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2498 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2498 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2498 "cplus.met"
                valTree=_ptRes0;
#line 2498 "cplus.met"
            }
#line 2498 "cplus.met"
        } else {
#line 2498 "cplus.met"
#line 2500 "cplus.met"
            valTree = retTree ;
#line 2500 "cplus.met"
        }
#line 2500 "cplus.met"
    }
#line 2500 "cplus.met"
#line 2501 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2501 "cplus.met"
#line 2502 "cplus.met"
#line 2503 "cplus.met"
        {
#line 2503 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2503 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2503 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2503 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2503 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2503 "cplus.met"
            }
#line 2503 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2503 "cplus.met"
            valTree=_ptRes0;
#line 2503 "cplus.met"
        }
#line 2503 "cplus.met"
#line 2503 "cplus.met"
#line 2503 "cplus.met"
    }
#line 2503 "cplus.met"
#line 2505 "cplus.met"
    {
#line 2505 "cplus.met"
        _retValue = valTree ;
#line 2505 "cplus.met"
        goto arg_declarator_base_ret;
#line 2505 "cplus.met"
        
#line 2505 "cplus.met"
    }
#line 2505 "cplus.met"
#line 2505 "cplus.met"
#line 2505 "cplus.met"

#line 2506 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2506 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2506 "cplus.met"
return((PPTREE) 0);
#line 2506 "cplus.met"

#line 2506 "cplus.met"
arg_declarator_base_exit :
#line 2506 "cplus.met"

#line 2506 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2506 "cplus.met"
    _funcLevel--;
#line 2506 "cplus.met"
    return((PPTREE) -1) ;
#line 2506 "cplus.met"

#line 2506 "cplus.met"
arg_declarator_base_ret :
#line 2506 "cplus.met"
    
#line 2506 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2506 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2506 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2506 "cplus.met"
    return _retValue ;
#line 2506 "cplus.met"
}
#line 2506 "cplus.met"

#line 2506 "cplus.met"
#line 2516 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2516 "cplus.met"
{
#line 2516 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2516 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2516 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2516 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2516 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2516 "cplus.met"
#line 2516 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2516 "cplus.met"
#line 2518 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2518 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2518 "cplus.met"
    }
#line 2518 "cplus.met"
#line 2519 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2519 "cplus.met"
#line 2520 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2520 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2520 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2520 "cplus.met"
        } else {
#line 2520 "cplus.met"
            tokenAhead = 0 ;
#line 2520 "cplus.met"
        }
#line 2520 "cplus.met"
    }
#line 2520 "cplus.met"
#line 2521 "cplus.met"
    {
#line 2521 "cplus.met"
        _retValue = retTree ;
#line 2521 "cplus.met"
        goto arg_declarator_followed_ret;
#line 2521 "cplus.met"
        
#line 2521 "cplus.met"
    }
#line 2521 "cplus.met"
#line 2521 "cplus.met"
#line 2521 "cplus.met"

#line 2522 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2522 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2522 "cplus.met"
return((PPTREE) 0);
#line 2522 "cplus.met"

#line 2522 "cplus.met"
arg_declarator_followed_exit :
#line 2522 "cplus.met"

#line 2522 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2522 "cplus.met"
    _funcLevel--;
#line 2522 "cplus.met"
    return((PPTREE) -1) ;
#line 2522 "cplus.met"

#line 2522 "cplus.met"
arg_declarator_followed_ret :
#line 2522 "cplus.met"
    
#line 2522 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
#line 2522 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2522 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2522 "cplus.met"
    return _retValue ;
#line 2522 "cplus.met"
}
#line 2522 "cplus.met"

#line 2522 "cplus.met"
#line 2524 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2524 "cplus.met"
{
#line 2524 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2524 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2524 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2524 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2524 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2524 "cplus.met"
#line 2524 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2524 "cplus.met"
#line 2526 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2526 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2526 "cplus.met"
    }
#line 2526 "cplus.met"
#line 2527 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 2527 "cplus.met"
#line 2528 "cplus.met"
        {
#line 2528 "cplus.met"
            PPTREE _ptRes0=0;
#line 2528 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2528 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2528 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2528 "cplus.met"
            valTree=_ptRes0;
#line 2528 "cplus.met"
        }
#line 2528 "cplus.met"
    } else {
#line 2528 "cplus.met"
#line 2530 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2530 "cplus.met"
#line 2531 "cplus.met"
            {
#line 2531 "cplus.met"
                PPTREE _ptRes0=0;
#line 2531 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2531 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2531 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2531 "cplus.met"
                valTree=_ptRes0;
#line 2531 "cplus.met"
            }
#line 2531 "cplus.met"
        } else {
#line 2531 "cplus.met"
#line 2533 "cplus.met"
            valTree = retTree ;
#line 2533 "cplus.met"
        }
#line 2533 "cplus.met"
    }
#line 2533 "cplus.met"
#line 2534 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2534 "cplus.met"
#line 2535 "cplus.met"
#line 2536 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 141, cplus)){
#line 2536 "cplus.met"
#line 2537 "cplus.met"
            {
#line 2537 "cplus.met"
                PPTREE _ptRes0=0;
#line 2537 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2537 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2537 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2537 "cplus.met"
                valTree=_ptRes0;
#line 2537 "cplus.met"
            }
#line 2537 "cplus.met"
        } else {
#line 2537 "cplus.met"
#line 2539 "cplus.met"
            {
#line 2539 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2539 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2539 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2539 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2539 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2539 "cplus.met"
                }
#line 2539 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2539 "cplus.met"
                valTree=_ptRes0;
#line 2539 "cplus.met"
            }
#line 2539 "cplus.met"
        }
#line 2539 "cplus.met"
#line 2539 "cplus.met"
#line 2539 "cplus.met"
    }
#line 2539 "cplus.met"
#line 2541 "cplus.met"
    {
#line 2541 "cplus.met"
        _retValue = valTree ;
#line 2541 "cplus.met"
        goto arg_declarator_type_ret;
#line 2541 "cplus.met"
        
#line 2541 "cplus.met"
    }
#line 2541 "cplus.met"
#line 2541 "cplus.met"
#line 2541 "cplus.met"

#line 2542 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2542 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2542 "cplus.met"
return((PPTREE) 0);
#line 2542 "cplus.met"

#line 2542 "cplus.met"
arg_declarator_type_exit :
#line 2542 "cplus.met"

#line 2542 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2542 "cplus.met"
    _funcLevel--;
#line 2542 "cplus.met"
    return((PPTREE) -1) ;
#line 2542 "cplus.met"

#line 2542 "cplus.met"
arg_declarator_type_ret :
#line 2542 "cplus.met"
    
#line 2542 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2542 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2542 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2542 "cplus.met"
    return _retValue ;
#line 2542 "cplus.met"
}
#line 2542 "cplus.met"

#line 2542 "cplus.met"
#line 2220 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2220 "cplus.met"
{
#line 2220 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2220 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2220 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2220 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2220 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2220 "cplus.met"
#line 2220 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2220 "cplus.met"
#line 2222 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2222 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2222 "cplus.met"
        MulFreeTree(2,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2222 "cplus.met"
    } else {
#line 2222 "cplus.met"
        tokenAhead = 0 ;
#line 2222 "cplus.met"
    }
#line 2222 "cplus.met"
#line 2223 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 12, cplus)){
#line 2223 "cplus.met"
#line 2224 "cplus.met"
        {
#line 2224 "cplus.met"
            PPTREE _ptRes0=0;
#line 2224 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 3);
#line 2224 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2224 "cplus.met"
            retTree=_ptRes0;
#line 2224 "cplus.met"
        }
#line 2224 "cplus.met"
    } else {
#line 2224 "cplus.met"
#line 2226 "cplus.met"
        {
#line 2226 "cplus.met"
            PPTREE _ptRes0=0;
#line 2226 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 3);
#line 2226 "cplus.met"
            retTree=_ptRes0;
#line 2226 "cplus.met"
        }
#line 2226 "cplus.met"
    }
#line 2226 "cplus.met"
#line 2227 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2227 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2227 "cplus.met"
        MulFreeTree(2,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2227 "cplus.met"
    } else {
#line 2227 "cplus.met"
        tokenAhead = 0 ;
#line 2227 "cplus.met"
    }
#line 2227 "cplus.met"
#line 2228 "cplus.met"
    {
#line 2228 "cplus.met"
        _retValue = retTree ;
#line 2228 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2228 "cplus.met"
        
#line 2228 "cplus.met"
    }
#line 2228 "cplus.met"
#line 2228 "cplus.met"
#line 2228 "cplus.met"

#line 2229 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2229 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2229 "cplus.met"
return((PPTREE) 0);
#line 2229 "cplus.met"

#line 2229 "cplus.met"
arg_typ_declarator_exit :
#line 2229 "cplus.met"

#line 2229 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2229 "cplus.met"
    _funcLevel--;
#line 2229 "cplus.met"
    return((PPTREE) -1) ;
#line 2229 "cplus.met"

#line 2229 "cplus.met"
arg_typ_declarator_ret :
#line 2229 "cplus.met"
    
#line 2229 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2229 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2229 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2229 "cplus.met"
    return _retValue ;
#line 2229 "cplus.met"
}
#line 2229 "cplus.met"

#line 2229 "cplus.met"
#line 2453 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2453 "cplus.met"
{
#line 2453 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2453 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2453 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2453 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2453 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2453 "cplus.met"
#line 2453 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2453 "cplus.met"
#line 2453 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2453 "cplus.met"
#line 2455 "cplus.met"
     { int followed = 0;
#line 2455 "cplus.met"
#line 2456 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2456 "cplus.met"
#line 2457 "cplus.met"
         followed = 1;
#line 2457 "cplus.met"
    } else {
#line 2457 "cplus.met"
#line 2459 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus))== (PPTREE) -1 ) {
#line 2459 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2459 "cplus.met"
        }
#line 2459 "cplus.met"
    }
#line 2459 "cplus.met"
#line 2460 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2460 "cplus.met"
#line 2461 "cplus.met"
#line 2462 "cplus.met"
     {  int exit = 0 ; 
#line 2462 "cplus.met"
#line 2462 "cplus.met"
    _addlist1 = retTree ;
#line 2462 "cplus.met"
#line 2463 "cplus.met"
    while ( followed && !exit ) { 
#line 2463 "cplus.met"
#line 2464 "cplus.met"
#line 2465 "cplus.met"
         followed = 0;
#line 2465 "cplus.met"
#line 2466 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2466 "cplus.met"
#line 2467 "cplus.met"
#line 2468 "cplus.met"
             followed = 1;
#line 2468 "cplus.met"
#line 2469 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2469 "cplus.met"
#line 2469 "cplus.met"
            if (retTree){
#line 2469 "cplus.met"
#line 2469 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2469 "cplus.met"
            } else {
#line 2469 "cplus.met"
#line 2469 "cplus.met"
                retTree = _addlist1 ;
#line 2469 "cplus.met"
            }
#line 2469 "cplus.met"
#line 2469 "cplus.met"
#line 2469 "cplus.met"
        } else {
#line 2469 "cplus.met"
#line 2472 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2472 "cplus.met"
#line 2473 "cplus.met"
#line 2474 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2474 "cplus.met"
#line 2474 "cplus.met"
                if (retTree){
#line 2474 "cplus.met"
#line 2474 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2474 "cplus.met"
                } else {
#line 2474 "cplus.met"
#line 2474 "cplus.met"
                    retTree = _addlist1 ;
#line 2474 "cplus.met"
                }
#line 2474 "cplus.met"
#line 2474 "cplus.met"
#line 2474 "cplus.met"
            } else {
#line 2474 "cplus.met"
#line 2477 "cplus.met"
#line 2478 "cplus.met"
                {
#line 2478 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2478 "cplus.met"
                    {
#line 2478 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2478 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2478 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2478 "cplus.met"
                    }
#line 2478 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2478 "cplus.met"
                }
#line 2478 "cplus.met"
#line 2478 "cplus.met"
                if (retTree){
#line 2478 "cplus.met"
#line 2478 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2478 "cplus.met"
                } else {
#line 2478 "cplus.met"
#line 2478 "cplus.met"
                    retTree = _addlist1 ;
#line 2478 "cplus.met"
                }
#line 2478 "cplus.met"
#line 2479 "cplus.met"
                 exit = 1 ;
#line 2479 "cplus.met"
#line 2480 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2480 "cplus.met"
#line 2480 "cplus.met"
                }
#line 2480 "cplus.met"
#line 2480 "cplus.met"
            }
#line 2480 "cplus.met"
        }
#line 2480 "cplus.met"
#line 2480 "cplus.met"
    } 
#line 2480 "cplus.met"
#line 2484 "cplus.met"
    if ((! ( exit )) && 
#line 2484 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2484 "cplus.met"
#line 2485 "cplus.met"
        {
#line 2485 "cplus.met"
            PPTREE _ptTree0=0;
#line 2485 "cplus.met"
            {
#line 2485 "cplus.met"
                PPTREE _ptRes1=0;
#line 2485 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2485 "cplus.met"
                _ptTree0=_ptRes1;
#line 2485 "cplus.met"
            }
#line 2485 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2485 "cplus.met"
        }
#line 2485 "cplus.met"
#line 2485 "cplus.met"
    }
#line 2485 "cplus.met"
#line 2486 "cplus.met"
     } } 
#line 2486 "cplus.met"
#line 2486 "cplus.met"
#line 2488 "cplus.met"
    {
#line 2488 "cplus.met"
        _retValue = retTree ;
#line 2488 "cplus.met"
        goto arg_typ_list_ret;
#line 2488 "cplus.met"
        
#line 2488 "cplus.met"
    }
#line 2488 "cplus.met"
#line 2488 "cplus.met"
#line 2488 "cplus.met"

#line 2489 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2489 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2489 "cplus.met"
return((PPTREE) 0);
#line 2489 "cplus.met"

#line 2489 "cplus.met"
arg_typ_list_exit :
#line 2489 "cplus.met"

#line 2489 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2489 "cplus.met"
    _funcLevel--;
#line 2489 "cplus.met"
    return((PPTREE) -1) ;
#line 2489 "cplus.met"

#line 2489 "cplus.met"
arg_typ_list_ret :
#line 2489 "cplus.met"
    
#line 2489 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2489 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2489 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2489 "cplus.met"
    return _retValue ;
#line 2489 "cplus.met"
}
#line 2489 "cplus.met"

#line 2489 "cplus.met"
#line 1038 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 1038 "cplus.met"
{
#line 1038 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1038 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1038 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1038 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 1038 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1038 "cplus.met"
#line 1038 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1038 "cplus.met"
#line 1040 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1040 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 1040 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 1040 "cplus.met"
    } else {
#line 1040 "cplus.met"
        tokenAhead = 0 ;
#line 1040 "cplus.met"
    }
#line 1040 "cplus.met"
#line 1041 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1041 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1041 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 1041 "cplus.met"
    } else {
#line 1041 "cplus.met"
        tokenAhead = 0 ;
#line 1041 "cplus.met"
    }
#line 1041 "cplus.met"
#line 1042 "cplus.met"
    {
#line 1042 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1042 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 1042 "cplus.met"
        {
#line 1042 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1042 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1042 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1042 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1042 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 1042 "cplus.met"
            } else {
#line 1042 "cplus.met"
                tokenAhead = 0 ;
#line 1042 "cplus.met"
            }
#line 1042 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1042 "cplus.met"
            _ptTree0=_ptRes1;
#line 1042 "cplus.met"
        }
#line 1042 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1042 "cplus.met"
        retTree=_ptRes0;
#line 1042 "cplus.met"
    }
#line 1042 "cplus.met"
#line 1043 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1043 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1043 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 1043 "cplus.met"
    } else {
#line 1043 "cplus.met"
        tokenAhead = 0 ;
#line 1043 "cplus.met"
    }
#line 1043 "cplus.met"
#line 1044 "cplus.met"
    {
#line 1044 "cplus.met"
        _retValue = retTree ;
#line 1044 "cplus.met"
        goto asm_declaration_ret;
#line 1044 "cplus.met"
        
#line 1044 "cplus.met"
    }
#line 1044 "cplus.met"
#line 1044 "cplus.met"
#line 1044 "cplus.met"

#line 1045 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1045 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1045 "cplus.met"
return((PPTREE) 0);
#line 1045 "cplus.met"

#line 1045 "cplus.met"
asm_declaration_exit :
#line 1045 "cplus.met"

#line 1045 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 1045 "cplus.met"
    _funcLevel--;
#line 1045 "cplus.met"
    return((PPTREE) -1) ;
#line 1045 "cplus.met"

#line 1045 "cplus.met"
asm_declaration_ret :
#line 1045 "cplus.met"
    
#line 1045 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 1045 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1045 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1045 "cplus.met"
    return _retValue ;
#line 1045 "cplus.met"
}
#line 1045 "cplus.met"

#line 1045 "cplus.met"
#line 2589 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2589 "cplus.met"
{
#line 2589 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2589 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2589 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2589 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2589 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2589 "cplus.met"
#line 2590 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2590 "cplus.met"
    switch( lexEl.Value) {
#line 2590 "cplus.met"
#line 2591 "cplus.met"
        case EGAL : 
#line 2591 "cplus.met"
            tokenAhead = 0 ;
#line 2591 "cplus.met"
            CommTerm();
#line 2591 "cplus.met"
#line 2591 "cplus.met"
            {
#line 2591 "cplus.met"
                PPTREE _ptTree0=0;
#line 2591 "cplus.met"
                {
#line 2591 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2591 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2591 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2591 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2591 "cplus.met"
                    }
#line 2591 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2591 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2591 "cplus.met"
                }
#line 2591 "cplus.met"
                _retValue =_ptTree0;
#line 2591 "cplus.met"
                goto assignment_end_ret;
#line 2591 "cplus.met"
            }
#line 2591 "cplus.met"
            break;
#line 2591 "cplus.met"
#line 2592 "cplus.met"
        case ETOIEGAL : 
#line 2592 "cplus.met"
            tokenAhead = 0 ;
#line 2592 "cplus.met"
            CommTerm();
#line 2592 "cplus.met"
#line 2592 "cplus.met"
            {
#line 2592 "cplus.met"
                PPTREE _ptTree0=0;
#line 2592 "cplus.met"
                {
#line 2592 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2592 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2592 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2592 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2592 "cplus.met"
                    }
#line 2592 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2592 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2592 "cplus.met"
                }
#line 2592 "cplus.met"
                _retValue =_ptTree0;
#line 2592 "cplus.met"
                goto assignment_end_ret;
#line 2592 "cplus.met"
            }
#line 2592 "cplus.met"
            break;
#line 2592 "cplus.met"
#line 2593 "cplus.met"
        case META : 
#line 2593 "cplus.met"
        case SLASEGAL : 
#line 2593 "cplus.met"
            tokenAhead = 0 ;
#line 2593 "cplus.met"
            CommTerm();
#line 2593 "cplus.met"
#line 2593 "cplus.met"
            {
#line 2593 "cplus.met"
                PPTREE _ptTree0=0;
#line 2593 "cplus.met"
                {
#line 2593 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2593 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2593 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2593 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2593 "cplus.met"
                    }
#line 2593 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2593 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2593 "cplus.met"
                }
#line 2593 "cplus.met"
                _retValue =_ptTree0;
#line 2593 "cplus.met"
                goto assignment_end_ret;
#line 2593 "cplus.met"
            }
#line 2593 "cplus.met"
            break;
#line 2593 "cplus.met"
#line 2595 "cplus.met"
        case POURCEGAL : 
#line 2595 "cplus.met"
            tokenAhead = 0 ;
#line 2595 "cplus.met"
            CommTerm();
#line 2595 "cplus.met"
#line 2595 "cplus.met"
            {
#line 2595 "cplus.met"
                PPTREE _ptTree0=0;
#line 2595 "cplus.met"
                {
#line 2595 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2595 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2595 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2595 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2595 "cplus.met"
                    }
#line 2595 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2595 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2595 "cplus.met"
                }
#line 2595 "cplus.met"
                _retValue =_ptTree0;
#line 2595 "cplus.met"
                goto assignment_end_ret;
#line 2595 "cplus.met"
            }
#line 2595 "cplus.met"
            break;
#line 2595 "cplus.met"
#line 2596 "cplus.met"
        case PLUSEGAL : 
#line 2596 "cplus.met"
            tokenAhead = 0 ;
#line 2596 "cplus.met"
            CommTerm();
#line 2596 "cplus.met"
#line 2596 "cplus.met"
            {
#line 2596 "cplus.met"
                PPTREE _ptTree0=0;
#line 2596 "cplus.met"
                {
#line 2596 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2596 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2596 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2596 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2596 "cplus.met"
                    }
#line 2596 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2596 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2596 "cplus.met"
                }
#line 2596 "cplus.met"
                _retValue =_ptTree0;
#line 2596 "cplus.met"
                goto assignment_end_ret;
#line 2596 "cplus.met"
            }
#line 2596 "cplus.met"
            break;
#line 2596 "cplus.met"
#line 2597 "cplus.met"
        case TIREEGAL : 
#line 2597 "cplus.met"
            tokenAhead = 0 ;
#line 2597 "cplus.met"
            CommTerm();
#line 2597 "cplus.met"
#line 2597 "cplus.met"
            {
#line 2597 "cplus.met"
                PPTREE _ptTree0=0;
#line 2597 "cplus.met"
                {
#line 2597 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2597 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2597 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2597 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2597 "cplus.met"
                    }
#line 2597 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2597 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2597 "cplus.met"
                }
#line 2597 "cplus.met"
                _retValue =_ptTree0;
#line 2597 "cplus.met"
                goto assignment_end_ret;
#line 2597 "cplus.met"
            }
#line 2597 "cplus.met"
            break;
#line 2597 "cplus.met"
#line 2598 "cplus.met"
        case INFEINFEEGAL : 
#line 2598 "cplus.met"
            tokenAhead = 0 ;
#line 2598 "cplus.met"
            CommTerm();
#line 2598 "cplus.met"
#line 2598 "cplus.met"
            {
#line 2598 "cplus.met"
                PPTREE _ptTree0=0;
#line 2598 "cplus.met"
                {
#line 2598 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2598 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2598 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2598 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2598 "cplus.met"
                    }
#line 2598 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2598 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2598 "cplus.met"
                }
#line 2598 "cplus.met"
                _retValue =_ptTree0;
#line 2598 "cplus.met"
                goto assignment_end_ret;
#line 2598 "cplus.met"
            }
#line 2598 "cplus.met"
            break;
#line 2598 "cplus.met"
#line 2599 "cplus.met"
        case SUPESUPEEGAL : 
#line 2599 "cplus.met"
            tokenAhead = 0 ;
#line 2599 "cplus.met"
            CommTerm();
#line 2599 "cplus.met"
#line 2599 "cplus.met"
            {
#line 2599 "cplus.met"
                PPTREE _ptTree0=0;
#line 2599 "cplus.met"
                {
#line 2599 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2599 "cplus.met"
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2599 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2599 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2599 "cplus.met"
                    }
#line 2599 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2599 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2599 "cplus.met"
                }
#line 2599 "cplus.met"
                _retValue =_ptTree0;
#line 2599 "cplus.met"
                goto assignment_end_ret;
#line 2599 "cplus.met"
            }
#line 2599 "cplus.met"
            break;
#line 2599 "cplus.met"
#line 2600 "cplus.met"
        case ETCOEGAL : 
#line 2600 "cplus.met"
            tokenAhead = 0 ;
#line 2600 "cplus.met"
            CommTerm();
#line 2600 "cplus.met"
#line 2600 "cplus.met"
            {
#line 2600 "cplus.met"
                PPTREE _ptTree0=0;
#line 2600 "cplus.met"
                {
#line 2600 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2600 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2600 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2600 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2600 "cplus.met"
                    }
#line 2600 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2600 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2600 "cplus.met"
                }
#line 2600 "cplus.met"
                _retValue =_ptTree0;
#line 2600 "cplus.met"
                goto assignment_end_ret;
#line 2600 "cplus.met"
            }
#line 2600 "cplus.met"
            break;
#line 2600 "cplus.met"
#line 2601 "cplus.met"
        case VBAREGAL : 
#line 2601 "cplus.met"
            tokenAhead = 0 ;
#line 2601 "cplus.met"
            CommTerm();
#line 2601 "cplus.met"
#line 2601 "cplus.met"
            {
#line 2601 "cplus.met"
                PPTREE _ptTree0=0;
#line 2601 "cplus.met"
                {
#line 2601 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2601 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2601 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2601 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2601 "cplus.met"
                    }
#line 2601 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2601 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2601 "cplus.met"
                }
#line 2601 "cplus.met"
                _retValue =_ptTree0;
#line 2601 "cplus.met"
                goto assignment_end_ret;
#line 2601 "cplus.met"
            }
#line 2601 "cplus.met"
            break;
#line 2601 "cplus.met"
#line 2602 "cplus.met"
        case CHAPEGAL : 
#line 2602 "cplus.met"
            tokenAhead = 0 ;
#line 2602 "cplus.met"
            CommTerm();
#line 2602 "cplus.met"
#line 2602 "cplus.met"
            {
#line 2602 "cplus.met"
                PPTREE _ptTree0=0;
#line 2602 "cplus.met"
                {
#line 2602 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2602 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2602 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2602 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2602 "cplus.met"
                    }
#line 2602 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2602 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2602 "cplus.met"
                }
#line 2602 "cplus.met"
                _retValue =_ptTree0;
#line 2602 "cplus.met"
                goto assignment_end_ret;
#line 2602 "cplus.met"
            }
#line 2602 "cplus.met"
            break;
#line 2602 "cplus.met"
        default :
#line 2602 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2602 "cplus.met"
            break;
#line 2602 "cplus.met"
    }
#line 2602 "cplus.met"
#line 2602 "cplus.met"
#line 2603 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2603 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2603 "cplus.met"
return((PPTREE) 0);
#line 2603 "cplus.met"

#line 2603 "cplus.met"
assignment_end_exit :
#line 2603 "cplus.met"

#line 2603 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2603 "cplus.met"
    _funcLevel--;
#line 2603 "cplus.met"
    return((PPTREE) -1) ;
#line 2603 "cplus.met"

#line 2603 "cplus.met"
assignment_end_ret :
#line 2603 "cplus.met"
    
#line 2603 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2603 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2603 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2603 "cplus.met"
    return _retValue ;
#line 2603 "cplus.met"
}
#line 2603 "cplus.met"

#line 2603 "cplus.met"
#line 2606 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2606 "cplus.met"
{
#line 2606 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2606 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2606 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2606 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2606 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2606 "cplus.met"
#line 2606 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2606 "cplus.met"
#line 2608 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2608 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2608 "cplus.met"
    }
#line 2608 "cplus.met"
#line 2609 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 14, cplus)){
#line 2609 "cplus.met"
#line 2610 "cplus.met"
#line 2611 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2611 "cplus.met"
#line 2612 "cplus.met"
        expTree = expFollow ;
#line 2612 "cplus.met"
#line 2612 "cplus.met"
#line 2612 "cplus.met"
    }
#line 2612 "cplus.met"
#line 2614 "cplus.met"
    {
#line 2614 "cplus.met"
        _retValue = expTree ;
#line 2614 "cplus.met"
        goto assignment_expression_ret;
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
assignment_expression_exit :
#line 2615 "cplus.met"

#line 2615 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2615 "cplus.met"
    _funcLevel--;
#line 2615 "cplus.met"
    return((PPTREE) -1) ;
#line 2615 "cplus.met"

#line 2615 "cplus.met"
assignment_expression_ret :
#line 2615 "cplus.met"
    
#line 2615 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
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
#line 1898 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 1898 "cplus.met"
{
#line 1898 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1898 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1898 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1898 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 1898 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1898 "cplus.met"
#line 1898 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1898 "cplus.met"
#line 1898 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1898 "cplus.met"
#line 1898 "cplus.met"
    _addlist1 = list ;
#line 1898 "cplus.met"
#line 1900 "cplus.met"
    do {
#line 1900 "cplus.met"
#line 1901 "cplus.met"
        {
#line 1901 "cplus.met"
            PPTREE _ptTree0=0;
#line 1901 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1901 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 1901 "cplus.met"
            }
#line 1901 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1901 "cplus.met"
        }
#line 1901 "cplus.met"
#line 1901 "cplus.met"
        if (list){
#line 1901 "cplus.met"
#line 1901 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1901 "cplus.met"
        } else {
#line 1901 "cplus.met"
#line 1901 "cplus.met"
            list = _addlist1 ;
#line 1901 "cplus.met"
        }
#line 1901 "cplus.met"
#line 1901 "cplus.met"
#line 1902 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1902 "cplus.met"
#line 1903 "cplus.met"
    {
#line 1903 "cplus.met"
        PPTREE _ptTree0=0;
#line 1903 "cplus.met"
        {
#line 1903 "cplus.met"
            PPTREE _ptRes1=0;
#line 1903 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 1903 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 1903 "cplus.met"
            _ptTree0=_ptRes1;
#line 1903 "cplus.met"
        }
#line 1903 "cplus.met"
        _retValue =_ptTree0;
#line 1903 "cplus.met"
        goto base_specifier_ret;
#line 1903 "cplus.met"
    }
#line 1903 "cplus.met"
#line 1903 "cplus.met"
#line 1903 "cplus.met"

#line 1904 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1904 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1904 "cplus.met"
return((PPTREE) 0);
#line 1904 "cplus.met"

#line 1904 "cplus.met"
base_specifier_exit :
#line 1904 "cplus.met"

#line 1904 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 1904 "cplus.met"
    _funcLevel--;
#line 1904 "cplus.met"
    return((PPTREE) -1) ;
#line 1904 "cplus.met"

#line 1904 "cplus.met"
base_specifier_ret :
#line 1904 "cplus.met"
    
#line 1904 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 1904 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1904 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1904 "cplus.met"
    return _retValue ;
#line 1904 "cplus.met"
}
#line 1904 "cplus.met"

#line 1904 "cplus.met"
