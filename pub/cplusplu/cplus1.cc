/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3326 "cplus.met"
PPTREE cplus::ctor_initializer ( int error_free)
#line 3326 "cplus.met"
{
#line 3326 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3326 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3326 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3326 "cplus.met"
    int _Debug = TRACE_RULE("ctor_initializer",TRACE_ENTER,(PPTREE)0);
#line 3326 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3326 "cplus.met"
#line 3326 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3326 "cplus.met"
#line 3326 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,val = (PPTREE) 0;
#line 3326 "cplus.met"
#line 3328 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3328 "cplus.met"
#line 3329 "cplus.met"
#line 3329 "cplus.met"
        _addlist1 = list ;
#line 3329 "cplus.met"
#line 3330 "cplus.met"
        do {
#line 3330 "cplus.met"
#line 3331 "cplus.met"
            {
#line 3331 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3331 "cplus.met"
                _ptRes0= MakeTree(CTOR_INIT, 3);
#line 3331 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 3331 "cplus.met"
                    MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,list,retTree,val);
                    PROG_EXIT(ctor_initializer_exit,"ctor_initializer")
#line 3331 "cplus.met"
                }
#line 3331 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3331 "cplus.met"
                retTree=_ptRes0;
#line 3331 "cplus.met"
            }
#line 3331 "cplus.met"
#line 3332 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3332 "cplus.met"
            switch( lexEl.Value) {
#line 3332 "cplus.met"
#line 3335 "cplus.met"
                case POUV : 
#line 3335 "cplus.met"
#line 3334 "cplus.met"
#line 3335 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3335 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3335 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"(")
#line 3335 "cplus.met"
                    } else {
#line 3335 "cplus.met"
                        tokenAhead = 0 ;
#line 3335 "cplus.met"
                    }
#line 3335 "cplus.met"
#line 3336 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 65, cplus)){
#line 3336 "cplus.met"
#line 3337 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3337 "cplus.met"
#line 3337 "cplus.met"
                    }
#line 3337 "cplus.met"
#line 3338 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3338 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3338 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,")")
#line 3338 "cplus.met"
                    } else {
#line 3338 "cplus.met"
                        tokenAhead = 0 ;
#line 3338 "cplus.met"
                    }
#line 3338 "cplus.met"
#line 3338 "cplus.met"
                    break;
#line 3338 "cplus.met"
#line 3342 "cplus.met"
                default : 
#line 3342 "cplus.met"
#line 3341 "cplus.met"
#line 3342 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3342 "cplus.met"
                    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3342 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"{")
#line 3342 "cplus.met"
                    } else {
#line 3342 "cplus.met"
                        tokenAhead = 0 ;
#line 3342 "cplus.met"
                    }
#line 3342 "cplus.met"
#line 3343 "cplus.met"
                    if (NPUSH_CALL_AFF_VERIF(val = ,_Tak(expression), 65, cplus)){
#line 3343 "cplus.met"
#line 3344 "cplus.met"
                        ReplaceTree(retTree ,2 ,val );
#line 3344 "cplus.met"
#line 3344 "cplus.met"
                    }
#line 3344 "cplus.met"
#line 3345 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3345 "cplus.met"
                    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3345 "cplus.met"
                        MulFreeTree(4,_addlist1,list,retTree,val);
                        TOKEN_EXIT(ctor_initializer_exit,"}")
#line 3345 "cplus.met"
                    } else {
#line 3345 "cplus.met"
                        tokenAhead = 0 ;
#line 3345 "cplus.met"
                    }
#line 3345 "cplus.met"
#line 3346 "cplus.met"
                    {
#line 3346 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3346 "cplus.met"
                        {
#line 3346 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3346 "cplus.met"
                            _ptRes1= MakeTree(BRACE_MARKER, 0);
#line 3346 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3346 "cplus.met"
                        }
#line 3346 "cplus.met"
                        ReplaceTree(retTree , 3 , _ptTree0);
#line 3346 "cplus.met"
                    }
#line 3346 "cplus.met"
#line 3346 "cplus.met"
                    break;
#line 3346 "cplus.met"
            }
#line 3346 "cplus.met"
#line 3349 "cplus.met"
            _addlist1 =AddList(_addlist1 ,retTree );
#line 3349 "cplus.met"
#line 3349 "cplus.met"
            if (list){
#line 3349 "cplus.met"
#line 3349 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3349 "cplus.met"
            } else {
#line 3349 "cplus.met"
#line 3349 "cplus.met"
                list = _addlist1 ;
#line 3349 "cplus.met"
            }
#line 3349 "cplus.met"
#line 3349 "cplus.met"
#line 3350 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3350 "cplus.met"
#line 3351 "cplus.met"
        {
#line 3351 "cplus.met"
            PPTREE _ptTree0=0;
#line 3351 "cplus.met"
            {
#line 3351 "cplus.met"
                PPTREE _ptRes1=0;
#line 3351 "cplus.met"
                _ptRes1= MakeTree(CTOR_INITIALIZER, 1);
#line 3351 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 3351 "cplus.met"
                _ptTree0=_ptRes1;
#line 3351 "cplus.met"
            }
#line 3351 "cplus.met"
            _retValue =_ptTree0;
#line 3351 "cplus.met"
            goto ctor_initializer_ret;
#line 3351 "cplus.met"
        }
#line 3351 "cplus.met"
#line 3351 "cplus.met"
#line 3351 "cplus.met"
    }
#line 3351 "cplus.met"
#line 3351 "cplus.met"
#line 3352 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3352 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3352 "cplus.met"
return((PPTREE) 0);
#line 3352 "cplus.met"

#line 3352 "cplus.met"
ctor_initializer_exit :
#line 3352 "cplus.met"

#line 3352 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_EXIT,(PPTREE)0);
#line 3352 "cplus.met"
    _funcLevel--;
#line 3352 "cplus.met"
    return((PPTREE) -1) ;
#line 3352 "cplus.met"

#line 3352 "cplus.met"
ctor_initializer_ret :
#line 3352 "cplus.met"
    
#line 3352 "cplus.met"
    _Debug = TRACE_RULE("ctor_initializer",TRACE_RETURN,_retValue);
#line 3352 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3352 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3352 "cplus.met"
    return _retValue ;
#line 3352 "cplus.met"
}
#line 3352 "cplus.met"

#line 3352 "cplus.met"
#line 1734 "cplus.met"
PPTREE cplus::data_decl_exotic ( int error_free)
#line 1734 "cplus.met"
{
#line 1734 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1734 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1734 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1734 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_exotic",TRACE_ENTER,(PPTREE)0);
#line 1734 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1734 "cplus.met"
#line 1734 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1734 "cplus.met"
#line 1737 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(message_map), 99, cplus))){
#line 1737 "cplus.met"
#line 1739 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(macro)(error_free), 95, cplus))== (PPTREE) -1 ) {
#line 1739 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_exotic_exit,"data_decl_exotic")
#line 1739 "cplus.met"
        }
#line 1739 "cplus.met"
    }
#line 1739 "cplus.met"
#line 1740 "cplus.met"
    {
#line 1740 "cplus.met"
        _retValue = retTree ;
#line 1740 "cplus.met"
        goto data_decl_exotic_ret;
#line 1740 "cplus.met"
        
#line 1740 "cplus.met"
    }
#line 1740 "cplus.met"
#line 1740 "cplus.met"
#line 1740 "cplus.met"

#line 1741 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1741 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1741 "cplus.met"
return((PPTREE) 0);
#line 1741 "cplus.met"

#line 1741 "cplus.met"
data_decl_exotic_exit :
#line 1741 "cplus.met"

#line 1741 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_EXIT,(PPTREE)0);
#line 1741 "cplus.met"
    _funcLevel--;
#line 1741 "cplus.met"
    return((PPTREE) -1) ;
#line 1741 "cplus.met"

#line 1741 "cplus.met"
data_decl_exotic_ret :
#line 1741 "cplus.met"
    
#line 1741 "cplus.met"
    _Debug = TRACE_RULE("data_decl_exotic",TRACE_RETURN,_retValue);
#line 1741 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1741 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1741 "cplus.met"
    return _retValue ;
#line 1741 "cplus.met"
}
#line 1741 "cplus.met"

#line 1741 "cplus.met"
#line 1687 "cplus.met"
PPTREE cplus::data_decl_sc_decl ( int error_free)
#line 1687 "cplus.met"
{
#line 1687 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1687 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1687 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1687 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_ENTER,(PPTREE)0);
#line 1687 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1687 "cplus.met"
#line 1687 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1687 "cplus.met"
#line 1689 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl_full), 38, cplus))){
#line 1689 "cplus.met"
#line 1690 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_decl_short)(error_free), 39, cplus))== (PPTREE) -1 ) {
#line 1690 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_decl_exit,"data_decl_sc_decl")
#line 1690 "cplus.met"
        }
