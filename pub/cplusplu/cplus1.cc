/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3152 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3152 "cplus.met"
{
#line 3152 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3152 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3152 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3152 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3152 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3152 "cplus.met"
#line 3152 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3152 "cplus.met"
#line 3152 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3152 "cplus.met"
#line 3154 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3154 "cplus.met"
#line 3155 "cplus.met"
#line 3155 "cplus.met"
        _addlist1 = list ;
#line 3155 "cplus.met"
#line 3156 "cplus.met"
        do {
#line 3156 "cplus.met"
#line 3157 "cplus.met"
            {
#line 3157 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3157 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 3);
#line 3157 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 27, cplus))== (PPTREE) -1 ) {
#line 3157 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3157 "cplus.met"
                }
#line 3157 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3157 "cplus.met"
                retTree=_ptRes0;
#line 3157 "cplus.met"
            }
#line 3157 "cplus.met"
#line 3158 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3158 "cplus.met"
            switch( lexEl.Value) {
#line 3158 "cplus.met"
#line 3161 "cplus.met"
                case POUV : 
#line 3161 "cplus.met"
#line 3160 "cplus.met"
#line 3161 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3161 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3161 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3161 "cplus.met"
                    } else {
#line 3161 "cplus.met"
                        tokenAhead = 0 ;
#line 3161 "cplus.met"
                    }
#line 3161 "cplus.met"
#line 3162 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 62, cplus)){
#line 3162 "cplus.met"
#line 3163 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3163 "cplus.met"
#line 3163 "cplus.met"
                    }
#line 3163 "cplus.met"
#line 3164 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3164 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3164 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,")")
#line 3164 "cplus.met"
                    } else {
#line 3164 "cplus.met"
                        tokenAhead = 0 ;
#line 3164 "cplus.met"
                    }
#line 3164 "cplus.met"
#line 3164 "cplus.met"
                    break;
#line 3164 "cplus.met"
#line 3168 "cplus.met"
                default : 
#line 3168 "cplus.met"
#line 3167 "cplus.met"
#line 3168 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3168 "cplus.met"
                    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3168 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"{")
#line 3168 "cplus.met"
                    } else {
#line 3168 "cplus.met"
                        tokenAhead = 0 ;
#line 3168 "cplus.met"
                    }
#line 3168 "cplus.met"
#line 3169 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 62, cplus)){
#line 3169 "cplus.met"
#line 3170 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3170 "cplus.met"
#line 3170 "cplus.met"
                    }
#line 3170 "cplus.met"
#line 3171 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3171 "cplus.met"
                    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3171 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"}")
#line 3171 "cplus.met"
                    } else {
#line 3171 "cplus.met"
                        tokenAhead = 0 ;
#line 3171 "cplus.met"
                    }
#line 3171 "cplus.met"
#line 3172 "cplus.met"
                    {
#line 3172 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3172 "cplus.met"
                        {
#line 3172 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3172 "cplus.met"
                            _ptRes1= MakeTree(BRACE_MARKER, 0);
#line 3172 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3172 "cplus.met"
                        }
#line 3172 "cplus.met"
                        ReplaceTree(retTree , 3 , _ptTree0);
#line 3172 "cplus.met"
                    }
#line 3172 "cplus.met"
#line 3172 "cplus.met"
                    break;
#line 3172 "cplus.met"
            }
#line 3172 "cplus.met"
#line 3175 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3175 "cplus.met"
#line 3175 "cplus.met"
            if (list){
#line 3175 "cplus.met"
#line 3175 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3175 "cplus.met"
            } else {
#line 3175 "cplus.met"
#line 3175 "cplus.met"
                list = _addlist1 ;
#line 3175 "cplus.met"
            }
#line 3175 "cplus.met"
#line 3175 "cplus.met"
#line 3176 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3176 "cplus.met"
#line 3177 "cplus.met"
        {
#line 3177 "cplus.met"
            PPTREE _ptTree0=0;
#line 3177 "cplus.met"
            {
#line 3177 "cplus.met"
                PPTREE _ptRes1=0;
#line 3177 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3177 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3177 "cplus.met"
                _ptTree0=_ptRes1;
#line 3177 "cplus.met"
            }
#line 3177 "cplus.met"
            _retValue =_ptTree0;
#line 3177 "cplus.met"
            goto ctor_initializer_ret;
#line 3177 "cplus.met"
        }
#line 3177 "cplus.met"
#line 3177 "cplus.met"
#line 3177 "cplus.met"
    }
#line 3177 "cplus.met"
#line 3177 "cplus.met"
#line 3178 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3178 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3178 "cplus.met"
return((PPTREE) 0);
#line 3178 "cplus.met"

#line 3178 "cplus.met"
ctor_initializer_exit :
#line 3178 "cplus.met"

#line 3178 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3178 "cplus.met"
    _funcLevel--;
#line 3178 "cplus.met"
    return((PPTREE) -1) ;
#line 3178 "cplus.met"

#line 3178 "cplus.met"
ctor_initializer_ret :
#line 3178 "cplus.met"
    
#line 3178 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3178 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3178 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3178 "cplus.met"
    return _retValue ;
#line 3178 "cplus.met"
}
#line 3178 "cplus.met"

#line 3178 "cplus.met"
#line 1615 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1615 "cplus.met"
{
#line 1615 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1615 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1615 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1615 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1615 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1615 "cplus.met"
#line 1615 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1615 "cplus.met"
#line 1618 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 96, cplus))){
#line 1618 "cplus.met"
#line 1620 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 1620 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1620 "cplus.met"
        }
#line 1620 "cplus.met"
    }
#line 1620 "cplus.met"
#line 1621 "cplus.met"
    {
#line 1621 "cplus.met"
        _retValue = retTree ;
#line 1621 "cplus.met"
        goto data_decl_exotic_ret;
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
data_decl_exotic_exit :
#line 1622 "cplus.met"

#line 1622 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1622 "cplus.met"
    _funcLevel--;
#line 1622 "cplus.met"
    return((PPTREE) -1) ;
#line 1622 "cplus.met"

#line 1622 "cplus.met"
data_decl_exotic_ret :
#line 1622 "cplus.met"
    
#line 1622 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
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
#line 1568 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1568 "cplus.met"
{
#line 1568 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1568 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1568 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1568 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1568 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1568 "cplus.met"
#line 1568 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1568 "cplus.met"
#line 1570 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 35, cplus))){
#line 1570 "cplus.met"
#line 1571 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 36, cplus))== (PPTREE) -1 ) {
#line 1571 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1571 "cplus.met"
        }
#line 1571 "cplus.met"
    }
