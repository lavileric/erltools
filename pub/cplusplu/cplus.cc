/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2340 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2340 "cplus.met"
{
#line 2340 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2340 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2340 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2340 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2340 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2340 "cplus.met"
#line 2340 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2340 "cplus.met"
#line 2342 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2342 "cplus.met"
#line 2343 "cplus.met"
        {
#line 2343 "cplus.met"
            PPTREE _ptTree0=0;
#line 2343 "cplus.met"
            {
#line 2343 "cplus.met"
                PPTREE _ptTree1=0;
#line 2343 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2343 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2343 "cplus.met"
                }
#line 2343 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2343 "cplus.met"
            }
#line 2343 "cplus.met"
            _retValue =_ptTree0;
#line 2343 "cplus.met"
            goto abstract_declarator_ret;
#line 2343 "cplus.met"
        }
#line 2343 "cplus.met"
    }
#line 2343 "cplus.met"
#line 2344 "cplus.met"
    retTree = (PPTREE) 0;
#line 2344 "cplus.met"
#line 2345 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2345 "cplus.met"
    switch( lexEl.Value) {
#line 2345 "cplus.met"
#line 2346 "cplus.met"
        case ETOI : 
#line 2346 "cplus.met"
            tokenAhead = 0 ;
#line 2346 "cplus.met"
            CommTerm();
#line 2346 "cplus.met"
#line 2346 "cplus.met"
            {
#line 2346 "cplus.met"
                PPTREE _ptTree0=0;
#line 2346 "cplus.met"
                {
#line 2346 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2346 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2346 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2346 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2346 "cplus.met"
                    }
#line 2346 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2346 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2346 "cplus.met"
                }
#line 2346 "cplus.met"
                _retValue =_ptTree0;
#line 2346 "cplus.met"
                goto abstract_declarator_ret;
#line 2346 "cplus.met"
            }
#line 2346 "cplus.met"
            break;
#line 2346 "cplus.met"
#line 2347 "cplus.met"
        case ETCO : 
#line 2347 "cplus.met"
            tokenAhead = 0 ;
#line 2347 "cplus.met"
            CommTerm();
#line 2347 "cplus.met"
#line 2347 "cplus.met"
            {
#line 2347 "cplus.met"
                PPTREE _ptTree0=0;
#line 2347 "cplus.met"
                {
#line 2347 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2347 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2347 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2347 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2347 "cplus.met"
                    }
#line 2347 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2347 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2347 "cplus.met"
                }
#line 2347 "cplus.met"
                _retValue =_ptTree0;
#line 2347 "cplus.met"
                goto abstract_declarator_ret;
#line 2347 "cplus.met"
            }
#line 2347 "cplus.met"
            break;
#line 2347 "cplus.met"
#line 2348 "cplus.met"
        case TILD : 
#line 2348 "cplus.met"
            tokenAhead = 0 ;
#line 2348 "cplus.met"
            CommTerm();
#line 2348 "cplus.met"
#line 2348 "cplus.met"
            {
#line 2348 "cplus.met"
                PPTREE _ptTree0=0;
#line 2348 "cplus.met"
                {
#line 2348 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2348 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2348 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2348 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2348 "cplus.met"
                    }
#line 2348 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2348 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2348 "cplus.met"
                }
#line 2348 "cplus.met"
                _retValue =_ptTree0;
#line 2348 "cplus.met"
                goto abstract_declarator_ret;
#line 2348 "cplus.met"
            }
#line 2348 "cplus.met"
            break;
#line 2348 "cplus.met"
#line 2352 "cplus.met"
        case POUV : 
#line 2352 "cplus.met"
            tokenAhead = 0 ;
#line 2352 "cplus.met"
            CommTerm();
#line 2352 "cplus.met"
#line 2350 "cplus.met"
#line 2351 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2351 "cplus.met"
#line 2352 "cplus.met"
                
#line 2352 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2352 "cplus.met"
                goto abstract_declarator_exit;
#line 2352 "cplus.met"
#line 2352 "cplus.met"
            }
#line 2352 "cplus.met"
#line 2353 "cplus.met"
            {
#line 2353 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2353 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2353 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2353 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2353 "cplus.met"
                }
#line 2353 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2353 "cplus.met"
                retTree=_ptRes0;
#line 2353 "cplus.met"
            }
#line 2353 "cplus.met"
#line 2354 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2354 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2354 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2354 "cplus.met"
            } else {
#line 2354 "cplus.met"
                tokenAhead = 0 ;
#line 2354 "cplus.met"
            }
#line 2354 "cplus.met"
#line 2355 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2355 "cplus.met"
#line 2356 "cplus.met"
                                    { PPTREE theTree ;
#line 2356 "cplus.met"
                                      theTree = valTree ;
#line 2356 "cplus.met"
                                      if (theTree) {
#line 2356 "cplus.met"
                                          while (SonTree(theTree,1))
#line 2356 "cplus.met"
                                       if (NumberTree(theTree)
#line 2356 "cplus.met"
                                    	   != RANGE_MODIFIER)
#line 2356 "cplus.met"
                                           theTree = SonTree(theTree,1);
#line 2356 "cplus.met"
                                       else
#line 2356 "cplus.met"
                                           theTree = SonTree(theTree,2);
#line 2356 "cplus.met"
                                          ReplaceTree(theTree,1,retTree);
#line 2356 "cplus.met"
                                          /* modif portage sun */
#line 2356 "cplus.met"
                                          retTree = valTree;
#line 2356 "cplus.met"
                                      }
#line 2356 "cplus.met"
                                         }
#line 2356 "cplus.met"
                                
#line 2356 "cplus.met"
            }
#line 2356 "cplus.met"
#line 2356 "cplus.met"
            break;
#line 2356 "cplus.met"
#line 2373 "cplus.met"
        case META : 
#line 2373 "cplus.met"
        case IDENT : 
#line 2373 "cplus.met"
#line 2374 "cplus.met"
#line 2375 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2375 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2375 "cplus.met"
            }
#line 2375 "cplus.met"
#line 2376 "cplus.met"
            {
#line 2376 "cplus.met"
                PPTREE _ptTree0=0;
#line 2376 "cplus.met"
                {
#line 2376 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2376 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2376 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2376 "cplus.met"
                    }
#line 2376 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2376 "cplus.met"
                }
#line 2376 "cplus.met"
                _retValue =_ptTree0;
