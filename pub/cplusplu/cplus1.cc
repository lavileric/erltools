/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3175 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3175 "cplus.met"
{
#line 3175 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3175 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3175 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3175 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3175 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3175 "cplus.met"
#line 3175 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3175 "cplus.met"
#line 3175 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3175 "cplus.met"
#line 3177 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3177 "cplus.met"
#line 3178 "cplus.met"
#line 3178 "cplus.met"
        _addlist1 = list ;
#line 3178 "cplus.met"
#line 3179 "cplus.met"
        do {
#line 3179 "cplus.met"
#line 3180 "cplus.met"
            {
#line 3180 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3180 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 2);
#line 3180 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3180 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3180 "cplus.met"
                }
#line 3180 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3180 "cplus.met"
                retTree=_ptRes0;
#line 3180 "cplus.met"
            }
#line 3180 "cplus.met"
#line 3181 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3181 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3181 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,val);
                TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3181 "cplus.met"
            } else {
#line 3181 "cplus.met"
                tokenAhead = 0 ;
#line 3181 "cplus.met"
            }
#line 3181 "cplus.met"
#line 3182 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 59, cplus)){
#line 3182 "cplus.met"
#line 3183 "cplus.met"
                ReplaceTree(retTree ,2 ,val );
#line 3183 "cplus.met"
#line 3183 "cplus.met"
            }
#line 3183 "cplus.met"
#line 3184 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3184 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3184 "cplus.met"
                MulFreeTree(4,_addlist1,list,retTree,val);
                TOKEN_EXIT(ctor_initializer_exit,")")
#line 3184 "cplus.met"
            } else {
#line 3184 "cplus.met"
                tokenAhead = 0 ;
#line 3184 "cplus.met"
            }
#line 3184 "cplus.met"
#line 3185 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3185 "cplus.met"
#line 3185 "cplus.met"
            if (list){
#line 3185 "cplus.met"
#line 3185 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3185 "cplus.met"
            } else {
#line 3185 "cplus.met"
#line 3185 "cplus.met"
                list = _addlist1 ;
#line 3185 "cplus.met"
            }
#line 3185 "cplus.met"
#line 3185 "cplus.met"
#line 3186 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3186 "cplus.met"
#line 3187 "cplus.met"
        {
#line 3187 "cplus.met"
            PPTREE _ptTree0=0;
#line 3187 "cplus.met"
            {
#line 3187 "cplus.met"
                PPTREE _ptRes1=0;
#line 3187 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3187 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3187 "cplus.met"
                _ptTree0=_ptRes1;
#line 3187 "cplus.met"
            }
#line 3187 "cplus.met"
            _retValue =_ptTree0;
#line 3187 "cplus.met"
            goto ctor_initializer_ret;
#line 3187 "cplus.met"
        }
#line 3187 "cplus.met"
#line 3187 "cplus.met"
#line 3187 "cplus.met"
    }
#line 3187 "cplus.met"
#line 3187 "cplus.met"
#line 3188 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3188 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3188 "cplus.met"
return((PPTREE) 0);
#line 3188 "cplus.met"

#line 3188 "cplus.met"
ctor_initializer_exit :
#line 3188 "cplus.met"

#line 3188 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3188 "cplus.met"
    _funcLevel--;
#line 3188 "cplus.met"
    return((PPTREE) -1) ;
#line 3188 "cplus.met"

#line 3188 "cplus.met"
ctor_initializer_ret :
#line 3188 "cplus.met"
    
#line 3188 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3188 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3188 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3188 "cplus.met"
    return _retValue ;
#line 3188 "cplus.met"
}
#line 3188 "cplus.met"

#line 3188 "cplus.met"
#line 1649 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1649 "cplus.met"
{
#line 1649 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1649 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1649 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1649 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1649 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1649 "cplus.met"
#line 1649 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1649 "cplus.met"
#line 1652 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 92, cplus))){
#line 1652 "cplus.met"
#line 1654 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 88, cplus))== (PPTREE) -1 ) {
#line 1654 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1654 "cplus.met"
        }
#line 1654 "cplus.met"
    }
#line 1654 "cplus.met"
#line 1655 "cplus.met"
    {
#line 1655 "cplus.met"
        _retValue = retTree ;
#line 1655 "cplus.met"
        goto data_decl_exotic_ret;
#line 1655 "cplus.met"
        
#line 1655 "cplus.met"
    }
#line 1655 "cplus.met"
#line 1655 "cplus.met"
#line 1655 "cplus.met"

#line 1656 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1656 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1656 "cplus.met"
return((PPTREE) 0);
#line 1656 "cplus.met"

#line 1656 "cplus.met"
data_decl_exotic_exit :
#line 1656 "cplus.met"

#line 1656 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1656 "cplus.met"
    _funcLevel--;
#line 1656 "cplus.met"
    return((PPTREE) -1) ;
#line 1656 "cplus.met"

#line 1656 "cplus.met"
data_decl_exotic_ret :
#line 1656 "cplus.met"
    
#line 1656 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
#line 1656 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1656 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1656 "cplus.met"
    return _retValue ;
#line 1656 "cplus.met"
}
#line 1656 "cplus.met"

#line 1656 "cplus.met"
#line 1602 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1602 "cplus.met"
{
#line 1602 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1602 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1602 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1602 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1602 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1602 "cplus.met"
#line 1602 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1602 "cplus.met"
#line 1604 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 33, cplus))){
#line 1604 "cplus.met"
#line 1605 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 1605 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1605 "cplus.met"
        }
#line 1605 "cplus.met"
    }
#line 1605 "cplus.met"
#line 1606 "cplus.met"
    {
#line 1606 "cplus.met"
        _retValue = retTree ;
#line 1606 "cplus.met"
        goto data_decl_sc_decl_ret;
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
data_decl_sc_decl_exit :
#line 1607 "cplus.met"

#line 1607 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1607 "cplus.met"
    _funcLevel--;
#line 1607 "cplus.met"
    return((PPTREE) -1) ;
#line 1607 "cplus.met"

#line 1607 "cplus.met"
data_decl_sc_decl_ret :
#line 1607 "cplus.met"
    
#line 1607 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
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
#line 1585 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1585 "cplus.met"
{
#line 1585 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1585 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1585 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1585 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1585 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1585 "cplus.met"
#line 1585 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1585 "cplus.met"
#line 1587 "cplus.met"
    {
#line 1587 "cplus.met"
        PPTREE _ptRes0=0;
#line 1587 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1587 "cplus.met"
        retTree=_ptRes0;
#line 1587 "cplus.met"
    }
#line 1587 "cplus.met"
#line 1588 "cplus.met"
    {
#line 1588 "cplus.met"
        PPTREE _ptTree0=0;
#line 1588 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 1588 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1588 "cplus.met"
        }
#line 1588 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1588 "cplus.met"
    }
#line 1588 "cplus.met"
#line 1589 "cplus.met"
    {
#line 1589 "cplus.met"
        PPTREE _ptTree0=0;
#line 1589 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1589 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1589 "cplus.met"
        }
#line 1589 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1589 "cplus.met"
    }
#line 1589 "cplus.met"
#line 1590 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1590 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1590 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1590 "cplus.met"
    } else {
#line 1590 "cplus.met"
        tokenAhead = 0 ;
#line 1590 "cplus.met"
    }
#line 1590 "cplus.met"
#line 1591 "cplus.met"
    {
#line 1591 "cplus.met"
        _retValue = retTree ;
#line 1591 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1591 "cplus.met"
        
#line 1591 "cplus.met"
    }
#line 1591 "cplus.met"
#line 1591 "cplus.met"
#line 1591 "cplus.met"

#line 1592 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1592 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1592 "cplus.met"
return((PPTREE) 0);
#line 1592 "cplus.met"

#line 1592 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1592 "cplus.met"

#line 1592 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1592 "cplus.met"
    _funcLevel--;
#line 1592 "cplus.met"
    return((PPTREE) -1) ;
#line 1592 "cplus.met"

#line 1592 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1592 "cplus.met"
    
#line 1592 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1592 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1592 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1592 "cplus.met"
    return _retValue ;
#line 1592 "cplus.met"
}
#line 1592 "cplus.met"

#line 1592 "cplus.met"
#line 1594 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1594 "cplus.met"
{
#line 1594 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1594 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1594 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1594 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1594 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1594 "cplus.met"
#line 1594 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1594 "cplus.met"
#line 1596 "cplus.met"
    {
#line 1596 "cplus.met"
        PPTREE _ptRes0=0;
#line 1596 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1596 "cplus.met"
        retTree=_ptRes0;
#line 1596 "cplus.met"
    }
#line 1596 "cplus.met"
#line 1597 "cplus.met"
    {
#line 1597 "cplus.met"
        PPTREE _ptTree0=0;
#line 1597 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1597 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1597 "cplus.met"
        }
#line 1597 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1597 "cplus.met"
    }
#line 1597 "cplus.met"
#line 1598 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1598 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1598 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1598 "cplus.met"
    } else {
#line 1598 "cplus.met"
        tokenAhead = 0 ;
#line 1598 "cplus.met"
    }
