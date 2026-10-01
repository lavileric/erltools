/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1953 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1953 "cplus.met"
{
#line 1953 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1953 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1953 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1953 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1953 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1953 "cplus.met"
#line 1953 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1953 "cplus.met"
#line 1955 "cplus.met"
    {
#line 1955 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1955 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1955 "cplus.met"
        {
#line 1955 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1955 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1955 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1955 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1955 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1955 "cplus.met"
            } else {
#line 1955 "cplus.met"
                tokenAhead = 0 ;
#line 1955 "cplus.met"
            }
#line 1955 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1955 "cplus.met"
            _ptTree0=_ptRes1;
#line 1955 "cplus.met"
        }
#line 1955 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1955 "cplus.met"
        valTree=_ptRes0;
#line 1955 "cplus.met"
    }
#line 1955 "cplus.met"
#line 1956 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1956 "cplus.met"
#line 1957 "cplus.met"
        {
#line 1957 "cplus.met"
            PPTREE _ptTree0=0;
#line 1957 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 1957 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1957 "cplus.met"
            }
#line 1957 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1957 "cplus.met"
        }
#line 1957 "cplus.met"
#line 1957 "cplus.met"
    }
#line 1957 "cplus.met"
#line 1958 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1958 "cplus.met"
#line 1958 "cplus.met"
    }
#line 1958 "cplus.met"
#line 1960 "cplus.met"
    {
#line 1960 "cplus.met"
        _retValue = valTree ;
#line 1960 "cplus.met"
        goto enum_val_ret;
#line 1960 "cplus.met"
        
#line 1960 "cplus.met"
    }
#line 1960 "cplus.met"
#line 1960 "cplus.met"
#line 1960 "cplus.met"

#line 1961 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1961 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1961 "cplus.met"
return((PPTREE) 0);
#line 1961 "cplus.met"

#line 1961 "cplus.met"
enum_val_exit :
#line 1961 "cplus.met"

#line 1961 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1961 "cplus.met"
    _funcLevel--;
#line 1961 "cplus.met"
    return((PPTREE) -1) ;
#line 1961 "cplus.met"

#line 1961 "cplus.met"
enum_val_ret :
#line 1961 "cplus.met"
    
#line 1961 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1961 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1961 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1961 "cplus.met"
    return _retValue ;
#line 1961 "cplus.met"
}
#line 1961 "cplus.met"

#line 1961 "cplus.met"
#line 2983 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2983 "cplus.met"
{
#line 2983 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2983 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2983 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2983 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2983 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2983 "cplus.met"
#line 2983 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2983 "cplus.met"
#line 2985 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2985 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2985 "cplus.met"
    }
#line 2985 "cplus.met"
#line 2986 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2986 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2986 "cplus.met"
#line 2987 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2987 "cplus.met"
#line 2988 "cplus.met"
            {
#line 2988 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2988 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2988 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2988 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2988 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2988 "cplus.met"
                }
#line 2988 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2988 "cplus.met"
                expTree=_ptRes0;
#line 2988 "cplus.met"
            }
#line 2988 "cplus.met"
        } else {
#line 2988 "cplus.met"
#line 2990 "cplus.met"
#line 2991 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2991 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2991 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2991 "cplus.met"
            } else {
#line 2991 "cplus.met"
                tokenAhead = 0 ;
#line 2991 "cplus.met"
            }
#line 2991 "cplus.met"
#line 2992 "cplus.met"
            {
#line 2992 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2992 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2992 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2992 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 2992 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2992 "cplus.met"
                }
#line 2992 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2992 "cplus.met"
                expTree=_ptRes0;
#line 2992 "cplus.met"
            }
#line 2992 "cplus.met"
#line 2992 "cplus.met"
        }
#line 2992 "cplus.met"
    } 
#line 2992 "cplus.met"
#line 2994 "cplus.met"
    {
#line 2994 "cplus.met"
        _retValue = expTree ;
#line 2994 "cplus.met"
        goto equality_expression_ret;
#line 2994 "cplus.met"
        
#line 2994 "cplus.met"
    }
#line 2994 "cplus.met"
#line 2994 "cplus.met"
#line 2994 "cplus.met"

#line 2995 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2995 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2995 "cplus.met"
return((PPTREE) 0);
#line 2995 "cplus.met"

#line 2995 "cplus.met"
equality_expression_exit :
#line 2995 "cplus.met"

#line 2995 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2995 "cplus.met"
    _funcLevel--;
#line 2995 "cplus.met"
    return((PPTREE) -1) ;
#line 2995 "cplus.met"

#line 2995 "cplus.met"
equality_expression_ret :
#line 2995 "cplus.met"
    
#line 2995 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2995 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2995 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2995 "cplus.met"
    return _retValue ;
#line 2995 "cplus.met"
}
#line 2995 "cplus.met"

#line 2995 "cplus.met"
#line 2190 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 2190 "cplus.met"
{
#line 2190 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2190 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2190 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2190 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 2190 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2190 "cplus.met"
#line 2190 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2190 "cplus.met"
#line 2190 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2190 "cplus.met"
#line 2192 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2192 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 2192 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 2192 "cplus.met"
    } else {
#line 2192 "cplus.met"
        tokenAhead = 0 ;
#line 2192 "cplus.met"
    }
#line 2192 "cplus.met"
#line 2193 "cplus.met"
    {
#line 2193 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2193 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 2193 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2193 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 2193 "cplus.met"
        }
#line 2193 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2193 "cplus.met"
        retTree=_ptRes0;
#line 2193 "cplus.met"
    }
#line 2193 "cplus.met"
#line 2193 "cplus.met"
    _addlist1 = list ;
#line 2193 "cplus.met"
#line 2194 "cplus.met"
    do {
#line 2194 "cplus.met"
#line 2195 "cplus.met"
        {
#line 2195 "cplus.met"
            PPTREE _ptTree0=0;
#line 2195 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 2195 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 2195 "cplus.met"
            }
#line 2195 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2195 "cplus.met"
        }
#line 2195 "cplus.met"
#line 2195 "cplus.met"
        if (list){
#line 2195 "cplus.met"
#line 2195 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2195 "cplus.met"
        } else {
#line 2195 "cplus.met"
#line 2195 "cplus.met"
            list = _addlist1 ;
#line 2195 "cplus.met"
        }
#line 2195 "cplus.met"
#line 2195 "cplus.met"
#line 2196 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 2196 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 2196 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2196 "cplus.met"
#line 2197 "cplus.met"
    {
#line 2197 "cplus.met"
        PPTREE _ptTree0=0;
#line 2197 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2197 "cplus.met"
        _retValue =_ptTree0;
#line 2197 "cplus.met"
        goto exception_ret;
#line 2197 "cplus.met"
    }
#line 2197 "cplus.met"
#line 2197 "cplus.met"
#line 2197 "cplus.met"

#line 2198 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2198 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2198 "cplus.met"
return((PPTREE) 0);
#line 2198 "cplus.met"

#line 2198 "cplus.met"
exception_exit :
#line 2198 "cplus.met"

#line 2198 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 2198 "cplus.met"
    _funcLevel--;
#line 2198 "cplus.met"
    return((PPTREE) -1) ;
#line 2198 "cplus.met"

#line 2198 "cplus.met"
exception_ret :
#line 2198 "cplus.met"
    
#line 2198 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 2198 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2198 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2198 "cplus.met"
    return _retValue ;
#line 2198 "cplus.met"
}
#line 2198 "cplus.met"

#line 2198 "cplus.met"
#line 2221 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 2221 "cplus.met"
{
#line 2221 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2221 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2221 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2221 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 2221 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2221 "cplus.met"
#line 2221 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2221 "cplus.met"
#line 2221 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 2221 "cplus.met"
#line 2223 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2223 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 2223 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 2223 "cplus.met"
    } else {
#line 2223 "cplus.met"
        tokenAhead = 0 ;
#line 2223 "cplus.met"
    }
#line 2223 "cplus.met"
#line 2224 "cplus.met"
    {
#line 2224 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2224 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 2224 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2224 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 2224 "cplus.met"
        }
