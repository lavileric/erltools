/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2497 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2497 "cplus.met"
{
#line 2497 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2497 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2497 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2497 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2497 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2497 "cplus.met"
#line 2497 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2497 "cplus.met"
#line 2499 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2499 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2499 "cplus.met"
#line 2500 "cplus.met"
        
#line 2500 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2500 "cplus.met"
        goto declarator_follow_exit;
#line 2500 "cplus.met"
#line 2500 "cplus.met"
    }
#line 2500 "cplus.met"
#line 2501 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2501 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2501 "cplus.met"
#line 2502 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2502 "cplus.met"
        switch( lexEl.Value) {
#line 2502 "cplus.met"
#line 2505 "cplus.met"
            case COUV : 
#line 2505 "cplus.met"
                tokenAhead = 0 ;
#line 2505 "cplus.met"
                CommTerm();
#line 2505 "cplus.met"
#line 2504 "cplus.met"
#line 2505 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 2505 "cplus.met"
#line 2506 "cplus.met"
                    {
#line 2506 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2506 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2506 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2506 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2506 "cplus.met"
                        retTree=_ptRes0;
#line 2506 "cplus.met"
                    }
#line 2506 "cplus.met"
                } else {
#line 2506 "cplus.met"
#line 2508 "cplus.met"
                    {
#line 2508 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2508 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2508 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2508 "cplus.met"
                        retTree=_ptRes0;
#line 2508 "cplus.met"
                    }
#line 2508 "cplus.met"
                }
#line 2508 "cplus.met"
#line 2509 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2509 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2509 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2509 "cplus.met"
                } else {
#line 2509 "cplus.met"
                    tokenAhead = 0 ;
#line 2509 "cplus.met"
                }
#line 2509 "cplus.met"
#line 2509 "cplus.met"
                break;
#line 2509 "cplus.met"
#line 2516 "cplus.met"
            case POUV : 
#line 2516 "cplus.met"
#line 2512 "cplus.met"
#line 2515 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 15, cplus)){
#line 2515 "cplus.met"
#line 2517 "cplus.met"
#line 2518 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2518 "cplus.met"
#line 2519 "cplus.met"
                    {
#line 2519 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2519 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2519 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2519 "cplus.met"
                        }
#line 2519 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2519 "cplus.met"
                    }
#line 2519 "cplus.met"
#line 2520 "cplus.met"
                    retTree = valTree ;
#line 2520 "cplus.met"
#line 2520 "cplus.met"
#line 2520 "cplus.met"
                } else {
#line 2520 "cplus.met"
#line 2523 "cplus.met"
                    {
#line 2523 "cplus.met"
                        _retValue = retTree ;
#line 2523 "cplus.met"
                        goto declarator_follow_ret;
#line 2523 "cplus.met"
                        
#line 2523 "cplus.met"
                    }
#line 2523 "cplus.met"
                }
#line 2523 "cplus.met"
#line 2523 "cplus.met"
                break;
#line 2523 "cplus.met"
            default :
#line 2523 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2523 "cplus.met"
                break;
#line 2523 "cplus.met"
        }
#line 2523 "cplus.met"
    } 
#line 2523 "cplus.met"
#line 2526 "cplus.met"
    {
#line 2526 "cplus.met"
        _retValue = retTree ;
#line 2526 "cplus.met"
        goto declarator_follow_ret;
#line 2526 "cplus.met"
        
#line 2526 "cplus.met"
    }
#line 2526 "cplus.met"
#line 2526 "cplus.met"
#line 2526 "cplus.met"

#line 2527 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2527 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2527 "cplus.met"
return((PPTREE) 0);
#line 2527 "cplus.met"

#line 2527 "cplus.met"
declarator_follow_exit :
#line 2527 "cplus.met"

#line 2527 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2527 "cplus.met"
    _funcLevel--;
#line 2527 "cplus.met"
    return((PPTREE) -1) ;
#line 2527 "cplus.met"

#line 2527 "cplus.met"
declarator_follow_ret :
#line 2527 "cplus.met"
    
#line 2527 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2527 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2527 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2527 "cplus.met"
    return _retValue ;
#line 2527 "cplus.met"
}
#line 2527 "cplus.met"

#line 2527 "cplus.met"
#line 1745 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1745 "cplus.met"
{
#line 1745 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1745 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1745 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1745 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1745 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1745 "cplus.met"
#line 1745 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1745 "cplus.met"
#line 1745 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1745 "cplus.met"
#line 1745 "cplus.met"
    _addlist1 = list ;
#line 1745 "cplus.met"
#line 1747 "cplus.met"
    do {
#line 1747 "cplus.met"
#line 1748 "cplus.met"
        {
#line 1748 "cplus.met"
            PPTREE _ptTree0=0;
#line 1748 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1748 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1748 "cplus.met"
            }
#line 1748 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1748 "cplus.met"
        }
#line 1748 "cplus.met"
#line 1748 "cplus.met"
        if (list){
#line 1748 "cplus.met"
#line 1748 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1748 "cplus.met"
        } else {
#line 1748 "cplus.met"
#line 1748 "cplus.met"
            list = _addlist1 ;
#line 1748 "cplus.met"
        }
#line 1748 "cplus.met"
#line 1748 "cplus.met"
#line 1749 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1749 "cplus.met"
#line 1750 "cplus.met"
    {
#line 1750 "cplus.met"
        _retValue = list ;
#line 1750 "cplus.met"
        goto declarator_list_ret;
#line 1750 "cplus.met"
        
#line 1750 "cplus.met"
    }
#line 1750 "cplus.met"
#line 1750 "cplus.met"
#line 1750 "cplus.met"

#line 1751 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1751 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1751 "cplus.met"
return((PPTREE) 0);
#line 1751 "cplus.met"

#line 1751 "cplus.met"
declarator_list_exit :
#line 1751 "cplus.met"

#line 1751 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1751 "cplus.met"
    _funcLevel--;
#line 1751 "cplus.met"
    return((PPTREE) -1) ;
#line 1751 "cplus.met"

#line 1751 "cplus.met"
declarator_list_ret :
#line 1751 "cplus.met"
    
#line 1751 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1751 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1751 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1751 "cplus.met"
    return _retValue ;
#line 1751 "cplus.met"
}
#line 1751 "cplus.met"

#line 1751 "cplus.met"
#line 1736 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1736 "cplus.met"
{
#line 1736 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1736 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1736 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1736 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1736 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1736 "cplus.met"
#line 1736 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1736 "cplus.met"
#line 1736 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1736 "cplus.met"
#line 1736 "cplus.met"
    _addlist1 = list ;
#line 1736 "cplus.met"
#line 1738 "cplus.met"
    do {
#line 1738 "cplus.met"
#line 1739 "cplus.met"
        {
#line 1739 "cplus.met"
            PPTREE _ptTree0=0;
#line 1739 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 1739 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1739 "cplus.met"
            }
#line 1739 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1739 "cplus.met"
        }
#line 1739 "cplus.met"
#line 1739 "cplus.met"
        if (list){
#line 1739 "cplus.met"
#line 1739 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1739 "cplus.met"
        } else {
#line 1739 "cplus.met"
#line 1739 "cplus.met"
            list = _addlist1 ;
#line 1739 "cplus.met"
        }
#line 1739 "cplus.met"
#line 1739 "cplus.met"
#line 1740 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1740 "cplus.met"
#line 1741 "cplus.met"
    {
#line 1741 "cplus.met"
        _retValue = list ;
#line 1741 "cplus.met"
        goto declarator_list_init_ret;
#line 1741 "cplus.met"
        
#line 1741 "cplus.met"
    }
#line 1741 "cplus.met"
#line 1741 "cplus.met"
#line 1741 "cplus.met"

#line 1742 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1742 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1742 "cplus.met"
return((PPTREE) 0);
#line 1742 "cplus.met"

#line 1742 "cplus.met"
declarator_list_init_exit :
#line 1742 "cplus.met"

#line 1742 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1742 "cplus.met"
    _funcLevel--;
#line 1742 "cplus.met"
    return((PPTREE) -1) ;
#line 1742 "cplus.met"

#line 1742 "cplus.met"
declarator_list_init_ret :
#line 1742 "cplus.met"
    
#line 1742 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1742 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1742 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1742 "cplus.met"
    return _retValue ;
#line 1742 "cplus.met"
}
#line 1742 "cplus.met"

