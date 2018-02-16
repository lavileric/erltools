/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1950 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 1950 "cplus.met"
{
#line 1950 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1950 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1950 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1950 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 1950 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1950 "cplus.met"
#line 1950 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1950 "cplus.met"
#line 1952 "cplus.met"
#line 1953 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1953 "cplus.met"
#line 1953 "cplus.met"
        {
#line 1953 "cplus.met"
            PPTREE _ptRes0=0;
#line 1953 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1953 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1953 "cplus.met"
            retTree=_ptRes0;
#line 1953 "cplus.met"
        }
#line 1953 "cplus.met"
    } else 
#line 1953 "cplus.met"
#line 1954 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1954 "cplus.met"
#line 1954 "cplus.met"
        {
#line 1954 "cplus.met"
            PPTREE _ptRes0=0;
#line 1954 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1954 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1954 "cplus.met"
            retTree=_ptRes0;
#line 1954 "cplus.met"
        }
#line 1954 "cplus.met"
    } else 
#line 1954 "cplus.met"
#line 1956 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 1956 "cplus.met"
#line 1956 "cplus.met"
        {
#line 1956 "cplus.met"
            PPTREE _ptRes0=0;
#line 1956 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1956 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1956 "cplus.met"
            retTree=_ptRes0;
#line 1956 "cplus.met"
        }
#line 1956 "cplus.met"
    } else 
#line 1956 "cplus.met"
#line 1958 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1958 "cplus.met"
#line 1958 "cplus.met"
        {
#line 1958 "cplus.met"
            PPTREE _ptRes0=0;
#line 1958 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1958 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1958 "cplus.met"
            retTree=_ptRes0;
#line 1958 "cplus.met"
        }
#line 1958 "cplus.met"
    } else 
#line 1958 "cplus.met"
#line 1960 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1960 "cplus.met"
#line 1960 "cplus.met"
        {
#line 1960 "cplus.met"
            PPTREE _ptRes0=0;
#line 1960 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1960 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1960 "cplus.met"
            retTree=_ptRes0;
#line 1960 "cplus.met"
        }
#line 1960 "cplus.met"
    } else 
#line 1960 "cplus.met"
#line 1961 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 1961 "cplus.met"
#line 1961 "cplus.met"
        {
#line 1961 "cplus.met"
            PPTREE _ptRes0=0;
#line 1961 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1961 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1961 "cplus.met"
            retTree=_ptRes0;
#line 1961 "cplus.met"
        }
#line 1961 "cplus.met"
    } else 
#line 1961 "cplus.met"
#line 1963 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 1963 "cplus.met"
#line 1963 "cplus.met"
        {
#line 1963 "cplus.met"
            PPTREE _ptRes0=0;
#line 1963 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1963 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1963 "cplus.met"
            retTree=_ptRes0;
#line 1963 "cplus.met"
        }
#line 1963 "cplus.met"
    } else 
#line 1963 "cplus.met"
#line 1964 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 1964 "cplus.met"
#line 1964 "cplus.met"
        {
#line 1964 "cplus.met"
            PPTREE _ptRes0=0;
#line 1964 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1964 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1964 "cplus.met"
            retTree=_ptRes0;
#line 1964 "cplus.met"
        }
#line 1964 "cplus.met"
    } else 
#line 1964 "cplus.met"
#line 1965 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 1965 "cplus.met"
#line 1965 "cplus.met"
        {
#line 1965 "cplus.met"
            PPTREE _ptRes0=0;
#line 1965 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1965 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1965 "cplus.met"
            retTree=_ptRes0;
#line 1965 "cplus.met"
        }
#line 1965 "cplus.met"
    } else 
#line 1965 "cplus.met"
#line 1966 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 1966 "cplus.met"
#line 1966 "cplus.met"
        {
#line 1966 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1966 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1966 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1966 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1966 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 1966 "cplus.met"
            } else {
#line 1966 "cplus.met"
                tokenAhead = 0 ;
#line 1966 "cplus.met"
            }
#line 1966 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1966 "cplus.met"
            retTree=_ptRes0;
#line 1966 "cplus.met"
        }
#line 1966 "cplus.met"
    } else 
#line 1966 "cplus.met"
#line 1967 "cplus.met"
    if (1) {
#line 1967 "cplus.met"
#line 1967 "cplus.met"
        
#line 1967 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 1967 "cplus.met"
        goto macro_extended_exit;
#line 1967 "cplus.met"
    } else 
#line 1967 "cplus.met"
     ;
#line 1967 "cplus.met"
#line 1969 "cplus.met"
    {
#line 1969 "cplus.met"
        PPTREE _ptRes0=0;
#line 1969 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1969 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1969 "cplus.met"
        retTree=_ptRes0;
#line 1969 "cplus.met"
    }
#line 1969 "cplus.met"
#line 1970 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1970 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1970 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 1970 "cplus.met"
    } else {
#line 1970 "cplus.met"
        tokenAhead = 0 ;
#line 1970 "cplus.met"
    }
#line 1970 "cplus.met"
#line 1971 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 60, cplus)){
#line 1971 "cplus.met"
#line 1972 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1972 "cplus.met"
#line 1972 "cplus.met"
    }
#line 1972 "cplus.met"
#line 1973 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1973 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1973 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 1973 "cplus.met"
    } else {
#line 1973 "cplus.met"
        tokenAhead = 0 ;
#line 1973 "cplus.met"
    }
#line 1973 "cplus.met"
#line 1974 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1974 "cplus.met"
#line 1974 "cplus.met"
    }
#line 1974 "cplus.met"
#line 1976 "cplus.met"
    {
#line 1976 "cplus.met"
        _retValue = retTree ;
#line 1976 "cplus.met"
        goto macro_extended_ret;
#line 1976 "cplus.met"
        
#line 1976 "cplus.met"
    }
#line 1976 "cplus.met"
#line 1976 "cplus.met"
#line 1976 "cplus.met"

#line 1977 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1977 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1977 "cplus.met"
return((PPTREE) 0);
#line 1977 "cplus.met"

#line 1977 "cplus.met"
macro_extended_exit :
#line 1977 "cplus.met"

#line 1977 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 1977 "cplus.met"
    _funcLevel--;
#line 1977 "cplus.met"
    return((PPTREE) -1) ;
#line 1977 "cplus.met"

#line 1977 "cplus.met"
macro_extended_ret :
#line 1977 "cplus.met"
    
#line 1977 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 1977 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1977 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1977 "cplus.met"
    return _retValue ;
#line 1977 "cplus.met"
}
#line 1977 "cplus.met"

#line 1977 "cplus.met"
#line 752 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 752 "cplus.met"
{
#line 752 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 752 "cplus.met"
    int _value,_nbPre = 0 ;
#line 752 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 752 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 752 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 752 "cplus.met"
#line 753 "cplus.met"
    {
#line 753 "cplus.met"
        PPTREE _ptTree0=0;
#line 753 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 753 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 753 "cplus.met"
        }
#line 753 "cplus.met"
        _retValue =_ptTree0;
#line 753 "cplus.met"
        goto main_entry_ret;
#line 753 "cplus.met"
    }
#line 753 "cplus.met"
#line 753 "cplus.met"
#line 753 "cplus.met"

#line 754 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 754 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 754 "cplus.met"
return((PPTREE) 0);
#line 754 "cplus.met"

#line 754 "cplus.met"
main_entry_exit :
#line 754 "cplus.met"

#line 754 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 754 "cplus.met"
    _funcLevel--;
#line 754 "cplus.met"
    return((PPTREE) -1) ;
#line 754 "cplus.met"

#line 754 "cplus.met"
main_entry_ret :
#line 754 "cplus.met"
    
#line 754 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 754 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 754 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 754 "cplus.met"
    return _retValue ;
#line 754 "cplus.met"
}
#line 754 "cplus.met"

#line 754 "cplus.met"
#line 2181 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2181 "cplus.met"
{
#line 2181 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2181 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2181 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2181 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2181 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2181 "cplus.met"
#line 2181 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2181 "cplus.met"
#line 2183 "cplus.met"
    {
#line 2183 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2183 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2183 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2183 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2183 "cplus.met"
        }
#line 2183 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2183 "cplus.met"
        retTree=_ptRes0;
#line 2183 "cplus.met"
    }
#line 2183 "cplus.met"
#line 2184 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2184 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2184 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2184 "cplus.met"
    } else {
#line 2184 "cplus.met"
        tokenAhead = 0 ;
#line 2184 "cplus.met"
    }
#line 2184 "cplus.met"
#line 2185 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2185 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2185 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2185 "cplus.met"
    } else {
#line 2185 "cplus.met"
        tokenAhead = 0 ;
#line 2185 "cplus.met"
    }
