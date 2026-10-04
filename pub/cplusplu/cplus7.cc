/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2456 "cplus.met"
PPTREE cplus::ptr_operator ( int error_free)
#line 2456 "cplus.met"
{
#line 2456 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2456 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2456 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2456 "cplus.met"
    int _Debug = TRACE_RULE("ptr_operator",TRACE_ENTER,(PPTREE)0);
#line 2456 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2456 "cplus.met"
#line 2456 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,retour = (PPTREE) 0;
#line 2456 "cplus.met"
#line 2458 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2458 "cplus.met"
    switch( lexEl.Value) {
#line 2458 "cplus.met"
#line 2461 "cplus.met"
        case ETOI : 
#line 2461 "cplus.met"
            tokenAhead = 0 ;
#line 2461 "cplus.met"
            CommTerm();
#line 2461 "cplus.met"
#line 2460 "cplus.met"
#line 2461 "cplus.met"
            {
#line 2461 "cplus.met"
                PPTREE _ptRes0=0;
#line 2461 "cplus.met"
                _ptRes0= MakeTree(TYP_ADDR, 1);
#line 2461 "cplus.met"
                retTree=_ptRes0;
#line 2461 "cplus.met"
            }
#line 2461 "cplus.met"
#line 2462 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 2462 "cplus.met"
#line 2463 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2463 "cplus.met"
#line 2463 "cplus.met"
            }
#line 2463 "cplus.met"
#line 2464 "cplus.met"
            {
#line 2464 "cplus.met"
                _retValue = retTree ;
#line 2464 "cplus.met"
                goto ptr_operator_ret;
#line 2464 "cplus.met"
                
#line 2464 "cplus.met"
            }
#line 2464 "cplus.met"
#line 2464 "cplus.met"
            break;
#line 2464 "cplus.met"
#line 2468 "cplus.met"
        case ETCO : 
#line 2468 "cplus.met"
            tokenAhead = 0 ;
#line 2468 "cplus.met"
            CommTerm();
#line 2468 "cplus.met"
#line 2467 "cplus.met"
#line 2468 "cplus.met"
            {
#line 2468 "cplus.met"
                PPTREE _ptRes0=0;
#line 2468 "cplus.met"
                _ptRes0= MakeTree(TYP_REF, 1);
#line 2468 "cplus.met"
                retTree=_ptRes0;
#line 2468 "cplus.met"
            }
#line 2468 "cplus.met"
#line 2469 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 2469 "cplus.met"
#line 2470 "cplus.met"
                ReplaceTree(retTree ,1 ,valTree );
#line 2470 "cplus.met"
#line 2470 "cplus.met"
            }
#line 2470 "cplus.met"
#line 2471 "cplus.met"
            {
#line 2471 "cplus.met"
                _retValue = retTree ;
#line 2471 "cplus.met"
                goto ptr_operator_ret;
#line 2471 "cplus.met"
                
#line 2471 "cplus.met"
            }
#line 2471 "cplus.met"
#line 2471 "cplus.met"
            break;
#line 2471 "cplus.met"
#line 2475 "cplus.met"
        case DPOIDPOI : 
#line 2475 "cplus.met"
#line 2474 "cplus.met"
#line 2475 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2475 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2475 "cplus.met"
            }
#line 2475 "cplus.met"
#line 2475 "cplus.met"
            break;
#line 2475 "cplus.met"
#line 2477 "cplus.met"
        case META : 
#line 2477 "cplus.met"
        case IDENT : 
#line 2477 "cplus.met"
#line 2478 "cplus.met"
#line 2479 "cplus.met"
            if ( (retour=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2479 "cplus.met"
                MulFreeTree(3,retTree,retour,valTree);
                PROG_EXIT(ptr_operator_exit,"ptr_operator")
#line 2479 "cplus.met"
            }
#line 2479 "cplus.met"
#line 2479 "cplus.met"
            break;
#line 2479 "cplus.met"
        default :
#line 2479 "cplus.met"
            MulFreeTree(3,retTree,retour,valTree);
            CASE_EXIT(ptr_operator_exit,"either * or & or :: or IDENT")
#line 2479 "cplus.met"
            break;
#line 2479 "cplus.met"
    }
#line 2479 "cplus.met"
#line 2482 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 2482 "cplus.met"
#line 2483 "cplus.met"
        ReplaceTree(retour ,2 ,valTree );
#line 2483 "cplus.met"
#line 2483 "cplus.met"
    }
#line 2483 "cplus.met"
#line 2484 "cplus.met"
    {
#line 2484 "cplus.met"
        _retValue = retour ;
#line 2484 "cplus.met"
        goto ptr_operator_ret;
#line 2484 "cplus.met"
        
#line 2484 "cplus.met"
    }
#line 2484 "cplus.met"
#line 2484 "cplus.met"
#line 2484 "cplus.met"

#line 2485 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2485 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2485 "cplus.met"
return((PPTREE) 0);
#line 2485 "cplus.met"

#line 2485 "cplus.met"
ptr_operator_exit :
#line 2485 "cplus.met"

#line 2485 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_EXIT,(PPTREE)0);
#line 2485 "cplus.met"
    _funcLevel--;
#line 2485 "cplus.met"
    return((PPTREE) -1) ;
#line 2485 "cplus.met"

#line 2485 "cplus.met"
ptr_operator_ret :
#line 2485 "cplus.met"
    
#line 2485 "cplus.met"
    _Debug = TRACE_RULE("ptr_operator",TRACE_RETURN,_retValue);
#line 2485 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2485 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2485 "cplus.met"
    return _retValue ;
#line 2485 "cplus.met"
}
#line 2485 "cplus.met"

#line 2485 "cplus.met"
#line 2049 "cplus.met"
PPTREE cplus::qualified_name ( int error_free)
#line 2049 "cplus.met"
{
#line 2049 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2049 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2049 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2049 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name",TRACE_ENTER,(PPTREE)0);
#line 2049 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2049 "cplus.met"
#line 2049 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,val = (PPTREE) 0,templateVal = (PPTREE) 0;
#line 2049 "cplus.met"
#line 2051 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TILD,"~") && (tokenAhead = 0,CommTerm(),1)){
#line 2051 "cplus.met"
#line 2052 "cplus.met"
        {
#line 2052 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2052 "cplus.met"
            _ptRes0= MakeTree(DESTRUCT, 1);
#line 2052 "cplus.met"
            {
#line 2052 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2052 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2052 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2052 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2052 "cplus.met"
                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,inter,retTree,templateVal,val);
                    TOKEN_EXIT(qualified_name_exit,"IDENT")
#line 2052 "cplus.met"
                } else {
#line 2052 "cplus.met"
                    tokenAhead = 0 ;
#line 2052 "cplus.met"
                }
#line 2052 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2052 "cplus.met"
                _ptTree0=_ptRes1;
#line 2052 "cplus.met"
            }
#line 2052 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2052 "cplus.met"
            retTree=_ptRes0;
#line 2052 "cplus.met"
        }
#line 2052 "cplus.met"
    } else {
#line 2052 "cplus.met"
#line 2054 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(simple_ident)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 2054 "cplus.met"
            MulFreeTree(4,inter,retTree,templateVal,val);
            PROG_EXIT(qualified_name_exit,"qualified_name")
#line 2054 "cplus.met"
        }
#line 2054 "cplus.met"
    }
#line 2054 "cplus.met"
#line 2055 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 2055 "cplus.met"
#line 2056 "cplus.met"
#line 2057 "cplus.met"
        {
#line 2057 "cplus.met"
            PPTREE _ptRes0=0;
#line 2057 "cplus.met"
            _ptRes0= MakeTree(QUALIFIED, 2);
#line 2057 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2057 "cplus.met"
            retTree=_ptRes0;
#line 2057 "cplus.met"
        }
#line 2057 "cplus.met"
#line 2058 "cplus.met"
        inter = retTree ;
#line 2058 "cplus.met"
#line 2059 "cplus.met"
        while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) && 
#line 2059 "cplus.met"
              (NPUSH_CALL_AFF_VERIF(val = ,_Tak(qualified_name_elem), 125, cplus))) { 
#line 2059 "cplus.met"
#line 2060 "cplus.met"
#line 2061 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")){
#line 2061 "cplus.met"
#line 2062 "cplus.met"
                {
#line 2062 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2062 "cplus.met"
                    _ptRes0= MakeTree(QUALIFIED, 2);
#line 2062 "cplus.met"
                    ReplaceTree(_ptRes0, 1, val );
#line 2062 "cplus.met"
                    val=_ptRes0;
#line 2062 "cplus.met"
                }
#line 2062 "cplus.met"
            }
#line 2062 "cplus.met"
#line 2063 "cplus.met"
            ReplaceTree(inter ,2 ,val );
#line 2063 "cplus.met"
#line 2064 "cplus.met"
            inter = val ;
#line 2064 "cplus.met"
#line 2064 "cplus.met"
        } 
