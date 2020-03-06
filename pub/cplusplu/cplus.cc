/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2310 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2310 "cplus.met"
{
#line 2310 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2310 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2310 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2310 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2310 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2310 "cplus.met"
#line 2310 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2310 "cplus.met"
#line 2312 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 121, cplus)){
#line 2312 "cplus.met"
#line 2313 "cplus.met"
        {
#line 2313 "cplus.met"
            PPTREE _ptTree0=0;
#line 2313 "cplus.met"
            {
#line 2313 "cplus.met"
                PPTREE _ptTree1=0;
#line 2313 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2313 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2313 "cplus.met"
                }
#line 2313 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2313 "cplus.met"
            }
#line 2313 "cplus.met"
            _retValue =_ptTree0;
#line 2313 "cplus.met"
            goto abstract_declarator_ret;
#line 2313 "cplus.met"
        }
#line 2313 "cplus.met"
    }
#line 2313 "cplus.met"
#line 2314 "cplus.met"
    retTree = (PPTREE) 0;
#line 2314 "cplus.met"
#line 2315 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2315 "cplus.met"
    switch( lexEl.Value) {
#line 2315 "cplus.met"
#line 2316 "cplus.met"
        case ETOI : 
#line 2316 "cplus.met"
            tokenAhead = 0 ;
#line 2316 "cplus.met"
            CommTerm();
#line 2316 "cplus.met"
#line 2316 "cplus.met"
            {
#line 2316 "cplus.met"
                PPTREE _ptTree0=0;
#line 2316 "cplus.met"
                {
#line 2316 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2316 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2316 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2316 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2316 "cplus.met"
                    }
#line 2316 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2316 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2316 "cplus.met"
                }
#line 2316 "cplus.met"
                _retValue =_ptTree0;
#line 2316 "cplus.met"
                goto abstract_declarator_ret;
#line 2316 "cplus.met"
            }
#line 2316 "cplus.met"
            break;
#line 2316 "cplus.met"
#line 2317 "cplus.met"
        case ETCO : 
#line 2317 "cplus.met"
            tokenAhead = 0 ;
#line 2317 "cplus.met"
            CommTerm();
#line 2317 "cplus.met"
#line 2317 "cplus.met"
            {
#line 2317 "cplus.met"
                PPTREE _ptTree0=0;
#line 2317 "cplus.met"
                {
#line 2317 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2317 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2317 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2317 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2317 "cplus.met"
                    }
#line 2317 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2317 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2317 "cplus.met"
                }
#line 2317 "cplus.met"
                _retValue =_ptTree0;
#line 2317 "cplus.met"
                goto abstract_declarator_ret;
#line 2317 "cplus.met"
            }
#line 2317 "cplus.met"
            break;
#line 2317 "cplus.met"
#line 2318 "cplus.met"
        case TILD : 
#line 2318 "cplus.met"
            tokenAhead = 0 ;
#line 2318 "cplus.met"
            CommTerm();
#line 2318 "cplus.met"
#line 2318 "cplus.met"
            {
#line 2318 "cplus.met"
                PPTREE _ptTree0=0;
#line 2318 "cplus.met"
                {
#line 2318 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2318 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2318 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2318 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2318 "cplus.met"
                    }
#line 2318 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2318 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2318 "cplus.met"
                }
#line 2318 "cplus.met"
                _retValue =_ptTree0;
#line 2318 "cplus.met"
                goto abstract_declarator_ret;
#line 2318 "cplus.met"
            }
#line 2318 "cplus.met"
            break;
#line 2318 "cplus.met"
#line 2322 "cplus.met"
        case POUV : 
#line 2322 "cplus.met"
            tokenAhead = 0 ;
#line 2322 "cplus.met"
            CommTerm();
#line 2322 "cplus.met"
#line 2320 "cplus.met"
#line 2321 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2321 "cplus.met"
#line 2322 "cplus.met"
                
#line 2322 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2322 "cplus.met"
                goto abstract_declarator_exit;
#line 2322 "cplus.met"
#line 2322 "cplus.met"
            }
#line 2322 "cplus.met"
#line 2323 "cplus.met"
            {
#line 2323 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2323 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2323 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2323 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2323 "cplus.met"
                }
#line 2323 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2323 "cplus.met"
                retTree=_ptRes0;
#line 2323 "cplus.met"
            }
#line 2323 "cplus.met"
#line 2324 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2324 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2324 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2324 "cplus.met"
            } else {
#line 2324 "cplus.met"
                tokenAhead = 0 ;
#line 2324 "cplus.met"
            }
#line 2324 "cplus.met"
#line 2325 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 47, cplus)){
#line 2325 "cplus.met"
#line 2326 "cplus.met"
                                         { PPTREE theTree ;
#line 2326 "cplus.met"
                                    theTree = valTree ;
#line 2326 "cplus.met"
                                    if (theTree) {
#line 2326 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2326 "cplus.met"
                                     if (NumberTree(theTree)
#line 2326 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2326 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2326 "cplus.met"
                                     else
#line 2326 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2326 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2326 "cplus.met"
                                        /* modif portage sun */
#line 2326 "cplus.met"
                                        retTree = valTree;
#line 2326 "cplus.met"
                                    }
#line 2326 "cplus.met"
                                       }
#line 2326 "cplus.met"
                                
#line 2326 "cplus.met"
            }
#line 2326 "cplus.met"
#line 2326 "cplus.met"
            break;
#line 2326 "cplus.met"
#line 2343 "cplus.met"
        case META : 
#line 2343 "cplus.met"
        case IDENT : 
#line 2343 "cplus.met"
#line 2344 "cplus.met"
#line 2345 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2345 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2345 "cplus.met"
            }
