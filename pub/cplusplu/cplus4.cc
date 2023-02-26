/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3303 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3303 "cplus.met"
{
#line 3303 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3303 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3303 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3303 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3303 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3303 "cplus.met"
#line 3304 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3304 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3304 "cplus.met"
    }
#line 3304 "cplus.met"
#line 3305 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3305 "cplus.met"
    switch( lexEl.Value) {
#line 3305 "cplus.met"
#line 3305 "cplus.met"
        case ETOI : 
#line 3305 "cplus.met"
#line 3305 "cplus.met"
            break;
#line 3305 "cplus.met"
#line 3307 "cplus.met"
        case META : 
#line 3307 "cplus.met"
        case IDENT : 
#line 3307 "cplus.met"
#line 3307 "cplus.met"
            break;
#line 3307 "cplus.met"
        default :
#line 3307 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3307 "cplus.met"
            break;
#line 3307 "cplus.met"
    }
#line 3307 "cplus.met"
#line 3307 "cplus.met"
#line 3308 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3308 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3308 "cplus.met"
return((PPTREE) 0);
#line 3308 "cplus.met"

#line 3308 "cplus.met"
ident_mul_exit :
#line 3308 "cplus.met"

#line 3308 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3308 "cplus.met"
    _funcLevel--;
#line 3308 "cplus.met"
    return((PPTREE) -1) ;
#line 3308 "cplus.met"

#line 3308 "cplus.met"
ident_mul_ret :
#line 3308 "cplus.met"
    
#line 3308 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3308 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3308 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3308 "cplus.met"
    return _retValue ;
#line 3308 "cplus.met"
}
#line 3308 "cplus.met"

#line 3308 "cplus.met"
#line 1438 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1438 "cplus.met"
{
#line 1438 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1438 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1438 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1438 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1438 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1438 "cplus.met"
#line 1439 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1439 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1439 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1439 "cplus.met"
    } else {
#line 1439 "cplus.met"
        tokenAhead = 0 ;
#line 1439 "cplus.met"
    }
#line 1439 "cplus.met"
#line 1440 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1440 "cplus.met"
    switch( lexEl.Value) {
#line 1440 "cplus.met"
#line 1441 "cplus.met"
        case META : 
#line 1441 "cplus.met"
        case INCLUDE_SYS : 
#line 1441 "cplus.met"
#line 1442 "cplus.met"
#line 1443 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1443 "cplus.met"
#line 1444 "cplus.met"
            {
#line 1444 "cplus.met"
                PPTREE _ptTree0=0;
#line 1444 "cplus.met"
                {
#line 1444 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1444 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1444 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1444 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1444 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1444 "cplus.met"
                    } else {
#line 1444 "cplus.met"
                        tokenAhead = 0 ;
#line 1444 "cplus.met"
                    }
#line 1444 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1444 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1444 "cplus.met"
                }
#line 1444 "cplus.met"
                _retValue =_ptTree0;
#line 1444 "cplus.met"
                goto include_dir_ret;
#line 1444 "cplus.met"
            }
#line 1444 "cplus.met"
#line 1444 "cplus.met"
            break;
#line 1444 "cplus.met"
#line 1446 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1446 "cplus.met"
#line 1447 "cplus.met"
#line 1448 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1448 "cplus.met"
#line 1449 "cplus.met"
            {
#line 1449 "cplus.met"
                PPTREE _ptTree0=0;
#line 1449 "cplus.met"
                {
#line 1449 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1449 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1449 "cplus.met"
                    {
#line 1449 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1449 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1449 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1449 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1449 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1449 "cplus.met"
                        } else {
#line 1449 "cplus.met"
                            tokenAhead = 0 ;
#line 1449 "cplus.met"
                        }
#line 1449 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1449 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1449 "cplus.met"
                    }
#line 1449 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1449 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1449 "cplus.met"
                }
#line 1449 "cplus.met"
                _retValue =_ptTree0;
#line 1449 "cplus.met"
                goto include_dir_ret;
#line 1449 "cplus.met"
            }
#line 1449 "cplus.met"
#line 1449 "cplus.met"
            break;
#line 1449 "cplus.met"
        default :
#line 1449 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1449 "cplus.met"
            break;
#line 1449 "cplus.met"
    }
#line 1449 "cplus.met"
#line 1449 "cplus.met"
#line 1451 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1451 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1451 "cplus.met"
return((PPTREE) 0);
#line 1451 "cplus.met"

#line 1451 "cplus.met"
include_dir_exit :
#line 1451 "cplus.met"

#line 1451 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1451 "cplus.met"
    _funcLevel--;
#line 1451 "cplus.met"
    return((PPTREE) -1) ;
#line 1451 "cplus.met"

#line 1451 "cplus.met"
include_dir_ret :
#line 1451 "cplus.met"
    
#line 1451 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1451 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1451 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1451 "cplus.met"
    return _retValue ;
#line 1451 "cplus.met"
}
#line 1451 "cplus.met"

#line 1451 "cplus.met"
#line 2639 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2639 "cplus.met"
{
#line 2639 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2639 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2639 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2639 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2639 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2639 "cplus.met"
#line 2639 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2639 "cplus.met"
#line 2641 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2641 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2641 "cplus.met"
    }
