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
                _ptRes0= MakeTree(CTOR_INIT, 3);
#line 3204 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
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
            switch( lexEl.Value) {
#line 3205 "cplus.met"
#line 3208 "cplus.met"
                case POUV : 
#line 3208 "cplus.met"
#line 3207 "cplus.met"
#line 3208 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3208 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3208 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3208 "cplus.met"
                    } else {
#line 3208 "cplus.met"
                        tokenAhead = 0 ;
#line 3208 "cplus.met"
                    }
#line 3208 "cplus.met"
#line 3209 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 63, cplus)){
#line 3209 "cplus.met"
#line 3210 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3210 "cplus.met"
#line 3210 "cplus.met"
                    }
#line 3210 "cplus.met"
#line 3211 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3211 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3211 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,")")
#line 3211 "cplus.met"
                    } else {
#line 3211 "cplus.met"
                        tokenAhead = 0 ;
#line 3211 "cplus.met"
                    }
#line 3211 "cplus.met"
#line 3211 "cplus.met"
                    break;
#line 3211 "cplus.met"
#line 3215 "cplus.met"
                default : 
#line 3215 "cplus.met"
#line 3214 "cplus.met"
#line 3215 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3215 "cplus.met"
                    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3215 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"{")
#line 3215 "cplus.met"
                    } else {
#line 3215 "cplus.met"
                        tokenAhead = 0 ;
#line 3215 "cplus.met"
                    }
#line 3215 "cplus.met"
#line 3216 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 63, cplus)){
#line 3216 "cplus.met"
#line 3217 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3217 "cplus.met"
#line 3217 "cplus.met"
                    }
#line 3217 "cplus.met"
#line 3218 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3218 "cplus.met"
                    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3218 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"}")
#line 3218 "cplus.met"
                    } else {
#line 3218 "cplus.met"
                        tokenAhead = 0 ;
#line 3218 "cplus.met"
                    }
#line 3218 "cplus.met"
#line 3219 "cplus.met"
                    {
#line 3219 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3219 "cplus.met"
                        {
#line 3219 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3219 "cplus.met"
                            _ptRes1= MakeTree(BRACE_MARKER, 0);
#line 3219 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3219 "cplus.met"
                        }
#line 3219 "cplus.met"
                        ReplaceTree(retTree , 3 , _ptTree0);
#line 3219 "cplus.met"
                    }
#line 3219 "cplus.met"
#line 3219 "cplus.met"
                    break;
#line 3219 "cplus.met"
            }
#line 3219 "cplus.met"
#line 3222 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3222 "cplus.met"
#line 3222 "cplus.met"
            if (list){
#line 3222 "cplus.met"
#line 3222 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3222 "cplus.met"
            } else {
#line 3222 "cplus.met"
#line 3222 "cplus.met"
                list = _addlist1 ;
#line 3222 "cplus.met"
            }
#line 3222 "cplus.met"
#line 3222 "cplus.met"
#line 3223 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3223 "cplus.met"
#line 3224 "cplus.met"
        {
#line 3224 "cplus.met"
            PPTREE _ptTree0=0;
#line 3224 "cplus.met"
            {
#line 3224 "cplus.met"
                PPTREE _ptRes1=0;
#line 3224 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3224 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3224 "cplus.met"
                _ptTree0=_ptRes1;
#line 3224 "cplus.met"
            }
#line 3224 "cplus.met"
            _retValue =_ptTree0;
#line 3224 "cplus.met"
            goto ctor_initializer_ret;
#line 3224 "cplus.met"
        }
#line 3224 "cplus.met"
#line 3224 "cplus.met"
#line 3224 "cplus.met"
    }
#line 3224 "cplus.met"
#line 3224 "cplus.met"
#line 3225 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3225 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3225 "cplus.met"
return((PPTREE) 0);
#line 3225 "cplus.met"

#line 3225 "cplus.met"
ctor_initializer_exit :
#line 3225 "cplus.met"

#line 3225 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3225 "cplus.met"
    _funcLevel--;
#line 3225 "cplus.met"
    return((PPTREE) -1) ;
#line 3225 "cplus.met"

#line 3225 "cplus.met"
ctor_initializer_ret :
#line 3225 "cplus.met"
    
#line 3225 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3225 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3225 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3225 "cplus.met"
    return _retValue ;
#line 3225 "cplus.met"
}
#line 3225 "cplus.met"

#line 3225 "cplus.met"
#line 1632 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1632 "cplus.met"
{
#line 1632 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1632 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1632 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1632 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1632 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1632 "cplus.met"
#line 1632 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1632 "cplus.met"
#line 1635 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 97, cplus))){
#line 1635 "cplus.met"
#line 1637 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1637 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1637 "cplus.met"
        }
#line 1637 "cplus.met"
    }
#line 1637 "cplus.met"
#line 1638 "cplus.met"
    {
#line 1638 "cplus.met"
        _retValue = retTree ;
#line 1638 "cplus.met"
        goto data_decl_exotic_ret;
#line 1638 "cplus.met"
        
#line 1638 "cplus.met"
    }
#line 1638 "cplus.met"
#line 1638 "cplus.met"
#line 1638 "cplus.met"

#line 1639 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1639 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1639 "cplus.met"
return((PPTREE) 0);
#line 1639 "cplus.met"

#line 1639 "cplus.met"
data_decl_exotic_exit :
#line 1639 "cplus.met"

#line 1639 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1639 "cplus.met"
    _funcLevel--;
#line 1639 "cplus.met"
    return((PPTREE) -1) ;
#line 1639 "cplus.met"

#line 1639 "cplus.met"
data_decl_exotic_ret :
#line 1639 "cplus.met"
    
#line 1639 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
#line 1639 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1639 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1639 "cplus.met"
    return _retValue ;
#line 1639 "cplus.met"
}
#line 1639 "cplus.met"

#line 1639 "cplus.met"
#line 1585 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1585 "cplus.met"
{
#line 1585 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1585 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1585 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1585 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1585 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1585 "cplus.met"
#line 1585 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1585 "cplus.met"
#line 1587 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 36, cplus))){
#line 1587 "cplus.met"
#line 1588 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 1588 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1588 "cplus.met"
        }
#line 1588 "cplus.met"
    }