#line 2064 "cplus.met"
#line 2064 "cplus.met"
#line 2065 "cplus.met"
    }
#line 2065 "cplus.met"
#line 2067 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(templateVal = ,_Tak(template_type), 152, cplus)){
#line 2067 "cplus.met"
#line 2068 "cplus.met"
#line 2069 "cplus.met"
        ReplaceTree(templateVal ,1 ,retTree );
#line 2069 "cplus.met"
#line 2070 "cplus.met"
        retTree = templateVal ;
#line 2070 "cplus.met"
#line 2071 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)){
#line 2071 "cplus.met"
#line 2072 "cplus.met"
            {
#line 2072 "cplus.met"
                PPTREE _ptTree0=0;
#line 2072 "cplus.met"
                {
#line 2072 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2072 "cplus.met"
                    _ptRes1= MakeTree(QUALIFIED, 2);
#line 2072 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2072 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2072 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,inter,retTree,templateVal,val);
                        PROG_EXIT(qualified_name_exit,"qualified_name")
#line 2072 "cplus.met"
                    }
#line 2072 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2072 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2072 "cplus.met"
                }
#line 2072 "cplus.met"
                _retValue =_ptTree0;
#line 2072 "cplus.met"
                goto qualified_name_ret;
#line 2072 "cplus.met"
            }
#line 2072 "cplus.met"
        } else {
#line 2072 "cplus.met"
#line 2074 "cplus.met"
            {
#line 2074 "cplus.met"
                _retValue = retTree ;
#line 2074 "cplus.met"
                goto qualified_name_ret;
#line 2074 "cplus.met"
                
#line 2074 "cplus.met"
            }
#line 2074 "cplus.met"
        }
#line 2074 "cplus.met"
#line 2074 "cplus.met"
#line 2074 "cplus.met"
    }
#line 2074 "cplus.met"
#line 2076 "cplus.met"
    {
#line 2076 "cplus.met"
        _retValue = retTree ;
#line 2076 "cplus.met"
        goto qualified_name_ret;
#line 2076 "cplus.met"
        
#line 2076 "cplus.met"
    }
#line 2076 "cplus.met"
#line 2076 "cplus.met"
#line 2076 "cplus.met"

#line 2077 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2077 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2077 "cplus.met"
return((PPTREE) 0);
#line 2077 "cplus.met"

#line 2077 "cplus.met"
qualified_name_exit :
#line 2077 "cplus.met"

#line 2077 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_EXIT,(PPTREE)0);
#line 2077 "cplus.met"
    _funcLevel--;
#line 2077 "cplus.met"
    return((PPTREE) -1) ;
#line 2077 "cplus.met"

#line 2077 "cplus.met"
qualified_name_ret :
#line 2077 "cplus.met"
    
#line 2077 "cplus.met"
    _Debug = TRACE_RULE("qualified_name",TRACE_RETURN,_retValue);
#line 2077 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2077 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2077 "cplus.met"
    return _retValue ;
#line 2077 "cplus.met"
}
#line 2077 "cplus.met"

#line 2077 "cplus.met"
#line 2023 "cplus.met"
PPTREE cplus::qualified_name_elem ( int error_free)
#line 2023 "cplus.met"
{
#line 2023 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2023 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2023 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2023 "cplus.met"
    int _Debug = TRACE_RULE("qualified_name_elem",TRACE_ENTER,(PPTREE)0);
#line 2023 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2023 "cplus.met"
#line 2024 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2024 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2024 "cplus.met"
            TOKEN_EXIT(qualified_name_elem_exit,"::")
#line 2024 "cplus.met"
    } else {
#line 2024 "cplus.met"
        tokenAhead = 0 ;
#line 2024 "cplus.met"
    }
#line 2024 "cplus.met"
#line 2025 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2025 "cplus.met"
    switch( lexEl.Value) {
#line 2025 "cplus.met"
#line 2026 "cplus.met"
        case TILD : 
#line 2026 "cplus.met"
            tokenAhead = 0 ;
#line 2026 "cplus.met"
            CommTerm();
#line 2026 "cplus.met"
#line 2026 "cplus.met"
            {
#line 2026 "cplus.met"
                PPTREE _ptTree0=0;
#line 2026 "cplus.met"
                {
#line 2026 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2026 "cplus.met"
                    _ptRes1= MakeTree(DESTRUCT, 1);
#line 2026 "cplus.met"
                    {
#line 2026 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2026 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2026 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2026 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 2026 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(qualified_name_elem_exit,"IDENT")
#line 2026 "cplus.met"
                        } else {
#line 2026 "cplus.met"
                            tokenAhead = 0 ;
#line 2026 "cplus.met"
                        }
#line 2026 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2026 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2026 "cplus.met"
                    }
#line 2026 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2026 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2026 "cplus.met"
                }
#line 2026 "cplus.met"
                _retValue =_ptTree0;
#line 2026 "cplus.met"
                goto qualified_name_elem_ret;
#line 2026 "cplus.met"
            }
#line 2026 "cplus.met"
            break;
#line 2026 "cplus.met"
#line 2027 "cplus.met"
        case META : 
#line 2027 "cplus.met"
        case IDENT : 
#line 2027 "cplus.met"
#line 2027 "cplus.met"
            {
#line 2027 "cplus.met"
                PPTREE _ptTree0=0;
#line 2027 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_ident)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 2027 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 2027 "cplus.met"
                }
#line 2027 "cplus.met"
                _retValue =_ptTree0;
#line 2027 "cplus.met"
                goto qualified_name_elem_ret;
#line 2027 "cplus.met"
            }
#line 2027 "cplus.met"
            break;
#line 2027 "cplus.met"
#line 2028 "cplus.met"
        case OPERATOR : 
#line 2028 "cplus.met"
#line 2028 "cplus.met"
            {
#line 2028 "cplus.met"
                PPTREE _ptTree0=0;
#line 2028 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 2028 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(qualified_name_elem_exit,"qualified_name_elem")
#line 2028 "cplus.met"
                }
#line 2028 "cplus.met"
                _retValue =_ptTree0;
#line 2028 "cplus.met"
                goto qualified_name_elem_ret;
#line 2028 "cplus.met"
            }
#line 2028 "cplus.met"
            break;
#line 2028 "cplus.met"
        default :
#line 2028 "cplus.met"
            CASE_EXIT(qualified_name_elem_exit,"either ~ or IDENT or operator")
#line 2028 "cplus.met"
            break;
#line 2028 "cplus.met"
    }
#line 2028 "cplus.met"
#line 2028 "cplus.met"
#line 2029 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2029 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2029 "cplus.met"
return((PPTREE) 0);
#line 2029 "cplus.met"

#line 2029 "cplus.met"
qualified_name_elem_exit :
#line 2029 "cplus.met"

#line 2029 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_EXIT,(PPTREE)0);
#line 2029 "cplus.met"
    _funcLevel--;
#line 2029 "cplus.met"
    return((PPTREE) -1) ;
#line 2029 "cplus.met"

#line 2029 "cplus.met"
qualified_name_elem_ret :
#line 2029 "cplus.met"
    
#line 2029 "cplus.met"
    _Debug = TRACE_RULE("qualified_name_elem",TRACE_RETURN,_retValue);
#line 2029 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2029 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2029 "cplus.met"
    return _retValue ;
#line 2029 "cplus.met"
}
#line 2029 "cplus.met"

#line 2029 "cplus.met"
#line 953 "cplus.met"
PPTREE cplus::quick_prog ( int error_free)
#line 953 "cplus.met"
{
#line 953 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 953 "cplus.met"
    int _value,_nbPre = 0 ;
#line 953 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 953 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog",TRACE_ENTER,(PPTREE)0);
#line 953 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 953 "cplus.met"
#line 953 "cplus.met"
    PPTREE list = (PPTREE) 0,valTree = (PPTREE) 0;
#line 953 "cplus.met"
#line 955 "cplus.met"
    while ((NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(quick_prog_elem), 127, cplus)) && 
#line 955 "cplus.met"
          (! (valTree == (PPTREE) 0))) { 
#line 955 "cplus.met"
#line 956 "cplus.met"
#line 957 "cplus.met"
        FreeTree (valTree );
#line 957 "cplus.met"
#line 958 "cplus.met"
         _lastTree = (PPTREE) 0;
#line 958 "cplus.met"
#line 958 "cplus.met"
    } 
#line 958 "cplus.met"
#line 960 "cplus.met"
    ExtUnputBuf();
#line 960 "cplus.met"
    while ((c == ' ')||(c == '\n')||(c == '\t')||(c == '\r')||(c == ''))
#line 960 "cplus.met"
        NextChar() ;
#line 960 "cplus.met"
    ptStockBuf = -1;
#line 960 "cplus.met"
    lexEl.Erase();
#line 960 "cplus.met"
    tokenAhead = 0;