#line 2376 "cplus.met"
                goto abstract_declarator_ret;
#line 2376 "cplus.met"
            }
#line 2376 "cplus.met"
#line 2376 "cplus.met"
            break;
#line 2376 "cplus.met"
#line 2382 "cplus.met"
        default : 
#line 2382 "cplus.met"
#line 2381 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2381 "cplus.met"
#line 2383 "cplus.met"
                retTree = valTree ;
#line 2383 "cplus.met"
#line 2383 "cplus.met"
            }
#line 2383 "cplus.met"
            break;
#line 2383 "cplus.met"
    }
#line 2383 "cplus.met"
#line 2385 "cplus.met"
    {
#line 2385 "cplus.met"
        _retValue = retTree ;
#line 2385 "cplus.met"
        goto abstract_declarator_ret;
#line 2385 "cplus.met"
        
#line 2385 "cplus.met"
    }
#line 2385 "cplus.met"
#line 2385 "cplus.met"
#line 2385 "cplus.met"

#line 2386 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2386 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2386 "cplus.met"
return((PPTREE) 0);
#line 2386 "cplus.met"

#line 2386 "cplus.met"
abstract_declarator_exit :
#line 2386 "cplus.met"

#line 2386 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2386 "cplus.met"
    _funcLevel--;
#line 2386 "cplus.met"
    return((PPTREE) -1) ;
#line 2386 "cplus.met"

#line 2386 "cplus.met"
abstract_declarator_ret :
#line 2386 "cplus.met"
    
#line 2386 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2386 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2386 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2386 "cplus.met"
    return _retValue ;
#line 2386 "cplus.met"
}
#line 2386 "cplus.met"

#line 2386 "cplus.met"
#line 2693 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2693 "cplus.met"
{
#line 2693 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2693 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2693 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2693 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2693 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2693 "cplus.met"
#line 2693 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2693 "cplus.met"
#line 2695 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2695 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2695 "cplus.met"
    }
#line 2695 "cplus.met"
#line 2696 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2696 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2696 "cplus.met"
#line 2697 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2697 "cplus.met"
        switch( lexEl.Value) {
#line 2697 "cplus.met"
#line 2698 "cplus.met"
            case PLUS : 
#line 2698 "cplus.met"
                tokenAhead = 0 ;
#line 2698 "cplus.met"
                CommTerm();
#line 2698 "cplus.met"
#line 2698 "cplus.met"
                {
#line 2698 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2698 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2698 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2698 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2698 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2698 "cplus.met"
                    }
#line 2698 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2698 "cplus.met"
                    expTree=_ptRes0;
#line 2698 "cplus.met"
                }
#line 2698 "cplus.met"
                break;
#line 2698 "cplus.met"
#line 2700 "cplus.met"
            case TIRE : 
#line 2700 "cplus.met"
                tokenAhead = 0 ;
#line 2700 "cplus.met"
                CommTerm();
#line 2700 "cplus.met"
#line 2700 "cplus.met"
                {
#line 2700 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2700 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2700 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2700 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 2700 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2700 "cplus.met"
                    }
#line 2700 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2700 "cplus.met"
                    expTree=_ptRes0;
#line 2700 "cplus.met"
                }
#line 2700 "cplus.met"
                break;
#line 2700 "cplus.met"
            default :
#line 2700 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2700 "cplus.met"
                break;
#line 2700 "cplus.met"
        }
#line 2700 "cplus.met"
    } 
#line 2700 "cplus.met"
#line 2703 "cplus.met"
    {
#line 2703 "cplus.met"
        _retValue = expTree ;
#line 2703 "cplus.met"
        goto additive_expression_ret;
#line 2703 "cplus.met"
        
#line 2703 "cplus.met"
    }
#line 2703 "cplus.met"
#line 2703 "cplus.met"
#line 2703 "cplus.met"

#line 2704 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2704 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2704 "cplus.met"
return((PPTREE) 0);
#line 2704 "cplus.met"

#line 2704 "cplus.met"
additive_expression_exit :
#line 2704 "cplus.met"

#line 2704 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2704 "cplus.met"
    _funcLevel--;
#line 2704 "cplus.met"
    return((PPTREE) -1) ;
#line 2704 "cplus.met"

#line 2704 "cplus.met"
additive_expression_ret :
#line 2704 "cplus.met"
    
#line 2704 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2704 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2704 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2704 "cplus.met"
    return _retValue ;
#line 2704 "cplus.met"
}
#line 2704 "cplus.met"

#line 2704 "cplus.met"
#line 2797 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2797 "cplus.met"
{
#line 2797 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2797 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2797 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2797 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2797 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2797 "cplus.met"
#line 2797 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2797 "cplus.met"
#line 2799 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2799 "cplus.met"
#line 2800 "cplus.met"
#line 2801 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2801 "cplus.met"
        switch( lexEl.Value) {
#line 2801 "cplus.met"
#line 2802 "cplus.met"
            case NEW : 
#line 2802 "cplus.met"
#line 2802 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2802 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2802 "cplus.met"
                }
#line 2802 "cplus.met"
                break;
#line 2802 "cplus.met"
#line 2803 "cplus.met"
            case DELETE : 
#line 2803 "cplus.met"
#line 2803 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 43, cplus))== (PPTREE) -1 ) {
#line 2803 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2803 "cplus.met"
                }
#line 2803 "cplus.met"
                break;
#line 2803 "cplus.met"
            default :
#line 2803 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2803 "cplus.met"
                break;
#line 2803 "cplus.met"
        }
#line 2803 "cplus.met"
#line 2805 "cplus.met"
        {
#line 2805 "cplus.met"
            PPTREE _ptRes0=0;
#line 2805 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2805 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2805 "cplus.met"
            retTree=_ptRes0;
#line 2805 "cplus.met"
        }
#line 2805 "cplus.met"
#line 2805 "cplus.met"
#line 2805 "cplus.met"
    } else {
#line 2805 "cplus.met"
#line 2808 "cplus.met"
#line 2809 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2809 "cplus.met"
        switch( lexEl.Value) {
#line 2809 "cplus.met"
#line 2810 "cplus.met"
            case NEW : 
#line 2810 "cplus.met"
#line 2810 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2810 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2810 "cplus.met"
                }
#line 2810 "cplus.met"
                break;
#line 2810 "cplus.met"
#line 2811 "cplus.met"
            case DELETE : 
#line 2811 "cplus.met"
#line 2811 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 43, cplus))== (PPTREE) -1 ) {
#line 2811 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2811 "cplus.met"
                }
