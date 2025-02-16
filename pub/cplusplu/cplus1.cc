/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3210 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3210 "cplus.met"
{
#line 3210 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3210 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3210 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3210 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3210 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3210 "cplus.met"
#line 3210 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3210 "cplus.met"
#line 3210 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3210 "cplus.met"
#line 3212 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3212 "cplus.met"
#line 3213 "cplus.met"
#line 3213 "cplus.met"
        _addlist1 = list ;
#line 3213 "cplus.met"
#line 3214 "cplus.met"
        do {
#line 3214 "cplus.met"
#line 3215 "cplus.met"
            {
#line 3215 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3215 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 3);
#line 3215 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3215 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3215 "cplus.met"
                }
#line 3215 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3215 "cplus.met"
                retTree=_ptRes0;
#line 3215 "cplus.met"
            }
#line 3215 "cplus.met"
#line 3216 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3216 "cplus.met"
            switch( lexEl.Value) {
#line 3216 "cplus.met"
#line 3219 "cplus.met"
                case POUV : 
#line 3219 "cplus.met"
#line 3218 "cplus.met"
#line 3219 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3219 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3219 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3219 "cplus.met"
                    } else {
#line 3219 "cplus.met"
                        tokenAhead = 0 ;
#line 3219 "cplus.met"
                    }
#line 3219 "cplus.met"
#line 3220 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 63, cplus)){
#line 3220 "cplus.met"
#line 3221 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3221 "cplus.met"
#line 3221 "cplus.met"
                    }
#line 3221 "cplus.met"
#line 3222 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3222 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3222 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,")")
#line 3222 "cplus.met"
                    } else {
#line 3222 "cplus.met"
                        tokenAhead = 0 ;
#line 3222 "cplus.met"
                    }
#line 3222 "cplus.met"
#line 3222 "cplus.met"
                    break;
#line 3222 "cplus.met"
#line 3226 "cplus.met"
                default : 
#line 3226 "cplus.met"
#line 3225 "cplus.met"
#line 3226 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3226 "cplus.met"
                    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3226 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"{")
#line 3226 "cplus.met"
                    } else {
#line 3226 "cplus.met"
                        tokenAhead = 0 ;
#line 3226 "cplus.met"
                    }
#line 3226 "cplus.met"
#line 3227 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 63, cplus)){
#line 3227 "cplus.met"
#line 3228 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3228 "cplus.met"
#line 3228 "cplus.met"
                    }
#line 3228 "cplus.met"
#line 3229 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3229 "cplus.met"
                    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3229 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"}")
#line 3229 "cplus.met"
                    } else {
#line 3229 "cplus.met"
                        tokenAhead = 0 ;
#line 3229 "cplus.met"
                    }
#line 3229 "cplus.met"
#line 3230 "cplus.met"
                    {
#line 3230 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3230 "cplus.met"
                        {
#line 3230 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3230 "cplus.met"
                            _ptRes1= MakeTree(BRACE_MARKER, 0);
#line 3230 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3230 "cplus.met"
                        }
#line 3230 "cplus.met"
                        ReplaceTree(retTree , 3 , _ptTree0);
#line 3230 "cplus.met"
                    }
#line 3230 "cplus.met"
#line 3230 "cplus.met"
                    break;
#line 3230 "cplus.met"
            }
#line 3230 "cplus.met"
#line 3233 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3233 "cplus.met"
#line 3233 "cplus.met"
            if (list){
#line 3233 "cplus.met"
#line 3233 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3233 "cplus.met"
            } else {
#line 3233 "cplus.met"
#line 3233 "cplus.met"
                list = _addlist1 ;
#line 3233 "cplus.met"
            }
#line 3233 "cplus.met"
#line 3233 "cplus.met"
#line 3234 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3234 "cplus.met"
#line 3235 "cplus.met"
        {
#line 3235 "cplus.met"
            PPTREE _ptTree0=0;
#line 3235 "cplus.met"
            {
#line 3235 "cplus.met"
                PPTREE _ptRes1=0;
#line 3235 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3235 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3235 "cplus.met"
                _ptTree0=_ptRes1;
#line 3235 "cplus.met"
            }
#line 3235 "cplus.met"
            _retValue =_ptTree0;
#line 3235 "cplus.met"
            goto ctor_initializer_ret;
#line 3235 "cplus.met"
        }
#line 3235 "cplus.met"
#line 3235 "cplus.met"
#line 3235 "cplus.met"
    }
#line 3235 "cplus.met"
#line 3235 "cplus.met"
#line 3236 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3236 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3236 "cplus.met"
return((PPTREE) 0);
#line 3236 "cplus.met"

#line 3236 "cplus.met"
ctor_initializer_exit :
#line 3236 "cplus.met"

#line 3236 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3236 "cplus.met"
    _funcLevel--;
#line 3236 "cplus.met"
    return((PPTREE) -1) ;
#line 3236 "cplus.met"

#line 3236 "cplus.met"
ctor_initializer_ret :
#line 3236 "cplus.met"
    
#line 3236 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3236 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3236 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3236 "cplus.met"
    return _retValue ;
#line 3236 "cplus.met"
}
#line 3236 "cplus.met"

#line 3236 "cplus.met"
#line 1631 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1631 "cplus.met"
{
#line 1631 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1631 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1631 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1631 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1631 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1631 "cplus.met"
#line 1631 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1631 "cplus.met"
#line 1634 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 97, cplus))){
#line 1634 "cplus.met"
#line 1636 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1636 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
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
        goto data_decl_exotic_ret;
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
data_decl_exotic_exit :
#line 1638 "cplus.met"

#line 1638 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1638 "cplus.met"
    _funcLevel--;
#line 1638 "cplus.met"
    return((PPTREE) -1) ;
#line 1638 "cplus.met"

#line 1638 "cplus.met"
data_decl_exotic_ret :
#line 1638 "cplus.met"
    
#line 1638 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
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
#line 1584 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1584 "cplus.met"
{
#line 1584 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1584 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1584 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1584 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1584 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1584 "cplus.met"
#line 1584 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1584 "cplus.met"
#line 1586 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 36, cplus))){
#line 1586 "cplus.met"
#line 1587 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 37, cplus))== (PPTREE) -1 ) {
#line 1587 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1587 "cplus.met"
        }
#line 1587 "cplus.met"
    }
#line 1587 "cplus.met"
#line 1588 "cplus.met"
    {
#line 1588 "cplus.met"
        _retValue = retTree ;
#line 1588 "cplus.met"
        goto data_decl_sc_decl_ret;
#line 1588 "cplus.met"
        
#line 1588 "cplus.met"
    }
#line 1588 "cplus.met"
#line 1588 "cplus.met"
#line 1588 "cplus.met"