#line 1588 "cplus.met"
#line 1589 "cplus.met"
    {
#line 1589 "cplus.met"
        _retValue = retTree ;
#line 1589 "cplus.met"
        goto data_decl_sc_decl_ret;
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
data_decl_sc_decl_exit :
#line 1590 "cplus.met"

#line 1590 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1590 "cplus.met"
    _funcLevel--;
#line 1590 "cplus.met"
    return((PPTREE) -1) ;
#line 1590 "cplus.met"

#line 1590 "cplus.met"
data_decl_sc_decl_ret :
#line 1590 "cplus.met"
    
#line 1590 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
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
#line 1568 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1568 "cplus.met"
{
#line 1568 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1568 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1568 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1568 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1568 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1568 "cplus.met"
#line 1568 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1568 "cplus.met"
#line 1570 "cplus.met"
    {
#line 1570 "cplus.met"
        PPTREE _ptRes0=0;
#line 1570 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1570 "cplus.met"
        retTree=_ptRes0;
#line 1570 "cplus.met"
    }
#line 1570 "cplus.met"
#line 1571 "cplus.met"
    {
#line 1571 "cplus.met"
        PPTREE _ptTree0=0;
#line 1571 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1571 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1571 "cplus.met"
        }
#line 1571 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1571 "cplus.met"
    }
#line 1571 "cplus.met"
#line 1572 "cplus.met"
    {
#line 1572 "cplus.met"
        PPTREE _ptTree0=0;
#line 1572 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1572 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1572 "cplus.met"
        }
#line 1572 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1572 "cplus.met"
    }
#line 1572 "cplus.met"
#line 1573 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1573 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1573 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1573 "cplus.met"
    } else {
#line 1573 "cplus.met"
        tokenAhead = 0 ;
#line 1573 "cplus.met"
    }
#line 1573 "cplus.met"
#line 1574 "cplus.met"
    {
#line 1574 "cplus.met"
        _retValue = retTree ;
#line 1574 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1574 "cplus.met"
        
#line 1574 "cplus.met"
    }
#line 1574 "cplus.met"
#line 1574 "cplus.met"
#line 1574 "cplus.met"

#line 1575 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1575 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1575 "cplus.met"
return((PPTREE) 0);
#line 1575 "cplus.met"

#line 1575 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1575 "cplus.met"

#line 1575 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1575 "cplus.met"
    _funcLevel--;
#line 1575 "cplus.met"
    return((PPTREE) -1) ;
#line 1575 "cplus.met"

#line 1575 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1575 "cplus.met"
    
#line 1575 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1575 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1575 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1575 "cplus.met"
    return _retValue ;
#line 1575 "cplus.met"
}
#line 1575 "cplus.met"

#line 1575 "cplus.met"
#line 1577 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1577 "cplus.met"
{
#line 1577 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1577 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1577 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1577 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1577 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1577 "cplus.met"
#line 1577 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1577 "cplus.met"
#line 1579 "cplus.met"
    {
#line 1579 "cplus.met"
        PPTREE _ptRes0=0;
#line 1579 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1579 "cplus.met"
        retTree=_ptRes0;
#line 1579 "cplus.met"
    }
#line 1579 "cplus.met"
#line 1580 "cplus.met"
    {
#line 1580 "cplus.met"
        PPTREE _ptTree0=0;
#line 1580 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1580 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1580 "cplus.met"
        }
#line 1580 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1580 "cplus.met"
    }
#line 1580 "cplus.met"
#line 1581 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1581 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1581 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1581 "cplus.met"
    } else {
#line 1581 "cplus.met"
        tokenAhead = 0 ;
#line 1581 "cplus.met"
    }
#line 1581 "cplus.met"
#line 1582 "cplus.met"
    {
#line 1582 "cplus.met"
        _retValue = retTree ;
#line 1582 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1582 "cplus.met"
        
#line 1582 "cplus.met"
    }
#line 1582 "cplus.met"
#line 1582 "cplus.met"
#line 1582 "cplus.met"

#line 1583 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1583 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1583 "cplus.met"
return((PPTREE) 0);
#line 1583 "cplus.met"

#line 1583 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1583 "cplus.met"

#line 1583 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1583 "cplus.met"
    _funcLevel--;
#line 1583 "cplus.met"
    return((PPTREE) -1) ;
#line 1583 "cplus.met"

#line 1583 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1583 "cplus.met"
    
#line 1583 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1583 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1583 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1583 "cplus.met"
    return _retValue ;
#line 1583 "cplus.met"
}
#line 1583 "cplus.met"

#line 1583 "cplus.met"
#line 1625 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1625 "cplus.met"
{
#line 1625 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1625 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1625 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1625 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1625 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1625 "cplus.met"
#line 1625 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1625 "cplus.met"
#line 1627 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 39, cplus))){
#line 1627 "cplus.met"
#line 1628 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 40, cplus))== (PPTREE) -1 ) {
#line 1628 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1628 "cplus.met"
        }
#line 1628 "cplus.met"
    }
#line 1628 "cplus.met"
#line 1629 "cplus.met"
    {
#line 1629 "cplus.met"
        _retValue = retTree ;
#line 1629 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
#line 1629 "cplus.met"
        
#line 1629 "cplus.met"
    }
#line 1629 "cplus.met"
#line 1629 "cplus.met"
#line 1629 "cplus.met"

#line 1630 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1630 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1630 "cplus.met"
return((PPTREE) 0);
#line 1630 "cplus.met"

#line 1630 "cplus.met"
data_decl_sc_ty_decl_exit :
#line 1630 "cplus.met"

#line 1630 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1630 "cplus.met"
    _funcLevel--;
#line 1630 "cplus.met"
    return((PPTREE) -1) ;
#line 1630 "cplus.met"

#line 1630 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1630 "cplus.met"
    
#line 1630 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
#line 1630 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1630 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1630 "cplus.met"
    return _retValue ;
#line 1630 "cplus.met"
}
#line 1630 "cplus.met"

#line 1630 "cplus.met"
#line 1602 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1602 "cplus.met"
{
#line 1602 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1602 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1602 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1602 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1602 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1602 "cplus.met"
#line 1602 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1602 "cplus.met"
#line 1605 "cplus.met"
    {
#line 1605 "cplus.met"
        PPTREE _ptRes0=0;
#line 1605 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1605 "cplus.met"
        retTree=_ptRes0;
#line 1605 "cplus.met"
    }
#line 1605 "cplus.met"
#line 1607 "cplus.met"
    {
#line 1607 "cplus.met"
        PPTREE _ptTree0=0;
#line 1607 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1607 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1607 "cplus.met"
        }
#line 1607 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1607 "cplus.met"
    }
#line 1607 "cplus.met"
#line 1608 "cplus.met"
    {
#line 1608 "cplus.met"
        PPTREE _ptTree0=0;
#line 1608 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1608 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1608 "cplus.met"
        }
