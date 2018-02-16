/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3221 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3221 "cplus.met"
{
#line 3221 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3221 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3221 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3221 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3221 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3221 "cplus.met"
#line 3221 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3221 "cplus.met"
#line 3221 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3221 "cplus.met"
#line 3223 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3223 "cplus.met"
#line 3224 "cplus.met"
#line 3224 "cplus.met"
        _addlist1 = list ;
#line 3224 "cplus.met"
#line 3225 "cplus.met"
        do {
#line 3225 "cplus.met"
#line 3226 "cplus.met"
            {
#line 3226 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3226 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 2);
#line 3226 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3226 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3226 "cplus.met"
                }
#line 3226 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3226 "cplus.met"
                retTree=_ptRes0;
#line 3226 "cplus.met"
            }
#line 3226 "cplus.met"
#line 3227 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3227 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3227 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,val);
                TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3227 "cplus.met"
            } else {
#line 3227 "cplus.met"
                tokenAhead = 0 ;
#line 3227 "cplus.met"
            }
#line 3227 "cplus.met"
#line 3228 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 60, cplus)){
#line 3228 "cplus.met"
#line 3229 "cplus.met"
                ReplaceTree(retTree ,2 ,val );
#line 3229 "cplus.met"
#line 3229 "cplus.met"
            }
#line 3229 "cplus.met"
#line 3230 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3230 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3230 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,val);
                TOKEN_EXIT(ctor_initializer_exit,")")
#line 3230 "cplus.met"
            } else {
#line 3230 "cplus.met"
                tokenAhead = 0 ;
#line 3230 "cplus.met"
            }
#line 3230 "cplus.met"
#line 3231 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3231 "cplus.met"
#line 3231 "cplus.met"
            if (list){
#line 3231 "cplus.met"
#line 3231 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3231 "cplus.met"
            } else {
#line 3231 "cplus.met"
#line 3231 "cplus.met"
                list = _addlist1 ;
#line 3231 "cplus.met"
            }
#line 3231 "cplus.met"
#line 3231 "cplus.met"
#line 3232 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3232 "cplus.met"
#line 3233 "cplus.met"
        {
#line 3233 "cplus.met"
            PPTREE _ptTree0=0;
#line 3233 "cplus.met"
            {
#line 3233 "cplus.met"
                PPTREE _ptRes1=0;
#line 3233 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3233 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3233 "cplus.met"
                _ptTree0=_ptRes1;
#line 3233 "cplus.met"
            }
#line 3233 "cplus.met"
            _retValue =_ptTree0;
#line 3233 "cplus.met"
            goto ctor_initializer_ret;
#line 3233 "cplus.met"
        }
#line 3233 "cplus.met"
#line 3233 "cplus.met"
#line 3233 "cplus.met"
    }
#line 3233 "cplus.met"
#line 3233 "cplus.met"
#line 3234 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3234 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3234 "cplus.met"
return((PPTREE) 0);
#line 3234 "cplus.met"

#line 3234 "cplus.met"
ctor_initializer_exit :
#line 3234 "cplus.met"

#line 3234 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3234 "cplus.met"
    _funcLevel--;
#line 3234 "cplus.met"
    return((PPTREE) -1) ;
#line 3234 "cplus.met"

#line 3234 "cplus.met"
ctor_initializer_ret :
#line 3234 "cplus.met"
    
#line 3234 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3234 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3234 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3234 "cplus.met"
    return _retValue ;
#line 3234 "cplus.met"
}
#line 3234 "cplus.met"

#line 3234 "cplus.met"
#line 1689 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1689 "cplus.met"
{
#line 1689 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1689 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1689 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1689 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1689 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1689 "cplus.met"
#line 1689 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1689 "cplus.met"
#line 1692 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 93, cplus))){
#line 1692 "cplus.met"
#line 1694 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1694 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1694 "cplus.met"
        }
#line 1694 "cplus.met"
    }
#line 1694 "cplus.met"
#line 1695 "cplus.met"
    {
#line 1695 "cplus.met"
        _retValue = retTree ;
#line 1695 "cplus.met"
        goto data_decl_exotic_ret;
#line 1695 "cplus.met"
        
#line 1695 "cplus.met"
    }
#line 1695 "cplus.met"
#line 1695 "cplus.met"
#line 1695 "cplus.met"

#line 1696 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1696 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1696 "cplus.met"
return((PPTREE) 0);
#line 1696 "cplus.met"

#line 1696 "cplus.met"
data_decl_exotic_exit :
#line 1696 "cplus.met"

#line 1696 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1696 "cplus.met"
    _funcLevel--;
#line 1696 "cplus.met"
    return((PPTREE) -1) ;
#line 1696 "cplus.met"

#line 1696 "cplus.met"
data_decl_exotic_ret :
#line 1696 "cplus.met"
    
#line 1696 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
#line 1696 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1696 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1696 "cplus.met"
    return _retValue ;
#line 1696 "cplus.met"
}
#line 1696 "cplus.met"

#line 1696 "cplus.met"
#line 1642 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1642 "cplus.met"
{
#line 1642 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1642 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1642 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1642 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1642 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1642 "cplus.met"
#line 1642 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1642 "cplus.met"
#line 1644 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 33, cplus))){
#line 1644 "cplus.met"
#line 1645 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 1645 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1645 "cplus.met"
        }
#line 1645 "cplus.met"
    }
#line 1645 "cplus.met"
#line 1646 "cplus.met"
    {
#line 1646 "cplus.met"
        _retValue = retTree ;
#line 1646 "cplus.met"
        goto data_decl_sc_decl_ret;
#line 1646 "cplus.met"
        
#line 1646 "cplus.met"
    }
#line 1646 "cplus.met"
#line 1646 "cplus.met"
#line 1646 "cplus.met"

#line 1647 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1647 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1647 "cplus.met"
return((PPTREE) 0);
#line 1647 "cplus.met"

#line 1647 "cplus.met"
data_decl_sc_decl_exit :
#line 1647 "cplus.met"

#line 1647 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1647 "cplus.met"
    _funcLevel--;
#line 1647 "cplus.met"
    return((PPTREE) -1) ;
#line 1647 "cplus.met"

#line 1647 "cplus.met"
data_decl_sc_decl_ret :
#line 1647 "cplus.met"
    
#line 1647 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
#line 1647 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1647 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1647 "cplus.met"
    return _retValue ;
#line 1647 "cplus.met"
}
#line 1647 "cplus.met"

#line 1647 "cplus.met"
#line 1625 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1625 "cplus.met"
{
#line 1625 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1625 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1625 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1625 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1625 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1625 "cplus.met"
#line 1625 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1625 "cplus.met"
#line 1627 "cplus.met"
    {
#line 1627 "cplus.met"
        PPTREE _ptRes0=0;
#line 1627 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1627 "cplus.met"
        retTree=_ptRes0;
#line 1627 "cplus.met"
    }
#line 1627 "cplus.met"
#line 1628 "cplus.met"
    {
#line 1628 "cplus.met"
        PPTREE _ptTree0=0;
#line 1628 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1628 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1628 "cplus.met"
        }
#line 1628 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1628 "cplus.met"
    }
#line 1628 "cplus.met"
#line 1629 "cplus.met"
    {
#line 1629 "cplus.met"
        PPTREE _ptTree0=0;
#line 1629 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1629 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1629 "cplus.met"
        }
#line 1629 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1629 "cplus.met"
    }
#line 1629 "cplus.met"
#line 1630 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1630 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1630 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1630 "cplus.met"
    } else {
#line 1630 "cplus.met"
        tokenAhead = 0 ;
#line 1630 "cplus.met"
    }
#line 1630 "cplus.met"
#line 1631 "cplus.met"
    {
#line 1631 "cplus.met"
        _retValue = retTree ;
#line 1631 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1631 "cplus.met"
        
#line 1631 "cplus.met"
    }
#line 1631 "cplus.met"
#line 1631 "cplus.met"
#line 1631 "cplus.met"

#line 1632 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1632 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1632 "cplus.met"
return((PPTREE) 0);
#line 1632 "cplus.met"

#line 1632 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1632 "cplus.met"

#line 1632 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1632 "cplus.met"
    _funcLevel--;
#line 1632 "cplus.met"
    return((PPTREE) -1) ;
#line 1632 "cplus.met"

#line 1632 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1632 "cplus.met"
    
#line 1632 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1632 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1632 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1632 "cplus.met"
    return _retValue ;
#line 1632 "cplus.met"
}
#line 1632 "cplus.met"

#line 1632 "cplus.met"
#line 1634 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1634 "cplus.met"
{
#line 1634 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1634 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1634 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1634 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1634 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1634 "cplus.met"
#line 1634 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1634 "cplus.met"
#line 1636 "cplus.met"
    {
#line 1636 "cplus.met"
        PPTREE _ptRes0=0;
#line 1636 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1636 "cplus.met"
        retTree=_ptRes0;
#line 1636 "cplus.met"
    }
#line 1636 "cplus.met"
#line 1637 "cplus.met"
    {
#line 1637 "cplus.met"
        PPTREE _ptTree0=0;
#line 1637 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1637 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1637 "cplus.met"
        }
#line 1637 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1637 "cplus.met"
    }
#line 1637 "cplus.met"
#line 1638 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1638 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1638 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1638 "cplus.met"
    } else {
#line 1638 "cplus.met"
        tokenAhead = 0 ;
#line 1638 "cplus.met"
    }
#line 1638 "cplus.met"
#line 1639 "cplus.met"
    {
#line 1639 "cplus.met"
        _retValue = retTree ;
#line 1639 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1639 "cplus.met"
        
#line 1639 "cplus.met"
    }
#line 1639 "cplus.met"
#line 1639 "cplus.met"
#line 1639 "cplus.met"

#line 1640 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1640 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1640 "cplus.met"
return((PPTREE) 0);
#line 1640 "cplus.met"

#line 1640 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1640 "cplus.met"

#line 1640 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1640 "cplus.met"
    _funcLevel--;
#line 1640 "cplus.met"
    return((PPTREE) -1) ;
#line 1640 "cplus.met"

#line 1640 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1640 "cplus.met"
    
#line 1640 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1640 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1640 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1640 "cplus.met"
    return _retValue ;
#line 1640 "cplus.met"
}
#line 1640 "cplus.met"

#line 1640 "cplus.met"
#line 1682 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1682 "cplus.met"
{
#line 1682 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1682 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1682 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1682 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1682 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1682 "cplus.met"
#line 1682 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1682 "cplus.met"
#line 1684 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 36, cplus))){
#line 1684 "cplus.met"
#line 1685 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 1685 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1685 "cplus.met"
        }