#line 1589 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1589 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1589 "cplus.met"
return((PPTREE) 0);
#line 1589 "cplus.met"

#line 1589 "cplus.met"
data_decl_sc_decl_exit :
#line 1589 "cplus.met"

#line 1589 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1589 "cplus.met"
    _funcLevel--;
#line 1589 "cplus.met"
    return((PPTREE) -1) ;
#line 1589 "cplus.met"

#line 1589 "cplus.met"
data_decl_sc_decl_ret :
#line 1589 "cplus.met"
    
#line 1589 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
#line 1589 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1589 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1589 "cplus.met"
    return _retValue ;
#line 1589 "cplus.met"
}
#line 1589 "cplus.met"

#line 1589 "cplus.met"
#line 1567 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1567 "cplus.met"
{
#line 1567 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1567 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1567 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1567 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1567 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1567 "cplus.met"
#line 1567 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1567 "cplus.met"
#line 1569 "cplus.met"
    {
#line 1569 "cplus.met"
        PPTREE _ptRes0=0;
#line 1569 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1569 "cplus.met"
        retTree=_ptRes0;
#line 1569 "cplus.met"
    }
#line 1569 "cplus.met"
#line 1570 "cplus.met"
    {
#line 1570 "cplus.met"
        PPTREE _ptTree0=0;
#line 1570 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1570 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1570 "cplus.met"
        }
#line 1570 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1570 "cplus.met"
    }
#line 1570 "cplus.met"
#line 1571 "cplus.met"
    {
#line 1571 "cplus.met"
        PPTREE _ptTree0=0;
#line 1571 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1571 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1571 "cplus.met"
        }
#line 1571 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1571 "cplus.met"
    }
#line 1571 "cplus.met"
#line 1572 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1572 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1572 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1572 "cplus.met"
    } else {
#line 1572 "cplus.met"
        tokenAhead = 0 ;
#line 1572 "cplus.met"
    }
#line 1572 "cplus.met"
#line 1573 "cplus.met"
    {
#line 1573 "cplus.met"
        _retValue = retTree ;
#line 1573 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1573 "cplus.met"
        
#line 1573 "cplus.met"
    }
#line 1573 "cplus.met"
#line 1573 "cplus.met"
#line 1573 "cplus.met"

#line 1574 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1574 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1574 "cplus.met"
return((PPTREE) 0);
#line 1574 "cplus.met"

#line 1574 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1574 "cplus.met"

#line 1574 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1574 "cplus.met"
    _funcLevel--;
#line 1574 "cplus.met"
    return((PPTREE) -1) ;
#line 1574 "cplus.met"

#line 1574 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1574 "cplus.met"
    
#line 1574 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1574 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1574 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1574 "cplus.met"
    return _retValue ;
#line 1574 "cplus.met"
}
#line 1574 "cplus.met"

#line 1574 "cplus.met"
#line 1576 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1576 "cplus.met"
{
#line 1576 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1576 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1576 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1576 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1576 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1576 "cplus.met"
#line 1576 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1576 "cplus.met"
#line 1578 "cplus.met"
    {
#line 1578 "cplus.met"
        PPTREE _ptRes0=0;
#line 1578 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1578 "cplus.met"
        retTree=_ptRes0;
#line 1578 "cplus.met"
    }
#line 1578 "cplus.met"
#line 1579 "cplus.met"
    {
#line 1579 "cplus.met"
        PPTREE _ptTree0=0;
#line 1579 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1579 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1579 "cplus.met"
        }
#line 1579 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1579 "cplus.met"
    }
#line 1579 "cplus.met"
#line 1580 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1580 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1580 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1580 "cplus.met"
    } else {
#line 1580 "cplus.met"
        tokenAhead = 0 ;
#line 1580 "cplus.met"
    }
#line 1580 "cplus.met"
#line 1581 "cplus.met"
    {
#line 1581 "cplus.met"
        _retValue = retTree ;
#line 1581 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1581 "cplus.met"
        
#line 1581 "cplus.met"
    }
#line 1581 "cplus.met"
#line 1581 "cplus.met"
#line 1581 "cplus.met"

#line 1582 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1582 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1582 "cplus.met"
return((PPTREE) 0);
#line 1582 "cplus.met"

#line 1582 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1582 "cplus.met"

#line 1582 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1582 "cplus.met"
    _funcLevel--;
#line 1582 "cplus.met"
    return((PPTREE) -1) ;
#line 1582 "cplus.met"

#line 1582 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1582 "cplus.met"
    
#line 1582 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1582 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1582 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1582 "cplus.met"
    return _retValue ;
#line 1582 "cplus.met"
}
#line 1582 "cplus.met"

#line 1582 "cplus.met"
#line 1624 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1624 "cplus.met"
{
#line 1624 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1624 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1624 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1624 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1624 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1624 "cplus.met"
#line 1624 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1624 "cplus.met"
#line 1626 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 39, cplus))){
#line 1626 "cplus.met"
#line 1627 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 40, cplus))== (PPTREE) -1 ) {
#line 1627 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1627 "cplus.met"
        }
#line 1627 "cplus.met"
    }
#line 1627 "cplus.met"
#line 1628 "cplus.met"
    {
#line 1628 "cplus.met"
        _retValue = retTree ;
#line 1628 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
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
data_decl_sc_ty_decl_exit :
#line 1629 "cplus.met"

#line 1629 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1629 "cplus.met"
    _funcLevel--;
#line 1629 "cplus.met"
    return((PPTREE) -1) ;
#line 1629 "cplus.met"

#line 1629 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1629 "cplus.met"
    
#line 1629 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
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
#line 1601 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1601 "cplus.met"
{
#line 1601 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1601 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1601 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1601 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1601 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1601 "cplus.met"
#line 1601 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1601 "cplus.met"
#line 1604 "cplus.met"
    {
#line 1604 "cplus.met"
        PPTREE _ptRes0=0;
#line 1604 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1604 "cplus.met"
        retTree=_ptRes0;
#line 1604 "cplus.met"
    }
#line 1604 "cplus.met"
#line 1606 "cplus.met"
    {
#line 1606 "cplus.met"
        PPTREE _ptTree0=0;
#line 1606 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1606 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1606 "cplus.met"
        }
#line 1606 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1606 "cplus.met"
    }
#line 1606 "cplus.met"
#line 1607 "cplus.met"
    {
#line 1607 "cplus.met"
        PPTREE _ptTree0=0;
#line 1607 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1607 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1607 "cplus.met"
        }
#line 1607 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1607 "cplus.met"
    }
#line 1607 "cplus.met"
#line 1608 "cplus.met"
    {
#line 1608 "cplus.met"
        PPTREE _ptTree0=0;
#line 1608 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1608 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1608 "cplus.met"
        }
