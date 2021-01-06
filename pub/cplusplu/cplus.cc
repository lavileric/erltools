/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2329 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2329 "cplus.met"
{
#line 2329 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2329 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2329 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2329 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2329 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2329 "cplus.met"
#line 2329 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2329 "cplus.met"
#line 2331 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 121, cplus)){
#line 2331 "cplus.met"
#line 2332 "cplus.met"
        {
#line 2332 "cplus.met"
            PPTREE _ptTree0=0;
#line 2332 "cplus.met"
            {
#line 2332 "cplus.met"
                PPTREE _ptTree1=0;
#line 2332 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2332 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2332 "cplus.met"
                }
#line 2332 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2332 "cplus.met"
            }
#line 2332 "cplus.met"
            _retValue =_ptTree0;
#line 2332 "cplus.met"
            goto abstract_declarator_ret;
#line 2332 "cplus.met"
        }
#line 2332 "cplus.met"
    }
#line 2332 "cplus.met"
#line 2333 "cplus.met"
    retTree = (PPTREE) 0;
#line 2333 "cplus.met"
#line 2334 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2334 "cplus.met"
    switch( lexEl.Value) {
#line 2334 "cplus.met"
#line 2335 "cplus.met"
        case ETOI : 
#line 2335 "cplus.met"
            tokenAhead = 0 ;
#line 2335 "cplus.met"
            CommTerm();
#line 2335 "cplus.met"
#line 2335 "cplus.met"
            {
#line 2335 "cplus.met"
                PPTREE _ptTree0=0;
#line 2335 "cplus.met"
                {
#line 2335 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2335 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2335 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2335 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2335 "cplus.met"
                    }
#line 2335 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2335 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2335 "cplus.met"
                }
#line 2335 "cplus.met"
                _retValue =_ptTree0;
#line 2335 "cplus.met"
                goto abstract_declarator_ret;
#line 2335 "cplus.met"
            }
#line 2335 "cplus.met"
            break;
#line 2335 "cplus.met"
#line 2336 "cplus.met"
        case ETCO : 
#line 2336 "cplus.met"
            tokenAhead = 0 ;
#line 2336 "cplus.met"
            CommTerm();
#line 2336 "cplus.met"
#line 2336 "cplus.met"
            {
#line 2336 "cplus.met"
                PPTREE _ptTree0=0;
#line 2336 "cplus.met"
                {
#line 2336 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2336 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2336 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2336 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2336 "cplus.met"
                    }
#line 2336 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2336 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2336 "cplus.met"
                }
#line 2336 "cplus.met"
                _retValue =_ptTree0;
#line 2336 "cplus.met"
                goto abstract_declarator_ret;
#line 2336 "cplus.met"
            }
#line 2336 "cplus.met"
            break;
#line 2336 "cplus.met"
#line 2337 "cplus.met"
        case TILD : 
#line 2337 "cplus.met"
            tokenAhead = 0 ;
#line 2337 "cplus.met"
            CommTerm();
#line 2337 "cplus.met"
#line 2337 "cplus.met"
            {
#line 2337 "cplus.met"
                PPTREE _ptTree0=0;
#line 2337 "cplus.met"
                {
#line 2337 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2337 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2337 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2337 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2337 "cplus.met"
                    }
#line 2337 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2337 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2337 "cplus.met"
                }
#line 2337 "cplus.met"
                _retValue =_ptTree0;
#line 2337 "cplus.met"
                goto abstract_declarator_ret;
#line 2337 "cplus.met"
            }
#line 2337 "cplus.met"
            break;
#line 2337 "cplus.met"
#line 2341 "cplus.met"
        case POUV : 
#line 2341 "cplus.met"
            tokenAhead = 0 ;
#line 2341 "cplus.met"
            CommTerm();
#line 2341 "cplus.met"
#line 2339 "cplus.met"
#line 2340 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2340 "cplus.met"
#line 2341 "cplus.met"
                
#line 2341 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2341 "cplus.met"
                goto abstract_declarator_exit;
#line 2341 "cplus.met"
#line 2341 "cplus.met"
            }
#line 2341 "cplus.met"
#line 2342 "cplus.met"
            {
#line 2342 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2342 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2342 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2342 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2342 "cplus.met"
                }
#line 2342 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2342 "cplus.met"
                retTree=_ptRes0;
#line 2342 "cplus.met"
            }
#line 2342 "cplus.met"
#line 2343 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2343 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2343 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2343 "cplus.met"
            } else {
#line 2343 "cplus.met"
                tokenAhead = 0 ;
#line 2343 "cplus.met"
            }
#line 2343 "cplus.met"
#line 2344 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 47, cplus)){
#line 2344 "cplus.met"
#line 2345 "cplus.met"
                                         { PPTREE theTree ;
#line 2345 "cplus.met"
                                    theTree = valTree ;
#line 2345 "cplus.met"
                                    if (theTree) {
#line 2345 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2345 "cplus.met"
                                     if (NumberTree(theTree)
#line 2345 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2345 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2345 "cplus.met"
                                     else
#line 2345 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2345 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2345 "cplus.met"
                                        /* modif portage sun */
#line 2345 "cplus.met"
                                        retTree = valTree;
#line 2345 "cplus.met"
                                    }
#line 2345 "cplus.met"
                                       }
#line 2345 "cplus.met"
                                
#line 2345 "cplus.met"
            }
#line 2345 "cplus.met"
#line 2345 "cplus.met"
            break;
#line 2345 "cplus.met"
#line 2362 "cplus.met"
        case META : 