#line 1685 "cplus.met"
    }
#line 1685 "cplus.met"
#line 1686 "cplus.met"
    {
#line 1686 "cplus.met"
        _retValue = retTree ;
#line 1686 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
#line 1686 "cplus.met"
        
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
data_decl_sc_ty_decl_exit :
#line 1687 "cplus.met"

#line 1687 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1687 "cplus.met"
    _funcLevel--;
#line 1687 "cplus.met"
    return((PPTREE) -1) ;
#line 1687 "cplus.met"

#line 1687 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1687 "cplus.met"
    
#line 1687 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
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
#line 1659 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1659 "cplus.met"
{
#line 1659 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1659 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1659 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1659 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1659 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1659 "cplus.met"
#line 1659 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1659 "cplus.met"
#line 1662 "cplus.met"
    {
#line 1662 "cplus.met"
        PPTREE _ptRes0=0;
#line 1662 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1662 "cplus.met"
        retTree=_ptRes0;
#line 1662 "cplus.met"
    }
#line 1662 "cplus.met"
#line 1664 "cplus.met"
    {
#line 1664 "cplus.met"
        PPTREE _ptTree0=0;
#line 1664 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1664 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1664 "cplus.met"
        }
#line 1664 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1664 "cplus.met"
    }
#line 1664 "cplus.met"
#line 1665 "cplus.met"
    {
#line 1665 "cplus.met"
        PPTREE _ptTree0=0;
#line 1665 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1665 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1665 "cplus.met"
        }
#line 1665 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1665 "cplus.met"
    }
#line 1665 "cplus.met"
#line 1666 "cplus.met"
    {
#line 1666 "cplus.met"
        PPTREE _ptTree0=0;
#line 1666 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1666 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1666 "cplus.met"
        }
#line 1666 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1666 "cplus.met"
    }
#line 1666 "cplus.met"
#line 1667 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1667 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1667 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1667 "cplus.met"
    } else {
#line 1667 "cplus.met"
        tokenAhead = 0 ;
#line 1667 "cplus.met"
    }
#line 1667 "cplus.met"
#line 1668 "cplus.met"
    {
#line 1668 "cplus.met"
        _retValue = retTree ;
#line 1668 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1668 "cplus.met"
        
#line 1668 "cplus.met"
    }
#line 1668 "cplus.met"
#line 1668 "cplus.met"
#line 1668 "cplus.met"

#line 1669 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1669 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1669 "cplus.met"
return((PPTREE) 0);
#line 1669 "cplus.met"

#line 1669 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1669 "cplus.met"

#line 1669 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1669 "cplus.met"
    _funcLevel--;
#line 1669 "cplus.met"
    return((PPTREE) -1) ;
#line 1669 "cplus.met"

#line 1669 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1669 "cplus.met"
    
#line 1669 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1669 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1669 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1669 "cplus.met"
    return _retValue ;
#line 1669 "cplus.met"
}
#line 1669 "cplus.met"

#line 1669 "cplus.met"
#line 1671 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1671 "cplus.met"
{
#line 1671 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1671 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1671 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1671 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1671 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1671 "cplus.met"
#line 1671 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1671 "cplus.met"
#line 1674 "cplus.met"
    {
#line 1674 "cplus.met"
        PPTREE _ptRes0=0;
#line 1674 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1674 "cplus.met"
        retTree=_ptRes0;
#line 1674 "cplus.met"
    }
#line 1674 "cplus.met"
#line 1676 "cplus.met"
    {
#line 1676 "cplus.met"
        PPTREE _ptTree0=0;
#line 1676 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1676 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1676 "cplus.met"
        }
#line 1676 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1676 "cplus.met"
    }
#line 1676 "cplus.met"
#line 1677 "cplus.met"
    {
#line 1677 "cplus.met"
        PPTREE _ptTree0=0;
#line 1677 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1677 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1677 "cplus.met"
        }
#line 1677 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1677 "cplus.met"
    }
#line 1677 "cplus.met"
#line 1678 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1678 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1678 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
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
        _retValue = retTree ;
#line 1679 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1679 "cplus.met"
        
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
data_decl_sc_ty_decl_short_exit :
#line 1680 "cplus.met"

#line 1680 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1680 "cplus.met"
    _funcLevel--;
#line 1680 "cplus.met"
    return((PPTREE) -1) ;
#line 1680 "cplus.met"

#line 1680 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1680 "cplus.met"
    
#line 1680 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
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
#line 1649 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1649 "cplus.met"
{
#line 1649 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1649 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1649 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1649 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1649 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1649 "cplus.met"
#line 1649 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1649 "cplus.met"
#line 1651 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 32, cplus))){
#line 1651 "cplus.met"
#line 1652 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 42, cplus))== (PPTREE) -1 ) {
#line 1652 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1652 "cplus.met"
        }
#line 1652 "cplus.met"
    }
#line 1652 "cplus.met"
#line 1653 "cplus.met"
    {
#line 1653 "cplus.met"
        _retValue = retTree ;
#line 1653 "cplus.met"
        goto data_declaration_ret;
#line 1653 "cplus.met"
        
#line 1653 "cplus.met"
    }
#line 1653 "cplus.met"
#line 1653 "cplus.met"
#line 1653 "cplus.met"

#line 1654 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1654 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1654 "cplus.met"
return((PPTREE) 0);
#line 1654 "cplus.met"

#line 1654 "cplus.met"
data_declaration_exit :
#line 1654 "cplus.met"

#line 1654 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1654 "cplus.met"
    _funcLevel--;
#line 1654 "cplus.met"
    return((PPTREE) -1) ;
#line 1654 "cplus.met"

#line 1654 "cplus.met"
data_declaration_ret :
#line 1654 "cplus.met"
    
#line 1654 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1654 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1654 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1654 "cplus.met"
    return _retValue ;
#line 1654 "cplus.met"
}
#line 1654 "cplus.met"

#line 1654 "cplus.met"
#line 1723 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1723 "cplus.met"
{
#line 1723 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1723 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1723 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1723 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1723 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1723 "cplus.met"
#line 1723 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1723 "cplus.met"
#line 1725 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 40, cplus))){
#line 1725 "cplus.met"
#line 1726 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 41, cplus))== (PPTREE) -1 ) {
#line 1726 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
#line 1726 "cplus.met"
        }
#line 1726 "cplus.met"
    }
#line 1726 "cplus.met"
#line 1727 "cplus.met"
    {
#line 1727 "cplus.met"
        _retValue = retTree ;
#line 1727 "cplus.met"
        goto data_declaration_for_ret;
#line 1727 "cplus.met"
        
#line 1727 "cplus.met"
    }
#line 1727 "cplus.met"
#line 1727 "cplus.met"
#line 1727 "cplus.met"

#line 1728 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1728 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1728 "cplus.met"
return((PPTREE) 0);
#line 1728 "cplus.met"

#line 1728 "cplus.met"
data_declaration_for_exit :
#line 1728 "cplus.met"

#line 1728 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1728 "cplus.met"
    _funcLevel--;
#line 1728 "cplus.met"
    return((PPTREE) -1) ;
#line 1728 "cplus.met"

#line 1728 "cplus.met"
data_declaration_for_ret :
#line 1728 "cplus.met"
    
#line 1728 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
#line 1728 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1728 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1728 "cplus.met"
    return _retValue ;
#line 1728 "cplus.met"
}
#line 1728 "cplus.met"

#line 1728 "cplus.met"
#line 1706 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1706 "cplus.met"
{
#line 1706 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1706 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1706 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1706 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1706 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1706 "cplus.met"
#line 1706 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1706 "cplus.met"
#line 1708 "cplus.met"
    {
#line 1708 "cplus.met"
        PPTREE _ptRes0=0;
#line 1708 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1708 "cplus.met"
        retTree=_ptRes0;
#line 1708 "cplus.met"
    }
#line 1708 "cplus.met"
#line 1709 "cplus.met"
    {
#line 1709 "cplus.met"
        PPTREE _ptTree0=0;
#line 1709 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1709 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1709 "cplus.met"
        }
#line 1709 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1709 "cplus.met"
    }
#line 1709 "cplus.met"
#line 1710 "cplus.met"
    {
#line 1710 "cplus.met"
        PPTREE _ptTree0=0;
#line 1710 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1710 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1710 "cplus.met"
        }
#line 1710 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1710 "cplus.met"
    }
#line 1710 "cplus.met"
#line 1711 "cplus.met"
    {
#line 1711 "cplus.met"
        PPTREE _ptTree0=0;
#line 1711 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1711 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1711 "cplus.met"
        }
#line 1711 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1711 "cplus.met"
    }
#line 1711 "cplus.met"
#line 1712 "cplus.met"
    {
#line 1712 "cplus.met"
        _retValue = retTree ;
#line 1712 "cplus.met"
        goto data_declaration_for_full_ret;
#line 1712 "cplus.met"
        
#line 1712 "cplus.met"
    }
#line 1712 "cplus.met"
#line 1712 "cplus.met"
#line 1712 "cplus.met"

#line 1713 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1713 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1713 "cplus.met"
return((PPTREE) 0);
#line 1713 "cplus.met"

#line 1713 "cplus.met"
data_declaration_for_full_exit :
#line 1713 "cplus.met"

#line 1713 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1713 "cplus.met"
    _funcLevel--;
#line 1713 "cplus.met"
    return((PPTREE) -1) ;
#line 1713 "cplus.met"

#line 1713 "cplus.met"
data_declaration_for_full_ret :
#line 1713 "cplus.met"
    
#line 1713 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
#line 1713 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1713 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1713 "cplus.met"
    return _retValue ;
#line 1713 "cplus.met"
}
#line 1713 "cplus.met"

#line 1713 "cplus.met"
#line 1715 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1715 "cplus.met"
{
#line 1715 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1715 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1715 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1715 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1715 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1715 "cplus.met"
#line 1715 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1715 "cplus.met"
#line 1717 "cplus.met"
    {
#line 1717 "cplus.met"
        PPTREE _ptRes0=0;
#line 1717 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1717 "cplus.met"
        retTree=_ptRes0;
#line 1717 "cplus.met"
    }
#line 1717 "cplus.met"
#line 1718 "cplus.met"
    {
#line 1718 "cplus.met"
        PPTREE _ptTree0=0;
#line 1718 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1718 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1718 "cplus.met"
        }
#line 1718 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1718 "cplus.met"
    }
#line 1718 "cplus.met"
#line 1719 "cplus.met"
    {
#line 1719 "cplus.met"
        PPTREE _ptTree0=0;
#line 1719 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1719 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1719 "cplus.met"
        }