#line 1571 "cplus.met"
#line 1572 "cplus.met"
    {
#line 1572 "cplus.met"
        _retValue = retTree ;
#line 1572 "cplus.met"
        goto data_decl_sc_decl_ret;
#line 1572 "cplus.met"
        
#line 1572 "cplus.met"
    }
#line 1572 "cplus.met"
#line 1572 "cplus.met"
#line 1572 "cplus.met"

#line 1573 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1573 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1573 "cplus.met"
return((PPTREE) 0);
#line 1573 "cplus.met"

#line 1573 "cplus.met"
data_decl_sc_decl_exit :
#line 1573 "cplus.met"

#line 1573 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1573 "cplus.met"
    _funcLevel--;
#line 1573 "cplus.met"
    return((PPTREE) -1) ;
#line 1573 "cplus.met"

#line 1573 "cplus.met"
data_decl_sc_decl_ret :
#line 1573 "cplus.met"
    
#line 1573 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
#line 1573 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1573 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1573 "cplus.met"
    return _retValue ;
#line 1573 "cplus.met"
}
#line 1573 "cplus.met"

#line 1573 "cplus.met"
#line 1551 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1551 "cplus.met"
{
#line 1551 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1551 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1551 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1551 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1551 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1551 "cplus.met"
#line 1551 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1551 "cplus.met"
#line 1553 "cplus.met"
    {
#line 1553 "cplus.met"
        PPTREE _ptRes0=0;
#line 1553 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1553 "cplus.met"
        retTree=_ptRes0;
#line 1553 "cplus.met"
    }
#line 1553 "cplus.met"
#line 1554 "cplus.met"
    {
#line 1554 "cplus.met"
        PPTREE _ptTree0=0;
#line 1554 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 1554 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1554 "cplus.met"
        }
#line 1554 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1554 "cplus.met"
    }
#line 1554 "cplus.met"
#line 1555 "cplus.met"
    {
#line 1555 "cplus.met"
        PPTREE _ptTree0=0;
#line 1555 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1555 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1555 "cplus.met"
        }
#line 1555 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1555 "cplus.met"
    }
#line 1555 "cplus.met"
#line 1556 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1556 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1556 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1556 "cplus.met"
    } else {
#line 1556 "cplus.met"
        tokenAhead = 0 ;
#line 1556 "cplus.met"
    }
#line 1556 "cplus.met"
#line 1557 "cplus.met"
    {
#line 1557 "cplus.met"
        _retValue = retTree ;
#line 1557 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1557 "cplus.met"
        
#line 1557 "cplus.met"
    }
#line 1557 "cplus.met"
#line 1557 "cplus.met"
#line 1557 "cplus.met"

#line 1558 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1558 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1558 "cplus.met"
return((PPTREE) 0);
#line 1558 "cplus.met"

#line 1558 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1558 "cplus.met"

#line 1558 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1558 "cplus.met"
    _funcLevel--;
#line 1558 "cplus.met"
    return((PPTREE) -1) ;
#line 1558 "cplus.met"

#line 1558 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1558 "cplus.met"
    
#line 1558 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1558 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1558 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1558 "cplus.met"
    return _retValue ;
#line 1558 "cplus.met"
}
#line 1558 "cplus.met"

#line 1558 "cplus.met"
#line 1560 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1560 "cplus.met"
{
#line 1560 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1560 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1560 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1560 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1560 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1560 "cplus.met"
#line 1560 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1560 "cplus.met"
#line 1562 "cplus.met"
    {
#line 1562 "cplus.met"
        PPTREE _ptRes0=0;
#line 1562 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1562 "cplus.met"
        retTree=_ptRes0;
#line 1562 "cplus.met"
    }
#line 1562 "cplus.met"
#line 1563 "cplus.met"
    {
#line 1563 "cplus.met"
        PPTREE _ptTree0=0;
#line 1563 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1563 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1563 "cplus.met"
        }
#line 1563 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1563 "cplus.met"
    }
#line 1563 "cplus.met"
#line 1564 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1564 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1564 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1564 "cplus.met"
    } else {
#line 1564 "cplus.met"
        tokenAhead = 0 ;
#line 1564 "cplus.met"
    }
#line 1564 "cplus.met"
#line 1565 "cplus.met"
    {
#line 1565 "cplus.met"
        _retValue = retTree ;
#line 1565 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1565 "cplus.met"
        
#line 1565 "cplus.met"
    }
#line 1565 "cplus.met"
#line 1565 "cplus.met"
#line 1565 "cplus.met"

#line 1566 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1566 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1566 "cplus.met"
return((PPTREE) 0);
#line 1566 "cplus.met"

#line 1566 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1566 "cplus.met"

#line 1566 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1566 "cplus.met"
    _funcLevel--;
#line 1566 "cplus.met"
    return((PPTREE) -1) ;
#line 1566 "cplus.met"

#line 1566 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1566 "cplus.met"
    
#line 1566 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1566 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1566 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1566 "cplus.met"
    return _retValue ;
#line 1566 "cplus.met"
}
#line 1566 "cplus.met"

#line 1566 "cplus.met"
#line 1608 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1608 "cplus.met"
{
#line 1608 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1608 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1608 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1608 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1608 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1608 "cplus.met"
#line 1608 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1608 "cplus.met"
#line 1610 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 38, cplus))){
#line 1610 "cplus.met"
#line 1611 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 39, cplus))== (PPTREE) -1 ) {
#line 1611 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1611 "cplus.met"
        }
#line 1611 "cplus.met"
    }
#line 1611 "cplus.met"
#line 1612 "cplus.met"
    {
#line 1612 "cplus.met"
        _retValue = retTree ;
#line 1612 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
#line 1612 "cplus.met"
        
#line 1612 "cplus.met"
    }
#line 1612 "cplus.met"
#line 1612 "cplus.met"
#line 1612 "cplus.met"

#line 1613 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1613 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1613 "cplus.met"
return((PPTREE) 0);
#line 1613 "cplus.met"

#line 1613 "cplus.met"
data_decl_sc_ty_decl_exit :
#line 1613 "cplus.met"

#line 1613 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1613 "cplus.met"
    _funcLevel--;
#line 1613 "cplus.met"
    return((PPTREE) -1) ;
#line 1613 "cplus.met"

#line 1613 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1613 "cplus.met"
    
#line 1613 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
#line 1613 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1613 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1613 "cplus.met"
    return _retValue ;
#line 1613 "cplus.met"
}
#line 1613 "cplus.met"