#line 960 "cplus.met"
    oldLine=line,oldCol=col;
#line 960 "cplus.met"
    if ( !lexCallLex) {
#line 960 "cplus.met"
        PUT_COORD_CALL;
#line 960 "cplus.met"
    }
#line 960 "cplus.met"
#line 961 "cplus.met"
    if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 961 "cplus.met"
#line 962 "cplus.met"
        if ( (NQUICK_CALL(_Tak(quick_prog_elem)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 962 "cplus.met"
            MulFreeTree(2,list,valTree);
            PROG_EXIT(quick_prog_exit,"quick_prog")
#line 962 "cplus.met"
        }
#line 962 "cplus.met"
    }
#line 962 "cplus.met"
#line 963 "cplus.met"
    {
#line 963 "cplus.met"
        _retValue = list ;
#line 963 "cplus.met"
        goto quick_prog_ret;
#line 963 "cplus.met"
        
#line 963 "cplus.met"
    }
#line 963 "cplus.met"
#line 963 "cplus.met"
#line 963 "cplus.met"

#line 964 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 964 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 964 "cplus.met"
return((PPTREE) 0);
#line 964 "cplus.met"

#line 964 "cplus.met"
quick_prog_exit :
#line 964 "cplus.met"

#line 964 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_EXIT,(PPTREE)0);
#line 964 "cplus.met"
    _funcLevel--;
#line 964 "cplus.met"
    return((PPTREE) -1) ;
#line 964 "cplus.met"

#line 964 "cplus.met"
quick_prog_ret :
#line 964 "cplus.met"
    
#line 964 "cplus.met"
    _Debug = TRACE_RULE("quick_prog",TRACE_RETURN,_retValue);
#line 964 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 964 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 964 "cplus.met"
    return _retValue ;
#line 964 "cplus.met"
}
#line 964 "cplus.met"

#line 964 "cplus.met"
#line 986 "cplus.met"
PPTREE cplus::quick_prog_elem ( int error_free)
#line 986 "cplus.met"
{
#line 986 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 986 "cplus.met"
    int _value,_nbPre = 0 ;
#line 986 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 986 "cplus.met"
    int _Debug = TRACE_RULE("quick_prog_elem",TRACE_ENTER,(PPTREE)0);
#line 986 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 986 "cplus.met"
#line 986 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 986 "cplus.met"
#line 988 "cplus.met"
     debut :
#line 988 "cplus.met"
#line 989 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 989 "cplus.met"
    switch( lexEl.Value) {
#line 989 "cplus.met"
#line 990 "cplus.met"
        case META : 
#line 990 "cplus.met"
        case INCLUDE_DIR : 
#line 990 "cplus.met"
#line 990 "cplus.met"
            {
#line 990 "cplus.met"
                PPTREE _ptTree0=0;
#line 990 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 990 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 990 "cplus.met"
                }
#line 990 "cplus.met"
                _retValue =_ptTree0;
#line 990 "cplus.met"
                goto quick_prog_elem_ret;
#line 990 "cplus.met"
            }
#line 990 "cplus.met"
            break;
#line 990 "cplus.met"
#line 991 "cplus.met"
        case PRAGMA_DIR : 
#line 991 "cplus.met"
            tokenAhead = 0 ;
#line 991 "cplus.met"
            CommTerm();
#line 991 "cplus.met"
#line 992 "cplus.met"
#line 993 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(range_pragma), 132, cplus)){
#line 993 "cplus.met"
#line 993 "cplus.met"
            }
#line 993 "cplus.met"
#line 995 "cplus.met"
            (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 995 "cplus.met"
            switch( lexEl.Value) {
#line 995 "cplus.met"
#line 996 "cplus.met"
                case META : 
#line 996 "cplus.met"
                case PRAGMA_CONFIG : 
#line 996 "cplus.met"
                    tokenAhead = 0 ;
#line 996 "cplus.met"
                    CommTerm();
#line 996 "cplus.met"
#line 997 "cplus.met"
#line 998 "cplus.met"
                    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 998 "cplus.met"
                    switch( lexEl.Value) {
#line 998 "cplus.met"
#line 999 "cplus.met"
                        case META : 
#line 999 "cplus.met"
                        case PRAGMA_TAB : 
#line 999 "cplus.met"
                            tokenAhead = 0 ;
#line 999 "cplus.met"
                            CommTerm();
#line 999 "cplus.met"
#line 1000 "cplus.met"
#line 1001 "cplus.met"
                            {
#line 1001 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1001 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1001 "cplus.met"
                                {
#line 1001 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1001 "cplus.met"
                                    _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1001 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1001 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1001 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 1001 "cplus.met"
                                    } else {
#line 1001 "cplus.met"
                                        tokenAhead = 0 ;
#line 1001 "cplus.met"
                                    }
#line 1001 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1001 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1001 "cplus.met"
                                }
#line 1001 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1001 "cplus.met"
                                retTree=_ptRes0;
#line 1001 "cplus.met"
                            }
#line 1001 "cplus.met"
#line 1002 "cplus.met"
                            AnalyzeTab (retTree );
#line 1002 "cplus.met"
#line 1003 "cplus.met"
                            {
#line 1003 "cplus.met"
                                _retValue = retTree ;
#line 1003 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1003 "cplus.met"
                                
#line 1003 "cplus.met"
                            }
#line 1003 "cplus.met"
#line 1003 "cplus.met"
                            break;
#line 1003 "cplus.met"
#line 1005 "cplus.met"
                        case PRAGMA_MODE : 
#line 1005 "cplus.met"
                            tokenAhead = 0 ;
#line 1005 "cplus.met"
                            CommTerm();
#line 1005 "cplus.met"
#line 1006 "cplus.met"
#line 1007 "cplus.met"
                            {
#line 1007 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1007 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1007 "cplus.met"
                                {
#line 1007 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1007 "cplus.met"
                                    _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1007 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1007 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1007 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1007 "cplus.met"
                                    } else {
#line 1007 "cplus.met"
                                        tokenAhead = 0 ;
#line 1007 "cplus.met"
                                    }
#line 1007 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1007 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1007 "cplus.met"
                                }
#line 1007 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1007 "cplus.met"
                                retTree=_ptRes0;
#line 1007 "cplus.met"
                            }
#line 1007 "cplus.met"
#line 1008 "cplus.met"
                            AnalyzeMode (retTree );
#line 1008 "cplus.met"
#line 1009 "cplus.met"
                            {
#line 1009 "cplus.met"
                                _retValue = retTree ;
#line 1009 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1009 "cplus.met"
                                
#line 1009 "cplus.met"
                            }
#line 1009 "cplus.met"
#line 1009 "cplus.met"
                            break;
#line 1009 "cplus.met"
#line 1011 "cplus.met"
                        case PRAGMA_ENUM_VERT : 
#line 1011 "cplus.met"
                            tokenAhead = 0 ;
#line 1011 "cplus.met"
                            CommTerm();
#line 1011 "cplus.met"
#line 1012 "cplus.met"
#line 1013 "cplus.met"
                            {
#line 1013 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1013 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1013 "cplus.met"
                                {
#line 1013 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1013 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_VERT_VALUE, 1);
#line 1013 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1013 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1013 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1013 "cplus.met"
                                    } else {
#line 1013 "cplus.met"
                                        tokenAhead = 0 ;
#line 1013 "cplus.met"
                                    }
#line 1013 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1013 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1013 "cplus.met"
                                }
#line 1013 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1013 "cplus.met"
                                retTree=_ptRes0;
#line 1013 "cplus.met"
                            }
#line 1013 "cplus.met"
#line 1014 "cplus.met"
                            AnalyzeEnumVert (retTree );
#line 1014 "cplus.met"
#line 1015 "cplus.met"
                            {
#line 1015 "cplus.met"
                                _retValue = retTree ;
#line 1015 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1015 "cplus.met"
                                
#line 1015 "cplus.met"
                            }
#line 1015 "cplus.met"
#line 1015 "cplus.met"
                            break;
#line 1015 "cplus.met"
#line 1017 "cplus.met"
                        case PRAGMA_PARAMETERS_UNDER : 
#line 1017 "cplus.met"
                            tokenAhead = 0 ;
#line 1017 "cplus.met"
                            CommTerm();
#line 1017 "cplus.met"
#line 1018 "cplus.met"
#line 1019 "cplus.met"
                            {
#line 1019 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1019 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1019 "cplus.met"
                                {
#line 1019 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1019 "cplus.met"
                                    _ptRes1= MakeTree(ENUM_PARAMETERS_UNDER, 1);
#line 1019 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1019 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1019 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1019 "cplus.met"
                                    } else {
#line 1019 "cplus.met"
                                        tokenAhead = 0 ;
#line 1019 "cplus.met"
                                    }
#line 1019 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1019 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1019 "cplus.met"
                                }
#line 1019 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1019 "cplus.met"
                                retTree=_ptRes0;