#line 1719 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1719 "cplus.met"
    }
#line 1719 "cplus.met"
#line 1720 "cplus.met"
    {
#line 1720 "cplus.met"
        _retValue = retTree ;
#line 1720 "cplus.met"
        goto data_declaration_for_short_ret;
#line 1720 "cplus.met"
        
#line 1720 "cplus.met"
    }
#line 1720 "cplus.met"
#line 1720 "cplus.met"
#line 1720 "cplus.met"

#line 1721 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1721 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1721 "cplus.met"
return((PPTREE) 0);
#line 1721 "cplus.met"

#line 1721 "cplus.met"
data_declaration_for_short_exit :
#line 1721 "cplus.met"

#line 1721 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1721 "cplus.met"
    _funcLevel--;
#line 1721 "cplus.met"
    return((PPTREE) -1) ;
#line 1721 "cplus.met"

#line 1721 "cplus.met"
data_declaration_for_short_ret :
#line 1721 "cplus.met"
    
#line 1721 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
#line 1721 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1721 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1721 "cplus.met"
    return _retValue ;
#line 1721 "cplus.met"
}
#line 1721 "cplus.met"

#line 1721 "cplus.met"
#line 1698 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1698 "cplus.met"
{
#line 1698 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1698 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1698 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1698 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1698 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1698 "cplus.met"
#line 1698 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1698 "cplus.met"
#line 1700 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 35, cplus))){
#line 1700 "cplus.met"
#line 1701 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 1701 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
#line 1701 "cplus.met"
        }
#line 1701 "cplus.met"
    }
#line 1701 "cplus.met"
#line 1702 "cplus.met"
    {
#line 1702 "cplus.met"
        _retValue = retTree ;
#line 1702 "cplus.met"
        goto data_declaration_strict_ret;
#line 1702 "cplus.met"
        
#line 1702 "cplus.met"
    }
#line 1702 "cplus.met"
#line 1702 "cplus.met"
#line 1702 "cplus.met"

#line 1703 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1703 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1703 "cplus.met"
return((PPTREE) 0);
#line 1703 "cplus.met"

#line 1703 "cplus.met"
data_declaration_strict_exit :
#line 1703 "cplus.met"

#line 1703 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1703 "cplus.met"
    _funcLevel--;
#line 1703 "cplus.met"
    return((PPTREE) -1) ;
#line 1703 "cplus.met"

#line 1703 "cplus.met"
data_declaration_strict_ret :
#line 1703 "cplus.met"
    
#line 1703 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
#line 1703 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1703 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1703 "cplus.met"
    return _retValue ;
#line 1703 "cplus.met"
}
#line 1703 "cplus.met"

#line 1703 "cplus.met"
#line 2884 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 2884 "cplus.met"
{
#line 2884 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2884 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2884 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2884 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2884 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2884 "cplus.met"
#line 2884 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0;
#line 2884 "cplus.met"
#line 2886 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2886 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 2886 "cplus.met"
        MulFreeTree(2,expr,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 2886 "cplus.met"
    } else {
#line 2886 "cplus.met"
        tokenAhead = 0 ;
#line 2886 "cplus.met"
    }
#line 2886 "cplus.met"
#line 2887 "cplus.met"
    {
#line 2887 "cplus.met"
        PPTREE _ptRes0=0;
#line 2887 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 2887 "cplus.met"
        retTree=_ptRes0;
#line 2887 "cplus.met"
    }
#line 2887 "cplus.met"
#line 2888 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 2888 "cplus.met"
#line 2889 "cplus.met"
#line 2892 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 60, cplus)){
#line 2892 "cplus.met"
#line 2892 "cplus.met"
        }
#line 2892 "cplus.met"
#line 2895 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2895 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2895 "cplus.met"
            MulFreeTree(2,expr,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 2895 "cplus.met"
        } else {
#line 2895 "cplus.met"
            tokenAhead = 0 ;
#line 2895 "cplus.met"
        }
#line 2895 "cplus.met"
#line 2896 "cplus.met"
        {
#line 2896 "cplus.met"
            PPTREE _ptTree0=0;
#line 2896 "cplus.met"
            {
#line 2896 "cplus.met"
                PPTREE _ptRes1=0;
#line 2896 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 2896 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 2896 "cplus.met"
                _ptTree0=_ptRes1;
#line 2896 "cplus.met"
            }
#line 2896 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2896 "cplus.met"
        }
#line 2896 "cplus.met"
#line 2896 "cplus.met"
#line 2896 "cplus.met"
    }
#line 2896 "cplus.met"
#line 2898 "cplus.met"
    {
#line 2898 "cplus.met"
        PPTREE _ptTree0=0;
#line 2898 "cplus.met"
        {
#line 2898 "cplus.met"
            PPTREE _ptTree1=0;
#line 2898 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2898 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,expr,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 2898 "cplus.met"
            }
#line 2898 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2898 "cplus.met"
        }
#line 2898 "cplus.met"
        _retValue =_ptTree0;
#line 2898 "cplus.met"
        goto deallocation_expression_ret;
#line 2898 "cplus.met"
    }
#line 2898 "cplus.met"
#line 2898 "cplus.met"
#line 2898 "cplus.met"

#line 2899 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2899 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2899 "cplus.met"
return((PPTREE) 0);
#line 2899 "cplus.met"

#line 2899 "cplus.met"
deallocation_expression_exit :
#line 2899 "cplus.met"

#line 2899 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2899 "cplus.met"
    _funcLevel--;
#line 2899 "cplus.met"
    return((PPTREE) -1) ;
#line 2899 "cplus.met"

#line 2899 "cplus.met"
deallocation_expression_ret :
#line 2899 "cplus.met"
    
#line 2899 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 2899 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2899 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2899 "cplus.met"
    return _retValue ;
#line 2899 "cplus.met"
}
#line 2899 "cplus.met"

#line 2899 "cplus.met"
#line 2263 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2263 "cplus.met"
{
#line 2263 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2263 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2263 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2263 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2263 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2263 "cplus.met"
#line 2263 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2263 "cplus.met"
#line 2265 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2265 "cplus.met"
#line 2266 "cplus.met"
        {
#line 2266 "cplus.met"
            PPTREE _ptTree0=0;
#line 2266 "cplus.met"
            {
#line 2266 "cplus.met"
                PPTREE _ptTree1=0;
#line 2266 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2266 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2266 "cplus.met"
                }
#line 2266 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2266 "cplus.met"
            }
#line 2266 "cplus.met"
            _retValue =_ptTree0;
#line 2266 "cplus.met"
            goto declarator_ret;
#line 2266 "cplus.met"
        }
#line 2266 "cplus.met"
    } else {
#line 2266 "cplus.met"
#line 2268 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2268 "cplus.met"
        switch( lexEl.Value) {
#line 2268 "cplus.met"
#line 2269 "cplus.met"
            case ETOI : 
#line 2269 "cplus.met"
                tokenAhead = 0 ;
#line 2269 "cplus.met"
                CommTerm();
#line 2269 "cplus.met"
#line 2269 "cplus.met"
                {
#line 2269 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2269 "cplus.met"
                    {
#line 2269 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2269 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2269 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2269 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2269 "cplus.met"
                        }
#line 2269 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2269 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2269 "cplus.met"
                    }
#line 2269 "cplus.met"
                    _retValue =_ptTree0;
#line 2269 "cplus.met"
                    goto declarator_ret;
#line 2269 "cplus.met"
                }
#line 2269 "cplus.met"
                break;
#line 2269 "cplus.met"
#line 2270 "cplus.met"
            case ETCO : 
#line 2270 "cplus.met"
                tokenAhead = 0 ;
#line 2270 "cplus.met"
                CommTerm();
#line 2270 "cplus.met"
#line 2270 "cplus.met"
                {
#line 2270 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2270 "cplus.met"
                    {
#line 2270 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2270 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2270 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2270 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2270 "cplus.met"
                        }
#line 2270 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2270 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2270 "cplus.met"
                    }
#line 2270 "cplus.met"
                    _retValue =_ptTree0;
#line 2270 "cplus.met"
                    goto declarator_ret;
#line 2270 "cplus.met"
                }
#line 2270 "cplus.met"
                break;
#line 2270 "cplus.met"
#line 2271 "cplus.met"
            case TILD : 
#line 2271 "cplus.met"
                tokenAhead = 0 ;
#line 2271 "cplus.met"
                CommTerm();
#line 2271 "cplus.met"
#line 2271 "cplus.met"
                {
#line 2271 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2271 "cplus.met"
                    {
#line 2271 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2271 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2271 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2271 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2271 "cplus.met"
                        }
#line 2271 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2271 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2271 "cplus.met"
                    }
#line 2271 "cplus.met"
                    _retValue =_ptTree0;
#line 2271 "cplus.met"
                    goto declarator_ret;
#line 2271 "cplus.met"
                }
#line 2271 "cplus.met"
                break;
#line 2271 "cplus.met"
#line 2274 "cplus.met"
            case POUV : 
#line 2274 "cplus.met"
                tokenAhead = 0 ;
#line 2274 "cplus.met"
                CommTerm();
#line 2274 "cplus.met"
#line 2273 "cplus.met"
#line 2274 "cplus.met"
                {
#line 2274 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2274 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2274 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2274 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2274 "cplus.met"
                    }
#line 2274 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2274 "cplus.met"
                    retTree=_ptRes0;
#line 2274 "cplus.met"
                }
#line 2274 "cplus.met"
#line 2275 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2275 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2275 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2275 "cplus.met"
                } else {
#line 2275 "cplus.met"
                    tokenAhead = 0 ;
#line 2275 "cplus.met"
                }
#line 2275 "cplus.met"
#line 2276 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2276 "cplus.met"
#line 2277 "cplus.met"
                                            { PPTREE theTree ;
#line 2277 "cplus.met"
                                              theTree = valTree ;
#line 2277 "cplus.met"
                                              if (theTree) {
#line 2277 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2277 "cplus.met"
                                               if (NumberTree(theTree)
#line 2277 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2277 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2277 "cplus.met"
                                               else
#line 2277 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2277 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2277 "cplus.met"
                                                  /* modif portage sun */
#line 2277 "cplus.met"
                                                  retTree = valTree;
#line 2277 "cplus.met"
                                              }
#line 2277 "cplus.met"
                                                 }
#line 2277 "cplus.met"
                                        
#line 2277 "cplus.met"
                }
#line 2277 "cplus.met"
#line 2277 "cplus.met"
                break;
#line 2277 "cplus.met"
#line 2294 "cplus.met"
            case META : 