#line 1690 "cplus.met"
    }
#line 1690 "cplus.met"
#line 1691 "cplus.met"
    {
#line 1691 "cplus.met"
        _retValue = retTree ;
#line 1691 "cplus.met"
        goto data_decl_sc_decl_ret;
#line 1691 "cplus.met"
        
#line 1691 "cplus.met"
    }
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
data_decl_sc_decl_exit :
#line 1692 "cplus.met"

#line 1692 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_EXIT,(PPTREE)0);
#line 1692 "cplus.met"
    _funcLevel--;
#line 1692 "cplus.met"
    return((PPTREE) -1) ;
#line 1692 "cplus.met"

#line 1692 "cplus.met"
data_decl_sc_decl_ret :
#line 1692 "cplus.met"
    
#line 1692 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl",TRACE_RETURN,_retValue);
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
#line 1670 "cplus.met"
PPTREE cplus::data_decl_sc_decl_full ( int error_free)
#line 1670 "cplus.met"
{
#line 1670 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1670 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1670 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1670 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1670 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1670 "cplus.met"
#line 1670 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1670 "cplus.met"
#line 1672 "cplus.met"
    {
#line 1672 "cplus.met"
        PPTREE _ptRes0=0;
#line 1672 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1672 "cplus.met"
        retTree=_ptRes0;
#line 1672 "cplus.met"
    }
#line 1672 "cplus.met"
#line 1673 "cplus.met"
    {
#line 1673 "cplus.met"
        PPTREE _ptTree0=0;
#line 1673 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 1673 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1673 "cplus.met"
        }
#line 1673 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1673 "cplus.met"
    }
#line 1673 "cplus.met"
#line 1674 "cplus.met"
    {
#line 1674 "cplus.met"
        PPTREE _ptTree0=0;
#line 1674 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1674 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_full_exit,"data_decl_sc_decl_full")
#line 1674 "cplus.met"
        }
#line 1674 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1674 "cplus.met"
    }
#line 1674 "cplus.met"
#line 1675 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1675 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1675 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_full_exit,";")
#line 1675 "cplus.met"
    } else {
#line 1675 "cplus.met"
        tokenAhead = 0 ;
#line 1675 "cplus.met"
    }
#line 1675 "cplus.met"
#line 1676 "cplus.met"
    {
#line 1676 "cplus.met"
        _retValue = retTree ;
#line 1676 "cplus.met"
        goto data_decl_sc_decl_full_ret;
#line 1676 "cplus.met"
        
#line 1676 "cplus.met"
    }
#line 1676 "cplus.met"
#line 1676 "cplus.met"
#line 1676 "cplus.met"

#line 1677 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1677 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1677 "cplus.met"
return((PPTREE) 0);
#line 1677 "cplus.met"

#line 1677 "cplus.met"
data_decl_sc_decl_full_exit :
#line 1677 "cplus.met"

#line 1677 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1677 "cplus.met"
    _funcLevel--;
#line 1677 "cplus.met"
    return((PPTREE) -1) ;
#line 1677 "cplus.met"

#line 1677 "cplus.met"
data_decl_sc_decl_full_ret :
#line 1677 "cplus.met"
    
#line 1677 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_full",TRACE_RETURN,_retValue);
#line 1677 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1677 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1677 "cplus.met"
    return _retValue ;
#line 1677 "cplus.met"
}
#line 1677 "cplus.met"

#line 1677 "cplus.met"
#line 1679 "cplus.met"
PPTREE cplus::data_decl_sc_decl_short ( int error_free)
#line 1679 "cplus.met"
{
#line 1679 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1679 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1679 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1679 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1679 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1679 "cplus.met"
#line 1679 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1679 "cplus.met"
#line 1681 "cplus.met"
    {
#line 1681 "cplus.met"
        PPTREE _ptRes0=0;
#line 1681 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1681 "cplus.met"
        retTree=_ptRes0;
#line 1681 "cplus.met"
    }
#line 1681 "cplus.met"
#line 1682 "cplus.met"
    {
#line 1682 "cplus.met"
        PPTREE _ptTree0=0;
#line 1682 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1682 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_decl_short_exit,"data_decl_sc_decl_short")
#line 1682 "cplus.met"
        }
#line 1682 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1682 "cplus.met"
    }
#line 1682 "cplus.met"
#line 1683 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1683 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1683 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_decl_short_exit,";")
#line 1683 "cplus.met"
    } else {
#line 1683 "cplus.met"
        tokenAhead = 0 ;
#line 1683 "cplus.met"
    }
#line 1683 "cplus.met"
#line 1684 "cplus.met"
    {
#line 1684 "cplus.met"
        _retValue = retTree ;
#line 1684 "cplus.met"
        goto data_decl_sc_decl_short_ret;
#line 1684 "cplus.met"
        
#line 1684 "cplus.met"
    }
#line 1684 "cplus.met"
#line 1684 "cplus.met"
#line 1684 "cplus.met"

#line 1685 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1685 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1685 "cplus.met"
return((PPTREE) 0);
#line 1685 "cplus.met"

#line 1685 "cplus.met"
data_decl_sc_decl_short_exit :
#line 1685 "cplus.met"

#line 1685 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1685 "cplus.met"
    _funcLevel--;
#line 1685 "cplus.met"
    return((PPTREE) -1) ;
#line 1685 "cplus.met"

#line 1685 "cplus.met"
data_decl_sc_decl_short_ret :
#line 1685 "cplus.met"
    
#line 1685 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_decl_short",TRACE_RETURN,_retValue);
#line 1685 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1685 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1685 "cplus.met"
    return _retValue ;
#line 1685 "cplus.met"
}
#line 1685 "cplus.met"

#line 1685 "cplus.met"
#line 1727 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl ( int error_free)
#line 1727 "cplus.met"
{
#line 1727 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1727 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1727 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1727 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_ENTER,(PPTREE)0);
#line 1727 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1727 "cplus.met"
#line 1727 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1727 "cplus.met"
#line 1729 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl_full), 41, cplus))){
#line 1729 "cplus.met"
#line 1730 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_sc_ty_decl_short)(error_free), 42, cplus))== (PPTREE) -1 ) {
#line 1730 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_exit,"data_decl_sc_ty_decl")
#line 1730 "cplus.met"
        }
#line 1730 "cplus.met"
    }
#line 1730 "cplus.met"
#line 1731 "cplus.met"
    {
#line 1731 "cplus.met"
        _retValue = retTree ;
#line 1731 "cplus.met"
        goto data_decl_sc_ty_decl_ret;
#line 1731 "cplus.met"
        
#line 1731 "cplus.met"
    }
#line 1731 "cplus.met"
#line 1731 "cplus.met"
#line 1731 "cplus.met"

#line 1732 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1732 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1732 "cplus.met"
return((PPTREE) 0);
#line 1732 "cplus.met"

#line 1732 "cplus.met"
data_decl_sc_ty_decl_exit :
#line 1732 "cplus.met"

#line 1732 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_EXIT,(PPTREE)0);
#line 1732 "cplus.met"
    _funcLevel--;
#line 1732 "cplus.met"
    return((PPTREE) -1) ;
#line 1732 "cplus.met"

#line 1732 "cplus.met"
data_decl_sc_ty_decl_ret :
#line 1732 "cplus.met"
    
#line 1732 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl",TRACE_RETURN,_retValue);
#line 1732 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1732 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1732 "cplus.met"
    return _retValue ;
#line 1732 "cplus.met"
}
#line 1732 "cplus.met"

#line 1732 "cplus.met"
#line 1704 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_full ( int error_free)
#line 1704 "cplus.met"
{
#line 1704 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1704 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1704 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1704 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_ENTER,(PPTREE)0);
#line 1704 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1704 "cplus.met"
#line 1704 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1704 "cplus.met"
#line 1707 "cplus.met"
    {
#line 1707 "cplus.met"
        PPTREE _ptRes0=0;
#line 1707 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1707 "cplus.met"
        retTree=_ptRes0;
#line 1707 "cplus.met"
    }
#line 1707 "cplus.met"
#line 1709 "cplus.met"
    {
#line 1709 "cplus.met"
        PPTREE _ptTree0=0;
#line 1709 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 1709 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 1710 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1711 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_full_exit,"data_decl_sc_ty_decl_full")
#line 1711 "cplus.met"
        }
#line 1711 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1711 "cplus.met"
    }
#line 1711 "cplus.met"
#line 1712 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1712 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1712 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_full_exit,";")
#line 1712 "cplus.met"
    } else {
#line 1712 "cplus.met"
        tokenAhead = 0 ;
#line 1712 "cplus.met"
    }