#line 1608 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1608 "cplus.met"
    }
#line 1608 "cplus.met"
#line 1609 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1609 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1609 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1609 "cplus.met"
    } else {
#line 1609 "cplus.met"
        tokenAhead = 0 ;
#line 1609 "cplus.met"
    }
#line 1609 "cplus.met"
#line 1610 "cplus.met"
    {
#line 1610 "cplus.met"
        _retValue = retTree ;
#line 1610 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1610 "cplus.met"
        
#line 1610 "cplus.met"
    }
#line 1610 "cplus.met"
#line 1610 "cplus.met"
#line 1610 "cplus.met"

#line 1611 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1611 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1611 "cplus.met"
return((PPTREE) 0);
#line 1611 "cplus.met"

#line 1611 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1611 "cplus.met"

#line 1611 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1611 "cplus.met"
    _funcLevel--;
#line 1611 "cplus.met"
    return((PPTREE) -1) ;
#line 1611 "cplus.met"

#line 1611 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1611 "cplus.met"
    
#line 1611 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1611 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1611 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1611 "cplus.met"
    return _retValue ;
#line 1611 "cplus.met"
}
#line 1611 "cplus.met"

#line 1611 "cplus.met"
#line 1613 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1613 "cplus.met"
{
#line 1613 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1613 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1613 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1613 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1613 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1613 "cplus.met"
#line 1613 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1613 "cplus.met"
#line 1616 "cplus.met"
    {
#line 1616 "cplus.met"
        PPTREE _ptRes0=0;
#line 1616 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1616 "cplus.met"
        retTree=_ptRes0;
#line 1616 "cplus.met"
    }
#line 1616 "cplus.met"
#line 1618 "cplus.met"
    {
#line 1618 "cplus.met"
        PPTREE _ptTree0=0;
#line 1618 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1618 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1618 "cplus.met"
        }
#line 1618 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1618 "cplus.met"
    }
#line 1618 "cplus.met"
#line 1619 "cplus.met"
    {
#line 1619 "cplus.met"
        PPTREE _ptTree0=0;
#line 1619 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1619 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1619 "cplus.met"
        }
#line 1619 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1619 "cplus.met"
    }
#line 1619 "cplus.met"
#line 1620 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1620 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1620 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
#line 1620 "cplus.met"
    } else {
#line 1620 "cplus.met"
        tokenAhead = 0 ;
#line 1620 "cplus.met"
    }
#line 1620 "cplus.met"
#line 1621 "cplus.met"
    {
#line 1621 "cplus.met"
        _retValue = retTree ;
#line 1621 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1621 "cplus.met"
        
#line 1621 "cplus.met"
    }
#line 1621 "cplus.met"
#line 1621 "cplus.met"
#line 1621 "cplus.met"

#line 1622 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1622 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1622 "cplus.met"
return((PPTREE) 0);
#line 1622 "cplus.met"

#line 1622 "cplus.met"
data_decl_sc_ty_decl_short_exit :
#line 1622 "cplus.met"

#line 1622 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1622 "cplus.met"
    _funcLevel--;
#line 1622 "cplus.met"
    return((PPTREE) -1) ;
#line 1622 "cplus.met"

#line 1622 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1622 "cplus.met"
    
#line 1622 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
#line 1622 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1622 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1622 "cplus.met"
    return _retValue ;
#line 1622 "cplus.met"
}
#line 1622 "cplus.met"

#line 1622 "cplus.met"
#line 1591 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1591 "cplus.met"
{
#line 1591 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1591 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1591 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1591 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1591 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1591 "cplus.met"
#line 1591 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1591 "cplus.met"
#line 1593 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 35, cplus))){
#line 1593 "cplus.met"
#line 1594 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 45, cplus))== (PPTREE) -1 ) {
#line 1594 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1594 "cplus.met"
        }
#line 1594 "cplus.met"
    }
#line 1594 "cplus.met"
#line 1595 "cplus.met"
    {
#line 1595 "cplus.met"
        _retValue = retTree ;
#line 1595 "cplus.met"
        goto data_declaration_ret;
#line 1595 "cplus.met"
        
#line 1595 "cplus.met"
    }
#line 1595 "cplus.met"
#line 1595 "cplus.met"
#line 1595 "cplus.met"

#line 1596 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1596 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1596 "cplus.met"
return((PPTREE) 0);
#line 1596 "cplus.met"

#line 1596 "cplus.met"
data_declaration_exit :
#line 1596 "cplus.met"

#line 1596 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1596 "cplus.met"
    _funcLevel--;
#line 1596 "cplus.met"
    return((PPTREE) -1) ;
#line 1596 "cplus.met"

#line 1596 "cplus.met"
data_declaration_ret :
#line 1596 "cplus.met"
    
#line 1596 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1596 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1596 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1596 "cplus.met"
    return _retValue ;
#line 1596 "cplus.met"
}
#line 1596 "cplus.met"

#line 1596 "cplus.met"
#line 1665 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1665 "cplus.met"
{
#line 1665 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1665 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1665 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1665 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1665 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1665 "cplus.met"
#line 1665 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1665 "cplus.met"
#line 1667 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 43, cplus))){
#line 1667 "cplus.met"
#line 1668 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1668 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
#line 1668 "cplus.met"
        }
#line 1668 "cplus.met"
    }
#line 1668 "cplus.met"
#line 1669 "cplus.met"
    {
#line 1669 "cplus.met"
        _retValue = retTree ;
#line 1669 "cplus.met"
        goto data_declaration_for_ret;
#line 1669 "cplus.met"
        
#line 1669 "cplus.met"
    }
#line 1669 "cplus.met"
#line 1669 "cplus.met"
#line 1669 "cplus.met"

#line 1670 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1670 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1670 "cplus.met"
return((PPTREE) 0);
#line 1670 "cplus.met"

#line 1670 "cplus.met"
data_declaration_for_exit :
#line 1670 "cplus.met"

#line 1670 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1670 "cplus.met"
    _funcLevel--;
#line 1670 "cplus.met"
    return((PPTREE) -1) ;
#line 1670 "cplus.met"

#line 1670 "cplus.met"
data_declaration_for_ret :
#line 1670 "cplus.met"
    
#line 1670 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
#line 1670 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1670 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1670 "cplus.met"
    return _retValue ;
#line 1670 "cplus.met"
}
#line 1670 "cplus.met"