#line 2224 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2224 "cplus.met"
        retTree=_ptRes0;
#line 2224 "cplus.met"
    }
#line 2224 "cplus.met"
#line 2224 "cplus.met"
    _addlist1 = list ;
#line 2224 "cplus.met"
#line 2225 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 29, cplus)) { 
#line 2225 "cplus.met"
#line 2226 "cplus.met"
#line 2226 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 2226 "cplus.met"
#line 2226 "cplus.met"
        if (list){
#line 2226 "cplus.met"
#line 2226 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2226 "cplus.met"
        } else {
#line 2226 "cplus.met"
#line 2226 "cplus.met"
            list = _addlist1 ;
#line 2226 "cplus.met"
        }
#line 2226 "cplus.met"
    } 
#line 2226 "cplus.met"
#line 2227 "cplus.met"
    {
#line 2227 "cplus.met"
        PPTREE _ptTree0=0;
#line 2227 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2227 "cplus.met"
        _retValue =_ptTree0;
#line 2227 "cplus.met"
        goto exception_ansi_ret;
#line 2227 "cplus.met"
    }
#line 2227 "cplus.met"
#line 2227 "cplus.met"
#line 2227 "cplus.met"

#line 2228 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2228 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2228 "cplus.met"
return((PPTREE) 0);
#line 2228 "cplus.met"

#line 2228 "cplus.met"
exception_ansi_exit :
#line 2228 "cplus.met"

#line 2228 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 2228 "cplus.met"
    _funcLevel--;
#line 2228 "cplus.met"
    return((PPTREE) -1) ;
#line 2228 "cplus.met"

#line 2228 "cplus.met"
exception_ansi_ret :
#line 2228 "cplus.met"
    
#line 2228 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 2228 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2228 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2228 "cplus.met"
    return _retValue ;
#line 2228 "cplus.met"
}
#line 2228 "cplus.met"

#line 2228 "cplus.met"
#line 3552 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3552 "cplus.met"
{
#line 3552 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3552 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3552 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3552 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3552 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3552 "cplus.met"
#line 3552 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3552 "cplus.met"
#line 3552 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3552 "cplus.met"
#line 3554 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3554 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3554 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3554 "cplus.met"
    } else {
#line 3554 "cplus.met"
        tokenAhead = 0 ;
#line 3554 "cplus.met"
    }
#line 3554 "cplus.met"
#line 3555 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3555 "cplus.met"
#line 3556 "cplus.met"
#line 3557 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3557 "cplus.met"
#line 3559 "cplus.met"
#line 3559 "cplus.met"
            _addlist1 = exceptionList ;
#line 3559 "cplus.met"
#line 3558 "cplus.met"
            do {
#line 3558 "cplus.met"
#line 3559 "cplus.met"
                {
#line 3559 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3559 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 3559 "cplus.met"
                        MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                        PROG_EXIT(exception_list_exit,"exception_list")
#line 3559 "cplus.met"
                    }
#line 3559 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3559 "cplus.met"
                }
#line 3559 "cplus.met"
#line 3559 "cplus.met"
                if (exceptionList){
#line 3559 "cplus.met"
#line 3559 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3559 "cplus.met"
                } else {
#line 3559 "cplus.met"
#line 3559 "cplus.met"
                    exceptionList = _addlist1 ;
#line 3559 "cplus.met"
                }
#line 3559 "cplus.met"
#line 3559 "cplus.met"
#line 3560 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3560 "cplus.met"
        }
#line 3560 "cplus.met"
#line 3561 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3561 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3561 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3561 "cplus.met"
        } else {
#line 3561 "cplus.met"
            tokenAhead = 0 ;
#line 3561 "cplus.met"
        }
#line 3561 "cplus.met"
#line 3561 "cplus.met"
#line 3561 "cplus.met"
    } else {
#line 3561 "cplus.met"
#line 3564 "cplus.met"
        {
#line 3564 "cplus.met"
            PPTREE _ptTree0=0;
#line 3564 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 3564 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3564 "cplus.met"
            }
#line 3564 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3564 "cplus.met"
        }
#line 3564 "cplus.met"
    }
#line 3564 "cplus.met"
#line 3565 "cplus.met"
    {
#line 3565 "cplus.met"
        PPTREE _ptTree0=0;
#line 3565 "cplus.met"
        {
#line 3565 "cplus.met"
            PPTREE _ptRes1=0;
#line 3565 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3565 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3565 "cplus.met"
            _ptTree0=_ptRes1;
#line 3565 "cplus.met"
        }
#line 3565 "cplus.met"
        _retValue =_ptTree0;
#line 3565 "cplus.met"
        goto exception_list_ret;
#line 3565 "cplus.met"
    }
#line 3565 "cplus.met"
#line 3565 "cplus.met"
#line 3565 "cplus.met"

#line 3566 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3566 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3566 "cplus.met"
return((PPTREE) 0);
#line 3566 "cplus.met"

#line 3566 "cplus.met"
exception_list_exit :
#line 3566 "cplus.met"

#line 3566 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3566 "cplus.met"
    _funcLevel--;
#line 3566 "cplus.met"
    return((PPTREE) -1) ;
#line 3566 "cplus.met"

#line 3566 "cplus.met"
exception_list_ret :
#line 3566 "cplus.met"
    
#line 3566 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3566 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3566 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3566 "cplus.met"
    return _retValue ;
#line 3566 "cplus.met"
}
#line 3566 "cplus.met"

#line 3566 "cplus.met"
#line 2967 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2967 "cplus.met"
{
#line 2967 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2967 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2967 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2967 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2967 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2967 "cplus.met"
#line 2967 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2967 "cplus.met"
#line 2969 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2969 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2969 "cplus.met"
    }
#line 2969 "cplus.met"
#line 2970 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2970 "cplus.met"
#line 2971 "cplus.met"
        {
#line 2971 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2971 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2971 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2971 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2971 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2971 "cplus.met"
            }
#line 2971 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2971 "cplus.met"
            expTree=_ptRes0;
#line 2971 "cplus.met"
        }
#line 2971 "cplus.met"
    } 
#line 2971 "cplus.met"
#line 2972 "cplus.met"
    {
#line 2972 "cplus.met"
        _retValue = expTree ;
#line 2972 "cplus.met"
        goto exclusive_or_expression_ret;
#line 2972 "cplus.met"
        
#line 2972 "cplus.met"
    }
#line 2972 "cplus.met"
#line 2972 "cplus.met"
#line 2972 "cplus.met"

#line 2973 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2973 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2973 "cplus.met"
return((PPTREE) 0);
#line 2973 "cplus.met"

#line 2973 "cplus.met"
exclusive_or_expression_exit :
#line 2973 "cplus.met"

#line 2973 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2973 "cplus.met"
    _funcLevel--;
#line 2973 "cplus.met"
    return((PPTREE) -1) ;
#line 2973 "cplus.met"

#line 2973 "cplus.met"
exclusive_or_expression_ret :
#line 2973 "cplus.met"
    
#line 2973 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 2973 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2973 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2973 "cplus.met"
    return _retValue ;
#line 2973 "cplus.met"
}
#line 2973 "cplus.met"

#line 2973 "cplus.met"
#line 2888 "cplus.met"
PPTREE cplus::expression ( int error_free)
#line 2888 "cplus.met"
{
#line 2888 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2888 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2888 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2888 "cplus.met"
    int _Debug = TRACE_RULE("expression",TRACE_ENTER,(PPTREE)0);
#line 2888 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2888 "cplus.met"
#line 2888 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2888 "cplus.met"
#line 2888 "cplus.met"
    PPTREE expTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2888 "cplus.met"
#line 2890 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2890 "cplus.met"
        MulFreeTree(3,_addlist1,expTree,list);
        PROG_EXIT(expression_exit,"expression")
#line 2890 "cplus.met"
    }
#line 2890 "cplus.met"
#line 2891 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( VIRG,",")){
#line 2891 "cplus.met"
#line 2892 "cplus.met"
#line 2893 "cplus.met"
        list =AddList(list ,expTree );
#line 2893 "cplus.met"
#line 2893 "cplus.met"
        _addlist1 = list ;