#line 1598 "cplus.met"
#line 1599 "cplus.met"
    {
#line 1599 "cplus.met"
        _retValue = retTree ;
#line 1599 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1599 "cplus.met"
        
#line 1599 "cplus.met"
    }
#line 1599 "cplus.met"
#line 1599 "cplus.met"
#line 1599 "cplus.met"

#line 1600 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1600 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1600 "cplus.met"
return((PPTREE) 0);
#line 1600 "cplus.met"

#line 1600 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1600 "cplus.met"

#line 1600 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1600 "cplus.met"
    _funcLevel--;
#line 1600 "cplus.met"
    return((PPTREE) -1) ;
#line 1600 "cplus.met"

#line 1600 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1600 "cplus.met"
    
#line 1600 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1600 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1600 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1600 "cplus.met"
    return _retValue ;
#line 1600 "cplus.met"
}
#line 1600 "cplus.met"

#line 1600 "cplus.met"
#line 1642 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1642 "cplus.met"
{
#line 1642 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1642 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1642 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1642 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1642 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1642 "cplus.met"
#line 1642 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1642 "cplus.met"
#line 1644 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 36, cplus))){
#line 1644 "cplus.met"
#line 1645 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 1645 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
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
        goto data_decl_sc_ty_decl_ret;
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
data_decl_sc_ty_decl_exit :
#line 1647 "cplus.met"

#line 1647 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1647 "cplus.met"
    _funcLevel--;
#line 1647 "cplus.met"
    return((PPTREE) -1) ;
#line 1647 "cplus.met"

#line 1647 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1647 "cplus.met"
    
#line 1647 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
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
#line 1619 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1619 "cplus.met"
{
#line 1619 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1619 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1619 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1619 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1619 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1619 "cplus.met"
#line 1619 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1619 "cplus.met"
#line 1622 "cplus.met"
    {
#line 1622 "cplus.met"
        PPTREE _ptRes0=0;
#line 1622 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1622 "cplus.met"
        retTree=_ptRes0;
#line 1622 "cplus.met"
    }
#line 1622 "cplus.met"
#line 1624 "cplus.met"
    {
#line 1624 "cplus.met"
        PPTREE _ptTree0=0;
#line 1624 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 1624 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1624 "cplus.met"
        }
#line 1624 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1624 "cplus.met"
    }
#line 1624 "cplus.met"
#line 1625 "cplus.met"
    {
#line 1625 "cplus.met"
        PPTREE _ptTree0=0;
#line 1625 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1625 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1625 "cplus.met"
        }
#line 1625 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1625 "cplus.met"
    }
#line 1625 "cplus.met"
#line 1626 "cplus.met"
    {
#line 1626 "cplus.met"
        PPTREE _ptTree0=0;
#line 1626 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1626 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1626 "cplus.met"
        }
#line 1626 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1626 "cplus.met"
    }
#line 1626 "cplus.met"
#line 1627 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1627 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1627 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1627 "cplus.met"
    } else {
#line 1627 "cplus.met"
        tokenAhead = 0 ;
#line 1627 "cplus.met"
    }
#line 1627 "cplus.met"
#line 1628 "cplus.met"
    {
#line 1628 "cplus.met"
        _retValue = retTree ;
#line 1628 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1628 "cplus.met"
        
#line 1628 "cplus.met"
    }
#line 1628 "cplus.met"
#line 1628 "cplus.met"
#line 1628 "cplus.met"

#line 1629 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1629 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1629 "cplus.met"
return((PPTREE) 0);
#line 1629 "cplus.met"

#line 1629 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1629 "cplus.met"

#line 1629 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1629 "cplus.met"
    _funcLevel--;
#line 1629 "cplus.met"
    return((PPTREE) -1) ;
#line 1629 "cplus.met"

#line 1629 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1629 "cplus.met"
    
#line 1629 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1629 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1629 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1629 "cplus.met"
    return _retValue ;
#line 1629 "cplus.met"
}
#line 1629 "cplus.met"

#line 1629 "cplus.met"
#line 1631 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1631 "cplus.met"
{
#line 1631 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1631 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1631 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1631 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1631 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1631 "cplus.met"
#line 1631 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1631 "cplus.met"
#line 1634 "cplus.met"
    {
#line 1634 "cplus.met"
        PPTREE _ptRes0=0;
#line 1634 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1634 "cplus.met"
        retTree=_ptRes0;
#line 1634 "cplus.met"
    }
#line 1634 "cplus.met"
#line 1636 "cplus.met"
    {
#line 1636 "cplus.met"
        PPTREE _ptTree0=0;
#line 1636 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1636 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1636 "cplus.met"
        }
#line 1636 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
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
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
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
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
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
        goto data_decl_sc_ty_decl_short_ret;
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
data_decl_sc_ty_decl_short_exit :
#line 1640 "cplus.met"

#line 1640 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1640 "cplus.met"
    _funcLevel--;
#line 1640 "cplus.met"
    return((PPTREE) -1) ;
#line 1640 "cplus.met"

#line 1640 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1640 "cplus.met"
    
#line 1640 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
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
#line 1609 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1609 "cplus.met"
{
#line 1609 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1609 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1609 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1609 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1609 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1609 "cplus.met"
#line 1609 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1609 "cplus.met"
#line 1611 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 32, cplus))){
#line 1611 "cplus.met"
#line 1612 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 42, cplus))== (PPTREE) -1 ) {
#line 1612 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1612 "cplus.met"
        }
#line 1612 "cplus.met"
    }
#line 1612 "cplus.met"
#line 1613 "cplus.met"
    {
#line 1613 "cplus.met"
        _retValue = retTree ;
#line 1613 "cplus.met"
        goto data_declaration_ret;
#line 1613 "cplus.met"
        
#line 1613 "cplus.met"
    }
#line 1613 "cplus.met"
#line 1613 "cplus.met"
#line 1613 "cplus.met"

#line 1614 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1614 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1614 "cplus.met"
return((PPTREE) 0);
#line 1614 "cplus.met"

#line 1614 "cplus.met"
data_declaration_exit :
#line 1614 "cplus.met"

#line 1614 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1614 "cplus.met"
    _funcLevel--;
#line 1614 "cplus.met"
    return((PPTREE) -1) ;
#line 1614 "cplus.met"

#line 1614 "cplus.met"
data_declaration_ret :
#line 1614 "cplus.met"
    
#line 1614 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1614 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1614 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1614 "cplus.met"
    return _retValue ;
#line 1614 "cplus.met"
}
#line 1614 "cplus.met"

#line 1614 "cplus.met"
#line 1683 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1683 "cplus.met"
{
#line 1683 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1683 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1683 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1683 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1683 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1683 "cplus.met"
#line 1683 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1683 "cplus.met"
#line 1685 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 40, cplus))){
#line 1685 "cplus.met"
#line 1686 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 41, cplus))== (PPTREE) -1 ) {
#line 1686 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
#line 1686 "cplus.met"
        }
#line 1686 "cplus.met"
    }
#line 1686 "cplus.met"
#line 1687 "cplus.met"
    {
#line 1687 "cplus.met"
        _retValue = retTree ;
#line 1687 "cplus.met"
        goto data_declaration_for_ret;
#line 1687 "cplus.met"
        
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
data_declaration_for_exit :
#line 1688 "cplus.met"

#line 1688 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1688 "cplus.met"
    _funcLevel--;
#line 1688 "cplus.met"
    return((PPTREE) -1) ;
#line 1688 "cplus.met"

#line 1688 "cplus.met"
data_declaration_for_ret :
#line 1688 "cplus.met"
    
#line 1688 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
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
#line 1666 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1666 "cplus.met"
{
#line 1666 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1666 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1666 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1666 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1666 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1666 "cplus.met"
#line 1666 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1666 "cplus.met"
#line 1668 "cplus.met"
    {
#line 1668 "cplus.met"
        PPTREE _ptRes0=0;
#line 1668 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1668 "cplus.met"
        retTree=_ptRes0;
#line 1668 "cplus.met"
    }
#line 1668 "cplus.met"
#line 1669 "cplus.met"
    {
#line 1669 "cplus.met"
        PPTREE _ptTree0=0;
#line 1669 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 1669 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1669 "cplus.met"
        }
#line 1669 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1669 "cplus.met"
    }
#line 1669 "cplus.met"
#line 1670 "cplus.met"
    {
#line 1670 "cplus.met"
        PPTREE _ptTree0=0;
#line 1670 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1670 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1670 "cplus.met"
        }
#line 1670 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1670 "cplus.met"
    }
#line 1670 "cplus.met"
#line 1671 "cplus.met"
    {
#line 1671 "cplus.met"
        PPTREE _ptTree0=0;
#line 1671 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1671 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1671 "cplus.met"
        }
#line 1671 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1671 "cplus.met"
    }