#line 2641 "cplus.met"
#line 2642 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2642 "cplus.met"
#line 2643 "cplus.met"
        {
#line 2643 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2643 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2643 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2643 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 2643 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
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
        goto inclusive_or_expression_ret;
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
inclusive_or_expression_exit :
#line 2645 "cplus.met"

#line 2645 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2645 "cplus.met"
    _funcLevel--;
#line 2645 "cplus.met"
    return((PPTREE) -1) ;
#line 2645 "cplus.met"

#line 2645 "cplus.met"
inclusive_or_expression_ret :
#line 2645 "cplus.met"
    
#line 2645 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
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
#line 2427 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2427 "cplus.met"
{
#line 2427 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2427 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2427 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2427 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2427 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2427 "cplus.met"
#line 2427 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2427 "cplus.met"
#line 2427 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2427 "cplus.met"
#line 2429 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2429 "cplus.met"
    switch( lexEl.Value) {
#line 2429 "cplus.met"
#line 2433 "cplus.met"
        case AOUV : 
#line 2433 "cplus.met"
            tokenAhead = 0 ;
#line 2433 "cplus.met"
            CommTerm();
#line 2433 "cplus.met"
#line 2431 "cplus.met"
#line 2431 "cplus.met"
            _addlist1 = initList ;
#line 2431 "cplus.met"
#line 2432 "cplus.met"
            do {
#line 2432 "cplus.met"
#line 2433 "cplus.met"
                {
#line 2433 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2433 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 2433 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2433 "cplus.met"
                    }
#line 2433 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2433 "cplus.met"
                }
#line 2433 "cplus.met"
#line 2433 "cplus.met"
                if (initList){
#line 2433 "cplus.met"
#line 2433 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2433 "cplus.met"
                } else {
#line 2433 "cplus.met"
#line 2433 "cplus.met"
                    initList = _addlist1 ;
#line 2433 "cplus.met"
                }
#line 2433 "cplus.met"
#line 2433 "cplus.met"
#line 2434 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2434 "cplus.met"
#line 2435 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2435 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2435 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2435 "cplus.met"
            } else {
#line 2435 "cplus.met"
                tokenAhead = 0 ;
#line 2435 "cplus.met"
            }
#line 2435 "cplus.met"
#line 2436 "cplus.met"
            {
#line 2436 "cplus.met"
                PPTREE _ptTree0=0;
#line 2436 "cplus.met"
                {
#line 2436 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2436 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2436 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2436 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2436 "cplus.met"
                }
#line 2436 "cplus.met"
                _retValue =_ptTree0;
#line 2436 "cplus.met"
                goto initializer_ret;
#line 2436 "cplus.met"
            }
#line 2436 "cplus.met"
#line 2436 "cplus.met"
            break;
#line 2436 "cplus.met"
#line 2439 "cplus.met"
        default : 
#line 2439 "cplus.met"
#line 2439 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 17, cplus)){
#line 2439 "cplus.met"
#line 2440 "cplus.met"
                {
#line 2440 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2440 "cplus.met"
                    {
#line 2440 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2440 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2440 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2440 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2440 "cplus.met"
                    }
#line 2440 "cplus.met"
                    _retValue =_ptTree0;
#line 2440 "cplus.met"
                    goto initializer_ret;
#line 2440 "cplus.met"
                }
#line 2440 "cplus.met"
            } else {
#line 2440 "cplus.met"
#line 2442 "cplus.met"
                {
#line 2442 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2442 "cplus.met"
                    {
#line 2442 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2442 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2442 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2442 "cplus.met"
                    }
#line 2442 "cplus.met"
                    _retValue =_ptTree0;
#line 2442 "cplus.met"
                    goto initializer_ret;
#line 2442 "cplus.met"
                }
#line 2442 "cplus.met"
            }
#line 2442 "cplus.met"
            break;
#line 2442 "cplus.met"
    }
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
initializer_exit :
#line 2443 "cplus.met"

#line 2443 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2443 "cplus.met"
    _funcLevel--;
#line 2443 "cplus.met"
    return((PPTREE) -1) ;
#line 2443 "cplus.met"

#line 2443 "cplus.met"
initializer_ret :
#line 2443 "cplus.met"
    
#line 2443 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
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
#line 1541 "cplus.met"
PPTREE cplus::inline_namespace ( int error_free)
#line 1541 "cplus.met"
{
#line 1541 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1541 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1541 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1541 "cplus.met"
    int _Debug = TRACE_RULE("inline_namespace",TRACE_ENTER,(PPTREE)0);
#line 1541 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1541 "cplus.met"
#line 1542 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1542 "cplus.met"
    if (  !SEE_TOKEN( INLINE,"inline") || !(CommTerm(),1)) {
#line 1542 "cplus.met"
            TOKEN_EXIT(inline_namespace_exit,"inline")
#line 1542 "cplus.met"
    } else {
#line 1542 "cplus.met"
        tokenAhead = 0 ;
#line 1542 "cplus.met"
    }
#line 1542 "cplus.met"
#line 1543 "cplus.met"
    {
#line 1543 "cplus.met"
        PPTREE _ptTree0=0;
#line 1543 "cplus.met"
        {
#line 1543 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1543 "cplus.met"
            _ptRes1= MakeTree(INLINE_NAMESPACE, 1);
#line 1543 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(name_space)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1543 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                PROG_EXIT(inline_namespace_exit,"inline_namespace")
#line 1543 "cplus.met"
            }
#line 1543 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1543 "cplus.met"
            _ptTree0=_ptRes1;
#line 1543 "cplus.met"
        }
#line 1543 "cplus.met"
        _retValue =_ptTree0;
#line 1543 "cplus.met"
        goto inline_namespace_ret;
#line 1543 "cplus.met"
    }
#line 1543 "cplus.met"
#line 1543 "cplus.met"
#line 1543 "cplus.met"

#line 1544 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1544 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1544 "cplus.met"
return((PPTREE) 0);
#line 1544 "cplus.met"

#line 1544 "cplus.met"
inline_namespace_exit :
#line 1544 "cplus.met"

#line 1544 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_EXIT,(PPTREE)0);
#line 1544 "cplus.met"
    _funcLevel--;
#line 1544 "cplus.met"
    return((PPTREE) -1) ;
#line 1544 "cplus.met"

#line 1544 "cplus.met"
inline_namespace_ret :
#line 1544 "cplus.met"
    
#line 1544 "cplus.met"
    _Debug = TRACE_RULE("inline_namespace",TRACE_RETURN,_retValue);
#line 1544 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1544 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1544 "cplus.met"
    return _retValue ;
#line 1544 "cplus.met"
}
#line 1544 "cplus.met"

#line 1544 "cplus.met"
#line 1694 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1694 "cplus.met"
{
#line 1694 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1694 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1694 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1694 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1694 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1694 "cplus.met"
#line 1694 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1694 "cplus.met"
#line 1696 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 87, cplus))) && 
#line 1696 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 65, cplus)))) && 
#line 1696 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 85, cplus)))) && 
#line 1696 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 86, cplus)))){
#line 1696 "cplus.met"
#line 1697 "cplus.met"
        
#line 1697 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1697 "cplus.met"
        goto inside_declaration_exit;
#line 1697 "cplus.met"
#line 1697 "cplus.met"
    }
#line 1697 "cplus.met"
#line 1698 "cplus.met"
    {
#line 1698 "cplus.met"
        _retValue = retTree ;
#line 1698 "cplus.met"
        goto inside_declaration_ret;
#line 1698 "cplus.met"
        
#line 1698 "cplus.met"
    }
#line 1698 "cplus.met"
#line 1698 "cplus.met"
#line 1698 "cplus.met"

#line 1699 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1699 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1699 "cplus.met"
return((PPTREE) 0);
#line 1699 "cplus.met"

#line 1699 "cplus.met"
inside_declaration_exit :
#line 1699 "cplus.met"

#line 1699 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1699 "cplus.met"
    _funcLevel--;
#line 1699 "cplus.met"
    return((PPTREE) -1) ;
#line 1699 "cplus.met"

#line 1699 "cplus.met"
inside_declaration_ret :
#line 1699 "cplus.met"
    
#line 1699 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1699 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1699 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1699 "cplus.met"
    return _retValue ;
#line 1699 "cplus.met"
}
#line 1699 "cplus.met"