#line 2362 "cplus.met"
        case IDENT : 
#line 2362 "cplus.met"
#line 2363 "cplus.met"
#line 2364 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 2364 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2364 "cplus.met"
            }
#line 2364 "cplus.met"
#line 2365 "cplus.met"
            {
#line 2365 "cplus.met"
                PPTREE _ptTree0=0;
#line 2365 "cplus.met"
                {
#line 2365 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2365 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2365 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2365 "cplus.met"
                    }
#line 2365 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2365 "cplus.met"
                }
#line 2365 "cplus.met"
                _retValue =_ptTree0;
#line 2365 "cplus.met"
                goto abstract_declarator_ret;
#line 2365 "cplus.met"
            }
#line 2365 "cplus.met"
#line 2365 "cplus.met"
            break;
#line 2365 "cplus.met"
#line 2371 "cplus.met"
        default : 
#line 2371 "cplus.met"
#line 2370 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 47, cplus)){
#line 2370 "cplus.met"
#line 2372 "cplus.met"
                retTree = valTree ;
#line 2372 "cplus.met"
#line 2372 "cplus.met"
            }
#line 2372 "cplus.met"
            break;
#line 2372 "cplus.met"
    }
#line 2372 "cplus.met"
#line 2374 "cplus.met"
    {
#line 2374 "cplus.met"
        _retValue = retTree ;
#line 2374 "cplus.met"
        goto abstract_declarator_ret;
#line 2374 "cplus.met"
        
#line 2374 "cplus.met"
    }
#line 2374 "cplus.met"
#line 2374 "cplus.met"
#line 2374 "cplus.met"

#line 2375 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2375 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2375 "cplus.met"
return((PPTREE) 0);
#line 2375 "cplus.met"

#line 2375 "cplus.met"
abstract_declarator_exit :
#line 2375 "cplus.met"

#line 2375 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2375 "cplus.met"
    _funcLevel--;
#line 2375 "cplus.met"
    return((PPTREE) -1) ;
#line 2375 "cplus.met"

#line 2375 "cplus.met"
abstract_declarator_ret :
#line 2375 "cplus.met"
    
#line 2375 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
#line 2375 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2375 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2375 "cplus.met"
    return _retValue ;
#line 2375 "cplus.met"
}
#line 2375 "cplus.met"

#line 2375 "cplus.met"
#line 2681 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2681 "cplus.met"
{
#line 2681 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2681 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2681 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2681 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2681 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2681 "cplus.met"
#line 2681 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2681 "cplus.met"
#line 2683 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2683 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2683 "cplus.met"
    }
#line 2683 "cplus.met"
#line 2684 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2684 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2684 "cplus.met"
#line 2685 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2685 "cplus.met"
        switch( lexEl.Value) {
#line 2685 "cplus.met"
#line 2686 "cplus.met"
            case PLUS : 
#line 2686 "cplus.met"
                tokenAhead = 0 ;
#line 2686 "cplus.met"
                CommTerm();
#line 2686 "cplus.met"
#line 2686 "cplus.met"
                {
#line 2686 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2686 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2686 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2686 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2686 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2686 "cplus.met"
                    }
#line 2686 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2686 "cplus.met"
                    expTree=_ptRes0;
#line 2686 "cplus.met"
                }
#line 2686 "cplus.met"
                break;
#line 2686 "cplus.met"
#line 2687 "cplus.met"
            case TIRE : 
#line 2687 "cplus.met"
                tokenAhead = 0 ;
#line 2687 "cplus.met"
                CommTerm();
#line 2687 "cplus.met"
#line 2687 "cplus.met"
                {
#line 2687 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2687 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2687 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2687 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2687 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2687 "cplus.met"
                    }
#line 2687 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2687 "cplus.met"
                    expTree=_ptRes0;
#line 2687 "cplus.met"
                }
#line 2687 "cplus.met"
                break;
#line 2687 "cplus.met"
            default :
#line 2687 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2687 "cplus.met"
                break;
#line 2687 "cplus.met"
        }
#line 2687 "cplus.met"
    } 
#line 2687 "cplus.met"
#line 2689 "cplus.met"
    {
#line 2689 "cplus.met"
        _retValue = expTree ;
#line 2689 "cplus.met"
        goto additive_expression_ret;
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
additive_expression_exit :
#line 2690 "cplus.met"

#line 2690 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2690 "cplus.met"
    _funcLevel--;
#line 2690 "cplus.met"
    return((PPTREE) -1) ;
#line 2690 "cplus.met"

#line 2690 "cplus.met"
additive_expression_ret :
#line 2690 "cplus.met"
    
#line 2690 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
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
#line 2781 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2781 "cplus.met"
{
#line 2781 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2781 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2781 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2781 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2781 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2781 "cplus.met"
#line 2781 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2781 "cplus.met"
#line 2783 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2783 "cplus.met"
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
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 45, cplus))== (PPTREE) -1 ) {
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
        {
#line 2789 "cplus.met"
            PPTREE _ptRes0=0;
#line 2789 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2789 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2789 "cplus.met"
            retTree=_ptRes0;
#line 2789 "cplus.met"
        }
#line 2789 "cplus.met"
#line 2789 "cplus.met"
#line 2789 "cplus.met"
    } else {
#line 2789 "cplus.met"
#line 2792 "cplus.met"
#line 2793 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2793 "cplus.met"
        switch( lexEl.Value) {
#line 2793 "cplus.met"
#line 2794 "cplus.met"
            case NEW : 
#line 2794 "cplus.met"
#line 2794 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2794 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2794 "cplus.met"
                }
#line 2794 "cplus.met"
                break;
#line 2794 "cplus.met"
#line 2795 "cplus.met"
            case DELETE : 
#line 2795 "cplus.met"
#line 2795 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 45, cplus))== (PPTREE) -1 ) {
#line 2795 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2795 "cplus.met"
                }