#line 1671 "cplus.met"
#line 1672 "cplus.met"
    {
#line 1672 "cplus.met"
        _retValue = retTree ;
#line 1672 "cplus.met"
        goto data_declaration_for_full_ret;
#line 1672 "cplus.met"
        
#line 1672 "cplus.met"
    }
#line 1672 "cplus.met"
#line 1672 "cplus.met"
#line 1672 "cplus.met"

#line 1673 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1673 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1673 "cplus.met"
return((PPTREE) 0);
#line 1673 "cplus.met"

#line 1673 "cplus.met"
data_declaration_for_full_exit :
#line 1673 "cplus.met"

#line 1673 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1673 "cplus.met"
    _funcLevel--;
#line 1673 "cplus.met"
    return((PPTREE) -1) ;
#line 1673 "cplus.met"

#line 1673 "cplus.met"
data_declaration_for_full_ret :
#line 1673 "cplus.met"
    
#line 1673 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
#line 1673 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1673 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1673 "cplus.met"
    return _retValue ;
#line 1673 "cplus.met"
}
#line 1673 "cplus.met"

#line 1673 "cplus.met"
#line 1675 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1675 "cplus.met"
{
#line 1675 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1675 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1675 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1675 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1675 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1675 "cplus.met"
#line 1675 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1675 "cplus.met"
#line 1677 "cplus.met"
    {
#line 1677 "cplus.met"
        PPTREE _ptRes0=0;
#line 1677 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1677 "cplus.met"
        retTree=_ptRes0;
#line 1677 "cplus.met"
    }
#line 1677 "cplus.met"
#line 1678 "cplus.met"
    {
#line 1678 "cplus.met"
        PPTREE _ptTree0=0;
#line 1678 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 1678 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1678 "cplus.met"
        }
#line 1678 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1678 "cplus.met"
    }
#line 1678 "cplus.met"
#line 1679 "cplus.met"
    {
#line 1679 "cplus.met"
        PPTREE _ptTree0=0;
#line 1679 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1679 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1679 "cplus.met"
        }
#line 1679 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1679 "cplus.met"
    }
#line 1679 "cplus.met"
#line 1680 "cplus.met"
    {
#line 1680 "cplus.met"
        _retValue = retTree ;
#line 1680 "cplus.met"
        goto data_declaration_for_short_ret;
#line 1680 "cplus.met"
        
#line 1680 "cplus.met"
    }
#line 1680 "cplus.met"
#line 1680 "cplus.met"
#line 1680 "cplus.met"

#line 1681 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1681 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1681 "cplus.met"
return((PPTREE) 0);
#line 1681 "cplus.met"

#line 1681 "cplus.met"
data_declaration_for_short_exit :
#line 1681 "cplus.met"

#line 1681 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1681 "cplus.met"
    _funcLevel--;
#line 1681 "cplus.met"
    return((PPTREE) -1) ;
#line 1681 "cplus.met"

#line 1681 "cplus.met"
data_declaration_for_short_ret :
#line 1681 "cplus.met"
    
#line 1681 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
#line 1681 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1681 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1681 "cplus.met"
    return _retValue ;
#line 1681 "cplus.met"
}
#line 1681 "cplus.met"

#line 1681 "cplus.met"
#line 1658 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1658 "cplus.met"
{
#line 1658 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1658 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1658 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1658 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1658 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1658 "cplus.met"
#line 1658 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1658 "cplus.met"
#line 1660 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 35, cplus))){
#line 1660 "cplus.met"
#line 1661 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 1661 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
#line 1661 "cplus.met"
        }
#line 1661 "cplus.met"
    }
#line 1661 "cplus.met"
#line 1662 "cplus.met"
    {
#line 1662 "cplus.met"
        _retValue = retTree ;
#line 1662 "cplus.met"
        goto data_declaration_strict_ret;
#line 1662 "cplus.met"
        
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
data_declaration_strict_exit :
#line 1663 "cplus.met"

#line 1663 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1663 "cplus.met"
    _funcLevel--;
#line 1663 "cplus.met"
    return((PPTREE) -1) ;
#line 1663 "cplus.met"

#line 1663 "cplus.met"
data_declaration_strict_ret :
#line 1663 "cplus.met"
    
#line 1663 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
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
#line 2840 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 2840 "cplus.met"
{
#line 2840 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2840 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2840 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2840 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2840 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2840 "cplus.met"
#line 2840 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0;
#line 2840 "cplus.met"
#line 2842 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2842 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 2842 "cplus.met"
        MulFreeTree(2,expr,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
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
        PPTREE _ptRes0=0;
#line 2843 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 2843 "cplus.met"
        retTree=_ptRes0;
#line 2843 "cplus.met"
    }
#line 2843 "cplus.met"
#line 2844 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 2844 "cplus.met"
#line 2845 "cplus.met"
#line 2848 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 59, cplus)){
#line 2848 "cplus.met"
#line 2848 "cplus.met"
        }
#line 2848 "cplus.met"
#line 2851 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2851 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2851 "cplus.met"
            MulFreeTree(2,expr,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 2851 "cplus.met"
        } else {
#line 2851 "cplus.met"
            tokenAhead = 0 ;
#line 2851 "cplus.met"
        }
#line 2851 "cplus.met"
#line 2852 "cplus.met"
        {
#line 2852 "cplus.met"
            PPTREE _ptTree0=0;
#line 2852 "cplus.met"
            {
#line 2852 "cplus.met"
                PPTREE _ptRes1=0;
#line 2852 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 2852 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 2852 "cplus.met"
                _ptTree0=_ptRes1;
#line 2852 "cplus.met"
            }
#line 2852 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2852 "cplus.met"
        }
#line 2852 "cplus.met"
#line 2852 "cplus.met"
#line 2852 "cplus.met"
    }
#line 2852 "cplus.met"
#line 2854 "cplus.met"
    {
#line 2854 "cplus.met"
        PPTREE _ptTree0=0;
#line 2854 "cplus.met"
        {
#line 2854 "cplus.met"
            PPTREE _ptTree1=0;
#line 2854 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 2854 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,expr,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 2854 "cplus.met"
            }
#line 2854 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2854 "cplus.met"
        }
#line 2854 "cplus.met"
        _retValue =_ptTree0;
#line 2854 "cplus.met"
        goto deallocation_expression_ret;
#line 2854 "cplus.met"
    }
#line 2854 "cplus.met"
#line 2854 "cplus.met"
#line 2854 "cplus.met"

#line 2855 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2855 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2855 "cplus.met"
return((PPTREE) 0);
#line 2855 "cplus.met"

#line 2855 "cplus.met"
deallocation_expression_exit :
#line 2855 "cplus.met"

#line 2855 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2855 "cplus.met"
    _funcLevel--;
#line 2855 "cplus.met"
    return((PPTREE) -1) ;
#line 2855 "cplus.met"

#line 2855 "cplus.met"
deallocation_expression_ret :
#line 2855 "cplus.met"
    
#line 2855 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 2855 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2855 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2855 "cplus.met"
    return _retValue ;
#line 2855 "cplus.met"
}
#line 2855 "cplus.met"

#line 2855 "cplus.met"
#line 2223 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2223 "cplus.met"
{
#line 2223 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2223 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2223 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2223 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2223 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2223 "cplus.met"
#line 2223 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2223 "cplus.met"
#line 2225 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 117, cplus)){
#line 2225 "cplus.met"
#line 2226 "cplus.met"
        {
#line 2226 "cplus.met"
            PPTREE _ptTree0=0;
#line 2226 "cplus.met"
            {
#line 2226 "cplus.met"
                PPTREE _ptTree1=0;
#line 2226 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2226 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2226 "cplus.met"
                }
#line 2226 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2226 "cplus.met"
            }
#line 2226 "cplus.met"
            _retValue =_ptTree0;
#line 2226 "cplus.met"
            goto declarator_ret;
#line 2226 "cplus.met"
        }
#line 2226 "cplus.met"
    } else {
#line 2226 "cplus.met"
#line 2228 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2228 "cplus.met"
        switch( lexEl.Value) {
#line 2228 "cplus.met"
#line 2229 "cplus.met"
            case ETOI : 
#line 2229 "cplus.met"
                tokenAhead = 0 ;
#line 2229 "cplus.met"
                CommTerm();
#line 2229 "cplus.met"
#line 2229 "cplus.met"
                {
#line 2229 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2229 "cplus.met"
                    {
#line 2229 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2229 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2229 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2229 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2229 "cplus.met"
                        }
#line 2229 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2229 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2229 "cplus.met"
                    }
#line 2229 "cplus.met"
                    _retValue =_ptTree0;
#line 2229 "cplus.met"
                    goto declarator_ret;
#line 2229 "cplus.met"
                }
#line 2229 "cplus.met"
                break;
#line 2229 "cplus.met"
#line 2230 "cplus.met"
            case ETCO : 
#line 2230 "cplus.met"
                tokenAhead = 0 ;
#line 2230 "cplus.met"
                CommTerm();
#line 2230 "cplus.met"
#line 2230 "cplus.met"
                {
#line 2230 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2230 "cplus.met"
                    {
#line 2230 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2230 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2230 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2230 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2230 "cplus.met"
                        }
#line 2230 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2230 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2230 "cplus.met"
                    }
#line 2230 "cplus.met"
                    _retValue =_ptTree0;
#line 2230 "cplus.met"
                    goto declarator_ret;
#line 2230 "cplus.met"
                }
