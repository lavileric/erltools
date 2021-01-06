/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3275 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3275 "cplus.met"
{
#line 3275 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3275 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3275 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3275 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3275 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3275 "cplus.met"
#line 3276 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3276 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3276 "cplus.met"
    }
#line 3276 "cplus.met"
#line 3277 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3277 "cplus.met"
    switch( lexEl.Value) {
#line 3277 "cplus.met"
#line 3277 "cplus.met"
        case ETOI : 
#line 3277 "cplus.met"
#line 3277 "cplus.met"
            break;
#line 3277 "cplus.met"
#line 3279 "cplus.met"
        case META : 
#line 3279 "cplus.met"
        case IDENT : 
#line 3279 "cplus.met"
#line 3279 "cplus.met"
            break;
#line 3279 "cplus.met"
        default :
#line 3279 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3279 "cplus.met"
            break;
#line 3279 "cplus.met"
    }
#line 3279 "cplus.met"
#line 3279 "cplus.met"
#line 3280 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3280 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3280 "cplus.met"
return((PPTREE) 0);
#line 3280 "cplus.met"

#line 3280 "cplus.met"
ident_mul_exit :
#line 3280 "cplus.met"

#line 3280 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3280 "cplus.met"
    _funcLevel--;
#line 3280 "cplus.met"
    return((PPTREE) -1) ;
#line 3280 "cplus.met"

#line 3280 "cplus.met"
ident_mul_ret :
#line 3280 "cplus.met"
    
#line 3280 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3280 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3280 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3280 "cplus.met"
    return _retValue ;
#line 3280 "cplus.met"
}
#line 3280 "cplus.met"

#line 3280 "cplus.met"
#line 1421 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1421 "cplus.met"
{
#line 1421 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1421 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1421 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1421 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1421 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1421 "cplus.met"
#line 1422 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1422 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1422 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1422 "cplus.met"
    } else {
#line 1422 "cplus.met"
        tokenAhead = 0 ;
#line 1422 "cplus.met"
    }
#line 1422 "cplus.met"
#line 1423 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1423 "cplus.met"
    switch( lexEl.Value) {
#line 1423 "cplus.met"
#line 1424 "cplus.met"
        case META : 
#line 1424 "cplus.met"
        case INCLUDE_SYS : 
#line 1424 "cplus.met"
#line 1425 "cplus.met"
#line 1426 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1426 "cplus.met"
#line 1427 "cplus.met"
            {
#line 1427 "cplus.met"
                PPTREE _ptTree0=0;
#line 1427 "cplus.met"
                {
#line 1427 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1427 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1427 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1427 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1427 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1427 "cplus.met"
                    } else {
#line 1427 "cplus.met"
                        tokenAhead = 0 ;
#line 1427 "cplus.met"
                    }
#line 1427 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1427 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1427 "cplus.met"
                }
#line 1427 "cplus.met"
                _retValue =_ptTree0;
#line 1427 "cplus.met"
                goto include_dir_ret;
#line 1427 "cplus.met"
            }
#line 1427 "cplus.met"
#line 1427 "cplus.met"
            break;
#line 1427 "cplus.met"
#line 1429 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1429 "cplus.met"
#line 1430 "cplus.met"
#line 1431 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1431 "cplus.met"
#line 1432 "cplus.met"
            {
#line 1432 "cplus.met"
                PPTREE _ptTree0=0;
#line 1432 "cplus.met"
                {
#line 1432 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1432 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1432 "cplus.met"
                    {
#line 1432 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1432 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1432 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1432 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1432 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1432 "cplus.met"
                        } else {
#line 1432 "cplus.met"
                            tokenAhead = 0 ;
#line 1432 "cplus.met"
                        }
#line 1432 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1432 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1432 "cplus.met"
                    }
#line 1432 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1432 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1432 "cplus.met"
                }
#line 1432 "cplus.met"
                _retValue =_ptTree0;
#line 1432 "cplus.met"
                goto include_dir_ret;
#line 1432 "cplus.met"
            }
#line 1432 "cplus.met"
#line 1432 "cplus.met"
            break;
#line 1432 "cplus.met"
        default :
#line 1432 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1432 "cplus.met"
            break;
#line 1432 "cplus.met"
    }
#line 1432 "cplus.met"
#line 1432 "cplus.met"
#line 1434 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1434 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1434 "cplus.met"
return((PPTREE) 0);
#line 1434 "cplus.met"

#line 1434 "cplus.met"
include_dir_exit :
#line 1434 "cplus.met"

#line 1434 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1434 "cplus.met"
    _funcLevel--;
#line 1434 "cplus.met"
    return((PPTREE) -1) ;
#line 1434 "cplus.met"

#line 1434 "cplus.met"
include_dir_ret :
#line 1434 "cplus.met"
    
#line 1434 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1434 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1434 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1434 "cplus.met"
    return _retValue ;
#line 1434 "cplus.met"
}
#line 1434 "cplus.met"

#line 1434 "cplus.met"
#line 2619 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2619 "cplus.met"
{
#line 2619 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2619 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2619 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2619 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2619 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2619 "cplus.met"
#line 2619 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2619 "cplus.met"
#line 2621 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 61, cplus))== (PPTREE) -1 ) {
#line 2621 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2621 "cplus.met"
    }
#line 2621 "cplus.met"
#line 2622 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2622 "cplus.met"
#line 2623 "cplus.met"
        {
#line 2623 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2623 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2623 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2623 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 61, cplus))== (PPTREE) -1 ) {
#line 2623 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
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
        goto inclusive_or_expression_ret;
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
inclusive_or_expression_exit :
#line 2625 "cplus.met"

#line 2625 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2625 "cplus.met"
    _funcLevel--;
#line 2625 "cplus.met"
    return((PPTREE) -1) ;
#line 2625 "cplus.met"

#line 2625 "cplus.met"
inclusive_or_expression_ret :
#line 2625 "cplus.met"
    
#line 2625 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
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
#line 2407 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2407 "cplus.met"
{
#line 2407 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2407 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2407 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2407 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2407 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2407 "cplus.met"
#line 2407 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2407 "cplus.met"
#line 2407 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2407 "cplus.met"
#line 2409 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2409 "cplus.met"
    switch( lexEl.Value) {
#line 2409 "cplus.met"
#line 2413 "cplus.met"
        case AOUV : 
#line 2413 "cplus.met"
            tokenAhead = 0 ;
#line 2413 "cplus.met"
            CommTerm();
#line 2413 "cplus.met"
#line 2411 "cplus.met"
#line 2411 "cplus.met"
            _addlist1 = initList ;
#line 2411 "cplus.met"
#line 2412 "cplus.met"
            do {
#line 2412 "cplus.met"
#line 2413 "cplus.met"
                {
#line 2413 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2413 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2413 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2413 "cplus.met"
                    }
#line 2413 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2413 "cplus.met"
                }
#line 2413 "cplus.met"
#line 2413 "cplus.met"
                if (initList){
#line 2413 "cplus.met"
#line 2413 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2413 "cplus.met"
                } else {
#line 2413 "cplus.met"
#line 2413 "cplus.met"
                    initList = _addlist1 ;
#line 2413 "cplus.met"
                }
#line 2413 "cplus.met"
#line 2413 "cplus.met"
#line 2414 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2414 "cplus.met"
#line 2415 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2415 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2415 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2415 "cplus.met"
            } else {
#line 2415 "cplus.met"
                tokenAhead = 0 ;
#line 2415 "cplus.met"
            }
#line 2415 "cplus.met"
#line 2416 "cplus.met"
            {
#line 2416 "cplus.met"
                PPTREE _ptTree0=0;
#line 2416 "cplus.met"
                {
#line 2416 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2416 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2416 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2416 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2416 "cplus.met"
                }
#line 2416 "cplus.met"
                _retValue =_ptTree0;
#line 2416 "cplus.met"
                goto initializer_ret;
#line 2416 "cplus.met"
            }
#line 2416 "cplus.met"
#line 2416 "cplus.met"
            break;
#line 2416 "cplus.met"
#line 2419 "cplus.met"
        default : 
#line 2419 "cplus.met"
#line 2419 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 16, cplus)){
#line 2419 "cplus.met"
#line 2420 "cplus.met"
                {
#line 2420 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2420 "cplus.met"
                    {
#line 2420 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2420 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2420 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2420 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2420 "cplus.met"
                    }
#line 2420 "cplus.met"
                    _retValue =_ptTree0;
#line 2420 "cplus.met"
                    goto initializer_ret;
#line 2420 "cplus.met"
                }
#line 2420 "cplus.met"
            } else {
#line 2420 "cplus.met"
#line 2422 "cplus.met"
                {
#line 2422 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2422 "cplus.met"
                    {
#line 2422 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2422 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2422 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2422 "cplus.met"
                    }
#line 2422 "cplus.met"
                    _retValue =_ptTree0;
#line 2422 "cplus.met"
                    goto initializer_ret;
#line 2422 "cplus.met"
                }
#line 2422 "cplus.met"
            }
#line 2422 "cplus.met"
            break;
#line 2422 "cplus.met"
    }