#line 1712 "cplus.met"
#line 1713 "cplus.met"
    {
#line 1713 "cplus.met"
        _retValue = retTree ;
#line 1713 "cplus.met"
        goto data_decl_sc_ty_decl_full_ret;
#line 1713 "cplus.met"
        
#line 1713 "cplus.met"
    }
#line 1713 "cplus.met"
#line 1713 "cplus.met"
#line 1713 "cplus.met"

#line 1714 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1714 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1714 "cplus.met"
return((PPTREE) 0);
#line 1714 "cplus.met"

#line 1714 "cplus.met"
data_decl_sc_ty_decl_full_exit :
#line 1714 "cplus.met"

#line 1714 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_EXIT,(PPTREE)0);
#line 1714 "cplus.met"
    _funcLevel--;
#line 1714 "cplus.met"
    return((PPTREE) -1) ;
#line 1714 "cplus.met"

#line 1714 "cplus.met"
data_decl_sc_ty_decl_full_ret :
#line 1714 "cplus.met"
    
#line 1714 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_full",TRACE_RETURN,_retValue);
#line 1714 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1714 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1714 "cplus.met"
    return _retValue ;
#line 1714 "cplus.met"
}
#line 1714 "cplus.met"

#line 1714 "cplus.met"
#line 1716 "cplus.met"
PPTREE cplus::data_decl_sc_ty_decl_short ( int error_free)
#line 1716 "cplus.met"
{
#line 1716 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1716 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1716 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1716 "cplus.met"
    int _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_ENTER,(PPTREE)0);
#line 1716 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1716 "cplus.met"
#line 1716 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1716 "cplus.met"
#line 1719 "cplus.met"
    {
#line 1719 "cplus.met"
        PPTREE _ptRes0=0;
#line 1719 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1719 "cplus.met"
        retTree=_ptRes0;
#line 1719 "cplus.met"
    }
#line 1719 "cplus.met"
#line 1721 "cplus.met"
    {
#line 1721 "cplus.met"
        PPTREE _ptTree0=0;
#line 1721 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 1721 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1721 "cplus.met"
        }
#line 1721 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1721 "cplus.met"
    }
#line 1721 "cplus.met"
#line 1722 "cplus.met"
    {
#line 1722 "cplus.met"
        PPTREE _ptTree0=0;
#line 1722 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1722 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_decl_sc_ty_decl_short_exit,"data_decl_sc_ty_decl_short")
#line 1722 "cplus.met"
        }
#line 1722 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1722 "cplus.met"
    }
#line 1722 "cplus.met"
#line 1723 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1723 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1723 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(data_decl_sc_ty_decl_short_exit,";")
#line 1723 "cplus.met"
    } else {
#line 1723 "cplus.met"
        tokenAhead = 0 ;
#line 1723 "cplus.met"
    }
#line 1723 "cplus.met"
#line 1724 "cplus.met"
    {
#line 1724 "cplus.met"
        _retValue = retTree ;
#line 1724 "cplus.met"
        goto data_decl_sc_ty_decl_short_ret;
#line 1724 "cplus.met"
        
#line 1724 "cplus.met"
    }
#line 1724 "cplus.met"
#line 1724 "cplus.met"
#line 1724 "cplus.met"

#line 1725 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1725 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1725 "cplus.met"
return((PPTREE) 0);
#line 1725 "cplus.met"

#line 1725 "cplus.met"
data_decl_sc_ty_decl_short_exit :
#line 1725 "cplus.met"

#line 1725 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_EXIT,(PPTREE)0);
#line 1725 "cplus.met"
    _funcLevel--;
#line 1725 "cplus.met"
    return((PPTREE) -1) ;
#line 1725 "cplus.met"

#line 1725 "cplus.met"
data_decl_sc_ty_decl_short_ret :
#line 1725 "cplus.met"
    
#line 1725 "cplus.met"
    _Debug = TRACE_RULE("data_decl_sc_ty_decl_short",TRACE_RETURN,_retValue);
#line 1725 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1725 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1725 "cplus.met"
    return _retValue ;
#line 1725 "cplus.met"
}
#line 1725 "cplus.met"

#line 1725 "cplus.met"
#line 1694 "cplus.met"
PPTREE cplus::data_declaration ( int error_free)
#line 1694 "cplus.met"
{
#line 1694 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1694 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1694 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1694 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1694 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1694 "cplus.met"
#line 1694 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1694 "cplus.met"
#line 1696 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_decl), 37, cplus))){
#line 1696 "cplus.met"
#line 1697 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_strict)(error_free), 47, cplus))== (PPTREE) -1 ) {
#line 1697 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_exit,"data_declaration")
#line 1697 "cplus.met"
        }
#line 1697 "cplus.met"
    }
#line 1697 "cplus.met"
#line 1698 "cplus.met"
    {
#line 1698 "cplus.met"
        _retValue = retTree ;
#line 1698 "cplus.met"
        goto data_declaration_ret;
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
data_declaration_exit :
#line 1699 "cplus.met"

#line 1699 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1699 "cplus.met"
    _funcLevel--;
#line 1699 "cplus.met"
    return((PPTREE) -1) ;
#line 1699 "cplus.met"

#line 1699 "cplus.met"
data_declaration_ret :
#line 1699 "cplus.met"
    
#line 1699 "cplus.met"
    _Debug = TRACE_RULE("data_declaration",TRACE_RETURN,_retValue);
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
#line 1768 "cplus.met"
PPTREE cplus::data_declaration_for ( int error_free)
#line 1768 "cplus.met"
{
#line 1768 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1768 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1768 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1768 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for",TRACE_ENTER,(PPTREE)0);
#line 1768 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1768 "cplus.met"
#line 1768 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1768 "cplus.met"
#line 1770 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration_for_full), 45, cplus))){
#line 1770 "cplus.met"
#line 1771 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_declaration_for_short)(error_free), 46, cplus))== (PPTREE) -1 ) {
#line 1771 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_for_exit,"data_declaration_for")
#line 1771 "cplus.met"
        }
#line 1771 "cplus.met"
    }
#line 1771 "cplus.met"
#line 1772 "cplus.met"
    {
#line 1772 "cplus.met"
        _retValue = retTree ;
#line 1772 "cplus.met"
        goto data_declaration_for_ret;
#line 1772 "cplus.met"
        
#line 1772 "cplus.met"
    }
#line 1772 "cplus.met"
#line 1772 "cplus.met"
#line 1772 "cplus.met"

#line 1773 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1773 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1773 "cplus.met"
return((PPTREE) 0);
#line 1773 "cplus.met"

#line 1773 "cplus.met"
data_declaration_for_exit :
#line 1773 "cplus.met"

#line 1773 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_EXIT,(PPTREE)0);
#line 1773 "cplus.met"
    _funcLevel--;
#line 1773 "cplus.met"
    return((PPTREE) -1) ;
#line 1773 "cplus.met"

#line 1773 "cplus.met"
data_declaration_for_ret :
#line 1773 "cplus.met"
    
#line 1773 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for",TRACE_RETURN,_retValue);
#line 1773 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1773 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1773 "cplus.met"
    return _retValue ;
#line 1773 "cplus.met"
}
#line 1773 "cplus.met"

#line 1773 "cplus.met"
#line 1751 "cplus.met"
PPTREE cplus::data_declaration_for_full ( int error_free)
#line 1751 "cplus.met"
{
#line 1751 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1751 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1751 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1751 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_full",TRACE_ENTER,(PPTREE)0);
#line 1751 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1751 "cplus.met"
#line 1751 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1751 "cplus.met"
#line 1753 "cplus.met"
    {
#line 1753 "cplus.met"
        PPTREE _ptRes0=0;
#line 1753 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1753 "cplus.met"
        retTree=_ptRes0;
#line 1753 "cplus.met"
    }
#line 1753 "cplus.met"
#line 1754 "cplus.met"
    {
#line 1754 "cplus.met"
        PPTREE _ptTree0=0;
#line 1754 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 1754 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1754 "cplus.met"
        }
#line 1754 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1754 "cplus.met"
    }
#line 1754 "cplus.met"
#line 1755 "cplus.met"
    {
#line 1755 "cplus.met"
        PPTREE _ptTree0=0;
#line 1755 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 1755 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1755 "cplus.met"
        }
#line 1755 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1755 "cplus.met"
    }
#line 1755 "cplus.met"
#line 1756 "cplus.met"
    {
#line 1756 "cplus.met"
        PPTREE _ptTree0=0;
#line 1756 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1756 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_full_exit,"data_declaration_for_full")
#line 1756 "cplus.met"
        }
