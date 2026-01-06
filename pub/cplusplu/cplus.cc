/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2469 "cplus.met"
PPTREE cplus::abstract_declarator ( int error_free)
#line 2469 "cplus.met"
{
#line 2469 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2469 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2469 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2469 "cplus.met"
    int _Debug = TRACE_RULE("abstract_declarator",TRACE_ENTER,(PPTREE)0);
#line 2469 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2469 "cplus.met"
#line 2469 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2469 "cplus.met"
#line 2471 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 127, cplus)){
#line 2471 "cplus.met"
#line 2472 "cplus.met"
        {
#line 2472 "cplus.met"
            PPTREE _ptTree0=0;
#line 2472 "cplus.met"
            {
#line 2472 "cplus.met"
                PPTREE _ptTree1=0;
#line 2472 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2472 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2472 "cplus.met"
                }
#line 2472 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2472 "cplus.met"
            }
#line 2472 "cplus.met"
            _retValue =_ptTree0;
#line 2472 "cplus.met"
            goto abstract_declarator_ret;
#line 2472 "cplus.met"
        }
#line 2472 "cplus.met"
    }
#line 2472 "cplus.met"
#line 2473 "cplus.met"
    retTree = (PPTREE) 0;
#line 2473 "cplus.met"
#line 2474 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2474 "cplus.met"
    switch( lexEl.Value) {
#line 2474 "cplus.met"
#line 2475 "cplus.met"
        case ETOI : 
#line 2475 "cplus.met"
            tokenAhead = 0 ;
#line 2475 "cplus.met"
            CommTerm();
#line 2475 "cplus.met"
#line 2475 "cplus.met"
            {
#line 2475 "cplus.met"
                PPTREE _ptTree0=0;
#line 2475 "cplus.met"
                {
#line 2475 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2475 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2475 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2475 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2475 "cplus.met"
                    }
#line 2475 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2475 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2475 "cplus.met"
                }
#line 2475 "cplus.met"
                _retValue =_ptTree0;
#line 2475 "cplus.met"
                goto abstract_declarator_ret;
#line 2475 "cplus.met"
            }
#line 2475 "cplus.met"
            break;
#line 2475 "cplus.met"
#line 2476 "cplus.met"
        case ETCO : 
#line 2476 "cplus.met"
            tokenAhead = 0 ;
#line 2476 "cplus.met"
            CommTerm();
#line 2476 "cplus.met"
#line 2476 "cplus.met"
            {
#line 2476 "cplus.met"
                PPTREE _ptTree0=0;
#line 2476 "cplus.met"
                {
#line 2476 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2476 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2476 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2476 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2476 "cplus.met"
                    }
#line 2476 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2476 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2476 "cplus.met"
                }
#line 2476 "cplus.met"
                _retValue =_ptTree0;
#line 2476 "cplus.met"
                goto abstract_declarator_ret;
#line 2476 "cplus.met"
            }
#line 2476 "cplus.met"
            break;
#line 2476 "cplus.met"
#line 2477 "cplus.met"
        case TILD : 
#line 2477 "cplus.met"
            tokenAhead = 0 ;
#line 2477 "cplus.met"
            CommTerm();
#line 2477 "cplus.met"
#line 2477 "cplus.met"
            {
#line 2477 "cplus.met"
                PPTREE _ptTree0=0;
#line 2477 "cplus.met"
                {
#line 2477 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2477 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2477 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2477 "cplus.met"
                        MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2477 "cplus.met"
                    }
#line 2477 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2477 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2477 "cplus.met"
                }
#line 2477 "cplus.met"
                _retValue =_ptTree0;
#line 2477 "cplus.met"
                goto abstract_declarator_ret;
#line 2477 "cplus.met"
            }
#line 2477 "cplus.met"
            break;
#line 2477 "cplus.met"
#line 2481 "cplus.met"
        case POUV : 
#line 2481 "cplus.met"
            tokenAhead = 0 ;
#line 2481 "cplus.met"
            CommTerm();
#line 2481 "cplus.met"
#line 2479 "cplus.met"
#line 2480 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")")){
#line 2480 "cplus.met"
#line 2481 "cplus.met"
                
#line 2481 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                LEX_EXIT ("",0);
#line 2481 "cplus.met"
                goto abstract_declarator_exit;
#line 2481 "cplus.met"
#line 2481 "cplus.met"
            }
#line 2481 "cplus.met"
#line 2482 "cplus.met"
            {
#line 2482 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2482 "cplus.met"
                _ptRes0= MakeTree(TYP, 1);
#line 2482 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2482 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2482 "cplus.met"
                }
#line 2482 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2482 "cplus.met"
                retTree=_ptRes0;
#line 2482 "cplus.met"
            }
#line 2482 "cplus.met"
#line 2483 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2483 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2483 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                TOKEN_EXIT(abstract_declarator_exit,")")
#line 2483 "cplus.met"
            } else {
#line 2483 "cplus.met"
                tokenAhead = 0 ;
#line 2483 "cplus.met"
            }
#line 2483 "cplus.met"
#line 2484 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2484 "cplus.met"
#line 2485 "cplus.met"
                                         { PPTREE theTree ;
#line 2485 "cplus.met"
                                    theTree = valTree ;
#line 2485 "cplus.met"
                                    if (theTree) {
#line 2485 "cplus.met"
                                        while (SonTree(theTree,1))
#line 2485 "cplus.met"
                                     if (NumberTree(theTree)
#line 2485 "cplus.met"
                                         != RANGE_MODIFIER)
#line 2485 "cplus.met"
                                         theTree = SonTree(theTree,1);
#line 2485 "cplus.met"
                                     else
#line 2485 "cplus.met"
                                         theTree = SonTree(theTree,2);
#line 2485 "cplus.met"
                                        ReplaceTree(theTree,1,retTree);
#line 2485 "cplus.met"
                                        /* modif portage sun */
#line 2485 "cplus.met"
                                        retTree = valTree;
#line 2485 "cplus.met"
                                    }
#line 2485 "cplus.met"
                                       }
#line 2485 "cplus.met"
                                
#line 2485 "cplus.met"
            }
#line 2485 "cplus.met"
#line 2485 "cplus.met"
            break;
#line 2485 "cplus.met"
#line 2502 "cplus.met"
        case META : 
#line 2502 "cplus.met"
        case IDENT : 
#line 2502 "cplus.met"
#line 2503 "cplus.met"
#line 2504 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2504 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2504 "cplus.met"
            }
#line 2504 "cplus.met"
#line 2505 "cplus.met"
            {
#line 2505 "cplus.met"
                PPTREE _ptTree0=0;
#line 2505 "cplus.met"
                {
#line 2505 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2505 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(abstract_declarator)(error_free), 2, cplus))== (PPTREE) -1 ) {
#line 2505 "cplus.met"
                        MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                        PROG_EXIT(abstract_declarator_exit,"abstract_declarator")
#line 2505 "cplus.met"
                    }
#line 2505 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2505 "cplus.met"
                }
#line 2505 "cplus.met"
                _retValue =_ptTree0;
#line 2505 "cplus.met"
                goto abstract_declarator_ret;
#line 2505 "cplus.met"
            }
#line 2505 "cplus.met"
#line 2505 "cplus.met"
            break;
