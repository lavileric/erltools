/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2349 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2349 "cplus.met"
{
#line 2349 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2349 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2349 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2349 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2349 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2349 "cplus.met"
#line 2349 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2349 "cplus.met"
#line 2351 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 122, cplus)){
#line 2351 "cplus.met"
#line 2352 "cplus.met"
        {
#line 2352 "cplus.met"
            PPTREE _ptTree0=0;
#line 2352 "cplus.met"
            {
#line 2352 "cplus.met"
                PPTREE _ptTree1=0;
#line 2352 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2352 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2352 "cplus.met"
                }
#line 2352 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2352 "cplus.met"
            }
#line 2352 "cplus.met"
            _retValue =_ptTree0;
#line 2352 "cplus.met"
            goto abstract_declarator_ret;
#line 2352 "cplus.met"
        }
#line 2352 "cplus.met"
    }
#line 2352 "cplus.met"
#line 2353 "cplus.met"
    retTree = (PPTREE) 0;
#line 2353 "cplus.met"
#line 2354 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2354 "cplus.met"
    switch( lexEl.Value) {
#line 2354 "cplus.met"
#line 2355 "cplus.met"
        case ETOI : 
#line 2355 "cplus.met"
            tokenAhead = 0 ;
#line 2355 "cplus.met"
            CommTerm();
#line 2355 "cplus.met"
#line 2355 "cplus.met"
            {
#line 2355 "cplus.met"
                PPTREE _ptTree0=0;
#line 2355 "cplus.met"
                {
#line 2355 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2355 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2355 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2355 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2355 "cplus.met"
                    }
#line 2355 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2355 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2355 "cplus.met"
                }
#line 2355 "cplus.met"
                _retValue =_ptTree0;
#line 2355 "cplus.met"
                goto abstract_declarator_ret;
#line 2355 "cplus.met"
            }
#line 2355 "cplus.met"
            break;
#line 2355 "cplus.met"
#line 2356 "cplus.met"
        case ETCO : 
#line 2356 "cplus.met"
            tokenAhead = 0 ;
#line 2356 "cplus.met"
            CommTerm();
#line 2356 "cplus.met"
#line 2356 "cplus.met"
            {
#line 2356 "cplus.met"
                PPTREE _ptTree0=0;
#line 2356 "cplus.met"
                {
#line 2356 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2356 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2356 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2356 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2356 "cplus.met"
                    }
#line 2356 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2356 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2356 "cplus.met"
                }
#line 2356 "cplus.met"
                _retValue =_ptTree0;
#line 2356 "cplus.met"
                goto abstract_declarator_ret;
#line 2356 "cplus.met"
            }
#line 2356 "cplus.met"
            break;
#line 2356 "cplus.met"
#line 2357 "cplus.met"
        case TILD : 
#line 2357 "cplus.met"
            tokenAhead = 0 ;
#line 2357 "cplus.met"
            CommTerm();
#line 2357 "cplus.met"
#line 2357 "cplus.met"
            {
#line 2357 "cplus.met"
                PPTREE _ptTree0=0;
#line 2357 "cplus.met"
                {
#line 2357 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2357 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2357 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2357 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2357 "cplus.met"
                    }
#line 2357 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2357 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2357 "cplus.met"
                }
#line 2357 "cplus.met"
                _retValue =_ptTree0;
#line 2357 "cplus.met"
                goto abstract_declarator_ret;
#line 2357 "cplus.met"
            }
#line 2357 "cplus.met"
            break;
#line 2357 "cplus.met"
#line 2361 "cplus.met"
        case POUV : 
#line 2361 "cplus.met"
            tokenAhead = 0 ;
#line 2361 "cplus.met"
            CommTerm();
#line 2361 "cplus.met"
#line 2359 "cplus.met"
#line 2360 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2360 "cplus.met"
#line 2361 "cplus.met"
                
#line 2361 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2361 "cplus.met"
                goto abstract_declarator_exit;
#line 2361 "cplus.met"
#line 2361 "cplus.met"
            }
#line 2361 "cplus.met"
#line 2362 "cplus.met"
            {
#line 2362 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2362 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2362 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2362 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2362 "cplus.met"
                }
#line 2362 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2362 "cplus.met"
                retTree=_ptRes0;
#line 2362 "cplus.met"
            }
#line 2362 "cplus.met"
#line 2363 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2363 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2363 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2363 "cplus.met"
            } else {
#line 2363 "cplus.met"
                tokenAhead = 0 ;
#line 2363 "cplus.met"
            }
#line 2363 "cplus.met"
#line 2364 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2364 "cplus.met"
#line 2365 "cplus.met"
                                         { PPTREE theTree ;
#line 2365 "cplus.met"
                                    theTree = valTree ;
#line 2365 "cplus.met"
                                    if (theTree) {
#line 2365 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2365 "cplus.met"
                                     if (NumberTree(theTree)
#line 2365 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2365 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2365 "cplus.met"
                                     else
#line 2365 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2365 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2365 "cplus.met"
                                        /* modif portage sun */
#line 2365 "cplus.met"
                                        retTree = valTree;
#line 2365 "cplus.met"
                                    }
#line 2365 "cplus.met"
                                       }
#line 2365 "cplus.met"
                                
#line 2365 "cplus.met"
            }
#line 2365 "cplus.met"
#line 2365 "cplus.met"
            break;
#line 2365 "cplus.met"
#line 2382 "cplus.met"
        case META : 
#line 2382 "cplus.met"
        case IDENT : 
#line 2382 "cplus.met"
#line 2383 "cplus.met"
#line 2384 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2384 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2384 "cplus.met"
            }
#line 2384 "cplus.met"
#line 2385 "cplus.met"
            {
#line 2385 "cplus.met"
                PPTREE _ptTree0=0;
#line 2385 "cplus.met"
                {
#line 2385 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2385 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2385 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2385 "cplus.met"
                    }
#line 2385 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2385 "cplus.met"
                }