#line 2185 "cplus.met"
#line 2186 "cplus.met"
    {
#line 2186 "cplus.met"
        _retValue = retTree ;
#line 2186 "cplus.met"
        goto member_declarator_ret;
#line 2186 "cplus.met"
        
#line 2186 "cplus.met"
    }
#line 2186 "cplus.met"
#line 2186 "cplus.met"
#line 2186 "cplus.met"

#line 2187 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2187 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2187 "cplus.met"
return((PPTREE) 0);
#line 2187 "cplus.met"

#line 2187 "cplus.met"
member_declarator_exit :
#line 2187 "cplus.met"

#line 2187 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2187 "cplus.met"
    _funcLevel--;
#line 2187 "cplus.met"
    return((PPTREE) -1) ;
#line 2187 "cplus.met"

#line 2187 "cplus.met"
member_declarator_ret :
#line 2187 "cplus.met"
    
#line 2187 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2187 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2187 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2187 "cplus.met"
    return _retValue ;
#line 2187 "cplus.met"
}
#line 2187 "cplus.met"

#line 2187 "cplus.met"
#line 1979 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 1979 "cplus.met"
{
#line 1979 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1979 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1979 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1979 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 1979 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1979 "cplus.met"
#line 1979 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1979 "cplus.met"
#line 1979 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1979 "cplus.met"
#line 1981 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1981 "cplus.met"
    switch( lexEl.Value) {
#line 1981 "cplus.met"
#line 1982 "cplus.met"
        case META : 
#line 1982 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1982 "cplus.met"
#line 1982 "cplus.met"
            break;
#line 1982 "cplus.met"
        default :
#line 1982 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 1982 "cplus.met"
            break;
#line 1982 "cplus.met"
    }
#line 1982 "cplus.met"
#line 1984 "cplus.met"
    {
#line 1984 "cplus.met"
        PPTREE _ptRes0=0;
#line 1984 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 1984 "cplus.met"
        retTree=_ptRes0;
#line 1984 "cplus.met"
    }
#line 1984 "cplus.met"
#line 1984 "cplus.met"
    _addlist1 = list ;
#line 1984 "cplus.met"
#line 1985 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 1985 "cplus.met"
#line 1986 "cplus.met"
#line 1986 "cplus.met"
        {
#line 1986 "cplus.met"
            PPTREE _ptTree0=0;
#line 1986 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 90, cplus))== (PPTREE) -1 ) {
#line 1986 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 1986 "cplus.met"
            }
#line 1986 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1986 "cplus.met"
        }
#line 1986 "cplus.met"
#line 1986 "cplus.met"
        if (list){
#line 1986 "cplus.met"
#line 1986 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1986 "cplus.met"
        } else {
#line 1986 "cplus.met"
#line 1986 "cplus.met"
            list = _addlist1 ;
#line 1986 "cplus.met"
        }
#line 1986 "cplus.met"
    } 
#line 1986 "cplus.met"
#line 1987 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1987 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 1987 "cplus.met"
    }
#line 1987 "cplus.met"
#line 1988 "cplus.met"
    {
#line 1988 "cplus.met"
        PPTREE _ptTree0=0;
#line 1988 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 1988 "cplus.met"
        _retValue =_ptTree0;
#line 1988 "cplus.met"
        goto message_map_ret;
#line 1988 "cplus.met"
    }
#line 1988 "cplus.met"
#line 1988 "cplus.met"
#line 1988 "cplus.met"

#line 1989 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1989 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1989 "cplus.met"
return((PPTREE) 0);
#line 1989 "cplus.met"

#line 1989 "cplus.met"
message_map_exit :
#line 1989 "cplus.met"

#line 1989 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 1989 "cplus.met"
    _funcLevel--;
#line 1989 "cplus.met"
    return((PPTREE) -1) ;
#line 1989 "cplus.met"

#line 1989 "cplus.met"
message_map_ret :
#line 1989 "cplus.met"
    
#line 1989 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 1989 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1989 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1989 "cplus.met"
    return _retValue ;
#line 1989 "cplus.met"
}
#line 1989 "cplus.met"

#line 1989 "cplus.met"
#line 2726 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2726 "cplus.met"
{
#line 2726 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2726 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2726 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2726 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2726 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2726 "cplus.met"
#line 2726 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2726 "cplus.met"
#line 2728 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2728 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2728 "cplus.met"
    }
#line 2728 "cplus.met"
#line 2729 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2729 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2729 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2729 "cplus.met"
#line 2730 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2730 "cplus.met"
        switch( lexEl.Value) {
#line 2730 "cplus.met"
#line 2731 "cplus.met"
            case ETOI : 
#line 2731 "cplus.met"
                tokenAhead = 0 ;
#line 2731 "cplus.met"
                CommTerm();
#line 2731 "cplus.met"
#line 2731 "cplus.met"
                {
#line 2731 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2731 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2731 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2731 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2731 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2731 "cplus.met"
                    }
#line 2731 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2731 "cplus.met"
                    expTree=_ptRes0;
#line 2731 "cplus.met"
                }
#line 2731 "cplus.met"
                break;
#line 2731 "cplus.met"
#line 2732 "cplus.met"
            case META : 
#line 2732 "cplus.met"
            case SLAS : 
#line 2732 "cplus.met"
                tokenAhead = 0 ;
#line 2732 "cplus.met"
                CommTerm();
#line 2732 "cplus.met"
#line 2732 "cplus.met"
                {
#line 2732 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2732 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 2732 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2732 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2732 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2732 "cplus.met"
                    }
#line 2732 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2732 "cplus.met"
                    expTree=_ptRes0;
#line 2732 "cplus.met"
                }
#line 2732 "cplus.met"
                break;
#line 2732 "cplus.met"
#line 2733 "cplus.met"
            case POURC : 
#line 2733 "cplus.met"
                tokenAhead = 0 ;
#line 2733 "cplus.met"
                CommTerm();
#line 2733 "cplus.met"
#line 2733 "cplus.met"
                {
#line 2733 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2733 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2733 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2733 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2733 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2733 "cplus.met"
                    }
#line 2733 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2733 "cplus.met"
                    expTree=_ptRes0;
#line 2733 "cplus.met"
                }
#line 2733 "cplus.met"
                break;
#line 2733 "cplus.met"
            default :
#line 2733 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2733 "cplus.met"
                break;
#line 2733 "cplus.met"
        }
#line 2733 "cplus.met"
    } 
#line 2733 "cplus.met"
#line 2735 "cplus.met"
    {
#line 2735 "cplus.met"
        _retValue = expTree ;
#line 2735 "cplus.met"
        goto multiplicative_expression_ret;
#line 2735 "cplus.met"
        
#line 2735 "cplus.met"
    }
#line 2735 "cplus.met"
#line 2735 "cplus.met"
#line 2735 "cplus.met"

#line 2736 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2736 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2736 "cplus.met"
return((PPTREE) 0);
#line 2736 "cplus.met"

#line 2736 "cplus.met"
multiplicative_expression_exit :
#line 2736 "cplus.met"

#line 2736 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2736 "cplus.met"
    _funcLevel--;
#line 2736 "cplus.met"
    return((PPTREE) -1) ;
#line 2736 "cplus.met"

#line 2736 "cplus.met"
multiplicative_expression_ret :
#line 2736 "cplus.met"
    
#line 2736 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2736 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2736 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2736 "cplus.met"
    return _retValue ;
#line 2736 "cplus.met"
}
#line 2736 "cplus.met"

#line 2736 "cplus.met"
#line 3566 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3566 "cplus.met"
{
#line 3566 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3566 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3566 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3566 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3566 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3566 "cplus.met"
#line 3566 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3566 "cplus.met"
#line 3566 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0;
#line 3566 "cplus.met"
#line 3568 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3568 "cplus.met"
    switch( lexEl.Value) {
#line 3568 "cplus.met"
#line 3569 "cplus.met"
        case NAMESPACE : 
#line 3569 "cplus.met"
            tokenAhead = 0 ;
#line 3569 "cplus.met"
            CommTerm();
#line 3569 "cplus.met"
#line 3570 "cplus.met"
#line 3572 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3572 "cplus.met"
#line 3574 "cplus.met"
                {
#line 3574 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3574 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3574 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3574 "cplus.met"
                    ident=_ptRes0;
#line 3574 "cplus.met"
                }
#line 3574 "cplus.met"
            }
#line 3574 "cplus.met"
#line 3576 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3576 "cplus.met"
            switch( lexEl.Value) {
#line 3576 "cplus.met"
#line 3580 "cplus.met"
                case AOUV : 
#line 3580 "cplus.met"
                    tokenAhead = 0 ;
#line 3580 "cplus.met"
                    CommTerm();
#line 3580 "cplus.met"
#line 3579 "cplus.met"
#line 3580 "cplus.met"
                    {
#line 3580 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3580 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 2);
#line 3580 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3580 "cplus.met"
                        retTree=_ptRes0;
#line 3580 "cplus.met"
                    }
#line 3580 "cplus.met"
#line 3580 "cplus.met"
                    _addlist1 = list ;
#line 3580 "cplus.met"
#line 3581 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3581 "cplus.met"
#line 3582 "cplus.met"
#line 3583 "cplus.met"
                        {
#line 3583 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3583 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3583 "cplus.met"
                                MulFreeTree(5,_ptTree0,_addlist1,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3583 "cplus.met"
                            }
#line 3583 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3583 "cplus.met"
                        }
#line 3583 "cplus.met"
#line 3583 "cplus.met"
                        if (list){
#line 3583 "cplus.met"
#line 3583 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3583 "cplus.met"
                        } else {
#line 3583 "cplus.met"
#line 3583 "cplus.met"
                            list = _addlist1 ;
#line 3583 "cplus.met"
                        }
#line 3583 "cplus.met"
#line 3583 "cplus.met"
                    } 
#line 3583 "cplus.met"
#line 3585 "cplus.met"
                    {
#line 3585 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3585 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 3585 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3585 "cplus.met"
                        }
#line 3585 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3585 "cplus.met"
                    }