#line 2505 "cplus.met"
#line 2511 "cplus.met"
        default : 
#line 2511 "cplus.met"
#line 2510 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 52, cplus)){
#line 2510 "cplus.met"
#line 2512 "cplus.met"
                retTree = valTree ;
#line 2512 "cplus.met"
#line 2512 "cplus.met"
            }
#line 2512 "cplus.met"
            break;
#line 2512 "cplus.met"
    }
#line 2512 "cplus.met"
#line 2514 "cplus.met"
    {
#line 2514 "cplus.met"
        _retValue = retTree ;
#line 2514 "cplus.met"
        goto abstract_declarator_ret;
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
abstract_declarator_exit :
#line 2515 "cplus.met"

#line 2515 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_EXIT,(PPTREE)0);
#line 2515 "cplus.met"
    _funcLevel--;
#line 2515 "cplus.met"
    return((PPTREE) -1) ;
#line 2515 "cplus.met"

#line 2515 "cplus.met"
abstract_declarator_ret :
#line 2515 "cplus.met"
    
#line 2515 "cplus.met"
    _Debug = TRACE_RULE("abstract_declarator",TRACE_RETURN,_retValue);
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
#line 2854 "cplus.met"
PPTREE cplus::additive_expression ( int error_free)
#line 2854 "cplus.met"
{
#line 2854 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2854 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2854 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2854 "cplus.met"
    int _Debug = TRACE_RULE("additive_expression",TRACE_ENTER,(PPTREE)0);
#line 2854 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2854 "cplus.met"
#line 2854 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2854 "cplus.met"
#line 2856 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2856 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2856 "cplus.met"
    }
#line 2856 "cplus.met"
#line 2857 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PLUS,"+")) || 
#line 2857 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( TIRE,"-"))) { 
#line 2857 "cplus.met"
#line 2858 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2858 "cplus.met"
        switch( lexEl.Value) {
#line 2858 "cplus.met"
#line 2859 "cplus.met"
            case PLUS : 
#line 2859 "cplus.met"
                tokenAhead = 0 ;
#line 2859 "cplus.met"
                CommTerm();
#line 2859 "cplus.met"
#line 2859 "cplus.met"
                {
#line 2859 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2859 "cplus.met"
                    _ptRes0= MakeTree(PLUS, 2);
#line 2859 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2859 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2859 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2859 "cplus.met"
                    }
#line 2859 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2859 "cplus.met"
                    expTree=_ptRes0;
#line 2859 "cplus.met"
                }
#line 2859 "cplus.met"
                break;
#line 2859 "cplus.met"
#line 2860 "cplus.met"
            case TIRE : 
#line 2860 "cplus.met"
                tokenAhead = 0 ;
#line 2860 "cplus.met"
                CommTerm();
#line 2860 "cplus.met"
#line 2860 "cplus.met"
                {
#line 2860 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2860 "cplus.met"
                    _ptRes0= MakeTree(MINUS, 2);
#line 2860 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2860 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(multiplicative_expression)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 2860 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(additive_expression_exit,"additive_expression")
#line 2860 "cplus.met"
                    }
#line 2860 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2860 "cplus.met"
                    expTree=_ptRes0;
#line 2860 "cplus.met"
                }
#line 2860 "cplus.met"
                break;
#line 2860 "cplus.met"
            default :
#line 2860 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(additive_expression_exit,"either + or -")
#line 2860 "cplus.met"
                break;
#line 2860 "cplus.met"
        }
#line 2860 "cplus.met"
    } 
#line 2860 "cplus.met"
#line 2862 "cplus.met"
    {
#line 2862 "cplus.met"
        _retValue = expTree ;
#line 2862 "cplus.met"
        goto additive_expression_ret;
#line 2862 "cplus.met"
        
#line 2862 "cplus.met"
    }
#line 2862 "cplus.met"
#line 2862 "cplus.met"
#line 2862 "cplus.met"

#line 2863 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2863 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2863 "cplus.met"
return((PPTREE) 0);
#line 2863 "cplus.met"

#line 2863 "cplus.met"
additive_expression_exit :
#line 2863 "cplus.met"

#line 2863 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_EXIT,(PPTREE)0);
#line 2863 "cplus.met"
    _funcLevel--;
#line 2863 "cplus.met"
    return((PPTREE) -1) ;
#line 2863 "cplus.met"

#line 2863 "cplus.met"
additive_expression_ret :
#line 2863 "cplus.met"
    
#line 2863 "cplus.met"
    _Debug = TRACE_RULE("additive_expression",TRACE_RETURN,_retValue);
#line 2863 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2863 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2863 "cplus.met"
    return _retValue ;
#line 2863 "cplus.met"
}
#line 2863 "cplus.met"

#line 2863 "cplus.met"
#line 2954 "cplus.met"
PPTREE cplus::alloc_expression ( int error_free)
#line 2954 "cplus.met"
{
#line 2954 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2954 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2954 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2954 "cplus.met"
    int _Debug = TRACE_RULE("alloc_expression",TRACE_ENTER,(PPTREE)0);
#line 2954 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2954 "cplus.met"
#line 2954 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2954 "cplus.met"
#line 2956 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2956 "cplus.met"
#line 2957 "cplus.met"
#line 2958 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2958 "cplus.met"
        switch( lexEl.Value) {
#line 2958 "cplus.met"
#line 2959 "cplus.met"
            case NEW : 
#line 2959 "cplus.met"
#line 2959 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2959 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2959 "cplus.met"
                }
#line 2959 "cplus.met"
                break;
#line 2959 "cplus.met"
#line 2960 "cplus.met"
            case DELETE : 
#line 2960 "cplus.met"
#line 2960 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 2960 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2960 "cplus.met"
                }
#line 2960 "cplus.met"
                break;
#line 2960 "cplus.met"
            default :
#line 2960 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2960 "cplus.met"
                break;
#line 2960 "cplus.met"
        }
#line 2960 "cplus.met"
#line 2962 "cplus.met"
        {
#line 2962 "cplus.met"
            PPTREE _ptRes0=0;
#line 2962 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2962 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2962 "cplus.met"
            retTree=_ptRes0;
#line 2962 "cplus.met"
        }