#line 1670 "cplus.met"
#line 1648 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1648 "cplus.met"
{
#line 1648 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1648 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1648 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1648 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1648 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1648 "cplus.met"
#line 1648 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1648 "cplus.met"
#line 1650 "cplus.met"
    {
#line 1650 "cplus.met"
        PPTREE _ptRes0=0;
#line 1650 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1650 "cplus.met"
        retTree=_ptRes0;
#line 1650 "cplus.met"
    }
#line 1650 "cplus.met"
#line 1651 "cplus.met"
    {
#line 1651 "cplus.met"
        PPTREE _ptTree0=0;
#line 1651 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1651 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1651 "cplus.met"
        }
#line 1651 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1651 "cplus.met"
    }
#line 1651 "cplus.met"
#line 1652 "cplus.met"
    {
#line 1652 "cplus.met"
        PPTREE _ptTree0=0;
#line 1652 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1652 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1652 "cplus.met"
        }
#line 1652 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1652 "cplus.met"
    }
#line 1652 "cplus.met"
#line 1653 "cplus.met"
    {
#line 1653 "cplus.met"
        PPTREE _ptTree0=0;
#line 1653 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1653 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1653 "cplus.met"
        }
#line 1653 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1653 "cplus.met"
    }
#line 1653 "cplus.met"
#line 1654 "cplus.met"
    {
#line 1654 "cplus.met"
        _retValue = retTree ;
#line 1654 "cplus.met"
        goto data_declaration_for_full_ret;
#line 1654 "cplus.met"
        
#line 1654 "cplus.met"
    }
#line 1654 "cplus.met"
#line 1654 "cplus.met"
#line 1654 "cplus.met"

#line 1655 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1655 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1655 "cplus.met"
return((PPTREE) 0);
#line 1655 "cplus.met"

#line 1655 "cplus.met"
data_declaration_for_full_exit :
#line 1655 "cplus.met"

#line 1655 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1655 "cplus.met"
    _funcLevel--;
#line 1655 "cplus.met"
    return((PPTREE) -1) ;
#line 1655 "cplus.met"

#line 1655 "cplus.met"
data_declaration_for_full_ret :
#line 1655 "cplus.met"
    
#line 1655 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
#line 1655 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1655 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1655 "cplus.met"
    return _retValue ;
#line 1655 "cplus.met"
}
#line 1655 "cplus.met"

#line 1655 "cplus.met"
#line 1657 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1657 "cplus.met"
{
#line 1657 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1657 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1657 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1657 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1657 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1657 "cplus.met"
#line 1657 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1657 "cplus.met"
#line 1659 "cplus.met"
    {
#line 1659 "cplus.met"
        PPTREE _ptRes0=0;
#line 1659 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1659 "cplus.met"
        retTree=_ptRes0;
#line 1659 "cplus.met"
    }
#line 1659 "cplus.met"
#line 1660 "cplus.met"
    {
#line 1660 "cplus.met"
        PPTREE _ptTree0=0;
#line 1660 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 1660 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1661 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1661 "cplus.met"
        }
#line 1661 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1661 "cplus.met"
    }
#line 1661 "cplus.met"
#line 1662 "cplus.met"
    {
#line 1662 "cplus.met"
        _retValue = retTree ;
#line 1662 "cplus.met"
        goto data_declaration_for_short_ret;
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
data_declaration_for_short_exit :
#line 1663 "cplus.met"

#line 1663 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1663 "cplus.met"
    _funcLevel--;
#line 1663 "cplus.met"
    return((PPTREE) -1) ;
#line 1663 "cplus.met"

#line 1663 "cplus.met"
data_declaration_for_short_ret :
#line 1663 "cplus.met"
    
#line 1663 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
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
#line 1640 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1640 "cplus.met"
{
#line 1640 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1640 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1640 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1640 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1640 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1640 "cplus.met"
#line 1640 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1640 "cplus.met"
#line 1642 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 38, cplus))){
#line 1642 "cplus.met"
#line 1643 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 1643 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
#line 1643 "cplus.met"
        }
#line 1643 "cplus.met"
    }
#line 1643 "cplus.met"
#line 1644 "cplus.met"
    {
#line 1644 "cplus.met"
        _retValue = retTree ;
#line 1644 "cplus.met"
        goto data_declaration_strict_ret;
#line 1644 "cplus.met"
        
#line 1644 "cplus.met"
    }
#line 1644 "cplus.met"
#line 1644 "cplus.met"
#line 1644 "cplus.met"

#line 1645 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1645 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1645 "cplus.met"
return((PPTREE) 0);
#line 1645 "cplus.met"

#line 1645 "cplus.met"
data_declaration_strict_exit :
#line 1645 "cplus.met"

#line 1645 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1645 "cplus.met"
    _funcLevel--;
#line 1645 "cplus.met"
    return((PPTREE) -1) ;
#line 1645 "cplus.met"

#line 1645 "cplus.met"
data_declaration_strict_ret :
#line 1645 "cplus.met"
    
#line 1645 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
#line 1645 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1645 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1645 "cplus.met"
    return _retValue ;
#line 1645 "cplus.met"
}
#line 1645 "cplus.met"

#line 1645 "cplus.met"
#line 2879 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 2879 "cplus.met"
{
#line 2879 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2879 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2879 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2879 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2879 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2879 "cplus.met"
#line 2879 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0;
#line 2879 "cplus.met"
#line 2881 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2881 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 2881 "cplus.met"
        MulFreeTree(2,expr,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 2881 "cplus.met"
    } else {
#line 2881 "cplus.met"
        tokenAhead = 0 ;
#line 2881 "cplus.met"
    }
#line 2881 "cplus.met"
#line 2882 "cplus.met"
    {
#line 2882 "cplus.met"
        PPTREE _ptRes0=0;
#line 2882 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 2882 "cplus.met"
        retTree=_ptRes0;
#line 2882 "cplus.met"
    }
#line 2882 "cplus.met"
#line 2883 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 2883 "cplus.met"
#line 2884 "cplus.met"
#line 2887 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 63, cplus)){
#line 2887 "cplus.met"
#line 2887 "cplus.met"
        }
#line 2887 "cplus.met"
#line 2890 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2890 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2890 "cplus.met"
            MulFreeTree(2,expr,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 2890 "cplus.met"
        } else {
#line 2890 "cplus.met"
            tokenAhead = 0 ;
#line 2890 "cplus.met"
        }
#line 2890 "cplus.met"
#line 2891 "cplus.met"
        {
#line 2891 "cplus.met"
            PPTREE _ptTree0=0;
#line 2891 "cplus.met"
            {
#line 2891 "cplus.met"
                PPTREE _ptRes1=0;
#line 2891 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 2891 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 2891 "cplus.met"
                _ptTree0=_ptRes1;
#line 2891 "cplus.met"
            }
#line 2891 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2891 "cplus.met"
        }
#line 2891 "cplus.met"
#line 2891 "cplus.met"
#line 2891 "cplus.met"
    }