#line 3585 "cplus.met"
#line 3586 "cplus.met"
                    {
#line 3586 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3586 "cplus.met"
                        {
#line 3586 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3586 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3586 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3586 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3586 "cplus.met"
                        }
#line 3586 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3586 "cplus.met"
                    }
#line 3586 "cplus.met"
#line 3586 "cplus.met"
                    break;
#line 3586 "cplus.met"
#line 3590 "cplus.met"
                case EGAL : 
#line 3590 "cplus.met"
                    tokenAhead = 0 ;
#line 3590 "cplus.met"
                    CommTerm();
#line 3590 "cplus.met"
#line 3589 "cplus.met"
#line 3590 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3590 "cplus.met"
#line 3591 "cplus.met"
                        
#line 3591 "cplus.met"
                        MulFreeTree(4,_addlist1,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3591 "cplus.met"
                        goto name_space_exit;
#line 3591 "cplus.met"
#line 3591 "cplus.met"
                    }
#line 3591 "cplus.met"
#line 3592 "cplus.met"
                    {
#line 3592 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3592 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3592 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3592 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3592 "cplus.met"
                            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3592 "cplus.met"
                        }
#line 3592 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3592 "cplus.met"
                        retTree=_ptRes0;
#line 3592 "cplus.met"
                    }
#line 3592 "cplus.met"
#line 3592 "cplus.met"
                    break;
#line 3592 "cplus.met"
                default :
#line 3592 "cplus.met"
                    MulFreeTree(4,_addlist1,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3592 "cplus.met"
                    break;
#line 3592 "cplus.met"
            }
#line 3592 "cplus.met"
#line 3592 "cplus.met"
            break;
#line 3592 "cplus.met"
#line 3598 "cplus.met"
        case USING : 
#line 3598 "cplus.met"
            tokenAhead = 0 ;
#line 3598 "cplus.met"
            CommTerm();
#line 3598 "cplus.met"
#line 3599 "cplus.met"
#line 3600 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3600 "cplus.met"
#line 3601 "cplus.met"
                {
#line 3601 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3601 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 1);
#line 3601 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3601 "cplus.met"
                        MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3601 "cplus.met"
                    }
#line 3601 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3601 "cplus.met"
                    retTree=_ptRes0;
#line 3601 "cplus.met"
                }
#line 3601 "cplus.met"
            } else {
#line 3601 "cplus.met"
#line 3604 "cplus.met"
                {
#line 3604 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3604 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3604 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3604 "cplus.met"
                        MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3604 "cplus.met"
                    }
#line 3604 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3604 "cplus.met"
                    retTree=_ptRes0;
#line 3604 "cplus.met"
                }
#line 3604 "cplus.met"
            }
#line 3604 "cplus.met"
#line 3605 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3605 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3605 "cplus.met"
                MulFreeTree(4,_addlist1,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3605 "cplus.met"
            } else {
#line 3605 "cplus.met"
                tokenAhead = 0 ;
#line 3605 "cplus.met"
            }
#line 3605 "cplus.met"
#line 3605 "cplus.met"
            break;
#line 3605 "cplus.met"
        default :
#line 3605 "cplus.met"
            MulFreeTree(4,_addlist1,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3605 "cplus.met"
            break;
#line 3605 "cplus.met"
    }
#line 3605 "cplus.met"
#line 3608 "cplus.met"
    {
#line 3608 "cplus.met"
        _retValue = retTree ;
#line 3608 "cplus.met"
        goto name_space_ret;
#line 3608 "cplus.met"
        
#line 3608 "cplus.met"
    }
#line 3608 "cplus.met"
#line 3608 "cplus.met"
#line 3608 "cplus.met"

#line 3609 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3609 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3609 "cplus.met"
return((PPTREE) 0);
#line 3609 "cplus.met"

#line 3609 "cplus.met"
name_space_exit :
#line 3609 "cplus.met"

#line 3609 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3609 "cplus.met"
    _funcLevel--;
#line 3609 "cplus.met"
    return((PPTREE) -1) ;
#line 3609 "cplus.met"

#line 3609 "cplus.met"
name_space_ret :
#line 3609 "cplus.met"
    
#line 3609 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3609 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3609 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3609 "cplus.met"
    return _retValue ;
#line 3609 "cplus.met"
}
#line 3609 "cplus.met"

#line 3609 "cplus.met"
#line 2838 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2838 "cplus.met"
{
#line 2838 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2838 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2838 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2838 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2838 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2838 "cplus.met"
#line 2838 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2838 "cplus.met"
#line 2840 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2840 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2840 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2840 "cplus.met"
    } else {
#line 2840 "cplus.met"
        tokenAhead = 0 ;
#line 2840 "cplus.met"
    }
#line 2840 "cplus.met"
#line 2841 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2841 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2841 "cplus.met"
    }
#line 2841 "cplus.met"
#line 2842 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2842 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2842 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2842 "cplus.met"
    } else {
#line 2842 "cplus.met"
        tokenAhead = 0 ;
#line 2842 "cplus.met"
    }
#line 2842 "cplus.met"
#line 2843 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2843 "cplus.met"
#line 2844 "cplus.met"
#line 2845 "cplus.met"
        {
#line 2845 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2845 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2845 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2845 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2845 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2845 "cplus.met"
            }
#line 2845 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2845 "cplus.met"
            retTree=_ptRes0;
#line 2845 "cplus.met"
        }
#line 2845 "cplus.met"
#line 2846 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2846 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2846 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2846 "cplus.met"
        } else {
#line 2846 "cplus.met"
            tokenAhead = 0 ;
#line 2846 "cplus.met"
        }
#line 2846 "cplus.met"
#line 2847 "cplus.met"
        {
#line 2847 "cplus.met"
            _retValue = retTree ;
#line 2847 "cplus.met"
            goto new_1_ret;
#line 2847 "cplus.met"
            
#line 2847 "cplus.met"
        }
#line 2847 "cplus.met"
#line 2847 "cplus.met"
#line 2847 "cplus.met"
    } else {
#line 2847 "cplus.met"
#line 2850 "cplus.met"
        {
#line 2850 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2850 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2850 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2850 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2850 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2850 "cplus.met"
            }
#line 2850 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2850 "cplus.met"
            retTree=_ptRes0;
#line 2850 "cplus.met"
        }
#line 2850 "cplus.met"
    }
#line 2850 "cplus.met"
#line 2851 "cplus.met"
    {
#line 2851 "cplus.met"
        _retValue = retTree ;
#line 2851 "cplus.met"
        goto new_1_ret;
#line 2851 "cplus.met"
        
#line 2851 "cplus.met"
    }
#line 2851 "cplus.met"
#line 2851 "cplus.met"
#line 2851 "cplus.met"

#line 2852 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2852 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2852 "cplus.met"
return((PPTREE) 0);
#line 2852 "cplus.met"

#line 2852 "cplus.met"
new_1_exit :
#line 2852 "cplus.met"

#line 2852 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2852 "cplus.met"
    _funcLevel--;
#line 2852 "cplus.met"
    return((PPTREE) -1) ;
#line 2852 "cplus.met"

#line 2852 "cplus.met"
new_1_ret :
#line 2852 "cplus.met"
    
#line 2852 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2852 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2852 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2852 "cplus.met"
    return _retValue ;
#line 2852 "cplus.met"
}
#line 2852 "cplus.met"

