/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2357 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2357 "cplus.met"
{
#line 2357 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2357 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2357 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2357 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2357 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2357 "cplus.met"
#line 2357 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2357 "cplus.met"
#line 2359 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 122, cplus)){
#line 2359 "cplus.met"
#line 2360 "cplus.met"
        {
#line 2360 "cplus.met"
            PPTREE _ptTree0=0;
#line 2360 "cplus.met"
            {
#line 2360 "cplus.met"
                PPTREE _ptTree1=0;
#line 2360 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2360 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2360 "cplus.met"
                }
#line 2360 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2360 "cplus.met"
            }
#line 2360 "cplus.met"
            _retValue =_ptTree0;
#line 2360 "cplus.met"
            goto abstract_declarator_ret;
#line 2360 "cplus.met"
        }
#line 2360 "cplus.met"
    }
#line 2360 "cplus.met"
#line 2361 "cplus.met"
    retTree = (PPTREE) 0;
#line 2361 "cplus.met"
#line 2362 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2362 "cplus.met"
    switch( lexEl.Value) {
#line 2362 "cplus.met"
#line 2363 "cplus.met"
        case ETOI : 
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
                    _ptRes1= MakeTree(TYP_ADDR, 1);
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
        case ETCO : 
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
                    _ptRes1= MakeTree(TYP_REF, 1);
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
#line 2365 "cplus.met"
        case TILD : 
#line 2365 "cplus.met"
            tokenAhead = 0 ;
#line 2365 "cplus.met"
            CommTerm();
#line 2365 "cplus.met"
#line 2365 "cplus.met"
            {
#line 2365 "cplus.met"
                PPTREE _ptTree0=0;
#line 2365 "cplus.met"
                {
#line 2365 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2365 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2365 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2365 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2365 "cplus.met"
                    }
#line 2365 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2365 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2365 "cplus.met"
                }
#line 2365 "cplus.met"
                _retValue =_ptTree0;
#line 2365 "cplus.met"
                goto abstract_declarator_ret;
#line 2365 "cplus.met"
            }
#line 2365 "cplus.met"
            break;
#line 2365 "cplus.met"
#line 2369 "cplus.met"
        case POUV : 
#line 2369 "cplus.met"
            tokenAhead = 0 ;
#line 2369 "cplus.met"
            CommTerm();
#line 2369 "cplus.met"
#line 2367 "cplus.met"
#line 2368 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2368 "cplus.met"
#line 2369 "cplus.met"
                
#line 2369 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2369 "cplus.met"
                goto abstract_declarator_exit;
#line 2369 "cplus.met"
#line 2369 "cplus.met"
            }
#line 2369 "cplus.met"
#line 2370 "cplus.met"
            {
#line 2370 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2370 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2370 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2370 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2370 "cplus.met"
                }
#line 2370 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2370 "cplus.met"
                retTree=_ptRes0;
#line 2370 "cplus.met"
            }
#line 2370 "cplus.met"
#line 2371 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2371 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2371 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2371 "cplus.met"
            } else {
#line 2371 "cplus.met"
                tokenAhead = 0 ;
#line 2371 "cplus.met"
            }
#line 2371 "cplus.met"
#line 2372 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2372 "cplus.met"
#line 2373 "cplus.met"
                                         { PPTREE theTree ;
#line 2373 "cplus.met"
                                    theTree = valTree ;
#line 2373 "cplus.met"
                                    if (theTree) {
#line 2373 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2373 "cplus.met"
                                     if (NumberTree(theTree)
#line 2373 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2373 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2373 "cplus.met"
                                     else
#line 2373 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2373 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2373 "cplus.met"
                                        /* modif portage sun */
#line 2373 "cplus.met"
                                        retTree = valTree;
#line 2373 "cplus.met"
                                    }
#line 2373 "cplus.met"
                                       }
#line 2373 "cplus.met"
                                
#line 2373 "cplus.met"
            }
#line 2373 "cplus.met"
#line 2373 "cplus.met"
            break;
#line 2373 "cplus.met"
#line 2390 "cplus.met"
        case META : 
#line 2390 "cplus.met"
        case IDENT : 
#line 2390 "cplus.met"
#line 2391 "cplus.met"
#line 2392 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2392 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2392 "cplus.met"
            }
#line 2392 "cplus.met"
#line 2393 "cplus.met"
            {
#line 2393 "cplus.met"
                PPTREE _ptTree0=0;
#line 2393 "cplus.met"
                {
#line 2393 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2393 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2393 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2393 "cplus.met"
                    }
#line 2393 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2393 "cplus.met"
                }
#line 2393 "cplus.met"
                _retValue =_ptTree0;
#line 2393 "cplus.met"
                goto abstract_declarator_ret;
#line 2393 "cplus.met"
            }
#line 2393 "cplus.met"
#line 2393 "cplus.met"
            break;