#line 1019 "cplus.met"
                            }
#line 1019 "cplus.met"
#line 1020 "cplus.met"
                            AnalyzeParameterFunctUnd (retTree );
#line 1020 "cplus.met"
#line 1021 "cplus.met"
                            {
#line 1021 "cplus.met"
                                _retValue = retTree ;
#line 1021 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1021 "cplus.met"
                                
#line 1021 "cplus.met"
                            }
#line 1021 "cplus.met"
#line 1021 "cplus.met"
                            break;
#line 1021 "cplus.met"
#line 1023 "cplus.met"
                        case PRAGMA_TAB_DIRECTIVE : 
#line 1023 "cplus.met"
                            tokenAhead = 0 ;
#line 1023 "cplus.met"
                            CommTerm();
#line 1023 "cplus.met"
#line 1024 "cplus.met"
#line 1025 "cplus.met"
                            {
#line 1025 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1025 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1025 "cplus.met"
                                {
#line 1025 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1025 "cplus.met"
                                    _ptRes1= MakeTree(TAB_DIRECTIVE, 1);
#line 1025 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1025 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1025 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1025 "cplus.met"
                                    } else {
#line 1025 "cplus.met"
                                        tokenAhead = 0 ;
#line 1025 "cplus.met"
                                    }
#line 1025 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1025 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1025 "cplus.met"
                                }
#line 1025 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1025 "cplus.met"
                                retTree=_ptRes0;
#line 1025 "cplus.met"
                            }
#line 1025 "cplus.met"
#line 1026 "cplus.met"
                            AnalyzeTabDirective (retTree );
#line 1026 "cplus.met"
#line 1027 "cplus.met"
                            {
#line 1027 "cplus.met"
                                _retValue = retTree ;
#line 1027 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1027 "cplus.met"
                                
#line 1027 "cplus.met"
                            }
#line 1027 "cplus.met"
#line 1027 "cplus.met"
                            break;
#line 1027 "cplus.met"
#line 1029 "cplus.met"
                        case PRAGMA_SPACE_ARROW : 
#line 1029 "cplus.met"
                            tokenAhead = 0 ;
#line 1029 "cplus.met"
                            CommTerm();
#line 1029 "cplus.met"
#line 1030 "cplus.met"
#line 1031 "cplus.met"
                            {
#line 1031 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1031 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1031 "cplus.met"
                                {
#line 1031 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1031 "cplus.met"
                                    _ptRes1= MakeTree(SPACE_ARROW, 1);
#line 1031 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1031 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1031 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1031 "cplus.met"
                                    } else {
#line 1031 "cplus.met"
                                        tokenAhead = 0 ;
#line 1031 "cplus.met"
                                    }
#line 1031 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1031 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1031 "cplus.met"
                                }
#line 1031 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1031 "cplus.met"
                                retTree=_ptRes0;
#line 1031 "cplus.met"
                            }
#line 1031 "cplus.met"
#line 1032 "cplus.met"
                            AnalyzeSpaceArrow (retTree );
#line 1032 "cplus.met"
#line 1033 "cplus.met"
                            {
#line 1033 "cplus.met"
                                _retValue = retTree ;
#line 1033 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1033 "cplus.met"
                                
#line 1033 "cplus.met"
                            }
#line 1033 "cplus.met"
#line 1033 "cplus.met"
                            break;
#line 1033 "cplus.met"
#line 1035 "cplus.met"
                        case PRAGMA_BRACE_ALIGN : 
#line 1035 "cplus.met"
                            tokenAhead = 0 ;
#line 1035 "cplus.met"
                            CommTerm();
#line 1035 "cplus.met"
#line 1036 "cplus.met"
#line 1037 "cplus.met"
                            {
#line 1037 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1037 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1037 "cplus.met"
                                {
#line 1037 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1037 "cplus.met"
                                    _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1037 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1037 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1037 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1037 "cplus.met"
                                    } else {
#line 1037 "cplus.met"
                                        tokenAhead = 0 ;
#line 1037 "cplus.met"
                                    }
#line 1037 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1037 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1037 "cplus.met"
                                }
#line 1037 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1037 "cplus.met"
                                retTree=_ptRes0;
#line 1037 "cplus.met"
                            }
#line 1037 "cplus.met"
#line 1038 "cplus.met"
                            AnalyzeBraceAlign (retTree );
#line 1038 "cplus.met"
#line 1039 "cplus.met"
                            {
#line 1039 "cplus.met"
                                _retValue = retTree ;
#line 1039 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1039 "cplus.met"
                                
#line 1039 "cplus.met"
                            }
#line 1039 "cplus.met"
#line 1039 "cplus.met"
                            break;
#line 1039 "cplus.met"
#line 1041 "cplus.met"
                        case PRAGMA_SIMPLIFY : 
#line 1041 "cplus.met"
                            tokenAhead = 0 ;
#line 1041 "cplus.met"
                            CommTerm();
#line 1041 "cplus.met"
#line 1042 "cplus.met"
#line 1043 "cplus.met"
                            {
#line 1043 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1043 "cplus.met"
                                _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1043 "cplus.met"
                                {
#line 1043 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1043 "cplus.met"
                                    _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1043 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1043 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1043 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1043 "cplus.met"
                                    } else {
#line 1043 "cplus.met"
                                        tokenAhead = 0 ;
#line 1043 "cplus.met"
                                    }
#line 1043 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1043 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1043 "cplus.met"
                                }
#line 1043 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1043 "cplus.met"
                                retTree=_ptRes0;
#line 1043 "cplus.met"
                            }
#line 1043 "cplus.met"
#line 1044 "cplus.met"
                            AnalyzeSimplify (retTree );
#line 1044 "cplus.met"
#line 1045 "cplus.met"
                            {
#line 1045 "cplus.met"
                                _retValue = retTree ;
#line 1045 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1045 "cplus.met"
                                
#line 1045 "cplus.met"
                            }
#line 1045 "cplus.met"
#line 1045 "cplus.met"
                            break;
#line 1045 "cplus.met"
#line 1047 "cplus.met"
                        case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1047 "cplus.met"
                            tokenAhead = 0 ;
#line 1047 "cplus.met"
                            CommTerm();
#line 1047 "cplus.met"
#line 1048 "cplus.met"
#line 1049 "cplus.met"
                            {
#line 1049 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1049 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1049 "cplus.met"
                                {
#line 1049 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1049 "cplus.met"
                                    _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1049 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1049 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1049 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1049 "cplus.met"
                                    } else {
#line 1049 "cplus.met"
                                        tokenAhead = 0 ;
#line 1049 "cplus.met"
                                    }
#line 1049 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1049 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1049 "cplus.met"
                                }
#line 1049 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1049 "cplus.met"
                                retTree=_ptRes0;
#line 1049 "cplus.met"
                            }
#line 1049 "cplus.met"
#line 1050 "cplus.met"
                            AnalyzeSingleSwitchIndent (retTree );
#line 1050 "cplus.met"
#line 1051 "cplus.met"
                            {
#line 1051 "cplus.met"
                                _retValue = retTree ;
#line 1051 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1051 "cplus.met"
                                
#line 1051 "cplus.met"
                            }
#line 1051 "cplus.met"
#line 1051 "cplus.met"
                            break;
#line 1051 "cplus.met"
#line 1053 "cplus.met"
                        case PRAGMA_ASSIGN_ALIGN : 
#line 1053 "cplus.met"
                            tokenAhead = 0 ;
#line 1053 "cplus.met"
                            CommTerm();
#line 1053 "cplus.met"
#line 1054 "cplus.met"
#line 1055 "cplus.met"
                            {
#line 1055 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1055 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1055 "cplus.met"
                                {
#line 1055 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1055 "cplus.met"
                                    _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1055 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1055 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1055 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1055 "cplus.met"
                                    } else {
#line 1055 "cplus.met"
                                        tokenAhead = 0 ;
#line 1055 "cplus.met"
                                    }
#line 1055 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1055 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1055 "cplus.met"
                                }
#line 1055 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1055 "cplus.met"
                                retTree=_ptRes0;
#line 1055 "cplus.met"
                            }
#line 1055 "cplus.met"
#line 1056 "cplus.met"
                            AnalyzeAssignAlign (retTree );
#line 1056 "cplus.met"
#line 1057 "cplus.met"
                            {
#line 1057 "cplus.met"
                                _retValue = retTree ;
#line 1057 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1057 "cplus.met"
                                
#line 1057 "cplus.met"
                            }
#line 1057 "cplus.met"
#line 1057 "cplus.met"
                            break;
#line 1057 "cplus.met"
#line 1059 "cplus.met"
                        case PRAGMA_DECL_ALIGN : 
#line 1059 "cplus.met"
                            tokenAhead = 0 ;
#line 1059 "cplus.met"
                            CommTerm();