#line 2893 "cplus.met"
#line 2894 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2894 "cplus.met"
#line 2895 "cplus.met"
#line 2895 "cplus.met"
            {
#line 2895 "cplus.met"
                PPTREE _ptTree0=0;
#line 2895 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2895 "cplus.met"
                    MulFreeTree(4,_ptTree0,_addlist1,expTree,list);
                    PROG_EXIT(expression_exit,"expression")
#line 2895 "cplus.met"
                }
#line 2895 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2895 "cplus.met"
            }
#line 2895 "cplus.met"
#line 2895 "cplus.met"
            if (list){
#line 2895 "cplus.met"
#line 2895 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2895 "cplus.met"
            } else {
#line 2895 "cplus.met"
#line 2895 "cplus.met"
                list = _addlist1 ;
#line 2895 "cplus.met"
            }
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
                _ptRes1= MakeTree(EXP_SEQ, 1);
#line 2896 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2896 "cplus.met"
                _ptTree0=_ptRes1;
#line 2896 "cplus.met"
            }
#line 2896 "cplus.met"
            _retValue =_ptTree0;
#line 2896 "cplus.met"
            goto expression_ret;
#line 2896 "cplus.met"
        }
#line 2896 "cplus.met"
#line 2896 "cplus.met"
#line 2896 "cplus.met"
    } else {
#line 2896 "cplus.met"
#line 2899 "cplus.met"
        {
#line 2899 "cplus.met"
            _retValue = expTree ;
#line 2899 "cplus.met"
            goto expression_ret;
#line 2899 "cplus.met"
            
#line 2899 "cplus.met"
        }
#line 2899 "cplus.met"
    }
#line 2899 "cplus.met"
#line 2899 "cplus.met"
#line 2899 "cplus.met"

#line 2900 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2900 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2900 "cplus.met"
return((PPTREE) 0);
#line 2900 "cplus.met"

#line 2900 "cplus.met"
expression_exit :
#line 2900 "cplus.met"

#line 2900 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_EXIT,(PPTREE)0);
#line 2900 "cplus.met"
    _funcLevel--;
#line 2900 "cplus.met"
    return((PPTREE) -1) ;
#line 2900 "cplus.met"

#line 2900 "cplus.met"
expression_ret :
#line 2900 "cplus.met"
    
#line 2900 "cplus.met"
    _Debug = TRACE_RULE("expression",TRACE_RETURN,_retValue);
#line 2900 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2900 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2900 "cplus.met"
    return _retValue ;
#line 2900 "cplus.met"
}
#line 2900 "cplus.met"

#line 2900 "cplus.met"
#line 3688 "cplus.met"
PPTREE cplus::expression_for ( int error_free)
#line 3688 "cplus.met"
{
#line 3688 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3688 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3688 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3688 "cplus.met"
    int _Debug = TRACE_RULE("expression_for",TRACE_ENTER,(PPTREE)0);
#line 3688 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3688 "cplus.met"
#line 3688 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3688 "cplus.met"
#line 3690 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3690 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(expression_for_exit,"expression_for")
#line 3690 "cplus.met"
    }
#line 3690 "cplus.met"
#line 3691 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PVIR,";"))){
#line 3691 "cplus.met"
#line 3692 "cplus.met"
        
#line 3692 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 3692 "cplus.met"
        goto expression_for_exit;
#line 3692 "cplus.met"
#line 3692 "cplus.met"
    }
#line 3692 "cplus.met"
#line 3693 "cplus.met"
    {
#line 3693 "cplus.met"
        _retValue = retTree ;
#line 3693 "cplus.met"
        goto expression_for_ret;
#line 3693 "cplus.met"
        
#line 3693 "cplus.met"
    }
#line 3693 "cplus.met"
#line 3693 "cplus.met"
#line 3693 "cplus.met"

#line 3694 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3694 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3694 "cplus.met"
return((PPTREE) 0);
#line 3694 "cplus.met"

#line 3694 "cplus.met"
expression_for_exit :
#line 3694 "cplus.met"

#line 3694 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_EXIT,(PPTREE)0);
#line 3694 "cplus.met"
    _funcLevel--;
#line 3694 "cplus.met"
    return((PPTREE) -1) ;
#line 3694 "cplus.met"

#line 3694 "cplus.met"
expression_for_ret :
#line 3694 "cplus.met"
    
#line 3694 "cplus.met"
    _Debug = TRACE_RULE("expression_for",TRACE_RETURN,_retValue);
#line 3694 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3694 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3694 "cplus.met"
    return _retValue ;
#line 3694 "cplus.met"
}
#line 3694 "cplus.met"

#line 3694 "cplus.met"
#line 1289 "cplus.met"
PPTREE cplus::ext_all ( int error_free)
#line 1289 "cplus.met"
{
#line 1289 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1289 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1289 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1289 "cplus.met"
    int _Debug = TRACE_RULE("ext_all",TRACE_ENTER,(PPTREE)0);
#line 1289 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1289 "cplus.met"
#line 1289 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1289 "cplus.met"
#line 1291 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all_no_linkage), 71, cplus)){
#line 1291 "cplus.met"
#line 1292 "cplus.met"
        {
#line 1292 "cplus.met"
            _retValue = retTree ;
#line 1292 "cplus.met"
            goto ext_all_ret;
#line 1292 "cplus.met"
            
#line 1292 "cplus.met"
        }
#line 1292 "cplus.met"
    } else {
#line 1292 "cplus.met"
#line 1294 "cplus.met"
        {
#line 1294 "cplus.met"
            PPTREE _ptTree0=0;
#line 1294 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(linkage_specification)(error_free), 94, cplus))== (PPTREE) -1 ) {
#line 1294 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(ext_all_exit,"ext_all")
#line 1294 "cplus.met"
            }
#line 1294 "cplus.met"
            _retValue =_ptTree0;
#line 1294 "cplus.met"
            goto ext_all_ret;
#line 1294 "cplus.met"
        }
#line 1294 "cplus.met"
    }
#line 1294 "cplus.met"
#line 1294 "cplus.met"
#line 1294 "cplus.met"

#line 1295 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1295 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1295 "cplus.met"
return((PPTREE) 0);
#line 1295 "cplus.met"

#line 1295 "cplus.met"
ext_all_exit :
#line 1295 "cplus.met"

#line 1295 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_EXIT,(PPTREE)0);
#line 1295 "cplus.met"
    _funcLevel--;
#line 1295 "cplus.met"
    return((PPTREE) -1) ;
#line 1295 "cplus.met"

#line 1295 "cplus.met"
ext_all_ret :
#line 1295 "cplus.met"
    
#line 1295 "cplus.met"
    _Debug = TRACE_RULE("ext_all",TRACE_RETURN,_retValue);
#line 1295 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1295 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1295 "cplus.met"
    return _retValue ;
#line 1295 "cplus.met"
}
#line 1295 "cplus.met"

#line 1295 "cplus.met"
#line 1297 "cplus.met"
PPTREE cplus::ext_all_ext ( int error_free)
#line 1297 "cplus.met"
{
#line 1297 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1297 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1297 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1297 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_ext",TRACE_ENTER,(PPTREE)0);
#line 1297 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1297 "cplus.met"
#line 1297 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1297 "cplus.met"
#line 1299 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(protect_declare), 121, cplus))){
#line 1299 "cplus.met"
#line 1300 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_all)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 1300 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_all_ext_exit,"ext_all_ext")
#line 1300 "cplus.met"
        }
#line 1300 "cplus.met"
    }
#line 1300 "cplus.met"
#line 1301 "cplus.met"
    {
#line 1301 "cplus.met"
        _retValue = retTree ;
#line 1301 "cplus.met"
        goto ext_all_ext_ret;
#line 1301 "cplus.met"
        
#line 1301 "cplus.met"
    }
#line 1301 "cplus.met"
#line 1301 "cplus.met"
#line 1301 "cplus.met"

#line 1302 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1302 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1302 "cplus.met"
return((PPTREE) 0);
#line 1302 "cplus.met"

#line 1302 "cplus.met"
ext_all_ext_exit :
#line 1302 "cplus.met"