#line 2385 "cplus.met"
                _retValue =_ptTree0;
#line 2385 "cplus.met"
                goto abstract_declarator_ret;
#line 2385 "cplus.met"
            }
#line 2385 "cplus.met"
#line 2385 "cplus.met"
            break;
#line 2385 "cplus.met"
#line 2391 "cplus.met"
        default : 
#line 2391 "cplus.met"
#line 2390 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2390 "cplus.met"
#line 2392 "cplus.met"
                retTree = valTree ;
#line 2392 "cplus.met"
#line 2392 "cplus.met"
            }
#line 2392 "cplus.met"
            break;
#line 2392 "cplus.met"
    }
#line 2392 "cplus.met"
#line 2394 "cplus.met"
    {
#line 2394 "cplus.met"
        _retValue = retTree ;
#line 2394 "cplus.met"
        goto abstract_declarator_ret;
#line 2394 "cplus.met"
        
#line 2394 "cplus.met"
    }
#line 2394 "cplus.met"
#line 2394 "cplus.met"
#line 2394 "cplus.met"

#line 2395 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2395 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2395 "cplus.met"
return((PPTREE) 0);
#line 2395 "cplus.met"

#line 2395 "cplus.met"
abstract_declarator_exit :
#line 2395 "cplus.met"

#line 2395 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2395 "cplus.met"
    _funcLevel--;
#line 2395 "cplus.met"
    return((PPTREE) -1) ;
#line 2395 "cplus.met"

#line 2395 "cplus.met"
abstract_declarator_ret :
#line 2395 "cplus.met"
    
#line 2395 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2395 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2395 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2395 "cplus.met"
    return _retValue ;
#line 2395 "cplus.met"
}
#line 2395 "cplus.met"

#line 2395 "cplus.met"
#line 2701 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2701 "cplus.met"
{
#line 2701 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2701 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2701 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2701 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2701 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2701 "cplus.met"
#line 2701 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2701 "cplus.met"
#line 2703 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2703 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2703 "cplus.met"
    }
#line 2703 "cplus.met"
#line 2704 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2704 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2704 "cplus.met"
#line 2705 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2705 "cplus.met"
        switch( lexEl.Value) {
#line 2705 "cplus.met"
#line 2706 "cplus.met"
            case PLUS : 
#line 2706 "cplus.met"
                tokenAhead = 0 ;
#line 2706 "cplus.met"
                CommTerm();
#line 2706 "cplus.met"
#line 2706 "cplus.met"
                {
#line 2706 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2706 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2706 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2706 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2706 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2706 "cplus.met"
                    }
#line 2706 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2706 "cplus.met"
                    expTree=_ptRes0;
#line 2706 "cplus.met"
                }
#line 2706 "cplus.met"
                break;
#line 2706 "cplus.met"
#line 2707 "cplus.met"
            case TIRE : 
#line 2707 "cplus.met"
                tokenAhead = 0 ;
#line 2707 "cplus.met"
                CommTerm();
#line 2707 "cplus.met"
#line 2707 "cplus.met"
                {
#line 2707 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2707 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2707 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2707 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2707 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2707 "cplus.met"
                    }
#line 2707 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2707 "cplus.met"
                    expTree=_ptRes0;
#line 2707 "cplus.met"
                }
#line 2707 "cplus.met"
                break;
#line 2707 "cplus.met"
            default :
#line 2707 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2707 "cplus.met"
                break;
#line 2707 "cplus.met"
        }
#line 2707 "cplus.met"
    } 
#line 2707 "cplus.met"
#line 2709 "cplus.met"
    {
#line 2709 "cplus.met"
        _retValue = expTree ;
#line 2709 "cplus.met"
        goto additive_expression_ret;
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
additive_expression_exit :
#line 2710 "cplus.met"

#line 2710 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2710 "cplus.met"
    _funcLevel--;
#line 2710 "cplus.met"
    return((PPTREE) -1) ;
#line 2710 "cplus.met"

#line 2710 "cplus.met"
additive_expression_ret :
#line 2710 "cplus.met"
    
#line 2710 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
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
#line 2801 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2801 "cplus.met"
{
#line 2801 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2801 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2801 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2801 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2801 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2801 "cplus.met"
#line 2801 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2801 "cplus.met"
#line 2803 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2803 "cplus.met"
#line 2804 "cplus.met"
#line 2805 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2805 "cplus.met"
        switch( lexEl.Value) {
#line 2805 "cplus.met"
#line 2806 "cplus.met"
            case NEW : 
#line 2806 "cplus.met"
#line 2806 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2806 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2806 "cplus.met"
                }
#line 2806 "cplus.met"
                break;
#line 2806 "cplus.met"
#line 2807 "cplus.met"
            case DELETE : 
#line 2807 "cplus.met"
#line 2807 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2807 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2807 "cplus.met"
                }
#line 2807 "cplus.met"
                break;
#line 2807 "cplus.met"
            default :
#line 2807 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2807 "cplus.met"
                break;
#line 2807 "cplus.met"
        }
#line 2807 "cplus.met"
#line 2809 "cplus.met"
        {
#line 2809 "cplus.met"
            PPTREE _ptRes0=0;
#line 2809 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2809 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2809 "cplus.met"
            retTree=_ptRes0;
#line 2809 "cplus.met"
        }
#line 2809 "cplus.met"
#line 2809 "cplus.met"
#line 2809 "cplus.met"
    } else {
#line 2809 "cplus.met"
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
        retTree = valTree ;
#line 2817 "cplus.met"
#line 2817 "cplus.met"
    }
#line 2817 "cplus.met"
#line 2819 "cplus.met"
    {
#line 2819 "cplus.met"
        _retValue = retTree ;
#line 2819 "cplus.met"
        goto alloc_expression_ret;
#line 2819 "cplus.met"
        
#line 2819 "cplus.met"
    }
#line 2819 "cplus.met"
#line 2819 "cplus.met"
#line 2819 "cplus.met"