#line 2795 "cplus.met"
                break;
#line 2795 "cplus.met"
            default :
#line 2795 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2795 "cplus.met"
                break;
#line 2795 "cplus.met"
        }
#line 2795 "cplus.met"
#line 2797 "cplus.met"
        retTree = valTree ;
#line 2797 "cplus.met"
#line 2797 "cplus.met"
    }
#line 2797 "cplus.met"
#line 2799 "cplus.met"
    {
#line 2799 "cplus.met"
        _retValue = retTree ;
#line 2799 "cplus.met"
        goto alloc_expression_ret;
#line 2799 "cplus.met"
        
#line 2799 "cplus.met"
    }
#line 2799 "cplus.met"
#line 2799 "cplus.met"
#line 2799 "cplus.met"

#line 2800 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2800 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2800 "cplus.met"
return((PPTREE) 0);
#line 2800 "cplus.met"

#line 2800 "cplus.met"
alloc_expression_exit :
#line 2800 "cplus.met"

#line 2800 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2800 "cplus.met"
    _funcLevel--;
#line 2800 "cplus.met"
    return((PPTREE) -1) ;
#line 2800 "cplus.met"

#line 2800 "cplus.met"
alloc_expression_ret :
#line 2800 "cplus.met"
    
#line 2800 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2800 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2800 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2800 "cplus.met"
    return _retValue ;
#line 2800 "cplus.met"
}
#line 2800 "cplus.met"

#line 2800 "cplus.met"
#line 2831 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 2831 "cplus.met"
{
#line 2831 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2831 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2831 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2831 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2831 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2831 "cplus.met"
#line 2831 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2831 "cplus.met"
#line 2831 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2831 "cplus.met"
#line 2833 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2833 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 2833 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 2833 "cplus.met"
    } else {
#line 2833 "cplus.met"
        tokenAhead = 0 ;
#line 2833 "cplus.met"
    }
#line 2833 "cplus.met"
#line 2834 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 99, cplus))){
#line 2834 "cplus.met"
#line 2835 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2835 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2835 "cplus.met"
        }
#line 2835 "cplus.met"
    }
#line 2835 "cplus.met"
#line 2836 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2836 "cplus.met"
#line 2837 "cplus.met"
#line 2838 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 2838 "cplus.met"
#line 2840 "cplus.met"
#line 2840 "cplus.met"
            _addlist1 = list ;
#line 2840 "cplus.met"
#line 2839 "cplus.met"
            do {
#line 2839 "cplus.met"
#line 2840 "cplus.met"
                {
#line 2840 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2840 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2840 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 2840 "cplus.met"
                    }
#line 2840 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2840 "cplus.met"
                }
#line 2840 "cplus.met"
#line 2840 "cplus.met"
                if (list){
#line 2840 "cplus.met"
#line 2840 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2840 "cplus.met"
                } else {
#line 2840 "cplus.met"
#line 2840 "cplus.met"
                    list = _addlist1 ;
#line 2840 "cplus.met"
                }
#line 2840 "cplus.met"
#line 2840 "cplus.met"
#line 2841 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2841 "cplus.met"
        }
#line 2841 "cplus.met"
#line 2842 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2842 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2842 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 2842 "cplus.met"
        } else {
#line 2842 "cplus.met"
            tokenAhead = 0 ;
#line 2842 "cplus.met"
        }
#line 2842 "cplus.met"
#line 2843 "cplus.met"
        {
#line 2843 "cplus.met"
            PPTREE _ptTree0=0;
#line 2843 "cplus.met"
            {
#line 2843 "cplus.met"
                PPTREE _ptRes1=0;
#line 2843 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 2843 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2843 "cplus.met"
                _ptTree0=_ptRes1;
#line 2843 "cplus.met"
            }
#line 2843 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2843 "cplus.met"
        }
#line 2843 "cplus.met"
#line 2843 "cplus.met"
#line 2843 "cplus.met"
    }
#line 2843 "cplus.met"
#line 2845 "cplus.met"
    {
#line 2845 "cplus.met"
        _retValue = retTree ;
#line 2845 "cplus.met"
        goto allocation_expression_ret;
#line 2845 "cplus.met"
        
#line 2845 "cplus.met"
    }
#line 2845 "cplus.met"
#line 2845 "cplus.met"
#line 2845 "cplus.met"

#line 2846 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2846 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2846 "cplus.met"
return((PPTREE) 0);
#line 2846 "cplus.met"

#line 2846 "cplus.met"
allocation_expression_exit :
#line 2846 "cplus.met"

#line 2846 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2846 "cplus.met"
    _funcLevel--;
#line 2846 "cplus.met"
    return((PPTREE) -1) ;
#line 2846 "cplus.met"

#line 2846 "cplus.met"
allocation_expression_ret :
#line 2846 "cplus.met"
    
#line 2846 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 2846 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2846 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2846 "cplus.met"
    return _retValue ;
#line 2846 "cplus.met"
}
#line 2846 "cplus.met"