#line 1302 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_EXIT,(PPTREE)0);
#line 1302 "cplus.met"
    _funcLevel--;
#line 1302 "cplus.met"
    return((PPTREE) -1) ;
#line 1302 "cplus.met"

#line 1302 "cplus.met"
ext_all_ext_ret :
#line 1302 "cplus.met"
    
#line 1302 "cplus.met"
    _Debug = TRACE_RULE("ext_all_ext",TRACE_RETURN,_retValue);
#line 1302 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1302 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1302 "cplus.met"
    return _retValue ;
#line 1302 "cplus.met"
}
#line 1302 "cplus.met"

#line 1302 "cplus.met"
#line 1269 "cplus.met"
PPTREE cplus::ext_all_no_linkage ( int error_free)
#line 1269 "cplus.met"
{
#line 1269 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1269 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1269 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1269 "cplus.met"
    int _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_ENTER,(PPTREE)0);
#line 1269 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1269 "cplus.met"
#line 1269 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1269 "cplus.met"
#line 1269 "cplus.met"
    PPTREE decl = (PPTREE) 0,listTemp = (PPTREE) 0;
#line 1269 "cplus.met"
#line 1271 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(TEMPLATE,"template") && (tokenAhead = 0,CommTerm(),1)){
#line 1271 "cplus.met"
#line 1272 "cplus.met"
#line 1273 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1273 "cplus.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1273 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,"<")
#line 1273 "cplus.met"
        } else {
#line 1273 "cplus.met"
            tokenAhead = 0 ;
#line 1273 "cplus.met"
        }
#line 1273 "cplus.met"
#line 1273 "cplus.met"
        _addlist1 = listTemp ;
#line 1273 "cplus.met"
#line 1274 "cplus.met"
        do {
#line 1274 "cplus.met"
#line 1275 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1275 "cplus.met"
            switch( lexEl.Value) {
#line 1275 "cplus.met"
#line 1276 "cplus.met"
                case CLASS : 
#line 1276 "cplus.met"
                    tokenAhead = 0 ;
#line 1276 "cplus.met"
                    CommTerm();
#line 1276 "cplus.met"
#line 1276 "cplus.met"
#line 1276 "cplus.met"
                    {
#line 1276 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1276 "cplus.met"
                        {
#line 1276 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 1276 "cplus.met"
                            _ptRes1= MakeTree(CLASS_PARAM, 1);
#line 1276 "cplus.met"
                            if ( (_ptTree1=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1276 "cplus.met"
                                MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1276 "cplus.met"
                            }
#line 1276 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1276 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1276 "cplus.met"
                        }
#line 1276 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1276 "cplus.met"
                    }
#line 1276 "cplus.met"
#line 1276 "cplus.met"
                    if (listTemp){
#line 1276 "cplus.met"
#line 1276 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1276 "cplus.met"
                    } else {
#line 1276 "cplus.met"
#line 1276 "cplus.met"
                        listTemp = _addlist1 ;
#line 1276 "cplus.met"
                    }
#line 1276 "cplus.met"
                    break;
#line 1276 "cplus.met"
#line 1277 "cplus.met"
                default : 
#line 1277 "cplus.met"
#line 1277 "cplus.met"
#line 1277 "cplus.met"
                    {
#line 1277 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1277 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(arg_declarator_type)(error_free), 14, cplus))== (PPTREE) -1 ) {
#line 1277 "cplus.met"
                            MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                            PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1277 "cplus.met"
                        }
#line 1277 "cplus.met"
                        _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1277 "cplus.met"
                    }
#line 1277 "cplus.met"
#line 1277 "cplus.met"
                    if (listTemp){
#line 1277 "cplus.met"
#line 1277 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1277 "cplus.met"
                    } else {
#line 1277 "cplus.met"
#line 1277 "cplus.met"
                        listTemp = _addlist1 ;
#line 1277 "cplus.met"
                    }
#line 1277 "cplus.met"
                    break;
#line 1277 "cplus.met"
            }
#line 1277 "cplus.met"
#line 1277 "cplus.met"
#line 1279 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1279 "cplus.met"
#line 1280 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1280 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1280 "cplus.met"
            MulFreeTree(3,_addlist1,decl,listTemp);
            TOKEN_EXIT(ext_all_no_linkage_exit,">")
#line 1280 "cplus.met"
        } else {
#line 1280 "cplus.met"
            tokenAhead = 0 ;
#line 1280 "cplus.met"
        }
#line 1280 "cplus.met"
#line 1281 "cplus.met"
        {
#line 1281 "cplus.met"
            PPTREE _ptTree0=0;
#line 1281 "cplus.met"
            {
#line 1281 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1281 "cplus.met"
                _ptRes1= MakeTree(TEMPLATE_DECL, 2);
#line 1281 "cplus.met"
                ReplaceTree(_ptRes1, 1, listTemp );
#line 1281 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all_no_linkage)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1281 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,decl,listTemp);
                    PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1281 "cplus.met"
                }
#line 1281 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 1281 "cplus.met"
                _ptTree0=_ptRes1;
#line 1281 "cplus.met"
            }
#line 1281 "cplus.met"
            _retValue =_ptTree0;
#line 1281 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1281 "cplus.met"
        }
#line 1281 "cplus.met"
#line 1281 "cplus.met"
#line 1281 "cplus.met"
    }
#line 1281 "cplus.met"
#line 1283 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_data_declaration), 76, cplus)) || 
#line 1283 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(func_declaration), 81, cplus))) || 
#line 1283 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(ext_decl_dir), 77, cplus))) || 
#line 1283 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(asm_declaration), 19, cplus))) || 
#line 1283 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(decl = ,_Tak(protected_array_declaration), 122, cplus))){
#line 1283 "cplus.met"
#line 1284 "cplus.met"
        {
#line 1284 "cplus.met"
            _retValue = decl ;
#line 1284 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1284 "cplus.met"
            
#line 1284 "cplus.met"
        }
#line 1284 "cplus.met"
    } else {
#line 1284 "cplus.met"
#line 1286 "cplus.met"
        {
#line 1286 "cplus.met"
            PPTREE _ptTree0=0;
#line 1286 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declaration)(error_free), 81, cplus))== (PPTREE) -1 ) {
#line 1286 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,decl,listTemp);
                PROG_EXIT(ext_all_no_linkage_exit,"ext_all_no_linkage")
#line 1286 "cplus.met"
            }
#line 1286 "cplus.met"
            _retValue =_ptTree0;
#line 1286 "cplus.met"
            goto ext_all_no_linkage_ret;
#line 1286 "cplus.met"
        }
#line 1286 "cplus.met"
    }
#line 1286 "cplus.met"
#line 1286 "cplus.met"
#line 1286 "cplus.met"

#line 1287 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1287 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1287 "cplus.met"
return((PPTREE) 0);
#line 1287 "cplus.met"

#line 1287 "cplus.met"
ext_all_no_linkage_exit :
#line 1287 "cplus.met"

#line 1287 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_EXIT,(PPTREE)0);
#line 1287 "cplus.met"
    _funcLevel--;
#line 1287 "cplus.met"
    return((PPTREE) -1) ;
#line 1287 "cplus.met"

#line 1287 "cplus.met"
ext_all_no_linkage_ret :
#line 1287 "cplus.met"
    
#line 1287 "cplus.met"
    _Debug = TRACE_RULE("ext_all_no_linkage",TRACE_RETURN,_retValue);
#line 1287 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1287 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1287 "cplus.met"
    return _retValue ;
#line 1287 "cplus.met"
}
#line 1287 "cplus.met"

#line 1287 "cplus.met"
#line 1773 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty ( int error_free)
#line 1773 "cplus.met"
{
#line 1773 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1773 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1773 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1773 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_ENTER,(PPTREE)0);
#line 1773 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1773 "cplus.met"
#line 1773 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1773 "cplus.met"
#line 1775 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_data_decl_sc_ty_full), 73, cplus))){
#line 1775 "cplus.met"
#line 1776 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty_short)(error_free), 74, cplus))== (PPTREE) -1 ) {
#line 1776 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_exit,"ext_data_decl_sc_ty")
#line 1776 "cplus.met"
        }