#line 2820 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2820 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2820 "cplus.met"
return((PPTREE) 0);
#line 2820 "cplus.met"

#line 2820 "cplus.met"
alloc_expression_exit :
#line 2820 "cplus.met"

#line 2820 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2820 "cplus.met"
    _funcLevel--;
#line 2820 "cplus.met"
    return((PPTREE) -1) ;
#line 2820 "cplus.met"

#line 2820 "cplus.met"
alloc_expression_ret :
#line 2820 "cplus.met"
    
#line 2820 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2820 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2820 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2820 "cplus.met"
    return _retValue ;
#line 2820 "cplus.met"
}
#line 2820 "cplus.met"

#line 2820 "cplus.met"
#line 2851 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2851 "cplus.met"
{
#line 2851 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2851 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2851 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2851 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2851 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2851 "cplus.met"
#line 2851 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2851 "cplus.met"
#line 2851 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2851 "cplus.met"
#line 2853 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2853 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2853 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2853 "cplus.met"
    } else {
#line 2853 "cplus.met"
        tokenAhead = 0 ;
#line 2853 "cplus.met"
    }
#line 2853 "cplus.met"
#line 2854 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 100, cplus))){
#line 2854 "cplus.met"
#line 2855 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2855 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2855 "cplus.met"
        }
#line 2855 "cplus.met"
    }
#line 2855 "cplus.met"
#line 2856 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2856 "cplus.met"
#line 2857 "cplus.met"
#line 2858 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2858 "cplus.met"
#line 2860 "cplus.met"
#line 2860 "cplus.met"
            _addlist1 = list ;
#line 2860 "cplus.met"
#line 2859 "cplus.met"
            do {
#line 2859 "cplus.met"
#line 2860 "cplus.met"
                {
#line 2860 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2860 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2860 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2860 "cplus.met"
                    }
#line 2860 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2860 "cplus.met"
                }
#line 2860 "cplus.met"
#line 2860 "cplus.met"
                if (list){
#line 2860 "cplus.met"
#line 2860 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2860 "cplus.met"
                } else {
#line 2860 "cplus.met"
#line 2860 "cplus.met"
                    list = _addlist1 ;
#line 2860 "cplus.met"
                }
#line 2860 "cplus.met"
#line 2860 "cplus.met"
#line 2861 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2861 "cplus.met"
        }
#line 2861 "cplus.met"
#line 2862 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2862 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2862 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2862 "cplus.met"
        } else {
#line 2862 "cplus.met"
            tokenAhead = 0 ;
#line 2862 "cplus.met"
        }
#line 2862 "cplus.met"
#line 2863 "cplus.met"
        {
#line 2863 "cplus.met"
            PPTREE _ptTree0=0;
#line 2863 "cplus.met"
            {
#line 2863 "cplus.met"
                PPTREE _ptRes1=0;
#line 2863 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 2863 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2863 "cplus.met"
                _ptTree0=_ptRes1;
#line 2863 "cplus.met"
            }
#line 2863 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2863 "cplus.met"
        }
#line 2863 "cplus.met"
#line 2863 "cplus.met"
#line 2863 "cplus.met"
    }
#line 2863 "cplus.met"
#line 2865 "cplus.met"
    {
#line 2865 "cplus.met"
        _retValue = retTree ;
#line 2865 "cplus.met"
        goto allocation_expression_ret;
#line 2865 "cplus.met"
        
#line 2865 "cplus.met"
    }
#line 2865 "cplus.met"
#line 2865 "cplus.met"
#line 2865 "cplus.met"

#line 2866 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2866 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2866 "cplus.met"
return((PPTREE) 0);
#line 2866 "cplus.met"

#line 2866 "cplus.met"
allocation_expression_exit :
#line 2866 "cplus.met"

#line 2866 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2866 "cplus.met"
    _funcLevel--;
#line 2866 "cplus.met"
    return((PPTREE) -1) ;
#line 2866 "cplus.met"

#line 2866 "cplus.met"
allocation_expression_ret :
#line 2866 "cplus.met"
    
#line 2866 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 2866 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2866 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2866 "cplus.met"
    return _retValue ;
#line 2866 "cplus.met"
}
#line 2866 "cplus.met"

#line 2866 "cplus.met"
#line 2655 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2655 "cplus.met"
{
#line 2655 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2655 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2655 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2655 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2655 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2655 "cplus.met"
#line 2655 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2655 "cplus.met"
#line 2657 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 58, cplus))== (PPTREE) -1 ) {
#line 2657 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2657 "cplus.met"
    }
#line 2657 "cplus.met"
#line 2658 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2658 "cplus.met"
#line 2659 "cplus.met"
        {
#line 2659 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2659 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2659 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2659 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 58, cplus))== (PPTREE) -1 ) {
#line 2659 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2659 "cplus.met"
            }
#line 2659 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2659 "cplus.met"
            expTree=_ptRes0;
#line 2659 "cplus.met"
        }
#line 2659 "cplus.met"
    } 
#line 2659 "cplus.met"
#line 2660 "cplus.met"
    {
#line 2660 "cplus.met"
        _retValue = expTree ;
#line 2660 "cplus.met"
        goto and_expression_ret;
#line 2660 "cplus.met"
        
#line 2660 "cplus.met"
    }
#line 2660 "cplus.met"
#line 2660 "cplus.met"
#line 2660 "cplus.met"

#line 2661 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2661 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2661 "cplus.met"
return((PPTREE) 0);
#line 2661 "cplus.met"

#line 2661 "cplus.met"
and_expression_exit :
#line 2661 "cplus.met"

#line 2661 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2661 "cplus.met"
    _funcLevel--;
#line 2661 "cplus.met"
    return((PPTREE) -1) ;
#line 2661 "cplus.met"

#line 2661 "cplus.met"
and_expression_ret :
#line 2661 "cplus.met"
    
#line 2661 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2661 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2661 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2661 "cplus.met"
    return _retValue ;
