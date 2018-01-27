/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3199 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3199 "cplus.met"
{
#line 3199 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3199 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3199 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3199 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3199 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3199 "cplus.met"
#line 3199 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3199 "cplus.met"
#line 3199 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3199 "cplus.met"
#line 3201 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3201 "cplus.met"
#line 3202 "cplus.met"
#line 3202 "cplus.met"
        _addlist1 = list ;
#line 3202 "cplus.met"
#line 3203 "cplus.met"
        do {
#line 3203 "cplus.met"
#line 3204 "cplus.met"
            {
#line 3204 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3204 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 2);
#line 3204 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3204 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3204 "cplus.met"
                }
#line 3204 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3204 "cplus.met"
                retTree=_ptRes0;
#line 3204 "cplus.met"
            }
#line 3204 "cplus.met"
#line 3205 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3205 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3205 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,val);
                TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3205 "cplus.met"
            } else {
#line 3205 "cplus.met"
                tokenAhead = 0 ;
#line 3205 "cplus.met"
            }
#line 3205 "cplus.met"
#line 3206 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 60, cplus)){
#line 3206 "cplus.met"
#line 3207 "cplus.met"
                ReplaceTree(retTree ,2 ,val );
#line 3207 "cplus.met"
#line 3207 "cplus.met"
            }
#line 3207 "cplus.met"
#line 3208 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3208 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3208 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,val);
                TOKEN_EXIT(ctor_initializer_exit,")")
#line 3208 "cplus.met"
            } else {
#line 3208 "cplus.met"
                tokenAhead = 0 ;
#line 3208 "cplus.met"
            }
#line 3208 "cplus.met"
#line 3209 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3209 "cplus.met"
#line 3209 "cplus.met"
            if (list){
#line 3209 "cplus.met"
#line 3209 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3209 "cplus.met"
            } else {
#line 3209 "cplus.met"
#line 3209 "cplus.met"
                list = _addlist1 ;
#line 3209 "cplus.met"
            }
#line 3209 "cplus.met"
#line 3209 "cplus.met"
#line 3210 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3210 "cplus.met"
#line 3211 "cplus.met"
        {
#line 3211 "cplus.met"
            PPTREE _ptTree0=0;
#line 3211 "cplus.met"
            {
#line 3211 "cplus.met"
                PPTREE _ptRes1=0;
#line 3211 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3211 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3211 "cplus.met"
                _ptTree0=_ptRes1;
#line 3211 "cplus.met"
            }
#line 3211 "cplus.met"
            _retValue =_ptTree0;
#line 3211 "cplus.met"
            goto ctor_initializer_ret;
#line 3211 "cplus.met"
        }
#line 3211 "cplus.met"
#line 3211 "cplus.met"
#line 3211 "cplus.met"
    }
#line 3211 "cplus.met"
#line 3211 "cplus.met"
#line 3212 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3212 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3212 "cplus.met"
return((PPTREE) 0);
#line 3212 "cplus.met"

#line 3212 "cplus.met"
ctor_initializer_exit :
#line 3212 "cplus.met"

#line 3212 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3212 "cplus.met"
    _funcLevel--;
#line 3212 "cplus.met"
    return((PPTREE) -1) ;
#line 3212 "cplus.met"

#line 3212 "cplus.met"
ctor_initializer_ret :
#line 3212 "cplus.met"
    
#line 3212 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3212 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3212 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3212 "cplus.met"
    return _retValue ;
#line 3212 "cplus.met"
}
#line 3212 "cplus.met"

#line 3212 "cplus.met"
#line 1673 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1673 "cplus.met"
{
#line 1673 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1673 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1673 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1673 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1673 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1673 "cplus.met"
#line 1673 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1673 "cplus.met"
#line 1676 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 93, cplus))){
#line 1676 "cplus.met"
#line 1678 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1678 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1678 "cplus.met"
        }
#line 1678 "cplus.met"
    }
#line 1678 "cplus.met"
#line 1679 "cplus.met"
    {
#line 1679 "cplus.met"
        _retValue = retTree ;
#line 1679 "cplus.met"
        goto data_decl_exotic_ret;
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
data_decl_exotic_exit :
#line 1680 "cplus.met"

#line 1680 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1680 "cplus.met"
    _funcLevel--;
#line 1680 "cplus.met"
    return((PPTREE) -1) ;
#line 1680 "cplus.met"

#line 1680 "cplus.met"
data_decl_exotic_ret :
#line 1680 "cplus.met"
    
#line 1680 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
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
#line 1626 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1626 "cplus.met"
{
#line 1626 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1626 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1626 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1626 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1626 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1626 "cplus.met"
#line 1626 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1626 "cplus.met"
#line 1628 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 33, cplus))){
#line 1628 "cplus.met"
#line 1629 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 1629 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1629 "cplus.met"
        }
#line 1629 "cplus.met"
    }
#line 1629 "cplus.met"
#line 1630 "cplus.met"
    {
#line 1630 "cplus.met"
        _retValue = retTree ;
#line 1630 "cplus.met"
        goto data_decl_sc_decl_ret;
#line 1630 "cplus.met"
        
#line 1630 "cplus.met"
    }
#line 1630 "cplus.met"
#line 1630 "cplus.met"
#line 1630 "cplus.met"

#line 1631 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1631 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1631 "cplus.met"
return((PPTREE) 0);
#line 1631 "cplus.met"

#line 1631 "cplus.met"
data_decl_sc_decl_exit :
#line 1631 "cplus.met"

#line 1631 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1631 "cplus.met"
    _funcLevel--;
#line 1631 "cplus.met"
    return((PPTREE) -1) ;
#line 1631 "cplus.met"

#line 1631 "cplus.met"
data_decl_sc_decl_ret :
#line 1631 "cplus.met"
    
#line 1631 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
#line 1631 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1631 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1631 "cplus.met"
    return _retValue ;
#line 1631 "cplus.met"
}
#line 1631 "cplus.met"

#line 1631 "cplus.met"
#line 1609 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1609 "cplus.met"
{
#line 1609 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1609 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1609 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1609 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1609 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1609 "cplus.met"
#line 1609 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1609 "cplus.met"
#line 1611 "cplus.met"
    {
#line 1611 "cplus.met"
        PPTREE _ptRes0=0;
#line 1611 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1611 "cplus.met"
        retTree=_ptRes0;
#line 1611 "cplus.met"
    }
#line 1611 "cplus.met"
#line 1612 "cplus.met"
    {
#line 1612 "cplus.met"
        PPTREE _ptTree0=0;
#line 1612 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1612 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1612 "cplus.met"
        }
#line 1612 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1612 "cplus.met"
    }
#line 1612 "cplus.met"
#line 1613 "cplus.met"
    {
#line 1613 "cplus.met"
        PPTREE _ptTree0=0;
#line 1613 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1613 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1613 "cplus.met"
        }
#line 1613 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1613 "cplus.met"
    }
#line 1613 "cplus.met"
#line 1614 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1614 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1614 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1614 "cplus.met"
    } else {
#line 1614 "cplus.met"
        tokenAhead = 0 ;
#line 1614 "cplus.met"
    }
#line 1614 "cplus.met"
#line 1615 "cplus.met"
    {
#line 1615 "cplus.met"
        _retValue = retTree ;
#line 1615 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1615 "cplus.met"
        
#line 1615 "cplus.met"
    }
#line 1615 "cplus.met"
#line 1615 "cplus.met"
#line 1615 "cplus.met"

#line 1616 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1616 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1616 "cplus.met"
return((PPTREE) 0);
#line 1616 "cplus.met"

#line 1616 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1616 "cplus.met"

#line 1616 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1616 "cplus.met"
    _funcLevel--;
#line 1616 "cplus.met"
    return((PPTREE) -1) ;
#line 1616 "cplus.met"

#line 1616 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1616 "cplus.met"
    
#line 1616 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1616 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1616 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1616 "cplus.met"
    return _retValue ;
#line 1616 "cplus.met"
}
#line 1616 "cplus.met"

#line 1616 "cplus.met"
#line 1618 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1618 "cplus.met"
{
#line 1618 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1618 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1618 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1618 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1618 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1618 "cplus.met"
#line 1618 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1618 "cplus.met"
#line 1620 "cplus.met"
    {
#line 1620 "cplus.met"
        PPTREE _ptRes0=0;
#line 1620 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1620 "cplus.met"
        retTree=_ptRes0;
#line 1620 "cplus.met"
    }
#line 1620 "cplus.met"
#line 1621 "cplus.met"
    {
#line 1621 "cplus.met"
        PPTREE _ptTree0=0;
#line 1621 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1621 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1621 "cplus.met"
        }
#line 1621 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1621 "cplus.met"
    }
#line 1621 "cplus.met"
#line 1622 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1622 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1622 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1622 "cplus.met"
    } else {
#line 1622 "cplus.met"
        tokenAhead = 0 ;
#line 1622 "cplus.met"
    }
#line 1622 "cplus.met"
#line 1623 "cplus.met"
    {
#line 1623 "cplus.met"
        _retValue = retTree ;
#line 1623 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1623 "cplus.met"
        
#line 1623 "cplus.met"
    }
#line 1623 "cplus.met"
#line 1623 "cplus.met"
#line 1623 "cplus.met"

