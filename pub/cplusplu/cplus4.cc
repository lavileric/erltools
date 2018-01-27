/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1934 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 1934 "cplus.met"
{
#line 1934 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1934 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1934 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1934 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 1934 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1934 "cplus.met"
#line 1934 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1934 "cplus.met"
#line 1936 "cplus.met"
#line 1937 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1937 "cplus.met"
#line 1937 "cplus.met"
        {
#line 1937 "cplus.met"
            PPTREE _ptRes0=0;
#line 1937 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1937 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1937 "cplus.met"
            retTree=_ptRes0;
#line 1937 "cplus.met"
        }
#line 1937 "cplus.met"
    } else 
#line 1937 "cplus.met"
#line 1938 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1938 "cplus.met"
#line 1938 "cplus.met"
        {
#line 1938 "cplus.met"
            PPTREE _ptRes0=0;
#line 1938 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1938 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1938 "cplus.met"
            retTree=_ptRes0;
#line 1938 "cplus.met"
        }
#line 1938 "cplus.met"
    } else 
#line 1938 "cplus.met"
#line 1940 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 1940 "cplus.met"
#line 1940 "cplus.met"
        {
#line 1940 "cplus.met"
            PPTREE _ptRes0=0;
#line 1940 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1940 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1940 "cplus.met"
            retTree=_ptRes0;
#line 1940 "cplus.met"
        }
#line 1940 "cplus.met"
    } else 
#line 1940 "cplus.met"
#line 1942 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 1942 "cplus.met"
#line 1942 "cplus.met"
        {
#line 1942 "cplus.met"
            PPTREE _ptRes0=0;
#line 1942 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1942 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1942 "cplus.met"
            retTree=_ptRes0;
#line 1942 "cplus.met"
        }
#line 1942 "cplus.met"
    } else 
#line 1942 "cplus.met"
#line 1944 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 1944 "cplus.met"
#line 1944 "cplus.met"
        {
#line 1944 "cplus.met"
            PPTREE _ptRes0=0;
#line 1944 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1944 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1944 "cplus.met"
            retTree=_ptRes0;
#line 1944 "cplus.met"
        }
#line 1944 "cplus.met"
    } else 
#line 1944 "cplus.met"
#line 1945 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 1945 "cplus.met"
#line 1945 "cplus.met"
        {
#line 1945 "cplus.met"
            PPTREE _ptRes0=0;
#line 1945 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1945 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1945 "cplus.met"
            retTree=_ptRes0;
#line 1945 "cplus.met"
        }
#line 1945 "cplus.met"
    } else 
#line 1945 "cplus.met"
#line 1947 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 1947 "cplus.met"
#line 1947 "cplus.met"
        {
#line 1947 "cplus.met"
            PPTREE _ptRes0=0;
#line 1947 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1947 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1947 "cplus.met"
            retTree=_ptRes0;
#line 1947 "cplus.met"
        }
#line 1947 "cplus.met"
    } else 
#line 1947 "cplus.met"
#line 1948 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 1948 "cplus.met"
#line 1948 "cplus.met"
        {
#line 1948 "cplus.met"
            PPTREE _ptRes0=0;
#line 1948 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1948 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1948 "cplus.met"
            retTree=_ptRes0;
#line 1948 "cplus.met"
        }
#line 1948 "cplus.met"
    } else 
#line 1948 "cplus.met"
#line 1949 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 1949 "cplus.met"
#line 1949 "cplus.met"
        {
#line 1949 "cplus.met"
            PPTREE _ptRes0=0;
#line 1949 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1949 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1949 "cplus.met"
            retTree=_ptRes0;
#line 1949 "cplus.met"
        }
#line 1949 "cplus.met"
    } else 
#line 1949 "cplus.met"
#line 1950 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 1950 "cplus.met"
#line 1950 "cplus.met"
        {
#line 1950 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1950 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 1950 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1950 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 1950 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 1950 "cplus.met"
            } else {
#line 1950 "cplus.met"
                tokenAhead = 0 ;
#line 1950 "cplus.met"
            }
#line 1950 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1950 "cplus.met"
            retTree=_ptRes0;
#line 1950 "cplus.met"
        }
#line 1950 "cplus.met"
    } else 
#line 1950 "cplus.met"
#line 1951 "cplus.met"
    if (1) {
#line 1951 "cplus.met"
#line 1951 "cplus.met"
        
#line 1951 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 1951 "cplus.met"
        goto macro_extended_exit;
#line 1951 "cplus.met"
    } else 
#line 1951 "cplus.met"
     ;
#line 1951 "cplus.met"
#line 1953 "cplus.met"
    {
#line 1953 "cplus.met"
        PPTREE _ptRes0=0;
#line 1953 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1953 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1953 "cplus.met"
        retTree=_ptRes0;
#line 1953 "cplus.met"
    }
#line 1953 "cplus.met"
#line 1954 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1954 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1954 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 1954 "cplus.met"
    } else {
#line 1954 "cplus.met"
        tokenAhead = 0 ;
#line 1954 "cplus.met"
    }
#line 1954 "cplus.met"
#line 1955 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 60, cplus)){
#line 1955 "cplus.met"
#line 1956 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1956 "cplus.met"
#line 1956 "cplus.met"
    }
#line 1956 "cplus.met"
#line 1957 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1957 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1957 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 1957 "cplus.met"
    } else {
#line 1957 "cplus.met"
        tokenAhead = 0 ;
#line 1957 "cplus.met"
    }
#line 1957 "cplus.met"
#line 1958 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1958 "cplus.met"
#line 1958 "cplus.met"
    }
#line 1958 "cplus.met"
#line 1960 "cplus.met"
    {
#line 1960 "cplus.met"
        _retValue = retTree ;
#line 1960 "cplus.met"
        goto macro_extended_ret;
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
macro_extended_exit :
#line 1961 "cplus.met"

#line 1961 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 1961 "cplus.met"
    _funcLevel--;
#line 1961 "cplus.met"
    return((PPTREE) -1) ;
#line 1961 "cplus.met"

#line 1961 "cplus.met"
macro_extended_ret :
#line 1961 "cplus.met"
    
#line 1961 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
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
#line 751 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 751 "cplus.met"
{
#line 751 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 751 "cplus.met"
    int _value,_nbPre = 0 ;
#line 751 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 751 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 751 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 751 "cplus.met"
#line 752 "cplus.met"
    {
#line 752 "cplus.met"
        PPTREE _ptTree0=0;
#line 752 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 752 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 752 "cplus.met"
        }
#line 752 "cplus.met"
        _retValue =_ptTree0;
#line 752 "cplus.met"
        goto main_entry_ret;
#line 752 "cplus.met"
    }
#line 752 "cplus.met"
#line 752 "cplus.met"
#line 752 "cplus.met"

#line 753 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 753 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 753 "cplus.met"
return((PPTREE) 0);
#line 753 "cplus.met"

#line 753 "cplus.met"
main_entry_exit :
#line 753 "cplus.met"

#line 753 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 753 "cplus.met"
    _funcLevel--;
#line 753 "cplus.met"
    return((PPTREE) -1) ;
#line 753 "cplus.met"

#line 753 "cplus.met"
main_entry_ret :
#line 753 "cplus.met"
    
#line 753 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 753 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 753 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 753 "cplus.met"
    return _retValue ;
#line 753 "cplus.met"
}
#line 753 "cplus.met"

