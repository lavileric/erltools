/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1809 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1809 "cplus.met"
{
#line 1809 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1809 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1809 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1809 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1809 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1809 "cplus.met"
#line 1809 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1809 "cplus.met"
#line 1811 "cplus.met"
    {
#line 1811 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1811 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1811 "cplus.met"
        {
#line 1811 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1811 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1811 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1811 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1811 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1811 "cplus.met"
            } else {
#line 1811 "cplus.met"
                tokenAhead = 0 ;
#line 1811 "cplus.met"
            }
#line 1811 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1811 "cplus.met"
            _ptTree0=_ptRes1;
#line 1811 "cplus.met"
        }
#line 1811 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1811 "cplus.met"
        valTree=_ptRes0;
#line 1811 "cplus.met"
    }
#line 1811 "cplus.met"
#line 1812 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1812 "cplus.met"
#line 1813 "cplus.met"
        {
#line 1813 "cplus.met"
            PPTREE _ptTree0=0;
#line 1813 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1813 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1813 "cplus.met"
            }
#line 1813 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1813 "cplus.met"
        }
#line 1813 "cplus.met"
#line 1813 "cplus.met"
    }
#line 1813 "cplus.met"
#line 1814 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1814 "cplus.met"
#line 1814 "cplus.met"
    }
#line 1814 "cplus.met"
#line 1816 "cplus.met"
    {
#line 1816 "cplus.met"
        _retValue = valTree ;
#line 1816 "cplus.met"
        goto enum_val_ret;
#line 1816 "cplus.met"
        
#line 1816 "cplus.met"
    }
#line 1816 "cplus.met"
#line 1816 "cplus.met"
#line 1816 "cplus.met"

#line 1817 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1817 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1817 "cplus.met"
return((PPTREE) 0);
#line 1817 "cplus.met"

#line 1817 "cplus.met"
enum_val_exit :
#line 1817 "cplus.met"

#line 1817 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1817 "cplus.met"
    _funcLevel--;
#line 1817 "cplus.met"
    return((PPTREE) -1) ;
#line 1817 "cplus.met"

#line 1817 "cplus.met"
enum_val_ret :
#line 1817 "cplus.met"
    
#line 1817 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1817 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1817 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1817 "cplus.met"
    return _retValue ;
#line 1817 "cplus.met"
}
#line 1817 "cplus.met"

#line 1817 "cplus.met"
#line 2816 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2816 "cplus.met"
{
#line 2816 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2816 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2816 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2816 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2816 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2816 "cplus.met"
#line 2816 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2816 "cplus.met"
#line 2818 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2818 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2818 "cplus.met"
    }
#line 2818 "cplus.met"
#line 2819 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2819 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2819 "cplus.met"
#line 2820 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2820 "cplus.met"
#line 2821 "cplus.met"
            {
#line 2821 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2821 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2821 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2821 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2821 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2821 "cplus.met"
                }
#line 2821 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2821 "cplus.met"
                expTree=_ptRes0;
#line 2821 "cplus.met"
            }
#line 2821 "cplus.met"
        } else {
#line 2821 "cplus.met"
#line 2823 "cplus.met"
#line 2824 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2824 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2824 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2824 "cplus.met"
            } else {
#line 2824 "cplus.met"
                tokenAhead = 0 ;
#line 2824 "cplus.met"
            }
#line 2824 "cplus.met"
#line 2825 "cplus.met"
            {
#line 2825 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2825 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2825 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2825 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2825 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2825 "cplus.met"
                }
#line 2825 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2825 "cplus.met"
                expTree=_ptRes0;
#line 2825 "cplus.met"
            }
#line 2825 "cplus.met"
#line 2825 "cplus.met"
        }
#line 2825 "cplus.met"
    } 
#line 2825 "cplus.met"
#line 2827 "cplus.met"
    {
#line 2827 "cplus.met"
        _retValue = expTree ;
#line 2827 "cplus.met"
        goto equality_expression_ret;
#line 2827 "cplus.met"
        
#line 2827 "cplus.met"
    }
#line 2827 "cplus.met"
#line 2827 "cplus.met"
#line 2827 "cplus.met"

#line 2828 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2828 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2828 "cplus.met"
return((PPTREE) 0);
#line 2828 "cplus.met"

#line 2828 "cplus.met"
equality_expression_exit :
#line 2828 "cplus.met"

#line 2828 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2828 "cplus.met"
    _funcLevel--;
#line 2828 "cplus.met"
    return((PPTREE) -1) ;
#line 2828 "cplus.met"

#line 2828 "cplus.met"
equality_expression_ret :
#line 2828 "cplus.met"
    
#line 2828 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2828 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2828 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2828 "cplus.met"
    return _retValue ;
#line 2828 "cplus.met"
}
#line 2828 "cplus.met"

#line 2828 "cplus.met"
#line 2046 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 2046 "cplus.met"
{
#line 2046 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2046 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2046 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2046 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 2046 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2046 "cplus.met"
#line 2046 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2046 "cplus.met"
#line 2046 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2046 "cplus.met"
#line 2048 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2048 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 2048 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 2048 "cplus.met"
    } else {
#line 2048 "cplus.met"
        tokenAhead = 0 ;
#line 2048 "cplus.met"
    }
#line 2048 "cplus.met"
#line 2049 "cplus.met"
    {
#line 2049 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2049 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 2049 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2049 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 2049 "cplus.met"
        }
#line 2049 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2049 "cplus.met"
        retTree=_ptRes0;
#line 2049 "cplus.met"
    }
#line 2049 "cplus.met"
#line 2049 "cplus.met"
    _addlist1 = list ;
#line 2049 "cplus.met"
#line 2050 "cplus.met"
    do {
#line 2050 "cplus.met"
#line 2051 "cplus.met"
        {
#line 2051 "cplus.met"
            PPTREE _ptTree0=0;
#line 2051 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2051 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 2051 "cplus.met"
            }
#line 2051 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2051 "cplus.met"
        }
#line 2051 "cplus.met"
#line 2051 "cplus.met"
        if (list){
#line 2051 "cplus.met"
#line 2051 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2051 "cplus.met"
        } else {
#line 2051 "cplus.met"
#line 2051 "cplus.met"
            list = _addlist1 ;
#line 2051 "cplus.met"
        }
#line 2051 "cplus.met"
#line 2051 "cplus.met"
#line 2052 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 2052 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 2052 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2052 "cplus.met"
#line 2053 "cplus.met"
    {
#line 2053 "cplus.met"
        PPTREE _ptTree0=0;
#line 2053 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2053 "cplus.met"
        _retValue =_ptTree0;
#line 2053 "cplus.met"
        goto exception_ret;
#line 2053 "cplus.met"
    }
#line 2053 "cplus.met"
#line 2053 "cplus.met"
#line 2053 "cplus.met"

#line 2054 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2054 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2054 "cplus.met"
return((PPTREE) 0);
#line 2054 "cplus.met"

#line 2054 "cplus.met"
exception_exit :
#line 2054 "cplus.met"

#line 2054 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 2054 "cplus.met"
    _funcLevel--;
#line 2054 "cplus.met"
    return((PPTREE) -1) ;
#line 2054 "cplus.met"