#line 1699 "cplus.met"
#line 1674 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1674 "cplus.met"
{
#line 1674 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1674 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1674 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1674 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1674 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1674 "cplus.met"
#line 1674 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1674 "cplus.met"
#line 1676 "cplus.met"
    {
#line 1676 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1676 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1676 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1676 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1676 "cplus.met"
        }
#line 1676 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1676 "cplus.met"
        otherTree=_ptRes0;
#line 1676 "cplus.met"
    }
#line 1676 "cplus.met"
#line 1677 "cplus.met"
    {
#line 1677 "cplus.met"
        PPTREE _ptTree0=0;
#line 1677 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1677 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1677 "cplus.met"
        }
#line 1677 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1677 "cplus.met"
    }
#line 1677 "cplus.met"
#line 1678 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1678 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1678 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1678 "cplus.met"
    } else {
#line 1678 "cplus.met"
        tokenAhead = 0 ;
#line 1678 "cplus.met"
    }
#line 1678 "cplus.met"
#line 1679 "cplus.met"
    {
#line 1679 "cplus.met"
        PPTREE _ptTree0=0;
#line 1679 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1679 "cplus.met"
        _retValue =_ptTree0;
#line 1679 "cplus.met"
        goto inside_declaration1_ret;
#line 1679 "cplus.met"
    }
#line 1679 "cplus.met"
#line 1679 "cplus.met"
#line 1679 "cplus.met"

#line 1680 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1680 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1680 "cplus.met"
return((PPTREE) 0);
#line 1680 "cplus.met"

#line 1680 "cplus.met"
inside_declaration1_exit :
#line 1680 "cplus.met"

#line 1680 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1680 "cplus.met"
    _funcLevel--;
#line 1680 "cplus.met"
    return((PPTREE) -1) ;
#line 1680 "cplus.met"

#line 1680 "cplus.met"
inside_declaration1_ret :
#line 1680 "cplus.met"
    
#line 1680 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1680 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1680 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1680 "cplus.met"
    return _retValue ;
#line 1680 "cplus.met"
}
#line 1680 "cplus.met"

#line 1680 "cplus.met"
#line 1682 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1682 "cplus.met"
{
#line 1682 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1682 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1682 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1682 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1682 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1682 "cplus.met"
#line 1682 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1682 "cplus.met"
#line 1684 "cplus.met"
    {
#line 1684 "cplus.met"
        PPTREE _ptRes0=0;
#line 1684 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1684 "cplus.met"
        otherTree=_ptRes0;
#line 1684 "cplus.met"
    }
#line 1684 "cplus.met"
#line 1685 "cplus.met"
    {
#line 1685 "cplus.met"
        PPTREE _ptTree0=0;
#line 1685 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1685 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1685 "cplus.met"
        }
#line 1685 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1685 "cplus.met"
    }
#line 1685 "cplus.met"
#line 1686 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1686 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1686 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1686 "cplus.met"
    } else {
#line 1686 "cplus.met"
        tokenAhead = 0 ;
#line 1686 "cplus.met"
    }
#line 1686 "cplus.met"
#line 1687 "cplus.met"
    {
#line 1687 "cplus.met"
        PPTREE _ptTree0=0;
#line 1687 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1687 "cplus.met"
        _retValue =_ptTree0;
#line 1687 "cplus.met"
        goto inside_declaration2_ret;
#line 1687 "cplus.met"
    }
#line 1687 "cplus.met"
#line 1687 "cplus.met"
#line 1687 "cplus.met"

#line 1688 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1688 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1688 "cplus.met"
return((PPTREE) 0);
#line 1688 "cplus.met"

#line 1688 "cplus.met"
inside_declaration2_exit :
#line 1688 "cplus.met"

#line 1688 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1688 "cplus.met"
    _funcLevel--;
#line 1688 "cplus.met"
    return((PPTREE) -1) ;
#line 1688 "cplus.met"

#line 1688 "cplus.met"
inside_declaration2_ret :
#line 1688 "cplus.met"
    
#line 1688 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1688 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1688 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1688 "cplus.met"
    return _retValue ;
#line 1688 "cplus.met"
}
#line 1688 "cplus.met"

#line 1688 "cplus.met"
#line 1690 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1690 "cplus.met"
{
#line 1690 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1690 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1690 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1690 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1690 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1690 "cplus.met"
#line 1691 "cplus.met"
    
#line 1691 "cplus.met"
    LEX_EXIT ("",0);
#line 1691 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1691 "cplus.met"
#line 1691 "cplus.met"
#line 1691 "cplus.met"

#line 1692 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1692 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1692 "cplus.met"
return((PPTREE) 0);
#line 1692 "cplus.met"

#line 1692 "cplus.met"
inside_declaration_extension_exit :
#line 1692 "cplus.met"

#line 1692 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1692 "cplus.met"
    _funcLevel--;
#line 1692 "cplus.met"
    return((PPTREE) -1) ;
#line 1692 "cplus.met"

#line 1692 "cplus.met"
inside_declaration_extension_ret :
#line 1692 "cplus.met"
    
#line 1692 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1692 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1692 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1692 "cplus.met"
    return _retValue ;
#line 1692 "cplus.met"
}
#line 1692 "cplus.met"

#line 1692 "cplus.met"
#line 3298 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3298 "cplus.met"
{
#line 3298 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3298 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3298 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3298 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3298 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3298 "cplus.met"
#line 3299 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3299 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3299 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3299 "cplus.met"
    } else {
#line 3299 "cplus.met"
        tokenAhead = 0 ;
#line 3299 "cplus.met"
    }
#line 3299 "cplus.met"
#line 3300 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3300 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3300 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3300 "cplus.met"
    } else {
#line 3300 "cplus.met"
        tokenAhead = 0 ;
#line 3300 "cplus.met"
    }
#line 3300 "cplus.met"
#line 3300 "cplus.met"
#line 3300 "cplus.met"

#line 3301 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3301 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3301 "cplus.met"
return((PPTREE) 0);
#line 3301 "cplus.met"

#line 3301 "cplus.met"
label_beg_exit :
#line 3301 "cplus.met"

#line 3301 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3301 "cplus.met"
    _funcLevel--;
#line 3301 "cplus.met"
    return((PPTREE) -1) ;
#line 3301 "cplus.met"

#line 3301 "cplus.met"
label_beg_ret :
#line 3301 "cplus.met"
    
#line 3301 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3301 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3301 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3301 "cplus.met"
    return _retValue ;
#line 3301 "cplus.met"
}
#line 3301 "cplus.met"