#line 2852 "cplus.met"
#line 2854 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2854 "cplus.met"
{
#line 2854 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2854 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2854 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2854 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2854 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2854 "cplus.met"
#line 2854 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2854 "cplus.met"
#line 2856 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2856 "cplus.met"
#line 2857 "cplus.met"
#line 2858 "cplus.met"
        {
#line 2858 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2858 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2858 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2858 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2858 "cplus.met"
            }
#line 2858 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2858 "cplus.met"
            retTree=_ptRes0;
#line 2858 "cplus.met"
        }
#line 2858 "cplus.met"
#line 2859 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2859 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2859 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2859 "cplus.met"
        } else {
#line 2859 "cplus.met"
            tokenAhead = 0 ;
#line 2859 "cplus.met"
        }
#line 2859 "cplus.met"
#line 2860 "cplus.met"
        {
#line 2860 "cplus.met"
            _retValue = retTree ;
#line 2860 "cplus.met"
            goto new_2_ret;
#line 2860 "cplus.met"
            
#line 2860 "cplus.met"
        }
#line 2860 "cplus.met"
#line 2860 "cplus.met"
#line 2860 "cplus.met"
    } else {
#line 2860 "cplus.met"
#line 2863 "cplus.met"
        {
#line 2863 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2863 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2863 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2863 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2863 "cplus.met"
            }
#line 2863 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2863 "cplus.met"
            retTree=_ptRes0;
#line 2863 "cplus.met"
        }
#line 2863 "cplus.met"
    }
#line 2863 "cplus.met"
#line 2864 "cplus.met"
    {
#line 2864 "cplus.met"
        _retValue = retTree ;
#line 2864 "cplus.met"
        goto new_2_ret;
#line 2864 "cplus.met"
        
#line 2864 "cplus.met"
    }
#line 2864 "cplus.met"
#line 2864 "cplus.met"
#line 2864 "cplus.met"

#line 2865 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2865 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2865 "cplus.met"
return((PPTREE) 0);
#line 2865 "cplus.met"

#line 2865 "cplus.met"
new_2_exit :
#line 2865 "cplus.met"

#line 2865 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2865 "cplus.met"
    _funcLevel--;
#line 2865 "cplus.met"
    return((PPTREE) -1) ;
#line 2865 "cplus.met"

#line 2865 "cplus.met"
new_2_ret :
#line 2865 "cplus.met"
    
#line 2865 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2865 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2865 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2865 "cplus.met"
    return _retValue ;
#line 2865 "cplus.met"
}
#line 2865 "cplus.met"

#line 2865 "cplus.met"
#line 2404 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2404 "cplus.met"
{
#line 2404 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2404 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2404 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2404 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2404 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2404 "cplus.met"
#line 2404 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2404 "cplus.met"
#line 2406 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2406 "cplus.met"
#line 2407 "cplus.met"
        {
#line 2407 "cplus.met"
            PPTREE _ptTree0=0;
#line 2407 "cplus.met"
            {
#line 2407 "cplus.met"
                PPTREE _ptTree1=0;
#line 2407 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2407 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2407 "cplus.met"
                }
#line 2407 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2407 "cplus.met"
            }
#line 2407 "cplus.met"
            _retValue =_ptTree0;
#line 2407 "cplus.met"
            goto new_declarator_ret;
#line 2407 "cplus.met"
        }
#line 2407 "cplus.met"
    }
#line 2407 "cplus.met"
#line 2408 "cplus.met"
    retTree = (PPTREE) 0;
#line 2408 "cplus.met"
#line 2409 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2409 "cplus.met"
    switch( lexEl.Value) {
#line 2409 "cplus.met"
#line 2410 "cplus.met"
        case ETOI : 
#line 2410 "cplus.met"
            tokenAhead = 0 ;
#line 2410 "cplus.met"
            CommTerm();
#line 2410 "cplus.met"
#line 2410 "cplus.met"
            {
#line 2410 "cplus.met"
                PPTREE _ptTree0=0;
#line 2410 "cplus.met"
                {
#line 2410 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2410 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2410 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2410 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2410 "cplus.met"
                    }
#line 2410 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2410 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2410 "cplus.met"
                }
#line 2410 "cplus.met"
                _retValue =_ptTree0;
#line 2410 "cplus.met"
                goto new_declarator_ret;
#line 2410 "cplus.met"
            }
#line 2410 "cplus.met"
            break;
#line 2410 "cplus.met"
#line 2411 "cplus.met"
        case META : 
#line 2411 "cplus.met"
        case IDENT : 
#line 2411 "cplus.met"
#line 2412 "cplus.met"
#line 2413 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2413 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2413 "cplus.met"
            }
#line 2413 "cplus.met"
#line 2414 "cplus.met"
            {
#line 2414 "cplus.met"
                PPTREE _ptTree0=0;
#line 2414 "cplus.met"
                {
#line 2414 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2414 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2414 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2414 "cplus.met"
                    }
#line 2414 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2414 "cplus.met"
                }
#line 2414 "cplus.met"
                _retValue =_ptTree0;
#line 2414 "cplus.met"
                goto new_declarator_ret;
#line 2414 "cplus.met"
            }
#line 2414 "cplus.met"
#line 2414 "cplus.met"
            break;
#line 2414 "cplus.met"
#line 2423 "cplus.met"
        default : 
#line 2423 "cplus.met"
#line 2419 "cplus.met"
#line 2421 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2421 "cplus.met"
#line 2422 "cplus.met"
#line 2423 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2423 "cplus.met"
#line 2424 "cplus.met"
                    {
#line 2424 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2424 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2424 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2424 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2424 "cplus.met"
                        retTree=_ptRes0;
#line 2424 "cplus.met"
                    }
#line 2424 "cplus.met"
                } else {
#line 2424 "cplus.met"
#line 2426 "cplus.met"
                    {
#line 2426 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2426 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2426 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2426 "cplus.met"
                        retTree=_ptRes0;
#line 2426 "cplus.met"
                    }
#line 2426 "cplus.met"
                }
#line 2426 "cplus.met"
#line 2427 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2427 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2427 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2427 "cplus.met"
                } else {
#line 2427 "cplus.met"
                    tokenAhead = 0 ;
#line 2427 "cplus.met"
                }
#line 2427 "cplus.met"
#line 2427 "cplus.met"
            } 
#line 2427 "cplus.met"
#line 2429 "cplus.met"
            {
#line 2429 "cplus.met"
                _retValue = retTree ;
#line 2429 "cplus.met"
                goto new_declarator_ret;
#line 2429 "cplus.met"
                
#line 2429 "cplus.met"
            }
#line 2429 "cplus.met"
#line 2429 "cplus.met"
            break;
#line 2429 "cplus.met"
    }
#line 2429 "cplus.met"
#line 2429 "cplus.met"
#line 2431 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2431 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2431 "cplus.met"
return((PPTREE) 0);
#line 2431 "cplus.met"

#line 2431 "cplus.met"
new_declarator_exit :
#line 2431 "cplus.met"

#line 2431 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2431 "cplus.met"
    _funcLevel--;
#line 2431 "cplus.met"
    return((PPTREE) -1) ;
#line 2431 "cplus.met"

#line 2431 "cplus.met"
new_declarator_ret :
#line 2431 "cplus.met"
    
#line 2431 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2431 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2431 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2431 "cplus.met"
    return _retValue ;
#line 2431 "cplus.met"
}
#line 2431 "cplus.met"

#line 2431 "cplus.met"
#line 2554 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2554 "cplus.met"
{
#line 2554 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2554 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2554 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2554 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2554 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2554 "cplus.met"
#line 2554 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2554 "cplus.met"
#line 2556 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2556 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2556 "cplus.met"
    }
#line 2556 "cplus.met"
#line 2557 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 98, cplus)){
#line 2557 "cplus.met"
#line 2558 "cplus.met"
        {
#line 2558 "cplus.met"
            PPTREE _ptRes0=0;
#line 2558 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2558 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2558 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2558 "cplus.met"
            valTree=_ptRes0;
#line 2558 "cplus.met"
        }
#line 2558 "cplus.met"
    } else {
#line 2558 "cplus.met"
#line 2560 "cplus.met"
        valTree = retTree ;
#line 2560 "cplus.met"
    }
#line 2560 "cplus.met"
#line 2561 "cplus.met"
    {
#line 2561 "cplus.met"
        _retValue = valTree ;
#line 2561 "cplus.met"
        goto new_type_name_ret;
#line 2561 "cplus.met"
        
#line 2561 "cplus.met"
    }
#line 2561 "cplus.met"
#line 2561 "cplus.met"
#line 2561 "cplus.met"

#line 2562 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2562 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2562 "cplus.met"
return((PPTREE) 0);
#line 2562 "cplus.met"

#line 2562 "cplus.met"
new_type_name_exit :
#line 2562 "cplus.met"

#line 2562 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2562 "cplus.met"
    _funcLevel--;
