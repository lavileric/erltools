/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3311 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3311 "cplus.met"
{
#line 3311 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3311 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3311 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3311 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3311 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3311 "cplus.met"
#line 3312 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3312 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3312 "cplus.met"
    }
#line 3312 "cplus.met"
#line 3313 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3313 "cplus.met"
    switch( lexEl.Value) {
#line 3313 "cplus.met"
#line 3313 "cplus.met"
        case ETOI : 
#line 3313 "cplus.met"
#line 3313 "cplus.met"
            break;
#line 3313 "cplus.met"
#line 3315 "cplus.met"
        case META : 
#line 3315 "cplus.met"
        case IDENT : 
#line 3315 "cplus.met"
#line 3315 "cplus.met"
            break;
#line 3315 "cplus.met"
        default :
#line 3315 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3315 "cplus.met"
            break;
#line 3315 "cplus.met"
    }
#line 3315 "cplus.met"
#line 3315 "cplus.met"
#line 3316 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3316 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3316 "cplus.met"
return((PPTREE) 0);
#line 3316 "cplus.met"

#line 3316 "cplus.met"
ident_mul_exit :
#line 3316 "cplus.met"

#line 3316 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3316 "cplus.met"
    _funcLevel--;
#line 3316 "cplus.met"
    return((PPTREE) -1) ;
#line 3316 "cplus.met"

#line 3316 "cplus.met"
ident_mul_ret :
#line 3316 "cplus.met"
    
#line 3316 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3316 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3316 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3316 "cplus.met"
    return _retValue ;
#line 3316 "cplus.met"
}
#line 3316 "cplus.met"

#line 3316 "cplus.met"
#line 1437 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1437 "cplus.met"
{
#line 1437 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1437 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1437 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1437 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1437 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1437 "cplus.met"
#line 1438 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1438 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1438 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1438 "cplus.met"
    } else {
#line 1438 "cplus.met"
        tokenAhead = 0 ;
#line 1438 "cplus.met"
    }
#line 1438 "cplus.met"
#line 1439 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1439 "cplus.met"
    switch( lexEl.Value) {
#line 1439 "cplus.met"
#line 1440 "cplus.met"
        case META : 
#line 1440 "cplus.met"
        case INCLUDE_SYS : 
#line 1440 "cplus.met"
#line 1441 "cplus.met"
#line 1442 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1442 "cplus.met"
#line 1443 "cplus.met"
            {
#line 1443 "cplus.met"
                PPTREE _ptTree0=0;
#line 1443 "cplus.met"
                {
#line 1443 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1443 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1443 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1443 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1443 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1443 "cplus.met"
                    } else {
#line 1443 "cplus.met"
                        tokenAhead = 0 ;
#line 1443 "cplus.met"
                    }
#line 1443 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1443 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1443 "cplus.met"
                }
#line 1443 "cplus.met"
                _retValue =_ptTree0;
#line 1443 "cplus.met"
                goto include_dir_ret;
#line 1443 "cplus.met"
            }
#line 1443 "cplus.met"
#line 1443 "cplus.met"
            break;
#line 1443 "cplus.met"
#line 1445 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1445 "cplus.met"
#line 1446 "cplus.met"
#line 1447 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1447 "cplus.met"
#line 1448 "cplus.met"
            {
#line 1448 "cplus.met"
                PPTREE _ptTree0=0;
#line 1448 "cplus.met"
                {
#line 1448 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1448 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1448 "cplus.met"
                    {
#line 1448 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1448 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1448 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1448 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1448 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1448 "cplus.met"
                        } else {
#line 1448 "cplus.met"
                            tokenAhead = 0 ;
#line 1448 "cplus.met"
                        }
#line 1448 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1448 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1448 "cplus.met"
                    }
#line 1448 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1448 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1448 "cplus.met"
                }
#line 1448 "cplus.met"
                _retValue =_ptTree0;
#line 1448 "cplus.met"
                goto include_dir_ret;
#line 1448 "cplus.met"
            }
#line 1448 "cplus.met"
#line 1448 "cplus.met"
            break;
#line 1448 "cplus.met"
        default :
#line 1448 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1448 "cplus.met"
            break;
#line 1448 "cplus.met"
    }
#line 1448 "cplus.met"
#line 1448 "cplus.met"
#line 1450 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1450 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1450 "cplus.met"
return((PPTREE) 0);
#line 1450 "cplus.met"

#line 1450 "cplus.met"
include_dir_exit :
#line 1450 "cplus.met"

#line 1450 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1450 "cplus.met"
    _funcLevel--;
#line 1450 "cplus.met"
    return((PPTREE) -1) ;
#line 1450 "cplus.met"

#line 1450 "cplus.met"
include_dir_ret :
#line 1450 "cplus.met"
    
#line 1450 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1450 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1450 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1450 "cplus.met"
    return _retValue ;
#line 1450 "cplus.met"
}
#line 1450 "cplus.met"

#line 1450 "cplus.met"
#line 2647 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2647 "cplus.met"
{
#line 2647 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2647 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2647 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2647 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2647 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2647 "cplus.met"
#line 2647 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2647 "cplus.met"
#line 2649 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2649 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2649 "cplus.met"
    }
#line 2649 "cplus.met"
#line 2650 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2650 "cplus.met"
#line 2651 "cplus.met"
        {
#line 2651 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2651 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2651 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2651 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2651 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2651 "cplus.met"
            }
#line 2651 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2651 "cplus.met"
            expTree=_ptRes0;
#line 2651 "cplus.met"
        }
#line 2651 "cplus.met"
    } 
#line 2651 "cplus.met"
#line 2652 "cplus.met"
    {
#line 2652 "cplus.met"
        _retValue = expTree ;
#line 2652 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2652 "cplus.met"
        
#line 2652 "cplus.met"
    }
#line 2652 "cplus.met"
#line 2652 "cplus.met"
#line 2652 "cplus.met"

#line 2653 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2653 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2653 "cplus.met"
return((PPTREE) 0);
#line 2653 "cplus.met"

#line 2653 "cplus.met"
inclusive_or_expression_exit :
#line 2653 "cplus.met"

#line 2653 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2653 "cplus.met"
    _funcLevel--;
#line 2653 "cplus.met"
    return((PPTREE) -1) ;
#line 2653 "cplus.met"

#line 2653 "cplus.met"
inclusive_or_expression_ret :
#line 2653 "cplus.met"
    
#line 2653 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2653 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2653 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2653 "cplus.met"
    return _retValue ;
#line 2653 "cplus.met"
}
#line 2653 "cplus.met"

