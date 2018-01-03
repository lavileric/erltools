/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2316 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2316 "cplus.met"
{
#line 2316 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2316 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2316 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2316 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2316 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2316 "cplus.met"
#line 2316 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2316 "cplus.met"
#line 2318 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 117, cplus)){
#line 2318 "cplus.met"
#line 2319 "cplus.met"
        {
#line 2319 "cplus.met"
            PPTREE _ptTree0=0;
#line 2319 "cplus.met"
            {
#line 2319 "cplus.met"
                PPTREE _ptTree1=0;
#line 2319 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2319 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2319 "cplus.met"
                }
#line 2319 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2319 "cplus.met"
            }
#line 2319 "cplus.met"
            _retValue =_ptTree0;
#line 2319 "cplus.met"
            goto abstract_declarator_ret;
#line 2319 "cplus.met"
        }
#line 2319 "cplus.met"
    }
#line 2319 "cplus.met"
#line 2320 "cplus.met"
    retTree = (PPTREE) 0;
#line 2320 "cplus.met"
#line 2321 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2321 "cplus.met"
    switch( lexEl.Value) {
#line 2321 "cplus.met"
#line 2322 "cplus.met"
        case ETOI : 
#line 2322 "cplus.met"
            tokenAhead = 0 ;
#line 2322 "cplus.met"
            CommTerm();
#line 2322 "cplus.met"
#line 2322 "cplus.met"
            {
#line 2322 "cplus.met"
                PPTREE _ptTree0=0;
#line 2322 "cplus.met"
                {
#line 2322 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2322 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2322 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2322 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2322 "cplus.met"
                    }
#line 2322 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2322 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2322 "cplus.met"
                }
#line 2322 "cplus.met"
                _retValue =_ptTree0;
#line 2322 "cplus.met"
                goto abstract_declarator_ret;
#line 2322 "cplus.met"
            }
#line 2322 "cplus.met"
            break;
#line 2322 "cplus.met"
#line 2323 "cplus.met"
        case ETCO : 
#line 2323 "cplus.met"
            tokenAhead = 0 ;
#line 2323 "cplus.met"
            CommTerm();
#line 2323 "cplus.met"
#line 2323 "cplus.met"
            {
#line 2323 "cplus.met"
                PPTREE _ptTree0=0;
#line 2323 "cplus.met"
                {
#line 2323 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2323 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2323 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2323 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2323 "cplus.met"
                    }
#line 2323 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2323 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2323 "cplus.met"
                }
#line 2323 "cplus.met"
                _retValue =_ptTree0;
#line 2323 "cplus.met"
                goto abstract_declarator_ret;
#line 2323 "cplus.met"
            }
#line 2323 "cplus.met"
            break;
#line 2323 "cplus.met"
#line 2324 "cplus.met"
        case TILD : 
#line 2324 "cplus.met"
            tokenAhead = 0 ;
#line 2324 "cplus.met"
            CommTerm();
#line 2324 "cplus.met"
#line 2324 "cplus.met"
            {
#line 2324 "cplus.met"
                PPTREE _ptTree0=0;
#line 2324 "cplus.met"
                {
#line 2324 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2324 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2324 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2324 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2324 "cplus.met"
                    }
#line 2324 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2324 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2324 "cplus.met"
                }
#line 2324 "cplus.met"
                _retValue =_ptTree0;
#line 2324 "cplus.met"
                goto abstract_declarator_ret;
#line 2324 "cplus.met"
            }
#line 2324 "cplus.met"
            break;
#line 2324 "cplus.met"
#line 2328 "cplus.met"
        case POUV : 
#line 2328 "cplus.met"
            tokenAhead = 0 ;
#line 2328 "cplus.met"
            CommTerm();
#line 2328 "cplus.met"
#line 2326 "cplus.met"
#line 2327 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2327 "cplus.met"
#line 2328 "cplus.met"
                
#line 2328 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2328 "cplus.met"
                goto abstract_declarator_exit;
#line 2328 "cplus.met"
#line 2328 "cplus.met"
            }
#line 2328 "cplus.met"
#line 2329 "cplus.met"
            {
#line 2329 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2329 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2329 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2329 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2329 "cplus.met"
                }
#line 2329 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2329 "cplus.met"
                retTree=_ptRes0;
#line 2329 "cplus.met"
            }
#line 2329 "cplus.met"
#line 2330 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2330 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2330 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2330 "cplus.met"
            } else {
#line 2330 "cplus.met"
                tokenAhead = 0 ;
#line 2330 "cplus.met"
            }
#line 2330 "cplus.met"
#line 2331 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2331 "cplus.met"
#line 2332 "cplus.met"
                                    { PPTREE theTree ;
#line 2332 "cplus.met"
                                      theTree = valTree ;
#line 2332 "cplus.met"
                                      if (theTree) {
#line 2332 "cplus.met"
                                          while (SonTree(theTree,1))
#line 2332 "cplus.met"
                                       if (NumberTree(theTree)
#line 2332 "cplus.met"
                                    	   != RANGE_MODIFIER)
#line 2332 "cplus.met"
                                           theTree = SonTree(theTree,1);
#line 2332 "cplus.met"
                                       else
#line 2332 "cplus.met"
                                           theTree = SonTree(theTree,2);
#line 2332 "cplus.met"
                                          ReplaceTree(theTree,1,retTree);
#line 2332 "cplus.met"
                                          /* modif portage sun */
#line 2332 "cplus.met"
                                          retTree = valTree;
#line 2332 "cplus.met"
                                      }
#line 2332 "cplus.met"
                                         }
#line 2332 "cplus.met"
                                
#line 2332 "cplus.met"
            }
#line 2332 "cplus.met"
#line 2332 "cplus.met"
            break;
#line 2332 "cplus.met"
#line 2349 "cplus.met"
        case META : 
#line 2349 "cplus.met"
        case IDENT : 
#line 2349 "cplus.met"
#line 2350 "cplus.met"
#line 2351 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 91, cplus))== (PPTREE) -1 ) {
#line 2351 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2351 "cplus.met"
            }
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
#line 2352 "cplus.met"
            break;
#line 2352 "cplus.met"
#line 2358 "cplus.met"
        default : 
#line 2358 "cplus.met"
#line 2357 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2357 "cplus.met"
#line 2359 "cplus.met"
                retTree = valTree ;