#line 2891 "cplus.met"
#line 2893 "cplus.met"
    {
#line 2893 "cplus.met"
        PPTREE _ptTree0=0;
#line 2893 "cplus.met"
        {
#line 2893 "cplus.met"
            PPTREE _ptTree1=0;
#line 2893 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 22, cplus))== (PPTREE) -1 ) {
#line 2893 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,expr,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 2893 "cplus.met"
            }
#line 2893 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2893 "cplus.met"
        }
#line 2893 "cplus.met"
        _retValue =_ptTree0;
#line 2893 "cplus.met"
        goto deallocation_expression_ret;
#line 2893 "cplus.met"
    }
#line 2893 "cplus.met"
#line 2893 "cplus.met"
#line 2893 "cplus.met"

#line 2894 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2894 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2894 "cplus.met"
return((PPTREE) 0);
#line 2894 "cplus.met"

#line 2894 "cplus.met"
deallocation_expression_exit :
#line 2894 "cplus.met"

#line 2894 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2894 "cplus.met"
    _funcLevel--;
#line 2894 "cplus.met"
    return((PPTREE) -1) ;
#line 2894 "cplus.met"

#line 2894 "cplus.met"
deallocation_expression_ret :
#line 2894 "cplus.met"
    
#line 2894 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 2894 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2894 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2894 "cplus.met"
    return _retValue ;
#line 2894 "cplus.met"
}
#line 2894 "cplus.met"

#line 2894 "cplus.met"
#line 2259 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2259 "cplus.met"
{
#line 2259 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2259 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2259 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2259 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2259 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2259 "cplus.met"
#line 2259 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2259 "cplus.met"
#line 2261 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 122, cplus)){
#line 2261 "cplus.met"
#line 2262 "cplus.met"
        {
#line 2262 "cplus.met"
            PPTREE _ptTree0=0;
#line 2262 "cplus.met"
            {
#line 2262 "cplus.met"
                PPTREE _ptTree1=0;
#line 2262 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2262 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2262 "cplus.met"
                }
#line 2262 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2262 "cplus.met"
            }
#line 2262 "cplus.met"
            _retValue =_ptTree0;
#line 2262 "cplus.met"
            goto declarator_ret;
#line 2262 "cplus.met"
        }
#line 2262 "cplus.met"
    } else {
#line 2262 "cplus.met"
#line 2264 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2264 "cplus.met"
        switch( lexEl.Value) {
#line 2264 "cplus.met"
#line 2265 "cplus.met"
            case ETOI : 
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
                        _ptRes1= MakeTree(TYP_ADDR, 1);
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
#line 2266 "cplus.met"
            case ETCO : 
#line 2266 "cplus.met"
                tokenAhead = 0 ;
#line 2266 "cplus.met"
                CommTerm();
#line 2266 "cplus.met"
#line 2266 "cplus.met"
                {
#line 2266 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2266 "cplus.met"
                    {
#line 2266 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2266 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2266 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2266 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2266 "cplus.met"
                        }
#line 2266 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2266 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2266 "cplus.met"
                    }
#line 2266 "cplus.met"
                    _retValue =_ptTree0;
#line 2266 "cplus.met"
                    goto declarator_ret;
#line 2266 "cplus.met"
                }
#line 2266 "cplus.met"
                break;
#line 2266 "cplus.met"
#line 2267 "cplus.met"
            case TILD : 
#line 2267 "cplus.met"
                tokenAhead = 0 ;
#line 2267 "cplus.met"
                CommTerm();
#line 2267 "cplus.met"
#line 2267 "cplus.met"
                {
#line 2267 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2267 "cplus.met"
                    {
#line 2267 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2267 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2267 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2267 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2267 "cplus.met"
                        }
#line 2267 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2267 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2267 "cplus.met"
                    }
#line 2267 "cplus.met"
                    _retValue =_ptTree0;
#line 2267 "cplus.met"
                    goto declarator_ret;
#line 2267 "cplus.met"
                }
#line 2267 "cplus.met"
                break;
#line 2267 "cplus.met"
#line 2270 "cplus.met"
            case POUV : 
#line 2270 "cplus.met"
                tokenAhead = 0 ;
#line 2270 "cplus.met"
                CommTerm();
#line 2270 "cplus.met"
#line 2269 "cplus.met"
#line 2270 "cplus.met"
                {
#line 2270 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2270 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2270 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2270 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2270 "cplus.met"
                    }
#line 2270 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2270 "cplus.met"
                    retTree=_ptRes0;
#line 2270 "cplus.met"
                }
#line 2270 "cplus.met"
#line 2271 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2271 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2271 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2271 "cplus.met"
                } else {
#line 2271 "cplus.met"
                    tokenAhead = 0 ;
#line 2271 "cplus.met"
                }
#line 2271 "cplus.met"
#line 2272 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2272 "cplus.met"
#line 2273 "cplus.met"
                                            { PPTREE theTree ;
#line 2273 "cplus.met"
                                              theTree = valTree ;
#line 2273 "cplus.met"
                                              if (theTree) {
#line 2273 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2273 "cplus.met"
                                               if (NumberTree(theTree)
#line 2273 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2273 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2273 "cplus.met"
                                               else
#line 2273 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2273 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2273 "cplus.met"
                                                  /* modif portage sun */
#line 2273 "cplus.met"
                                                  retTree = valTree;
#line 2273 "cplus.met"
                                              }
#line 2273 "cplus.met"
                                                 }
#line 2273 "cplus.met"
                                        
#line 2273 "cplus.met"
                }
#line 2273 "cplus.met"
#line 2273 "cplus.met"
                break;
#line 2273 "cplus.met"
#line 2290 "cplus.met"
            case META : 
#line 2290 "cplus.met"
            case IDENT : 
#line 2290 "cplus.met"
#line 2291 "cplus.met"
#line 2292 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 2292 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2292 "cplus.met"
                }
#line 2292 "cplus.met"
#line 2293 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2293 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2293 "cplus.met"
#line 2294 "cplus.met"
                    {
#line 2294 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2294 "cplus.met"
                        {
#line 2294 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2294 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2294 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2294 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 2294 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2294 "cplus.met"
                            }
#line 2294 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2294 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2294 "cplus.met"
                        }
#line 2294 "cplus.met"
                        _retValue =_ptTree0;
#line 2294 "cplus.met"
                        goto declarator_ret;
#line 2294 "cplus.met"
                    }
#line 2294 "cplus.met"
                }