#line 1776 "cplus.met"
    }
#line 1776 "cplus.met"
#line 1777 "cplus.met"
    {
#line 1777 "cplus.met"
        _retValue = retTree ;
#line 1777 "cplus.met"
        goto ext_data_decl_sc_ty_ret;
#line 1777 "cplus.met"
        
#line 1777 "cplus.met"
    }
#line 1777 "cplus.met"
#line 1777 "cplus.met"
#line 1777 "cplus.met"

#line 1778 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1778 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1778 "cplus.met"
return((PPTREE) 0);
#line 1778 "cplus.met"

#line 1778 "cplus.met"
ext_data_decl_sc_ty_exit :
#line 1778 "cplus.met"

#line 1778 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_EXIT,(PPTREE)0);
#line 1778 "cplus.met"
    _funcLevel--;
#line 1778 "cplus.met"
    return((PPTREE) -1) ;
#line 1778 "cplus.met"

#line 1778 "cplus.met"
ext_data_decl_sc_ty_ret :
#line 1778 "cplus.met"
    
#line 1778 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty",TRACE_RETURN,_retValue);
#line 1778 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1778 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1778 "cplus.met"
    return _retValue ;
#line 1778 "cplus.met"
}
#line 1778 "cplus.met"

#line 1778 "cplus.met"
#line 1754 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_full ( int error_free)
#line 1754 "cplus.met"
{
#line 1754 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1754 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1754 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1754 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_ENTER,(PPTREE)0);
#line 1754 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1754 "cplus.met"
#line 1754 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1754 "cplus.met"
#line 1756 "cplus.met"
    {
#line 1756 "cplus.met"
        PPTREE _ptRes0=0;
#line 1756 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1756 "cplus.met"
        retTree=_ptRes0;
#line 1756 "cplus.met"
    }
#line 1756 "cplus.met"
#line 1757 "cplus.met"
    {
#line 1757 "cplus.met"
        PPTREE _ptTree0=0;
#line 1757 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 1757 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1757 "cplus.met"
        }
#line 1757 "cplus.met"
        ReplaceTree(retTree , 1 , _ptTree0);
#line 1757 "cplus.met"
    }
#line 1757 "cplus.met"
#line 1758 "cplus.met"
    {
#line 1758 "cplus.met"
        PPTREE _ptTree0=0;
#line 1758 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1758 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_full_exit,"ext_data_decl_sc_ty_full")
#line 1758 "cplus.met"
        }
#line 1758 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1758 "cplus.met"
    }
#line 1758 "cplus.met"
#line 1759 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1759 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1759 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_full_exit,";")
#line 1759 "cplus.met"
    } else {
#line 1759 "cplus.met"
        tokenAhead = 0 ;
#line 1759 "cplus.met"
    }
#line 1759 "cplus.met"
#line 1760 "cplus.met"
    {
#line 1760 "cplus.met"
        _retValue = retTree ;
#line 1760 "cplus.met"
        goto ext_data_decl_sc_ty_full_ret;
#line 1760 "cplus.met"
        
#line 1760 "cplus.met"
    }
#line 1760 "cplus.met"
#line 1760 "cplus.met"
#line 1760 "cplus.met"

#line 1761 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1761 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1761 "cplus.met"
return((PPTREE) 0);
#line 1761 "cplus.met"

#line 1761 "cplus.met"
ext_data_decl_sc_ty_full_exit :
#line 1761 "cplus.met"

#line 1761 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_EXIT,(PPTREE)0);
#line 1761 "cplus.met"
    _funcLevel--;
#line 1761 "cplus.met"
    return((PPTREE) -1) ;
#line 1761 "cplus.met"

#line 1761 "cplus.met"
ext_data_decl_sc_ty_full_ret :
#line 1761 "cplus.met"
    
#line 1761 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_full",TRACE_RETURN,_retValue);
#line 1761 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1761 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1761 "cplus.met"
    return _retValue ;
#line 1761 "cplus.met"
}
#line 1761 "cplus.met"

#line 1761 "cplus.met"
#line 1764 "cplus.met"
PPTREE cplus::ext_data_decl_sc_ty_short ( int error_free)
#line 1764 "cplus.met"
{
#line 1764 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1764 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1764 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1764 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_ENTER,(PPTREE)0);
#line 1764 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1764 "cplus.met"
#line 1764 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1764 "cplus.met"
#line 1766 "cplus.met"
    {
#line 1766 "cplus.met"
        PPTREE _ptRes0=0;
#line 1766 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1766 "cplus.met"
        retTree=_ptRes0;
#line 1766 "cplus.met"
    }
#line 1766 "cplus.met"
#line 1767 "cplus.met"
    {
#line 1767 "cplus.met"
        PPTREE _ptTree0=0;
#line 1767 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1767 "cplus.met"
            MulFreeTree(2,_ptTree0,retTree);
            PROG_EXIT(ext_data_decl_sc_ty_short_exit,"ext_data_decl_sc_ty_short")
#line 1767 "cplus.met"
        }
#line 1767 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 1767 "cplus.met"
    }
#line 1767 "cplus.met"
#line 1768 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1768 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1768 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(ext_data_decl_sc_ty_short_exit,";")
#line 1768 "cplus.met"
    } else {
#line 1768 "cplus.met"
        tokenAhead = 0 ;
#line 1768 "cplus.met"
    }
#line 1768 "cplus.met"
#line 1769 "cplus.met"
    {
#line 1769 "cplus.met"
        _retValue = retTree ;
#line 1769 "cplus.met"
        goto ext_data_decl_sc_ty_short_ret;
#line 1769 "cplus.met"
        
#line 1769 "cplus.met"
    }
#line 1769 "cplus.met"
#line 1769 "cplus.met"
#line 1769 "cplus.met"

#line 1770 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1770 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1770 "cplus.met"
return((PPTREE) 0);
#line 1770 "cplus.met"

#line 1770 "cplus.met"
ext_data_decl_sc_ty_short_exit :
#line 1770 "cplus.met"

#line 1770 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_EXIT,(PPTREE)0);
#line 1770 "cplus.met"
    _funcLevel--;
#line 1770 "cplus.met"
    return((PPTREE) -1) ;
#line 1770 "cplus.met"

#line 1770 "cplus.met"
ext_data_decl_sc_ty_short_ret :
#line 1770 "cplus.met"
    
#line 1770 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_sc_ty_short",TRACE_RETURN,_retValue);
#line 1770 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1770 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1770 "cplus.met"
    return _retValue ;
#line 1770 "cplus.met"
}
#line 1770 "cplus.met"

#line 1770 "cplus.met"
#line 1780 "cplus.met"
PPTREE cplus::ext_data_decl_simp ( int error_free)
#line 1780 "cplus.met"
{
#line 1780 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1780 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1780 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1780 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_ENTER,(PPTREE)0);
#line 1780 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1780 "cplus.met"
#line 1780 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1780 "cplus.met"
#line 1782 "cplus.met"
    if ((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(data_declaration), 45, cplus))) && 
#line 1782 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inline_namespace), 87, cplus)))){
#line 1782 "cplus.met"
#line 1783 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(ext_data_decl_sc_ty)(error_free), 72, cplus))== (PPTREE) -1 ) {
#line 1783 "cplus.met"
            MulFreeTree(1,retTree);
            PROG_EXIT(ext_data_decl_simp_exit,"ext_data_decl_simp")
#line 1783 "cplus.met"
        }
#line 1783 "cplus.met"
    }
#line 1783 "cplus.met"
#line 1784 "cplus.met"
    {
#line 1784 "cplus.met"
        _retValue = retTree ;
#line 1784 "cplus.met"
        goto ext_data_decl_simp_ret;
#line 1784 "cplus.met"
        
#line 1784 "cplus.met"
    }
#line 1784 "cplus.met"
#line 1784 "cplus.met"
#line 1784 "cplus.met"

#line 1785 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1785 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1785 "cplus.met"
return((PPTREE) 0);
#line 1785 "cplus.met"

#line 1785 "cplus.met"
ext_data_decl_simp_exit :
#line 1785 "cplus.met"