#line 753 "cplus.met"
#line 2165 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2165 "cplus.met"
{
#line 2165 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2165 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2165 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2165 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2165 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2165 "cplus.met"
#line 2165 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2165 "cplus.met"
#line 2167 "cplus.met"
    {
#line 2167 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2167 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2167 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 2167 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2167 "cplus.met"
        }
#line 2167 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2167 "cplus.met"
        retTree=_ptRes0;
#line 2167 "cplus.met"
    }
#line 2167 "cplus.met"
#line 2168 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2168 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2168 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2168 "cplus.met"
    } else {
#line 2168 "cplus.met"
        tokenAhead = 0 ;
#line 2168 "cplus.met"
    }
#line 2168 "cplus.met"
#line 2169 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2169 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2169 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2169 "cplus.met"
    } else {
#line 2169 "cplus.met"
        tokenAhead = 0 ;
#line 2169 "cplus.met"
    }
#line 2169 "cplus.met"
#line 2170 "cplus.met"
    {
#line 2170 "cplus.met"
        _retValue = retTree ;
#line 2170 "cplus.met"
        goto member_declarator_ret;
#line 2170 "cplus.met"
        
#line 2170 "cplus.met"
    }
#line 2170 "cplus.met"
#line 2170 "cplus.met"
#line 2170 "cplus.met"

#line 2171 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2171 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2171 "cplus.met"
return((PPTREE) 0);
#line 2171 "cplus.met"

#line 2171 "cplus.met"
member_declarator_exit :
#line 2171 "cplus.met"

#line 2171 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2171 "cplus.met"
    _funcLevel--;
#line 2171 "cplus.met"
    return((PPTREE) -1) ;
#line 2171 "cplus.met"

#line 2171 "cplus.met"
member_declarator_ret :
#line 2171 "cplus.met"
    
#line 2171 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2171 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2171 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2171 "cplus.met"
    return _retValue ;
#line 2171 "cplus.met"
}
#line 2171 "cplus.met"

#line 2171 "cplus.met"
#line 1963 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 1963 "cplus.met"
{
#line 1963 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1963 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1963 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1963 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 1963 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1963 "cplus.met"
#line 1963 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1963 "cplus.met"
#line 1963 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1963 "cplus.met"
#line 1965 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1965 "cplus.met"
    switch( lexEl.Value) {
#line 1965 "cplus.met"
#line 1966 "cplus.met"
        case META : 
#line 1966 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1966 "cplus.met"
#line 1966 "cplus.met"
            break;
#line 1966 "cplus.met"
        default :
#line 1966 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 1966 "cplus.met"
            break;
#line 1966 "cplus.met"
    }
#line 1966 "cplus.met"
#line 1968 "cplus.met"
    {
#line 1968 "cplus.met"
        PPTREE _ptRes0=0;
#line 1968 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 1968 "cplus.met"
        retTree=_ptRes0;
#line 1968 "cplus.met"
    }
#line 1968 "cplus.met"
#line 1968 "cplus.met"
    _addlist1 = list ;
#line 1968 "cplus.met"
#line 1969 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 1969 "cplus.met"
#line 1970 "cplus.met"
#line 1970 "cplus.met"
        {
#line 1970 "cplus.met"
            PPTREE _ptTree0=0;
#line 1970 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 90, cplus))== (PPTREE) -1 ) {
#line 1970 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 1970 "cplus.met"
            }
#line 1970 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1970 "cplus.met"
        }
#line 1970 "cplus.met"
#line 1970 "cplus.met"
        if (list){
#line 1970 "cplus.met"
#line 1970 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1970 "cplus.met"
        } else {
#line 1970 "cplus.met"
#line 1970 "cplus.met"
            list = _addlist1 ;
#line 1970 "cplus.met"
        }
#line 1970 "cplus.met"
    } 
#line 1970 "cplus.met"
#line 1971 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 89, cplus))== (PPTREE) -1 ) {
#line 1971 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 1971 "cplus.met"
    }
#line 1971 "cplus.met"
#line 1972 "cplus.met"
    {
#line 1972 "cplus.met"
        PPTREE _ptTree0=0;
#line 1972 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 1972 "cplus.met"
        _retValue =_ptTree0;
#line 1972 "cplus.met"
        goto message_map_ret;
#line 1972 "cplus.met"
    }
#line 1972 "cplus.met"
#line 1972 "cplus.met"
#line 1972 "cplus.met"

#line 1973 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1973 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1973 "cplus.met"
return((PPTREE) 0);
#line 1973 "cplus.met"

#line 1973 "cplus.met"
message_map_exit :
#line 1973 "cplus.met"

#line 1973 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 1973 "cplus.met"
    _funcLevel--;
#line 1973 "cplus.met"
    return((PPTREE) -1) ;
#line 1973 "cplus.met"

#line 1973 "cplus.met"
message_map_ret :
#line 1973 "cplus.met"
    
#line 1973 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 1973 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1973 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1973 "cplus.met"
    return _retValue ;
#line 1973 "cplus.met"
}
#line 1973 "cplus.met"

#line 1973 "cplus.met"
#line 2706 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2706 "cplus.met"
{
#line 2706 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2706 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2706 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2706 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2706 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2706 "cplus.met"
#line 2706 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2706 "cplus.met"
#line 2708 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2708 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2708 "cplus.met"
    }
#line 2708 "cplus.met"
#line 2709 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2709 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2709 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2709 "cplus.met"
#line 2710 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2710 "cplus.met"
        switch( lexEl.Value) {
#line 2710 "cplus.met"
#line 2711 "cplus.met"
            case ETOI : 
#line 2711 "cplus.met"
                tokenAhead = 0 ;
#line 2711 "cplus.met"
                CommTerm();
#line 2711 "cplus.met"
#line 2711 "cplus.met"
                {
#line 2711 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2711 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2711 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2711 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2711 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2711 "cplus.met"
                    }
#line 2711 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2711 "cplus.met"
                    expTree=_ptRes0;
#line 2711 "cplus.met"
                }
#line 2711 "cplus.met"
                break;
#line 2711 "cplus.met"
#line 2712 "cplus.met"
            case META : 
#line 2712 "cplus.met"
            case SLAS : 
#line 2712 "cplus.met"
                tokenAhead = 0 ;
#line 2712 "cplus.met"
                CommTerm();
#line 2712 "cplus.met"
#line 2712 "cplus.met"
                {
#line 2712 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2712 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 2712 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2712 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2712 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2712 "cplus.met"
                    }
#line 2712 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2712 "cplus.met"
                    expTree=_ptRes0;
#line 2712 "cplus.met"
                }
#line 2712 "cplus.met"
                break;
#line 2712 "cplus.met"
#line 2713 "cplus.met"
            case POURC : 