#line 2294 "cplus.met"
#line 2295 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2295 "cplus.met"
#line 2296 "cplus.met"
                                            { PPTREE theTree ;
#line 2296 "cplus.met"
                                              theTree = valTree ;
#line 2296 "cplus.met"
                                              if (theTree) {
#line 2296 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2296 "cplus.met"
                                               if (NumberTree(theTree)
#line 2296 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2296 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2296 "cplus.met"
                                               else
#line 2296 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2296 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2296 "cplus.met"
                                                  /* modif portage sun */
#line 2296 "cplus.met"
                                                  retTree = valTree;
#line 2296 "cplus.met"
                                              }
#line 2296 "cplus.met"
                                                 }
#line 2296 "cplus.met"
                                        
#line 2296 "cplus.met"
                }
#line 2296 "cplus.met"
#line 2296 "cplus.met"
                break;
#line 2296 "cplus.met"
#line 2313 "cplus.met"
            case OPERATOR : 
#line 2313 "cplus.met"
#line 2314 "cplus.met"
#line 2315 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2315 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2315 "cplus.met"
                }
#line 2315 "cplus.met"
#line 2316 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 48, cplus)){
#line 2316 "cplus.met"
#line 2317 "cplus.met"
                                            { PPTREE theTree ;
#line 2317 "cplus.met"
                                              theTree = valTree ;
#line 2317 "cplus.met"
                                              if (theTree) {
#line 2317 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2317 "cplus.met"
                                               if (NumberTree(theTree)
#line 2317 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2317 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2317 "cplus.met"
                                               else
#line 2317 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2317 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2317 "cplus.met"
                                                  /* modif portage sun */
#line 2317 "cplus.met"
                                                  retTree = valTree;
#line 2317 "cplus.met"
                                              }
#line 2317 "cplus.met"
                                                 }
#line 2317 "cplus.met"
                                        
#line 2317 "cplus.met"
                }
#line 2317 "cplus.met"
#line 2317 "cplus.met"
                break;
#line 2317 "cplus.met"
            default :
#line 2317 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or ~ or ( or IDENT or operator")
#line 2317 "cplus.met"
                break;
#line 2317 "cplus.met"
        }
#line 2317 "cplus.met"
    }
#line 2317 "cplus.met"
#line 2335 "cplus.met"
    {
#line 2335 "cplus.met"
        _retValue = retTree ;
#line 2335 "cplus.met"
        goto declarator_ret;
#line 2335 "cplus.met"
        
#line 2335 "cplus.met"
    }
#line 2335 "cplus.met"
#line 2335 "cplus.met"
#line 2335 "cplus.met"

#line 2336 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2336 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2336 "cplus.met"
return((PPTREE) 0);
#line 2336 "cplus.met"

#line 2336 "cplus.met"
declarator_exit :
#line 2336 "cplus.met"

#line 2336 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2336 "cplus.met"
    _funcLevel--;
#line 2336 "cplus.met"
    return((PPTREE) -1) ;
#line 2336 "cplus.met"

#line 2336 "cplus.met"
declarator_ret :
#line 2336 "cplus.met"
    
#line 2336 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2336 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2336 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2336 "cplus.met"
    return _retValue ;
#line 2336 "cplus.met"
}
#line 2336 "cplus.met"

#line 2336 "cplus.met"
#line 2227 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2227 "cplus.met"
{
#line 2227 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2227 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2227 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2227 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2227 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2227 "cplus.met"
#line 2227 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2227 "cplus.met"
#line 2229 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2229 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2229 "cplus.met"
#line 2230 "cplus.met"
        
#line 2230 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2230 "cplus.met"
        goto declarator_follow_exit;
#line 2230 "cplus.met"
#line 2230 "cplus.met"
    }
#line 2230 "cplus.met"
#line 2231 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2231 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2231 "cplus.met"
#line 2232 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2232 "cplus.met"
        switch( lexEl.Value) {
#line 2232 "cplus.met"
#line 2235 "cplus.met"
            case COUV : 
#line 2235 "cplus.met"
                tokenAhead = 0 ;
#line 2235 "cplus.met"
                CommTerm();
#line 2235 "cplus.met"
#line 2234 "cplus.met"
#line 2235 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 63, cplus)){
#line 2235 "cplus.met"
#line 2236 "cplus.met"
                    {
#line 2236 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2236 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2236 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2236 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2236 "cplus.met"
                        retTree=_ptRes0;
#line 2236 "cplus.met"
                    }
#line 2236 "cplus.met"
                } else {
#line 2236 "cplus.met"
#line 2238 "cplus.met"
                    {
#line 2238 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2238 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2238 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2238 "cplus.met"
                        retTree=_ptRes0;
#line 2238 "cplus.met"
                    }
#line 2238 "cplus.met"
                }
#line 2238 "cplus.met"
#line 2239 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2239 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2239 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2239 "cplus.met"
                } else {
#line 2239 "cplus.met"
                    tokenAhead = 0 ;
#line 2239 "cplus.met"
                }
#line 2239 "cplus.met"
#line 2239 "cplus.met"
                break;
#line 2239 "cplus.met"
#line 2246 "cplus.met"
            case POUV : 
#line 2246 "cplus.met"
#line 2242 "cplus.met"
#line 2245 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 11, cplus)){
#line 2245 "cplus.met"
#line 2247 "cplus.met"
#line 2248 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2248 "cplus.met"
#line 2249 "cplus.met"
                    {
#line 2249 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2249 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2249 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2249 "cplus.met"
                        }
#line 2249 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2249 "cplus.met"
                    }
#line 2249 "cplus.met"
#line 2250 "cplus.met"
                    retTree = valTree ;
#line 2250 "cplus.met"
#line 2250 "cplus.met"
#line 2250 "cplus.met"
                } else {
#line 2250 "cplus.met"
#line 2253 "cplus.met"
                    {
#line 2253 "cplus.met"
                        _retValue = retTree ;
#line 2253 "cplus.met"
                        goto declarator_follow_ret;
#line 2253 "cplus.met"
                        
#line 2253 "cplus.met"
                    }
#line 2253 "cplus.met"
                }
#line 2253 "cplus.met"
#line 2253 "cplus.met"
                break;
#line 2253 "cplus.met"
            default :
#line 2253 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2253 "cplus.met"
                break;
#line 2253 "cplus.met"
        }
#line 2253 "cplus.met"
    } 
#line 2253 "cplus.met"
#line 2256 "cplus.met"
    {
#line 2256 "cplus.met"
        _retValue = retTree ;
#line 2256 "cplus.met"
        goto declarator_follow_ret;
#line 2256 "cplus.met"
        
#line 2256 "cplus.met"
    }
#line 2256 "cplus.met"
#line 2256 "cplus.met"
#line 2256 "cplus.met"

#line 2257 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2257 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2257 "cplus.met"
return((PPTREE) 0);
#line 2257 "cplus.met"

#line 2257 "cplus.met"
declarator_follow_exit :
#line 2257 "cplus.met"

#line 2257 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2257 "cplus.met"
    _funcLevel--;