#line 2653 "cplus.met"
#line 2435 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2435 "cplus.met"
{
#line 2435 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2435 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2435 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2435 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2435 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2435 "cplus.met"
#line 2435 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2435 "cplus.met"
#line 2435 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2435 "cplus.met"
#line 2437 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2437 "cplus.met"
    switch( lexEl.Value) {
#line 2437 "cplus.met"
#line 2441 "cplus.met"
        case AOUV : 
#line 2441 "cplus.met"
            tokenAhead = 0 ;
#line 2441 "cplus.met"
            CommTerm();
#line 2441 "cplus.met"
#line 2439 "cplus.met"
#line 2439 "cplus.met"
            _addlist1 = initList ;
#line 2439 "cplus.met"
#line 2440 "cplus.met"
            do {
#line 2440 "cplus.met"
#line 2441 "cplus.met"
                {
#line 2441 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2441 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2441 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2441 "cplus.met"
                    }
#line 2441 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2441 "cplus.met"
                }
#line 2441 "cplus.met"
#line 2441 "cplus.met"
                if (initList){
#line 2441 "cplus.met"
#line 2441 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2441 "cplus.met"
                } else {
#line 2441 "cplus.met"
#line 2441 "cplus.met"
                    initList = _addlist1 ;
#line 2441 "cplus.met"
                }
#line 2441 "cplus.met"
#line 2441 "cplus.met"
#line 2442 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2442 "cplus.met"
#line 2443 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2443 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2443 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2443 "cplus.met"
            } else {
#line 2443 "cplus.met"
                tokenAhead = 0 ;
#line 2443 "cplus.met"
            }
#line 2443 "cplus.met"
#line 2444 "cplus.met"
            {
#line 2444 "cplus.met"
                PPTREE _ptTree0=0;
#line 2444 "cplus.met"
                {
#line 2444 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2444 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2444 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2444 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2444 "cplus.met"
                }
#line 2444 "cplus.met"
                _retValue =_ptTree0;
#line 2444 "cplus.met"
                goto initializer_ret;
#line 2444 "cplus.met"
            }
#line 2444 "cplus.met"
#line 2444 "cplus.met"
            break;
#line 2444 "cplus.met"
#line 2447 "cplus.met"
        default : 
#line 2447 "cplus.met"
#line 2447 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 17, cplus)){
#line 2447 "cplus.met"
#line 2448 "cplus.met"
                {
#line 2448 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2448 "cplus.met"
                    {
#line 2448 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2448 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2448 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2448 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2448 "cplus.met"
                    }
#line 2448 "cplus.met"
                    _retValue =_ptTree0;
#line 2448 "cplus.met"
                    goto initializer_ret;
#line 2448 "cplus.met"
                }
#line 2448 "cplus.met"
            } else {
#line 2448 "cplus.met"
#line 2450 "cplus.met"
                {
#line 2450 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2450 "cplus.met"
                    {
#line 2450 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2450 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2450 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2450 "cplus.met"
                    }
#line 2450 "cplus.met"
                    _retValue =_ptTree0;
#line 2450 "cplus.met"
                    goto initializer_ret;
#line 2450 "cplus.met"
                }
#line 2450 "cplus.met"
            }
#line 2450 "cplus.met"
            break;
#line 2450 "cplus.met"
    }
#line 2450 "cplus.met"
#line 2450 "cplus.met"
#line 2451 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2451 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2451 "cplus.met"
return((PPTREE) 0);
#line 2451 "cplus.met"

#line 2451 "cplus.met"
initializer_exit :
#line 2451 "cplus.met"

#line 2451 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2451 "cplus.met"
    _funcLevel--;
#line 2451 "cplus.met"
    return((PPTREE) -1) ;
#line 2451 "cplus.met"

#line 2451 "cplus.met"
initializer_ret :
#line 2451 "cplus.met"
    
#line 2451 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2451 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2451 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2451 "cplus.met"
    return _retValue ;
#line 2451 "cplus.met"
}
#line 2451 "cplus.met"

#line 2451 "cplus.met"
#line 1540 "cplus.met"
PPTREE cplus::inline_namespace ( int error_free)
#line 1540 "cplus.met"
{
#line 1540 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1540 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1540 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1540 "cplus.met"
    int _Debug = TRACE_RULE("inline_namespace",TRACE_ENTER,(PPTREE)0);
#line 1540 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1540 "cplus.met"
#line 1541 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1541 "cplus.met"
    if (  !SEE_TOKEN( INLINE,"inline") || !(CommTerm(),1)) {
#line 1541 "cplus.met"
            TOKEN_EXIT(inline_namespace_exit,"inline")
#line 1541 "cplus.met"
    } else {
#line 1541 "cplus.met"
        tokenAhead = 0 ;
#line 1541 "cplus.met"
    }
#line 1541 "cplus.met"
#line 1542 "cplus.met"
    {
#line 1542 "cplus.met"
        PPTREE _ptTree0=0;
#line 1542 "cplus.met"
        {
#line 1542 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1542 "cplus.met"
            _ptRes1= MakeTree(INLINE_NAMESPACE, 1);
#line 1542 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(name_space)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1542 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                PROG_EXIT(inline_namespace_exit,"inline_namespace")
#line 1542 "cplus.met"
            }
#line 1542 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1542 "cplus.met"
            _ptTree0=_ptRes1;
#line 1542 "cplus.met"
        }
#line 1542 "cplus.met"
        _retValue =_ptTree0;
#line 1542 "cplus.met"
        goto inline_namespace_ret;
#line 1542 "cplus.met"
    }
#line 1542 "cplus.met"
#line 1542 "cplus.met"
#line 1542 "cplus.met"

#line 1543 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1543 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1543 "cplus.met"
return((PPTREE) 0);
#line 1543 "cplus.met"

#line 1543 "cplus.met"
inline_namespace_exit :
#line 1543 "cplus.met"

#line 1543 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_EXIT,(PPTREE)0);
#line 1543 "cplus.met"
    _funcLevel--;
#line 1543 "cplus.met"
    return((PPTREE) -1) ;
#line 1543 "cplus.met"

#line 1543 "cplus.met"
inline_namespace_ret :
#line 1543 "cplus.met"
    
#line 1543 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_RETURN,_retValue);
#line 1543 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1543 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1543 "cplus.met"
    return _retValue ;
#line 1543 "cplus.met"
}
#line 1543 "cplus.met"

#line 1543 "cplus.met"
#line 1693 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1693 "cplus.met"
{
#line 1693 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1693 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1693 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1693 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1693 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1693 "cplus.met"
#line 1693 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1693 "cplus.met"
#line 1695 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 87, cplus))) && 
#line 1695 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 65, cplus)))) && 
#line 1695 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 85, cplus)))) && 
#line 1695 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 86, cplus)))){
#line 1695 "cplus.met"
#line 1696 "cplus.met"
        
#line 1696 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1696 "cplus.met"
        goto inside_declaration_exit;
#line 1696 "cplus.met"
#line 1696 "cplus.met"
    }
#line 1696 "cplus.met"
#line 1697 "cplus.met"
    {
#line 1697 "cplus.met"
        _retValue = retTree ;
#line 1697 "cplus.met"
        goto inside_declaration_ret;
#line 1697 "cplus.met"
        
#line 1697 "cplus.met"
    }
#line 1697 "cplus.met"
#line 1697 "cplus.met"
#line 1697 "cplus.met"

#line 1698 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1698 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1698 "cplus.met"
return((PPTREE) 0);
#line 1698 "cplus.met"

#line 1698 "cplus.met"
inside_declaration_exit :
#line 1698 "cplus.met"

#line 1698 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1698 "cplus.met"
    _funcLevel--;
#line 1698 "cplus.met"
    return((PPTREE) -1) ;
#line 1698 "cplus.met"

#line 1698 "cplus.met"
inside_declaration_ret :
#line 1698 "cplus.met"
    
#line 1698 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1698 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1698 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1698 "cplus.met"
    return _retValue ;
#line 1698 "cplus.met"
}
#line 1698 "cplus.met"

#line 1698 "cplus.met"
#line 1673 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1673 "cplus.met"
{
#line 1673 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1673 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1673 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1673 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1673 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1673 "cplus.met"
#line 1673 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1673 "cplus.met"
#line 1675 "cplus.met"
    {
#line 1675 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1675 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1675 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1675 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1675 "cplus.met"
        }
#line 1675 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1675 "cplus.met"
        otherTree=_ptRes0;
#line 1675 "cplus.met"
    }