#line 1756 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1756 "cplus.met"
    }
#line 1756 "cplus.met"
#line 1757 "cplus.met"
    {
#line 1757 "cplus.met"
        _retValue = retTree ;
#line 1757 "cplus.met"
        goto data_declaration_for_full_ret;
#line 1757 "cplus.met"
        
#line 1757 "cplus.met"
    }
#line 1757 "cplus.met"
#line 1757 "cplus.met"
#line 1757 "cplus.met"

#line 1758 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1758 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1758 "cplus.met"
return((PPTREE) 0);
#line 1758 "cplus.met"

#line 1758 "cplus.met"
data_declaration_for_full_exit :
#line 1758 "cplus.met"

#line 1758 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_EXIT,(PPTREE)0);
#line 1758 "cplus.met"
    _funcLevel--;
#line 1758 "cplus.met"
    return((PPTREE) -1) ;
#line 1758 "cplus.met"

#line 1758 "cplus.met"
data_declaration_for_full_ret :
#line 1758 "cplus.met"
    
#line 1758 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_full",TRACE_RETURN,_retValue);
#line 1758 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1758 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1758 "cplus.met"
    return _retValue ;
#line 1758 "cplus.met"
}
#line 1758 "cplus.met"

#line 1758 "cplus.met"
#line 1760 "cplus.met"
PPTREE cplus::data_declaration_for_short ( int error_free)
#line 1760 "cplus.met"
{
#line 1760 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1760 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1760 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1760 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_for_short",TRACE_ENTER,(PPTREE)0);
#line 1760 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1760 "cplus.met"
#line 1760 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1760 "cplus.met"
#line 1762 "cplus.met"
    {
#line 1762 "cplus.met"
        PPTREE _ptRes0=0;
#line 1762 "cplus.met"
        _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 1762 "cplus.met"
        retTree=_ptRes0;
#line 1762 "cplus.met"
    }
#line 1762 "cplus.met"
#line 1763 "cplus.met"
    {
#line 1763 "cplus.met"
        PPTREE _ptTree0=0;
#line 1763 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 1763 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1763 "cplus.met"
        }
#line 1763 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1763 "cplus.met"
    }
#line 1763 "cplus.met"
#line 1764 "cplus.met"
    {
#line 1764 "cplus.met"
        PPTREE _ptTree0=0;
#line 1764 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list_init)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1764 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(data_declaration_for_short_exit,"data_declaration_for_short")
#line 1764 "cplus.met"
        }
#line 1764 "cplus.met"
        ReplaceTree(retTree , 3 , _ptTree0);
#line 1764 "cplus.met"
    }
#line 1764 "cplus.met"
#line 1765 "cplus.met"
    {
#line 1765 "cplus.met"
        _retValue = retTree ;
#line 1765 "cplus.met"
        goto data_declaration_for_short_ret;
#line 1765 "cplus.met"
        
#line 1765 "cplus.met"
    }
#line 1765 "cplus.met"
#line 1765 "cplus.met"
#line 1765 "cplus.met"

#line 1766 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1766 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1766 "cplus.met"
return((PPTREE) 0);
#line 1766 "cplus.met"

#line 1766 "cplus.met"
data_declaration_for_short_exit :
#line 1766 "cplus.met"

#line 1766 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_EXIT,(PPTREE)0);
#line 1766 "cplus.met"
    _funcLevel--;
#line 1766 "cplus.met"
    return((PPTREE) -1) ;
#line 1766 "cplus.met"

#line 1766 "cplus.met"
data_declaration_for_short_ret :
#line 1766 "cplus.met"
    
#line 1766 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_for_short",TRACE_RETURN,_retValue);
#line 1766 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1766 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1766 "cplus.met"
    return _retValue ;
#line 1766 "cplus.met"
}
#line 1766 "cplus.met"

#line 1766 "cplus.met"
#line 1743 "cplus.met"
PPTREE cplus::data_declaration_strict ( int error_free)
#line 1743 "cplus.met"
{
#line 1743 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1743 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1743 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1743 "cplus.met"
    int _Debug = TRACE_RULE("data_declaration_strict",TRACE_ENTER,(PPTREE)0);
#line 1743 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1743 "cplus.met"
#line 1743 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1743 "cplus.met"
#line 1745 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_decl_sc_ty_decl), 40, cplus))){
#line 1745 "cplus.met"
#line 1746 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(data_decl_exotic)(error_free), 36, cplus))== (PPTREE) -1 ) {
#line 1746 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(data_declaration_strict_exit,"data_declaration_strict")
#line 1746 "cplus.met"
        }
#line 1746 "cplus.met"
    }
#line 1746 "cplus.met"
#line 1747 "cplus.met"
    {
#line 1747 "cplus.met"
        _retValue = retTree ;
#line 1747 "cplus.met"
        goto data_declaration_strict_ret;
#line 1747 "cplus.met"
        
#line 1747 "cplus.met"
    }
#line 1747 "cplus.met"
#line 1747 "cplus.met"
#line 1747 "cplus.met"

#line 1748 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1748 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1748 "cplus.met"
return((PPTREE) 0);
#line 1748 "cplus.met"

#line 1748 "cplus.met"
data_declaration_strict_exit :
#line 1748 "cplus.met"

#line 1748 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_EXIT,(PPTREE)0);
#line 1748 "cplus.met"
    _funcLevel--;
#line 1748 "cplus.met"
    return((PPTREE) -1) ;
#line 1748 "cplus.met"

#line 1748 "cplus.met"
data_declaration_strict_ret :
#line 1748 "cplus.met"
    
#line 1748 "cplus.met"
    _Debug = TRACE_RULE("data_declaration_strict",TRACE_RETURN,_retValue);
#line 1748 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1748 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1748 "cplus.met"
    return _retValue ;
#line 1748 "cplus.met"
}
#line 1748 "cplus.met"

#line 1748 "cplus.met"
#line 2995 "cplus.met"
PPTREE cplus::deallocation_expression ( int error_free)
#line 2995 "cplus.met"
{
#line 2995 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2995 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2995 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2995 "cplus.met"
    int _Debug = TRACE_RULE("deallocation_expression",TRACE_ENTER,(PPTREE)0);
#line 2995 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2995 "cplus.met"
#line 2995 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expr = (PPTREE) 0;
#line 2995 "cplus.met"
#line 2997 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2997 "cplus.met"
    if (  !SEE_TOKEN( DELETE,"delete") || !(CommTerm(),1)) {
#line 2997 "cplus.met"
        MulFreeTree(2,expr,retTree);
        TOKEN_EXIT(deallocation_expression_exit,"delete")
#line 2997 "cplus.met"
    } else {
#line 2997 "cplus.met"
        tokenAhead = 0 ;
#line 2997 "cplus.met"
    }
#line 2997 "cplus.met"
#line 2998 "cplus.met"
    {
#line 2998 "cplus.met"
        PPTREE _ptRes0=0;
#line 2998 "cplus.met"
        _ptRes0= MakeTree(DELETE, 2);
#line 2998 "cplus.met"
        retTree=_ptRes0;
#line 2998 "cplus.met"
    }
#line 2998 "cplus.met"
#line 2999 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)){
#line 2999 "cplus.met"
#line 3000 "cplus.met"
#line 3003 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(expr = ,_Tak(expression), 65, cplus)){
#line 3003 "cplus.met"
#line 3003 "cplus.met"
        }
#line 3003 "cplus.met"
#line 3006 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3006 "cplus.met"
        if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3006 "cplus.met"
            MulFreeTree(2,expr,retTree);
            TOKEN_EXIT(deallocation_expression_exit,"]")
#line 3006 "cplus.met"
        } else {
#line 3006 "cplus.met"
            tokenAhead = 0 ;
#line 3006 "cplus.met"
        }
#line 3006 "cplus.met"
#line 3007 "cplus.met"
        {
#line 3007 "cplus.met"
            PPTREE _ptTree0=0;
#line 3007 "cplus.met"
            {
#line 3007 "cplus.met"
                PPTREE _ptRes1=0;
#line 3007 "cplus.met"
                _ptRes1= MakeTree(TYP_ARRAY, 2);
#line 3007 "cplus.met"
                ReplaceTree(_ptRes1, 2, expr );
#line 3007 "cplus.met"
                _ptTree0=_ptRes1;
#line 3007 "cplus.met"
            }
#line 3007 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 3007 "cplus.met"
        }
#line 3007 "cplus.met"
#line 3007 "cplus.met"
#line 3007 "cplus.met"
    }