#line 2054 "cplus.met"
exception_ret :
#line 2054 "cplus.met"
    
#line 2054 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 2054 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2054 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2054 "cplus.met"
    return _retValue ;
#line 2054 "cplus.met"
}
#line 2054 "cplus.met"

#line 2054 "cplus.met"
#line 2077 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 2077 "cplus.met"
{
#line 2077 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2077 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2077 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2077 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 2077 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2077 "cplus.met"
#line 2077 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2077 "cplus.met"
#line 2077 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 2077 "cplus.met"
#line 2079 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2079 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 2079 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 2079 "cplus.met"
    } else {
#line 2079 "cplus.met"
        tokenAhead = 0 ;
#line 2079 "cplus.met"
    }
#line 2079 "cplus.met"
#line 2080 "cplus.met"
    {
#line 2080 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2080 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 2080 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2080 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 2080 "cplus.met"
        }
#line 2080 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2080 "cplus.met"
        retTree=_ptRes0;
#line 2080 "cplus.met"
    }
#line 2080 "cplus.met"
#line 2080 "cplus.met"
    _addlist1 = list ;
#line 2080 "cplus.met"
#line 2081 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 29, cplus)) { 
#line 2081 "cplus.met"
#line 2082 "cplus.met"
#line 2082 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 2082 "cplus.met"
#line 2082 "cplus.met"
        if (list){
#line 2082 "cplus.met"
#line 2082 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2082 "cplus.met"
        } else {
#line 2082 "cplus.met"
#line 2082 "cplus.met"
            list = _addlist1 ;
#line 2082 "cplus.met"
        }
#line 2082 "cplus.met"
    } 
#line 2082 "cplus.met"
#line 2083 "cplus.met"
    {
#line 2083 "cplus.met"
        PPTREE _ptTree0=0;
#line 2083 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2083 "cplus.met"
        _retValue =_ptTree0;
#line 2083 "cplus.met"
        goto exception_ansi_ret;
#line 2083 "cplus.met"
    }
#line 2083 "cplus.met"
#line 2083 "cplus.met"
#line 2083 "cplus.met"

#line 2084 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2084 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2084 "cplus.met"
return((PPTREE) 0);
#line 2084 "cplus.met"

#line 2084 "cplus.met"
exception_ansi_exit :
#line 2084 "cplus.met"

#line 2084 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 2084 "cplus.met"
    _funcLevel--;
#line 2084 "cplus.met"
    return((PPTREE) -1) ;
#line 2084 "cplus.met"

#line 2084 "cplus.met"
exception_ansi_ret :
#line 2084 "cplus.met"
    
#line 2084 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 2084 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2084 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2084 "cplus.met"
    return _retValue ;
#line 2084 "cplus.met"
}
#line 2084 "cplus.met"

#line 2084 "cplus.met"
#line 3382 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3382 "cplus.met"
{
#line 3382 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3382 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3382 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3382 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3382 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3382 "cplus.met"
#line 3382 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3382 "cplus.met"
#line 3382 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3382 "cplus.met"
#line 3384 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3384 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3384 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3384 "cplus.met"
    } else {
#line 3384 "cplus.met"
        tokenAhead = 0 ;
#line 3384 "cplus.met"
    }
#line 3384 "cplus.met"
#line 3385 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3385 "cplus.met"
#line 3386 "cplus.met"
#line 3387 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3387 "cplus.met"
#line 3389 "cplus.met"
#line 3389 "cplus.met"
            _addlist1 = exceptionList ;
#line 3389 "cplus.met"
#line 3388 "cplus.met"
            do {
#line 3388 "cplus.met"
#line 3389 "cplus.met"
                {
#line 3389 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3389 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 3389 "cplus.met"
                        MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                        PROG_EXIT(exception_list_exit,"exception_list")
#line 3389 "cplus.met"
                    }
#line 3389 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3389 "cplus.met"
                }
#line 3389 "cplus.met"
#line 3389 "cplus.met"
                if (exceptionList){
#line 3389 "cplus.met"
#line 3389 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3389 "cplus.met"
                } else {
#line 3389 "cplus.met"
#line 3389 "cplus.met"
                    exceptionList = _addlist1 ;
#line 3389 "cplus.met"
                }
#line 3389 "cplus.met"
#line 3389 "cplus.met"
#line 3390 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3390 "cplus.met"
        }
#line 3390 "cplus.met"
#line 3391 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3391 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3391 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3391 "cplus.met"
        } else {
#line 3391 "cplus.met"
            tokenAhead = 0 ;
#line 3391 "cplus.met"
        }
#line 3391 "cplus.met"
#line 3391 "cplus.met"
#line 3391 "cplus.met"
    } else {
#line 3391 "cplus.met"
#line 3394 "cplus.met"
        {
#line 3394 "cplus.met"
            PPTREE _ptTree0=0;
#line 3394 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 122, cplus))== (PPTREE) -1 ) {
#line 3394 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3394 "cplus.met"
            }
#line 3394 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3394 "cplus.met"
        }
#line 3394 "cplus.met"
    }
#line 3394 "cplus.met"
#line 3395 "cplus.met"
    {
#line 3395 "cplus.met"
        PPTREE _ptTree0=0;
#line 3395 "cplus.met"
        {
#line 3395 "cplus.met"
            PPTREE _ptRes1=0;
#line 3395 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3395 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3395 "cplus.met"
            _ptTree0=_ptRes1;
#line 3395 "cplus.met"
        }
#line 3395 "cplus.met"
        _retValue =_ptTree0;
#line 3395 "cplus.met"
        goto exception_list_ret;
#line 3395 "cplus.met"
    }
#line 3395 "cplus.met"
#line 3395 "cplus.met"
#line 3395 "cplus.met"

#line 3396 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3396 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3396 "cplus.met"
return((PPTREE) 0);
#line 3396 "cplus.met"

#line 3396 "cplus.met"
exception_list_exit :
#line 3396 "cplus.met"

#line 3396 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3396 "cplus.met"
    _funcLevel--;
#line 3396 "cplus.met"
    return((PPTREE) -1) ;
#line 3396 "cplus.met"

#line 3396 "cplus.met"
exception_list_ret :
#line 3396 "cplus.met"
    
#line 3396 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3396 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3396 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3396 "cplus.met"
    return _retValue ;
#line 3396 "cplus.met"
}
#line 3396 "cplus.met"

#line 3396 "cplus.met"
#line 2800 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2800 "cplus.met"
{
#line 2800 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2800 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2800 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2800 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2800 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2800 "cplus.met"
#line 2800 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2800 "cplus.met"
#line 2802 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2802 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2802 "cplus.met"
    }
#line 2802 "cplus.met"
#line 2803 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2803 "cplus.met"
#line 2804 "cplus.met"
        {
#line 2804 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2804 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2804 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2804 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2804 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2804 "cplus.met"
            }
#line 2804 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2804 "cplus.met"
            expTree=_ptRes0;
#line 2804 "cplus.met"
        }
#line 2804 "cplus.met"
    } 
#line 2804 "cplus.met"
#line 2805 "cplus.met"
    {
#line 2805 "cplus.met"
        _retValue = expTree ;
#line 2805 "cplus.met"
        goto exclusive_or_expression_ret;
#line 2805 "cplus.met"
        
#line 2805 "cplus.met"
    }