#line 1613 "cplus.met"
#line 1585 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1585 "cplus.met"
{
#line 1585 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1585 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1585 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1585 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1585 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1585 "cplus.met"
#line 1585 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1585 "cplus.met"
#line 1588 "cplus.met"
    {
#line 1588 "cplus.met"
        PPTREE _ptRes0=0;
#line 1588 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1588 "cplus.met"
        retTree=_ptRes0;
#line 1588 "cplus.met"
    }
#line 1588 "cplus.met"
#line 1590 "cplus.met"
    {
#line 1590 "cplus.met"
        PPTREE _ptTree0=0;
#line 1590 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 1590 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1590 "cplus.met"
        }
#line 1590 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1590 "cplus.met"
    }
#line 1590 "cplus.met"
#line 1591 "cplus.met"
    {
#line 1591 "cplus.met"
        PPTREE _ptTree0=0;
#line 1591 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1591 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1591 "cplus.met"
        }
#line 1591 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1591 "cplus.met"
    }
#line 1591 "cplus.met"
#line 1592 "cplus.met"
    {
#line 1592 "cplus.met"
        PPTREE _ptTree0=0;
#line 1592 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1592 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1592 "cplus.met"
        }
#line 1592 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1592 "cplus.met"
    }
#line 1592 "cplus.met"
#line 1593 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1593 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1593 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1593 "cplus.met"
    } else {
#line 1593 "cplus.met"
        tokenAhead = 0 ;
#line 1593 "cplus.met"
    }
#line 1593 "cplus.met"
#line 1594 "cplus.met"
    {
#line 1594 "cplus.met"
        _retValue = retTree ;
#line 1594 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1594 "cplus.met"
        
#line 1594 "cplus.met"
    }
#line 1594 "cplus.met"
#line 1594 "cplus.met"
#line 1594 "cplus.met"

#line 1595 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1595 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1595 "cplus.met"
return((PPTREE) 0);
#line 1595 "cplus.met"

#line 1595 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1595 "cplus.met"

#line 1595 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1595 "cplus.met"
    _funcLevel--;
#line 1595 "cplus.met"
    return((PPTREE) -1) ;
#line 1595 "cplus.met"

#line 1595 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1595 "cplus.met"
    
#line 1595 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1595 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1595 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1595 "cplus.met"
    return _retValue ;
#line 1595 "cplus.met"
}
#line 1595 "cplus.met"

#line 1595 "cplus.met"
#line 1597 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1597 "cplus.met"
{
#line 1597 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1597 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1597 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1597 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1597 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1597 "cplus.met"
#line 1597 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1597 "cplus.met"
#line 1600 "cplus.met"
    {
#line 1600 "cplus.met"
        PPTREE _ptRes0=0;
#line 1600 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1600 "cplus.met"
        retTree=_ptRes0;
#line 1600 "cplus.met"
    }
#line 1600 "cplus.met"
#line 1602 "cplus.met"
    {
#line 1602 "cplus.met"
        PPTREE _ptTree0=0;
#line 1602 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1602 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1602 "cplus.met"
        }
#line 1602 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1602 "cplus.met"
    }
#line 1602 "cplus.met"
#line 1603 "cplus.met"
    {
#line 1603 "cplus.met"
        PPTREE _ptTree0=0;
#line 1603 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1603 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1603 "cplus.met"
        }
#line 1603 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1603 "cplus.met"
    }
#line 1603 "cplus.met"
#line 1604 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1604 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1604 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
#line 1604 "cplus.met"
    } else {
#line 1604 "cplus.met"
        tokenAhead = 0 ;
#line 1604 "cplus.met"
    }
#line 1604 "cplus.met"
#line 1605 "cplus.met"
    {
#line 1605 "cplus.met"
        _retValue = retTree ;
#line 1605 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1605 "cplus.met"
        
#line 1605 "cplus.met"
    }
#line 1605 "cplus.met"
#line 1605 "cplus.met"
#line 1605 "cplus.met"

#line 1606 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1606 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1606 "cplus.met"
return((PPTREE) 0);
#line 1606 "cplus.met"

#line 1606 "cplus.met"
data_decl_sc_ty_decl_short_exit :
#line 1606 "cplus.met"

#line 1606 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1606 "cplus.met"
    _funcLevel--;
#line 1606 "cplus.met"
    return((PPTREE) -1) ;
#line 1606 "cplus.met"

#line 1606 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1606 "cplus.met"
    
#line 1606 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
#line 1606 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1606 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1606 "cplus.met"
    return _retValue ;
#line 1606 "cplus.met"
}
#line 1606 "cplus.met"

#line 1606 "cplus.met"
#line 1575 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1575 "cplus.met"
{
#line 1575 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1575 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1575 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1575 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1575 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1575 "cplus.met"
#line 1575 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1575 "cplus.met"
#line 1577 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 34, cplus))){
#line 1577 "cplus.met"
#line 1578 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 44, cplus))== (PPTREE) -1 ) {
#line 1578 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1578 "cplus.met"
        }
#line 1578 "cplus.met"
    }
#line 1578 "cplus.met"
#line 1579 "cplus.met"
    {
#line 1579 "cplus.met"
        _retValue = retTree ;
#line 1579 "cplus.met"
        goto data_declaration_ret;
#line 1579 "cplus.met"
        
#line 1579 "cplus.met"
    }
#line 1579 "cplus.met"
#line 1579 "cplus.met"
#line 1579 "cplus.met"

#line 1580 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1580 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1580 "cplus.met"
return((PPTREE) 0);
#line 1580 "cplus.met"

#line 1580 "cplus.met"
data_declaration_exit :
#line 1580 "cplus.met"

#line 1580 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1580 "cplus.met"
    _funcLevel--;
#line 1580 "cplus.met"
    return((PPTREE) -1) ;
#line 1580 "cplus.met"

#line 1580 "cplus.met"
data_declaration_ret :
#line 1580 "cplus.met"
    
#line 1580 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
#line 1580 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1580 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1580 "cplus.met"
    return _retValue ;
#line 1580 "cplus.met"
}
#line 1580 "cplus.met"