#line 3301 "cplus.met"
#line 992 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 992 "cplus.met"
{
#line 992 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 992 "cplus.met"
    int _value,_nbPre = 0 ;
#line 992 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 992 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 992 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 992 "cplus.met"
#line 992 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 992 "cplus.met"
#line 992 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 992 "cplus.met"
#line 994 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 994 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 994 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
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
        _ptRes0= MakeTree(EXTERNAL, 2);
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
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
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
    switch( lexEl.Value) {
#line 996 "cplus.met"
#line 999 "cplus.met"
        case AOUV : 
#line 999 "cplus.met"
            tokenAhead = 0 ;
#line 999 "cplus.met"
            CommTerm();
#line 999 "cplus.met"
#line 998 "cplus.met"
#line 998 "cplus.met"
            _addlist1 = list ;
#line 998 "cplus.met"
#line 999 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 65, cplus)) { 
#line 999 "cplus.met"
#line 1000 "cplus.met"
#line 1000 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 1000 "cplus.met"
#line 1000 "cplus.met"
                if (list){
#line 1000 "cplus.met"
#line 1000 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1000 "cplus.met"
                } else {
#line 1000 "cplus.met"
#line 1000 "cplus.met"
                    list = _addlist1 ;
#line 1000 "cplus.met"
                }
#line 1000 "cplus.met"
            } 
#line 1000 "cplus.met"
#line 1001 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1001 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1001 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1001 "cplus.met"
            } else {
#line 1001 "cplus.met"
                tokenAhead = 0 ;
#line 1001 "cplus.met"
            }
#line 1001 "cplus.met"
#line 1002 "cplus.met"
            {
#line 1002 "cplus.met"
                PPTREE _ptTree0=0;
#line 1002 "cplus.met"
                {
#line 1002 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1002 "cplus.met"
                    {
#line 1002 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1002 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1002 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1002 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1002 "cplus.met"
                    }
#line 1002 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1002 "cplus.met"
                }
#line 1002 "cplus.met"
                _retValue =_ptTree0;
#line 1002 "cplus.met"
                goto linkage_specification_ret;
#line 1002 "cplus.met"
            }
#line 1002 "cplus.met"
#line 1002 "cplus.met"
            break;
#line 1002 "cplus.met"
#line 1004 "cplus.met"
        default : 
#line 1004 "cplus.met"
#line 1004 "cplus.met"
            {
#line 1004 "cplus.met"
                PPTREE _ptTree0=0;
#line 1004 "cplus.met"
                {
#line 1004 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1004 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1004 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1004 "cplus.met"
                    }
#line 1004 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1004 "cplus.met"
                }
#line 1004 "cplus.met"
                _retValue =_ptTree0;
#line 1004 "cplus.met"
                goto linkage_specification_ret;
#line 1004 "cplus.met"
            }
#line 1004 "cplus.met"
            break;
#line 1004 "cplus.met"
    }
#line 1004 "cplus.met"
#line 1004 "cplus.met"
#line 1005 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1005 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1005 "cplus.met"
return((PPTREE) 0);
#line 1005 "cplus.met"

#line 1005 "cplus.met"
linkage_specification_exit :
#line 1005 "cplus.met"

#line 1005 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1005 "cplus.met"
    _funcLevel--;
#line 1005 "cplus.met"
    return((PPTREE) -1) ;
#line 1005 "cplus.met"

#line 1005 "cplus.met"
linkage_specification_ret :
#line 1005 "cplus.met"
    
#line 1005 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1005 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1005 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1005 "cplus.met"
    return _retValue ;
#line 1005 "cplus.met"
}
#line 1005 "cplus.met"

#line 1005 "cplus.met"
#line 2631 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2631 "cplus.met"
{
#line 2631 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2631 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2631 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2631 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2631 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2631 "cplus.met"
#line 2631 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2631 "cplus.met"
#line 2633 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2633 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2633 "cplus.met"
    }
#line 2633 "cplus.met"
#line 2634 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2634 "cplus.met"
#line 2635 "cplus.met"
        {
#line 2635 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2635 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2635 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2635 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 2635 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
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
        goto logical_and_expression_ret;
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
logical_and_expression_exit :
#line 2637 "cplus.met"

#line 2637 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2637 "cplus.met"
    _funcLevel--;
#line 2637 "cplus.met"
    return((PPTREE) -1) ;
#line 2637 "cplus.met"

#line 2637 "cplus.met"
logical_and_expression_ret :
#line 2637 "cplus.met"
    
#line 2637 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
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
#line 2623 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2623 "cplus.met"
{
#line 2623 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2623 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2623 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2623 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2623 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2623 "cplus.met"
#line 2623 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2623 "cplus.met"
#line 2625 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 90, cplus))== (PPTREE) -1 ) {
#line 2625 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2625 "cplus.met"
    }
#line 2625 "cplus.met"
#line 2626 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2626 "cplus.met"
#line 2627 "cplus.met"
        {
#line 2627 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2627 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2627 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2627 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 90, cplus))== (PPTREE) -1 ) {
#line 2627 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2627 "cplus.met"
            }
#line 2627 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2627 "cplus.met"
            expTree=_ptRes0;
#line 2627 "cplus.met"
        }
#line 2627 "cplus.met"
    } 
#line 2627 "cplus.met"
#line 2628 "cplus.met"
    {
#line 2628 "cplus.met"
        _retValue = expTree ;
#line 2628 "cplus.met"
        goto logical_or_expression_ret;
#line 2628 "cplus.met"
        
#line 2628 "cplus.met"
    }
#line 2628 "cplus.met"
#line 2628 "cplus.met"
#line 2628 "cplus.met"

#line 2629 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2629 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2629 "cplus.met"
return((PPTREE) 0);
#line 2629 "cplus.met"

#line 2629 "cplus.met"
logical_or_expression_exit :
#line 2629 "cplus.met"

#line 2629 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2629 "cplus.met"
    _funcLevel--;
#line 2629 "cplus.met"
    return((PPTREE) -1) ;
#line 2629 "cplus.met"

#line 2629 "cplus.met"
logical_or_expression_ret :
#line 2629 "cplus.met"
    
#line 2629 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2629 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2629 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2629 "cplus.met"
    return _retValue ;
#line 2629 "cplus.met"
}
#line 2629 "cplus.met"