#line 1608 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1608 "cplus.met"
    }
#line 1608 "cplus.met"
#line 1609 "cplus.met"
    {
#line 1609 "cplus.met"
        PPTREE _ptTree0=0;
#line 1609 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1609 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1609 "cplus.met"
        }
#line 1609 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1609 "cplus.met"
    }
#line 1609 "cplus.met"
#line 1610 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1610 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1610 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1610 "cplus.met"
    } else {
#line 1610 "cplus.met"
        tokenAhead = 0 ;
#line 1610 "cplus.met"
    }
#line 1610 "cplus.met"
#line 1611 "cplus.met"
    {
#line 1611 "cplus.met"
        _retValue = retTree ;
#line 1611 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1611 "cplus.met"
        
#line 1611 "cplus.met"
    }
#line 1611 "cplus.met"
#line 1611 "cplus.met"
#line 1611 "cplus.met"

#line 1612 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1612 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1612 "cplus.met"
return((PPTREE) 0);
#line 1612 "cplus.met"

#line 1612 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1612 "cplus.met"

#line 1612 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1612 "cplus.met"
    _funcLevel--;
#line 1612 "cplus.met"
    return((PPTREE) -1) ;
#line 1612 "cplus.met"

#line 1612 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1612 "cplus.met"
    
#line 1612 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1612 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1612 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1612 "cplus.met"
    return _retValue ;
#line 1612 "cplus.met"
}
#line 1612 "cplus.met"

#line 1612 "cplus.met"
#line 1614 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1614 "cplus.met"
{
#line 1614 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1614 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1614 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1614 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1614 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1614 "cplus.met"
#line 1614 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1614 "cplus.met"
#line 1617 "cplus.met"
    {
#line 1617 "cplus.met"
        PPTREE _ptRes0=0;
#line 1617 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1617 "cplus.met"
        retTree=_ptRes0;
#line 1617 "cplus.met"
    }
#line 1617 "cplus.met"
#line 1619 "cplus.met"
    {
#line 1619 "cplus.met"
        PPTREE _ptTree0=0;
#line 1619 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1619 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1619 "cplus.met"
        }
#line 1619 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1619 "cplus.met"
    }
#line 1619 "cplus.met"
#line 1620 "cplus.met"
    {
#line 1620 "cplus.met"
        PPTREE _ptTree0=0;
#line 1620 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1620 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1620 "cplus.met"
        }
#line 1620 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1620 "cplus.met"
    }
#line 1620 "cplus.met"
#line 1621 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1621 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1621 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
#line 1621 "cplus.met"
    } else {
#line 1621 "cplus.met"
        tokenAhead = 0 ;
#line 1621 "cplus.met"
    }
#line 1621 "cplus.met"
#line 1622 "cplus.met"
    {
#line 1622 "cplus.met"
        _retValue = retTree ;
#line 1622 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1622 "cplus.met"
        
#line 1622 "cplus.met"
    }
#line 1622 "cplus.met"
#line 1622 "cplus.met"
#line 1622 "cplus.met"

#line 1623 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1623 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1623 "cplus.met"
return((PPTREE) 0);
#line 1623 "cplus.met"

#line 1623 "cplus.met"
data_decl_sc_ty_decl_short_exit :
#line 1623 "cplus.met"

#line 1623 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1623 "cplus.met"
    _funcLevel--;
#line 1623 "cplus.met"
    return((PPTREE) -1) ;
#line 1623 "cplus.met"

#line 1623 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1623 "cplus.met"
    
#line 1623 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
#line 1623 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1623 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1623 "cplus.met"
    return _retValue ;
#line 1623 "cplus.met"
}
#line 1623 "cplus.met"

#line 1623 "cplus.met"
#line 1592 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1592 "cplus.met"
{
#line 1592 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1592 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1592 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1592 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1592 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1592 "cplus.met"
#line 1592 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1592 "cplus.met"
#line 1594 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 35, cplus))){
#line 1594 "cplus.met"
#line 1595 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 45, cplus))== (PPTREE) -1 ) {
#line 1595 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1595 "cplus.met"
        }
#line 1595 "cplus.met"
    }
#line 1595 "cplus.met"
#line 1596 "cplus.met"
    {
#line 1596 "cplus.met"
        _retValue = retTree ;
#line 1596 "cplus.met"
        goto data_declaration_ret;
#line 1596 "cplus.met"
        
#line 1596 "cplus.met"
    }
#line 1596 "cplus.met"
#line 1596 "cplus.met"
#line 1596 "cplus.met"

#line 1597 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1597 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1597 "cplus.met"
return((PPTREE) 0);
#line 1597 "cplus.met"

#line 1597 "cplus.met"
data_declaration_exit :
#line 1597 "cplus.met"

#line 1597 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1597 "cplus.met"
    _funcLevel--;
#line 1597 "cplus.met"
    return((PPTREE) -1) ;
#line 1597 "cplus.met"

#line 1597 "cplus.met"
data_declaration_ret :
#line 1597 "cplus.met"
    
#line 1597 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1597 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1597 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1597 "cplus.met"
    return _retValue ;
#line 1597 "cplus.met"
}
#line 1597 "cplus.met"

#line 1597 "cplus.met"
#line 1666 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1666 "cplus.met"
{
#line 1666 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1666 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1666 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1666 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1666 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1666 "cplus.met"
#line 1666 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1666 "cplus.met"
#line 1668 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 43, cplus))){
#line 1668 "cplus.met"
#line 1669 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1669 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
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
        goto data_declaration_for_ret;
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
data_declaration_for_exit :
#line 1671 "cplus.met"

#line 1671 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1671 "cplus.met"
    _funcLevel--;
#line 1671 "cplus.met"
    return((PPTREE) -1) ;
#line 1671 "cplus.met"

#line 1671 "cplus.met"
data_declaration_for_ret :
#line 1671 "cplus.met"
    
#line 1671 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
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
#line 1649 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1649 "cplus.met"
{
#line 1649 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1649 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1649 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1649 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1649 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1649 "cplus.met"
#line 1649 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1649 "cplus.met"
#line 1651 "cplus.met"
    {
#line 1651 "cplus.met"
        PPTREE _ptRes0=0;
#line 1651 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1651 "cplus.met"
        retTree=_ptRes0;
#line 1651 "cplus.met"
    }
#line 1651 "cplus.met"
#line 1652 "cplus.met"
    {
#line 1652 "cplus.met"
        PPTREE _ptTree0=0;
#line 1652 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1652 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1652 "cplus.met"
        }
#line 1652 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1652 "cplus.met"
    }
#line 1652 "cplus.met"
#line 1653 "cplus.met"
    {
#line 1653 "cplus.met"
        PPTREE _ptTree0=0;
#line 1653 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1653 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1653 "cplus.met"
        }
#line 1653 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1653 "cplus.met"
    }