#line 2713 "cplus.met"
                tokenAhead = 0 ;
#line 2713 "cplus.met"
                CommTerm();
#line 2713 "cplus.met"
#line 2713 "cplus.met"
                {
#line 2713 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2713 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2713 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2713 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 2713 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2713 "cplus.met"
                    }
#line 2713 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2713 "cplus.met"
                    expTree=_ptRes0;
#line 2713 "cplus.met"
                }
#line 2713 "cplus.met"
                break;
#line 2713 "cplus.met"
            default :
#line 2713 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2713 "cplus.met"
                break;
#line 2713 "cplus.met"
        }
#line 2713 "cplus.met"
    } 
#line 2713 "cplus.met"
#line 2715 "cplus.met"
    {
#line 2715 "cplus.met"
        _retValue = expTree ;
#line 2715 "cplus.met"
        goto multiplicative_expression_ret;
#line 2715 "cplus.met"
        
#line 2715 "cplus.met"
    }
#line 2715 "cplus.met"
#line 2715 "cplus.met"
#line 2715 "cplus.met"

#line 2716 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2716 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2716 "cplus.met"
return((PPTREE) 0);
#line 2716 "cplus.met"

#line 2716 "cplus.met"
multiplicative_expression_exit :
#line 2716 "cplus.met"

#line 2716 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2716 "cplus.met"
    _funcLevel--;
#line 2716 "cplus.met"
    return((PPTREE) -1) ;
#line 2716 "cplus.met"

#line 2716 "cplus.met"
multiplicative_expression_ret :
#line 2716 "cplus.met"
    
#line 2716 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2716 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2716 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2716 "cplus.met"
    return _retValue ;
#line 2716 "cplus.met"
}
#line 2716 "cplus.met"

#line 2716 "cplus.met"
#line 3544 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3544 "cplus.met"
{
#line 3544 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3544 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3544 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3544 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3544 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3544 "cplus.met"
#line 3544 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3544 "cplus.met"
#line 3544 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0;
#line 3544 "cplus.met"
#line 3546 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3546 "cplus.met"
    switch( lexEl.Value) {
#line 3546 "cplus.met"
#line 3547 "cplus.met"
        case NAMESPACE : 
#line 3547 "cplus.met"
            tokenAhead = 0 ;
#line 3547 "cplus.met"
            CommTerm();
#line 3547 "cplus.met"
#line 3548 "cplus.met"
#line 3550 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3550 "cplus.met"
#line 3552 "cplus.met"
                {
#line 3552 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3552 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3552 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3552 "cplus.met"
                    ident=_ptRes0;
#line 3552 "cplus.met"
                }
#line 3552 "cplus.met"
            }
#line 3552 "cplus.met"
#line 3554 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3554 "cplus.met"
            switch( lexEl.Value) {
#line 3554 "cplus.met"
#line 3558 "cplus.met"
                case AOUV : 
#line 3558 "cplus.met"
                    tokenAhead = 0 ;
#line 3558 "cplus.met"
                    CommTerm();
#line 3558 "cplus.met"
#line 3557 "cplus.met"
#line 3558 "cplus.met"
                    {
#line 3558 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3558 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 2);
#line 3558 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3558 "cplus.met"
                        retTree=_ptRes0;
#line 3558 "cplus.met"
                    }
#line 3558 "cplus.met"
#line 3558 "cplus.met"
                    _addlist1 = list ;
#line 3558 "cplus.met"
#line 3559 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3559 "cplus.met"
#line 3560 "cplus.met"
#line 3561 "cplus.met"
                        {
#line 3561 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3561 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3561 "cplus.met"
                                MulFreeTree(5,_ptTree0,_addlist1,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3561 "cplus.met"
                            }
#line 3561 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3561 "cplus.met"
                        }
#line 3561 "cplus.met"
#line 3561 "cplus.met"
                        if (list){
#line 3561 "cplus.met"
#line 3561 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3561 "cplus.met"
                        } else {
#line 3561 "cplus.met"
#line 3561 "cplus.met"
                            list = _addlist1 ;
#line 3561 "cplus.met"
                        }
#line 3561 "cplus.met"
#line 3561 "cplus.met"
                    } 
#line 3561 "cplus.met"
#line 3563 "cplus.met"
                    {
#line 3563 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3563 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 3563 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3563 "cplus.met"
                        }
#line 3563 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3563 "cplus.met"
                    }
#line 3563 "cplus.met"
#line 3564 "cplus.met"
                    {
#line 3564 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3564 "cplus.met"
                        {
#line 3564 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3564 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3564 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3564 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3564 "cplus.met"
                        }
#line 3564 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3564 "cplus.met"
                    }
#line 3564 "cplus.met"
#line 3564 "cplus.met"
                    break;
#line 3564 "cplus.met"
#line 3568 "cplus.met"
                case EGAL : 
#line 3568 "cplus.met"
                    tokenAhead = 0 ;
#line 3568 "cplus.met"
                    CommTerm();
#line 3568 "cplus.met"
#line 3567 "cplus.met"
#line 3568 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3568 "cplus.met"
#line 3569 "cplus.met"
                        
#line 3569 "cplus.met"
                        MulFreeTree(4,_addlist1,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3569 "cplus.met"
                        goto name_space_exit;
#line 3569 "cplus.met"
#line 3569 "cplus.met"
                    }
#line 3569 "cplus.met"
#line 3570 "cplus.met"
                    {
#line 3570 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3570 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3570 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3570 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3570 "cplus.met"
                            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3570 "cplus.met"
                        }
#line 3570 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3570 "cplus.met"
                        retTree=_ptRes0;
#line 3570 "cplus.met"
                    }
#line 3570 "cplus.met"
#line 3570 "cplus.met"
                    break;
#line 3570 "cplus.met"
                default :
#line 3570 "cplus.met"
                    MulFreeTree(4,_addlist1,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3570 "cplus.met"
                    break;
#line 3570 "cplus.met"
            }
#line 3570 "cplus.met"
#line 3570 "cplus.met"
            break;
#line 3570 "cplus.met"
#line 3576 "cplus.met"
        case USING : 
#line 3576 "cplus.met"
            tokenAhead = 0 ;
#line 3576 "cplus.met"
            CommTerm();
#line 3576 "cplus.met"
#line 3577 "cplus.met"
#line 3578 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3578 "cplus.met"
#line 3579 "cplus.met"
                {
#line 3579 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3579 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 1);
#line 3579 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3579 "cplus.met"
                        MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3579 "cplus.met"
                    }
#line 3579 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3579 "cplus.met"
                    retTree=_ptRes0;
#line 3579 "cplus.met"
                }
#line 3579 "cplus.met"
            } else {
#line 3579 "cplus.met"
#line 3582 "cplus.met"
                {
#line 3582 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3582 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3582 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3582 "cplus.met"
                        MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3582 "cplus.met"
                    }
#line 3582 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3582 "cplus.met"
                    retTree=_ptRes0;
#line 3582 "cplus.met"
                }
#line 3582 "cplus.met"
            }