#line 2393 "cplus.met"
#line 2399 "cplus.met"
        default : 
#line 2399 "cplus.met"
#line 2398 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2398 "cplus.met"
#line 2400 "cplus.met"
                retTree = valTree ;
#line 2400 "cplus.met"
#line 2400 "cplus.met"
            }
#line 2400 "cplus.met"
            break;
#line 2400 "cplus.met"
    }
#line 2400 "cplus.met"
#line 2402 "cplus.met"
    {
#line 2402 "cplus.met"
        _retValue = retTree ;
#line 2402 "cplus.met"
        goto abstract_declarator_ret;
#line 2402 "cplus.met"
        
#line 2402 "cplus.met"
    }
#line 2402 "cplus.met"
#line 2402 "cplus.met"
#line 2402 "cplus.met"

#line 2403 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2403 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2403 "cplus.met"
return((PPTREE) 0);
#line 2403 "cplus.met"

#line 2403 "cplus.met"
abstract_declarator_exit :
#line 2403 "cplus.met"

#line 2403 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2403 "cplus.met"
    _funcLevel--;
#line 2403 "cplus.met"
    return((PPTREE) -1) ;
#line 2403 "cplus.met"

#line 2403 "cplus.met"
abstract_declarator_ret :
#line 2403 "cplus.met"
    
#line 2403 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2403 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2403 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2403 "cplus.met"
    return _retValue ;
#line 2403 "cplus.met"
}
#line 2403 "cplus.met"

#line 2403 "cplus.met"
#line 2709 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2709 "cplus.met"
{
#line 2709 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2709 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2709 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2709 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2709 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2709 "cplus.met"
#line 2709 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2709 "cplus.met"
#line 2711 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2711 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2711 "cplus.met"
    }
#line 2711 "cplus.met"
#line 2712 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2712 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2712 "cplus.met"
#line 2713 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2713 "cplus.met"
        switch( lexEl.Value) {
#line 2713 "cplus.met"
#line 2714 "cplus.met"
            case PLUS : 
#line 2714 "cplus.met"
                tokenAhead = 0 ;
#line 2714 "cplus.met"
                CommTerm();
#line 2714 "cplus.met"
#line 2714 "cplus.met"
                {
#line 2714 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2714 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2714 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2714 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2714 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2714 "cplus.met"
                    }
#line 2714 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2714 "cplus.met"
                    expTree=_ptRes0;
#line 2714 "cplus.met"
                }
#line 2714 "cplus.met"
                break;
#line 2714 "cplus.met"
#line 2715 "cplus.met"
            case TIRE : 
#line 2715 "cplus.met"
                tokenAhead = 0 ;
#line 2715 "cplus.met"
                CommTerm();
#line 2715 "cplus.met"
#line 2715 "cplus.met"
                {
#line 2715 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2715 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2715 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2715 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2715 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2715 "cplus.met"
                    }
#line 2715 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2715 "cplus.met"
                    expTree=_ptRes0;
#line 2715 "cplus.met"
                }
#line 2715 "cplus.met"
                break;
#line 2715 "cplus.met"
            default :
#line 2715 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2715 "cplus.met"
                break;
#line 2715 "cplus.met"
        }
#line 2715 "cplus.met"
    } 
#line 2715 "cplus.met"
#line 2717 "cplus.met"
    {
#line 2717 "cplus.met"
        _retValue = expTree ;
#line 2717 "cplus.met"
        goto additive_expression_ret;
#line 2717 "cplus.met"
        
#line 2717 "cplus.met"
    }
#line 2717 "cplus.met"
#line 2717 "cplus.met"
#line 2717 "cplus.met"

#line 2718 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2718 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2718 "cplus.met"
return((PPTREE) 0);
#line 2718 "cplus.met"

#line 2718 "cplus.met"
additive_expression_exit :
#line 2718 "cplus.met"

#line 2718 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2718 "cplus.met"
    _funcLevel--;
#line 2718 "cplus.met"
    return((PPTREE) -1) ;
#line 2718 "cplus.met"

#line 2718 "cplus.met"
additive_expression_ret :
#line 2718 "cplus.met"
    
#line 2718 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2718 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2718 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2718 "cplus.met"
    return _retValue ;
#line 2718 "cplus.met"
}
#line 2718 "cplus.met"

#line 2718 "cplus.met"
#line 2809 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2809 "cplus.met"
{
#line 2809 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2809 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2809 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2809 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2809 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2809 "cplus.met"
#line 2809 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2809 "cplus.met"
#line 2811 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2811 "cplus.met"
#line 2812 "cplus.met"
#line 2813 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2813 "cplus.met"
        switch( lexEl.Value) {
#line 2813 "cplus.met"
#line 2814 "cplus.met"
            case NEW : 
#line 2814 "cplus.met"
#line 2814 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2814 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2814 "cplus.met"
                }
#line 2814 "cplus.met"
                break;
#line 2814 "cplus.met"
#line 2815 "cplus.met"
            case DELETE : 
#line 2815 "cplus.met"
#line 2815 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2815 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2815 "cplus.met"
                }