#line 2962 "cplus.met"
#line 2962 "cplus.met"
#line 2962 "cplus.met"
    } else {
#line 2962 "cplus.met"
#line 2965 "cplus.met"
#line 2966 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2966 "cplus.met"
        switch( lexEl.Value) {
#line 2966 "cplus.met"
#line 2967 "cplus.met"
            case NEW : 
#line 2967 "cplus.met"
#line 2967 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(allocation_expression)(error_free), 5, cplus))== (PPTREE) -1 ) {
#line 2967 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2967 "cplus.met"
                }
#line 2967 "cplus.met"
                break;
#line 2967 "cplus.met"
#line 2968 "cplus.met"
            case DELETE : 
#line 2968 "cplus.met"
#line 2968 "cplus.met"
                if ( (valTree=NQUICK_CALL(_Tak(deallocation_expression)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 2968 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(alloc_expression_exit,"alloc_expression")
#line 2968 "cplus.met"
                }
#line 2968 "cplus.met"
                break;
#line 2968 "cplus.met"
            default :
#line 2968 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(alloc_expression_exit,"either new or delete")
#line 2968 "cplus.met"
                break;
#line 2968 "cplus.met"
        }
#line 2968 "cplus.met"
#line 2970 "cplus.met"
        retTree = valTree ;
#line 2970 "cplus.met"
#line 2970 "cplus.met"
    }
#line 2970 "cplus.met"
#line 2972 "cplus.met"
    {
#line 2972 "cplus.met"
        _retValue = retTree ;
#line 2972 "cplus.met"
        goto alloc_expression_ret;
#line 2972 "cplus.met"
        
#line 2972 "cplus.met"
    }
#line 2972 "cplus.met"
#line 2972 "cplus.met"
#line 2972 "cplus.met"

#line 2973 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2973 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2973 "cplus.met"
return((PPTREE) 0);
#line 2973 "cplus.met"

#line 2973 "cplus.met"
alloc_expression_exit :
#line 2973 "cplus.met"

#line 2973 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_EXIT,(PPTREE)0);
#line 2973 "cplus.met"
    _funcLevel--;
#line 2973 "cplus.met"
    return((PPTREE) -1) ;
#line 2973 "cplus.met"

#line 2973 "cplus.met"
alloc_expression_ret :
#line 2973 "cplus.met"
    
#line 2973 "cplus.met"
    _Debug = TRACE_RULE("alloc_expression",TRACE_RETURN,_retValue);
#line 2973 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2973 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2973 "cplus.met"
    return _retValue ;
#line 2973 "cplus.met"
}
#line 2973 "cplus.met"

#line 2973 "cplus.met"
#line 3004 "cplus.met"
PPTREE cplus::allocation_expression ( int error_free)
#line 3004 "cplus.met"
{
#line 3004 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3004 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3004 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3004 "cplus.met"
    int _Debug = TRACE_RULE("allocation_expression",TRACE_ENTER,(PPTREE)0);
#line 3004 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3004 "cplus.met"
#line 3004 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3004 "cplus.met"
#line 3004 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3004 "cplus.met"
#line 3006 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3006 "cplus.met"
    if (  !SEE_TOKEN( NEW,"new") || !(CommTerm(),1)) {
#line 3006 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(allocation_expression_exit,"new")
#line 3006 "cplus.met"
    } else {
#line 3006 "cplus.met"
        tokenAhead = 0 ;
#line 3006 "cplus.met"
    }
#line 3006 "cplus.met"
#line 3007 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(new_1), 104, cplus))){
#line 3007 "cplus.met"
#line 3008 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(new_2)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 3008 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3008 "cplus.met"
        }
#line 3008 "cplus.met"
    }
#line 3008 "cplus.met"
#line 3009 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3009 "cplus.met"
#line 3010 "cplus.met"
#line 3011 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3011 "cplus.met"
#line 3013 "cplus.met"
#line 3013 "cplus.met"
            _addlist1 = list ;
#line 3013 "cplus.met"
#line 3012 "cplus.met"
            do {
#line 3012 "cplus.met"
#line 3013 "cplus.met"
                {
#line 3013 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3013 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 3013 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                        PROG_EXIT(allocation_expression_exit,"allocation_expression")
#line 3013 "cplus.met"
                    }
#line 3013 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3013 "cplus.met"
                }
#line 3013 "cplus.met"
#line 3013 "cplus.met"
                if (list){
#line 3013 "cplus.met"
#line 3013 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3013 "cplus.met"
                } else {
#line 3013 "cplus.met"
#line 3013 "cplus.met"
                    list = _addlist1 ;
#line 3013 "cplus.met"
                }
#line 3013 "cplus.met"
#line 3013 "cplus.met"
#line 3014 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3014 "cplus.met"
        }
#line 3014 "cplus.met"
#line 3015 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3015 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3015 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            TOKEN_EXIT(allocation_expression_exit,")")
#line 3015 "cplus.met"
        } else {
#line 3015 "cplus.met"
            tokenAhead = 0 ;
#line 3015 "cplus.met"
        }
#line 3015 "cplus.met"
#line 3016 "cplus.met"
        {
#line 3016 "cplus.met"
            PPTREE _ptTree0=0;
#line 3016 "cplus.met"
            {
#line 3016 "cplus.met"
                PPTREE _ptRes1=0;
#line 3016 "cplus.met"
                _ptRes1= MakeTree(INIT_NEW, 1);
#line 3016 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3016 "cplus.met"
                _ptTree0=_ptRes1;
#line 3016 "cplus.met"
            }
#line 3016 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 3016 "cplus.met"
        }
#line 3016 "cplus.met"
#line 3016 "cplus.met"
#line 3016 "cplus.met"
    }
#line 3016 "cplus.met"
#line 3018 "cplus.met"
    {
#line 3018 "cplus.met"
        _retValue = retTree ;
#line 3018 "cplus.met"
        goto allocation_expression_ret;
#line 3018 "cplus.met"
        
#line 3018 "cplus.met"
    }
#line 3018 "cplus.met"
#line 3018 "cplus.met"
#line 3018 "cplus.met"

#line 3019 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3019 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3019 "cplus.met"
return((PPTREE) 0);
#line 3019 "cplus.met"

#line 3019 "cplus.met"
allocation_expression_exit :
#line 3019 "cplus.met"

#line 3019 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3019 "cplus.met"
    _funcLevel--;
#line 3019 "cplus.met"
    return((PPTREE) -1) ;
#line 3019 "cplus.met"

#line 3019 "cplus.met"
allocation_expression_ret :
#line 3019 "cplus.met"
    
#line 3019 "cplus.met"
    _Debug = TRACE_RULE("allocation_expression",TRACE_RETURN,_retValue);
#line 3019 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3019 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3019 "cplus.met"
    return _retValue ;
#line 3019 "cplus.met"
}
#line 3019 "cplus.met"

#line 3019 "cplus.met"
#line 2808 "cplus.met"
PPTREE cplus::and_expression ( int error_free)
#line 2808 "cplus.met"
{
#line 2808 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2808 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2808 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2808 "cplus.met"
    int _Debug = TRACE_RULE("and_expression",TRACE_ENTER,(PPTREE)0);
#line 2808 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2808 "cplus.met"
#line 2808 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2808 "cplus.met"
#line 2810 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2810 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(and_expression_exit,"and_expression")
#line 2810 "cplus.met"
    }
#line 2810 "cplus.met"
#line 2811 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCO,"&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2811 "cplus.met"
#line 2812 "cplus.met"
        {
#line 2812 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2812 "cplus.met"
            _ptRes0= MakeTree(LAND, 2);
#line 2812 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2812 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(equality_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2812 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(and_expression_exit,"and_expression")
#line 2812 "cplus.met"
            }
#line 2812 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2812 "cplus.met"
            expTree=_ptRes0;
#line 2812 "cplus.met"
        }
#line 2812 "cplus.met"
    } 
#line 2812 "cplus.met"
#line 2813 "cplus.met"
    {
#line 2813 "cplus.met"
        _retValue = expTree ;
#line 2813 "cplus.met"
        goto and_expression_ret;
#line 2813 "cplus.met"
        
#line 2813 "cplus.met"
    }
#line 2813 "cplus.met"
#line 2813 "cplus.met"
#line 2813 "cplus.met"