#line 3582 "cplus.met"
#line 3583 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3583 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3583 "cplus.met"
                MulFreeTree(4,_addlist1,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3583 "cplus.met"
            } else {
#line 3583 "cplus.met"
                tokenAhead = 0 ;
#line 3583 "cplus.met"
            }
#line 3583 "cplus.met"
#line 3583 "cplus.met"
            break;
#line 3583 "cplus.met"
        default :
#line 3583 "cplus.met"
            MulFreeTree(4,_addlist1,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3583 "cplus.met"
            break;
#line 3583 "cplus.met"
    }
#line 3583 "cplus.met"
#line 3586 "cplus.met"
    {
#line 3586 "cplus.met"
        _retValue = retTree ;
#line 3586 "cplus.met"
        goto name_space_ret;
#line 3586 "cplus.met"
        
#line 3586 "cplus.met"
    }
#line 3586 "cplus.met"
#line 3586 "cplus.met"
#line 3586 "cplus.met"

#line 3587 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3587 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3587 "cplus.met"
return((PPTREE) 0);
#line 3587 "cplus.met"

#line 3587 "cplus.met"
name_space_exit :
#line 3587 "cplus.met"

#line 3587 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3587 "cplus.met"
    _funcLevel--;
#line 3587 "cplus.met"
    return((PPTREE) -1) ;
#line 3587 "cplus.met"

#line 3587 "cplus.met"
name_space_ret :
#line 3587 "cplus.met"
    
#line 3587 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3587 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3587 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3587 "cplus.met"
    return _retValue ;
#line 3587 "cplus.met"
}
#line 3587 "cplus.met"

#line 3587 "cplus.met"
#line 2818 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2818 "cplus.met"
{
#line 2818 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2818 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2818 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2818 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2818 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2818 "cplus.met"
#line 2818 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2818 "cplus.met"
#line 2820 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2820 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2820 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2820 "cplus.met"
    } else {
#line 2820 "cplus.met"
        tokenAhead = 0 ;
#line 2820 "cplus.met"
    }
#line 2820 "cplus.met"
#line 2821 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 2821 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2821 "cplus.met"
    }
#line 2821 "cplus.met"
#line 2822 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2822 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2822 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2822 "cplus.met"
    } else {
#line 2822 "cplus.met"
        tokenAhead = 0 ;
#line 2822 "cplus.met"
    }
#line 2822 "cplus.met"
#line 2823 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2823 "cplus.met"
#line 2824 "cplus.met"
#line 2825 "cplus.met"
        {
#line 2825 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2825 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2825 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2825 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2825 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2825 "cplus.met"
            }
#line 2825 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2825 "cplus.met"
            retTree=_ptRes0;
#line 2825 "cplus.met"
        }
#line 2825 "cplus.met"
#line 2826 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2826 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2826 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2826 "cplus.met"
        } else {
#line 2826 "cplus.met"
            tokenAhead = 0 ;
#line 2826 "cplus.met"
        }
#line 2826 "cplus.met"
#line 2827 "cplus.met"
        {
#line 2827 "cplus.met"
            _retValue = retTree ;
#line 2827 "cplus.met"
            goto new_1_ret;
#line 2827 "cplus.met"
            
#line 2827 "cplus.met"
        }
#line 2827 "cplus.met"
#line 2827 "cplus.met"
#line 2827 "cplus.met"
    } else {
#line 2827 "cplus.met"
#line 2830 "cplus.met"
        {
#line 2830 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2830 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2830 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2830 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2830 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2830 "cplus.met"
            }
#line 2830 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2830 "cplus.met"
            retTree=_ptRes0;
#line 2830 "cplus.met"
        }
#line 2830 "cplus.met"
    }
#line 2830 "cplus.met"
#line 2831 "cplus.met"
    {
#line 2831 "cplus.met"
        _retValue = retTree ;
#line 2831 "cplus.met"
        goto new_1_ret;
#line 2831 "cplus.met"
        
#line 2831 "cplus.met"
    }
#line 2831 "cplus.met"
#line 2831 "cplus.met"
#line 2831 "cplus.met"

#line 2832 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2832 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2832 "cplus.met"
return((PPTREE) 0);
#line 2832 "cplus.met"

#line 2832 "cplus.met"
new_1_exit :
#line 2832 "cplus.met"

#line 2832 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2832 "cplus.met"
    _funcLevel--;
#line 2832 "cplus.met"
    return((PPTREE) -1) ;
#line 2832 "cplus.met"

#line 2832 "cplus.met"
new_1_ret :
#line 2832 "cplus.met"
    
#line 2832 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2832 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2832 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2832 "cplus.met"
    return _retValue ;
#line 2832 "cplus.met"
}
#line 2832 "cplus.met"

#line 2832 "cplus.met"
#line 2834 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2834 "cplus.met"
{
#line 2834 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2834 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2834 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2834 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2834 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2834 "cplus.met"
#line 2834 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2834 "cplus.met"
#line 2836 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2836 "cplus.met"
#line 2837 "cplus.met"
#line 2838 "cplus.met"
        {
#line 2838 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2838 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2838 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2838 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2838 "cplus.met"
            }
#line 2838 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2838 "cplus.met"
            retTree=_ptRes0;
#line 2838 "cplus.met"
        }
#line 2838 "cplus.met"
#line 2839 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2839 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2839 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2839 "cplus.met"
        } else {
#line 2839 "cplus.met"
            tokenAhead = 0 ;
#line 2839 "cplus.met"
        }
#line 2839 "cplus.met"
#line 2840 "cplus.met"
        {
#line 2840 "cplus.met"
            _retValue = retTree ;
#line 2840 "cplus.met"
            goto new_2_ret;
#line 2840 "cplus.met"
            
#line 2840 "cplus.met"
        }
#line 2840 "cplus.met"
#line 2840 "cplus.met"
#line 2840 "cplus.met"
    } else {
#line 2840 "cplus.met"
#line 2843 "cplus.met"
        {
#line 2843 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2843 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2843 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2843 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2843 "cplus.met"
            }
#line 2843 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2843 "cplus.met"
            retTree=_ptRes0;
#line 2843 "cplus.met"
        }
#line 2843 "cplus.met"
    }
#line 2843 "cplus.met"
#line 2844 "cplus.met"
    {
#line 2844 "cplus.met"
        _retValue = retTree ;
#line 2844 "cplus.met"
        goto new_2_ret;
#line 2844 "cplus.met"
        
#line 2844 "cplus.met"
    }
#line 2844 "cplus.met"
#line 2844 "cplus.met"
#line 2844 "cplus.met"

#line 2845 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2845 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2845 "cplus.met"
return((PPTREE) 0);
#line 2845 "cplus.met"

#line 2845 "cplus.met"
new_2_exit :
#line 2845 "cplus.met"

#line 2845 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 2845 "cplus.met"
    _funcLevel--;
#line 2845 "cplus.met"
    return((PPTREE) -1) ;
#line 2845 "cplus.met"

#line 2845 "cplus.met"
new_2_ret :
#line 2845 "cplus.met"
    
