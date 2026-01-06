/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2336 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2336 "cplus.met"
{
#line 2336 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2336 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2336 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2336 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2336 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2336 "cplus.met"
#line 2336 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2336 "cplus.met"
#line 2338 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2338 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2338 "cplus.met"
#line 2339 "cplus.met"
        
#line 2339 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2339 "cplus.met"
        goto declarator_follow_exit;
#line 2339 "cplus.met"
#line 2339 "cplus.met"
    }
#line 2339 "cplus.met"
#line 2340 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2340 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2340 "cplus.met"
#line 2341 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2341 "cplus.met"
        switch( lexEl.Value) {
#line 2341 "cplus.met"
#line 2344 "cplus.met"
            case COUV : 
#line 2344 "cplus.met"
                tokenAhead = 0 ;
#line 2344 "cplus.met"
                CommTerm();
#line 2344 "cplus.met"
#line 2343 "cplus.met"
#line 2344 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 2344 "cplus.met"
#line 2345 "cplus.met"
                    {
#line 2345 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2345 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2345 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2345 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2345 "cplus.met"
                        retTree=_ptRes0;
#line 2345 "cplus.met"
                    }
#line 2345 "cplus.met"
                } else {
#line 2345 "cplus.met"
#line 2347 "cplus.met"
                    {
#line 2347 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2347 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2347 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2347 "cplus.met"
                        retTree=_ptRes0;
#line 2347 "cplus.met"
                    }
#line 2347 "cplus.met"
                }
#line 2347 "cplus.met"
#line 2348 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2348 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2348 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2348 "cplus.met"
                } else {
#line 2348 "cplus.met"
                    tokenAhead = 0 ;
#line 2348 "cplus.met"
                }
#line 2348 "cplus.met"
#line 2348 "cplus.met"
                break;
#line 2348 "cplus.met"
#line 2355 "cplus.met"
            case POUV : 
#line 2355 "cplus.met"
#line 2351 "cplus.met"
#line 2354 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 15, cplus)){
#line 2354 "cplus.met"
#line 2356 "cplus.met"
#line 2357 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2357 "cplus.met"
#line 2358 "cplus.met"
                    {
#line 2358 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2358 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2358 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2358 "cplus.met"
                        }
#line 2358 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2358 "cplus.met"
                    }
#line 2358 "cplus.met"
#line 2359 "cplus.met"
                    retTree = valTree ;
#line 2359 "cplus.met"
#line 2359 "cplus.met"
#line 2359 "cplus.met"
                } else {
#line 2359 "cplus.met"
#line 2362 "cplus.met"
                    {
#line 2362 "cplus.met"
                        _retValue = retTree ;
#line 2362 "cplus.met"
                        goto declarator_follow_ret;
#line 2362 "cplus.met"
                        
#line 2362 "cplus.met"
                    }
#line 2362 "cplus.met"
                }
#line 2362 "cplus.met"
#line 2362 "cplus.met"
                break;
#line 2362 "cplus.met"
            default :
#line 2362 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2362 "cplus.met"
                break;
#line 2362 "cplus.met"
        }
#line 2362 "cplus.met"
    } 
#line 2362 "cplus.met"
#line 2365 "cplus.met"
    {
#line 2365 "cplus.met"
        _retValue = retTree ;
#line 2365 "cplus.met"
        goto declarator_follow_ret;
#line 2365 "cplus.met"
        
#line 2365 "cplus.met"
    }
#line 2365 "cplus.met"
#line 2365 "cplus.met"
#line 2365 "cplus.met"

#line 2366 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2366 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2366 "cplus.met"
return((PPTREE) 0);
#line 2366 "cplus.met"

#line 2366 "cplus.met"
declarator_follow_exit :
#line 2366 "cplus.met"

#line 2366 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2366 "cplus.met"
    _funcLevel--;
#line 2366 "cplus.met"
    return((PPTREE) -1) ;
#line 2366 "cplus.met"

#line 2366 "cplus.met"
declarator_follow_ret :
#line 2366 "cplus.met"
    
#line 2366 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2366 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2366 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2366 "cplus.met"
    return _retValue ;
#line 2366 "cplus.met"
}
#line 2366 "cplus.met"

#line 2366 "cplus.met"
#line 1601 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1601 "cplus.met"
{
#line 1601 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1601 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1601 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1601 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1601 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1601 "cplus.met"
#line 1601 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1601 "cplus.met"
#line 1601 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1601 "cplus.met"
#line 1601 "cplus.met"
    _addlist1 = list ;
#line 1601 "cplus.met"
#line 1603 "cplus.met"
    do {
#line 1603 "cplus.met"
#line 1604 "cplus.met"
        {
#line 1604 "cplus.met"
            PPTREE _ptTree0=0;
#line 1604 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1604 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1604 "cplus.met"
            }
#line 1604 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1604 "cplus.met"
        }
#line 1604 "cplus.met"
#line 1604 "cplus.met"
        if (list){
#line 1604 "cplus.met"
#line 1604 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1604 "cplus.met"
        } else {
#line 1604 "cplus.met"
#line 1604 "cplus.met"
            list = _addlist1 ;
#line 1604 "cplus.met"
        }
#line 1604 "cplus.met"
#line 1604 "cplus.met"
#line 1605 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1605 "cplus.met"
#line 1606 "cplus.met"
    {
#line 1606 "cplus.met"
        _retValue = list ;
#line 1606 "cplus.met"
        goto declarator_list_ret;
#line 1606 "cplus.met"
        
#line 1606 "cplus.met"
    }
#line 1606 "cplus.met"
#line 1606 "cplus.met"
#line 1606 "cplus.met"

#line 1607 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1607 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1607 "cplus.met"
return((PPTREE) 0);
#line 1607 "cplus.met"

#line 1607 "cplus.met"
declarator_list_exit :
#line 1607 "cplus.met"

#line 1607 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1607 "cplus.met"
    _funcLevel--;
#line 1607 "cplus.met"
    return((PPTREE) -1) ;
#line 1607 "cplus.met"

#line 1607 "cplus.met"
declarator_list_ret :
#line 1607 "cplus.met"
    
#line 1607 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1607 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1607 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1607 "cplus.met"
    return _retValue ;
#line 1607 "cplus.met"
}
#line 1607 "cplus.met"

#line 1607 "cplus.met"
#line 1592 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1592 "cplus.met"
{
#line 1592 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1592 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1592 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1592 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1592 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1592 "cplus.met"
#line 1592 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1592 "cplus.met"
#line 1592 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1592 "cplus.met"
#line 1592 "cplus.met"
    _addlist1 = list ;
#line 1592 "cplus.met"
#line 1594 "cplus.met"
    do {
#line 1594 "cplus.met"
#line 1595 "cplus.met"
        {
#line 1595 "cplus.met"
            PPTREE _ptTree0=0;
#line 1595 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 1595 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1595 "cplus.met"
            }
#line 1595 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1595 "cplus.met"
        }
#line 1595 "cplus.met"
#line 1595 "cplus.met"
        if (list){
#line 1595 "cplus.met"
#line 1595 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1595 "cplus.met"
        } else {
#line 1595 "cplus.met"
#line 1595 "cplus.met"
            list = _addlist1 ;
#line 1595 "cplus.met"
        }
#line 1595 "cplus.met"
#line 1595 "cplus.met"
#line 1596 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1596 "cplus.met"
#line 1597 "cplus.met"
    {
#line 1597 "cplus.met"
        _retValue = list ;
#line 1597 "cplus.met"
        goto declarator_list_init_ret;
#line 1597 "cplus.met"
        
#line 1597 "cplus.met"
    }
#line 1597 "cplus.met"
#line 1597 "cplus.met"
#line 1597 "cplus.met"

#line 1598 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1598 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1598 "cplus.met"
return((PPTREE) 0);
#line 1598 "cplus.met"

#line 1598 "cplus.met"
declarator_list_init_exit :
#line 1598 "cplus.met"

#line 1598 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1598 "cplus.met"
    _funcLevel--;
#line 1598 "cplus.met"
    return((PPTREE) -1) ;
#line 1598 "cplus.met"

#line 1598 "cplus.met"
declarator_list_init_ret :
#line 1598 "cplus.met"
    
#line 1598 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1598 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1598 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1598 "cplus.met"
    return _retValue ;
#line 1598 "cplus.met"
}
#line 1598 "cplus.met"