#line 2811 "cplus.met"
                break;
#line 2811 "cplus.met"
            default :
#line 2811 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2811 "cplus.met"
                break;
#line 2811 "cplus.met"
        }
#line 2811 "cplus.met"
#line 2813 "cplus.met"
        retTree = valTree ;
#line 2813 "cplus.met"
#line 2813 "cplus.met"
    }
#line 2813 "cplus.met"
#line 2815 "cplus.met"
    {
#line 2815 "cplus.met"
        _retValue = retTree ;
#line 2815 "cplus.met"
        goto alloc_expression_ret;
#line 2815 "cplus.met"
        
#line 2815 "cplus.met"
    }
#line 2815 "cplus.met"
#line 2815 "cplus.met"
#line 2815 "cplus.met"

#line 2816 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2816 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2816 "cplus.met"
return((PPTREE) 0);
#line 2816 "cplus.met"

#line 2816 "cplus.met"
alloc_expression_exit :
#line 2816 "cplus.met"

#line 2816 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2816 "cplus.met"
    _funcLevel--;
#line 2816 "cplus.met"
    return((PPTREE) -1) ;
#line 2816 "cplus.met"

#line 2816 "cplus.met"
alloc_expression_ret :
#line 2816 "cplus.met"
    
#line 2816 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2816 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2816 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2816 "cplus.met"
    return _retValue ;
#line 2816 "cplus.met"
}
#line 2816 "cplus.met"

#line 2816 "cplus.met"
#line 2847 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2847 "cplus.met"
{
#line 2847 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2847 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2847 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2847 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2847 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2847 "cplus.met"
#line 2847 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2847 "cplus.met"
#line 2847 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2847 "cplus.met"
#line 2849 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2849 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2849 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2849 "cplus.met"
    } else {
#line 2849 "cplus.met"
        tokenAhead = 0 ;
#line 2849 "cplus.met"
    }
#line 2849 "cplus.met"
#line 2850 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 96, cplus))){
#line 2850 "cplus.met"
#line 2851 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2851 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2851 "cplus.met"
        }
#line 2851 "cplus.met"
    }
#line 2851 "cplus.met"
#line 2852 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2852 "cplus.met"
#line 2853 "cplus.met"
#line 2854 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2854 "cplus.met"
#line 2856 "cplus.met"
#line 2856 "cplus.met"
            _addlist1 = list ;
#line 2856 "cplus.met"
#line 2855 "cplus.met"
            do {
#line 2855 "cplus.met"
#line 2856 "cplus.met"
                {
#line 2856 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2856 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 2856 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2856 "cplus.met"
                    }
#line 2856 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2856 "cplus.met"
                }
#line 2856 "cplus.met"
#line 2856 "cplus.met"
                if (list){
#line 2856 "cplus.met"
#line 2856 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2856 "cplus.met"
                } else {
#line 2856 "cplus.met"
#line 2856 "cplus.met"
                    list = _addlist1 ;
#line 2856 "cplus.met"
                }
#line 2856 "cplus.met"
#line 2856 "cplus.met"
#line 2857 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2857 "cplus.met"
        }
#line 2857 "cplus.met"
#line 2858 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2858 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2858 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2858 "cplus.met"
        } else {
#line 2858 "cplus.met"
            tokenAhead = 0 ;
#line 2858 "cplus.met"
        }
#line 2858 "cplus.met"
#line 2859 "cplus.met"
        {
#line 2859 "cplus.met"
            PPTREE _ptTree0=0;
#line 2859 "cplus.met"
            {
#line 2859 "cplus.met"
                PPTREE _ptRes1=0;
#line 2859 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 2859 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2859 "cplus.met"
                _ptTree0=_ptRes1;
#line 2859 "cplus.met"
            }
#line 2859 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2859 "cplus.met"
        }
#line 2859 "cplus.met"
#line 2859 "cplus.met"
#line 2859 "cplus.met"
    }
#line 2859 "cplus.met"
#line 2861 "cplus.met"
    {
#line 2861 "cplus.met"
        _retValue = retTree ;
#line 2861 "cplus.met"
        goto allocation_expression_ret;
#line 2861 "cplus.met"
        
#line 2861 "cplus.met"
    }
#line 2861 "cplus.met"
#line 2861 "cplus.met"
#line 2861 "cplus.met"

#line 2862 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2862 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2862 "cplus.met"
return((PPTREE) 0);
#line 2862 "cplus.met"

#line 2862 "cplus.met"
allocation_expression_exit :
#line 2862 "cplus.met"

#line 2862 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2862 "cplus.met"
    _funcLevel--;
#line 2862 "cplus.met"
    return((PPTREE) -1) ;
#line 2862 "cplus.met"

#line 2862 "cplus.met"
allocation_expression_ret :
#line 2862 "cplus.met"
    
#line 2862 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 2862 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2862 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2862 "cplus.met"
    return _retValue ;
#line 2862 "cplus.met"
}
#line 2862 "cplus.met"

#line 2862 "cplus.met"
#line 2643 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2643 "cplus.met"
{
#line 2643 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2643 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2643 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2643 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2643 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2643 "cplus.met"
#line 2643 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2643 "cplus.met"
#line 2645 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 2645 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2645 "cplus.met"
    }
#line 2645 "cplus.met"
#line 2646 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2646 "cplus.met"
#line 2647 "cplus.met"
        {
#line 2647 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2647 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2647 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2647 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 2647 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2647 "cplus.met"
            }
#line 2647 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2647 "cplus.met"
            expTree=_ptRes0;
#line 2647 "cplus.met"
        }
#line 2647 "cplus.met"
    } 
#line 2647 "cplus.met"
#line 2648 "cplus.met"
    {
#line 2648 "cplus.met"
        _retValue = expTree ;
#line 2648 "cplus.met"
        goto and_expression_ret;
#line 2648 "cplus.met"
        
#line 2648 "cplus.met"
    }
#line 2648 "cplus.met"
#line 2648 "cplus.met"
#line 2648 "cplus.met"

#line 2649 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2649 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2649 "cplus.met"
return((PPTREE) 0);
#line 2649 "cplus.met"

#line 2649 "cplus.met"
and_expression_exit :
#line 2649 "cplus.met"