#line 2846 "cplus.met"
#line 2635 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2635 "cplus.met"
{
#line 2635 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2635 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2635 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2635 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2635 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2635 "cplus.met"
#line 2635 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2635 "cplus.met"
#line 2637 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 57, cplus))== (PPTREE) -1 ) {
#line 2637 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2637 "cplus.met"
    }
#line 2637 "cplus.met"
#line 2638 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2638 "cplus.met"
#line 2639 "cplus.met"
        {
#line 2639 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2639 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2639 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2639 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 57, cplus))== (PPTREE) -1 ) {
#line 2639 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2639 "cplus.met"
            }
#line 2639 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2639 "cplus.met"
            expTree=_ptRes0;
#line 2639 "cplus.met"
        }
#line 2639 "cplus.met"
    } 
#line 2639 "cplus.met"
#line 2640 "cplus.met"
    {
#line 2640 "cplus.met"
        _retValue = expTree ;
#line 2640 "cplus.met"
        goto and_expression_ret;
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
and_expression_exit :
#line 2641 "cplus.met"

#line 2641 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2641 "cplus.met"
    _funcLevel--;
#line 2641 "cplus.met"
    return((PPTREE) -1) ;
#line 2641 "cplus.met"

#line 2641 "cplus.met"
and_expression_ret :
#line 2641 "cplus.met"
    
#line 2641 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
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
#line 2481 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2481 "cplus.met"
{
#line 2481 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2481 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2481 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2481 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2481 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2481 "cplus.met"
#line 2481 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2481 "cplus.met"
#line 2483 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2483 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2483 "cplus.met"
    }
#line 2483 "cplus.met"
#line 2484 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2484 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2484 "cplus.met"
#line 2485 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2485 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2485 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2485 "cplus.met"
        } else {
#line 2485 "cplus.met"
            tokenAhead = 0 ;
#line 2485 "cplus.met"
        }
#line 2485 "cplus.met"
    }
#line 2485 "cplus.met"
#line 2486 "cplus.met"
    {
#line 2486 "cplus.met"
        _retValue = retTree ;
#line 2486 "cplus.met"
        goto arg_declarator_ret;
#line 2486 "cplus.met"
        
#line 2486 "cplus.met"
    }
#line 2486 "cplus.met"
#line 2486 "cplus.met"
#line 2486 "cplus.met"

#line 2487 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2487 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2487 "cplus.met"
return((PPTREE) 0);
#line 2487 "cplus.met"

#line 2487 "cplus.met"
arg_declarator_exit :
#line 2487 "cplus.met"

#line 2487 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2487 "cplus.met"
    _funcLevel--;
#line 2487 "cplus.met"
    return((PPTREE) -1) ;
#line 2487 "cplus.met"

#line 2487 "cplus.met"
arg_declarator_ret :
#line 2487 "cplus.met"
    
#line 2487 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2487 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2487 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2487 "cplus.met"
    return _retValue ;
#line 2487 "cplus.met"
}
#line 2487 "cplus.met"

#line 2487 "cplus.met"
#line 2464 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2464 "cplus.met"
{
#line 2464 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2464 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2464 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2464 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2464 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2464 "cplus.met"
#line 2464 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2464 "cplus.met"
#line 2466 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 2466 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2466 "cplus.met"
    }
#line 2466 "cplus.met"
#line 2467 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 46, cplus)){
#line 2467 "cplus.met"
#line 2468 "cplus.met"
        {
#line 2468 "cplus.met"
            PPTREE _ptRes0=0;
#line 2468 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2468 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2468 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2468 "cplus.met"
            valTree=_ptRes0;
#line 2468 "cplus.met"
        }
#line 2468 "cplus.met"
    } else {
#line 2468 "cplus.met"
#line 2470 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2470 "cplus.met"
#line 2471 "cplus.met"
            {
#line 2471 "cplus.met"
                PPTREE _ptRes0=0;
#line 2471 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2471 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2471 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2471 "cplus.met"
                valTree=_ptRes0;
#line 2471 "cplus.met"
            }
#line 2471 "cplus.met"
        } else {
#line 2471 "cplus.met"
#line 2473 "cplus.met"
            valTree = retTree ;
#line 2473 "cplus.met"
        }
#line 2473 "cplus.met"
    }
#line 2473 "cplus.met"
#line 2474 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2474 "cplus.met"
#line 2475 "cplus.met"
#line 2476 "cplus.met"
        {
#line 2476 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2476 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2476 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2476 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2476 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2476 "cplus.met"
            }
#line 2476 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2476 "cplus.met"
            valTree=_ptRes0;
#line 2476 "cplus.met"
        }
#line 2476 "cplus.met"
#line 2476 "cplus.met"
#line 2476 "cplus.met"
    }
#line 2476 "cplus.met"
#line 2478 "cplus.met"
    {
#line 2478 "cplus.met"
        _retValue = valTree ;
#line 2478 "cplus.met"
        goto arg_declarator_base_ret;
#line 2478 "cplus.met"
        
#line 2478 "cplus.met"
    }
#line 2478 "cplus.met"
#line 2478 "cplus.met"
#line 2478 "cplus.met"

#line 2479 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2479 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2479 "cplus.met"
return((PPTREE) 0);
#line 2479 "cplus.met"

#line 2479 "cplus.met"
arg_declarator_base_exit :
#line 2479 "cplus.met"

#line 2479 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2479 "cplus.met"
    _funcLevel--;
#line 2479 "cplus.met"
    return((PPTREE) -1) ;
#line 2479 "cplus.met"

#line 2479 "cplus.met"
arg_declarator_base_ret :
#line 2479 "cplus.met"
    