#line 1598 "cplus.met"
#line 1572 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1572 "cplus.met"
{
#line 1572 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1572 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1572 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1572 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1572 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1572 "cplus.met"
#line 1572 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1572 "cplus.met"
#line 1574 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1574 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1574 "cplus.met"
    }
#line 1574 "cplus.met"
#line 1575 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1575 "cplus.met"
    switch( lexEl.Value) {
#line 1575 "cplus.met"
#line 1576 "cplus.met"
        case EGAL : 
#line 1576 "cplus.met"
            tokenAhead = 0 ;
#line 1576 "cplus.met"
            CommTerm();
#line 1576 "cplus.met"
#line 1576 "cplus.met"
            {
#line 1576 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1576 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1576 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1576 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 1576 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1576 "cplus.met"
                }
#line 1576 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1576 "cplus.met"
                valTree=_ptRes0;
#line 1576 "cplus.met"
            }
#line 1576 "cplus.met"
            break;
#line 1576 "cplus.met"
#line 1579 "cplus.met"
        case POUV : 
#line 1579 "cplus.met"
            tokenAhead = 0 ;
#line 1579 "cplus.met"
            CommTerm();
#line 1579 "cplus.met"
#line 1578 "cplus.met"
#line 1579 "cplus.met"
            {
#line 1579 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1579 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1579 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1579 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1579 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1579 "cplus.met"
                }
#line 1579 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1579 "cplus.met"
                valTree=_ptRes0;
#line 1579 "cplus.met"
            }
#line 1579 "cplus.met"
#line 1580 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1580 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1580 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1580 "cplus.met"
            } else {
#line 1580 "cplus.met"
                tokenAhead = 0 ;
#line 1580 "cplus.met"
            }
#line 1580 "cplus.met"
#line 1580 "cplus.met"
            break;
#line 1580 "cplus.met"
#line 1584 "cplus.met"
        case AOUV : 
#line 1584 "cplus.met"
            tokenAhead = 0 ;
#line 1584 "cplus.met"
            CommTerm();
#line 1584 "cplus.met"
#line 1583 "cplus.met"
#line 1584 "cplus.met"
            {
#line 1584 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1584 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_BRA, 2);
#line 1584 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1584 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1584 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1584 "cplus.met"
                }
#line 1584 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1584 "cplus.met"
                valTree=_ptRes0;
#line 1584 "cplus.met"
            }
#line 1584 "cplus.met"
#line 1585 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1585 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1585 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,"}")
#line 1585 "cplus.met"
            } else {
#line 1585 "cplus.met"
                tokenAhead = 0 ;
#line 1585 "cplus.met"
            }
#line 1585 "cplus.met"
#line 1585 "cplus.met"
            break;
#line 1585 "cplus.met"
#line 1585 "cplus.met"
        default : 
#line 1585 "cplus.met"
#line 1585 "cplus.met"
            break;
#line 1585 "cplus.met"
    }
#line 1585 "cplus.met"
#line 1589 "cplus.met"
    {
#line 1589 "cplus.met"
        _retValue = valTree ;
#line 1589 "cplus.met"
        goto declarator_value_ret;
#line 1589 "cplus.met"
        
#line 1589 "cplus.met"
    }
#line 1589 "cplus.met"
#line 1589 "cplus.met"
#line 1589 "cplus.met"

#line 1590 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1590 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1590 "cplus.met"
return((PPTREE) 0);
#line 1590 "cplus.met"

#line 1590 "cplus.met"
declarator_value_exit :
#line 1590 "cplus.met"

#line 1590 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1590 "cplus.met"
    _funcLevel--;
#line 1590 "cplus.met"
    return((PPTREE) -1) ;
#line 1590 "cplus.met"

#line 1590 "cplus.met"
declarator_value_ret :
#line 1590 "cplus.met"
    
#line 1590 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1590 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1590 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1590 "cplus.met"
    return _retValue ;
#line 1590 "cplus.met"
}
#line 1590 "cplus.met"

#line 1590 "cplus.met"
#line 1527 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1527 "cplus.met"
{
#line 1527 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1527 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1527 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1527 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1527 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1527 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1527 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1527 "cplus.met"
#line 1527 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1527 "cplus.met"
#line 1527 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1527 "cplus.met"
#line 1529 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1529 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1529 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1529 "cplus.met"
    } else {
#line 1529 "cplus.met"
        tokenAhead = 0 ;
#line 1529 "cplus.met"
    }
#line 1529 "cplus.met"
#line 1530 "cplus.met"
    {
#line 1530 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1530 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1530 "cplus.met"
        {
#line 1530 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1530 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1530 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1530 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1530 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
#line 1530 "cplus.met"
            } else {
#line 1530 "cplus.met"
                tokenAhead = 0 ;
#line 1530 "cplus.met"
            }
#line 1530 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1530 "cplus.met"
            _ptTree0=_ptRes1;
#line 1530 "cplus.met"
        }
#line 1530 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1530 "cplus.met"
        retTree=_ptRes0;
#line 1530 "cplus.met"
    }
#line 1530 "cplus.met"
#line 1531 "cplus.met"
    {
#line 1531 "cplus.met"
        keepCarriage = 1 ;
#line 1531 "cplus.met"
#line 1532 "cplus.met"
#line 1533 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1533 "cplus.met"
#line 1534 "cplus.met"
            {
#line 1534 "cplus.met"
                PPTREE _ptTree0=0;
#line 1534 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 111, cplus))== (PPTREE) -1 ) {
#line 1534 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1534 "cplus.met"
                }
#line 1534 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1534 "cplus.met"
            }
#line 1534 "cplus.met"
#line 1534 "cplus.met"
        }
#line 1534 "cplus.met"
#line 1535 "cplus.met"
        ExtUnputBuf();
#line 1535 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1535 "cplus.met"
            NextChar() ;
#line 1535 "cplus.met"
        ptStockBuf = -1;
#line 1535 "cplus.met"
        lexEl.Erase();
#line 1535 "cplus.met"
        tokenAhead = 0;
#line 1535 "cplus.met"
        oldLine=line,oldCol=col;
#line 1535 "cplus.met"
        if ( !lexCallLex) {
#line 1535 "cplus.met"
            PUT_COORD_CALL;
#line 1535 "cplus.met"
        }
#line 1535 "cplus.met"
#line 1536 "cplus.met"
        {
#line 1536 "cplus.met"
            keepAll = 1 ;
#line 1536 "cplus.met"
#line 1537 "cplus.met"
#line 1537 "cplus.met"
            _addlist1 = listDefine ;
#line 1537 "cplus.met"
#line 1538 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1538 "cplus.met"
#line 1539 "cplus.met"
#line 1539 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1539 "cplus.met"
#line 1539 "cplus.met"
                if (listDefine){
#line 1539 "cplus.met"
#line 1539 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1539 "cplus.met"
                } else {
#line 1539 "cplus.met"
#line 1539 "cplus.met"
                    listDefine = _addlist1 ;
#line 1539 "cplus.met"
                }
#line 1539 "cplus.met"
            } 