#line 2649 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2649 "cplus.met"
    _funcLevel--;
#line 2649 "cplus.met"
    return((PPTREE) -1) ;
#line 2649 "cplus.met"

#line 2649 "cplus.met"
and_expression_ret :
#line 2649 "cplus.met"
    
#line 2649 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2649 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2649 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2649 "cplus.met"
    return _retValue ;
#line 2649 "cplus.met"
}
#line 2649 "cplus.met"

#line 2649 "cplus.met"
#line 2492 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2492 "cplus.met"
{
#line 2492 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2492 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2492 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2492 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2492 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2492 "cplus.met"
#line 2492 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2492 "cplus.met"
#line 2494 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2494 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2494 "cplus.met"
    }
#line 2494 "cplus.met"
#line 2495 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2495 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2495 "cplus.met"
#line 2496 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2496 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2496 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2496 "cplus.met"
        } else {
#line 2496 "cplus.met"
            tokenAhead = 0 ;
#line 2496 "cplus.met"
        }
#line 2496 "cplus.met"
    }
#line 2496 "cplus.met"
#line 2497 "cplus.met"
    {
#line 2497 "cplus.met"
        _retValue = retTree ;
#line 2497 "cplus.met"
        goto arg_declarator_ret;
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
arg_declarator_exit :
#line 2498 "cplus.met"

#line 2498 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2498 "cplus.met"
    _funcLevel--;
#line 2498 "cplus.met"
    return((PPTREE) -1) ;
#line 2498 "cplus.met"

#line 2498 "cplus.met"
arg_declarator_ret :
#line 2498 "cplus.met"
    
#line 2498 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
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
#line 2475 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2475 "cplus.met"
{
#line 2475 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2475 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2475 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2475 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2475 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2475 "cplus.met"
#line 2475 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2475 "cplus.met"
#line 2477 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2477 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2477 "cplus.met"
    }
#line 2477 "cplus.met"
#line 2478 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 2478 "cplus.met"
#line 2479 "cplus.met"
        {
#line 2479 "cplus.met"
            PPTREE _ptRes0=0;
#line 2479 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2479 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2479 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2479 "cplus.met"
            valTree=_ptRes0;
#line 2479 "cplus.met"
        }
#line 2479 "cplus.met"
    } else {
#line 2479 "cplus.met"
#line 2481 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2481 "cplus.met"
#line 2482 "cplus.met"
            {
#line 2482 "cplus.met"
                PPTREE _ptRes0=0;
#line 2482 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2482 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2482 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2482 "cplus.met"
                valTree=_ptRes0;
#line 2482 "cplus.met"
            }
#line 2482 "cplus.met"
        } else {
#line 2482 "cplus.met"
#line 2484 "cplus.met"
            valTree = retTree ;
#line 2484 "cplus.met"
        }
#line 2484 "cplus.met"
    }
#line 2484 "cplus.met"
#line 2485 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2485 "cplus.met"
#line 2486 "cplus.met"
#line 2487 "cplus.met"
        {
#line 2487 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2487 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2487 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2487 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2487 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2487 "cplus.met"
            }
#line 2487 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2487 "cplus.met"
            valTree=_ptRes0;
#line 2487 "cplus.met"
        }
#line 2487 "cplus.met"
#line 2487 "cplus.met"
#line 2487 "cplus.met"
    }
#line 2487 "cplus.met"
#line 2489 "cplus.met"
    {
#line 2489 "cplus.met"
        _retValue = valTree ;
#line 2489 "cplus.met"
        goto arg_declarator_base_ret;
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
arg_declarator_base_exit :
#line 2490 "cplus.met"

#line 2490 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2490 "cplus.met"
    _funcLevel--;
#line 2490 "cplus.met"
    return((PPTREE) -1) ;
#line 2490 "cplus.met"

#line 2490 "cplus.met"
arg_declarator_base_ret :
#line 2490 "cplus.met"
    
#line 2490 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
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
#line 2500 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2500 "cplus.met"
{
#line 2500 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2500 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2500 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2500 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2500 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2500 "cplus.met"
#line 2500 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2500 "cplus.met"
#line 2502 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2502 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2502 "cplus.met"
    }
#line 2502 "cplus.met"
#line 2503 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2503 "cplus.met"
#line 2504 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2504 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2504 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2504 "cplus.met"
        } else {
#line 2504 "cplus.met"
            tokenAhead = 0 ;
#line 2504 "cplus.met"
        }
#line 2504 "cplus.met"
    }
#line 2504 "cplus.met"
#line 2505 "cplus.met"
    {
#line 2505 "cplus.met"
        _retValue = retTree ;
#line 2505 "cplus.met"
        goto arg_declarator_followed_ret;
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
arg_declarator_followed_exit :
#line 2506 "cplus.met"

#line 2506 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2506 "cplus.met"
    _funcLevel--;
#line 2506 "cplus.met"
    return((PPTREE) -1) ;
#line 2506 "cplus.met"

#line 2506 "cplus.met"
arg_declarator_followed_ret :
#line 2506 "cplus.met"
    
#line 2506 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
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
#line 2508 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2508 "cplus.met"
{
#line 2508 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2508 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2508 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2508 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2508 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2508 "cplus.met"
#line 2508 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2508 "cplus.met"
#line 2510 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2510 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2510 "cplus.met"
    }
#line 2510 "cplus.met"
#line 2511 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 2511 "cplus.met"
#line 2512 "cplus.met"
        {
#line 2512 "cplus.met"
            PPTREE _ptRes0=0;
#line 2512 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2512 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2512 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2512 "cplus.met"
            valTree=_ptRes0;
#line 2512 "cplus.met"
        }
#line 2512 "cplus.met"
    } else {
#line 2512 "cplus.met"
#line 2514 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2514 "cplus.met"
#line 2515 "cplus.met"
            {
#line 2515 "cplus.met"
                PPTREE _ptRes0=0;
#line 2515 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2515 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2515 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2515 "cplus.met"
                valTree=_ptRes0;
#line 2515 "cplus.met"
            }
#line 2515 "cplus.met"
        } else {
#line 2515 "cplus.met"
#line 2517 "cplus.met"
            valTree = retTree ;
#line 2517 "cplus.met"
        }
#line 2517 "cplus.met"
    }