#line 2479 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2479 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2479 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2479 "cplus.met"
    return _retValue ;
#line 2479 "cplus.met"
}
#line 2479 "cplus.met"

#line 2479 "cplus.met"
#line 2489 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2489 "cplus.met"
{
#line 2489 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2489 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2489 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2489 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2489 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2489 "cplus.met"
#line 2489 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2489 "cplus.met"
#line 2491 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2491 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2491 "cplus.met"
    }
#line 2491 "cplus.met"
#line 2492 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2492 "cplus.met"
#line 2493 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2493 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2493 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2493 "cplus.met"
        } else {
#line 2493 "cplus.met"
            tokenAhead = 0 ;
#line 2493 "cplus.met"
        }
#line 2493 "cplus.met"
    }
#line 2493 "cplus.met"
#line 2494 "cplus.met"
    {
#line 2494 "cplus.met"
        _retValue = retTree ;
#line 2494 "cplus.met"
        goto arg_declarator_followed_ret;
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
arg_declarator_followed_exit :
#line 2495 "cplus.met"

#line 2495 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2495 "cplus.met"
    _funcLevel--;
#line 2495 "cplus.met"
    return((PPTREE) -1) ;
#line 2495 "cplus.met"

#line 2495 "cplus.met"
arg_declarator_followed_ret :
#line 2495 "cplus.met"
    
#line 2495 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
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
#line 2497 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2497 "cplus.met"
{
#line 2497 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2497 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2497 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2497 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2497 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2497 "cplus.met"
#line 2497 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2497 "cplus.met"
#line 2499 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 2499 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2499 "cplus.met"
    }
#line 2499 "cplus.met"
#line 2500 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 46, cplus)){
#line 2500 "cplus.met"
#line 2501 "cplus.met"
        {
#line 2501 "cplus.met"
            PPTREE _ptRes0=0;
#line 2501 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2501 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2501 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2501 "cplus.met"
            valTree=_ptRes0;
#line 2501 "cplus.met"
        }
#line 2501 "cplus.met"
    } else {
#line 2501 "cplus.met"
#line 2503 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2503 "cplus.met"
#line 2504 "cplus.met"
            {
#line 2504 "cplus.met"
                PPTREE _ptRes0=0;
#line 2504 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2504 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2504 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2504 "cplus.met"
                valTree=_ptRes0;
#line 2504 "cplus.met"
            }
#line 2504 "cplus.met"
        } else {
#line 2504 "cplus.met"
#line 2506 "cplus.met"
            valTree = retTree ;
#line 2506 "cplus.met"
        }
#line 2506 "cplus.met"
    }
#line 2506 "cplus.met"
#line 2507 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2507 "cplus.met"
#line 2508 "cplus.met"
#line 2509 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 146, cplus)){
#line 2509 "cplus.met"
#line 2510 "cplus.met"
            {
#line 2510 "cplus.met"
                PPTREE _ptRes0=0;
#line 2510 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2510 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2510 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2510 "cplus.met"
                valTree=_ptRes0;
#line 2510 "cplus.met"
            }
#line 2510 "cplus.met"
        } else {
#line 2510 "cplus.met"
#line 2512 "cplus.met"
            {
#line 2512 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2512 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2512 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2512 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2512 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2512 "cplus.met"
                }
#line 2512 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2512 "cplus.met"
                valTree=_ptRes0;
#line 2512 "cplus.met"
            }
#line 2512 "cplus.met"
        }
#line 2512 "cplus.met"
#line 2512 "cplus.met"
#line 2512 "cplus.met"
    }
#line 2512 "cplus.met"
#line 2514 "cplus.met"
    {
#line 2514 "cplus.met"
        _retValue = valTree ;
#line 2514 "cplus.met"
        goto arg_declarator_type_ret;
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
arg_declarator_type_exit :
#line 2515 "cplus.met"

#line 2515 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2515 "cplus.met"
    _funcLevel--;
#line 2515 "cplus.met"
    return((PPTREE) -1) ;
#line 2515 "cplus.met"

#line 2515 "cplus.met"
arg_declarator_type_ret :
#line 2515 "cplus.met"
    
#line 2515 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
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
#line 2192 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2192 "cplus.met"
{
#line 2192 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2192 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2192 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2192 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2192 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2192 "cplus.met"
#line 2192 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2192 "cplus.met"
#line 2194 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2194 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2194 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2194 "cplus.met"
    } else {
#line 2194 "cplus.met"
        tokenAhead = 0 ;
#line 2194 "cplus.met"
    }
#line 2194 "cplus.met"
#line 2195 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 12, cplus)){
#line 2195 "cplus.met"
#line 2196 "cplus.met"
        {
#line 2196 "cplus.met"
            PPTREE _ptRes0=0;
#line 2196 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2196 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2196 "cplus.met"
            retTree=_ptRes0;
#line 2196 "cplus.met"
        }
#line 2196 "cplus.met"
    } else {
#line 2196 "cplus.met"
#line 2198 "cplus.met"
        {
#line 2198 "cplus.met"
            PPTREE _ptRes0=0;
#line 2198 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2198 "cplus.met"
            retTree=_ptRes0;
#line 2198 "cplus.met"
        }
#line 2198 "cplus.met"
    }
#line 2198 "cplus.met"
#line 2199 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2199 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2199 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2199 "cplus.met"
    } else {
#line 2199 "cplus.met"
        tokenAhead = 0 ;
#line 2199 "cplus.met"
    }