#line 1653 "cplus.met"
#line 1654 "cplus.met"
    {
#line 1654 "cplus.met"
        PPTREE _ptTree0=0;
#line 1654 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1654 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1654 "cplus.met"
        }
#line 1654 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1654 "cplus.met"
    }
#line 1654 "cplus.met"
#line 1655 "cplus.met"
    {
#line 1655 "cplus.met"
        _retValue = retTree ;
#line 1655 "cplus.met"
        goto data_declaration_for_full_ret;
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
data_declaration_for_full_exit :
#line 1656 "cplus.met"

#line 1656 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1656 "cplus.met"
    _funcLevel--;
#line 1656 "cplus.met"
    return((PPTREE) -1) ;
#line 1656 "cplus.met"

#line 1656 "cplus.met"
data_declaration_for_full_ret :
#line 1656 "cplus.met"
    
#line 1656 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
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
#line 1658 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1658 "cplus.met"
{
#line 1658 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1658 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1658 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1658 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1658 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1658 "cplus.met"
#line 1658 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1658 "cplus.met"
#line 1660 "cplus.met"
    {
#line 1660 "cplus.met"
        PPTREE _ptRes0=0;
#line 1660 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1660 "cplus.met"
        retTree=_ptRes0;
#line 1660 "cplus.met"
    }
#line 1660 "cplus.met"
#line 1661 "cplus.met"
    {
#line 1661 "cplus.met"
        PPTREE _ptTree0=0;
#line 1661 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1661 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1661 "cplus.met"
        }
#line 1661 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1661 "cplus.met"
    }
#line 1661 "cplus.met"
#line 1662 "cplus.met"
    {
#line 1662 "cplus.met"
        PPTREE _ptTree0=0;
#line 1662 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1662 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1662 "cplus.met"
        }
#line 1662 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1662 "cplus.met"
    }
#line 1662 "cplus.met"
#line 1663 "cplus.met"
    {
#line 1663 "cplus.met"
        _retValue = retTree ;
#line 1663 "cplus.met"
        goto data_declaration_for_short_ret;
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
data_declaration_for_short_exit :
#line 1664 "cplus.met"

#line 1664 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1664 "cplus.met"
    _funcLevel--;
#line 1664 "cplus.met"
    return((PPTREE) -1) ;
#line 1664 "cplus.met"

#line 1664 "cplus.met"
data_declaration_for_short_ret :
#line 1664 "cplus.met"
    
#line 1664 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
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
#line 1641 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1641 "cplus.met"
{
#line 1641 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1641 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1641 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1641 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1641 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1641 "cplus.met"
#line 1641 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1641 "cplus.met"
#line 1643 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 38, cplus))){
#line 1643 "cplus.met"
#line 1644 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 1644 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
#line 1644 "cplus.met"
        }
#line 1644 "cplus.met"
    }
#line 1644 "cplus.met"
#line 1645 "cplus.met"
    {
#line 1645 "cplus.met"
        _retValue = retTree ;
#line 1645 "cplus.met"
        goto data_declaration_strict_ret;
#line 1645 "cplus.met"
        
#line 1645 "cplus.met"
    }
#line 1645 "cplus.met"
#line 1645 "cplus.met"
#line 1645 "cplus.met"

#line 1646 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1646 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1646 "cplus.met"
return((PPTREE) 0);
#line 1646 "cplus.met"

#line 1646 "cplus.met"
data_declaration_strict_exit :
#line 1646 "cplus.met"

#line 1646 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1646 "cplus.met"
    _funcLevel--;
#line 1646 "cplus.met"
    return((PPTREE) -1) ;
#line 1646 "cplus.met"

#line 1646 "cplus.met"
data_declaration_strict_ret :
#line 1646 "cplus.met"
    
#line 1646 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
#line 1646 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1646 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1646 "cplus.met"
    return _retValue ;
#line 1646 "cplus.met"
}
#line 1646 "cplus.met"

#line 1646 "cplus.met"
#line 2868 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 2868 "cplus.met"
{
#line 2868 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2868 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2868 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2868 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2868 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2868 "cplus.met"
#line 2868 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0;
#line 2868 "cplus.met"
#line 2870 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2870 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 2870 "cplus.met"
        MulFreeTree(2,expr,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 2870 "cplus.met"
    } else {
#line 2870 "cplus.met"
        tokenAhead = 0 ;
#line 2870 "cplus.met"
    }
#line 2870 "cplus.met"
#line 2871 "cplus.met"
    {
#line 2871 "cplus.met"
        PPTREE _ptRes0=0;
#line 2871 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 2871 "cplus.met"
        retTree=_ptRes0;
#line 2871 "cplus.met"
    }
#line 2871 "cplus.met"
#line 2872 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 2872 "cplus.met"
#line 2873 "cplus.met"
#line 2876 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 63, cplus)){
#line 2876 "cplus.met"
#line 2876 "cplus.met"
        }
#line 2876 "cplus.met"
#line 2879 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2879 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2879 "cplus.met"
            MulFreeTree(2,expr,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 2879 "cplus.met"
        } else {
#line 2879 "cplus.met"
            tokenAhead = 0 ;
#line 2879 "cplus.met"
        }
#line 2879 "cplus.met"
#line 2880 "cplus.met"
        {
#line 2880 "cplus.met"
            PPTREE _ptTree0=0;
#line 2880 "cplus.met"
            {
#line 2880 "cplus.met"
                PPTREE _ptRes1=0;
#line 2880 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 2880 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 2880 "cplus.met"
                _ptTree0=_ptRes1;
#line 2880 "cplus.met"
            }
#line 2880 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2880 "cplus.met"
        }
#line 2880 "cplus.met"
#line 2880 "cplus.met"
#line 2880 "cplus.met"
    }
#line 2880 "cplus.met"
#line 2882 "cplus.met"
    {
#line 2882 "cplus.met"
        PPTREE _ptTree0=0;
#line 2882 "cplus.met"
        {
#line 2882 "cplus.met"
            PPTREE _ptTree1=0;
#line 2882 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2882 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,expr,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 2882 "cplus.met"
            }
#line 2882 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2882 "cplus.met"
        }
#line 2882 "cplus.met"
        _retValue =_ptTree0;