#line 2517 "cplus.met"
#line 2518 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2518 "cplus.met"
#line 2519 "cplus.met"
#line 2520 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 141, cplus)){
#line 2520 "cplus.met"
#line 2521 "cplus.met"
            {
#line 2521 "cplus.met"
                PPTREE _ptRes0=0;
#line 2521 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2521 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2521 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2521 "cplus.met"
                valTree=_ptRes0;
#line 2521 "cplus.met"
            }
#line 2521 "cplus.met"
        } else {
#line 2521 "cplus.met"
#line 2523 "cplus.met"
            {
#line 2523 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2523 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2523 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2523 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2523 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2523 "cplus.met"
                }
#line 2523 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2523 "cplus.met"
                valTree=_ptRes0;
#line 2523 "cplus.met"
            }
#line 2523 "cplus.met"
        }
#line 2523 "cplus.met"
#line 2523 "cplus.met"
#line 2523 "cplus.met"
    }
#line 2523 "cplus.met"
#line 2525 "cplus.met"
    {
#line 2525 "cplus.met"
        _retValue = valTree ;
#line 2525 "cplus.met"
        goto arg_declarator_type_ret;
#line 2525 "cplus.met"
        
#line 2525 "cplus.met"
    }
#line 2525 "cplus.met"
#line 2525 "cplus.met"
#line 2525 "cplus.met"

#line 2526 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2526 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2526 "cplus.met"
return((PPTREE) 0);
#line 2526 "cplus.met"

#line 2526 "cplus.met"
arg_declarator_type_exit :
#line 2526 "cplus.met"

#line 2526 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2526 "cplus.met"
    _funcLevel--;
#line 2526 "cplus.met"
    return((PPTREE) -1) ;
#line 2526 "cplus.met"

#line 2526 "cplus.met"
arg_declarator_type_ret :
#line 2526 "cplus.met"
    
#line 2526 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2526 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2526 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2526 "cplus.met"
    return _retValue ;
#line 2526 "cplus.met"
}
#line 2526 "cplus.met"

#line 2526 "cplus.met"
#line 2204 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2204 "cplus.met"
{
#line 2204 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2204 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2204 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2204 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2204 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2204 "cplus.met"
#line 2204 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2204 "cplus.met"
#line 2206 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2206 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2206 "cplus.met"
        MulFreeTree(2,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2206 "cplus.met"
    } else {
#line 2206 "cplus.met"
        tokenAhead = 0 ;
#line 2206 "cplus.met"
    }
#line 2206 "cplus.met"
#line 2207 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 12, cplus)){
#line 2207 "cplus.met"
#line 2208 "cplus.met"
        {
#line 2208 "cplus.met"
            PPTREE _ptRes0=0;
#line 2208 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 3);
#line 2208 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2208 "cplus.met"
            retTree=_ptRes0;
#line 2208 "cplus.met"
        }
#line 2208 "cplus.met"
    } else {
#line 2208 "cplus.met"
#line 2210 "cplus.met"
        {
#line 2210 "cplus.met"
            PPTREE _ptRes0=0;
#line 2210 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 3);
#line 2210 "cplus.met"
            retTree=_ptRes0;
#line 2210 "cplus.met"
        }
#line 2210 "cplus.met"
    }
#line 2210 "cplus.met"
#line 2211 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2211 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2211 "cplus.met"
        MulFreeTree(2,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2211 "cplus.met"
    } else {
#line 2211 "cplus.met"
        tokenAhead = 0 ;
#line 2211 "cplus.met"
    }
#line 2211 "cplus.met"
#line 2212 "cplus.met"
    {
#line 2212 "cplus.met"
        _retValue = retTree ;
#line 2212 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2212 "cplus.met"
        
#line 2212 "cplus.met"
    }
#line 2212 "cplus.met"
#line 2212 "cplus.met"
#line 2212 "cplus.met"

#line 2213 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2213 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2213 "cplus.met"
return((PPTREE) 0);
#line 2213 "cplus.met"

#line 2213 "cplus.met"
arg_typ_declarator_exit :
#line 2213 "cplus.met"

#line 2213 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2213 "cplus.met"
    _funcLevel--;
#line 2213 "cplus.met"
    return((PPTREE) -1) ;
#line 2213 "cplus.met"

#line 2213 "cplus.met"
arg_typ_declarator_ret :
#line 2213 "cplus.met"
    
#line 2213 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2213 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2213 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2213 "cplus.met"
    return _retValue ;
#line 2213 "cplus.met"
}
#line 2213 "cplus.met"

#line 2213 "cplus.met"
#line 2437 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2437 "cplus.met"
{
#line 2437 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2437 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2437 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2437 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2437 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2437 "cplus.met"
#line 2437 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2437 "cplus.met"
#line 2437 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2437 "cplus.met"
#line 2439 "cplus.met"
     { int followed = 0;
#line 2439 "cplus.met"
#line 2440 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2440 "cplus.met"
#line 2441 "cplus.met"
         followed = 1;
#line 2441 "cplus.met"
    } else {
#line 2441 "cplus.met"
#line 2443 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus))== (PPTREE) -1 ) {
#line 2443 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2443 "cplus.met"
        }
#line 2443 "cplus.met"
    }
#line 2443 "cplus.met"
#line 2444 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2444 "cplus.met"
#line 2445 "cplus.met"
#line 2446 "cplus.met"
     {  int exit = 0 ; 
#line 2446 "cplus.met"
#line 2446 "cplus.met"
    _addlist1 = retTree ;
#line 2446 "cplus.met"
#line 2447 "cplus.met"
    while ( followed && !exit ) { 
#line 2447 "cplus.met"
#line 2448 "cplus.met"
#line 2449 "cplus.met"
         followed = 0;
#line 2449 "cplus.met"
#line 2450 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2450 "cplus.met"
#line 2451 "cplus.met"
#line 2452 "cplus.met"
             followed = 1;
#line 2452 "cplus.met"
#line 2453 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2453 "cplus.met"
#line 2453 "cplus.met"
            if (retTree){
#line 2453 "cplus.met"
#line 2453 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2453 "cplus.met"
            } else {
#line 2453 "cplus.met"
#line 2453 "cplus.met"
                retTree = _addlist1 ;
#line 2453 "cplus.met"
            }
#line 2453 "cplus.met"
#line 2453 "cplus.met"
#line 2453 "cplus.met"
        } else {
#line 2453 "cplus.met"
#line 2456 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2456 "cplus.met"
#line 2457 "cplus.met"
#line 2458 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2458 "cplus.met"
#line 2458 "cplus.met"
                if (retTree){
#line 2458 "cplus.met"
#line 2458 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2458 "cplus.met"
                } else {
#line 2458 "cplus.met"
#line 2458 "cplus.met"
                    retTree = _addlist1 ;
#line 2458 "cplus.met"
                }
#line 2458 "cplus.met"
#line 2458 "cplus.met"
#line 2458 "cplus.met"
            } else {
#line 2458 "cplus.met"
#line 2461 "cplus.met"
#line 2462 "cplus.met"
                {
#line 2462 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2462 "cplus.met"
                    {
#line 2462 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2462 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2462 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2462 "cplus.met"
                    }
#line 2462 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2462 "cplus.met"
                }
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
#line 2463 "cplus.met"
                 exit = 1 ;
#line 2463 "cplus.met"
#line 2464 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2464 "cplus.met"
#line 2464 "cplus.met"
                }
#line 2464 "cplus.met"
#line 2464 "cplus.met"
            }