#line 1785 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_EXIT,(PPTREE)0);
#line 1785 "cplus.met"
    _funcLevel--;
#line 1785 "cplus.met"
    return((PPTREE) -1) ;
#line 1785 "cplus.met"

#line 1785 "cplus.met"
ext_data_decl_simp_ret :
#line 1785 "cplus.met"
    
#line 1785 "cplus.met"
    _Debug = TRACE_RULE("ext_data_decl_simp",TRACE_RETURN,_retValue);
#line 1785 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1785 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1785 "cplus.met"
    return _retValue ;
#line 1785 "cplus.met"
}
#line 1785 "cplus.met"

#line 1785 "cplus.met"
#line 1800 "cplus.met"
PPTREE cplus::ext_data_declaration ( int error_free)
#line 1800 "cplus.met"
{
#line 1800 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1800 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1800 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1800 "cplus.met"
    int _Debug = TRACE_RULE("ext_data_declaration",TRACE_ENTER,(PPTREE)0);
#line 1800 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1800 "cplus.met"
#line 1800 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1800 "cplus.met"
#line 1802 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1802 "cplus.met"
    switch( lexEl.Value) {
#line 1802 "cplus.met"
#line 1803 "cplus.met"
        case TYPEDEF : 
#line 1803 "cplus.met"
            tokenAhead = 0 ;
#line 1803 "cplus.met"
            CommTerm();
#line 1803 "cplus.met"
#line 1804 "cplus.met"
#line 1805 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(typedef_and_declarator), 158, cplus))){
#line 1805 "cplus.met"
#line 1806 "cplus.met"
                {
#line 1806 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1806 "cplus.met"
                    _ptRes0= MakeTree(TYPEDEF, 2);
#line 1806 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(declarator_list)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1806 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1806 "cplus.met"
                    }
#line 1806 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1806 "cplus.met"
                    retTree=_ptRes0;
#line 1806 "cplus.met"
                }
#line 1806 "cplus.met"
            }
#line 1806 "cplus.met"
#line 1807 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1807 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1807 "cplus.met"
                MulFreeTree(1,retTree);
                TOKEN_EXIT(ext_data_declaration_exit,";")
#line 1807 "cplus.met"
            } else {
#line 1807 "cplus.met"
                tokenAhead = 0 ;
#line 1807 "cplus.met"
            }
#line 1807 "cplus.met"
#line 1808 "cplus.met"
            {
#line 1808 "cplus.met"
                _retValue = retTree ;
#line 1808 "cplus.met"
                goto ext_data_declaration_ret;
#line 1808 "cplus.met"
                
#line 1808 "cplus.met"
            }
#line 1808 "cplus.met"
#line 1808 "cplus.met"
            break;
#line 1808 "cplus.met"
#line 1810 "cplus.met"
        case NAMESPACE : 
#line 1810 "cplus.met"
#line 1810 "cplus.met"
            {
#line 1810 "cplus.met"
                PPTREE _ptTree0=0;
#line 1810 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1810 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1810 "cplus.met"
                }
#line 1810 "cplus.met"
                _retValue =_ptTree0;
#line 1810 "cplus.met"
                goto ext_data_declaration_ret;
#line 1810 "cplus.met"
            }
#line 1810 "cplus.met"
            break;
#line 1810 "cplus.met"
#line 1811 "cplus.met"
        case USING : 
#line 1811 "cplus.met"
#line 1811 "cplus.met"
            {
#line 1811 "cplus.met"
                PPTREE _ptTree0=0;
#line 1811 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(name_space)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1811 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1811 "cplus.met"
                }
#line 1811 "cplus.met"
                _retValue =_ptTree0;
#line 1811 "cplus.met"
                goto ext_data_declaration_ret;
#line 1811 "cplus.met"
            }
#line 1811 "cplus.met"
            break;
#line 1811 "cplus.met"
#line 1812 "cplus.met"
        case PVIR : 
#line 1812 "cplus.met"
            tokenAhead = 0 ;
#line 1812 "cplus.met"
            CommTerm();
#line 1812 "cplus.met"
#line 1812 "cplus.met"
            {
#line 1812 "cplus.met"
                PPTREE _ptTree0=0;
#line 1812 "cplus.met"
                {
#line 1812 "cplus.met"
                    PPTREE _ptRes1=0;
#line 1812 "cplus.met"
                    _ptRes1= MakeTree(STAT_VOID, 0);
#line 1812 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1812 "cplus.met"
                }
#line 1812 "cplus.met"
                _retValue =_ptTree0;
#line 1812 "cplus.met"
                goto ext_data_declaration_ret;
#line 1812 "cplus.met"
            }
#line 1812 "cplus.met"
            break;
#line 1812 "cplus.met"
#line 1813 "cplus.met"
        case __EXTENSION__ : 
#line 1813 "cplus.met"
            tokenAhead = 0 ;
#line 1813 "cplus.met"
            CommTerm();
#line 1813 "cplus.met"
#line 1813 "cplus.met"
            {
#line 1813 "cplus.met"
                PPTREE _ptTree0=0;
#line 1813 "cplus.met"
                {
#line 1813 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1813 "cplus.met"
                    _ptRes1= MakeTree(EXTENSION, 1);
#line 1813 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 1813 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                        PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1813 "cplus.met"
                    }
#line 1813 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1813 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1813 "cplus.met"
                }
#line 1813 "cplus.met"
                _retValue =_ptTree0;
#line 1813 "cplus.met"
                goto ext_data_declaration_ret;
#line 1813 "cplus.met"
            }
#line 1813 "cplus.met"
            break;
#line 1813 "cplus.met"
#line 1814 "cplus.met"
        default : 
#line 1814 "cplus.met"
#line 1814 "cplus.met"
            {
#line 1814 "cplus.met"
                PPTREE _ptTree0=0;
#line 1814 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_data_decl_simp)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 1814 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_data_declaration_exit,"ext_data_declaration")
#line 1814 "cplus.met"
                }
#line 1814 "cplus.met"
                _retValue =_ptTree0;
#line 1814 "cplus.met"
                goto ext_data_declaration_ret;
#line 1814 "cplus.met"
            }
#line 1814 "cplus.met"
            break;
#line 1814 "cplus.met"
    }
#line 1814 "cplus.met"
#line 1814 "cplus.met"
#line 1815 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1815 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1815 "cplus.met"
return((PPTREE) 0);
#line 1815 "cplus.met"

#line 1815 "cplus.met"
ext_data_declaration_exit :
#line 1815 "cplus.met"

#line 1815 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_EXIT,(PPTREE)0);
#line 1815 "cplus.met"
    _funcLevel--;
#line 1815 "cplus.met"
    return((PPTREE) -1) ;
#line 1815 "cplus.met"

#line 1815 "cplus.met"
ext_data_declaration_ret :
#line 1815 "cplus.met"
    
#line 1815 "cplus.met"
    _Debug = TRACE_RULE("ext_data_declaration",TRACE_RETURN,_retValue);
#line 1815 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1815 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1815 "cplus.met"
    return _retValue ;
#line 1815 "cplus.met"
}
#line 1815 "cplus.met"

#line 1815 "cplus.met"
#line 1482 "cplus.met"
PPTREE cplus::ext_decl_dir ( int error_free)
#line 1482 "cplus.met"
{
#line 1482 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1482 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1482 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1482 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_dir",TRACE_ENTER,(PPTREE)0);
#line 1482 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1482 "cplus.met"
#line 1482 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1482 "cplus.met"
#line 1484 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 57, cplus)){
#line 1484 "cplus.met"
#line 1485 "cplus.met"
        {
#line 1485 "cplus.met"
            _retValue = retTree ;
#line 1485 "cplus.met"
            goto ext_decl_dir_ret;
#line 1485 "cplus.met"
            
#line 1485 "cplus.met"
        }
#line 1485 "cplus.met"
    }