#line 1675 "cplus.met"
#line 1676 "cplus.met"
    {
#line 1676 "cplus.met"
        PPTREE _ptTree0=0;
#line 1676 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1676 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1676 "cplus.met"
        }
#line 1676 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1676 "cplus.met"
    }
#line 1676 "cplus.met"
#line 1677 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1677 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1677 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1677 "cplus.met"
    } else {
#line 1677 "cplus.met"
        tokenAhead = 0 ;
#line 1677 "cplus.met"
    }
#line 1677 "cplus.met"
#line 1678 "cplus.met"
    {
#line 1678 "cplus.met"
        PPTREE _ptTree0=0;
#line 1678 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1678 "cplus.met"
        _retValue =_ptTree0;
#line 1678 "cplus.met"
        goto inside_declaration1_ret;
#line 1678 "cplus.met"
    }
#line 1678 "cplus.met"
#line 1678 "cplus.met"
#line 1678 "cplus.met"

#line 1679 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1679 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1679 "cplus.met"
return((PPTREE) 0);
#line 1679 "cplus.met"

#line 1679 "cplus.met"
inside_declaration1_exit :
#line 1679 "cplus.met"

#line 1679 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1679 "cplus.met"
    _funcLevel--;
#line 1679 "cplus.met"
    return((PPTREE) -1) ;
#line 1679 "cplus.met"

#line 1679 "cplus.met"
inside_declaration1_ret :
#line 1679 "cplus.met"
    
#line 1679 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1679 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1679 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1679 "cplus.met"
    return _retValue ;
#line 1679 "cplus.met"
}
#line 1679 "cplus.met"

#line 1679 "cplus.met"
#line 1681 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1681 "cplus.met"
{
#line 1681 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1681 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1681 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1681 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1681 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1681 "cplus.met"
#line 1681 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1681 "cplus.met"
#line 1683 "cplus.met"
    {
#line 1683 "cplus.met"
        PPTREE _ptRes0=0;
#line 1683 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1683 "cplus.met"
        otherTree=_ptRes0;
#line 1683 "cplus.met"
    }
#line 1683 "cplus.met"
#line 1684 "cplus.met"
    {
#line 1684 "cplus.met"
        PPTREE _ptTree0=0;
#line 1684 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1684 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1684 "cplus.met"
        }
#line 1684 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1684 "cplus.met"
    }
#line 1684 "cplus.met"
#line 1685 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1685 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1685 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1685 "cplus.met"
    } else {
#line 1685 "cplus.met"
        tokenAhead = 0 ;
#line 1685 "cplus.met"
    }
#line 1685 "cplus.met"
#line 1686 "cplus.met"
    {
#line 1686 "cplus.met"
        PPTREE _ptTree0=0;
#line 1686 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1686 "cplus.met"
        _retValue =_ptTree0;
#line 1686 "cplus.met"
        goto inside_declaration2_ret;
#line 1686 "cplus.met"
    }
#line 1686 "cplus.met"
#line 1686 "cplus.met"
#line 1686 "cplus.met"

#line 1687 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1687 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1687 "cplus.met"
return((PPTREE) 0);
#line 1687 "cplus.met"

#line 1687 "cplus.met"
inside_declaration2_exit :
#line 1687 "cplus.met"

#line 1687 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1687 "cplus.met"
    _funcLevel--;
#line 1687 "cplus.met"
    return((PPTREE) -1) ;
#line 1687 "cplus.met"

#line 1687 "cplus.met"
inside_declaration2_ret :
#line 1687 "cplus.met"
    
#line 1687 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1687 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1687 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1687 "cplus.met"
    return _retValue ;
#line 1687 "cplus.met"
}
#line 1687 "cplus.met"

#line 1687 "cplus.met"
#line 1689 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1689 "cplus.met"
{
#line 1689 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1689 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1689 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1689 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1689 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1689 "cplus.met"
#line 1690 "cplus.met"
    
#line 1690 "cplus.met"
    LEX_EXIT ("",0);
#line 1690 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1690 "cplus.met"
#line 1690 "cplus.met"
#line 1690 "cplus.met"

#line 1691 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1691 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1691 "cplus.met"
return((PPTREE) 0);
#line 1691 "cplus.met"

#line 1691 "cplus.met"
inside_declaration_extension_exit :
#line 1691 "cplus.met"

#line 1691 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1691 "cplus.met"
    _funcLevel--;
#line 1691 "cplus.met"
    return((PPTREE) -1) ;
#line 1691 "cplus.met"

#line 1691 "cplus.met"
inside_declaration_extension_ret :
#line 1691 "cplus.met"
    
#line 1691 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1691 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1691 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1691 "cplus.met"
    return _retValue ;
#line 1691 "cplus.met"
}
#line 1691 "cplus.met"

#line 1691 "cplus.met"
#line 3306 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3306 "cplus.met"
{
#line 3306 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3306 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3306 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3306 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3306 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3306 "cplus.met"
#line 3307 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3307 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3307 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3307 "cplus.met"
    } else {
#line 3307 "cplus.met"
        tokenAhead = 0 ;
#line 3307 "cplus.met"
    }
#line 3307 "cplus.met"
#line 3308 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3308 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3308 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3308 "cplus.met"
    } else {
#line 3308 "cplus.met"
        tokenAhead = 0 ;
#line 3308 "cplus.met"
    }
#line 3308 "cplus.met"
#line 3308 "cplus.met"
#line 3308 "cplus.met"

#line 3309 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3309 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3309 "cplus.met"
return((PPTREE) 0);
#line 3309 "cplus.met"

#line 3309 "cplus.met"
label_beg_exit :
#line 3309 "cplus.met"

#line 3309 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3309 "cplus.met"
    _funcLevel--;
#line 3309 "cplus.met"
    return((PPTREE) -1) ;
#line 3309 "cplus.met"

#line 3309 "cplus.met"
label_beg_ret :
#line 3309 "cplus.met"
    
#line 3309 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3309 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3309 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3309 "cplus.met"
    return _retValue ;
#line 3309 "cplus.met"
}
#line 3309 "cplus.met"

#line 3309 "cplus.met"
#line 991 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 991 "cplus.met"
{
#line 991 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 991 "cplus.met"
    int _value,_nbPre = 0 ;
#line 991 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 991 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 991 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 991 "cplus.met"
#line 991 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 991 "cplus.met"
#line 991 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 991 "cplus.met"
#line 993 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 993 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 993 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 993 "cplus.met"
    } else {
#line 993 "cplus.met"
        tokenAhead = 0 ;
#line 993 "cplus.met"
    }
#line 993 "cplus.met"
#line 994 "cplus.met"
    {
#line 994 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 994 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 994 "cplus.met"
        {
#line 994 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 994 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 994 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 994 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 994 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 994 "cplus.met"
            } else {
#line 994 "cplus.met"
                tokenAhead = 0 ;
#line 994 "cplus.met"
            }
#line 994 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 994 "cplus.met"
            _ptTree0=_ptRes1;
#line 994 "cplus.met"
        }
#line 994 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 994 "cplus.met"
        retTree=_ptRes0;
#line 994 "cplus.met"
    }