#line 2845 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 2845 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2845 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2845 "cplus.met"
    return _retValue ;
#line 2845 "cplus.met"
}
#line 2845 "cplus.met"

#line 2845 "cplus.met"
#line 2388 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2388 "cplus.met"
{
#line 2388 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2388 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2388 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2388 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2388 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2388 "cplus.met"
#line 2388 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2388 "cplus.met"
#line 2390 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2390 "cplus.met"
#line 2391 "cplus.met"
        {
#line 2391 "cplus.met"
            PPTREE _ptTree0=0;
#line 2391 "cplus.met"
            {
#line 2391 "cplus.met"
                PPTREE _ptTree1=0;
#line 2391 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2391 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2391 "cplus.met"
                }
#line 2391 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2391 "cplus.met"
            }
#line 2391 "cplus.met"
            _retValue =_ptTree0;
#line 2391 "cplus.met"
            goto new_declarator_ret;
#line 2391 "cplus.met"
        }
#line 2391 "cplus.met"
    }
#line 2391 "cplus.met"
#line 2392 "cplus.met"
    retTree = (PPTREE) 0;
#line 2392 "cplus.met"
#line 2393 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2393 "cplus.met"
    switch( lexEl.Value) {
#line 2393 "cplus.met"
#line 2394 "cplus.met"
        case ETOI : 
#line 2394 "cplus.met"
            tokenAhead = 0 ;
#line 2394 "cplus.met"
            CommTerm();
#line 2394 "cplus.met"
#line 2394 "cplus.met"
            {
#line 2394 "cplus.met"
                PPTREE _ptTree0=0;
#line 2394 "cplus.met"
                {
#line 2394 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2394 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2394 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2394 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2394 "cplus.met"
                    }
#line 2394 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2394 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2394 "cplus.met"
                }
#line 2394 "cplus.met"
                _retValue =_ptTree0;
#line 2394 "cplus.met"
                goto new_declarator_ret;
#line 2394 "cplus.met"
            }
#line 2394 "cplus.met"
            break;
#line 2394 "cplus.met"
#line 2395 "cplus.met"
        case META : 
#line 2395 "cplus.met"
        case IDENT : 
#line 2395 "cplus.met"
#line 2396 "cplus.met"
#line 2397 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 92, cplus))== (PPTREE) -1 ) {
#line 2397 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2397 "cplus.met"
            }
#line 2397 "cplus.met"
#line 2398 "cplus.met"
            {
#line 2398 "cplus.met"
                PPTREE _ptTree0=0;
#line 2398 "cplus.met"
                {
#line 2398 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2398 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2398 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2398 "cplus.met"
                    }
#line 2398 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2398 "cplus.met"
                }
#line 2398 "cplus.met"
                _retValue =_ptTree0;
#line 2398 "cplus.met"
                goto new_declarator_ret;
#line 2398 "cplus.met"
            }
#line 2398 "cplus.met"
#line 2398 "cplus.met"
            break;
#line 2398 "cplus.met"
#line 2407 "cplus.met"
        default : 
#line 2407 "cplus.met"
#line 2403 "cplus.met"
#line 2405 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2405 "cplus.met"
#line 2406 "cplus.met"
#line 2407 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 60, cplus)){
#line 2407 "cplus.met"
#line 2408 "cplus.met"
                    {
#line 2408 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2408 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2408 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2408 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2408 "cplus.met"
                        retTree=_ptRes0;
#line 2408 "cplus.met"
                    }
#line 2408 "cplus.met"
                } else {
#line 2408 "cplus.met"
#line 2410 "cplus.met"
                    {
#line 2410 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2410 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2410 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2410 "cplus.met"
                        retTree=_ptRes0;
#line 2410 "cplus.met"
                    }
#line 2410 "cplus.met"
                }
#line 2410 "cplus.met"
#line 2411 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2411 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2411 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2411 "cplus.met"
                } else {
#line 2411 "cplus.met"
                    tokenAhead = 0 ;
#line 2411 "cplus.met"
                }
#line 2411 "cplus.met"
#line 2411 "cplus.met"
            } 
#line 2411 "cplus.met"
#line 2413 "cplus.met"
            {
#line 2413 "cplus.met"
                _retValue = retTree ;
#line 2413 "cplus.met"
                goto new_declarator_ret;
#line 2413 "cplus.met"
                
#line 2413 "cplus.met"
            }
#line 2413 "cplus.met"
#line 2413 "cplus.met"
            break;
#line 2413 "cplus.met"
    }
#line 2413 "cplus.met"
#line 2413 "cplus.met"
#line 2415 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2415 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2415 "cplus.met"
return((PPTREE) 0);
#line 2415 "cplus.met"

#line 2415 "cplus.met"
new_declarator_exit :
#line 2415 "cplus.met"

#line 2415 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2415 "cplus.met"
    _funcLevel--;
#line 2415 "cplus.met"
    return((PPTREE) -1) ;
#line 2415 "cplus.met"

#line 2415 "cplus.met"
new_declarator_ret :
#line 2415 "cplus.met"
    
#line 2415 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2415 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2415 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2415 "cplus.met"
    return _retValue ;
#line 2415 "cplus.met"
}
#line 2415 "cplus.met"

#line 2415 "cplus.met"
#line 2538 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2538 "cplus.met"
{
#line 2538 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2538 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2538 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2538 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2538 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2538 "cplus.met"
#line 2538 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2538 "cplus.met"
#line 2540 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 2540 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2540 "cplus.met"
    }
#line 2540 "cplus.met"
#line 2541 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 98, cplus)){
#line 2541 "cplus.met"
#line 2542 "cplus.met"
        {
#line 2542 "cplus.met"
            PPTREE _ptRes0=0;
#line 2542 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2542 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2542 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2542 "cplus.met"
            valTree=_ptRes0;
#line 2542 "cplus.met"
        }
#line 2542 "cplus.met"
    } else {
#line 2542 "cplus.met"
#line 2544 "cplus.met"
        valTree = retTree ;
#line 2544 "cplus.met"
    }
#line 2544 "cplus.met"
#line 2545 "cplus.met"
    {
#line 2545 "cplus.met"
        _retValue = valTree ;
#line 2545 "cplus.met"
        goto new_type_name_ret;
#line 2545 "cplus.met"
        
#line 2545 "cplus.met"
    }
#line 2545 "cplus.met"
#line 2545 "cplus.met"
#line 2545 "cplus.met"

#line 2546 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2546 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2546 "cplus.met"
return((PPTREE) 0);
#line 2546 "cplus.met"

#line 2546 "cplus.met"
new_type_name_exit :
#line 2546 "cplus.met"

#line 2546 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2546 "cplus.met"
    _funcLevel--;
#line 2546 "cplus.met"
    return((PPTREE) -1) ;
#line 2546 "cplus.met"

#line 2546 "cplus.met"
new_type_name_ret :
#line 2546 "cplus.met"
    
#line 2546 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2546 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2546 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2546 "cplus.met"
    return _retValue ;
#line 2546 "cplus.met"
}
#line 2546 "cplus.met"