#line 2661 "cplus.met"
}
#line 2661 "cplus.met"

#line 2661 "cplus.met"
#line 2501 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2501 "cplus.met"
{
#line 2501 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2501 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2501 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2501 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2501 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2501 "cplus.met"
#line 2501 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2501 "cplus.met"
#line 2503 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2503 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2503 "cplus.met"
    }
#line 2503 "cplus.met"
#line 2504 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2504 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2504 "cplus.met"
#line 2505 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2505 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2505 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2505 "cplus.met"
        } else {
#line 2505 "cplus.met"
            tokenAhead = 0 ;
#line 2505 "cplus.met"
        }
#line 2505 "cplus.met"
    }
#line 2505 "cplus.met"
#line 2506 "cplus.met"
    {
#line 2506 "cplus.met"
        _retValue = retTree ;
#line 2506 "cplus.met"
        goto arg_declarator_ret;
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
arg_declarator_exit :
#line 2507 "cplus.met"

#line 2507 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2507 "cplus.met"
    _funcLevel--;
#line 2507 "cplus.met"
    return((PPTREE) -1) ;
#line 2507 "cplus.met"

#line 2507 "cplus.met"
arg_declarator_ret :
#line 2507 "cplus.met"
    
#line 2507 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
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
#line 2484 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2484 "cplus.met"
{
#line 2484 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2484 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2484 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2484 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2484 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2484 "cplus.met"
#line 2484 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2484 "cplus.met"
#line 2486 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 2486 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2486 "cplus.met"
    }
#line 2486 "cplus.met"
#line 2487 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 47, cplus)){
#line 2487 "cplus.met"
#line 2488 "cplus.met"
        {
#line 2488 "cplus.met"
            PPTREE _ptRes0=0;
#line 2488 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2488 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2488 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2488 "cplus.met"
            valTree=_ptRes0;
#line 2488 "cplus.met"
        }
#line 2488 "cplus.met"
    } else {
#line 2488 "cplus.met"
#line 2490 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2490 "cplus.met"
#line 2491 "cplus.met"
            {
#line 2491 "cplus.met"
                PPTREE _ptRes0=0;
#line 2491 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2491 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2491 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2491 "cplus.met"
                valTree=_ptRes0;
#line 2491 "cplus.met"
            }
#line 2491 "cplus.met"
        } else {
#line 2491 "cplus.met"
#line 2493 "cplus.met"
            valTree = retTree ;
#line 2493 "cplus.met"
        }
#line 2493 "cplus.met"
    }
#line 2493 "cplus.met"
#line 2494 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2494 "cplus.met"
#line 2495 "cplus.met"
#line 2496 "cplus.met"
        {
#line 2496 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2496 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2496 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2496 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2496 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2496 "cplus.met"
            }
#line 2496 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2496 "cplus.met"
            valTree=_ptRes0;
#line 2496 "cplus.met"
        }
#line 2496 "cplus.met"
#line 2496 "cplus.met"
#line 2496 "cplus.met"
    }
#line 2496 "cplus.met"
#line 2498 "cplus.met"
    {
#line 2498 "cplus.met"
        _retValue = valTree ;
#line 2498 "cplus.met"
        goto arg_declarator_base_ret;
#line 2498 "cplus.met"
        
#line 2498 "cplus.met"
    }
#line 2498 "cplus.met"
#line 2498 "cplus.met"
#line 2498 "cplus.met"

#line 2499 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2499 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2499 "cplus.met"
return((PPTREE) 0);
#line 2499 "cplus.met"

#line 2499 "cplus.met"
arg_declarator_base_exit :
#line 2499 "cplus.met"

#line 2499 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2499 "cplus.met"
    _funcLevel--;
#line 2499 "cplus.met"
    return((PPTREE) -1) ;
#line 2499 "cplus.met"

#line 2499 "cplus.met"
arg_declarator_base_ret :
#line 2499 "cplus.met"
    
#line 2499 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2499 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2499 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2499 "cplus.met"
    return _retValue ;
#line 2499 "cplus.met"
}
#line 2499 "cplus.met"

#line 2499 "cplus.met"
#line 2509 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2509 "cplus.met"
{
#line 2509 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2509 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2509 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2509 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
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
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2511 "cplus.met"
    }
#line 2511 "cplus.met"
#line 2512 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2512 "cplus.met"
#line 2513 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2513 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2513 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
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
        goto arg_declarator_followed_ret;
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
arg_declarator_followed_exit :
#line 2515 "cplus.met"

#line 2515 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2515 "cplus.met"
    _funcLevel--;
#line 2515 "cplus.met"
    return((PPTREE) -1) ;
#line 2515 "cplus.met"

#line 2515 "cplus.met"
arg_declarator_followed_ret :
#line 2515 "cplus.met"
    
#line 2515 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
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
#line 2517 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2517 "cplus.met"
{
#line 2517 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2517 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2517 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2517 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2517 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2517 "cplus.met"
#line 2517 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2517 "cplus.met"
#line 2519 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 2519 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2519 "cplus.met"
    }
#line 2519 "cplus.met"
#line 2520 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 47, cplus)){
#line 2520 "cplus.met"
#line 2521 "cplus.met"
        {
#line 2521 "cplus.met"
            PPTREE _ptRes0=0;
#line 2521 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2521 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2521 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2521 "cplus.met"
            valTree=_ptRes0;
#line 2521 "cplus.met"
        }
#line 2521 "cplus.met"
    } else {
#line 2521 "cplus.met"
#line 2523 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2523 "cplus.met"
#line 2524 "cplus.met"
            {
#line 2524 "cplus.met"
                PPTREE _ptRes0=0;
#line 2524 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2524 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2524 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2524 "cplus.met"
                valTree=_ptRes0;
#line 2524 "cplus.met"
            }
#line 2524 "cplus.met"
        } else {
#line 2524 "cplus.met"
#line 2526 "cplus.met"
            valTree = retTree ;
#line 2526 "cplus.met"
        }