#line 994 "cplus.met"
#line 995 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 995 "cplus.met"
    switch( lexEl.Value) {
#line 995 "cplus.met"
#line 998 "cplus.met"
        case AOUV : 
#line 998 "cplus.met"
            tokenAhead = 0 ;
#line 998 "cplus.met"
            CommTerm();
#line 998 "cplus.met"
#line 997 "cplus.met"
#line 997 "cplus.met"
            _addlist1 = list ;
#line 997 "cplus.met"
#line 998 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 65, cplus)) { 
#line 998 "cplus.met"
#line 999 "cplus.met"
#line 999 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 999 "cplus.met"
#line 999 "cplus.met"
                if (list){
#line 999 "cplus.met"
#line 999 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 999 "cplus.met"
                } else {
#line 999 "cplus.met"
#line 999 "cplus.met"
                    list = _addlist1 ;
#line 999 "cplus.met"
                }
#line 999 "cplus.met"
            } 
#line 999 "cplus.met"
#line 1000 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1000 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1000 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1000 "cplus.met"
            } else {
#line 1000 "cplus.met"
                tokenAhead = 0 ;
#line 1000 "cplus.met"
            }
#line 1000 "cplus.met"
#line 1001 "cplus.met"
            {
#line 1001 "cplus.met"
                PPTREE _ptTree0=0;
#line 1001 "cplus.met"
                {
#line 1001 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1001 "cplus.met"
                    {
#line 1001 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1001 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1001 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1001 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1001 "cplus.met"
                    }
#line 1001 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1001 "cplus.met"
                }
#line 1001 "cplus.met"
                _retValue =_ptTree0;
#line 1001 "cplus.met"
                goto linkage_specification_ret;
#line 1001 "cplus.met"
            }
#line 1001 "cplus.met"
#line 1001 "cplus.met"
            break;
#line 1001 "cplus.met"
#line 1003 "cplus.met"
        default : 
#line 1003 "cplus.met"
#line 1003 "cplus.met"
            {
#line 1003 "cplus.met"
                PPTREE _ptTree0=0;
#line 1003 "cplus.met"
                {
#line 1003 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1003 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1003 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1003 "cplus.met"
                    }
#line 1003 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1003 "cplus.met"
                }
#line 1003 "cplus.met"
                _retValue =_ptTree0;
#line 1003 "cplus.met"
                goto linkage_specification_ret;
#line 1003 "cplus.met"
            }
#line 1003 "cplus.met"
            break;
#line 1003 "cplus.met"
    }
#line 1003 "cplus.met"
#line 1003 "cplus.met"
#line 1004 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1004 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1004 "cplus.met"
return((PPTREE) 0);
#line 1004 "cplus.met"

#line 1004 "cplus.met"
linkage_specification_exit :
#line 1004 "cplus.met"

#line 1004 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1004 "cplus.met"
    _funcLevel--;
#line 1004 "cplus.met"
    return((PPTREE) -1) ;
#line 1004 "cplus.met"

#line 1004 "cplus.met"
linkage_specification_ret :
#line 1004 "cplus.met"
    
#line 1004 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1004 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1004 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1004 "cplus.met"
    return _retValue ;
#line 1004 "cplus.met"
}
#line 1004 "cplus.met"

#line 1004 "cplus.met"
#line 2639 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2639 "cplus.met"
{
#line 2639 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2639 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2639 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2639 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2639 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2639 "cplus.met"
#line 2639 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2639 "cplus.met"
#line 2641 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2641 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2641 "cplus.met"
    }
#line 2641 "cplus.met"
#line 2642 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2642 "cplus.met"
#line 2643 "cplus.met"
        {
#line 2643 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2643 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2643 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2643 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2643 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2643 "cplus.met"
            }
#line 2643 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2643 "cplus.met"
            expTree=_ptRes0;
#line 2643 "cplus.met"
        }
#line 2643 "cplus.met"
    } 
#line 2643 "cplus.met"
#line 2644 "cplus.met"
    {
#line 2644 "cplus.met"
        _retValue = expTree ;
#line 2644 "cplus.met"
        goto logical_and_expression_ret;
#line 2644 "cplus.met"
        
#line 2644 "cplus.met"
    }
#line 2644 "cplus.met"
#line 2644 "cplus.met"
#line 2644 "cplus.met"

#line 2645 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2645 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2645 "cplus.met"
return((PPTREE) 0);
#line 2645 "cplus.met"

#line 2645 "cplus.met"
logical_and_expression_exit :
#line 2645 "cplus.met"

#line 2645 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2645 "cplus.met"
    _funcLevel--;
#line 2645 "cplus.met"
    return((PPTREE) -1) ;
#line 2645 "cplus.met"

#line 2645 "cplus.met"
logical_and_expression_ret :
#line 2645 "cplus.met"
    
#line 2645 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2645 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2645 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2645 "cplus.met"
    return _retValue ;
#line 2645 "cplus.met"
}
#line 2645 "cplus.met"

#line 2645 "cplus.met"
#line 2631 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2631 "cplus.met"
{
#line 2631 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2631 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2631 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2631 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2631 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2631 "cplus.met"
#line 2631 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2631 "cplus.met"
#line 2633 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 90, cplus))== (PPTREE) -1 ) {
#line 2633 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2633 "cplus.met"
    }
#line 2633 "cplus.met"
#line 2634 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2634 "cplus.met"
#line 2635 "cplus.met"
        {
#line 2635 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2635 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2635 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2635 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 90, cplus))== (PPTREE) -1 ) {
#line 2635 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2635 "cplus.met"
            }
#line 2635 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2635 "cplus.met"
            expTree=_ptRes0;
#line 2635 "cplus.met"
        }
#line 2635 "cplus.met"
    } 
#line 2635 "cplus.met"
#line 2636 "cplus.met"
    {
#line 2636 "cplus.met"
        _retValue = expTree ;
#line 2636 "cplus.met"
        goto logical_or_expression_ret;
#line 2636 "cplus.met"
        
#line 2636 "cplus.met"
    }
#line 2636 "cplus.met"
#line 2636 "cplus.met"
#line 2636 "cplus.met"

#line 2637 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2637 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2637 "cplus.met"
return((PPTREE) 0);
#line 2637 "cplus.met"

#line 2637 "cplus.met"
logical_or_expression_exit :
#line 2637 "cplus.met"

#line 2637 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2637 "cplus.met"
    _funcLevel--;
#line 2637 "cplus.met"
    return((PPTREE) -1) ;
#line 2637 "cplus.met"

#line 2637 "cplus.met"
logical_or_expression_ret :
#line 2637 "cplus.met"
    
#line 2637 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2637 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2637 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2637 "cplus.met"
    return _retValue ;
#line 2637 "cplus.met"
}
#line 2637 "cplus.met"