#line 2464 "cplus.met"
        }
#line 2464 "cplus.met"
#line 2464 "cplus.met"
    } 
#line 2464 "cplus.met"
#line 2468 "cplus.met"
    if ((! ( exit )) && 
#line 2468 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2468 "cplus.met"
#line 2469 "cplus.met"
        {
#line 2469 "cplus.met"
            PPTREE _ptTree0=0;
#line 2469 "cplus.met"
            {
#line 2469 "cplus.met"
                PPTREE _ptRes1=0;
#line 2469 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2469 "cplus.met"
                _ptTree0=_ptRes1;
#line 2469 "cplus.met"
            }
#line 2469 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2469 "cplus.met"
        }
#line 2469 "cplus.met"
#line 2469 "cplus.met"
    }
#line 2469 "cplus.met"
#line 2470 "cplus.met"
     } } 
#line 2470 "cplus.met"
#line 2470 "cplus.met"
#line 2472 "cplus.met"
    {
#line 2472 "cplus.met"
        _retValue = retTree ;
#line 2472 "cplus.met"
        goto arg_typ_list_ret;
#line 2472 "cplus.met"
        
#line 2472 "cplus.met"
    }
#line 2472 "cplus.met"
#line 2472 "cplus.met"
#line 2472 "cplus.met"

#line 2473 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2473 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2473 "cplus.met"
return((PPTREE) 0);
#line 2473 "cplus.met"

#line 2473 "cplus.met"
arg_typ_list_exit :
#line 2473 "cplus.met"

#line 2473 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2473 "cplus.met"
    _funcLevel--;
#line 2473 "cplus.met"
    return((PPTREE) -1) ;
#line 2473 "cplus.met"

#line 2473 "cplus.met"
arg_typ_list_ret :
#line 2473 "cplus.met"
    
#line 2473 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2473 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2473 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2473 "cplus.met"
    return _retValue ;
#line 2473 "cplus.met"
}
#line 2473 "cplus.met"

#line 2473 "cplus.met"
#line 1037 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 1037 "cplus.met"
{
#line 1037 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1037 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1037 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1037 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 1037 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1037 "cplus.met"
#line 1037 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1037 "cplus.met"
#line 1039 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1039 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 1039 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 1039 "cplus.met"
    } else {
#line 1039 "cplus.met"
        tokenAhead = 0 ;
#line 1039 "cplus.met"
    }
#line 1039 "cplus.met"
#line 1040 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1040 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1040 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 1040 "cplus.met"
    } else {
#line 1040 "cplus.met"
        tokenAhead = 0 ;
#line 1040 "cplus.met"
    }
#line 1040 "cplus.met"
#line 1041 "cplus.met"
    {
#line 1041 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1041 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 1041 "cplus.met"
        {
#line 1041 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1041 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1041 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1041 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1041 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 1041 "cplus.met"
            } else {
#line 1041 "cplus.met"
                tokenAhead = 0 ;
#line 1041 "cplus.met"
            }
#line 1041 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1041 "cplus.met"
            _ptTree0=_ptRes1;
#line 1041 "cplus.met"
        }
#line 1041 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1041 "cplus.met"
        retTree=_ptRes0;
#line 1041 "cplus.met"
    }
#line 1041 "cplus.met"
#line 1042 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1042 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1042 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 1042 "cplus.met"
    } else {
#line 1042 "cplus.met"
        tokenAhead = 0 ;
#line 1042 "cplus.met"
    }
#line 1042 "cplus.met"
#line 1043 "cplus.met"
    {
#line 1043 "cplus.met"
        _retValue = retTree ;
#line 1043 "cplus.met"
        goto asm_declaration_ret;
#line 1043 "cplus.met"
        
#line 1043 "cplus.met"
    }
#line 1043 "cplus.met"
#line 1043 "cplus.met"
#line 1043 "cplus.met"

#line 1044 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1044 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1044 "cplus.met"
return((PPTREE) 0);
#line 1044 "cplus.met"

#line 1044 "cplus.met"
asm_declaration_exit :
#line 1044 "cplus.met"

#line 1044 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 1044 "cplus.met"
    _funcLevel--;
#line 1044 "cplus.met"
    return((PPTREE) -1) ;
#line 1044 "cplus.met"

#line 1044 "cplus.met"
asm_declaration_ret :
#line 1044 "cplus.met"
    
#line 1044 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 1044 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1044 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1044 "cplus.met"
    return _retValue ;
#line 1044 "cplus.met"
}
#line 1044 "cplus.met"

#line 1044 "cplus.met"
#line 2569 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2569 "cplus.met"
{
#line 2569 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2569 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2569 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2569 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2569 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2569 "cplus.met"
#line 2570 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2570 "cplus.met"
    switch( lexEl.Value) {
#line 2570 "cplus.met"
#line 2571 "cplus.met"
        case EGAL : 
#line 2571 "cplus.met"
            tokenAhead = 0 ;
#line 2571 "cplus.met"
            CommTerm();
#line 2571 "cplus.met"
#line 2571 "cplus.met"
            {
#line 2571 "cplus.met"
                PPTREE _ptTree0=0;
#line 2571 "cplus.met"
                {
#line 2571 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2571 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2571 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2571 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2571 "cplus.met"
                    }
#line 2571 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2571 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2571 "cplus.met"
                }
#line 2571 "cplus.met"
                _retValue =_ptTree0;
#line 2571 "cplus.met"
                goto assignment_end_ret;
#line 2571 "cplus.met"
            }
#line 2571 "cplus.met"
            break;
#line 2571 "cplus.met"
#line 2572 "cplus.met"
        case ETOIEGAL : 
#line 2572 "cplus.met"
            tokenAhead = 0 ;
#line 2572 "cplus.met"
            CommTerm();
#line 2572 "cplus.met"
#line 2572 "cplus.met"
            {
#line 2572 "cplus.met"
                PPTREE _ptTree0=0;
#line 2572 "cplus.met"
                {
#line 2572 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2572 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2572 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2572 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2572 "cplus.met"
                    }
#line 2572 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2572 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2572 "cplus.met"
                }
#line 2572 "cplus.met"
                _retValue =_ptTree0;
#line 2572 "cplus.met"
                goto assignment_end_ret;
#line 2572 "cplus.met"
            }