#line 2230 "cplus.met"
                break;
#line 2230 "cplus.met"
#line 2231 "cplus.met"
            case TILD : 
#line 2231 "cplus.met"
                tokenAhead = 0 ;
#line 2231 "cplus.met"
                CommTerm();
#line 2231 "cplus.met"
#line 2231 "cplus.met"
                {
#line 2231 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2231 "cplus.met"
                    {
#line 2231 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2231 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2231 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2231 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2231 "cplus.met"
                        }
#line 2231 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2231 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2231 "cplus.met"
                    }
#line 2231 "cplus.met"
                    _retValue =_ptTree0;
#line 2231 "cplus.met"
                    goto declarator_ret;
#line 2231 "cplus.met"
                }
#line 2231 "cplus.met"
                break;
#line 2231 "cplus.met"
#line 2234 "cplus.met"
            case POUV : 
#line 2234 "cplus.met"
                tokenAhead = 0 ;
#line 2234 "cplus.met"
                CommTerm();
#line 2234 "cplus.met"
#line 2233 "cplus.met"
#line 2234 "cplus.met"
                {
#line 2234 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2234 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2234 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2234 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2234 "cplus.met"
                    }
#line 2234 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2234 "cplus.met"
                    retTree=_ptRes0;
#line 2234 "cplus.met"
                }
#line 2234 "cplus.met"
#line 2235 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2235 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2235 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2235 "cplus.met"
                } else {
#line 2235 "cplus.met"
                    tokenAhead = 0 ;
#line 2235 "cplus.met"
                }
#line 2235 "cplus.met"
#line 2236 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2236 "cplus.met"
#line 2237 "cplus.met"
                                            { PPTREE theTree ;
#line 2237 "cplus.met"
                                              theTree = valTree ;
#line 2237 "cplus.met"
                                              if (theTree) {
#line 2237 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2237 "cplus.met"
                                               if (NumberTree(theTree)
#line 2237 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2237 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2237 "cplus.met"
                                               else
#line 2237 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2237 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2237 "cplus.met"
                                                  /* modif portage sun */
#line 2237 "cplus.met"
                                                  retTree = valTree;
#line 2237 "cplus.met"
                                              }
#line 2237 "cplus.met"
                                                 }
#line 2237 "cplus.met"
                                        
#line 2237 "cplus.met"
                }
#line 2237 "cplus.met"
#line 2237 "cplus.met"
                break;
#line 2237 "cplus.met"
#line 2254 "cplus.met"
            case META : 
#line 2254 "cplus.met"
            case IDENT : 
#line 2254 "cplus.met"
#line 2255 "cplus.met"
#line 2256 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2256 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2256 "cplus.met"
                }
#line 2256 "cplus.met"
#line 2257 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2257 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2257 "cplus.met"
#line 2258 "cplus.met"
                    {
#line 2258 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2258 "cplus.met"
                        {
#line 2258 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2258 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2258 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2258 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 2258 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2258 "cplus.met"
                            }
#line 2258 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2258 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2258 "cplus.met"
                        }
#line 2258 "cplus.met"
                        _retValue =_ptTree0;
#line 2258 "cplus.met"
                        goto declarator_ret;
#line 2258 "cplus.met"
                    }
#line 2258 "cplus.met"
                }
#line 2258 "cplus.met"
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
            case OPERATOR : 
#line 2278 "cplus.met"
#line 2279 "cplus.met"
#line 2280 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2280 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2280 "cplus.met"
                }
#line 2280 "cplus.met"
#line 2281 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 45, cplus)){
#line 2281 "cplus.met"
#line 2282 "cplus.met"
                                            { PPTREE theTree ;
#line 2282 "cplus.met"
                                              theTree = valTree ;
#line 2282 "cplus.met"
                                              if (theTree) {
#line 2282 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2282 "cplus.met"
                                               if (NumberTree(theTree)
#line 2282 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2282 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2282 "cplus.met"
                                               else
#line 2282 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2282 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2282 "cplus.met"
                                                  /* modif portage sun */
#line 2282 "cplus.met"
                                                  retTree = valTree;
#line 2282 "cplus.met"
                                              }
#line 2282 "cplus.met"
                                                 }
#line 2282 "cplus.met"
                                        
#line 2282 "cplus.met"
                }
#line 2282 "cplus.met"
#line 2282 "cplus.met"
                break;
#line 2282 "cplus.met"
            default :
#line 2282 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or ~ or ( or IDENT or operator")
#line 2282 "cplus.met"
                break;
#line 2282 "cplus.met"
        }
#line 2282 "cplus.met"
    }
#line 2282 "cplus.met"
#line 2300 "cplus.met"
    {
#line 2300 "cplus.met"
        _retValue = retTree ;
#line 2300 "cplus.met"
        goto declarator_ret;
#line 2300 "cplus.met"
        
#line 2300 "cplus.met"
    }
#line 2300 "cplus.met"
#line 2300 "cplus.met"
#line 2300 "cplus.met"

#line 2301 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2301 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2301 "cplus.met"
return((PPTREE) 0);
#line 2301 "cplus.met"

#line 2301 "cplus.met"
declarator_exit :
#line 2301 "cplus.met"

#line 2301 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2301 "cplus.met"
    _funcLevel--;
#line 2301 "cplus.met"
    return((PPTREE) -1) ;
#line 2301 "cplus.met"

#line 2301 "cplus.met"
declarator_ret :
#line 2301 "cplus.met"
    
#line 2301 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2301 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2301 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2301 "cplus.met"
    return _retValue ;
#line 2301 "cplus.met"
}
#line 2301 "cplus.met"

#line 2301 "cplus.met"
#line 2191 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2191 "cplus.met"
{
#line 2191 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2191 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2191 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2191 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2191 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2191 "cplus.met"
#line 2191 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2191 "cplus.met"
#line 2193 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2193 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2193 "cplus.met"
#line 2194 "cplus.met"
        
#line 2194 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2194 "cplus.met"
        goto declarator_follow_exit;
#line 2194 "cplus.met"
#line 2194 "cplus.met"
    }
#line 2194 "cplus.met"
#line 2195 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2195 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2195 "cplus.met"
#line 2196 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2196 "cplus.met"
        switch( lexEl.Value) {
#line 2196 "cplus.met"
#line 2199 "cplus.met"
            case COUV : 
#line 2199 "cplus.met"
                tokenAhead = 0 ;
#line 2199 "cplus.met"
                CommTerm();
#line 2199 "cplus.met"
#line 2198 "cplus.met"
#line 2199 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 59, cplus)){
#line 2199 "cplus.met"
#line 2200 "cplus.met"
                    {
#line 2200 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2200 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2200 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2200 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2200 "cplus.met"
                        retTree=_ptRes0;
#line 2200 "cplus.met"
                    }
#line 2200 "cplus.met"
                } else {
#line 2200 "cplus.met"
#line 2202 "cplus.met"
                    {
#line 2202 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2202 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2202 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2202 "cplus.met"
                        retTree=_ptRes0;
#line 2202 "cplus.met"
                    }
#line 2202 "cplus.met"
                }
#line 2202 "cplus.met"
#line 2203 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2203 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2203 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2203 "cplus.met"
                } else {
#line 2203 "cplus.met"
                    tokenAhead = 0 ;
#line 2203 "cplus.met"
                }
#line 2203 "cplus.met"
#line 2203 "cplus.met"
                break;
#line 2203 "cplus.met"
#line 2210 "cplus.met"
            case POUV : 
#line 2210 "cplus.met"
#line 2206 "cplus.met"
#line 2209 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 11, cplus)){
#line 2209 "cplus.met"
#line 2211 "cplus.met"
#line 2212 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2212 "cplus.met"
#line 2213 "cplus.met"
                    {
#line 2213 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2213 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 119, cplus))== (PPTREE) -1 ) {
#line 2213 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2213 "cplus.met"
                        }
#line 2213 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2213 "cplus.met"
                    }
#line 2213 "cplus.met"
#line 2214 "cplus.met"
                    retTree = valTree ;
#line 2214 "cplus.met"
#line 2214 "cplus.met"
#line 2214 "cplus.met"
                } else {
#line 2214 "cplus.met"
#line 2217 "cplus.met"
                    {
#line 2217 "cplus.met"
                        _retValue = retTree ;
#line 2217 "cplus.met"
                        goto declarator_follow_ret;
#line 2217 "cplus.met"
                        
#line 2217 "cplus.met"
                    }
#line 2217 "cplus.met"
                }
#line 2217 "cplus.met"
#line 2217 "cplus.met"
                break;
#line 2217 "cplus.met"
            default :
#line 2217 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2217 "cplus.met"
                break;
#line 2217 "cplus.met"
        }