#line 1624 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1624 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1624 "cplus.met"
return((PPTREE) 0);
#line 1624 "cplus.met"

#line 1624 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1624 "cplus.met"

#line 1624 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1624 "cplus.met"
    _funcLevel--;
#line 1624 "cplus.met"
    return((PPTREE) -1) ;
#line 1624 "cplus.met"

#line 1624 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1624 "cplus.met"
    
#line 1624 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1624 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1624 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1624 "cplus.met"
    return _retValue ;
#line 1624 "cplus.met"
}
#line 1624 "cplus.met"

#line 1624 "cplus.met"
#line 1666 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1666 "cplus.met"
{
#line 1666 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1666 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1666 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1666 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1666 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1666 "cplus.met"
#line 1666 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1666 "cplus.met"
#line 1668 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 36, cplus))){
#line 1668 "cplus.met"
#line 1669 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 1669 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1669 "cplus.met"
        }
#line 1669 "cplus.met"
    }
#line 1669 "cplus.met"
#line 1670 "cplus.met"
    {
#line 1670 "cplus.met"
        _retValue = retTree ;
#line 1670 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
#line 1670 "cplus.met"
        
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
data_decl_sc_ty_decl_exit :
#line 1671 "cplus.met"

#line 1671 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1671 "cplus.met"
    _funcLevel--;
#line 1671 "cplus.met"
    return((PPTREE) -1) ;
#line 1671 "cplus.met"

#line 1671 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1671 "cplus.met"
    
#line 1671 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
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
#line 1643 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1643 "cplus.met"
{
#line 1643 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1643 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1643 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1643 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1643 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1643 "cplus.met"
#line 1643 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1643 "cplus.met"
#line 1646 "cplus.met"
    {
#line 1646 "cplus.met"
        PPTREE _ptRes0=0;
#line 1646 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1646 "cplus.met"
        retTree=_ptRes0;
#line 1646 "cplus.met"
    }
#line 1646 "cplus.met"
#line 1648 "cplus.met"
    {
#line 1648 "cplus.met"
        PPTREE _ptTree0=0;
#line 1648 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1648 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1648 "cplus.met"
        }
#line 1648 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1648 "cplus.met"
    }
#line 1648 "cplus.met"
#line 1649 "cplus.met"
    {
#line 1649 "cplus.met"
        PPTREE _ptTree0=0;
#line 1649 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1649 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1649 "cplus.met"
        }
#line 1649 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1649 "cplus.met"
    }
#line 1649 "cplus.met"
#line 1650 "cplus.met"
    {
#line 1650 "cplus.met"
        PPTREE _ptTree0=0;
#line 1650 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1650 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1650 "cplus.met"
        }
#line 1650 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1650 "cplus.met"
    }
#line 1650 "cplus.met"
#line 1651 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1651 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1651 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1651 "cplus.met"
    } else {
#line 1651 "cplus.met"
        tokenAhead = 0 ;
#line 1651 "cplus.met"
    }
#line 1651 "cplus.met"
#line 1652 "cplus.met"
    {
#line 1652 "cplus.met"
        _retValue = retTree ;
#line 1652 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1652 "cplus.met"
        
#line 1652 "cplus.met"
    }
#line 1652 "cplus.met"
#line 1652 "cplus.met"
#line 1652 "cplus.met"

#line 1653 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1653 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1653 "cplus.met"
return((PPTREE) 0);
#line 1653 "cplus.met"

#line 1653 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1653 "cplus.met"

#line 1653 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1653 "cplus.met"
    _funcLevel--;
#line 1653 "cplus.met"
    return((PPTREE) -1) ;
#line 1653 "cplus.met"

#line 1653 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1653 "cplus.met"
    
#line 1653 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1653 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1653 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1653 "cplus.met"
    return _retValue ;
#line 1653 "cplus.met"
}
#line 1653 "cplus.met"

#line 1653 "cplus.met"
#line 1655 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1655 "cplus.met"
{
#line 1655 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1655 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1655 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1655 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1655 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1655 "cplus.met"
#line 1655 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1655 "cplus.met"
#line 1658 "cplus.met"
    {
#line 1658 "cplus.met"
        PPTREE _ptRes0=0;
#line 1658 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1658 "cplus.met"
        retTree=_ptRes0;
#line 1658 "cplus.met"
    }
#line 1658 "cplus.met"
#line 1660 "cplus.met"
    {
#line 1660 "cplus.met"
        PPTREE _ptTree0=0;
#line 1660 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1660 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1660 "cplus.met"
        }
#line 1660 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1660 "cplus.met"
    }
#line 1660 "cplus.met"
#line 1661 "cplus.met"
    {
#line 1661 "cplus.met"
        PPTREE _ptTree0=0;
#line 1661 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1661 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1661 "cplus.met"
        }
#line 1661 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1661 "cplus.met"
    }
#line 1661 "cplus.met"
#line 1662 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1662 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1662 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
#line 1662 "cplus.met"
    } else {
#line 1662 "cplus.met"
        tokenAhead = 0 ;
#line 1662 "cplus.met"
    }
#line 1662 "cplus.met"
#line 1663 "cplus.met"
    {
#line 1663 "cplus.met"
        _retValue = retTree ;
#line 1663 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1663 "cplus.met"
        
#line 1663 "cplus.met"
    }
#line 1663 "cplus.met"
#line 1663 "cplus.met"
#line 1663 "cplus.met"

#line 1664 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1664 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1664 "cplus.met"
return((PPTREE) 0);
#line 1664 "cplus.met"

#line 1664 "cplus.met"
data_decl_sc_ty_decl_short_exit :
#line 1664 "cplus.met"

#line 1664 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1664 "cplus.met"
    _funcLevel--;
#line 1664 "cplus.met"
    return((PPTREE) -1) ;
#line 1664 "cplus.met"

#line 1664 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1664 "cplus.met"
    
#line 1664 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
#line 1664 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1664 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1664 "cplus.met"
    return _retValue ;
#line 1664 "cplus.met"
}
#line 1664 "cplus.met"

#line 1664 "cplus.met"
#line 1633 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1633 "cplus.met"
{
#line 1633 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1633 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1633 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1633 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1633 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1633 "cplus.met"
#line 1633 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1633 "cplus.met"
#line 1635 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 32, cplus))){
#line 1635 "cplus.met"
#line 1636 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 42, cplus))== (PPTREE) -1 ) {
#line 1636 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1636 "cplus.met"
        }
#line 1636 "cplus.met"
    }
#line 1636 "cplus.met"
#line 1637 "cplus.met"
    {
#line 1637 "cplus.met"
        _retValue = retTree ;
#line 1637 "cplus.met"
        goto data_declaration_ret;
#line 1637 "cplus.met"
        
#line 1637 "cplus.met"
    }
#line 1637 "cplus.met"
#line 1637 "cplus.met"
#line 1637 "cplus.met"

#line 1638 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1638 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1638 "cplus.met"
return((PPTREE) 0);
#line 1638 "cplus.met"

#line 1638 "cplus.met"
data_declaration_exit :
#line 1638 "cplus.met"

#line 1638 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1638 "cplus.met"
    _funcLevel--;
#line 1638 "cplus.met"
    return((PPTREE) -1) ;
#line 1638 "cplus.met"

#line 1638 "cplus.met"
data_declaration_ret :
#line 1638 "cplus.met"
    
#line 1638 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1638 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1638 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1638 "cplus.met"
    return _retValue ;
#line 1638 "cplus.met"
}
#line 1638 "cplus.met"

#line 1638 "cplus.met"
#line 1707 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1707 "cplus.met"
{
#line 1707 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1707 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1707 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1707 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1707 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1707 "cplus.met"
#line 1707 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1707 "cplus.met"
#line 1709 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 40, cplus))){
#line 1709 "cplus.met"
#line 1710 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 41, cplus))== (PPTREE) -1 ) {
#line 1710 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
#line 1710 "cplus.met"
        }
#line 1710 "cplus.met"
    }
#line 1710 "cplus.met"
#line 1711 "cplus.met"
    {
#line 1711 "cplus.met"
        _retValue = retTree ;
#line 1711 "cplus.met"
        goto data_declaration_for_ret;
#line 1711 "cplus.met"
        
#line 1711 "cplus.met"
    }
#line 1711 "cplus.met"
#line 1711 "cplus.met"
#line 1711 "cplus.met"

#line 1712 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1712 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1712 "cplus.met"
return((PPTREE) 0);
#line 1712 "cplus.met"

#line 1712 "cplus.met"
data_declaration_for_exit :
#line 1712 "cplus.met"

#line 1712 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1712 "cplus.met"
    _funcLevel--;
#line 1712 "cplus.met"
    return((PPTREE) -1) ;
#line 1712 "cplus.met"

#line 1712 "cplus.met"
data_declaration_for_ret :
#line 1712 "cplus.met"
    
#line 1712 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
#line 1712 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1712 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1712 "cplus.met"
    return _retValue ;
#line 1712 "cplus.met"
}
#line 1712 "cplus.met"