#line 2526 "cplus.met"
    }
#line 2526 "cplus.met"
#line 2527 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2527 "cplus.met"
#line 2528 "cplus.met"
#line 2529 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 148, cplus)){
#line 2529 "cplus.met"
#line 2530 "cplus.met"
            {
#line 2530 "cplus.met"
                PPTREE _ptRes0=0;
#line 2530 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2530 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2530 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2530 "cplus.met"
                valTree=_ptRes0;
#line 2530 "cplus.met"
            }
#line 2530 "cplus.met"
        } else {
#line 2530 "cplus.met"
#line 2532 "cplus.met"
            {
#line 2532 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2532 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2532 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2532 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2532 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2532 "cplus.met"
                }
#line 2532 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2532 "cplus.met"
                valTree=_ptRes0;
#line 2532 "cplus.met"
            }
#line 2532 "cplus.met"
        }
#line 2532 "cplus.met"
#line 2532 "cplus.met"
#line 2532 "cplus.met"
    }
#line 2532 "cplus.met"
#line 2534 "cplus.met"
    {
#line 2534 "cplus.met"
        _retValue = valTree ;
#line 2534 "cplus.met"
        goto arg_declarator_type_ret;
#line 2534 "cplus.met"
        
#line 2534 "cplus.met"
    }
#line 2534 "cplus.met"
#line 2534 "cplus.met"
#line 2534 "cplus.met"

#line 2535 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2535 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2535 "cplus.met"
return((PPTREE) 0);
#line 2535 "cplus.met"

#line 2535 "cplus.met"
arg_declarator_type_exit :
#line 2535 "cplus.met"

#line 2535 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2535 "cplus.met"
    _funcLevel--;
#line 2535 "cplus.met"
    return((PPTREE) -1) ;
#line 2535 "cplus.met"

#line 2535 "cplus.met"
arg_declarator_type_ret :
#line 2535 "cplus.met"
    
#line 2535 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2535 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2535 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2535 "cplus.met"
    return _retValue ;
#line 2535 "cplus.met"
}
#line 2535 "cplus.met"

#line 2535 "cplus.met"
#line 2212 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2212 "cplus.met"
{
#line 2212 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2212 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2212 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2212 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2212 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2212 "cplus.met"
#line 2212 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2212 "cplus.met"
#line 2214 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2214 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2214 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2214 "cplus.met"
    } else {
#line 2214 "cplus.met"
        tokenAhead = 0 ;
#line 2214 "cplus.met"
    }
#line 2214 "cplus.met"
#line 2215 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 12, cplus)){
#line 2215 "cplus.met"
#line 2216 "cplus.met"
        {
#line 2216 "cplus.met"
            PPTREE _ptRes0=0;
#line 2216 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2216 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2216 "cplus.met"
            retTree=_ptRes0;
#line 2216 "cplus.met"
        }
#line 2216 "cplus.met"
    } else {
#line 2216 "cplus.met"
#line 2218 "cplus.met"
        {
#line 2218 "cplus.met"
            PPTREE _ptRes0=0;
#line 2218 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2218 "cplus.met"
            retTree=_ptRes0;
#line 2218 "cplus.met"
        }
#line 2218 "cplus.met"
    }
#line 2218 "cplus.met"
#line 2219 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2219 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2219 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2219 "cplus.met"
    } else {
#line 2219 "cplus.met"
        tokenAhead = 0 ;
#line 2219 "cplus.met"
    }
#line 2219 "cplus.met"
#line 2220 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 61, cplus)){
#line 2220 "cplus.met"
#line 2221 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2221 "cplus.met"
#line 2221 "cplus.met"
    }
#line 2221 "cplus.met"
#line 2222 "cplus.met"
    {
#line 2222 "cplus.met"
        _retValue = retTree ;
#line 2222 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2222 "cplus.met"
        
#line 2222 "cplus.met"
    }
#line 2222 "cplus.met"
#line 2222 "cplus.met"
#line 2222 "cplus.met"

#line 2223 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2223 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2223 "cplus.met"
return((PPTREE) 0);
#line 2223 "cplus.met"

#line 2223 "cplus.met"
arg_typ_declarator_exit :
#line 2223 "cplus.met"

#line 2223 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2223 "cplus.met"
    _funcLevel--;
#line 2223 "cplus.met"
    return((PPTREE) -1) ;
#line 2223 "cplus.met"

#line 2223 "cplus.met"
arg_typ_declarator_ret :
#line 2223 "cplus.met"
    
#line 2223 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2223 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2223 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2223 "cplus.met"
    return _retValue ;
#line 2223 "cplus.met"
}
#line 2223 "cplus.met"

#line 2223 "cplus.met"
#line 2446 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2446 "cplus.met"
{
#line 2446 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2446 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2446 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2446 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2446 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2446 "cplus.met"
#line 2446 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2446 "cplus.met"
#line 2446 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2446 "cplus.met"
#line 2448 "cplus.met"
     { int followed = 0;
#line 2448 "cplus.met"
#line 2449 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2449 "cplus.met"
#line 2450 "cplus.met"
         followed = 1;
#line 2450 "cplus.met"
    } else {
#line 2450 "cplus.met"
#line 2452 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus))== (PPTREE) -1 ) {
#line 2452 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2452 "cplus.met"
        }
#line 2452 "cplus.met"
    }