#line 2294 "cplus.met"
            case IDENT : 
#line 2294 "cplus.met"
#line 2295 "cplus.met"
#line 2296 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2296 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2296 "cplus.met"
                }
#line 2296 "cplus.met"
#line 2297 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2297 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2297 "cplus.met"
#line 2298 "cplus.met"
                    {
#line 2298 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2298 "cplus.met"
                        {
#line 2298 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2298 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2298 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2298 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2298 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2298 "cplus.met"
                            }
#line 2298 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2298 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2298 "cplus.met"
                        }
#line 2298 "cplus.met"
                        _retValue =_ptTree0;
#line 2298 "cplus.met"
                        goto declarator_ret;
#line 2298 "cplus.met"
                    }
#line 2298 "cplus.met"
                }
#line 2298 "cplus.met"
#line 2300 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2300 "cplus.met"
#line 2301 "cplus.met"
                                            { PPTREE theTree ;
#line 2301 "cplus.met"
                                              theTree = valTree ;
#line 2301 "cplus.met"
                                              if (theTree) {
#line 2301 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2301 "cplus.met"
                                               if (NumberTree(theTree)
#line 2301 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2301 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2301 "cplus.met"
                                               else
#line 2301 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2301 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2301 "cplus.met"
                                                  /* modif portage sun */
#line 2301 "cplus.met"
                                                  retTree = valTree;
#line 2301 "cplus.met"
                                              }
#line 2301 "cplus.met"
                                                 }
#line 2301 "cplus.met"
                                        
#line 2301 "cplus.met"
                }
#line 2301 "cplus.met"
#line 2301 "cplus.met"
                break;
#line 2301 "cplus.met"
#line 2318 "cplus.met"
            case OPERATOR : 
#line 2318 "cplus.met"
#line 2319 "cplus.met"
#line 2320 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2320 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2320 "cplus.met"
                }
#line 2320 "cplus.met"
#line 2321 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2321 "cplus.met"
#line 2322 "cplus.met"
                                            { PPTREE theTree ;
#line 2322 "cplus.met"
                                              theTree = valTree ;
#line 2322 "cplus.met"
                                              if (theTree) {
#line 2322 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2322 "cplus.met"
                                               if (NumberTree(theTree)
#line 2322 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2322 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2322 "cplus.met"
                                               else
#line 2322 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2322 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2322 "cplus.met"
                                                  /* modif portage sun */
#line 2322 "cplus.met"
                                                  retTree = valTree;
#line 2322 "cplus.met"
                                              }
#line 2322 "cplus.met"
                                                 }
#line 2322 "cplus.met"
                                        
#line 2322 "cplus.met"
                }
#line 2322 "cplus.met"
#line 2322 "cplus.met"
                break;
#line 2322 "cplus.met"
            default :
#line 2322 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or ~ or ( or IDENT or operator")
#line 2322 "cplus.met"
                break;
#line 2322 "cplus.met"
        }
#line 2322 "cplus.met"
    }
#line 2322 "cplus.met"
#line 2340 "cplus.met"
    {
#line 2340 "cplus.met"
        _retValue = retTree ;
#line 2340 "cplus.met"
        goto declarator_ret;
#line 2340 "cplus.met"
        
#line 2340 "cplus.met"
    }
#line 2340 "cplus.met"
#line 2340 "cplus.met"
#line 2340 "cplus.met"

#line 2341 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2341 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2341 "cplus.met"
return((PPTREE) 0);
#line 2341 "cplus.met"

#line 2341 "cplus.met"
declarator_exit :
#line 2341 "cplus.met"

#line 2341 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2341 "cplus.met"
    _funcLevel--;
#line 2341 "cplus.met"
    return((PPTREE) -1) ;
#line 2341 "cplus.met"

#line 2341 "cplus.met"
declarator_ret :
#line 2341 "cplus.met"
    
#line 2341 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2341 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2341 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2341 "cplus.met"
    return _retValue ;
#line 2341 "cplus.met"
}
#line 2341 "cplus.met"

#line 2341 "cplus.met"
#line 2231 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2231 "cplus.met"
{
#line 2231 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2231 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2231 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2231 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2231 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2231 "cplus.met"
#line 2231 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2231 "cplus.met"
#line 2233 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2233 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2233 "cplus.met"
#line 2234 "cplus.met"
        
#line 2234 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2234 "cplus.met"
        goto declarator_follow_exit;
#line 2234 "cplus.met"
#line 2234 "cplus.met"
    }
#line 2234 "cplus.met"
#line 2235 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2235 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2235 "cplus.met"
#line 2236 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2236 "cplus.met"
        switch( lexEl.Value) {
#line 2236 "cplus.met"
#line 2239 "cplus.met"
            case COUV : 
#line 2239 "cplus.met"
                tokenAhead = 0 ;
#line 2239 "cplus.met"
                CommTerm();
#line 2239 "cplus.met"
#line 2238 "cplus.met"
#line 2239 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2239 "cplus.met"
#line 2240 "cplus.met"
                    {
#line 2240 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2240 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2240 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2240 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2240 "cplus.met"
                        retTree=_ptRes0;
#line 2240 "cplus.met"
                    }
#line 2240 "cplus.met"
                } else {
#line 2240 "cplus.met"
#line 2242 "cplus.met"
                    {
#line 2242 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2242 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2242 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2242 "cplus.met"
                        retTree=_ptRes0;
#line 2242 "cplus.met"
                    }
#line 2242 "cplus.met"
                }
#line 2242 "cplus.met"
#line 2243 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2243 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2243 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2243 "cplus.met"
                } else {
#line 2243 "cplus.met"
                    tokenAhead = 0 ;
#line 2243 "cplus.met"
                }
#line 2243 "cplus.met"
#line 2243 "cplus.met"
                break;
#line 2243 "cplus.met"
#line 2250 "cplus.met"
            case POUV : 
#line 2250 "cplus.met"
#line 2246 "cplus.met"
#line 2249 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 11, cplus)){
#line 2249 "cplus.met"
#line 2251 "cplus.met"
#line 2252 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2252 "cplus.met"
#line 2253 "cplus.met"
                    {
#line 2253 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2253 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2253 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2253 "cplus.met"
                        }
#line 2253 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2253 "cplus.met"
                    }
#line 2253 "cplus.met"
#line 2254 "cplus.met"
                    retTree = valTree ;
#line 2254 "cplus.met"
#line 2254 "cplus.met"
#line 2254 "cplus.met"
                } else {
#line 2254 "cplus.met"
#line 2257 "cplus.met"
                    {
#line 2257 "cplus.met"
                        _retValue = retTree ;
#line 2257 "cplus.met"
                        goto declarator_follow_ret;
#line 2257 "cplus.met"
                        
#line 2257 "cplus.met"
                    }
#line 2257 "cplus.met"
                }
#line 2257 "cplus.met"
#line 2257 "cplus.met"
                break;
#line 2257 "cplus.met"
            default :
#line 2257 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2257 "cplus.met"
                break;
#line 2257 "cplus.met"
        }
#line 2257 "cplus.met"
    } 
#line 2257 "cplus.met"
#line 2260 "cplus.met"
    {
#line 2260 "cplus.met"
        _retValue = retTree ;
#line 2260 "cplus.met"
        goto declarator_follow_ret;
#line 2260 "cplus.met"
        
#line 2260 "cplus.met"
    }
#line 2260 "cplus.met"
#line 2260 "cplus.met"
#line 2260 "cplus.met"

#line 2261 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2261 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2261 "cplus.met"
return((PPTREE) 0);
#line 2261 "cplus.met"

#line 2261 "cplus.met"
declarator_follow_exit :
#line 2261 "cplus.met"

#line 2261 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2261 "cplus.met"
    _funcLevel--;
#line 2261 "cplus.met"
    return((PPTREE) -1) ;
#line 2261 "cplus.met"

#line 2261 "cplus.met"
declarator_follow_ret :
#line 2261 "cplus.met"
    
#line 2261 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2261 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2261 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2261 "cplus.met"
    return _retValue ;
#line 2261 "cplus.met"
}
#line 2261 "cplus.met"

#line 2261 "cplus.met"
#line 1556 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1556 "cplus.met"
{
#line 1556 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1556 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1556 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1556 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1556 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1556 "cplus.met"
#line 1556 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1556 "cplus.met"
#line 1556 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1556 "cplus.met"
#line 1556 "cplus.met"
    _addlist1 = list ;
#line 1556 "cplus.met"
#line 1558 "cplus.met"
    do {
#line 1558 "cplus.met"
#line 1559 "cplus.met"
        {
#line 1559 "cplus.met"
            PPTREE _ptTree0=0;
#line 1559 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1559 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1559 "cplus.met"
            }
#line 1559 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1559 "cplus.met"
        }
#line 1559 "cplus.met"
#line 1559 "cplus.met"
        if (list){
#line 1559 "cplus.met"
#line 1559 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1559 "cplus.met"
        } else {
#line 1559 "cplus.met"
#line 1559 "cplus.met"
            list = _addlist1 ;
#line 1559 "cplus.met"
        }
#line 1559 "cplus.met"
#line 1559 "cplus.met"
#line 1560 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1560 "cplus.met"
#line 1561 "cplus.met"
    {
#line 1561 "cplus.met"
        _retValue = list ;
#line 1561 "cplus.met"
        goto declarator_list_ret;
#line 1561 "cplus.met"
        
#line 1561 "cplus.met"
    }
#line 1561 "cplus.met"
#line 1561 "cplus.met"
#line 1561 "cplus.met"

#line 1562 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1562 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1562 "cplus.met"
return((PPTREE) 0);
#line 1562 "cplus.met"

#line 1562 "cplus.met"
declarator_list_exit :
#line 1562 "cplus.met"

#line 1562 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1562 "cplus.met"
    _funcLevel--;
#line 1562 "cplus.met"
    return((PPTREE) -1) ;
#line 1562 "cplus.met"

#line 1562 "cplus.met"
declarator_list_ret :
#line 1562 "cplus.met"
    
#line 1562 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1562 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1562 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1562 "cplus.met"
    return _retValue ;
#line 1562 "cplus.met"
}
#line 1562 "cplus.met"