#line 1712 "cplus.met"
#line 1690 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1690 "cplus.met"
{
#line 1690 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1690 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1690 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1690 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1690 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1690 "cplus.met"
#line 1690 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1690 "cplus.met"
#line 1692 "cplus.met"
    {
#line 1692 "cplus.met"
        PPTREE _ptRes0=0;
#line 1692 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1692 "cplus.met"
        retTree=_ptRes0;
#line 1692 "cplus.met"
    }
#line 1692 "cplus.met"
#line 1693 "cplus.met"
    {
#line 1693 "cplus.met"
        PPTREE _ptTree0=0;
#line 1693 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 1693 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1693 "cplus.met"
        }
#line 1693 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1693 "cplus.met"
    }
#line 1693 "cplus.met"
#line 1694 "cplus.met"
    {
#line 1694 "cplus.met"
        PPTREE _ptTree0=0;
#line 1694 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1694 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1694 "cplus.met"
        }
#line 1694 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1694 "cplus.met"
    }
#line 1694 "cplus.met"
#line 1695 "cplus.met"
    {
#line 1695 "cplus.met"
        PPTREE _ptTree0=0;
#line 1695 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1695 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1695 "cplus.met"
        }
#line 1695 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1695 "cplus.met"
    }
#line 1695 "cplus.met"
#line 1696 "cplus.met"
    {
#line 1696 "cplus.met"
        _retValue = retTree ;
#line 1696 "cplus.met"
        goto data_declaration_for_full_ret;
#line 1696 "cplus.met"
        
#line 1696 "cplus.met"
    }
#line 1696 "cplus.met"
#line 1696 "cplus.met"
#line 1696 "cplus.met"

#line 1697 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1697 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1697 "cplus.met"
return((PPTREE) 0);
#line 1697 "cplus.met"

#line 1697 "cplus.met"
data_declaration_for_full_exit :
#line 1697 "cplus.met"

#line 1697 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1697 "cplus.met"
    _funcLevel--;
#line 1697 "cplus.met"
    return((PPTREE) -1) ;
#line 1697 "cplus.met"

#line 1697 "cplus.met"
data_declaration_for_full_ret :
#line 1697 "cplus.met"
    
#line 1697 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
#line 1697 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1697 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1697 "cplus.met"
    return _retValue ;
#line 1697 "cplus.met"
}
#line 1697 "cplus.met"

#line 1697 "cplus.met"
#line 1699 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1699 "cplus.met"
{
#line 1699 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1699 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1699 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1699 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1699 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1699 "cplus.met"
#line 1699 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1699 "cplus.met"
#line 1701 "cplus.met"
    {
#line 1701 "cplus.met"
        PPTREE _ptRes0=0;
#line 1701 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1701 "cplus.met"
        retTree=_ptRes0;
#line 1701 "cplus.met"
    }
#line 1701 "cplus.met"
#line 1702 "cplus.met"
    {
#line 1702 "cplus.met"
        PPTREE _ptTree0=0;
#line 1702 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1702 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1702 "cplus.met"
        }
#line 1702 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1702 "cplus.met"
    }
#line 1702 "cplus.met"
#line 1703 "cplus.met"
    {
#line 1703 "cplus.met"
        PPTREE _ptTree0=0;
#line 1703 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1703 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1703 "cplus.met"
        }
#line 1703 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1703 "cplus.met"
    }
#line 1703 "cplus.met"
#line 1704 "cplus.met"
    {
#line 1704 "cplus.met"
        _retValue = retTree ;
#line 1704 "cplus.met"
        goto data_declaration_for_short_ret;
#line 1704 "cplus.met"
        
#line 1704 "cplus.met"
    }
#line 1704 "cplus.met"
#line 1704 "cplus.met"
#line 1704 "cplus.met"

#line 1705 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1705 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1705 "cplus.met"
return((PPTREE) 0);
#line 1705 "cplus.met"

#line 1705 "cplus.met"
data_declaration_for_short_exit :
#line 1705 "cplus.met"

#line 1705 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1705 "cplus.met"
    _funcLevel--;
#line 1705 "cplus.met"
    return((PPTREE) -1) ;
#line 1705 "cplus.met"

#line 1705 "cplus.met"
data_declaration_for_short_ret :
#line 1705 "cplus.met"
    
#line 1705 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
#line 1705 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1705 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1705 "cplus.met"
    return _retValue ;
#line 1705 "cplus.met"
}
#line 1705 "cplus.met"

#line 1705 "cplus.met"
#line 1682 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1682 "cplus.met"
{
#line 1682 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1682 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1682 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1682 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1682 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1682 "cplus.met"
#line 1682 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1682 "cplus.met"
#line 1684 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 35, cplus))){
#line 1684 "cplus.met"
#line 1685 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 1685 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
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
        goto data_declaration_strict_ret;
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
data_declaration_strict_exit :
#line 1687 "cplus.met"

#line 1687 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1687 "cplus.met"
    _funcLevel--;
#line 1687 "cplus.met"
    return((PPTREE) -1) ;
#line 1687 "cplus.met"

#line 1687 "cplus.met"
data_declaration_strict_ret :
#line 1687 "cplus.met"
    
#line 1687 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
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
#line 2864 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 2864 "cplus.met"
{
#line 2864 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2864 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2864 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2864 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2864 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2864 "cplus.met"
#line 2864 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0;
#line 2864 "cplus.met"
#line 2866 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2866 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 2866 "cplus.met"
        MulFreeTree(2,expr,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 2866 "cplus.met"
    } else {
#line 2866 "cplus.met"
        tokenAhead = 0 ;
#line 2866 "cplus.met"
    }
#line 2866 "cplus.met"
#line 2867 "cplus.met"
    {
#line 2867 "cplus.met"
        PPTREE _ptRes0=0;
#line 2867 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 2867 "cplus.met"
        retTree=_ptRes0;
#line 2867 "cplus.met"
    }
#line 2867 "cplus.met"
#line 2868 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 2868 "cplus.met"
#line 2869 "cplus.met"
#line 2872 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 60, cplus)){
#line 2872 "cplus.met"
#line 2872 "cplus.met"
        }
#line 2872 "cplus.met"
#line 2875 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2875 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2875 "cplus.met"
            MulFreeTree(2,expr,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 2875 "cplus.met"
        } else {
#line 2875 "cplus.met"
            tokenAhead = 0 ;
#line 2875 "cplus.met"
        }
#line 2875 "cplus.met"
#line 2876 "cplus.met"
        {
#line 2876 "cplus.met"
            PPTREE _ptTree0=0;
#line 2876 "cplus.met"
            {
#line 2876 "cplus.met"
                PPTREE _ptRes1=0;
#line 2876 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 2876 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 2876 "cplus.met"
                _ptTree0=_ptRes1;
#line 2876 "cplus.met"
            }
#line 2876 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2876 "cplus.met"
        }
#line 2876 "cplus.met"
#line 2876 "cplus.met"
#line 2876 "cplus.met"
    }
#line 2876 "cplus.met"
#line 2878 "cplus.met"
    {
#line 2878 "cplus.met"
        PPTREE _ptTree0=0;
#line 2878 "cplus.met"
        {
#line 2878 "cplus.met"
            PPTREE _ptTree1=0;
#line 2878 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2878 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,expr,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 2878 "cplus.met"
            }
#line 2878 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2878 "cplus.met"
        }
#line 2878 "cplus.met"
        _retValue =_ptTree0;
#line 2878 "cplus.met"
        goto deallocation_expression_ret;
#line 2878 "cplus.met"
    }
#line 2878 "cplus.met"
#line 2878 "cplus.met"
#line 2878 "cplus.met"

#line 2879 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2879 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2879 "cplus.met"
return((PPTREE) 0);
#line 2879 "cplus.met"

#line 2879 "cplus.met"
deallocation_expression_exit :
#line 2879 "cplus.met"

#line 2879 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2879 "cplus.met"
    _funcLevel--;
#line 2879 "cplus.met"
    return((PPTREE) -1) ;
#line 2879 "cplus.met"

#line 2879 "cplus.met"
deallocation_expression_ret :
#line 2879 "cplus.met"
    
#line 2879 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 2879 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2879 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2879 "cplus.met"
    return _retValue ;
#line 2879 "cplus.met"
}
#line 2879 "cplus.met"

#line 2879 "cplus.met"
#line 2247 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2247 "cplus.met"
{
#line 2247 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2247 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2247 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2247 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2247 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2247 "cplus.met"
#line 2247 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2247 "cplus.met"
#line 2249 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2249 "cplus.met"
#line 2250 "cplus.met"
        {
#line 2250 "cplus.met"
            PPTREE _ptTree0=0;
#line 2250 "cplus.met"
            {
#line 2250 "cplus.met"
                PPTREE _ptTree1=0;
#line 2250 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2250 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2250 "cplus.met"
                }
#line 2250 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2250 "cplus.met"
            }
#line 2250 "cplus.met"
            _retValue =_ptTree0;
#line 2250 "cplus.met"
            goto declarator_ret;
#line 2250 "cplus.met"
        }