#line 2345 "cplus.met"
#line 2346 "cplus.met"
            {
#line 2346 "cplus.met"
                PPTREE _ptTree0=0;
#line 2346 "cplus.met"
                {
#line 2346 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2346 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2346 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2346 "cplus.met"
                    }
#line 2346 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2346 "cplus.met"
                }
#line 2346 "cplus.met"
                _retValue =_ptTree0;
#line 2346 "cplus.met"
                goto abstract_declarator_ret;
#line 2346 "cplus.met"
            }
#line 2346 "cplus.met"
#line 2346 "cplus.met"
            break;
#line 2346 "cplus.met"
#line 2352 "cplus.met"
        default : 
#line 2352 "cplus.met"
#line 2351 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 47, cplus)){
#line 2351 "cplus.met"
#line 2353 "cplus.met"
                retTree = valTree ;
#line 2353 "cplus.met"
#line 2353 "cplus.met"
            }
#line 2353 "cplus.met"
            break;
#line 2353 "cplus.met"
    }
#line 2353 "cplus.met"
#line 2355 "cplus.met"
    {
#line 2355 "cplus.met"
        _retValue = retTree ;
#line 2355 "cplus.met"
        goto abstract_declarator_ret;
#line 2355 "cplus.met"
        
#line 2355 "cplus.met"
    }
#line 2355 "cplus.met"
#line 2355 "cplus.met"
#line 2355 "cplus.met"

#line 2356 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2356 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2356 "cplus.met"
return((PPTREE) 0);
#line 2356 "cplus.met"

#line 2356 "cplus.met"
abstract_declarator_exit :
#line 2356 "cplus.met"

#line 2356 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2356 "cplus.met"
    _funcLevel--;
#line 2356 "cplus.met"
    return((PPTREE) -1) ;
#line 2356 "cplus.met"

#line 2356 "cplus.met"
abstract_declarator_ret :
#line 2356 "cplus.met"
    
#line 2356 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2356 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2356 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2356 "cplus.met"
    return _retValue ;
#line 2356 "cplus.met"
}
#line 2356 "cplus.met"

#line 2356 "cplus.met"
#line 2662 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2662 "cplus.met"
{
#line 2662 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2662 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2662 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2662 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2662 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2662 "cplus.met"
#line 2662 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2662 "cplus.met"
#line 2664 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2664 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2664 "cplus.met"
    }
#line 2664 "cplus.met"
#line 2665 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2665 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2665 "cplus.met"
#line 2666 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2666 "cplus.met"
        switch( lexEl.Value) {
#line 2666 "cplus.met"
#line 2667 "cplus.met"
            case PLUS : 
#line 2667 "cplus.met"
                tokenAhead = 0 ;
#line 2667 "cplus.met"
                CommTerm();
#line 2667 "cplus.met"
#line 2667 "cplus.met"
                {
#line 2667 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2667 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2667 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2667 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2667 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2667 "cplus.met"
                    }
#line 2667 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2667 "cplus.met"
                    expTree=_ptRes0;
#line 2667 "cplus.met"
                }
#line 2667 "cplus.met"
                break;
#line 2667 "cplus.met"
#line 2668 "cplus.met"
            case TIRE : 
#line 2668 "cplus.met"
                tokenAhead = 0 ;
#line 2668 "cplus.met"
                CommTerm();
#line 2668 "cplus.met"
#line 2668 "cplus.met"
                {
#line 2668 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2668 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2668 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2668 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2668 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2668 "cplus.met"
                    }
#line 2668 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2668 "cplus.met"
                    expTree=_ptRes0;
#line 2668 "cplus.met"
                }
#line 2668 "cplus.met"
                break;
#line 2668 "cplus.met"
            default :
#line 2668 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2668 "cplus.met"
                break;
#line 2668 "cplus.met"
        }
#line 2668 "cplus.met"
    } 
#line 2668 "cplus.met"
#line 2670 "cplus.met"
    {
#line 2670 "cplus.met"
        _retValue = expTree ;
#line 2670 "cplus.met"
        goto additive_expression_ret;
#line 2670 "cplus.met"
        
#line 2670 "cplus.met"
    }
#line 2670 "cplus.met"
#line 2670 "cplus.met"
#line 2670 "cplus.met"

#line 2671 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2671 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2671 "cplus.met"
return((PPTREE) 0);
#line 2671 "cplus.met"

#line 2671 "cplus.met"
additive_expression_exit :
#line 2671 "cplus.met"

#line 2671 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2671 "cplus.met"
    _funcLevel--;
#line 2671 "cplus.met"
    return((PPTREE) -1) ;
#line 2671 "cplus.met"

#line 2671 "cplus.met"
additive_expression_ret :
#line 2671 "cplus.met"
    
#line 2671 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2671 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2671 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2671 "cplus.met"
    return _retValue ;
#line 2671 "cplus.met"
}
#line 2671 "cplus.met"

#line 2671 "cplus.met"
#line 2762 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2762 "cplus.met"
{
#line 2762 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2762 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2762 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2762 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2762 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2762 "cplus.met"
#line 2762 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2762 "cplus.met"
#line 2764 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2764 "cplus.met"
#line 2765 "cplus.met"
#line 2766 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2766 "cplus.met"
        switch( lexEl.Value) {
#line 2766 "cplus.met"
#line 2767 "cplus.met"
            case NEW : 
#line 2767 "cplus.met"
#line 2767 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2767 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2767 "cplus.met"
                }
#line 2767 "cplus.met"
                break;
#line 2767 "cplus.met"
#line 2768 "cplus.met"
            case DELETE : 
#line 2768 "cplus.met"
#line 2768 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 45, cplus))== (PPTREE) -1 ) {
#line 2768 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2768 "cplus.met"
                }