#line 1742 "cplus.met"
#line 1716 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1716 "cplus.met"
{
#line 1716 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1716 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1716 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1716 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1716 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1716 "cplus.met"
#line 1716 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1716 "cplus.met"
#line 1718 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1718 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1718 "cplus.met"
    }
#line 1718 "cplus.met"
#line 1719 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1719 "cplus.met"
    switch( lexEl.Value) {
#line 1719 "cplus.met"
#line 1720 "cplus.met"
        case EGAL : 
#line 1720 "cplus.met"
            tokenAhead = 0 ;
#line 1720 "cplus.met"
            CommTerm();
#line 1720 "cplus.met"
#line 1720 "cplus.met"
            {
#line 1720 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1720 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1720 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1720 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 1720 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1720 "cplus.met"
                }
#line 1720 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1720 "cplus.met"
                valTree=_ptRes0;
#line 1720 "cplus.met"
            }
#line 1720 "cplus.met"
            break;
#line 1720 "cplus.met"
#line 1723 "cplus.met"
        case POUV : 
#line 1723 "cplus.met"
            tokenAhead = 0 ;
#line 1723 "cplus.met"
            CommTerm();
#line 1723 "cplus.met"
#line 1722 "cplus.met"
#line 1723 "cplus.met"
            {
#line 1723 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1723 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1723 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1723 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1723 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1723 "cplus.met"
                }
#line 1723 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1723 "cplus.met"
                valTree=_ptRes0;
#line 1723 "cplus.met"
            }
#line 1723 "cplus.met"
#line 1724 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1724 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1724 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1724 "cplus.met"
            } else {
#line 1724 "cplus.met"
                tokenAhead = 0 ;
#line 1724 "cplus.met"
            }
#line 1724 "cplus.met"
#line 1724 "cplus.met"
            break;
#line 1724 "cplus.met"
#line 1728 "cplus.met"
        case AOUV : 
#line 1728 "cplus.met"
            tokenAhead = 0 ;
#line 1728 "cplus.met"
            CommTerm();
#line 1728 "cplus.met"
#line 1727 "cplus.met"
#line 1728 "cplus.met"
            {
#line 1728 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1728 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_BRA, 2);
#line 1728 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1728 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1728 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1728 "cplus.met"
                }
#line 1728 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1728 "cplus.met"
                valTree=_ptRes0;
#line 1728 "cplus.met"
            }
#line 1728 "cplus.met"
#line 1729 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1729 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1729 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,"}")
#line 1729 "cplus.met"
            } else {
#line 1729 "cplus.met"
                tokenAhead = 0 ;
#line 1729 "cplus.met"
            }
#line 1729 "cplus.met"
#line 1729 "cplus.met"
            break;
#line 1729 "cplus.met"
#line 1729 "cplus.met"
        default : 
#line 1729 "cplus.met"
#line 1729 "cplus.met"
            break;
#line 1729 "cplus.met"
    }
#line 1729 "cplus.met"
#line 1733 "cplus.met"
    {
#line 1733 "cplus.met"
        _retValue = valTree ;
#line 1733 "cplus.met"
        goto declarator_value_ret;
#line 1733 "cplus.met"
        
#line 1733 "cplus.met"
    }
#line 1733 "cplus.met"
#line 1733 "cplus.met"
#line 1733 "cplus.met"

#line 1734 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1734 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1734 "cplus.met"
return((PPTREE) 0);
#line 1734 "cplus.met"

#line 1734 "cplus.met"
declarator_value_exit :
#line 1734 "cplus.met"

#line 1734 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1734 "cplus.met"
    _funcLevel--;
#line 1734 "cplus.met"
    return((PPTREE) -1) ;
#line 1734 "cplus.met"

#line 1734 "cplus.met"
declarator_value_ret :
#line 1734 "cplus.met"
    
#line 1734 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1734 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1734 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1734 "cplus.met"
    return _retValue ;
#line 1734 "cplus.met"
}
#line 1734 "cplus.met"

#line 1734 "cplus.met"
#line 1671 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1671 "cplus.met"
{
#line 1671 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1671 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1671 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1671 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1671 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1671 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1671 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1671 "cplus.met"
#line 1671 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1671 "cplus.met"
#line 1671 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1671 "cplus.met"
#line 1673 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1673 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1673 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1673 "cplus.met"
    } else {
#line 1673 "cplus.met"
        tokenAhead = 0 ;
#line 1673 "cplus.met"
    }
#line 1673 "cplus.met"
#line 1674 "cplus.met"
    {
#line 1674 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1674 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1674 "cplus.met"
        {
#line 1674 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1674 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1674 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1674 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1674 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
#line 1674 "cplus.met"
            } else {
#line 1674 "cplus.met"
                tokenAhead = 0 ;
#line 1674 "cplus.met"
            }
#line 1674 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1674 "cplus.met"
            _ptTree0=_ptRes1;
#line 1674 "cplus.met"
        }
#line 1674 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1674 "cplus.met"
        retTree=_ptRes0;
#line 1674 "cplus.met"
    }
#line 1674 "cplus.met"
#line 1675 "cplus.met"
    {
#line 1675 "cplus.met"
        keepCarriage = 1 ;
#line 1675 "cplus.met"
#line 1676 "cplus.met"
#line 1677 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1677 "cplus.met"
#line 1678 "cplus.met"
            {
#line 1678 "cplus.met"
                PPTREE _ptTree0=0;
#line 1678 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 1678 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1678 "cplus.met"
                }
#line 1678 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1678 "cplus.met"
            }
#line 1678 "cplus.met"
#line 1678 "cplus.met"
        }
#line 1678 "cplus.met"
#line 1679 "cplus.met"
        ExtUnputBuf();
#line 1679 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1679 "cplus.met"
            NextChar() ;
#line 1679 "cplus.met"
        ptStockBuf = -1;
#line 1679 "cplus.met"
        lexEl.Erase();
#line 1679 "cplus.met"
        tokenAhead = 0;
#line 1679 "cplus.met"
        oldLine=line,oldCol=col;
#line 1679 "cplus.met"
        if ( !lexCallLex) {
#line 1679 "cplus.met"
            PUT_COORD_CALL;
#line 1679 "cplus.met"
        }
#line 1679 "cplus.met"
#line 1680 "cplus.met"
        {
#line 1680 "cplus.met"
            keepAll = 1 ;
#line 1680 "cplus.met"
#line 1681 "cplus.met"
#line 1681 "cplus.met"
            _addlist1 = listDefine ;
#line 1681 "cplus.met"
#line 1682 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1682 "cplus.met"
#line 1683 "cplus.met"
#line 1683 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1683 "cplus.met"
#line 1683 "cplus.met"
                if (listDefine){
#line 1683 "cplus.met"
#line 1683 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1683 "cplus.met"
                } else {
#line 1683 "cplus.met"
#line 1683 "cplus.met"
                    listDefine = _addlist1 ;
#line 1683 "cplus.met"
                }
#line 1683 "cplus.met"
            } 