#line 2815 "cplus.met"
                break;
#line 2815 "cplus.met"
            default :
#line 2815 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2815 "cplus.met"
                break;
#line 2815 "cplus.met"
        }
#line 2815 "cplus.met"
#line 2817 "cplus.met"
        {
#line 2817 "cplus.met"
            PPTREE _ptRes0=0;
#line 2817 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2817 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2817 "cplus.met"
            retTree=_ptRes0;
#line 2817 "cplus.met"
        }
#line 2817 "cplus.met"
#line 2817 "cplus.met"
#line 2817 "cplus.met"
    } else {
#line 2817 "cplus.met"
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
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 46, cplus))== (PPTREE) -1 ) {
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
        retTree = valTree ;
#line 2825 "cplus.met"
#line 2825 "cplus.met"
    }
#line 2825 "cplus.met"
#line 2827 "cplus.met"
    {
#line 2827 "cplus.met"
        _retValue = retTree ;
#line 2827 "cplus.met"
        goto alloc_expression_ret;
#line 2827 "cplus.met"
        
#line 2827 "cplus.met"
    }
#line 2827 "cplus.met"
#line 2827 "cplus.met"
#line 2827 "cplus.met"

#line 2828 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2828 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2828 "cplus.met"
return((PPTREE) 0);
#line 2828 "cplus.met"

#line 2828 "cplus.met"
alloc_expression_exit :
#line 2828 "cplus.met"

#line 2828 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2828 "cplus.met"
    _funcLevel--;
#line 2828 "cplus.met"
    return((PPTREE) -1) ;
#line 2828 "cplus.met"

#line 2828 "cplus.met"
alloc_expression_ret :
#line 2828 "cplus.met"
    
#line 2828 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2828 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2828 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2828 "cplus.met"
    return _retValue ;
#line 2828 "cplus.met"
}
#line 2828 "cplus.met"

#line 2828 "cplus.met"
#line 2859 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2859 "cplus.met"
{
#line 2859 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2859 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2859 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2859 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2859 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2859 "cplus.met"
#line 2859 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2859 "cplus.met"
#line 2859 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2859 "cplus.met"
#line 2861 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2861 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2861 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2861 "cplus.met"
    } else {
#line 2861 "cplus.met"
        tokenAhead = 0 ;
#line 2861 "cplus.met"
    }
#line 2861 "cplus.met"
#line 2862 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 100, cplus))){
#line 2862 "cplus.met"
#line 2863 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2863 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2863 "cplus.met"
        }
#line 2863 "cplus.met"
    }
#line 2863 "cplus.met"
#line 2864 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2864 "cplus.met"
#line 2865 "cplus.met"
#line 2866 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2866 "cplus.met"
#line 2868 "cplus.met"
#line 2868 "cplus.met"
            _addlist1 = list ;
#line 2868 "cplus.met"
#line 2867 "cplus.met"
            do {
#line 2867 "cplus.met"
#line 2868 "cplus.met"
                {
#line 2868 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2868 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2868 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2868 "cplus.met"
                    }
#line 2868 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2868 "cplus.met"
                }
#line 2868 "cplus.met"
#line 2868 "cplus.met"
                if (list){
#line 2868 "cplus.met"
#line 2868 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2868 "cplus.met"
                } else {
#line 2868 "cplus.met"
#line 2868 "cplus.met"
                    list = _addlist1 ;
#line 2868 "cplus.met"
                }
#line 2868 "cplus.met"
#line 2868 "cplus.met"
#line 2869 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2869 "cplus.met"
        }
#line 2869 "cplus.met"
#line 2870 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2870 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2870 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2870 "cplus.met"
        } else {
#line 2870 "cplus.met"
            tokenAhead = 0 ;
#line 2870 "cplus.met"
        }
#line 2870 "cplus.met"
#line 2871 "cplus.met"
        {
#line 2871 "cplus.met"
            PPTREE _ptTree0=0;
#line 2871 "cplus.met"
            {
#line 2871 "cplus.met"
                PPTREE _ptRes1=0;
#line 2871 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 2871 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2871 "cplus.met"
                _ptTree0=_ptRes1;
#line 2871 "cplus.met"
            }
#line 2871 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2871 "cplus.met"
        }
#line 2871 "cplus.met"
#line 2871 "cplus.met"
#line 2871 "cplus.met"
    }
#line 2871 "cplus.met"
#line 2873 "cplus.met"
    {
#line 2873 "cplus.met"
        _retValue = retTree ;
#line 2873 "cplus.met"
        goto allocation_expression_ret;
#line 2873 "cplus.met"
        
#line 2873 "cplus.met"
    }