#line 2768 "cplus.met"
                break;
#line 2768 "cplus.met"
            default :
#line 2768 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2768 "cplus.met"
                break;
#line 2768 "cplus.met"
        }
#line 2768 "cplus.met"
#line 2770 "cplus.met"
        {
#line 2770 "cplus.met"
            PPTREE _ptRes0=0;
#line 2770 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2770 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2770 "cplus.met"
            retTree=_ptRes0;
#line 2770 "cplus.met"
        }
#line 2770 "cplus.met"
#line 2770 "cplus.met"
#line 2770 "cplus.met"
    } else {
#line 2770 "cplus.met"
#line 2773 "cplus.met"
#line 2774 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2774 "cplus.met"
        switch( lexEl.Value) {
#line 2774 "cplus.met"
#line 2775 "cplus.met"
            case NEW : 
#line 2775 "cplus.met"
#line 2775 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2775 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2775 "cplus.met"
                }
#line 2775 "cplus.met"
                break;
#line 2775 "cplus.met"
#line 2776 "cplus.met"
            case DELETE : 
#line 2776 "cplus.met"
#line 2776 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 45, cplus))== (PPTREE) -1 ) {
#line 2776 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2776 "cplus.met"
                }
#line 2776 "cplus.met"
                break;
#line 2776 "cplus.met"
            default :
#line 2776 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2776 "cplus.met"
                break;
#line 2776 "cplus.met"
        }
#line 2776 "cplus.met"
#line 2778 "cplus.met"
        retTree = valTree ;
#line 2778 "cplus.met"
#line 2778 "cplus.met"
    }
#line 2778 "cplus.met"
#line 2780 "cplus.met"
    {
#line 2780 "cplus.met"
        _retValue = retTree ;
#line 2780 "cplus.met"
        goto alloc_expression_ret;
#line 2780 "cplus.met"
        
#line 2780 "cplus.met"
    }
#line 2780 "cplus.met"
#line 2780 "cplus.met"
#line 2780 "cplus.met"

#line 2781 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2781 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2781 "cplus.met"
return((PPTREE) 0);
#line 2781 "cplus.met"

#line 2781 "cplus.met"
alloc_expression_exit :
#line 2781 "cplus.met"

#line 2781 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2781 "cplus.met"
    _funcLevel--;
#line 2781 "cplus.met"
    return((PPTREE) -1) ;
#line 2781 "cplus.met"

#line 2781 "cplus.met"
alloc_expression_ret :
#line 2781 "cplus.met"
    
#line 2781 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2781 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2781 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2781 "cplus.met"
    return _retValue ;
#line 2781 "cplus.met"
}
#line 2781 "cplus.met"

#line 2781 "cplus.met"
#line 2812 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2812 "cplus.met"
{
#line 2812 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2812 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2812 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2812 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2812 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2812 "cplus.met"
#line 2812 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2812 "cplus.met"
#line 2812 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2812 "cplus.met"
#line 2814 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2814 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2814 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2814 "cplus.met"
    } else {
#line 2814 "cplus.met"
        tokenAhead = 0 ;
#line 2814 "cplus.met"
    }
#line 2814 "cplus.met"
#line 2815 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 99, cplus))){
#line 2815 "cplus.met"
#line 2816 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2816 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2816 "cplus.met"
        }
#line 2816 "cplus.met"
    }
#line 2816 "cplus.met"
#line 2817 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2817 "cplus.met"
#line 2818 "cplus.met"
#line 2819 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2819 "cplus.met"
#line 2821 "cplus.met"
#line 2821 "cplus.met"
            _addlist1 = list ;
#line 2821 "cplus.met"
#line 2820 "cplus.met"
            do {
#line 2820 "cplus.met"
#line 2821 "cplus.met"
                {
#line 2821 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2821 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2821 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2821 "cplus.met"
                    }
#line 2821 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2821 "cplus.met"
                }
#line 2821 "cplus.met"
#line 2821 "cplus.met"
                if (list){
#line 2821 "cplus.met"
#line 2821 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2821 "cplus.met"
                } else {
#line 2821 "cplus.met"
#line 2821 "cplus.met"
                    list = _addlist1 ;
#line 2821 "cplus.met"
                }
#line 2821 "cplus.met"
#line 2821 "cplus.met"
#line 2822 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2822 "cplus.met"
        }
#line 2822 "cplus.met"
#line 2823 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2823 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2823 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2823 "cplus.met"
        } else {
#line 2823 "cplus.met"
            tokenAhead = 0 ;
#line 2823 "cplus.met"
        }
#line 2823 "cplus.met"
#line 2824 "cplus.met"
        {
#line 2824 "cplus.met"
            PPTREE _ptTree0=0;
#line 2824 "cplus.met"
            {
#line 2824 "cplus.met"
                PPTREE _ptRes1=0;
#line 2824 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 2824 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2824 "cplus.met"
                _ptTree0=_ptRes1;
#line 2824 "cplus.met"
            }
#line 2824 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2824 "cplus.met"
        }
#line 2824 "cplus.met"
#line 2824 "cplus.met"
#line 2824 "cplus.met"
    }