#line 1683 "cplus.met"
#line 1684 "cplus.met"
            {
#line 1684 "cplus.met"
                PPTREE _ptTree0=0;
#line 1684 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1684 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1684 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1684 "cplus.met"
                } else {
#line 1684 "cplus.met"
                    tokenAhead = 0 ;
#line 1684 "cplus.met"
                }
#line 1684 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1684 "cplus.met"
            }
#line 1684 "cplus.met"
#line 1684 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1684 "cplus.met"
        }
#line 1684 "cplus.met"
#line 1684 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1684 "cplus.met"
    }
#line 1684 "cplus.met"
#line 1687 "cplus.met"
    {
#line 1687 "cplus.met"
        PPTREE _ptTree0=0;
#line 1687 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1687 "cplus.met"
        _retValue =_ptTree0;
#line 1687 "cplus.met"
        goto define_dir_ret;
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
keepCarriage =  _oldkeepCarriage;
#line 1688 "cplus.met"
keepAll =  _oldkeepAll;
#line 1688 "cplus.met"
return((PPTREE) 0);
#line 1688 "cplus.met"

#line 1688 "cplus.met"
define_dir_exit :
#line 1688 "cplus.met"

#line 1688 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1688 "cplus.met"
    _funcLevel--;
#line 1688 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1688 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1688 "cplus.met"
    return((PPTREE) -1) ;
#line 1688 "cplus.met"

#line 1688 "cplus.met"
define_dir_ret :
#line 1688 "cplus.met"
    
#line 1688 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1688 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1688 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1688 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1688 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1688 "cplus.met"
    return _retValue ;
#line 1688 "cplus.met"
}
#line 1688 "cplus.met"

#line 1688 "cplus.met"
#line 1493 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1493 "cplus.met"
{
#line 1493 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1493 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1493 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1493 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1493 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1493 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1493 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1493 "cplus.met"
#line 1493 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 1493 "cplus.met"
#line 1493 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0,exp = (PPTREE) 0;
#line 1493 "cplus.met"
#line 1495 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1495 "cplus.met"
    switch( lexEl.Value) {
#line 1495 "cplus.met"
#line 1496 "cplus.met"
        case META : 
#line 1496 "cplus.met"
        case DEFINE_DIR : 
#line 1496 "cplus.met"
#line 1496 "cplus.met"
            {
#line 1496 "cplus.met"
                PPTREE _ptTree0=0;
#line 1496 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 56, cplus))== (PPTREE) -1 ) {
#line 1496 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1496 "cplus.met"
                }
#line 1496 "cplus.met"
                _retValue =_ptTree0;
#line 1496 "cplus.met"
                goto directive_ret;
#line 1496 "cplus.met"
            }
#line 1496 "cplus.met"
            break;
#line 1496 "cplus.met"
#line 1497 "cplus.met"
        case INCLUDE_DIR : 
#line 1497 "cplus.met"
#line 1497 "cplus.met"
            {
#line 1497 "cplus.met"
                PPTREE _ptTree0=0;
#line 1497 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 1497 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1497 "cplus.met"
                }
#line 1497 "cplus.met"
                _retValue =_ptTree0;
#line 1497 "cplus.met"
                goto directive_ret;
#line 1497 "cplus.met"
            }
#line 1497 "cplus.met"
            break;
#line 1497 "cplus.met"
#line 1498 "cplus.met"
        case LINE_DIR : 
#line 1498 "cplus.met"
            tokenAhead = 0 ;
#line 1498 "cplus.met"
            CommTerm();
#line 1498 "cplus.met"
#line 1499 "cplus.met"
#line 1500 "cplus.met"
            {
#line 1500 "cplus.met"
                keepCarriage = 1 ;
#line 1500 "cplus.met"
#line 1501 "cplus.met"
#line 1502 "cplus.met"
                {
#line 1502 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1502 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1502 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1502 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1502 "cplus.met"
                    }
#line 1502 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1502 "cplus.met"
                    retTree=_ptRes0;
#line 1502 "cplus.met"
                }
#line 1502 "cplus.met"
#line 1503 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1503 "cplus.met"
#line 1504 "cplus.met"
                    {
#line 1504 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1504 "cplus.met"
                        {
#line 1504 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1504 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1504 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1504 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1504 "cplus.met"
                        }
#line 1504 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1504 "cplus.met"
                    }
#line 1504 "cplus.met"
#line 1504 "cplus.met"
                }
#line 1504 "cplus.met"
#line 1505 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1505 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1505 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1505 "cplus.met"
                } else {
#line 1505 "cplus.met"
                    tokenAhead = 0 ;
#line 1505 "cplus.met"
                }
#line 1505 "cplus.met"
#line 1505 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1505 "cplus.met"
            }
#line 1505 "cplus.met"
#line 1507 "cplus.met"
            {
#line 1507 "cplus.met"
                _retValue = retTree ;
#line 1507 "cplus.met"
                goto directive_ret;
#line 1507 "cplus.met"
                
#line 1507 "cplus.met"
            }
#line 1507 "cplus.met"
#line 1507 "cplus.met"
            break;
#line 1507 "cplus.met"
#line 1509 "cplus.met"
        case LINE_REFERENCE_DIR : 
#line 1509 "cplus.met"
            tokenAhead = 0 ;
#line 1509 "cplus.met"
            CommTerm();
#line 1509 "cplus.met"
#line 1510 "cplus.met"
#line 1511 "cplus.met"
            {
#line 1511 "cplus.met"
                keepCarriage = 1 ;
#line 1511 "cplus.met"
#line 1512 "cplus.met"
#line 1513 "cplus.met"
                {
#line 1513 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1513 "cplus.met"
                    _ptRes0= MakeTree(LINE_REFERENCE_DIR, 3);
#line 1513 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1513 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1513 "cplus.met"
                    }
#line 1513 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1513 "cplus.met"
                    retTree=_ptRes0;
#line 1513 "cplus.met"
                }
#line 1513 "cplus.met"
#line 1514 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1514 "cplus.met"
#line 1515 "cplus.met"
                    {
#line 1515 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1515 "cplus.met"
                        {
#line 1515 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1515 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1515 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1515 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1515 "cplus.met"
                        }
#line 1515 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1515 "cplus.met"
                    }
#line 1515 "cplus.met"
#line 1515 "cplus.met"
                }
#line 1515 "cplus.met"
#line 1515 "cplus.met"
                _addlist1 = list ;
#line 1515 "cplus.met"
#line 1516 "cplus.met"
                while (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(expression), 67, cplus)) { 
#line 1516 "cplus.met"
#line 1517 "cplus.met"
#line 1517 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,exp );
#line 1517 "cplus.met"
#line 1517 "cplus.met"
                    if (list){
#line 1517 "cplus.met"
#line 1517 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1517 "cplus.met"
                    } else {
#line 1517 "cplus.met"
#line 1517 "cplus.met"
                        list = _addlist1 ;
#line 1517 "cplus.met"
                    }
#line 1517 "cplus.met"
                } 
#line 1517 "cplus.met"
#line 1518 "cplus.met"
                ReplaceTree(retTree ,3 ,list );
#line 1518 "cplus.met"
#line 1519 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1519 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1519 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1519 "cplus.met"
                } else {
#line 1519 "cplus.met"
                    tokenAhead = 0 ;
#line 1519 "cplus.met"
                }
#line 1519 "cplus.met"
#line 1519 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1519 "cplus.met"
            }
#line 1519 "cplus.met"
#line 1521 "cplus.met"
            {
#line 1521 "cplus.met"
                _retValue = retTree ;
#line 1521 "cplus.met"
                goto directive_ret;
#line 1521 "cplus.met"
                
#line 1521 "cplus.met"
            }