#line 2257 "cplus.met"
    return((PPTREE) -1) ;
#line 2257 "cplus.met"

#line 2257 "cplus.met"
declarator_follow_ret :
#line 2257 "cplus.met"
    
#line 2257 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2257 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2257 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2257 "cplus.met"
    return _retValue ;
#line 2257 "cplus.met"
}
#line 2257 "cplus.met"

#line 2257 "cplus.met"
#line 1492 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1492 "cplus.met"
{
#line 1492 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1492 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1492 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1492 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1492 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1492 "cplus.met"
#line 1492 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1492 "cplus.met"
#line 1492 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1492 "cplus.met"
#line 1492 "cplus.met"
    _addlist1 = list ;
#line 1492 "cplus.met"
#line 1494 "cplus.met"
    do {
#line 1494 "cplus.met"
#line 1495 "cplus.met"
        {
#line 1495 "cplus.met"
            PPTREE _ptTree0=0;
#line 1495 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1495 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1495 "cplus.met"
            }
#line 1495 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1495 "cplus.met"
        }
#line 1495 "cplus.met"
#line 1495 "cplus.met"
        if (list){
#line 1495 "cplus.met"
#line 1495 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1495 "cplus.met"
        } else {
#line 1495 "cplus.met"
#line 1495 "cplus.met"
            list = _addlist1 ;
#line 1495 "cplus.met"
        }
#line 1495 "cplus.met"
#line 1495 "cplus.met"
#line 1496 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1496 "cplus.met"
#line 1497 "cplus.met"
    {
#line 1497 "cplus.met"
        _retValue = list ;
#line 1497 "cplus.met"
        goto declarator_list_ret;
#line 1497 "cplus.met"
        
#line 1497 "cplus.met"
    }
#line 1497 "cplus.met"
#line 1497 "cplus.met"
#line 1497 "cplus.met"

#line 1498 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1498 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1498 "cplus.met"
return((PPTREE) 0);
#line 1498 "cplus.met"

#line 1498 "cplus.met"
declarator_list_exit :
#line 1498 "cplus.met"

#line 1498 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1498 "cplus.met"
    _funcLevel--;
#line 1498 "cplus.met"
    return((PPTREE) -1) ;
#line 1498 "cplus.met"

#line 1498 "cplus.met"
declarator_list_ret :
#line 1498 "cplus.met"
    
#line 1498 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1498 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1498 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1498 "cplus.met"
    return _retValue ;
#line 1498 "cplus.met"
}
#line 1498 "cplus.met"

#line 1498 "cplus.met"
#line 1483 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1483 "cplus.met"
{
#line 1483 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1483 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1483 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1483 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1483 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1483 "cplus.met"
#line 1483 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1483 "cplus.met"
#line 1483 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1483 "cplus.met"
#line 1483 "cplus.met"
    _addlist1 = list ;
#line 1483 "cplus.met"
#line 1485 "cplus.met"
    do {
#line 1485 "cplus.met"
#line 1486 "cplus.met"
        {
#line 1486 "cplus.met"
            PPTREE _ptTree0=0;
#line 1486 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1486 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1486 "cplus.met"
            }
#line 1486 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1486 "cplus.met"
        }
#line 1486 "cplus.met"
#line 1486 "cplus.met"
        if (list){
#line 1486 "cplus.met"
#line 1486 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1486 "cplus.met"
        } else {
#line 1486 "cplus.met"
#line 1486 "cplus.met"
            list = _addlist1 ;
#line 1486 "cplus.met"
        }
#line 1486 "cplus.met"
#line 1486 "cplus.met"
#line 1487 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1487 "cplus.met"
#line 1488 "cplus.met"
    {
#line 1488 "cplus.met"
        _retValue = list ;
#line 1488 "cplus.met"
        goto declarator_list_init_ret;
#line 1488 "cplus.met"
        
#line 1488 "cplus.met"
    }
#line 1488 "cplus.met"
#line 1488 "cplus.met"
#line 1488 "cplus.met"

#line 1489 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1489 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1489 "cplus.met"
return((PPTREE) 0);
#line 1489 "cplus.met"

#line 1489 "cplus.met"
declarator_list_init_exit :
#line 1489 "cplus.met"

#line 1489 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1489 "cplus.met"
    _funcLevel--;
#line 1489 "cplus.met"
    return((PPTREE) -1) ;
#line 1489 "cplus.met"

#line 1489 "cplus.met"
declarator_list_init_ret :
#line 1489 "cplus.met"
    
#line 1489 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1489 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1489 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1489 "cplus.met"
    return _retValue ;
#line 1489 "cplus.met"
}
#line 1489 "cplus.met"

#line 1489 "cplus.met"
#line 1463 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1463 "cplus.met"
{
#line 1463 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1463 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1463 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1463 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1463 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1463 "cplus.met"
#line 1463 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1463 "cplus.met"
#line 1465 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1465 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1465 "cplus.met"
    }
#line 1465 "cplus.met"
#line 1466 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1466 "cplus.met"
    switch( lexEl.Value) {
#line 1466 "cplus.met"
#line 1467 "cplus.met"
        case EGAL : 
#line 1467 "cplus.met"
            tokenAhead = 0 ;
#line 1467 "cplus.met"
            CommTerm();
#line 1467 "cplus.met"
#line 1467 "cplus.met"
            {
#line 1467 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1467 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1467 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1467 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 1467 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1467 "cplus.met"
                }
#line 1467 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1467 "cplus.met"
                valTree=_ptRes0;
#line 1467 "cplus.met"
            }
#line 1467 "cplus.met"
            break;
#line 1467 "cplus.met"
#line 1470 "cplus.met"
        case POUV : 
#line 1470 "cplus.met"
            tokenAhead = 0 ;
#line 1470 "cplus.met"
            CommTerm();
#line 1470 "cplus.met"
#line 1469 "cplus.met"
#line 1470 "cplus.met"
            {
#line 1470 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1470 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1470 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1470 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1470 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1470 "cplus.met"
                }
#line 1470 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1470 "cplus.met"
                valTree=_ptRes0;
#line 1470 "cplus.met"
            }
#line 1470 "cplus.met"
#line 1471 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1471 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1471 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1471 "cplus.met"
            } else {
#line 1471 "cplus.met"
                tokenAhead = 0 ;
#line 1471 "cplus.met"
            }
#line 1471 "cplus.met"
#line 1471 "cplus.met"
            break;
#line 1471 "cplus.met"
#line 1475 "cplus.met"
        case AOUV : 
#line 1475 "cplus.met"
            tokenAhead = 0 ;
#line 1475 "cplus.met"
            CommTerm();