#line 2546 "cplus.met"
#line 3252 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3252 "cplus.met"
{
#line 3252 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3252 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3252 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3252 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3252 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3252 "cplus.met"
#line 3253 "cplus.met"
    {
#line 3253 "cplus.met"
        PPTREE _ptTree0=0;
#line 3253 "cplus.met"
        {
#line 3253 "cplus.met"
            PPTREE _ptRes1=0;
#line 3253 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3253 "cplus.met"
            _ptTree0=_ptRes1;
#line 3253 "cplus.met"
        }
#line 3253 "cplus.met"
        _retValue =_ptTree0;
#line 3253 "cplus.met"
        goto none_statement_ret;
#line 3253 "cplus.met"
    }
#line 3253 "cplus.met"
#line 3253 "cplus.met"
#line 3253 "cplus.met"

#line 3254 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3254 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3254 "cplus.met"
return((PPTREE) 0);
#line 3254 "cplus.met"

#line 3254 "cplus.met"
none_statement_exit :
#line 3254 "cplus.met"

#line 3254 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3254 "cplus.met"
    _funcLevel--;
#line 3254 "cplus.met"
    return((PPTREE) -1) ;
#line 3254 "cplus.met"

#line 3254 "cplus.met"
none_statement_ret :
#line 3254 "cplus.met"
    
#line 3254 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3254 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3254 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3254 "cplus.met"
    return _retValue ;
#line 3254 "cplus.met"
}
#line 3254 "cplus.met"

#line 3254 "cplus.met"
#line 2984 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 2984 "cplus.met"
{
#line 2984 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2984 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2984 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2984 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 2984 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2984 "cplus.met"
#line 2984 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2984 "cplus.met"
#line 2986 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2986 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 2986 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 2986 "cplus.met"
    } else {
#line 2986 "cplus.met"
        tokenAhead = 0 ;
#line 2986 "cplus.met"
    }