#line 2199 "cplus.met"
#line 2200 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 60, cplus)){
#line 2200 "cplus.met"
#line 2201 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2201 "cplus.met"
#line 2201 "cplus.met"
    }
#line 2201 "cplus.met"
#line 2202 "cplus.met"
    {
#line 2202 "cplus.met"
        _retValue = retTree ;
#line 2202 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2202 "cplus.met"
        
#line 2202 "cplus.met"
    }
#line 2202 "cplus.met"
#line 2202 "cplus.met"
#line 2202 "cplus.met"

#line 2203 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2203 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2203 "cplus.met"
return((PPTREE) 0);
#line 2203 "cplus.met"

#line 2203 "cplus.met"
arg_typ_declarator_exit :
#line 2203 "cplus.met"

#line 2203 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2203 "cplus.met"
    _funcLevel--;
#line 2203 "cplus.met"
    return((PPTREE) -1) ;
#line 2203 "cplus.met"

#line 2203 "cplus.met"
arg_typ_declarator_ret :
#line 2203 "cplus.met"
    
#line 2203 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2203 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2203 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2203 "cplus.met"
    return _retValue ;
#line 2203 "cplus.met"
}
#line 2203 "cplus.met"

#line 2203 "cplus.met"
#line 2426 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2426 "cplus.met"
{
#line 2426 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2426 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2426 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2426 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2426 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2426 "cplus.met"
#line 2426 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2426 "cplus.met"
#line 2426 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2426 "cplus.met"
#line 2428 "cplus.met"
     { int followed = 0;
#line 2428 "cplus.met"
#line 2429 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2429 "cplus.met"
#line 2430 "cplus.met"
         followed = 1;
#line 2430 "cplus.met"
    } else {
#line 2430 "cplus.met"
#line 2432 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator)(error_free), 7, cplus))== (PPTREE) -1 ) {
#line 2432 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2432 "cplus.met"
        }
#line 2432 "cplus.met"
    }
#line 2432 "cplus.met"
#line 2433 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2433 "cplus.met"
#line 2434 "cplus.met"
#line 2435 "cplus.met"
     {  int exit = 0 ; 
#line 2435 "cplus.met"
#line 2435 "cplus.met"
    _addlist1 = retTree ;
#line 2435 "cplus.met"
#line 2436 "cplus.met"
    while ( followed && !exit ) { 
#line 2436 "cplus.met"
#line 2437 "cplus.met"
#line 2438 "cplus.met"
         followed = 0;
#line 2438 "cplus.met"
#line 2439 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 9, cplus)){
#line 2439 "cplus.met"
#line 2440 "cplus.met"
#line 2441 "cplus.met"
             followed = 1;
#line 2441 "cplus.met"
#line 2442 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2442 "cplus.met"
#line 2442 "cplus.met"
            if (retTree){
#line 2442 "cplus.met"
#line 2442 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2442 "cplus.met"
            } else {
#line 2442 "cplus.met"
#line 2442 "cplus.met"
                retTree = _addlist1 ;
#line 2442 "cplus.met"
            }
#line 2442 "cplus.met"
#line 2442 "cplus.met"
#line 2442 "cplus.met"
        } else {
#line 2442 "cplus.met"
#line 2445 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2445 "cplus.met"
#line 2446 "cplus.met"
#line 2447 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2447 "cplus.met"
#line 2447 "cplus.met"
                if (retTree){
#line 2447 "cplus.met"
#line 2447 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2447 "cplus.met"
                } else {
#line 2447 "cplus.met"
#line 2447 "cplus.met"
                    retTree = _addlist1 ;
#line 2447 "cplus.met"
                }
#line 2447 "cplus.met"
#line 2447 "cplus.met"
#line 2447 "cplus.met"
            } else {
#line 2447 "cplus.met"
#line 2450 "cplus.met"
#line 2451 "cplus.met"
                {
#line 2451 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2451 "cplus.met"
                    {
#line 2451 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2451 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2451 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2451 "cplus.met"
                    }
#line 2451 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2451 "cplus.met"
                }
#line 2451 "cplus.met"
#line 2451 "cplus.met"
                if (retTree){
#line 2451 "cplus.met"
#line 2451 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2451 "cplus.met"
                } else {
#line 2451 "cplus.met"
#line 2451 "cplus.met"
                    retTree = _addlist1 ;
#line 2451 "cplus.met"
                }
#line 2451 "cplus.met"
#line 2452 "cplus.met"
                 exit = 1 ;
#line 2452 "cplus.met"
#line 2453 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2453 "cplus.met"
#line 2453 "cplus.met"
                }
#line 2453 "cplus.met"
#line 2453 "cplus.met"
            }
#line 2453 "cplus.met"
        }
#line 2453 "cplus.met"
#line 2453 "cplus.met"
    } 
#line 2453 "cplus.met"
#line 2457 "cplus.met"
    if ((! ( exit )) && 
#line 2457 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2457 "cplus.met"
#line 2458 "cplus.met"
        {
#line 2458 "cplus.met"
            PPTREE _ptTree0=0;
#line 2458 "cplus.met"
            {
#line 2458 "cplus.met"
                PPTREE _ptRes1=0;
#line 2458 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2458 "cplus.met"
                _ptTree0=_ptRes1;
#line 2458 "cplus.met"
            }
#line 2458 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2458 "cplus.met"
        }
#line 2458 "cplus.met"
#line 2458 "cplus.met"
    }
#line 2458 "cplus.met"
#line 2459 "cplus.met"
     } } 