#line 2805 "cplus.met"
#line 2805 "cplus.met"
#line 2805 "cplus.met"

#line 2806 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2806 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2806 "cplus.met"
return((PPTREE) 0);
#line 2806 "cplus.met"

#line 2806 "cplus.met"
exclusive_or_expression_exit :
#line 2806 "cplus.met"

#line 2806 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2806 "cplus.met"
    _funcLevel--;
#line 2806 "cplus.met"
    return((PPTREE) -1) ;
#line 2806 "cplus.met"

#line 2806 "cplus.met"
exclusive_or_expression_ret :
#line 2806 "cplus.met"
    
#line 2806 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 2806 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2806 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2806 "cplus.met"
    return _retValue ;
#line 2806 "cplus.met"
}
#line 2806 "cplus.met"

#line 2806 "cplus.met"
#line 2721 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2721 "cplus.met"
{
#line 2721 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2721 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2721 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2721 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2721 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2721 "cplus.met"
#line 2721 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2721 "cplus.met"
#line 2721 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2721 "cplus.met"
#line 2723 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2723 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2723 "cplus.met"
    }
#line 2723 "cplus.met"
#line 2724 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2724 "cplus.met"
#line 2725 "cplus.met"
#line 2726 "cplus.met"
        list =AddList(list ,expTree );
#line 2726 "cplus.met"
#line 2726 "cplus.met"
        _addlist1 = list ;
#line 2726 "cplus.met"
#line 2727 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2727 "cplus.met"
#line 2728 "cplus.met"
#line 2728 "cplus.met"
            {
#line 2728 "cplus.met"
                PPTREE _ptTree0=0;
#line 2728 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2728 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2728 "cplus.met"
                }
#line 2728 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2728 "cplus.met"
            }
#line 2728 "cplus.met"
#line 2728 "cplus.met"
            if (list){
#line 2728 "cplus.met"
#line 2728 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2728 "cplus.met"
            } else {
#line 2728 "cplus.met"
#line 2728 "cplus.met"
                list = _addlist1 ;
#line 2728 "cplus.met"
            }
#line 2728 "cplus.met"
        } 
#line 2728 "cplus.met"
#line 2729 "cplus.met"
        {
#line 2729 "cplus.met"
            PPTREE _ptTree0=0;
#line 2729 "cplus.met"
            {
#line 2729 "cplus.met"
                PPTREE _ptRes1=0;
#line 2729 "cplus.met"
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2729 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2729 "cplus.met"
                _ptTree0=_ptRes1;
#line 2729 "cplus.met"
            }
#line 2729 "cplus.met"
            _retValue =_ptTree0;
#line 2729 "cplus.met"
            goto expression_ret;
#line 2729 "cplus.met"
        }
#line 2729 "cplus.met"
#line 2729 "cplus.met"
#line 2729 "cplus.met"
    } else {
#line 2729 "cplus.met"
#line 2732 "cplus.met"
        {
#line 2732 "cplus.met"
            _retValue = expTree ;
#line 2732 "cplus.met"
            goto expression_ret;
#line 2732 "cplus.met"
            
#line 2732 "cplus.met"
        }
#line 2732 "cplus.met"
    }
#line 2732 "cplus.met"
#line 2732 "cplus.met"
#line 2732 "cplus.met"

#line 2733 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2733 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2733 "cplus.met"
return((PPTREE) 0);
#line 2733 "cplus.met"

#line 2733 "cplus.met"
expression_exit :
#line 2733 "cplus.met"

#line 2733 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2733 "cplus.met"
    _funcLevel--;
#line 2733 "cplus.met"
    return((PPTREE) -1) ;
#line 2733 "cplus.met"

#line 2733 "cplus.met"
expression_ret :
#line 2733 "cplus.met"
    
#line 2733 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2733 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2733 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2733 "cplus.met"
    return _retValue ;
#line 2733 "cplus.met"
}
#line 2733 "cplus.met"

#line 2733 "cplus.met"
#line 3466 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3466 "cplus.met"
{
#line 3466 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3466 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3466 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3466 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3466 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3466 "cplus.met"
#line 3466 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3466 "cplus.met"
#line 3468 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3468 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3468 "cplus.met"
    }
#line 3468 "cplus.met"
#line 3469 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3469 "cplus.met"
#line 3470 "cplus.met"
        
#line 3470 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3470 "cplus.met"
        goto expression_for_exit;
#line 3470 "cplus.met"
#line 3470 "cplus.met"
    }
#line 3470 "cplus.met"
#line 3471 "cplus.met"
    {
#line 3471 "cplus.met"
        _retValue = retTree ;
#line 3471 "cplus.met"
        goto expression_for_ret;
#line 3471 "cplus.met"
        
#line 3471 "cplus.met"
    }
#line 3471 "cplus.met"
#line 3471 "cplus.met"
#line 3471 "cplus.met"

#line 3472 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3472 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3472 "cplus.met"
return((PPTREE) 0);
#line 3472 "cplus.met"

#line 3472 "cplus.met"
expression_for_exit :
#line 3472 "cplus.met"

#line 3472 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3472 "cplus.met"
    _funcLevel--;
#line 3472 "cplus.met"
    return((PPTREE) -1) ;
#line 3472 "cplus.met"

#line 3472 "cplus.met"
expression_for_ret :
#line 3472 "cplus.met"
    
#line 3472 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3472 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3472 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3472 "cplus.met"
    return _retValue ;
#line 3472 "cplus.met"
}
#line 3472 "cplus.met"

#line 3472 "cplus.met"
#line 1145 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1145 "cplus.met"
{
#line 1145 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1145 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1145 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1145 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1145 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1145 "cplus.met"
#line 1145 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1145 "cplus.met"
#line 1147 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 71, cplus)){
#line 1147 "cplus.met"
#line 1148 "cplus.met"
        {
#line 1148 "cplus.met"
            _retValue = retTree ;
#line 1148 "cplus.met"
            goto ext_all_ret;
#line 1148 "cplus.met"
            
#line 1148 "cplus.met"
        }
#line 1148 "cplus.met"
    } else {
#line 1148 "cplus.met"
#line 1150 "cplus.met"
        {
#line 1150 "cplus.met"
            PPTREE _ptTree0=0;
#line 1150 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 93, cplus))== (PPTREE) -1 ) {
#line 1150 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1150 "cplus.met"
            }
#line 1150 "cplus.met"
            _retValue =_ptTree0;
#line 1150 "cplus.met"
            goto ext_all_ret;
#line 1150 "cplus.met"
        }
#line 1150 "cplus.met"
    }
#line 1150 "cplus.met"
#line 1150 "cplus.met"
#line 1150 "cplus.met"

#line 1151 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1151 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1151 "cplus.met"
return((PPTREE) 0);
#line 1151 "cplus.met"

#line 1151 "cplus.met"
ext_all_exit :
#line 1151 "cplus.met"

#line 1151 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1151 "cplus.met"
    _funcLevel--;
#line 1151 "cplus.met"
    return((PPTREE) -1) ;