#line 2422 "cplus.met"
#line 2422 "cplus.met"
#line 2423 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2423 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2423 "cplus.met"
return((PPTREE) 0);
#line 2423 "cplus.met"

#line 2423 "cplus.met"
initializer_exit :
#line 2423 "cplus.met"

#line 2423 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2423 "cplus.met"
    _funcLevel--;
#line 2423 "cplus.met"
    return((PPTREE) -1) ;
#line 2423 "cplus.met"

#line 2423 "cplus.met"
initializer_ret :
#line 2423 "cplus.met"
    
#line 2423 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2423 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2423 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2423 "cplus.met"
    return _retValue ;
#line 2423 "cplus.met"
}
#line 2423 "cplus.met"

#line 2423 "cplus.met"
#line 1524 "cplus.met"
PPTREE cplus::inline_namespace ( int error_free)
#line 1524 "cplus.met"
{
#line 1524 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1524 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1524 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1524 "cplus.met"
    int _Debug = TRACE_RULE("inline_namespace",TRACE_ENTER,(PPTREE)0);
#line 1524 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1524 "cplus.met"
#line 1525 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1525 "cplus.met"
    if (  !SEE_TOKEN( INLINE,"inline") || !(CommTerm(),1)) {
#line 1525 "cplus.met"
            TOKEN_EXIT(inline_namespace_exit,"inline")
#line 1525 "cplus.met"
    } else {
#line 1525 "cplus.met"
        tokenAhead = 0 ;
#line 1525 "cplus.met"
    }
#line 1525 "cplus.met"
#line 1526 "cplus.met"
    {
#line 1526 "cplus.met"
        PPTREE _ptTree0=0;
#line 1526 "cplus.met"
        {
#line 1526 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1526 "cplus.met"
            _ptRes1= MakeTree(INLINE_NAMESPACE, 1);
#line 1526 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(name_space)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 1526 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                PROG_EXIT(inline_namespace_exit,"inline_namespace")
#line 1526 "cplus.met"
            }
#line 1526 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1526 "cplus.met"
            _ptTree0=_ptRes1;
#line 1526 "cplus.met"
        }
#line 1526 "cplus.met"
        _retValue =_ptTree0;
#line 1526 "cplus.met"
        goto inline_namespace_ret;
#line 1526 "cplus.met"
    }
#line 1526 "cplus.met"
#line 1526 "cplus.met"
#line 1526 "cplus.met"

#line 1527 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1527 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1527 "cplus.met"
return((PPTREE) 0);
#line 1527 "cplus.met"

#line 1527 "cplus.met"
inline_namespace_exit :
#line 1527 "cplus.met"

#line 1527 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_EXIT,(PPTREE)0);
#line 1527 "cplus.met"
    _funcLevel--;
#line 1527 "cplus.met"
    return((PPTREE) -1) ;
#line 1527 "cplus.met"

#line 1527 "cplus.met"
inline_namespace_ret :
#line 1527 "cplus.met"
    
#line 1527 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_RETURN,_retValue);
#line 1527 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1527 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1527 "cplus.met"
    return _retValue ;
#line 1527 "cplus.met"
}
#line 1527 "cplus.met"

#line 1527 "cplus.met"
#line 1677 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1677 "cplus.met"
{
#line 1677 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1677 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1677 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1677 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1677 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1677 "cplus.met"
#line 1677 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1677 "cplus.met"
#line 1679 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 86, cplus))) && 
#line 1679 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 64, cplus)))) && 
#line 1679 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 84, cplus)))) && 
#line 1679 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 85, cplus)))){
#line 1679 "cplus.met"
#line 1680 "cplus.met"
        
#line 1680 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1680 "cplus.met"
        goto inside_declaration_exit;
#line 1680 "cplus.met"
#line 1680 "cplus.met"
    }
#line 1680 "cplus.met"
#line 1681 "cplus.met"
    {
#line 1681 "cplus.met"
        _retValue = retTree ;
#line 1681 "cplus.met"
        goto inside_declaration_ret;
#line 1681 "cplus.met"
        
#line 1681 "cplus.met"
    }
#line 1681 "cplus.met"
#line 1681 "cplus.met"
#line 1681 "cplus.met"

#line 1682 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1682 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1682 "cplus.met"
return((PPTREE) 0);
#line 1682 "cplus.met"

#line 1682 "cplus.met"
inside_declaration_exit :
#line 1682 "cplus.met"

#line 1682 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1682 "cplus.met"
    _funcLevel--;
#line 1682 "cplus.met"
    return((PPTREE) -1) ;
#line 1682 "cplus.met"

#line 1682 "cplus.met"
inside_declaration_ret :
#line 1682 "cplus.met"
    
#line 1682 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1682 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1682 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1682 "cplus.met"
    return _retValue ;
#line 1682 "cplus.met"
}
#line 1682 "cplus.met"

#line 1682 "cplus.met"
#line 1657 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1657 "cplus.met"
{
#line 1657 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1657 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1657 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1657 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1657 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1657 "cplus.met"
#line 1657 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1657 "cplus.met"
#line 1659 "cplus.met"
    {
#line 1659 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1659 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1659 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 1659 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1659 "cplus.met"
        }
#line 1659 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1659 "cplus.met"
        otherTree=_ptRes0;
#line 1659 "cplus.met"
    }
#line 1659 "cplus.met"
#line 1660 "cplus.met"
    {
#line 1660 "cplus.met"
        PPTREE _ptTree0=0;
#line 1660 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 1660 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1660 "cplus.met"
        }
#line 1660 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1660 "cplus.met"
    }