#line 2459 "cplus.met"
#line 2459 "cplus.met"
#line 2461 "cplus.met"
    {
#line 2461 "cplus.met"
        _retValue = retTree ;
#line 2461 "cplus.met"
        goto arg_typ_list_ret;
#line 2461 "cplus.met"
        
#line 2461 "cplus.met"
    }
#line 2461 "cplus.met"
#line 2461 "cplus.met"
#line 2461 "cplus.met"

#line 2462 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2462 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2462 "cplus.met"
return((PPTREE) 0);
#line 2462 "cplus.met"

#line 2462 "cplus.met"
arg_typ_list_exit :
#line 2462 "cplus.met"

#line 2462 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2462 "cplus.met"
    _funcLevel--;
#line 2462 "cplus.met"
    return((PPTREE) -1) ;
#line 2462 "cplus.met"

#line 2462 "cplus.met"
arg_typ_list_ret :
#line 2462 "cplus.met"
    
#line 2462 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2462 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2462 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2462 "cplus.met"
    return _retValue ;
#line 2462 "cplus.met"
}
#line 2462 "cplus.met"

#line 2462 "cplus.met"
#line 2126 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2126 "cplus.met"
{
#line 2126 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2126 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2126 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2126 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2126 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2126 "cplus.met"
#line 2126 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2126 "cplus.met"
#line 2128 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2128 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2128 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2128 "cplus.met"
    } else {
#line 2128 "cplus.met"
        tokenAhead = 0 ;
#line 2128 "cplus.met"
    }
#line 2128 "cplus.met"
#line 2129 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2129 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2129 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2129 "cplus.met"
    } else {
#line 2129 "cplus.met"
        tokenAhead = 0 ;
#line 2129 "cplus.met"
    }
#line 2129 "cplus.met"
#line 2130 "cplus.met"
    {
#line 2130 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2130 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2130 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2130 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2130 "cplus.met"
        }
#line 2130 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2130 "cplus.met"
        retTree=_ptRes0;
#line 2130 "cplus.met"
    }
#line 2130 "cplus.met"
#line 2131 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2131 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2131 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2131 "cplus.met"
    } else {
#line 2131 "cplus.met"
        tokenAhead = 0 ;
#line 2131 "cplus.met"
    }
#line 2131 "cplus.met"
#line 2132 "cplus.met"
    {
#line 2132 "cplus.met"
        _retValue = retTree ;
#line 2132 "cplus.met"
        goto asm_call_ret;
#line 2132 "cplus.met"
        
#line 2132 "cplus.met"
    }
#line 2132 "cplus.met"
#line 2132 "cplus.met"
#line 2132 "cplus.met"

#line 2133 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2133 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2133 "cplus.met"
return((PPTREE) 0);
#line 2133 "cplus.met"

#line 2133 "cplus.met"
asm_call_exit :
#line 2133 "cplus.met"

#line 2133 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2133 "cplus.met"
    _funcLevel--;
#line 2133 "cplus.met"
    return((PPTREE) -1) ;
#line 2133 "cplus.met"

#line 2133 "cplus.met"
asm_call_ret :
#line 2133 "cplus.met"
    
#line 2133 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2133 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2133 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2133 "cplus.met"
    return _retValue ;
#line 2133 "cplus.met"
}
#line 2133 "cplus.met"

#line 2133 "cplus.met"
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
#line 2562 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2562 "cplus.met"
{
#line 2562 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2562 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2562 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2562 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2562 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2562 "cplus.met"
#line 2563 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2563 "cplus.met"
    switch( lexEl.Value) {
#line 2563 "cplus.met"
#line 2564 "cplus.met"
        case EGAL : 
#line 2564 "cplus.met"
            tokenAhead = 0 ;
#line 2564 "cplus.met"
            CommTerm();
#line 2564 "cplus.met"
#line 2564 "cplus.met"
            {
#line 2564 "cplus.met"
                PPTREE _ptTree0=0;
#line 2564 "cplus.met"
                {
#line 2564 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2564 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2564 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2564 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2564 "cplus.met"
                    }
#line 2564 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2564 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2564 "cplus.met"
                }
#line 2564 "cplus.met"
                _retValue =_ptTree0;
#line 2564 "cplus.met"
                goto assignment_end_ret;
#line 2564 "cplus.met"
            }
#line 2564 "cplus.met"
            break;
#line 2564 "cplus.met"
#line 2565 "cplus.met"
        case ETOIEGAL : 
#line 2565 "cplus.met"
            tokenAhead = 0 ;
#line 2565 "cplus.met"
            CommTerm();
#line 2565 "cplus.met"
#line 2565 "cplus.met"
            {
#line 2565 "cplus.met"
                PPTREE _ptTree0=0;
#line 2565 "cplus.met"
                {
#line 2565 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2565 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2565 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2565 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2565 "cplus.met"
                    }
#line 2565 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2565 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2565 "cplus.met"
                }
#line 2565 "cplus.met"
                _retValue =_ptTree0;
#line 2565 "cplus.met"
                goto assignment_end_ret;
#line 2565 "cplus.met"
            }
#line 2565 "cplus.met"
            break;
#line 2565 "cplus.met"
#line 2566 "cplus.met"
        case META : 
#line 2566 "cplus.met"
        case SLASEGAL : 
#line 2566 "cplus.met"
            tokenAhead = 0 ;
#line 2566 "cplus.met"
            CommTerm();