#line 2637 "cplus.met"
#line 2080 "cplus.met"
PPTREE cplus::long_type ( int error_free)
#line 2080 "cplus.met"
{
#line 2080 "cplus.met"
    int  _oldinside_long = inside_long;
#line 2080 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2080 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2080 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2080 "cplus.met"
    int _Debug = TRACE_RULE("long_type",TRACE_ENTER,(PPTREE)0);
#line 2080 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2080 "cplus.met"
#line 2080 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2080 "cplus.met"
#line 2082 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2082 "cplus.met"
    if (  !SEE_TOKEN( LONG,"long") || !(CommTerm(),1)) {
#line 2082 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(long_type_exit,"long")
#line 2082 "cplus.met"
    } else {
#line 2082 "cplus.met"
        tokenAhead = 0 ;
#line 2082 "cplus.met"
    }
#line 2082 "cplus.met"
#line 2083 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2083 "cplus.met"
    switch( lexEl.Value) {
#line 2083 "cplus.met"
#line 2084 "cplus.met"
        case FLOAT : 
#line 2084 "cplus.met"
            tokenAhead = 0 ;
#line 2084 "cplus.met"
            CommTerm();
#line 2084 "cplus.met"
#line 2085 "cplus.met"
#line 2086 "cplus.met"
            if ((inside_long) || 
#line 2086 "cplus.met"
               (inside_signed)){
#line 2086 "cplus.met"
#line 2087 "cplus.met"
                
#line 2087 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2087 "cplus.met"
                goto long_type_exit;
#line 2087 "cplus.met"
#line 2087 "cplus.met"
            } else {
#line 2087 "cplus.met"
#line 2089 "cplus.met"
                {
#line 2089 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2089 "cplus.met"
                    {
#line 2089 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2089 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2089 "cplus.met"
                        {
#line 2089 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2089 "cplus.met"
                            _ptRes2= MakeTree(TFLOAT, 0);
#line 2089 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2089 "cplus.met"
                        }
#line 2089 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2089 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2089 "cplus.met"
                    }
#line 2089 "cplus.met"
                    _retValue =_ptTree0;
#line 2089 "cplus.met"
                    goto long_type_ret;
#line 2089 "cplus.met"
                }
#line 2089 "cplus.met"
            }
#line 2089 "cplus.met"
#line 2089 "cplus.met"
            break;
#line 2089 "cplus.met"
#line 2091 "cplus.met"
        case DOUBLE : 
#line 2091 "cplus.met"
            tokenAhead = 0 ;
#line 2091 "cplus.met"
            CommTerm();
#line 2091 "cplus.met"
#line 2092 "cplus.met"
#line 2093 "cplus.met"
            if ((inside_long) || 
#line 2093 "cplus.met"
               (inside_signed)){
#line 2093 "cplus.met"
#line 2094 "cplus.met"
                
#line 2094 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2094 "cplus.met"
                goto long_type_exit;
#line 2094 "cplus.met"
#line 2094 "cplus.met"
            } else {
#line 2094 "cplus.met"
#line 2096 "cplus.met"
                {
#line 2096 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2096 "cplus.met"
                    {
#line 2096 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2096 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2096 "cplus.met"
                        {
#line 2096 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2096 "cplus.met"
                            _ptRes2= MakeTree(TDOUBLE, 0);
#line 2096 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2096 "cplus.met"
                        }
#line 2096 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2096 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2096 "cplus.met"
                    }
#line 2096 "cplus.met"
                    _retValue =_ptTree0;
#line 2096 "cplus.met"
                    goto long_type_ret;
#line 2096 "cplus.met"
                }
#line 2096 "cplus.met"
            }
#line 2096 "cplus.met"
#line 2096 "cplus.met"
            break;
#line 2096 "cplus.met"
#line 2102 "cplus.met"
        default : 
#line 2102 "cplus.met"
#line 2099 "cplus.met"
#line 2100 "cplus.met"
            {
#line 2100 "cplus.met"
                inside_long = 1 ;
#line 2100 "cplus.met"
#line 2101 "cplus.met"
#line 2102 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 129, cplus)){
#line 2102 "cplus.met"
#line 2103 "cplus.met"
                    {
#line 2103 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2103 "cplus.met"
                        {
#line 2103 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2103 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2103 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2103 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2103 "cplus.met"
                        }
#line 2103 "cplus.met"
                        _retValue =_ptTree0;
#line 2103 "cplus.met"
                        goto long_type_ret;
#line 2103 "cplus.met"
                    }
#line 2103 "cplus.met"
                } else {
#line 2103 "cplus.met"
#line 2105 "cplus.met"
                    {
#line 2105 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2105 "cplus.met"
                        {
#line 2105 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2105 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2105 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2105 "cplus.met"
                        }
#line 2105 "cplus.met"
                        _retValue =_ptTree0;
#line 2105 "cplus.met"
                        goto long_type_ret;
#line 2105 "cplus.met"
                    }
#line 2105 "cplus.met"
                }
#line 2105 "cplus.met"
#line 2105 "cplus.met"
                inside_long =  _oldinside_long;
#line 2105 "cplus.met"
            }
#line 2105 "cplus.met"
#line 2105 "cplus.met"
            break;
#line 2105 "cplus.met"
    }
#line 2105 "cplus.met"
#line 2105 "cplus.met"
#line 2108 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2108 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2108 "cplus.met"
inside_long =  _oldinside_long;
#line 2108 "cplus.met"
return((PPTREE) 0);
#line 2108 "cplus.met"

#line 2108 "cplus.met"
long_type_exit :
#line 2108 "cplus.met"

#line 2108 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_EXIT,(PPTREE)0);
#line 2108 "cplus.met"
    _funcLevel--;
#line 2108 "cplus.met"
    inside_long =  _oldinside_long;
#line 2108 "cplus.met"
    return((PPTREE) -1) ;
#line 2108 "cplus.met"

#line 2108 "cplus.met"
long_type_ret :
#line 2108 "cplus.met"
    
#line 2108 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_RETURN,_retValue);
#line 2108 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2108 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2108 "cplus.met"
    inside_long =  _oldinside_long;
#line 2108 "cplus.met"
    return _retValue ;
#line 2108 "cplus.met"
}
#line 2108 "cplus.met"