#line 1660 "cplus.met"
#line 1661 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1661 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1661 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1661 "cplus.met"
    } else {
#line 1661 "cplus.met"
        tokenAhead = 0 ;
#line 1661 "cplus.met"
    }
#line 1661 "cplus.met"
#line 1662 "cplus.met"
    {
#line 1662 "cplus.met"
        PPTREE _ptTree0=0;
#line 1662 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1662 "cplus.met"
        _retValue =_ptTree0;
#line 1662 "cplus.met"
        goto inside_declaration1_ret;
#line 1662 "cplus.met"
    }
#line 1662 "cplus.met"
#line 1662 "cplus.met"
#line 1662 "cplus.met"

#line 1663 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1663 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1663 "cplus.met"
return((PPTREE) 0);
#line 1663 "cplus.met"

#line 1663 "cplus.met"
inside_declaration1_exit :
#line 1663 "cplus.met"

#line 1663 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1663 "cplus.met"
    _funcLevel--;
#line 1663 "cplus.met"
    return((PPTREE) -1) ;
#line 1663 "cplus.met"

#line 1663 "cplus.met"
inside_declaration1_ret :
#line 1663 "cplus.met"
    
#line 1663 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1663 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1663 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1663 "cplus.met"
    return _retValue ;
#line 1663 "cplus.met"
}
#line 1663 "cplus.met"

#line 1663 "cplus.met"
#line 1665 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1665 "cplus.met"
{
#line 1665 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1665 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1665 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1665 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1665 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1665 "cplus.met"
#line 1665 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1665 "cplus.met"
#line 1667 "cplus.met"
    {
#line 1667 "cplus.met"
        PPTREE _ptRes0=0;
#line 1667 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1667 "cplus.met"
        otherTree=_ptRes0;
#line 1667 "cplus.met"
    }
#line 1667 "cplus.met"
#line 1668 "cplus.met"
    {
#line 1668 "cplus.met"
        PPTREE _ptTree0=0;
#line 1668 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 20, cplus))== (PPTREE) -1 ) {
#line 1668 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1668 "cplus.met"
        }
#line 1668 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1668 "cplus.met"
    }
#line 1668 "cplus.met"
#line 1669 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1669 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1669 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1669 "cplus.met"
    } else {
#line 1669 "cplus.met"
        tokenAhead = 0 ;
#line 1669 "cplus.met"
    }
#line 1669 "cplus.met"
#line 1670 "cplus.met"
    {
#line 1670 "cplus.met"
        PPTREE _ptTree0=0;
#line 1670 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1670 "cplus.met"
        _retValue =_ptTree0;
#line 1670 "cplus.met"
        goto inside_declaration2_ret;
#line 1670 "cplus.met"
    }
#line 1670 "cplus.met"
#line 1670 "cplus.met"
#line 1670 "cplus.met"

#line 1671 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1671 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1671 "cplus.met"
return((PPTREE) 0);
#line 1671 "cplus.met"

#line 1671 "cplus.met"
inside_declaration2_exit :
#line 1671 "cplus.met"

#line 1671 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1671 "cplus.met"
    _funcLevel--;
#line 1671 "cplus.met"
    return((PPTREE) -1) ;
#line 1671 "cplus.met"

#line 1671 "cplus.met"
inside_declaration2_ret :
#line 1671 "cplus.met"
    
#line 1671 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1671 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1671 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1671 "cplus.met"
    return _retValue ;
#line 1671 "cplus.met"
}
#line 1671 "cplus.met"

#line 1671 "cplus.met"
#line 1673 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1673 "cplus.met"
{
#line 1673 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1673 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1673 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1673 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1673 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1673 "cplus.met"
#line 1674 "cplus.met"
    
#line 1674 "cplus.met"
    LEX_EXIT ("",0);
#line 1674 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1674 "cplus.met"
#line 1674 "cplus.met"
#line 1674 "cplus.met"

#line 1675 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1675 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1675 "cplus.met"
return((PPTREE) 0);
#line 1675 "cplus.met"

#line 1675 "cplus.met"
inside_declaration_extension_exit :
#line 1675 "cplus.met"

#line 1675 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1675 "cplus.met"
    _funcLevel--;
#line 1675 "cplus.met"
    return((PPTREE) -1) ;
#line 1675 "cplus.met"

#line 1675 "cplus.met"
inside_declaration_extension_ret :
#line 1675 "cplus.met"
    
#line 1675 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1675 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1675 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1675 "cplus.met"
    return _retValue ;
#line 1675 "cplus.met"
}
#line 1675 "cplus.met"

#line 1675 "cplus.met"
#line 3270 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3270 "cplus.met"
{
#line 3270 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3270 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3270 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3270 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3270 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3270 "cplus.met"
#line 3271 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3271 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3271 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3271 "cplus.met"
    } else {
#line 3271 "cplus.met"
        tokenAhead = 0 ;
#line 3271 "cplus.met"
    }
#line 3271 "cplus.met"
#line 3272 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3272 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3272 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3272 "cplus.met"
    } else {
#line 3272 "cplus.met"
        tokenAhead = 0 ;
#line 3272 "cplus.met"
    }
#line 3272 "cplus.met"
#line 3272 "cplus.met"
#line 3272 "cplus.met"

#line 3273 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3273 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3273 "cplus.met"
return((PPTREE) 0);
#line 3273 "cplus.met"

#line 3273 "cplus.met"
label_beg_exit :
#line 3273 "cplus.met"

#line 3273 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3273 "cplus.met"
    _funcLevel--;
#line 3273 "cplus.met"
    return((PPTREE) -1) ;
#line 3273 "cplus.met"

#line 3273 "cplus.met"
label_beg_ret :
#line 3273 "cplus.met"
    
#line 3273 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3273 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3273 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3273 "cplus.met"
    return _retValue ;
#line 3273 "cplus.met"
}
#line 3273 "cplus.met"

#line 3273 "cplus.met"
#line 975 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 975 "cplus.met"
{
#line 975 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 975 "cplus.met"
    int _value,_nbPre = 0 ;
#line 975 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 975 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 975 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 975 "cplus.met"
#line 975 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 975 "cplus.met"
#line 975 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 975 "cplus.met"
#line 977 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 977 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 977 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 977 "cplus.met"
    } else {
#line 977 "cplus.met"
        tokenAhead = 0 ;
#line 977 "cplus.met"
    }
#line 977 "cplus.met"
#line 978 "cplus.met"
    {
#line 978 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 978 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 978 "cplus.met"
        {
#line 978 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 978 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 978 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 978 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 978 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 978 "cplus.met"
            } else {
#line 978 "cplus.met"
                tokenAhead = 0 ;
#line 978 "cplus.met"
            }
#line 978 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 978 "cplus.met"
            _ptTree0=_ptRes1;
#line 978 "cplus.met"
        }
#line 978 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 978 "cplus.met"
        retTree=_ptRes0;
#line 978 "cplus.met"
    }
#line 978 "cplus.met"
#line 979 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 979 "cplus.met"
    switch( lexEl.Value) {
#line 979 "cplus.met"
#line 982 "cplus.met"
        case AOUV : 
#line 982 "cplus.met"
            tokenAhead = 0 ;
#line 982 "cplus.met"
            CommTerm();
#line 982 "cplus.met"
#line 981 "cplus.met"
#line 981 "cplus.met"
            _addlist1 = list ;
#line 981 "cplus.met"
#line 982 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 64, cplus)) { 
#line 982 "cplus.met"
#line 983 "cplus.met"
#line 983 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 983 "cplus.met"
#line 983 "cplus.met"
                if (list){
#line 983 "cplus.met"
#line 983 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 983 "cplus.met"
                } else {
#line 983 "cplus.met"
#line 983 "cplus.met"
                    list = _addlist1 ;
#line 983 "cplus.met"
                }
#line 983 "cplus.met"
            } 