#line 2359 "cplus.met"
#line 2359 "cplus.met"
            }
#line 2359 "cplus.met"
            break;
#line 2359 "cplus.met"
    }
#line 2359 "cplus.met"
#line 2361 "cplus.met"
    {
#line 2361 "cplus.met"
        _retValue = retTree ;
#line 2361 "cplus.met"
        goto abstract_declarator_ret;
#line 2361 "cplus.met"
        
#line 2361 "cplus.met"
    }
#line 2361 "cplus.met"
#line 2361 "cplus.met"
#line 2361 "cplus.met"

#line 2362 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2362 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2362 "cplus.met"
return((PPTREE) 0);
#line 2362 "cplus.met"

#line 2362 "cplus.met"
abstract_declarator_exit :
#line 2362 "cplus.met"

#line 2362 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2362 "cplus.met"
    _funcLevel--;
#line 2362 "cplus.met"
    return((PPTREE) -1) ;
#line 2362 "cplus.met"

#line 2362 "cplus.met"
abstract_declarator_ret :
#line 2362 "cplus.met"
    
#line 2362 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2362 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2362 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2362 "cplus.met"
    return _retValue ;
#line 2362 "cplus.met"
}
#line 2362 "cplus.met"

#line 2362 "cplus.met"
#line 2669 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2669 "cplus.met"
{
#line 2669 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2669 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2669 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2669 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2669 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2669 "cplus.met"
#line 2669 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2669 "cplus.met"
#line 2671 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 2671 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2671 "cplus.met"
    }
#line 2671 "cplus.met"
#line 2672 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2672 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2672 "cplus.met"
#line 2673 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2673 "cplus.met"
        switch( lexEl.Value) {
#line 2673 "cplus.met"
#line 2674 "cplus.met"
            case PLUS : 
#line 2674 "cplus.met"
                tokenAhead = 0 ;
#line 2674 "cplus.met"
                CommTerm();
#line 2674 "cplus.met"
#line 2674 "cplus.met"
                {
#line 2674 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2674 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2674 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2674 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 2674 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2674 "cplus.met"
                    }
#line 2674 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2674 "cplus.met"
                    expTree=_ptRes0;
#line 2674 "cplus.met"
                }
#line 2674 "cplus.met"
                break;
#line 2674 "cplus.met"
#line 2676 "cplus.met"
            case TIRE : 
#line 2676 "cplus.met"
                tokenAhead = 0 ;
#line 2676 "cplus.met"
                CommTerm();
#line 2676 "cplus.met"
#line 2676 "cplus.met"
                {
#line 2676 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2676 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2676 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2676 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 2676 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2676 "cplus.met"
                    }
#line 2676 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2676 "cplus.met"
                    expTree=_ptRes0;
#line 2676 "cplus.met"
                }
#line 2676 "cplus.met"
                break;
#line 2676 "cplus.met"
            default :
#line 2676 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2676 "cplus.met"
                break;
#line 2676 "cplus.met"
        }
#line 2676 "cplus.met"
    } 
#line 2676 "cplus.met"
#line 2679 "cplus.met"
    {
#line 2679 "cplus.met"
        _retValue = expTree ;
#line 2679 "cplus.met"
        goto additive_expression_ret;
#line 2679 "cplus.met"
        
#line 2679 "cplus.met"
    }
#line 2679 "cplus.met"
#line 2679 "cplus.met"
#line 2679 "cplus.met"

#line 2680 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2680 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2680 "cplus.met"
return((PPTREE) 0);
#line 2680 "cplus.met"

#line 2680 "cplus.met"
additive_expression_exit :
#line 2680 "cplus.met"

#line 2680 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2680 "cplus.met"
    _funcLevel--;
#line 2680 "cplus.met"
    return((PPTREE) -1) ;
#line 2680 "cplus.met"

#line 2680 "cplus.met"
additive_expression_ret :
#line 2680 "cplus.met"
    
#line 2680 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2680 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2680 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2680 "cplus.met"
    return _retValue ;
#line 2680 "cplus.met"
}
#line 2680 "cplus.met"

#line 2680 "cplus.met"
#line 2773 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2773 "cplus.met"
{
#line 2773 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2773 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2773 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2773 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2773 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2773 "cplus.met"
#line 2773 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2773 "cplus.met"
#line 2775 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2775 "cplus.met"
#line 2776 "cplus.met"
#line 2777 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2777 "cplus.met"
        switch( lexEl.Value) {
#line 2777 "cplus.met"
#line 2778 "cplus.met"
            case NEW : 
#line 2778 "cplus.met"
#line 2778 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2778 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2778 "cplus.met"
                }
#line 2778 "cplus.met"
                break;
#line 2778 "cplus.met"
#line 2779 "cplus.met"
            case DELETE : 
#line 2779 "cplus.met"
#line 2779 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 43, cplus))== (PPTREE) -1 ) {
#line 2779 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2779 "cplus.met"
                }
#line 2779 "cplus.met"
                break;
#line 2779 "cplus.met"
            default :
#line 2779 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2779 "cplus.met"
                break;
#line 2779 "cplus.met"
        }
#line 2779 "cplus.met"
#line 2781 "cplus.met"
        {
#line 2781 "cplus.met"
            PPTREE _ptRes0=0;
#line 2781 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2781 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2781 "cplus.met"
            retTree=_ptRes0;
#line 2781 "cplus.met"
        }
#line 2781 "cplus.met"
#line 2781 "cplus.met"
#line 2781 "cplus.met"
    } else {
#line 2781 "cplus.met"
#line 2784 "cplus.met"
#line 2785 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2785 "cplus.met"
        switch( lexEl.Value) {
#line 2785 "cplus.met"
#line 2786 "cplus.met"
            case NEW : 
#line 2786 "cplus.met"
#line 2786 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2786 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2786 "cplus.met"
                }
#line 2786 "cplus.met"
                break;
#line 2786 "cplus.met"
#line 2787 "cplus.met"
            case DELETE : 
#line 2787 "cplus.met"
#line 2787 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 43, cplus))== (PPTREE) -1 ) {
#line 2787 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2787 "cplus.met"
                }
#line 2787 "cplus.met"
                break;
#line 2787 "cplus.met"
            default :
#line 2787 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2787 "cplus.met"
                break;
#line 2787 "cplus.met"
        }
#line 2787 "cplus.met"
#line 2789 "cplus.met"
        retTree = valTree ;