#line 3007 "cplus.met"
#line 3009 "cplus.met"
    {
#line 3009 "cplus.met"
        PPTREE _ptTree0=0;
#line 3009 "cplus.met"
        {
#line 3009 "cplus.met"
            PPTREE _ptTree1=0;
#line 3009 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 3009 "cplus.met"
                MulFreeTree(4,_ptTree1,_ptTree0,expr,retTree);
                PROG_EXIT(deallocation_expression_exit,"deallocation_expression")
#line 3009 "cplus.met"
            }
#line 3009 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 3009 "cplus.met"
        }
#line 3009 "cplus.met"
        _retValue =_ptTree0;
#line 3009 "cplus.met"
        goto deallocation_expression_ret;
#line 3009 "cplus.met"
    }
#line 3009 "cplus.met"
#line 3009 "cplus.met"
#line 3009 "cplus.met"

#line 3010 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3010 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3010 "cplus.met"
return((PPTREE) 0);
#line 3010 "cplus.met"

#line 3010 "cplus.met"
deallocation_expression_exit :
#line 3010 "cplus.met"

#line 3010 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_EXIT,(PPTREE)0);
#line 3010 "cplus.met"
    _funcLevel--;
#line 3010 "cplus.met"
    return((PPTREE) -1) ;
#line 3010 "cplus.met"

#line 3010 "cplus.met"
deallocation_expression_ret :
#line 3010 "cplus.met"
    
#line 3010 "cplus.met"
    _Debug = TRACE_RULE("deallocation_expression",TRACE_RETURN,_retValue);
#line 3010 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3010 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3010 "cplus.met"
    return _retValue ;
#line 3010 "cplus.met"
}
#line 3010 "cplus.met"

#line 3010 "cplus.met"
#line 2362 "cplus.met"
PPTREE cplus::declarator ( int error_free)
#line 2362 "cplus.met"
{
#line 2362 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2362 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2362 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2362 "cplus.met"
    int _Debug = TRACE_RULE("declarator",TRACE_ENTER,(PPTREE)0);
#line 2362 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2362 "cplus.met"
#line 2362 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2362 "cplus.met"
#line 2364 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 125, cplus)){
#line 2364 "cplus.met"
#line 2365 "cplus.met"
        {
#line 2365 "cplus.met"
            PPTREE _ptTree0=0;
#line 2365 "cplus.met"
            {
#line 2365 "cplus.met"
                PPTREE _ptTree1=0;
#line 2365 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2365 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2365 "cplus.met"
                }
#line 2365 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2365 "cplus.met"
            }
#line 2365 "cplus.met"
            _retValue =_ptTree0;
#line 2365 "cplus.met"
            goto declarator_ret;
#line 2365 "cplus.met"
        }
#line 2365 "cplus.met"
    } else {
#line 2365 "cplus.met"
#line 2367 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2367 "cplus.met"
        switch( lexEl.Value) {
#line 2367 "cplus.met"
#line 2368 "cplus.met"
            case ETOI : 
#line 2368 "cplus.met"
                tokenAhead = 0 ;
#line 2368 "cplus.met"
                CommTerm();
#line 2368 "cplus.met"
#line 2368 "cplus.met"
                {
#line 2368 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2368 "cplus.met"
                    {
#line 2368 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2368 "cplus.met"
                        _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2368 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2368 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2368 "cplus.met"
                        }
#line 2368 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2368 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2368 "cplus.met"
                    }
#line 2368 "cplus.met"
                    _retValue =_ptTree0;
#line 2368 "cplus.met"
                    goto declarator_ret;
#line 2368 "cplus.met"
                }
#line 2368 "cplus.met"
                break;
#line 2368 "cplus.met"
#line 2369 "cplus.met"
            case ETCO : 
#line 2369 "cplus.met"
                tokenAhead = 0 ;
#line 2369 "cplus.met"
                CommTerm();
#line 2369 "cplus.met"
#line 2369 "cplus.met"
                {
#line 2369 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2369 "cplus.met"
                    {
#line 2369 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2369 "cplus.met"
                        _ptRes1= MakeTree(TYP_REF, 1);
#line 2369 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2369 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2369 "cplus.met"
                        }
#line 2369 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2369 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2369 "cplus.met"
                    }
#line 2369 "cplus.met"
                    _retValue =_ptTree0;
#line 2369 "cplus.met"
                    goto declarator_ret;
#line 2369 "cplus.met"
                }
#line 2369 "cplus.met"
                break;
#line 2369 "cplus.met"
#line 2370 "cplus.met"
            case TILD : 
#line 2370 "cplus.met"
                tokenAhead = 0 ;
#line 2370 "cplus.met"
                CommTerm();
#line 2370 "cplus.met"
#line 2370 "cplus.met"
                {
#line 2370 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2370 "cplus.met"
                    {
#line 2370 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2370 "cplus.met"
                        _ptRes1= MakeTree(DESTRUCT, 1);
#line 2370 "cplus.met"
                        if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2370 "cplus.met"
                            MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                            PROG_EXIT(declarator_exit,"declarator")
#line 2370 "cplus.met"
                        }
#line 2370 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2370 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2370 "cplus.met"
                    }
#line 2370 "cplus.met"
                    _retValue =_ptTree0;
#line 2370 "cplus.met"
                    goto declarator_ret;
#line 2370 "cplus.met"
                }
#line 2370 "cplus.met"
                break;
#line 2370 "cplus.met"
#line 2373 "cplus.met"
            case POUV : 
#line 2373 "cplus.met"
                tokenAhead = 0 ;
#line 2373 "cplus.met"
                CommTerm();
#line 2373 "cplus.met"
#line 2372 "cplus.met"
#line 2373 "cplus.met"
                {
#line 2373 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2373 "cplus.met"
                    _ptRes0= MakeTree(TYP, 1);
#line 2373 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2373 "cplus.met"
                        MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                        PROG_EXIT(declarator_exit,"declarator")
#line 2373 "cplus.met"
                    }
#line 2373 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2373 "cplus.met"
                    retTree=_ptRes0;
#line 2373 "cplus.met"
                }
#line 2373 "cplus.met"
#line 2374 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2374 "cplus.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2374 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    TOKEN_EXIT(declarator_exit,")")
#line 2374 "cplus.met"
                } else {
#line 2374 "cplus.met"
                    tokenAhead = 0 ;
#line 2374 "cplus.met"
                }
#line 2374 "cplus.met"
#line 2375 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 50, cplus)){
#line 2375 "cplus.met"
#line 2376 "cplus.met"
                                            { PPTREE theTree ;
#line 2376 "cplus.met"
                                              theTree = valTree ;
#line 2376 "cplus.met"
                                              if (theTree) {
#line 2376 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2376 "cplus.met"
                                               if (NumberTree(theTree)
#line 2376 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2376 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2376 "cplus.met"
                                               else
#line 2376 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2376 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2376 "cplus.met"
                                                  /* modif portage sun */
#line 2376 "cplus.met"
                                                  retTree = valTree;
#line 2376 "cplus.met"
                                              }
#line 2376 "cplus.met"
                                                 }
#line 2376 "cplus.met"
                                        
#line 2376 "cplus.met"
                }
#line 2376 "cplus.met"
#line 2376 "cplus.met"
                break;
#line 2376 "cplus.met"
#line 2393 "cplus.met"
            case META : 
#line 2393 "cplus.met"
            case IDENT : 
#line 2393 "cplus.met"
#line 2394 "cplus.met"
#line 2395 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(qualified_name)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 2395 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2395 "cplus.met"
                }
#line 2395 "cplus.met"
#line 2396 "cplus.met"
                if (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOIDPOI,"::") && (tokenAhead = 0,CommTerm(),1)) && 
#line 2396 "cplus.met"
                   ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETOI,"*") && (tokenAhead = 0,CommTerm(),1))){
#line 2396 "cplus.met"
#line 2397 "cplus.met"
                    {
#line 2397 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2397 "cplus.met"
                        {
#line 2397 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2397 "cplus.met"
                            _ptRes1= MakeTree(MEMBER_DECLARATOR, 2);
#line 2397 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2397 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 2397 "cplus.met"
                                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                                PROG_EXIT(declarator_exit,"declarator")
#line 2397 "cplus.met"
                            }
#line 2397 "cplus.met"
                            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2397 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2397 "cplus.met"
                        }
#line 2397 "cplus.met"
                        _retValue =_ptTree0;
#line 2397 "cplus.met"
                        goto declarator_ret;
#line 2397 "cplus.met"
                    }
#line 2397 "cplus.met"
                }