#line 2562 "cplus.met"
    return((PPTREE) -1) ;
#line 2562 "cplus.met"

#line 2562 "cplus.met"
new_type_name_ret :
#line 2562 "cplus.met"
    
#line 2562 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2562 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2562 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2562 "cplus.met"
    return _retValue ;
#line 2562 "cplus.met"
}
#line 2562 "cplus.met"

#line 2562 "cplus.met"
#line 3274 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3274 "cplus.met"
{
#line 3274 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3274 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3274 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3274 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3274 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3274 "cplus.met"
#line 3275 "cplus.met"
    {
#line 3275 "cplus.met"
        PPTREE _ptTree0=0;
#line 3275 "cplus.met"
        {
#line 3275 "cplus.met"
            PPTREE _ptRes1=0;
#line 3275 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3275 "cplus.met"
            _ptTree0=_ptRes1;
#line 3275 "cplus.met"
        }
#line 3275 "cplus.met"
        _retValue =_ptTree0;
#line 3275 "cplus.met"
        goto none_statement_ret;
#line 3275 "cplus.met"
    }
#line 3275 "cplus.met"
#line 3275 "cplus.met"
#line 3275 "cplus.met"

#line 3276 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3276 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3276 "cplus.met"
return((PPTREE) 0);
#line 3276 "cplus.met"

#line 3276 "cplus.met"
none_statement_exit :
#line 3276 "cplus.met"

#line 3276 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3276 "cplus.met"
    _funcLevel--;
#line 3276 "cplus.met"
    return((PPTREE) -1) ;
#line 3276 "cplus.met"

#line 3276 "cplus.met"
none_statement_ret :
#line 3276 "cplus.met"
    
#line 3276 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3276 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3276 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3276 "cplus.met"
    return _retValue ;
#line 3276 "cplus.met"
}
#line 3276 "cplus.met"

#line 3276 "cplus.met"
#line 3004 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 3004 "cplus.met"
{
#line 3004 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3004 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3004 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3004 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 3004 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3004 "cplus.met"
#line 3004 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3004 "cplus.met"
#line 3006 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3006 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 3006 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 3006 "cplus.met"
    } else {
#line 3006 "cplus.met"
        tokenAhead = 0 ;
#line 3006 "cplus.met"
    }