#line 2789 "cplus.met"
#line 2789 "cplus.met"
    }
#line 2789 "cplus.met"
#line 2791 "cplus.met"
    {
#line 2791 "cplus.met"
        _retValue = retTree ;
#line 2791 "cplus.met"
        goto alloc_expression_ret;
#line 2791 "cplus.met"
        
#line 2791 "cplus.met"
    }
#line 2791 "cplus.met"
#line 2791 "cplus.met"
#line 2791 "cplus.met"

#line 2792 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2792 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2792 "cplus.met"
return((PPTREE) 0);
#line 2792 "cplus.met"

#line 2792 "cplus.met"
alloc_expression_exit :
#line 2792 "cplus.met"

#line 2792 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2792 "cplus.met"
    _funcLevel--;
#line 2792 "cplus.met"
    return((PPTREE) -1) ;
#line 2792 "cplus.met"

#line 2792 "cplus.met"
alloc_expression_ret :
#line 2792 "cplus.met"
    
#line 2792 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2792 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2792 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2792 "cplus.met"
    return _retValue ;
#line 2792 "cplus.met"
}
#line 2792 "cplus.met"

#line 2792 "cplus.met"
#line 2823 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2823 "cplus.met"
{
#line 2823 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2823 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2823 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2823 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2823 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2823 "cplus.met"
#line 2823 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2823 "cplus.met"
#line 2823 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2823 "cplus.met"
#line 2825 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2825 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2825 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2825 "cplus.met"
    } else {
#line 2825 "cplus.met"
        tokenAhead = 0 ;
#line 2825 "cplus.met"
    }
#line 2825 "cplus.met"
#line 2826 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 95, cplus))){
#line 2826 "cplus.met"
#line 2827 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2827 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2827 "cplus.met"
        }
#line 2827 "cplus.met"
    }
#line 2827 "cplus.met"
#line 2828 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2828 "cplus.met"
#line 2829 "cplus.met"
#line 2830 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2830 "cplus.met"
#line 2832 "cplus.met"
#line 2832 "cplus.met"
            _addlist1 = list ;
#line 2832 "cplus.met"
#line 2831 "cplus.met"
            do {
#line 2831 "cplus.met"
#line 2832 "cplus.met"
                {
#line 2832 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2832 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2832 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2832 "cplus.met"
                    }
#line 2832 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2832 "cplus.met"
                }
#line 2832 "cplus.met"
#line 2832 "cplus.met"
                if (list){
#line 2832 "cplus.met"
#line 2832 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2832 "cplus.met"
                } else {
#line 2832 "cplus.met"
#line 2832 "cplus.met"
                    list = _addlist1 ;
#line 2832 "cplus.met"
                }
#line 2832 "cplus.met"
#line 2832 "cplus.met"
#line 2833 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2833 "cplus.met"
        }
#line 2833 "cplus.met"
#line 2834 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2834 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2834 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2834 "cplus.met"
        } else {
#line 2834 "cplus.met"
            tokenAhead = 0 ;
#line 2834 "cplus.met"
        }
#line 2834 "cplus.met"
#line 2835 "cplus.met"
        {
#line 2835 "cplus.met"
            PPTREE _ptTree0=0;
#line 2835 "cplus.met"
            {
#line 2835 "cplus.met"
                PPTREE _ptRes1=0;
#line 2835 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 2835 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2835 "cplus.met"
                _ptTree0=_ptRes1;
#line 2835 "cplus.met"
            }
#line 2835 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2835 "cplus.met"
        }
#line 2835 "cplus.met"
#line 2835 "cplus.met"
#line 2835 "cplus.met"
    }
#line 2835 "cplus.met"
#line 2837 "cplus.met"
    {
#line 2837 "cplus.met"
        _retValue = retTree ;
#line 2837 "cplus.met"
        goto allocation_expression_ret;
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
allocation_expression_exit :
#line 2838 "cplus.met"

#line 2838 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2838 "cplus.met"
    _funcLevel--;
#line 2838 "cplus.met"
    return((PPTREE) -1) ;
#line 2838 "cplus.met"

#line 2838 "cplus.met"
allocation_expression_ret :
#line 2838 "cplus.met"
    
#line 2838 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
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
#line 2619 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2619 "cplus.met"
{
#line 2619 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2619 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2619 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2619 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2619 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2619 "cplus.met"
#line 2619 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2619 "cplus.met"
#line 2621 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 2621 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2621 "cplus.met"
    }
#line 2621 "cplus.met"
#line 2622 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2622 "cplus.met"
#line 2623 "cplus.met"
        {
#line 2623 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2623 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2623 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2623 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 2623 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2623 "cplus.met"
            }
#line 2623 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2623 "cplus.met"
            expTree=_ptRes0;
#line 2623 "cplus.met"
        }
#line 2623 "cplus.met"
    } 
#line 2623 "cplus.met"
#line 2624 "cplus.met"
    {
#line 2624 "cplus.met"
        _retValue = expTree ;
#line 2624 "cplus.met"
        goto and_expression_ret;
#line 2624 "cplus.met"
        
#line 2624 "cplus.met"
    }
#line 2624 "cplus.met"
#line 2624 "cplus.met"
#line 2624 "cplus.met"

#line 2625 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2625 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2625 "cplus.met"
return((PPTREE) 0);
#line 2625 "cplus.met"

#line 2625 "cplus.met"
and_expression_exit :
#line 2625 "cplus.met"

#line 2625 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2625 "cplus.met"
    _funcLevel--;
#line 2625 "cplus.met"
    return((PPTREE) -1) ;
#line 2625 "cplus.met"

#line 2625 "cplus.met"
and_expression_ret :
#line 2625 "cplus.met"
    
#line 2625 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2625 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2625 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2625 "cplus.met"
    return _retValue ;
#line 2625 "cplus.met"
}
#line 2625 "cplus.met"

#line 2625 "cplus.met"
#line 2468 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2468 "cplus.met"
{
#line 2468 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2468 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2468 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2468 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2468 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2468 "cplus.met"
#line 2468 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2468 "cplus.met"
#line 2470 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2470 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2470 "cplus.met"
    }
#line 2470 "cplus.met"
#line 2471 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2471 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2471 "cplus.met"
#line 2472 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2472 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2472 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2472 "cplus.met"
        } else {
#line 2472 "cplus.met"
            tokenAhead = 0 ;
#line 2472 "cplus.met"
        }