#line 1539 "cplus.met"
#line 1540 "cplus.met"
            {
#line 1540 "cplus.met"
                PPTREE _ptTree0=0;
#line 1540 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1540 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1540 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1540 "cplus.met"
                } else {
#line 1540 "cplus.met"
                    tokenAhead = 0 ;
#line 1540 "cplus.met"
                }
#line 1540 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1540 "cplus.met"
            }
#line 1540 "cplus.met"
#line 1540 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1540 "cplus.met"
        }
#line 1540 "cplus.met"
#line 1540 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1540 "cplus.met"
    }
#line 1540 "cplus.met"
#line 1543 "cplus.met"
    {
#line 1543 "cplus.met"
        PPTREE _ptTree0=0;
#line 1543 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1543 "cplus.met"
        _retValue =_ptTree0;
#line 1543 "cplus.met"
        goto define_dir_ret;
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
keepCarriage =  _oldkeepCarriage;
#line 1544 "cplus.met"
keepAll =  _oldkeepAll;
#line 1544 "cplus.met"
return((PPTREE) 0);
#line 1544 "cplus.met"

#line 1544 "cplus.met"
define_dir_exit :
#line 1544 "cplus.met"

#line 1544 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1544 "cplus.met"
    _funcLevel--;
#line 1544 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1544 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1544 "cplus.met"
    return((PPTREE) -1) ;
#line 1544 "cplus.met"

#line 1544 "cplus.met"
define_dir_ret :
#line 1544 "cplus.met"
    
#line 1544 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1544 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1544 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1544 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1544 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1544 "cplus.met"
    return _retValue ;
#line 1544 "cplus.met"
}
#line 1544 "cplus.met"

#line 1544 "cplus.met"
#line 1349 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1349 "cplus.met"
{
#line 1349 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1349 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1349 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1349 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1349 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1349 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1349 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1349 "cplus.met"
#line 1349 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 1349 "cplus.met"
#line 1349 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0,exp = (PPTREE) 0;
#line 1349 "cplus.met"
#line 1351 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1351 "cplus.met"
    switch( lexEl.Value) {
#line 1351 "cplus.met"
#line 1352 "cplus.met"
        case META : 
#line 1352 "cplus.met"
        case DEFINE_DIR : 
#line 1352 "cplus.met"
#line 1352 "cplus.met"
            {
#line 1352 "cplus.met"
                PPTREE _ptTree0=0;
#line 1352 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 56, cplus))== (PPTREE) -1 ) {
#line 1352 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1352 "cplus.met"
                }
#line 1352 "cplus.met"
                _retValue =_ptTree0;
#line 1352 "cplus.met"
                goto directive_ret;
#line 1352 "cplus.met"
            }
#line 1352 "cplus.met"
            break;
#line 1352 "cplus.met"
#line 1353 "cplus.met"
        case INCLUDE_DIR : 
#line 1353 "cplus.met"
#line 1353 "cplus.met"
            {
#line 1353 "cplus.met"
                PPTREE _ptTree0=0;
#line 1353 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 1353 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1353 "cplus.met"
                }
#line 1353 "cplus.met"
                _retValue =_ptTree0;
#line 1353 "cplus.met"
                goto directive_ret;
#line 1353 "cplus.met"
            }
#line 1353 "cplus.met"
            break;
#line 1353 "cplus.met"
#line 1354 "cplus.met"
        case LINE_DIR : 
#line 1354 "cplus.met"
            tokenAhead = 0 ;
#line 1354 "cplus.met"
            CommTerm();
#line 1354 "cplus.met"
#line 1355 "cplus.met"
#line 1356 "cplus.met"
            {
#line 1356 "cplus.met"
                keepCarriage = 1 ;
#line 1356 "cplus.met"
#line 1357 "cplus.met"
#line 1358 "cplus.met"
                {
#line 1358 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1358 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1358 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1358 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1358 "cplus.met"
                    }
#line 1358 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1358 "cplus.met"
                    retTree=_ptRes0;
#line 1358 "cplus.met"
                }
#line 1358 "cplus.met"
#line 1359 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1359 "cplus.met"
#line 1360 "cplus.met"
                    {
#line 1360 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1360 "cplus.met"
                        {
#line 1360 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1360 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1360 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1360 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1360 "cplus.met"
                        }
#line 1360 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1360 "cplus.met"
                    }
#line 1360 "cplus.met"
#line 1360 "cplus.met"
                }
#line 1360 "cplus.met"
#line 1361 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1361 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1361 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1361 "cplus.met"
                } else {
#line 1361 "cplus.met"
                    tokenAhead = 0 ;
#line 1361 "cplus.met"
                }
#line 1361 "cplus.met"
#line 1361 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1361 "cplus.met"
            }
#line 1361 "cplus.met"
#line 1363 "cplus.met"
            {
#line 1363 "cplus.met"
                _retValue = retTree ;
#line 1363 "cplus.met"
                goto directive_ret;
#line 1363 "cplus.met"
                
#line 1363 "cplus.met"
            }
#line 1363 "cplus.met"
#line 1363 "cplus.met"
            break;
#line 1363 "cplus.met"
#line 1365 "cplus.met"
        case LINE_REFERENCE_DIR : 
#line 1365 "cplus.met"
            tokenAhead = 0 ;
#line 1365 "cplus.met"
            CommTerm();
#line 1365 "cplus.met"
#line 1366 "cplus.met"
#line 1367 "cplus.met"
            {
#line 1367 "cplus.met"
                keepCarriage = 1 ;
#line 1367 "cplus.met"
#line 1368 "cplus.met"
#line 1369 "cplus.met"
                {
#line 1369 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1369 "cplus.met"
                    _ptRes0= MakeTree(LINE_REFERENCE_DIR, 3);
#line 1369 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1369 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1369 "cplus.met"
                    }
#line 1369 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1369 "cplus.met"
                    retTree=_ptRes0;
#line 1369 "cplus.met"
                }
#line 1369 "cplus.met"
#line 1370 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1370 "cplus.met"
#line 1371 "cplus.met"
                    {
#line 1371 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1371 "cplus.met"
                        {
#line 1371 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1371 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1371 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1371 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1371 "cplus.met"
                        }
#line 1371 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1371 "cplus.met"
                    }
#line 1371 "cplus.met"
#line 1371 "cplus.met"
                }
#line 1371 "cplus.met"
#line 1371 "cplus.met"
                _addlist1 = list ;
#line 1371 "cplus.met"
#line 1372 "cplus.met"
                while (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(expression), 67, cplus)) { 
#line 1372 "cplus.met"
#line 1373 "cplus.met"
#line 1373 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,exp );
#line 1373 "cplus.met"
#line 1373 "cplus.met"
                    if (list){
#line 1373 "cplus.met"
#line 1373 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1373 "cplus.met"
                    } else {
#line 1373 "cplus.met"
#line 1373 "cplus.met"
                        list = _addlist1 ;
#line 1373 "cplus.met"
                    }
#line 1373 "cplus.met"
                } 
#line 1373 "cplus.met"
#line 1374 "cplus.met"
                ReplaceTree(retTree ,3 ,list );
#line 1374 "cplus.met"
#line 1375 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1375 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1375 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1375 "cplus.met"
                } else {
#line 1375 "cplus.met"
                    tokenAhead = 0 ;
#line 1375 "cplus.met"
                }
#line 1375 "cplus.met"
#line 1375 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1375 "cplus.met"
            }
#line 1375 "cplus.met"
#line 1377 "cplus.met"
            {
#line 1377 "cplus.met"
                _retValue = retTree ;
#line 1377 "cplus.met"
                goto directive_ret;
#line 1377 "cplus.met"
                
#line 1377 "cplus.met"
            }