#line 2250 "cplus.met"
    } else {
#line 2250 "cplus.met"
#line 2252 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2252 "cplus.met"
        switch( lexEl.Value) {
#line 2252 "cplus.met"
#line 2253 "cplus.met"
            case ETOI : 
#line 2253 "cplus.met"
                tokenAhead = 0 ;
#line 2253 "cplus.met"
                CommTerm();
#line 2253 "cplus.met"
#line 2253 "cplus.met"
                {
#line 2253 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2253 "cplus.met"
                    {
#line 2253 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2253 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2253 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2253 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2253 "cplus.met"
                        }
#line 2253 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2253 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2253 "cplus.met"
                    }
#line 2253 "cplus.met"
                    _retValue =_ptTree0;
#line 2253 "cplus.met"
                    goto declarator_ret;
#line 2253 "cplus.met"
                }
#line 2253 "cplus.met"
                break;
#line 2253 "cplus.met"
#line 2254 "cplus.met"
            case ETCO : 
#line 2254 "cplus.met"
                tokenAhead = 0 ;
#line 2254 "cplus.met"
                CommTerm();
#line 2254 "cplus.met"
#line 2254 "cplus.met"
                {
#line 2254 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2254 "cplus.met"
                    {
#line 2254 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2254 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2254 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2254 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2254 "cplus.met"
                        }
#line 2254 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2254 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2254 "cplus.met"
                    }
#line 2254 "cplus.met"
                    _retValue =_ptTree0;
#line 2254 "cplus.met"
                    goto declarator_ret;
#line 2254 "cplus.met"
                }
#line 2254 "cplus.met"
                break;
#line 2254 "cplus.met"
#line 2255 "cplus.met"
            case TILD : 
#line 2255 "cplus.met"
                tokenAhead = 0 ;
#line 2255 "cplus.met"
                CommTerm();
#line 2255 "cplus.met"
#line 2255 "cplus.met"
                {
#line 2255 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2255 "cplus.met"
                    {
#line 2255 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2255 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2255 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2255 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2255 "cplus.met"
                        }
#line 2255 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2255 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2255 "cplus.met"
                    }
#line 2255 "cplus.met"
                    _retValue =_ptTree0;
#line 2255 "cplus.met"
                    goto declarator_ret;
#line 2255 "cplus.met"
                }
#line 2255 "cplus.met"
                break;
#line 2255 "cplus.met"
#line 2258 "cplus.met"
            case POUV : 
#line 2258 "cplus.met"
                tokenAhead = 0 ;
#line 2258 "cplus.met"
                CommTerm();
#line 2258 "cplus.met"
#line 2257 "cplus.met"
#line 2258 "cplus.met"
                {
#line 2258 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2258 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2258 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2258 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2258 "cplus.met"
                    }
#line 2258 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2258 "cplus.met"
                    retTree=_ptRes0;
#line 2258 "cplus.met"
                }
#line 2258 "cplus.met"
#line 2259 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2259 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2259 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2259 "cplus.met"
                } else {
#line 2259 "cplus.met"
                    tokenAhead = 0 ;
#line 2259 "cplus.met"
                }
#line 2259 "cplus.met"
#line 2260 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2260 "cplus.met"
#line 2261 "cplus.met"
                                            { PPTREE theTree ;
#line 2261 "cplus.met"
                                              theTree = valTree ;
#line 2261 "cplus.met"
                                              if (theTree) {
#line 2261 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2261 "cplus.met"
                                               if (NumberTree(theTree)
#line 2261 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2261 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2261 "cplus.met"
                                               else
#line 2261 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2261 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2261 "cplus.met"
                                                  /* modif portage sun */
#line 2261 "cplus.met"
                                                  retTree = valTree;
#line 2261 "cplus.met"
                                              }
#line 2261 "cplus.met"
                                                 }
#line 2261 "cplus.met"
                                        
#line 2261 "cplus.met"
                }
#line 2261 "cplus.met"
#line 2261 "cplus.met"
                break;
#line 2261 "cplus.met"
#line 2278 "cplus.met"
            case META : 
#line 2278 "cplus.met"
            case IDENT : 
#line 2278 "cplus.met"
#line 2279 "cplus.met"
#line 2280 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2280 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2280 "cplus.met"
                }
#line 2280 "cplus.met"
#line 2281 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2281 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2281 "cplus.met"
#line 2282 "cplus.met"
                    {
#line 2282 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2282 "cplus.met"
                        {
#line 2282 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2282 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2282 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2282 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2282 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2282 "cplus.met"
                            }
#line 2282 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2282 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2282 "cplus.met"
                        }
#line 2282 "cplus.met"
                        _retValue =_ptTree0;
#line 2282 "cplus.met"
                        goto declarator_ret;
#line 2282 "cplus.met"
                    }
#line 2282 "cplus.met"
                }
#line 2282 "cplus.met"
#line 2284 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2284 "cplus.met"
#line 2285 "cplus.met"
                                            { PPTREE theTree ;
#line 2285 "cplus.met"
                                              theTree = valTree ;
#line 2285 "cplus.met"
                                              if (theTree) {
#line 2285 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2285 "cplus.met"
                                               if (NumberTree(theTree)
#line 2285 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2285 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2285 "cplus.met"
                                               else
#line 2285 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2285 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2285 "cplus.met"
                                                  /* modif portage sun */
#line 2285 "cplus.met"
                                                  retTree = valTree;
#line 2285 "cplus.met"
                                              }
#line 2285 "cplus.met"
                                                 }
#line 2285 "cplus.met"
                                        
#line 2285 "cplus.met"
                }
#line 2285 "cplus.met"
#line 2285 "cplus.met"
                break;
#line 2285 "cplus.met"
#line 2302 "cplus.met"
            case OPERATOR : 
#line 2302 "cplus.met"
#line 2303 "cplus.met"
#line 2304 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2304 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2304 "cplus.met"
                }
#line 2304 "cplus.met"
#line 2305 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2305 "cplus.met"
#line 2306 "cplus.met"
                                            { PPTREE theTree ;
#line 2306 "cplus.met"
                                              theTree = valTree ;
#line 2306 "cplus.met"
                                              if (theTree) {
#line 2306 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2306 "cplus.met"
                                               if (NumberTree(theTree)
#line 2306 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2306 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2306 "cplus.met"
                                               else
#line 2306 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2306 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2306 "cplus.met"
                                                  /* modif portage sun */
#line 2306 "cplus.met"
                                                  retTree = valTree;
#line 2306 "cplus.met"
                                              }
#line 2306 "cplus.met"
                                                 }
#line 2306 "cplus.met"
                                        
#line 2306 "cplus.met"
                }
#line 2306 "cplus.met"
#line 2306 "cplus.met"
                break;
#line 2306 "cplus.met"
            default :
#line 2306 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or ~ or ( or IDENT or operator")
#line 2306 "cplus.met"
                break;
#line 2306 "cplus.met"
        }
#line 2306 "cplus.met"
    }
#line 2306 "cplus.met"
#line 2324 "cplus.met"
    {
#line 2324 "cplus.met"
        _retValue = retTree ;
#line 2324 "cplus.met"
        goto declarator_ret;
#line 2324 "cplus.met"
        
#line 2324 "cplus.met"
    }
#line 2324 "cplus.met"
#line 2324 "cplus.met"
#line 2324 "cplus.met"

#line 2325 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2325 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2325 "cplus.met"
return((PPTREE) 0);
#line 2325 "cplus.met"

#line 2325 "cplus.met"
declarator_exit :
#line 2325 "cplus.met"

#line 2325 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2325 "cplus.met"
    _funcLevel--;
#line 2325 "cplus.met"
    return((PPTREE) -1) ;
#line 2325 "cplus.met"

#line 2325 "cplus.met"
declarator_ret :
#line 2325 "cplus.met"
    
#line 2325 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2325 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2325 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2325 "cplus.met"
    return _retValue ;
#line 2325 "cplus.met"
}
#line 2325 "cplus.met"

#line 2325 "cplus.met"
#line 2215 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2215 "cplus.met"
{
#line 2215 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2215 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2215 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2215 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2215 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2215 "cplus.met"
#line 2215 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2215 "cplus.met"
#line 2217 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2217 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2217 "cplus.met"
#line 2218 "cplus.met"
        
#line 2218 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2218 "cplus.met"
        goto declarator_follow_exit;
#line 2218 "cplus.met"
#line 2218 "cplus.met"
    }
#line 2218 "cplus.met"
#line 2219 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2219 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2219 "cplus.met"
#line 2220 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2220 "cplus.met"
        switch( lexEl.Value) {
#line 2220 "cplus.met"
#line 2223 "cplus.met"
            case COUV : 
#line 2223 "cplus.met"
                tokenAhead = 0 ;
#line 2223 "cplus.met"
                CommTerm();
#line 2223 "cplus.met"
#line 2222 "cplus.met"
#line 2223 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2223 "cplus.met"
#line 2224 "cplus.met"
                    {
#line 2224 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2224 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2224 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2224 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2224 "cplus.met"
                        retTree=_ptRes0;
#line 2224 "cplus.met"
                    }
#line 2224 "cplus.met"
                } else {
#line 2224 "cplus.met"
#line 2226 "cplus.met"
                    {
#line 2226 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2226 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2226 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2226 "cplus.met"
                        retTree=_ptRes0;
#line 2226 "cplus.met"
                    }
#line 2226 "cplus.met"
                }