#line 2472 "cplus.met"
    }
#line 2472 "cplus.met"
#line 2473 "cplus.met"
    {
#line 2473 "cplus.met"
        _retValue = retTree ;
#line 2473 "cplus.met"
        goto arg_declarator_ret;
#line 2473 "cplus.met"
        
#line 2473 "cplus.met"
    }
#line 2473 "cplus.met"
#line 2473 "cplus.met"
#line 2473 "cplus.met"

#line 2474 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2474 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2474 "cplus.met"
return((PPTREE) 0);
#line 2474 "cplus.met"

#line 2474 "cplus.met"
arg_declarator_exit :
#line 2474 "cplus.met"

#line 2474 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2474 "cplus.met"
    _funcLevel--;
#line 2474 "cplus.met"
    return((PPTREE) -1) ;
#line 2474 "cplus.met"

#line 2474 "cplus.met"
arg_declarator_ret :
#line 2474 "cplus.met"
    
#line 2474 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2474 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2474 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2474 "cplus.met"
    return _retValue ;
#line 2474 "cplus.met"
}
#line 2474 "cplus.met"

#line 2474 "cplus.met"
#line 2451 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2451 "cplus.met"
{
#line 2451 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2451 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2451 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2451 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2451 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2451 "cplus.met"
#line 2451 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2451 "cplus.met"
#line 2453 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2453 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2453 "cplus.met"
    }
#line 2453 "cplus.met"
#line 2454 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
#line 2454 "cplus.met"
#line 2455 "cplus.met"
        {
#line 2455 "cplus.met"
            PPTREE _ptRes0=0;
#line 2455 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2455 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2455 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2455 "cplus.met"
            valTree=_ptRes0;
#line 2455 "cplus.met"
        }
#line 2455 "cplus.met"
    } else {
#line 2455 "cplus.met"
#line 2457 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2457 "cplus.met"
#line 2458 "cplus.met"
            {
#line 2458 "cplus.met"
                PPTREE _ptRes0=0;
#line 2458 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2458 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2458 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2458 "cplus.met"
                valTree=_ptRes0;
#line 2458 "cplus.met"
            }
#line 2458 "cplus.met"
        } else {
#line 2458 "cplus.met"
#line 2460 "cplus.met"
            valTree = retTree ;
#line 2460 "cplus.met"
        }
#line 2460 "cplus.met"
    }
#line 2460 "cplus.met"
#line 2461 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2461 "cplus.met"
#line 2462 "cplus.met"
#line 2463 "cplus.met"
        {
#line 2463 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2463 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2463 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2463 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2463 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2463 "cplus.met"
            }
#line 2463 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2463 "cplus.met"
            valTree=_ptRes0;
#line 2463 "cplus.met"
        }
#line 2463 "cplus.met"
#line 2463 "cplus.met"
#line 2463 "cplus.met"
    }
#line 2463 "cplus.met"
#line 2465 "cplus.met"
    {
#line 2465 "cplus.met"
        _retValue = valTree ;
#line 2465 "cplus.met"
        goto arg_declarator_base_ret;
#line 2465 "cplus.met"
        
#line 2465 "cplus.met"
    }
#line 2465 "cplus.met"
#line 2465 "cplus.met"
#line 2465 "cplus.met"

#line 2466 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2466 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2466 "cplus.met"
return((PPTREE) 0);
#line 2466 "cplus.met"

#line 2466 "cplus.met"
arg_declarator_base_exit :
#line 2466 "cplus.met"

#line 2466 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2466 "cplus.met"
    _funcLevel--;
#line 2466 "cplus.met"
    return((PPTREE) -1) ;
#line 2466 "cplus.met"

#line 2466 "cplus.met"
arg_declarator_base_ret :
#line 2466 "cplus.met"
    
#line 2466 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2466 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2466 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2466 "cplus.met"
    return _retValue ;
#line 2466 "cplus.met"
}
#line 2466 "cplus.met"

#line 2466 "cplus.met"
#line 2476 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2476 "cplus.met"
{
#line 2476 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2476 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2476 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2476 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2476 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2476 "cplus.met"
#line 2476 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2476 "cplus.met"
#line 2478 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2478 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2478 "cplus.met"
    }
#line 2478 "cplus.met"
#line 2479 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2479 "cplus.met"
#line 2480 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2480 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2480 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2480 "cplus.met"
        } else {
#line 2480 "cplus.met"
            tokenAhead = 0 ;
#line 2480 "cplus.met"
        }
#line 2480 "cplus.met"
    }
#line 2480 "cplus.met"
#line 2481 "cplus.met"
    {
#line 2481 "cplus.met"
        _retValue = retTree ;
#line 2481 "cplus.met"
        goto arg_declarator_followed_ret;
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
arg_declarator_followed_exit :
#line 2482 "cplus.met"

#line 2482 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2482 "cplus.met"
    _funcLevel--;
#line 2482 "cplus.met"
    return((PPTREE) -1) ;
#line 2482 "cplus.met"

#line 2482 "cplus.met"
arg_declarator_followed_ret :
#line 2482 "cplus.met"
    
#line 2482 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
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
#line 2484 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2484 "cplus.met"
{
#line 2484 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2484 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2484 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2484 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2484 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2484 "cplus.met"
#line 2484 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2484 "cplus.met"
#line 2486 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2486 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2486 "cplus.met"
    }
#line 2486 "cplus.met"
#line 2487 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 44, cplus)){
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
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 140, cplus)){
#line 2496 "cplus.met"
#line 2497 "cplus.met"
            {
#line 2497 "cplus.met"
                PPTREE _ptRes0=0;
#line 2497 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2497 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2497 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2497 "cplus.met"
                valTree=_ptRes0;
#line 2497 "cplus.met"
            }
#line 2497 "cplus.met"
        } else {
#line 2497 "cplus.met"
#line 2499 "cplus.met"
            {
#line 2499 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2499 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2499 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2499 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2499 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2499 "cplus.met"
                }
#line 2499 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2499 "cplus.met"
                valTree=_ptRes0;
#line 2499 "cplus.met"
            }
#line 2499 "cplus.met"
        }
#line 2499 "cplus.met"
#line 2499 "cplus.met"
#line 2499 "cplus.met"
    }