#line 1377 "cplus.met"
#line 1377 "cplus.met"
            break;
#line 1377 "cplus.met"
#line 1379 "cplus.met"
        case UNDEF_DIR : 
#line 1379 "cplus.met"
            tokenAhead = 0 ;
#line 1379 "cplus.met"
            CommTerm();
#line 1379 "cplus.met"
#line 1379 "cplus.met"
            {
#line 1379 "cplus.met"
                PPTREE _ptTree0=0;
#line 1379 "cplus.met"
                {
#line 1379 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1379 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1379 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1379 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1379 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1379 "cplus.met"
                    } else {
#line 1379 "cplus.met"
                        tokenAhead = 0 ;
#line 1379 "cplus.met"
                    }
#line 1379 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1379 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1379 "cplus.met"
                }
#line 1379 "cplus.met"
                _retValue =_ptTree0;
#line 1379 "cplus.met"
                goto directive_ret;
#line 1379 "cplus.met"
            }
#line 1379 "cplus.met"
            break;
#line 1379 "cplus.met"
#line 1380 "cplus.met"
        case ERROR_DIR : 
#line 1380 "cplus.met"
            tokenAhead = 0 ;
#line 1380 "cplus.met"
            CommTerm();
#line 1380 "cplus.met"
#line 1380 "cplus.met"
            {
#line 1380 "cplus.met"
                PPTREE _ptTree0=0;
#line 1380 "cplus.met"
                {
#line 1380 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1380 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1380 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1380 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1380 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1380 "cplus.met"
                    } else {
#line 1380 "cplus.met"
                        tokenAhead = 0 ;
#line 1380 "cplus.met"
                    }
#line 1380 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1380 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1380 "cplus.met"
                }
#line 1380 "cplus.met"
                _retValue =_ptTree0;
#line 1380 "cplus.met"
                goto directive_ret;
#line 1380 "cplus.met"
            }
#line 1380 "cplus.met"
            break;
#line 1380 "cplus.met"
#line 1381 "cplus.met"
        case PRAGMA_DIR : 
#line 1381 "cplus.met"
            tokenAhead = 0 ;
#line 1381 "cplus.met"
            CommTerm();
#line 1381 "cplus.met"
#line 1382 "cplus.met"
#line 1383 "cplus.met"
#line 1384 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1384 "cplus.met"
#line 1385 "cplus.met"
#line 1386 "cplus.met"
                {
#line 1386 "cplus.met"
                    keepCarriage = 1 ;
#line 1386 "cplus.met"
#line 1387 "cplus.met"
#line 1388 "cplus.met"
                    {
#line 1388 "cplus.met"
                        keepAll = 1 ;
#line 1388 "cplus.met"
#line 1389 "cplus.met"
#line 1390 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1390 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1390 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1390 "cplus.met"
                        } else {
#line 1390 "cplus.met"
                            tokenAhead = 0 ;
#line 1390 "cplus.met"
                        }
#line 1390 "cplus.met"
#line 1390 "cplus.met"
                        _addlist2 = list ;
#line 1390 "cplus.met"
#line 1391 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 58, cplus))) { 
#line 1391 "cplus.met"
#line 1392 "cplus.met"
#line 1392 "cplus.met"
                            {
#line 1392 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1392 "cplus.met"
                                {
#line 1392 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1392 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1392 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1392 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1392 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1392 "cplus.met"
                                    } else {
#line 1392 "cplus.met"
                                        tokenAhead = 0 ;
#line 1392 "cplus.met"
                                    }
#line 1392 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1392 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1392 "cplus.met"
                                }
#line 1392 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1392 "cplus.met"
                            }
#line 1392 "cplus.met"
#line 1392 "cplus.met"
                            if (list){
#line 1392 "cplus.met"
#line 1392 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1392 "cplus.met"
                            } else {
#line 1392 "cplus.met"
#line 1392 "cplus.met"
                                list = _addlist2 ;
#line 1392 "cplus.met"
                            }
#line 1392 "cplus.met"
                        } 
#line 1392 "cplus.met"
#line 1393 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 58, cplus))== (PPTREE) -1 ) {
#line 1393 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1393 "cplus.met"
                        }
#line 1393 "cplus.met"
#line 1393 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1393 "cplus.met"
                    }
#line 1393 "cplus.met"
#line 1393 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1393 "cplus.met"
                }
#line 1393 "cplus.met"
#line 1397 "cplus.met"
                 tokenAhead = 0;
#line 1397 "cplus.met"
#line 1399 "cplus.met"
                {
#line 1399 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1399 "cplus.met"
                    {
#line 1399 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1399 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1399 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1399 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1399 "cplus.met"
                    }
#line 1399 "cplus.met"
                    _retValue =_ptTree0;
#line 1399 "cplus.met"
                    goto directive_ret;
#line 1399 "cplus.met"
                }
#line 1399 "cplus.met"
#line 1399 "cplus.met"
            } else 
#line 1399 "cplus.met"
#line 1401 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
#line 1401 "cplus.met"
#line 1402 "cplus.met"
#line 1403 "cplus.met"
                {
#line 1403 "cplus.met"
                    keepCarriage = 1 ;
#line 1403 "cplus.met"
#line 1404 "cplus.met"
#line 1405 "cplus.met"
                    {
#line 1405 "cplus.met"
                        keepAll = 1 ;
#line 1405 "cplus.met"
#line 1406 "cplus.met"
#line 1407 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1407 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1407 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1407 "cplus.met"
                        } else {
#line 1407 "cplus.met"
                            tokenAhead = 0 ;
#line 1407 "cplus.met"
                        }
#line 1407 "cplus.met"
#line 1407 "cplus.met"
                        _addlist3 = list ;
#line 1407 "cplus.met"
#line 1408 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 59, cplus))) { 
#line 1408 "cplus.met"
#line 1409 "cplus.met"
#line 1409 "cplus.met"
                            {
#line 1409 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1409 "cplus.met"
                                {
#line 1409 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1409 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1409 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1409 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1409 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1409 "cplus.met"
                                    } else {
#line 1409 "cplus.met"
                                        tokenAhead = 0 ;
#line 1409 "cplus.met"
                                    }
#line 1409 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1409 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1409 "cplus.met"
                                }
#line 1409 "cplus.met"
                                _addlist3 =AddList(_addlist3 , _ptTree0);
#line 1409 "cplus.met"
                            }
#line 1409 "cplus.met"
#line 1409 "cplus.met"
                            if (list){
#line 1409 "cplus.met"
#line 1409 "cplus.met"
                                _addlist3 = SonTree (_addlist3 ,2 );
#line 1409 "cplus.met"
                            } else {
#line 1409 "cplus.met"
#line 1409 "cplus.met"
                                list = _addlist3 ;
#line 1409 "cplus.met"
                            }
#line 1409 "cplus.met"
                        } 
#line 1409 "cplus.met"
#line 1410 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1410 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1410 "cplus.met"
                        }
#line 1410 "cplus.met"
#line 1410 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1410 "cplus.met"
                    }
#line 1410 "cplus.met"
#line 1410 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1410 "cplus.met"
                }
#line 1410 "cplus.met"
#line 1414 "cplus.met"
                 tokenAhead = 0;
#line 1414 "cplus.met"
#line 1416 "cplus.met"
                {
#line 1416 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1416 "cplus.met"
                    {
#line 1416 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1416 "cplus.met"
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
#line 1416 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1416 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1416 "cplus.met"
                    }
#line 1416 "cplus.met"
                    _retValue =_ptTree0;
#line 1416 "cplus.met"
                    goto directive_ret;
#line 1416 "cplus.met"
                }