#line 2986 "cplus.met"
#line 2987 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2987 "cplus.met"
    switch( lexEl.Value) {
#line 2987 "cplus.met"
#line 2988 "cplus.met"
        case NEW : 
#line 2988 "cplus.met"
            tokenAhead = 0 ;
#line 2988 "cplus.met"
            CommTerm();
#line 2988 "cplus.met"
#line 2988 "cplus.met"
            {
#line 2988 "cplus.met"
                PPTREE _ptTree0=0;
#line 2988 "cplus.met"
                {
#line 2988 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2988 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2988 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 2988 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2988 "cplus.met"
                }
#line 2988 "cplus.met"
                _retValue =_ptTree0;
#line 2988 "cplus.met"
                goto operator_function_name_ret;
#line 2988 "cplus.met"
            }
#line 2988 "cplus.met"
            break;
#line 2988 "cplus.met"
#line 2989 "cplus.met"
        case DELETE : 
#line 2989 "cplus.met"
            tokenAhead = 0 ;
#line 2989 "cplus.met"
            CommTerm();
#line 2989 "cplus.met"
#line 2989 "cplus.met"
            {
#line 2989 "cplus.met"
                PPTREE _ptTree0=0;
#line 2989 "cplus.met"
                {
#line 2989 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2989 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2989 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 2989 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2989 "cplus.met"
                }
#line 2989 "cplus.met"
                _retValue =_ptTree0;
#line 2989 "cplus.met"
                goto operator_function_name_ret;
#line 2989 "cplus.met"
            }
#line 2989 "cplus.met"
            break;
#line 2989 "cplus.met"
#line 2990 "cplus.met"
        case PLUS : 
#line 2990 "cplus.met"
            tokenAhead = 0 ;
#line 2990 "cplus.met"
            CommTerm();
#line 2990 "cplus.met"
#line 2990 "cplus.met"
            {
#line 2990 "cplus.met"
                PPTREE _ptTree0=0;
#line 2990 "cplus.met"
                {
#line 2990 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2990 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2990 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 2990 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2990 "cplus.met"
                }
#line 2990 "cplus.met"
                _retValue =_ptTree0;
#line 2990 "cplus.met"
                goto operator_function_name_ret;
#line 2990 "cplus.met"
            }
#line 2990 "cplus.met"
            break;
#line 2990 "cplus.met"
#line 2991 "cplus.met"
        case TIRE : 
#line 2991 "cplus.met"
            tokenAhead = 0 ;
#line 2991 "cplus.met"
            CommTerm();
#line 2991 "cplus.met"
#line 2991 "cplus.met"
            {
#line 2991 "cplus.met"
                PPTREE _ptTree0=0;
#line 2991 "cplus.met"
                {
#line 2991 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2991 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2991 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 2991 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2991 "cplus.met"
                }
#line 2991 "cplus.met"
                _retValue =_ptTree0;
#line 2991 "cplus.met"
                goto operator_function_name_ret;
#line 2991 "cplus.met"
            }
#line 2991 "cplus.met"
            break;
#line 2991 "cplus.met"
#line 2992 "cplus.met"
        case ETOI : 
#line 2992 "cplus.met"
            tokenAhead = 0 ;
#line 2992 "cplus.met"
            CommTerm();
#line 2992 "cplus.met"
#line 2992 "cplus.met"
            {
#line 2992 "cplus.met"
                PPTREE _ptTree0=0;
#line 2992 "cplus.met"
                {
#line 2992 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2992 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2992 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 2992 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2992 "cplus.met"
                }
#line 2992 "cplus.met"
                _retValue =_ptTree0;
#line 2992 "cplus.met"
                goto operator_function_name_ret;
#line 2992 "cplus.met"
            }
#line 2992 "cplus.met"
            break;
#line 2992 "cplus.met"
#line 2993 "cplus.met"
        case META : 
#line 2993 "cplus.met"
        case SLAS : 
#line 2993 "cplus.met"
            tokenAhead = 0 ;
#line 2993 "cplus.met"
            CommTerm();
#line 2993 "cplus.met"
#line 2993 "cplus.met"
            {
#line 2993 "cplus.met"
                PPTREE _ptTree0=0;
#line 2993 "cplus.met"
                {
#line 2993 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2993 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2993 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 2993 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2993 "cplus.met"
                }
#line 2993 "cplus.met"
                _retValue =_ptTree0;
#line 2993 "cplus.met"
                goto operator_function_name_ret;
#line 2993 "cplus.met"
            }
#line 2993 "cplus.met"
            break;
#line 2993 "cplus.met"
#line 2994 "cplus.met"
        case POURC : 
#line 2994 "cplus.met"
            tokenAhead = 0 ;
#line 2994 "cplus.met"
            CommTerm();
#line 2994 "cplus.met"
#line 2994 "cplus.met"
            {
#line 2994 "cplus.met"
                PPTREE _ptTree0=0;
#line 2994 "cplus.met"
                {
#line 2994 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2994 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2994 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 2994 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2994 "cplus.met"
                }
#line 2994 "cplus.met"
                _retValue =_ptTree0;
#line 2994 "cplus.met"
                goto operator_function_name_ret;
#line 2994 "cplus.met"
            }
#line 2994 "cplus.met"
            break;
#line 2994 "cplus.met"
#line 2995 "cplus.met"
        case CHAP : 
#line 2995 "cplus.met"
            tokenAhead = 0 ;
#line 2995 "cplus.met"
            CommTerm();
#line 2995 "cplus.met"
#line 2995 "cplus.met"
            {
#line 2995 "cplus.met"
                PPTREE _ptTree0=0;
#line 2995 "cplus.met"
                {
#line 2995 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2995 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2995 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 2995 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2995 "cplus.met"
                }
#line 2995 "cplus.met"
                _retValue =_ptTree0;
#line 2995 "cplus.met"
                goto operator_function_name_ret;
#line 2995 "cplus.met"
            }
#line 2995 "cplus.met"
            break;
#line 2995 "cplus.met"
#line 2996 "cplus.met"
        case ETCO : 
#line 2996 "cplus.met"
            tokenAhead = 0 ;
#line 2996 "cplus.met"
            CommTerm();
#line 2996 "cplus.met"
#line 2996 "cplus.met"
            {
#line 2996 "cplus.met"
                PPTREE _ptTree0=0;
#line 2996 "cplus.met"
                {
#line 2996 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2996 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2996 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 2996 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2996 "cplus.met"
                }
#line 2996 "cplus.met"
                _retValue =_ptTree0;
#line 2996 "cplus.met"
                goto operator_function_name_ret;
#line 2996 "cplus.met"
            }
#line 2996 "cplus.met"
            break;
#line 2996 "cplus.met"
#line 2997 "cplus.met"
        case VBAR : 
#line 2997 "cplus.met"
            tokenAhead = 0 ;
#line 2997 "cplus.met"
            CommTerm();
#line 2997 "cplus.met"
#line 2997 "cplus.met"
            {
#line 2997 "cplus.met"
                PPTREE _ptTree0=0;
#line 2997 "cplus.met"
                {
#line 2997 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2997 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2997 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 2997 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2997 "cplus.met"
                }
#line 2997 "cplus.met"
                _retValue =_ptTree0;
#line 2997 "cplus.met"
                goto operator_function_name_ret;
#line 2997 "cplus.met"
            }
#line 2997 "cplus.met"
            break;
#line 2997 "cplus.met"
#line 2998 "cplus.met"
        case TILD : 
#line 2998 "cplus.met"
            tokenAhead = 0 ;
#line 2998 "cplus.met"
            CommTerm();
#line 2998 "cplus.met"
#line 2998 "cplus.met"
            {
#line 2998 "cplus.met"
                PPTREE _ptTree0=0;
#line 2998 "cplus.met"
                {
#line 2998 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2998 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2998 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 2998 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2998 "cplus.met"
                }
#line 2998 "cplus.met"
                _retValue =_ptTree0;
#line 2998 "cplus.met"
                goto operator_function_name_ret;
#line 2998 "cplus.met"
            }
#line 2998 "cplus.met"
            break;
#line 2998 "cplus.met"
#line 2999 "cplus.met"
        case EXCL : 
#line 2999 "cplus.met"
            tokenAhead = 0 ;
#line 2999 "cplus.met"
            CommTerm();
#line 2999 "cplus.met"
#line 2999 "cplus.met"
            {
#line 2999 "cplus.met"
                PPTREE _ptTree0=0;
#line 2999 "cplus.met"
                {
#line 2999 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2999 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 2999 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 2999 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2999 "cplus.met"
                }
#line 2999 "cplus.met"
                _retValue =_ptTree0;
#line 2999 "cplus.met"
                goto operator_function_name_ret;
#line 2999 "cplus.met"
            }
#line 2999 "cplus.met"
            break;
#line 2999 "cplus.met"
#line 3000 "cplus.met"
        case EGAL : 
#line 3000 "cplus.met"
            tokenAhead = 0 ;
#line 3000 "cplus.met"
            CommTerm();
#line 3000 "cplus.met"
#line 3000 "cplus.met"
            {
#line 3000 "cplus.met"
                PPTREE _ptTree0=0;
#line 3000 "cplus.met"
                {
#line 3000 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3000 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3000 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 3000 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3000 "cplus.met"
                }
#line 3000 "cplus.met"
                _retValue =_ptTree0;
#line 3000 "cplus.met"
                goto operator_function_name_ret;
#line 3000 "cplus.met"
            }
#line 3000 "cplus.met"
            break;
#line 3000 "cplus.met"
#line 3001 "cplus.met"
        case SUPE : 
#line 3001 "cplus.met"
            tokenAhead = 0 ;
#line 3001 "cplus.met"
            CommTerm();
#line 3001 "cplus.met"
#line 3001 "cplus.met"
            {
#line 3001 "cplus.met"
                PPTREE _ptTree0=0;
#line 3001 "cplus.met"
                {
#line 3001 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3001 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3001 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 3001 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3001 "cplus.met"
                }
#line 3001 "cplus.met"
                _retValue =_ptTree0;
#line 3001 "cplus.met"
                goto operator_function_name_ret;
#line 3001 "cplus.met"
            }
#line 3001 "cplus.met"
            break;
#line 3001 "cplus.met"
#line 3002 "cplus.met"
        case INFE : 
#line 3002 "cplus.met"
            tokenAhead = 0 ;
#line 3002 "cplus.met"
            CommTerm();
#line 3002 "cplus.met"
#line 3002 "cplus.met"
            {
#line 3002 "cplus.met"
                PPTREE _ptTree0=0;
#line 3002 "cplus.met"
                {
#line 3002 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3002 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3002 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 3002 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3002 "cplus.met"
                }
#line 3002 "cplus.met"
                _retValue =_ptTree0;
#line 3002 "cplus.met"
                goto operator_function_name_ret;
#line 3002 "cplus.met"
            }
#line 3002 "cplus.met"
            break;
#line 3002 "cplus.met"
#line 3003 "cplus.met"
        case PLUSEGAL : 
#line 3003 "cplus.met"
            tokenAhead = 0 ;
#line 3003 "cplus.met"
            CommTerm();
#line 3003 "cplus.met"
#line 3003 "cplus.met"
            {
#line 3003 "cplus.met"
                PPTREE _ptTree0=0;
#line 3003 "cplus.met"
                {
#line 3003 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3003 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3003 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 3003 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3003 "cplus.met"
                }
#line 3003 "cplus.met"
                _retValue =_ptTree0;
#line 3003 "cplus.met"
                goto operator_function_name_ret;
#line 3003 "cplus.met"
            }
#line 3003 "cplus.met"
            break;
#line 3003 "cplus.met"
#line 3004 "cplus.met"
        case TIREEGAL : 
#line 3004 "cplus.met"
            tokenAhead = 0 ;
#line 3004 "cplus.met"
            CommTerm();
#line 3004 "cplus.met"
#line 3004 "cplus.met"
            {
#line 3004 "cplus.met"
                PPTREE _ptTree0=0;
#line 3004 "cplus.met"
                {
#line 3004 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3004 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3004 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 3004 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3004 "cplus.met"
                }
#line 3004 "cplus.met"
                _retValue =_ptTree0;
#line 3004 "cplus.met"
                goto operator_function_name_ret;
#line 3004 "cplus.met"
            }
#line 3004 "cplus.met"
            break;
#line 3004 "cplus.met"
#line 3005 "cplus.met"
        case ETOIEGAL : 
#line 3005 "cplus.met"
            tokenAhead = 0 ;
#line 3005 "cplus.met"
            CommTerm();
#line 3005 "cplus.met"
#line 3005 "cplus.met"
            {
#line 3005 "cplus.met"
                PPTREE _ptTree0=0;
#line 3005 "cplus.met"
                {
#line 3005 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3005 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3005 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 3005 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3005 "cplus.met"
                }
#line 3005 "cplus.met"
                _retValue =_ptTree0;
#line 3005 "cplus.met"
                goto operator_function_name_ret;
#line 3005 "cplus.met"
            }
#line 3005 "cplus.met"
            break;
#line 3005 "cplus.met"
#line 3006 "cplus.met"
        case SLASEGAL : 
#line 3006 "cplus.met"
            tokenAhead = 0 ;
#line 3006 "cplus.met"
            CommTerm();
#line 3006 "cplus.met"
#line 3006 "cplus.met"
            {
#line 3006 "cplus.met"
                PPTREE _ptTree0=0;
#line 3006 "cplus.met"
                {
#line 3006 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3006 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3006 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 3006 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3006 "cplus.met"
                }
#line 3006 "cplus.met"
                _retValue =_ptTree0;
#line 3006 "cplus.met"
                goto operator_function_name_ret;
#line 3006 "cplus.met"
            }
#line 3006 "cplus.met"
            break;
#line 3006 "cplus.met"
#line 3007 "cplus.met"
        case POURCEGAL : 
#line 3007 "cplus.met"
            tokenAhead = 0 ;
#line 3007 "cplus.met"
            CommTerm();
#line 3007 "cplus.met"
#line 3007 "cplus.met"
            {
#line 3007 "cplus.met"
                PPTREE _ptTree0=0;
#line 3007 "cplus.met"
                {
#line 3007 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3007 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3007 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 3007 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3007 "cplus.met"
                }
#line 3007 "cplus.met"
                _retValue =_ptTree0;
#line 3007 "cplus.met"
                goto operator_function_name_ret;
#line 3007 "cplus.met"
            }
#line 3007 "cplus.met"
            break;
#line 3007 "cplus.met"
#line 3008 "cplus.met"
        case CHAPEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
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
        case ETCOEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
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
        case VBAREGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
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
        case EXCLEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
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
        case EGALEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
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
        case INFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
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
        case SUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
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
        case INFEINFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
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
        case SUPESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
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
        case INFEINFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
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
        case SUPESUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
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
        case ETCOETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
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
        case VBARVBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
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
        case PLUSPLUS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
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
        case TIRETIRE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
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
        case VIRG : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (","));
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
        case TIRESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
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
        case TIRESUPEETOI : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
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
#line 3028 "cplus.met"
        case POUV : 