#line 2499 "cplus.met"
#line 2501 "cplus.met"
    {
#line 2501 "cplus.met"
        _retValue = valTree ;
#line 2501 "cplus.met"
        goto arg_declarator_type_ret;
#line 2501 "cplus.met"
        
#line 2501 "cplus.met"
    }
#line 2501 "cplus.met"
#line 2501 "cplus.met"
#line 2501 "cplus.met"

#line 2502 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2502 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2502 "cplus.met"
return((PPTREE) 0);
#line 2502 "cplus.met"

#line 2502 "cplus.met"
arg_declarator_type_exit :
#line 2502 "cplus.met"

#line 2502 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2502 "cplus.met"
    _funcLevel--;
#line 2502 "cplus.met"
    return((PPTREE) -1) ;
#line 2502 "cplus.met"

#line 2502 "cplus.met"
arg_declarator_type_ret :
#line 2502 "cplus.met"
    
#line 2502 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2502 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2502 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2502 "cplus.met"
    return _retValue ;
#line 2502 "cplus.met"
}
#line 2502 "cplus.met"

#line 2502 "cplus.met"
#line 2180 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2180 "cplus.met"
{
#line 2180 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2180 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2180 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2180 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2180 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2180 "cplus.met"
#line 2180 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2180 "cplus.met"
#line 2182 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2182 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2182 "cplus.met"
        MulFreeTree(2,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2182 "cplus.met"
    } else {
#line 2182 "cplus.met"
        tokenAhead = 0 ;
#line 2182 "cplus.met"
    }
#line 2182 "cplus.met"
#line 2183 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 12, cplus)){
#line 2183 "cplus.met"
#line 2184 "cplus.met"
        {
#line 2184 "cplus.met"
            PPTREE _ptRes0=0;
#line 2184 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 3);
#line 2184 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2184 "cplus.met"
            retTree=_ptRes0;
#line 2184 "cplus.met"
        }
#line 2184 "cplus.met"
    } else {
#line 2184 "cplus.met"
#line 2186 "cplus.met"
        {
#line 2186 "cplus.met"
            PPTREE _ptRes0=0;
#line 2186 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 3);
#line 2186 "cplus.met"
            retTree=_ptRes0;
#line 2186 "cplus.met"
        }
#line 2186 "cplus.met"
    }
#line 2186 "cplus.met"
#line 2187 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2187 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2187 "cplus.met"
        MulFreeTree(2,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2187 "cplus.met"
    } else {
#line 2187 "cplus.met"
        tokenAhead = 0 ;
#line 2187 "cplus.met"
    }
#line 2187 "cplus.met"
#line 2188 "cplus.met"
    {
#line 2188 "cplus.met"
        _retValue = retTree ;
#line 2188 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2188 "cplus.met"
        
#line 2188 "cplus.met"
    }
#line 2188 "cplus.met"
#line 2188 "cplus.met"
#line 2188 "cplus.met"

#line 2189 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2189 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2189 "cplus.met"
return((PPTREE) 0);
#line 2189 "cplus.met"

#line 2189 "cplus.met"
arg_typ_declarator_exit :
#line 2189 "cplus.met"

#line 2189 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2189 "cplus.met"
    _funcLevel--;
#line 2189 "cplus.met"
    return((PPTREE) -1) ;
#line 2189 "cplus.met"

#line 2189 "cplus.met"
arg_typ_declarator_ret :
#line 2189 "cplus.met"
    
#line 2189 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2189 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2189 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2189 "cplus.met"
    return _retValue ;
#line 2189 "cplus.met"
}
#line 2189 "cplus.met"

#line 2189 "cplus.met"
#line 2413 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2413 "cplus.met"
{
#line 2413 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2413 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2413 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2413 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2413 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2413 "cplus.met"
#line 2413 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2413 "cplus.met"
#line 2413 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2413 "cplus.met"
#line 2415 "cplus.met"
     { int followed = 0;
#line 2415 "cplus.met"
#line 2416 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2416 "cplus.met"
#line 2417 "cplus.met"
         followed = 1;
#line 2417 "cplus.met"
    } else {
#line 2417 "cplus.met"
#line 2419 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus))== (PPTREE) -1 ) {
#line 2419 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2419 "cplus.met"
        }
#line 2419 "cplus.met"
    }
#line 2419 "cplus.met"
#line 2420 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2420 "cplus.met"
#line 2421 "cplus.met"
#line 2422 "cplus.met"
     {  int exit = 0 ; 
#line 2422 "cplus.met"
#line 2422 "cplus.met"
    _addlist1 = retTree ;
#line 2422 "cplus.met"
#line 2423 "cplus.met"
    while ( followed && !exit ) { 
#line 2423 "cplus.met"
#line 2424 "cplus.met"
#line 2425 "cplus.met"
         followed = 0;
#line 2425 "cplus.met"
#line 2426 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2426 "cplus.met"
#line 2427 "cplus.met"
#line 2428 "cplus.met"
             followed = 1;
#line 2428 "cplus.met"
#line 2429 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2429 "cplus.met"
#line 2429 "cplus.met"
            if (retTree){
#line 2429 "cplus.met"
#line 2429 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2429 "cplus.met"
            } else {
#line 2429 "cplus.met"
#line 2429 "cplus.met"
                retTree = _addlist1 ;
#line 2429 "cplus.met"
            }
#line 2429 "cplus.met"
#line 2429 "cplus.met"
#line 2429 "cplus.met"
        } else {
#line 2429 "cplus.met"
#line 2432 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2432 "cplus.met"
#line 2433 "cplus.met"
#line 2434 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2434 "cplus.met"
#line 2434 "cplus.met"
                if (retTree){
#line 2434 "cplus.met"
#line 2434 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2434 "cplus.met"
                } else {
#line 2434 "cplus.met"
#line 2434 "cplus.met"
                    retTree = _addlist1 ;
#line 2434 "cplus.met"
                }
#line 2434 "cplus.met"
#line 2434 "cplus.met"
#line 2434 "cplus.met"
            } else {
#line 2434 "cplus.met"
#line 2437 "cplus.met"
#line 2438 "cplus.met"
                {
#line 2438 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2438 "cplus.met"
                    {
#line 2438 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2438 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2438 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2438 "cplus.met"
                    }
#line 2438 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2438 "cplus.met"
                }
#line 2438 "cplus.met"
#line 2438 "cplus.met"
                if (retTree){
#line 2438 "cplus.met"
#line 2438 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2438 "cplus.met"
                } else {
#line 2438 "cplus.met"
#line 2438 "cplus.met"
                    retTree = _addlist1 ;
#line 2438 "cplus.met"
                }
#line 2438 "cplus.met"
#line 2439 "cplus.met"
                 exit = 1 ;
#line 2439 "cplus.met"
#line 2440 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2440 "cplus.met"
#line 2440 "cplus.met"
                }
#line 2440 "cplus.met"
#line 2440 "cplus.met"
            }