#line 1521 "cplus.met"
#line 1521 "cplus.met"
            break;
#line 1521 "cplus.met"
#line 1523 "cplus.met"
        case UNDEF_DIR : 
#line 1523 "cplus.met"
            tokenAhead = 0 ;
#line 1523 "cplus.met"
            CommTerm();
#line 1523 "cplus.met"
#line 1523 "cplus.met"
            {
#line 1523 "cplus.met"
                PPTREE _ptTree0=0;
#line 1523 "cplus.met"
                {
#line 1523 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1523 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1523 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1523 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1523 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1523 "cplus.met"
                    } else {
#line 1523 "cplus.met"
                        tokenAhead = 0 ;
#line 1523 "cplus.met"
                    }
#line 1523 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1523 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1523 "cplus.met"
                }
#line 1523 "cplus.met"
                _retValue =_ptTree0;
#line 1523 "cplus.met"
                goto directive_ret;
#line 1523 "cplus.met"
            }
#line 1523 "cplus.met"
            break;
#line 1523 "cplus.met"
#line 1524 "cplus.met"
        case ERROR_DIR : 
#line 1524 "cplus.met"
            tokenAhead = 0 ;
#line 1524 "cplus.met"
            CommTerm();
#line 1524 "cplus.met"
#line 1524 "cplus.met"
            {
#line 1524 "cplus.met"
                PPTREE _ptTree0=0;
#line 1524 "cplus.met"
                {
#line 1524 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1524 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1524 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1524 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1524 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1524 "cplus.met"
                    } else {
#line 1524 "cplus.met"
                        tokenAhead = 0 ;
#line 1524 "cplus.met"
                    }
#line 1524 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1524 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1524 "cplus.met"
                }
#line 1524 "cplus.met"
                _retValue =_ptTree0;
#line 1524 "cplus.met"
                goto directive_ret;
#line 1524 "cplus.met"
            }
#line 1524 "cplus.met"
            break;
#line 1524 "cplus.met"
#line 1525 "cplus.met"
        case PRAGMA_DIR : 
#line 1525 "cplus.met"
            tokenAhead = 0 ;
#line 1525 "cplus.met"
            CommTerm();
#line 1525 "cplus.met"
#line 1526 "cplus.met"
#line 1527 "cplus.met"
#line 1528 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1528 "cplus.met"
#line 1529 "cplus.met"
#line 1530 "cplus.met"
                {
#line 1530 "cplus.met"
                    keepCarriage = 1 ;
#line 1530 "cplus.met"
#line 1531 "cplus.met"
#line 1532 "cplus.met"
                    {
#line 1532 "cplus.met"
                        keepAll = 1 ;
#line 1532 "cplus.met"
#line 1533 "cplus.met"
#line 1534 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1534 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1534 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1534 "cplus.met"
                        } else {
#line 1534 "cplus.met"
                            tokenAhead = 0 ;
#line 1534 "cplus.met"
                        }
#line 1534 "cplus.met"
#line 1534 "cplus.met"
                        _addlist2 = list ;
#line 1534 "cplus.met"
#line 1535 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 58, cplus))) { 
#line 1535 "cplus.met"
#line 1536 "cplus.met"
#line 1536 "cplus.met"
                            {
#line 1536 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1536 "cplus.met"
                                {
#line 1536 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1536 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1536 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1536 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1536 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1536 "cplus.met"
                                    } else {
#line 1536 "cplus.met"
                                        tokenAhead = 0 ;
#line 1536 "cplus.met"
                                    }
#line 1536 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1536 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1536 "cplus.met"
                                }
#line 1536 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1536 "cplus.met"
                            }
#line 1536 "cplus.met"
#line 1536 "cplus.met"
                            if (list){
#line 1536 "cplus.met"
#line 1536 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1536 "cplus.met"
                            } else {
#line 1536 "cplus.met"
#line 1536 "cplus.met"
                                list = _addlist2 ;
#line 1536 "cplus.met"
                            }
#line 1536 "cplus.met"
                        } 
#line 1536 "cplus.met"
#line 1537 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 58, cplus))== (PPTREE) -1 ) {
#line 1537 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1537 "cplus.met"
                        }
#line 1537 "cplus.met"
#line 1537 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1537 "cplus.met"
                    }
#line 1537 "cplus.met"
#line 1537 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1537 "cplus.met"
                }
#line 1537 "cplus.met"
#line 1541 "cplus.met"
                 tokenAhead = 0;
#line 1541 "cplus.met"
#line 1543 "cplus.met"
                {
#line 1543 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1543 "cplus.met"
                    {
#line 1543 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1543 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1543 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1543 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1543 "cplus.met"
                    }
#line 1543 "cplus.met"
                    _retValue =_ptTree0;
#line 1543 "cplus.met"
                    goto directive_ret;
#line 1543 "cplus.met"
                }
#line 1543 "cplus.met"
#line 1543 "cplus.met"
            } else 
#line 1543 "cplus.met"
#line 1545 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
#line 1545 "cplus.met"
#line 1546 "cplus.met"
#line 1547 "cplus.met"
                {
#line 1547 "cplus.met"
                    keepCarriage = 1 ;
#line 1547 "cplus.met"
#line 1548 "cplus.met"
#line 1549 "cplus.met"
                    {
#line 1549 "cplus.met"
                        keepAll = 1 ;
#line 1549 "cplus.met"
#line 1550 "cplus.met"
#line 1551 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1551 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1551 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1551 "cplus.met"
                        } else {
#line 1551 "cplus.met"
                            tokenAhead = 0 ;
#line 1551 "cplus.met"
                        }
#line 1551 "cplus.met"
#line 1551 "cplus.met"
                        _addlist3 = list ;
#line 1551 "cplus.met"
#line 1552 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 59, cplus))) { 
#line 1552 "cplus.met"
#line 1553 "cplus.met"
#line 1553 "cplus.met"
                            {
#line 1553 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1553 "cplus.met"
                                {
#line 1553 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1553 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1553 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1553 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1553 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1553 "cplus.met"
                                    } else {
#line 1553 "cplus.met"
                                        tokenAhead = 0 ;
#line 1553 "cplus.met"
                                    }
#line 1553 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1553 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1553 "cplus.met"
                                }
#line 1553 "cplus.met"
                                _addlist3 =AddList(_addlist3 , _ptTree0);
#line 1553 "cplus.met"
                            }
#line 1553 "cplus.met"
#line 1553 "cplus.met"
                            if (list){
#line 1553 "cplus.met"
#line 1553 "cplus.met"
                                _addlist3 = SonTree (_addlist3 ,2 );
#line 1553 "cplus.met"
                            } else {
#line 1553 "cplus.met"
#line 1553 "cplus.met"
                                list = _addlist3 ;
#line 1553 "cplus.met"
                            }
#line 1553 "cplus.met"
                        } 
#line 1553 "cplus.met"
#line 1554 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1554 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1554 "cplus.met"
                        }
#line 1554 "cplus.met"
#line 1554 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1554 "cplus.met"
                    }
#line 1554 "cplus.met"
#line 1554 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1554 "cplus.met"
                }
#line 1554 "cplus.met"
#line 1558 "cplus.met"
                 tokenAhead = 0;
#line 1558 "cplus.met"
#line 1560 "cplus.met"
                {
#line 1560 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1560 "cplus.met"
                    {
#line 1560 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1560 "cplus.met"
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
#line 1560 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1560 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1560 "cplus.met"
                    }
#line 1560 "cplus.met"
                    _retValue =_ptTree0;
#line 1560 "cplus.met"
                    goto directive_ret;
#line 1560 "cplus.met"
                }