#line 1416 "cplus.met"
#line 1416 "cplus.met"
            } else 
#line 1416 "cplus.met"
#line 1418 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1418 "cplus.met"
#line 1419 "cplus.met"
#line 1420 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1420 "cplus.met"
                switch( lexEl.Value) {
#line 1420 "cplus.met"
#line 1421 "cplus.met"
                    case META : 
#line 1421 "cplus.met"
                    case PRAGMA_TAB : 
#line 1421 "cplus.met"
                        tokenAhead = 0 ;
#line 1421 "cplus.met"
                        CommTerm();
#line 1421 "cplus.met"
#line 1422 "cplus.met"
#line 1423 "cplus.met"
                        {
#line 1423 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1423 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1423 "cplus.met"
                            {
#line 1423 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1423 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1423 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1423 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1423 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1423 "cplus.met"
                                } else {
#line 1423 "cplus.met"
                                    tokenAhead = 0 ;
#line 1423 "cplus.met"
                                }
#line 1423 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1423 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1423 "cplus.met"
                            }
#line 1423 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1423 "cplus.met"
                            retTree=_ptRes0;
#line 1423 "cplus.met"
                        }
#line 1423 "cplus.met"
#line 1424 "cplus.met"
                        AnalyzeTab (retTree );
#line 1424 "cplus.met"
#line 1425 "cplus.met"
                        {
#line 1425 "cplus.met"
                            _retValue = retTree ;
#line 1425 "cplus.met"
                            goto directive_ret;
#line 1425 "cplus.met"
                            
#line 1425 "cplus.met"
                        }
#line 1425 "cplus.met"
#line 1425 "cplus.met"
                        break;
#line 1425 "cplus.met"
#line 1427 "cplus.met"
                    case PRAGMA_MODE : 
#line 1427 "cplus.met"
                        tokenAhead = 0 ;
#line 1427 "cplus.met"
                        CommTerm();
#line 1427 "cplus.met"
#line 1428 "cplus.met"
#line 1429 "cplus.met"
                        {
#line 1429 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1429 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1429 "cplus.met"
                            {
#line 1429 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1429 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1429 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1429 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1429 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1429 "cplus.met"
                                } else {
#line 1429 "cplus.met"
                                    tokenAhead = 0 ;
#line 1429 "cplus.met"
                                }
#line 1429 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1429 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1429 "cplus.met"
                            }
#line 1429 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1429 "cplus.met"
                            retTree=_ptRes0;
#line 1429 "cplus.met"
                        }
#line 1429 "cplus.met"
#line 1430 "cplus.met"
                        AnalyzeMode (retTree );
#line 1430 "cplus.met"
#line 1431 "cplus.met"
                        {
#line 1431 "cplus.met"
                            _retValue = retTree ;
#line 1431 "cplus.met"
                            goto directive_ret;
#line 1431 "cplus.met"
                            
#line 1431 "cplus.met"
                        }
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                        break;
#line 1431 "cplus.met"
#line 1433 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1433 "cplus.met"
                        tokenAhead = 0 ;
#line 1433 "cplus.met"
                        CommTerm();
#line 1433 "cplus.met"
#line 1434 "cplus.met"
#line 1435 "cplus.met"
                        {
#line 1435 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1435 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1435 "cplus.met"
                            {
#line 1435 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1435 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1435 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1435 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1435 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1435 "cplus.met"
                                } else {
#line 1435 "cplus.met"
                                    tokenAhead = 0 ;
#line 1435 "cplus.met"
                                }
#line 1435 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1435 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1435 "cplus.met"
                            }
#line 1435 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1435 "cplus.met"
                            retTree=_ptRes0;
#line 1435 "cplus.met"
                        }
#line 1435 "cplus.met"
#line 1436 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1436 "cplus.met"
#line 1437 "cplus.met"
                        {
#line 1437 "cplus.met"
                            _retValue = retTree ;
#line 1437 "cplus.met"
                            goto directive_ret;
#line 1437 "cplus.met"
                            
#line 1437 "cplus.met"
                        }
#line 1437 "cplus.met"
#line 1437 "cplus.met"
                        break;
#line 1437 "cplus.met"
#line 1439 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1439 "cplus.met"
                        tokenAhead = 0 ;
#line 1439 "cplus.met"
                        CommTerm();
#line 1439 "cplus.met"
#line 1440 "cplus.met"
#line 1441 "cplus.met"
                        {
#line 1441 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1441 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1441 "cplus.met"
                            {
#line 1441 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1441 "cplus.met"
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1441 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1441 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1441 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1441 "cplus.met"
                                } else {
#line 1441 "cplus.met"
                                    tokenAhead = 0 ;
#line 1441 "cplus.met"
                                }
#line 1441 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1441 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1441 "cplus.met"
                            }
#line 1441 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1441 "cplus.met"
                            retTree=_ptRes0;
#line 1441 "cplus.met"
                        }
#line 1441 "cplus.met"
#line 1442 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1442 "cplus.met"
#line 1443 "cplus.met"
                        {
#line 1443 "cplus.met"
                            _retValue = retTree ;
#line 1443 "cplus.met"
                            goto directive_ret;
#line 1443 "cplus.met"
                            
#line 1443 "cplus.met"
                        }
#line 1443 "cplus.met"
#line 1443 "cplus.met"
                        break;
#line 1443 "cplus.met"
#line 1445 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1445 "cplus.met"
                        tokenAhead = 0 ;
#line 1445 "cplus.met"
                        CommTerm();
#line 1445 "cplus.met"
#line 1446 "cplus.met"
#line 1447 "cplus.met"
                        {
#line 1447 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1447 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1447 "cplus.met"
                            {
#line 1447 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1447 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1447 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1447 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1447 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1447 "cplus.met"
                                } else {
#line 1447 "cplus.met"
                                    tokenAhead = 0 ;
#line 1447 "cplus.met"
                                }
#line 1447 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1447 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1447 "cplus.met"
                            }
#line 1447 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1447 "cplus.met"
                            retTree=_ptRes0;
#line 1447 "cplus.met"
                        }
#line 1447 "cplus.met"
#line 1448 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1448 "cplus.met"
#line 1449 "cplus.met"
                        {
#line 1449 "cplus.met"
                            _retValue = retTree ;
#line 1449 "cplus.met"
                            goto directive_ret;
#line 1449 "cplus.met"
                            
#line 1449 "cplus.met"
                        }
#line 1449 "cplus.met"
#line 1449 "cplus.met"
                        break;
#line 1449 "cplus.met"
#line 1451 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1451 "cplus.met"
                        tokenAhead = 0 ;
#line 1451 "cplus.met"
                        CommTerm();
#line 1451 "cplus.met"
#line 1452 "cplus.met"
#line 1453 "cplus.met"
                        {
#line 1453 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1453 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1453 "cplus.met"
                            {
#line 1453 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1453 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1453 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1453 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1453 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1453 "cplus.met"
                                } else {
#line 1453 "cplus.met"
                                    tokenAhead = 0 ;
#line 1453 "cplus.met"
                                }
#line 1453 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1453 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1453 "cplus.met"
                            }
#line 1453 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1453 "cplus.met"
                            retTree=_ptRes0;
#line 1453 "cplus.met"
                        }
#line 1453 "cplus.met"
#line 1454 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1454 "cplus.met"
#line 1455 "cplus.met"
                        {
#line 1455 "cplus.met"
                            _retValue = retTree ;
#line 1455 "cplus.met"
                            goto directive_ret;
#line 1455 "cplus.met"
                            
#line 1455 "cplus.met"
                        }
#line 1455 "cplus.met"
#line 1455 "cplus.met"
                        break;