#line 2814 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2814 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2814 "cplus.met"
return((PPTREE) 0);
#line 2814 "cplus.met"

#line 2814 "cplus.met"
and_expression_exit :
#line 2814 "cplus.met"

#line 2814 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_EXIT,(PPTREE)0);
#line 2814 "cplus.met"
    _funcLevel--;
#line 2814 "cplus.met"
    return((PPTREE) -1) ;
#line 2814 "cplus.met"

#line 2814 "cplus.met"
and_expression_ret :
#line 2814 "cplus.met"
    
#line 2814 "cplus.met"
    _Debug = TRACE_RULE("and_expression",TRACE_RETURN,_retValue);
#line 2814 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2814 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2814 "cplus.met"
    return _retValue ;
#line 2814 "cplus.met"
}
#line 2814 "cplus.met"

#line 2814 "cplus.met"
#line 2637 "cplus.met"
PPTREE cplus::arg_declarator ( int error_free)
#line 2637 "cplus.met"
{
#line 2637 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2637 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2637 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2637 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator",TRACE_ENTER,(PPTREE)0);
#line 2637 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2637 "cplus.met"
#line 2637 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2637 "cplus.met"
#line 2639 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2639 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_exit,"arg_declarator")
#line 2639 "cplus.met"
    }
#line 2639 "cplus.met"
#line 2640 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2640 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2640 "cplus.met"
#line 2641 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2641 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2641 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_exit,",")
#line 2641 "cplus.met"
        } else {
#line 2641 "cplus.met"
            tokenAhead = 0 ;
#line 2641 "cplus.met"
        }
#line 2641 "cplus.met"
    }
#line 2641 "cplus.met"
#line 2642 "cplus.met"
    {
#line 2642 "cplus.met"
        _retValue = retTree ;
#line 2642 "cplus.met"
        goto arg_declarator_ret;
#line 2642 "cplus.met"
        
#line 2642 "cplus.met"
    }
#line 2642 "cplus.met"
#line 2642 "cplus.met"
#line 2642 "cplus.met"

#line 2643 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2643 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2643 "cplus.met"
return((PPTREE) 0);
#line 2643 "cplus.met"

#line 2643 "cplus.met"
arg_declarator_exit :
#line 2643 "cplus.met"

#line 2643 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_EXIT,(PPTREE)0);
#line 2643 "cplus.met"
    _funcLevel--;
#line 2643 "cplus.met"
    return((PPTREE) -1) ;
#line 2643 "cplus.met"

#line 2643 "cplus.met"
arg_declarator_ret :
#line 2643 "cplus.met"
    
#line 2643 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator",TRACE_RETURN,_retValue);
#line 2643 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2643 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2643 "cplus.met"
    return _retValue ;
#line 2643 "cplus.met"
}
#line 2643 "cplus.met"

#line 2643 "cplus.met"
#line 2628 "cplus.met"
PPTREE cplus::arg_declarator_base ( int error_free)
#line 2628 "cplus.met"
{
#line 2628 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2628 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2628 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2628 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base",TRACE_ENTER,(PPTREE)0);
#line 2628 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2628 "cplus.met"
#line 2628 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2628 "cplus.met"
#line 2630 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_base_type), 9, cplus))){
#line 2630 "cplus.met"
#line 2631 "cplus.met"
        if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(arg_declarator_expression), 10, cplus))){
#line 2631 "cplus.met"
#line 2632 "cplus.met"
            if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2632 "cplus.met"
                MulFreeTree(1,retTree);
                PROG_EXIT(arg_declarator_base_exit,"arg_declarator_base")
#line 2632 "cplus.met"
            }
#line 2632 "cplus.met"
        }
#line 2632 "cplus.met"
    }
#line 2632 "cplus.met"
#line 2633 "cplus.met"
    {
#line 2633 "cplus.met"
        _retValue = retTree ;
#line 2633 "cplus.met"
        goto arg_declarator_base_ret;
#line 2633 "cplus.met"
        
#line 2633 "cplus.met"
    }
#line 2633 "cplus.met"
#line 2633 "cplus.met"
#line 2633 "cplus.met"

#line 2634 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2634 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2634 "cplus.met"
return((PPTREE) 0);
#line 2634 "cplus.met"

#line 2634 "cplus.met"
arg_declarator_base_exit :
#line 2634 "cplus.met"

#line 2634 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_EXIT,(PPTREE)0);
#line 2634 "cplus.met"
    _funcLevel--;
#line 2634 "cplus.met"
    return((PPTREE) -1) ;
#line 2634 "cplus.met"

#line 2634 "cplus.met"
arg_declarator_base_ret :
#line 2634 "cplus.met"
    
#line 2634 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base",TRACE_RETURN,_retValue);
#line 2634 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2634 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2634 "cplus.met"
    return _retValue ;
#line 2634 "cplus.met"
}
#line 2634 "cplus.met"

#line 2634 "cplus.met"
#line 2604 "cplus.met"
PPTREE cplus::arg_declarator_base_type ( int error_free)
#line 2604 "cplus.met"
{
#line 2604 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2604 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2604 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2604 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_ENTER,(PPTREE)0);
#line 2604 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2604 "cplus.met"
#line 2604 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2604 "cplus.met"
#line 2606 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 2606 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2606 "cplus.met"
    }
#line 2606 "cplus.met"
#line 2607 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2607 "cplus.met"
#line 2608 "cplus.met"
        {
#line 2608 "cplus.met"
            PPTREE _ptRes0=0;
#line 2608 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2608 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2608 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2608 "cplus.met"
            valTree=_ptRes0;
#line 2608 "cplus.met"
        }
#line 2608 "cplus.met"
    } else {
#line 2608 "cplus.met"
#line 2610 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2610 "cplus.met"
#line 2611 "cplus.met"
            {
#line 2611 "cplus.met"
                PPTREE _ptRes0=0;
#line 2611 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2611 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2611 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2611 "cplus.met"
                valTree=_ptRes0;
#line 2611 "cplus.met"
            }
#line 2611 "cplus.met"
        } else {
#line 2611 "cplus.met"
#line 2613 "cplus.met"
            valTree = retTree ;
#line 2613 "cplus.met"
        }
#line 2613 "cplus.met"
    }
#line 2613 "cplus.met"
#line 2614 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2614 "cplus.met"
#line 2615 "cplus.met"
#line 2616 "cplus.met"
        {
#line 2616 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2616 "cplus.met"
            _ptRes0= MakeTree(TYP_AFF, 2);
#line 2616 "cplus.met"
            ReplaceTree(_ptRes0, 1, valTree );
#line 2616 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2616 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                PROG_EXIT(arg_declarator_base_type_exit,"arg_declarator_base_type")
#line 2616 "cplus.met"
            }
#line 2616 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2616 "cplus.met"
            valTree=_ptRes0;
#line 2616 "cplus.met"
        }
#line 2616 "cplus.met"
#line 2616 "cplus.met"
#line 2616 "cplus.met"
    }
#line 2616 "cplus.met"
#line 2618 "cplus.met"
    {
#line 2618 "cplus.met"
        _retValue = valTree ;
#line 2618 "cplus.met"
        goto arg_declarator_base_type_ret;
#line 2618 "cplus.met"
        
#line 2618 "cplus.met"
    }