#line 3006 "cplus.met"
#line 3007 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3007 "cplus.met"
    switch( lexEl.Value) {
#line 3007 "cplus.met"
#line 3008 "cplus.met"
        case NEW : 
#line 3008 "cplus.met"
            tokenAhead = 0 ;
#line 3008 "cplus.met"
            CommTerm();
#line 3008 "cplus.met"
#line 3008 "cplus.met"
            {
#line 3008 "cplus.met"
                PPTREE _ptTree0=0;
#line 3008 "cplus.met"
                {
#line 3008 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3008 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3008 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 3008 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3008 "cplus.met"
                }
#line 3008 "cplus.met"
                _retValue =_ptTree0;
#line 3008 "cplus.met"
                goto operator_function_name_ret;
#line 3008 "cplus.met"
            }
#line 3008 "cplus.met"
            break;
#line 3008 "cplus.met"
#line 3009 "cplus.met"
        case DELETE : 
#line 3009 "cplus.met"
            tokenAhead = 0 ;
#line 3009 "cplus.met"
            CommTerm();
#line 3009 "cplus.met"
#line 3009 "cplus.met"
            {
#line 3009 "cplus.met"
                PPTREE _ptTree0=0;
#line 3009 "cplus.met"
                {
#line 3009 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3009 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3009 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 3009 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3009 "cplus.met"
                }
#line 3009 "cplus.met"
                _retValue =_ptTree0;
#line 3009 "cplus.met"
                goto operator_function_name_ret;
#line 3009 "cplus.met"
            }
#line 3009 "cplus.met"
            break;
#line 3009 "cplus.met"
#line 3010 "cplus.met"
        case PLUS : 
#line 3010 "cplus.met"
            tokenAhead = 0 ;
#line 3010 "cplus.met"
            CommTerm();
#line 3010 "cplus.met"
#line 3010 "cplus.met"
            {
#line 3010 "cplus.met"
                PPTREE _ptTree0=0;
#line 3010 "cplus.met"
                {
#line 3010 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3010 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3010 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 3010 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3010 "cplus.met"
                }
#line 3010 "cplus.met"
                _retValue =_ptTree0;
#line 3010 "cplus.met"
                goto operator_function_name_ret;
#line 3010 "cplus.met"
            }
#line 3010 "cplus.met"
            break;
#line 3010 "cplus.met"
#line 3011 "cplus.met"
        case TIRE : 
#line 3011 "cplus.met"
            tokenAhead = 0 ;
#line 3011 "cplus.met"
            CommTerm();
#line 3011 "cplus.met"
#line 3011 "cplus.met"
            {
#line 3011 "cplus.met"
                PPTREE _ptTree0=0;
#line 3011 "cplus.met"
                {
#line 3011 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3011 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3011 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 3011 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3011 "cplus.met"
                }
#line 3011 "cplus.met"
                _retValue =_ptTree0;
#line 3011 "cplus.met"
                goto operator_function_name_ret;
#line 3011 "cplus.met"
            }
#line 3011 "cplus.met"
            break;
#line 3011 "cplus.met"
#line 3012 "cplus.met"
        case ETOI : 
#line 3012 "cplus.met"
            tokenAhead = 0 ;
#line 3012 "cplus.met"
            CommTerm();
#line 3012 "cplus.met"
#line 3012 "cplus.met"
            {
#line 3012 "cplus.met"
                PPTREE _ptTree0=0;
#line 3012 "cplus.met"
                {
#line 3012 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3012 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3012 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 3012 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3012 "cplus.met"
                }
#line 3012 "cplus.met"
                _retValue =_ptTree0;
#line 3012 "cplus.met"
                goto operator_function_name_ret;
#line 3012 "cplus.met"
            }
#line 3012 "cplus.met"
            break;
#line 3012 "cplus.met"
#line 3013 "cplus.met"
        case META : 
#line 3013 "cplus.met"
        case SLAS : 
#line 3013 "cplus.met"
            tokenAhead = 0 ;
#line 3013 "cplus.met"
            CommTerm();
#line 3013 "cplus.met"
#line 3013 "cplus.met"
            {
#line 3013 "cplus.met"
                PPTREE _ptTree0=0;
#line 3013 "cplus.met"
                {
#line 3013 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3013 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3013 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 3013 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3013 "cplus.met"
                }
#line 3013 "cplus.met"
                _retValue =_ptTree0;
#line 3013 "cplus.met"
                goto operator_function_name_ret;
#line 3013 "cplus.met"
            }
#line 3013 "cplus.met"
            break;
#line 3013 "cplus.met"
#line 3014 "cplus.met"
        case POURC : 
#line 3014 "cplus.met"
            tokenAhead = 0 ;
#line 3014 "cplus.met"
            CommTerm();
#line 3014 "cplus.met"
#line 3014 "cplus.met"
            {
#line 3014 "cplus.met"
                PPTREE _ptTree0=0;
#line 3014 "cplus.met"
                {
#line 3014 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3014 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3014 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 3014 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3014 "cplus.met"
                }
#line 3014 "cplus.met"
                _retValue =_ptTree0;
#line 3014 "cplus.met"
                goto operator_function_name_ret;
#line 3014 "cplus.met"
            }
#line 3014 "cplus.met"
            break;
#line 3014 "cplus.met"
#line 3015 "cplus.met"
        case CHAP : 
#line 3015 "cplus.met"
            tokenAhead = 0 ;
#line 3015 "cplus.met"
            CommTerm();
#line 3015 "cplus.met"
#line 3015 "cplus.met"
            {
#line 3015 "cplus.met"
                PPTREE _ptTree0=0;
#line 3015 "cplus.met"
                {
#line 3015 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3015 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3015 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 3015 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3015 "cplus.met"
                }
#line 3015 "cplus.met"
                _retValue =_ptTree0;
#line 3015 "cplus.met"
                goto operator_function_name_ret;
#line 3015 "cplus.met"
            }
#line 3015 "cplus.met"
            break;
#line 3015 "cplus.met"
#line 3016 "cplus.met"
        case ETCO : 
#line 3016 "cplus.met"
            tokenAhead = 0 ;
#line 3016 "cplus.met"
            CommTerm();
#line 3016 "cplus.met"
#line 3016 "cplus.met"
            {
#line 3016 "cplus.met"
                PPTREE _ptTree0=0;
#line 3016 "cplus.met"
                {
#line 3016 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3016 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3016 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 3016 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3016 "cplus.met"
                }
#line 3016 "cplus.met"
                _retValue =_ptTree0;
#line 3016 "cplus.met"
                goto operator_function_name_ret;
#line 3016 "cplus.met"
            }
#line 3016 "cplus.met"
            break;
#line 3016 "cplus.met"
#line 3017 "cplus.met"
        case VBAR : 
#line 3017 "cplus.met"
            tokenAhead = 0 ;
#line 3017 "cplus.met"
            CommTerm();
#line 3017 "cplus.met"
#line 3017 "cplus.met"
            {
#line 3017 "cplus.met"
                PPTREE _ptTree0=0;
#line 3017 "cplus.met"
                {
#line 3017 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3017 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3017 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 3017 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3017 "cplus.met"
                }
#line 3017 "cplus.met"
                _retValue =_ptTree0;
#line 3017 "cplus.met"
                goto operator_function_name_ret;
#line 3017 "cplus.met"
            }
#line 3017 "cplus.met"
            break;
#line 3017 "cplus.met"
#line 3018 "cplus.met"
        case TILD : 
#line 3018 "cplus.met"
            tokenAhead = 0 ;
#line 3018 "cplus.met"
            CommTerm();
#line 3018 "cplus.met"
#line 3018 "cplus.met"
            {
#line 3018 "cplus.met"
                PPTREE _ptTree0=0;
#line 3018 "cplus.met"
                {
#line 3018 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3018 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3018 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 3018 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3018 "cplus.met"
                }
#line 3018 "cplus.met"
                _retValue =_ptTree0;
#line 3018 "cplus.met"
                goto operator_function_name_ret;
#line 3018 "cplus.met"
            }
#line 3018 "cplus.met"
            break;
#line 3018 "cplus.met"
#line 3019 "cplus.met"
        case EXCL : 
#line 3019 "cplus.met"
            tokenAhead = 0 ;
#line 3019 "cplus.met"
            CommTerm();
#line 3019 "cplus.met"
#line 3019 "cplus.met"
            {
#line 3019 "cplus.met"
                PPTREE _ptTree0=0;
#line 3019 "cplus.met"
                {
#line 3019 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3019 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3019 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 3019 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3019 "cplus.met"
                }
#line 3019 "cplus.met"
                _retValue =_ptTree0;
#line 3019 "cplus.met"
                goto operator_function_name_ret;
#line 3019 "cplus.met"
            }
#line 3019 "cplus.met"
            break;
#line 3019 "cplus.met"
#line 3020 "cplus.met"
        case EGAL : 
#line 3020 "cplus.met"
            tokenAhead = 0 ;
#line 3020 "cplus.met"
            CommTerm();
#line 3020 "cplus.met"
#line 3020 "cplus.met"
            {
#line 3020 "cplus.met"
                PPTREE _ptTree0=0;
#line 3020 "cplus.met"
                {
#line 3020 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3020 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3020 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 3020 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3020 "cplus.met"
                }
#line 3020 "cplus.met"
                _retValue =_ptTree0;
#line 3020 "cplus.met"
                goto operator_function_name_ret;
#line 3020 "cplus.met"
            }
#line 3020 "cplus.met"
            break;
#line 3020 "cplus.met"
#line 3021 "cplus.met"
        case SUPE : 
#line 3021 "cplus.met"
            tokenAhead = 0 ;
#line 3021 "cplus.met"
            CommTerm();
#line 3021 "cplus.met"
#line 3021 "cplus.met"
            {
#line 3021 "cplus.met"
                PPTREE _ptTree0=0;
#line 3021 "cplus.met"
                {
#line 3021 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3021 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3021 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 3021 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3021 "cplus.met"
                }
#line 3021 "cplus.met"
                _retValue =_ptTree0;
#line 3021 "cplus.met"
                goto operator_function_name_ret;
#line 3021 "cplus.met"
            }
#line 3021 "cplus.met"
            break;
#line 3021 "cplus.met"
#line 3022 "cplus.met"
        case INFE : 
#line 3022 "cplus.met"
            tokenAhead = 0 ;
#line 3022 "cplus.met"
            CommTerm();
#line 3022 "cplus.met"
#line 3022 "cplus.met"
            {
#line 3022 "cplus.met"
                PPTREE _ptTree0=0;
#line 3022 "cplus.met"
                {
#line 3022 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3022 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3022 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 3022 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3022 "cplus.met"
                }
#line 3022 "cplus.met"
                _retValue =_ptTree0;
#line 3022 "cplus.met"
                goto operator_function_name_ret;
#line 3022 "cplus.met"
            }
#line 3022 "cplus.met"
            break;
#line 3022 "cplus.met"
#line 3023 "cplus.met"
        case PLUSEGAL : 
#line 3023 "cplus.met"
            tokenAhead = 0 ;
#line 3023 "cplus.met"
            CommTerm();
#line 3023 "cplus.met"
#line 3023 "cplus.met"
            {
#line 3023 "cplus.met"
                PPTREE _ptTree0=0;
#line 3023 "cplus.met"
                {
#line 3023 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3023 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3023 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 3023 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3023 "cplus.met"
                }
#line 3023 "cplus.met"
                _retValue =_ptTree0;
#line 3023 "cplus.met"
                goto operator_function_name_ret;
#line 3023 "cplus.met"
            }
#line 3023 "cplus.met"
            break;
#line 3023 "cplus.met"
#line 3024 "cplus.met"
        case TIREEGAL : 
#line 3024 "cplus.met"
            tokenAhead = 0 ;
#line 3024 "cplus.met"
            CommTerm();
#line 3024 "cplus.met"
#line 3024 "cplus.met"
            {
#line 3024 "cplus.met"
                PPTREE _ptTree0=0;
#line 3024 "cplus.met"
                {
#line 3024 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3024 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3024 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 3024 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3024 "cplus.met"
                }
#line 3024 "cplus.met"
                _retValue =_ptTree0;
#line 3024 "cplus.met"
                goto operator_function_name_ret;
#line 3024 "cplus.met"
            }
#line 3024 "cplus.met"
            break;
#line 3024 "cplus.met"
#line 3025 "cplus.met"
        case ETOIEGAL : 
#line 3025 "cplus.met"
            tokenAhead = 0 ;
#line 3025 "cplus.met"
            CommTerm();
#line 3025 "cplus.met"
#line 3025 "cplus.met"
            {
#line 3025 "cplus.met"
                PPTREE _ptTree0=0;
#line 3025 "cplus.met"
                {
#line 3025 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3025 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3025 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 3025 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3025 "cplus.met"
                }
#line 3025 "cplus.met"
                _retValue =_ptTree0;
#line 3025 "cplus.met"
                goto operator_function_name_ret;
#line 3025 "cplus.met"
            }
#line 3025 "cplus.met"
            break;
#line 3025 "cplus.met"
#line 3026 "cplus.met"
        case SLASEGAL : 
#line 3026 "cplus.met"
            tokenAhead = 0 ;
#line 3026 "cplus.met"
            CommTerm();
#line 3026 "cplus.met"
#line 3026 "cplus.met"
            {
#line 3026 "cplus.met"
                PPTREE _ptTree0=0;
#line 3026 "cplus.met"
                {
#line 3026 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3026 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3026 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 3026 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3026 "cplus.met"
                }
#line 3026 "cplus.met"
                _retValue =_ptTree0;
#line 3026 "cplus.met"
                goto operator_function_name_ret;
#line 3026 "cplus.met"
            }
#line 3026 "cplus.met"
            break;
#line 3026 "cplus.met"
#line 3027 "cplus.met"
        case POURCEGAL : 
#line 3027 "cplus.met"
            tokenAhead = 0 ;
#line 3027 "cplus.met"
            CommTerm();
#line 3027 "cplus.met"
#line 3027 "cplus.met"
            {
#line 3027 "cplus.met"
                PPTREE _ptTree0=0;
#line 3027 "cplus.met"
                {
#line 3027 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3027 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3027 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 3027 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3027 "cplus.met"
                }
#line 3027 "cplus.met"
                _retValue =_ptTree0;
#line 3027 "cplus.met"
                goto operator_function_name_ret;
#line 3027 "cplus.met"
            }
#line 3027 "cplus.met"
            break;
#line 3027 "cplus.met"
#line 3028 "cplus.met"
        case CHAPEGAL : 
#line 3028 "cplus.met"
            tokenAhead = 0 ;
#line 3028 "cplus.met"
            CommTerm();
#line 3028 "cplus.met"
#line 3028 "cplus.met"
            {
#line 3028 "cplus.met"
                PPTREE _ptTree0=0;
#line 3028 "cplus.met"
                {
#line 3028 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3028 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3028 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
#line 3028 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3028 "cplus.met"
                }
#line 3028 "cplus.met"
                _retValue =_ptTree0;
#line 3028 "cplus.met"
                goto operator_function_name_ret;
#line 3028 "cplus.met"
            }
#line 3028 "cplus.met"
            break;
#line 3028 "cplus.met"
#line 3029 "cplus.met"
        case ETCOEGAL : 
#line 3029 "cplus.met"
            tokenAhead = 0 ;
#line 3029 "cplus.met"
            CommTerm();
#line 3029 "cplus.met"
#line 3029 "cplus.met"
            {
#line 3029 "cplus.met"
                PPTREE _ptTree0=0;
#line 3029 "cplus.met"
                {
#line 3029 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3029 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3029 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
#line 3029 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3029 "cplus.met"
                }
#line 3029 "cplus.met"
                _retValue =_ptTree0;
#line 3029 "cplus.met"
                goto operator_function_name_ret;
#line 3029 "cplus.met"
            }
#line 3029 "cplus.met"
            break;
#line 3029 "cplus.met"
#line 3030 "cplus.met"
        case VBAREGAL : 
#line 3030 "cplus.met"
            tokenAhead = 0 ;
#line 3030 "cplus.met"
            CommTerm();
#line 3030 "cplus.met"
#line 3030 "cplus.met"
            {
#line 3030 "cplus.met"
                PPTREE _ptTree0=0;
#line 3030 "cplus.met"
                {
#line 3030 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3030 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3030 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
#line 3030 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3030 "cplus.met"
                }
#line 3030 "cplus.met"
                _retValue =_ptTree0;
#line 3030 "cplus.met"
                goto operator_function_name_ret;
#line 3030 "cplus.met"
            }
#line 3030 "cplus.met"
            break;
#line 3030 "cplus.met"
#line 3031 "cplus.met"
        case EXCLEGAL : 
#line 3031 "cplus.met"
            tokenAhead = 0 ;
#line 3031 "cplus.met"
            CommTerm();
#line 3031 "cplus.met"
#line 3031 "cplus.met"
            {
#line 3031 "cplus.met"
                PPTREE _ptTree0=0;
#line 3031 "cplus.met"
                {
#line 3031 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3031 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3031 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
#line 3031 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3031 "cplus.met"
                }
#line 3031 "cplus.met"
                _retValue =_ptTree0;
#line 3031 "cplus.met"
                goto operator_function_name_ret;
#line 3031 "cplus.met"
            }
#line 3031 "cplus.met"
            break;
#line 3031 "cplus.met"
#line 3032 "cplus.met"
        case EGALEGAL : 
#line 3032 "cplus.met"
            tokenAhead = 0 ;
#line 3032 "cplus.met"
            CommTerm();
#line 3032 "cplus.met"
#line 3032 "cplus.met"
            {
#line 3032 "cplus.met"
                PPTREE _ptTree0=0;
#line 3032 "cplus.met"
                {
#line 3032 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3032 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3032 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
#line 3032 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3032 "cplus.met"
                }
#line 3032 "cplus.met"
                _retValue =_ptTree0;
#line 3032 "cplus.met"
                goto operator_function_name_ret;
#line 3032 "cplus.met"
            }
#line 3032 "cplus.met"
            break;
#line 3032 "cplus.met"
#line 3033 "cplus.met"
        case INFEEGAL : 
#line 3033 "cplus.met"
            tokenAhead = 0 ;
#line 3033 "cplus.met"
            CommTerm();
#line 3033 "cplus.met"
#line 3033 "cplus.met"
            {
#line 3033 "cplus.met"
                PPTREE _ptTree0=0;
#line 3033 "cplus.met"
                {
#line 3033 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3033 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3033 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
#line 3033 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3033 "cplus.met"
                }
#line 3033 "cplus.met"
                _retValue =_ptTree0;
#line 3033 "cplus.met"
                goto operator_function_name_ret;
#line 3033 "cplus.met"
            }
#line 3033 "cplus.met"
            break;
#line 3033 "cplus.met"
#line 3034 "cplus.met"
        case SUPEEGAL : 
#line 3034 "cplus.met"
            tokenAhead = 0 ;
#line 3034 "cplus.met"
            CommTerm();
#line 3034 "cplus.met"
#line 3034 "cplus.met"
            {
#line 3034 "cplus.met"
                PPTREE _ptTree0=0;
#line 3034 "cplus.met"
                {
#line 3034 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3034 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3034 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
#line 3034 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3034 "cplus.met"
                }
#line 3034 "cplus.met"
                _retValue =_ptTree0;
#line 3034 "cplus.met"
                goto operator_function_name_ret;
#line 3034 "cplus.met"
            }
#line 3034 "cplus.met"
            break;
#line 3034 "cplus.met"
#line 3035 "cplus.met"
        case INFEINFE : 
#line 3035 "cplus.met"
            tokenAhead = 0 ;
#line 3035 "cplus.met"
            CommTerm();
#line 3035 "cplus.met"
#line 3035 "cplus.met"
            {
#line 3035 "cplus.met"
                PPTREE _ptTree0=0;
#line 3035 "cplus.met"
                {
#line 3035 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3035 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3035 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
#line 3035 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3035 "cplus.met"
                }
#line 3035 "cplus.met"
                _retValue =_ptTree0;
#line 3035 "cplus.met"
                goto operator_function_name_ret;
#line 3035 "cplus.met"
            }
#line 3035 "cplus.met"
            break;
#line 3035 "cplus.met"
#line 3036 "cplus.met"
        case SUPESUPE : 
#line 3036 "cplus.met"
            tokenAhead = 0 ;
#line 3036 "cplus.met"
            CommTerm();
#line 3036 "cplus.met"
#line 3036 "cplus.met"
            {
#line 3036 "cplus.met"
                PPTREE _ptTree0=0;
#line 3036 "cplus.met"
                {
#line 3036 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3036 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3036 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
#line 3036 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3036 "cplus.met"
                }
#line 3036 "cplus.met"
                _retValue =_ptTree0;
#line 3036 "cplus.met"
                goto operator_function_name_ret;
#line 3036 "cplus.met"
            }
#line 3036 "cplus.met"
            break;
#line 3036 "cplus.met"
#line 3037 "cplus.met"
        case INFEINFEEGAL : 
#line 3037 "cplus.met"
            tokenAhead = 0 ;
#line 3037 "cplus.met"
            CommTerm();
#line 3037 "cplus.met"
#line 3037 "cplus.met"
            {
#line 3037 "cplus.met"
                PPTREE _ptTree0=0;
#line 3037 "cplus.met"
                {
#line 3037 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3037 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3037 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
#line 3037 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3037 "cplus.met"
                }
#line 3037 "cplus.met"
                _retValue =_ptTree0;
#line 3037 "cplus.met"
                goto operator_function_name_ret;
#line 3037 "cplus.met"
            }
#line 3037 "cplus.met"
            break;
#line 3037 "cplus.met"
#line 3038 "cplus.met"
        case SUPESUPEEGAL : 
#line 3038 "cplus.met"
            tokenAhead = 0 ;
#line 3038 "cplus.met"
            CommTerm();
#line 3038 "cplus.met"
#line 3038 "cplus.met"
            {
#line 3038 "cplus.met"
                PPTREE _ptTree0=0;
#line 3038 "cplus.met"
                {
#line 3038 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3038 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3038 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
#line 3038 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3038 "cplus.met"
                }
#line 3038 "cplus.met"
                _retValue =_ptTree0;
#line 3038 "cplus.met"
                goto operator_function_name_ret;
#line 3038 "cplus.met"
            }
#line 3038 "cplus.met"
            break;
#line 3038 "cplus.met"
#line 3039 "cplus.met"
        case ETCOETCO : 
#line 3039 "cplus.met"
            tokenAhead = 0 ;
#line 3039 "cplus.met"
            CommTerm();
#line 3039 "cplus.met"
#line 3039 "cplus.met"
            {
#line 3039 "cplus.met"
                PPTREE _ptTree0=0;
#line 3039 "cplus.met"
                {
#line 3039 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3039 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3039 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
#line 3039 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3039 "cplus.met"
                }
#line 3039 "cplus.met"
                _retValue =_ptTree0;
#line 3039 "cplus.met"
                goto operator_function_name_ret;
#line 3039 "cplus.met"
            }
#line 3039 "cplus.met"
            break;
#line 3039 "cplus.met"
#line 3040 "cplus.met"
        case VBARVBAR : 
#line 3040 "cplus.met"
            tokenAhead = 0 ;
#line 3040 "cplus.met"
            CommTerm();
#line 3040 "cplus.met"
#line 3040 "cplus.met"
            {
#line 3040 "cplus.met"
                PPTREE _ptTree0=0;
#line 3040 "cplus.met"
                {
#line 3040 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3040 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3040 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
#line 3040 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3040 "cplus.met"
                }
#line 3040 "cplus.met"
                _retValue =_ptTree0;
#line 3040 "cplus.met"
                goto operator_function_name_ret;
#line 3040 "cplus.met"
            }
#line 3040 "cplus.met"
            break;
#line 3040 "cplus.met"
#line 3041 "cplus.met"
        case PLUSPLUS : 
#line 3041 "cplus.met"
            tokenAhead = 0 ;
#line 3041 "cplus.met"
            CommTerm();
#line 3041 "cplus.met"
#line 3041 "cplus.met"
            {
#line 3041 "cplus.met"
                PPTREE _ptTree0=0;
#line 3041 "cplus.met"
                {
#line 3041 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3041 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3041 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
#line 3041 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3041 "cplus.met"
                }
#line 3041 "cplus.met"
                _retValue =_ptTree0;
#line 3041 "cplus.met"
                goto operator_function_name_ret;
#line 3041 "cplus.met"
            }
#line 3041 "cplus.met"
            break;
#line 3041 "cplus.met"
#line 3042 "cplus.met"
        case TIRETIRE : 
#line 3042 "cplus.met"
            tokenAhead = 0 ;
#line 3042 "cplus.met"
            CommTerm();
#line 3042 "cplus.met"
#line 3042 "cplus.met"
            {
#line 3042 "cplus.met"
                PPTREE _ptTree0=0;
#line 3042 "cplus.met"
                {
#line 3042 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3042 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3042 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
#line 3042 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3042 "cplus.met"
                }
#line 3042 "cplus.met"
                _retValue =_ptTree0;
#line 3042 "cplus.met"
                goto operator_function_name_ret;
#line 3042 "cplus.met"
            }
#line 3042 "cplus.met"
            break;
#line 3042 "cplus.met"
#line 3043 "cplus.met"
        case VIRG : 
#line 3043 "cplus.met"
            tokenAhead = 0 ;
#line 3043 "cplus.met"
            CommTerm();
#line 3043 "cplus.met"
#line 3043 "cplus.met"
            {
#line 3043 "cplus.met"
                PPTREE _ptTree0=0;
#line 3043 "cplus.met"
                {
#line 3043 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3043 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3043 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (","));
#line 3043 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3043 "cplus.met"
                }
#line 3043 "cplus.met"
                _retValue =_ptTree0;
#line 3043 "cplus.met"
                goto operator_function_name_ret;
#line 3043 "cplus.met"
            }
#line 3043 "cplus.met"
            break;
#line 3043 "cplus.met"
#line 3044 "cplus.met"
        case TIRESUPE : 
#line 3044 "cplus.met"
            tokenAhead = 0 ;
#line 3044 "cplus.met"
            CommTerm();
#line 3044 "cplus.met"
#line 3044 "cplus.met"
            {
#line 3044 "cplus.met"
                PPTREE _ptTree0=0;
#line 3044 "cplus.met"
                {
#line 3044 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3044 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3044 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
#line 3044 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3044 "cplus.met"
                }
#line 3044 "cplus.met"
                _retValue =_ptTree0;
#line 3044 "cplus.met"
                goto operator_function_name_ret;
#line 3044 "cplus.met"
            }
#line 3044 "cplus.met"
            break;
#line 3044 "cplus.met"
#line 3045 "cplus.met"
        case TIRESUPEETOI : 
#line 3045 "cplus.met"
            tokenAhead = 0 ;
#line 3045 "cplus.met"
            CommTerm();
#line 3045 "cplus.met"
#line 3045 "cplus.met"
            {
#line 3045 "cplus.met"
                PPTREE _ptTree0=0;
#line 3045 "cplus.met"
                {
#line 3045 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3045 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3045 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
#line 3045 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3045 "cplus.met"
                }
#line 3045 "cplus.met"
                _retValue =_ptTree0;
#line 3045 "cplus.met"
                goto operator_function_name_ret;
#line 3045 "cplus.met"
            }
#line 3045 "cplus.met"
            break;
#line 3045 "cplus.met"
#line 3048 "cplus.met"
        case POUV : 
#line 3048 "cplus.met"
            tokenAhead = 0 ;
#line 3048 "cplus.met"
            CommTerm();
#line 3048 "cplus.met"
#line 3047 "cplus.met"
#line 3048 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3048 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3048 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3048 "cplus.met"
            } else {
#line 3048 "cplus.met"
                tokenAhead = 0 ;
#line 3048 "cplus.met"
            }