#line 2108 "cplus.met"
#line 1866 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1866 "cplus.met"
{
#line 1866 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1866 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1866 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1866 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1866 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1866 "cplus.met"
#line 1866 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1866 "cplus.met"
#line 1868 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1868 "cplus.met"
    switch( lexEl.Value) {
#line 1868 "cplus.met"
#line 1869 "cplus.met"
        case META : 
#line 1869 "cplus.met"
        case DECLARE_SERIAL : 
#line 1869 "cplus.met"
            tokenAhead = 0 ;
#line 1869 "cplus.met"
            CommTerm();
#line 1869 "cplus.met"
#line 1869 "cplus.met"
            {
#line 1869 "cplus.met"
                PPTREE _ptRes0=0;
#line 1869 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1869 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1869 "cplus.met"
                retTree=_ptRes0;
#line 1869 "cplus.met"
            }
#line 1869 "cplus.met"
            break;
#line 1869 "cplus.met"
#line 1870 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1870 "cplus.met"
            tokenAhead = 0 ;
#line 1870 "cplus.met"
            CommTerm();
#line 1870 "cplus.met"
#line 1870 "cplus.met"
            {
#line 1870 "cplus.met"
                PPTREE _ptRes0=0;
#line 1870 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1870 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1870 "cplus.met"
                retTree=_ptRes0;
#line 1870 "cplus.met"
            }
#line 1870 "cplus.met"
            break;
#line 1870 "cplus.met"
#line 1871 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1871 "cplus.met"
            tokenAhead = 0 ;
#line 1871 "cplus.met"
            CommTerm();
#line 1871 "cplus.met"
#line 1871 "cplus.met"
            {
#line 1871 "cplus.met"
                PPTREE _ptRes0=0;
#line 1871 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1871 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1871 "cplus.met"
                retTree=_ptRes0;
#line 1871 "cplus.met"
            }
#line 1871 "cplus.met"
            break;
#line 1871 "cplus.met"
#line 1872 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1872 "cplus.met"
            tokenAhead = 0 ;
#line 1872 "cplus.met"
            CommTerm();
#line 1872 "cplus.met"
#line 1872 "cplus.met"
            {
#line 1872 "cplus.met"
                PPTREE _ptRes0=0;
#line 1872 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1872 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1872 "cplus.met"
                retTree=_ptRes0;
#line 1872 "cplus.met"
            }
#line 1872 "cplus.met"
            break;
#line 1872 "cplus.met"
#line 1873 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1873 "cplus.met"
            tokenAhead = 0 ;
#line 1873 "cplus.met"
            CommTerm();
#line 1873 "cplus.met"
#line 1873 "cplus.met"
            {
#line 1873 "cplus.met"
                PPTREE _ptRes0=0;
#line 1873 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1873 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1873 "cplus.met"
                retTree=_ptRes0;
#line 1873 "cplus.met"
            }
#line 1873 "cplus.met"
            break;
#line 1873 "cplus.met"
#line 1874 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1874 "cplus.met"
            tokenAhead = 0 ;
#line 1874 "cplus.met"
            CommTerm();
#line 1874 "cplus.met"
#line 1874 "cplus.met"
            {
#line 1874 "cplus.met"
                PPTREE _ptRes0=0;
#line 1874 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1874 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1874 "cplus.met"
                retTree=_ptRes0;
#line 1874 "cplus.met"
            }
#line 1874 "cplus.met"
            break;
#line 1874 "cplus.met"
#line 1875 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1875 "cplus.met"
            tokenAhead = 0 ;
#line 1875 "cplus.met"
            CommTerm();
#line 1875 "cplus.met"
#line 1875 "cplus.met"
            {
#line 1875 "cplus.met"
                PPTREE _ptRes0=0;
#line 1875 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1875 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1875 "cplus.met"
                retTree=_ptRes0;
#line 1875 "cplus.met"
            }
#line 1875 "cplus.met"
            break;
#line 1875 "cplus.met"
#line 1876 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1876 "cplus.met"
            tokenAhead = 0 ;
#line 1876 "cplus.met"
            CommTerm();
#line 1876 "cplus.met"
#line 1876 "cplus.met"
            {
#line 1876 "cplus.met"
                PPTREE _ptRes0=0;
#line 1876 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1876 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1876 "cplus.met"
                retTree=_ptRes0;
#line 1876 "cplus.met"
            }
#line 1876 "cplus.met"
            break;
#line 1876 "cplus.met"
#line 1877 "cplus.met"
        case CATCH_UPPER : 
#line 1877 "cplus.met"
            tokenAhead = 0 ;
#line 1877 "cplus.met"
            CommTerm();
#line 1877 "cplus.met"
#line 1877 "cplus.met"
            {
#line 1877 "cplus.met"
                PPTREE _ptRes0=0;
#line 1877 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1877 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1877 "cplus.met"
                retTree=_ptRes0;
#line 1877 "cplus.met"
            }
#line 1877 "cplus.met"
            break;
#line 1877 "cplus.met"
#line 1878 "cplus.met"
        case CATCH_ALL : 
#line 1878 "cplus.met"
            tokenAhead = 0 ;
#line 1878 "cplus.met"
            CommTerm();
#line 1878 "cplus.met"
#line 1878 "cplus.met"
            {
#line 1878 "cplus.met"
                PPTREE _ptRes0=0;
#line 1878 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1878 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1878 "cplus.met"
                retTree=_ptRes0;
#line 1878 "cplus.met"
            }
#line 1878 "cplus.met"
            break;
#line 1878 "cplus.met"
#line 1879 "cplus.met"
        case AND_CATCH : 
#line 1879 "cplus.met"
            tokenAhead = 0 ;
#line 1879 "cplus.met"
            CommTerm();
#line 1879 "cplus.met"
#line 1879 "cplus.met"
            {
#line 1879 "cplus.met"
                PPTREE _ptRes0=0;
#line 1879 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1879 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1879 "cplus.met"
                retTree=_ptRes0;
#line 1879 "cplus.met"
            }
#line 1879 "cplus.met"
            break;
#line 1879 "cplus.met"
#line 1880 "cplus.met"
        default : 
#line 1880 "cplus.met"
#line 1880 "cplus.met"
            
#line 1880 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1880 "cplus.met"
            goto macro_exit;
#line 1880 "cplus.met"
            break;
#line 1880 "cplus.met"
    }
#line 1880 "cplus.met"
#line 1882 "cplus.met"
    {
#line 1882 "cplus.met"
        PPTREE _ptRes0=0;
#line 1882 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1882 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1882 "cplus.met"
        retTree=_ptRes0;
#line 1882 "cplus.met"
    }
#line 1882 "cplus.met"
#line 1883 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1883 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1883 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1883 "cplus.met"
    } else {
#line 1883 "cplus.met"
        tokenAhead = 0 ;
#line 1883 "cplus.met"
    }
#line 1883 "cplus.met"
#line 1884 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 63, cplus)){
#line 1884 "cplus.met"
#line 1885 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1885 "cplus.met"
#line 1885 "cplus.met"
    }
#line 1885 "cplus.met"
#line 1886 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1886 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1886 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1886 "cplus.met"
    } else {
#line 1886 "cplus.met"
        tokenAhead = 0 ;
#line 1886 "cplus.met"
    }
#line 1886 "cplus.met"
#line 1887 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1887 "cplus.met"
#line 1887 "cplus.met"
    }
#line 1887 "cplus.met"
#line 1889 "cplus.met"
    {
#line 1889 "cplus.met"
        _retValue = retTree ;
#line 1889 "cplus.met"
        goto macro_ret;
#line 1889 "cplus.met"
        
#line 1889 "cplus.met"
    }
#line 1889 "cplus.met"
#line 1889 "cplus.met"
#line 1889 "cplus.met"

#line 1890 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1890 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1890 "cplus.met"
return((PPTREE) 0);
#line 1890 "cplus.met"

#line 1890 "cplus.met"
macro_exit :
#line 1890 "cplus.met"

#line 1890 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1890 "cplus.met"
    _funcLevel--;
#line 1890 "cplus.met"
    return((PPTREE) -1) ;
#line 1890 "cplus.met"

#line 1890 "cplus.met"
macro_ret :
#line 1890 "cplus.met"
    
#line 1890 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1890 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1890 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1890 "cplus.met"
    return _retValue ;
#line 1890 "cplus.met"
}
#line 1890 "cplus.met"

#line 1890 "cplus.met"
#line 1892 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 1892 "cplus.met"
{
#line 1892 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1892 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1892 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1892 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 1892 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1892 "cplus.met"
#line 1892 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1892 "cplus.met"
#line 1894 "cplus.met"
#line 1895 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1895 "cplus.met"
#line 1895 "cplus.met"
        {
#line 1895 "cplus.met"
            PPTREE _ptRes0=0;
#line 1895 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1895 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1895 "cplus.met"
            retTree=_ptRes0;
#line 1895 "cplus.met"
        }
#line 1895 "cplus.met"
    } else 
#line 1895 "cplus.met"
#line 1896 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1896 "cplus.met"
#line 1896 "cplus.met"
        {
#line 1896 "cplus.met"
            PPTREE _ptRes0=0;
#line 1896 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1896 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1896 "cplus.met"
            retTree=_ptRes0;
#line 1896 "cplus.met"
        }
#line 1896 "cplus.met"
    } else 
#line 1896 "cplus.met"
#line 1897 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 1897 "cplus.met"
#line 1897 "cplus.met"
        {
#line 1897 "cplus.met"
            PPTREE _ptRes0=0;
#line 1897 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1897 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1897 "cplus.met"
            retTree=_ptRes0;
#line 1897 "cplus.met"
        }