#line 2873 "cplus.met"
#line 2873 "cplus.met"
#line 2873 "cplus.met"

#line 2874 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2874 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2874 "cplus.met"
return((PPTREE) 0);
#line 2874 "cplus.met"

#line 2874 "cplus.met"
allocation_expression_exit :
#line 2874 "cplus.met"

#line 2874 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2874 "cplus.met"
    _funcLevel--;
#line 2874 "cplus.met"
    return((PPTREE) -1) ;
#line 2874 "cplus.met"

#line 2874 "cplus.met"
allocation_expression_ret :
#line 2874 "cplus.met"
    
#line 2874 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 2874 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2874 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2874 "cplus.met"
    return _retValue ;
#line 2874 "cplus.met"
}
#line 2874 "cplus.met"

#line 2874 "cplus.met"
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
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 58, cplus))== (PPTREE) -1 ) {
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 58, cplus))== (PPTREE) -1 ) {
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
#line 2509 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2509 "cplus.met"
{
#line 2509 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2509 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2509 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2509 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2509 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2509 "cplus.met"
#line 2509 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2509 "cplus.met"
#line 2511 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2511 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2511 "cplus.met"
    }
#line 2511 "cplus.met"
#line 2512 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2512 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2512 "cplus.met"
#line 2513 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2513 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2513 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2513 "cplus.met"
        } else {
#line 2513 "cplus.met"
            tokenAhead = 0 ;
#line 2513 "cplus.met"
        }
#line 2513 "cplus.met"
    }
#line 2513 "cplus.met"
#line 2514 "cplus.met"
    {
#line 2514 "cplus.met"
        _retValue = retTree ;
#line 2514 "cplus.met"
        goto arg_declarator_ret;
#line 2514 "cplus.met"
        
#line 2514 "cplus.met"
    }
#line 2514 "cplus.met"
#line 2514 "cplus.met"
#line 2514 "cplus.met"

#line 2515 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2515 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2515 "cplus.met"
return((PPTREE) 0);
#line 2515 "cplus.met"

#line 2515 "cplus.met"
arg_declarator_exit :
#line 2515 "cplus.met"

#line 2515 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2515 "cplus.met"
    _funcLevel--;
#line 2515 "cplus.met"
    return((PPTREE) -1) ;
#line 2515 "cplus.met"

#line 2515 "cplus.met"
arg_declarator_ret :
#line 2515 "cplus.met"
    
#line 2515 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2515 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2515 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2515 "cplus.met"
    return _retValue ;
#line 2515 "cplus.met"
}
#line 2515 "cplus.met"

#line 2515 "cplus.met"
#line 2492 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2492 "cplus.met"
{
#line 2492 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2492 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2492 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2492 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2492 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2492 "cplus.met"
#line 2492 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2492 "cplus.met"
#line 2494 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 2494 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2494 "cplus.met"
    }
#line 2494 "cplus.met"
#line 2495 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 47, cplus)){
#line 2495 "cplus.met"
#line 2496 "cplus.met"
        {
#line 2496 "cplus.met"
            PPTREE _ptRes0=0;
#line 2496 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2496 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2496 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2496 "cplus.met"
            valTree=_ptRes0;
#line 2496 "cplus.met"
        }
#line 2496 "cplus.met"
    } else {
#line 2496 "cplus.met"
#line 2498 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2498 "cplus.met"
#line 2499 "cplus.met"
            {
#line 2499 "cplus.met"
                PPTREE _ptRes0=0;
#line 2499 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2499 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2499 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2499 "cplus.met"
                valTree=_ptRes0;
#line 2499 "cplus.met"
            }
#line 2499 "cplus.met"
        } else {
#line 2499 "cplus.met"
#line 2501 "cplus.met"
            valTree = retTree ;
#line 2501 "cplus.met"
        }
#line 2501 "cplus.met"
    }
#line 2501 "cplus.met"
#line 2502 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2502 "cplus.met"
#line 2503 "cplus.met"
#line 2504 "cplus.met"
        {
#line 2504 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2504 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2504 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2504 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2504 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2504 "cplus.met"
            }
#line 2504 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2504 "cplus.met"
            valTree=_ptRes0;
#line 2504 "cplus.met"
        }
#line 2504 "cplus.met"
#line 2504 "cplus.met"
#line 2504 "cplus.met"
    }
#line 2504 "cplus.met"
#line 2506 "cplus.met"
    {
#line 2506 "cplus.met"
        _retValue = valTree ;
#line 2506 "cplus.met"
        goto arg_declarator_base_ret;
#line 2506 "cplus.met"
        
#line 2506 "cplus.met"
    }
#line 2506 "cplus.met"
#line 2506 "cplus.met"
#line 2506 "cplus.met"