#line 1562 "cplus.met"
#line 1547 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1547 "cplus.met"
{
#line 1547 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1547 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1547 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1547 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1547 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1547 "cplus.met"
#line 1547 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1547 "cplus.met"
#line 1547 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1547 "cplus.met"
#line 1547 "cplus.met"
    _addlist1 = list ;
#line 1547 "cplus.met"
#line 1549 "cplus.met"
    do {
#line 1549 "cplus.met"
#line 1550 "cplus.met"
        {
#line 1550 "cplus.met"
            PPTREE _ptTree0=0;
#line 1550 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 48, cplus))== (PPTREE) -1 ) {
#line 1550 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1550 "cplus.met"
            }
#line 1550 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1550 "cplus.met"
        }
#line 1550 "cplus.met"
#line 1550 "cplus.met"
        if (list){
#line 1550 "cplus.met"
#line 1550 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1550 "cplus.met"
        } else {
#line 1550 "cplus.met"
#line 1550 "cplus.met"
            list = _addlist1 ;
#line 1550 "cplus.met"
        }
#line 1550 "cplus.met"
#line 1550 "cplus.met"
#line 1551 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1551 "cplus.met"
#line 1552 "cplus.met"
    {
#line 1552 "cplus.met"
        _retValue = list ;
#line 1552 "cplus.met"
        goto declarator_list_init_ret;
#line 1552 "cplus.met"
        
#line 1552 "cplus.met"
    }
#line 1552 "cplus.met"
#line 1552 "cplus.met"
#line 1552 "cplus.met"

#line 1553 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1553 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1553 "cplus.met"
return((PPTREE) 0);
#line 1553 "cplus.met"

#line 1553 "cplus.met"
declarator_list_init_exit :
#line 1553 "cplus.met"

#line 1553 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1553 "cplus.met"
    _funcLevel--;
#line 1553 "cplus.met"
    return((PPTREE) -1) ;
#line 1553 "cplus.met"

#line 1553 "cplus.met"
declarator_list_init_ret :
#line 1553 "cplus.met"
    
#line 1553 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1553 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1553 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1553 "cplus.met"
    return _retValue ;
#line 1553 "cplus.met"
}
#line 1553 "cplus.met"

#line 1553 "cplus.met"
#line 1532 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1532 "cplus.met"
{
#line 1532 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1532 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1532 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1532 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1532 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1532 "cplus.met"
#line 1532 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1532 "cplus.met"
#line 1534 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1534 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1534 "cplus.met"
    }
#line 1534 "cplus.met"
#line 1535 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1535 "cplus.met"
    switch( lexEl.Value) {
#line 1535 "cplus.met"
#line 1536 "cplus.met"
        case EGAL : 
#line 1536 "cplus.met"
            tokenAhead = 0 ;
#line 1536 "cplus.met"
            CommTerm();
#line 1536 "cplus.met"
#line 1536 "cplus.met"
            {
#line 1536 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1536 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1536 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1536 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 1536 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1536 "cplus.met"
                }
#line 1536 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1536 "cplus.met"
                valTree=_ptRes0;
#line 1536 "cplus.met"
            }
#line 1536 "cplus.met"
            break;
#line 1536 "cplus.met"
#line 1539 "cplus.met"
        case POUV : 
#line 1539 "cplus.met"
            tokenAhead = 0 ;
#line 1539 "cplus.met"
            CommTerm();
#line 1539 "cplus.met"
#line 1538 "cplus.met"
#line 1539 "cplus.met"
            {
#line 1539 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1539 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1539 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1539 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1539 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1539 "cplus.met"
                }
#line 1539 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1539 "cplus.met"
                valTree=_ptRes0;
#line 1539 "cplus.met"
            }
#line 1539 "cplus.met"
#line 1540 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1540 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1540 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1540 "cplus.met"
            } else {
#line 1540 "cplus.met"
                tokenAhead = 0 ;
#line 1540 "cplus.met"
            }
#line 1540 "cplus.met"
#line 1540 "cplus.met"
            break;
#line 1540 "cplus.met"
#line 1540 "cplus.met"
        default : 
#line 1540 "cplus.met"
#line 1540 "cplus.met"
            break;
#line 1540 "cplus.met"
    }
#line 1540 "cplus.met"
#line 1544 "cplus.met"
    {
#line 1544 "cplus.met"
        _retValue = valTree ;
#line 1544 "cplus.met"
        goto declarator_value_ret;
#line 1544 "cplus.met"
        
#line 1544 "cplus.met"
    }
#line 1544 "cplus.met"
#line 1544 "cplus.met"
#line 1544 "cplus.met"

#line 1545 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1545 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1545 "cplus.met"
return((PPTREE) 0);
#line 1545 "cplus.met"

#line 1545 "cplus.met"
declarator_value_exit :
#line 1545 "cplus.met"

#line 1545 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1545 "cplus.met"
    _funcLevel--;
#line 1545 "cplus.met"
    return((PPTREE) -1) ;
#line 1545 "cplus.met"

#line 1545 "cplus.met"
declarator_value_ret :
#line 1545 "cplus.met"
    
#line 1545 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1545 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1545 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1545 "cplus.met"
    return _retValue ;
#line 1545 "cplus.met"
}
#line 1545 "cplus.met"

#line 1545 "cplus.met"
#line 1486 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1486 "cplus.met"
{
#line 1486 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1486 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1486 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1486 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1486 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1486 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1486 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1486 "cplus.met"
#line 1486 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1486 "cplus.met"
#line 1486 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1486 "cplus.met"
#line 1488 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1488 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1488 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1488 "cplus.met"
    } else {
#line 1488 "cplus.met"
        tokenAhead = 0 ;
#line 1488 "cplus.met"
    }
#line 1488 "cplus.met"
#line 1489 "cplus.met"
    {
#line 1489 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1489 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1489 "cplus.met"
        {
#line 1489 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1489 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1489 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1489 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1489 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
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
    {
#line 1490 "cplus.met"
        keepCarriage = 1 ;
#line 1490 "cplus.met"
#line 1491 "cplus.met"
#line 1492 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1492 "cplus.met"
#line 1493 "cplus.met"
            {
#line 1493 "cplus.met"
                PPTREE _ptTree0=0;
#line 1493 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1493 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1493 "cplus.met"
                }
#line 1493 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1493 "cplus.met"
            }
#line 1493 "cplus.met"
#line 1493 "cplus.met"
        }
#line 1493 "cplus.met"
#line 1494 "cplus.met"
        ExtUnputBuf();
#line 1494 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1494 "cplus.met"
            NextChar() ;
#line 1494 "cplus.met"
        ptStockBuf = -1;
#line 1494 "cplus.met"
        lexEl.Erase();
#line 1494 "cplus.met"
        tokenAhead = 0;
#line 1494 "cplus.met"
        oldLine=line,oldCol=col;
#line 1494 "cplus.met"
        if ( !lexCallLex) {
#line 1494 "cplus.met"
            PUT_COORD_CALL;
#line 1494 "cplus.met"
        }
#line 1494 "cplus.met"
#line 1495 "cplus.met"
        {
#line 1495 "cplus.met"
            keepAll = 1 ;
#line 1495 "cplus.met"
#line 1496 "cplus.met"
#line 1496 "cplus.met"
            _addlist1 = listDefine ;
#line 1496 "cplus.met"
#line 1497 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1497 "cplus.met"
#line 1498 "cplus.met"
#line 1498 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1498 "cplus.met"
#line 1498 "cplus.met"
                if (listDefine){
#line 1498 "cplus.met"
#line 1498 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1498 "cplus.met"
                } else {
#line 1498 "cplus.met"
#line 1498 "cplus.met"
                    listDefine = _addlist1 ;
#line 1498 "cplus.met"
                }
#line 1498 "cplus.met"
            } 
#line 1498 "cplus.met"
#line 1499 "cplus.met"
            {
#line 1499 "cplus.met"
                PPTREE _ptTree0=0;
#line 1499 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1499 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1499 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1499 "cplus.met"
                } else {
#line 1499 "cplus.met"
                    tokenAhead = 0 ;
#line 1499 "cplus.met"
                }
#line 1499 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1499 "cplus.met"
            }
#line 1499 "cplus.met"
#line 1499 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1499 "cplus.met"
        }
#line 1499 "cplus.met"
#line 1499 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1499 "cplus.met"
    }
#line 1499 "cplus.met"
#line 1502 "cplus.met"
    {
#line 1502 "cplus.met"
        PPTREE _ptTree0=0;
#line 1502 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1502 "cplus.met"
        _retValue =_ptTree0;
#line 1502 "cplus.met"
        goto define_dir_ret;
#line 1502 "cplus.met"
    }
#line 1502 "cplus.met"
#line 1502 "cplus.met"
#line 1502 "cplus.met"

#line 1503 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1503 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1503 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1503 "cplus.met"
keepAll =  _oldkeepAll;
#line 1503 "cplus.met"
return((PPTREE) 0);
#line 1503 "cplus.met"

#line 1503 "cplus.met"
define_dir_exit :
#line 1503 "cplus.met"

#line 1503 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1503 "cplus.met"
    _funcLevel--;
#line 1503 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1503 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1503 "cplus.met"
    return((PPTREE) -1) ;
#line 1503 "cplus.met"

#line 1503 "cplus.met"
define_dir_ret :
#line 1503 "cplus.met"
    
#line 1503 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1503 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1503 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1503 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1503 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1503 "cplus.met"
    return _retValue ;
#line 1503 "cplus.met"
}
#line 1503 "cplus.met"

#line 1503 "cplus.met"
#line 1275 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1275 "cplus.met"
{
#line 1275 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1275 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1275 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1275 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1275 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1275 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1275 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1275 "cplus.met"
#line 1275 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 1275 "cplus.met"
#line 1275 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0,exp = (PPTREE) 0;
#line 1275 "cplus.met"
#line 1277 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1277 "cplus.met"
    switch( lexEl.Value) {
#line 1277 "cplus.met"
#line 1278 "cplus.met"
        case META : 
#line 1278 "cplus.met"
        case DEFINE_DIR : 
#line 1278 "cplus.met"
#line 1278 "cplus.met"
            {
#line 1278 "cplus.met"
                PPTREE _ptTree0=0;
#line 1278 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1278 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1278 "cplus.met"
                }
#line 1278 "cplus.met"
                _retValue =_ptTree0;
#line 1278 "cplus.met"
                goto directive_ret;
#line 1278 "cplus.met"
            }
#line 1278 "cplus.met"
            break;
#line 1278 "cplus.met"
#line 1279 "cplus.met"
        case INCLUDE_DIR : 
#line 1279 "cplus.met"
#line 1279 "cplus.met"
            {
#line 1279 "cplus.met"
                PPTREE _ptTree0=0;
#line 1279 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 1279 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1279 "cplus.met"
                }
#line 1279 "cplus.met"
                _retValue =_ptTree0;
#line 1279 "cplus.met"
                goto directive_ret;
#line 1279 "cplus.met"
            }