#line 983 "cplus.met"
#line 984 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 984 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 984 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 984 "cplus.met"
            } else {
#line 984 "cplus.met"
                tokenAhead = 0 ;
#line 984 "cplus.met"
            }
#line 984 "cplus.met"
#line 985 "cplus.met"
            {
#line 985 "cplus.met"
                PPTREE _ptTree0=0;
#line 985 "cplus.met"
                {
#line 985 "cplus.met"
                    PPTREE _ptTree1=0;
#line 985 "cplus.met"
                    {
#line 985 "cplus.met"
                        PPTREE _ptRes2=0;
#line 985 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 985 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 985 "cplus.met"
                        _ptTree1=_ptRes2;
#line 985 "cplus.met"
                    }
#line 985 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 985 "cplus.met"
                }
#line 985 "cplus.met"
                _retValue =_ptTree0;
#line 985 "cplus.met"
                goto linkage_specification_ret;
#line 985 "cplus.met"
            }
#line 985 "cplus.met"
#line 985 "cplus.met"
            break;
#line 985 "cplus.met"
#line 987 "cplus.met"
        default : 
#line 987 "cplus.met"
#line 987 "cplus.met"
            {
#line 987 "cplus.met"
                PPTREE _ptTree0=0;
#line 987 "cplus.met"
                {
#line 987 "cplus.met"
                    PPTREE _ptTree1=0;
#line 987 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 64, cplus))== (PPTREE) -1 ) {
#line 987 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 987 "cplus.met"
                    }
#line 987 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 987 "cplus.met"
                }
#line 987 "cplus.met"
                _retValue =_ptTree0;
#line 987 "cplus.met"
                goto linkage_specification_ret;
#line 987 "cplus.met"
            }
#line 987 "cplus.met"
            break;
#line 987 "cplus.met"
    }
#line 987 "cplus.met"
#line 987 "cplus.met"
#line 988 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 988 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 988 "cplus.met"
return((PPTREE) 0);
#line 988 "cplus.met"

#line 988 "cplus.met"
linkage_specification_exit :
#line 988 "cplus.met"

#line 988 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 988 "cplus.met"
    _funcLevel--;
#line 988 "cplus.met"
    return((PPTREE) -1) ;
#line 988 "cplus.met"

#line 988 "cplus.met"
linkage_specification_ret :
#line 988 "cplus.met"
    
#line 988 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 988 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 988 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 988 "cplus.met"
    return _retValue ;
#line 988 "cplus.met"
}
#line 988 "cplus.met"

#line 988 "cplus.met"
#line 2611 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2611 "cplus.met"
{
#line 2611 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2611 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2611 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2611 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2611 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2611 "cplus.met"
#line 2611 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2611 "cplus.met"
#line 2613 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 2613 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2613 "cplus.met"
    }
#line 2613 "cplus.met"
#line 2614 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2614 "cplus.met"
#line 2615 "cplus.met"
        {
#line 2615 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2615 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2615 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2615 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 2615 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2615 "cplus.met"
            }
#line 2615 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2615 "cplus.met"
            expTree=_ptRes0;
#line 2615 "cplus.met"
        }
#line 2615 "cplus.met"
    } 
#line 2615 "cplus.met"
#line 2616 "cplus.met"
    {
#line 2616 "cplus.met"
        _retValue = expTree ;
#line 2616 "cplus.met"
        goto logical_and_expression_ret;
#line 2616 "cplus.met"
        
#line 2616 "cplus.met"
    }
#line 2616 "cplus.met"
#line 2616 "cplus.met"
#line 2616 "cplus.met"

#line 2617 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2617 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2617 "cplus.met"
return((PPTREE) 0);
#line 2617 "cplus.met"

#line 2617 "cplus.met"
logical_and_expression_exit :
#line 2617 "cplus.met"

#line 2617 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2617 "cplus.met"
    _funcLevel--;
#line 2617 "cplus.met"
    return((PPTREE) -1) ;
#line 2617 "cplus.met"

#line 2617 "cplus.met"
logical_and_expression_ret :
#line 2617 "cplus.met"
    
#line 2617 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2617 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2617 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2617 "cplus.met"
    return _retValue ;
#line 2617 "cplus.met"
}
#line 2617 "cplus.met"

#line 2617 "cplus.met"
#line 2603 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2603 "cplus.met"
{
#line 2603 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2603 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2603 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2603 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2603 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2603 "cplus.met"
#line 2603 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2603 "cplus.met"
#line 2605 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 2605 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2605 "cplus.met"
    }
#line 2605 "cplus.met"
#line 2606 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2606 "cplus.met"
#line 2607 "cplus.met"
        {
#line 2607 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2607 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2607 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2607 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 2607 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2607 "cplus.met"
            }
#line 2607 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2607 "cplus.met"
            expTree=_ptRes0;
#line 2607 "cplus.met"
        }
#line 2607 "cplus.met"
    } 
#line 2607 "cplus.met"
#line 2608 "cplus.met"
    {
#line 2608 "cplus.met"
        _retValue = expTree ;
#line 2608 "cplus.met"
        goto logical_or_expression_ret;
#line 2608 "cplus.met"
        
#line 2608 "cplus.met"
    }
#line 2608 "cplus.met"
#line 2608 "cplus.met"
#line 2608 "cplus.met"

#line 2609 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2609 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2609 "cplus.met"
return((PPTREE) 0);
#line 2609 "cplus.met"

#line 2609 "cplus.met"
logical_or_expression_exit :
#line 2609 "cplus.met"

#line 2609 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2609 "cplus.met"
    _funcLevel--;
#line 2609 "cplus.met"
    return((PPTREE) -1) ;
#line 2609 "cplus.met"

#line 2609 "cplus.met"
logical_or_expression_ret :
#line 2609 "cplus.met"
    
#line 2609 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2609 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2609 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2609 "cplus.met"
    return _retValue ;
#line 2609 "cplus.met"
}
#line 2609 "cplus.met"