#line 1475 "cplus.met"
#line 1474 "cplus.met"
#line 1475 "cplus.met"
            {
#line 1475 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1475 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_BRA, 2);
#line 1475 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1475 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1475 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1475 "cplus.met"
                }
#line 1475 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1475 "cplus.met"
                valTree=_ptRes0;
#line 1475 "cplus.met"
            }
#line 1475 "cplus.met"
#line 1476 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1476 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1476 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,"}")
#line 1476 "cplus.met"
            } else {
#line 1476 "cplus.met"
                tokenAhead = 0 ;
#line 1476 "cplus.met"
            }
#line 1476 "cplus.met"
#line 1476 "cplus.met"
            break;
#line 1476 "cplus.met"
#line 1476 "cplus.met"
        default : 
#line 1476 "cplus.met"
#line 1476 "cplus.met"
            break;
#line 1476 "cplus.met"
    }
#line 1476 "cplus.met"
#line 1480 "cplus.met"
    {
#line 1480 "cplus.met"
        _retValue = valTree ;
#line 1480 "cplus.met"
        goto declarator_value_ret;
#line 1480 "cplus.met"
        
#line 1480 "cplus.met"
    }
#line 1480 "cplus.met"
#line 1480 "cplus.met"
#line 1480 "cplus.met"

#line 1481 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1481 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1481 "cplus.met"
return((PPTREE) 0);
#line 1481 "cplus.met"

#line 1481 "cplus.met"
declarator_value_exit :
#line 1481 "cplus.met"

#line 1481 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1481 "cplus.met"
    _funcLevel--;
#line 1481 "cplus.met"
    return((PPTREE) -1) ;
#line 1481 "cplus.met"

#line 1481 "cplus.met"
declarator_value_ret :
#line 1481 "cplus.met"
    
#line 1481 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1481 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1481 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1481 "cplus.met"
    return _retValue ;
#line 1481 "cplus.met"
}
#line 1481 "cplus.met"

#line 1481 "cplus.met"
#line 1418 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1418 "cplus.met"
{
#line 1418 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1418 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1418 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1418 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1418 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1418 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1418 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1418 "cplus.met"
#line 1418 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1418 "cplus.met"
#line 1418 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1418 "cplus.met"
#line 1420 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1420 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1420 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1420 "cplus.met"
    } else {
#line 1420 "cplus.met"
        tokenAhead = 0 ;
#line 1420 "cplus.met"
    }
#line 1420 "cplus.met"
#line 1421 "cplus.met"
    {
#line 1421 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1421 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1421 "cplus.met"
        {
#line 1421 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1421 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1421 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1421 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1421 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
#line 1421 "cplus.met"
            } else {
#line 1421 "cplus.met"
                tokenAhead = 0 ;
#line 1421 "cplus.met"
            }
#line 1421 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1421 "cplus.met"
            _ptTree0=_ptRes1;
#line 1421 "cplus.met"
        }
#line 1421 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1421 "cplus.met"
        retTree=_ptRes0;
#line 1421 "cplus.met"
    }
#line 1421 "cplus.met"
#line 1422 "cplus.met"
    {
#line 1422 "cplus.met"
        keepCarriage = 1 ;
#line 1422 "cplus.met"
#line 1423 "cplus.met"
#line 1424 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1424 "cplus.met"
#line 1425 "cplus.met"
            {
#line 1425 "cplus.met"
                PPTREE _ptTree0=0;
#line 1425 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 1425 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1425 "cplus.met"
                }
#line 1425 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1425 "cplus.met"
            }
#line 1425 "cplus.met"
#line 1425 "cplus.met"
        }
#line 1425 "cplus.met"
#line 1426 "cplus.met"
        ExtUnputBuf();
#line 1426 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1426 "cplus.met"
            NextChar() ;
#line 1426 "cplus.met"
        ptStockBuf = -1;
#line 1426 "cplus.met"
        lexEl.Erase();
#line 1426 "cplus.met"
        tokenAhead = 0;
#line 1426 "cplus.met"
        oldLine=line,oldCol=col;
#line 1426 "cplus.met"
        if ( !lexCallLex) {
#line 1426 "cplus.met"
            PUT_COORD_CALL;
#line 1426 "cplus.met"
        }
#line 1426 "cplus.met"
#line 1427 "cplus.met"
        {
#line 1427 "cplus.met"
            keepAll = 1 ;
#line 1427 "cplus.met"
#line 1428 "cplus.met"
#line 1428 "cplus.met"
            _addlist1 = listDefine ;
#line 1428 "cplus.met"
#line 1429 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1429 "cplus.met"
#line 1430 "cplus.met"
#line 1430 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1430 "cplus.met"
#line 1430 "cplus.met"
                if (listDefine){
#line 1430 "cplus.met"
#line 1430 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1430 "cplus.met"
                } else {
#line 1430 "cplus.met"
#line 1430 "cplus.met"
                    listDefine = _addlist1 ;
#line 1430 "cplus.met"
                }
#line 1430 "cplus.met"
            } 
#line 1430 "cplus.met"
#line 1431 "cplus.met"
            {
#line 1431 "cplus.met"
                PPTREE _ptTree0=0;
#line 1431 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1431 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1431 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1431 "cplus.met"
                } else {
#line 1431 "cplus.met"
                    tokenAhead = 0 ;
#line 1431 "cplus.met"
                }
#line 1431 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1431 "cplus.met"
            }
#line 1431 "cplus.met"
#line 1431 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1431 "cplus.met"
        }
#line 1431 "cplus.met"
#line 1431 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1431 "cplus.met"
    }
#line 1431 "cplus.met"
#line 1434 "cplus.met"
    {
#line 1434 "cplus.met"
        PPTREE _ptTree0=0;
#line 1434 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1434 "cplus.met"
        _retValue =_ptTree0;
#line 1434 "cplus.met"
        goto define_dir_ret;
#line 1434 "cplus.met"
    }
#line 1434 "cplus.met"
#line 1434 "cplus.met"
#line 1434 "cplus.met"

#line 1435 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1435 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1435 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1435 "cplus.met"
keepAll =  _oldkeepAll;
#line 1435 "cplus.met"
return((PPTREE) 0);
#line 1435 "cplus.met"

#line 1435 "cplus.met"
define_dir_exit :
#line 1435 "cplus.met"

#line 1435 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1435 "cplus.met"
    _funcLevel--;
#line 1435 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1435 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1435 "cplus.met"
    return((PPTREE) -1) ;
#line 1435 "cplus.met"

#line 1435 "cplus.met"
define_dir_ret :
#line 1435 "cplus.met"
    
#line 1435 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1435 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1435 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1435 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1435 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1435 "cplus.met"
    return _retValue ;
#line 1435 "cplus.met"
}
#line 1435 "cplus.met"

#line 1435 "cplus.met"