#line 1059 "cplus.met"
#line 1060 "cplus.met"
#line 1061 "cplus.met"
                            {
#line 1061 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1061 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1061 "cplus.met"
                                {
#line 1061 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1061 "cplus.met"
                                    _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1061 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1061 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1061 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1061 "cplus.met"
                                    } else {
#line 1061 "cplus.met"
                                        tokenAhead = 0 ;
#line 1061 "cplus.met"
                                    }
#line 1061 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1061 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1061 "cplus.met"
                                }
#line 1061 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1061 "cplus.met"
                                retTree=_ptRes0;
#line 1061 "cplus.met"
                            }
#line 1061 "cplus.met"
#line 1062 "cplus.met"
                            AnalyzeDeclAlign (retTree );
#line 1062 "cplus.met"
#line 1063 "cplus.met"
                            {
#line 1063 "cplus.met"
                                _retValue = retTree ;
#line 1063 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1063 "cplus.met"
                                
#line 1063 "cplus.met"
                            }
#line 1063 "cplus.met"
#line 1063 "cplus.met"
                            break;
#line 1063 "cplus.met"
#line 1065 "cplus.met"
                        case PRAGMA_MARGIN : 
#line 1065 "cplus.met"
                            tokenAhead = 0 ;
#line 1065 "cplus.met"
                            CommTerm();
#line 1065 "cplus.met"
#line 1066 "cplus.met"
#line 1067 "cplus.met"
                            {
#line 1067 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1067 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1067 "cplus.met"
                                {
#line 1067 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1067 "cplus.met"
                                    _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1067 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1067 "cplus.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1067 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"INTEGER")
#line 1067 "cplus.met"
                                    } else {
#line 1067 "cplus.met"
                                        tokenAhead = 0 ;
#line 1067 "cplus.met"
                                    }
#line 1067 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1067 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1067 "cplus.met"
                                }
#line 1067 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1067 "cplus.met"
                                retTree=_ptRes0;
#line 1067 "cplus.met"
                            }
#line 1067 "cplus.met"
#line 1068 "cplus.met"
                            AnalyzeMargin (retTree );
#line 1068 "cplus.met"
#line 1069 "cplus.met"
                            {
#line 1069 "cplus.met"
                                _retValue = retTree ;
#line 1069 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1069 "cplus.met"
                                
#line 1069 "cplus.met"
                            }
#line 1069 "cplus.met"
#line 1069 "cplus.met"
                            break;
#line 1069 "cplus.met"
#line 1071 "cplus.met"
                        case PRAGMA_COMMENT_START : 
#line 1071 "cplus.met"
                            tokenAhead = 0 ;
#line 1071 "cplus.met"
                            CommTerm();
#line 1071 "cplus.met"
#line 1072 "cplus.met"
#line 1073 "cplus.met"
                            {
#line 1073 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1073 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1073 "cplus.met"
                                {
#line 1073 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1073 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_START, 1);
#line 1073 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1073 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1073 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 1073 "cplus.met"
                                    } else {
#line 1073 "cplus.met"
                                        tokenAhead = 0 ;
#line 1073 "cplus.met"
                                    }
#line 1073 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1073 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1073 "cplus.met"
                                }
#line 1073 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1073 "cplus.met"
                                retTree=_ptRes0;
#line 1073 "cplus.met"
                            }
#line 1073 "cplus.met"
#line 1074 "cplus.met"
                            AnalyzeComment (retTree );
#line 1074 "cplus.met"
#line 1075 "cplus.met"
                            {
#line 1075 "cplus.met"
                                _retValue = retTree ;
#line 1075 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1075 "cplus.met"
                                
#line 1075 "cplus.met"
                            }
#line 1075 "cplus.met"
#line 1075 "cplus.met"
                            break;
#line 1075 "cplus.met"
#line 1077 "cplus.met"
                        case PRAGMA_COMMENT_MIDDLE : 
#line 1077 "cplus.met"
                            tokenAhead = 0 ;
#line 1077 "cplus.met"
                            CommTerm();
#line 1077 "cplus.met"
#line 1078 "cplus.met"
#line 1079 "cplus.met"
                            {
#line 1079 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1079 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1079 "cplus.met"
                                {
#line 1079 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1079 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1079 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1079 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1079 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 1079 "cplus.met"
                                    } else {
#line 1079 "cplus.met"
                                        tokenAhead = 0 ;
#line 1079 "cplus.met"
                                    }
#line 1079 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1079 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1079 "cplus.met"
                                }
#line 1079 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1079 "cplus.met"
                                retTree=_ptRes0;
#line 1079 "cplus.met"
                            }
#line 1079 "cplus.met"
#line 1080 "cplus.met"
                            AnalyzeComment (retTree );
#line 1080 "cplus.met"
#line 1081 "cplus.met"
                            {
#line 1081 "cplus.met"
                                _retValue = retTree ;
#line 1081 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1081 "cplus.met"
                                
#line 1081 "cplus.met"
                            }
#line 1081 "cplus.met"
#line 1081 "cplus.met"
                            break;
#line 1081 "cplus.met"
#line 1083 "cplus.met"
                        case PRAGMA_COMMENT_END : 
#line 1083 "cplus.met"
                            tokenAhead = 0 ;
#line 1083 "cplus.met"
                            CommTerm();
#line 1083 "cplus.met"
#line 1084 "cplus.met"
#line 1085 "cplus.met"
                            {
#line 1085 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1085 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1085 "cplus.met"
                                {
#line 1085 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1085 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_END, 1);
#line 1085 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1085 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1085 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 1085 "cplus.met"
                                    } else {
#line 1085 "cplus.met"
                                        tokenAhead = 0 ;
#line 1085 "cplus.met"
                                    }
#line 1085 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1085 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1085 "cplus.met"
                                }
#line 1085 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1085 "cplus.met"
                                retTree=_ptRes0;
#line 1085 "cplus.met"
                            }
#line 1085 "cplus.met"
#line 1086 "cplus.met"
                            AnalyzeComment (retTree );
#line 1086 "cplus.met"
#line 1087 "cplus.met"
                            {
#line 1087 "cplus.met"
                                _retValue = retTree ;
#line 1087 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1087 "cplus.met"
                                
#line 1087 "cplus.met"
                            }
#line 1087 "cplus.met"
#line 1087 "cplus.met"
                            break;
#line 1087 "cplus.met"
#line 1089 "cplus.met"
                        case PRAGMA_COMMENT_PLUS : 
#line 1089 "cplus.met"
                            tokenAhead = 0 ;
#line 1089 "cplus.met"
                            CommTerm();
#line 1089 "cplus.met"
#line 1090 "cplus.met"
#line 1091 "cplus.met"
                            {
#line 1091 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1091 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1091 "cplus.met"
                                {
#line 1091 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1091 "cplus.met"
                                    _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1091 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1091 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1091 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 1091 "cplus.met"
                                    } else {
#line 1091 "cplus.met"
                                        tokenAhead = 0 ;
#line 1091 "cplus.met"
                                    }
#line 1091 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1091 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1091 "cplus.met"
                                }
#line 1091 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1091 "cplus.met"
                                retTree=_ptRes0;
#line 1091 "cplus.met"
                            }
#line 1091 "cplus.met"
#line 1092 "cplus.met"
                            AnalyzeComment (retTree );
#line 1092 "cplus.met"
#line 1093 "cplus.met"
                            {
#line 1093 "cplus.met"
                                _retValue = retTree ;
#line 1093 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1093 "cplus.met"
                                
#line 1093 "cplus.met"
                            }
#line 1093 "cplus.met"
#line 1093 "cplus.met"
                            break;
#line 1093 "cplus.met"
#line 1095 "cplus.met"
                        case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 1095 "cplus.met"
                            tokenAhead = 0 ;
#line 1095 "cplus.met"
                            CommTerm();
#line 1095 "cplus.met"
#line 1096 "cplus.met"
#line 1097 "cplus.met"
                            {
#line 1097 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1097 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1097 "cplus.met"
                                {
#line 1097 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1097 "cplus.met"
                                    _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1097 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1097 "cplus.met"
                                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1097 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"IDENT")
#line 1097 "cplus.met"
                                    } else {
#line 1097 "cplus.met"
                                        tokenAhead = 0 ;
#line 1097 "cplus.met"
                                    }
#line 1097 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1097 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1097 "cplus.met"
                                }
#line 1097 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1097 "cplus.met"
                                retTree=_ptRes0;
#line 1097 "cplus.met"
                            }
#line 1097 "cplus.met"
#line 1098 "cplus.met"
                            AnalyzeIndentFunctionType (retTree );
#line 1098 "cplus.met"
#line 1099 "cplus.met"
                            {
#line 1099 "cplus.met"
                                _retValue = retTree ;
#line 1099 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1099 "cplus.met"
                                
#line 1099 "cplus.met"
                            }
#line 1099 "cplus.met"
#line 1099 "cplus.met"
                            break;
#line 1099 "cplus.met"
#line 1101 "cplus.met"
                        case PRAGMA_FUNC_HEADER : 