#line 1151 "cplus.met"

#line 1151 "cplus.met"
ext_all_ret :
#line 1151 "cplus.met"
    
#line 1151 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
#line 1151 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1151 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1151 "cplus.met"
    return _retValue ;
#line 1151 "cplus.met"
}
#line 1151 "cplus.met"

#line 1151 "cplus.met"
#line 1153 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1153 "cplus.met"
{
#line 1153 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1153 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1153 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1153 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1153 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1153 "cplus.met"
#line 1153 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1153 "cplus.met"
#line 1155 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 119, cplus))){
#line 1155 "cplus.met"
#line 1156 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1156 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1156 "cplus.met"
        }
#line 1156 "cplus.met"
    }
#line 1156 "cplus.met"
#line 1157 "cplus.met"
    {
#line 1157 "cplus.met"
        _retValue = retTree ;
#line 1157 "cplus.met"
        goto ext_all_ext_ret;
#line 1157 "cplus.met"
        
#line 1157 "cplus.met"
    }
#line 1157 "cplus.met"
#line 1157 "cplus.met"
#line 1157 "cplus.met"

#line 1158 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1158 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1158 "cplus.met"
return((PPTREE) 0);
#line 1158 "cplus.met"

#line 1158 "cplus.met"
ext_all_ext_exit :
#line 1158 "cplus.met"

#line 1158 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1158 "cplus.met"
    _funcLevel--;
#line 1158 "cplus.met"
    return((PPTREE) -1) ;
#line 1158 "cplus.met"

#line 1158 "cplus.met"
ext_all_ext_ret :
#line 1158 "cplus.met"
    
#line 1158 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1158 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1158 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1158 "cplus.met"
    return _retValue ;
#line 1158 "cplus.met"
}
#line 1158 "cplus.met"

#line 1158 "cplus.met"
#line 1125 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1125 "cplus.met"
{
#line 1125 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1125 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1125 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1125 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1125 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1125 "cplus.met"
#line 1125 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1125 "cplus.met"
#line 1125 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1125 "cplus.met"
#line 1127 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1127 "cplus.met"
#line 1128 "cplus.met"
#line 1129 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1129 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1129 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1129 "cplus.met"
        } else {
#line 1129 "cplus.met"
            tokenAhead = 0 ;
#line 1129 "cplus.met"
        }
#line 1129 "cplus.met"
#line 1129 "cplus.met"
        _addlist1 = listTemp ;
#line 1129 "cplus.met"
#line 1130 "cplus.met"
        do {
#line 1130 "cplus.met"
#line 1131 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1131 "cplus.met"
            switch( lexEl.Value) {
#line 1131 "cplus.met"
#line 1132 "cplus.met"
                case CLASS : 
#line 1132 "cplus.met"
                    tokenAhead = 0 ;
#line 1132 "cplus.met"
                    CommTerm();
#line 1132 "cplus.met"
#line 1132 "cplus.met"
#line 1132 "cplus.met"
                    {
#line 1132 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1132 "cplus.met"
                        {
#line 1132 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1132 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1132 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1132 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1132 "cplus.met"
                            }
#line 1132 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1132 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1132 "cplus.met"
                        }
#line 1132 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1132 "cplus.met"
                    }
#line 1132 "cplus.met"
#line 1132 "cplus.met"
                    if (listTemp){
#line 1132 "cplus.met"
#line 1132 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1132 "cplus.met"
                    } else {
#line 1132 "cplus.met"
#line 1132 "cplus.met"
                        listTemp = _addlist1 ;
#line 1132 "cplus.met"
                    }
#line 1132 "cplus.met"
                    break;
#line 1132 "cplus.met"
#line 1133 "cplus.met"
                default : 
#line 1133 "cplus.met"
#line 1133 "cplus.met"
#line 1133 "cplus.met"
                    {
#line 1133 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1133 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1133 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1133 "cplus.met"
                        }
#line 1133 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1133 "cplus.met"
                    }
#line 1133 "cplus.met"
#line 1133 "cplus.met"
                    if (listTemp){
#line 1133 "cplus.met"
#line 1133 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1133 "cplus.met"
                    } else {
#line 1133 "cplus.met"
#line 1133 "cplus.met"
                        listTemp = _addlist1 ;
#line 1133 "cplus.met"
                    }
#line 1133 "cplus.met"
                    break;
#line 1133 "cplus.met"
            }
#line 1133 "cplus.met"
#line 1133 "cplus.met"
#line 1135 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1135 "cplus.met"
#line 1136 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1136 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1136 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1136 "cplus.met"
        } else {
#line 1136 "cplus.met"
            tokenAhead = 0 ;
#line 1136 "cplus.met"
        }
#line 1136 "cplus.met"
#line 1137 "cplus.met"
        {
#line 1137 "cplus.met"
            PPTREE _ptTree0=0;
#line 1137 "cplus.met"
            {
#line 1137 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1137 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1137 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1137 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1137 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1137 "cplus.met"
                }
#line 1137 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1137 "cplus.met"
                _ptTree0=_ptRes1;
#line 1137 "cplus.met"
            }
#line 1137 "cplus.met"
            _retValue =_ptTree0;
#line 1137 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1137 "cplus.met"
        }
#line 1137 "cplus.met"
#line 1137 "cplus.met"
#line 1137 "cplus.met"
    }
#line 1137 "cplus.met"
#line 1139 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 76, cplus)) || 
#line 1139 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 81, cplus))) || 
#line 1139 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 77, cplus))) || 
#line 1139 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 19, cplus))) || 
#line 1139 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(protected_array_declaration), 120, cplus))){
#line 1139 "cplus.met"
#line 1140 "cplus.met"
        {
#line 1140 "cplus.met"
            _retValue = decl ;
#line 1140 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1140 "cplus.met"
            
#line 1140 "cplus.met"
        }
#line 1140 "cplus.met"
    } else {
#line 1140 "cplus.met"
#line 1142 "cplus.met"
        {
#line 1142 "cplus.met"
            PPTREE _ptTree0=0;
#line 1142 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 1142 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1142 "cplus.met"
            }
#line 1142 "cplus.met"
            _retValue =_ptTree0;
#line 1142 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1142 "cplus.met"
        }
#line 1142 "cplus.met"
    }
#line 1142 "cplus.met"
#line 1142 "cplus.met"
#line 1142 "cplus.met"

#line 1143 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1143 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1143 "cplus.met"
return((PPTREE) 0);
#line 1143 "cplus.met"

#line 1143 "cplus.met"
ext_all_no_linkage_exit :
#line 1143 "cplus.met"

#line 1143 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1143 "cplus.met"
    _funcLevel--;
#line 1143 "cplus.met"
    return((PPTREE) -1) ;
#line 1143 "cplus.met"

#line 1143 "cplus.met"
ext_all_no_linkage_ret :
#line 1143 "cplus.met"
    
#line 1143 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
#line 1143 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1143 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1143 "cplus.met"
    return _retValue ;
#line 1143 "cplus.met"
}
#line 1143 "cplus.met"