#line 2226 "cplus.met"
#line 2227 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2227 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2227 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2227 "cplus.met"
                } else {
#line 2227 "cplus.met"
                    tokenAhead = 0 ;
#line 2227 "cplus.met"
                }
#line 2227 "cplus.met"
#line 2227 "cplus.met"
                break;
#line 2227 "cplus.met"
#line 2234 "cplus.met"
            case POUV : 
#line 2234 "cplus.met"
#line 2230 "cplus.met"
#line 2233 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 11, cplus)){
#line 2233 "cplus.met"
#line 2235 "cplus.met"
#line 2236 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2236 "cplus.met"
#line 2237 "cplus.met"
                    {
#line 2237 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2237 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2237 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2237 "cplus.met"
                        }
#line 2237 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2237 "cplus.met"
                    }
#line 2237 "cplus.met"
#line 2238 "cplus.met"
                    retTree = valTree ;
#line 2238 "cplus.met"
#line 2238 "cplus.met"
#line 2238 "cplus.met"
                } else {
#line 2238 "cplus.met"
#line 2241 "cplus.met"
                    {
#line 2241 "cplus.met"
                        _retValue = retTree ;
#line 2241 "cplus.met"
                        goto declarator_follow_ret;
#line 2241 "cplus.met"
                        
#line 2241 "cplus.met"
                    }
#line 2241 "cplus.met"
                }
#line 2241 "cplus.met"
#line 2241 "cplus.met"
                break;
#line 2241 "cplus.met"
            default :
#line 2241 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2241 "cplus.met"
                break;
#line 2241 "cplus.met"
        }
#line 2241 "cplus.met"
    } 
#line 2241 "cplus.met"
#line 2244 "cplus.met"
    {
#line 2244 "cplus.met"
        _retValue = retTree ;
#line 2244 "cplus.met"
        goto declarator_follow_ret;
#line 2244 "cplus.met"
        
#line 2244 "cplus.met"
    }
#line 2244 "cplus.met"
#line 2244 "cplus.met"
#line 2244 "cplus.met"

#line 2245 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2245 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2245 "cplus.met"
return((PPTREE) 0);
#line 2245 "cplus.met"

#line 2245 "cplus.met"
declarator_follow_exit :
#line 2245 "cplus.met"

#line 2245 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2245 "cplus.met"
    _funcLevel--;
#line 2245 "cplus.met"
    return((PPTREE) -1) ;
#line 2245 "cplus.met"

#line 2245 "cplus.met"
declarator_follow_ret :
#line 2245 "cplus.met"
    
#line 2245 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2245 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2245 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2245 "cplus.met"
    return _retValue ;
#line 2245 "cplus.met"
}
#line 2245 "cplus.met"

#line 2245 "cplus.met"
#line 1540 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1540 "cplus.met"
{
#line 1540 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1540 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1540 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1540 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1540 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1540 "cplus.met"
#line 1540 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1540 "cplus.met"
#line 1540 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1540 "cplus.met"
#line 1540 "cplus.met"
    _addlist1 = list ;
#line 1540 "cplus.met"
#line 1542 "cplus.met"
    do {
#line 1542 "cplus.met"
#line 1543 "cplus.met"
        {
#line 1543 "cplus.met"
            PPTREE _ptTree0=0;
#line 1543 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1543 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1543 "cplus.met"
            }
#line 1543 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1543 "cplus.met"
        }
#line 1543 "cplus.met"
#line 1543 "cplus.met"
        if (list){
#line 1543 "cplus.met"
#line 1543 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1543 "cplus.met"
        } else {
#line 1543 "cplus.met"
#line 1543 "cplus.met"
            list = _addlist1 ;
#line 1543 "cplus.met"
        }
#line 1543 "cplus.met"
#line 1543 "cplus.met"
#line 1544 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1544 "cplus.met"
#line 1545 "cplus.met"
    {
#line 1545 "cplus.met"
        _retValue = list ;
#line 1545 "cplus.met"
        goto declarator_list_ret;
#line 1545 "cplus.met"
        
#line 1545 "cplus.met"
    }
#line 1545 "cplus.met"
#line 1545 "cplus.met"
#line 1545 "cplus.met"

#line 1546 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1546 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1546 "cplus.met"
return((PPTREE) 0);
#line 1546 "cplus.met"

#line 1546 "cplus.met"
declarator_list_exit :
#line 1546 "cplus.met"

#line 1546 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1546 "cplus.met"
    _funcLevel--;
#line 1546 "cplus.met"
    return((PPTREE) -1) ;
#line 1546 "cplus.met"

#line 1546 "cplus.met"
declarator_list_ret :
#line 1546 "cplus.met"
    
#line 1546 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1546 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1546 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1546 "cplus.met"
    return _retValue ;
#line 1546 "cplus.met"
}
#line 1546 "cplus.met"

#line 1546 "cplus.met"
#line 1531 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1531 "cplus.met"
{
#line 1531 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1531 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1531 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1531 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1531 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1531 "cplus.met"
#line 1531 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1531 "cplus.met"
#line 1531 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1531 "cplus.met"
#line 1531 "cplus.met"
    _addlist1 = list ;
#line 1531 "cplus.met"
#line 1533 "cplus.met"
    do {
#line 1533 "cplus.met"
#line 1534 "cplus.met"
        {
#line 1534 "cplus.met"
            PPTREE _ptTree0=0;
#line 1534 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 48, cplus))== (PPTREE) -1 ) {
#line 1534 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1534 "cplus.met"
            }
#line 1534 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1534 "cplus.met"
        }
#line 1534 "cplus.met"
#line 1534 "cplus.met"
        if (list){
#line 1534 "cplus.met"
#line 1534 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1534 "cplus.met"
        } else {
#line 1534 "cplus.met"
#line 1534 "cplus.met"
            list = _addlist1 ;
#line 1534 "cplus.met"
        }
#line 1534 "cplus.met"
#line 1534 "cplus.met"
#line 1535 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1535 "cplus.met"
#line 1536 "cplus.met"
    {
#line 1536 "cplus.met"
        _retValue = list ;
#line 1536 "cplus.met"
        goto declarator_list_init_ret;
#line 1536 "cplus.met"
        
#line 1536 "cplus.met"
    }
#line 1536 "cplus.met"
#line 1536 "cplus.met"
#line 1536 "cplus.met"

#line 1537 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1537 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1537 "cplus.met"
return((PPTREE) 0);
#line 1537 "cplus.met"

#line 1537 "cplus.met"
declarator_list_init_exit :
#line 1537 "cplus.met"

#line 1537 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1537 "cplus.met"
    _funcLevel--;
#line 1537 "cplus.met"
    return((PPTREE) -1) ;
#line 1537 "cplus.met"

#line 1537 "cplus.met"
declarator_list_init_ret :
#line 1537 "cplus.met"
    
#line 1537 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1537 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1537 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1537 "cplus.met"
    return _retValue ;
#line 1537 "cplus.met"
}
#line 1537 "cplus.met"

#line 1537 "cplus.met"
#line 1516 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1516 "cplus.met"
{
#line 1516 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1516 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1516 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1516 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1516 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1516 "cplus.met"
#line 1516 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1516 "cplus.met"
#line 1518 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1518 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1518 "cplus.met"
    }
#line 1518 "cplus.met"
#line 1519 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1519 "cplus.met"
    switch( lexEl.Value) {
#line 1519 "cplus.met"
#line 1520 "cplus.met"
        case EGAL : 
#line 1520 "cplus.met"
            tokenAhead = 0 ;
#line 1520 "cplus.met"
            CommTerm();
#line 1520 "cplus.met"
#line 1520 "cplus.met"
            {
#line 1520 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1520 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1520 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1520 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 1520 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1520 "cplus.met"
                }
#line 1520 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1520 "cplus.met"
                valTree=_ptRes0;
#line 1520 "cplus.met"
            }
#line 1520 "cplus.met"
            break;
#line 1520 "cplus.met"
#line 1523 "cplus.met"
        case POUV : 
#line 1523 "cplus.met"
            tokenAhead = 0 ;
#line 1523 "cplus.met"
            CommTerm();
#line 1523 "cplus.met"
#line 1522 "cplus.met"
#line 1523 "cplus.met"
            {
#line 1523 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1523 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1523 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1523 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1523 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1523 "cplus.met"
                }
#line 1523 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1523 "cplus.met"
                valTree=_ptRes0;
#line 1523 "cplus.met"
            }
#line 1523 "cplus.met"
#line 1524 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1524 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1524 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1524 "cplus.met"
            } else {
#line 1524 "cplus.met"
                tokenAhead = 0 ;
#line 1524 "cplus.met"
            }
#line 1524 "cplus.met"
#line 1524 "cplus.met"
            break;
#line 1524 "cplus.met"
#line 1524 "cplus.met"
        default : 
#line 1524 "cplus.met"
#line 1524 "cplus.met"
            break;
#line 1524 "cplus.met"
    }
#line 1524 "cplus.met"
#line 1528 "cplus.met"
    {
#line 1528 "cplus.met"
        _retValue = valTree ;
#line 1528 "cplus.met"
        goto declarator_value_ret;
#line 1528 "cplus.met"
        
#line 1528 "cplus.met"
    }