#line 2440 "cplus.met"
        }
#line 2440 "cplus.met"
#line 2440 "cplus.met"
    } 
#line 2440 "cplus.met"
#line 2444 "cplus.met"
    if ((! ( exit )) && 
#line 2444 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2444 "cplus.met"
#line 2445 "cplus.met"
        {
#line 2445 "cplus.met"
            PPTREE _ptTree0=0;
#line 2445 "cplus.met"
            {
#line 2445 "cplus.met"
                PPTREE _ptRes1=0;
#line 2445 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2445 "cplus.met"
                _ptTree0=_ptRes1;
#line 2445 "cplus.met"
            }
#line 2445 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2445 "cplus.met"
        }
#line 2445 "cplus.met"
#line 2445 "cplus.met"
    }
#line 2445 "cplus.met"
#line 2446 "cplus.met"
     } } 
#line 2446 "cplus.met"
#line 2446 "cplus.met"
#line 2448 "cplus.met"
    {
#line 2448 "cplus.met"
        _retValue = retTree ;
#line 2448 "cplus.met"
        goto arg_typ_list_ret;
#line 2448 "cplus.met"
        
#line 2448 "cplus.met"
    }
#line 2448 "cplus.met"
#line 2448 "cplus.met"
#line 2448 "cplus.met"

#line 2449 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2449 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2449 "cplus.met"
return((PPTREE) 0);
#line 2449 "cplus.met"

#line 2449 "cplus.met"
arg_typ_list_exit :
#line 2449 "cplus.met"

#line 2449 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2449 "cplus.met"
    _funcLevel--;
#line 2449 "cplus.met"
    return((PPTREE) -1) ;
#line 2449 "cplus.met"

#line 2449 "cplus.met"
arg_typ_list_ret :
#line 2449 "cplus.met"
    
#line 2449 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2449 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2449 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2449 "cplus.met"
    return _retValue ;
#line 2449 "cplus.met"
}
#line 2449 "cplus.met"

#line 2449 "cplus.met"
#line 1030 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 1030 "cplus.met"
{
#line 1030 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1030 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1030 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1030 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 1030 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1030 "cplus.met"
#line 1030 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1030 "cplus.met"
#line 1032 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1032 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 1032 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 1032 "cplus.met"
    } else {
#line 1032 "cplus.met"
        tokenAhead = 0 ;
#line 1032 "cplus.met"
    }
#line 1032 "cplus.met"
#line 1033 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1033 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1033 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 1033 "cplus.met"
    } else {
#line 1033 "cplus.met"
        tokenAhead = 0 ;
#line 1033 "cplus.met"
    }
#line 1033 "cplus.met"
#line 1034 "cplus.met"
    {
#line 1034 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1034 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 1034 "cplus.met"
        {
#line 1034 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1034 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1034 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1034 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1034 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 1034 "cplus.met"
            } else {
#line 1034 "cplus.met"
                tokenAhead = 0 ;
#line 1034 "cplus.met"
            }
#line 1034 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1034 "cplus.met"
            _ptTree0=_ptRes1;
#line 1034 "cplus.met"
        }
#line 1034 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1034 "cplus.met"
        retTree=_ptRes0;
#line 1034 "cplus.met"
    }
#line 1034 "cplus.met"
#line 1035 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1035 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1035 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 1035 "cplus.met"
    } else {
#line 1035 "cplus.met"
        tokenAhead = 0 ;
#line 1035 "cplus.met"
    }
#line 1035 "cplus.met"
#line 1036 "cplus.met"
    {
#line 1036 "cplus.met"
        _retValue = retTree ;
#line 1036 "cplus.met"
        goto asm_declaration_ret;
#line 1036 "cplus.met"
        
#line 1036 "cplus.met"
    }
#line 1036 "cplus.met"
#line 1036 "cplus.met"
#line 1036 "cplus.met"

#line 1037 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1037 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1037 "cplus.met"
return((PPTREE) 0);
#line 1037 "cplus.met"

#line 1037 "cplus.met"
asm_declaration_exit :
#line 1037 "cplus.met"

#line 1037 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 1037 "cplus.met"
    _funcLevel--;
#line 1037 "cplus.met"
    return((PPTREE) -1) ;
#line 1037 "cplus.met"

#line 1037 "cplus.met"
asm_declaration_ret :
#line 1037 "cplus.met"
    
#line 1037 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 1037 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1037 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1037 "cplus.met"
    return _retValue ;
#line 1037 "cplus.met"
}
#line 1037 "cplus.met"

#line 1037 "cplus.met"
#line 2545 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2545 "cplus.met"
{
#line 2545 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2545 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2545 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2545 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2545 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2545 "cplus.met"
#line 2546 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2546 "cplus.met"
    switch( lexEl.Value) {
#line 2546 "cplus.met"
#line 2547 "cplus.met"
        case EGAL : 
#line 2547 "cplus.met"
            tokenAhead = 0 ;
#line 2547 "cplus.met"
            CommTerm();
#line 2547 "cplus.met"
#line 2547 "cplus.met"
            {
#line 2547 "cplus.met"
                PPTREE _ptTree0=0;
#line 2547 "cplus.met"
                {
#line 2547 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2547 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2547 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2547 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2547 "cplus.met"
                    }
#line 2547 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2547 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2547 "cplus.met"
                }
#line 2547 "cplus.met"
                _retValue =_ptTree0;
#line 2547 "cplus.met"
                goto assignment_end_ret;
#line 2547 "cplus.met"
            }
#line 2547 "cplus.met"
            break;
#line 2547 "cplus.met"
#line 2548 "cplus.met"
        case ETOIEGAL : 
#line 2548 "cplus.met"
            tokenAhead = 0 ;
#line 2548 "cplus.met"
            CommTerm();
#line 2548 "cplus.met"
#line 2548 "cplus.met"
            {
#line 2548 "cplus.met"
                PPTREE _ptTree0=0;
#line 2548 "cplus.met"
                {
#line 2548 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2548 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2548 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2548 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2548 "cplus.met"
                    }
#line 2548 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2548 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2548 "cplus.met"
                }
#line 2548 "cplus.met"
                _retValue =_ptTree0;
#line 2548 "cplus.met"
                goto assignment_end_ret;
#line 2548 "cplus.met"
            }