#line 1485 "cplus.met"
#line 1486 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1486 "cplus.met"
    switch( lexEl.Value) {
#line 1486 "cplus.met"
#line 1487 "cplus.met"
        case META : 
#line 1487 "cplus.met"
        case IF_DIR : 
#line 1487 "cplus.met"
            tokenAhead = 0 ;
#line 1487 "cplus.met"
            CommTerm();
#line 1487 "cplus.met"
#line 1487 "cplus.met"
            {
#line 1487 "cplus.met"
                PPTREE _ptTree0=0;
#line 1487 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1487 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1487 "cplus.met"
                }
#line 1487 "cplus.met"
                _retValue =_ptTree0;
#line 1487 "cplus.met"
                goto ext_decl_dir_ret;
#line 1487 "cplus.met"
            }
#line 1487 "cplus.met"
            break;
#line 1487 "cplus.met"
#line 1488 "cplus.met"
        case IFDEF_DIR : 
#line 1488 "cplus.met"
#line 1488 "cplus.met"
            {
#line 1488 "cplus.met"
                PPTREE _ptTree0=0;
#line 1488 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 1488 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1488 "cplus.met"
                }
#line 1488 "cplus.met"
                _retValue =_ptTree0;
#line 1488 "cplus.met"
                goto ext_decl_dir_ret;
#line 1488 "cplus.met"
            }
#line 1488 "cplus.met"
            break;
#line 1488 "cplus.met"
#line 1489 "cplus.met"
        case IFNDEF_DIR : 
#line 1489 "cplus.met"
#line 1489 "cplus.met"
            {
#line 1489 "cplus.met"
                PPTREE _ptTree0=0;
#line 1489 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(ext_decl_ifdef_dir)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 1489 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(ext_decl_dir_exit,"ext_decl_dir")
#line 1489 "cplus.met"
                }
#line 1489 "cplus.met"
                _retValue =_ptTree0;
#line 1489 "cplus.met"
                goto ext_decl_dir_ret;
#line 1489 "cplus.met"
            }
#line 1489 "cplus.met"
            break;
#line 1489 "cplus.met"
        default :
#line 1489 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(ext_decl_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1489 "cplus.met"
            break;
#line 1489 "cplus.met"
    }
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
ext_decl_dir_exit :
#line 1490 "cplus.met"

#line 1490 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_EXIT,(PPTREE)0);
#line 1490 "cplus.met"
    _funcLevel--;
#line 1490 "cplus.met"
    return((PPTREE) -1) ;
#line 1490 "cplus.met"

#line 1490 "cplus.met"
ext_decl_dir_ret :
#line 1490 "cplus.met"
    
#line 1490 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_dir",TRACE_RETURN,_retValue);
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
#line 1416 "cplus.met"
PPTREE cplus::ext_decl_if_dir ( int error_free)
#line 1416 "cplus.met"
{
#line 1416 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1416 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1416 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1416 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1416 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1416 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1416 "cplus.met"
#line 1416 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1416 "cplus.met"
#line 1416 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1416 "cplus.met"
#line 1418 "cplus.met"
    {
#line 1418 "cplus.met"
        keepCarriage = 1 ;
#line 1418 "cplus.met"
#line 1419 "cplus.met"
#line 1420 "cplus.met"
        {
#line 1420 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1420 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1420 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1420 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1420 "cplus.met"
            }
#line 1420 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1420 "cplus.met"
            retTree=_ptRes0;
#line 1420 "cplus.met"
        }
#line 1420 "cplus.met"
#line 1421 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1421 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1421 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(ext_decl_if_dir_exit,"CARRIAGE_RETURN")
#line 1421 "cplus.met"
        } else {
#line 1421 "cplus.met"
            tokenAhead = 0 ;
#line 1421 "cplus.met"
        }
#line 1421 "cplus.met"
#line 1421 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1421 "cplus.met"
    }
#line 1421 "cplus.met"
#line 1421 "cplus.met"
    _addlist1 = list ;
#line 1421 "cplus.met"
#line 1423 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1423 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1423 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1423 "cplus.met"
#line 1424 "cplus.met"
#line 1424 "cplus.met"
        {
#line 1424 "cplus.met"
            PPTREE _ptTree0=0;
#line 1424 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1424 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1424 "cplus.met"
            }
#line 1424 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1424 "cplus.met"
        }
#line 1424 "cplus.met"
#line 1424 "cplus.met"
        if (list){
#line 1424 "cplus.met"
#line 1424 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1424 "cplus.met"
        } else {
#line 1424 "cplus.met"
#line 1424 "cplus.met"
            list = _addlist1 ;
#line 1424 "cplus.met"
        }
#line 1424 "cplus.met"
    } 
#line 1424 "cplus.met"
#line 1425 "cplus.met"
    {
#line 1425 "cplus.met"
        PPTREE _ptTree0=0;
#line 1425 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1425 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1425 "cplus.met"
        }
#line 1425 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1425 "cplus.met"
    }
#line 1425 "cplus.met"
#line 1426 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1426 "cplus.met"
#line 1427 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1427 "cplus.met"
    switch( lexEl.Value) {
#line 1427 "cplus.met"
#line 1428 "cplus.met"
        case META : 
#line 1428 "cplus.met"
        case ELSE_DIR : 
#line 1428 "cplus.met"
            tokenAhead = 0 ;
#line 1428 "cplus.met"
            CommTerm();
#line 1428 "cplus.met"
#line 1429 "cplus.met"
#line 1429 "cplus.met"
            _addlist2 = list2 ;
#line 1429 "cplus.met"
#line 1430 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1430 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1430 "cplus.met"
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                {
#line 1431 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1431 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1431 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1431 "cplus.met"
                    }
#line 1431 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1431 "cplus.met"
                }
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                if (list2){
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1431 "cplus.met"
                } else {
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                    list2 = _addlist2 ;
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
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1432 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1432 "cplus.met"
                }
#line 1432 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1432 "cplus.met"
            }
#line 1432 "cplus.met"
#line 1433 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1433 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1433 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(ext_decl_if_dir_exit,"ENDIF_DIR")
#line 1433 "cplus.met"
            } else {
#line 1433 "cplus.met"
                tokenAhead = 0 ;
#line 1433 "cplus.met"
            }
#line 1433 "cplus.met"
#line 1434 "cplus.met"
            {
#line 1434 "cplus.met"
                PPTREE _ptTree0=0;
#line 1434 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1434 "cplus.met"
                _retValue =_ptTree0;
#line 1434 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1434 "cplus.met"
            }
#line 1434 "cplus.met"
#line 1434 "cplus.met"
            break;
#line 1434 "cplus.met"
#line 1436 "cplus.met"
        case ELIF_DIR : 
#line 1436 "cplus.met"
            tokenAhead = 0 ;
#line 1436 "cplus.met"
            CommTerm();
#line 1436 "cplus.met"
#line 1436 "cplus.met"
            {
#line 1436 "cplus.met"
                PPTREE _ptTree0=0;
#line 1436 "cplus.met"
                {
#line 1436 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1436 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1436 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(ext_decl_if_dir_exit,"ext_decl_if_dir")
#line 1436 "cplus.met"
                    }
#line 1436 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1436 "cplus.met"
                }
#line 1436 "cplus.met"
                _retValue =_ptTree0;
#line 1436 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1436 "cplus.met"
            }
#line 1436 "cplus.met"
            break;
#line 1436 "cplus.met"
#line 1437 "cplus.met"
        case ENDIF_DIR : 
#line 1437 "cplus.met"
            tokenAhead = 0 ;
#line 1437 "cplus.met"
            CommTerm();
#line 1437 "cplus.met"
#line 1437 "cplus.met"
            {
#line 1437 "cplus.met"
                _retValue = retTree ;
#line 1437 "cplus.met"
                goto ext_decl_if_dir_ret;
#line 1437 "cplus.met"
                
#line 1437 "cplus.met"
            }
#line 1437 "cplus.met"
            break;
#line 1437 "cplus.met"
        default :
#line 1437 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(ext_decl_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1437 "cplus.met"
            break;
#line 1437 "cplus.met"
    }
#line 1437 "cplus.met"
#line 1437 "cplus.met"
#line 1438 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1438 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1438 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1438 "cplus.met"
return((PPTREE) 0);
#line 1438 "cplus.met"