#line 2217 "cplus.met"
    } 
#line 2217 "cplus.met"
#line 2220 "cplus.met"
    {
#line 2220 "cplus.met"
        _retValue = retTree ;
#line 2220 "cplus.met"
        goto declarator_follow_ret;
#line 2220 "cplus.met"
        
#line 2220 "cplus.met"
    }
#line 2220 "cplus.met"
#line 2220 "cplus.met"
#line 2220 "cplus.met"

#line 2221 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2221 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2221 "cplus.met"
return((PPTREE) 0);
#line 2221 "cplus.met"

#line 2221 "cplus.met"
declarator_follow_exit :
#line 2221 "cplus.met"

#line 2221 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2221 "cplus.met"
    _funcLevel--;
#line 2221 "cplus.met"
    return((PPTREE) -1) ;
#line 2221 "cplus.met"

#line 2221 "cplus.met"
declarator_follow_ret :
#line 2221 "cplus.met"
    
#line 2221 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2221 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2221 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2221 "cplus.met"
    return _retValue ;
#line 2221 "cplus.met"
}
#line 2221 "cplus.met"

#line 2221 "cplus.met"
#line 1516 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1516 "cplus.met"
{
#line 1516 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1516 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1516 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1516 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1516 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1516 "cplus.met"
#line 1516 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1516 "cplus.met"
#line 1516 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1516 "cplus.met"
#line 1516 "cplus.met"
    _addlist1 = list ;
#line 1516 "cplus.met"
#line 1518 "cplus.met"
    do {
#line 1518 "cplus.met"
#line 1519 "cplus.met"
        {
#line 1519 "cplus.met"
            PPTREE _ptTree0=0;
#line 1519 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1519 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1519 "cplus.met"
            }
#line 1519 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1519 "cplus.met"
        }
#line 1519 "cplus.met"
#line 1519 "cplus.met"
        if (list){
#line 1519 "cplus.met"
#line 1519 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1519 "cplus.met"
        } else {
#line 1519 "cplus.met"
#line 1519 "cplus.met"
            list = _addlist1 ;
#line 1519 "cplus.met"
        }
#line 1519 "cplus.met"
#line 1519 "cplus.met"
#line 1520 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1520 "cplus.met"
#line 1521 "cplus.met"
    {
#line 1521 "cplus.met"
        _retValue = list ;
#line 1521 "cplus.met"
        goto declarator_list_ret;
#line 1521 "cplus.met"
        
#line 1521 "cplus.met"
    }
#line 1521 "cplus.met"
#line 1521 "cplus.met"
#line 1521 "cplus.met"

#line 1522 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1522 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1522 "cplus.met"
return((PPTREE) 0);
#line 1522 "cplus.met"

#line 1522 "cplus.met"
declarator_list_exit :
#line 1522 "cplus.met"

#line 1522 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1522 "cplus.met"
    _funcLevel--;
#line 1522 "cplus.met"
    return((PPTREE) -1) ;
#line 1522 "cplus.met"

#line 1522 "cplus.met"
declarator_list_ret :
#line 1522 "cplus.met"
    
#line 1522 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1522 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1522 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1522 "cplus.met"
    return _retValue ;
#line 1522 "cplus.met"
}
#line 1522 "cplus.met"

#line 1522 "cplus.met"
#line 1507 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1507 "cplus.met"
{
#line 1507 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1507 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1507 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1507 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1507 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1507 "cplus.met"
#line 1507 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1507 "cplus.met"
#line 1507 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1507 "cplus.met"
#line 1507 "cplus.met"
    _addlist1 = list ;
#line 1507 "cplus.met"
#line 1509 "cplus.met"
    do {
#line 1509 "cplus.met"
#line 1510 "cplus.met"
        {
#line 1510 "cplus.met"
            PPTREE _ptTree0=0;
#line 1510 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 48, cplus))== (PPTREE) -1 ) {
#line 1510 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1510 "cplus.met"
            }
#line 1510 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1510 "cplus.met"
        }
#line 1510 "cplus.met"
#line 1510 "cplus.met"
        if (list){
#line 1510 "cplus.met"
#line 1510 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1510 "cplus.met"
        } else {
#line 1510 "cplus.met"
#line 1510 "cplus.met"
            list = _addlist1 ;
#line 1510 "cplus.met"
        }
#line 1510 "cplus.met"
#line 1510 "cplus.met"
#line 1511 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1511 "cplus.met"
#line 1512 "cplus.met"
    {
#line 1512 "cplus.met"
        _retValue = list ;
#line 1512 "cplus.met"
        goto declarator_list_init_ret;
#line 1512 "cplus.met"
        
#line 1512 "cplus.met"
    }
#line 1512 "cplus.met"
#line 1512 "cplus.met"
#line 1512 "cplus.met"

#line 1513 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1513 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1513 "cplus.met"
return((PPTREE) 0);
#line 1513 "cplus.met"

#line 1513 "cplus.met"
declarator_list_init_exit :
#line 1513 "cplus.met"

#line 1513 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1513 "cplus.met"
    _funcLevel--;
#line 1513 "cplus.met"
    return((PPTREE) -1) ;
#line 1513 "cplus.met"

#line 1513 "cplus.met"
declarator_list_init_ret :
#line 1513 "cplus.met"
    
#line 1513 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1513 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1513 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1513 "cplus.met"
    return _retValue ;
#line 1513 "cplus.met"
}
#line 1513 "cplus.met"

#line 1513 "cplus.met"
#line 1492 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1492 "cplus.met"
{
#line 1492 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1492 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1492 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1492 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1492 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1492 "cplus.met"
#line 1492 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1492 "cplus.met"
#line 1494 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1494 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1494 "cplus.met"
    }
#line 1494 "cplus.met"
#line 1495 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1495 "cplus.met"
    switch( lexEl.Value) {
#line 1495 "cplus.met"
#line 1496 "cplus.met"
        case EGAL : 
#line 1496 "cplus.met"
            tokenAhead = 0 ;
#line 1496 "cplus.met"
            CommTerm();
#line 1496 "cplus.met"
#line 1496 "cplus.met"
            {
#line 1496 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1496 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1496 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1496 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1496 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1496 "cplus.met"
                }
#line 1496 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1496 "cplus.met"
                valTree=_ptRes0;
#line 1496 "cplus.met"
            }
#line 1496 "cplus.met"
            break;
#line 1496 "cplus.met"
#line 1499 "cplus.met"
        case POUV : 
#line 1499 "cplus.met"
            tokenAhead = 0 ;
#line 1499 "cplus.met"
            CommTerm();
#line 1499 "cplus.met"
#line 1498 "cplus.met"
#line 1499 "cplus.met"
            {
#line 1499 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1499 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1499 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1499 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1499 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1499 "cplus.met"
                }
#line 1499 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1499 "cplus.met"
                valTree=_ptRes0;
#line 1499 "cplus.met"
            }
#line 1499 "cplus.met"
#line 1500 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1500 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1500 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1500 "cplus.met"
            } else {
#line 1500 "cplus.met"
                tokenAhead = 0 ;
#line 1500 "cplus.met"
            }
#line 1500 "cplus.met"
#line 1500 "cplus.met"
            break;
#line 1500 "cplus.met"
#line 1500 "cplus.met"
        default : 
#line 1500 "cplus.met"
#line 1500 "cplus.met"
            break;
#line 1500 "cplus.met"
    }
#line 1500 "cplus.met"
#line 1504 "cplus.met"
    {
#line 1504 "cplus.met"
        _retValue = valTree ;
#line 1504 "cplus.met"
        goto declarator_value_ret;
#line 1504 "cplus.met"
        
#line 1504 "cplus.met"
    }
#line 1504 "cplus.met"
#line 1504 "cplus.met"
#line 1504 "cplus.met"

#line 1505 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1505 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1505 "cplus.met"
return((PPTREE) 0);
#line 1505 "cplus.met"

#line 1505 "cplus.met"
declarator_value_exit :
#line 1505 "cplus.met"

#line 1505 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1505 "cplus.met"
    _funcLevel--;
#line 1505 "cplus.met"
    return((PPTREE) -1) ;
#line 1505 "cplus.met"

#line 1505 "cplus.met"
declarator_value_ret :
#line 1505 "cplus.met"
    
#line 1505 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1505 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1505 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1505 "cplus.met"
    return _retValue ;
#line 1505 "cplus.met"
}
#line 1505 "cplus.met"

#line 1505 "cplus.met"
#line 1446 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1446 "cplus.met"
{
#line 1446 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1446 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1446 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1446 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1446 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1446 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1446 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1446 "cplus.met"
#line 1446 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1446 "cplus.met"
#line 1446 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1446 "cplus.met"
#line 1448 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1448 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1448 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1448 "cplus.met"
    } else {
#line 1448 "cplus.met"
        tokenAhead = 0 ;
#line 1448 "cplus.met"
    }