#line 1528 "cplus.met"
#line 1528 "cplus.met"
#line 1528 "cplus.met"

#line 1529 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1529 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1529 "cplus.met"
return((PPTREE) 0);
#line 1529 "cplus.met"

#line 1529 "cplus.met"
declarator_value_exit :
#line 1529 "cplus.met"

#line 1529 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1529 "cplus.met"
    _funcLevel--;
#line 1529 "cplus.met"
    return((PPTREE) -1) ;
#line 1529 "cplus.met"

#line 1529 "cplus.met"
declarator_value_ret :
#line 1529 "cplus.met"
    
#line 1529 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1529 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1529 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1529 "cplus.met"
    return _retValue ;
#line 1529 "cplus.met"
}
#line 1529 "cplus.met"

#line 1529 "cplus.met"
#line 1470 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1470 "cplus.met"
{
#line 1470 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1470 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1470 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1470 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1470 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1470 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1470 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1470 "cplus.met"
#line 1470 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1470 "cplus.met"
#line 1470 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1470 "cplus.met"
#line 1472 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1472 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1472 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1472 "cplus.met"
    } else {
#line 1472 "cplus.met"
        tokenAhead = 0 ;
#line 1472 "cplus.met"
    }
#line 1472 "cplus.met"
#line 1473 "cplus.met"
    {
#line 1473 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1473 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1473 "cplus.met"
        {
#line 1473 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1473 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1473 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1473 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1473 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
#line 1473 "cplus.met"
            } else {
#line 1473 "cplus.met"
                tokenAhead = 0 ;
#line 1473 "cplus.met"
            }
#line 1473 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1473 "cplus.met"
            _ptTree0=_ptRes1;
#line 1473 "cplus.met"
        }
#line 1473 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1473 "cplus.met"
        retTree=_ptRes0;
#line 1473 "cplus.met"
    }
#line 1473 "cplus.met"
#line 1474 "cplus.met"
    {
#line 1474 "cplus.met"
        keepCarriage = 1 ;
#line 1474 "cplus.met"
#line 1475 "cplus.met"
#line 1476 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1476 "cplus.met"
#line 1477 "cplus.met"
            {
#line 1477 "cplus.met"
                PPTREE _ptTree0=0;
#line 1477 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1477 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1477 "cplus.met"
                }
#line 1477 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1477 "cplus.met"
            }
#line 1477 "cplus.met"
#line 1477 "cplus.met"
        }
#line 1477 "cplus.met"
#line 1478 "cplus.met"
        ExtUnputBuf();
#line 1478 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1478 "cplus.met"
            NextChar() ;
#line 1478 "cplus.met"
        ptStockBuf = -1;
#line 1478 "cplus.met"
        lexEl.Erase();
#line 1478 "cplus.met"
        tokenAhead = 0;
#line 1478 "cplus.met"
        oldLine=line,oldCol=col;
#line 1478 "cplus.met"
        if ( !lexCallLex) {
#line 1478 "cplus.met"
            PUT_COORD_CALL;
#line 1478 "cplus.met"
        }
#line 1478 "cplus.met"
#line 1479 "cplus.met"
        {
#line 1479 "cplus.met"
            keepAll = 1 ;
#line 1479 "cplus.met"
#line 1480 "cplus.met"
#line 1480 "cplus.met"
            _addlist1 = listDefine ;
#line 1480 "cplus.met"
#line 1481 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1481 "cplus.met"
#line 1482 "cplus.met"
#line 1482 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1482 "cplus.met"
#line 1482 "cplus.met"
                if (listDefine){
#line 1482 "cplus.met"
#line 1482 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1482 "cplus.met"
                } else {
#line 1482 "cplus.met"
#line 1482 "cplus.met"
                    listDefine = _addlist1 ;
#line 1482 "cplus.met"
                }
#line 1482 "cplus.met"
            } 
#line 1482 "cplus.met"
#line 1483 "cplus.met"
            {
#line 1483 "cplus.met"
                PPTREE _ptTree0=0;
#line 1483 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1483 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1483 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1483 "cplus.met"
                } else {
#line 1483 "cplus.met"
                    tokenAhead = 0 ;
#line 1483 "cplus.met"
                }
#line 1483 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1483 "cplus.met"
            }
#line 1483 "cplus.met"
#line 1483 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1483 "cplus.met"
        }
#line 1483 "cplus.met"
#line 1483 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1483 "cplus.met"
    }
#line 1483 "cplus.met"
#line 1486 "cplus.met"
    {
#line 1486 "cplus.met"
        PPTREE _ptTree0=0;
#line 1486 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1486 "cplus.met"
        _retValue =_ptTree0;
#line 1486 "cplus.met"
        goto define_dir_ret;
#line 1486 "cplus.met"
    }
#line 1486 "cplus.met"
#line 1486 "cplus.met"
#line 1486 "cplus.met"

#line 1487 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1487 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1487 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1487 "cplus.met"
keepAll =  _oldkeepAll;
#line 1487 "cplus.met"
return((PPTREE) 0);
#line 1487 "cplus.met"

#line 1487 "cplus.met"
define_dir_exit :
#line 1487 "cplus.met"

#line 1487 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1487 "cplus.met"
    _funcLevel--;
#line 1487 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1487 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1487 "cplus.met"
    return((PPTREE) -1) ;
#line 1487 "cplus.met"

#line 1487 "cplus.met"
define_dir_ret :
#line 1487 "cplus.met"
    
#line 1487 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1487 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1487 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1487 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1487 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1487 "cplus.met"
    return _retValue ;
#line 1487 "cplus.met"
}
#line 1487 "cplus.met"

#line 1487 "cplus.met"
#line 1274 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1274 "cplus.met"
{
#line 1274 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1274 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1274 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1274 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1274 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1274 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1274 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1274 "cplus.met"
#line 1274 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1274 "cplus.met"
#line 1274 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1274 "cplus.met"
#line 1276 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1276 "cplus.met"
    switch( lexEl.Value) {
#line 1276 "cplus.met"
#line 1277 "cplus.met"
        case META : 
#line 1277 "cplus.met"
        case DEFINE_DIR : 
#line 1277 "cplus.met"
#line 1277 "cplus.met"
            {
#line 1277 "cplus.met"
                PPTREE _ptTree0=0;
#line 1277 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1277 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1277 "cplus.met"
                }
#line 1277 "cplus.met"
                _retValue =_ptTree0;
#line 1277 "cplus.met"
                goto directive_ret;
#line 1277 "cplus.met"
            }
#line 1277 "cplus.met"
            break;
#line 1277 "cplus.met"
#line 1278 "cplus.met"
        case INCLUDE_DIR : 
#line 1278 "cplus.met"
#line 1278 "cplus.met"
            {
#line 1278 "cplus.met"
                PPTREE _ptTree0=0;
#line 1278 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 1278 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
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
        case LINE_DIR : 
#line 1279 "cplus.met"
            tokenAhead = 0 ;
#line 1279 "cplus.met"
            CommTerm();
#line 1279 "cplus.met"
#line 1280 "cplus.met"
#line 1281 "cplus.met"
            {
#line 1281 "cplus.met"
                keepCarriage = 1 ;
#line 1281 "cplus.met"
#line 1282 "cplus.met"
#line 1283 "cplus.met"
                {
#line 1283 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1283 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1283 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1283 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1283 "cplus.met"
                    }
#line 1283 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1283 "cplus.met"
                    retTree=_ptRes0;
#line 1283 "cplus.met"
                }
#line 1283 "cplus.met"
#line 1284 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1284 "cplus.met"
#line 1285 "cplus.met"
                    {
#line 1285 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1285 "cplus.met"
                        {
#line 1285 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1285 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1285 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1285 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1285 "cplus.met"
                        }
#line 1285 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1285 "cplus.met"
                    }
#line 1285 "cplus.met"
#line 1285 "cplus.met"
                }
#line 1285 "cplus.met"
#line 1286 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1286 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1286 "cplus.met"
                    MulFreeTree(5,_addlist1,_addlist2,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1286 "cplus.met"
                } else {
#line 1286 "cplus.met"
                    tokenAhead = 0 ;
#line 1286 "cplus.met"
                }
#line 1286 "cplus.met"
#line 1286 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1286 "cplus.met"
            }
#line 1286 "cplus.met"
#line 1288 "cplus.met"
            {
#line 1288 "cplus.met"
                _retValue = retTree ;
#line 1288 "cplus.met"
                goto directive_ret;
#line 1288 "cplus.met"
                
#line 1288 "cplus.met"
            }
#line 1288 "cplus.met"
#line 1288 "cplus.met"
            break;
#line 1288 "cplus.met"
#line 1290 "cplus.met"
        case UNDEF_DIR : 
#line 1290 "cplus.met"
            tokenAhead = 0 ;
#line 1290 "cplus.met"
            CommTerm();
#line 1290 "cplus.met"
#line 1290 "cplus.met"
            {
#line 1290 "cplus.met"
                PPTREE _ptTree0=0;
#line 1290 "cplus.met"
                {
#line 1290 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1290 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1290 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1290 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1290 "cplus.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1290 "cplus.met"
                    } else {
#line 1290 "cplus.met"
                        tokenAhead = 0 ;
#line 1290 "cplus.met"
                    }
#line 1290 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1290 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1290 "cplus.met"
                }