#line 1143 "cplus.met"
#line 1629 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1629 "cplus.met"
{
#line 1629 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1629 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1629 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1629 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1629 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1629 "cplus.met"
#line 1629 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1629 "cplus.met"
#line 1631 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 73, cplus))){
#line 1631 "cplus.met"
#line 1632 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1632 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1632 "cplus.met"
        }
#line 1632 "cplus.met"
    }
#line 1632 "cplus.met"
#line 1633 "cplus.met"
    {
#line 1633 "cplus.met"
        _retValue = retTree ;
#line 1633 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
#line 1633 "cplus.met"
        
#line 1633 "cplus.met"
    }
#line 1633 "cplus.met"
#line 1633 "cplus.met"
#line 1633 "cplus.met"

#line 1634 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1634 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1634 "cplus.met"
return((PPTREE) 0);
#line 1634 "cplus.met"

#line 1634 "cplus.met"
ext_data_decl_sc_ty_exit :
#line 1634 "cplus.met"

#line 1634 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1634 "cplus.met"
    _funcLevel--;
#line 1634 "cplus.met"
    return((PPTREE) -1) ;
#line 1634 "cplus.met"

#line 1634 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1634 "cplus.met"
    
#line 1634 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
#line 1634 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1634 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1634 "cplus.met"
    return _retValue ;
#line 1634 "cplus.met"
}
#line 1634 "cplus.met"

#line 1634 "cplus.met"
#line 1610 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1610 "cplus.met"
{
#line 1610 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1610 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1610 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1610 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1610 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1610 "cplus.met"
#line 1610 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1610 "cplus.met"
#line 1612 "cplus.met"
    {
#line 1612 "cplus.met"
        PPTREE _ptRes0=0;
#line 1612 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1612 "cplus.met"
        retTree=_ptRes0;
#line 1612 "cplus.met"
    }
#line 1612 "cplus.met"
#line 1613 "cplus.met"
    {
#line 1613 "cplus.met"
        PPTREE _ptTree0=0;
#line 1613 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1613 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1613 "cplus.met"
        }
#line 1613 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1613 "cplus.met"
    }
#line 1613 "cplus.met"
#line 1614 "cplus.met"
    {
#line 1614 "cplus.met"
        PPTREE _ptTree0=0;
#line 1614 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 1614 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1614 "cplus.met"
        }
#line 1614 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1614 "cplus.met"
    }
#line 1614 "cplus.met"
#line 1615 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1615 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1615 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1615 "cplus.met"
    } else {
#line 1615 "cplus.met"
        tokenAhead = 0 ;
#line 1615 "cplus.met"
    }
#line 1615 "cplus.met"
#line 1616 "cplus.met"
    {
#line 1616 "cplus.met"
        _retValue = retTree ;
#line 1616 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
#line 1616 "cplus.met"
        
#line 1616 "cplus.met"
    }
#line 1616 "cplus.met"
#line 1616 "cplus.met"
#line 1616 "cplus.met"

#line 1617 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1617 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1617 "cplus.met"
return((PPTREE) 0);
#line 1617 "cplus.met"

#line 1617 "cplus.met"
ext_data_decl_sc_ty_full_exit :
#line 1617 "cplus.met"

#line 1617 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1617 "cplus.met"
    _funcLevel--;
#line 1617 "cplus.met"
    return((PPTREE) -1) ;
#line 1617 "cplus.met"

#line 1617 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1617 "cplus.met"
    
#line 1617 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
#line 1617 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1617 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1617 "cplus.met"
    return _retValue ;
#line 1617 "cplus.met"
}
#line 1617 "cplus.met"

#line 1617 "cplus.met"
#line 1620 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1620 "cplus.met"
{
#line 1620 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1620 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1620 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1620 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1620 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1620 "cplus.met"
#line 1620 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1620 "cplus.met"
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
#line 1623 "cplus.met"
    {
#line 1623 "cplus.met"
        PPTREE _ptTree0=0;
#line 1623 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 1623 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1623 "cplus.met"
        }
#line 1623 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1623 "cplus.met"
    }
#line 1623 "cplus.met"
#line 1624 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1624 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1624 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1624 "cplus.met"
    } else {
#line 1624 "cplus.met"
        tokenAhead = 0 ;
#line 1624 "cplus.met"
    }
#line 1624 "cplus.met"
#line 1625 "cplus.met"
    {
#line 1625 "cplus.met"
        _retValue = retTree ;
#line 1625 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1625 "cplus.met"
        
#line 1625 "cplus.met"
    }
#line 1625 "cplus.met"
#line 1625 "cplus.met"
#line 1625 "cplus.met"

#line 1626 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1626 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1626 "cplus.met"
return((PPTREE) 0);
#line 1626 "cplus.met"

#line 1626 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1626 "cplus.met"

#line 1626 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1626 "cplus.met"
    _funcLevel--;
#line 1626 "cplus.met"
    return((PPTREE) -1) ;
#line 1626 "cplus.met"

#line 1626 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1626 "cplus.met"
    
#line 1626 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1626 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1626 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1626 "cplus.met"
    return _retValue ;
#line 1626 "cplus.met"
}
#line 1626 "cplus.met"

#line 1626 "cplus.met"
#line 1636 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1636 "cplus.met"
{
#line 1636 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1636 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1636 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1636 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1636 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1636 "cplus.met"
#line 1636 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1636 "cplus.met"
#line 1638 "cplus.met"
    if ((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 45, cplus))) && 
#line 1638 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inline_namespace), 87, cplus)))){
#line 1638 "cplus.met"
#line 1639 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 72, cplus))== (PPTREE) -1 ) {
#line 1639 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1639 "cplus.met"
        }
#line 1639 "cplus.met"
    }
#line 1639 "cplus.met"
#line 1640 "cplus.met"
    {
#line 1640 "cplus.met"
        _retValue = retTree ;
#line 1640 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1640 "cplus.met"
        
#line 1640 "cplus.met"
    }
#line 1640 "cplus.met"
#line 1640 "cplus.met"
#line 1640 "cplus.met"

#line 1641 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1641 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1641 "cplus.met"
return((PPTREE) 0);
#line 1641 "cplus.met"

#line 1641 "cplus.met"
ext_data_decl_simp_exit :
#line 1641 "cplus.met"

#line 1641 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1641 "cplus.met"
    _funcLevel--;
#line 1641 "cplus.met"
    return((PPTREE) -1) ;
#line 1641 "cplus.met"

#line 1641 "cplus.met"
ext_data_decl_simp_ret :
#line 1641 "cplus.met"
    
#line 1641 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
#line 1641 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1641 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1641 "cplus.met"
    return _retValue ;
#line 1641 "cplus.met"
}
#line 1641 "cplus.met"

#line 1641 "cplus.met"
#line 1656 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1656 "cplus.met"
{
#line 1656 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1656 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1656 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1656 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1656 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1656 "cplus.met"
#line 1656 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1656 "cplus.met"
#line 1658 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1658 "cplus.met"
    switch( lexEl.Value) {
#line 1658 "cplus.met"
#line 1659 "cplus.met"
        case TYPEDEF : 
#line 1659 "cplus.met"
            tokenAhead = 0 ;
#line 1659 "cplus.met"
            CommTerm();
#line 1659 "cplus.met"
#line 1660 "cplus.met"
#line 1661 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 156, cplus))){
#line 1661 "cplus.met"
#line 1662 "cplus.met"
                {
#line 1662 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1662 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1662 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1662 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1662 "cplus.met"
                    }
#line 1662 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1662 "cplus.met"
                    retTree=_ptRes0;
#line 1662 "cplus.met"
                }
#line 1662 "cplus.met"
            }