#line 3028 "cplus.met"
            tokenAhead = 0 ;
#line 3028 "cplus.met"
            CommTerm();
#line 3028 "cplus.met"
#line 3027 "cplus.met"
#line 3028 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3028 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3028 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3028 "cplus.met"
            } else {
#line 3028 "cplus.met"
                tokenAhead = 0 ;
#line 3028 "cplus.met"
            }
#line 3028 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
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
#line 3029 "cplus.met"
            break;
#line 3029 "cplus.met"
#line 3033 "cplus.met"
        case COUV : 
#line 3033 "cplus.met"
            tokenAhead = 0 ;
#line 3033 "cplus.met"
            CommTerm();
#line 3033 "cplus.met"
#line 3032 "cplus.met"
#line 3033 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3033 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3033 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3033 "cplus.met"
            } else {
#line 3033 "cplus.met"
                tokenAhead = 0 ;
#line 3033 "cplus.met"
            }
#line 3033 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
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
#line 3034 "cplus.met"
            break;
#line 3034 "cplus.met"
#line 3034 "cplus.met"
        default : 
#line 3034 "cplus.met"
#line 3034 "cplus.met"
            break;
#line 3034 "cplus.met"
    }
#line 3034 "cplus.met"
#line 3038 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 28, cplus)){
#line 3038 "cplus.met"
#line 3039 "cplus.met"
        {
#line 3039 "cplus.met"
            PPTREE _ptRes0=0;
#line 3039 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3039 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3039 "cplus.met"
            retTree=_ptRes0;
#line 3039 "cplus.met"
        }
#line 3039 "cplus.met"
    } else {
#line 3039 "cplus.met"
#line 3041 "cplus.met"
        {
#line 3041 "cplus.met"
            PPTREE _ptRes0=0;
#line 3041 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3041 "cplus.met"
            retTree=_ptRes0;
#line 3041 "cplus.met"
        }
#line 3041 "cplus.met"
    }
#line 3041 "cplus.met"
#line 3042 "cplus.met"
    {
#line 3042 "cplus.met"
        PPTREE _ptTree0=0;
#line 3042 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 3042 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3042 "cplus.met"
        }
#line 3042 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3042 "cplus.met"
    }
#line 3042 "cplus.met"
#line 3043 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 112, cplus)){
#line 3043 "cplus.met"
#line 3044 "cplus.met"
#line 3045 "cplus.met"
        list =AddList(list ,valTree );
#line 3045 "cplus.met"
#line 3046 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3046 "cplus.met"
#line 3046 "cplus.met"
#line 3046 "cplus.met"
    }
#line 3046 "cplus.met"
#line 3048 "cplus.met"
    {
#line 3048 "cplus.met"
        PPTREE _ptTree0=0;
#line 3048 "cplus.met"
        {
#line 3048 "cplus.met"
            PPTREE _ptRes1=0;
#line 3048 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3048 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3048 "cplus.met"
            _ptTree0=_ptRes1;
#line 3048 "cplus.met"
        }
#line 3048 "cplus.met"
        _retValue =_ptTree0;
#line 3048 "cplus.met"
        goto operator_function_name_ret;
#line 3048 "cplus.met"
    }
#line 3048 "cplus.met"
#line 3048 "cplus.met"
#line 3048 "cplus.met"

#line 3049 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3049 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3049 "cplus.met"
return((PPTREE) 0);
#line 3049 "cplus.met"

#line 3049 "cplus.met"
operator_function_name_exit :
#line 3049 "cplus.met"

#line 3049 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3049 "cplus.met"
    _funcLevel--;
#line 3049 "cplus.met"
    return((PPTREE) -1) ;
#line 3049 "cplus.met"

#line 3049 "cplus.met"
operator_function_name_ret :
#line 3049 "cplus.met"
    
#line 3049 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3049 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3049 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3049 "cplus.met"
    return _retValue ;
#line 3049 "cplus.met"
}
#line 3049 "cplus.met"

#line 3049 "cplus.met"