#line 1279 "cplus.met"
            break;
#line 1279 "cplus.met"
#line 1280 "cplus.met"
        case LINE_DIR : 
#line 1280 "cplus.met"
            tokenAhead = 0 ;
#line 1280 "cplus.met"
            CommTerm();
#line 1280 "cplus.met"
#line 1281 "cplus.met"
#line 1282 "cplus.met"
            {
#line 1282 "cplus.met"
                keepCarriage = 1 ;
#line 1282 "cplus.met"
#line 1283 "cplus.met"
#line 1284 "cplus.met"
                {
#line 1284 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1284 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1284 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1284 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1284 "cplus.met"
                    }
#line 1284 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1284 "cplus.met"
                    retTree=_ptRes0;
#line 1284 "cplus.met"
                }
#line 1284 "cplus.met"
#line 1285 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1285 "cplus.met"
#line 1286 "cplus.met"
                    {
#line 1286 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1286 "cplus.met"
                        {
#line 1286 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1286 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1286 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1286 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1286 "cplus.met"
                        }
#line 1286 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1286 "cplus.met"
                    }
#line 1286 "cplus.met"
#line 1286 "cplus.met"
                }
#line 1286 "cplus.met"
#line 1287 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1287 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1287 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1287 "cplus.met"
                } else {
#line 1287 "cplus.met"
                    tokenAhead = 0 ;
#line 1287 "cplus.met"
                }
#line 1287 "cplus.met"
#line 1287 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1287 "cplus.met"
            }
#line 1287 "cplus.met"
#line 1289 "cplus.met"
            {
#line 1289 "cplus.met"
                _retValue = retTree ;
#line 1289 "cplus.met"
                goto directive_ret;
#line 1289 "cplus.met"
                
#line 1289 "cplus.met"
            }
#line 1289 "cplus.met"
#line 1289 "cplus.met"
            break;
#line 1289 "cplus.met"
#line 1291 "cplus.met"
        case LINE_REFERENCE_DIR : 
#line 1291 "cplus.met"
            tokenAhead = 0 ;
#line 1291 "cplus.met"
            CommTerm();
#line 1291 "cplus.met"
#line 1292 "cplus.met"
#line 1293 "cplus.met"
            {
#line 1293 "cplus.met"
                keepCarriage = 1 ;
#line 1293 "cplus.met"
#line 1294 "cplus.met"
#line 1295 "cplus.met"
                {
#line 1295 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1295 "cplus.met"
                    _ptRes0= MakeTree(LINE_REFERENCE_DIR, 3);
#line 1295 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1295 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1295 "cplus.met"
                    }
#line 1295 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1295 "cplus.met"
                    retTree=_ptRes0;
#line 1295 "cplus.met"
                }
#line 1295 "cplus.met"
#line 1297 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1297 "cplus.met"
#line 1298 "cplus.met"
                    {
#line 1298 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1298 "cplus.met"
                        {
#line 1298 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1298 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1298 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1298 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1298 "cplus.met"
                        }
#line 1298 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1298 "cplus.met"
                    }
#line 1298 "cplus.met"
#line 1298 "cplus.met"
                }
#line 1298 "cplus.met"
#line 1298 "cplus.met"
                _addlist1 = list ;
#line 1298 "cplus.met"
#line 1299 "cplus.met"
                while (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(expression), 60, cplus)) { 
#line 1299 "cplus.met"
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,exp );
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                    if (list){
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1300 "cplus.met"
                    } else {
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                        list = _addlist1 ;
#line 1300 "cplus.met"
                    }
#line 1300 "cplus.met"
                } 
#line 1300 "cplus.met"
#line 1301 "cplus.met"
                ReplaceTree(retTree ,3 ,list );
#line 1301 "cplus.met"
#line 1302 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1302 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1302 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1302 "cplus.met"
                } else {
#line 1302 "cplus.met"
                    tokenAhead = 0 ;
#line 1302 "cplus.met"
                }
#line 1302 "cplus.met"
#line 1302 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1302 "cplus.met"
            }
#line 1302 "cplus.met"
#line 1304 "cplus.met"
            {
#line 1304 "cplus.met"
                _retValue = retTree ;
#line 1304 "cplus.met"
                goto directive_ret;
#line 1304 "cplus.met"
                
#line 1304 "cplus.met"
            }
#line 1304 "cplus.met"
#line 1304 "cplus.met"
            break;
#line 1304 "cplus.met"
#line 1306 "cplus.met"
        case UNDEF_DIR : 
#line 1306 "cplus.met"
            tokenAhead = 0 ;
#line 1306 "cplus.met"
            CommTerm();
#line 1306 "cplus.met"
#line 1306 "cplus.met"
            {
#line 1306 "cplus.met"
                PPTREE _ptTree0=0;
#line 1306 "cplus.met"
                {
#line 1306 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1306 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1306 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1306 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1306 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1306 "cplus.met"
                    } else {
#line 1306 "cplus.met"
                        tokenAhead = 0 ;
#line 1306 "cplus.met"
                    }
#line 1306 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1306 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1306 "cplus.met"
                }
#line 1306 "cplus.met"
                _retValue =_ptTree0;
#line 1306 "cplus.met"
                goto directive_ret;
#line 1306 "cplus.met"
            }
#line 1306 "cplus.met"
            break;
#line 1306 "cplus.met"
#line 1307 "cplus.met"
        case ERROR_DIR : 
#line 1307 "cplus.met"
            tokenAhead = 0 ;
#line 1307 "cplus.met"
            CommTerm();
#line 1307 "cplus.met"
#line 1307 "cplus.met"
            {
#line 1307 "cplus.met"
                PPTREE _ptTree0=0;
#line 1307 "cplus.met"
                {
#line 1307 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1307 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1307 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1307 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1307 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1307 "cplus.met"
                    } else {
#line 1307 "cplus.met"
                        tokenAhead = 0 ;
#line 1307 "cplus.met"
                    }
#line 1307 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1307 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1307 "cplus.met"
                }
#line 1307 "cplus.met"
                _retValue =_ptTree0;
#line 1307 "cplus.met"
                goto directive_ret;
#line 1307 "cplus.met"
            }
#line 1307 "cplus.met"
            break;
#line 1307 "cplus.met"
#line 1308 "cplus.met"
        case PRAGMA_DIR : 
#line 1308 "cplus.met"
            tokenAhead = 0 ;
#line 1308 "cplus.met"
            CommTerm();
#line 1308 "cplus.met"
#line 1309 "cplus.met"
#line 1310 "cplus.met"
#line 1311 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1311 "cplus.met"
#line 1312 "cplus.met"
#line 1313 "cplus.met"
                {
#line 1313 "cplus.met"
                    keepCarriage = 1 ;
#line 1313 "cplus.met"
#line 1314 "cplus.met"
#line 1315 "cplus.met"
                    {
#line 1315 "cplus.met"
                        keepAll = 1 ;
#line 1315 "cplus.met"
#line 1316 "cplus.met"
#line 1317 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1317 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1317 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1317 "cplus.met"
                        } else {
#line 1317 "cplus.met"
                            tokenAhead = 0 ;
#line 1317 "cplus.met"
                        }
#line 1317 "cplus.met"
#line 1317 "cplus.met"
                        _addlist2 = list ;
#line 1317 "cplus.met"
#line 1318 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 51, cplus))) { 
#line 1318 "cplus.met"
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                            {
#line 1319 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1319 "cplus.met"
                                {
#line 1319 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1319 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1319 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1319 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1319 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1319 "cplus.met"
                                    } else {
#line 1319 "cplus.met"
                                        tokenAhead = 0 ;
#line 1319 "cplus.met"
                                    }
#line 1319 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1319 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1319 "cplus.met"
                                }
#line 1319 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1319 "cplus.met"
                            }
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                            if (list){
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1319 "cplus.met"
                            } else {
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                                list = _addlist2 ;
#line 1319 "cplus.met"
                            }
#line 1319 "cplus.met"
                        } 
#line 1319 "cplus.met"
#line 1320 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1320 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1320 "cplus.met"
                        }
#line 1320 "cplus.met"
#line 1320 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1320 "cplus.met"
                    }
#line 1320 "cplus.met"
#line 1320 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1320 "cplus.met"
                }
#line 1320 "cplus.met"
#line 1324 "cplus.met"
                 tokenAhead = 0;
#line 1324 "cplus.met"
#line 1326 "cplus.met"
                {
#line 1326 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1326 "cplus.met"
                    {
#line 1326 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1326 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1326 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1326 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1326 "cplus.met"
                    }
#line 1326 "cplus.met"
                    _retValue =_ptTree0;
#line 1326 "cplus.met"
                    goto directive_ret;
#line 1326 "cplus.met"
                }
#line 1326 "cplus.met"
#line 1326 "cplus.met"
            } else 
#line 1326 "cplus.met"
#line 1328 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
#line 1328 "cplus.met"
#line 1329 "cplus.met"
#line 1330 "cplus.met"
                {
#line 1330 "cplus.met"
                    keepCarriage = 1 ;
#line 1330 "cplus.met"
#line 1331 "cplus.met"
#line 1332 "cplus.met"
                    {
#line 1332 "cplus.met"
                        keepAll = 1 ;
#line 1332 "cplus.met"
#line 1333 "cplus.met"
#line 1334 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1334 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1334 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1334 "cplus.met"
                        } else {
#line 1334 "cplus.met"
                            tokenAhead = 0 ;
#line 1334 "cplus.met"
                        }
#line 1334 "cplus.met"
#line 1334 "cplus.met"
                        _addlist3 = list ;
#line 1334 "cplus.met"
#line 1335 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 52, cplus))) { 
#line 1335 "cplus.met"
#line 1336 "cplus.met"
#line 1336 "cplus.met"
                            {
#line 1336 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1336 "cplus.met"
                                {
#line 1336 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1336 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1336 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1336 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1336 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1336 "cplus.met"
                                    } else {
#line 1336 "cplus.met"
                                        tokenAhead = 0 ;
#line 1336 "cplus.met"
                                    }
#line 1336 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1336 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1336 "cplus.met"
                                }
#line 1336 "cplus.met"
                                _addlist3 =AddList(_addlist3 , _ptTree0);
#line 1336 "cplus.met"
                            }
#line 1336 "cplus.met"
#line 1336 "cplus.met"
                            if (list){
#line 1336 "cplus.met"
#line 1336 "cplus.met"
                                _addlist3 = SonTree (_addlist3 ,2 );
#line 1336 "cplus.met"
                            } else {
#line 1336 "cplus.met"
#line 1336 "cplus.met"
                                list = _addlist3 ;
#line 1336 "cplus.met"
                            }