#line 2548 "cplus.met"
            break;
#line 2548 "cplus.met"
#line 2549 "cplus.met"
        case META : 
#line 2549 "cplus.met"
        case SLASEGAL : 
#line 2549 "cplus.met"
            tokenAhead = 0 ;
#line 2549 "cplus.met"
            CommTerm();
#line 2549 "cplus.met"
#line 2549 "cplus.met"
            {
#line 2549 "cplus.met"
                PPTREE _ptTree0=0;
#line 2549 "cplus.met"
                {
#line 2549 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2549 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2549 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2549 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2549 "cplus.met"
                    }
#line 2549 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2549 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2549 "cplus.met"
                }
#line 2549 "cplus.met"
                _retValue =_ptTree0;
#line 2549 "cplus.met"
                goto assignment_end_ret;
#line 2549 "cplus.met"
            }
#line 2549 "cplus.met"
            break;
#line 2549 "cplus.met"
#line 2551 "cplus.met"
        case POURCEGAL : 
#line 2551 "cplus.met"
            tokenAhead = 0 ;
#line 2551 "cplus.met"
            CommTerm();
#line 2551 "cplus.met"
#line 2551 "cplus.met"
            {
#line 2551 "cplus.met"
                PPTREE _ptTree0=0;
#line 2551 "cplus.met"
                {
#line 2551 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2551 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2551 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2551 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2551 "cplus.met"
                    }
#line 2551 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2551 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2551 "cplus.met"
                }
#line 2551 "cplus.met"
                _retValue =_ptTree0;
#line 2551 "cplus.met"
                goto assignment_end_ret;
#line 2551 "cplus.met"
            }
#line 2551 "cplus.met"
            break;
#line 2551 "cplus.met"
#line 2552 "cplus.met"
        case PLUSEGAL : 
#line 2552 "cplus.met"
            tokenAhead = 0 ;
#line 2552 "cplus.met"
            CommTerm();
#line 2552 "cplus.met"
#line 2552 "cplus.met"
            {
#line 2552 "cplus.met"
                PPTREE _ptTree0=0;
#line 2552 "cplus.met"
                {
#line 2552 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2552 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2552 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2552 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2552 "cplus.met"
                    }
#line 2552 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2552 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2552 "cplus.met"
                }
#line 2552 "cplus.met"
                _retValue =_ptTree0;
#line 2552 "cplus.met"
                goto assignment_end_ret;
#line 2552 "cplus.met"
            }
#line 2552 "cplus.met"
            break;
#line 2552 "cplus.met"
#line 2553 "cplus.met"
        case TIREEGAL : 
#line 2553 "cplus.met"
            tokenAhead = 0 ;
#line 2553 "cplus.met"
            CommTerm();
#line 2553 "cplus.met"
#line 2553 "cplus.met"
            {
#line 2553 "cplus.met"
                PPTREE _ptTree0=0;
#line 2553 "cplus.met"
                {
#line 2553 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2553 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2553 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2553 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2553 "cplus.met"
                    }
#line 2553 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2553 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2553 "cplus.met"
                }
#line 2553 "cplus.met"
                _retValue =_ptTree0;
#line 2553 "cplus.met"
                goto assignment_end_ret;
#line 2553 "cplus.met"
            }
#line 2553 "cplus.met"
            break;
#line 2553 "cplus.met"
#line 2554 "cplus.met"
        case INFEINFEEGAL : 
#line 2554 "cplus.met"
            tokenAhead = 0 ;
#line 2554 "cplus.met"
            CommTerm();
#line 2554 "cplus.met"
#line 2554 "cplus.met"
            {
#line 2554 "cplus.met"
                PPTREE _ptTree0=0;
#line 2554 "cplus.met"
                {
#line 2554 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2554 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2554 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2554 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2554 "cplus.met"
                    }
#line 2554 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2554 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2554 "cplus.met"
                }
#line 2554 "cplus.met"
                _retValue =_ptTree0;
#line 2554 "cplus.met"
                goto assignment_end_ret;
#line 2554 "cplus.met"
            }
#line 2554 "cplus.met"
            break;
#line 2554 "cplus.met"
#line 2555 "cplus.met"
        case SUPESUPEEGAL : 
#line 2555 "cplus.met"
            tokenAhead = 0 ;
#line 2555 "cplus.met"
            CommTerm();
#line 2555 "cplus.met"
#line 2555 "cplus.met"
            {
#line 2555 "cplus.met"
                PPTREE _ptTree0=0;
#line 2555 "cplus.met"
                {
#line 2555 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2555 "cplus.met"
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2555 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2555 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2555 "cplus.met"
                    }
#line 2555 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2555 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2555 "cplus.met"
                }
#line 2555 "cplus.met"
                _retValue =_ptTree0;
#line 2555 "cplus.met"
                goto assignment_end_ret;
#line 2555 "cplus.met"
            }
#line 2555 "cplus.met"
            break;
#line 2555 "cplus.met"
#line 2556 "cplus.met"
        case ETCOEGAL : 
#line 2556 "cplus.met"
            tokenAhead = 0 ;
#line 2556 "cplus.met"
            CommTerm();
#line 2556 "cplus.met"
#line 2556 "cplus.met"
            {
#line 2556 "cplus.met"
                PPTREE _ptTree0=0;
#line 2556 "cplus.met"
                {
#line 2556 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2556 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2556 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2556 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2556 "cplus.met"
                    }
#line 2556 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2556 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2556 "cplus.met"
                }
#line 2556 "cplus.met"
                _retValue =_ptTree0;
#line 2556 "cplus.met"
                goto assignment_end_ret;
#line 2556 "cplus.met"
            }
#line 2556 "cplus.met"
            break;
#line 2556 "cplus.met"
#line 2557 "cplus.met"
        case VBAREGAL : 
#line 2557 "cplus.met"
            tokenAhead = 0 ;
#line 2557 "cplus.met"
            CommTerm();