#line 1438 "cplus.met"
ext_decl_if_dir_exit :
#line 1438 "cplus.met"

#line 1438 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1438 "cplus.met"
    _funcLevel--;
#line 1438 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1438 "cplus.met"
    return((PPTREE) -1) ;
#line 1438 "cplus.met"

#line 1438 "cplus.met"
ext_decl_if_dir_ret :
#line 1438 "cplus.met"
    
#line 1438 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_if_dir",TRACE_RETURN,_retValue);
#line 1438 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1438 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1438 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1438 "cplus.met"
    return _retValue ;
#line 1438 "cplus.met"
}
#line 1438 "cplus.met"

#line 1438 "cplus.met"
#line 1441 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1441 "cplus.met"
{
#line 1441 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1441 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1441 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1441 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1441 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1441 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1441 "cplus.met"
#line 1441 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1441 "cplus.met"
#line 1441 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1441 "cplus.met"
#line 1443 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1443 "cplus.met"
#line 1444 "cplus.met"
#line 1445 "cplus.met"
        {
#line 1445 "cplus.met"
            keepCarriage = 1 ;
#line 1445 "cplus.met"
#line 1446 "cplus.met"
#line 1447 "cplus.met"
            {
#line 1447 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1447 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1447 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1447 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
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
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1448 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1448 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1448 "cplus.met"
            } else {
#line 1448 "cplus.met"
                tokenAhead = 0 ;
#line 1448 "cplus.met"
            }
#line 1448 "cplus.met"
#line 1448 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1448 "cplus.met"
        }
#line 1448 "cplus.met"
#line 1448 "cplus.met"
#line 1449 "cplus.met"
    } else {
#line 1449 "cplus.met"
#line 1452 "cplus.met"
#line 1453 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1453 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1453 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1453 "cplus.met"
        } else {
#line 1453 "cplus.met"
            tokenAhead = 0 ;
#line 1453 "cplus.met"
        }
#line 1453 "cplus.met"
#line 1454 "cplus.met"
        {
#line 1454 "cplus.met"
            keepCarriage = 1 ;
#line 1454 "cplus.met"
#line 1455 "cplus.met"
#line 1456 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1456 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1456 "cplus.met"
            }
#line 1456 "cplus.met"
#line 1457 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1457 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1457 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1457 "cplus.met"
            } else {
#line 1457 "cplus.met"
                tokenAhead = 0 ;
#line 1457 "cplus.met"
            }
#line 1457 "cplus.met"
#line 1457 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1457 "cplus.met"
        }
#line 1457 "cplus.met"
#line 1459 "cplus.met"
        {
#line 1459 "cplus.met"
            PPTREE _ptRes0=0;
#line 1459 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1459 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1459 "cplus.met"
            retTree=_ptRes0;
#line 1459 "cplus.met"
        }
#line 1459 "cplus.met"
#line 1459 "cplus.met"
    }
#line 1459 "cplus.met"
#line 1459 "cplus.met"
    _addlist1 = list ;
#line 1459 "cplus.met"
#line 1463 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1463 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1463 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1463 "cplus.met"
#line 1465 "cplus.met"
#line 1465 "cplus.met"
        {
#line 1465 "cplus.met"
            PPTREE _ptTree0=0;
#line 1465 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1465 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1465 "cplus.met"
            }
#line 1465 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1465 "cplus.met"
        }
#line 1465 "cplus.met"
#line 1465 "cplus.met"
        if (list){
#line 1465 "cplus.met"
#line 1465 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1465 "cplus.met"
        } else {
#line 1465 "cplus.met"
#line 1465 "cplus.met"
            list = _addlist1 ;
#line 1465 "cplus.met"
        }
#line 1465 "cplus.met"
    } 
#line 1465 "cplus.met"
#line 1466 "cplus.met"
    {
#line 1466 "cplus.met"
        PPTREE _ptTree0=0;
#line 1466 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1466 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1466 "cplus.met"
        }
#line 1466 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1466 "cplus.met"
    }
#line 1466 "cplus.met"
#line 1467 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1467 "cplus.met"
#line 1468 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1468 "cplus.met"
    switch( lexEl.Value) {
#line 1468 "cplus.met"
#line 1469 "cplus.met"
        case META : 
#line 1469 "cplus.met"
        case ELSE_DIR : 
#line 1469 "cplus.met"
            tokenAhead = 0 ;
#line 1469 "cplus.met"
            CommTerm();
#line 1469 "cplus.met"
#line 1470 "cplus.met"
#line 1470 "cplus.met"
            _addlist2 = list2 ;
#line 1470 "cplus.met"
#line 1471 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1471 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1471 "cplus.met"
#line 1472 "cplus.met"
#line 1472 "cplus.met"
                {
#line 1472 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1472 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 70, cplus))== (PPTREE) -1 ) {
#line 1472 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1472 "cplus.met"
                    }
#line 1472 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1472 "cplus.met"
                }
#line 1472 "cplus.met"
#line 1472 "cplus.met"
                if (list2){
#line 1472 "cplus.met"
#line 1472 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1472 "cplus.met"
                } else {
#line 1472 "cplus.met"
#line 1472 "cplus.met"
                    list2 = _addlist2 ;
#line 1472 "cplus.met"
                }
#line 1472 "cplus.met"
            } 
#line 1472 "cplus.met"
#line 1473 "cplus.met"
            {
#line 1473 "cplus.met"
                PPTREE _ptTree0=0;
#line 1473 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1473 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1473 "cplus.met"
                }
#line 1473 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1473 "cplus.met"
            }
#line 1473 "cplus.met"
#line 1474 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1474 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1474 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1474 "cplus.met"
            } else {
#line 1474 "cplus.met"
                tokenAhead = 0 ;
#line 1474 "cplus.met"
            }
#line 1474 "cplus.met"
#line 1475 "cplus.met"
            {
#line 1475 "cplus.met"
                PPTREE _ptTree0=0;
#line 1475 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1475 "cplus.met"
                _retValue =_ptTree0;
#line 1475 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1475 "cplus.met"
            }
#line 1475 "cplus.met"
#line 1475 "cplus.met"
            break;
#line 1475 "cplus.met"
#line 1477 "cplus.met"
        case ELIF_DIR : 
#line 1477 "cplus.met"
            tokenAhead = 0 ;
#line 1477 "cplus.met"
            CommTerm();
#line 1477 "cplus.met"
#line 1477 "cplus.met"
            {
#line 1477 "cplus.met"
                PPTREE _ptTree0=0;
#line 1477 "cplus.met"
                {
#line 1477 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1477 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 1477 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1477 "cplus.met"
                    }
#line 1477 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1477 "cplus.met"
                }
#line 1477 "cplus.met"
                _retValue =_ptTree0;
#line 1477 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1477 "cplus.met"
            }
#line 1477 "cplus.met"
            break;
#line 1477 "cplus.met"
#line 1478 "cplus.met"
        case ENDIF_DIR : 
#line 1478 "cplus.met"
            tokenAhead = 0 ;
#line 1478 "cplus.met"
            CommTerm();
#line 1478 "cplus.met"
#line 1478 "cplus.met"
            {
#line 1478 "cplus.met"
                _retValue = retTree ;
#line 1478 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1478 "cplus.met"
                
#line 1478 "cplus.met"
            }
#line 1478 "cplus.met"
            break;
#line 1478 "cplus.met"
        default :
#line 1478 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1478 "cplus.met"
            break;
#line 1478 "cplus.met"
    }
#line 1478 "cplus.met"
#line 1478 "cplus.met"
#line 1479 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1479 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1479 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1479 "cplus.met"
return((PPTREE) 0);
#line 1479 "cplus.met"

#line 1479 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1479 "cplus.met"

#line 1479 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1479 "cplus.met"
    _funcLevel--;
#line 1479 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1479 "cplus.met"
    return((PPTREE) -1) ;
#line 1479 "cplus.met"

#line 1479 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1479 "cplus.met"
    
#line 1479 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1479 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1479 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1479 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1479 "cplus.met"
    return _retValue ;
#line 1479 "cplus.met"
}
#line 1479 "cplus.met"

#line 1479 "cplus.met"