#line 2397 "cplus.met"
#line 2398 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 50, cplus)){
#line 2398 "cplus.met"
#line 2399 "cplus.met"
                                            { PPTREE theTree ;
#line 2399 "cplus.met"
                                              theTree = valTree ;
#line 2399 "cplus.met"
                                              if (theTree) {
#line 2399 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2399 "cplus.met"
                                               if (NumberTree(theTree)
#line 2399 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2399 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2399 "cplus.met"
                                               else
#line 2399 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2399 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2399 "cplus.met"
                                                  /* modif portage sun */
#line 2399 "cplus.met"
                                                  retTree = valTree;
#line 2399 "cplus.met"
                                              }
#line 2399 "cplus.met"
                                                 }
#line 2399 "cplus.met"
                                        
#line 2399 "cplus.met"
                }
#line 2399 "cplus.met"
#line 2399 "cplus.met"
                break;
#line 2399 "cplus.met"
#line 2416 "cplus.met"
            case OPERATOR : 
#line 2416 "cplus.met"
#line 2417 "cplus.met"
#line 2418 "cplus.met"
                if ( (retTree=NQUICK_CALL(_Tak(operator_function_name)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2418 "cplus.met"
                    MulFreeTree(2,retTree,valTree);
                    PROG_EXIT(declarator_exit,"declarator")
#line 2418 "cplus.met"
                }
#line 2418 "cplus.met"
#line 2419 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator_follow), 50, cplus)){
#line 2419 "cplus.met"
#line 2420 "cplus.met"
                                            { PPTREE theTree ;
#line 2420 "cplus.met"
                                              theTree = valTree ;
#line 2420 "cplus.met"
                                              if (theTree) {
#line 2420 "cplus.met"
                                                  while (SonTree(theTree,1))
#line 2420 "cplus.met"
                                               if (NumberTree(theTree)
#line 2420 "cplus.met"
                                            	   != RANGE_MODIFIER)
#line 2420 "cplus.met"
                                                   theTree = SonTree(theTree,1);
#line 2420 "cplus.met"
                                               else
#line 2420 "cplus.met"
                                                   theTree = SonTree(theTree,2);
#line 2420 "cplus.met"
                                                  ReplaceTree(theTree,1,retTree);
#line 2420 "cplus.met"
                                                  /* modif portage sun */
#line 2420 "cplus.met"
                                                  retTree = valTree;
#line 2420 "cplus.met"
                                              }
#line 2420 "cplus.met"
                                                 }
#line 2420 "cplus.met"
                                        
#line 2420 "cplus.met"
                }
#line 2420 "cplus.met"
#line 2420 "cplus.met"
                break;
#line 2420 "cplus.met"
            default :
#line 2420 "cplus.met"
                MulFreeTree(2,retTree,valTree);
                CASE_EXIT(declarator_exit,"either * or & or ~ or ( or IDENT or operator")
#line 2420 "cplus.met"
                break;
#line 2420 "cplus.met"
        }
#line 2420 "cplus.met"
    }
#line 2420 "cplus.met"
#line 2438 "cplus.met"
    {
#line 2438 "cplus.met"
        _retValue = retTree ;
#line 2438 "cplus.met"
        goto declarator_ret;
#line 2438 "cplus.met"
        
#line 2438 "cplus.met"
    }
#line 2438 "cplus.met"
#line 2438 "cplus.met"
#line 2438 "cplus.met"

#line 2439 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2439 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2439 "cplus.met"
return((PPTREE) 0);
#line 2439 "cplus.met"

#line 2439 "cplus.met"
declarator_exit :
#line 2439 "cplus.met"

#line 2439 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_EXIT,(PPTREE)0);
#line 2439 "cplus.met"
    _funcLevel--;
#line 2439 "cplus.met"
    return((PPTREE) -1) ;
#line 2439 "cplus.met"

#line 2439 "cplus.met"
declarator_ret :
#line 2439 "cplus.met"
    
#line 2439 "cplus.met"
    _Debug = TRACE_RULE("declarator",TRACE_RETURN,_retValue);
#line 2439 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2439 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2439 "cplus.met"
    return _retValue ;
#line 2439 "cplus.met"
}
#line 2439 "cplus.met"

#line 2439 "cplus.met"
#line 2330 "cplus.met"
PPTREE cplus::declarator_follow ( int error_free)
#line 2330 "cplus.met"
{
#line 2330 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2330 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2330 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2330 "cplus.met"
    int _Debug = TRACE_RULE("declarator_follow",TRACE_ENTER,(PPTREE)0);
#line 2330 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2330 "cplus.met"
#line 2330 "cplus.met"
    PPTREE retTree = (PPTREE) 0,expList = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2330 "cplus.met"
#line 2332 "cplus.met"
    if ((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"("))) && 
#line 2332 "cplus.met"
       (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"[")))){
#line 2332 "cplus.met"
#line 2333 "cplus.met"
        
#line 2333 "cplus.met"
        MulFreeTree(3,expList,retTree,valTree);
        LEX_EXIT ("",0);
#line 2333 "cplus.met"
        goto declarator_follow_exit;
#line 2333 "cplus.met"
#line 2333 "cplus.met"
    }
#line 2333 "cplus.met"
#line 2334 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POUV,"(")) || 
#line 2334 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( COUV,"["))) { 
#line 2334 "cplus.met"
#line 2335 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2335 "cplus.met"
        switch( lexEl.Value) {
#line 2335 "cplus.met"
#line 2338 "cplus.met"
            case COUV : 
#line 2338 "cplus.met"
                tokenAhead = 0 ;
#line 2338 "cplus.met"
                CommTerm();
#line 2338 "cplus.met"
#line 2337 "cplus.met"
#line 2338 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 65, cplus)){
#line 2338 "cplus.met"
#line 2339 "cplus.met"
                    {
#line 2339 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2339 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2339 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2339 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2339 "cplus.met"
                        retTree=_ptRes0;
#line 2339 "cplus.met"
                    }
#line 2339 "cplus.met"
                } else {
#line 2339 "cplus.met"
#line 2341 "cplus.met"
                    {
#line 2341 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2341 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2341 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2341 "cplus.met"
                        retTree=_ptRes0;
#line 2341 "cplus.met"
                    }
#line 2341 "cplus.met"
                }
#line 2341 "cplus.met"
#line 2342 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2342 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2342 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(declarator_follow_exit,"]")
#line 2342 "cplus.met"
                } else {
#line 2342 "cplus.met"
                    tokenAhead = 0 ;
#line 2342 "cplus.met"
                }
#line 2342 "cplus.met"
#line 2342 "cplus.met"
                break;
#line 2342 "cplus.met"
#line 2349 "cplus.met"
            case POUV : 
#line 2349 "cplus.met"
#line 2345 "cplus.met"
#line 2348 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(arg_typ_declarator), 13, cplus)){
#line 2348 "cplus.met"
#line 2350 "cplus.met"
#line 2351 "cplus.met"
                    ReplaceTree(valTree ,1 ,retTree );
#line 2351 "cplus.met"
#line 2352 "cplus.met"
                    {
#line 2352 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2352 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 2352 "cplus.met"
                            MulFreeTree(4,_ptTree0,expList,retTree,valTree);
                            PROG_EXIT(declarator_follow_exit,"declarator_follow")
#line 2352 "cplus.met"
                        }
#line 2352 "cplus.met"
                        ReplaceTree(valTree , 3 , _ptTree0);
#line 2352 "cplus.met"
                    }
#line 2352 "cplus.met"
#line 2353 "cplus.met"
                    retTree = valTree ;
#line 2353 "cplus.met"
#line 2353 "cplus.met"
#line 2353 "cplus.met"
                } else {
#line 2353 "cplus.met"
#line 2356 "cplus.met"
                    {
#line 2356 "cplus.met"
                        _retValue = retTree ;
#line 2356 "cplus.met"
                        goto declarator_follow_ret;
#line 2356 "cplus.met"
                        
#line 2356 "cplus.met"
                    }
#line 2356 "cplus.met"
                }
#line 2356 "cplus.met"
#line 2356 "cplus.met"
                break;
#line 2356 "cplus.met"
            default :
#line 2356 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                CASE_EXIT(declarator_follow_exit,"either [ or (")
#line 2356 "cplus.met"
                break;
#line 2356 "cplus.met"
        }
#line 2356 "cplus.met"
    } 
#line 2356 "cplus.met"
#line 2359 "cplus.met"
    {
#line 2359 "cplus.met"
        _retValue = retTree ;
#line 2359 "cplus.met"
        goto declarator_follow_ret;
#line 2359 "cplus.met"
        
#line 2359 "cplus.met"
    }
#line 2359 "cplus.met"
#line 2359 "cplus.met"
#line 2359 "cplus.met"

#line 2360 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2360 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2360 "cplus.met"
return((PPTREE) 0);
#line 2360 "cplus.met"

#line 2360 "cplus.met"
declarator_follow_exit :
#line 2360 "cplus.met"