#line 2572 "cplus.met"
            break;
#line 2572 "cplus.met"
#line 2573 "cplus.met"
        case META : 
#line 2573 "cplus.met"
        case SLASEGAL : 
#line 2573 "cplus.met"
            tokenAhead = 0 ;
#line 2573 "cplus.met"
            CommTerm();
#line 2573 "cplus.met"
#line 2573 "cplus.met"
            {
#line 2573 "cplus.met"
                PPTREE _ptTree0=0;
#line 2573 "cplus.met"
                {
#line 2573 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2573 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2573 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2573 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2573 "cplus.met"
                    }
#line 2573 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2573 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2573 "cplus.met"
                }
#line 2573 "cplus.met"
                _retValue =_ptTree0;
#line 2573 "cplus.met"
                goto assignment_end_ret;
#line 2573 "cplus.met"
            }
#line 2573 "cplus.met"
            break;
#line 2573 "cplus.met"
#line 2575 "cplus.met"
        case POURCEGAL : 
#line 2575 "cplus.met"
            tokenAhead = 0 ;
#line 2575 "cplus.met"
            CommTerm();
#line 2575 "cplus.met"
#line 2575 "cplus.met"
            {
#line 2575 "cplus.met"
                PPTREE _ptTree0=0;
#line 2575 "cplus.met"
                {
#line 2575 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2575 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2575 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2575 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2575 "cplus.met"
                    }
#line 2575 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2575 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2575 "cplus.met"
                }
#line 2575 "cplus.met"
                _retValue =_ptTree0;
#line 2575 "cplus.met"
                goto assignment_end_ret;
#line 2575 "cplus.met"
            }
#line 2575 "cplus.met"
            break;
#line 2575 "cplus.met"
#line 2576 "cplus.met"
        case PLUSEGAL : 
#line 2576 "cplus.met"
            tokenAhead = 0 ;
#line 2576 "cplus.met"
            CommTerm();
#line 2576 "cplus.met"
#line 2576 "cplus.met"
            {
#line 2576 "cplus.met"
                PPTREE _ptTree0=0;
#line 2576 "cplus.met"
                {
#line 2576 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2576 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2576 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2576 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2576 "cplus.met"
                    }
#line 2576 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2576 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2576 "cplus.met"
                }
#line 2576 "cplus.met"
                _retValue =_ptTree0;
#line 2576 "cplus.met"
                goto assignment_end_ret;
#line 2576 "cplus.met"
            }
#line 2576 "cplus.met"
            break;
#line 2576 "cplus.met"
#line 2577 "cplus.met"
        case TIREEGAL : 
#line 2577 "cplus.met"
            tokenAhead = 0 ;
#line 2577 "cplus.met"
            CommTerm();
#line 2577 "cplus.met"
#line 2577 "cplus.met"
            {
#line 2577 "cplus.met"
                PPTREE _ptTree0=0;
#line 2577 "cplus.met"
                {
#line 2577 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2577 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2577 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2577 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2577 "cplus.met"
                    }
#line 2577 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2577 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2577 "cplus.met"
                }
#line 2577 "cplus.met"
                _retValue =_ptTree0;
#line 2577 "cplus.met"
                goto assignment_end_ret;
#line 2577 "cplus.met"
            }
#line 2577 "cplus.met"
            break;
#line 2577 "cplus.met"
#line 2578 "cplus.met"
        case INFEINFEEGAL : 
#line 2578 "cplus.met"
            tokenAhead = 0 ;
#line 2578 "cplus.met"
            CommTerm();
#line 2578 "cplus.met"
#line 2578 "cplus.met"
            {
#line 2578 "cplus.met"
                PPTREE _ptTree0=0;
#line 2578 "cplus.met"
                {
#line 2578 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2578 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2578 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2578 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2578 "cplus.met"
                    }
#line 2578 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2578 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2578 "cplus.met"
                }
#line 2578 "cplus.met"
                _retValue =_ptTree0;
#line 2578 "cplus.met"
                goto assignment_end_ret;
#line 2578 "cplus.met"
            }
#line 2578 "cplus.met"
            break;
#line 2578 "cplus.met"
#line 2579 "cplus.met"
        case SUPESUPEEGAL : 
#line 2579 "cplus.met"
            tokenAhead = 0 ;
#line 2579 "cplus.met"
            CommTerm();
#line 2579 "cplus.met"
#line 2579 "cplus.met"
            {
#line 2579 "cplus.met"
                PPTREE _ptTree0=0;
#line 2579 "cplus.met"
                {
#line 2579 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2579 "cplus.met"
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2579 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2579 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2579 "cplus.met"
                    }
#line 2579 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2579 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2579 "cplus.met"
                }
#line 2579 "cplus.met"
                _retValue =_ptTree0;
#line 2579 "cplus.met"
                goto assignment_end_ret;
#line 2579 "cplus.met"
            }
#line 2579 "cplus.met"
            break;
#line 2579 "cplus.met"
#line 2580 "cplus.met"
        case ETCOEGAL : 
#line 2580 "cplus.met"
            tokenAhead = 0 ;
#line 2580 "cplus.met"
            CommTerm();
#line 2580 "cplus.met"
#line 2580 "cplus.met"
            {
#line 2580 "cplus.met"
                PPTREE _ptTree0=0;
#line 2580 "cplus.met"
                {
#line 2580 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2580 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2580 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2580 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2580 "cplus.met"
                    }
#line 2580 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2580 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2580 "cplus.met"
                }
#line 2580 "cplus.met"
                _retValue =_ptTree0;