#line 1560 "cplus.met"
#line 1560 "cplus.met"
            } else 
#line 1560 "cplus.met"
#line 1562 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1562 "cplus.met"
#line 1563 "cplus.met"
#line 1564 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1564 "cplus.met"
                switch( lexEl.Value) {
#line 1564 "cplus.met"
#line 1565 "cplus.met"
                    case META : 
#line 1565 "cplus.met"
                    case PRAGMA_TAB : 
#line 1565 "cplus.met"
                        tokenAhead = 0 ;
#line 1565 "cplus.met"
                        CommTerm();
#line 1565 "cplus.met"
#line 1566 "cplus.met"
#line 1567 "cplus.met"
                        {
#line 1567 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1567 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1567 "cplus.met"
                            {
#line 1567 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1567 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1567 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1567 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1567 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1567 "cplus.met"
                                } else {
#line 1567 "cplus.met"
                                    tokenAhead = 0 ;
#line 1567 "cplus.met"
                                }
#line 1567 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1567 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1567 "cplus.met"
                            }
#line 1567 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1567 "cplus.met"
                            retTree=_ptRes0;
#line 1567 "cplus.met"
                        }
#line 1567 "cplus.met"
#line 1568 "cplus.met"
                        AnalyzeTab (retTree );
#line 1568 "cplus.met"
#line 1569 "cplus.met"
                        {
#line 1569 "cplus.met"
                            _retValue = retTree ;
#line 1569 "cplus.met"
                            goto directive_ret;
#line 1569 "cplus.met"
                            
#line 1569 "cplus.met"
                        }
#line 1569 "cplus.met"
#line 1569 "cplus.met"
                        break;
#line 1569 "cplus.met"
#line 1571 "cplus.met"
                    case PRAGMA_MODE : 
#line 1571 "cplus.met"
                        tokenAhead = 0 ;
#line 1571 "cplus.met"
                        CommTerm();
#line 1571 "cplus.met"
#line 1572 "cplus.met"
#line 1573 "cplus.met"
                        {
#line 1573 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1573 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1573 "cplus.met"
                            {
#line 1573 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1573 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1573 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1573 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1573 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1573 "cplus.met"
                                } else {
#line 1573 "cplus.met"
                                    tokenAhead = 0 ;
#line 1573 "cplus.met"
                                }
#line 1573 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1573 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1573 "cplus.met"
                            }
#line 1573 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1573 "cplus.met"
                            retTree=_ptRes0;
#line 1573 "cplus.met"
                        }
#line 1573 "cplus.met"
#line 1574 "cplus.met"
                        AnalyzeMode (retTree );
#line 1574 "cplus.met"
#line 1575 "cplus.met"
                        {
#line 1575 "cplus.met"
                            _retValue = retTree ;
#line 1575 "cplus.met"
                            goto directive_ret;
#line 1575 "cplus.met"
                            
#line 1575 "cplus.met"
                        }
#line 1575 "cplus.met"
#line 1575 "cplus.met"
                        break;
#line 1575 "cplus.met"
#line 1577 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1577 "cplus.met"
                        tokenAhead = 0 ;
#line 1577 "cplus.met"
                        CommTerm();
#line 1577 "cplus.met"
#line 1578 "cplus.met"
#line 1579 "cplus.met"
                        {
#line 1579 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1579 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1579 "cplus.met"
                            {
#line 1579 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1579 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1579 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1579 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1579 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1579 "cplus.met"
                                } else {
#line 1579 "cplus.met"
                                    tokenAhead = 0 ;
#line 1579 "cplus.met"
                                }
#line 1579 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1579 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1579 "cplus.met"
                            }
#line 1579 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1579 "cplus.met"
                            retTree=_ptRes0;
#line 1579 "cplus.met"
                        }
#line 1579 "cplus.met"
#line 1580 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1580 "cplus.met"
#line 1581 "cplus.met"
                        {
#line 1581 "cplus.met"
                            _retValue = retTree ;
#line 1581 "cplus.met"
                            goto directive_ret;
#line 1581 "cplus.met"
                            
#line 1581 "cplus.met"
                        }
#line 1581 "cplus.met"
#line 1581 "cplus.met"
                        break;
#line 1581 "cplus.met"
#line 1583 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1583 "cplus.met"
                        tokenAhead = 0 ;
#line 1583 "cplus.met"
                        CommTerm();
#line 1583 "cplus.met"
#line 1584 "cplus.met"
#line 1585 "cplus.met"
                        {
#line 1585 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1585 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1585 "cplus.met"
                            {
#line 1585 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1585 "cplus.met"
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1585 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1585 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1585 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1585 "cplus.met"
                                } else {
#line 1585 "cplus.met"
                                    tokenAhead = 0 ;
#line 1585 "cplus.met"
                                }
#line 1585 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1585 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1585 "cplus.met"
                            }
#line 1585 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1585 "cplus.met"
                            retTree=_ptRes0;
#line 1585 "cplus.met"
                        }
#line 1585 "cplus.met"
#line 1586 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1586 "cplus.met"
#line 1587 "cplus.met"
                        {
#line 1587 "cplus.met"
                            _retValue = retTree ;
#line 1587 "cplus.met"
                            goto directive_ret;
#line 1587 "cplus.met"
                            
#line 1587 "cplus.met"
                        }
#line 1587 "cplus.met"
#line 1587 "cplus.met"
                        break;
#line 1587 "cplus.met"
#line 1589 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1589 "cplus.met"
                        tokenAhead = 0 ;
#line 1589 "cplus.met"
                        CommTerm();
#line 1589 "cplus.met"
#line 1590 "cplus.met"
#line 1591 "cplus.met"
                        {
#line 1591 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1591 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1591 "cplus.met"
                            {
#line 1591 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1591 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1591 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1591 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1591 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1591 "cplus.met"
                                } else {
#line 1591 "cplus.met"
                                    tokenAhead = 0 ;
#line 1591 "cplus.met"
                                }
#line 1591 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1591 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1591 "cplus.met"
                            }
#line 1591 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1591 "cplus.met"
                            retTree=_ptRes0;
#line 1591 "cplus.met"
                        }
#line 1591 "cplus.met"
#line 1592 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1592 "cplus.met"
#line 1593 "cplus.met"
                        {
#line 1593 "cplus.met"
                            _retValue = retTree ;
#line 1593 "cplus.met"
                            goto directive_ret;
#line 1593 "cplus.met"
                            
#line 1593 "cplus.met"
                        }
#line 1593 "cplus.met"
#line 1593 "cplus.met"
                        break;
#line 1593 "cplus.met"
#line 1595 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1595 "cplus.met"
                        tokenAhead = 0 ;
#line 1595 "cplus.met"
                        CommTerm();
#line 1595 "cplus.met"
#line 1596 "cplus.met"
#line 1597 "cplus.met"
                        {
#line 1597 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1597 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1597 "cplus.met"
                            {
#line 1597 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1597 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1597 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1597 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1597 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1597 "cplus.met"
                                } else {
#line 1597 "cplus.met"
                                    tokenAhead = 0 ;
#line 1597 "cplus.met"
                                }
#line 1597 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1597 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1597 "cplus.met"
                            }
#line 1597 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1597 "cplus.met"
                            retTree=_ptRes0;
#line 1597 "cplus.met"
                        }
#line 1597 "cplus.met"
#line 1598 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1598 "cplus.met"
#line 1599 "cplus.met"
                        {
#line 1599 "cplus.met"
                            _retValue = retTree ;
#line 1599 "cplus.met"
                            goto directive_ret;
#line 1599 "cplus.met"
                            
#line 1599 "cplus.met"
                        }
#line 1599 "cplus.met"
#line 1599 "cplus.met"
                        break;