#line 2452 "cplus.met"
#line 2453 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2453 "cplus.met"
#line 2454 "cplus.met"
#line 2455 "cplus.met"
     {  int exit = 0 ; 
#line 2455 "cplus.met"
#line 2455 "cplus.met"
    _addlist1 = retTree ;
#line 2455 "cplus.met"
#line 2456 "cplus.met"
    while ( followed && !exit ) { 
#line 2456 "cplus.met"
#line 2457 "cplus.met"
#line 2458 "cplus.met"
         followed = 0;
#line 2458 "cplus.met"
#line 2459 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2459 "cplus.met"
#line 2460 "cplus.met"
#line 2461 "cplus.met"
             followed = 1;
#line 2461 "cplus.met"
#line 2462 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2462 "cplus.met"
#line 2462 "cplus.met"
            if (retTree){
#line 2462 "cplus.met"
#line 2462 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2462 "cplus.met"
            } else {
#line 2462 "cplus.met"
#line 2462 "cplus.met"
                retTree = _addlist1 ;
#line 2462 "cplus.met"
            }
#line 2462 "cplus.met"
#line 2462 "cplus.met"
#line 2462 "cplus.met"
        } else {
#line 2462 "cplus.met"
#line 2465 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2465 "cplus.met"
#line 2466 "cplus.met"
#line 2467 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2467 "cplus.met"
#line 2467 "cplus.met"
                if (retTree){
#line 2467 "cplus.met"
#line 2467 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2467 "cplus.met"
                } else {
#line 2467 "cplus.met"
#line 2467 "cplus.met"
                    retTree = _addlist1 ;
#line 2467 "cplus.met"
                }
#line 2467 "cplus.met"
#line 2467 "cplus.met"
#line 2467 "cplus.met"
            } else {
#line 2467 "cplus.met"
#line 2470 "cplus.met"
#line 2471 "cplus.met"
                {
#line 2471 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2471 "cplus.met"
                    {
#line 2471 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2471 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2471 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2471 "cplus.met"
                    }
#line 2471 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2471 "cplus.met"
                }
#line 2471 "cplus.met"
#line 2471 "cplus.met"
                if (retTree){
#line 2471 "cplus.met"
#line 2471 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2471 "cplus.met"
                } else {
#line 2471 "cplus.met"
#line 2471 "cplus.met"
                    retTree = _addlist1 ;
#line 2471 "cplus.met"
                }
#line 2471 "cplus.met"
#line 2472 "cplus.met"
                 exit = 1 ;
#line 2472 "cplus.met"
#line 2473 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2473 "cplus.met"
#line 2473 "cplus.met"
                }
#line 2473 "cplus.met"
#line 2473 "cplus.met"
            }
#line 2473 "cplus.met"
        }
#line 2473 "cplus.met"
#line 2473 "cplus.met"
    } 
#line 2473 "cplus.met"
#line 2477 "cplus.met"
    if ((! ( exit )) && 
#line 2477 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
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
            valTree =AddList(valTree , _ptTree0);
#line 2478 "cplus.met"
        }
#line 2478 "cplus.met"
#line 2478 "cplus.met"
    }
#line 2478 "cplus.met"
#line 2479 "cplus.met"
     } } 
#line 2479 "cplus.met"
#line 2479 "cplus.met"
#line 2481 "cplus.met"
    {
#line 2481 "cplus.met"
        _retValue = retTree ;
#line 2481 "cplus.met"
        goto arg_typ_list_ret;
#line 2481 "cplus.met"
        
#line 2481 "cplus.met"
    }
#line 2481 "cplus.met"
#line 2481 "cplus.met"
#line 2481 "cplus.met"

#line 2482 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2482 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2482 "cplus.met"
return((PPTREE) 0);
#line 2482 "cplus.met"

#line 2482 "cplus.met"
arg_typ_list_exit :
#line 2482 "cplus.met"

#line 2482 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2482 "cplus.met"
    _funcLevel--;
#line 2482 "cplus.met"
    return((PPTREE) -1) ;
#line 2482 "cplus.met"

#line 2482 "cplus.met"
arg_typ_list_ret :
#line 2482 "cplus.met"
    
#line 2482 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2482 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2482 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2482 "cplus.met"
    return _retValue ;
#line 2482 "cplus.met"
}
#line 2482 "cplus.met"

#line 2482 "cplus.met"
#line 2892 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 2892 "cplus.met"
{
#line 2892 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2892 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2892 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2892 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 2892 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2892 "cplus.met"
#line 2892 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2892 "cplus.met"
#line 2894 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 63, cplus)){
#line 2894 "cplus.met"
#line 2895 "cplus.met"
        {
#line 2895 "cplus.met"
            PPTREE _ptRes0=0;
#line 2895 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2895 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 2895 "cplus.met"
            expTree=_ptRes0;
#line 2895 "cplus.met"
        }
#line 2895 "cplus.met"
    } else {
#line 2895 "cplus.met"
#line 2897 "cplus.met"
        {
#line 2897 "cplus.met"
            PPTREE _ptRes0=0;
#line 2897 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 2897 "cplus.met"
            expTree=_ptRes0;
#line 2897 "cplus.met"
        }
#line 2897 "cplus.met"
    }
#line 2897 "cplus.met"
#line 2898 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2898 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2898 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 2898 "cplus.met"
    } else {
#line 2898 "cplus.met"
        tokenAhead = 0 ;
#line 2898 "cplus.met"
    }
#line 2898 "cplus.met"
#line 2899 "cplus.met"
    {
#line 2899 "cplus.met"
        _retValue = expTree ;
#line 2899 "cplus.met"
        goto array_expression_follow_ret;
#line 2899 "cplus.met"
        
#line 2899 "cplus.met"
    }
#line 2899 "cplus.met"
#line 2899 "cplus.met"
#line 2899 "cplus.met"

#line 2900 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2900 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2900 "cplus.met"
return((PPTREE) 0);
#line 2900 "cplus.met"

#line 2900 "cplus.met"
array_expression_follow_exit :
#line 2900 "cplus.met"

#line 2900 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 2900 "cplus.met"
    _funcLevel--;
#line 2900 "cplus.met"
    return((PPTREE) -1) ;
#line 2900 "cplus.met"

#line 2900 "cplus.met"
array_expression_follow_ret :
#line 2900 "cplus.met"
    
#line 2900 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 2900 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2900 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2900 "cplus.met"
    return _retValue ;
#line 2900 "cplus.met"
}
#line 2900 "cplus.met"