#line 1662 "cplus.met"
#line 1663 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1663 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1663 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1663 "cplus.met"
            } else {
#line 1663 "cplus.met"
                tokenAhead = 0 ;
#line 1663 "cplus.met"
            }
#line 1663 "cplus.met"
#line 1664 "cplus.met"
            {
#line 1664 "cplus.met"
                _retValue = retTree ;
#line 1664 "cplus.met"
                goto ext_data_declaration_ret;
#line 1664 "cplus.met"
                
#line 1664 "cplus.met"
            }
#line 1664 "cplus.met"
#line 1664 "cplus.met"
            break;
#line 1664 "cplus.met"
#line 1666 "cplus.met"
        case NAMESPACE : 
#line 1666 "cplus.met"
#line 1666 "cplus.met"
            {
#line 1666 "cplus.met"
                PPTREE _ptTree0=0;
#line 1666 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1666 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1666 "cplus.met"
                }
#line 1666 "cplus.met"
                _retValue =_ptTree0;
#line 1666 "cplus.met"
                goto ext_data_declaration_ret;
#line 1666 "cplus.met"
            }
#line 1666 "cplus.met"
            break;
#line 1666 "cplus.met"
#line 1667 "cplus.met"
        case USING : 
#line 1667 "cplus.met"
#line 1667 "cplus.met"
            {
#line 1667 "cplus.met"
                PPTREE _ptTree0=0;
#line 1667 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1667 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1667 "cplus.met"
                }
#line 1667 "cplus.met"
                _retValue =_ptTree0;
#line 1667 "cplus.met"
                goto ext_data_declaration_ret;
#line 1667 "cplus.met"
            }
#line 1667 "cplus.met"
            break;
#line 1667 "cplus.met"
#line 1668 "cplus.met"
        case PVIR : 
#line 1668 "cplus.met"
            tokenAhead = 0 ;
#line 1668 "cplus.met"
            CommTerm();
#line 1668 "cplus.met"
#line 1668 "cplus.met"
            {
#line 1668 "cplus.met"
                PPTREE _ptTree0=0;
#line 1668 "cplus.met"
                {
#line 1668 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1668 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1668 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1668 "cplus.met"
                }
#line 1668 "cplus.met"
                _retValue =_ptTree0;
#line 1668 "cplus.met"
                goto ext_data_declaration_ret;
#line 1668 "cplus.met"
            }
#line 1668 "cplus.met"
            break;
#line 1668 "cplus.met"
#line 1669 "cplus.met"
        case __EXTENSION__ : 
#line 1669 "cplus.met"
            tokenAhead = 0 ;
#line 1669 "cplus.met"
            CommTerm();
#line 1669 "cplus.met"
#line 1669 "cplus.met"
            {
#line 1669 "cplus.met"
                PPTREE _ptTree0=0;
#line 1669 "cplus.met"
                {
#line 1669 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1669 "cplus.met"
                    _ptRes1= MakeTree(EXTENSION, 1);
#line 1669 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 1669 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1669 "cplus.met"
                    }
#line 1669 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1669 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1669 "cplus.met"
                }
#line 1669 "cplus.met"
                _retValue =_ptTree0;
#line 1669 "cplus.met"
                goto ext_data_declaration_ret;
#line 1669 "cplus.met"
            }
#line 1669 "cplus.met"
            break;
#line 1669 "cplus.met"
#line 1670 "cplus.met"
        default : 
#line 1670 "cplus.met"
#line 1670 "cplus.met"
            {
#line 1670 "cplus.met"
                PPTREE _ptTree0=0;
#line 1670 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 1670 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1670 "cplus.met"
                }
#line 1670 "cplus.met"
                _retValue =_ptTree0;
#line 1670 "cplus.met"
                goto ext_data_declaration_ret;
#line 1670 "cplus.met"
            }
#line 1670 "cplus.met"
            break;
#line 1670 "cplus.met"
    }
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
ext_data_declaration_exit :
#line 1671 "cplus.met"

#line 1671 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1671 "cplus.met"
    _funcLevel--;
#line 1671 "cplus.met"
    return((PPTREE) -1) ;
#line 1671 "cplus.met"

#line 1671 "cplus.met"
ext_data_declaration_ret :
#line 1671 "cplus.met"
    
#line 1671 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
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
#line 1338 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1338 "cplus.met"
{
#line 1338 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1338 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1338 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1338 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1338 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1338 "cplus.met"
#line 1338 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1338 "cplus.met"
#line 1340 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 57, cplus)){
#line 1340 "cplus.met"
#line 1341 "cplus.met"
        {
#line 1341 "cplus.met"
            _retValue = retTree ;
#line 1341 "cplus.met"
            goto ext_decl_dir_ret;
#line 1341 "cplus.met"
            
#line 1341 "cplus.met"
        }
#line 1341 "cplus.met"
    }
#line 1341 "cplus.met"
#line 1342 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1342 "cplus.met"
    switch( lexEl.Value) {
#line 1342 "cplus.met"
#line 1343 "cplus.met"
        case META : 
#line 1343 "cplus.met"
        case IF_DIR : 
#line 1343 "cplus.met"
            tokenAhead = 0 ;
#line 1343 "cplus.met"
            CommTerm();
#line 1343 "cplus.met"
#line 1343 "cplus.met"
            {
#line 1343 "cplus.met"
                PPTREE _ptTree0=0;
#line 1343 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1343 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1343 "cplus.met"
                }
#line 1343 "cplus.met"
                _retValue =_ptTree0;
#line 1343 "cplus.met"
                goto ext_decl_dir_ret;
#line 1343 "cplus.met"
            }
#line 1343 "cplus.met"
            break;
#line 1343 "cplus.met"
#line 1344 "cplus.met"
        case IFDEF_DIR : 
#line 1344 "cplus.met"
#line 1344 "cplus.met"
            {
#line 1344 "cplus.met"
                PPTREE _ptTree0=0;
#line 1344 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 1344 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1344 "cplus.met"
                }
#line 1344 "cplus.met"
                _retValue =_ptTree0;
#line 1344 "cplus.met"
                goto ext_decl_dir_ret;
#line 1344 "cplus.met"
            }
#line 1344 "cplus.met"
            break;
#line 1344 "cplus.met"
#line 1345 "cplus.met"
        case IFNDEF_DIR : 
#line 1345 "cplus.met"
#line 1345 "cplus.met"
            {
#line 1345 "cplus.met"
                PPTREE _ptTree0=0;
#line 1345 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 1345 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1345 "cplus.met"
                }
#line 1345 "cplus.met"
                _retValue =_ptTree0;
#line 1345 "cplus.met"
                goto ext_decl_dir_ret;
#line 1345 "cplus.met"
            }
#line 1345 "cplus.met"
            break;
#line 1345 "cplus.met"
        default :
#line 1345 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1345 "cplus.met"
            break;