#line 1599 "cplus.met"
#line 1601 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1601 "cplus.met"
                        tokenAhead = 0 ;
#line 1601 "cplus.met"
                        CommTerm();
#line 1601 "cplus.met"
#line 1602 "cplus.met"
#line 1603 "cplus.met"
                        {
#line 1603 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1603 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1603 "cplus.met"
                            {
#line 1603 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1603 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1603 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1603 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1603 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1603 "cplus.met"
                                } else {
#line 1603 "cplus.met"
                                    tokenAhead = 0 ;
#line 1603 "cplus.met"
                                }
#line 1603 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1603 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1603 "cplus.met"
                            }
#line 1603 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1603 "cplus.met"
                            retTree=_ptRes0;
#line 1603 "cplus.met"
                        }
#line 1603 "cplus.met"
#line 1604 "cplus.met"
                        AnalyzeBraceAlign (retTree );
#line 1604 "cplus.met"
#line 1605 "cplus.met"
                        {
#line 1605 "cplus.met"
                            _retValue = retTree ;
#line 1605 "cplus.met"
                            goto directive_ret;
#line 1605 "cplus.met"
                            
#line 1605 "cplus.met"
                        }
#line 1605 "cplus.met"
#line 1605 "cplus.met"
                        break;
#line 1605 "cplus.met"
#line 1607 "cplus.met"
                    case PRAGMA_MARGIN : 
#line 1607 "cplus.met"
                        tokenAhead = 0 ;
#line 1607 "cplus.met"
                        CommTerm();
#line 1607 "cplus.met"
#line 1608 "cplus.met"
#line 1609 "cplus.met"
                        {
#line 1609 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1609 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1609 "cplus.met"
                            {
#line 1609 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1609 "cplus.met"
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1609 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1609 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1609 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1609 "cplus.met"
                                } else {
#line 1609 "cplus.met"
                                    tokenAhead = 0 ;
#line 1609 "cplus.met"
                                }
#line 1609 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1609 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1609 "cplus.met"
                            }
#line 1609 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1609 "cplus.met"
                            retTree=_ptRes0;
#line 1609 "cplus.met"
                        }
#line 1609 "cplus.met"
#line 1610 "cplus.met"
                        AnalyzeMargin (retTree );
#line 1610 "cplus.met"
#line 1611 "cplus.met"
                        {
#line 1611 "cplus.met"
                            _retValue = retTree ;
#line 1611 "cplus.met"
                            goto directive_ret;
#line 1611 "cplus.met"
                            
#line 1611 "cplus.met"
                        }
#line 1611 "cplus.met"
#line 1611 "cplus.met"
                        break;
#line 1611 "cplus.met"
#line 1613 "cplus.met"
                    case PRAGMA_COMMENT_START : 
#line 1613 "cplus.met"
                        tokenAhead = 0 ;
#line 1613 "cplus.met"
                        CommTerm();
#line 1613 "cplus.met"
#line 1614 "cplus.met"
#line 1615 "cplus.met"
                        {
#line 1615 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1615 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1615 "cplus.met"
                            {
#line 1615 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1615 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1615 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1615 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1615 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1615 "cplus.met"
                                } else {
#line 1615 "cplus.met"
                                    tokenAhead = 0 ;
#line 1615 "cplus.met"
                                }
#line 1615 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1615 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1615 "cplus.met"
                            }
#line 1615 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1615 "cplus.met"
                            retTree=_ptRes0;
#line 1615 "cplus.met"
                        }
#line 1615 "cplus.met"
#line 1616 "cplus.met"
                        AnalyzeComment (retTree );
#line 1616 "cplus.met"
#line 1617 "cplus.met"
                        {
#line 1617 "cplus.met"
                            _retValue = retTree ;
#line 1617 "cplus.met"
                            goto directive_ret;
#line 1617 "cplus.met"
                            
#line 1617 "cplus.met"
                        }
#line 1617 "cplus.met"
#line 1617 "cplus.met"
                        break;
#line 1617 "cplus.met"
#line 1619 "cplus.met"
                    case PRAGMA_COMMENT_MIDDLE : 
#line 1619 "cplus.met"
                        tokenAhead = 0 ;
#line 1619 "cplus.met"
                        CommTerm();
#line 1619 "cplus.met"
#line 1620 "cplus.met"
#line 1621 "cplus.met"
                        {
#line 1621 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1621 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1621 "cplus.met"
                            {
#line 1621 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1621 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1621 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1621 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1621 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1621 "cplus.met"
                                } else {
#line 1621 "cplus.met"
                                    tokenAhead = 0 ;
#line 1621 "cplus.met"
                                }
#line 1621 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1621 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1621 "cplus.met"
                            }
#line 1621 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1621 "cplus.met"
                            retTree=_ptRes0;
#line 1621 "cplus.met"
                        }
#line 1621 "cplus.met"
#line 1622 "cplus.met"
                        AnalyzeComment (retTree );
#line 1622 "cplus.met"
#line 1623 "cplus.met"
                        {
#line 1623 "cplus.met"
                            _retValue = retTree ;
#line 1623 "cplus.met"
                            goto directive_ret;
#line 1623 "cplus.met"
                            
#line 1623 "cplus.met"
                        }
#line 1623 "cplus.met"
#line 1623 "cplus.met"
                        break;
#line 1623 "cplus.met"
#line 1625 "cplus.met"
                    case PRAGMA_COMMENT_END : 
#line 1625 "cplus.met"
                        tokenAhead = 0 ;
#line 1625 "cplus.met"
                        CommTerm();
#line 1625 "cplus.met"
#line 1626 "cplus.met"
#line 1627 "cplus.met"
                        {
#line 1627 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1627 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1627 "cplus.met"
                            {
#line 1627 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1627 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1627 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1627 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1627 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1627 "cplus.met"
                                } else {
#line 1627 "cplus.met"
                                    tokenAhead = 0 ;
#line 1627 "cplus.met"
                                }
#line 1627 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1627 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1627 "cplus.met"
                            }
#line 1627 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1627 "cplus.met"
                            retTree=_ptRes0;
#line 1627 "cplus.met"
                        }
#line 1627 "cplus.met"
#line 1628 "cplus.met"
                        AnalyzeComment (retTree );
#line 1628 "cplus.met"
#line 1629 "cplus.met"
                        {
#line 1629 "cplus.met"
                            _retValue = retTree ;
#line 1629 "cplus.met"
                            goto directive_ret;
#line 1629 "cplus.met"
                            
#line 1629 "cplus.met"
                        }
#line 1629 "cplus.met"
#line 1629 "cplus.met"
                        break;
#line 1629 "cplus.met"
#line 1631 "cplus.met"
                    case PRAGMA_COMMENT_PLUS : 
#line 1631 "cplus.met"
                        tokenAhead = 0 ;
#line 1631 "cplus.met"
                        CommTerm();
#line 1631 "cplus.met"
#line 1632 "cplus.met"
#line 1633 "cplus.met"
                        {
#line 1633 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1633 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1633 "cplus.met"
                            {
#line 1633 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1633 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1633 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1633 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1633 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1633 "cplus.met"
                                } else {
#line 1633 "cplus.met"
                                    tokenAhead = 0 ;
#line 1633 "cplus.met"
                                }
#line 1633 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1633 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1633 "cplus.met"
                            }
#line 1633 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1633 "cplus.met"
                            retTree=_ptRes0;
#line 1633 "cplus.met"
                        }
#line 1633 "cplus.met"
#line 1634 "cplus.met"
                        AnalyzeComment (retTree );