#line 1580 "cplus.met"
#line 1649 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1649 "cplus.met"
{
#line 1649 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1649 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1649 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1649 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1649 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1649 "cplus.met"
#line 1649 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1649 "cplus.met"
#line 1651 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 42, cplus))){
#line 1651 "cplus.met"
#line 1652 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 43, cplus))== (PPTREE) -1 ) {
#line 1652 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
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
        goto data_declaration_for_ret;
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
data_declaration_for_exit :
#line 1654 "cplus.met"

#line 1654 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1654 "cplus.met"
    _funcLevel--;
#line 1654 "cplus.met"
    return((PPTREE) -1) ;
#line 1654 "cplus.met"

#line 1654 "cplus.met"
data_declaration_for_ret :
#line 1654 "cplus.met"
    
#line 1654 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
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
#line 1632 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1632 "cplus.met"
{
#line 1632 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1632 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1632 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1632 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1632 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1632 "cplus.met"
#line 1632 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1632 "cplus.met"
#line 1634 "cplus.met"
    {
#line 1634 "cplus.met"
        PPTREE _ptRes0=0;
#line 1634 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1634 "cplus.met"
        retTree=_ptRes0;
#line 1634 "cplus.met"
    }
#line 1634 "cplus.met"
#line 1635 "cplus.met"
    {
#line 1635 "cplus.met"
        PPTREE _ptTree0=0;
#line 1635 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 1635 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1635 "cplus.met"
        }
#line 1635 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1635 "cplus.met"
    }
#line 1635 "cplus.met"
#line 1636 "cplus.met"
    {
#line 1636 "cplus.met"
        PPTREE _ptTree0=0;
#line 1636 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1636 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1637 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1637 "cplus.met"
        }
#line 1637 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1637 "cplus.met"
    }
#line 1637 "cplus.met"
#line 1638 "cplus.met"
    {
#line 1638 "cplus.met"
        _retValue = retTree ;
#line 1638 "cplus.met"
        goto data_declaration_for_full_ret;
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
data_declaration_for_full_exit :
#line 1639 "cplus.met"

#line 1639 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1639 "cplus.met"
    _funcLevel--;
#line 1639 "cplus.met"
    return((PPTREE) -1) ;
#line 1639 "cplus.met"

#line 1639 "cplus.met"
data_declaration_for_full_ret :
#line 1639 "cplus.met"
    
#line 1639 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
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
#line 1641 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1641 "cplus.met"
{
#line 1641 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1641 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1641 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1641 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1641 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1641 "cplus.met"
#line 1641 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1641 "cplus.met"
#line 1643 "cplus.met"
    {
#line 1643 "cplus.met"
        PPTREE _ptRes0=0;
#line 1643 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1643 "cplus.met"
        retTree=_ptRes0;
#line 1643 "cplus.met"
    }
#line 1643 "cplus.met"
#line 1644 "cplus.met"
    {
#line 1644 "cplus.met"
        PPTREE _ptTree0=0;
#line 1644 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1644 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1644 "cplus.met"
        }
#line 1644 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1644 "cplus.met"
    }
#line 1644 "cplus.met"
#line 1645 "cplus.met"
    {
#line 1645 "cplus.met"
        PPTREE _ptTree0=0;
#line 1645 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1645 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1645 "cplus.met"
        }
#line 1645 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1645 "cplus.met"
    }
#line 1645 "cplus.met"
#line 1646 "cplus.met"
    {
#line 1646 "cplus.met"
        _retValue = retTree ;
#line 1646 "cplus.met"
        goto data_declaration_for_short_ret;
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
data_declaration_for_short_exit :
#line 1647 "cplus.met"

#line 1647 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1647 "cplus.met"
    _funcLevel--;
#line 1647 "cplus.met"
    return((PPTREE) -1) ;
#line 1647 "cplus.met"

#line 1647 "cplus.met"
data_declaration_for_short_ret :
#line 1647 "cplus.met"
    
#line 1647 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
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
#line 1624 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1624 "cplus.met"
{
#line 1624 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1624 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1624 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1624 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1624 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1624 "cplus.met"
#line 1624 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1624 "cplus.met"
#line 1626 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 37, cplus))){
#line 1626 "cplus.met"
#line 1627 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 1627 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
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
        goto data_declaration_strict_ret;
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
data_declaration_strict_exit :
#line 1629 "cplus.met"

#line 1629 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1629 "cplus.met"
    _funcLevel--;
#line 1629 "cplus.met"
    return((PPTREE) -1) ;
#line 1629 "cplus.met"

#line 1629 "cplus.met"
data_declaration_strict_ret :
#line 1629 "cplus.met"
    
#line 1629 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
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
#line 2829 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 2829 "cplus.met"
{
#line 2829 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2829 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2829 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2829 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2829 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2829 "cplus.met"
#line 2829 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0;
#line 2829 "cplus.met"
#line 2831 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2831 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 2831 "cplus.met"
        MulFreeTree(2,expr,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 2831 "cplus.met"
    } else {
#line 2831 "cplus.met"
        tokenAhead = 0 ;
#line 2831 "cplus.met"
    }
#line 2831 "cplus.met"
#line 2832 "cplus.met"
    {
#line 2832 "cplus.met"
        PPTREE _ptRes0=0;
#line 2832 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 2832 "cplus.met"
        retTree=_ptRes0;
#line 2832 "cplus.met"
    }
#line 2832 "cplus.met"
#line 2833 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 2833 "cplus.met"
#line 2834 "cplus.met"
#line 2837 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 62, cplus)){
#line 2837 "cplus.met"
#line 2837 "cplus.met"
        }
#line 2837 "cplus.met"
#line 2840 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2840 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2840 "cplus.met"
            MulFreeTree(2,expr,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 2840 "cplus.met"
        } else {
#line 2840 "cplus.met"
            tokenAhead = 0 ;
#line 2840 "cplus.met"
        }
#line 2840 "cplus.met"
#line 2841 "cplus.met"
        {
#line 2841 "cplus.met"
            PPTREE _ptTree0=0;
#line 2841 "cplus.met"
            {
#line 2841 "cplus.met"
                PPTREE _ptRes1=0;
#line 2841 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 2841 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 2841 "cplus.met"
                _ptTree0=_ptRes1;
#line 2841 "cplus.met"
            }
#line 2841 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2841 "cplus.met"
        }
#line 2841 "cplus.met"
#line 2841 "cplus.met"
#line 2841 "cplus.met"
    }
#line 2841 "cplus.met"
#line 2843 "cplus.met"
    {
#line 2843 "cplus.met"
        PPTREE _ptTree0=0;
#line 2843 "cplus.met"
        {
#line 2843 "cplus.met"
            PPTREE _ptTree1=0;
#line 2843 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2843 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,expr,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 2843 "cplus.met"
            }
#line 2843 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2843 "cplus.met"
        }
#line 2843 "cplus.met"
        _retValue =_ptTree0;
#line 2843 "cplus.met"
        goto deallocation_expression_ret;
#line 2843 "cplus.met"
    }