#line 1101 "cplus.met"
                            tokenAhead = 0 ;
#line 1101 "cplus.met"
                            CommTerm();
#line 1101 "cplus.met"
#line 1102 "cplus.met"
#line 1103 "cplus.met"
                            {
#line 1103 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1103 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1103 "cplus.met"
                                {
#line 1103 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1103 "cplus.met"
                                    _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1103 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1103 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1103 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 1103 "cplus.met"
                                    } else {
#line 1103 "cplus.met"
                                        tokenAhead = 0 ;
#line 1103 "cplus.met"
                                    }
#line 1103 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1103 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1103 "cplus.met"
                                }
#line 1103 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1103 "cplus.met"
                                retTree=_ptRes0;
#line 1103 "cplus.met"
                            }
#line 1103 "cplus.met"
#line 1104 "cplus.met"
                            AnalyzeFuncHeader (retTree );
#line 1104 "cplus.met"
#line 1105 "cplus.met"
                            {
#line 1105 "cplus.met"
                                _retValue = retTree ;
#line 1105 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1105 "cplus.met"
                                
#line 1105 "cplus.met"
                            }
#line 1105 "cplus.met"
#line 1105 "cplus.met"
                            break;
#line 1105 "cplus.met"
#line 1107 "cplus.met"
                        case PRAGMA_PARAMETERS : 
#line 1107 "cplus.met"
                            tokenAhead = 0 ;
#line 1107 "cplus.met"
                            CommTerm();
#line 1107 "cplus.met"
#line 1108 "cplus.met"
#line 1109 "cplus.met"
                            {
#line 1109 "cplus.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 1109 "cplus.met"
                                _ptRes0= MakeTree(CONFIG, 1);
#line 1109 "cplus.met"
                                {
#line 1109 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1109 "cplus.met"
                                    _ptRes1= MakeTree(PARAMETERS, 1);
#line 1109 "cplus.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1109 "cplus.met"
                                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1109 "cplus.met"
                                        MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,retTree);
                                        TOKEN_EXIT(quick_prog_elem_exit,"STRING")
#line 1109 "cplus.met"
                                    } else {
#line 1109 "cplus.met"
                                        tokenAhead = 0 ;
#line 1109 "cplus.met"
                                    }
#line 1109 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1109 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1109 "cplus.met"
                                }
#line 1109 "cplus.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1109 "cplus.met"
                                retTree=_ptRes0;
#line 1109 "cplus.met"
                            }
#line 1109 "cplus.met"
#line 1110 "cplus.met"
                            AnalyzeParameters (retTree );
#line 1110 "cplus.met"
#line 1111 "cplus.met"
                            {
#line 1111 "cplus.met"
                                _retValue = retTree ;
#line 1111 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1111 "cplus.met"
                                
#line 1111 "cplus.met"
                            }
#line 1111 "cplus.met"
#line 1111 "cplus.met"
                            break;
#line 1111 "cplus.met"
#line 1113 "cplus.met"
                        default : 
#line 1113 "cplus.met"
#line 1113 "cplus.met"
                            {
#line 1113 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1113 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 1113 "cplus.met"
                                    MulFreeTree(2,_ptTree0,retTree);
                                    PROG_EXIT(quick_prog_elem_exit,"quick_prog_elem")
#line 1113 "cplus.met"
                                }
#line 1113 "cplus.met"
                                _retValue =_ptTree0;
#line 1113 "cplus.met"
                                goto quick_prog_elem_ret;
#line 1113 "cplus.met"
                            }
#line 1113 "cplus.met"
                            break;
#line 1113 "cplus.met"
                    }
#line 1113 "cplus.met"
#line 1113 "cplus.met"
                    break;
#line 1113 "cplus.met"
#line 1113 "cplus.met"
                default : 
#line 1113 "cplus.met"
#line 1113 "cplus.met"
                    break;
#line 1113 "cplus.met"
            }
#line 1113 "cplus.met"
#line 1118 "cplus.met"
            {
#line 1118 "cplus.met"
                PPTREE _ptTree0=0;
#line 1118 "cplus.met"
                {
#line 1118 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1118 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 1118 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1118 "cplus.met"
                }
#line 1118 "cplus.met"
                _retValue =_ptTree0;
#line 1118 "cplus.met"
                goto quick_prog_elem_ret;
#line 1118 "cplus.met"
            }
#line 1118 "cplus.met"
#line 1118 "cplus.met"
            break;
#line 1118 "cplus.met"
#line 1120 "cplus.met"
        default : 
#line 1120 "cplus.met"
            tokenAhead = 0 ;
#line 1120 "cplus.met"
            CommTerm();
#line 1120 "cplus.met"
#line 1121 "cplus.met"
#line 1122 "cplus.met"
            if ((tokenAhead && tokenAhead != -1)|| (c != EOF)){
#line 1122 "cplus.met"
#line 1123 "cplus.met"
#line 1124 "cplus.met"
                (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1124 "cplus.met"
                if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1124 "cplus.met"
                    MulFreeTree(1,retTree);
                    TOKEN_EXIT(quick_prog_elem_exit,"END_LINE")
#line 1124 "cplus.met"
                } else {
#line 1124 "cplus.met"
                    tokenAhead = 0 ;
#line 1124 "cplus.met"
                }
#line 1124 "cplus.met"
#line 1125 "cplus.met"
                 goto debut;
#line 1125 "cplus.met"
#line 1125 "cplus.met"
#line 1125 "cplus.met"
            } else {
#line 1125 "cplus.met"
#line 1128 "cplus.met"
                {
#line 1128 "cplus.met"
                    _retValue = retTree ;
#line 1128 "cplus.met"
                    goto quick_prog_elem_ret;
#line 1128 "cplus.met"
                    
#line 1128 "cplus.met"
                }
#line 1128 "cplus.met"
            }
#line 1128 "cplus.met"
#line 1128 "cplus.met"
            break;
#line 1128 "cplus.met"
    }
#line 1128 "cplus.met"
#line 1128 "cplus.met"
#line 1130 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1130 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1130 "cplus.met"
return((PPTREE) 0);
#line 1130 "cplus.met"

#line 1130 "cplus.met"
quick_prog_elem_exit :
#line 1130 "cplus.met"

#line 1130 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_EXIT,(PPTREE)0);
#line 1130 "cplus.met"
    _funcLevel--;
#line 1130 "cplus.met"
    return((PPTREE) -1) ;
#line 1130 "cplus.met"

#line 1130 "cplus.met"
quick_prog_elem_ret :
#line 1130 "cplus.met"
    
#line 1130 "cplus.met"
    _Debug = TRACE_RULE("quick_prog_elem",TRACE_RETURN,_retValue);
#line 1130 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1130 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1130 "cplus.met"
    return _retValue ;
#line 1130 "cplus.met"
}
#line 1130 "cplus.met"

#line 1130 "cplus.met"
#line 2377 "cplus.met"
PPTREE cplus::range_in_liste ( int error_free)
#line 2377 "cplus.met"
{
#line 2377 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2377 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2377 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2377 "cplus.met"
    int _Debug = TRACE_RULE("range_in_liste",TRACE_ENTER,(PPTREE)0);
#line 2377 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2377 "cplus.met"
#line 2377 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2377 "cplus.met"
#line 2379 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2379 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(retTree))) {
#line 2379 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(range_in_liste_exit,"IDENT")
#line 2379 "cplus.met"
    } else {
#line 2379 "cplus.met"
        tokenAhead = 0 ;
#line 2379 "cplus.met"
    }
#line 2379 "cplus.met"
#line 2380 "cplus.met"
    if ( IsRange(lexEl.string())){
#line 2380 "cplus.met"
#line 2381 "cplus.met"
        {
#line 2381 "cplus.met"
            _retValue = retTree ;
#line 2381 "cplus.met"
            goto range_in_liste_ret;
#line 2381 "cplus.met"
            
#line 2381 "cplus.met"
        }
#line 2381 "cplus.met"
    } else {
#line 2381 "cplus.met"
#line 2383 "cplus.met"
        
#line 2383 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 2383 "cplus.met"
        goto range_in_liste_exit;
#line 2383 "cplus.met"
    }
#line 2383 "cplus.met"
#line 2383 "cplus.met"
#line 2383 "cplus.met"

#line 2384 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2384 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2384 "cplus.met"
return((PPTREE) 0);
#line 2384 "cplus.met"

#line 2384 "cplus.met"
range_in_liste_exit :
#line 2384 "cplus.met"

#line 2384 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_EXIT,(PPTREE)0);
#line 2384 "cplus.met"
    _funcLevel--;
#line 2384 "cplus.met"
    return((PPTREE) -1) ;
#line 2384 "cplus.met"

#line 2384 "cplus.met"
range_in_liste_ret :
#line 2384 "cplus.met"
    