#line 1634 "cplus.met"
#line 1635 "cplus.met"
                        {
#line 1635 "cplus.met"
                            _retValue = retTree ;
#line 1635 "cplus.met"
                            goto directive_ret;
#line 1635 "cplus.met"
                            
#line 1635 "cplus.met"
                        }
#line 1635 "cplus.met"
#line 1635 "cplus.met"
                        break;
#line 1635 "cplus.met"
#line 1637 "cplus.met"
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 1637 "cplus.met"
                        tokenAhead = 0 ;
#line 1637 "cplus.met"
                        CommTerm();
#line 1637 "cplus.met"
#line 1638 "cplus.met"
#line 1639 "cplus.met"
                        {
#line 1639 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1639 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1639 "cplus.met"
                            {
#line 1639 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1639 "cplus.met"
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1639 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1639 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1639 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1639 "cplus.met"
                                } else {
#line 1639 "cplus.met"
                                    tokenAhead = 0 ;
#line 1639 "cplus.met"
                                }
#line 1639 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1639 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1639 "cplus.met"
                            }
#line 1639 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1639 "cplus.met"
                            retTree=_ptRes0;
#line 1639 "cplus.met"
                        }
#line 1639 "cplus.met"
#line 1640 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1640 "cplus.met"
#line 1641 "cplus.met"
                        {
#line 1641 "cplus.met"
                            _retValue = retTree ;
#line 1641 "cplus.met"
                            goto directive_ret;
#line 1641 "cplus.met"
                            
#line 1641 "cplus.met"
                        }
#line 1641 "cplus.met"
#line 1641 "cplus.met"
                        break;
#line 1641 "cplus.met"
#line 1643 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1643 "cplus.met"
                        tokenAhead = 0 ;
#line 1643 "cplus.met"
                        CommTerm();
#line 1643 "cplus.met"
#line 1644 "cplus.met"
#line 1645 "cplus.met"
                        {
#line 1645 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1645 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1645 "cplus.met"
                            {
#line 1645 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1645 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1645 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1645 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1645 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1645 "cplus.met"
                                } else {
#line 1645 "cplus.met"
                                    tokenAhead = 0 ;
#line 1645 "cplus.met"
                                }
#line 1645 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1645 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1645 "cplus.met"
                            }
#line 1645 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1645 "cplus.met"
                            retTree=_ptRes0;
#line 1645 "cplus.met"
                        }
#line 1645 "cplus.met"
#line 1646 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1646 "cplus.met"
#line 1647 "cplus.met"
                        {
#line 1647 "cplus.met"
                            _retValue = retTree ;
#line 1647 "cplus.met"
                            goto directive_ret;
#line 1647 "cplus.met"
                            
#line 1647 "cplus.met"
                        }
#line 1647 "cplus.met"
#line 1647 "cplus.met"
                        break;
#line 1647 "cplus.met"
#line 1649 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1649 "cplus.met"
                        tokenAhead = 0 ;
#line 1649 "cplus.met"
                        CommTerm();
#line 1649 "cplus.met"
#line 1650 "cplus.met"
#line 1651 "cplus.met"
                        {
#line 1651 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1651 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1651 "cplus.met"
                            {
#line 1651 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1651 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1651 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1651 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1651 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1651 "cplus.met"
                                } else {
#line 1651 "cplus.met"
                                    tokenAhead = 0 ;
#line 1651 "cplus.met"
                                }
#line 1651 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1651 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1651 "cplus.met"
                            }
#line 1651 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1651 "cplus.met"
                            retTree=_ptRes0;
#line 1651 "cplus.met"
                        }
#line 1651 "cplus.met"
#line 1652 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1652 "cplus.met"
#line 1653 "cplus.met"
                        {
#line 1653 "cplus.met"
                            _retValue = retTree ;
#line 1653 "cplus.met"
                            goto directive_ret;
#line 1653 "cplus.met"
                            
#line 1653 "cplus.met"
                        }
#line 1653 "cplus.met"
#line 1653 "cplus.met"
                        break;
#line 1653 "cplus.met"
#line 1655 "cplus.met"
                    default : 
#line 1655 "cplus.met"
#line 1655 "cplus.met"
                        {
#line 1655 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1655 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 1655 "cplus.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1655 "cplus.met"
                            }
#line 1655 "cplus.met"
                            _retValue =_ptTree0;
#line 1655 "cplus.met"
                            goto directive_ret;
#line 1655 "cplus.met"
                        }
#line 1655 "cplus.met"
                        break;
#line 1655 "cplus.met"
                }
#line 1655 "cplus.met"
#line 1655 "cplus.met"
            } else 
#line 1655 "cplus.met"
#line 1660 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 132, cplus))){
#line 1660 "cplus.met"
#line 1659 "cplus.met"
#line 1660 "cplus.met"
                {
#line 1660 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1660 "cplus.met"
                    {
#line 1660 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1660 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1660 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1660 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1660 "cplus.met"
                            MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
#line 1660 "cplus.met"
                        } else {
#line 1660 "cplus.met"
                            tokenAhead = 0 ;
#line 1660 "cplus.met"
                        }
#line 1660 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1660 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1660 "cplus.met"
                    }
#line 1660 "cplus.met"
                    _retValue =_ptTree0;
#line 1660 "cplus.met"
                    goto directive_ret;
#line 1660 "cplus.met"
                }
#line 1660 "cplus.met"
#line 1660 "cplus.met"
            } else 
#line 1660 "cplus.met"
#line 1664 "cplus.met"
            if (1) {
#line 1664 "cplus.met"
#line 1663 "cplus.met"
#line 1664 "cplus.met"
                {
#line 1664 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1664 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 1664 "cplus.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1664 "cplus.met"
                    }
#line 1664 "cplus.met"
                    _retValue =_ptTree0;
#line 1664 "cplus.met"
                    goto directive_ret;
#line 1664 "cplus.met"
                }
#line 1664 "cplus.met"
#line 1664 "cplus.met"
            } else 
#line 1664 "cplus.met"
             ;
#line 1664 "cplus.met"
#line 1664 "cplus.met"
            break;
#line 1664 "cplus.met"
        default :
#line 1664 "cplus.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1664 "cplus.met"
            break;
#line 1664 "cplus.met"
    }
#line 1664 "cplus.met"
#line 1664 "cplus.met"
#line 1668 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1668 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1668 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1668 "cplus.met"
keepAll =  _oldkeepAll;
#line 1668 "cplus.met"
return((PPTREE) 0);
#line 1668 "cplus.met"

#line 1668 "cplus.met"
directive_exit :
#line 1668 "cplus.met"

#line 1668 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1668 "cplus.met"
    _funcLevel--;
#line 1668 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1668 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1668 "cplus.met"
    return((PPTREE) -1) ;
#line 1668 "cplus.met"

#line 1668 "cplus.met"
directive_ret :
#line 1668 "cplus.met"
    
#line 1668 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1668 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1668 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1668 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1668 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1668 "cplus.met"
    return _retValue ;
#line 1668 "cplus.met"
}
#line 1668 "cplus.met"

#line 1668 "cplus.met"
#line 972 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 972 "cplus.met"
{
#line 972 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 972 "cplus.met"
    int _value,_nbPre = 0 ;
#line 972 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 972 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 972 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 972 "cplus.met"
#line 973 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 973 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 973 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 973 "cplus.met"
    } else {
#line 973 "cplus.met"
        tokenAhead = 0 ;
#line 973 "cplus.met"
    }
#line 973 "cplus.met"
#line 974 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 974 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 974 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 974 "cplus.met"
    } else {
#line 974 "cplus.met"
        tokenAhead = 0 ;
#line 974 "cplus.met"
    }
#line 974 "cplus.met"
#line 974 "cplus.met"
#line 974 "cplus.met"