#line 1448 "cplus.met"
#line 1449 "cplus.met"
    {
#line 1449 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1449 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1449 "cplus.met"
        {
#line 1449 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1449 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1449 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1449 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1449 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
#line 1449 "cplus.met"
            } else {
#line 1449 "cplus.met"
                tokenAhead = 0 ;
#line 1449 "cplus.met"
            }
#line 1449 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1449 "cplus.met"
            _ptTree0=_ptRes1;
#line 1449 "cplus.met"
        }
#line 1449 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1449 "cplus.met"
        retTree=_ptRes0;
#line 1449 "cplus.met"
    }
#line 1449 "cplus.met"
#line 1450 "cplus.met"
    {
#line 1450 "cplus.met"
        keepCarriage = 1 ;
#line 1450 "cplus.met"
#line 1451 "cplus.met"
#line 1452 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1452 "cplus.met"
#line 1453 "cplus.met"
            {
#line 1453 "cplus.met"
                PPTREE _ptTree0=0;
#line 1453 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 102, cplus))== (PPTREE) -1 ) {
#line 1453 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1453 "cplus.met"
                }
#line 1453 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1453 "cplus.met"
            }
#line 1453 "cplus.met"
#line 1453 "cplus.met"
        }
#line 1453 "cplus.met"
#line 1454 "cplus.met"
        ExtUnputBuf();
#line 1454 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1454 "cplus.met"
            NextChar() ;
#line 1454 "cplus.met"
        ptStockBuf = -1;
#line 1454 "cplus.met"
        lexEl.Erase();
#line 1454 "cplus.met"
        tokenAhead = 0;
#line 1454 "cplus.met"
        oldLine=line,oldCol=col;
#line 1454 "cplus.met"
        if ( !lexCallLex) {
#line 1454 "cplus.met"
            PUT_COORD_CALL;
#line 1454 "cplus.met"
        }
#line 1454 "cplus.met"
#line 1455 "cplus.met"
        {
#line 1455 "cplus.met"
            keepAll = 1 ;
#line 1455 "cplus.met"
#line 1456 "cplus.met"
#line 1456 "cplus.met"
            _addlist1 = listDefine ;
#line 1456 "cplus.met"
#line 1457 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1457 "cplus.met"
#line 1458 "cplus.met"
#line 1458 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1458 "cplus.met"
#line 1458 "cplus.met"
                if (listDefine){
#line 1458 "cplus.met"
#line 1458 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1458 "cplus.met"
                } else {
#line 1458 "cplus.met"
#line 1458 "cplus.met"
                    listDefine = _addlist1 ;
#line 1458 "cplus.met"
                }
#line 1458 "cplus.met"
            } 
#line 1458 "cplus.met"
#line 1459 "cplus.met"
            {
#line 1459 "cplus.met"
                PPTREE _ptTree0=0;
#line 1459 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1459 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1459 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1459 "cplus.met"
                } else {
#line 1459 "cplus.met"
                    tokenAhead = 0 ;
#line 1459 "cplus.met"
                }
#line 1459 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1459 "cplus.met"
            }
#line 1459 "cplus.met"
#line 1459 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1459 "cplus.met"
        }
#line 1459 "cplus.met"
#line 1459 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1459 "cplus.met"
    }
#line 1459 "cplus.met"
#line 1462 "cplus.met"
    {
#line 1462 "cplus.met"
        PPTREE _ptTree0=0;
#line 1462 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1462 "cplus.met"
        _retValue =_ptTree0;
#line 1462 "cplus.met"
        goto define_dir_ret;
#line 1462 "cplus.met"
    }
#line 1462 "cplus.met"
#line 1462 "cplus.met"
#line 1462 "cplus.met"

#line 1463 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1463 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1463 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1463 "cplus.met"
keepAll =  _oldkeepAll;
#line 1463 "cplus.met"
return((PPTREE) 0);
#line 1463 "cplus.met"

#line 1463 "cplus.met"
define_dir_exit :
#line 1463 "cplus.met"

#line 1463 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1463 "cplus.met"
    _funcLevel--;
#line 1463 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1463 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1463 "cplus.met"
    return((PPTREE) -1) ;
#line 1463 "cplus.met"

#line 1463 "cplus.met"
define_dir_ret :
#line 1463 "cplus.met"
    
#line 1463 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1463 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1463 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1463 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1463 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1463 "cplus.met"
    return _retValue ;
#line 1463 "cplus.met"
}
#line 1463 "cplus.met"

#line 1463 "cplus.met"
#line 1267 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1267 "cplus.met"
{
#line 1267 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1267 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1267 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1267 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1267 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1267 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1267 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1267 "cplus.met"
#line 1267 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1267 "cplus.met"
#line 1267 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1267 "cplus.met"
#line 1269 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1269 "cplus.met"
    switch( lexEl.Value) {
#line 1269 "cplus.met"
#line 1270 "cplus.met"
        case META : 
#line 1270 "cplus.met"
        case DEFINE_DIR : 
#line 1270 "cplus.met"
#line 1270 "cplus.met"
            {
#line 1270 "cplus.met"
                PPTREE _ptTree0=0;
#line 1270 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1270 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1270 "cplus.met"
                }
#line 1270 "cplus.met"
                _retValue =_ptTree0;
#line 1270 "cplus.met"
                goto directive_ret;
#line 1270 "cplus.met"
            }
#line 1270 "cplus.met"
            break;
#line 1270 "cplus.met"
#line 1271 "cplus.met"
        case INCLUDE_DIR : 
#line 1271 "cplus.met"
#line 1271 "cplus.met"
            {
#line 1271 "cplus.met"
                PPTREE _ptTree0=0;
#line 1271 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 76, cplus))== (PPTREE) -1 ) {
#line 1271 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1271 "cplus.met"
                }
#line 1271 "cplus.met"
                _retValue =_ptTree0;
#line 1271 "cplus.met"
                goto directive_ret;
#line 1271 "cplus.met"
            }
#line 1271 "cplus.met"
            break;
#line 1271 "cplus.met"
#line 1272 "cplus.met"
        case LINE_DIR : 
#line 1272 "cplus.met"
            tokenAhead = 0 ;
#line 1272 "cplus.met"
            CommTerm();
#line 1272 "cplus.met"
#line 1273 "cplus.met"
#line 1274 "cplus.met"
            {
#line 1274 "cplus.met"
                keepCarriage = 1 ;
#line 1274 "cplus.met"
#line 1275 "cplus.met"
#line 1276 "cplus.met"
                {
#line 1276 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1276 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1276 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1276 "cplus.met"
                        MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1276 "cplus.met"
                    }
#line 1276 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1276 "cplus.met"
                    retTree=_ptRes0;
#line 1276 "cplus.met"
                }
#line 1276 "cplus.met"
#line 1277 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1277 "cplus.met"
#line 1278 "cplus.met"
                    {
#line 1278 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1278 "cplus.met"
                        {
#line 1278 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1278 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1278 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1278 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1278 "cplus.met"
                        }
#line 1278 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1278 "cplus.met"
                    }
#line 1278 "cplus.met"
#line 1278 "cplus.met"
                }
#line 1278 "cplus.met"
#line 1279 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1279 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1279 "cplus.met"
                    MulFreeTree(4,_addlist1,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1279 "cplus.met"
                } else {
#line 1279 "cplus.met"
                    tokenAhead = 0 ;
#line 1279 "cplus.met"
                }
#line 1279 "cplus.met"
#line 1279 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1279 "cplus.met"
            }
#line 1279 "cplus.met"
#line 1281 "cplus.met"
            {
#line 1281 "cplus.met"
                _retValue = retTree ;
#line 1281 "cplus.met"
                goto directive_ret;
#line 1281 "cplus.met"
                
#line 1281 "cplus.met"
            }
#line 1281 "cplus.met"
#line 1281 "cplus.met"
            break;
#line 1281 "cplus.met"
#line 1283 "cplus.met"
        case UNDEF_DIR : 
#line 1283 "cplus.met"
            tokenAhead = 0 ;
#line 1283 "cplus.met"
            CommTerm();
#line 1283 "cplus.met"
#line 1283 "cplus.met"
            {
#line 1283 "cplus.met"
                PPTREE _ptTree0=0;
#line 1283 "cplus.met"
                {
#line 1283 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1283 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1283 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1283 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1283 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,_addlist1,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1283 "cplus.met"
                    } else {
#line 1283 "cplus.met"
                        tokenAhead = 0 ;
#line 1283 "cplus.met"
                    }
#line 1283 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1283 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1283 "cplus.met"
                }
#line 1283 "cplus.met"
                _retValue =_ptTree0;
#line 1283 "cplus.met"
                goto directive_ret;
#line 1283 "cplus.met"
            }
#line 1283 "cplus.met"
            break;
#line 1283 "cplus.met"
#line 1284 "cplus.met"
        case ERROR_DIR : 
#line 1284 "cplus.met"
            tokenAhead = 0 ;
#line 1284 "cplus.met"
            CommTerm();