#line 1345 "cplus.met"
    }
#line 1345 "cplus.met"
#line 1345 "cplus.met"
#line 1346 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1346 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1346 "cplus.met"
return((PPTREE) 0);
#line 1346 "cplus.met"

#line 1346 "cplus.met"
ext_decl_dir_exit :
#line 1346 "cplus.met"

#line 1346 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1346 "cplus.met"
    _funcLevel--;
#line 1346 "cplus.met"
    return((PPTREE) -1) ;
#line 1346 "cplus.met"

#line 1346 "cplus.met"
ext_decl_dir_ret :
#line 1346 "cplus.met"
    
#line 1346 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
#line 1346 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1346 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1346 "cplus.met"
    return _retValue ;
#line 1346 "cplus.met"
}
#line 1346 "cplus.met"

#line 1346 "cplus.met"
#line 1272 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1272 "cplus.met"
{
#line 1272 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1272 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1272 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1272 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1272 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1272 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1272 "cplus.met"
#line 1272 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1272 "cplus.met"
#line 1272 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1272 "cplus.met"
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
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1276 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1276 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
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
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1277 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1277 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1277 "cplus.met"
        } else {
#line 1277 "cplus.met"
            tokenAhead = 0 ;
#line 1277 "cplus.met"
        }
#line 1277 "cplus.met"
#line 1277 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1277 "cplus.met"
    }
#line 1277 "cplus.met"
#line 1277 "cplus.met"
    _addlist1 = list ;
#line 1277 "cplus.met"
#line 1279 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1279 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1279 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1279 "cplus.met"
#line 1280 "cplus.met"
#line 1280 "cplus.met"
        {
#line 1280 "cplus.met"
            PPTREE _ptTree0=0;
#line 1280 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1280 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1280 "cplus.met"
            }
#line 1280 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1280 "cplus.met"
        }
#line 1280 "cplus.met"
#line 1280 "cplus.met"
        if (list){
#line 1280 "cplus.met"
#line 1280 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1280 "cplus.met"
        } else {
#line 1280 "cplus.met"
#line 1280 "cplus.met"
            list = _addlist1 ;
#line 1280 "cplus.met"
        }
#line 1280 "cplus.met"
    } 
#line 1280 "cplus.met"
#line 1281 "cplus.met"
    {
#line 1281 "cplus.met"
        PPTREE _ptTree0=0;
#line 1281 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 1281 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1281 "cplus.met"
        }
#line 1281 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1281 "cplus.met"
    }
#line 1281 "cplus.met"
#line 1282 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1282 "cplus.met"
#line 1283 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1283 "cplus.met"
    switch( lexEl.Value) {
#line 1283 "cplus.met"
#line 1284 "cplus.met"
        case META : 
#line 1284 "cplus.met"
        case ELSE_DIR : 
#line 1284 "cplus.met"
            tokenAhead = 0 ;
#line 1284 "cplus.met"
            CommTerm();
#line 1284 "cplus.met"
#line 1285 "cplus.met"
#line 1285 "cplus.met"
            _addlist2 = list2 ;
#line 1285 "cplus.met"
#line 1286 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1286 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1286 "cplus.met"
#line 1287 "cplus.met"
#line 1287 "cplus.met"
                {
#line 1287 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1287 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1287 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1287 "cplus.met"
                    }
#line 1287 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1287 "cplus.met"
                }
#line 1287 "cplus.met"
#line 1287 "cplus.met"
                if (list2){
#line 1287 "cplus.met"
#line 1287 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1287 "cplus.met"
                } else {
#line 1287 "cplus.met"
#line 1287 "cplus.met"
                    list2 = _addlist2 ;
#line 1287 "cplus.met"
                }
#line 1287 "cplus.met"
            } 
#line 1287 "cplus.met"
#line 1288 "cplus.met"
            {
#line 1288 "cplus.met"
                PPTREE _ptTree0=0;
#line 1288 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 1288 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1288 "cplus.met"
                }
#line 1288 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1288 "cplus.met"
            }
#line 1288 "cplus.met"
#line 1289 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1289 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1289 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1289 "cplus.met"
            } else {
#line 1289 "cplus.met"
                tokenAhead = 0 ;
#line 1289 "cplus.met"
            }
#line 1289 "cplus.met"
#line 1290 "cplus.met"
            {
#line 1290 "cplus.met"
                PPTREE _ptTree0=0;
#line 1290 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1290 "cplus.met"
                _retValue =_ptTree0;
#line 1290 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1290 "cplus.met"
            }
#line 1290 "cplus.met"
#line 1290 "cplus.met"
            break;
#line 1290 "cplus.met"
#line 1292 "cplus.met"
        case ELIF_DIR : 
#line 1292 "cplus.met"
            tokenAhead = 0 ;
#line 1292 "cplus.met"
            CommTerm();
#line 1292 "cplus.met"
#line 1292 "cplus.met"
            {
#line 1292 "cplus.met"
                PPTREE _ptTree0=0;
#line 1292 "cplus.met"
                {
#line 1292 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1292 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1292 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1292 "cplus.met"
                    }
#line 1292 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1292 "cplus.met"
                }
#line 1292 "cplus.met"
                _retValue =_ptTree0;
#line 1292 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1292 "cplus.met"
            }
#line 1292 "cplus.met"
            break;
#line 1292 "cplus.met"
#line 1293 "cplus.met"
        case ENDIF_DIR : 
#line 1293 "cplus.met"
            tokenAhead = 0 ;
#line 1293 "cplus.met"
            CommTerm();
#line 1293 "cplus.met"
#line 1293 "cplus.met"
            {
#line 1293 "cplus.met"
                _retValue = retTree ;
#line 1293 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1293 "cplus.met"
                
#line 1293 "cplus.met"
            }
#line 1293 "cplus.met"
            break;
#line 1293 "cplus.met"
        default :
#line 1293 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1293 "cplus.met"
            break;
#line 1293 "cplus.met"
    }
#line 1293 "cplus.met"
#line 1293 "cplus.met"
#line 1294 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1294 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1294 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1294 "cplus.met"
return((PPTREE) 0);
#line 1294 "cplus.met"

#line 1294 "cplus.met"
ext_decl_if_dir_exit :
#line 1294 "cplus.met"

#line 1294 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1294 "cplus.met"
    _funcLevel--;
#line 1294 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1294 "cplus.met"
    return((PPTREE) -1) ;
#line 1294 "cplus.met"

#line 1294 "cplus.met"
ext_decl_if_dir_ret :
#line 1294 "cplus.met"
    
#line 1294 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1294 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1294 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1294 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1294 "cplus.met"
    return _retValue ;
#line 1294 "cplus.met"
}
#line 1294 "cplus.met"