#line 2629 "cplus.met"
#line 2081 "cplus.met"
PPTREE cplus::long_type ( int error_free)
#line 2081 "cplus.met"
{
#line 2081 "cplus.met"
    int  _oldinside_long = inside_long;
#line 2081 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2081 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2081 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2081 "cplus.met"
    int _Debug = TRACE_RULE("long_type",TRACE_ENTER,(PPTREE)0);
#line 2081 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2081 "cplus.met"
#line 2081 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2081 "cplus.met"
#line 2083 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2083 "cplus.met"
    if (  !SEE_TOKEN( LONG,"long") || !(CommTerm(),1)) {
#line 2083 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(long_type_exit,"long")
#line 2083 "cplus.met"
    } else {
#line 2083 "cplus.met"
        tokenAhead = 0 ;
#line 2083 "cplus.met"
    }
#line 2083 "cplus.met"
#line 2084 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2084 "cplus.met"
    switch( lexEl.Value) {
#line 2084 "cplus.met"
#line 2085 "cplus.met"
        case FLOAT : 
#line 2085 "cplus.met"
            tokenAhead = 0 ;
#line 2085 "cplus.met"
            CommTerm();
#line 2085 "cplus.met"
#line 2086 "cplus.met"
#line 2087 "cplus.met"
            if ((inside_long) || 
#line 2087 "cplus.met"
               (inside_signed)){
#line 2087 "cplus.met"
#line 2088 "cplus.met"
                
#line 2088 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2088 "cplus.met"
                goto long_type_exit;
#line 2088 "cplus.met"
#line 2088 "cplus.met"
            } else {
#line 2088 "cplus.met"
#line 2090 "cplus.met"
                {
#line 2090 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2090 "cplus.met"
                    {
#line 2090 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2090 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2090 "cplus.met"
                        {
#line 2090 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2090 "cplus.met"
                            _ptRes2= MakeTree(TFLOAT, 0);
#line 2090 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2090 "cplus.met"
                        }
#line 2090 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2090 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2090 "cplus.met"
                    }
#line 2090 "cplus.met"
                    _retValue =_ptTree0;
#line 2090 "cplus.met"
                    goto long_type_ret;
#line 2090 "cplus.met"
                }
#line 2090 "cplus.met"
            }
#line 2090 "cplus.met"
#line 2090 "cplus.met"
            break;
#line 2090 "cplus.met"
#line 2092 "cplus.met"
        case DOUBLE : 
#line 2092 "cplus.met"
            tokenAhead = 0 ;
#line 2092 "cplus.met"
            CommTerm();
#line 2092 "cplus.met"
#line 2093 "cplus.met"
#line 2094 "cplus.met"
            if ((inside_long) || 
#line 2094 "cplus.met"
               (inside_signed)){
#line 2094 "cplus.met"
#line 2095 "cplus.met"
                
#line 2095 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2095 "cplus.met"
                goto long_type_exit;
#line 2095 "cplus.met"
#line 2095 "cplus.met"
            } else {
#line 2095 "cplus.met"
#line 2097 "cplus.met"
                {
#line 2097 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2097 "cplus.met"
                    {
#line 2097 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2097 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2097 "cplus.met"
                        {
#line 2097 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2097 "cplus.met"
                            _ptRes2= MakeTree(TDOUBLE, 0);
#line 2097 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2097 "cplus.met"
                        }
#line 2097 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2097 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2097 "cplus.met"
                    }
#line 2097 "cplus.met"
                    _retValue =_ptTree0;
#line 2097 "cplus.met"
                    goto long_type_ret;
#line 2097 "cplus.met"
                }
#line 2097 "cplus.met"
            }
#line 2097 "cplus.met"
#line 2097 "cplus.met"
            break;
#line 2097 "cplus.met"
#line 2103 "cplus.met"
        default : 
#line 2103 "cplus.met"
#line 2100 "cplus.met"
#line 2101 "cplus.met"
            {
#line 2101 "cplus.met"
                inside_long = 1 ;
#line 2101 "cplus.met"
#line 2102 "cplus.met"
#line 2103 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 129, cplus)){
#line 2103 "cplus.met"
#line 2104 "cplus.met"
                    {
#line 2104 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2104 "cplus.met"
                        {
#line 2104 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2104 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2104 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2104 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2104 "cplus.met"
                        }
#line 2104 "cplus.met"
                        _retValue =_ptTree0;
#line 2104 "cplus.met"
                        goto long_type_ret;
#line 2104 "cplus.met"
                    }
#line 2104 "cplus.met"
                } else {
#line 2104 "cplus.met"
#line 2106 "cplus.met"
                    {
#line 2106 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2106 "cplus.met"
                        {
#line 2106 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2106 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2106 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2106 "cplus.met"
                        }
#line 2106 "cplus.met"
                        _retValue =_ptTree0;
#line 2106 "cplus.met"
                        goto long_type_ret;
#line 2106 "cplus.met"
                    }
#line 2106 "cplus.met"
                }
#line 2106 "cplus.met"
#line 2106 "cplus.met"
                inside_long =  _oldinside_long;
#line 2106 "cplus.met"
            }
#line 2106 "cplus.met"
#line 2106 "cplus.met"
            break;
#line 2106 "cplus.met"
    }
#line 2106 "cplus.met"
#line 2106 "cplus.met"
#line 2109 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2109 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2109 "cplus.met"
inside_long =  _oldinside_long;
#line 2109 "cplus.met"
return((PPTREE) 0);
#line 2109 "cplus.met"

#line 2109 "cplus.met"
long_type_exit :
#line 2109 "cplus.met"

#line 2109 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_EXIT,(PPTREE)0);
#line 2109 "cplus.met"
    _funcLevel--;
#line 2109 "cplus.met"
    inside_long =  _oldinside_long;
#line 2109 "cplus.met"
    return((PPTREE) -1) ;
#line 2109 "cplus.met"

#line 2109 "cplus.met"
long_type_ret :
#line 2109 "cplus.met"
    
#line 2109 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_RETURN,_retValue);
#line 2109 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2109 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2109 "cplus.met"
    inside_long =  _oldinside_long;
#line 2109 "cplus.met"
    return _retValue ;
#line 2109 "cplus.met"
}
#line 2109 "cplus.met"

#line 2109 "cplus.met"
#line 1867 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1867 "cplus.met"
{
#line 1867 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1867 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1867 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1867 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1867 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1867 "cplus.met"
#line 1867 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1867 "cplus.met"
#line 1869 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1869 "cplus.met"
    switch( lexEl.Value) {
#line 1869 "cplus.met"
#line 1870 "cplus.met"
        case META : 
#line 1870 "cplus.met"
        case DECLARE_SERIAL : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1870 "cplus.met"
                retTree=_ptRes0;
#line 1870 "cplus.met"
            }
#line 1870 "cplus.met"
            break;
#line 1870 "cplus.met"
#line 1871 "cplus.met"
        case DECLARE_DYNAMIC : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1871 "cplus.met"
                retTree=_ptRes0;
#line 1871 "cplus.met"
            }
#line 1871 "cplus.met"
            break;
#line 1871 "cplus.met"
#line 1872 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1872 "cplus.met"
                retTree=_ptRes0;
#line 1872 "cplus.met"
            }
#line 1872 "cplus.met"
            break;
#line 1872 "cplus.met"
#line 1873 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1873 "cplus.met"
                retTree=_ptRes0;
#line 1873 "cplus.met"
            }
#line 1873 "cplus.met"
            break;
#line 1873 "cplus.met"
#line 1874 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1874 "cplus.met"
                retTree=_ptRes0;
#line 1874 "cplus.met"
            }
#line 1874 "cplus.met"
            break;