#line 2618 "cplus.met"
#line 2618 "cplus.met"
#line 2618 "cplus.met"

#line 2619 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2619 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2619 "cplus.met"
return((PPTREE) 0);
#line 2619 "cplus.met"

#line 2619 "cplus.met"
arg_declarator_base_type_exit :
#line 2619 "cplus.met"

#line 2619 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_EXIT,(PPTREE)0);
#line 2619 "cplus.met"
    _funcLevel--;
#line 2619 "cplus.met"
    return((PPTREE) -1) ;
#line 2619 "cplus.met"

#line 2619 "cplus.met"
arg_declarator_base_type_ret :
#line 2619 "cplus.met"
    
#line 2619 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_base_type",TRACE_RETURN,_retValue);
#line 2619 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2619 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2619 "cplus.met"
    return _retValue ;
#line 2619 "cplus.met"
}
#line 2619 "cplus.met"

#line 2619 "cplus.met"
#line 2621 "cplus.met"
PPTREE cplus::arg_declarator_expression ( int error_free)
#line 2621 "cplus.met"
{
#line 2621 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2621 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2621 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2621 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_expression",TRACE_ENTER,(PPTREE)0);
#line 2621 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2621 "cplus.met"
#line 2622 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2622 "cplus.met"
#line 2623 "cplus.met"
        {
#line 2623 "cplus.met"
            PPTREE _ptTree0=0;
#line 2623 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2623 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(arg_declarator_expression_exit,"arg_declarator_expression")
#line 2623 "cplus.met"
            }
#line 2623 "cplus.met"
            _retValue =_ptTree0;
#line 2623 "cplus.met"
            goto arg_declarator_expression_ret;
#line 2623 "cplus.met"
        }
#line 2623 "cplus.met"
    } else {
#line 2623 "cplus.met"
#line 2625 "cplus.met"
        
#line 2625 "cplus.met"
        LEX_EXIT ("",0);
#line 2625 "cplus.met"
        goto arg_declarator_expression_exit;
#line 2625 "cplus.met"
    }
#line 2625 "cplus.met"
#line 2625 "cplus.met"
#line 2625 "cplus.met"

#line 2626 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2626 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2626 "cplus.met"
return((PPTREE) 0);
#line 2626 "cplus.met"

#line 2626 "cplus.met"
arg_declarator_expression_exit :
#line 2626 "cplus.met"

#line 2626 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_EXIT,(PPTREE)0);
#line 2626 "cplus.met"
    _funcLevel--;
#line 2626 "cplus.met"
    return((PPTREE) -1) ;
#line 2626 "cplus.met"

#line 2626 "cplus.met"
arg_declarator_expression_ret :
#line 2626 "cplus.met"
    
#line 2626 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_expression",TRACE_RETURN,_retValue);
#line 2626 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2626 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2626 "cplus.met"
    return _retValue ;
#line 2626 "cplus.met"
}
#line 2626 "cplus.met"

#line 2626 "cplus.met"
#line 2654 "cplus.met"
PPTREE cplus::arg_declarator_followed ( int error_free)
#line 2654 "cplus.met"
{
#line 2654 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2654 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2654 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2654 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed",TRACE_ENTER,(PPTREE)0);
#line 2654 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2654 "cplus.met"
#line 2654 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2654 "cplus.met"
#line 2656 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base)(error_free), 8, cplus))== (PPTREE) -1 ) {
#line 2656 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_exit,"arg_declarator_followed")
#line 2656 "cplus.met"
    }
#line 2656 "cplus.met"
#line 2657 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2657 "cplus.met"
#line 2658 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2658 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2658 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_exit,",")
#line 2658 "cplus.met"
        } else {
#line 2658 "cplus.met"
            tokenAhead = 0 ;
#line 2658 "cplus.met"
        }
#line 2658 "cplus.met"
    }
#line 2658 "cplus.met"
#line 2659 "cplus.met"
    {
#line 2659 "cplus.met"
        _retValue = retTree ;
#line 2659 "cplus.met"
        goto arg_declarator_followed_ret;
#line 2659 "cplus.met"
        
#line 2659 "cplus.met"
    }
#line 2659 "cplus.met"
#line 2659 "cplus.met"
#line 2659 "cplus.met"

#line 2660 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2660 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2660 "cplus.met"
return((PPTREE) 0);
#line 2660 "cplus.met"

#line 2660 "cplus.met"
arg_declarator_followed_exit :
#line 2660 "cplus.met"

#line 2660 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_EXIT,(PPTREE)0);
#line 2660 "cplus.met"
    _funcLevel--;
#line 2660 "cplus.met"
    return((PPTREE) -1) ;
#line 2660 "cplus.met"

#line 2660 "cplus.met"
arg_declarator_followed_ret :
#line 2660 "cplus.met"
    
#line 2660 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed",TRACE_RETURN,_retValue);
#line 2660 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2660 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2660 "cplus.met"
    return _retValue ;
#line 2660 "cplus.met"
}
#line 2660 "cplus.met"

#line 2660 "cplus.met"
#line 2662 "cplus.met"
PPTREE cplus::arg_declarator_followed_strict ( int error_free)
#line 2662 "cplus.met"
{
#line 2662 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2662 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2662 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2662 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_ENTER,(PPTREE)0);
#line 2662 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2662 "cplus.met"
#line 2662 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2662 "cplus.met"
#line 2664 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2664 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_followed_strict_exit,"arg_declarator_followed_strict")
#line 2664 "cplus.met"
    }
#line 2664 "cplus.met"
#line 2665 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"..."))){
#line 2665 "cplus.met"
#line 2666 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2666 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2666 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_followed_strict_exit,",")
#line 2666 "cplus.met"
        } else {
#line 2666 "cplus.met"
            tokenAhead = 0 ;
#line 2666 "cplus.met"
        }
#line 2666 "cplus.met"
    }
#line 2666 "cplus.met"
#line 2667 "cplus.met"
    {
#line 2667 "cplus.met"
        _retValue = retTree ;
#line 2667 "cplus.met"
        goto arg_declarator_followed_strict_ret;
#line 2667 "cplus.met"
        
#line 2667 "cplus.met"
    }
#line 2667 "cplus.met"
#line 2667 "cplus.met"
#line 2667 "cplus.met"

#line 2668 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2668 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2668 "cplus.met"
return((PPTREE) 0);
#line 2668 "cplus.met"

#line 2668 "cplus.met"
arg_declarator_followed_strict_exit :
#line 2668 "cplus.met"

#line 2668 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_EXIT,(PPTREE)0);
#line 2668 "cplus.met"
    _funcLevel--;
#line 2668 "cplus.met"
    return((PPTREE) -1) ;
#line 2668 "cplus.met"

#line 2668 "cplus.met"
arg_declarator_followed_strict_ret :
#line 2668 "cplus.met"
    
#line 2668 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_followed_strict",TRACE_RETURN,_retValue);
#line 2668 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2668 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2668 "cplus.met"
    return _retValue ;
#line 2668 "cplus.met"
}
#line 2668 "cplus.met"