#line 1284 "cplus.met"
#line 1284 "cplus.met"
            {
#line 1284 "cplus.met"
                PPTREE _ptTree0=0;
#line 1284 "cplus.met"
                {
#line 1284 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1284 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1284 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1284 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1284 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,_addlist1,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1284 "cplus.met"
                    } else {
#line 1284 "cplus.met"
                        tokenAhead = 0 ;
#line 1284 "cplus.met"
                    }
#line 1284 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1284 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1284 "cplus.met"
                }
#line 1284 "cplus.met"
                _retValue =_ptTree0;
#line 1284 "cplus.met"
                goto directive_ret;
#line 1284 "cplus.met"
            }
#line 1284 "cplus.met"
            break;
#line 1284 "cplus.met"
#line 1285 "cplus.met"
        case PRAGMA_DIR : 
#line 1285 "cplus.met"
            tokenAhead = 0 ;
#line 1285 "cplus.met"
            CommTerm();
#line 1285 "cplus.met"
#line 1286 "cplus.met"
#line 1287 "cplus.met"
#line 1288 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1288 "cplus.met"
#line 1289 "cplus.met"
#line 1290 "cplus.met"
                {
#line 1290 "cplus.met"
                    keepCarriage = 1 ;
#line 1290 "cplus.met"
#line 1291 "cplus.met"
#line 1292 "cplus.met"
                    {
#line 1292 "cplus.met"
                        keepAll = 1 ;
#line 1292 "cplus.met"
#line 1293 "cplus.met"
#line 1294 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1294 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1294 "cplus.met"
                            MulFreeTree(4,_addlist1,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1294 "cplus.met"
                        } else {
#line 1294 "cplus.met"
                            tokenAhead = 0 ;
#line 1294 "cplus.met"
                        }
#line 1294 "cplus.met"
#line 1294 "cplus.met"
                        _addlist1 = list ;
#line 1294 "cplus.met"
#line 1295 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 51, cplus))) { 
#line 1295 "cplus.met"
#line 1296 "cplus.met"
#line 1296 "cplus.met"
                            {
#line 1296 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1296 "cplus.met"
                                {
#line 1296 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1296 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1296 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1296 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1296 "cplus.met"
                                        MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,_addlist1,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1296 "cplus.met"
                                    } else {
#line 1296 "cplus.met"
                                        tokenAhead = 0 ;
#line 1296 "cplus.met"
                                    }
#line 1296 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1296 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1296 "cplus.met"
                                }
#line 1296 "cplus.met"
                                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1296 "cplus.met"
                            }
#line 1296 "cplus.met"
#line 1296 "cplus.met"
                            if (list){
#line 1296 "cplus.met"
#line 1296 "cplus.met"
                                _addlist1 = SonTree (_addlist1 ,2 );
#line 1296 "cplus.met"
                            } else {
#line 1296 "cplus.met"
#line 1296 "cplus.met"
                                list = _addlist1 ;
#line 1296 "cplus.met"
                            }
#line 1296 "cplus.met"
                        } 
#line 1296 "cplus.met"
#line 1297 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1297 "cplus.met"
                            MulFreeTree(4,_addlist1,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1297 "cplus.met"
                        }
#line 1297 "cplus.met"
#line 1297 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1297 "cplus.met"
                    }
#line 1297 "cplus.met"
#line 1297 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1297 "cplus.met"
                }
#line 1297 "cplus.met"
#line 1301 "cplus.met"
                 tokenAhead = 0;
#line 1301 "cplus.met"
#line 1303 "cplus.met"
                {
#line 1303 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1303 "cplus.met"
                    {
#line 1303 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1303 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1303 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1303 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1303 "cplus.met"
                    }
#line 1303 "cplus.met"
                    _retValue =_ptTree0;
#line 1303 "cplus.met"
                    goto directive_ret;
#line 1303 "cplus.met"
                }
#line 1303 "cplus.met"
#line 1303 "cplus.met"
            } else 
#line 1303 "cplus.met"
#line 1305 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1305 "cplus.met"
#line 1306 "cplus.met"
#line 1307 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1307 "cplus.met"
                switch( lexEl.Value) {
#line 1307 "cplus.met"
#line 1308 "cplus.met"
                    case META : 
#line 1308 "cplus.met"
                    case PRAGMA_TAB : 
#line 1308 "cplus.met"
                        tokenAhead = 0 ;
#line 1308 "cplus.met"
                        CommTerm();
#line 1308 "cplus.met"
#line 1309 "cplus.met"
#line 1310 "cplus.met"
                        {
#line 1310 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1310 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1310 "cplus.met"
                            {
#line 1310 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1310 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1310 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1310 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1310 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1310 "cplus.met"
                                } else {
#line 1310 "cplus.met"
                                    tokenAhead = 0 ;
#line 1310 "cplus.met"
                                }
#line 1310 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1310 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1310 "cplus.met"
                            }
#line 1310 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1310 "cplus.met"
                            retTree=_ptRes0;
#line 1310 "cplus.met"
                        }
#line 1310 "cplus.met"
#line 1313 "cplus.met"
                        AnalyzeTab (retTree );
#line 1313 "cplus.met"
#line 1314 "cplus.met"
                        {
#line 1314 "cplus.met"
                            _retValue = retTree ;
#line 1314 "cplus.met"
                            goto directive_ret;
#line 1314 "cplus.met"
                            
#line 1314 "cplus.met"
                        }
#line 1314 "cplus.met"
#line 1314 "cplus.met"
                        break;
#line 1314 "cplus.met"
#line 1316 "cplus.met"
                    case PRAGMA_MODE : 
#line 1316 "cplus.met"
                        tokenAhead = 0 ;
#line 1316 "cplus.met"
                        CommTerm();
#line 1316 "cplus.met"
#line 1317 "cplus.met"
#line 1318 "cplus.met"
                        {
#line 1318 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1318 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1318 "cplus.met"
                            {
#line 1318 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1318 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1318 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1318 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1318 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1318 "cplus.met"
                                } else {
#line 1318 "cplus.met"
                                    tokenAhead = 0 ;
#line 1318 "cplus.met"
                                }
#line 1318 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1318 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1318 "cplus.met"
                            }
#line 1318 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1318 "cplus.met"
                            retTree=_ptRes0;
#line 1318 "cplus.met"
                        }
#line 1318 "cplus.met"
#line 1321 "cplus.met"
                        AnalyzeMode (retTree );
#line 1321 "cplus.met"
#line 1322 "cplus.met"
                        {
#line 1322 "cplus.met"
                            _retValue = retTree ;
#line 1322 "cplus.met"
                            goto directive_ret;
#line 1322 "cplus.met"
                            
#line 1322 "cplus.met"
                        }
#line 1322 "cplus.met"
#line 1322 "cplus.met"
                        break;
#line 1322 "cplus.met"
#line 1324 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1324 "cplus.met"
                        tokenAhead = 0 ;
#line 1324 "cplus.met"
                        CommTerm();
#line 1324 "cplus.met"
#line 1325 "cplus.met"
#line 1326 "cplus.met"
                        {
#line 1326 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1326 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1326 "cplus.met"
                            {
#line 1326 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1326 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1326 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1326 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1326 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1326 "cplus.met"
                                } else {
#line 1326 "cplus.met"
                                    tokenAhead = 0 ;
#line 1326 "cplus.met"
                                }
#line 1326 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1326 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1326 "cplus.met"
                            }
#line 1326 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1326 "cplus.met"
                            retTree=_ptRes0;
#line 1326 "cplus.met"
                        }
#line 1326 "cplus.met"
#line 1329 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1329 "cplus.met"
#line 1330 "cplus.met"
                        {
#line 1330 "cplus.met"
                            _retValue = retTree ;
#line 1330 "cplus.met"
                            goto directive_ret;
#line 1330 "cplus.met"
                            
#line 1330 "cplus.met"
                        }
#line 1330 "cplus.met"
#line 1330 "cplus.met"
                        break;
#line 1330 "cplus.met"
#line 1332 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
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
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1334 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1334 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1334 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
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
#line 1338 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1338 "cplus.met"
#line 1339 "cplus.met"
                        {
#line 1339 "cplus.met"
                            _retValue = retTree ;
#line 1339 "cplus.met"
                            goto directive_ret;
#line 1339 "cplus.met"
                            
#line 1339 "cplus.met"
                        }
#line 1339 "cplus.met"
#line 1339 "cplus.met"
                        break;
#line 1339 "cplus.met"
#line 1341 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1341 "cplus.met"
                        tokenAhead = 0 ;
#line 1341 "cplus.met"
                        CommTerm();
#line 1341 "cplus.met"
#line 1342 "cplus.met"
#line 1343 "cplus.met"
                        {
#line 1343 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1343 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1343 "cplus.met"
                            {
#line 1343 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1343 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1343 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1343 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1343 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1343 "cplus.met"
                                } else {
#line 1343 "cplus.met"
                                    tokenAhead = 0 ;
#line 1343 "cplus.met"
                                }
#line 1343 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1343 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1343 "cplus.met"
                            }
#line 1343 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1343 "cplus.met"
                            retTree=_ptRes0;
#line 1343 "cplus.met"
                        }