#line 1294 "cplus.met"
#line 1297 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1297 "cplus.met"
{
#line 1297 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1297 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1297 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1297 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1297 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1297 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1297 "cplus.met"
#line 1297 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1297 "cplus.met"
#line 1297 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1297 "cplus.met"
#line 1299 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1299 "cplus.met"
#line 1300 "cplus.met"
#line 1301 "cplus.met"
        {
#line 1301 "cplus.met"
            keepCarriage = 1 ;
#line 1301 "cplus.met"
#line 1302 "cplus.met"
#line 1303 "cplus.met"
            {
#line 1303 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1303 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1303 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1303 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1303 "cplus.met"
                }
#line 1303 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1303 "cplus.met"
                retTree=_ptRes0;
#line 1303 "cplus.met"
            }
#line 1303 "cplus.met"
#line 1304 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1304 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1304 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1304 "cplus.met"
            } else {
#line 1304 "cplus.met"
                tokenAhead = 0 ;
#line 1304 "cplus.met"
            }
#line 1304 "cplus.met"
#line 1304 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1304 "cplus.met"
        }
#line 1304 "cplus.met"
#line 1304 "cplus.met"
#line 1305 "cplus.met"
    } else {
#line 1305 "cplus.met"
#line 1308 "cplus.met"
#line 1309 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1309 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1309 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1309 "cplus.met"
        } else {
#line 1309 "cplus.met"
            tokenAhead = 0 ;
#line 1309 "cplus.met"
        }
#line 1309 "cplus.met"
#line 1310 "cplus.met"
        {
#line 1310 "cplus.met"
            keepCarriage = 1 ;
#line 1310 "cplus.met"
#line 1311 "cplus.met"
#line 1312 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1312 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1312 "cplus.met"
            }
#line 1312 "cplus.met"
#line 1313 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1313 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1313 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1313 "cplus.met"
            } else {
#line 1313 "cplus.met"
                tokenAhead = 0 ;
#line 1313 "cplus.met"
            }
#line 1313 "cplus.met"
#line 1313 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1313 "cplus.met"
        }
#line 1313 "cplus.met"
#line 1315 "cplus.met"
        {
#line 1315 "cplus.met"
            PPTREE _ptRes0=0;
#line 1315 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1315 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1315 "cplus.met"
            retTree=_ptRes0;
#line 1315 "cplus.met"
        }
#line 1315 "cplus.met"
#line 1315 "cplus.met"
    }
#line 1315 "cplus.met"
#line 1315 "cplus.met"
    _addlist1 = list ;
#line 1315 "cplus.met"
#line 1319 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1319 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1319 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1319 "cplus.met"
#line 1321 "cplus.met"
#line 1321 "cplus.met"
        {
#line 1321 "cplus.met"
            PPTREE _ptTree0=0;
#line 1321 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1321 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1321 "cplus.met"
            }
#line 1321 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1321 "cplus.met"
        }
#line 1321 "cplus.met"
#line 1321 "cplus.met"
        if (list){
#line 1321 "cplus.met"
#line 1321 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1321 "cplus.met"
        } else {
#line 1321 "cplus.met"
#line 1321 "cplus.met"
            list = _addlist1 ;
#line 1321 "cplus.met"
        }
#line 1321 "cplus.met"
    } 
#line 1321 "cplus.met"
#line 1322 "cplus.met"
    {
#line 1322 "cplus.met"
        PPTREE _ptTree0=0;
#line 1322 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 1322 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1322 "cplus.met"
        }
#line 1322 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1322 "cplus.met"
    }
#line 1322 "cplus.met"
#line 1323 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1323 "cplus.met"
#line 1324 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1324 "cplus.met"
    switch( lexEl.Value) {
#line 1324 "cplus.met"
#line 1325 "cplus.met"
        case META : 
#line 1325 "cplus.met"
        case ELSE_DIR : 
#line 1325 "cplus.met"
            tokenAhead = 0 ;
#line 1325 "cplus.met"
            CommTerm();
#line 1325 "cplus.met"
#line 1326 "cplus.met"
#line 1326 "cplus.met"
            _addlist2 = list2 ;
#line 1326 "cplus.met"
#line 1327 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1327 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1327 "cplus.met"
#line 1328 "cplus.met"
#line 1328 "cplus.met"
                {
#line 1328 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1328 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1328 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1328 "cplus.met"
                    }
#line 1328 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1328 "cplus.met"
                }
#line 1328 "cplus.met"
#line 1328 "cplus.met"
                if (list2){
#line 1328 "cplus.met"
#line 1328 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1328 "cplus.met"
                } else {
#line 1328 "cplus.met"
#line 1328 "cplus.met"
                    list2 = _addlist2 ;
#line 1328 "cplus.met"
                }
#line 1328 "cplus.met"
            } 
#line 1328 "cplus.met"
#line 1329 "cplus.met"
            {
#line 1329 "cplus.met"
                PPTREE _ptTree0=0;
#line 1329 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 1329 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1329 "cplus.met"
                }
#line 1329 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1329 "cplus.met"
            }
#line 1329 "cplus.met"
#line 1330 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1330 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1330 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1330 "cplus.met"
            } else {
#line 1330 "cplus.met"
                tokenAhead = 0 ;
#line 1330 "cplus.met"
            }
#line 1330 "cplus.met"
#line 1331 "cplus.met"
            {
#line 1331 "cplus.met"
                PPTREE _ptTree0=0;
#line 1331 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1331 "cplus.met"
                _retValue =_ptTree0;
#line 1331 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1331 "cplus.met"
            }
#line 1331 "cplus.met"
#line 1331 "cplus.met"
            break;
#line 1331 "cplus.met"
#line 1333 "cplus.met"
        case ELIF_DIR : 
#line 1333 "cplus.met"
            tokenAhead = 0 ;
#line 1333 "cplus.met"
            CommTerm();
#line 1333 "cplus.met"
#line 1333 "cplus.met"
            {
#line 1333 "cplus.met"
                PPTREE _ptTree0=0;
#line 1333 "cplus.met"
                {
#line 1333 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1333 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1333 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1333 "cplus.met"
                    }
#line 1333 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1333 "cplus.met"
                }
#line 1333 "cplus.met"
                _retValue =_ptTree0;
#line 1333 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1333 "cplus.met"
            }
#line 1333 "cplus.met"
            break;
#line 1333 "cplus.met"
#line 1334 "cplus.met"
        case ENDIF_DIR : 
#line 1334 "cplus.met"
            tokenAhead = 0 ;
#line 1334 "cplus.met"
            CommTerm();
#line 1334 "cplus.met"
#line 1334 "cplus.met"
            {
#line 1334 "cplus.met"
                _retValue = retTree ;
#line 1334 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1334 "cplus.met"
                
#line 1334 "cplus.met"
            }
#line 1334 "cplus.met"
            break;
#line 1334 "cplus.met"
        default :
#line 1334 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1334 "cplus.met"
            break;
#line 1334 "cplus.met"
    }
#line 1334 "cplus.met"
#line 1334 "cplus.met"
#line 1335 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1335 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1335 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1335 "cplus.met"
return((PPTREE) 0);
#line 1335 "cplus.met"

#line 1335 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1335 "cplus.met"

#line 1335 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1335 "cplus.met"
    _funcLevel--;
#line 1335 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1335 "cplus.met"
    return((PPTREE) -1) ;
#line 1335 "cplus.met"

#line 1335 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1335 "cplus.met"
    
#line 1335 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1335 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1335 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1335 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1335 "cplus.met"
    return _retValue ;
#line 1335 "cplus.met"
}
#line 1335 "cplus.met"

#line 1335 "cplus.met"