#line 2668 "cplus.met"
#line 2645 "cplus.met"
PPTREE cplus::arg_declarator_strict ( int error_free)
#line 2645 "cplus.met"
{
#line 2645 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2645 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2645 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2645 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_strict",TRACE_ENTER,(PPTREE)0);
#line 2645 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2645 "cplus.met"
#line 2645 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2645 "cplus.met"
#line 2647 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(arg_declarator_base_type)(error_free), 9, cplus))== (PPTREE) -1 ) {
#line 2647 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(arg_declarator_strict_exit,"arg_declarator_strict")
#line 2647 "cplus.met"
    }
#line 2647 "cplus.met"
#line 2648 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))) && 
#line 2648 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POINPOINPOIN,"...")))){
#line 2648 "cplus.met"
#line 2649 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2649 "cplus.met"
        if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 2649 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(arg_declarator_strict_exit,",")
#line 2649 "cplus.met"
        } else {
#line 2649 "cplus.met"
            tokenAhead = 0 ;
#line 2649 "cplus.met"
        }
#line 2649 "cplus.met"
    }
#line 2649 "cplus.met"
#line 2650 "cplus.met"
    {
#line 2650 "cplus.met"
        _retValue = retTree ;
#line 2650 "cplus.met"
        goto arg_declarator_strict_ret;
#line 2650 "cplus.met"
        
#line 2650 "cplus.met"
    }
#line 2650 "cplus.met"
#line 2650 "cplus.met"
#line 2650 "cplus.met"

#line 2651 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2651 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2651 "cplus.met"
return((PPTREE) 0);
#line 2651 "cplus.met"

#line 2651 "cplus.met"
arg_declarator_strict_exit :
#line 2651 "cplus.met"

#line 2651 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_EXIT,(PPTREE)0);
#line 2651 "cplus.met"
    _funcLevel--;
#line 2651 "cplus.met"
    return((PPTREE) -1) ;
#line 2651 "cplus.met"

#line 2651 "cplus.met"
arg_declarator_strict_ret :
#line 2651 "cplus.met"
    
#line 2651 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_strict",TRACE_RETURN,_retValue);
#line 2651 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2651 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2651 "cplus.met"
    return _retValue ;
#line 2651 "cplus.met"
}
#line 2651 "cplus.met"

#line 2651 "cplus.met"
#line 2670 "cplus.met"
PPTREE cplus::arg_declarator_type ( int error_free)
#line 2670 "cplus.met"
{
#line 2670 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2670 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2670 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2670 "cplus.met"
    int _Debug = TRACE_RULE("arg_declarator_type",TRACE_ENTER,(PPTREE)0);
#line 2670 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2670 "cplus.met"
#line 2670 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2670 "cplus.met"
#line 2672 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 2672 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2672 "cplus.met"
    }
#line 2672 "cplus.met"
#line 2673 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2673 "cplus.met"
#line 2674 "cplus.met"
        {
#line 2674 "cplus.met"
            PPTREE _ptRes0=0;
#line 2674 "cplus.met"
            _ptRes0= MakeTree(DECLARATOR, 2);
#line 2674 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2674 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2674 "cplus.met"
            valTree=_ptRes0;
#line 2674 "cplus.met"
        }
#line 2674 "cplus.met"
    } else {
#line 2674 "cplus.met"
#line 2676 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2676 "cplus.met"
#line 2677 "cplus.met"
            {
#line 2677 "cplus.met"
                PPTREE _ptRes0=0;
#line 2677 "cplus.met"
                _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2677 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2677 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2677 "cplus.met"
                valTree=_ptRes0;
#line 2677 "cplus.met"
            }
#line 2677 "cplus.met"
        } else {
#line 2677 "cplus.met"
#line 2679 "cplus.met"
            valTree = retTree ;
#line 2679 "cplus.met"
        }
#line 2679 "cplus.met"
    }
#line 2679 "cplus.met"
#line 2680 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 2680 "cplus.met"
#line 2681 "cplus.met"
#line 2682 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(type_name), 153, cplus)){
#line 2682 "cplus.met"
#line 2683 "cplus.met"
            {
#line 2683 "cplus.met"
                PPTREE _ptRes0=0;
#line 2683 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2683 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2683 "cplus.met"
                ReplaceTree(_ptRes0, 2, retTree );
#line 2683 "cplus.met"
                valTree=_ptRes0;
#line 2683 "cplus.met"
            }
#line 2683 "cplus.met"
        } else {
#line 2683 "cplus.met"
#line 2685 "cplus.met"
            {
#line 2685 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2685 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 2685 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 2685 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2685 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                    PROG_EXIT(arg_declarator_type_exit,"arg_declarator_type")
#line 2685 "cplus.met"
                }
#line 2685 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2685 "cplus.met"
                valTree=_ptRes0;
#line 2685 "cplus.met"
            }
#line 2685 "cplus.met"
        }
#line 2685 "cplus.met"
#line 2685 "cplus.met"
#line 2685 "cplus.met"
    }
#line 2685 "cplus.met"
#line 2687 "cplus.met"
    {
#line 2687 "cplus.met"
        _retValue = valTree ;
#line 2687 "cplus.met"
        goto arg_declarator_type_ret;
#line 2687 "cplus.met"
        
#line 2687 "cplus.met"
    }
#line 2687 "cplus.met"
#line 2687 "cplus.met"
#line 2687 "cplus.met"

#line 2688 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2688 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2688 "cplus.met"
return((PPTREE) 0);
#line 2688 "cplus.met"

#line 2688 "cplus.met"
arg_declarator_type_exit :
#line 2688 "cplus.met"

#line 2688 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_EXIT,(PPTREE)0);
#line 2688 "cplus.met"
    _funcLevel--;
#line 2688 "cplus.met"
    return((PPTREE) -1) ;
#line 2688 "cplus.met"

#line 2688 "cplus.met"
arg_declarator_type_ret :
#line 2688 "cplus.met"
    
#line 2688 "cplus.met"
    _Debug = TRACE_RULE("arg_declarator_type",TRACE_RETURN,_retValue);
#line 2688 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2688 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2688 "cplus.met"
    return _retValue ;
#line 2688 "cplus.met"
}
#line 2688 "cplus.met"

#line 2688 "cplus.met"
#line 2323 "cplus.met"
PPTREE cplus::arg_typ_declarator ( int error_free)
#line 2323 "cplus.met"
{
#line 2323 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2323 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2323 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2323 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_declarator",TRACE_ENTER,(PPTREE)0);
#line 2323 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2323 "cplus.met"
#line 2323 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,except = (PPTREE) 0;
#line 2323 "cplus.met"
#line 2325 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2325 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2325 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,"(")
#line 2325 "cplus.met"
    } else {
#line 2325 "cplus.met"
        tokenAhead = 0 ;
#line 2325 "cplus.met"
    }
#line 2325 "cplus.met"
#line 2326 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(arg_typ_list), 16, cplus)){
#line 2326 "cplus.met"
#line 2327 "cplus.met"
        {
#line 2327 "cplus.met"
            PPTREE _ptRes0=0;
#line 2327 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2327 "cplus.met"
            ReplaceTree(_ptRes0, 2, expList );
#line 2327 "cplus.met"
            retTree=_ptRes0;
#line 2327 "cplus.met"
        }