#line 2843 "cplus.met"
#line 2843 "cplus.met"
#line 2843 "cplus.met"

#line 2844 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2844 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2844 "cplus.met"
return((PPTREE) 0);
#line 2844 "cplus.met"

#line 2844 "cplus.met"
deallocation_expression_exit :
#line 2844 "cplus.met"

#line 2844 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 2844 "cplus.met"
    _funcLevel--;
#line 2844 "cplus.met"
    return((PPTREE) -1) ;
#line 2844 "cplus.met"

#line 2844 "cplus.met"
deallocation_expression_ret :
#line 2844 "cplus.met"
    
#line 2844 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 2844 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2844 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2844 "cplus.met"
    return _retValue ;
#line 2844 "cplus.met"
}
#line 2844 "cplus.met"

#line 2844 "cplus.met"
#line 2218 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2218 "cplus.met"
{
#line 2218 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2218 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2218 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2218 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2218 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2218 "cplus.met"
#line 2218 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2218 "cplus.met"
#line 2220 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 121, cplus)){
#line 2220 "cplus.met"
#line 2221 "cplus.met"
        {
#line 2221 "cplus.met"
            PPTREE _ptTree0=0;
#line 2221 "cplus.met"
            {
#line 2221 "cplus.met"
                PPTREE _ptTree1=0;
#line 2221 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2221 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2221 "cplus.met"
                }
#line 2221 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2221 "cplus.met"
            }
#line 2221 "cplus.met"
            _retValue =_ptTree0;
#line 2221 "cplus.met"
            goto declarator_ret;
#line 2221 "cplus.met"
        }
#line 2221 "cplus.met"
    } else {
#line 2221 "cplus.met"
#line 2223 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2223 "cplus.met"
        switch( lexEl.Value) {
#line 2223 "cplus.met"
#line 2224 "cplus.met"
            case ETOI : 
#line 2224 "cplus.met"
                tokenAhead = 0 ;
#line 2224 "cplus.met"
                CommTerm();
#line 2224 "cplus.met"
#line 2224 "cplus.met"
                {
#line 2224 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2224 "cplus.met"
                    {
#line 2224 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2224 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2224 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2224 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2224 "cplus.met"
                        }
#line 2224 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2224 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2224 "cplus.met"
                    }
#line 2224 "cplus.met"
                    _retValue =_ptTree0;
#line 2224 "cplus.met"
                    goto declarator_ret;
#line 2224 "cplus.met"
                }
#line 2224 "cplus.met"
                break;
#line 2224 "cplus.met"
#line 2225 "cplus.met"
            case ETCO : 
#line 2225 "cplus.met"
                tokenAhead = 0 ;
#line 2225 "cplus.met"
                CommTerm();
#line 2225 "cplus.met"
#line 2225 "cplus.met"
                {
#line 2225 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2225 "cplus.met"
                    {
#line 2225 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2225 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2225 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2225 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2225 "cplus.met"
                        }
#line 2225 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2225 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2225 "cplus.met"
                    }
#line 2225 "cplus.met"
                    _retValue =_ptTree0;
#line 2225 "cplus.met"
                    goto declarator_ret;
#line 2225 "cplus.met"
                }
#line 2225 "cplus.met"
                break;
#line 2225 "cplus.met"
#line 2226 "cplus.met"
            case TILD : 
#line 2226 "cplus.met"
                tokenAhead = 0 ;
#line 2226 "cplus.met"
                CommTerm();
#line 2226 "cplus.met"
#line 2226 "cplus.met"
                {
#line 2226 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2226 "cplus.met"
                    {
#line 2226 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2226 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2226 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2226 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2226 "cplus.met"
                        }
#line 2226 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2226 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2226 "cplus.met"
                    }
#line 2226 "cplus.met"
                    _retValue =_ptTree0;
#line 2226 "cplus.met"
                    goto declarator_ret;
#line 2226 "cplus.met"
                }
#line 2226 "cplus.met"
                break;
#line 2226 "cplus.met"
#line 2229 "cplus.met"
            case POUV : 
#line 2229 "cplus.met"
                tokenAhead = 0 ;
#line 2229 "cplus.met"
                CommTerm();
#line 2229 "cplus.met"
#line 2228 "cplus.met"
#line 2229 "cplus.met"
                {
#line 2229 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2229 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2229 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2229 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2229 "cplus.met"
                    }
#line 2229 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2229 "cplus.met"
                    retTree=_ptRes0;
#line 2229 "cplus.met"
                }
#line 2229 "cplus.met"
#line 2230 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2230 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2230 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2230 "cplus.met"
                } else {
#line 2230 "cplus.met"
                    tokenAhead = 0 ;
#line 2230 "cplus.met"
                }
#line 2230 "cplus.met"
#line 2231 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 47, cplus)){
#line 2231 "cplus.met"
#line 2232 "cplus.met"
                                            { PPTREE theTree ;
#line 2232 "cplus.met"
                                              theTree = valTree ;
#line 2232 "cplus.met"
                                              if (theTree) {
#line 2232 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2232 "cplus.met"
                                               if (NumberTree(theTree)
#line 2232 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2232 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2232 "cplus.met"
                                               else
#line 2232 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2232 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2232 "cplus.met"
                                                  /* modif portage sun */
#line 2232 "cplus.met"
                                                  retTree = valTree;
#line 2232 "cplus.met"
                                              }
#line 2232 "cplus.met"
                                                 }
#line 2232 "cplus.met"
                                        
#line 2232 "cplus.met"
                }
#line 2232 "cplus.met"
#line 2232 "cplus.met"
                break;
#line 2232 "cplus.met"
#line 2249 "cplus.met"
            case META : 
#line 2249 "cplus.met"
            case IDENT : 
#line 2249 "cplus.met"
#line 2250 "cplus.met"
#line 2251 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2251 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2251 "cplus.met"
                }
#line 2251 "cplus.met"
#line 2252 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2252 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2252 "cplus.met"
#line 2253 "cplus.met"
                    {
#line 2253 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2253 "cplus.met"
                        {
#line 2253 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2253 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2253 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2253 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 2253 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2253 "cplus.met"
                            }
#line 2253 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
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
                }
#line 2253 "cplus.met"
#line 2254 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 47, cplus)){
#line 2254 "cplus.met"
#line 2255 "cplus.met"
                                            { PPTREE theTree ;
#line 2255 "cplus.met"
                                              theTree = valTree ;
#line 2255 "cplus.met"
                                              if (theTree) {
#line 2255 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2255 "cplus.met"
                                               if (NumberTree(theTree)
#line 2255 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2255 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2255 "cplus.met"
                                               else
#line 2255 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2255 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2255 "cplus.met"
                                                  /* modif portage sun */
#line 2255 "cplus.met"
                                                  retTree = valTree;
#line 2255 "cplus.met"
                                              }
#line 2255 "cplus.met"
                                                 }
#line 2255 "cplus.met"
                                        
#line 2255 "cplus.met"
                }