#line 1336 "cplus.met"
                        } 
#line 1336 "cplus.met"
#line 1337 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1337 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1337 "cplus.met"
                        }
#line 1337 "cplus.met"
#line 1337 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1337 "cplus.met"
                    }
#line 1337 "cplus.met"
#line 1337 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1337 "cplus.met"
                }
#line 1337 "cplus.met"
#line 1341 "cplus.met"
                 tokenAhead = 0;
#line 1341 "cplus.met"
#line 1343 "cplus.met"
                {
#line 1343 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1343 "cplus.met"
                    {
#line 1343 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1343 "cplus.met"
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
#line 1343 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1343 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1343 "cplus.met"
                    }
#line 1343 "cplus.met"
                    _retValue =_ptTree0;
#line 1343 "cplus.met"
                    goto directive_ret;
#line 1343 "cplus.met"
                }
#line 1343 "cplus.met"
#line 1343 "cplus.met"
            } else 
#line 1343 "cplus.met"
#line 1345 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1345 "cplus.met"
#line 1346 "cplus.met"
#line 1347 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1347 "cplus.met"
                switch( lexEl.Value) {
#line 1347 "cplus.met"
#line 1348 "cplus.met"
                    case META : 
#line 1348 "cplus.met"
                    case PRAGMA_TAB : 
#line 1348 "cplus.met"
                        tokenAhead = 0 ;
#line 1348 "cplus.met"
                        CommTerm();
#line 1348 "cplus.met"
#line 1349 "cplus.met"
#line 1350 "cplus.met"
                        {
#line 1350 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1350 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1350 "cplus.met"
                            {
#line 1350 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1350 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1350 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1350 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1350 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1350 "cplus.met"
                                } else {
#line 1350 "cplus.met"
                                    tokenAhead = 0 ;
#line 1350 "cplus.met"
                                }
#line 1350 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1350 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1350 "cplus.met"
                            }
#line 1350 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1350 "cplus.met"
                            retTree=_ptRes0;
#line 1350 "cplus.met"
                        }
#line 1350 "cplus.met"
#line 1353 "cplus.met"
                        AnalyzeTab (retTree );
#line 1353 "cplus.met"
#line 1354 "cplus.met"
                        {
#line 1354 "cplus.met"
                            _retValue = retTree ;
#line 1354 "cplus.met"
                            goto directive_ret;
#line 1354 "cplus.met"
                            
#line 1354 "cplus.met"
                        }
#line 1354 "cplus.met"
#line 1354 "cplus.met"
                        break;
#line 1354 "cplus.met"
#line 1356 "cplus.met"
                    case PRAGMA_MODE : 
#line 1356 "cplus.met"
                        tokenAhead = 0 ;
#line 1356 "cplus.met"
                        CommTerm();
#line 1356 "cplus.met"
#line 1357 "cplus.met"
#line 1358 "cplus.met"
                        {
#line 1358 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1358 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1358 "cplus.met"
                            {
#line 1358 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1358 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1358 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1358 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1358 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1358 "cplus.met"
                                } else {
#line 1358 "cplus.met"
                                    tokenAhead = 0 ;
#line 1358 "cplus.met"
                                }
#line 1358 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1358 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1358 "cplus.met"
                            }
#line 1358 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1358 "cplus.met"
                            retTree=_ptRes0;
#line 1358 "cplus.met"
                        }
#line 1358 "cplus.met"
#line 1361 "cplus.met"
                        AnalyzeMode (retTree );
#line 1361 "cplus.met"
#line 1362 "cplus.met"
                        {
#line 1362 "cplus.met"
                            _retValue = retTree ;
#line 1362 "cplus.met"
                            goto directive_ret;
#line 1362 "cplus.met"
                            
#line 1362 "cplus.met"
                        }
#line 1362 "cplus.met"
#line 1362 "cplus.met"
                        break;
#line 1362 "cplus.met"
#line 1364 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1364 "cplus.met"
                        tokenAhead = 0 ;
#line 1364 "cplus.met"
                        CommTerm();
#line 1364 "cplus.met"
#line 1365 "cplus.met"
#line 1366 "cplus.met"
                        {
#line 1366 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1366 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1366 "cplus.met"
                            {
#line 1366 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1366 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1366 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1366 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1366 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1366 "cplus.met"
                                } else {
#line 1366 "cplus.met"
                                    tokenAhead = 0 ;
#line 1366 "cplus.met"
                                }
#line 1366 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1366 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1366 "cplus.met"
                            }
#line 1366 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1366 "cplus.met"
                            retTree=_ptRes0;
#line 1366 "cplus.met"
                        }
#line 1366 "cplus.met"
#line 1369 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1369 "cplus.met"
#line 1370 "cplus.met"
                        {
#line 1370 "cplus.met"
                            _retValue = retTree ;
#line 1370 "cplus.met"
                            goto directive_ret;
#line 1370 "cplus.met"
                            
#line 1370 "cplus.met"
                        }
#line 1370 "cplus.met"
#line 1370 "cplus.met"
                        break;
#line 1370 "cplus.met"
#line 1372 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1372 "cplus.met"
                        tokenAhead = 0 ;
#line 1372 "cplus.met"
                        CommTerm();
#line 1372 "cplus.met"
#line 1373 "cplus.met"
#line 1374 "cplus.met"
                        {
#line 1374 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1374 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1374 "cplus.met"
                            {
#line 1374 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1374 "cplus.met"
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1374 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1374 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1374 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1374 "cplus.met"
                                } else {
#line 1374 "cplus.met"
                                    tokenAhead = 0 ;
#line 1374 "cplus.met"
                                }
#line 1374 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1374 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1374 "cplus.met"
                            }
#line 1374 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1374 "cplus.met"
                            retTree=_ptRes0;
#line 1374 "cplus.met"
                        }
#line 1374 "cplus.met"
#line 1378 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1378 "cplus.met"
#line 1379 "cplus.met"
                        {
#line 1379 "cplus.met"
                            _retValue = retTree ;
#line 1379 "cplus.met"
                            goto directive_ret;
#line 1379 "cplus.met"
                            
#line 1379 "cplus.met"
                        }
#line 1379 "cplus.met"
#line 1379 "cplus.met"
                        break;
#line 1379 "cplus.met"
#line 1381 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1381 "cplus.met"
                        tokenAhead = 0 ;
#line 1381 "cplus.met"
                        CommTerm();
#line 1381 "cplus.met"
#line 1382 "cplus.met"
#line 1383 "cplus.met"
                        {
#line 1383 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1383 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1383 "cplus.met"
                            {
#line 1383 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1383 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1383 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1383 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1383 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1383 "cplus.met"
                                } else {
#line 1383 "cplus.met"
                                    tokenAhead = 0 ;
#line 1383 "cplus.met"
                                }
#line 1383 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1383 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1383 "cplus.met"
                            }
#line 1383 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1383 "cplus.met"
                            retTree=_ptRes0;
#line 1383 "cplus.met"
                        }
#line 1383 "cplus.met"
#line 1386 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1386 "cplus.met"
#line 1387 "cplus.met"
                        {
#line 1387 "cplus.met"
                            _retValue = retTree ;
#line 1387 "cplus.met"
                            goto directive_ret;
#line 1387 "cplus.met"
                            
#line 1387 "cplus.met"
                        }
#line 1387 "cplus.met"
#line 1387 "cplus.met"
                        break;
#line 1387 "cplus.met"
#line 1389 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1389 "cplus.met"
                        tokenAhead = 0 ;
#line 1389 "cplus.met"
                        CommTerm();
#line 1389 "cplus.met"
#line 1390 "cplus.met"
#line 1391 "cplus.met"
                        {
#line 1391 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1391 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1391 "cplus.met"
                            {
#line 1391 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1391 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1391 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1391 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1391 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1391 "cplus.met"
                                } else {
#line 1391 "cplus.met"
                                    tokenAhead = 0 ;
#line 1391 "cplus.met"
                                }
#line 1391 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1391 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1391 "cplus.met"
                            }
#line 1391 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1391 "cplus.met"
                            retTree=_ptRes0;
#line 1391 "cplus.met"
                        }
#line 1391 "cplus.met"
#line 1394 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1394 "cplus.met"
#line 1395 "cplus.met"
                        {
#line 1395 "cplus.met"
                            _retValue = retTree ;
#line 1395 "cplus.met"
                            goto directive_ret;
#line 1395 "cplus.met"
                            
#line 1395 "cplus.met"
                        }
#line 1395 "cplus.met"
#line 1395 "cplus.met"
                        break;
#line 1395 "cplus.met"
#line 1397 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1397 "cplus.met"
                        tokenAhead = 0 ;
#line 1397 "cplus.met"
                        CommTerm();
#line 1397 "cplus.met"
#line 1398 "cplus.met"
#line 1399 "cplus.met"
                        {
#line 1399 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1399 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1399 "cplus.met"
                            {
#line 1399 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1399 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1399 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1399 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1399 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1399 "cplus.met"
                                } else {
#line 1399 "cplus.met"
                                    tokenAhead = 0 ;
#line 1399 "cplus.met"
                                }
#line 1399 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1399 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1399 "cplus.met"
                            }
#line 1399 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1399 "cplus.met"
                            retTree=_ptRes0;
#line 1399 "cplus.met"
                        }
#line 1399 "cplus.met"
#line 1402 "cplus.met"
                        AnalyzeBraceAlign (retTree );
#line 1402 "cplus.met"
#line 1403 "cplus.met"
                        {
#line 1403 "cplus.met"
                            _retValue = retTree ;
#line 1403 "cplus.met"
                            goto directive_ret;
#line 1403 "cplus.met"
                            
#line 1403 "cplus.met"
                        }
#line 1403 "cplus.met"
#line 1403 "cplus.met"
                        break;
#line 1403 "cplus.met"
#line 1405 "cplus.met"
                    case PRAGMA_MARGIN : 
#line 1405 "cplus.met"
                        tokenAhead = 0 ;
#line 1405 "cplus.met"
                        CommTerm();
#line 1405 "cplus.met"
#line 1406 "cplus.met"
#line 1407 "cplus.met"
                        {
#line 1407 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1407 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1407 "cplus.met"
                            {
#line 1407 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1407 "cplus.met"
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1407 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1407 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1407 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1407 "cplus.met"
                                } else {
#line 1407 "cplus.met"
                                    tokenAhead = 0 ;
#line 1407 "cplus.met"
                                }
#line 1407 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1407 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1407 "cplus.met"
                            }
#line 1407 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1407 "cplus.met"
                            retTree=_ptRes0;