#line 2360 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_EXIT,(PPTREE)0);
#line 2360 "cplus.met"
    _funcLevel--;
#line 2360 "cplus.met"
    return((PPTREE) -1) ;
#line 2360 "cplus.met"

#line 2360 "cplus.met"
declarator_follow_ret :
#line 2360 "cplus.met"
    
#line 2360 "cplus.met"
    _Debug = TRACE_RULE("declarator_follow",TRACE_RETURN,_retValue);
#line 2360 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2360 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2360 "cplus.met"
    return _retValue ;
#line 2360 "cplus.met"
}
#line 2360 "cplus.met"

#line 2360 "cplus.met"
#line 1595 "cplus.met"
PPTREE cplus::declarator_list ( int error_free)
#line 1595 "cplus.met"
{
#line 1595 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1595 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1595 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1595 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list",TRACE_ENTER,(PPTREE)0);
#line 1595 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1595 "cplus.met"
#line 1595 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1595 "cplus.met"
#line 1595 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1595 "cplus.met"
#line 1595 "cplus.met"
    _addlist1 = list ;
#line 1595 "cplus.met"
#line 1597 "cplus.met"
    do {
#line 1597 "cplus.met"
#line 1598 "cplus.met"
        {
#line 1598 "cplus.met"
            PPTREE _ptTree0=0;
#line 1598 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1598 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_exit,"declarator_list")
#line 1598 "cplus.met"
            }
#line 1598 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1598 "cplus.met"
        }
#line 1598 "cplus.met"
#line 1598 "cplus.met"
        if (list){
#line 1598 "cplus.met"
#line 1598 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1598 "cplus.met"
        } else {
#line 1598 "cplus.met"
#line 1598 "cplus.met"
            list = _addlist1 ;
#line 1598 "cplus.met"
        }
#line 1598 "cplus.met"
#line 1598 "cplus.met"
#line 1599 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1599 "cplus.met"
#line 1600 "cplus.met"
    {
#line 1600 "cplus.met"
        _retValue = list ;
#line 1600 "cplus.met"
        goto declarator_list_ret;
#line 1600 "cplus.met"
        
#line 1600 "cplus.met"
    }
#line 1600 "cplus.met"
#line 1600 "cplus.met"
#line 1600 "cplus.met"

#line 1601 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1601 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1601 "cplus.met"
return((PPTREE) 0);
#line 1601 "cplus.met"

#line 1601 "cplus.met"
declarator_list_exit :
#line 1601 "cplus.met"

#line 1601 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_EXIT,(PPTREE)0);
#line 1601 "cplus.met"
    _funcLevel--;
#line 1601 "cplus.met"
    return((PPTREE) -1) ;
#line 1601 "cplus.met"

#line 1601 "cplus.met"
declarator_list_ret :
#line 1601 "cplus.met"
    
#line 1601 "cplus.met"
    _Debug = TRACE_RULE("declarator_list",TRACE_RETURN,_retValue);
#line 1601 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1601 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1601 "cplus.met"
    return _retValue ;
#line 1601 "cplus.met"
}
#line 1601 "cplus.met"

#line 1601 "cplus.met"
#line 1586 "cplus.met"
PPTREE cplus::declarator_list_init ( int error_free)
#line 1586 "cplus.met"
{
#line 1586 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1586 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1586 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1586 "cplus.met"
    int _Debug = TRACE_RULE("declarator_list_init",TRACE_ENTER,(PPTREE)0);
#line 1586 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1586 "cplus.met"
#line 1586 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1586 "cplus.met"
#line 1586 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 1586 "cplus.met"
#line 1586 "cplus.met"
    _addlist1 = list ;
#line 1586 "cplus.met"
#line 1588 "cplus.met"
    do {
#line 1588 "cplus.met"
#line 1589 "cplus.met"
        {
#line 1589 "cplus.met"
            PPTREE _ptTree0=0;
#line 1589 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_value)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1589 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(declarator_list_init_exit,"declarator_list_init")
#line 1589 "cplus.met"
            }
#line 1589 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1589 "cplus.met"
        }
#line 1589 "cplus.met"
#line 1589 "cplus.met"
        if (list){
#line 1589 "cplus.met"
#line 1589 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1589 "cplus.met"
        } else {
#line 1589 "cplus.met"
#line 1589 "cplus.met"
            list = _addlist1 ;
#line 1589 "cplus.met"
        }
#line 1589 "cplus.met"
#line 1589 "cplus.met"
#line 1590 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1590 "cplus.met"
#line 1591 "cplus.met"
    {
#line 1591 "cplus.met"
        _retValue = list ;
#line 1591 "cplus.met"
        goto declarator_list_init_ret;
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
declarator_list_init_exit :
#line 1592 "cplus.met"

#line 1592 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_EXIT,(PPTREE)0);
#line 1592 "cplus.met"
    _funcLevel--;
#line 1592 "cplus.met"
    return((PPTREE) -1) ;
#line 1592 "cplus.met"

#line 1592 "cplus.met"
declarator_list_init_ret :
#line 1592 "cplus.met"
    
#line 1592 "cplus.met"
    _Debug = TRACE_RULE("declarator_list_init",TRACE_RETURN,_retValue);
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
#line 1566 "cplus.met"
PPTREE cplus::declarator_value ( int error_free)
#line 1566 "cplus.met"
{
#line 1566 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1566 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1566 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1566 "cplus.met"
    int _Debug = TRACE_RULE("declarator_value",TRACE_ENTER,(PPTREE)0);
#line 1566 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1566 "cplus.met"
#line 1566 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1566 "cplus.met"
#line 1568 "cplus.met"
    if ( (valTree=NQUICK_CALL(_Tak(declarator)(error_free), 49, cplus))== (PPTREE) -1 ) {
#line 1568 "cplus.met"
        MulFreeTree(1,valTree);
        PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1568 "cplus.met"
    }
#line 1568 "cplus.met"
#line 1569 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1569 "cplus.met"
    switch( lexEl.Value) {
#line 1569 "cplus.met"
#line 1570 "cplus.met"
        case EGAL : 
#line 1570 "cplus.met"
            tokenAhead = 0 ;
#line 1570 "cplus.met"
            CommTerm();
#line 1570 "cplus.met"
#line 1570 "cplus.met"
            {
#line 1570 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1570 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF, 2);
#line 1570 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1570 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 84, cplus))== (PPTREE) -1 ) {
#line 1570 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1570 "cplus.met"
                }
#line 1570 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1570 "cplus.met"
                valTree=_ptRes0;
#line 1570 "cplus.met"
            }
#line 1570 "cplus.met"
            break;
#line 1570 "cplus.met"
#line 1573 "cplus.met"
        case POUV : 
#line 1573 "cplus.met"
            tokenAhead = 0 ;
#line 1573 "cplus.met"
            CommTerm();
#line 1573 "cplus.met"
#line 1572 "cplus.met"
#line 1573 "cplus.met"
            {
#line 1573 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1573 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_CALL, 2);
#line 1573 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1573 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1573 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1573 "cplus.met"
                }
#line 1573 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1573 "cplus.met"
                valTree=_ptRes0;
#line 1573 "cplus.met"
            }
#line 1573 "cplus.met"
#line 1574 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1574 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1574 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,")")
#line 1574 "cplus.met"
            } else {
#line 1574 "cplus.met"
                tokenAhead = 0 ;
#line 1574 "cplus.met"
            }
#line 1574 "cplus.met"
#line 1574 "cplus.met"
            break;
#line 1574 "cplus.met"
#line 1578 "cplus.met"
        case AOUV : 
#line 1578 "cplus.met"
            tokenAhead = 0 ;
#line 1578 "cplus.met"
            CommTerm();
#line 1578 "cplus.met"
#line 1577 "cplus.met"
#line 1578 "cplus.met"
            {
#line 1578 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1578 "cplus.met"
                _ptRes0= MakeTree(TYP_AFF_BRA, 2);
#line 1578 "cplus.met"
                ReplaceTree(_ptRes0, 1, valTree );
#line 1578 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1578 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                    PROG_EXIT(declarator_value_exit,"declarator_value")
#line 1578 "cplus.met"
                }
#line 1578 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1578 "cplus.met"
                valTree=_ptRes0;
#line 1578 "cplus.met"
            }
#line 1578 "cplus.met"
#line 1579 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1579 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1579 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(declarator_value_exit,"}")
#line 1579 "cplus.met"
            } else {
#line 1579 "cplus.met"
                tokenAhead = 0 ;
#line 1579 "cplus.met"
            }
#line 1579 "cplus.met"
#line 1579 "cplus.met"
            break;
#line 1579 "cplus.met"
#line 1579 "cplus.met"
        default : 