#line 2255 "cplus.met"
#line 2255 "cplus.met"
                break;
#line 2255 "cplus.met"
#line 2272 "cplus.met"
            case OPERATOR : 
#line 2272 "cplus.met"
#line 2273 "cplus.met"
#line 2274 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 2274 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2274 "cplus.met"
                }
#line 2274 "cplus.met"
#line 2275 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 47, cplus)){
#line 2275 "cplus.met"
#line 2276 "cplus.met"
                                            { PPTREE theTree ;
#line 2276 "cplus.met"
                                              theTree = valTree ;
#line 2276 "cplus.met"
                                              if (theTree) {
#line 2276 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2276 "cplus.met"
                                               if (NumberTree(theTree)
#line 2276 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2276 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2276 "cplus.met"
                                               else
#line 2276 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2276 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2276 "cplus.met"
                                                  /* modif portage sun */
#line 2276 "cplus.met"
                                                  retTree = valTree;
#line 2276 "cplus.met"
                                              }
#line 2276 "cplus.met"
                                                 }
#line 2276 "cplus.met"
                                        
#line 2276 "cplus.met"
                }
#line 2276 "cplus.met"
#line 2276 "cplus.met"
                break;
#line 2276 "cplus.met"
            default :
#line 2276 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or ~ or ( or IDENT or operator")
#line 2276 "cplus.met"
                break;
#line 2276 "cplus.met"
        }
#line 2276 "cplus.met"
    }
#line 2276 "cplus.met"
#line 2294 "cplus.met"
    {
#line 2294 "cplus.met"
        _retValue = retTree ;
#line 2294 "cplus.met"
        goto declarator_ret;
#line 2294 "cplus.met"
        
#line 2294 "cplus.met"
    }
#line 2294 "cplus.met"
#line 2294 "cplus.met"
#line 2294 "cplus.met"

#line 2295 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2295 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2295 "cplus.met"
return((PPTREE) 0);
#line 2295 "cplus.met"

#line 2295 "cplus.met"
declarator_exit :
#line 2295 "cplus.met"

#line 2295 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2295 "cplus.met"
    _funcLevel--;
#line 2295 "cplus.met"
    return((PPTREE) -1) ;
#line 2295 "cplus.met"

#line 2295 "cplus.met"
declarator_ret :
#line 2295 "cplus.met"
    
#line 2295 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2295 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2295 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2295 "cplus.met"
    return _retValue ;
#line 2295 "cplus.met"
}
#line 2295 "cplus.met"

#line 2295 "cplus.met"
#line 2186 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2186 "cplus.met"
{
#line 2186 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2186 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2186 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2186 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2186 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2186 "cplus.met"
#line 2186 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2186 "cplus.met"
#line 2188 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2188 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2188 "cplus.met"
#line 2189 "cplus.met"
        
#line 2189 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2189 "cplus.met"
        goto declarator_follow_exit;
#line 2189 "cplus.met"
#line 2189 "cplus.met"
    }
#line 2189 "cplus.met"
#line 2190 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2190 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2190 "cplus.met"
#line 2191 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2191 "cplus.met"
        switch( lexEl.Value) {
#line 2191 "cplus.met"
#line 2194 "cplus.met"
            case COUV : 
#line 2194 "cplus.met"
                tokenAhead = 0 ;
#line 2194 "cplus.met"
                CommTerm();
#line 2194 "cplus.met"
#line 2193 "cplus.met"
#line 2194 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 62, cplus)){
#line 2194 "cplus.met"
#line 2195 "cplus.met"
                    {
#line 2195 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2195 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2195 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2195 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2195 "cplus.met"
                        retTree=_ptRes0;
#line 2195 "cplus.met"
                    }
#line 2195 "cplus.met"
                } else {
#line 2195 "cplus.met"
#line 2197 "cplus.met"
                    {
#line 2197 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2197 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2197 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2197 "cplus.met"
                        retTree=_ptRes0;
#line 2197 "cplus.met"
                    }
#line 2197 "cplus.met"
                }
#line 2197 "cplus.met"
#line 2198 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2198 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2198 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2198 "cplus.met"
                } else {
#line 2198 "cplus.met"
                    tokenAhead = 0 ;
#line 2198 "cplus.met"
                }
#line 2198 "cplus.met"
#line 2198 "cplus.met"
                break;
#line 2198 "cplus.met"
#line 2205 "cplus.met"
            case POUV : 
#line 2205 "cplus.met"
#line 2201 "cplus.met"
#line 2204 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 11, cplus)){
#line 2204 "cplus.met"
#line 2206 "cplus.met"
#line 2207 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2207 "cplus.met"
#line 2208 "cplus.met"
                    {
#line 2208 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2208 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 2208 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2208 "cplus.met"
                        }
#line 2208 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2208 "cplus.met"
                    }
#line 2208 "cplus.met"
#line 2209 "cplus.met"
                    retTree = valTree ;
#line 2209 "cplus.met"
#line 2209 "cplus.met"
#line 2209 "cplus.met"
                } else {
#line 2209 "cplus.met"
#line 2212 "cplus.met"
                    {
#line 2212 "cplus.met"
                        _retValue = retTree ;
#line 2212 "cplus.met"
                        goto declarator_follow_ret;
#line 2212 "cplus.met"
                        
#line 2212 "cplus.met"
                    }
#line 2212 "cplus.met"
                }
#line 2212 "cplus.met"
#line 2212 "cplus.met"
                break;
#line 2212 "cplus.met"
            default :
#line 2212 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2212 "cplus.met"
                break;
#line 2212 "cplus.met"
        }
#line 2212 "cplus.met"
    } 
#line 2212 "cplus.met"
#line 2215 "cplus.met"
    {
#line 2215 "cplus.met"
        _retValue = retTree ;
#line 2215 "cplus.met"
        goto declarator_follow_ret;
#line 2215 "cplus.met"
        
#line 2215 "cplus.met"
    }
#line 2215 "cplus.met"
#line 2215 "cplus.met"
#line 2215 "cplus.met"

#line 2216 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2216 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2216 "cplus.met"
return((PPTREE) 0);
#line 2216 "cplus.met"

#line 2216 "cplus.met"
declarator_follow_exit :
#line 2216 "cplus.met"