#line 2824 "cplus.met"
#line 2826 "cplus.met"
    {
#line 2826 "cplus.met"
        _retValue = retTree ;
#line 2826 "cplus.met"
        goto allocation_expression_ret;
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
allocation_expression_exit :
#line 2827 "cplus.met"

#line 2827 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2827 "cplus.met"
    _funcLevel--;
#line 2827 "cplus.met"
    return((PPTREE) -1) ;
#line 2827 "cplus.met"

#line 2827 "cplus.met"
allocation_expression_ret :
#line 2827 "cplus.met"
    
#line 2827 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
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
#line 2616 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2616 "cplus.met"
{
#line 2616 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2616 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2616 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2616 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2616 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2616 "cplus.met"
#line 2616 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2616 "cplus.met"
#line 2618 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 57, cplus))== (PPTREE) -1 ) {
#line 2618 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2618 "cplus.met"
    }
#line 2618 "cplus.met"
#line 2619 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2619 "cplus.met"
#line 2620 "cplus.met"
        {
#line 2620 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2620 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2620 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2620 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 57, cplus))== (PPTREE) -1 ) {
#line 2620 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2620 "cplus.met"
            }
#line 2620 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2620 "cplus.met"
            expTree=_ptRes0;
#line 2620 "cplus.met"
        }
#line 2620 "cplus.met"
    } 
#line 2620 "cplus.met"
#line 2621 "cplus.met"
    {
#line 2621 "cplus.met"
        _retValue = expTree ;
#line 2621 "cplus.met"
        goto and_expression_ret;
#line 2621 "cplus.met"
        
#line 2621 "cplus.met"
    }
#line 2621 "cplus.met"
#line 2621 "cplus.met"
#line 2621 "cplus.met"

#line 2622 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2622 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2622 "cplus.met"
return((PPTREE) 0);
#line 2622 "cplus.met"

#line 2622 "cplus.met"
and_expression_exit :
#line 2622 "cplus.met"

#line 2622 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2622 "cplus.met"
    _funcLevel--;
#line 2622 "cplus.met"
    return((PPTREE) -1) ;
#line 2622 "cplus.met"

#line 2622 "cplus.met"
and_expression_ret :
#line 2622 "cplus.met"
    
#line 2622 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2622 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2622 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2622 "cplus.met"
    return _retValue ;
#line 2622 "cplus.met"
}
#line 2622 "cplus.met"

#line 2622 "cplus.met"
#line 2462 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2462 "cplus.met"
{
#line 2462 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2462 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2462 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2462 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2462 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2462 "cplus.met"
#line 2462 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2462 "cplus.met"
#line 2464 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2464 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2464 "cplus.met"
    }
#line 2464 "cplus.met"
#line 2465 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2465 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2465 "cplus.met"
#line 2466 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2466 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2466 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2466 "cplus.met"
        } else {
#line 2466 "cplus.met"
            tokenAhead = 0 ;
#line 2466 "cplus.met"
        }
#line 2466 "cplus.met"
    }
#line 2466 "cplus.met"
#line 2467 "cplus.met"
    {
#line 2467 "cplus.met"
        _retValue = retTree ;
#line 2467 "cplus.met"
        goto arg_declarator_ret;
#line 2467 "cplus.met"
        
#line 2467 "cplus.met"
    }
#line 2467 "cplus.met"
#line 2467 "cplus.met"
#line 2467 "cplus.met"

#line 2468 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2468 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2468 "cplus.met"
return((PPTREE) 0);
#line 2468 "cplus.met"

#line 2468 "cplus.met"
arg_declarator_exit :
#line 2468 "cplus.met"

#line 2468 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2468 "cplus.met"
    _funcLevel--;
#line 2468 "cplus.met"
    return((PPTREE) -1) ;
#line 2468 "cplus.met"

#line 2468 "cplus.met"
arg_declarator_ret :
#line 2468 "cplus.met"
    
#line 2468 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2468 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2468 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2468 "cplus.met"
    return _retValue ;
#line 2468 "cplus.met"
}
#line 2468 "cplus.met"

#line 2468 "cplus.met"
#line 2445 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2445 "cplus.met"
{
#line 2445 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2445 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2445 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2445 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2445 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2445 "cplus.met"
#line 2445 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2445 "cplus.met"
#line 2447 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2447 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2447 "cplus.met"
    }
#line 2447 "cplus.met"
#line 2448 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 46, cplus)){
#line 2448 "cplus.met"
#line 2449 "cplus.met"
        {
#line 2449 "cplus.met"
            PPTREE _ptRes0=0;
#line 2449 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2449 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2449 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2449 "cplus.met"
            valTree=_ptRes0;
#line 2449 "cplus.met"
        }
#line 2449 "cplus.met"
    } else {
#line 2449 "cplus.met"
#line 2451 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2451 "cplus.met"
#line 2452 "cplus.met"
            {
#line 2452 "cplus.met"
                PPTREE _ptRes0=0;
#line 2452 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2452 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2452 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2452 "cplus.met"
                valTree=_ptRes0;
#line 2452 "cplus.met"
            }
#line 2452 "cplus.met"
        } else {
#line 2452 "cplus.met"
#line 2454 "cplus.met"
            valTree = retTree ;
#line 2454 "cplus.met"
        }
#line 2454 "cplus.met"
    }
#line 2454 "cplus.met"
#line 2455 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2455 "cplus.met"
#line 2456 "cplus.met"
#line 2457 "cplus.met"
        {
#line 2457 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2457 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2457 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2457 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2457 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2457 "cplus.met"
            }
#line 2457 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2457 "cplus.met"
            valTree=_ptRes0;
#line 2457 "cplus.met"
        }
#line 2457 "cplus.met"
#line 2457 "cplus.met"
#line 2457 "cplus.met"
    }
#line 2457 "cplus.met"
#line 2459 "cplus.met"
    {
#line 2459 "cplus.met"
        _retValue = valTree ;
#line 2459 "cplus.met"
        goto arg_declarator_base_ret;
#line 2459 "cplus.met"
        
#line 2459 "cplus.met"
    }
#line 2459 "cplus.met"
#line 2459 "cplus.met"
#line 2459 "cplus.met"