#line 1290 "cplus.met"
                _retValue =_ptTree0;
#line 1290 "cplus.met"
                goto directive_ret;
#line 1290 "cplus.met"
            }
#line 1290 "cplus.met"
            break;
#line 1290 "cplus.met"
#line 1291 "cplus.met"
        case ERROR_DIR : 
#line 1291 "cplus.met"
            tokenAhead = 0 ;
#line 1291 "cplus.met"
            CommTerm();
#line 1291 "cplus.met"
#line 1291 "cplus.met"
            {
#line 1291 "cplus.met"
                PPTREE _ptTree0=0;
#line 1291 "cplus.met"
                {
#line 1291 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1291 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1291 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1291 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1291 "cplus.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1291 "cplus.met"
                    } else {
#line 1291 "cplus.met"
                        tokenAhead = 0 ;
#line 1291 "cplus.met"
                    }
#line 1291 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1291 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1291 "cplus.met"
                }
#line 1291 "cplus.met"
                _retValue =_ptTree0;
#line 1291 "cplus.met"
                goto directive_ret;
#line 1291 "cplus.met"
            }
#line 1291 "cplus.met"
            break;
#line 1291 "cplus.met"
#line 1292 "cplus.met"
        case PRAGMA_DIR : 
#line 1292 "cplus.met"
            tokenAhead = 0 ;
#line 1292 "cplus.met"
            CommTerm();
#line 1292 "cplus.met"
#line 1293 "cplus.met"
#line 1294 "cplus.met"
#line 1295 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1295 "cplus.met"
#line 1296 "cplus.met"
#line 1297 "cplus.met"
                {
#line 1297 "cplus.met"
                    keepCarriage = 1 ;
#line 1297 "cplus.met"
#line 1298 "cplus.met"
#line 1299 "cplus.met"
                    {
#line 1299 "cplus.met"
                        keepAll = 1 ;
#line 1299 "cplus.met"
#line 1300 "cplus.met"
#line 1301 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1301 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1301 "cplus.met"
                            MulFreeTree(5,_addlist1,_addlist2,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1301 "cplus.met"
                        } else {
#line 1301 "cplus.met"
                            tokenAhead = 0 ;
#line 1301 "cplus.met"
                        }
#line 1301 "cplus.met"
#line 1301 "cplus.met"
                        _addlist1 = list ;
#line 1301 "cplus.met"
#line 1302 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 51, cplus))) { 
#line 1302 "cplus.met"
#line 1303 "cplus.met"
#line 1303 "cplus.met"
                            {
#line 1303 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1303 "cplus.met"
                                {
#line 1303 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1303 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1303 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1303 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1303 "cplus.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1303 "cplus.met"
                                    } else {
#line 1303 "cplus.met"
                                        tokenAhead = 0 ;
#line 1303 "cplus.met"
                                    }
#line 1303 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1303 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1303 "cplus.met"
                                }
#line 1303 "cplus.met"
                                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1303 "cplus.met"
                            }
#line 1303 "cplus.met"
#line 1303 "cplus.met"
                            if (list){
#line 1303 "cplus.met"
#line 1303 "cplus.met"
                                _addlist1 = SonTree (_addlist1 ,2 );
#line 1303 "cplus.met"
                            } else {
#line 1303 "cplus.met"
#line 1303 "cplus.met"
                                list = _addlist1 ;
#line 1303 "cplus.met"
                            }
#line 1303 "cplus.met"
                        } 
#line 1303 "cplus.met"
#line 1304 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1304 "cplus.met"
                            MulFreeTree(5,_addlist1,_addlist2,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1304 "cplus.met"
                        }
#line 1304 "cplus.met"
#line 1304 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1304 "cplus.met"
                    }
#line 1304 "cplus.met"
#line 1304 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1304 "cplus.met"
                }
#line 1304 "cplus.met"
#line 1308 "cplus.met"
                 tokenAhead = 0;
#line 1308 "cplus.met"
#line 1310 "cplus.met"
                {
#line 1310 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1310 "cplus.met"
                    {
#line 1310 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1310 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1310 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1310 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1310 "cplus.met"
                    }
#line 1310 "cplus.met"
                    _retValue =_ptTree0;
#line 1310 "cplus.met"
                    goto directive_ret;
#line 1310 "cplus.met"
                }
#line 1310 "cplus.met"
#line 1310 "cplus.met"
            } else 
#line 1310 "cplus.met"
#line 1312 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
#line 1312 "cplus.met"
#line 1313 "cplus.met"
#line 1314 "cplus.met"
                {
#line 1314 "cplus.met"
                    keepCarriage = 1 ;
#line 1314 "cplus.met"
#line 1315 "cplus.met"
#line 1316 "cplus.met"
                    {
#line 1316 "cplus.met"
                        keepAll = 1 ;
#line 1316 "cplus.met"
#line 1317 "cplus.met"
#line 1318 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1318 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1318 "cplus.met"
                            MulFreeTree(5,_addlist1,_addlist2,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1318 "cplus.met"
                        } else {
#line 1318 "cplus.met"
                            tokenAhead = 0 ;
#line 1318 "cplus.met"
                        }
#line 1318 "cplus.met"
#line 1318 "cplus.met"
                        _addlist2 = list ;
#line 1318 "cplus.met"
#line 1319 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 52, cplus))) { 
#line 1319 "cplus.met"
#line 1320 "cplus.met"
#line 1320 "cplus.met"
                            {
#line 1320 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1320 "cplus.met"
                                {
#line 1320 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1320 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1320 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1320 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1320 "cplus.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1320 "cplus.met"
                                    } else {
#line 1320 "cplus.met"
                                        tokenAhead = 0 ;
#line 1320 "cplus.met"
                                    }
#line 1320 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1320 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1320 "cplus.met"
                                }
#line 1320 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1320 "cplus.met"
                            }
#line 1320 "cplus.met"
#line 1320 "cplus.met"
                            if (list){
#line 1320 "cplus.met"
#line 1320 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1320 "cplus.met"
                            } else {
#line 1320 "cplus.met"
#line 1320 "cplus.met"
                                list = _addlist2 ;
#line 1320 "cplus.met"
                            }
#line 1320 "cplus.met"
                        } 
#line 1320 "cplus.met"
#line 1321 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1321 "cplus.met"
                            MulFreeTree(5,_addlist1,_addlist2,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1321 "cplus.met"
                        }
#line 1321 "cplus.met"
#line 1321 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1321 "cplus.met"
                    }
#line 1321 "cplus.met"
#line 1321 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1321 "cplus.met"
                }
#line 1321 "cplus.met"
#line 1325 "cplus.met"
                 tokenAhead = 0;
#line 1325 "cplus.met"
#line 1327 "cplus.met"
                {
#line 1327 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1327 "cplus.met"
                    {
#line 1327 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1327 "cplus.met"
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
#line 1327 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1327 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1327 "cplus.met"
                    }
#line 1327 "cplus.met"
                    _retValue =_ptTree0;
#line 1327 "cplus.met"
                    goto directive_ret;
#line 1327 "cplus.met"
                }
#line 1327 "cplus.met"
#line 1327 "cplus.met"
            } else 
#line 1327 "cplus.met"
#line 1329 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1329 "cplus.met"
#line 1330 "cplus.met"
#line 1331 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1331 "cplus.met"
                switch( lexEl.Value) {
#line 1331 "cplus.met"
#line 1332 "cplus.met"
                    case META : 
#line 1332 "cplus.met"
                    case PRAGMA_TAB : 
#line 1332 "cplus.met"
                        tokenAhead = 0 ;
#line 1332 "cplus.met"
                        CommTerm();
#line 1332 "cplus.met"
#line 1333 "cplus.met"
#line 1334 "cplus.met"
                        {
#line 1334 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1334 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1334 "cplus.met"
                            {
#line 1334 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1334 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1334 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1334 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1334 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1334 "cplus.met"
                                } else {
#line 1334 "cplus.met"
                                    tokenAhead = 0 ;
#line 1334 "cplus.met"
                                }
#line 1334 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1334 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1334 "cplus.met"
                            }
#line 1334 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1334 "cplus.met"
                            retTree=_ptRes0;
#line 1334 "cplus.met"
                        }
#line 1334 "cplus.met"
#line 1337 "cplus.met"
                        AnalyzeTab (retTree );
#line 1337 "cplus.met"
#line 1338 "cplus.met"
                        {
#line 1338 "cplus.met"
                            _retValue = retTree ;
#line 1338 "cplus.met"
                            goto directive_ret;
#line 1338 "cplus.met"
                            
#line 1338 "cplus.met"
                        }
#line 1338 "cplus.met"
#line 1338 "cplus.met"
                        break;
#line 1338 "cplus.met"
#line 1340 "cplus.met"
                    case PRAGMA_MODE : 
#line 1340 "cplus.met"
                        tokenAhead = 0 ;
#line 1340 "cplus.met"
                        CommTerm();
#line 1340 "cplus.met"
#line 1341 "cplus.met"
#line 1342 "cplus.met"
                        {
#line 1342 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1342 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1342 "cplus.met"
                            {
#line 1342 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1342 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1342 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1342 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1342 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1342 "cplus.met"
                                } else {
#line 1342 "cplus.met"
                                    tokenAhead = 0 ;
#line 1342 "cplus.met"
                                }
#line 1342 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1342 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1342 "cplus.met"
                            }