#line 2609 "cplus.met"
#line 2060 "cplus.met"
PPTREE cplus::long_type ( int error_free)
#line 2060 "cplus.met"
{
#line 2060 "cplus.met"
    int  _oldinside_long = inside_long;
#line 2060 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2060 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2060 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2060 "cplus.met"
    int _Debug = TRACE_RULE("long_type",TRACE_ENTER,(PPTREE)0);
#line 2060 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2060 "cplus.met"
#line 2060 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2060 "cplus.met"
#line 2062 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2062 "cplus.met"
    if (  !SEE_TOKEN( LONG,"long") || !(CommTerm(),1)) {
#line 2062 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(long_type_exit,"long")
#line 2062 "cplus.met"
    } else {
#line 2062 "cplus.met"
        tokenAhead = 0 ;
#line 2062 "cplus.met"
    }
#line 2062 "cplus.met"
#line 2063 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2063 "cplus.met"
    switch( lexEl.Value) {
#line 2063 "cplus.met"
#line 2064 "cplus.met"
        case FLOAT : 
#line 2064 "cplus.met"
            tokenAhead = 0 ;
#line 2064 "cplus.met"
            CommTerm();
#line 2064 "cplus.met"
#line 2065 "cplus.met"
#line 2066 "cplus.met"
            if ((inside_long) || 
#line 2066 "cplus.met"
               (inside_signed)){
#line 2066 "cplus.met"
#line 2067 "cplus.met"
                
#line 2067 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2067 "cplus.met"
                goto long_type_exit;
#line 2067 "cplus.met"
#line 2067 "cplus.met"
            } else {
#line 2067 "cplus.met"
#line 2069 "cplus.met"
                {
#line 2069 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2069 "cplus.met"
                    {
#line 2069 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2069 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2069 "cplus.met"
                        {
#line 2069 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2069 "cplus.met"
                            _ptRes2= MakeTree(TFLOAT, 0);
#line 2069 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2069 "cplus.met"
                        }
#line 2069 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2069 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2069 "cplus.met"
                    }
#line 2069 "cplus.met"
                    _retValue =_ptTree0;
#line 2069 "cplus.met"
                    goto long_type_ret;
#line 2069 "cplus.met"
                }
#line 2069 "cplus.met"
            }
#line 2069 "cplus.met"
#line 2069 "cplus.met"
            break;
#line 2069 "cplus.met"
#line 2071 "cplus.met"
        case DOUBLE : 
#line 2071 "cplus.met"
            tokenAhead = 0 ;
#line 2071 "cplus.met"
            CommTerm();
#line 2071 "cplus.met"
#line 2072 "cplus.met"
#line 2073 "cplus.met"
            if ((inside_long) || 
#line 2073 "cplus.met"
               (inside_signed)){
#line 2073 "cplus.met"
#line 2074 "cplus.met"
                
#line 2074 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2074 "cplus.met"
                goto long_type_exit;
#line 2074 "cplus.met"
#line 2074 "cplus.met"
            } else {
#line 2074 "cplus.met"
#line 2076 "cplus.met"
                {
#line 2076 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2076 "cplus.met"
                    {
#line 2076 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2076 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2076 "cplus.met"
                        {
#line 2076 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2076 "cplus.met"
                            _ptRes2= MakeTree(TDOUBLE, 0);
#line 2076 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2076 "cplus.met"
                        }
#line 2076 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2076 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2076 "cplus.met"
                    }
#line 2076 "cplus.met"
                    _retValue =_ptTree0;
#line 2076 "cplus.met"
                    goto long_type_ret;
#line 2076 "cplus.met"
                }
#line 2076 "cplus.met"
            }
#line 2076 "cplus.met"
#line 2076 "cplus.met"
            break;
#line 2076 "cplus.met"
#line 2082 "cplus.met"
        default : 
#line 2082 "cplus.met"
#line 2079 "cplus.met"
#line 2080 "cplus.met"
            {
#line 2080 "cplus.met"
                inside_long = 1 ;
#line 2080 "cplus.met"
#line 2081 "cplus.met"
#line 2082 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 128, cplus)){
#line 2082 "cplus.met"
#line 2083 "cplus.met"
                    {
#line 2083 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2083 "cplus.met"
                        {
#line 2083 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2083 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2083 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2083 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2083 "cplus.met"
                        }
#line 2083 "cplus.met"
                        _retValue =_ptTree0;
#line 2083 "cplus.met"
                        goto long_type_ret;
#line 2083 "cplus.met"
                    }
#line 2083 "cplus.met"
                } else {
#line 2083 "cplus.met"
#line 2085 "cplus.met"
                    {
#line 2085 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2085 "cplus.met"
                        {
#line 2085 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2085 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2085 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2085 "cplus.met"
                        }
#line 2085 "cplus.met"
                        _retValue =_ptTree0;
#line 2085 "cplus.met"
                        goto long_type_ret;
#line 2085 "cplus.met"
                    }
#line 2085 "cplus.met"
                }
#line 2085 "cplus.met"
#line 2085 "cplus.met"
                inside_long =  _oldinside_long;
#line 2085 "cplus.met"
            }
#line 2085 "cplus.met"
#line 2085 "cplus.met"
            break;
#line 2085 "cplus.met"
    }
#line 2085 "cplus.met"
#line 2085 "cplus.met"
#line 2088 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2088 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2088 "cplus.met"
inside_long =  _oldinside_long;
#line 2088 "cplus.met"
return((PPTREE) 0);
#line 2088 "cplus.met"

#line 2088 "cplus.met"
long_type_exit :
#line 2088 "cplus.met"

#line 2088 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_EXIT,(PPTREE)0);
#line 2088 "cplus.met"
    _funcLevel--;
#line 2088 "cplus.met"
    inside_long =  _oldinside_long;
#line 2088 "cplus.met"
    return((PPTREE) -1) ;
#line 2088 "cplus.met"

#line 2088 "cplus.met"
long_type_ret :
#line 2088 "cplus.met"
    
#line 2088 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_RETURN,_retValue);
#line 2088 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2088 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2088 "cplus.met"
    inside_long =  _oldinside_long;
#line 2088 "cplus.met"
    return _retValue ;
#line 2088 "cplus.met"
}
#line 2088 "cplus.met"