#line 2882 "cplus.met"
        goto deallocation_expression_ret;
#line 2882 "cplus.met"
    }
#line 2882 "cplus.met"
#line 2882 "cplus.met"
#line 2882 "cplus.met"

#line 2883 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2883 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2883 "cplus.met"
return((PPTREE) 0);
#line 2883 "cplus.met"

#line 2883 "cplus.met"
deallocation_expression_exit :
#line 2883 "cplus.met"

#line 2883 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2883 "cplus.met"
    _funcLevel--;
#line 2883 "cplus.met"
    return((PPTREE) -1) ;
#line 2883 "cplus.met"

#line 2883 "cplus.met"
deallocation_expression_ret :
#line 2883 "cplus.met"
    
#line 2883 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 2883 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2883 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2883 "cplus.met"
    return _retValue ;
#line 2883 "cplus.met"
}
#line 2883 "cplus.met"

#line 2883 "cplus.met"
#line 2257 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2257 "cplus.met"
{
#line 2257 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2257 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2257 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2257 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2257 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2257 "cplus.met"
#line 2257 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2257 "cplus.met"
#line 2259 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 122, cplus)){
#line 2259 "cplus.met"
#line 2260 "cplus.met"
        {
#line 2260 "cplus.met"
            PPTREE _ptTree0=0;
#line 2260 "cplus.met"
            {
#line 2260 "cplus.met"
                PPTREE _ptTree1=0;
#line 2260 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2260 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2260 "cplus.met"
                }
#line 2260 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2260 "cplus.met"
            }
#line 2260 "cplus.met"
            _retValue =_ptTree0;
#line 2260 "cplus.met"
            goto declarator_ret;
#line 2260 "cplus.met"
        }
#line 2260 "cplus.met"
    } else {
#line 2260 "cplus.met"
#line 2262 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2262 "cplus.met"
        switch( lexEl.Value) {
#line 2262 "cplus.met"
#line 2263 "cplus.met"
            case ETOI : 
#line 2263 "cplus.met"
                tokenAhead = 0 ;
#line 2263 "cplus.met"
                CommTerm();
#line 2263 "cplus.met"
#line 2263 "cplus.met"
                {
#line 2263 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2263 "cplus.met"
                    {
#line 2263 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2263 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2263 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2263 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2263 "cplus.met"
                        }
#line 2263 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2263 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2263 "cplus.met"
                    }
#line 2263 "cplus.met"
                    _retValue =_ptTree0;
#line 2263 "cplus.met"
                    goto declarator_ret;
#line 2263 "cplus.met"
                }
#line 2263 "cplus.met"
                break;
#line 2263 "cplus.met"
#line 2264 "cplus.met"
            case ETCO : 
#line 2264 "cplus.met"
                tokenAhead = 0 ;
#line 2264 "cplus.met"
                CommTerm();
#line 2264 "cplus.met"
#line 2264 "cplus.met"
                {
#line 2264 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2264 "cplus.met"
                    {
#line 2264 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2264 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2264 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2264 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2264 "cplus.met"
                        }
#line 2264 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2264 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2264 "cplus.met"
                    }
#line 2264 "cplus.met"
                    _retValue =_ptTree0;
#line 2264 "cplus.met"
                    goto declarator_ret;
#line 2264 "cplus.met"
                }
#line 2264 "cplus.met"
                break;
#line 2264 "cplus.met"
#line 2265 "cplus.met"
            case TILD : 
#line 2265 "cplus.met"
                tokenAhead = 0 ;
#line 2265 "cplus.met"
                CommTerm();
#line 2265 "cplus.met"
#line 2265 "cplus.met"
                {
#line 2265 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2265 "cplus.met"
                    {
#line 2265 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2265 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2265 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2265 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2265 "cplus.met"
                        }
#line 2265 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2265 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2265 "cplus.met"
                    }
#line 2265 "cplus.met"
                    _retValue =_ptTree0;
#line 2265 "cplus.met"
                    goto declarator_ret;
#line 2265 "cplus.met"
                }
#line 2265 "cplus.met"
                break;
#line 2265 "cplus.met"
#line 2268 "cplus.met"
            case POUV : 
#line 2268 "cplus.met"
                tokenAhead = 0 ;
#line 2268 "cplus.met"
                CommTerm();
#line 2268 "cplus.met"
#line 2267 "cplus.met"
#line 2268 "cplus.met"
                {
#line 2268 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2268 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2268 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2268 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2268 "cplus.met"
                    }
#line 2268 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2268 "cplus.met"
                    retTree=_ptRes0;
#line 2268 "cplus.met"
                }
#line 2268 "cplus.met"
#line 2269 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2269 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2269 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2269 "cplus.met"
                } else {
#line 2269 "cplus.met"
                    tokenAhead = 0 ;
#line 2269 "cplus.met"
                }
#line 2269 "cplus.met"
#line 2270 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2270 "cplus.met"
#line 2271 "cplus.met"
                                            { PPTREE theTree ;
#line 2271 "cplus.met"
                                              theTree = valTree ;
#line 2271 "cplus.met"
                                              if (theTree) {
#line 2271 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2271 "cplus.met"
                                               if (NumberTree(theTree)
#line 2271 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2271 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2271 "cplus.met"
                                               else
#line 2271 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2271 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2271 "cplus.met"
                                                  /* modif portage sun */
#line 2271 "cplus.met"
                                                  retTree = valTree;
#line 2271 "cplus.met"
                                              }
#line 2271 "cplus.met"
                                                 }
#line 2271 "cplus.met"
                                        
#line 2271 "cplus.met"
                }
#line 2271 "cplus.met"
#line 2271 "cplus.met"
                break;
#line 2271 "cplus.met"
#line 2288 "cplus.met"
            case META : 
#line 2288 "cplus.met"
            case IDENT : 
#line 2288 "cplus.met"
#line 2289 "cplus.met"
#line 2290 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2290 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2290 "cplus.met"
                }
#line 2290 "cplus.met"
#line 2291 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2291 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2291 "cplus.met"
#line 2292 "cplus.met"
                    {
#line 2292 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2292 "cplus.met"
                        {
#line 2292 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2292 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2292 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2292 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2292 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2292 "cplus.met"
                            }
#line 2292 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2292 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2292 "cplus.met"
                        }
#line 2292 "cplus.met"
                        _retValue =_ptTree0;
#line 2292 "cplus.met"
                        goto declarator_ret;
#line 2292 "cplus.met"
                    }
#line 2292 "cplus.met"
                }