#line 2900 "cplus.met"
#line 2147 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2147 "cplus.met"
{
#line 2147 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2147 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2147 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2147 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2147 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2147 "cplus.met"
#line 2147 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2147 "cplus.met"
#line 2149 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2149 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2149 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2149 "cplus.met"
    } else {
#line 2149 "cplus.met"
        tokenAhead = 0 ;
#line 2149 "cplus.met"
    }
#line 2149 "cplus.met"
#line 2150 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2150 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2150 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2150 "cplus.met"
    } else {
#line 2150 "cplus.met"
        tokenAhead = 0 ;
#line 2150 "cplus.met"
    }
#line 2150 "cplus.met"
#line 2151 "cplus.met"
    {
#line 2151 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2151 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2151 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 2151 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2151 "cplus.met"
        }
#line 2151 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2151 "cplus.met"
        retTree=_ptRes0;
#line 2151 "cplus.met"
    }
#line 2151 "cplus.met"
#line 2152 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2152 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2152 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2152 "cplus.met"
    } else {
#line 2152 "cplus.met"
        tokenAhead = 0 ;
#line 2152 "cplus.met"
    }
#line 2152 "cplus.met"
#line 2153 "cplus.met"
    {
#line 2153 "cplus.met"
        _retValue = retTree ;
#line 2153 "cplus.met"
        goto asm_call_ret;
#line 2153 "cplus.met"
        
#line 2153 "cplus.met"
    }
#line 2153 "cplus.met"
#line 2153 "cplus.met"
#line 2153 "cplus.met"

#line 2154 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2154 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2154 "cplus.met"
return((PPTREE) 0);
#line 2154 "cplus.met"

#line 2154 "cplus.met"
asm_call_exit :
#line 2154 "cplus.met"

#line 2154 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2154 "cplus.met"
    _funcLevel--;
#line 2154 "cplus.met"
    return((PPTREE) -1) ;
#line 2154 "cplus.met"

#line 2154 "cplus.met"
asm_call_ret :
#line 2154 "cplus.met"
    
#line 2154 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2154 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2154 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2154 "cplus.met"
    return _retValue ;
#line 2154 "cplus.met"
}
#line 2154 "cplus.met"

#line 2154 "cplus.met"
#line 1008 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 1008 "cplus.met"
{
#line 1008 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1008 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1008 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1008 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 1008 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1008 "cplus.met"
#line 1008 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1008 "cplus.met"
#line 1010 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1010 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 1010 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 1010 "cplus.met"
    } else {
#line 1010 "cplus.met"
        tokenAhead = 0 ;
#line 1010 "cplus.met"
    }
#line 1010 "cplus.met"
#line 1011 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1011 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1011 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 1011 "cplus.met"
    } else {
#line 1011 "cplus.met"
        tokenAhead = 0 ;
#line 1011 "cplus.met"
    }
#line 1011 "cplus.met"
#line 1012 "cplus.met"
    {
#line 1012 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1012 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 1012 "cplus.met"
        {
#line 1012 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1012 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1012 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1012 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1012 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 1012 "cplus.met"
            } else {
#line 1012 "cplus.met"
                tokenAhead = 0 ;
#line 1012 "cplus.met"
            }
#line 1012 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1012 "cplus.met"
            _ptTree0=_ptRes1;
#line 1012 "cplus.met"
        }
#line 1012 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1012 "cplus.met"
        retTree=_ptRes0;
#line 1012 "cplus.met"
    }
#line 1012 "cplus.met"
#line 1013 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1013 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1013 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 1013 "cplus.met"
    } else {
#line 1013 "cplus.met"
        tokenAhead = 0 ;
#line 1013 "cplus.met"
    }
#line 1013 "cplus.met"
#line 1014 "cplus.met"
    {
#line 1014 "cplus.met"
        _retValue = retTree ;
#line 1014 "cplus.met"
        goto asm_declaration_ret;
#line 1014 "cplus.met"
        
#line 1014 "cplus.met"
    }
#line 1014 "cplus.met"
#line 1014 "cplus.met"
#line 1014 "cplus.met"

#line 1015 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1015 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1015 "cplus.met"
return((PPTREE) 0);
#line 1015 "cplus.met"

#line 1015 "cplus.met"
asm_declaration_exit :
#line 1015 "cplus.met"

#line 1015 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 1015 "cplus.met"
    _funcLevel--;
#line 1015 "cplus.met"
    return((PPTREE) -1) ;
#line 1015 "cplus.met"

#line 1015 "cplus.met"
asm_declaration_ret :
#line 1015 "cplus.met"
    
#line 1015 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 1015 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1015 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1015 "cplus.met"
    return _retValue ;
#line 1015 "cplus.met"
}
#line 1015 "cplus.met"

#line 1015 "cplus.met"
#line 2582 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2582 "cplus.met"
{
#line 2582 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2582 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2582 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2582 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2582 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2582 "cplus.met"
#line 2583 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2583 "cplus.met"
    switch( lexEl.Value) {
#line 2583 "cplus.met"
#line 2584 "cplus.met"
        case EGAL : 
#line 2584 "cplus.met"
            tokenAhead = 0 ;
#line 2584 "cplus.met"
            CommTerm();
#line 2584 "cplus.met"
#line 2584 "cplus.met"
            {
#line 2584 "cplus.met"
                PPTREE _ptTree0=0;
#line 2584 "cplus.met"
                {
#line 2584 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2584 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2584 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2584 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2584 "cplus.met"
                    }
#line 2584 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2584 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2584 "cplus.met"
                }
#line 2584 "cplus.met"
                _retValue =_ptTree0;
#line 2584 "cplus.met"
                goto assignment_end_ret;
#line 2584 "cplus.met"
            }
#line 2584 "cplus.met"
            break;
#line 2584 "cplus.met"
#line 2585 "cplus.met"
        case ETOIEGAL : 
#line 2585 "cplus.met"
            tokenAhead = 0 ;
#line 2585 "cplus.met"
            CommTerm();
#line 2585 "cplus.met"
#line 2585 "cplus.met"
            {
#line 2585 "cplus.met"
                PPTREE _ptTree0=0;
#line 2585 "cplus.met"
                {
#line 2585 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2585 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2585 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2585 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2585 "cplus.met"
                    }
#line 2585 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2585 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2585 "cplus.met"
                }
#line 2585 "cplus.met"
                _retValue =_ptTree0;
#line 2585 "cplus.met"
                goto assignment_end_ret;
#line 2585 "cplus.met"
            }