#line 2460 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2460 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2460 "cplus.met"
return((PPTREE) 0);
#line 2460 "cplus.met"

#line 2460 "cplus.met"
arg_declarator_base_exit :
#line 2460 "cplus.met"

#line 2460 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2460 "cplus.met"
    _funcLevel--;
#line 2460 "cplus.met"
    return((PPTREE) -1) ;
#line 2460 "cplus.met"

#line 2460 "cplus.met"
arg_declarator_base_ret :
#line 2460 "cplus.met"
    
#line 2460 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2460 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2460 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2460 "cplus.met"
    return _retValue ;
#line 2460 "cplus.met"
}
#line 2460 "cplus.met"

#line 2460 "cplus.met"
#line 2470 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2470 "cplus.met"
{
#line 2470 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2470 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2470 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2470 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2470 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2470 "cplus.met"
#line 2470 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2470 "cplus.met"
#line 2472 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2472 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2472 "cplus.met"
    }
#line 2472 "cplus.met"
#line 2473 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2473 "cplus.met"
#line 2474 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2474 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2474 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2474 "cplus.met"
        } else {
#line 2474 "cplus.met"
            tokenAhead = 0 ;
#line 2474 "cplus.met"
        }
#line 2474 "cplus.met"
    }
#line 2474 "cplus.met"
#line 2475 "cplus.met"
    {
#line 2475 "cplus.met"
        _retValue = retTree ;
#line 2475 "cplus.met"
        goto arg_declarator_followed_ret;
#line 2475 "cplus.met"
        
#line 2475 "cplus.met"
    }
#line 2475 "cplus.met"
#line 2475 "cplus.met"
#line 2475 "cplus.met"

#line 2476 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2476 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2476 "cplus.met"
return((PPTREE) 0);
#line 2476 "cplus.met"

#line 2476 "cplus.met"
arg_declarator_followed_exit :
#line 2476 "cplus.met"

#line 2476 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2476 "cplus.met"
    _funcLevel--;
#line 2476 "cplus.met"
    return((PPTREE) -1) ;
#line 2476 "cplus.met"

#line 2476 "cplus.met"
arg_declarator_followed_ret :
#line 2476 "cplus.met"
    
#line 2476 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
#line 2476 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2476 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2476 "cplus.met"
    return _retValue ;
#line 2476 "cplus.met"
}
#line 2476 "cplus.met"

#line 2476 "cplus.met"
#line 2478 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2478 "cplus.met"
{
#line 2478 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2478 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2478 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2478 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2478 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2478 "cplus.met"
#line 2478 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2478 "cplus.met"
#line 2480 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 2480 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2480 "cplus.met"
    }
#line 2480 "cplus.met"
#line 2481 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 46, cplus)){
#line 2481 "cplus.met"
#line 2482 "cplus.met"
        {
#line 2482 "cplus.met"
            PPTREE _ptRes0=0;
#line 2482 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
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
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2484 "cplus.met"
#line 2485 "cplus.met"
            {
#line 2485 "cplus.met"
                PPTREE _ptRes0=0;
#line 2485 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2485 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2485 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2485 "cplus.met"
                valTree=_ptRes0;
#line 2485 "cplus.met"
            }
#line 2485 "cplus.met"
        } else {
#line 2485 "cplus.met"
#line 2487 "cplus.met"
            valTree = retTree ;
#line 2487 "cplus.met"
        }
#line 2487 "cplus.met"
    }
#line 2487 "cplus.met"
#line 2488 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2488 "cplus.met"
#line 2489 "cplus.met"
#line 2490 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 144, cplus)){
#line 2490 "cplus.met"
#line 2491 "cplus.met"
            {
#line 2491 "cplus.met"
                PPTREE _ptRes0=0;
#line 2491 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2491 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2491 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2491 "cplus.met"
                valTree=_ptRes0;
#line 2491 "cplus.met"
            }
#line 2491 "cplus.met"
        } else {
#line 2491 "cplus.met"
#line 2493 "cplus.met"
            {
#line 2493 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2493 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2493 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2493 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2493 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2493 "cplus.met"
                }
#line 2493 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2493 "cplus.met"
                valTree=_ptRes0;
#line 2493 "cplus.met"
            }
#line 2493 "cplus.met"
        }
#line 2493 "cplus.met"
#line 2493 "cplus.met"
#line 2493 "cplus.met"
    }
#line 2493 "cplus.met"
#line 2495 "cplus.met"
    {
#line 2495 "cplus.met"
        _retValue = valTree ;
#line 2495 "cplus.met"
        goto arg_declarator_type_ret;
#line 2495 "cplus.met"
        
#line 2495 "cplus.met"
    }
#line 2495 "cplus.met"
#line 2495 "cplus.met"
#line 2495 "cplus.met"

#line 2496 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2496 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2496 "cplus.met"
return((PPTREE) 0);
#line 2496 "cplus.met"

#line 2496 "cplus.met"
arg_declarator_type_exit :
#line 2496 "cplus.met"

#line 2496 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2496 "cplus.met"
    _funcLevel--;
#line 2496 "cplus.met"
    return((PPTREE) -1) ;
#line 2496 "cplus.met"

#line 2496 "cplus.met"
arg_declarator_type_ret :
#line 2496 "cplus.met"
    
#line 2496 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2496 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2496 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2496 "cplus.met"
    return _retValue ;
#line 2496 "cplus.met"
}
#line 2496 "cplus.met"

#line 2496 "cplus.met"
#line 2173 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2173 "cplus.met"
{
#line 2173 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2173 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2173 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2173 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2173 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2173 "cplus.met"
#line 2173 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2173 "cplus.met"
#line 2175 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2175 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2175 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2175 "cplus.met"
    } else {
#line 2175 "cplus.met"
        tokenAhead = 0 ;
#line 2175 "cplus.met"
    }