#line 2566 "cplus.met"
#line 2566 "cplus.met"
            {
#line 2566 "cplus.met"
                PPTREE _ptTree0=0;
#line 2566 "cplus.met"
                {
#line 2566 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2566 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2566 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2566 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2566 "cplus.met"
                    }
#line 2566 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2566 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2566 "cplus.met"
                }
#line 2566 "cplus.met"
                _retValue =_ptTree0;
#line 2566 "cplus.met"
                goto assignment_end_ret;
#line 2566 "cplus.met"
            }
#line 2566 "cplus.met"
            break;
#line 2566 "cplus.met"
#line 2567 "cplus.met"
        case POURCEGAL : 
#line 2567 "cplus.met"
            tokenAhead = 0 ;
#line 2567 "cplus.met"
            CommTerm();
#line 2567 "cplus.met"
#line 2567 "cplus.met"
            {
#line 2567 "cplus.met"
                PPTREE _ptTree0=0;
#line 2567 "cplus.met"
                {
#line 2567 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2567 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2567 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2567 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2567 "cplus.met"
                    }
#line 2567 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2567 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2567 "cplus.met"
                }
#line 2567 "cplus.met"
                _retValue =_ptTree0;
#line 2567 "cplus.met"
                goto assignment_end_ret;
#line 2567 "cplus.met"
            }
#line 2567 "cplus.met"
            break;
#line 2567 "cplus.met"
#line 2568 "cplus.met"
        case PLUSEGAL : 
#line 2568 "cplus.met"
            tokenAhead = 0 ;
#line 2568 "cplus.met"
            CommTerm();
#line 2568 "cplus.met"
#line 2568 "cplus.met"
            {
#line 2568 "cplus.met"
                PPTREE _ptTree0=0;
#line 2568 "cplus.met"
                {
#line 2568 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2568 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2568 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2568 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2568 "cplus.met"
                    }
#line 2568 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2568 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2568 "cplus.met"
                }
#line 2568 "cplus.met"
                _retValue =_ptTree0;
#line 2568 "cplus.met"
                goto assignment_end_ret;
#line 2568 "cplus.met"
            }
#line 2568 "cplus.met"
            break;
#line 2568 "cplus.met"
#line 2569 "cplus.met"
        case TIREEGAL : 
#line 2569 "cplus.met"
            tokenAhead = 0 ;
#line 2569 "cplus.met"
            CommTerm();
#line 2569 "cplus.met"
#line 2569 "cplus.met"
            {
#line 2569 "cplus.met"
                PPTREE _ptTree0=0;
#line 2569 "cplus.met"
                {
#line 2569 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2569 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2569 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2569 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2569 "cplus.met"
                    }
#line 2569 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2569 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2569 "cplus.met"
                }
#line 2569 "cplus.met"
                _retValue =_ptTree0;
#line 2569 "cplus.met"
                goto assignment_end_ret;
#line 2569 "cplus.met"
            }
#line 2569 "cplus.met"
            break;
#line 2569 "cplus.met"
#line 2570 "cplus.met"
        case INFEINFEEGAL : 
#line 2570 "cplus.met"
            tokenAhead = 0 ;
#line 2570 "cplus.met"
            CommTerm();
#line 2570 "cplus.met"
#line 2570 "cplus.met"
            {
#line 2570 "cplus.met"
                PPTREE _ptTree0=0;
#line 2570 "cplus.met"
                {
#line 2570 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2570 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2570 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2570 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2570 "cplus.met"
                    }
#line 2570 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2570 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2570 "cplus.met"
                }
#line 2570 "cplus.met"
                _retValue =_ptTree0;
#line 2570 "cplus.met"
                goto assignment_end_ret;
#line 2570 "cplus.met"
            }
#line 2570 "cplus.met"
            break;
#line 2570 "cplus.met"
#line 2571 "cplus.met"
        case SUPESUPEEGAL : 
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
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2571 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case ETCOEGAL : 
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
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2572 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
        case VBAREGAL : 
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
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2573 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
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
#line 2574 "cplus.met"
        case CHAPEGAL : 
#line 2574 "cplus.met"
            tokenAhead = 0 ;
#line 2574 "cplus.met"
            CommTerm();
#line 2574 "cplus.met"
#line 2574 "cplus.met"
            {
#line 2574 "cplus.met"
                PPTREE _ptTree0=0;
#line 2574 "cplus.met"
                {
#line 2574 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2574 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2574 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 2574 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2574 "cplus.met"
                    }
#line 2574 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2574 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2574 "cplus.met"
                }
#line 2574 "cplus.met"
                _retValue =_ptTree0;
#line 2574 "cplus.met"
                goto assignment_end_ret;
#line 2574 "cplus.met"
            }
#line 2574 "cplus.met"
            break;
#line 2574 "cplus.met"
        default :
#line 2574 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2574 "cplus.met"
            break;
#line 2574 "cplus.met"
    }
#line 2574 "cplus.met"
#line 2574 "cplus.met"
#line 2575 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2575 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2575 "cplus.met"
return((PPTREE) 0);
#line 2575 "cplus.met"

#line 2575 "cplus.met"
assignment_end_exit :
#line 2575 "cplus.met"

#line 2575 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2575 "cplus.met"
    _funcLevel--;
#line 2575 "cplus.met"
    return((PPTREE) -1) ;
#line 2575 "cplus.met"

#line 2575 "cplus.met"
assignment_end_ret :
#line 2575 "cplus.met"
    
#line 2575 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2575 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2575 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2575 "cplus.met"
    return _retValue ;
#line 2575 "cplus.met"
}
#line 2575 "cplus.met"

#line 2575 "cplus.met"