#line 2088 "cplus.met"
#line 1846 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1846 "cplus.met"
{
#line 1846 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1846 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1846 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1846 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1846 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1846 "cplus.met"
#line 1846 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1846 "cplus.met"
#line 1848 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1848 "cplus.met"
    switch( lexEl.Value) {
#line 1848 "cplus.met"
#line 1849 "cplus.met"
        case META : 
#line 1849 "cplus.met"
        case DECLARE_SERIAL : 
#line 1849 "cplus.met"
            tokenAhead = 0 ;
#line 1849 "cplus.met"
            CommTerm();
#line 1849 "cplus.met"
#line 1849 "cplus.met"
            {
#line 1849 "cplus.met"
                PPTREE _ptRes0=0;
#line 1849 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1849 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1849 "cplus.met"
                retTree=_ptRes0;
#line 1849 "cplus.met"
            }
#line 1849 "cplus.met"
            break;
#line 1849 "cplus.met"
#line 1850 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1850 "cplus.met"
            tokenAhead = 0 ;
#line 1850 "cplus.met"
            CommTerm();
#line 1850 "cplus.met"
#line 1850 "cplus.met"
            {
#line 1850 "cplus.met"
                PPTREE _ptRes0=0;
#line 1850 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1850 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1850 "cplus.met"
                retTree=_ptRes0;
#line 1850 "cplus.met"
            }
#line 1850 "cplus.met"
            break;
#line 1850 "cplus.met"
#line 1851 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1851 "cplus.met"
            tokenAhead = 0 ;
#line 1851 "cplus.met"
            CommTerm();
#line 1851 "cplus.met"
#line 1851 "cplus.met"
            {
#line 1851 "cplus.met"
                PPTREE _ptRes0=0;
#line 1851 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1851 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1851 "cplus.met"
                retTree=_ptRes0;
#line 1851 "cplus.met"
            }
#line 1851 "cplus.met"
            break;
#line 1851 "cplus.met"
#line 1852 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1852 "cplus.met"
            tokenAhead = 0 ;
#line 1852 "cplus.met"
            CommTerm();
#line 1852 "cplus.met"
#line 1852 "cplus.met"
            {
#line 1852 "cplus.met"
                PPTREE _ptRes0=0;
#line 1852 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1852 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1852 "cplus.met"
                retTree=_ptRes0;
#line 1852 "cplus.met"
            }
#line 1852 "cplus.met"
            break;
#line 1852 "cplus.met"
#line 1853 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1853 "cplus.met"
            tokenAhead = 0 ;
#line 1853 "cplus.met"
            CommTerm();
#line 1853 "cplus.met"
#line 1853 "cplus.met"
            {
#line 1853 "cplus.met"
                PPTREE _ptRes0=0;
#line 1853 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1853 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1853 "cplus.met"
                retTree=_ptRes0;
#line 1853 "cplus.met"
            }
#line 1853 "cplus.met"
            break;
#line 1853 "cplus.met"
#line 1854 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1854 "cplus.met"
            tokenAhead = 0 ;
#line 1854 "cplus.met"
            CommTerm();
#line 1854 "cplus.met"
#line 1854 "cplus.met"
            {
#line 1854 "cplus.met"
                PPTREE _ptRes0=0;
#line 1854 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1854 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1854 "cplus.met"
                retTree=_ptRes0;
#line 1854 "cplus.met"
            }
#line 1854 "cplus.met"
            break;
#line 1854 "cplus.met"
#line 1855 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1855 "cplus.met"
            tokenAhead = 0 ;
#line 1855 "cplus.met"
            CommTerm();
#line 1855 "cplus.met"
#line 1855 "cplus.met"
            {
#line 1855 "cplus.met"
                PPTREE _ptRes0=0;
#line 1855 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1855 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1855 "cplus.met"
                retTree=_ptRes0;
#line 1855 "cplus.met"
            }
#line 1855 "cplus.met"
            break;
#line 1855 "cplus.met"
#line 1856 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1856 "cplus.met"
            tokenAhead = 0 ;
#line 1856 "cplus.met"
            CommTerm();
#line 1856 "cplus.met"
#line 1856 "cplus.met"
            {
#line 1856 "cplus.met"
                PPTREE _ptRes0=0;
#line 1856 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1856 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1856 "cplus.met"
                retTree=_ptRes0;
#line 1856 "cplus.met"
            }
#line 1856 "cplus.met"
            break;
#line 1856 "cplus.met"
#line 1857 "cplus.met"
        case CATCH_UPPER : 
#line 1857 "cplus.met"
            tokenAhead = 0 ;
#line 1857 "cplus.met"
            CommTerm();
#line 1857 "cplus.met"
#line 1857 "cplus.met"
            {
#line 1857 "cplus.met"
                PPTREE _ptRes0=0;
#line 1857 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1857 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1857 "cplus.met"
                retTree=_ptRes0;
#line 1857 "cplus.met"
            }
#line 1857 "cplus.met"
            break;
#line 1857 "cplus.met"
#line 1858 "cplus.met"
        case CATCH_ALL : 
#line 1858 "cplus.met"
            tokenAhead = 0 ;
#line 1858 "cplus.met"
            CommTerm();
#line 1858 "cplus.met"
#line 1858 "cplus.met"
            {
#line 1858 "cplus.met"
                PPTREE _ptRes0=0;
#line 1858 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1858 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1858 "cplus.met"
                retTree=_ptRes0;
#line 1858 "cplus.met"
            }
#line 1858 "cplus.met"
            break;
#line 1858 "cplus.met"
#line 1859 "cplus.met"
        case AND_CATCH : 
#line 1859 "cplus.met"
            tokenAhead = 0 ;
#line 1859 "cplus.met"
            CommTerm();
#line 1859 "cplus.met"
#line 1859 "cplus.met"
            {
#line 1859 "cplus.met"
                PPTREE _ptRes0=0;
#line 1859 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1859 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1859 "cplus.met"
                retTree=_ptRes0;
#line 1859 "cplus.met"
            }
#line 1859 "cplus.met"
            break;
#line 1859 "cplus.met"
#line 1860 "cplus.met"
        default : 
#line 1860 "cplus.met"
#line 1860 "cplus.met"
            
#line 1860 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1860 "cplus.met"
            goto macro_exit;
#line 1860 "cplus.met"
            break;
#line 1860 "cplus.met"
    }
#line 1860 "cplus.met"
#line 1862 "cplus.met"
    {
#line 1862 "cplus.met"
        PPTREE _ptRes0=0;
#line 1862 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1862 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1862 "cplus.met"
        retTree=_ptRes0;
#line 1862 "cplus.met"
    }
#line 1862 "cplus.met"
#line 1863 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1863 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1863 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1863 "cplus.met"
    } else {
#line 1863 "cplus.met"
        tokenAhead = 0 ;
#line 1863 "cplus.met"
    }
#line 1863 "cplus.met"
#line 1864 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 62, cplus)){
#line 1864 "cplus.met"
#line 1865 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1865 "cplus.met"
#line 1865 "cplus.met"
    }
#line 1865 "cplus.met"
#line 1866 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1866 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1866 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1866 "cplus.met"
    } else {
#line 1866 "cplus.met"
        tokenAhead = 0 ;
#line 1866 "cplus.met"
    }
#line 1866 "cplus.met"
#line 1867 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1867 "cplus.met"
#line 1867 "cplus.met"
    }
#line 1867 "cplus.met"
#line 1869 "cplus.met"
    {
#line 1869 "cplus.met"
        _retValue = retTree ;
#line 1869 "cplus.met"
        goto macro_ret;
#line 1869 "cplus.met"
        
#line 1869 "cplus.met"
    }
#line 1869 "cplus.met"
#line 1869 "cplus.met"
#line 1869 "cplus.met"

#line 1870 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1870 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1870 "cplus.met"
return((PPTREE) 0);
#line 1870 "cplus.met"

#line 1870 "cplus.met"
macro_exit :
#line 1870 "cplus.met"

#line 1870 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1870 "cplus.met"
    _funcLevel--;
#line 1870 "cplus.met"
    return((PPTREE) -1) ;
#line 1870 "cplus.met"

#line 1870 "cplus.met"
macro_ret :
#line 1870 "cplus.met"
    
#line 1870 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1870 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1870 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1870 "cplus.met"
    return _retValue ;
#line 1870 "cplus.met"
}
#line 1870 "cplus.met"

#line 1870 "cplus.met"
#line 1872 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 1872 "cplus.met"
{
#line 1872 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1872 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1872 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1872 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 1872 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1872 "cplus.met"
#line 1872 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1872 "cplus.met"
#line 1874 "cplus.met"
#line 1875 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1875 "cplus.met"
#line 1875 "cplus.met"
        {
#line 1875 "cplus.met"
            PPTREE _ptRes0=0;
#line 1875 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1875 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1875 "cplus.met"
            retTree=_ptRes0;
#line 1875 "cplus.met"
        }
#line 1875 "cplus.met"
    } else 
#line 1875 "cplus.met"
#line 1876 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1876 "cplus.met"
#line 1876 "cplus.met"
        {
#line 1876 "cplus.met"
            PPTREE _ptRes0=0;
#line 1876 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1876 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1876 "cplus.met"
            retTree=_ptRes0;
#line 1876 "cplus.met"
        }
#line 1876 "cplus.met"
    } else 