#line 2175 "cplus.met"
#line 2176 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 12, cplus)){
#line 2176 "cplus.met"
#line 2177 "cplus.met"
        {
#line 2177 "cplus.met"
            PPTREE _ptRes0=0;
#line 2177 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2177 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2177 "cplus.met"
            retTree=_ptRes0;
#line 2177 "cplus.met"
        }
#line 2177 "cplus.met"
    } else {
#line 2177 "cplus.met"
#line 2179 "cplus.met"
        {
#line 2179 "cplus.met"
            PPTREE _ptRes0=0;
#line 2179 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2179 "cplus.met"
            retTree=_ptRes0;
#line 2179 "cplus.met"
        }
#line 2179 "cplus.met"
    }
#line 2179 "cplus.met"
#line 2180 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2180 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2180 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2180 "cplus.met"
    } else {
#line 2180 "cplus.met"
        tokenAhead = 0 ;
#line 2180 "cplus.met"
    }
#line 2180 "cplus.met"
#line 2181 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 60, cplus)){
#line 2181 "cplus.met"
#line 2182 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2182 "cplus.met"
#line 2182 "cplus.met"
    }
#line 2182 "cplus.met"
#line 2183 "cplus.met"
    {
#line 2183 "cplus.met"
        _retValue = retTree ;
#line 2183 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2183 "cplus.met"
        
#line 2183 "cplus.met"
    }
#line 2183 "cplus.met"
#line 2183 "cplus.met"
#line 2183 "cplus.met"

#line 2184 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2184 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2184 "cplus.met"
return((PPTREE) 0);
#line 2184 "cplus.met"

#line 2184 "cplus.met"
arg_typ_declarator_exit :
#line 2184 "cplus.met"

#line 2184 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2184 "cplus.met"
    _funcLevel--;
#line 2184 "cplus.met"
    return((PPTREE) -1) ;
#line 2184 "cplus.met"

#line 2184 "cplus.met"
arg_typ_declarator_ret :
#line 2184 "cplus.met"
    
#line 2184 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2184 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2184 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2184 "cplus.met"
    return _retValue ;
#line 2184 "cplus.met"
}
#line 2184 "cplus.met"

#line 2184 "cplus.met"
#line 2407 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2407 "cplus.met"
{
#line 2407 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2407 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2407 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2407 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2407 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2407 "cplus.met"
#line 2407 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2407 "cplus.met"
#line 2407 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2407 "cplus.met"
#line 2409 "cplus.met"
     { int followed = 0;
#line 2409 "cplus.met"
#line 2410 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2410 "cplus.met"
#line 2411 "cplus.met"
         followed = 1;
#line 2411 "cplus.met"
    } else {
#line 2411 "cplus.met"
#line 2413 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus))== (PPTREE) -1 ) {
#line 2413 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2413 "cplus.met"
        }
#line 2413 "cplus.met"
    }
#line 2413 "cplus.met"
#line 2414 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2414 "cplus.met"
#line 2415 "cplus.met"
#line 2416 "cplus.met"
     {  int exit = 0 ; 
#line 2416 "cplus.met"
#line 2416 "cplus.met"
    _addlist1 = retTree ;
#line 2416 "cplus.met"
#line 2417 "cplus.met"
    while ( followed && !exit ) { 
#line 2417 "cplus.met"
#line 2418 "cplus.met"
#line 2419 "cplus.met"
         followed = 0;
#line 2419 "cplus.met"
#line 2420 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2420 "cplus.met"
#line 2421 "cplus.met"
#line 2422 "cplus.met"
             followed = 1;
#line 2422 "cplus.met"
#line 2423 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2423 "cplus.met"
#line 2423 "cplus.met"
            if (retTree){
#line 2423 "cplus.met"
#line 2423 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2423 "cplus.met"
            } else {
#line 2423 "cplus.met"
#line 2423 "cplus.met"
                retTree = _addlist1 ;
#line 2423 "cplus.met"
            }
#line 2423 "cplus.met"
#line 2423 "cplus.met"
#line 2423 "cplus.met"
        } else {
#line 2423 "cplus.met"
#line 2426 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2426 "cplus.met"
#line 2427 "cplus.met"
#line 2428 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2428 "cplus.met"
#line 2428 "cplus.met"
                if (retTree){
#line 2428 "cplus.met"
#line 2428 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2428 "cplus.met"
                } else {
#line 2428 "cplus.met"
#line 2428 "cplus.met"
                    retTree = _addlist1 ;
#line 2428 "cplus.met"
                }
#line 2428 "cplus.met"
#line 2428 "cplus.met"
#line 2428 "cplus.met"
            } else {
#line 2428 "cplus.met"
#line 2431 "cplus.met"
#line 2432 "cplus.met"
                {
#line 2432 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2432 "cplus.met"
                    {
#line 2432 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2432 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2432 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2432 "cplus.met"
                    }
#line 2432 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2432 "cplus.met"
                }
#line 2432 "cplus.met"
#line 2432 "cplus.met"
                if (retTree){
#line 2432 "cplus.met"
#line 2432 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2432 "cplus.met"
                } else {
#line 2432 "cplus.met"
#line 2432 "cplus.met"
                    retTree = _addlist1 ;
#line 2432 "cplus.met"
                }
#line 2432 "cplus.met"
#line 2433 "cplus.met"
                 exit = 1 ;
#line 2433 "cplus.met"
#line 2434 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2434 "cplus.met"
#line 2434 "cplus.met"
                }
#line 2434 "cplus.met"
#line 2434 "cplus.met"
            }