#line 2384 "cplus.met"
    _Debug = TRACE_RULE("range_in_liste",TRACE_RETURN,_retValue);
#line 2384 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2384 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2384 "cplus.met"
    return _retValue ;
#line 2384 "cplus.met"
}
#line 2384 "cplus.met"

#line 2384 "cplus.met"
#line 2437 "cplus.met"
PPTREE cplus::range_modifier ( int error_free)
#line 2437 "cplus.met"
{
#line 2437 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2437 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2437 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2437 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier",TRACE_ENTER,(PPTREE)0);
#line 2437 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2437 "cplus.met"
#line 2438 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2438 "cplus.met"
    switch( lexEl.Value) {
#line 2438 "cplus.met"
#line 2439 "cplus.met"
        case META : 
#line 2439 "cplus.met"
        case IDENT : 
#line 2439 "cplus.met"
#line 2439 "cplus.met"
            {
#line 2439 "cplus.met"
                PPTREE _ptTree0=0;
#line 2439 "cplus.met"
                {
#line 2439 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2439 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2439 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(range_in_liste)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 2439 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2439 "cplus.met"
                    }
#line 2439 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2439 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2439 "cplus.met"
                }
#line 2439 "cplus.met"
                _retValue =_ptTree0;
#line 2439 "cplus.met"
                goto range_modifier_ret;
#line 2439 "cplus.met"
            }
#line 2439 "cplus.met"
            break;
#line 2439 "cplus.met"
#line 2440 "cplus.met"
        case VOLATILE : 
#line 2440 "cplus.met"
#line 2440 "cplus.met"
            {
#line 2440 "cplus.met"
                PPTREE _ptTree0=0;
#line 2440 "cplus.met"
                {
#line 2440 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2440 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2440 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2440 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2440 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"volatile")
#line 2440 "cplus.met"
                    } else {
#line 2440 "cplus.met"
                        tokenAhead = 0 ;
#line 2440 "cplus.met"
                    }
#line 2440 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2440 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2440 "cplus.met"
                }
#line 2440 "cplus.met"
                _retValue =_ptTree0;
#line 2440 "cplus.met"
                goto range_modifier_ret;
#line 2440 "cplus.met"
            }
#line 2440 "cplus.met"
            break;
#line 2440 "cplus.met"
#line 2441 "cplus.met"
        case REGISTER : 
#line 2441 "cplus.met"
#line 2441 "cplus.met"
            {
#line 2441 "cplus.met"
                PPTREE _ptTree0=0;
#line 2441 "cplus.met"
                {
#line 2441 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2441 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2441 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2441 "cplus.met"
                    if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2441 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_exit,"register")
#line 2441 "cplus.met"
                    } else {
#line 2441 "cplus.met"
                        tokenAhead = 0 ;
#line 2441 "cplus.met"
                    }
#line 2441 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2441 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2441 "cplus.met"
                }
#line 2441 "cplus.met"
                _retValue =_ptTree0;
#line 2441 "cplus.met"
                goto range_modifier_ret;
#line 2441 "cplus.met"
            }
#line 2441 "cplus.met"
            break;
#line 2441 "cplus.met"
#line 2442 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2442 "cplus.met"
#line 2442 "cplus.met"
            {
#line 2442 "cplus.met"
                PPTREE _ptTree0=0;
#line 2442 "cplus.met"
                {
#line 2442 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2442 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2442 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2442 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2442 "cplus.met"
                    }
#line 2442 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2442 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2442 "cplus.met"
                }
#line 2442 "cplus.met"
                _retValue =_ptTree0;
#line 2442 "cplus.met"
                goto range_modifier_ret;
#line 2442 "cplus.met"
            }
#line 2442 "cplus.met"
            break;
#line 2442 "cplus.met"
#line 2443 "cplus.met"
        case __ASM__ : 
#line 2443 "cplus.met"
#line 2443 "cplus.met"
            {
#line 2443 "cplus.met"
                PPTREE _ptTree0=0;
#line 2443 "cplus.met"
                {
#line 2443 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2443 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2443 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 2443 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2443 "cplus.met"
                    }
#line 2443 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2443 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2443 "cplus.met"
                }
#line 2443 "cplus.met"
                _retValue =_ptTree0;
#line 2443 "cplus.met"
                goto range_modifier_ret;
#line 2443 "cplus.met"
            }
#line 2443 "cplus.met"
            break;
#line 2443 "cplus.met"
#line 2444 "cplus.met"
        default : 
#line 2444 "cplus.met"
#line 2444 "cplus.met"
            {
#line 2444 "cplus.met"
                PPTREE _ptTree0=0;
#line 2444 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_function)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 2444 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(range_modifier_exit,"range_modifier")
#line 2444 "cplus.met"
                }
#line 2444 "cplus.met"
                _retValue =_ptTree0;
#line 2444 "cplus.met"
                goto range_modifier_ret;
#line 2444 "cplus.met"
            }
#line 2444 "cplus.met"
            break;
#line 2444 "cplus.met"
    }
#line 2444 "cplus.met"
#line 2444 "cplus.met"
#line 2445 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2445 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2445 "cplus.met"
return((PPTREE) 0);
#line 2445 "cplus.met"

#line 2445 "cplus.met"
range_modifier_exit :
#line 2445 "cplus.met"

#line 2445 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_EXIT,(PPTREE)0);
#line 2445 "cplus.met"
    _funcLevel--;
#line 2445 "cplus.met"
    return((PPTREE) -1) ;
#line 2445 "cplus.met"

#line 2445 "cplus.met"
range_modifier_ret :
#line 2445 "cplus.met"
    
#line 2445 "cplus.met"
    _Debug = TRACE_RULE("range_modifier",TRACE_RETURN,_retValue);
#line 2445 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2445 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2445 "cplus.met"
    return _retValue ;
#line 2445 "cplus.met"
}
#line 2445 "cplus.met"

#line 2445 "cplus.met"
#line 2405 "cplus.met"
PPTREE cplus::range_modifier_function ( int error_free)
#line 2405 "cplus.met"
{
#line 2405 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2405 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2405 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2405 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_function",TRACE_ENTER,(PPTREE)0);
#line 2405 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2405 "cplus.met"
#line 2406 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2406 "cplus.met"
    switch( lexEl.Value) {
#line 2406 "cplus.met"
#line 2407 "cplus.met"
        case INLINE : 
#line 2407 "cplus.met"
#line 2407 "cplus.met"
            {
#line 2407 "cplus.met"
                PPTREE _ptTree0=0;
#line 2407 "cplus.met"
                {
#line 2407 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2407 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2407 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2407 "cplus.met"
                    if (  !SEE_TOKEN( INLINE,"inline") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2407 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"inline")
#line 2407 "cplus.met"
                    } else {
#line 2407 "cplus.met"
                        tokenAhead = 0 ;
#line 2407 "cplus.met"
                    }
#line 2407 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2407 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2407 "cplus.met"
                }
#line 2407 "cplus.met"
                _retValue =_ptTree0;
#line 2407 "cplus.met"
                goto range_modifier_function_ret;
#line 2407 "cplus.met"
            }
#line 2407 "cplus.met"
            break;
#line 2407 "cplus.met"
#line 2408 "cplus.met"
        case VIRTUAL : 
#line 2408 "cplus.met"
#line 2408 "cplus.met"
            {
#line 2408 "cplus.met"
                PPTREE _ptTree0=0;
#line 2408 "cplus.met"
                {
#line 2408 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2408 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2408 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2408 "cplus.met"
                    if (  !SEE_TOKEN( VIRTUAL,"virtual") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2408 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"virtual")
#line 2408 "cplus.met"
                    } else {
#line 2408 "cplus.met"
                        tokenAhead = 0 ;
#line 2408 "cplus.met"
                    }
#line 2408 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2408 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2408 "cplus.met"
                }
#line 2408 "cplus.met"
                _retValue =_ptTree0;
#line 2408 "cplus.met"
                goto range_modifier_function_ret;
#line 2408 "cplus.met"
            }
#line 2408 "cplus.met"
            break;
#line 2408 "cplus.met"
#line 2409 "cplus.met"
        case FRIEND : 
#line 2409 "cplus.met"
#line 2409 "cplus.met"
            {
#line 2409 "cplus.met"
                PPTREE _ptTree0=0;
#line 2409 "cplus.met"
                {
#line 2409 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2409 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2409 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2409 "cplus.met"
                    if (  !SEE_TOKEN( FRIEND,"friend") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2409 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"friend")
#line 2409 "cplus.met"
                    } else {
#line 2409 "cplus.met"
                        tokenAhead = 0 ;
#line 2409 "cplus.met"
                    }
#line 2409 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2409 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2409 "cplus.met"
                }
#line 2409 "cplus.met"
                _retValue =_ptTree0;
#line 2409 "cplus.met"
                goto range_modifier_function_ret;
#line 2409 "cplus.met"
            }
#line 2409 "cplus.met"
            break;