#line 2327 "cplus.met"
    } else {
#line 2327 "cplus.met"
#line 2329 "cplus.met"
        {
#line 2329 "cplus.met"
            PPTREE _ptRes0=0;
#line 2329 "cplus.met"
            _ptRes0= MakeTree(TYP_LIST, 4);
#line 2329 "cplus.met"
            retTree=_ptRes0;
#line 2329 "cplus.met"
        }
#line 2329 "cplus.met"
    }
#line 2329 "cplus.met"
#line 2330 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2330 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2330 "cplus.met"
        MulFreeTree(3,except,expList,retTree);
        TOKEN_EXIT(arg_typ_declarator_exit,")")
#line 2330 "cplus.met"
    } else {
#line 2330 "cplus.met"
        tokenAhead = 0 ;
#line 2330 "cplus.met"
    }
#line 2330 "cplus.met"
#line 2331 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(except = ,_Tak(exception_list), 65, cplus)){
#line 2331 "cplus.met"
#line 2332 "cplus.met"
        ReplaceTree(retTree ,4 ,except );
#line 2332 "cplus.met"
#line 2332 "cplus.met"
    }
#line 2332 "cplus.met"
#line 2333 "cplus.met"
    {
#line 2333 "cplus.met"
        _retValue = retTree ;
#line 2333 "cplus.met"
        goto arg_typ_declarator_ret;
#line 2333 "cplus.met"
        
#line 2333 "cplus.met"
    }
#line 2333 "cplus.met"
#line 2333 "cplus.met"
#line 2333 "cplus.met"

#line 2334 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2334 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2334 "cplus.met"
return((PPTREE) 0);
#line 2334 "cplus.met"

#line 2334 "cplus.met"
arg_typ_declarator_exit :
#line 2334 "cplus.met"

#line 2334 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_EXIT,(PPTREE)0);
#line 2334 "cplus.met"
    _funcLevel--;
#line 2334 "cplus.met"
    return((PPTREE) -1) ;
#line 2334 "cplus.met"

#line 2334 "cplus.met"
arg_typ_declarator_ret :
#line 2334 "cplus.met"
    
#line 2334 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_declarator",TRACE_RETURN,_retValue);
#line 2334 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2334 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2334 "cplus.met"
    return _retValue ;
#line 2334 "cplus.met"
}
#line 2334 "cplus.met"

#line 2334 "cplus.met"
#line 2566 "cplus.met"
PPTREE cplus::arg_typ_list ( int error_free)
#line 2566 "cplus.met"
{
#line 2566 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2566 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2566 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2566 "cplus.met"
    int _Debug = TRACE_RULE("arg_typ_list",TRACE_ENTER,(PPTREE)0);
#line 2566 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2566 "cplus.met"
#line 2566 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2566 "cplus.met"
#line 2566 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2566 "cplus.met"
#line 2568 "cplus.met"
     { int followed = 0;
#line 2568 "cplus.met"
#line 2569 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed_strict), 12, cplus)){
#line 2569 "cplus.met"
#line 2570 "cplus.met"
         followed = 1;
#line 2570 "cplus.met"
    } else {
#line 2570 "cplus.met"
#line 2572 "cplus.met"
        if ( (valTree=NQUICK_CALL(_Tak(arg_declarator_strict)(error_free), 13, cplus))== (PPTREE) -1 ) {
#line 2572 "cplus.met"
            MulFreeTree(3,_addlist1,retTree,valTree);
            PROG_EXIT(arg_typ_list_exit,"arg_typ_list")
#line 2572 "cplus.met"
        }
#line 2572 "cplus.met"
    }
#line 2572 "cplus.met"
#line 2573 "cplus.met"
    retTree =AddList(retTree ,valTree );
#line 2573 "cplus.met"
#line 2574 "cplus.met"
#line 2575 "cplus.met"
     {  int exit = 0 ; 
#line 2575 "cplus.met"
#line 2575 "cplus.met"
    _addlist1 = retTree ;
#line 2575 "cplus.met"
#line 2576 "cplus.met"
    while ( followed && !exit ) { 
#line 2576 "cplus.met"
#line 2577 "cplus.met"
#line 2578 "cplus.met"
         followed = 0;
#line 2578 "cplus.met"
#line 2579 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator_followed), 11, cplus)){
#line 2579 "cplus.met"
#line 2580 "cplus.met"
#line 2581 "cplus.met"
             followed = 1;
#line 2581 "cplus.met"
#line 2582 "cplus.met"
            _addlist1 =AddList(_addlist1 ,valTree );
#line 2582 "cplus.met"
#line 2582 "cplus.met"
            if (retTree){
#line 2582 "cplus.met"
#line 2582 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2582 "cplus.met"
            } else {
#line 2582 "cplus.met"
#line 2582 "cplus.met"
                retTree = _addlist1 ;
#line 2582 "cplus.met"
            }
#line 2582 "cplus.met"
#line 2582 "cplus.met"
#line 2582 "cplus.met"
        } else {
#line 2582 "cplus.met"
#line 2585 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_declarator), 7, cplus)){
#line 2585 "cplus.met"
#line 2586 "cplus.met"
#line 2587 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 2587 "cplus.met"
#line 2587 "cplus.met"
                if (retTree){
#line 2587 "cplus.met"
#line 2587 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2587 "cplus.met"
                } else {
#line 2587 "cplus.met"
#line 2587 "cplus.met"
                    retTree = _addlist1 ;
#line 2587 "cplus.met"
                }
#line 2587 "cplus.met"
#line 2587 "cplus.met"
#line 2587 "cplus.met"
            } else {
#line 2587 "cplus.met"
#line 2590 "cplus.met"
#line 2591 "cplus.met"
                {
#line 2591 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2591 "cplus.met"
                    {
#line 2591 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2591 "cplus.met"
                        _ptRes1= MakeTree(VAR_LIST, 0);
#line 2591 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2591 "cplus.met"
                    }
#line 2591 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2591 "cplus.met"
                }
#line 2591 "cplus.met"
#line 2591 "cplus.met"
                if (retTree){
#line 2591 "cplus.met"
#line 2591 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2591 "cplus.met"
                } else {
#line 2591 "cplus.met"
#line 2591 "cplus.met"
                    retTree = _addlist1 ;
#line 2591 "cplus.met"
                }
#line 2591 "cplus.met"
#line 2592 "cplus.met"
                 exit = 1 ;
#line 2592 "cplus.met"
#line 2593 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2593 "cplus.met"
#line 2593 "cplus.met"
                }
#line 2593 "cplus.met"
#line 2593 "cplus.met"
            }
#line 2593 "cplus.met"
        }
#line 2593 "cplus.met"
#line 2593 "cplus.met"
    } 
#line 2593 "cplus.met"
#line 2597 "cplus.met"
    if ((! ( exit )) && 
#line 2597 "cplus.met"
       ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1))){
#line 2597 "cplus.met"
#line 2598 "cplus.met"
        {
#line 2598 "cplus.met"
            PPTREE _ptTree0=0;
#line 2598 "cplus.met"
            {
#line 2598 "cplus.met"
                PPTREE _ptRes1=0;
#line 2598 "cplus.met"
                _ptRes1= MakeTree(VAR_LIST, 0);
#line 2598 "cplus.met"
                _ptTree0=_ptRes1;
#line 2598 "cplus.met"
            }
#line 2598 "cplus.met"
            valTree =AddList(valTree , _ptTree0);
#line 2598 "cplus.met"
        }
#line 2598 "cplus.met"
#line 2598 "cplus.met"
    }