#line 1455 "cplus.met"
#line 1457 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1457 "cplus.met"
                        tokenAhead = 0 ;
#line 1457 "cplus.met"
                        CommTerm();
#line 1457 "cplus.met"
#line 1458 "cplus.met"
#line 1459 "cplus.met"
                        {
#line 1459 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1459 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1459 "cplus.met"
                            {
#line 1459 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1459 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1459 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1459 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1459 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1459 "cplus.met"
                                } else {
#line 1459 "cplus.met"
                                    tokenAhead = 0 ;
#line 1459 "cplus.met"
                                }
#line 1459 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1459 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1459 "cplus.met"
                            }
#line 1459 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1459 "cplus.met"
                            retTree=_ptRes0;
#line 1459 "cplus.met"
                        }
#line 1459 "cplus.met"
#line 1460 "cplus.met"
                        AnalyzeBraceAlign (retTree );
#line 1460 "cplus.met"
#line 1461 "cplus.met"
                        {
#line 1461 "cplus.met"
                            _retValue = retTree ;
#line 1461 "cplus.met"
                            goto directive_ret;
#line 1461 "cplus.met"
                            
#line 1461 "cplus.met"
                        }
#line 1461 "cplus.met"
#line 1461 "cplus.met"
                        break;
#line 1461 "cplus.met"
#line 1463 "cplus.met"
                    case PRAGMA_MARGIN : 
#line 1463 "cplus.met"
                        tokenAhead = 0 ;
#line 1463 "cplus.met"
                        CommTerm();
#line 1463 "cplus.met"
#line 1464 "cplus.met"
#line 1465 "cplus.met"
                        {
#line 1465 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1465 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1465 "cplus.met"
                            {
#line 1465 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1465 "cplus.met"
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1465 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1465 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1465 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1465 "cplus.met"
                                } else {
#line 1465 "cplus.met"
                                    tokenAhead = 0 ;
#line 1465 "cplus.met"
                                }
#line 1465 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1465 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1465 "cplus.met"
                            }
#line 1465 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1465 "cplus.met"
                            retTree=_ptRes0;
#line 1465 "cplus.met"
                        }
#line 1465 "cplus.met"
#line 1466 "cplus.met"
                        AnalyzeMargin (retTree );
#line 1466 "cplus.met"
#line 1467 "cplus.met"
                        {
#line 1467 "cplus.met"
                            _retValue = retTree ;
#line 1467 "cplus.met"
                            goto directive_ret;
#line 1467 "cplus.met"
                            
#line 1467 "cplus.met"
                        }
#line 1467 "cplus.met"
#line 1467 "cplus.met"
                        break;
#line 1467 "cplus.met"
#line 1469 "cplus.met"
                    case PRAGMA_COMMENT_START : 
#line 1469 "cplus.met"
                        tokenAhead = 0 ;
#line 1469 "cplus.met"
                        CommTerm();
#line 1469 "cplus.met"
#line 1470 "cplus.met"
#line 1471 "cplus.met"
                        {
#line 1471 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1471 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1471 "cplus.met"
                            {
#line 1471 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1471 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1471 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1471 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1471 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1471 "cplus.met"
                                } else {
#line 1471 "cplus.met"
                                    tokenAhead = 0 ;
#line 1471 "cplus.met"
                                }
#line 1471 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1471 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1471 "cplus.met"
                            }
#line 1471 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1471 "cplus.met"
                            retTree=_ptRes0;
#line 1471 "cplus.met"
                        }
#line 1471 "cplus.met"
#line 1472 "cplus.met"
                        AnalyzeComment (retTree );
#line 1472 "cplus.met"
#line 1473 "cplus.met"
                        {
#line 1473 "cplus.met"
                            _retValue = retTree ;
#line 1473 "cplus.met"
                            goto directive_ret;
#line 1473 "cplus.met"
                            
#line 1473 "cplus.met"
                        }
#line 1473 "cplus.met"
#line 1473 "cplus.met"
                        break;
#line 1473 "cplus.met"
#line 1475 "cplus.met"
                    case PRAGMA_COMMENT_MIDDLE : 
#line 1475 "cplus.met"
                        tokenAhead = 0 ;
#line 1475 "cplus.met"
                        CommTerm();
#line 1475 "cplus.met"
#line 1476 "cplus.met"
#line 1477 "cplus.met"
                        {
#line 1477 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1477 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1477 "cplus.met"
                            {
#line 1477 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1477 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1477 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1477 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1477 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1477 "cplus.met"
                                } else {
#line 1477 "cplus.met"
                                    tokenAhead = 0 ;
#line 1477 "cplus.met"
                                }
#line 1477 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1477 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1477 "cplus.met"
                            }
#line 1477 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1477 "cplus.met"
                            retTree=_ptRes0;
#line 1477 "cplus.met"
                        }
#line 1477 "cplus.met"
#line 1478 "cplus.met"
                        AnalyzeComment (retTree );
#line 1478 "cplus.met"
#line 1479 "cplus.met"
                        {
#line 1479 "cplus.met"
                            _retValue = retTree ;
#line 1479 "cplus.met"
                            goto directive_ret;
#line 1479 "cplus.met"
                            
#line 1479 "cplus.met"
                        }
#line 1479 "cplus.met"
#line 1479 "cplus.met"
                        break;
#line 1479 "cplus.met"
#line 1481 "cplus.met"
                    case PRAGMA_COMMENT_END : 
#line 1481 "cplus.met"
                        tokenAhead = 0 ;
#line 1481 "cplus.met"
                        CommTerm();
#line 1481 "cplus.met"
#line 1482 "cplus.met"
#line 1483 "cplus.met"
                        {
#line 1483 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1483 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1483 "cplus.met"
                            {
#line 1483 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1483 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1483 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1483 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1483 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1483 "cplus.met"
                                } else {
#line 1483 "cplus.met"
                                    tokenAhead = 0 ;
#line 1483 "cplus.met"
                                }
#line 1483 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1483 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1483 "cplus.met"
                            }
#line 1483 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1483 "cplus.met"
                            retTree=_ptRes0;
#line 1483 "cplus.met"
                        }
#line 1483 "cplus.met"
#line 1484 "cplus.met"
                        AnalyzeComment (retTree );
#line 1484 "cplus.met"
#line 1485 "cplus.met"
                        {
#line 1485 "cplus.met"
                            _retValue = retTree ;
#line 1485 "cplus.met"
                            goto directive_ret;
#line 1485 "cplus.met"
                            
#line 1485 "cplus.met"
                        }
#line 1485 "cplus.met"
#line 1485 "cplus.met"
                        break;
#line 1485 "cplus.met"
#line 1487 "cplus.met"
                    case PRAGMA_COMMENT_PLUS : 
#line 1487 "cplus.met"
                        tokenAhead = 0 ;
#line 1487 "cplus.met"
                        CommTerm();
#line 1487 "cplus.met"
#line 1488 "cplus.met"
#line 1489 "cplus.met"
                        {
#line 1489 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1489 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1489 "cplus.met"
                            {
#line 1489 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1489 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1489 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1489 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1489 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1489 "cplus.met"
                                } else {
#line 1489 "cplus.met"
                                    tokenAhead = 0 ;
#line 1489 "cplus.met"
                                }
#line 1489 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1489 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1489 "cplus.met"
                            }
#line 1489 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1489 "cplus.met"
                            retTree=_ptRes0;
#line 1489 "cplus.met"
                        }
#line 1489 "cplus.met"
#line 1490 "cplus.met"
                        AnalyzeComment (retTree );