#line 2557 "cplus.met"
#line 2557 "cplus.met"
            {
#line 2557 "cplus.met"
                PPTREE _ptTree0=0;
#line 2557 "cplus.met"
                {
#line 2557 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2557 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2557 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2557 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2557 "cplus.met"
                    }
#line 2557 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2557 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2557 "cplus.met"
                }
#line 2557 "cplus.met"
                _retValue =_ptTree0;
#line 2557 "cplus.met"
                goto assignment_end_ret;
#line 2557 "cplus.met"
            }
#line 2557 "cplus.met"
            break;
#line 2557 "cplus.met"
#line 2558 "cplus.met"
        case CHAPEGAL : 
#line 2558 "cplus.met"
            tokenAhead = 0 ;
#line 2558 "cplus.met"
            CommTerm();
#line 2558 "cplus.met"
#line 2558 "cplus.met"
            {
#line 2558 "cplus.met"
                PPTREE _ptTree0=0;
#line 2558 "cplus.met"
                {
#line 2558 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2558 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2558 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 15, cplus))== (PPTREE) -1 ) {
#line 2558 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2558 "cplus.met"
                    }
#line 2558 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2558 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2558 "cplus.met"
                }
#line 2558 "cplus.met"
                _retValue =_ptTree0;
#line 2558 "cplus.met"
                goto assignment_end_ret;
#line 2558 "cplus.met"
            }
#line 2558 "cplus.met"
            break;
#line 2558 "cplus.met"
        default :
#line 2558 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2558 "cplus.met"
            break;
#line 2558 "cplus.met"
    }
#line 2558 "cplus.met"
#line 2558 "cplus.met"
#line 2559 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2559 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2559 "cplus.met"
return((PPTREE) 0);
#line 2559 "cplus.met"

#line 2559 "cplus.met"
assignment_end_exit :
#line 2559 "cplus.met"

#line 2559 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2559 "cplus.met"
    _funcLevel--;
#line 2559 "cplus.met"
    return((PPTREE) -1) ;
#line 2559 "cplus.met"

#line 2559 "cplus.met"
assignment_end_ret :
#line 2559 "cplus.met"
    
#line 2559 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2559 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2559 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2559 "cplus.met"
    return _retValue ;
#line 2559 "cplus.met"
}
#line 2559 "cplus.met"

#line 2559 "cplus.met"
#line 2562 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2562 "cplus.met"
{
#line 2562 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2562 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2562 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2562 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2562 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2562 "cplus.met"
#line 2562 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2562 "cplus.met"
#line 2564 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2564 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2564 "cplus.met"
    }
#line 2564 "cplus.met"
#line 2565 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 14, cplus)){
#line 2565 "cplus.met"
#line 2566 "cplus.met"
#line 2567 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2567 "cplus.met"
#line 2568 "cplus.met"
        expTree = expFollow ;
#line 2568 "cplus.met"
#line 2568 "cplus.met"
#line 2568 "cplus.met"
    }
#line 2568 "cplus.met"
#line 2570 "cplus.met"
    {
#line 2570 "cplus.met"
        _retValue = expTree ;
#line 2570 "cplus.met"
        goto assignment_expression_ret;
#line 2570 "cplus.met"
        
#line 2570 "cplus.met"
    }
#line 2570 "cplus.met"
#line 2570 "cplus.met"
#line 2570 "cplus.met"

#line 2571 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2571 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2571 "cplus.met"
return((PPTREE) 0);
#line 2571 "cplus.met"

#line 2571 "cplus.met"
assignment_expression_exit :
#line 2571 "cplus.met"

#line 2571 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2571 "cplus.met"
    _funcLevel--;
#line 2571 "cplus.met"
    return((PPTREE) -1) ;
#line 2571 "cplus.met"

#line 2571 "cplus.met"
assignment_expression_ret :
#line 2571 "cplus.met"
    
#line 2571 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2571 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2571 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2571 "cplus.met"
    return _retValue ;
#line 2571 "cplus.met"
}
#line 2571 "cplus.met"

#line 2571 "cplus.met"
#line 1858 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 1858 "cplus.met"
{
#line 1858 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1858 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1858 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1858 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 1858 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1858 "cplus.met"
#line 1858 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1858 "cplus.met"
#line 1858 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1858 "cplus.met"
#line 1858 "cplus.met"
    _addlist1 = list ;
#line 1858 "cplus.met"
#line 1860 "cplus.met"
    do {
#line 1860 "cplus.met"
#line 1861 "cplus.met"
        {
#line 1861 "cplus.met"
            PPTREE _ptTree0=0;
#line 1861 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1861 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 1861 "cplus.met"
            }
#line 1861 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1861 "cplus.met"
        }
#line 1861 "cplus.met"
#line 1861 "cplus.met"
        if (list){
#line 1861 "cplus.met"
#line 1861 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1861 "cplus.met"
        } else {
#line 1861 "cplus.met"
#line 1861 "cplus.met"
            list = _addlist1 ;
#line 1861 "cplus.met"
        }
#line 1861 "cplus.met"
#line 1861 "cplus.met"
#line 1862 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1862 "cplus.met"
#line 1863 "cplus.met"
    {
#line 1863 "cplus.met"
        PPTREE _ptTree0=0;
#line 1863 "cplus.met"
        {
#line 1863 "cplus.met"
            PPTREE _ptRes1=0;
#line 1863 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 1863 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 1863 "cplus.met"
            _ptTree0=_ptRes1;
#line 1863 "cplus.met"
        }
#line 1863 "cplus.met"
        _retValue =_ptTree0;
#line 1863 "cplus.met"
        goto base_specifier_ret;
#line 1863 "cplus.met"
    }
#line 1863 "cplus.met"
#line 1863 "cplus.met"
#line 1863 "cplus.met"

#line 1864 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1864 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1864 "cplus.met"
return((PPTREE) 0);
#line 1864 "cplus.met"

#line 1864 "cplus.met"
base_specifier_exit :
#line 1864 "cplus.met"

#line 1864 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 1864 "cplus.met"
    _funcLevel--;
#line 1864 "cplus.met"
    return((PPTREE) -1) ;
#line 1864 "cplus.met"

#line 1864 "cplus.met"
base_specifier_ret :
#line 1864 "cplus.met"
    
#line 1864 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 1864 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1864 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1864 "cplus.met"
    return _retValue ;
#line 1864 "cplus.met"
}
#line 1864 "cplus.met"

#line 1864 "cplus.met"