#line 2598 "cplus.met"
#line 2599 "cplus.met"
     } } 
#line 2599 "cplus.met"
#line 2599 "cplus.met"
#line 2601 "cplus.met"
    {
#line 2601 "cplus.met"
        _retValue = retTree ;
#line 2601 "cplus.met"
        goto arg_typ_list_ret;
#line 2601 "cplus.met"
        
#line 2601 "cplus.met"
    }
#line 2601 "cplus.met"
#line 2601 "cplus.met"
#line 2601 "cplus.met"

#line 2602 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2602 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2602 "cplus.met"
return((PPTREE) 0);
#line 2602 "cplus.met"

#line 2602 "cplus.met"
arg_typ_list_exit :
#line 2602 "cplus.met"

#line 2602 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_EXIT,(PPTREE)0);
#line 2602 "cplus.met"
    _funcLevel--;
#line 2602 "cplus.met"
    return((PPTREE) -1) ;
#line 2602 "cplus.met"

#line 2602 "cplus.met"
arg_typ_list_ret :
#line 2602 "cplus.met"
    
#line 2602 "cplus.met"
    _Debug = TRACE_RULE("arg_typ_list",TRACE_RETURN,_retValue);
#line 2602 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2602 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2602 "cplus.met"
    return _retValue ;
#line 2602 "cplus.met"
}
#line 2602 "cplus.met"

#line 2602 "cplus.met"
#line 3045 "cplus.met"
PPTREE cplus::array_expression_follow ( int error_free)
#line 3045 "cplus.met"
{
#line 3045 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3045 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3045 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3045 "cplus.met"
    int _Debug = TRACE_RULE("array_expression_follow",TRACE_ENTER,(PPTREE)0);
#line 3045 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3045 "cplus.met"
#line 3045 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3045 "cplus.met"
#line 3047 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(expression), 67, cplus)){
#line 3047 "cplus.met"
#line 3048 "cplus.met"
        {
#line 3048 "cplus.met"
            PPTREE _ptRes0=0;
#line 3048 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3048 "cplus.met"
            ReplaceTree(_ptRes0, 2, expTree );
#line 3048 "cplus.met"
            expTree=_ptRes0;
#line 3048 "cplus.met"
        }
#line 3048 "cplus.met"
    } else {
#line 3048 "cplus.met"
#line 3050 "cplus.met"
        {
#line 3050 "cplus.met"
            PPTREE _ptRes0=0;
#line 3050 "cplus.met"
            _ptRes0= MakeTree(EXP_ARRAY, 2);
#line 3050 "cplus.met"
            expTree=_ptRes0;
#line 3050 "cplus.met"
        }
#line 3050 "cplus.met"
    }
#line 3050 "cplus.met"
#line 3051 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3051 "cplus.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3051 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(array_expression_follow_exit,"]")
#line 3051 "cplus.met"
    } else {
#line 3051 "cplus.met"
        tokenAhead = 0 ;
#line 3051 "cplus.met"
    }
#line 3051 "cplus.met"
#line 3052 "cplus.met"
    {
#line 3052 "cplus.met"
        _retValue = expTree ;
#line 3052 "cplus.met"
        goto array_expression_follow_ret;
#line 3052 "cplus.met"
        
#line 3052 "cplus.met"
    }
#line 3052 "cplus.met"
#line 3052 "cplus.met"
#line 3052 "cplus.met"

#line 3053 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3053 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3053 "cplus.met"
return((PPTREE) 0);
#line 3053 "cplus.met"

#line 3053 "cplus.met"
array_expression_follow_exit :
#line 3053 "cplus.met"

#line 3053 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_EXIT,(PPTREE)0);
#line 3053 "cplus.met"
    _funcLevel--;
#line 3053 "cplus.met"
    return((PPTREE) -1) ;
#line 3053 "cplus.met"

#line 3053 "cplus.met"
array_expression_follow_ret :
#line 3053 "cplus.met"
    
#line 3053 "cplus.met"
    _Debug = TRACE_RULE("array_expression_follow",TRACE_RETURN,_retValue);
#line 3053 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3053 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3053 "cplus.met"
    return _retValue ;
#line 3053 "cplus.met"
}
#line 3053 "cplus.met"

#line 3053 "cplus.met"
#line 2258 "cplus.met"
PPTREE cplus::asm_call ( int error_free)
#line 2258 "cplus.met"
{
#line 2258 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2258 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2258 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2258 "cplus.met"
    int _Debug = TRACE_RULE("asm_call",TRACE_ENTER,(PPTREE)0);
#line 2258 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2258 "cplus.met"
#line 2258 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2258 "cplus.met"
#line 2260 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2260 "cplus.met"
    if (  !SEE_TOKEN( __ASM__,"__asm__") || !(CommTerm(),1)) {
#line 2260 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"__asm__")
#line 2260 "cplus.met"
    } else {
#line 2260 "cplus.met"
        tokenAhead = 0 ;
#line 2260 "cplus.met"
    }
#line 2260 "cplus.met"
#line 2261 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2261 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2261 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,"(")
#line 2261 "cplus.met"
    } else {
#line 2261 "cplus.met"
        tokenAhead = 0 ;
#line 2261 "cplus.met"
    }
#line 2261 "cplus.met"
#line 2262 "cplus.met"
    {
#line 2262 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2262 "cplus.met"
        _ptRes0= MakeTree(ASM_CALL, 1);
#line 2262 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2262 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(asm_call_exit,"asm_call")
#line 2262 "cplus.met"
        }
#line 2262 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2262 "cplus.met"
        retTree=_ptRes0;
#line 2262 "cplus.met"
    }
#line 2262 "cplus.met"
#line 2263 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2263 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2263 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(asm_call_exit,")")
#line 2263 "cplus.met"
    } else {
#line 2263 "cplus.met"
        tokenAhead = 0 ;
#line 2263 "cplus.met"
    }
#line 2263 "cplus.met"
#line 2264 "cplus.met"
    {
#line 2264 "cplus.met"
        _retValue = retTree ;
#line 2264 "cplus.met"
        goto asm_call_ret;
#line 2264 "cplus.met"
        
#line 2264 "cplus.met"
    }
#line 2264 "cplus.met"
#line 2264 "cplus.met"
#line 2264 "cplus.met"

#line 2265 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2265 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2265 "cplus.met"
return((PPTREE) 0);
#line 2265 "cplus.met"

#line 2265 "cplus.met"
asm_call_exit :
#line 2265 "cplus.met"

#line 2265 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_EXIT,(PPTREE)0);
#line 2265 "cplus.met"
    _funcLevel--;
#line 2265 "cplus.met"
    return((PPTREE) -1) ;
#line 2265 "cplus.met"

#line 2265 "cplus.met"
asm_call_ret :
#line 2265 "cplus.met"
    
#line 2265 "cplus.met"
    _Debug = TRACE_RULE("asm_call",TRACE_RETURN,_retValue);
#line 2265 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2265 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2265 "cplus.met"
    return _retValue ;
#line 2265 "cplus.met"
}
#line 2265 "cplus.met"

#line 2265 "cplus.met"
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