#line 1876 "cplus.met"
#line 1877 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 1877 "cplus.met"
#line 1877 "cplus.met"
        {
#line 1877 "cplus.met"
            PPTREE _ptRes0=0;
#line 1877 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1877 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1877 "cplus.met"
            retTree=_ptRes0;
#line 1877 "cplus.met"
        }
#line 1877 "cplus.met"
    } else 
#line 1877 "cplus.met"
#line 1878 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1878 "cplus.met"
#line 1878 "cplus.met"
        {
#line 1878 "cplus.met"
            PPTREE _ptRes0=0;
#line 1878 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1878 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1878 "cplus.met"
            retTree=_ptRes0;
#line 1878 "cplus.met"
        }
#line 1878 "cplus.met"
    } else 
#line 1878 "cplus.met"
#line 1879 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1879 "cplus.met"
#line 1879 "cplus.met"
        {
#line 1879 "cplus.met"
            PPTREE _ptRes0=0;
#line 1879 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1879 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1879 "cplus.met"
            retTree=_ptRes0;
#line 1879 "cplus.met"
        }
#line 1879 "cplus.met"
    } else 
#line 1879 "cplus.met"
#line 1880 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 1880 "cplus.met"
#line 1880 "cplus.met"
        {
#line 1880 "cplus.met"
            PPTREE _ptRes0=0;
#line 1880 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1880 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1880 "cplus.met"
            retTree=_ptRes0;
#line 1880 "cplus.met"
        }
#line 1880 "cplus.met"
    } else 
#line 1880 "cplus.met"
#line 1881 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 1881 "cplus.met"
#line 1881 "cplus.met"
        {
#line 1881 "cplus.met"
            PPTREE _ptRes0=0;
#line 1881 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1881 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1881 "cplus.met"
            retTree=_ptRes0;
#line 1881 "cplus.met"
        }
#line 1881 "cplus.met"
    } else 
#line 1881 "cplus.met"
#line 1882 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 1882 "cplus.met"
#line 1882 "cplus.met"
        {
#line 1882 "cplus.met"
            PPTREE _ptRes0=0;
#line 1882 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1882 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1882 "cplus.met"
            retTree=_ptRes0;
#line 1882 "cplus.met"
        }
#line 1882 "cplus.met"
    } else 
#line 1882 "cplus.met"
#line 1883 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 1883 "cplus.met"
#line 1883 "cplus.met"
        {
#line 1883 "cplus.met"
            PPTREE _ptRes0=0;
#line 1883 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1883 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1883 "cplus.met"
            retTree=_ptRes0;
#line 1883 "cplus.met"
        }
#line 1883 "cplus.met"
    } else 
#line 1883 "cplus.met"
#line 1884 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 1884 "cplus.met"
#line 1884 "cplus.met"
        {
#line 1884 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1884 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1884 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1884 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1884 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 1884 "cplus.met"
            } else {
#line 1884 "cplus.met"
                tokenAhead = 0 ;
#line 1884 "cplus.met"
            }
#line 1884 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1884 "cplus.met"
            retTree=_ptRes0;
#line 1884 "cplus.met"
        }
#line 1884 "cplus.met"
    } else 
#line 1884 "cplus.met"
#line 1885 "cplus.met"
    if (1) {
#line 1885 "cplus.met"
#line 1885 "cplus.met"
        
#line 1885 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 1885 "cplus.met"
        goto macro_extended_exit;
#line 1885 "cplus.met"
    } else 
#line 1885 "cplus.met"
     ;
#line 1885 "cplus.met"
#line 1887 "cplus.met"
    {
#line 1887 "cplus.met"
        PPTREE _ptRes0=0;
#line 1887 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1887 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1887 "cplus.met"
        retTree=_ptRes0;
#line 1887 "cplus.met"
    }
#line 1887 "cplus.met"
#line 1888 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1888 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1888 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 1888 "cplus.met"
    } else {
#line 1888 "cplus.met"
        tokenAhead = 0 ;
#line 1888 "cplus.met"
    }
#line 1888 "cplus.met"
#line 1889 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 62, cplus)){
#line 1889 "cplus.met"
#line 1890 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1890 "cplus.met"
#line 1890 "cplus.met"
    }
#line 1890 "cplus.met"
#line 1891 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1891 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1891 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 1891 "cplus.met"
    } else {
#line 1891 "cplus.met"
        tokenAhead = 0 ;
#line 1891 "cplus.met"
    }
#line 1891 "cplus.met"
#line 1892 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1892 "cplus.met"
#line 1892 "cplus.met"
    }
#line 1892 "cplus.met"
#line 1894 "cplus.met"
    {
#line 1894 "cplus.met"
        _retValue = retTree ;
#line 1894 "cplus.met"
        goto macro_extended_ret;
#line 1894 "cplus.met"
        
#line 1894 "cplus.met"
    }
#line 1894 "cplus.met"
#line 1894 "cplus.met"
#line 1894 "cplus.met"

#line 1895 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1895 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1895 "cplus.met"
return((PPTREE) 0);
#line 1895 "cplus.met"

#line 1895 "cplus.met"
macro_extended_exit :
#line 1895 "cplus.met"

#line 1895 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 1895 "cplus.met"
    _funcLevel--;
#line 1895 "cplus.met"
    return((PPTREE) -1) ;
#line 1895 "cplus.met"

#line 1895 "cplus.met"
macro_extended_ret :
#line 1895 "cplus.met"
    
#line 1895 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 1895 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1895 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1895 "cplus.met"
    return _retValue ;
#line 1895 "cplus.met"
}
#line 1895 "cplus.met"

#line 1895 "cplus.met"
#line 750 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 750 "cplus.met"
{
#line 750 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 750 "cplus.met"
    int _value,_nbPre = 0 ;
#line 750 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 750 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 750 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 750 "cplus.met"
#line 751 "cplus.met"
    {
#line 751 "cplus.met"
        PPTREE _ptTree0=0;
#line 751 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 751 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 751 "cplus.met"
        }
#line 751 "cplus.met"
        _retValue =_ptTree0;
#line 751 "cplus.met"
        goto main_entry_ret;
#line 751 "cplus.met"
    }
#line 751 "cplus.met"
#line 751 "cplus.met"
#line 751 "cplus.met"

#line 752 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 752 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 752 "cplus.met"
return((PPTREE) 0);
#line 752 "cplus.met"

#line 752 "cplus.met"
main_entry_exit :
#line 752 "cplus.met"

#line 752 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 752 "cplus.met"
    _funcLevel--;
#line 752 "cplus.met"
    return((PPTREE) -1) ;
#line 752 "cplus.met"

#line 752 "cplus.met"
main_entry_ret :
#line 752 "cplus.met"
    
#line 752 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 752 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 752 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 752 "cplus.met"
    return _retValue ;
#line 752 "cplus.met"
}
#line 752 "cplus.met"

#line 752 "cplus.met"
#line 2153 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2153 "cplus.met"
{
#line 2153 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2153 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2153 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2153 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2153 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2153 "cplus.met"
#line 2153 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2153 "cplus.met"
#line 2155 "cplus.met"
    {
#line 2155 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2155 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2155 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 2155 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2155 "cplus.met"
        }
#line 2155 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2155 "cplus.met"
        retTree=_ptRes0;
#line 2155 "cplus.met"
    }
#line 2155 "cplus.met"
#line 2156 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2156 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2156 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2156 "cplus.met"
    } else {
#line 2156 "cplus.met"
        tokenAhead = 0 ;
#line 2156 "cplus.met"
    }