#line 3048 "cplus.met"
#line 3049 "cplus.met"
            {
#line 3049 "cplus.met"
                PPTREE _ptTree0=0;
#line 3049 "cplus.met"
                {
#line 3049 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3049 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3049 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
#line 3049 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3049 "cplus.met"
                }
#line 3049 "cplus.met"
                _retValue =_ptTree0;
#line 3049 "cplus.met"
                goto operator_function_name_ret;
#line 3049 "cplus.met"
            }
#line 3049 "cplus.met"
#line 3049 "cplus.met"
            break;
#line 3049 "cplus.met"
#line 3053 "cplus.met"
        case COUV : 
#line 3053 "cplus.met"
            tokenAhead = 0 ;
#line 3053 "cplus.met"
            CommTerm();
#line 3053 "cplus.met"
#line 3052 "cplus.met"
#line 3053 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3053 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3053 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3053 "cplus.met"
            } else {
#line 3053 "cplus.met"
                tokenAhead = 0 ;
#line 3053 "cplus.met"
            }
#line 3053 "cplus.met"
#line 3054 "cplus.met"
            {
#line 3054 "cplus.met"
                PPTREE _ptTree0=0;
#line 3054 "cplus.met"
                {
#line 3054 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3054 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3054 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3054 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3054 "cplus.met"
                }
#line 3054 "cplus.met"
                _retValue =_ptTree0;
#line 3054 "cplus.met"
                goto operator_function_name_ret;
#line 3054 "cplus.met"
            }