#line 2585 "cplus.met"
            break;
#line 2585 "cplus.met"
#line 2586 "cplus.met"
        case META : 
#line 2586 "cplus.met"
        case SLASEGAL : 
#line 2586 "cplus.met"
            tokenAhead = 0 ;
#line 2586 "cplus.met"
            CommTerm();
#line 2586 "cplus.met"
#line 2586 "cplus.met"
            {
#line 2586 "cplus.met"
                PPTREE _ptTree0=0;
#line 2586 "cplus.met"
                {
#line 2586 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2586 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2586 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2586 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2586 "cplus.met"
                    }
#line 2586 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2586 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2586 "cplus.met"
                }
#line 2586 "cplus.met"
                _retValue =_ptTree0;
#line 2586 "cplus.met"
                goto assignment_end_ret;
#line 2586 "cplus.met"
            }
#line 2586 "cplus.met"
            break;
#line 2586 "cplus.met"
#line 2587 "cplus.met"
        case POURCEGAL : 
#line 2587 "cplus.met"
            tokenAhead = 0 ;
#line 2587 "cplus.met"
            CommTerm();
#line 2587 "cplus.met"
#line 2587 "cplus.met"
            {
#line 2587 "cplus.met"
                PPTREE _ptTree0=0;
#line 2587 "cplus.met"
                {
#line 2587 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2587 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2587 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2587 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2587 "cplus.met"
                    }
#line 2587 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2587 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2587 "cplus.met"
                }
#line 2587 "cplus.met"
                _retValue =_ptTree0;
#line 2587 "cplus.met"
                goto assignment_end_ret;
#line 2587 "cplus.met"
            }
#line 2587 "cplus.met"
            break;
#line 2587 "cplus.met"
#line 2588 "cplus.met"
        case PLUSEGAL : 
#line 2588 "cplus.met"
            tokenAhead = 0 ;
#line 2588 "cplus.met"
            CommTerm();
#line 2588 "cplus.met"
#line 2588 "cplus.met"
            {
#line 2588 "cplus.met"
                PPTREE _ptTree0=0;
#line 2588 "cplus.met"
                {
#line 2588 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2588 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2588 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2588 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2588 "cplus.met"
                    }
#line 2588 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2588 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2588 "cplus.met"
                }
#line 2588 "cplus.met"
                _retValue =_ptTree0;
#line 2588 "cplus.met"
                goto assignment_end_ret;
#line 2588 "cplus.met"
            }
#line 2588 "cplus.met"
            break;
#line 2588 "cplus.met"
#line 2589 "cplus.met"
        case TIREEGAL : 
#line 2589 "cplus.met"
            tokenAhead = 0 ;
#line 2589 "cplus.met"
            CommTerm();
#line 2589 "cplus.met"
#line 2589 "cplus.met"
            {
#line 2589 "cplus.met"
                PPTREE _ptTree0=0;
#line 2589 "cplus.met"
                {
#line 2589 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2589 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2589 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2589 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2589 "cplus.met"
                    }
#line 2589 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2589 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2589 "cplus.met"
                }
#line 2589 "cplus.met"
                _retValue =_ptTree0;
#line 2589 "cplus.met"
                goto assignment_end_ret;
#line 2589 "cplus.met"
            }
#line 2589 "cplus.met"
            break;
#line 2589 "cplus.met"
#line 2590 "cplus.met"
        case INFEINFEEGAL : 
#line 2590 "cplus.met"
            tokenAhead = 0 ;
#line 2590 "cplus.met"
            CommTerm();
#line 2590 "cplus.met"
#line 2590 "cplus.met"
            {
#line 2590 "cplus.met"
                PPTREE _ptTree0=0;
#line 2590 "cplus.met"
                {
#line 2590 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2590 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2590 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 2590 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2590 "cplus.met"
                    }
#line 2590 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2590 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2590 "cplus.met"
                }
#line 2590 "cplus.met"
                _retValue =_ptTree0;
#line 2590 "cplus.met"
                goto assignment_end_ret;
#line 2590 "cplus.met"
            }
#line 2590 "cplus.met"
            break;
#line 2590 "cplus.met"
#line 2591 "cplus.met"
        case SUPESUPEEGAL : 
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
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2591 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
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
        case ETCOEGAL : 
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
                    _ptRes1= MakeTree(AND_AFF, 2);
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
        case VBAREGAL : 
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
                    _ptRes1= MakeTree(OR_AFF, 2);
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
        case CHAPEGAL : 
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
                    _ptRes1= MakeTree(XOR_AFF, 2);
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
        default :
#line 2594 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2594 "cplus.met"
            break;
#line 2594 "cplus.met"
    }
#line 2594 "cplus.met"
#line 2594 "cplus.met"
#line 2595 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2595 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2595 "cplus.met"
return((PPTREE) 0);
#line 2595 "cplus.met"

#line 2595 "cplus.met"
assignment_end_exit :
#line 2595 "cplus.met"

#line 2595 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2595 "cplus.met"
    _funcLevel--;
#line 2595 "cplus.met"
    return((PPTREE) -1) ;
#line 2595 "cplus.met"

#line 2595 "cplus.met"
assignment_end_ret :
#line 2595 "cplus.met"
    
#line 2595 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2595 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2595 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2595 "cplus.met"
    return _retValue ;
#line 2595 "cplus.met"
}
#line 2595 "cplus.met"

#line 2595 "cplus.met"