#line 1874 "cplus.met"
#line 1875 "cplus.met"
        case IMPLEMENT_SERIAL : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1875 "cplus.met"
                retTree=_ptRes0;
#line 1875 "cplus.met"
            }
#line 1875 "cplus.met"
            break;
#line 1875 "cplus.met"
#line 1876 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1876 "cplus.met"
                retTree=_ptRes0;
#line 1876 "cplus.met"
            }
#line 1876 "cplus.met"
            break;
#line 1876 "cplus.met"
#line 1877 "cplus.met"
        case END_MESSAGE_MAP : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1877 "cplus.met"
                retTree=_ptRes0;
#line 1877 "cplus.met"
            }
#line 1877 "cplus.met"
            break;
#line 1877 "cplus.met"
#line 1878 "cplus.met"
        case CATCH_UPPER : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1878 "cplus.met"
                retTree=_ptRes0;
#line 1878 "cplus.met"
            }
#line 1878 "cplus.met"
            break;
#line 1878 "cplus.met"
#line 1879 "cplus.met"
        case CATCH_ALL : 
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
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1879 "cplus.met"
                retTree=_ptRes0;
#line 1879 "cplus.met"
            }
#line 1879 "cplus.met"
            break;
#line 1879 "cplus.met"
#line 1880 "cplus.met"
        case AND_CATCH : 
#line 1880 "cplus.met"
            tokenAhead = 0 ;
#line 1880 "cplus.met"
            CommTerm();
#line 1880 "cplus.met"
#line 1880 "cplus.met"
            {
#line 1880 "cplus.met"
                PPTREE _ptRes0=0;
#line 1880 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1880 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1880 "cplus.met"
                retTree=_ptRes0;
#line 1880 "cplus.met"
            }
#line 1880 "cplus.met"
            break;
#line 1880 "cplus.met"
#line 1881 "cplus.met"
        default : 
#line 1881 "cplus.met"
#line 1881 "cplus.met"
            
#line 1881 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1881 "cplus.met"
            goto macro_exit;
#line 1881 "cplus.met"
            break;
#line 1881 "cplus.met"
    }
#line 1881 "cplus.met"
#line 1883 "cplus.met"
    {
#line 1883 "cplus.met"
        PPTREE _ptRes0=0;
#line 1883 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1883 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1883 "cplus.met"
        retTree=_ptRes0;
#line 1883 "cplus.met"
    }
#line 1883 "cplus.met"
#line 1884 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1884 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1884 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1884 "cplus.met"
    } else {
#line 1884 "cplus.met"
        tokenAhead = 0 ;
#line 1884 "cplus.met"
    }
#line 1884 "cplus.met"
#line 1885 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 63, cplus)){
#line 1885 "cplus.met"
#line 1886 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1886 "cplus.met"
#line 1886 "cplus.met"
    }
#line 1886 "cplus.met"
#line 1887 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1887 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1887 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1887 "cplus.met"
    } else {
#line 1887 "cplus.met"
        tokenAhead = 0 ;
#line 1887 "cplus.met"
    }
#line 1887 "cplus.met"
#line 1888 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1888 "cplus.met"
#line 1888 "cplus.met"
    }
#line 1888 "cplus.met"
#line 1890 "cplus.met"
    {
#line 1890 "cplus.met"
        _retValue = retTree ;
#line 1890 "cplus.met"
        goto macro_ret;
#line 1890 "cplus.met"
        
#line 1890 "cplus.met"
    }
#line 1890 "cplus.met"
#line 1890 "cplus.met"
#line 1890 "cplus.met"

#line 1891 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1891 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1891 "cplus.met"
return((PPTREE) 0);
#line 1891 "cplus.met"

#line 1891 "cplus.met"
macro_exit :
#line 1891 "cplus.met"

#line 1891 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1891 "cplus.met"
    _funcLevel--;
#line 1891 "cplus.met"
    return((PPTREE) -1) ;
#line 1891 "cplus.met"

#line 1891 "cplus.met"
macro_ret :
#line 1891 "cplus.met"
    
#line 1891 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1891 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1891 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1891 "cplus.met"
    return _retValue ;
#line 1891 "cplus.met"
}
#line 1891 "cplus.met"

#line 1891 "cplus.met"
#line 1893 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 1893 "cplus.met"
{
#line 1893 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1893 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1893 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1893 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 1893 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1893 "cplus.met"
#line 1893 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1893 "cplus.met"
#line 1895 "cplus.met"
#line 1896 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1896 "cplus.met"
#line 1896 "cplus.met"
        {
#line 1896 "cplus.met"
            PPTREE _ptRes0=0;
#line 1896 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1896 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1896 "cplus.met"
            retTree=_ptRes0;
#line 1896 "cplus.met"
        }
#line 1896 "cplus.met"
    } else 
#line 1896 "cplus.met"
#line 1897 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1897 "cplus.met"
#line 1897 "cplus.met"
        {
#line 1897 "cplus.met"
            PPTREE _ptRes0=0;
#line 1897 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1897 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1897 "cplus.met"
            retTree=_ptRes0;
#line 1897 "cplus.met"
        }
#line 1897 "cplus.met"
    } else 
#line 1897 "cplus.met"
#line 1898 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 1898 "cplus.met"
#line 1898 "cplus.met"
        {
#line 1898 "cplus.met"
            PPTREE _ptRes0=0;
#line 1898 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1898 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1898 "cplus.met"
            retTree=_ptRes0;
#line 1898 "cplus.met"
        }
#line 1898 "cplus.met"
    } else 
#line 1898 "cplus.met"
#line 1899 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1899 "cplus.met"
#line 1899 "cplus.met"
        {
#line 1899 "cplus.met"
            PPTREE _ptRes0=0;
#line 1899 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1899 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1899 "cplus.met"
            retTree=_ptRes0;
#line 1899 "cplus.met"
        }
#line 1899 "cplus.met"
    } else 
#line 1899 "cplus.met"
#line 1900 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1900 "cplus.met"
#line 1900 "cplus.met"
        {
#line 1900 "cplus.met"
            PPTREE _ptRes0=0;
#line 1900 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1900 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1900 "cplus.met"
            retTree=_ptRes0;
#line 1900 "cplus.met"
        }
#line 1900 "cplus.met"
    } else 
#line 1900 "cplus.met"
#line 1901 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 1901 "cplus.met"
#line 1901 "cplus.met"
        {
#line 1901 "cplus.met"
            PPTREE _ptRes0=0;
#line 1901 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1901 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1901 "cplus.met"
            retTree=_ptRes0;
#line 1901 "cplus.met"
        }
#line 1901 "cplus.met"
    } else 
#line 1901 "cplus.met"
#line 1902 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 1902 "cplus.met"
#line 1902 "cplus.met"
        {
#line 1902 "cplus.met"
            PPTREE _ptRes0=0;
#line 1902 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1902 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1902 "cplus.met"
            retTree=_ptRes0;
#line 1902 "cplus.met"
        }