#line 1579 "cplus.met"
#line 1579 "cplus.met"
            break;
#line 1579 "cplus.met"
    }
#line 1579 "cplus.met"
#line 1583 "cplus.met"
    {
#line 1583 "cplus.met"
        _retValue = valTree ;
#line 1583 "cplus.met"
        goto declarator_value_ret;
#line 1583 "cplus.met"
        
#line 1583 "cplus.met"
    }
#line 1583 "cplus.met"
#line 1583 "cplus.met"
#line 1583 "cplus.met"

#line 1584 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1584 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1584 "cplus.met"
return((PPTREE) 0);
#line 1584 "cplus.met"

#line 1584 "cplus.met"
declarator_value_exit :
#line 1584 "cplus.met"

#line 1584 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_EXIT,(PPTREE)0);
#line 1584 "cplus.met"
    _funcLevel--;
#line 1584 "cplus.met"
    return((PPTREE) -1) ;
#line 1584 "cplus.met"

#line 1584 "cplus.met"
declarator_value_ret :
#line 1584 "cplus.met"
    
#line 1584 "cplus.met"
    _Debug = TRACE_RULE("declarator_value",TRACE_RETURN,_retValue);
#line 1584 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1584 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1584 "cplus.met"
    return _retValue ;
#line 1584 "cplus.met"
}
#line 1584 "cplus.met"

#line 1584 "cplus.met"
#line 1521 "cplus.met"
PPTREE cplus::define_dir ( int error_free)
#line 1521 "cplus.met"
{
#line 1521 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1521 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1521 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1521 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1521 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1521 "cplus.met"
    int _Debug = TRACE_RULE("define_dir",TRACE_ENTER,(PPTREE)0);
#line 1521 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1521 "cplus.met"
#line 1521 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1521 "cplus.met"
#line 1521 "cplus.met"
    PPTREE retTree = (PPTREE) 0,listDefine = (PPTREE) 0,defineContent = (PPTREE) 0;
#line 1521 "cplus.met"
#line 1523 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1523 "cplus.met"
    if ( ! TERM_OR_META(DEFINE_DIR,"DEFINE_DIR") || !(CommTerm(),1)) {
#line 1523 "cplus.met"
        MulFreeTree(4,_addlist1,defineContent,listDefine,retTree);
        TOKEN_EXIT(define_dir_exit,"DEFINE_DIR")
#line 1523 "cplus.met"
    } else {
#line 1523 "cplus.met"
        tokenAhead = 0 ;
#line 1523 "cplus.met"
    }
#line 1523 "cplus.met"
#line 1524 "cplus.met"
    {
#line 1524 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1524 "cplus.met"
        _ptRes0= MakeTree(DEFINE_DIR, 3);
#line 1524 "cplus.met"
        {
#line 1524 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1524 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1524 "cplus.met"
            (tokenAhead == 4|| (LexDefineName(),TRACE_LEX(1)));
#line 1524 "cplus.met"
            if ( ! TERM_OR_META(DEFINE_NAME,"DEFINE_NAME") || !(BUILD_TERM_META(_ptTree1))) {
#line 1524 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                TOKEN_EXIT(define_dir_exit,"DEFINE_NAME")
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
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1524 "cplus.met"
        retTree=_ptRes0;
#line 1524 "cplus.met"
    }
#line 1524 "cplus.met"
#line 1525 "cplus.met"
    {
#line 1525 "cplus.met"
        keepCarriage = 1 ;
#line 1525 "cplus.met"
#line 1526 "cplus.met"
#line 1527 "cplus.met"
        if ((!tokenAhead || ExtUnputBuf ()) && (GetString("(",0))){
#line 1527 "cplus.met"
#line 1528 "cplus.met"
            {
#line 1528 "cplus.met"
                PPTREE _ptTree0=0;
#line 1528 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list)(error_free), 109, cplus))== (PPTREE) -1 ) {
#line 1528 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    PROG_EXIT(define_dir_exit,"define_dir")
#line 1528 "cplus.met"
                }
#line 1528 "cplus.met"
                ReplaceTree(retTree , 2 , _ptTree0);
#line 1528 "cplus.met"
            }
#line 1528 "cplus.met"
#line 1528 "cplus.met"
        }
#line 1528 "cplus.met"
#line 1529 "cplus.met"
        ExtUnputBuf();
#line 1529 "cplus.met"
        while ((c == ' ')||(c == '\t'))
#line 1529 "cplus.met"
            NextChar() ;
#line 1529 "cplus.met"
        ptStockBuf = -1;
#line 1529 "cplus.met"
        lexEl.Erase();
#line 1529 "cplus.met"
        tokenAhead = 0;
#line 1529 "cplus.met"
        oldLine=line,oldCol=col;
#line 1529 "cplus.met"
        if ( !lexCallLex) {
#line 1529 "cplus.met"
            PUT_COORD_CALL;
#line 1529 "cplus.met"
        }
#line 1529 "cplus.met"
#line 1530 "cplus.met"
        {
#line 1530 "cplus.met"
            keepAll = 1 ;
#line 1530 "cplus.met"
#line 1531 "cplus.met"
#line 1531 "cplus.met"
            _addlist1 = listDefine ;
#line 1531 "cplus.met"
#line 1532 "cplus.met"
            while ((tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)))&&TERM_OR_META(DEFINED_CONTINUED,"DEFINED_CONTINUED") && !(tokenAhead = 0) && ( BUILD_TERM_META(defineContent)))  { 
#line 1532 "cplus.met"
#line 1533 "cplus.met"
#line 1533 "cplus.met"
                _addlist1 =AddList(_addlist1 ,defineContent );
#line 1533 "cplus.met"
#line 1533 "cplus.met"
                if (listDefine){
#line 1533 "cplus.met"
#line 1533 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1533 "cplus.met"
                } else {
#line 1533 "cplus.met"
#line 1533 "cplus.met"
                    listDefine = _addlist1 ;
#line 1533 "cplus.met"
                }
#line 1533 "cplus.met"
            } 
#line 1533 "cplus.met"
#line 1534 "cplus.met"
            {
#line 1534 "cplus.met"
                PPTREE _ptTree0=0;
#line 1534 "cplus.met"
                (tokenAhead == 3|| (LexDefine(),TRACE_LEX(1)));
#line 1534 "cplus.met"
                if ( ! TERM_OR_META(DEFINED_NOT_CONTINUED,"DEFINED_NOT_CONTINUED") || !(BUILD_TERM_META(_ptTree0))) {
#line 1534 "cplus.met"
                    MulFreeTree(5,_ptTree0,_addlist1,defineContent,listDefine,retTree);
                    TOKEN_EXIT(define_dir_exit,"DEFINED_NOT_CONTINUED")
#line 1534 "cplus.met"
                } else {
#line 1534 "cplus.met"
                    tokenAhead = 0 ;
#line 1534 "cplus.met"
                }
#line 1534 "cplus.met"
                listDefine =AddList(listDefine , _ptTree0);
#line 1534 "cplus.met"
            }
#line 1534 "cplus.met"
#line 1534 "cplus.met"
            keepAll =  _oldkeepAll;
#line 1534 "cplus.met"
        }
#line 1534 "cplus.met"
#line 1534 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1534 "cplus.met"
    }
#line 1534 "cplus.met"
#line 1537 "cplus.met"
    {
#line 1537 "cplus.met"
        PPTREE _ptTree0=0;
#line 1537 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,3 ,listDefine );
#line 1537 "cplus.met"
        _retValue =_ptTree0;
#line 1537 "cplus.met"
        goto define_dir_ret;
#line 1537 "cplus.met"
    }
#line 1537 "cplus.met"
#line 1537 "cplus.met"
#line 1537 "cplus.met"

#line 1538 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1538 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1538 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1538 "cplus.met"
keepAll =  _oldkeepAll;
#line 1538 "cplus.met"
return((PPTREE) 0);
#line 1538 "cplus.met"

#line 1538 "cplus.met"
define_dir_exit :
#line 1538 "cplus.met"

#line 1538 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_EXIT,(PPTREE)0);
#line 1538 "cplus.met"
    _funcLevel--;
#line 1538 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1538 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1538 "cplus.met"
    return((PPTREE) -1) ;
#line 1538 "cplus.met"

#line 1538 "cplus.met"
define_dir_ret :
#line 1538 "cplus.met"
    
#line 1538 "cplus.met"
    _Debug = TRACE_RULE("define_dir",TRACE_RETURN,_retValue);
#line 1538 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1538 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1538 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1538 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1538 "cplus.met"
    return _retValue ;
#line 1538 "cplus.met"
}
#line 1538 "cplus.met"

#line 1538 "cplus.met"