#line 2216 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2216 "cplus.met"
    _funcLevel--;
#line 2216 "cplus.met"
    return((PPTREE) -1) ;
#line 2216 "cplus.met"

#line 2216 "cplus.met"
declarator_follow_ret :
#line 2216 "cplus.met"
    
#line 2216 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2216 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2216 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2216 "cplus.met"
    return _retValue ;
#line 2216 "cplus.met"
}
#line 2216 "cplus.met"

#line 2216 "cplus.met"
#line 1476 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1476 "cplus.met"
{
#line 1476 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1476 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1476 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1476 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1476 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1476 "cplus.met"
#line 1476 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1476 "cplus.met"
#line 1476 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1476 "cplus.met"
#line 1476 "cplus.met"
    _addlist1 = list ;
#line 1476 "cplus.met"
#line 1478 "cplus.met"
    do {
#line 1478 "cplus.met"
#line 1479 "cplus.met"
        {
#line 1479 "cplus.met"
            PPTREE _ptTree0=0;
#line 1479 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1479 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1479 "cplus.met"
            }
#line 1479 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1479 "cplus.met"
        }
#line 1479 "cplus.met"
#line 1479 "cplus.met"
        if (list){
#line 1479 "cplus.met"
#line 1479 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1479 "cplus.met"
        } else {
#line 1479 "cplus.met"
#line 1479 "cplus.met"
            list = _addlist1 ;
#line 1479 "cplus.met"
        }
#line 1479 "cplus.met"
#line 1479 "cplus.met"
#line 1480 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1480 "cplus.met"
#line 1481 "cplus.met"
    {
#line 1481 "cplus.met"
        _retValue = list ;
#line 1481 "cplus.met"
        goto declarator_list_ret;
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
declarator_list_exit :
#line 1482 "cplus.met"

#line 1482 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1482 "cplus.met"
    _funcLevel--;
#line 1482 "cplus.met"
    return((PPTREE) -1) ;
#line 1482 "cplus.met"

#line 1482 "cplus.met"
declarator_list_ret :
#line 1482 "cplus.met"
    
#line 1482 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
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
#line 1467 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1467 "cplus.met"
{
#line 1467 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1467 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1467 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1467 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1467 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1467 "cplus.met"
#line 1467 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1467 "cplus.met"
#line 1467 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1467 "cplus.met"
#line 1467 "cplus.met"
    _addlist1 = list ;
#line 1467 "cplus.met"
#line 1469 "cplus.met"
    do {
#line 1469 "cplus.met"
#line 1470 "cplus.met"
        {
#line 1470 "cplus.met"
            PPTREE _ptTree0=0;
#line 1470 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 50, cplus))== (PPTREE) -1 ) {
#line 1470 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1470 "cplus.met"
            }
#line 1470 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1470 "cplus.met"
        }
#line 1470 "cplus.met"
#line 1470 "cplus.met"
        if (list){
#line 1470 "cplus.met"
#line 1470 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1470 "cplus.met"
        } else {
#line 1470 "cplus.met"
#line 1470 "cplus.met"
            list = _addlist1 ;
#line 1470 "cplus.met"
        }
#line 1470 "cplus.met"
#line 1470 "cplus.met"
#line 1471 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1471 "cplus.met"
#line 1472 "cplus.met"
    {
#line 1472 "cplus.met"
        _retValue = list ;
#line 1472 "cplus.met"
        goto declarator_list_init_ret;
#line 1472 "cplus.met"
        
#line 1472 "cplus.met"
    }
#line 1472 "cplus.met"
#line 1472 "cplus.met"
#line 1472 "cplus.met"

#line 1473 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1473 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1473 "cplus.met"
return((PPTREE) 0);
#line 1473 "cplus.met"

#line 1473 "cplus.met"
declarator_list_init_exit :
#line 1473 "cplus.met"

#line 1473 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1473 "cplus.met"
    _funcLevel--;
#line 1473 "cplus.met"
    return((PPTREE) -1) ;
#line 1473 "cplus.met"

#line 1473 "cplus.met"
declarator_list_init_ret :
#line 1473 "cplus.met"
    
#line 1473 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
#line 1473 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1473 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1473 "cplus.met"
    return _retValue ;
#line 1473 "cplus.met"
}
#line 1473 "cplus.met"

#line 1473 "cplus.met"
#line 1447 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1447 "cplus.met"
{
#line 1447 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1447 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1447 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1447 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1447 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1447 "cplus.met"
#line 1447 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1447 "cplus.met"
#line 1449 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1449 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1449 "cplus.met"
    }
#line 1449 "cplus.met"
#line 1450 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1450 "cplus.met"
    switch( lexEl.Value) {
#line 1450 "cplus.met"
#line 1451 "cplus.met"
        case EGAL : 
#line 1451 "cplus.met"
            tokenAhead = 0 ;
#line 1451 "cplus.met"
            CommTerm();
#line 1451 "cplus.met"
#line 1451 "cplus.met"
            {
#line 1451 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1451 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1451 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1451 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 1451 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1451 "cplus.met"
                }
#line 1451 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1451 "cplus.met"
                valTree=_ptRes0;
#line 1451 "cplus.met"
            }
#line 1451 "cplus.met"
            break;
#line 1451 "cplus.met"
#line 1454 "cplus.met"
        case POUV : 
#line 1454 "cplus.met"
            tokenAhead = 0 ;
#line 1454 "cplus.met"
            CommTerm();
#line 1454 "cplus.met"
#line 1453 "cplus.met"
#line 1454 "cplus.met"
            {
#line 1454 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1454 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1454 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1454 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1454 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1454 "cplus.met"
                }
#line 1454 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1454 "cplus.met"
                valTree=_ptRes0;
#line 1454 "cplus.met"
            }
#line 1454 "cplus.met"
#line 1455 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1455 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1455 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1455 "cplus.met"
            } else {
#line 1455 "cplus.met"
                tokenAhead = 0 ;
#line 1455 "cplus.met"
            }
#line 1455 "cplus.met"
#line 1455 "cplus.met"
            break;
#line 1455 "cplus.met"
#line 1459 "cplus.met"
        case AOUV : 
#line 1459 "cplus.met"
            tokenAhead = 0 ;
#line 1459 "cplus.met"
            CommTerm();
#line 1459 "cplus.met"
#line 1458 "cplus.met"
#line 1459 "cplus.met"
            {
#line 1459 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1459 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_BRA, 2);
#line 1459 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1459 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1459 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1459 "cplus.met"
                }