#line 1897 "cplus.met"
    } else 
#line 1897 "cplus.met"
#line 1898 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1898 "cplus.met"
#line 1898 "cplus.met"
        {
#line 1898 "cplus.met"
            PPTREE _ptRes0=0;
#line 1898 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1898 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1898 "cplus.met"
            retTree=_ptRes0;
#line 1898 "cplus.met"
        }
#line 1898 "cplus.met"
    } else 
#line 1898 "cplus.met"
#line 1899 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1899 "cplus.met"
#line 1899 "cplus.met"
        {
#line 1899 "cplus.met"
            PPTREE _ptRes0=0;
#line 1899 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1899 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1899 "cplus.met"
            retTree=_ptRes0;
#line 1899 "cplus.met"
        }
#line 1899 "cplus.met"
    } else 
#line 1899 "cplus.met"
#line 1900 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 1900 "cplus.met"
#line 1900 "cplus.met"
        {
#line 1900 "cplus.met"
            PPTREE _ptRes0=0;
#line 1900 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1900 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1900 "cplus.met"
            retTree=_ptRes0;
#line 1900 "cplus.met"
        }
#line 1900 "cplus.met"
    } else 
#line 1900 "cplus.met"
#line 1901 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 1901 "cplus.met"
#line 1901 "cplus.met"
        {
#line 1901 "cplus.met"
            PPTREE _ptRes0=0;
#line 1901 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1901 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1901 "cplus.met"
            retTree=_ptRes0;
#line 1901 "cplus.met"
        }
#line 1901 "cplus.met"
    } else 
#line 1901 "cplus.met"
#line 1902 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 1902 "cplus.met"
#line 1902 "cplus.met"
        {
#line 1902 "cplus.met"
            PPTREE _ptRes0=0;
#line 1902 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1902 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1902 "cplus.met"
            retTree=_ptRes0;
#line 1902 "cplus.met"
        }
#line 1902 "cplus.met"
    } else 
#line 1902 "cplus.met"
#line 1903 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 1903 "cplus.met"
#line 1903 "cplus.met"
        {
#line 1903 "cplus.met"
            PPTREE _ptRes0=0;
#line 1903 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1903 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1903 "cplus.met"
            retTree=_ptRes0;
#line 1903 "cplus.met"
        }
#line 1903 "cplus.met"
    } else 
#line 1903 "cplus.met"
#line 1904 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 1904 "cplus.met"
#line 1904 "cplus.met"
        {
#line 1904 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1904 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1904 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1904 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1904 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 1904 "cplus.met"
            } else {
#line 1904 "cplus.met"
                tokenAhead = 0 ;
#line 1904 "cplus.met"
            }
#line 1904 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1904 "cplus.met"
            retTree=_ptRes0;
#line 1904 "cplus.met"
        }
#line 1904 "cplus.met"
    } else 
#line 1904 "cplus.met"
#line 1905 "cplus.met"
    if (1) {
#line 1905 "cplus.met"
#line 1905 "cplus.met"
        
#line 1905 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 1905 "cplus.met"
        goto macro_extended_exit;
#line 1905 "cplus.met"
    } else 
#line 1905 "cplus.met"
     ;
#line 1905 "cplus.met"
#line 1907 "cplus.met"
    {
#line 1907 "cplus.met"
        PPTREE _ptRes0=0;
#line 1907 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1907 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1907 "cplus.met"
        retTree=_ptRes0;
#line 1907 "cplus.met"
    }
#line 1907 "cplus.met"
#line 1908 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1908 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1908 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 1908 "cplus.met"
    } else {
#line 1908 "cplus.met"
        tokenAhead = 0 ;
#line 1908 "cplus.met"
    }
#line 1908 "cplus.met"
#line 1909 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 63, cplus)){
#line 1909 "cplus.met"
#line 1910 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1910 "cplus.met"
#line 1910 "cplus.met"
    }
#line 1910 "cplus.met"
#line 1911 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1911 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1911 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 1911 "cplus.met"
    } else {
#line 1911 "cplus.met"
        tokenAhead = 0 ;
#line 1911 "cplus.met"
    }
#line 1911 "cplus.met"
#line 1912 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1912 "cplus.met"
#line 1912 "cplus.met"
    }
#line 1912 "cplus.met"
#line 1914 "cplus.met"
    {
#line 1914 "cplus.met"
        _retValue = retTree ;
#line 1914 "cplus.met"
        goto macro_extended_ret;
#line 1914 "cplus.met"
        
#line 1914 "cplus.met"
    }
#line 1914 "cplus.met"
#line 1914 "cplus.met"
#line 1914 "cplus.met"

#line 1915 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1915 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1915 "cplus.met"
return((PPTREE) 0);
#line 1915 "cplus.met"

#line 1915 "cplus.met"
macro_extended_exit :
#line 1915 "cplus.met"

#line 1915 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 1915 "cplus.met"
    _funcLevel--;
#line 1915 "cplus.met"
    return((PPTREE) -1) ;
#line 1915 "cplus.met"

#line 1915 "cplus.met"
macro_extended_ret :
#line 1915 "cplus.met"
    
#line 1915 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 1915 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1915 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1915 "cplus.met"
    return _retValue ;
#line 1915 "cplus.met"
}
#line 1915 "cplus.met"

#line 1915 "cplus.met"
#line 766 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 766 "cplus.met"
{
#line 766 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 766 "cplus.met"
    int _value,_nbPre = 0 ;
#line 766 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 766 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 766 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 766 "cplus.met"
#line 767 "cplus.met"
    {
#line 767 "cplus.met"
        PPTREE _ptTree0=0;
#line 767 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 114, cplus))== (PPTREE) -1 ) {
#line 767 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 767 "cplus.met"
        }
#line 767 "cplus.met"
        _retValue =_ptTree0;
#line 767 "cplus.met"
        goto main_entry_ret;
#line 767 "cplus.met"
    }
#line 767 "cplus.met"
#line 767 "cplus.met"
#line 767 "cplus.met"

#line 768 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 768 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 768 "cplus.met"
return((PPTREE) 0);
#line 768 "cplus.met"

#line 768 "cplus.met"
main_entry_exit :
#line 768 "cplus.met"

#line 768 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 768 "cplus.met"
    _funcLevel--;
#line 768 "cplus.met"
    return((PPTREE) -1) ;
#line 768 "cplus.met"

#line 768 "cplus.met"
main_entry_ret :
#line 768 "cplus.met"
    
#line 768 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 768 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 768 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 768 "cplus.met"
    return _retValue ;
#line 768 "cplus.met"
}
#line 768 "cplus.met"

#line 768 "cplus.met"
#line 2172 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2172 "cplus.met"
{
#line 2172 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2172 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2172 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2172 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2172 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2172 "cplus.met"
#line 2172 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2172 "cplus.met"
#line 2174 "cplus.met"
    {
#line 2174 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2174 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2174 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2174 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2174 "cplus.met"
        }
#line 2174 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2174 "cplus.met"
        retTree=_ptRes0;
#line 2174 "cplus.met"
    }
#line 2174 "cplus.met"
#line 2175 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2175 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2175 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2175 "cplus.met"
    } else {
#line 2175 "cplus.met"
        tokenAhead = 0 ;
#line 2175 "cplus.met"
    }
#line 2175 "cplus.met"
#line 2176 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2176 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2176 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2176 "cplus.met"
    } else {
#line 2176 "cplus.met"
        tokenAhead = 0 ;
#line 2176 "cplus.met"
    }