#line 2292 "cplus.met"
#line 2293 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2293 "cplus.met"
#line 2294 "cplus.met"
                                            { PPTREE theTree ;
#line 2294 "cplus.met"
                                              theTree = valTree ;
#line 2294 "cplus.met"
                                              if (theTree) {
#line 2294 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2294 "cplus.met"
                                               if (NumberTree(theTree)
#line 2294 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2294 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2294 "cplus.met"
                                               else
#line 2294 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2294 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2294 "cplus.met"
                                                  /* modif portage sun */
#line 2294 "cplus.met"
                                                  retTree = valTree;
#line 2294 "cplus.met"
                                              }
#line 2294 "cplus.met"
                                                 }
#line 2294 "cplus.met"
                                        
#line 2294 "cplus.met"
                }
#line 2294 "cplus.met"
#line 2294 "cplus.met"
                break;
#line 2294 "cplus.met"
#line 2311 "cplus.met"
            case OPERATOR : 
#line 2311 "cplus.met"
#line 2312 "cplus.met"
#line 2313 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2313 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2313 "cplus.met"
                }
#line 2313 "cplus.met"
#line 2314 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2314 "cplus.met"
#line 2315 "cplus.met"
                                            { PPTREE theTree ;
#line 2315 "cplus.met"
                                              theTree = valTree ;
#line 2315 "cplus.met"
                                              if (theTree) {
#line 2315 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2315 "cplus.met"
                                               if (NumberTree(theTree)
#line 2315 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2315 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2315 "cplus.met"
                                               else
#line 2315 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2315 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2315 "cplus.met"
                                                  /* modif portage sun */
#line 2315 "cplus.met"
                                                  retTree = valTree;
#line 2315 "cplus.met"
                                              }
#line 2315 "cplus.met"
                                                 }
#line 2315 "cplus.met"
                                        
#line 2315 "cplus.met"
                }
#line 2315 "cplus.met"
#line 2315 "cplus.met"
                break;
#line 2315 "cplus.met"
            default :
#line 2315 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or ~ or ( or IDENT or operator")
#line 2315 "cplus.met"
                break;
#line 2315 "cplus.met"
        }
#line 2315 "cplus.met"
    }
#line 2315 "cplus.met"
#line 2333 "cplus.met"
    {
#line 2333 "cplus.met"
        _retValue = retTree ;
#line 2333 "cplus.met"
        goto declarator_ret;
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
declarator_exit :
#line 2334 "cplus.met"

#line 2334 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2334 "cplus.met"
    _funcLevel--;
#line 2334 "cplus.met"
    return((PPTREE) -1) ;
#line 2334 "cplus.met"

#line 2334 "cplus.met"
declarator_ret :
#line 2334 "cplus.met"
    
#line 2334 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
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
#line 2225 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2225 "cplus.met"
{
#line 2225 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2225 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2225 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2225 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2225 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2225 "cplus.met"
#line 2225 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2225 "cplus.met"
#line 2227 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2227 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2227 "cplus.met"
#line 2228 "cplus.met"
        
#line 2228 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2228 "cplus.met"
        goto declarator_follow_exit;
#line 2228 "cplus.met"
#line 2228 "cplus.met"
    }
#line 2228 "cplus.met"
#line 2229 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2229 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2229 "cplus.met"
#line 2230 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2230 "cplus.met"
        switch( lexEl.Value) {
#line 2230 "cplus.met"
#line 2233 "cplus.met"
            case COUV : 
#line 2233 "cplus.met"
                tokenAhead = 0 ;
#line 2233 "cplus.met"
                CommTerm();
#line 2233 "cplus.met"
#line 2232 "cplus.met"
#line 2233 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2233 "cplus.met"
#line 2234 "cplus.met"
                    {
#line 2234 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2234 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2234 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2234 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2234 "cplus.met"
                        retTree=_ptRes0;
#line 2234 "cplus.met"
                    }
#line 2234 "cplus.met"
                } else {
#line 2234 "cplus.met"
#line 2236 "cplus.met"
                    {
#line 2236 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2236 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2236 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2236 "cplus.met"
                        retTree=_ptRes0;
#line 2236 "cplus.met"
                    }
#line 2236 "cplus.met"
                }
#line 2236 "cplus.met"
#line 2237 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2237 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2237 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2237 "cplus.met"
                } else {
#line 2237 "cplus.met"
                    tokenAhead = 0 ;
#line 2237 "cplus.met"
                }
#line 2237 "cplus.met"
#line 2237 "cplus.met"
                break;
#line 2237 "cplus.met"
#line 2244 "cplus.met"
            case POUV : 
#line 2244 "cplus.met"
#line 2240 "cplus.met"
#line 2243 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 11, cplus)){
#line 2243 "cplus.met"
#line 2245 "cplus.met"
#line 2246 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2246 "cplus.met"
#line 2247 "cplus.met"
                    {
#line 2247 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2247 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2247 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2247 "cplus.met"
                        }
#line 2247 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2247 "cplus.met"
                    }
#line 2247 "cplus.met"
#line 2248 "cplus.met"
                    retTree = valTree ;
#line 2248 "cplus.met"
#line 2248 "cplus.met"
#line 2248 "cplus.met"
                } else {
#line 2248 "cplus.met"
#line 2251 "cplus.met"
                    {
#line 2251 "cplus.met"
                        _retValue = retTree ;
#line 2251 "cplus.met"
                        goto declarator_follow_ret;
#line 2251 "cplus.met"
                        
#line 2251 "cplus.met"
                    }
#line 2251 "cplus.met"
                }
#line 2251 "cplus.met"
#line 2251 "cplus.met"
                break;
#line 2251 "cplus.met"
            default :
#line 2251 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2251 "cplus.met"
                break;
#line 2251 "cplus.met"
        }
#line 2251 "cplus.met"
    } 
#line 2251 "cplus.met"
#line 2254 "cplus.met"
    {
#line 2254 "cplus.met"
        _retValue = retTree ;
#line 2254 "cplus.met"
        goto declarator_follow_ret;
#line 2254 "cplus.met"
        
#line 2254 "cplus.met"
    }
#line 2254 "cplus.met"
#line 2254 "cplus.met"
#line 2254 "cplus.met"

#line 2255 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2255 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2255 "cplus.met"
return((PPTREE) 0);
#line 2255 "cplus.met"

#line 2255 "cplus.met"
declarator_follow_exit :
#line 2255 "cplus.met"

#line 2255 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2255 "cplus.met"
    _funcLevel--;
#line 2255 "cplus.met"
    return((PPTREE) -1) ;
#line 2255 "cplus.met"