#line 2409 "cplus.met"
#line 2410 "cplus.met"
        case CONST : 
#line 2410 "cplus.met"
#line 2410 "cplus.met"
            {
#line 2410 "cplus.met"
                PPTREE _ptTree0=0;
#line 2410 "cplus.met"
                {
#line 2410 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2410 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2410 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2410 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2410 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"const")
#line 2410 "cplus.met"
                    } else {
#line 2410 "cplus.met"
                        tokenAhead = 0 ;
#line 2410 "cplus.met"
                    }
#line 2410 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2410 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2410 "cplus.met"
                }
#line 2410 "cplus.met"
                _retValue =_ptTree0;
#line 2410 "cplus.met"
                goto range_modifier_function_ret;
#line 2410 "cplus.met"
            }
#line 2410 "cplus.met"
            break;
#line 2410 "cplus.met"
#line 2411 "cplus.met"
        case CONSTEXPR : 
#line 2411 "cplus.met"
#line 2411 "cplus.met"
            {
#line 2411 "cplus.met"
                PPTREE _ptTree0=0;
#line 2411 "cplus.met"
                {
#line 2411 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2411 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2411 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2411 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEXPR,"constexpr") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2411 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"constexpr")
#line 2411 "cplus.met"
                    } else {
#line 2411 "cplus.met"
                        tokenAhead = 0 ;
#line 2411 "cplus.met"
                    }
#line 2411 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2411 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2411 "cplus.met"
                }
#line 2411 "cplus.met"
                _retValue =_ptTree0;
#line 2411 "cplus.met"
                goto range_modifier_function_ret;
#line 2411 "cplus.met"
            }
#line 2411 "cplus.met"
            break;
#line 2411 "cplus.met"
#line 2412 "cplus.met"
        case CONSTEVAL : 
#line 2412 "cplus.met"
#line 2412 "cplus.met"
            {
#line 2412 "cplus.met"
                PPTREE _ptTree0=0;
#line 2412 "cplus.met"
                {
#line 2412 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2412 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2412 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2412 "cplus.met"
                    if (  !SEE_TOKEN( CONSTEVAL,"consteval") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2412 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(range_modifier_function_exit,"consteval")
#line 2412 "cplus.met"
                    } else {
#line 2412 "cplus.met"
                        tokenAhead = 0 ;
#line 2412 "cplus.met"
                    }
#line 2412 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2412 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2412 "cplus.met"
                }
#line 2412 "cplus.met"
                _retValue =_ptTree0;
#line 2412 "cplus.met"
                goto range_modifier_function_ret;
#line 2412 "cplus.met"
            }
#line 2412 "cplus.met"
            break;
#line 2412 "cplus.met"
#line 2413 "cplus.met"
        case NOEXCEPT : 
#line 2413 "cplus.met"
#line 2413 "cplus.met"
            {
#line 2413 "cplus.met"
                PPTREE _ptTree0=0;
#line 2413 "cplus.met"
                {
#line 2413 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2413 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2413 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(noexcept_call)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2413 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_function_exit,"range_modifier_function")
#line 2413 "cplus.met"
                    }
#line 2413 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2413 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2413 "cplus.met"
                }
#line 2413 "cplus.met"
                _retValue =_ptTree0;
#line 2413 "cplus.met"
                goto range_modifier_function_ret;
#line 2413 "cplus.met"
            }
#line 2413 "cplus.met"
            break;
#line 2413 "cplus.met"
#line 2414 "cplus.met"
        case __ATTRIBUTE__ : 
#line 2414 "cplus.met"
#line 2414 "cplus.met"
            {
#line 2414 "cplus.met"
                PPTREE _ptTree0=0;
#line 2414 "cplus.met"
                {
#line 2414 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2414 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2414 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(attribute_call)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2414 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_function_exit,"range_modifier_function")
#line 2414 "cplus.met"
                    }
#line 2414 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2414 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2414 "cplus.met"
                }
#line 2414 "cplus.met"
                _retValue =_ptTree0;
#line 2414 "cplus.met"
                goto range_modifier_function_ret;
#line 2414 "cplus.met"
            }
#line 2414 "cplus.met"
            break;
#line 2414 "cplus.met"
#line 2415 "cplus.met"
        case __ASM__ : 
#line 2415 "cplus.met"
#line 2415 "cplus.met"
            {
#line 2415 "cplus.met"
                PPTREE _ptTree0=0;
#line 2415 "cplus.met"
                {
#line 2415 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2415 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2415 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(asm_call)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 2415 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(range_modifier_function_exit,"range_modifier_function")
#line 2415 "cplus.met"
                    }
#line 2415 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2415 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2415 "cplus.met"
                }
#line 2415 "cplus.met"
                _retValue =_ptTree0;
#line 2415 "cplus.met"
                goto range_modifier_function_ret;
#line 2415 "cplus.met"
            }
#line 2415 "cplus.met"
            break;
#line 2415 "cplus.met"
        default :
#line 2415 "cplus.met"
            CASE_EXIT(range_modifier_function_exit,"either inline or virtual or friend or const or constexpr or consteval or noexcept or __attribute__ or __asm__")
#line 2415 "cplus.met"
            break;
#line 2415 "cplus.met"
    }
#line 2415 "cplus.met"
#line 2415 "cplus.met"
#line 2416 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2416 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2416 "cplus.met"
return((PPTREE) 0);
#line 2416 "cplus.met"

#line 2416 "cplus.met"
range_modifier_function_exit :
#line 2416 "cplus.met"

#line 2416 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_EXIT,(PPTREE)0);
#line 2416 "cplus.met"
    _funcLevel--;
#line 2416 "cplus.met"
    return((PPTREE) -1) ;
#line 2416 "cplus.met"

#line 2416 "cplus.met"
range_modifier_function_ret :
#line 2416 "cplus.met"
    
#line 2416 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_function",TRACE_RETURN,_retValue);
#line 2416 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2416 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2416 "cplus.met"
    return _retValue ;
#line 2416 "cplus.met"
}
#line 2416 "cplus.met"

#line 2416 "cplus.met"
#line 2233 "cplus.met"
PPTREE cplus::range_modifier_ident ( int error_free)
#line 2233 "cplus.met"
{
#line 2233 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2233 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2233 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2233 "cplus.met"
    int _Debug = TRACE_RULE("range_modifier_ident",TRACE_ENTER,(PPTREE)0);
#line 2233 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2233 "cplus.met"
#line 2233 "cplus.met"
    PPTREE retTree = (PPTREE) 0,completeName = (PPTREE) 0;
#line 2233 "cplus.met"
#line 2235 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(range_modifier), 129, cplus)){
#line 2235 "cplus.met"
#line 2236 "cplus.met"
        {
#line 2236 "cplus.met"
            PPTREE _ptTree0=0;
#line 2236 "cplus.met"
            {
#line 2236 "cplus.met"
                PPTREE _ptTree1=0;
#line 2236 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2236 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,completeName,retTree);
                    PROG_EXIT(range_modifier_ident_exit,"range_modifier_ident")
#line 2236 "cplus.met"
                }
#line 2236 "cplus.met"
                _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2236 "cplus.met"
            }
#line 2236 "cplus.met"
            _retValue =_ptTree0;
#line 2236 "cplus.met"
            goto range_modifier_ident_ret;
#line 2236 "cplus.met"
        }
#line 2236 "cplus.met"
    } else {
#line 2236 "cplus.met"
#line 2238 "cplus.met"
#line 2239 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(completeName = ,_Tak(complete_class_name), 32, cplus)){
#line 2239 "cplus.met"
#line 2240 "cplus.met"
            {
#line 2240 "cplus.met"
                _retValue = completeName ;
#line 2240 "cplus.met"
                goto range_modifier_ident_ret;
#line 2240 "cplus.met"
                
#line 2240 "cplus.met"
            }
#line 2240 "cplus.met"
        }
#line 2240 "cplus.met"
#line 2240 "cplus.met"
    }
#line 2240 "cplus.met"
#line 2240 "cplus.met"
#line 2241 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2241 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2241 "cplus.met"
return((PPTREE) 0);
#line 2241 "cplus.met"

#line 2241 "cplus.met"
range_modifier_ident_exit :
#line 2241 "cplus.met"

#line 2241 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_EXIT,(PPTREE)0);
#line 2241 "cplus.met"
    _funcLevel--;
#line 2241 "cplus.met"
    return((PPTREE) -1) ;
#line 2241 "cplus.met"

#line 2241 "cplus.met"
range_modifier_ident_ret :
#line 2241 "cplus.met"
    
#line 2241 "cplus.met"
    _Debug = TRACE_RULE("range_modifier_ident",TRACE_RETURN,_retValue);
#line 2241 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2241 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2241 "cplus.met"
    return _retValue ;
#line 2241 "cplus.met"
}
#line 2241 "cplus.met"

#line 2241 "cplus.met"