#line 2434 "cplus.met"
        }
#line 2434 "cplus.met"
#line 2434 "cplus.met"
    } 
#line 2434 "cplus.met"
#line 2438 "cplus.met"
    if ((! ( exit )) && 
#line 2438 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2438 "cplus.met"
#line 2439 "cplus.met"
        {
#line 2439 "cplus.met"
            PPTREE _ptTree0=0;
#line 2439 "cplus.met"
            {
#line 2439 "cplus.met"
                PPTREE _ptRes1=0;
#line 2439 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2439 "cplus.met"
                _ptTree0=_ptRes1;
#line 2439 "cplus.met"
            }
#line 2439 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2439 "cplus.met"
        }
#line 2439 "cplus.met"
#line 2439 "cplus.met"
    }
#line 2439 "cplus.met"
#line 2440 "cplus.met"
     } } 
#line 2440 "cplus.met"
#line 2440 "cplus.met"
#line 2442 "cplus.met"
    {
#line 2442 "cplus.met"
        _retValue = retTree ;
#line 2442 "cplus.met"
        goto arg_typ_list_ret;
#line 2442 "cplus.met"
        
#line 2442 "cplus.met"
    }
#line 2442 "cplus.met"
#line 2442 "cplus.met"
#line 2442 "cplus.met"

#line 2443 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2443 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2443 "cplus.met"
return((PPTREE) 0);
#line 2443 "cplus.met"

#line 2443 "cplus.met"
arg_typ_list_exit :
#line 2443 "cplus.met"

#line 2443 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2443 "cplus.met"
    _funcLevel--;
#line 2443 "cplus.met"
    return((PPTREE) -1) ;
#line 2443 "cplus.met"

#line 2443 "cplus.met"
arg_typ_list_ret :
#line 2443 "cplus.met"
    
#line 2443 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2443 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2443 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2443 "cplus.met"
    return _retValue ;
#line 2443 "cplus.met"
}
#line 2443 "cplus.met"

#line 2443 "cplus.met"
#line 2107 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2107 "cplus.met"
{
#line 2107 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2107 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2107 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2107 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2107 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2107 "cplus.met"
#line 2107 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2107 "cplus.met"
#line 2109 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2109 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2109 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2109 "cplus.met"
    } else {
#line 2109 "cplus.met"
        tokenAhead = 0 ;
#line 2109 "cplus.met"
    }
#line 2109 "cplus.met"
#line 2110 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2110 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2110 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2110 "cplus.met"
    } else {
#line 2110 "cplus.met"
        tokenAhead = 0 ;
#line 2110 "cplus.met"
    }
#line 2110 "cplus.met"
#line 2111 "cplus.met"
    {
#line 2111 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2111 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2111 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2111 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2111 "cplus.met"
        }
#line 2111 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2111 "cplus.met"
        retTree=_ptRes0;
#line 2111 "cplus.met"
    }
#line 2111 "cplus.met"
#line 2112 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2112 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2112 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2112 "cplus.met"
    } else {
#line 2112 "cplus.met"
        tokenAhead = 0 ;
#line 2112 "cplus.met"
    }
#line 2112 "cplus.met"
#line 2113 "cplus.met"
    {
#line 2113 "cplus.met"
        _retValue = retTree ;
#line 2113 "cplus.met"
        goto asm_call_ret;
#line 2113 "cplus.met"
        
#line 2113 "cplus.met"
    }
#line 2113 "cplus.met"
#line 2113 "cplus.met"
#line 2113 "cplus.met"

#line 2114 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2114 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2114 "cplus.met"
return((PPTREE) 0);
#line 2114 "cplus.met"

#line 2114 "cplus.met"
asm_call_exit :
#line 2114 "cplus.met"

#line 2114 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2114 "cplus.met"
    _funcLevel--;
#line 2114 "cplus.met"
    return((PPTREE) -1) ;
#line 2114 "cplus.met"

#line 2114 "cplus.met"
asm_call_ret :
#line 2114 "cplus.met"
    
#line 2114 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2114 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2114 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2114 "cplus.met"
    return _retValue ;
#line 2114 "cplus.met"
}
#line 2114 "cplus.met"

#line 2114 "cplus.met"
#line 991 "cplus.met"
PPTREE cplus::asm_declaration ( int error_free)
#line 991 "cplus.met"
{
#line 991 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 991 "cplus.met"
    int _value,_nbPre = 0 ;
#line 991 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 991 "cplus.met"
    int _Debug = TRACE_RULE("asm_declaration",TRACE_ENTER,(PPTREE)0);
#line 991 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 991 "cplus.met"
#line 991 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 991 "cplus.met"
#line 993 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 993 "cplus.met"
    if (  !SEE_TOKEN( ASM,"asm") || !(CommTerm(),1)) {
#line 993 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"asm")
#line 993 "cplus.met"
    } else {
#line 993 "cplus.met"
        tokenAhead = 0 ;
#line 993 "cplus.met"
    }
#line 993 "cplus.met"
#line 994 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 994 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 994 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,"(")
#line 994 "cplus.met"
    } else {
#line 994 "cplus.met"
        tokenAhead = 0 ;
#line 994 "cplus.met"
    }
#line 994 "cplus.met"
#line 995 "cplus.met"
    {
#line 995 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 995 "cplus.met"
        _ptRes0= MakeTree(ASM, 1);
#line 995 "cplus.met"
        {
#line 995 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 995 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 995 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 995 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 995 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                TOKEN_EXIT(asm_declaration_exit,"STRING")
#line 995 "cplus.met"
            } else {
#line 995 "cplus.met"
                tokenAhead = 0 ;
#line 995 "cplus.met"
            }
#line 995 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 995 "cplus.met"
            _ptTree0=_ptRes1;
#line 995 "cplus.met"
        }