#line 1490 "cplus.met"
#line 1491 "cplus.met"
                        {
#line 1491 "cplus.met"
                            _retValue = retTree ;
#line 1491 "cplus.met"
                            goto directive_ret;
#line 1491 "cplus.met"
                            
#line 1491 "cplus.met"
                        }
#line 1491 "cplus.met"
#line 1491 "cplus.met"
                        break;
#line 1491 "cplus.met"
#line 1493 "cplus.met"
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 1493 "cplus.met"
                        tokenAhead = 0 ;
#line 1493 "cplus.met"
                        CommTerm();
#line 1493 "cplus.met"
#line 1494 "cplus.met"
#line 1495 "cplus.met"
                        {
#line 1495 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1495 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1495 "cplus.met"
                            {
#line 1495 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1495 "cplus.met"
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1495 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1495 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1495 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1495 "cplus.met"
                                } else {
#line 1495 "cplus.met"
                                    tokenAhead = 0 ;
#line 1495 "cplus.met"
                                }
#line 1495 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1495 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1495 "cplus.met"
                            }
#line 1495 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1495 "cplus.met"
                            retTree=_ptRes0;
#line 1495 "cplus.met"
                        }
#line 1495 "cplus.met"
#line 1496 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1496 "cplus.met"
#line 1497 "cplus.met"
                        {
#line 1497 "cplus.met"
                            _retValue = retTree ;
#line 1497 "cplus.met"
                            goto directive_ret;
#line 1497 "cplus.met"
                            
#line 1497 "cplus.met"
                        }
#line 1497 "cplus.met"
#line 1497 "cplus.met"
                        break;
#line 1497 "cplus.met"
#line 1499 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1499 "cplus.met"
                        tokenAhead = 0 ;
#line 1499 "cplus.met"
                        CommTerm();
#line 1499 "cplus.met"
#line 1500 "cplus.met"
#line 1501 "cplus.met"
                        {
#line 1501 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1501 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1501 "cplus.met"
                            {
#line 1501 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1501 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1501 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1501 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1501 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1501 "cplus.met"
                                } else {
#line 1501 "cplus.met"
                                    tokenAhead = 0 ;
#line 1501 "cplus.met"
                                }
#line 1501 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1501 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1501 "cplus.met"
                            }
#line 1501 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1501 "cplus.met"
                            retTree=_ptRes0;
#line 1501 "cplus.met"
                        }
#line 1501 "cplus.met"
#line 1502 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1502 "cplus.met"
#line 1503 "cplus.met"
                        {
#line 1503 "cplus.met"
                            _retValue = retTree ;
#line 1503 "cplus.met"
                            goto directive_ret;
#line 1503 "cplus.met"
                            
#line 1503 "cplus.met"
                        }
#line 1503 "cplus.met"
#line 1503 "cplus.met"
                        break;
#line 1503 "cplus.met"
#line 1505 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1505 "cplus.met"
                        tokenAhead = 0 ;
#line 1505 "cplus.met"
                        CommTerm();
#line 1505 "cplus.met"
#line 1506 "cplus.met"
#line 1507 "cplus.met"
                        {
#line 1507 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1507 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1507 "cplus.met"
                            {
#line 1507 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1507 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1507 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1507 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1507 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1507 "cplus.met"
                                } else {
#line 1507 "cplus.met"
                                    tokenAhead = 0 ;
#line 1507 "cplus.met"
                                }
#line 1507 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1507 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1507 "cplus.met"
                            }
#line 1507 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1507 "cplus.met"
                            retTree=_ptRes0;
#line 1507 "cplus.met"
                        }
#line 1507 "cplus.met"
#line 1508 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1508 "cplus.met"
#line 1509 "cplus.met"
                        {
#line 1509 "cplus.met"
                            _retValue = retTree ;
#line 1509 "cplus.met"
                            goto directive_ret;
#line 1509 "cplus.met"
                            
#line 1509 "cplus.met"
                        }
#line 1509 "cplus.met"
#line 1509 "cplus.met"
                        break;
#line 1509 "cplus.met"
#line 1511 "cplus.met"
                    default : 
#line 1511 "cplus.met"
#line 1511 "cplus.met"
                        {
#line 1511 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1511 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1511 "cplus.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1511 "cplus.met"
                            }
#line 1511 "cplus.met"
                            _retValue =_ptTree0;
#line 1511 "cplus.met"
                            goto directive_ret;
#line 1511 "cplus.met"
                        }
#line 1511 "cplus.met"
                        break;
#line 1511 "cplus.met"
                }
#line 1511 "cplus.met"
#line 1511 "cplus.met"
            } else 
#line 1511 "cplus.met"
#line 1516 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 130, cplus))){
#line 1516 "cplus.met"
#line 1515 "cplus.met"
#line 1516 "cplus.met"
                {
#line 1516 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1516 "cplus.met"
                    {
#line 1516 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1516 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1516 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1516 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1516 "cplus.met"
                            MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
#line 1516 "cplus.met"
                        } else {
#line 1516 "cplus.met"
                            tokenAhead = 0 ;
#line 1516 "cplus.met"
                        }
#line 1516 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1516 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1516 "cplus.met"
                    }
#line 1516 "cplus.met"
                    _retValue =_ptTree0;
#line 1516 "cplus.met"
                    goto directive_ret;
#line 1516 "cplus.met"
                }
#line 1516 "cplus.met"
#line 1516 "cplus.met"
            } else 
#line 1516 "cplus.met"
#line 1520 "cplus.met"
            if (1) {
#line 1520 "cplus.met"
#line 1519 "cplus.met"
#line 1520 "cplus.met"
                {
#line 1520 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1520 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1520 "cplus.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1520 "cplus.met"
                    }
#line 1520 "cplus.met"
                    _retValue =_ptTree0;
#line 1520 "cplus.met"
                    goto directive_ret;
#line 1520 "cplus.met"
                }
#line 1520 "cplus.met"
#line 1520 "cplus.met"
            } else 
#line 1520 "cplus.met"
             ;
#line 1520 "cplus.met"
#line 1520 "cplus.met"
            break;
#line 1520 "cplus.met"
        default :
#line 1520 "cplus.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1520 "cplus.met"
            break;
#line 1520 "cplus.met"
    }
#line 1520 "cplus.met"
#line 1520 "cplus.met"
#line 1524 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1524 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1524 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1524 "cplus.met"
keepAll =  _oldkeepAll;
#line 1524 "cplus.met"
return((PPTREE) 0);
#line 1524 "cplus.met"

#line 1524 "cplus.met"
directive_exit :
#line 1524 "cplus.met"

#line 1524 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1524 "cplus.met"
    _funcLevel--;
#line 1524 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1524 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1524 "cplus.met"
    return((PPTREE) -1) ;
#line 1524 "cplus.met"

#line 1524 "cplus.met"
directive_ret :
#line 1524 "cplus.met"
    
#line 1524 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1524 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1524 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1524 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1524 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1524 "cplus.met"
    return _retValue ;
#line 1524 "cplus.met"
}
#line 1524 "cplus.met"

#line 1524 "cplus.met"
#line 828 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 828 "cplus.met"
{
#line 828 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 828 "cplus.met"
    int _value,_nbPre = 0 ;
#line 828 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 828 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 828 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 828 "cplus.met"
#line 829 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 829 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 829 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 829 "cplus.met"
    } else {
#line 829 "cplus.met"
        tokenAhead = 0 ;
#line 829 "cplus.met"
    }
#line 829 "cplus.met"
#line 830 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 830 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 830 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 830 "cplus.met"
    } else {
#line 830 "cplus.met"
        tokenAhead = 0 ;
#line 830 "cplus.met"
    }
#line 830 "cplus.met"
#line 830 "cplus.met"
#line 830 "cplus.met"