#line 2176 "cplus.met"
#line 2177 "cplus.met"
    {
#line 2177 "cplus.met"
        _retValue = retTree ;
#line 2177 "cplus.met"
        goto member_declarator_ret;
#line 2177 "cplus.met"
        
#line 2177 "cplus.met"
    }
#line 2177 "cplus.met"
#line 2177 "cplus.met"
#line 2177 "cplus.met"

#line 2178 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2178 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2178 "cplus.met"
return((PPTREE) 0);
#line 2178 "cplus.met"

#line 2178 "cplus.met"
member_declarator_exit :
#line 2178 "cplus.met"

#line 2178 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2178 "cplus.met"
    _funcLevel--;
#line 2178 "cplus.met"
    return((PPTREE) -1) ;
#line 2178 "cplus.met"

#line 2178 "cplus.met"
member_declarator_ret :
#line 2178 "cplus.met"
    
#line 2178 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2178 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2178 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2178 "cplus.met"
    return _retValue ;
#line 2178 "cplus.met"
}
#line 2178 "cplus.met"

#line 2178 "cplus.met"
#line 1917 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 1917 "cplus.met"
{
#line 1917 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1917 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1917 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1917 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 1917 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1917 "cplus.met"
#line 1917 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1917 "cplus.met"
#line 1917 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1917 "cplus.met"
#line 1919 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1919 "cplus.met"
    switch( lexEl.Value) {
#line 1919 "cplus.met"
#line 1920 "cplus.met"
        case META : 
#line 1920 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1920 "cplus.met"
#line 1920 "cplus.met"
            break;
#line 1920 "cplus.met"
        default :
#line 1920 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 1920 "cplus.met"
            break;
#line 1920 "cplus.met"
    }
#line 1920 "cplus.met"
#line 1922 "cplus.met"
    {
#line 1922 "cplus.met"
        PPTREE _ptRes0=0;
#line 1922 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 1922 "cplus.met"
        retTree=_ptRes0;
#line 1922 "cplus.met"
    }
#line 1922 "cplus.met"
#line 1922 "cplus.met"
    _addlist1 = list ;
#line 1922 "cplus.met"
#line 1923 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 1923 "cplus.met"
#line 1924 "cplus.met"
#line 1924 "cplus.met"
        {
#line 1924 "cplus.met"
            PPTREE _ptTree0=0;
#line 1924 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 1924 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 1924 "cplus.met"
            }
#line 1924 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1924 "cplus.met"
        }
#line 1924 "cplus.met"
#line 1924 "cplus.met"
        if (list){
#line 1924 "cplus.met"
#line 1924 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1924 "cplus.met"
        } else {
#line 1924 "cplus.met"
#line 1924 "cplus.met"
            list = _addlist1 ;
#line 1924 "cplus.met"
        }
#line 1924 "cplus.met"
    } 
#line 1924 "cplus.met"
#line 1925 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1925 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 1925 "cplus.met"
    }
#line 1925 "cplus.met"
#line 1926 "cplus.met"
    {
#line 1926 "cplus.met"
        PPTREE _ptTree0=0;
#line 1926 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 1926 "cplus.met"
        _retValue =_ptTree0;
#line 1926 "cplus.met"
        goto message_map_ret;
#line 1926 "cplus.met"
    }
#line 1926 "cplus.met"
#line 1926 "cplus.met"
#line 1926 "cplus.met"

#line 1927 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1927 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1927 "cplus.met"
return((PPTREE) 0);
#line 1927 "cplus.met"

#line 1927 "cplus.met"
message_map_exit :
#line 1927 "cplus.met"

#line 1927 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 1927 "cplus.met"
    _funcLevel--;
#line 1927 "cplus.met"
    return((PPTREE) -1) ;
#line 1927 "cplus.met"

#line 1927 "cplus.met"
message_map_ret :
#line 1927 "cplus.met"
    
#line 1927 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 1927 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1927 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1927 "cplus.met"
    return _retValue ;
#line 1927 "cplus.met"
}
#line 1927 "cplus.met"

#line 1927 "cplus.met"
#line 2720 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2720 "cplus.met"
{
#line 2720 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2720 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2720 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2720 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2720 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2720 "cplus.met"
#line 2720 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2720 "cplus.met"
#line 2722 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2722 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2722 "cplus.met"
    }
#line 2722 "cplus.met"
#line 2723 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2723 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2723 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2723 "cplus.met"
#line 2724 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2724 "cplus.met"
        switch( lexEl.Value) {
#line 2724 "cplus.met"
#line 2725 "cplus.met"
            case ETOI : 
#line 2725 "cplus.met"
                tokenAhead = 0 ;
#line 2725 "cplus.met"
                CommTerm();
#line 2725 "cplus.met"
#line 2725 "cplus.met"
                {
#line 2725 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2725 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2725 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2725 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2725 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2725 "cplus.met"
                    }
#line 2725 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2725 "cplus.met"
                    expTree=_ptRes0;
#line 2725 "cplus.met"
                }
#line 2725 "cplus.met"
                break;
#line 2725 "cplus.met"
#line 2726 "cplus.met"
            case META : 
#line 2726 "cplus.met"
            case SLAS : 
#line 2726 "cplus.met"
                tokenAhead = 0 ;
#line 2726 "cplus.met"
                CommTerm();
#line 2726 "cplus.met"
#line 2726 "cplus.met"
                {
#line 2726 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2726 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 2726 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2726 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2726 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2726 "cplus.met"
                    }
#line 2726 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2726 "cplus.met"
                    expTree=_ptRes0;
#line 2726 "cplus.met"
                }
#line 2726 "cplus.met"
                break;
#line 2726 "cplus.met"
#line 2727 "cplus.met"
            case POURC : 
#line 2727 "cplus.met"
                tokenAhead = 0 ;
#line 2727 "cplus.met"
                CommTerm();
#line 2727 "cplus.met"
#line 2727 "cplus.met"
                {
#line 2727 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2727 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2727 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2727 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2727 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2727 "cplus.met"
                    }
#line 2727 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2727 "cplus.met"
                    expTree=_ptRes0;
#line 2727 "cplus.met"
                }
#line 2727 "cplus.met"
                break;
#line 2727 "cplus.met"
            default :
#line 2727 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2727 "cplus.met"
                break;
#line 2727 "cplus.met"
        }
#line 2727 "cplus.met"
    } 
#line 2727 "cplus.met"
#line 2729 "cplus.met"
    {
#line 2729 "cplus.met"
        _retValue = expTree ;
#line 2729 "cplus.met"
        goto multiplicative_expression_ret;
#line 2729 "cplus.met"
        
#line 2729 "cplus.met"
    }
#line 2729 "cplus.met"
#line 2729 "cplus.met"
#line 2729 "cplus.met"

#line 2730 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2730 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2730 "cplus.met"
return((PPTREE) 0);
#line 2730 "cplus.met"

#line 2730 "cplus.met"
multiplicative_expression_exit :
#line 2730 "cplus.met"

#line 2730 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2730 "cplus.met"
    _funcLevel--;
#line 2730 "cplus.met"
    return((PPTREE) -1) ;
#line 2730 "cplus.met"

#line 2730 "cplus.met"
multiplicative_expression_ret :
#line 2730 "cplus.met"
    
#line 2730 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2730 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2730 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2730 "cplus.met"
    return _retValue ;
#line 2730 "cplus.met"
}
#line 2730 "cplus.met"

#line 2730 "cplus.met"