#line 1343 "cplus.met"
#line 1346 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1346 "cplus.met"
#line 1347 "cplus.met"
                        {
#line 1347 "cplus.met"
                            _retValue = retTree ;
#line 1347 "cplus.met"
                            goto directive_ret;
#line 1347 "cplus.met"
                            
#line 1347 "cplus.met"
                        }
#line 1347 "cplus.met"
#line 1347 "cplus.met"
                        break;
#line 1347 "cplus.met"
#line 1349 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1349 "cplus.met"
                        tokenAhead = 0 ;
#line 1349 "cplus.met"
                        CommTerm();
#line 1349 "cplus.met"
#line 1350 "cplus.met"
#line 1351 "cplus.met"
                        {
#line 1351 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1351 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1351 "cplus.met"
                            {
#line 1351 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1351 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1351 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1351 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1351 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1351 "cplus.met"
                                } else {
#line 1351 "cplus.met"
                                    tokenAhead = 0 ;
#line 1351 "cplus.met"
                                }
#line 1351 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1351 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1351 "cplus.met"
                            }
#line 1351 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1351 "cplus.met"
                            retTree=_ptRes0;
#line 1351 "cplus.met"
                        }
#line 1351 "cplus.met"
#line 1354 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1354 "cplus.met"
#line 1355 "cplus.met"
                        {
#line 1355 "cplus.met"
                            _retValue = retTree ;
#line 1355 "cplus.met"
                            goto directive_ret;
#line 1355 "cplus.met"
                            
#line 1355 "cplus.met"
                        }
#line 1355 "cplus.met"
#line 1355 "cplus.met"
                        break;
#line 1355 "cplus.met"
#line 1357 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1357 "cplus.met"
                        tokenAhead = 0 ;
#line 1357 "cplus.met"
                        CommTerm();
#line 1357 "cplus.met"
#line 1358 "cplus.met"
#line 1359 "cplus.met"
                        {
#line 1359 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1359 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1359 "cplus.met"
                            {
#line 1359 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1359 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1359 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1359 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1359 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1359 "cplus.met"
                                } else {
#line 1359 "cplus.met"
                                    tokenAhead = 0 ;
#line 1359 "cplus.met"
                                }
#line 1359 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1359 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1359 "cplus.met"
                            }
#line 1359 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1359 "cplus.met"
                            retTree=_ptRes0;
#line 1359 "cplus.met"
                        }
#line 1359 "cplus.met"
#line 1362 "cplus.met"
                        AnalyzeBraceAlign (retTree );
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
                    case PRAGMA_MARGIN : 
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
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1367 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1367 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1367 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
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
                        AnalyzeMargin (retTree );
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
                    case PRAGMA_COMMENT_START : 
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
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1375 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1375 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1375 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
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
                        AnalyzeComment (retTree );
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
                    case PRAGMA_COMMENT_MIDDLE : 
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
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1383 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1383 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1383 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
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
                        AnalyzeComment (retTree );
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
                    case PRAGMA_COMMENT_END : 
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
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1391 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1391 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1391 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
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
                        AnalyzeComment (retTree );
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
                    case PRAGMA_COMMENT_PLUS : 
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
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1399 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1399 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1399 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
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
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
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
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1407 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1407 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1407 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
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
#line 1411 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1411 "cplus.met"
#line 1412 "cplus.met"
                        {
#line 1412 "cplus.met"
                            _retValue = retTree ;
#line 1412 "cplus.met"
                            goto directive_ret;
#line 1412 "cplus.met"
                            
#line 1412 "cplus.met"
                        }
#line 1412 "cplus.met"
#line 1412 "cplus.met"
                        break;
#line 1412 "cplus.met"
#line 1414 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1414 "cplus.met"
                        tokenAhead = 0 ;
#line 1414 "cplus.met"
                        CommTerm();
#line 1414 "cplus.met"
#line 1415 "cplus.met"
#line 1416 "cplus.met"
                        {
#line 1416 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1416 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1416 "cplus.met"
                            {
#line 1416 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1416 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1416 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1416 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1416 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1416 "cplus.met"
                                } else {
#line 1416 "cplus.met"
                                    tokenAhead = 0 ;
#line 1416 "cplus.met"
                                }
#line 1416 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1416 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1416 "cplus.met"
                            }
#line 1416 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1416 "cplus.met"
                            retTree=_ptRes0;
#line 1416 "cplus.met"
                        }
#line 1416 "cplus.met"
#line 1419 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1419 "cplus.met"
#line 1420 "cplus.met"
                        {
#line 1420 "cplus.met"
                            _retValue = retTree ;
#line 1420 "cplus.met"
                            goto directive_ret;
#line 1420 "cplus.met"
                            
#line 1420 "cplus.met"
                        }
#line 1420 "cplus.met"
#line 1420 "cplus.met"
                        break;
#line 1420 "cplus.met"
#line 1422 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1422 "cplus.met"
                        tokenAhead = 0 ;
#line 1422 "cplus.met"
                        CommTerm();
#line 1422 "cplus.met"
#line 1423 "cplus.met"
#line 1424 "cplus.met"
                        {
#line 1424 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1424 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1424 "cplus.met"
                            {
#line 1424 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1424 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1424 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1424 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1424 "cplus.met"
                                    MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1424 "cplus.met"
                                } else {
#line 1424 "cplus.met"
                                    tokenAhead = 0 ;
#line 1424 "cplus.met"
                                }
#line 1424 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1424 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1424 "cplus.met"
                            }
#line 1424 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1424 "cplus.met"
                            retTree=_ptRes0;
#line 1424 "cplus.met"
                        }
#line 1424 "cplus.met"
#line 1427 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1427 "cplus.met"
#line 1428 "cplus.met"
                        {
#line 1428 "cplus.met"
                            _retValue = retTree ;
#line 1428 "cplus.met"
                            goto directive_ret;
#line 1428 "cplus.met"
                            
#line 1428 "cplus.met"
                        }
#line 1428 "cplus.met"
#line 1428 "cplus.met"
                        break;
#line 1428 "cplus.met"
#line 1430 "cplus.met"
                    default : 
#line 1430 "cplus.met"
#line 1430 "cplus.met"
                        {
#line 1430 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1430 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 1430 "cplus.met"
                                MulFreeTree(5,_ptTree0,_addlist1,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1430 "cplus.met"
                            }
#line 1430 "cplus.met"
                            _retValue =_ptTree0;
#line 1430 "cplus.met"
                            goto directive_ret;
#line 1430 "cplus.met"
                        }
#line 1430 "cplus.met"
                        break;
#line 1430 "cplus.met"
                }
#line 1430 "cplus.met"
#line 1430 "cplus.met"
            } else 
#line 1430 "cplus.met"
#line 1435 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 120, cplus))){
#line 1435 "cplus.met"
#line 1434 "cplus.met"
#line 1435 "cplus.met"
                {
#line 1435 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1435 "cplus.met"
                    {
#line 1435 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1435 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1435 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1435 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1435 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptTree0,_addlist1,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
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
                    _retValue =_ptTree0;
#line 1435 "cplus.met"
                    goto directive_ret;
#line 1435 "cplus.met"
                }
#line 1435 "cplus.met"
#line 1435 "cplus.met"
            } else 
#line 1435 "cplus.met"
#line 1439 "cplus.met"
            if (1) {
#line 1439 "cplus.met"
#line 1438 "cplus.met"
#line 1439 "cplus.met"
                {
#line 1439 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1439 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 1439 "cplus.met"
                        MulFreeTree(5,_ptTree0,_addlist1,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1439 "cplus.met"
                    }
#line 1439 "cplus.met"
                    _retValue =_ptTree0;
#line 1439 "cplus.met"
                    goto directive_ret;
#line 1439 "cplus.met"
                }
#line 1439 "cplus.met"
#line 1439 "cplus.met"
            } else 
#line 1439 "cplus.met"
             ;
#line 1439 "cplus.met"
#line 1439 "cplus.met"
            break;
#line 1439 "cplus.met"
        default :
#line 1439 "cplus.met"
            MulFreeTree(4,_addlist1,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1439 "cplus.met"
            break;
#line 1439 "cplus.met"
    }
#line 1439 "cplus.met"
#line 1439 "cplus.met"
#line 1443 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1443 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1443 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1443 "cplus.met"
keepAll =  _oldkeepAll;
#line 1443 "cplus.met"
return((PPTREE) 0);
#line 1443 "cplus.met"

#line 1443 "cplus.met"
directive_exit :
#line 1443 "cplus.met"

#line 1443 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1443 "cplus.met"
    _funcLevel--;
#line 1443 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1443 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1443 "cplus.met"
    return((PPTREE) -1) ;
#line 1443 "cplus.met"

#line 1443 "cplus.met"
directive_ret :
#line 1443 "cplus.met"
    
#line 1443 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1443 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1443 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1443 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1443 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1443 "cplus.met"
    return _retValue ;
#line 1443 "cplus.met"
}
#line 1443 "cplus.met"

#line 1443 "cplus.met"