#line 1459 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1459 "cplus.met"
                valTree=_ptRes0;
#line 1459 "cplus.met"
            }
#line 1459 "cplus.met"
#line 1460 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1460 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1460 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,"}")
#line 1460 "cplus.met"
            } else {
#line 1460 "cplus.met"
                tokenAhead = 0 ;
#line 1460 "cplus.met"
            }
#line 1460 "cplus.met"
#line 1460 "cplus.met"
            break;
#line 1460 "cplus.met"
#line 1460 "cplus.met"
        default : 
#line 1460 "cplus.met"
#line 1460 "cplus.met"
            break;
#line 1460 "cplus.met"
    }
#line 1460 "cplus.met"
#line 1464 "cplus.met"
    {
#line 1464 "cplus.met"
        _retValue = valTree ;
#line 1464 "cplus.met"
        goto declarator_value_ret;
#line 1464 "cplus.met"
        
#line 1464 "cplus.met"
    }
#line 1464 "cplus.met"
#line 1464 "cplus.met"
#line 1464 "cplus.met"

#line 1465 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1465 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1465 "cplus.met"
return((PPTREE) 0);
#line 1465 "cplus.met"

#line 1465 "cplus.met"
declarator_value_exit :
#line 1465 "cplus.met"

#line 1465 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1465 "cplus.met"
    _funcLevel--;
#line 1465 "cplus.met"
    return((PPTREE) -1) ;
#line 1465 "cplus.met"

#line 1465 "cplus.met"
declarator_value_ret :
#line 1465 "cplus.met"
    
#line 1465 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1465 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1465 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1465 "cplus.met"
    return _retValue ;
#line 1465 "cplus.met"
}
#line 1465 "cplus.met"

#line 1465 "cplus.met"
#line 1402 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1402 "cplus.met"
{
#line 1402 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1402 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1402 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1402 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1402 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1402 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1402 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1402 "cplus.met"
#line 1402 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1402 "cplus.met"
#line 1402 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1402 "cplus.met"
#line 1404 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1404 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1404 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1404 "cplus.met"
    } else {
#line 1404 "cplus.met"
        tokenAhead = 0 ;
#line 1404 "cplus.met"
    }
#line 1404 "cplus.met"
#line 1405 "cplus.met"
    {
#line 1405 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1405 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1405 "cplus.met"
        {
#line 1405 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1405 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1405 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1405 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1405 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
#line 1405 "cplus.met"
            } else {
#line 1405 "cplus.met"
                tokenAhead = 0 ;
#line 1405 "cplus.met"
            }
#line 1405 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1405 "cplus.met"
            _ptTree0=_ptRes1;
#line 1405 "cplus.met"
        }
#line 1405 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1405 "cplus.met"
        retTree=_ptRes0;
#line 1405 "cplus.met"
    }
#line 1405 "cplus.met"
#line 1406 "cplus.met"
    {
#line 1406 "cplus.met"
        keepCarriage = 1 ;
#line 1406 "cplus.met"
#line 1407 "cplus.met"
#line 1408 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1408 "cplus.met"
#line 1409 "cplus.met"
            {
#line 1409 "cplus.met"
                PPTREE _ptTree0=0;
#line 1409 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 1409 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1409 "cplus.met"
                }
#line 1409 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1409 "cplus.met"
            }
#line 1409 "cplus.met"
#line 1409 "cplus.met"
        }
#line 1409 "cplus.met"
#line 1410 "cplus.met"
        ExtUnputBuf();
#line 1410 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1410 "cplus.met"
            NextChar() ;
#line 1410 "cplus.met"
        ptStockBuf = -1;
#line 1410 "cplus.met"
        lexEl.Erase();
#line 1410 "cplus.met"
        tokenAhead = 0;
#line 1410 "cplus.met"
        oldLine=line,oldCol=col;
#line 1410 "cplus.met"
        if ( !lexCallLex) {
#line 1410 "cplus.met"
            PUT_COORD_CALL;
#line 1410 "cplus.met"
        }
#line 1410 "cplus.met"
#line 1411 "cplus.met"
        {
#line 1411 "cplus.met"
            keepAll = 1 ;
#line 1411 "cplus.met"
#line 1412 "cplus.met"
#line 1412 "cplus.met"
            _addlist1 = listDefine ;
#line 1412 "cplus.met"
#line 1413 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1413 "cplus.met"
#line 1414 "cplus.met"
#line 1414 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1414 "cplus.met"
#line 1414 "cplus.met"
                if (listDefine){
#line 1414 "cplus.met"
#line 1414 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1414 "cplus.met"
                } else {
#line 1414 "cplus.met"
#line 1414 "cplus.met"
                    listDefine = _addlist1 ;
#line 1414 "cplus.met"
                }
#line 1414 "cplus.met"
            } 
#line 1414 "cplus.met"
#line 1415 "cplus.met"
            {
#line 1415 "cplus.met"
                PPTREE _ptTree0=0;
#line 1415 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1415 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1415 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1415 "cplus.met"
                } else {
#line 1415 "cplus.met"
                    tokenAhead = 0 ;
#line 1415 "cplus.met"
                }
#line 1415 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1415 "cplus.met"
            }
#line 1415 "cplus.met"
#line 1415 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1415 "cplus.met"
        }
#line 1415 "cplus.met"
#line 1415 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1415 "cplus.met"
    }
#line 1415 "cplus.met"
#line 1418 "cplus.met"
    {
#line 1418 "cplus.met"
        PPTREE _ptTree0=0;
#line 1418 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1418 "cplus.met"
        _retValue =_ptTree0;
#line 1418 "cplus.met"
        goto define_dir_ret;
#line 1418 "cplus.met"
    }
#line 1418 "cplus.met"
#line 1418 "cplus.met"
#line 1418 "cplus.met"

#line 1419 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1419 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1419 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1419 "cplus.met"
keepAll =  _oldkeepAll;
#line 1419 "cplus.met"
return((PPTREE) 0);
#line 1419 "cplus.met"

#line 1419 "cplus.met"
define_dir_exit :
#line 1419 "cplus.met"

#line 1419 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1419 "cplus.met"
    _funcLevel--;
#line 1419 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1419 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1419 "cplus.met"
    return((PPTREE) -1) ;
#line 1419 "cplus.met"

#line 1419 "cplus.met"
define_dir_ret :
#line 1419 "cplus.met"
    
#line 1419 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1419 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1419 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1419 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1419 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1419 "cplus.met"
    return _retValue ;
#line 1419 "cplus.met"
}
#line 1419 "cplus.met"

#line 1419 "cplus.met"