#line 2507 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2507 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2507 "cplus.met"
return((PPTREE) 0);
#line 2507 "cplus.met"

#line 2507 "cplus.met"
arg_declarator_base_exit :
#line 2507 "cplus.met"

#line 2507 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2507 "cplus.met"
    _funcLevel--;
#line 2507 "cplus.met"
    return((PPTREE) -1) ;
#line 2507 "cplus.met"

#line 2507 "cplus.met"
arg_declarator_base_ret :
#line 2507 "cplus.met"
    
#line 2507 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2507 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2507 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2507 "cplus.met"
    return _retValue ;
#line 2507 "cplus.met"
}
#line 2507 "cplus.met"

#line 2507 "cplus.met"
#line 2517 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2517 "cplus.met"
{
#line 2517 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2517 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2517 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2517 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2517 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2517 "cplus.met"
#line 2517 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2517 "cplus.met"
#line 2519 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2519 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2519 "cplus.met"
    }
#line 2519 "cplus.met"
#line 2520 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2520 "cplus.met"
#line 2521 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2521 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2521 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2521 "cplus.met"
        } else {
#line 2521 "cplus.met"
            tokenAhead = 0 ;
#line 2521 "cplus.met"
        }
#line 2521 "cplus.met"
    }
#line 2521 "cplus.met"
#line 2522 "cplus.met"
    {
#line 2522 "cplus.met"
        _retValue = retTree ;
#line 2522 "cplus.met"
        goto arg_declarator_followed_ret;
#line 2522 "cplus.met"
        
#line 2522 "cplus.met"
    }
#line 2522 "cplus.met"
#line 2522 "cplus.met"
#line 2522 "cplus.met"

#line 2523 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2523 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2523 "cplus.met"
return((PPTREE) 0);
#line 2523 "cplus.met"

#line 2523 "cplus.met"
arg_declarator_followed_exit :
#line 2523 "cplus.met"

#line 2523 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2523 "cplus.met"
    _funcLevel--;
#line 2523 "cplus.met"
    return((PPTREE) -1) ;
#line 2523 "cplus.met"

#line 2523 "cplus.met"
arg_declarator_followed_ret :
#line 2523 "cplus.met"
    
#line 2523 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
#line 2523 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2523 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2523 "cplus.met"
    return _retValue ;
#line 2523 "cplus.met"
}
#line 2523 "cplus.met"

#line 2523 "cplus.met"
#line 2525 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2525 "cplus.met"
{
#line 2525 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2525 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2525 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2525 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2525 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2525 "cplus.met"
#line 2525 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2525 "cplus.met"
#line 2527 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 2527 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2527 "cplus.met"
    }
#line 2527 "cplus.met"
#line 2528 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 47, cplus)){
#line 2528 "cplus.met"
#line 2529 "cplus.met"
        {
#line 2529 "cplus.met"
            PPTREE _ptRes0=0;
#line 2529 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2529 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2529 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2529 "cplus.met"
            valTree=_ptRes0;
#line 2529 "cplus.met"
        }
#line 2529 "cplus.met"
    } else {
#line 2529 "cplus.met"
#line 2531 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2531 "cplus.met"
#line 2532 "cplus.met"
            {
#line 2532 "cplus.met"
                PPTREE _ptRes0=0;
#line 2532 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2532 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2532 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2532 "cplus.met"
                valTree=_ptRes0;
#line 2532 "cplus.met"
            }
#line 2532 "cplus.met"
        } else {
#line 2532 "cplus.met"
#line 2534 "cplus.met"
            valTree = retTree ;
#line 2534 "cplus.met"
        }
#line 2534 "cplus.met"
    }
#line 2534 "cplus.met"
#line 2535 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2535 "cplus.met"
#line 2536 "cplus.met"
#line 2537 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 148, cplus)){
#line 2537 "cplus.met"
#line 2538 "cplus.met"
            {
#line 2538 "cplus.met"
                PPTREE _ptRes0=0;
#line 2538 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2538 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2538 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2538 "cplus.met"
                valTree=_ptRes0;
#line 2538 "cplus.met"
            }
#line 2538 "cplus.met"
        } else {
#line 2538 "cplus.met"
#line 2540 "cplus.met"
            {
#line 2540 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2540 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2540 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2540 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2540 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2540 "cplus.met"
                }
#line 2540 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2540 "cplus.met"
                valTree=_ptRes0;
#line 2540 "cplus.met"
            }
#line 2540 "cplus.met"
        }
#line 2540 "cplus.met"
#line 2540 "cplus.met"
#line 2540 "cplus.met"
    }
#line 2540 "cplus.met"
#line 2542 "cplus.met"
    {
#line 2542 "cplus.met"
        _retValue = valTree ;
#line 2542 "cplus.met"
        goto arg_declarator_type_ret;
#line 2542 "cplus.met"
        
#line 2542 "cplus.met"
    }