#line 3054 "cplus.met"
#line 3054 "cplus.met"
            break;
#line 3054 "cplus.met"
#line 3054 "cplus.met"
        default : 
#line 3054 "cplus.met"
#line 3054 "cplus.met"
            break;
#line 3054 "cplus.met"
    }
#line 3054 "cplus.met"
#line 3058 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 3058 "cplus.met"
#line 3059 "cplus.met"
        {
#line 3059 "cplus.met"
            PPTREE _ptRes0=0;
#line 3059 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3059 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3059 "cplus.met"
            retTree=_ptRes0;
#line 3059 "cplus.met"
        }
#line 3059 "cplus.met"
    } else {
#line 3059 "cplus.met"
#line 3061 "cplus.met"
        {
#line 3061 "cplus.met"
            PPTREE _ptRes0=0;
#line 3061 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3061 "cplus.met"
            retTree=_ptRes0;
#line 3061 "cplus.met"
        }
#line 3061 "cplus.met"
    }
#line 3061 "cplus.met"
#line 3062 "cplus.met"
    {
#line 3062 "cplus.met"
        PPTREE _ptTree0=0;
#line 3062 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 3062 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3062 "cplus.met"
        }
#line 3062 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3062 "cplus.met"
    }
#line 3062 "cplus.met"
#line 3063 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 112, cplus)){
#line 3063 "cplus.met"
#line 3064 "cplus.met"
#line 3065 "cplus.met"
        list =AddList(list ,valTree );
#line 3065 "cplus.met"
#line 3066 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3066 "cplus.met"
#line 3066 "cplus.met"
#line 3066 "cplus.met"
    }
#line 3066 "cplus.met"
#line 3068 "cplus.met"
    {
#line 3068 "cplus.met"
        PPTREE _ptTree0=0;
#line 3068 "cplus.met"
        {
#line 3068 "cplus.met"
            PPTREE _ptRes1=0;
#line 3068 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3068 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3068 "cplus.met"
            _ptTree0=_ptRes1;
#line 3068 "cplus.met"
        }
#line 3068 "cplus.met"
        _retValue =_ptTree0;
#line 3068 "cplus.met"
        goto operator_function_name_ret;
#line 3068 "cplus.met"
    }
#line 3068 "cplus.met"
#line 3068 "cplus.met"
#line 3068 "cplus.met"

#line 3069 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3069 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3069 "cplus.met"
return((PPTREE) 0);
#line 3069 "cplus.met"

#line 3069 "cplus.met"
operator_function_name_exit :
#line 3069 "cplus.met"

#line 3069 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3069 "cplus.met"
    _funcLevel--;
#line 3069 "cplus.met"
    return((PPTREE) -1) ;
#line 3069 "cplus.met"

#line 3069 "cplus.met"
operator_function_name_ret :
#line 3069 "cplus.met"
    
#line 3069 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3069 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3069 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3069 "cplus.met"
    return _retValue ;
#line 3069 "cplus.met"
}
#line 3069 "cplus.met"

#line 3069 "cplus.met"