#line 995 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 995 "cplus.met"
        retTree=_ptRes0;
#line 995 "cplus.met"
    }
#line 995 "cplus.met"
#line 996 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 996 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 996 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_declaration_exit,")")
#line 996 "cplus.met"
    } else {
#line 996 "cplus.met"
        tokenAhead = 0 ;
#line 996 "cplus.met"
    }
#line 996 "cplus.met"
#line 997 "cplus.met"
    {
#line 997 "cplus.met"
        _retValue = retTree ;
#line 997 "cplus.met"
        goto asm_declaration_ret;
#line 997 "cplus.met"
        
#line 997 "cplus.met"
    }
#line 997 "cplus.met"
#line 997 "cplus.met"
#line 997 "cplus.met"

#line 998 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 998 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 998 "cplus.met"
return((PPTREE) 0);
#line 998 "cplus.met"

#line 998 "cplus.met"
asm_declaration_exit :
#line 998 "cplus.met"

#line 998 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_EXIT,(PPTREE)0);
#line 998 "cplus.met"
    _funcLevel--;
#line 998 "cplus.met"
    return((PPTREE) -1) ;
#line 998 "cplus.met"

#line 998 "cplus.met"
asm_declaration_ret :
#line 998 "cplus.met"
    
#line 998 "cplus.met"
    _Debug = TRACE_RULE("asm_declaration",TRACE_RETURN,_retValue);
#line 998 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 998 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 998 "cplus.met"
    return _retValue ;
#line 998 "cplus.met"
}
#line 998 "cplus.met"

#line 998 "cplus.met"
#line 2543 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2543 "cplus.met"
{
#line 2543 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2543 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2543 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2543 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2543 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2543 "cplus.met"
#line 2544 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2544 "cplus.met"
    switch( lexEl.Value) {
#line 2544 "cplus.met"
#line 2545 "cplus.met"
        case EGAL : 
#line 2545 "cplus.met"
            tokenAhead = 0 ;
#line 2545 "cplus.met"
            CommTerm();
#line 2545 "cplus.met"
#line 2545 "cplus.met"
            {
#line 2545 "cplus.met"
                PPTREE _ptTree0=0;
#line 2545 "cplus.met"
                {
#line 2545 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2545 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2545 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2545 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2545 "cplus.met"
                    }
#line 2545 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2545 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2545 "cplus.met"
                }
#line 2545 "cplus.met"
                _retValue =_ptTree0;
#line 2545 "cplus.met"
                goto assignment_end_ret;
#line 2545 "cplus.met"
            }
#line 2545 "cplus.met"
            break;
#line 2545 "cplus.met"
#line 2546 "cplus.met"
        case ETOIEGAL : 
#line 2546 "cplus.met"
            tokenAhead = 0 ;
#line 2546 "cplus.met"
            CommTerm();
#line 2546 "cplus.met"
#line 2546 "cplus.met"
            {
#line 2546 "cplus.met"
                PPTREE _ptTree0=0;
#line 2546 "cplus.met"
                {
#line 2546 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2546 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2546 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2546 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2546 "cplus.met"
                    }
#line 2546 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2546 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2546 "cplus.met"
                }
#line 2546 "cplus.met"
                _retValue =_ptTree0;
#line 2546 "cplus.met"
                goto assignment_end_ret;
#line 2546 "cplus.met"
            }
#line 2546 "cplus.met"
            break;
#line 2546 "cplus.met"
#line 2547 "cplus.met"
        case META : 
#line 2547 "cplus.met"
        case SLASEGAL : 
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
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2547 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case POURCEGAL : 
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
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2548 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case PLUSEGAL : 
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
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2549 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
#line 2550 "cplus.met"
        case TIREEGAL : 
#line 2550 "cplus.met"
            tokenAhead = 0 ;
#line 2550 "cplus.met"
            CommTerm();
#line 2550 "cplus.met"
#line 2550 "cplus.met"
            {
#line 2550 "cplus.met"
                PPTREE _ptTree0=0;
#line 2550 "cplus.met"
                {
#line 2550 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2550 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2550 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2550 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2550 "cplus.met"
                    }
#line 2550 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2550 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2550 "cplus.met"
                }
#line 2550 "cplus.met"
                _retValue =_ptTree0;
#line 2550 "cplus.met"
                goto assignment_end_ret;
#line 2550 "cplus.met"
            }
#line 2550 "cplus.met"
            break;
#line 2550 "cplus.met"
#line 2551 "cplus.met"
        case INFEINFEEGAL : 
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
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2551 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case SUPESUPEEGAL : 
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
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2552 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case ETCOEGAL : 
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
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2553 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case VBAREGAL : 
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
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2554 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case CHAPEGAL : 
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
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2555 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        default :
#line 2555 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2555 "cplus.met"
            break;
#line 2555 "cplus.met"
    }
#line 2555 "cplus.met"
#line 2555 "cplus.met"
#line 2556 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2556 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2556 "cplus.met"
return((PPTREE) 0);
#line 2556 "cplus.met"

#line 2556 "cplus.met"
assignment_end_exit :
#line 2556 "cplus.met"

#line 2556 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2556 "cplus.met"
    _funcLevel--;
#line 2556 "cplus.met"
    return((PPTREE) -1) ;
#line 2556 "cplus.met"

#line 2556 "cplus.met"
assignment_end_ret :
#line 2556 "cplus.met"
    
#line 2556 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2556 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2556 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2556 "cplus.met"
    return _retValue ;
#line 2556 "cplus.met"
}
#line 2556 "cplus.met"

#line 2556 "cplus.met"