#line 2542 "cplus.met"
#line 2542 "cplus.met"
#line 2542 "cplus.met"

#line 2543 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2543 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2543 "cplus.met"
return((PPTREE) 0);
#line 2543 "cplus.met"

#line 2543 "cplus.met"
arg_declarator_type_exit :
#line 2543 "cplus.met"

#line 2543 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2543 "cplus.met"
    _funcLevel--;
#line 2543 "cplus.met"
    return((PPTREE) -1) ;
#line 2543 "cplus.met"

#line 2543 "cplus.met"
arg_declarator_type_ret :
#line 2543 "cplus.met"
    
#line 2543 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2543 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2543 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2543 "cplus.met"
    return _retValue ;
#line 2543 "cplus.met"
}
#line 2543 "cplus.met"

#line 2543 "cplus.met"
#line 2211 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2211 "cplus.met"
{
#line 2211 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2211 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2211 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2211 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2211 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2211 "cplus.met"
#line 2211 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2211 "cplus.met"
#line 2213 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2213 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2213 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2213 "cplus.met"
    } else {
#line 2213 "cplus.met"
        tokenAhead = 0 ;
#line 2213 "cplus.met"
    }
#line 2213 "cplus.met"
#line 2214 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 12, cplus)){
#line 2214 "cplus.met"
#line 2215 "cplus.met"
        {
#line 2215 "cplus.met"
            PPTREE _ptRes0=0;
#line 2215 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2215 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2215 "cplus.met"
            retTree=_ptRes0;
#line 2215 "cplus.met"
        }
#line 2215 "cplus.met"
    } else {
#line 2215 "cplus.met"
#line 2217 "cplus.met"
        {
#line 2217 "cplus.met"
            PPTREE _ptRes0=0;
#line 2217 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2217 "cplus.met"
            retTree=_ptRes0;
#line 2217 "cplus.met"
        }
#line 2217 "cplus.met"
    }
#line 2217 "cplus.met"
#line 2218 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2218 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2218 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2218 "cplus.met"
    } else {
#line 2218 "cplus.met"
        tokenAhead = 0 ;
#line 2218 "cplus.met"
    }
#line 2218 "cplus.met"
#line 2219 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 61, cplus)){
#line 2219 "cplus.met"
#line 2220 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2220 "cplus.met"
#line 2220 "cplus.met"
    }
#line 2220 "cplus.met"
#line 2221 "cplus.met"
    {
#line 2221 "cplus.met"
        _retValue = retTree ;
#line 2221 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2221 "cplus.met"
        
#line 2221 "cplus.met"
    }
#line 2221 "cplus.met"
#line 2221 "cplus.met"
#line 2221 "cplus.met"

#line 2222 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2222 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2222 "cplus.met"
return((PPTREE) 0);
#line 2222 "cplus.met"

#line 2222 "cplus.met"
arg_typ_declarator_exit :
#line 2222 "cplus.met"

#line 2222 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2222 "cplus.met"
    _funcLevel--;
#line 2222 "cplus.met"
    return((PPTREE) -1) ;
#line 2222 "cplus.met"

#line 2222 "cplus.met"
arg_typ_declarator_ret :
#line 2222 "cplus.met"
    
#line 2222 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2222 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2222 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2222 "cplus.met"
    return _retValue ;
#line 2222 "cplus.met"
}
#line 2222 "cplus.met"

#line 2222 "cplus.met"
#line 2454 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2454 "cplus.met"
{
#line 2454 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2454 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2454 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2454 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2454 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2454 "cplus.met"
#line 2454 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2454 "cplus.met"
#line 2454 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2454 "cplus.met"
#line 2456 "cplus.met"
     { int followed = 0;
#line 2456 "cplus.met"
#line 2457 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2457 "cplus.met"
#line 2458 "cplus.met"
         followed = 1;
#line 2458 "cplus.met"
    } else {
#line 2458 "cplus.met"
#line 2460 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus))== (PPTREE) -1 ) {
#line 2460 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2460 "cplus.met"
        }
#line 2460 "cplus.met"
    }