#line 1902 "cplus.met"
    } else 
#line 1902 "cplus.met"
#line 1903 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 1903 "cplus.met"
#line 1903 "cplus.met"
        {
#line 1903 "cplus.met"
            PPTREE _ptRes0=0;
#line 1903 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1903 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1903 "cplus.met"
            retTree=_ptRes0;
#line 1903 "cplus.met"
        }
#line 1903 "cplus.met"
    } else 
#line 1903 "cplus.met"
#line 1904 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 1904 "cplus.met"
#line 1904 "cplus.met"
        {
#line 1904 "cplus.met"
            PPTREE _ptRes0=0;
#line 1904 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1904 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1904 "cplus.met"
            retTree=_ptRes0;
#line 1904 "cplus.met"
        }
#line 1904 "cplus.met"
    } else 
#line 1904 "cplus.met"
#line 1905 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 1905 "cplus.met"
#line 1905 "cplus.met"
        {
#line 1905 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1905 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1905 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1905 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1905 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 1905 "cplus.met"
            } else {
#line 1905 "cplus.met"
                tokenAhead = 0 ;
#line 1905 "cplus.met"
            }
#line 1905 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1905 "cplus.met"
            retTree=_ptRes0;
#line 1905 "cplus.met"
        }
#line 1905 "cplus.met"
    } else 
#line 1905 "cplus.met"
#line 1906 "cplus.met"
    if (1) {
#line 1906 "cplus.met"
#line 1906 "cplus.met"
        
#line 1906 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 1906 "cplus.met"
        goto macro_extended_exit;
#line 1906 "cplus.met"
    } else 
#line 1906 "cplus.met"
     ;
#line 1906 "cplus.met"
#line 1908 "cplus.met"
    {
#line 1908 "cplus.met"
        PPTREE _ptRes0=0;
#line 1908 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1908 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1908 "cplus.met"
        retTree=_ptRes0;
#line 1908 "cplus.met"
    }
#line 1908 "cplus.met"
#line 1909 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1909 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1909 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 1909 "cplus.met"
    } else {
#line 1909 "cplus.met"
        tokenAhead = 0 ;
#line 1909 "cplus.met"
    }
#line 1909 "cplus.met"
#line 1910 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 63, cplus)){
#line 1910 "cplus.met"
#line 1911 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1911 "cplus.met"
#line 1911 "cplus.met"
    }
#line 1911 "cplus.met"
#line 1912 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1912 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1912 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 1912 "cplus.met"
    } else {
#line 1912 "cplus.met"
        tokenAhead = 0 ;
#line 1912 "cplus.met"
    }
#line 1912 "cplus.met"
#line 1913 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1913 "cplus.met"
#line 1913 "cplus.met"
    }
#line 1913 "cplus.met"
#line 1915 "cplus.met"
    {
#line 1915 "cplus.met"
        _retValue = retTree ;
#line 1915 "cplus.met"
        goto macro_extended_ret;
#line 1915 "cplus.met"
        
#line 1915 "cplus.met"
    }
#line 1915 "cplus.met"
#line 1915 "cplus.met"
#line 1915 "cplus.met"

#line 1916 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1916 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1916 "cplus.met"
return((PPTREE) 0);
#line 1916 "cplus.met"

#line 1916 "cplus.met"
macro_extended_exit :
#line 1916 "cplus.met"

#line 1916 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 1916 "cplus.met"
    _funcLevel--;
#line 1916 "cplus.met"
    return((PPTREE) -1) ;
#line 1916 "cplus.met"

#line 1916 "cplus.met"
macro_extended_ret :
#line 1916 "cplus.met"
    
#line 1916 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 1916 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1916 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1916 "cplus.met"
    return _retValue ;
#line 1916 "cplus.met"
}
#line 1916 "cplus.met"

#line 1916 "cplus.met"
#line 767 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 767 "cplus.met"
{
#line 767 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 767 "cplus.met"
    int _value,_nbPre = 0 ;
#line 767 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 767 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 767 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 767 "cplus.met"
#line 768 "cplus.met"
    {
#line 768 "cplus.met"
        PPTREE _ptTree0=0;
#line 768 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 114, cplus))== (PPTREE) -1 ) {
#line 768 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 768 "cplus.met"
        }
#line 768 "cplus.met"
        _retValue =_ptTree0;
#line 768 "cplus.met"
        goto main_entry_ret;
#line 768 "cplus.met"
    }
#line 768 "cplus.met"
#line 768 "cplus.met"
#line 768 "cplus.met"

#line 769 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 769 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 769 "cplus.met"
return((PPTREE) 0);
#line 769 "cplus.met"

#line 769 "cplus.met"
main_entry_exit :
#line 769 "cplus.met"

#line 769 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 769 "cplus.met"
    _funcLevel--;
#line 769 "cplus.met"
    return((PPTREE) -1) ;
#line 769 "cplus.met"

#line 769 "cplus.met"
main_entry_ret :
#line 769 "cplus.met"
    
#line 769 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 769 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 769 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 769 "cplus.met"
    return _retValue ;
#line 769 "cplus.met"
}
#line 769 "cplus.met"

#line 769 "cplus.met"
#line 2173 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2173 "cplus.met"
{
#line 2173 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2173 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2173 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2173 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2173 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2173 "cplus.met"
#line 2173 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2173 "cplus.met"
#line 2175 "cplus.met"
    {
#line 2175 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2175 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2175 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2175 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2175 "cplus.met"
        }
#line 2175 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2175 "cplus.met"
        retTree=_ptRes0;
#line 2175 "cplus.met"
    }
#line 2175 "cplus.met"
#line 2176 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2176 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2176 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2176 "cplus.met"
    } else {
#line 2176 "cplus.met"
        tokenAhead = 0 ;
#line 2176 "cplus.met"
    }
#line 2176 "cplus.met"
#line 2177 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2177 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2177 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2177 "cplus.met"
    } else {
#line 2177 "cplus.met"
        tokenAhead = 0 ;
#line 2177 "cplus.met"
    }
#line 2177 "cplus.met"
#line 2178 "cplus.met"
    {
#line 2178 "cplus.met"
        _retValue = retTree ;
#line 2178 "cplus.met"
        goto member_declarator_ret;
#line 2178 "cplus.met"
        
#line 2178 "cplus.met"
    }
#line 2178 "cplus.met"
#line 2178 "cplus.met"
#line 2178 "cplus.met"

#line 2179 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2179 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2179 "cplus.met"
return((PPTREE) 0);
#line 2179 "cplus.met"

#line 2179 "cplus.met"
member_declarator_exit :
#line 2179 "cplus.met"

#line 2179 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2179 "cplus.met"
    _funcLevel--;