#line 1407 "cplus.met"
                        }
#line 1407 "cplus.met"
#line 1410 "cplus.met"
                        AnalyzeMargin (retTree );
#line 1410 "cplus.met"
#line 1411 "cplus.met"
                        {
#line 1411 "cplus.met"
                            _retValue = retTree ;
#line 1411 "cplus.met"
                            goto directive_ret;
#line 1411 "cplus.met"
                            
#line 1411 "cplus.met"
                        }
#line 1411 "cplus.met"
#line 1411 "cplus.met"
                        break;
#line 1411 "cplus.met"
#line 1413 "cplus.met"
                    case PRAGMA_COMMENT_START : 
#line 1413 "cplus.met"
                        tokenAhead = 0 ;
#line 1413 "cplus.met"
                        CommTerm();
#line 1413 "cplus.met"
#line 1414 "cplus.met"
#line 1415 "cplus.met"
                        {
#line 1415 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1415 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1415 "cplus.met"
                            {
#line 1415 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1415 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1415 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1415 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1415 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1415 "cplus.met"
                                } else {
#line 1415 "cplus.met"
                                    tokenAhead = 0 ;
#line 1415 "cplus.met"
                                }
#line 1415 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1415 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1415 "cplus.met"
                            }
#line 1415 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1415 "cplus.met"
                            retTree=_ptRes0;
#line 1415 "cplus.met"
                        }
#line 1415 "cplus.met"
#line 1418 "cplus.met"
                        AnalyzeComment (retTree );
#line 1418 "cplus.met"
#line 1419 "cplus.met"
                        {
#line 1419 "cplus.met"
                            _retValue = retTree ;
#line 1419 "cplus.met"
                            goto directive_ret;
#line 1419 "cplus.met"
                            
#line 1419 "cplus.met"
                        }
#line 1419 "cplus.met"
#line 1419 "cplus.met"
                        break;
#line 1419 "cplus.met"
#line 1421 "cplus.met"
                    case PRAGMA_COMMENT_MIDDLE : 
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
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1423 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1423 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1423 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
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
#line 1426 "cplus.met"
                        AnalyzeComment (retTree );
#line 1426 "cplus.met"
#line 1427 "cplus.met"
                        {
#line 1427 "cplus.met"
                            _retValue = retTree ;
#line 1427 "cplus.met"
                            goto directive_ret;
#line 1427 "cplus.met"
                            
#line 1427 "cplus.met"
                        }
#line 1427 "cplus.met"
#line 1427 "cplus.met"
                        break;
#line 1427 "cplus.met"
#line 1429 "cplus.met"
                    case PRAGMA_COMMENT_END : 
#line 1429 "cplus.met"
                        tokenAhead = 0 ;
#line 1429 "cplus.met"
                        CommTerm();
#line 1429 "cplus.met"
#line 1430 "cplus.met"
#line 1431 "cplus.met"
                        {
#line 1431 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1431 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1431 "cplus.met"
                            {
#line 1431 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1431 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1431 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1431 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1431 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1431 "cplus.met"
                                } else {
#line 1431 "cplus.met"
                                    tokenAhead = 0 ;
#line 1431 "cplus.met"
                                }
#line 1431 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1431 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1431 "cplus.met"
                            }
#line 1431 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1431 "cplus.met"
                            retTree=_ptRes0;
#line 1431 "cplus.met"
                        }
#line 1431 "cplus.met"
#line 1434 "cplus.met"
                        AnalyzeComment (retTree );
#line 1434 "cplus.met"
#line 1435 "cplus.met"
                        {
#line 1435 "cplus.met"
                            _retValue = retTree ;
#line 1435 "cplus.met"
                            goto directive_ret;
#line 1435 "cplus.met"
                            
#line 1435 "cplus.met"
                        }
#line 1435 "cplus.met"
#line 1435 "cplus.met"
                        break;
#line 1435 "cplus.met"
#line 1437 "cplus.met"
                    case PRAGMA_COMMENT_PLUS : 
#line 1437 "cplus.met"
                        tokenAhead = 0 ;
#line 1437 "cplus.met"
                        CommTerm();
#line 1437 "cplus.met"
#line 1438 "cplus.met"
#line 1439 "cplus.met"
                        {
#line 1439 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1439 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1439 "cplus.met"
                            {
#line 1439 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1439 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1439 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1439 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1439 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1439 "cplus.met"
                                } else {
#line 1439 "cplus.met"
                                    tokenAhead = 0 ;
#line 1439 "cplus.met"
                                }
#line 1439 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1439 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1439 "cplus.met"
                            }
#line 1439 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1439 "cplus.met"
                            retTree=_ptRes0;
#line 1439 "cplus.met"
                        }
#line 1439 "cplus.met"
#line 1442 "cplus.met"
                        AnalyzeComment (retTree );
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
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
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
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
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
#line 1451 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1451 "cplus.met"
#line 1452 "cplus.met"
                        {
#line 1452 "cplus.met"
                            _retValue = retTree ;
#line 1452 "cplus.met"
                            goto directive_ret;
#line 1452 "cplus.met"
                            
#line 1452 "cplus.met"
                        }
#line 1452 "cplus.met"
#line 1452 "cplus.met"
                        break;
#line 1452 "cplus.met"
#line 1454 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1454 "cplus.met"
                        tokenAhead = 0 ;
#line 1454 "cplus.met"
                        CommTerm();
#line 1454 "cplus.met"
#line 1455 "cplus.met"
#line 1456 "cplus.met"
                        {
#line 1456 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1456 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1456 "cplus.met"
                            {
#line 1456 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1456 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1456 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1456 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1456 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1456 "cplus.met"
                                } else {
#line 1456 "cplus.met"
                                    tokenAhead = 0 ;
#line 1456 "cplus.met"
                                }
#line 1456 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1456 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1456 "cplus.met"
                            }
#line 1456 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1456 "cplus.met"
                            retTree=_ptRes0;
#line 1456 "cplus.met"
                        }
#line 1456 "cplus.met"
#line 1459 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1459 "cplus.met"
#line 1460 "cplus.met"
                        {
#line 1460 "cplus.met"
                            _retValue = retTree ;
#line 1460 "cplus.met"
                            goto directive_ret;
#line 1460 "cplus.met"
                            
#line 1460 "cplus.met"
                        }
#line 1460 "cplus.met"
#line 1460 "cplus.met"
                        break;
#line 1460 "cplus.met"
#line 1462 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1462 "cplus.met"
                        tokenAhead = 0 ;
#line 1462 "cplus.met"
                        CommTerm();
#line 1462 "cplus.met"
#line 1463 "cplus.met"
#line 1464 "cplus.met"
                        {
#line 1464 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1464 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1464 "cplus.met"
                            {
#line 1464 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1464 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1464 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1464 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1464 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1464 "cplus.met"
                                } else {
#line 1464 "cplus.met"
                                    tokenAhead = 0 ;
#line 1464 "cplus.met"
                                }
#line 1464 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1464 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1464 "cplus.met"
                            }
#line 1464 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1464 "cplus.met"
                            retTree=_ptRes0;
#line 1464 "cplus.met"
                        }
#line 1464 "cplus.met"
#line 1467 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1467 "cplus.met"
#line 1468 "cplus.met"
                        {
#line 1468 "cplus.met"
                            _retValue = retTree ;
#line 1468 "cplus.met"
                            goto directive_ret;
#line 1468 "cplus.met"
                            
#line 1468 "cplus.met"
                        }
#line 1468 "cplus.met"
#line 1468 "cplus.met"
                        break;
#line 1468 "cplus.met"
#line 1470 "cplus.met"
                    default : 
#line 1470 "cplus.met"
#line 1470 "cplus.met"
                        {
#line 1470 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1470 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1470 "cplus.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1470 "cplus.met"
                            }
#line 1470 "cplus.met"
                            _retValue =_ptTree0;
#line 1470 "cplus.met"
                            goto directive_ret;
#line 1470 "cplus.met"
                        }
#line 1470 "cplus.met"
                        break;
#line 1470 "cplus.met"
                }
#line 1470 "cplus.met"
#line 1470 "cplus.met"
            } else 
#line 1470 "cplus.met"
#line 1475 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 121, cplus))){
#line 1475 "cplus.met"
#line 1474 "cplus.met"
#line 1475 "cplus.met"
                {
#line 1475 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1475 "cplus.met"
                    {
#line 1475 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1475 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1475 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1475 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1475 "cplus.met"
                            MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
#line 1475 "cplus.met"
                        } else {
#line 1475 "cplus.met"
                            tokenAhead = 0 ;
#line 1475 "cplus.met"
                        }
#line 1475 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1475 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1475 "cplus.met"
                    }
#line 1475 "cplus.met"
                    _retValue =_ptTree0;
#line 1475 "cplus.met"
                    goto directive_ret;
#line 1475 "cplus.met"
                }
#line 1475 "cplus.met"
#line 1475 "cplus.met"
            } else 
#line 1475 "cplus.met"
#line 1479 "cplus.met"
            if (1) {
#line 1479 "cplus.met"
#line 1478 "cplus.met"
#line 1479 "cplus.met"
                {
#line 1479 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1479 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1479 "cplus.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1479 "cplus.met"
                    }
#line 1479 "cplus.met"
                    _retValue =_ptTree0;
#line 1479 "cplus.met"
                    goto directive_ret;
#line 1479 "cplus.met"
                }
#line 1479 "cplus.met"
#line 1479 "cplus.met"
            } else 
#line 1479 "cplus.met"
             ;
#line 1479 "cplus.met"
#line 1479 "cplus.met"
            break;
#line 1479 "cplus.met"
        default :
#line 1479 "cplus.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1479 "cplus.met"
            break;
#line 1479 "cplus.met"
    }
#line 1479 "cplus.met"
#line 1479 "cplus.met"
#line 1483 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1483 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1483 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1483 "cplus.met"
keepAll =  _oldkeepAll;
#line 1483 "cplus.met"
return((PPTREE) 0);
#line 1483 "cplus.met"

#line 1483 "cplus.met"
directive_exit :
#line 1483 "cplus.met"

#line 1483 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1483 "cplus.met"
    _funcLevel--;
#line 1483 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1483 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1483 "cplus.met"
    return((PPTREE) -1) ;
#line 1483 "cplus.met"

#line 1483 "cplus.met"
directive_ret :
#line 1483 "cplus.met"
    
#line 1483 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1483 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1483 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1483 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1483 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1483 "cplus.met"
    return _retValue ;
#line 1483 "cplus.met"
}
#line 1483 "cplus.met"

#line 1483 "cplus.met"