#line 831 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 831 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 831 "cplus.met"
return((PPTREE) 0);
#line 831 "cplus.met"

#line 831 "cplus.met"
end_pragma_exit :
#line 831 "cplus.met"

#line 831 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 831 "cplus.met"
    _funcLevel--;
#line 831 "cplus.met"
    return((PPTREE) -1) ;
#line 831 "cplus.met"

#line 831 "cplus.met"
end_pragma_ret :
#line 831 "cplus.met"
    
#line 831 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 831 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 831 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 831 "cplus.met"
    return _retValue ;
#line 831 "cplus.met"
}
#line 831 "cplus.met"

#line 831 "cplus.met"
#line 833 "cplus.met"
PPTREE cplus::end_pragma_managed ( int error_free)
#line 833 "cplus.met"
{
#line 833 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 833 "cplus.met"
    int _value,_nbPre = 0 ;
#line 833 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 833 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma_managed",TRACE_ENTER,(PPTREE)0);
#line 833 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 833 "cplus.met"
#line 834 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 834 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 834 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_DIR")
#line 834 "cplus.met"
    } else {
#line 834 "cplus.met"
        tokenAhead = 0 ;
#line 834 "cplus.met"
    }
#line 834 "cplus.met"
#line 835 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 835 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_MANAGED,"PRAGMA_MANAGED") || !(CommTerm(),1)) {
#line 835 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_MANAGED")
#line 835 "cplus.met"
    } else {
#line 835 "cplus.met"
        tokenAhead = 0 ;
#line 835 "cplus.met"
    }
#line 835 "cplus.met"
#line 835 "cplus.met"
#line 835 "cplus.met"

#line 836 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 836 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 836 "cplus.met"
return((PPTREE) 0);
#line 836 "cplus.met"

#line 836 "cplus.met"
end_pragma_managed_exit :
#line 836 "cplus.met"

#line 836 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_EXIT,(PPTREE)0);
#line 836 "cplus.met"
    _funcLevel--;
#line 836 "cplus.met"
    return((PPTREE) -1) ;
#line 836 "cplus.met"

#line 836 "cplus.met"
end_pragma_managed_ret :
#line 836 "cplus.met"
    
#line 836 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_RETURN,_retValue);
#line 836 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 836 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 836 "cplus.met"
    return _retValue ;
#line 836 "cplus.met"
}
#line 836 "cplus.met"

#line 836 "cplus.met"
#line 1819 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1819 "cplus.met"
{
#line 1819 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1819 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1819 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1819 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1819 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1819 "cplus.met"
#line 1819 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1819 "cplus.met"
#line 1819 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,classMarker = (PPTREE) 0;
#line 1819 "cplus.met"
#line 1821 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1821 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1821 "cplus.met"
        MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1821 "cplus.met"
    } else {
#line 1821 "cplus.met"
        tokenAhead = 0 ;
#line 1821 "cplus.met"
    }
#line 1821 "cplus.met"
#line 1822 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CLASS,"class") && (tokenAhead = 0,CommTerm(),1)){
#line 1822 "cplus.met"
#line 1823 "cplus.met"
#line 1824 "cplus.met"
        {
#line 1824 "cplus.met"
            PPTREE _ptRes0=0;
#line 1824 "cplus.met"
            _ptRes0= MakeTree(ENUM_CLASS, 0);
#line 1824 "cplus.met"
            classMarker=_ptRes0;
#line 1824 "cplus.met"
        }
#line 1824 "cplus.met"
#line 1824 "cplus.met"
#line 1824 "cplus.met"
    }
#line 1824 "cplus.met"
#line 1826 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1826 "cplus.met"
#line 1827 "cplus.met"
        {
#line 1827 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1827 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1827 "cplus.met"
            {
#line 1827 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1827 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1827 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1827 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1827 "cplus.met"
                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1827 "cplus.met"
                } else {
#line 1827 "cplus.met"
                    tokenAhead = 0 ;
#line 1827 "cplus.met"
                }
#line 1827 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1827 "cplus.met"
                _ptTree0=_ptRes1;
#line 1827 "cplus.met"
            }
#line 1827 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1827 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1827 "cplus.met"
            retTree=_ptRes0;
#line 1827 "cplus.met"
        }
#line 1827 "cplus.met"
    } else {
#line 1827 "cplus.met"
#line 1829 "cplus.met"
        {
#line 1829 "cplus.met"
            PPTREE _ptRes0=0;
#line 1829 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1829 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1829 "cplus.met"
            retTree=_ptRes0;
#line 1829 "cplus.met"
        }
#line 1829 "cplus.met"
    }
#line 1829 "cplus.met"
#line 1830 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1830 "cplus.met"
#line 1831 "cplus.met"
#line 1832 "cplus.met"
        {
#line 1832 "cplus.met"
            PPTREE _ptTree0=0;
#line 1832 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 1832 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                PROG_EXIT(enum_declarator_exit,"enum_declarator")
#line 1832 "cplus.met"
            }
#line 1832 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 1832 "cplus.met"
        }
#line 1832 "cplus.met"
#line 1832 "cplus.met"
#line 1832 "cplus.met"
    }
#line 1832 "cplus.met"
#line 1834 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1834 "cplus.met"
#line 1835 "cplus.met"
#line 1835 "cplus.met"
        _addlist1 = list ;
#line 1835 "cplus.met"
#line 1836 "cplus.met"
        do {
#line 1836 "cplus.met"
#line 1837 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 61, cplus)){
#line 1837 "cplus.met"
#line 1838 "cplus.met"
#line 1838 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1838 "cplus.met"
#line 1838 "cplus.met"
                if (list){
#line 1838 "cplus.met"
#line 1838 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1838 "cplus.met"
                } else {
#line 1838 "cplus.met"
#line 1838 "cplus.met"
                    list = _addlist1 ;
#line 1838 "cplus.met"
                }
#line 1838 "cplus.met"
            } else {
#line 1838 "cplus.met"
#line 1840 "cplus.met"
                
#line 1840 "cplus.met"
                MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1840 "cplus.met"
                goto enum_declarator_exit;
#line 1840 "cplus.met"
            }
#line 1840 "cplus.met"
#line 1840 "cplus.met"
#line 1841 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1841 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1841 "cplus.met"
#line 1842 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1842 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1842 "cplus.met"
            MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1842 "cplus.met"
        } else {
#line 1842 "cplus.met"
            tokenAhead = 0 ;
#line 1842 "cplus.met"
        }
#line 1842 "cplus.met"
#line 1843 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1843 "cplus.met"
#line 1843 "cplus.met"
#line 1843 "cplus.met"
    }
#line 1843 "cplus.met"
#line 1845 "cplus.met"
    {
#line 1845 "cplus.met"
        _retValue = retTree ;
#line 1845 "cplus.met"
        goto enum_declarator_ret;
#line 1845 "cplus.met"
        
#line 1845 "cplus.met"
    }
#line 1845 "cplus.met"
#line 1845 "cplus.met"
#line 1845 "cplus.met"

#line 1846 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1846 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1846 "cplus.met"
return((PPTREE) 0);
#line 1846 "cplus.met"

#line 1846 "cplus.met"
enum_declarator_exit :
#line 1846 "cplus.met"

#line 1846 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1846 "cplus.met"
    _funcLevel--;
#line 1846 "cplus.met"
    return((PPTREE) -1) ;
#line 1846 "cplus.met"

#line 1846 "cplus.met"
enum_declarator_ret :
#line 1846 "cplus.met"
    
#line 1846 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
#line 1846 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1846 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1846 "cplus.met"
    return _retValue ;
#line 1846 "cplus.met"
}
#line 1846 "cplus.met"

#line 1846 "cplus.met"