#line 2179 "cplus.met"
    return((PPTREE) -1) ;
#line 2179 "cplus.met"

#line 2179 "cplus.met"
member_declarator_ret :
#line 2179 "cplus.met"
    
#line 2179 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2179 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2179 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2179 "cplus.met"
    return _retValue ;
#line 2179 "cplus.met"
}
#line 2179 "cplus.met"

#line 2179 "cplus.met"
#line 1918 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 1918 "cplus.met"
{
#line 1918 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1918 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1918 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1918 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 1918 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1918 "cplus.met"
#line 1918 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1918 "cplus.met"
#line 1918 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1918 "cplus.met"
#line 1920 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1920 "cplus.met"
    switch( lexEl.Value) {
#line 1920 "cplus.met"
#line 1921 "cplus.met"
        case META : 
#line 1921 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1921 "cplus.met"
#line 1921 "cplus.met"
            break;
#line 1921 "cplus.met"
        default :
#line 1921 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 1921 "cplus.met"
            break;
#line 1921 "cplus.met"
    }
#line 1921 "cplus.met"
#line 1923 "cplus.met"
    {
#line 1923 "cplus.met"
        PPTREE _ptRes0=0;
#line 1923 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 1923 "cplus.met"
        retTree=_ptRes0;
#line 1923 "cplus.met"
    }
#line 1923 "cplus.met"
#line 1923 "cplus.met"
    _addlist1 = list ;
#line 1923 "cplus.met"
#line 1924 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 1924 "cplus.met"
#line 1925 "cplus.met"
#line 1925 "cplus.met"
        {
#line 1925 "cplus.met"
            PPTREE _ptTree0=0;
#line 1925 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 1925 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 1925 "cplus.met"
            }
#line 1925 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1925 "cplus.met"
        }
#line 1925 "cplus.met"
#line 1925 "cplus.met"
        if (list){
#line 1925 "cplus.met"
#line 1925 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1925 "cplus.met"
        } else {
#line 1925 "cplus.met"
#line 1925 "cplus.met"
            list = _addlist1 ;
#line 1925 "cplus.met"
        }
#line 1925 "cplus.met"
    } 
#line 1925 "cplus.met"
#line 1926 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1926 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 1926 "cplus.met"
    }
#line 1926 "cplus.met"
#line 1927 "cplus.met"
    {
#line 1927 "cplus.met"
        PPTREE _ptTree0=0;
#line 1927 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 1927 "cplus.met"
        _retValue =_ptTree0;
#line 1927 "cplus.met"
        goto message_map_ret;
#line 1927 "cplus.met"
    }
#line 1927 "cplus.met"
#line 1927 "cplus.met"
#line 1927 "cplus.met"

#line 1928 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1928 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1928 "cplus.met"
return((PPTREE) 0);
#line 1928 "cplus.met"

#line 1928 "cplus.met"
message_map_exit :
#line 1928 "cplus.met"

#line 1928 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 1928 "cplus.met"
    _funcLevel--;
#line 1928 "cplus.met"
    return((PPTREE) -1) ;
#line 1928 "cplus.met"

#line 1928 "cplus.met"
message_map_ret :
#line 1928 "cplus.met"
    
#line 1928 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 1928 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1928 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1928 "cplus.met"
    return _retValue ;
#line 1928 "cplus.met"
}
#line 1928 "cplus.met"

#line 1928 "cplus.met"
#line 2712 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2712 "cplus.met"
{
#line 2712 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2712 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2712 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2712 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2712 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2712 "cplus.met"
#line 2712 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2712 "cplus.met"
#line 2714 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2714 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2714 "cplus.met"
    }
#line 2714 "cplus.met"
#line 2715 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2715 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2715 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2715 "cplus.met"
#line 2716 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2716 "cplus.met"
        switch( lexEl.Value) {
#line 2716 "cplus.met"
#line 2717 "cplus.met"
            case ETOI : 
#line 2717 "cplus.met"
                tokenAhead = 0 ;
#line 2717 "cplus.met"
                CommTerm();
#line 2717 "cplus.met"
#line 2717 "cplus.met"
                {
#line 2717 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2717 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2717 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2717 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2717 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2717 "cplus.met"
                    }
#line 2717 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2717 "cplus.met"
                    expTree=_ptRes0;
#line 2717 "cplus.met"
                }
#line 2717 "cplus.met"
                break;
#line 2717 "cplus.met"
#line 2718 "cplus.met"
            case META : 
#line 2718 "cplus.met"
            case SLAS : 
#line 2718 "cplus.met"
                tokenAhead = 0 ;
#line 2718 "cplus.met"
                CommTerm();
#line 2718 "cplus.met"
#line 2718 "cplus.met"
                {
#line 2718 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2718 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 2718 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2718 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2718 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2718 "cplus.met"
                    }
#line 2718 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2718 "cplus.met"
                    expTree=_ptRes0;
#line 2718 "cplus.met"
                }
#line 2718 "cplus.met"
                break;
#line 2718 "cplus.met"
#line 2719 "cplus.met"
            case POURC : 
#line 2719 "cplus.met"
                tokenAhead = 0 ;
#line 2719 "cplus.met"
                CommTerm();
#line 2719 "cplus.met"
#line 2719 "cplus.met"
                {
#line 2719 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2719 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2719 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2719 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 2719 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2719 "cplus.met"
                    }
#line 2719 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2719 "cplus.met"
                    expTree=_ptRes0;
#line 2719 "cplus.met"
                }
#line 2719 "cplus.met"
                break;
#line 2719 "cplus.met"
            default :
#line 2719 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2719 "cplus.met"
                break;
#line 2719 "cplus.met"
        }
#line 2719 "cplus.met"
    } 
#line 2719 "cplus.met"
#line 2721 "cplus.met"
    {
#line 2721 "cplus.met"
        _retValue = expTree ;
#line 2721 "cplus.met"
        goto multiplicative_expression_ret;
#line 2721 "cplus.met"
        
#line 2721 "cplus.met"
    }
#line 2721 "cplus.met"
#line 2721 "cplus.met"
#line 2721 "cplus.met"

#line 2722 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2722 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2722 "cplus.met"
return((PPTREE) 0);
#line 2722 "cplus.met"

#line 2722 "cplus.met"
multiplicative_expression_exit :
#line 2722 "cplus.met"

#line 2722 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2722 "cplus.met"
    _funcLevel--;
#line 2722 "cplus.met"
    return((PPTREE) -1) ;
#line 2722 "cplus.met"

#line 2722 "cplus.met"
multiplicative_expression_ret :
#line 2722 "cplus.met"
    
#line 2722 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2722 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2722 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2722 "cplus.met"
    return _retValue ;
#line 2722 "cplus.met"
}
#line 2722 "cplus.met"

#line 2722 "cplus.met"