#line 2255 "cplus.met"
declarator_follow_ret :
#line 2255 "cplus.met"
    
#line 2255 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2255 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2255 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2255 "cplus.met"
    return _retValue ;
#line 2255 "cplus.met"
}
#line 2255 "cplus.met"

#line 2255 "cplus.met"
#line 1493 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1493 "cplus.met"
{
#line 1493 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1493 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1493 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1493 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1493 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1493 "cplus.met"
#line 1493 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1493 "cplus.met"
#line 1493 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1493 "cplus.met"
#line 1493 "cplus.met"
    _addlist1 = list ;
#line 1493 "cplus.met"
#line 1495 "cplus.met"
    do {
#line 1495 "cplus.met"
#line 1496 "cplus.met"
        {
#line 1496 "cplus.met"
            PPTREE _ptTree0=0;
#line 1496 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1496 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1496 "cplus.met"
            }
#line 1496 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1496 "cplus.met"
        }
#line 1496 "cplus.met"
#line 1496 "cplus.met"
        if (list){
#line 1496 "cplus.met"
#line 1496 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1496 "cplus.met"
        } else {
#line 1496 "cplus.met"
#line 1496 "cplus.met"
            list = _addlist1 ;
#line 1496 "cplus.met"
        }
#line 1496 "cplus.met"
#line 1496 "cplus.met"
#line 1497 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1497 "cplus.met"
#line 1498 "cplus.met"
    {
#line 1498 "cplus.met"
        _retValue = list ;
#line 1498 "cplus.met"
        goto declarator_list_ret;
#line 1498 "cplus.met"
        
#line 1498 "cplus.met"
    }
#line 1498 "cplus.met"
#line 1498 "cplus.met"
#line 1498 "cplus.met"

#line 1499 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1499 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1499 "cplus.met"
return((PPTREE) 0);
#line 1499 "cplus.met"

#line 1499 "cplus.met"
declarator_list_exit :
#line 1499 "cplus.met"

#line 1499 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1499 "cplus.met"
    _funcLevel--;
#line 1499 "cplus.met"
    return((PPTREE) -1) ;
#line 1499 "cplus.met"

#line 1499 "cplus.met"
declarator_list_ret :
#line 1499 "cplus.met"
    
#line 1499 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1499 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1499 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1499 "cplus.met"
    return _retValue ;
#line 1499 "cplus.met"
}
#line 1499 "cplus.met"

#line 1499 "cplus.met"
#line 1484 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1484 "cplus.met"
{
#line 1484 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1484 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1484 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1484 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1484 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1484 "cplus.met"
#line 1484 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1484 "cplus.met"
#line 1484 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1484 "cplus.met"
#line 1484 "cplus.met"
    _addlist1 = list ;
#line 1484 "cplus.met"
#line 1486 "cplus.met"
    do {
#line 1486 "cplus.met"
#line 1487 "cplus.met"
        {
#line 1487 "cplus.met"
            PPTREE _ptTree0=0;
#line 1487 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1487 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1487 "cplus.met"
            }
#line 1487 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1487 "cplus.met"
        }
#line 1487 "cplus.met"
#line 1487 "cplus.met"
        if (list){
#line 1487 "cplus.met"
#line 1487 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1487 "cplus.met"
        } else {
#line 1487 "cplus.met"
#line 1487 "cplus.met"
            list = _addlist1 ;
#line 1487 "cplus.met"
        }
#line 1487 "cplus.met"
#line 1487 "cplus.met"
#line 1488 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1488 "cplus.met"
#line 1489 "cplus.met"
    {
#line 1489 "cplus.met"
        _retValue = list ;
#line 1489 "cplus.met"
        goto declarator_list_init_ret;
#line 1489 "cplus.met"
        
#line 1489 "cplus.met"
    }
#line 1489 "cplus.met"
#line 1489 "cplus.met"
#line 1489 "cplus.met"

#line 1490 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1490 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1490 "cplus.met"
return((PPTREE) 0);
#line 1490 "cplus.met"

#line 1490 "cplus.met"
declarator_list_init_exit :
#line 1490 "cplus.met"

#line 1490 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1490 "cplus.met"
    _funcLevel--;
#line 1490 "cplus.met"
    return((PPTREE) -1) ;
#line 1490 "cplus.met"

#line 1490 "cplus.met"
declarator_list_init_ret :
#line 1490 "cplus.met"
    
#line 1490 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1490 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1490 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1490 "cplus.met"
    return _retValue ;
#line 1490 "cplus.met"
}
#line 1490 "cplus.met"

#line 1490 "cplus.met"
#line 1464 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1464 "cplus.met"
{
#line 1464 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1464 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1464 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1464 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1464 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1464 "cplus.met"
#line 1464 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1464 "cplus.met"
#line 1466 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1466 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1466 "cplus.met"
    }
#line 1466 "cplus.met"
#line 1467 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1467 "cplus.met"
    switch( lexEl.Value) {
#line 1467 "cplus.met"
#line 1468 "cplus.met"
        case EGAL : 
#line 1468 "cplus.met"
            tokenAhead = 0 ;
#line 1468 "cplus.met"
            CommTerm();
#line 1468 "cplus.met"
#line 1468 "cplus.met"
            {
#line 1468 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1468 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1468 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1468 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 1468 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1468 "cplus.met"
                }
#line 1468 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1468 "cplus.met"
                valTree=_ptRes0;
#line 1468 "cplus.met"
            }
#line 1468 "cplus.met"
            break;
#line 1468 "cplus.met"
#line 1471 "cplus.met"
        case POUV : 
#line 1471 "cplus.met"
            tokenAhead = 0 ;
#line 1471 "cplus.met"
            CommTerm();
#line 1471 "cplus.met"
#line 1470 "cplus.met"
#line 1471 "cplus.met"
            {
#line 1471 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1471 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1471 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1471 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1471 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1471 "cplus.met"
                }
#line 1471 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1471 "cplus.met"
                valTree=_ptRes0;
#line 1471 "cplus.met"
            }
#line 1471 "cplus.met"
#line 1472 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1472 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1472 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1472 "cplus.met"
            } else {
#line 1472 "cplus.met"
                tokenAhead = 0 ;
#line 1472 "cplus.met"
            }
#line 1472 "cplus.met"
#line 1472 "cplus.met"
            break;
#line 1472 "cplus.met"
#line 1476 "cplus.met"
        case AOUV : 
#line 1476 "cplus.met"
            tokenAhead = 0 ;
#line 1476 "cplus.met"
            CommTerm();