#line 975 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 975 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 975 "cplus.met"
return((PPTREE) 0);
#line 975 "cplus.met"

#line 975 "cplus.met"
end_pragma_exit :
#line 975 "cplus.met"

#line 975 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 975 "cplus.met"
    _funcLevel--;
#line 975 "cplus.met"
    return((PPTREE) -1) ;
#line 975 "cplus.met"

#line 975 "cplus.met"
end_pragma_ret :
#line 975 "cplus.met"
    
#line 975 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 975 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 975 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 975 "cplus.met"
    return _retValue ;
#line 975 "cplus.met"
}
#line 975 "cplus.met"

#line 975 "cplus.met"
#line 977 "cplus.met"
PPTREE cplus::end_pragma_managed ( int error_free)
#line 977 "cplus.met"
{
#line 977 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 977 "cplus.met"
    int _value,_nbPre = 0 ;
#line 977 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 977 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma_managed",TRACE_ENTER,(PPTREE)0);
#line 977 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 977 "cplus.met"
#line 978 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 978 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 978 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_DIR")
#line 978 "cplus.met"
    } else {
#line 978 "cplus.met"
        tokenAhead = 0 ;
#line 978 "cplus.met"
    }
#line 978 "cplus.met"
#line 979 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 979 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_MANAGED,"PRAGMA_MANAGED") || !(CommTerm(),1)) {
#line 979 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_MANAGED")
#line 979 "cplus.met"
    } else {
#line 979 "cplus.met"
        tokenAhead = 0 ;
#line 979 "cplus.met"
    }
#line 979 "cplus.met"
#line 979 "cplus.met"
#line 979 "cplus.met"

#line 980 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 980 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 980 "cplus.met"
return((PPTREE) 0);
#line 980 "cplus.met"

#line 980 "cplus.met"
end_pragma_managed_exit :
#line 980 "cplus.met"

#line 980 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_EXIT,(PPTREE)0);
#line 980 "cplus.met"
    _funcLevel--;
#line 980 "cplus.met"
    return((PPTREE) -1) ;
#line 980 "cplus.met"

#line 980 "cplus.met"
end_pragma_managed_ret :
#line 980 "cplus.met"
    
#line 980 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_RETURN,_retValue);
#line 980 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 980 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 980 "cplus.met"
    return _retValue ;
#line 980 "cplus.met"
}
#line 980 "cplus.met"

#line 980 "cplus.met"
#line 1963 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1963 "cplus.met"
{
#line 1963 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1963 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1963 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1963 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1963 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1963 "cplus.met"
#line 1963 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1963 "cplus.met"
#line 1963 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,classMarker = (PPTREE) 0;
#line 1963 "cplus.met"
#line 1965 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1965 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1965 "cplus.met"
        MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1965 "cplus.met"
    } else {
#line 1965 "cplus.met"
        tokenAhead = 0 ;
#line 1965 "cplus.met"
    }
#line 1965 "cplus.met"
#line 1966 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CLASS,"class") && (tokenAhead = 0,CommTerm(),1)){
#line 1966 "cplus.met"
#line 1967 "cplus.met"
#line 1968 "cplus.met"
        {
#line 1968 "cplus.met"
            PPTREE _ptRes0=0;
#line 1968 "cplus.met"
            _ptRes0= MakeTree(ENUM_CLASS, 0);
#line 1968 "cplus.met"
            classMarker=_ptRes0;
#line 1968 "cplus.met"
        }
#line 1968 "cplus.met"
#line 1968 "cplus.met"
#line 1968 "cplus.met"
    }
#line 1968 "cplus.met"
#line 1970 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1970 "cplus.met"
#line 1971 "cplus.met"
        {
#line 1971 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1971 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1971 "cplus.met"
            {
#line 1971 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1971 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1971 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1971 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1971 "cplus.met"
                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1971 "cplus.met"
                } else {
#line 1971 "cplus.met"
                    tokenAhead = 0 ;
#line 1971 "cplus.met"
                }
#line 1971 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1971 "cplus.met"
                _ptTree0=_ptRes1;
#line 1971 "cplus.met"
            }
#line 1971 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1971 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1971 "cplus.met"
            retTree=_ptRes0;
#line 1971 "cplus.met"
        }
#line 1971 "cplus.met"
    } else {
#line 1971 "cplus.met"
#line 1973 "cplus.met"
        {
#line 1973 "cplus.met"
            PPTREE _ptRes0=0;
#line 1973 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1973 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1973 "cplus.met"
            retTree=_ptRes0;
#line 1973 "cplus.met"
        }
#line 1973 "cplus.met"
    }
#line 1973 "cplus.met"
#line 1974 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1974 "cplus.met"
#line 1975 "cplus.met"
#line 1976 "cplus.met"
        {
#line 1976 "cplus.met"
            PPTREE _ptTree0=0;
#line 1976 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 1976 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                PROG_EXIT(enum_declarator_exit,"enum_declarator")
#line 1976 "cplus.met"
            }
#line 1976 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 1976 "cplus.met"
        }
#line 1976 "cplus.met"
#line 1976 "cplus.met"
#line 1976 "cplus.met"
    }
#line 1976 "cplus.met"
#line 1978 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1978 "cplus.met"
#line 1979 "cplus.met"
#line 1979 "cplus.met"
        _addlist1 = list ;
#line 1979 "cplus.met"
#line 1980 "cplus.met"
        do {
#line 1980 "cplus.met"
#line 1981 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 61, cplus)){
#line 1981 "cplus.met"
#line 1982 "cplus.met"
#line 1982 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1982 "cplus.met"
#line 1982 "cplus.met"
                if (list){
#line 1982 "cplus.met"
#line 1982 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1982 "cplus.met"
                } else {
#line 1982 "cplus.met"
#line 1982 "cplus.met"
                    list = _addlist1 ;
#line 1982 "cplus.met"
                }
#line 1982 "cplus.met"
            } else {
#line 1982 "cplus.met"
#line 1984 "cplus.met"
                
#line 1984 "cplus.met"
                MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1984 "cplus.met"
                goto enum_declarator_exit;
#line 1984 "cplus.met"
            }
#line 1984 "cplus.met"
#line 1984 "cplus.met"
#line 1985 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1985 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1985 "cplus.met"
#line 1986 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1986 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1986 "cplus.met"
            MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1986 "cplus.met"
        } else {
#line 1986 "cplus.met"
            tokenAhead = 0 ;
#line 1986 "cplus.met"
        }
#line 1986 "cplus.met"
#line 1987 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1987 "cplus.met"
#line 1987 "cplus.met"
#line 1987 "cplus.met"
    }
#line 1987 "cplus.met"
#line 1989 "cplus.met"
    {
#line 1989 "cplus.met"
        _retValue = retTree ;
#line 1989 "cplus.met"
        goto enum_declarator_ret;
#line 1989 "cplus.met"
        
#line 1989 "cplus.met"
    }
#line 1989 "cplus.met"
#line 1989 "cplus.met"
#line 1989 "cplus.met"

#line 1990 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1990 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1990 "cplus.met"
return((PPTREE) 0);
#line 1990 "cplus.met"

#line 1990 "cplus.met"
enum_declarator_exit :
#line 1990 "cplus.met"

#line 1990 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1990 "cplus.met"
    _funcLevel--;
#line 1990 "cplus.met"
    return((PPTREE) -1) ;
#line 1990 "cplus.met"

#line 1990 "cplus.met"
enum_declarator_ret :
#line 1990 "cplus.met"
    
#line 1990 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
#line 1990 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1990 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1990 "cplus.met"
    return _retValue ;
#line 1990 "cplus.met"
}
#line 1990 "cplus.met"

#line 1990 "cplus.met"