#line 2156 "cplus.met"
#line 2157 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2157 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2157 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2157 "cplus.met"
    } else {
#line 2157 "cplus.met"
        tokenAhead = 0 ;
#line 2157 "cplus.met"
    }
#line 2157 "cplus.met"
#line 2158 "cplus.met"
    {
#line 2158 "cplus.met"
        _retValue = retTree ;
#line 2158 "cplus.met"
        goto member_declarator_ret;
#line 2158 "cplus.met"
        
#line 2158 "cplus.met"
    }
#line 2158 "cplus.met"
#line 2158 "cplus.met"
#line 2158 "cplus.met"

#line 2159 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2159 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2159 "cplus.met"
return((PPTREE) 0);
#line 2159 "cplus.met"

#line 2159 "cplus.met"
member_declarator_exit :
#line 2159 "cplus.met"

#line 2159 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2159 "cplus.met"
    _funcLevel--;
#line 2159 "cplus.met"
    return((PPTREE) -1) ;
#line 2159 "cplus.met"

#line 2159 "cplus.met"
member_declarator_ret :
#line 2159 "cplus.met"
    
#line 2159 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2159 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2159 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2159 "cplus.met"
    return _retValue ;
#line 2159 "cplus.met"
}
#line 2159 "cplus.met"

#line 2159 "cplus.met"
#line 1897 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 1897 "cplus.met"
{
#line 1897 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1897 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1897 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1897 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 1897 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1897 "cplus.met"
#line 1897 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1897 "cplus.met"
#line 1897 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1897 "cplus.met"
#line 1899 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1899 "cplus.met"
    switch( lexEl.Value) {
#line 1899 "cplus.met"
#line 1900 "cplus.met"
        case META : 
#line 1900 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1900 "cplus.met"
#line 1900 "cplus.met"
            break;
#line 1900 "cplus.met"
        default :
#line 1900 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 1900 "cplus.met"
            break;
#line 1900 "cplus.met"
    }
#line 1900 "cplus.met"
#line 1902 "cplus.met"
    {
#line 1902 "cplus.met"
        PPTREE _ptRes0=0;
#line 1902 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 1902 "cplus.met"
        retTree=_ptRes0;
#line 1902 "cplus.met"
    }
#line 1902 "cplus.met"
#line 1902 "cplus.met"
    _addlist1 = list ;
#line 1902 "cplus.met"
#line 1903 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 1903 "cplus.met"
#line 1904 "cplus.met"
#line 1904 "cplus.met"
        {
#line 1904 "cplus.met"
            PPTREE _ptTree0=0;
#line 1904 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1904 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 1904 "cplus.met"
            }
#line 1904 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1904 "cplus.met"
        }
#line 1904 "cplus.met"
#line 1904 "cplus.met"
        if (list){
#line 1904 "cplus.met"
#line 1904 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1904 "cplus.met"
        } else {
#line 1904 "cplus.met"
#line 1904 "cplus.met"
            list = _addlist1 ;
#line 1904 "cplus.met"
        }
#line 1904 "cplus.met"
    } 
#line 1904 "cplus.met"
#line 1905 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 1905 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 1905 "cplus.met"
    }
#line 1905 "cplus.met"
#line 1906 "cplus.met"
    {
#line 1906 "cplus.met"
        PPTREE _ptTree0=0;
#line 1906 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 1906 "cplus.met"
        _retValue =_ptTree0;
#line 1906 "cplus.met"
        goto message_map_ret;
#line 1906 "cplus.met"
    }
#line 1906 "cplus.met"
#line 1906 "cplus.met"
#line 1906 "cplus.met"

#line 1907 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1907 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1907 "cplus.met"
return((PPTREE) 0);
#line 1907 "cplus.met"

#line 1907 "cplus.met"
message_map_exit :
#line 1907 "cplus.met"

#line 1907 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 1907 "cplus.met"
    _funcLevel--;
#line 1907 "cplus.met"
    return((PPTREE) -1) ;
#line 1907 "cplus.met"

#line 1907 "cplus.met"
message_map_ret :
#line 1907 "cplus.met"
    
#line 1907 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 1907 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1907 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1907 "cplus.met"
    return _retValue ;
#line 1907 "cplus.met"
}
#line 1907 "cplus.met"

#line 1907 "cplus.met"
#line 2692 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2692 "cplus.met"
{
#line 2692 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2692 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2692 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2692 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2692 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2692 "cplus.met"
#line 2692 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2692 "cplus.met"
#line 2694 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 2694 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2694 "cplus.met"
    }
#line 2694 "cplus.met"
#line 2695 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2695 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2695 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2695 "cplus.met"
#line 2696 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2696 "cplus.met"
        switch( lexEl.Value) {
#line 2696 "cplus.met"
#line 2697 "cplus.met"
            case ETOI : 
#line 2697 "cplus.met"
                tokenAhead = 0 ;
#line 2697 "cplus.met"
                CommTerm();
#line 2697 "cplus.met"
#line 2697 "cplus.met"
                {
#line 2697 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2697 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2697 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2697 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 2697 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2697 "cplus.met"
                    }
#line 2697 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2697 "cplus.met"
                    expTree=_ptRes0;
#line 2697 "cplus.met"
                }
#line 2697 "cplus.met"
                break;
#line 2697 "cplus.met"
#line 2698 "cplus.met"
            case META : 
#line 2698 "cplus.met"
            case SLAS : 
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
                    _ptRes0= MakeTree(DIV, 2);
#line 2698 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2698 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 2698 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
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
#line 2699 "cplus.met"
            case POURC : 
#line 2699 "cplus.met"
                tokenAhead = 0 ;
#line 2699 "cplus.met"
                CommTerm();
#line 2699 "cplus.met"
#line 2699 "cplus.met"
                {
#line 2699 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2699 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2699 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2699 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 2699 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2699 "cplus.met"
                    }
#line 2699 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2699 "cplus.met"
                    expTree=_ptRes0;
#line 2699 "cplus.met"
                }
#line 2699 "cplus.met"
                break;
#line 2699 "cplus.met"
            default :
#line 2699 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2699 "cplus.met"
                break;
#line 2699 "cplus.met"
        }
#line 2699 "cplus.met"
    } 
#line 2699 "cplus.met"
#line 2701 "cplus.met"
    {
#line 2701 "cplus.met"
        _retValue = expTree ;
#line 2701 "cplus.met"
        goto multiplicative_expression_ret;
#line 2701 "cplus.met"
        
#line 2701 "cplus.met"
    }
#line 2701 "cplus.met"
#line 2701 "cplus.met"
#line 2701 "cplus.met"

#line 2702 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2702 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2702 "cplus.met"
return((PPTREE) 0);
#line 2702 "cplus.met"

#line 2702 "cplus.met"
multiplicative_expression_exit :
#line 2702 "cplus.met"

#line 2702 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2702 "cplus.met"
    _funcLevel--;
#line 2702 "cplus.met"
    return((PPTREE) -1) ;
#line 2702 "cplus.met"

#line 2702 "cplus.met"
multiplicative_expression_ret :
#line 2702 "cplus.met"
    
#line 2702 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2702 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2702 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2702 "cplus.met"
    return _retValue ;
#line 2702 "cplus.met"
}
#line 2702 "cplus.met"

#line 2702 "cplus.met"