#line 1342 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1342 "cplus.met"
                            retTree=_ptRes0;
#line 1342 "cplus.met"
                        }
#line 1342 "cplus.met"
#line 1345 "cplus.met"
                        AnalyzeMode (retTree );
#line 1345 "cplus.met"
#line 1346 "cplus.met"
                        {
#line 1346 "cplus.met"
                            _retValue = retTree ;
#line 1346 "cplus.met"
                            goto directive_ret;
#line 1346 "cplus.met"
                            
#line 1346 "cplus.met"
                        }
#line 1346 "cplus.met"
#line 1346 "cplus.met"
                        break;
#line 1346 "cplus.met"
#line 1348 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
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
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1350 "cplus.met"
                            {
#line 1350 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1350 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1350 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1350 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1350 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
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
                        AnalyzeSimplify (retTree );
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
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
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
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1358 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1358 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1358 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
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
#line 1362 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1362 "cplus.met"
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
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1365 "cplus.met"
                        tokenAhead = 0 ;
#line 1365 "cplus.met"
                        CommTerm();
#line 1365 "cplus.met"
#line 1366 "cplus.met"
#line 1367 "cplus.met"
                        {
#line 1367 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1367 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1367 "cplus.met"
                            {
#line 1367 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1367 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1367 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1367 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1367 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1367 "cplus.met"
                                } else {
#line 1367 "cplus.met"
                                    tokenAhead = 0 ;
#line 1367 "cplus.met"
                                }
#line 1367 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1367 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1367 "cplus.met"
                            }
#line 1367 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1367 "cplus.met"
                            retTree=_ptRes0;
#line 1367 "cplus.met"
                        }
#line 1367 "cplus.met"
#line 1370 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1370 "cplus.met"
#line 1371 "cplus.met"
                        {
#line 1371 "cplus.met"
                            _retValue = retTree ;
#line 1371 "cplus.met"
                            goto directive_ret;
#line 1371 "cplus.met"
                            
#line 1371 "cplus.met"
                        }
#line 1371 "cplus.met"
#line 1371 "cplus.met"
                        break;
#line 1371 "cplus.met"
#line 1373 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1373 "cplus.met"
                        tokenAhead = 0 ;
#line 1373 "cplus.met"
                        CommTerm();
#line 1373 "cplus.met"
#line 1374 "cplus.met"
#line 1375 "cplus.met"
                        {
#line 1375 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1375 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1375 "cplus.met"
                            {
#line 1375 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1375 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1375 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1375 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1375 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1375 "cplus.met"
                                } else {
#line 1375 "cplus.met"
                                    tokenAhead = 0 ;
#line 1375 "cplus.met"
                                }
#line 1375 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1375 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1375 "cplus.met"
                            }
#line 1375 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1375 "cplus.met"
                            retTree=_ptRes0;
#line 1375 "cplus.met"
                        }
#line 1375 "cplus.met"
#line 1378 "cplus.met"
                        AnalyzeDeclAlign (retTree );
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
                    case PRAGMA_BRACE_ALIGN : 
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
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1383 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1383 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1383 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
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
                        AnalyzeBraceAlign (retTree );
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
                    case PRAGMA_MARGIN : 
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
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1391 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1391 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1391 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
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
                        AnalyzeMargin (retTree );
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
                    case PRAGMA_COMMENT_START : 
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
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1399 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1399 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1399 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
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
                        AnalyzeComment (retTree );
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
                    case PRAGMA_COMMENT_MIDDLE : 
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
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1407 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1407 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1407 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
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
                        AnalyzeComment (retTree );
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
                    case PRAGMA_COMMENT_END : 
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
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1415 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1415 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1415 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
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
                    case PRAGMA_COMMENT_PLUS : 
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
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1423 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1423 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1423 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
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
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
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
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1431 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1431 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1431 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
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
#line 1435 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1435 "cplus.met"
#line 1436 "cplus.met"
                        {
#line 1436 "cplus.met"
                            _retValue = retTree ;
#line 1436 "cplus.met"
                            goto directive_ret;
#line 1436 "cplus.met"
                            
#line 1436 "cplus.met"
                        }
#line 1436 "cplus.met"
#line 1436 "cplus.met"
                        break;
#line 1436 "cplus.met"
#line 1438 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1438 "cplus.met"
                        tokenAhead = 0 ;
#line 1438 "cplus.met"
                        CommTerm();
#line 1438 "cplus.met"
#line 1439 "cplus.met"
#line 1440 "cplus.met"
                        {
#line 1440 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1440 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1440 "cplus.met"
                            {
#line 1440 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1440 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1440 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1440 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1440 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1440 "cplus.met"
                                } else {
#line 1440 "cplus.met"
                                    tokenAhead = 0 ;
#line 1440 "cplus.met"
                                }
#line 1440 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1440 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1440 "cplus.met"
                            }
#line 1440 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1440 "cplus.met"
                            retTree=_ptRes0;
#line 1440 "cplus.met"
                        }
#line 1440 "cplus.met"
#line 1443 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1443 "cplus.met"
#line 1444 "cplus.met"
                        {
#line 1444 "cplus.met"
                            _retValue = retTree ;
#line 1444 "cplus.met"
                            goto directive_ret;
#line 1444 "cplus.met"
                            
#line 1444 "cplus.met"
                        }
#line 1444 "cplus.met"
#line 1444 "cplus.met"
                        break;
#line 1444 "cplus.met"
#line 1446 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1446 "cplus.met"
                        tokenAhead = 0 ;
#line 1446 "cplus.met"
                        CommTerm();
#line 1446 "cplus.met"
#line 1447 "cplus.met"
#line 1448 "cplus.met"
                        {
#line 1448 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1448 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1448 "cplus.met"
                            {
#line 1448 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1448 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1448 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1448 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1448 "cplus.met"
                                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1448 "cplus.met"
                                } else {
#line 1448 "cplus.met"
                                    tokenAhead = 0 ;
#line 1448 "cplus.met"
                                }
#line 1448 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1448 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1448 "cplus.met"
                            }
#line 1448 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1448 "cplus.met"
                            retTree=_ptRes0;
#line 1448 "cplus.met"
                        }
#line 1448 "cplus.met"
#line 1451 "cplus.met"
                        AnalyzeParameters (retTree );
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
                    default : 
#line 1454 "cplus.met"
#line 1454 "cplus.met"
                        {
#line 1454 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1454 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1454 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1454 "cplus.met"
                            }
#line 1454 "cplus.met"
                            _retValue =_ptTree0;
#line 1454 "cplus.met"
                            goto directive_ret;
#line 1454 "cplus.met"
                        }
#line 1454 "cplus.met"
                        break;
#line 1454 "cplus.met"
                }
#line 1454 "cplus.met"
#line 1454 "cplus.met"
            } else 
#line 1454 "cplus.met"
#line 1459 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 121, cplus))){
#line 1459 "cplus.met"
#line 1458 "cplus.met"
#line 1459 "cplus.met"
                {
#line 1459 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1459 "cplus.met"
                    {
#line 1459 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1459 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1459 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1459 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1459 "cplus.met"
                            MulFreeTree(8,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
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
                    _retValue =_ptTree0;
#line 1459 "cplus.met"
                    goto directive_ret;
#line 1459 "cplus.met"
                }
#line 1459 "cplus.met"
#line 1459 "cplus.met"
            } else 
#line 1459 "cplus.met"
#line 1463 "cplus.met"
            if (1) {
#line 1463 "cplus.met"
#line 1462 "cplus.met"
#line 1463 "cplus.met"
                {
#line 1463 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1463 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1463 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1463 "cplus.met"
                    }
#line 1463 "cplus.met"
                    _retValue =_ptTree0;
#line 1463 "cplus.met"
                    goto directive_ret;
#line 1463 "cplus.met"
                }
#line 1463 "cplus.met"
#line 1463 "cplus.met"
            } else 
#line 1463 "cplus.met"
             ;
#line 1463 "cplus.met"
#line 1463 "cplus.met"
            break;
#line 1463 "cplus.met"
        default :
#line 1463 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1463 "cplus.met"
            break;
#line 1463 "cplus.met"
    }
#line 1463 "cplus.met"
#line 1463 "cplus.met"
#line 1467 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1467 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1467 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1467 "cplus.met"
keepAll =  _oldkeepAll;
#line 1467 "cplus.met"
return((PPTREE) 0);
#line 1467 "cplus.met"

#line 1467 "cplus.met"
directive_exit :
#line 1467 "cplus.met"

#line 1467 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1467 "cplus.met"
    _funcLevel--;
#line 1467 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1467 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1467 "cplus.met"
    return((PPTREE) -1) ;
#line 1467 "cplus.met"

#line 1467 "cplus.met"
directive_ret :
#line 1467 "cplus.met"
    
#line 1467 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1467 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1467 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1467 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1467 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1467 "cplus.met"
    return _retValue ;
#line 1467 "cplus.met"
}
#line 1467 "cplus.met"

#line 1467 "cplus.met"