#line 2580 "cplus.met"
                goto assignment_end_ret;
#line 2580 "cplus.met"
            }
#line 2580 "cplus.met"
            break;
#line 2580 "cplus.met"
#line 2581 "cplus.met"
        case VBAREGAL : 
#line 2581 "cplus.met"
            tokenAhead = 0 ;
#line 2581 "cplus.met"
            CommTerm();
#line 2581 "cplus.met"
#line 2581 "cplus.met"
            {
#line 2581 "cplus.met"
                PPTREE _ptTree0=0;
#line 2581 "cplus.met"
                {
#line 2581 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2581 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2581 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2581 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2581 "cplus.met"
                    }
#line 2581 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2581 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2581 "cplus.met"
                }
#line 2581 "cplus.met"
                _retValue =_ptTree0;
#line 2581 "cplus.met"
                goto assignment_end_ret;
#line 2581 "cplus.met"
            }
#line 2581 "cplus.met"
            break;
#line 2581 "cplus.met"
#line 2582 "cplus.met"
        case CHAPEGAL : 
#line 2582 "cplus.met"
            tokenAhead = 0 ;
#line 2582 "cplus.met"
            CommTerm();
#line 2582 "cplus.met"
#line 2582 "cplus.met"
            {
#line 2582 "cplus.met"
                PPTREE _ptTree0=0;
#line 2582 "cplus.met"
                {
#line 2582 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2582 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2582 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2582 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2582 "cplus.met"
                    }
#line 2582 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2582 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2582 "cplus.met"
                }
#line 2582 "cplus.met"
                _retValue =_ptTree0;
#line 2582 "cplus.met"
                goto assignment_end_ret;
#line 2582 "cplus.met"
            }
#line 2582 "cplus.met"
            break;
#line 2582 "cplus.met"
        default :
#line 2582 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2582 "cplus.met"
            break;
#line 2582 "cplus.met"
    }
#line 2582 "cplus.met"
#line 2582 "cplus.met"
#line 2583 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2583 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2583 "cplus.met"
return((PPTREE) 0);
#line 2583 "cplus.met"

#line 2583 "cplus.met"
assignment_end_exit :
#line 2583 "cplus.met"

#line 2583 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2583 "cplus.met"
    _funcLevel--;
#line 2583 "cplus.met"
    return((PPTREE) -1) ;
#line 2583 "cplus.met"

#line 2583 "cplus.met"
assignment_end_ret :
#line 2583 "cplus.met"
    
#line 2583 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2583 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2583 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2583 "cplus.met"
    return _retValue ;
#line 2583 "cplus.met"
}
#line 2583 "cplus.met"

#line 2583 "cplus.met"
#line 2586 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2586 "cplus.met"
{
#line 2586 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2586 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2586 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2586 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2586 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2586 "cplus.met"
#line 2586 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2586 "cplus.met"
#line 2588 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2588 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2588 "cplus.met"
    }
#line 2588 "cplus.met"
#line 2589 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 14, cplus)){
#line 2589 "cplus.met"
#line 2590 "cplus.met"
#line 2591 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2591 "cplus.met"
#line 2592 "cplus.met"
        expTree = expFollow ;
#line 2592 "cplus.met"
#line 2592 "cplus.met"
#line 2592 "cplus.met"
    }
#line 2592 "cplus.met"
#line 2594 "cplus.met"
    {
#line 2594 "cplus.met"
        _retValue = expTree ;
#line 2594 "cplus.met"
        goto assignment_expression_ret;
#line 2594 "cplus.met"
        
#line 2594 "cplus.met"
    }
#line 2594 "cplus.met"
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
assignment_expression_exit :
#line 2595 "cplus.met"

#line 2595 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2595 "cplus.met"
    _funcLevel--;
#line 2595 "cplus.met"
    return((PPTREE) -1) ;
#line 2595 "cplus.met"

#line 2595 "cplus.met"
assignment_expression_ret :
#line 2595 "cplus.met"
    
#line 2595 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
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
#line 1882 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 1882 "cplus.met"
{
#line 1882 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1882 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1882 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1882 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 1882 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1882 "cplus.met"
#line 1882 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1882 "cplus.met"
#line 1882 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1882 "cplus.met"
#line 1882 "cplus.met"
    _addlist1 = list ;
#line 1882 "cplus.met"
#line 1884 "cplus.met"
    do {
#line 1884 "cplus.met"
#line 1885 "cplus.met"
        {
#line 1885 "cplus.met"
            PPTREE _ptTree0=0;
#line 1885 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1885 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 1885 "cplus.met"
            }
#line 1885 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1885 "cplus.met"
        }
#line 1885 "cplus.met"
#line 1885 "cplus.met"
        if (list){
#line 1885 "cplus.met"
#line 1885 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1885 "cplus.met"
        } else {
#line 1885 "cplus.met"
#line 1885 "cplus.met"
            list = _addlist1 ;
#line 1885 "cplus.met"
        }
#line 1885 "cplus.met"
#line 1885 "cplus.met"
#line 1886 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1886 "cplus.met"
#line 1887 "cplus.met"
    {
#line 1887 "cplus.met"
        PPTREE _ptTree0=0;
#line 1887 "cplus.met"
        {
#line 1887 "cplus.met"
            PPTREE _ptRes1=0;
#line 1887 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 1887 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 1887 "cplus.met"
            _ptTree0=_ptRes1;
#line 1887 "cplus.met"
        }
#line 1887 "cplus.met"
        _retValue =_ptTree0;
#line 1887 "cplus.met"
        goto base_specifier_ret;
#line 1887 "cplus.met"
    }
#line 1887 "cplus.met"
#line 1887 "cplus.met"
#line 1887 "cplus.met"

#line 1888 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1888 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1888 "cplus.met"
return((PPTREE) 0);
#line 1888 "cplus.met"

#line 1888 "cplus.met"
base_specifier_exit :
#line 1888 "cplus.met"

#line 1888 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 1888 "cplus.met"
    _funcLevel--;
#line 1888 "cplus.met"
    return((PPTREE) -1) ;
#line 1888 "cplus.met"

#line 1888 "cplus.met"
base_specifier_ret :
#line 1888 "cplus.met"
    
#line 1888 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 1888 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1888 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1888 "cplus.met"
    return _retValue ;
#line 1888 "cplus.met"
}
#line 1888 "cplus.met"

#line 1888 "cplus.met"