#line 1476 "cplus.met"
#line 1475 "cplus.met"
#line 1476 "cplus.met"
            {
#line 1476 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1476 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_BRA, 2);
#line 1476 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1476 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1476 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1476 "cplus.met"
                }
#line 1476 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1476 "cplus.met"
                valTree=_ptRes0;
#line 1476 "cplus.met"
            }
#line 1476 "cplus.met"
#line 1477 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1477 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1477 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,"}")
#line 1477 "cplus.met"
            } else {
#line 1477 "cplus.met"
                tokenAhead = 0 ;
#line 1477 "cplus.met"
            }
#line 1477 "cplus.met"
#line 1477 "cplus.met"
            break;
#line 1477 "cplus.met"
#line 1477 "cplus.met"
        default : 
#line 1477 "cplus.met"
#line 1477 "cplus.met"
            break;
#line 1477 "cplus.met"
    }
#line 1477 "cplus.met"
#line 1481 "cplus.met"
    {
#line 1481 "cplus.met"
        _retValue = valTree ;
#line 1481 "cplus.met"
        goto declarator_value_ret;
#line 1481 "cplus.met"
        
#line 1481 "cplus.met"
    }
#line 1481 "cplus.met"
#line 1481 "cplus.met"
#line 1481 "cplus.met"

#line 1482 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1482 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1482 "cplus.met"
return((PPTREE) 0);
#line 1482 "cplus.met"

#line 1482 "cplus.met"
declarator_value_exit :
#line 1482 "cplus.met"

#line 1482 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1482 "cplus.met"
    _funcLevel--;
#line 1482 "cplus.met"
    return((PPTREE) -1) ;
#line 1482 "cplus.met"

#line 1482 "cplus.met"
declarator_value_ret :
#line 1482 "cplus.met"
    
#line 1482 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1482 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1482 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1482 "cplus.met"
    return _retValue ;
#line 1482 "cplus.met"
}
#line 1482 "cplus.met"

#line 1482 "cplus.met"
#line 1419 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1419 "cplus.met"
{
#line 1419 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1419 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1419 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1419 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1419 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1419 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1419 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1419 "cplus.met"
#line 1419 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1419 "cplus.met"
#line 1419 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1419 "cplus.met"
#line 1421 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1421 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1421 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1421 "cplus.met"
    } else {
#line 1421 "cplus.met"
        tokenAhead = 0 ;
#line 1421 "cplus.met"
    }
#line 1421 "cplus.met"
#line 1422 "cplus.met"
    {
#line 1422 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1422 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1422 "cplus.met"
        {
#line 1422 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1422 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1422 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1422 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1422 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
#line 1422 "cplus.met"
            } else {
#line 1422 "cplus.met"
                tokenAhead = 0 ;
#line 1422 "cplus.met"
            }
#line 1422 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1422 "cplus.met"
            _ptTree0=_ptRes1;
#line 1422 "cplus.met"
        }
#line 1422 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1422 "cplus.met"
        retTree=_ptRes0;
#line 1422 "cplus.met"
    }
#line 1422 "cplus.met"
#line 1423 "cplus.met"
    {
#line 1423 "cplus.met"
        keepCarriage = 1 ;
#line 1423 "cplus.met"
#line 1424 "cplus.met"
#line 1425 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1425 "cplus.met"
#line 1426 "cplus.met"
            {
#line 1426 "cplus.met"
                PPTREE _ptTree0=0;
#line 1426 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1426 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1426 "cplus.met"
                }
#line 1426 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1426 "cplus.met"
            }
#line 1426 "cplus.met"
#line 1426 "cplus.met"
        }
#line 1426 "cplus.met"
#line 1427 "cplus.met"
        ExtUnputBuf();
#line 1427 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1427 "cplus.met"
            NextChar() ;
#line 1427 "cplus.met"
        ptStockBuf = -1;
#line 1427 "cplus.met"
        lexEl.Erase();
#line 1427 "cplus.met"
        tokenAhead = 0;
#line 1427 "cplus.met"
        oldLine=line,oldCol=col;
#line 1427 "cplus.met"
        if ( !lexCallLex) {
#line 1427 "cplus.met"
            PUT_COORD_CALL;
#line 1427 "cplus.met"
        }
#line 1427 "cplus.met"
#line 1428 "cplus.met"
        {
#line 1428 "cplus.met"
            keepAll = 1 ;
#line 1428 "cplus.met"
#line 1429 "cplus.met"
#line 1429 "cplus.met"
            _addlist1 = listDefine ;
#line 1429 "cplus.met"
#line 1430 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1430 "cplus.met"
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                if (listDefine){
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1431 "cplus.met"
                } else {
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                    listDefine = _addlist1 ;
#line 1431 "cplus.met"
                }
#line 1431 "cplus.met"
            } 
#line 1431 "cplus.met"
#line 1432 "cplus.met"
            {
#line 1432 "cplus.met"
                PPTREE _ptTree0=0;
#line 1432 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1432 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1432 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1432 "cplus.met"
                } else {
#line 1432 "cplus.met"
                    tokenAhead = 0 ;
#line 1432 "cplus.met"
                }
#line 1432 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1432 "cplus.met"
            }
#line 1432 "cplus.met"
#line 1432 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1432 "cplus.met"
        }
#line 1432 "cplus.met"
#line 1432 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1432 "cplus.met"
    }
#line 1432 "cplus.met"
#line 1435 "cplus.met"
    {
#line 1435 "cplus.met"
        PPTREE _ptTree0=0;
#line 1435 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1435 "cplus.met"
        _retValue =_ptTree0;
#line 1435 "cplus.met"
        goto define_dir_ret;
#line 1435 "cplus.met"
    }
#line 1435 "cplus.met"
#line 1435 "cplus.met"
#line 1435 "cplus.met"

#line 1436 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1436 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1436 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1436 "cplus.met"
keepAll =  _oldkeepAll;
#line 1436 "cplus.met"
return((PPTREE) 0);
#line 1436 "cplus.met"

#line 1436 "cplus.met"
define_dir_exit :
#line 1436 "cplus.met"

#line 1436 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1436 "cplus.met"
    _funcLevel--;
#line 1436 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1436 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1436 "cplus.met"
    return((PPTREE) -1) ;
#line 1436 "cplus.met"

#line 1436 "cplus.met"
define_dir_ret :
#line 1436 "cplus.met"
    
#line 1436 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1436 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1436 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1436 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1436 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1436 "cplus.met"
    return _retValue ;
#line 1436 "cplus.met"
}
#line 1436 "cplus.met"

#line 1436 "cplus.met"