#line 2460 "cplus.met"
#line 2461 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2461 "cplus.met"
#line 2462 "cplus.met"
#line 2463 "cplus.met"
     {  int exit = 0 ; 
#line 2463 "cplus.met"
#line 2463 "cplus.met"
    _addlist1 = retTree ;
#line 2463 "cplus.met"
#line 2464 "cplus.met"
    while ( followed && !exit ) { 
#line 2464 "cplus.met"
#line 2465 "cplus.met"
#line 2466 "cplus.met"
         followed = 0;
#line 2466 "cplus.met"
#line 2467 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2467 "cplus.met"
#line 2468 "cplus.met"
#line 2469 "cplus.met"
             followed = 1;
#line 2469 "cplus.met"
#line 2470 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2470 "cplus.met"
#line 2470 "cplus.met"
            if (retTree){
#line 2470 "cplus.met"
#line 2470 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2470 "cplus.met"
            } else {
#line 2470 "cplus.met"
#line 2470 "cplus.met"
                retTree = _addlist1 ;
#line 2470 "cplus.met"
            }
#line 2470 "cplus.met"
#line 2470 "cplus.met"
#line 2470 "cplus.met"
        } else {
#line 2470 "cplus.met"
#line 2473 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2473 "cplus.met"
#line 2474 "cplus.met"
#line 2475 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2475 "cplus.met"
#line 2475 "cplus.met"
                if (retTree){
#line 2475 "cplus.met"
#line 2475 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2475 "cplus.met"
                } else {
#line 2475 "cplus.met"
#line 2475 "cplus.met"
                    retTree = _addlist1 ;
#line 2475 "cplus.met"
                }
#line 2475 "cplus.met"
#line 2475 "cplus.met"
#line 2475 "cplus.met"
            } else {
#line 2475 "cplus.met"
#line 2478 "cplus.met"
#line 2479 "cplus.met"
                {
#line 2479 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2479 "cplus.met"
                    {
#line 2479 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2479 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2479 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2479 "cplus.met"
                    }
#line 2479 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2479 "cplus.met"
                }
#line 2479 "cplus.met"
#line 2479 "cplus.met"
                if (retTree){
#line 2479 "cplus.met"
#line 2479 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2479 "cplus.met"
                } else {
#line 2479 "cplus.met"
#line 2479 "cplus.met"
                    retTree = _addlist1 ;
#line 2479 "cplus.met"
                }
#line 2479 "cplus.met"
#line 2480 "cplus.met"
                 exit = 1 ;
#line 2480 "cplus.met"
#line 2481 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2481 "cplus.met"
#line 2481 "cplus.met"
                }
#line 2481 "cplus.met"
#line 2481 "cplus.met"
            }
#line 2481 "cplus.met"
        }
#line 2481 "cplus.met"
#line 2481 "cplus.met"
    } 
#line 2481 "cplus.met"
#line 2485 "cplus.met"
    if ((! ( exit )) && 
#line 2485 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2485 "cplus.met"
#line 2486 "cplus.met"
        {
#line 2486 "cplus.met"
            PPTREE _ptTree0=0;
#line 2486 "cplus.met"
            {
#line 2486 "cplus.met"
                PPTREE _ptRes1=0;
#line 2486 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2486 "cplus.met"
                _ptTree0=_ptRes1;
#line 2486 "cplus.met"
            }
#line 2486 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2486 "cplus.met"
        }
#line 2486 "cplus.met"
#line 2486 "cplus.met"
    }
#line 2486 "cplus.met"
#line 2487 "cplus.met"
     } } 
#line 2487 "cplus.met"
#line 2487 "cplus.met"
#line 2489 "cplus.met"
    {
#line 2489 "cplus.met"
        _retValue = retTree ;
#line 2489 "cplus.met"
        goto arg_typ_list_ret;
#line 2489 "cplus.met"
        
#line 2489 "cplus.met"
    }
#line 2489 "cplus.met"
#line 2489 "cplus.met"
#line 2489 "cplus.met"

#line 2490 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2490 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2490 "cplus.met"
return((PPTREE) 0);
#line 2490 "cplus.met"

#line 2490 "cplus.met"
arg_typ_list_exit :
#line 2490 "cplus.met"

#line 2490 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2490 "cplus.met"
    _funcLevel--;
#line 2490 "cplus.met"
    return((PPTREE) -1) ;
#line 2490 "cplus.met"

#line 2490 "cplus.met"
arg_typ_list_ret :
#line 2490 "cplus.met"
    
#line 2490 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2490 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2490 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2490 "cplus.met"
    return _retValue ;
#line 2490 "cplus.met"
}
#line 2490 "cplus.met"

#line 2490 "cplus.met"
#line 2900 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 2900 "cplus.met"
{
#line 2900 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2900 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2900 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2900 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 2900 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2900 "cplus.met"
#line 2900 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2900 "cplus.met"
#line 2902 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 63, cplus)){
#line 2902 "cplus.met"
#line 2903 "cplus.met"
        {
#line 2903 "cplus.met"
            PPTREE _ptRes0=0;
#line 2903 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2903 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 2903 "cplus.met"
            expTree=_ptRes0;
#line 2903 "cplus.met"
        }
#line 2903 "cplus.met"
    } else {
#line 2903 "cplus.met"
#line 2905 "cplus.met"
        {
#line 2905 "cplus.met"
            PPTREE _ptRes0=0;
#line 2905 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2905 "cplus.met"
            expTree=_ptRes0;
#line 2905 "cplus.met"
        }
#line 2905 "cplus.met"
    }
#line 2905 "cplus.met"
#line 2906 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2906 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2906 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 2906 "cplus.met"
    } else {
#line 2906 "cplus.met"
        tokenAhead = 0 ;
#line 2906 "cplus.met"
    }
#line 2906 "cplus.met"
#line 2907 "cplus.met"
    {
#line 2907 "cplus.met"
        _retValue = expTree ;
#line 2907 "cplus.met"
        goto array_expression_follow_ret;
#line 2907 "cplus.met"
        
#line 2907 "cplus.met"
    }
#line 2907 "cplus.met"
#line 2907 "cplus.met"
#line 2907 "cplus.met"

#line 2908 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2908 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2908 "cplus.met"
return((PPTREE) 0);
#line 2908 "cplus.met"

#line 2908 "cplus.met"
array_expression_follow_exit :
#line 2908 "cplus.met"

#line 2908 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 2908 "cplus.met"
    _funcLevel--;
#line 2908 "cplus.met"
    return((PPTREE) -1) ;
#line 2908 "cplus.met"

#line 2908 "cplus.met"
array_expression_follow_ret :
#line 2908 "cplus.met"
    
#line 2908 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 2908 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2908 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2908 "cplus.met"
    return _retValue ;
#line 2908 "cplus.met"
}
#line 2908 "cplus.met"

#line 2908 "cplus.met"
#line 2146 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2146 "cplus.met"
{
#line 2146 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2146 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2146 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2146 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2146 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2146 "cplus.met"
#line 2146 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2146 "cplus.met"
#line 2148 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2148 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2148 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2148 "cplus.met"
    } else {
#line 2148 "cplus.met"
        tokenAhead = 0 ;
#line 2148 "cplus.met"
    }
#line 2148 "cplus.met"
#line 2149 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2149 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2149 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2149 "cplus.met"
    } else {
#line 2149 "cplus.met"
        tokenAhead = 0 ;
#line 2149 "cplus.met"
    }
#line 2149 "cplus.met"
#line 2150 "cplus.met"
    {
#line 2150 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2150 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2150 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2150 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2150 "cplus.met"
        }
#line 2150 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2150 "cplus.met"
        retTree=_ptRes0;
#line 2150 "cplus.met"
    }
#line 2150 "cplus.met"
#line 2151 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2151 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2151 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2151 "cplus.met"
    } else {
#line 2151 "cplus.met"
        tokenAhead = 0 ;
#line 2151 "cplus.met"
    }
#line 2151 "cplus.met"
#line 2152 "cplus.met"
    {
#line 2152 "cplus.met"
        _retValue = retTree ;
#line 2152 "cplus.met"
        goto asm_call_ret;
#line 2152 "cplus.met"
        
#line 2152 "cplus.met"
    }
#line 2152 "cplus.met"
#line 2152 "cplus.met"
#line 2152 "cplus.met"

#line 2153 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2153 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2153 "cplus.met"
return((PPTREE) 0);
#line 2153 "cplus.met"

#line 2153 "cplus.met"
asm_call_exit :
#line 2153 "cplus.met"

#line 2153 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2153 "cplus.met"
    _funcLevel--;
#line 2153 "cplus.met"
    return((PPTREE) -1) ;
#line 2153 "cplus.met"

#line 2153 "cplus.met"
asm_call_ret :
#line 2153 "cplus.met"
    
#line 2153 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2153 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2153 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2153 "cplus.met"
    return _retValue ;
#line 2153 "cplus.met"
}
#line 2153 "cplus.met"

#line 2153 "cplus.met"
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
#line 2590 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2590 "cplus.met"
{
#line 2590 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2590 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2590 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2590 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2590 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2590 "cplus.met"
#line 2591 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2591 "cplus.met"
    switch( lexEl.Value) {
#line 2591 "cplus.met"
#line 2592 "cplus.met"
        case EGAL : 
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
                    _ptRes1= MakeTree(AFF, 2);
#line 2592 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
        case ETOIEGAL : 
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
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2593 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
#line 2594 "cplus.met"
        case META : 
#line 2594 "cplus.met"
        case SLASEGAL : 
#line 2594 "cplus.met"
            tokenAhead = 0 ;
#line 2594 "cplus.met"
            CommTerm();
#line 2594 "cplus.met"
#line 2594 "cplus.met"
            {
#line 2594 "cplus.met"
                PPTREE _ptTree0=0;
#line 2594 "cplus.met"
                {
#line 2594 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2594 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2594 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2594 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2594 "cplus.met"
                    }
#line 2594 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2594 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2594 "cplus.met"
                }
#line 2594 "cplus.met"
                _retValue =_ptTree0;
#line 2594 "cplus.met"
                goto assignment_end_ret;
#line 2594 "cplus.met"
            }
#line 2594 "cplus.met"
            break;
#line 2594 "cplus.met"
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
