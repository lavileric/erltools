/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2199 "cplus.met"
PPTREE cplus::long_type ( int error_free)
#line 2199 "cplus.met"
{
#line 2199 "cplus.met"
    int  _oldinside_long = inside_long;
#line 2199 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2199 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2199 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2199 "cplus.met"
    int _Debug = TRACE_RULE("long_type",TRACE_ENTER,(PPTREE)0);
#line 2199 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2199 "cplus.met"
#line 2199 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2199 "cplus.met"
#line 2201 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2201 "cplus.met"
    if (  !SEE_TOKEN( LONG,"long") || !(CommTerm(),1)) {
#line 2201 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(long_type_exit,"long")
#line 2201 "cplus.met"
    } else {
#line 2201 "cplus.met"
        tokenAhead = 0 ;
#line 2201 "cplus.met"
    }
#line 2201 "cplus.met"
#line 2202 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2202 "cplus.met"
    switch( lexEl.Value) {
#line 2202 "cplus.met"
#line 2203 "cplus.met"
        case FLOAT : 
#line 2203 "cplus.met"
            tokenAhead = 0 ;
#line 2203 "cplus.met"
            CommTerm();
#line 2203 "cplus.met"
#line 2204 "cplus.met"
#line 2205 "cplus.met"
            if ((inside_long) || 
#line 2205 "cplus.met"
               (inside_signed)){
#line 2205 "cplus.met"
#line 2206 "cplus.met"
                
#line 2206 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2206 "cplus.met"
                goto long_type_exit;
#line 2206 "cplus.met"
#line 2206 "cplus.met"
            } else {
#line 2206 "cplus.met"
#line 2208 "cplus.met"
                {
#line 2208 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2208 "cplus.met"
                    {
#line 2208 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2208 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2208 "cplus.met"
                        {
#line 2208 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2208 "cplus.met"
                            _ptRes2= MakeTree(TFLOAT, 0);
#line 2208 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2208 "cplus.met"
                        }
#line 2208 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2208 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2208 "cplus.met"
                    }
#line 2208 "cplus.met"
                    _retValue =_ptTree0;
#line 2208 "cplus.met"
                    goto long_type_ret;
#line 2208 "cplus.met"
                }
#line 2208 "cplus.met"
            }
#line 2208 "cplus.met"
#line 2208 "cplus.met"
            break;
#line 2208 "cplus.met"
#line 2210 "cplus.met"
        case DOUBLE : 
#line 2210 "cplus.met"
            tokenAhead = 0 ;
#line 2210 "cplus.met"
            CommTerm();
#line 2210 "cplus.met"
#line 2211 "cplus.met"
#line 2212 "cplus.met"
            if ((inside_long) || 
#line 2212 "cplus.met"
               (inside_signed)){
#line 2212 "cplus.met"
#line 2213 "cplus.met"
                
#line 2213 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 2213 "cplus.met"
                goto long_type_exit;
#line 2213 "cplus.met"
#line 2213 "cplus.met"
            } else {
#line 2213 "cplus.met"
#line 2215 "cplus.met"
                {
#line 2215 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2215 "cplus.met"
                    {
#line 2215 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2215 "cplus.met"
                        _ptRes1= MakeTree(TLONG, 1);
#line 2215 "cplus.met"
                        {
#line 2215 "cplus.met"
                            PPTREE _ptRes2=0;
#line 2215 "cplus.met"
                            _ptRes2= MakeTree(TDOUBLE, 0);
#line 2215 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2215 "cplus.met"
                        }
#line 2215 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2215 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2215 "cplus.met"
                    }
#line 2215 "cplus.met"
                    _retValue =_ptTree0;
#line 2215 "cplus.met"
                    goto long_type_ret;
#line 2215 "cplus.met"
                }
#line 2215 "cplus.met"
            }
#line 2215 "cplus.met"
#line 2215 "cplus.met"
            break;
#line 2215 "cplus.met"
#line 2221 "cplus.met"
        default : 
#line 2221 "cplus.met"
#line 2218 "cplus.met"
#line 2219 "cplus.met"
            {
#line 2219 "cplus.met"
                inside_long = 1 ;
#line 2219 "cplus.met"
#line 2220 "cplus.met"
#line 2221 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 136, cplus)){
#line 2221 "cplus.met"
#line 2222 "cplus.met"
                    {
#line 2222 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2222 "cplus.met"
                        {
#line 2222 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2222 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2222 "cplus.met"
                            ReplaceTree(_ptRes1, 1, retTree );
#line 2222 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2222 "cplus.met"
                        }
#line 2222 "cplus.met"
                        _retValue =_ptTree0;
#line 2222 "cplus.met"
                        goto long_type_ret;
#line 2222 "cplus.met"
                    }
#line 2222 "cplus.met"
                } else {
#line 2222 "cplus.met"
#line 2224 "cplus.met"
                    {
#line 2224 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2224 "cplus.met"
                        {
#line 2224 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2224 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2224 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2224 "cplus.met"
                        }
#line 2224 "cplus.met"
                        _retValue =_ptTree0;
#line 2224 "cplus.met"
                        goto long_type_ret;
#line 2224 "cplus.met"
                    }
#line 2224 "cplus.met"
                }
#line 2224 "cplus.met"
#line 2224 "cplus.met"
                inside_long =  _oldinside_long;
#line 2224 "cplus.met"
            }
#line 2224 "cplus.met"
#line 2224 "cplus.met"
            break;
#line 2224 "cplus.met"
    }
#line 2224 "cplus.met"
#line 2224 "cplus.met"
#line 2227 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2227 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2227 "cplus.met"
inside_long =  _oldinside_long;
#line 2227 "cplus.met"
return((PPTREE) 0);
#line 2227 "cplus.met"

#line 2227 "cplus.met"
long_type_exit :
#line 2227 "cplus.met"

#line 2227 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_EXIT,(PPTREE)0);
#line 2227 "cplus.met"
    _funcLevel--;
#line 2227 "cplus.met"
    inside_long =  _oldinside_long;
#line 2227 "cplus.met"
    return((PPTREE) -1) ;
#line 2227 "cplus.met"

#line 2227 "cplus.met"
long_type_ret :
#line 2227 "cplus.met"
    
#line 2227 "cplus.met"
    _Debug = TRACE_RULE("long_type",TRACE_RETURN,_retValue);
#line 2227 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2227 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2227 "cplus.met"
    inside_long =  _oldinside_long;
#line 2227 "cplus.met"
    return _retValue ;
#line 2227 "cplus.met"
}
#line 2227 "cplus.met"

#line 2227 "cplus.met"
#line 1975 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1975 "cplus.met"
{
#line 1975 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1975 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1975 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1975 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1975 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1975 "cplus.met"
#line 1975 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1975 "cplus.met"
#line 1977 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1977 "cplus.met"
    switch( lexEl.Value) {
#line 1977 "cplus.met"
#line 1978 "cplus.met"
        case META : 
#line 1978 "cplus.met"
        case DECLARE_SERIAL : 
#line 1978 "cplus.met"
            tokenAhead = 0 ;
#line 1978 "cplus.met"
            CommTerm();
#line 1978 "cplus.met"
#line 1978 "cplus.met"
            {
#line 1978 "cplus.met"
                PPTREE _ptRes0=0;
#line 1978 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1978 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1978 "cplus.met"
                retTree=_ptRes0;
#line 1978 "cplus.met"
            }
#line 1978 "cplus.met"
            break;
#line 1978 "cplus.met"
#line 1979 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1979 "cplus.met"
            tokenAhead = 0 ;
#line 1979 "cplus.met"
            CommTerm();
#line 1979 "cplus.met"
#line 1979 "cplus.met"
            {
#line 1979 "cplus.met"
                PPTREE _ptRes0=0;
#line 1979 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1979 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1979 "cplus.met"
                retTree=_ptRes0;
#line 1979 "cplus.met"
            }
#line 1979 "cplus.met"
            break;
#line 1979 "cplus.met"
#line 1980 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1980 "cplus.met"
            tokenAhead = 0 ;
#line 1980 "cplus.met"
            CommTerm();
#line 1980 "cplus.met"
#line 1980 "cplus.met"
            {
#line 1980 "cplus.met"
                PPTREE _ptRes0=0;
#line 1980 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1980 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1980 "cplus.met"
                retTree=_ptRes0;
#line 1980 "cplus.met"
            }
#line 1980 "cplus.met"
            break;
#line 1980 "cplus.met"
#line 1981 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1981 "cplus.met"
            tokenAhead = 0 ;
#line 1981 "cplus.met"
            CommTerm();
#line 1981 "cplus.met"
#line 1981 "cplus.met"
            {
#line 1981 "cplus.met"
                PPTREE _ptRes0=0;
#line 1981 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1981 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1981 "cplus.met"
                retTree=_ptRes0;
#line 1981 "cplus.met"
            }
#line 1981 "cplus.met"
            break;
#line 1981 "cplus.met"
#line 1982 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1982 "cplus.met"
            tokenAhead = 0 ;
#line 1982 "cplus.met"
            CommTerm();
#line 1982 "cplus.met"
#line 1982 "cplus.met"
            {
#line 1982 "cplus.met"
                PPTREE _ptRes0=0;
#line 1982 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1982 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1982 "cplus.met"
                retTree=_ptRes0;
#line 1982 "cplus.met"
            }
#line 1982 "cplus.met"
            break;
#line 1982 "cplus.met"
#line 1983 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1983 "cplus.met"
            tokenAhead = 0 ;
#line 1983 "cplus.met"
            CommTerm();
#line 1983 "cplus.met"
#line 1983 "cplus.met"
            {
#line 1983 "cplus.met"
                PPTREE _ptRes0=0;
#line 1983 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1983 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1983 "cplus.met"
                retTree=_ptRes0;
#line 1983 "cplus.met"
            }
#line 1983 "cplus.met"
            break;
#line 1983 "cplus.met"
#line 1984 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1984 "cplus.met"
            tokenAhead = 0 ;
#line 1984 "cplus.met"
            CommTerm();
#line 1984 "cplus.met"
#line 1984 "cplus.met"
            {
#line 1984 "cplus.met"
                PPTREE _ptRes0=0;
#line 1984 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1984 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1984 "cplus.met"
                retTree=_ptRes0;
#line 1984 "cplus.met"
            }
#line 1984 "cplus.met"
            break;
#line 1984 "cplus.met"
#line 1985 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1985 "cplus.met"
            tokenAhead = 0 ;
#line 1985 "cplus.met"
            CommTerm();
#line 1985 "cplus.met"
#line 1985 "cplus.met"
            {
#line 1985 "cplus.met"
                PPTREE _ptRes0=0;
#line 1985 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1985 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1985 "cplus.met"
                retTree=_ptRes0;
#line 1985 "cplus.met"
            }
#line 1985 "cplus.met"
            break;
#line 1985 "cplus.met"
#line 1986 "cplus.met"
        case CATCH_UPPER : 
#line 1986 "cplus.met"
            tokenAhead = 0 ;
#line 1986 "cplus.met"
            CommTerm();
#line 1986 "cplus.met"
#line 1986 "cplus.met"
            {
#line 1986 "cplus.met"
                PPTREE _ptRes0=0;
#line 1986 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1986 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1986 "cplus.met"
                retTree=_ptRes0;
#line 1986 "cplus.met"
            }
#line 1986 "cplus.met"
            break;
#line 1986 "cplus.met"
#line 1987 "cplus.met"
        case CATCH_ALL : 
#line 1987 "cplus.met"
            tokenAhead = 0 ;
#line 1987 "cplus.met"
            CommTerm();
#line 1987 "cplus.met"
#line 1987 "cplus.met"
            {
#line 1987 "cplus.met"
                PPTREE _ptRes0=0;
#line 1987 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1987 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1987 "cplus.met"
                retTree=_ptRes0;
#line 1987 "cplus.met"
            }
#line 1987 "cplus.met"
            break;
#line 1987 "cplus.met"
#line 1988 "cplus.met"
        case AND_CATCH : 
#line 1988 "cplus.met"
            tokenAhead = 0 ;
#line 1988 "cplus.met"
            CommTerm();
#line 1988 "cplus.met"
#line 1988 "cplus.met"
            {
#line 1988 "cplus.met"
                PPTREE _ptRes0=0;
#line 1988 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1988 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1988 "cplus.met"
                retTree=_ptRes0;
#line 1988 "cplus.met"
            }
#line 1988 "cplus.met"
            break;
#line 1988 "cplus.met"
#line 1989 "cplus.met"
        default : 
#line 1989 "cplus.met"
#line 1989 "cplus.met"
            
#line 1989 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1989 "cplus.met"
            goto macro_exit;
#line 1989 "cplus.met"
            break;
#line 1989 "cplus.met"
    }
#line 1989 "cplus.met"
#line 1991 "cplus.met"
    {
#line 1991 "cplus.met"
        PPTREE _ptRes0=0;
#line 1991 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1991 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1991 "cplus.met"
        retTree=_ptRes0;
#line 1991 "cplus.met"
    }
#line 1991 "cplus.met"
#line 1992 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1992 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1992 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1992 "cplus.met"
    } else {
#line 1992 "cplus.met"
        tokenAhead = 0 ;
#line 1992 "cplus.met"
    }
#line 1992 "cplus.met"
#line 1993 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 67, cplus)){
#line 1993 "cplus.met"
#line 1994 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1994 "cplus.met"
#line 1994 "cplus.met"
    }
#line 1994 "cplus.met"
#line 1995 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1995 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1995 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1995 "cplus.met"
    } else {
#line 1995 "cplus.met"
        tokenAhead = 0 ;
#line 1995 "cplus.met"
    }
#line 1995 "cplus.met"
#line 1996 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1996 "cplus.met"
#line 1996 "cplus.met"
    }
#line 1996 "cplus.met"
#line 1998 "cplus.met"
    {
#line 1998 "cplus.met"
        _retValue = retTree ;
#line 1998 "cplus.met"
        goto macro_ret;
#line 1998 "cplus.met"
        
#line 1998 "cplus.met"
    }
#line 1998 "cplus.met"
#line 1998 "cplus.met"
#line 1998 "cplus.met"

#line 1999 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1999 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1999 "cplus.met"
return((PPTREE) 0);
#line 1999 "cplus.met"

#line 1999 "cplus.met"
macro_exit :
#line 1999 "cplus.met"

#line 1999 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1999 "cplus.met"
    _funcLevel--;
#line 1999 "cplus.met"
    return((PPTREE) -1) ;
#line 1999 "cplus.met"

#line 1999 "cplus.met"
macro_ret :
#line 1999 "cplus.met"
    
#line 1999 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1999 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1999 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1999 "cplus.met"
    return _retValue ;
#line 1999 "cplus.met"
}
#line 1999 "cplus.met"

#line 1999 "cplus.met"
#line 2001 "cplus.met"
PPTREE cplus::macro_extended ( int error_free)
#line 2001 "cplus.met"
{
#line 2001 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2001 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2001 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2001 "cplus.met"
    int _Debug = TRACE_RULE("macro_extended",TRACE_ENTER,(PPTREE)0);
#line 2001 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2001 "cplus.met"
#line 2001 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2001 "cplus.met"
#line 2003 "cplus.met"
#line 2004 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_SERIAL,"DECLARE_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 2004 "cplus.met"
#line 2004 "cplus.met"
        {
#line 2004 "cplus.met"
            PPTREE _ptRes0=0;
#line 2004 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2004 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 2004 "cplus.met"
            retTree=_ptRes0;
#line 2004 "cplus.met"
        }
#line 2004 "cplus.met"
    } else 
#line 2004 "cplus.met"
#line 2005 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNAMIC,"IMPLEMENT_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 2005 "cplus.met"
#line 2005 "cplus.met"
        {
#line 2005 "cplus.met"
            PPTREE _ptRes0=0;
#line 2005 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2005 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 2005 "cplus.met"
            retTree=_ptRes0;
#line 2005 "cplus.met"
        }
#line 2005 "cplus.met"
    } else 
#line 2005 "cplus.met"
#line 2006 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_DYNCREATE,"IMPLEMENT_DYNCREATE") && (tokenAhead = 0,CommTerm(),1))){
#line 2006 "cplus.met"
#line 2006 "cplus.met"
        {
#line 2006 "cplus.met"
            PPTREE _ptRes0=0;
#line 2006 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2006 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 2006 "cplus.met"
            retTree=_ptRes0;
#line 2006 "cplus.met"
        }
#line 2006 "cplus.met"
    } else 
#line 2006 "cplus.met"
#line 2007 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(IMPLEMENT_SERIAL,"IMPLEMENT_SERIAL") && (tokenAhead = 0,CommTerm(),1))){
#line 2007 "cplus.met"
#line 2007 "cplus.met"
        {
#line 2007 "cplus.met"
            PPTREE _ptRes0=0;
#line 2007 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2007 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 2007 "cplus.met"
            retTree=_ptRes0;
#line 2007 "cplus.met"
        }
#line 2007 "cplus.met"
    } else 
#line 2007 "cplus.met"
#line 2008 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(DECLARE_DYNAMIC,"DECLARE_DYNAMIC") && (tokenAhead = 0,CommTerm(),1))){
#line 2008 "cplus.met"
#line 2008 "cplus.met"
        {
#line 2008 "cplus.met"
            PPTREE _ptRes0=0;
#line 2008 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2008 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 2008 "cplus.met"
            retTree=_ptRes0;
#line 2008 "cplus.met"
        }
#line 2008 "cplus.met"
    } else 
#line 2008 "cplus.met"
#line 2009 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(BEGIN_MESSAGE_MAP,"BEGIN_MESSAGE_MAP") && (tokenAhead = 0,CommTerm(),1))){
#line 2009 "cplus.met"
#line 2009 "cplus.met"
        {
#line 2009 "cplus.met"
            PPTREE _ptRes0=0;
#line 2009 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2009 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 2009 "cplus.met"
            retTree=_ptRes0;
#line 2009 "cplus.met"
        }
#line 2009 "cplus.met"
    } else 
#line 2009 "cplus.met"
#line 2010 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_UPPER,"CATCH_UPPER") && (tokenAhead = 0,CommTerm(),1))){
#line 2010 "cplus.met"
#line 2010 "cplus.met"
        {
#line 2010 "cplus.met"
            PPTREE _ptRes0=0;
#line 2010 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2010 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 2010 "cplus.met"
            retTree=_ptRes0;
#line 2010 "cplus.met"
        }
#line 2010 "cplus.met"
    } else 
#line 2010 "cplus.met"
#line 2011 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(CATCH_ALL,"CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))){
#line 2011 "cplus.met"
#line 2011 "cplus.met"
        {
#line 2011 "cplus.met"
            PPTREE _ptRes0=0;
#line 2011 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2011 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 2011 "cplus.met"
            retTree=_ptRes0;
#line 2011 "cplus.met"
        }
#line 2011 "cplus.met"
    } else 
#line 2011 "cplus.met"
#line 2012 "cplus.met"
    if(((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(AND_CATCH,"AND_CATCH") && (tokenAhead = 0,CommTerm(),1))){
#line 2012 "cplus.met"
#line 2012 "cplus.met"
        {
#line 2012 "cplus.met"
            PPTREE _ptRes0=0;
#line 2012 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2012 "cplus.met"
            ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 2012 "cplus.met"
            retTree=_ptRes0;
#line 2012 "cplus.met"
        }
#line 2012 "cplus.met"
    } else 
#line 2012 "cplus.met"
#line 2013 "cplus.met"
    if(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2013 "cplus.met"
#line 2013 "cplus.met"
        {
#line 2013 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2013 "cplus.met"
            _ptRes0= MakeTree(IDENT, 1);
#line 2013 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2013 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree0))) {
#line 2013 "cplus.met"
                MulFreeTree(4,_ptRes0,_ptTree0,retTree,valTree);
                TOKEN_EXIT(macro_extended_exit,"IDENT")
#line 2013 "cplus.met"
            } else {
#line 2013 "cplus.met"
                tokenAhead = 0 ;
#line 2013 "cplus.met"
            }
#line 2013 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2013 "cplus.met"
            retTree=_ptRes0;
#line 2013 "cplus.met"
        }
#line 2013 "cplus.met"
    } else 
#line 2013 "cplus.met"
#line 2014 "cplus.met"
    if (1) {
#line 2014 "cplus.met"
#line 2014 "cplus.met"
        
#line 2014 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        LEX_EXIT ("",0);
#line 2014 "cplus.met"
        goto macro_extended_exit;
#line 2014 "cplus.met"
    } else 
#line 2014 "cplus.met"
     ;
#line 2014 "cplus.met"
#line 2016 "cplus.met"
    {
#line 2016 "cplus.met"
        PPTREE _ptRes0=0;
#line 2016 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 2016 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 2016 "cplus.met"
        retTree=_ptRes0;
#line 2016 "cplus.met"
    }
#line 2016 "cplus.met"
#line 2017 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2017 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2017 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,"(")
#line 2017 "cplus.met"
    } else {
#line 2017 "cplus.met"
        tokenAhead = 0 ;
#line 2017 "cplus.met"
    }
#line 2017 "cplus.met"
#line 2018 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 67, cplus)){
#line 2018 "cplus.met"
#line 2019 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 2019 "cplus.met"
#line 2019 "cplus.met"
    }
#line 2019 "cplus.met"
#line 2020 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2020 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2020 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_extended_exit,")")
#line 2020 "cplus.met"
    } else {
#line 2020 "cplus.met"
        tokenAhead = 0 ;
#line 2020 "cplus.met"
    }
#line 2020 "cplus.met"
#line 2021 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 2021 "cplus.met"
#line 2021 "cplus.met"
    }
#line 2021 "cplus.met"
#line 2023 "cplus.met"
    {
#line 2023 "cplus.met"
        _retValue = retTree ;
#line 2023 "cplus.met"
        goto macro_extended_ret;
#line 2023 "cplus.met"
        
#line 2023 "cplus.met"
    }
#line 2023 "cplus.met"
#line 2023 "cplus.met"
#line 2023 "cplus.met"

#line 2024 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2024 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2024 "cplus.met"
return((PPTREE) 0);
#line 2024 "cplus.met"

#line 2024 "cplus.met"
macro_extended_exit :
#line 2024 "cplus.met"

#line 2024 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_EXIT,(PPTREE)0);
#line 2024 "cplus.met"
    _funcLevel--;
#line 2024 "cplus.met"
    return((PPTREE) -1) ;
#line 2024 "cplus.met"

#line 2024 "cplus.met"
macro_extended_ret :
#line 2024 "cplus.met"
    
#line 2024 "cplus.met"
    _Debug = TRACE_RULE("macro_extended",TRACE_RETURN,_retValue);
#line 2024 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2024 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2024 "cplus.met"
    return _retValue ;
#line 2024 "cplus.met"
}
#line 2024 "cplus.met"

#line 2024 "cplus.met"
#line 772 "cplus.met"
PPTREE cplus::main_entry ( int error_free)
#line 772 "cplus.met"
{
#line 772 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 772 "cplus.met"
    int _value,_nbPre = 0 ;
#line 772 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 772 "cplus.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 772 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 772 "cplus.met"
#line 773 "cplus.met"
    {
#line 773 "cplus.met"
        PPTREE _ptTree0=0;
#line 773 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 773 "cplus.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 773 "cplus.met"
        }
#line 773 "cplus.met"
        _retValue =_ptTree0;
#line 773 "cplus.met"
        goto main_entry_ret;
#line 773 "cplus.met"
    }
#line 773 "cplus.met"
#line 773 "cplus.met"
#line 773 "cplus.met"

#line 774 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 774 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 774 "cplus.met"
return((PPTREE) 0);
#line 774 "cplus.met"

#line 774 "cplus.met"
main_entry_exit :
#line 774 "cplus.met"

#line 774 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 774 "cplus.met"
    _funcLevel--;
#line 774 "cplus.met"
    return((PPTREE) -1) ;
#line 774 "cplus.met"

#line 774 "cplus.met"
main_entry_ret :
#line 774 "cplus.met"
    
#line 774 "cplus.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 774 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 774 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 774 "cplus.met"
    return _retValue ;
#line 774 "cplus.met"
}
#line 774 "cplus.met"

#line 774 "cplus.met"
#line 2301 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2301 "cplus.met"
{
#line 2301 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2301 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2301 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2301 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2301 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2301 "cplus.met"
#line 2301 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2301 "cplus.met"
#line 2303 "cplus.met"
    {
#line 2303 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2303 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2303 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2303 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2303 "cplus.met"
        }
#line 2303 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2303 "cplus.met"
        retTree=_ptRes0;
#line 2303 "cplus.met"
    }
#line 2303 "cplus.met"
#line 2304 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2304 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2304 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2304 "cplus.met"
    } else {
#line 2304 "cplus.met"
        tokenAhead = 0 ;
#line 2304 "cplus.met"
    }
#line 2304 "cplus.met"
#line 2305 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2305 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2305 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2305 "cplus.met"
    } else {
#line 2305 "cplus.met"
        tokenAhead = 0 ;
#line 2305 "cplus.met"
    }
#line 2305 "cplus.met"
#line 2306 "cplus.met"
    {
#line 2306 "cplus.met"
        _retValue = retTree ;
#line 2306 "cplus.met"
        goto member_declarator_ret;
#line 2306 "cplus.met"
        
#line 2306 "cplus.met"
    }
#line 2306 "cplus.met"
#line 2306 "cplus.met"
#line 2306 "cplus.met"

#line 2307 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2307 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2307 "cplus.met"
return((PPTREE) 0);
#line 2307 "cplus.met"

#line 2307 "cplus.met"
member_declarator_exit :
#line 2307 "cplus.met"

#line 2307 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2307 "cplus.met"
    _funcLevel--;
#line 2307 "cplus.met"
    return((PPTREE) -1) ;
#line 2307 "cplus.met"

#line 2307 "cplus.met"
member_declarator_ret :
#line 2307 "cplus.met"
    
#line 2307 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2307 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2307 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2307 "cplus.met"
    return _retValue ;
#line 2307 "cplus.met"
}
#line 2307 "cplus.met"

#line 2307 "cplus.met"
#line 2026 "cplus.met"
PPTREE cplus::message_map ( int error_free)
#line 2026 "cplus.met"
{
#line 2026 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2026 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2026 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2026 "cplus.met"
    int _Debug = TRACE_RULE("message_map",TRACE_ENTER,(PPTREE)0);
#line 2026 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2026 "cplus.met"
#line 2026 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2026 "cplus.met"
#line 2026 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2026 "cplus.met"
#line 2028 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2028 "cplus.met"
    switch( lexEl.Value) {
#line 2028 "cplus.met"
#line 2029 "cplus.met"
        case META : 
#line 2029 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 2029 "cplus.met"
#line 2029 "cplus.met"
            break;
#line 2029 "cplus.met"
        default :
#line 2029 "cplus.met"
            MulFreeTree(3,_addlist1,list,retTree);
            CASE_EXIT(message_map_exit,"BEGIN_MESSAGE_MAP")
#line 2029 "cplus.met"
            break;
#line 2029 "cplus.met"
    }
#line 2029 "cplus.met"
#line 2031 "cplus.met"
    {
#line 2031 "cplus.met"
        PPTREE _ptRes0=0;
#line 2031 "cplus.met"
        _ptRes0= MakeTree(MESSAGE_MAP, 1);
#line 2031 "cplus.met"
        retTree=_ptRes0;
#line 2031 "cplus.met"
    }
#line 2031 "cplus.met"
#line 2031 "cplus.met"
    _addlist1 = list ;
#line 2031 "cplus.met"
#line 2032 "cplus.met"
    while (! ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&SEE_TOKEN( END_MESSAGE_MAP,"END_MESSAGE_MAP"))) { 
#line 2032 "cplus.met"
#line 2033 "cplus.met"
#line 2033 "cplus.met"
        {
#line 2033 "cplus.met"
            PPTREE _ptTree0=0;
#line 2033 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 2033 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(message_map_exit,"message_map")
#line 2033 "cplus.met"
            }
#line 2033 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2033 "cplus.met"
        }
#line 2033 "cplus.met"
#line 2033 "cplus.met"
        if (list){
#line 2033 "cplus.met"
#line 2033 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2033 "cplus.met"
        } else {
#line 2033 "cplus.met"
#line 2033 "cplus.met"
            list = _addlist1 ;
#line 2033 "cplus.met"
        }
#line 2033 "cplus.met"
    } 
#line 2033 "cplus.met"
#line 2034 "cplus.met"
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2034 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        PROG_EXIT(message_map_exit,"message_map")
#line 2034 "cplus.met"
    }
#line 2034 "cplus.met"
#line 2035 "cplus.met"
    {
#line 2035 "cplus.met"
        PPTREE _ptTree0=0;
#line 2035 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 2035 "cplus.met"
        _retValue =_ptTree0;
#line 2035 "cplus.met"
        goto message_map_ret;
#line 2035 "cplus.met"
    }
#line 2035 "cplus.met"
#line 2035 "cplus.met"
#line 2035 "cplus.met"

#line 2036 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2036 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2036 "cplus.met"
return((PPTREE) 0);
#line 2036 "cplus.met"

#line 2036 "cplus.met"
message_map_exit :
#line 2036 "cplus.met"

#line 2036 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_EXIT,(PPTREE)0);
#line 2036 "cplus.met"
    _funcLevel--;
#line 2036 "cplus.met"
    return((PPTREE) -1) ;
#line 2036 "cplus.met"

#line 2036 "cplus.met"
message_map_ret :
#line 2036 "cplus.met"
    
#line 2036 "cplus.met"
    _Debug = TRACE_RULE("message_map",TRACE_RETURN,_retValue);
#line 2036 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2036 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2036 "cplus.met"
    return _retValue ;
#line 2036 "cplus.met"
}
#line 2036 "cplus.met"

#line 2036 "cplus.met"
#line 2888 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2888 "cplus.met"
{
#line 2888 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2888 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2888 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2888 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2888 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2888 "cplus.met"
#line 2888 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2888 "cplus.met"
#line 2890 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2890 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2890 "cplus.met"
    }
#line 2890 "cplus.met"
#line 2891 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2891 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2891 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2891 "cplus.met"
#line 2892 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2892 "cplus.met"
        switch( lexEl.Value) {
#line 2892 "cplus.met"
#line 2893 "cplus.met"
            case ETOI : 
#line 2893 "cplus.met"
                tokenAhead = 0 ;
#line 2893 "cplus.met"
                CommTerm();
#line 2893 "cplus.met"
#line 2893 "cplus.met"
                {
#line 2893 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2893 "cplus.met"
                    _ptRes0= MakeTree(MUL, 2);
#line 2893 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2893 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2893 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2893 "cplus.met"
                    }
#line 2893 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2893 "cplus.met"
                    expTree=_ptRes0;
#line 2893 "cplus.met"
                }
#line 2893 "cplus.met"
                break;
#line 2893 "cplus.met"
#line 2894 "cplus.met"
            case META : 
#line 2894 "cplus.met"
            case SLAS : 
#line 2894 "cplus.met"
                tokenAhead = 0 ;
#line 2894 "cplus.met"
                CommTerm();
#line 2894 "cplus.met"
#line 2894 "cplus.met"
                {
#line 2894 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2894 "cplus.met"
                    _ptRes0= MakeTree(DIV, 2);
#line 2894 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2894 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2894 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2894 "cplus.met"
                    }
#line 2894 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2894 "cplus.met"
                    expTree=_ptRes0;
#line 2894 "cplus.met"
                }
#line 2894 "cplus.met"
                break;
#line 2894 "cplus.met"
#line 2895 "cplus.met"
            case POURC : 
#line 2895 "cplus.met"
                tokenAhead = 0 ;
#line 2895 "cplus.met"
                CommTerm();
#line 2895 "cplus.met"
#line 2895 "cplus.met"
                {
#line 2895 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2895 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2895 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2895 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2895 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2895 "cplus.met"
                    }
#line 2895 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2895 "cplus.met"
                    expTree=_ptRes0;
#line 2895 "cplus.met"
                }
#line 2895 "cplus.met"
                break;
#line 2895 "cplus.met"
            default :
#line 2895 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2895 "cplus.met"
                break;
#line 2895 "cplus.met"
        }
#line 2895 "cplus.met"
    } 
#line 2895 "cplus.met"
#line 2897 "cplus.met"
    {
#line 2897 "cplus.met"
        _retValue = expTree ;
#line 2897 "cplus.met"
        goto multiplicative_expression_ret;
#line 2897 "cplus.met"
        
#line 2897 "cplus.met"
    }
#line 2897 "cplus.met"
#line 2897 "cplus.met"
#line 2897 "cplus.met"

#line 2898 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2898 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2898 "cplus.met"
return((PPTREE) 0);
#line 2898 "cplus.met"

#line 2898 "cplus.met"
multiplicative_expression_exit :
#line 2898 "cplus.met"

#line 2898 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2898 "cplus.met"
    _funcLevel--;
#line 2898 "cplus.met"
    return((PPTREE) -1) ;
#line 2898 "cplus.met"

#line 2898 "cplus.met"
multiplicative_expression_ret :
#line 2898 "cplus.met"
    
#line 2898 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2898 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2898 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2898 "cplus.met"
    return _retValue ;
#line 2898 "cplus.met"
}
#line 2898 "cplus.met"

#line 2898 "cplus.met"
#line 3801 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3801 "cplus.met"
{
#line 3801 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3801 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3801 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3801 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3801 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3801 "cplus.met"
#line 3801 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3801 "cplus.met"
#line 3801 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3801 "cplus.met"
#line 3803 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3803 "cplus.met"
    switch( lexEl.Value) {
#line 3803 "cplus.met"
#line 3804 "cplus.met"
        case NAMESPACE : 
#line 3804 "cplus.met"
            tokenAhead = 0 ;
#line 3804 "cplus.met"
            CommTerm();
#line 3804 "cplus.met"
#line 3805 "cplus.met"
#line 3807 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3807 "cplus.met"
#line 3809 "cplus.met"
                {
#line 3809 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3809 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3809 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3809 "cplus.met"
                    ident=_ptRes0;
#line 3809 "cplus.met"
                }
#line 3809 "cplus.met"
            }
#line 3809 "cplus.met"
#line 3810 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 22, cplus)){
#line 3810 "cplus.met"
#line 3810 "cplus.met"
            }
#line 3810 "cplus.met"
#line 3813 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3813 "cplus.met"
            switch( lexEl.Value) {
#line 3813 "cplus.met"
#line 3817 "cplus.met"
                case AOUV : 
#line 3817 "cplus.met"
                    tokenAhead = 0 ;
#line 3817 "cplus.met"
                    CommTerm();
#line 3817 "cplus.met"
#line 3816 "cplus.met"
#line 3817 "cplus.met"
                    {
#line 3817 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3817 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3817 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3817 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3817 "cplus.met"
                        retTree=_ptRes0;
#line 3817 "cplus.met"
                    }
#line 3817 "cplus.met"
#line 3817 "cplus.met"
                    _addlist1 = list ;
#line 3817 "cplus.met"
#line 3818 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3818 "cplus.met"
#line 3819 "cplus.met"
#line 3820 "cplus.met"
                        {
#line 3820 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3820 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 3820 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3820 "cplus.met"
                            }
#line 3820 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3820 "cplus.met"
                        }
#line 3820 "cplus.met"
#line 3820 "cplus.met"
                        if (list){
#line 3820 "cplus.met"
#line 3820 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3820 "cplus.met"
                        } else {
#line 3820 "cplus.met"
#line 3820 "cplus.met"
                            list = _addlist1 ;
#line 3820 "cplus.met"
                        }
#line 3820 "cplus.met"
#line 3820 "cplus.met"
                    } 
#line 3820 "cplus.met"
#line 3822 "cplus.met"
                    {
#line 3822 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3822 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 3822 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3822 "cplus.met"
                        }
#line 3822 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3822 "cplus.met"
                    }
#line 3822 "cplus.met"
#line 3823 "cplus.met"
                    {
#line 3823 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3823 "cplus.met"
                        {
#line 3823 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3823 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3823 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3823 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3823 "cplus.met"
                        }
#line 3823 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3823 "cplus.met"
                    }
#line 3823 "cplus.met"
#line 3823 "cplus.met"
                    break;
#line 3823 "cplus.met"
#line 3827 "cplus.met"
                case EGAL : 
#line 3827 "cplus.met"
                    tokenAhead = 0 ;
#line 3827 "cplus.met"
                    CommTerm();
#line 3827 "cplus.met"
#line 3826 "cplus.met"
#line 3827 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3827 "cplus.met"
#line 3828 "cplus.met"
                        
#line 3828 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3828 "cplus.met"
                        goto name_space_exit;
#line 3828 "cplus.met"
#line 3828 "cplus.met"
                    }
#line 3828 "cplus.met"
#line 3829 "cplus.met"
                    {
#line 3829 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3829 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3829 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3829 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3829 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3829 "cplus.met"
                        }
#line 3829 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3829 "cplus.met"
                        retTree=_ptRes0;
#line 3829 "cplus.met"
                    }
#line 3829 "cplus.met"
#line 3829 "cplus.met"
                    break;
#line 3829 "cplus.met"
                default :
#line 3829 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3829 "cplus.met"
                    break;
#line 3829 "cplus.met"
            }
#line 3829 "cplus.met"
#line 3829 "cplus.met"
            break;
#line 3829 "cplus.met"
#line 3833 "cplus.met"
        case USING : 
#line 3833 "cplus.met"
            tokenAhead = 0 ;
#line 3833 "cplus.met"
            CommTerm();
#line 3833 "cplus.met"
#line 3834 "cplus.met"
#line 3835 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3835 "cplus.met"
#line 3836 "cplus.met"
#line 3837 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 22, cplus)){
#line 3837 "cplus.met"
#line 3837 "cplus.met"
                }
#line 3837 "cplus.met"
#line 3839 "cplus.met"
                {
#line 3839 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3839 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3839 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3839 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3839 "cplus.met"
                    }
#line 3839 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3839 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3839 "cplus.met"
                    retTree=_ptRes0;
#line 3839 "cplus.met"
                }
#line 3839 "cplus.met"
#line 3839 "cplus.met"
#line 3839 "cplus.met"
            } else {
#line 3839 "cplus.met"
#line 3842 "cplus.met"
#line 3843 "cplus.met"
                if ( (ident=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3843 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    PROG_EXIT(name_space_exit,"name_space")
#line 3843 "cplus.met"
                }
#line 3843 "cplus.met"
#line 3844 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 3844 "cplus.met"
#line 3845 "cplus.met"
#line 3846 "cplus.met"
                    {
#line 3846 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3846 "cplus.met"
                        _ptRes0= MakeTree(USING_TYPE, 2);
#line 3846 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3846 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 3846 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3846 "cplus.met"
                        }
#line 3846 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3846 "cplus.met"
                        retTree=_ptRes0;
#line 3846 "cplus.met"
                    }
#line 3846 "cplus.met"
#line 3846 "cplus.met"
#line 3846 "cplus.met"
                } else {
#line 3846 "cplus.met"
#line 3849 "cplus.met"
                    {
#line 3849 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3849 "cplus.met"
                        _ptRes0= MakeTree(USING, 1);
#line 3849 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3849 "cplus.met"
                        retTree=_ptRes0;
#line 3849 "cplus.met"
                    }
#line 3849 "cplus.met"
                }
#line 3849 "cplus.met"
#line 3849 "cplus.met"
            }
#line 3849 "cplus.met"
#line 3851 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3851 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3851 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3851 "cplus.met"
            } else {
#line 3851 "cplus.met"
                tokenAhead = 0 ;
#line 3851 "cplus.met"
            }
#line 3851 "cplus.met"
#line 3851 "cplus.met"
            break;
#line 3851 "cplus.met"
        default :
#line 3851 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3851 "cplus.met"
            break;
#line 3851 "cplus.met"
    }
#line 3851 "cplus.met"
#line 3854 "cplus.met"
    {
#line 3854 "cplus.met"
        _retValue = retTree ;
#line 3854 "cplus.met"
        goto name_space_ret;
#line 3854 "cplus.met"
        
#line 3854 "cplus.met"
    }
#line 3854 "cplus.met"
#line 3854 "cplus.met"
#line 3854 "cplus.met"

#line 3855 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3855 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3855 "cplus.met"
return((PPTREE) 0);
#line 3855 "cplus.met"

#line 3855 "cplus.met"
name_space_exit :
#line 3855 "cplus.met"

#line 3855 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3855 "cplus.met"
    _funcLevel--;
#line 3855 "cplus.met"
    return((PPTREE) -1) ;
#line 3855 "cplus.met"

#line 3855 "cplus.met"
name_space_ret :
#line 3855 "cplus.met"
    
#line 3855 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3855 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3855 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3855 "cplus.met"
    return _retValue ;
#line 3855 "cplus.met"
}
#line 3855 "cplus.met"

#line 3855 "cplus.met"
#line 2998 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2998 "cplus.met"
{
#line 2998 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2998 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2998 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2998 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2998 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2998 "cplus.met"
#line 2998 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2998 "cplus.met"
#line 3000 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3000 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3000 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 3000 "cplus.met"
    } else {
#line 3000 "cplus.met"
        tokenAhead = 0 ;
#line 3000 "cplus.met"
    }
#line 3000 "cplus.met"
#line 3001 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3001 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 3001 "cplus.met"
    }
#line 3001 "cplus.met"
#line 3002 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3002 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3002 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 3002 "cplus.met"
    } else {
#line 3002 "cplus.met"
        tokenAhead = 0 ;
#line 3002 "cplus.met"
    }
#line 3002 "cplus.met"
#line 3003 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3003 "cplus.met"
#line 3004 "cplus.met"
#line 3005 "cplus.met"
        {
#line 3005 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3005 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3005 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3005 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3005 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 3005 "cplus.met"
            }
#line 3005 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3005 "cplus.met"
            retTree=_ptRes0;
#line 3005 "cplus.met"
        }
#line 3005 "cplus.met"
#line 3006 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3006 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3006 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
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
            _retValue = retTree ;
#line 3007 "cplus.met"
            goto new_1_ret;
#line 3007 "cplus.met"
            
#line 3007 "cplus.met"
        }
#line 3007 "cplus.met"
#line 3007 "cplus.met"
#line 3007 "cplus.met"
    } else {
#line 3007 "cplus.met"
#line 3010 "cplus.met"
        {
#line 3010 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3010 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3010 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3010 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3010 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 3010 "cplus.met"
            }
#line 3010 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3010 "cplus.met"
            retTree=_ptRes0;
#line 3010 "cplus.met"
        }
#line 3010 "cplus.met"
    }
#line 3010 "cplus.met"
#line 3011 "cplus.met"
    {
#line 3011 "cplus.met"
        _retValue = retTree ;
#line 3011 "cplus.met"
        goto new_1_ret;
#line 3011 "cplus.met"
        
#line 3011 "cplus.met"
    }
#line 3011 "cplus.met"
#line 3011 "cplus.met"
#line 3011 "cplus.met"

#line 3012 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3012 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3012 "cplus.met"
return((PPTREE) 0);
#line 3012 "cplus.met"

#line 3012 "cplus.met"
new_1_exit :
#line 3012 "cplus.met"

#line 3012 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 3012 "cplus.met"
    _funcLevel--;
#line 3012 "cplus.met"
    return((PPTREE) -1) ;
#line 3012 "cplus.met"

#line 3012 "cplus.met"
new_1_ret :
#line 3012 "cplus.met"
    
#line 3012 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 3012 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3012 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3012 "cplus.met"
    return _retValue ;
#line 3012 "cplus.met"
}
#line 3012 "cplus.met"

#line 3012 "cplus.met"
#line 3014 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 3014 "cplus.met"
{
#line 3014 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3014 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3014 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3014 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 3014 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3014 "cplus.met"
#line 3014 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3014 "cplus.met"
#line 3016 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3016 "cplus.met"
#line 3017 "cplus.met"
#line 3018 "cplus.met"
        {
#line 3018 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3018 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3018 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3018 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 3018 "cplus.met"
            }
#line 3018 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3018 "cplus.met"
            retTree=_ptRes0;
#line 3018 "cplus.met"
        }
#line 3018 "cplus.met"
#line 3019 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3019 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3019 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 3019 "cplus.met"
        } else {
#line 3019 "cplus.met"
            tokenAhead = 0 ;
#line 3019 "cplus.met"
        }
#line 3019 "cplus.met"
#line 3020 "cplus.met"
        {
#line 3020 "cplus.met"
            _retValue = retTree ;
#line 3020 "cplus.met"
            goto new_2_ret;
#line 3020 "cplus.met"
            
#line 3020 "cplus.met"
        }
#line 3020 "cplus.met"
#line 3020 "cplus.met"
#line 3020 "cplus.met"
    } else {
#line 3020 "cplus.met"
#line 3023 "cplus.met"
        {
#line 3023 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3023 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3023 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3023 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 3023 "cplus.met"
            }
#line 3023 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3023 "cplus.met"
            retTree=_ptRes0;
#line 3023 "cplus.met"
        }
#line 3023 "cplus.met"
    }
#line 3023 "cplus.met"
#line 3024 "cplus.met"
    {
#line 3024 "cplus.met"
        _retValue = retTree ;
#line 3024 "cplus.met"
        goto new_2_ret;
#line 3024 "cplus.met"
        
#line 3024 "cplus.met"
    }
#line 3024 "cplus.met"
#line 3024 "cplus.met"
#line 3024 "cplus.met"

#line 3025 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3025 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3025 "cplus.met"
return((PPTREE) 0);
#line 3025 "cplus.met"

#line 3025 "cplus.met"
new_2_exit :
#line 3025 "cplus.met"

#line 3025 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 3025 "cplus.met"
    _funcLevel--;
#line 3025 "cplus.met"
    return((PPTREE) -1) ;
#line 3025 "cplus.met"

#line 3025 "cplus.met"
new_2_ret :
#line 3025 "cplus.met"
    
#line 3025 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 3025 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3025 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3025 "cplus.met"
    return _retValue ;
#line 3025 "cplus.met"
}
#line 3025 "cplus.met"

#line 3025 "cplus.met"
#line 2540 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2540 "cplus.met"
{
#line 2540 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2540 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2540 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2540 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2540 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2540 "cplus.met"
#line 2540 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2540 "cplus.met"
#line 2542 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 129, cplus)){
#line 2542 "cplus.met"
#line 2543 "cplus.met"
        {
#line 2543 "cplus.met"
            PPTREE _ptTree0=0;
#line 2543 "cplus.met"
            {
#line 2543 "cplus.met"
                PPTREE _ptTree1=0;
#line 2543 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2543 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2543 "cplus.met"
                }
#line 2543 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2543 "cplus.met"
            }
#line 2543 "cplus.met"
            _retValue =_ptTree0;
#line 2543 "cplus.met"
            goto new_declarator_ret;
#line 2543 "cplus.met"
        }
#line 2543 "cplus.met"
    }
#line 2543 "cplus.met"
#line 2544 "cplus.met"
    retTree = (PPTREE) 0;
#line 2544 "cplus.met"
#line 2545 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2545 "cplus.met"
    switch( lexEl.Value) {
#line 2545 "cplus.met"
#line 2546 "cplus.met"
        case ETOI : 
#line 2546 "cplus.met"
            tokenAhead = 0 ;
#line 2546 "cplus.met"
            CommTerm();
#line 2546 "cplus.met"
#line 2546 "cplus.met"
            {
#line 2546 "cplus.met"
                PPTREE _ptTree0=0;
#line 2546 "cplus.met"
                {
#line 2546 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2546 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2546 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2546 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2546 "cplus.met"
                    }
#line 2546 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2546 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2546 "cplus.met"
                }
#line 2546 "cplus.met"
                _retValue =_ptTree0;
#line 2546 "cplus.met"
                goto new_declarator_ret;
#line 2546 "cplus.met"
            }
#line 2546 "cplus.met"
            break;
#line 2546 "cplus.met"
#line 2547 "cplus.met"
        case META : 
#line 2547 "cplus.met"
        case IDENT : 
#line 2547 "cplus.met"
#line 2548 "cplus.met"
#line 2549 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2549 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2549 "cplus.met"
            }
#line 2549 "cplus.met"
#line 2550 "cplus.met"
            {
#line 2550 "cplus.met"
                PPTREE _ptTree0=0;
#line 2550 "cplus.met"
                {
#line 2550 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2550 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2550 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2550 "cplus.met"
                    }
#line 2550 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2550 "cplus.met"
                }
#line 2550 "cplus.met"
                _retValue =_ptTree0;
#line 2550 "cplus.met"
                goto new_declarator_ret;
#line 2550 "cplus.met"
            }
#line 2550 "cplus.met"
#line 2550 "cplus.met"
            break;
#line 2550 "cplus.met"
#line 2559 "cplus.met"
        default : 
#line 2559 "cplus.met"
#line 2555 "cplus.met"
#line 2557 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2557 "cplus.met"
#line 2558 "cplus.met"
#line 2559 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 2559 "cplus.met"
#line 2560 "cplus.met"
                    {
#line 2560 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2560 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2560 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2560 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2560 "cplus.met"
                        retTree=_ptRes0;
#line 2560 "cplus.met"
                    }
#line 2560 "cplus.met"
                } else {
#line 2560 "cplus.met"
#line 2562 "cplus.met"
                    {
#line 2562 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2562 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2562 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2562 "cplus.met"
                        retTree=_ptRes0;
#line 2562 "cplus.met"
                    }
#line 2562 "cplus.met"
                }
#line 2562 "cplus.met"
#line 2563 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2563 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2563 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2563 "cplus.met"
                } else {
#line 2563 "cplus.met"
                    tokenAhead = 0 ;
#line 2563 "cplus.met"
                }
#line 2563 "cplus.met"
#line 2563 "cplus.met"
            } 
#line 2563 "cplus.met"
#line 2565 "cplus.met"
            {
#line 2565 "cplus.met"
                _retValue = retTree ;
#line 2565 "cplus.met"
                goto new_declarator_ret;
#line 2565 "cplus.met"
                
#line 2565 "cplus.met"
            }
#line 2565 "cplus.met"
#line 2565 "cplus.met"
            break;
#line 2565 "cplus.met"
    }
#line 2565 "cplus.met"
#line 2565 "cplus.met"
#line 2567 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2567 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2567 "cplus.met"
return((PPTREE) 0);
#line 2567 "cplus.met"

#line 2567 "cplus.met"
new_declarator_exit :
#line 2567 "cplus.met"

#line 2567 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2567 "cplus.met"
    _funcLevel--;
#line 2567 "cplus.met"
    return((PPTREE) -1) ;
#line 2567 "cplus.met"

#line 2567 "cplus.met"
new_declarator_ret :
#line 2567 "cplus.met"
    
#line 2567 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2567 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2567 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2567 "cplus.met"
    return _retValue ;
#line 2567 "cplus.met"
}
#line 2567 "cplus.met"

#line 2567 "cplus.met"
#line 2723 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2723 "cplus.met"
{
#line 2723 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2723 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2723 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2723 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2723 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2723 "cplus.met"
#line 2723 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2723 "cplus.met"
#line 2725 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2725 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2725 "cplus.met"
    }
#line 2725 "cplus.met"
#line 2726 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 107, cplus)){
#line 2726 "cplus.met"
#line 2727 "cplus.met"
        {
#line 2727 "cplus.met"
            PPTREE _ptRes0=0;
#line 2727 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2727 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2727 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2727 "cplus.met"
            valTree=_ptRes0;
#line 2727 "cplus.met"
        }
#line 2727 "cplus.met"
    } else {
#line 2727 "cplus.met"
#line 2729 "cplus.met"
        valTree = retTree ;
#line 2729 "cplus.met"
    }
#line 2729 "cplus.met"
#line 2730 "cplus.met"
    {
#line 2730 "cplus.met"
        _retValue = valTree ;
#line 2730 "cplus.met"
        goto new_type_name_ret;
#line 2730 "cplus.met"
        
#line 2730 "cplus.met"
    }
#line 2730 "cplus.met"
#line 2730 "cplus.met"
#line 2730 "cplus.met"

#line 2731 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2731 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2731 "cplus.met"
return((PPTREE) 0);
#line 2731 "cplus.met"

#line 2731 "cplus.met"
new_type_name_exit :
#line 2731 "cplus.met"

#line 2731 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2731 "cplus.met"
    _funcLevel--;
#line 2731 "cplus.met"
    return((PPTREE) -1) ;
#line 2731 "cplus.met"

#line 2731 "cplus.met"
new_type_name_ret :
#line 2731 "cplus.met"
    
#line 2731 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2731 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2731 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2731 "cplus.met"
    return _retValue ;
#line 2731 "cplus.met"
}
#line 2731 "cplus.met"

#line 2731 "cplus.met"
#line 2246 "cplus.met"
PPTREE cplus::noexcept_call ( int error_free)
#line 2246 "cplus.met"
{
#line 2246 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2246 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2246 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2246 "cplus.met"
    int _Debug = TRACE_RULE("noexcept_call",TRACE_ENTER,(PPTREE)0);
#line 2246 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2246 "cplus.met"
#line 2246 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2246 "cplus.met"
#line 2248 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2248 "cplus.met"
    if (  !SEE_TOKEN( NOEXCEPT,"noexcept") || !(CommTerm(),1)) {
#line 2248 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(noexcept_call_exit,"noexcept")
#line 2248 "cplus.met"
    } else {
#line 2248 "cplus.met"
        tokenAhead = 0 ;
#line 2248 "cplus.met"
    }
#line 2248 "cplus.met"
#line 2249 "cplus.met"
    {
#line 2249 "cplus.met"
        PPTREE _ptRes0=0;
#line 2249 "cplus.met"
        _ptRes0= MakeTree(NOEXCEPT, 1);
#line 2249 "cplus.met"
        retTree=_ptRes0;
#line 2249 "cplus.met"
    }
#line 2249 "cplus.met"
#line 2250 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2250 "cplus.met"
#line 2251 "cplus.met"
#line 2252 "cplus.met"
        {
#line 2252 "cplus.met"
            PPTREE _ptTree0=0;
#line 2252 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2252 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(noexcept_call_exit,"noexcept_call")
#line 2252 "cplus.met"
            }
#line 2252 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2252 "cplus.met"
        }
#line 2252 "cplus.met"
#line 2253 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2253 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2253 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(noexcept_call_exit,")")
#line 2253 "cplus.met"
        } else {
#line 2253 "cplus.met"
            tokenAhead = 0 ;
#line 2253 "cplus.met"
        }
#line 2253 "cplus.met"
#line 2253 "cplus.met"
#line 2253 "cplus.met"
    }
#line 2253 "cplus.met"
#line 2255 "cplus.met"
    {
#line 2255 "cplus.met"
        _retValue = retTree ;
#line 2255 "cplus.met"
        goto noexcept_call_ret;
#line 2255 "cplus.met"
        
#line 2255 "cplus.met"
    }
#line 2255 "cplus.met"
#line 2255 "cplus.met"
#line 2255 "cplus.met"

#line 2256 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2256 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2256 "cplus.met"
return((PPTREE) 0);
#line 2256 "cplus.met"

#line 2256 "cplus.met"
noexcept_call_exit :
#line 2256 "cplus.met"

#line 2256 "cplus.met"
    _Debug = TRACE_RULE("noexcept_call",TRACE_EXIT,(PPTREE)0);
#line 2256 "cplus.met"
    _funcLevel--;
#line 2256 "cplus.met"
    return((PPTREE) -1) ;
#line 2256 "cplus.met"

#line 2256 "cplus.met"
noexcept_call_ret :
#line 2256 "cplus.met"
    
#line 2256 "cplus.met"
    _Debug = TRACE_RULE("noexcept_call",TRACE_RETURN,_retValue);
#line 2256 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2256 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2256 "cplus.met"
    return _retValue ;
#line 2256 "cplus.met"
}
#line 2256 "cplus.met"

#line 2256 "cplus.met"
#line 3507 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3507 "cplus.met"
{
#line 3507 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3507 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3507 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3507 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3507 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3507 "cplus.met"
#line 3508 "cplus.met"
    {
#line 3508 "cplus.met"
        PPTREE _ptTree0=0;
#line 3508 "cplus.met"
        {
#line 3508 "cplus.met"
            PPTREE _ptRes1=0;
#line 3508 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3508 "cplus.met"
            _ptTree0=_ptRes1;
#line 3508 "cplus.met"
        }
#line 3508 "cplus.met"
        _retValue =_ptTree0;
#line 3508 "cplus.met"
        goto none_statement_ret;
#line 3508 "cplus.met"
    }
#line 3508 "cplus.met"
#line 3508 "cplus.met"
#line 3508 "cplus.met"

#line 3509 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3509 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3509 "cplus.met"
return((PPTREE) 0);
#line 3509 "cplus.met"

#line 3509 "cplus.met"
none_statement_exit :
#line 3509 "cplus.met"

#line 3509 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3509 "cplus.met"
    _funcLevel--;
#line 3509 "cplus.met"
    return((PPTREE) -1) ;
#line 3509 "cplus.met"

#line 3509 "cplus.met"
none_statement_ret :
#line 3509 "cplus.met"
    
#line 3509 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3509 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3509 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3509 "cplus.met"
    return _retValue ;
#line 3509 "cplus.met"
}
#line 3509 "cplus.met"

#line 3509 "cplus.met"
#line 3176 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 3176 "cplus.met"
{
#line 3176 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3176 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3176 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3176 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 3176 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3176 "cplus.met"
#line 3176 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3176 "cplus.met"
#line 3178 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3178 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 3178 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 3178 "cplus.met"
    } else {
#line 3178 "cplus.met"
        tokenAhead = 0 ;
#line 3178 "cplus.met"
    }
#line 3178 "cplus.met"
#line 3179 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3179 "cplus.met"
    switch( lexEl.Value) {
#line 3179 "cplus.met"
#line 3180 "cplus.met"
        case NEW : 
#line 3180 "cplus.met"
            tokenAhead = 0 ;
#line 3180 "cplus.met"
            CommTerm();
#line 3180 "cplus.met"
#line 3180 "cplus.met"
            {
#line 3180 "cplus.met"
                PPTREE _ptTree0=0;
#line 3180 "cplus.met"
                {
#line 3180 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3180 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3180 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 3180 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3180 "cplus.met"
                }
#line 3180 "cplus.met"
                _retValue =_ptTree0;
#line 3180 "cplus.met"
                goto operator_function_name_ret;
#line 3180 "cplus.met"
            }
#line 3180 "cplus.met"
            break;
#line 3180 "cplus.met"
#line 3181 "cplus.met"
        case DELETE : 
#line 3181 "cplus.met"
            tokenAhead = 0 ;
#line 3181 "cplus.met"
            CommTerm();
#line 3181 "cplus.met"
#line 3181 "cplus.met"
            {
#line 3181 "cplus.met"
                PPTREE _ptTree0=0;
#line 3181 "cplus.met"
                {
#line 3181 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3181 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3181 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 3181 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3181 "cplus.met"
                }
#line 3181 "cplus.met"
                _retValue =_ptTree0;
#line 3181 "cplus.met"
                goto operator_function_name_ret;
#line 3181 "cplus.met"
            }
#line 3181 "cplus.met"
            break;
#line 3181 "cplus.met"
#line 3182 "cplus.met"
        case PLUS : 
#line 3182 "cplus.met"
            tokenAhead = 0 ;
#line 3182 "cplus.met"
            CommTerm();
#line 3182 "cplus.met"
#line 3182 "cplus.met"
            {
#line 3182 "cplus.met"
                PPTREE _ptTree0=0;
#line 3182 "cplus.met"
                {
#line 3182 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3182 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3182 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 3182 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3182 "cplus.met"
                }
#line 3182 "cplus.met"
                _retValue =_ptTree0;
#line 3182 "cplus.met"
                goto operator_function_name_ret;
#line 3182 "cplus.met"
            }
#line 3182 "cplus.met"
            break;
#line 3182 "cplus.met"
#line 3183 "cplus.met"
        case TIRE : 
#line 3183 "cplus.met"
            tokenAhead = 0 ;
#line 3183 "cplus.met"
            CommTerm();
#line 3183 "cplus.met"
#line 3183 "cplus.met"
            {
#line 3183 "cplus.met"
                PPTREE _ptTree0=0;
#line 3183 "cplus.met"
                {
#line 3183 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3183 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3183 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 3183 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3183 "cplus.met"
                }
#line 3183 "cplus.met"
                _retValue =_ptTree0;
#line 3183 "cplus.met"
                goto operator_function_name_ret;
#line 3183 "cplus.met"
            }
#line 3183 "cplus.met"
            break;
#line 3183 "cplus.met"
#line 3184 "cplus.met"
        case ETOI : 
#line 3184 "cplus.met"
            tokenAhead = 0 ;
#line 3184 "cplus.met"
            CommTerm();
#line 3184 "cplus.met"
#line 3184 "cplus.met"
            {
#line 3184 "cplus.met"
                PPTREE _ptTree0=0;
#line 3184 "cplus.met"
                {
#line 3184 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3184 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3184 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 3184 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3184 "cplus.met"
                }
#line 3184 "cplus.met"
                _retValue =_ptTree0;
#line 3184 "cplus.met"
                goto operator_function_name_ret;
#line 3184 "cplus.met"
            }
#line 3184 "cplus.met"
            break;
#line 3184 "cplus.met"
#line 3185 "cplus.met"
        case META : 
#line 3185 "cplus.met"
        case SLAS : 
#line 3185 "cplus.met"
            tokenAhead = 0 ;
#line 3185 "cplus.met"
            CommTerm();
#line 3185 "cplus.met"
#line 3185 "cplus.met"
            {
#line 3185 "cplus.met"
                PPTREE _ptTree0=0;
#line 3185 "cplus.met"
                {
#line 3185 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3185 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3185 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 3185 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3185 "cplus.met"
                }
#line 3185 "cplus.met"
                _retValue =_ptTree0;
#line 3185 "cplus.met"
                goto operator_function_name_ret;
#line 3185 "cplus.met"
            }
#line 3185 "cplus.met"
            break;
#line 3185 "cplus.met"
#line 3186 "cplus.met"
        case POURC : 
#line 3186 "cplus.met"
            tokenAhead = 0 ;
#line 3186 "cplus.met"
            CommTerm();
#line 3186 "cplus.met"
#line 3186 "cplus.met"
            {
#line 3186 "cplus.met"
                PPTREE _ptTree0=0;
#line 3186 "cplus.met"
                {
#line 3186 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3186 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3186 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 3186 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3186 "cplus.met"
                }
#line 3186 "cplus.met"
                _retValue =_ptTree0;
#line 3186 "cplus.met"
                goto operator_function_name_ret;
#line 3186 "cplus.met"
            }
#line 3186 "cplus.met"
            break;
#line 3186 "cplus.met"
#line 3187 "cplus.met"
        case CHAP : 
#line 3187 "cplus.met"
            tokenAhead = 0 ;
#line 3187 "cplus.met"
            CommTerm();
#line 3187 "cplus.met"
#line 3187 "cplus.met"
            {
#line 3187 "cplus.met"
                PPTREE _ptTree0=0;
#line 3187 "cplus.met"
                {
#line 3187 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3187 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3187 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 3187 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3187 "cplus.met"
                }
#line 3187 "cplus.met"
                _retValue =_ptTree0;
#line 3187 "cplus.met"
                goto operator_function_name_ret;
#line 3187 "cplus.met"
            }
#line 3187 "cplus.met"
            break;
#line 3187 "cplus.met"
#line 3188 "cplus.met"
        case ETCO : 
#line 3188 "cplus.met"
            tokenAhead = 0 ;
#line 3188 "cplus.met"
            CommTerm();
#line 3188 "cplus.met"
#line 3188 "cplus.met"
            {
#line 3188 "cplus.met"
                PPTREE _ptTree0=0;
#line 3188 "cplus.met"
                {
#line 3188 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3188 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3188 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 3188 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3188 "cplus.met"
                }
#line 3188 "cplus.met"
                _retValue =_ptTree0;
#line 3188 "cplus.met"
                goto operator_function_name_ret;
#line 3188 "cplus.met"
            }
#line 3188 "cplus.met"
            break;
#line 3188 "cplus.met"
#line 3189 "cplus.met"
        case VBAR : 
#line 3189 "cplus.met"
            tokenAhead = 0 ;
#line 3189 "cplus.met"
            CommTerm();
#line 3189 "cplus.met"
#line 3189 "cplus.met"
            {
#line 3189 "cplus.met"
                PPTREE _ptTree0=0;
#line 3189 "cplus.met"
                {
#line 3189 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3189 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3189 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 3189 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3189 "cplus.met"
                }
#line 3189 "cplus.met"
                _retValue =_ptTree0;
#line 3189 "cplus.met"
                goto operator_function_name_ret;
#line 3189 "cplus.met"
            }
#line 3189 "cplus.met"
            break;
#line 3189 "cplus.met"
#line 3190 "cplus.met"
        case TILD : 
#line 3190 "cplus.met"
            tokenAhead = 0 ;
#line 3190 "cplus.met"
            CommTerm();
#line 3190 "cplus.met"
#line 3190 "cplus.met"
            {
#line 3190 "cplus.met"
                PPTREE _ptTree0=0;
#line 3190 "cplus.met"
                {
#line 3190 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3190 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3190 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 3190 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3190 "cplus.met"
                }
#line 3190 "cplus.met"
                _retValue =_ptTree0;
#line 3190 "cplus.met"
                goto operator_function_name_ret;
#line 3190 "cplus.met"
            }
#line 3190 "cplus.met"
            break;
#line 3190 "cplus.met"
#line 3191 "cplus.met"
        case EXCL : 
#line 3191 "cplus.met"
            tokenAhead = 0 ;
#line 3191 "cplus.met"
            CommTerm();
#line 3191 "cplus.met"
#line 3191 "cplus.met"
            {
#line 3191 "cplus.met"
                PPTREE _ptTree0=0;
#line 3191 "cplus.met"
                {
#line 3191 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3191 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3191 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 3191 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3191 "cplus.met"
                }
#line 3191 "cplus.met"
                _retValue =_ptTree0;
#line 3191 "cplus.met"
                goto operator_function_name_ret;
#line 3191 "cplus.met"
            }
#line 3191 "cplus.met"
            break;
#line 3191 "cplus.met"
#line 3192 "cplus.met"
        case EGAL : 
#line 3192 "cplus.met"
            tokenAhead = 0 ;
#line 3192 "cplus.met"
            CommTerm();
#line 3192 "cplus.met"
#line 3192 "cplus.met"
            {
#line 3192 "cplus.met"
                PPTREE _ptTree0=0;
#line 3192 "cplus.met"
                {
#line 3192 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3192 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3192 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 3192 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3192 "cplus.met"
                }
#line 3192 "cplus.met"
                _retValue =_ptTree0;
#line 3192 "cplus.met"
                goto operator_function_name_ret;
#line 3192 "cplus.met"
            }
#line 3192 "cplus.met"
            break;
#line 3192 "cplus.met"
#line 3193 "cplus.met"
        case SUPE : 
#line 3193 "cplus.met"
            tokenAhead = 0 ;
#line 3193 "cplus.met"
            CommTerm();
#line 3193 "cplus.met"
#line 3193 "cplus.met"
            {
#line 3193 "cplus.met"
                PPTREE _ptTree0=0;
#line 3193 "cplus.met"
                {
#line 3193 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3193 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3193 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 3193 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3193 "cplus.met"
                }
#line 3193 "cplus.met"
                _retValue =_ptTree0;
#line 3193 "cplus.met"
                goto operator_function_name_ret;
#line 3193 "cplus.met"
            }
#line 3193 "cplus.met"
            break;
#line 3193 "cplus.met"
#line 3194 "cplus.met"
        case INFE : 
#line 3194 "cplus.met"
            tokenAhead = 0 ;
#line 3194 "cplus.met"
            CommTerm();
#line 3194 "cplus.met"
#line 3194 "cplus.met"
            {
#line 3194 "cplus.met"
                PPTREE _ptTree0=0;
#line 3194 "cplus.met"
                {
#line 3194 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3194 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3194 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 3194 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3194 "cplus.met"
                }
#line 3194 "cplus.met"
                _retValue =_ptTree0;
#line 3194 "cplus.met"
                goto operator_function_name_ret;
#line 3194 "cplus.met"
            }
#line 3194 "cplus.met"
            break;
#line 3194 "cplus.met"
#line 3195 "cplus.met"
        case PLUSEGAL : 
#line 3195 "cplus.met"
            tokenAhead = 0 ;
#line 3195 "cplus.met"
            CommTerm();
#line 3195 "cplus.met"
#line 3195 "cplus.met"
            {
#line 3195 "cplus.met"
                PPTREE _ptTree0=0;
#line 3195 "cplus.met"
                {
#line 3195 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3195 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3195 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 3195 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3195 "cplus.met"
                }
#line 3195 "cplus.met"
                _retValue =_ptTree0;
#line 3195 "cplus.met"
                goto operator_function_name_ret;
#line 3195 "cplus.met"
            }
#line 3195 "cplus.met"
            break;
#line 3195 "cplus.met"
#line 3196 "cplus.met"
        case TIREEGAL : 
#line 3196 "cplus.met"
            tokenAhead = 0 ;
#line 3196 "cplus.met"
            CommTerm();
#line 3196 "cplus.met"
#line 3196 "cplus.met"
            {
#line 3196 "cplus.met"
                PPTREE _ptTree0=0;
#line 3196 "cplus.met"
                {
#line 3196 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3196 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3196 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 3196 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3196 "cplus.met"
                }
#line 3196 "cplus.met"
                _retValue =_ptTree0;
#line 3196 "cplus.met"
                goto operator_function_name_ret;
#line 3196 "cplus.met"
            }
#line 3196 "cplus.met"
            break;
#line 3196 "cplus.met"
#line 3197 "cplus.met"
        case ETOIEGAL : 
#line 3197 "cplus.met"
            tokenAhead = 0 ;
#line 3197 "cplus.met"
            CommTerm();
#line 3197 "cplus.met"
#line 3197 "cplus.met"
            {
#line 3197 "cplus.met"
                PPTREE _ptTree0=0;
#line 3197 "cplus.met"
                {
#line 3197 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3197 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3197 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 3197 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3197 "cplus.met"
                }
#line 3197 "cplus.met"
                _retValue =_ptTree0;
#line 3197 "cplus.met"
                goto operator_function_name_ret;
#line 3197 "cplus.met"
            }
#line 3197 "cplus.met"
            break;
#line 3197 "cplus.met"
#line 3198 "cplus.met"
        case SLASEGAL : 
#line 3198 "cplus.met"
            tokenAhead = 0 ;
#line 3198 "cplus.met"
            CommTerm();
#line 3198 "cplus.met"
#line 3198 "cplus.met"
            {
#line 3198 "cplus.met"
                PPTREE _ptTree0=0;
#line 3198 "cplus.met"
                {
#line 3198 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3198 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3198 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 3198 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3198 "cplus.met"
                }
#line 3198 "cplus.met"
                _retValue =_ptTree0;
#line 3198 "cplus.met"
                goto operator_function_name_ret;
#line 3198 "cplus.met"
            }
#line 3198 "cplus.met"
            break;
#line 3198 "cplus.met"
#line 3199 "cplus.met"
        case POURCEGAL : 
#line 3199 "cplus.met"
            tokenAhead = 0 ;
#line 3199 "cplus.met"
            CommTerm();
#line 3199 "cplus.met"
#line 3199 "cplus.met"
            {
#line 3199 "cplus.met"
                PPTREE _ptTree0=0;
#line 3199 "cplus.met"
                {
#line 3199 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3199 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3199 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 3199 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3199 "cplus.met"
                }
#line 3199 "cplus.met"
                _retValue =_ptTree0;
#line 3199 "cplus.met"
                goto operator_function_name_ret;
#line 3199 "cplus.met"
            }
#line 3199 "cplus.met"
            break;
#line 3199 "cplus.met"
#line 3200 "cplus.met"
        case CHAPEGAL : 
#line 3200 "cplus.met"
            tokenAhead = 0 ;
#line 3200 "cplus.met"
            CommTerm();
#line 3200 "cplus.met"
#line 3200 "cplus.met"
            {
#line 3200 "cplus.met"
                PPTREE _ptTree0=0;
#line 3200 "cplus.met"
                {
#line 3200 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3200 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3200 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
#line 3200 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3200 "cplus.met"
                }
#line 3200 "cplus.met"
                _retValue =_ptTree0;
#line 3200 "cplus.met"
                goto operator_function_name_ret;
#line 3200 "cplus.met"
            }
#line 3200 "cplus.met"
            break;
#line 3200 "cplus.met"
#line 3201 "cplus.met"
        case ETCOEGAL : 
#line 3201 "cplus.met"
            tokenAhead = 0 ;
#line 3201 "cplus.met"
            CommTerm();
#line 3201 "cplus.met"
#line 3201 "cplus.met"
            {
#line 3201 "cplus.met"
                PPTREE _ptTree0=0;
#line 3201 "cplus.met"
                {
#line 3201 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3201 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3201 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
#line 3201 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3201 "cplus.met"
                }
#line 3201 "cplus.met"
                _retValue =_ptTree0;
#line 3201 "cplus.met"
                goto operator_function_name_ret;
#line 3201 "cplus.met"
            }
#line 3201 "cplus.met"
            break;
#line 3201 "cplus.met"
#line 3202 "cplus.met"
        case VBAREGAL : 
#line 3202 "cplus.met"
            tokenAhead = 0 ;
#line 3202 "cplus.met"
            CommTerm();
#line 3202 "cplus.met"
#line 3202 "cplus.met"
            {
#line 3202 "cplus.met"
                PPTREE _ptTree0=0;
#line 3202 "cplus.met"
                {
#line 3202 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3202 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3202 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
#line 3202 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3202 "cplus.met"
                }
#line 3202 "cplus.met"
                _retValue =_ptTree0;
#line 3202 "cplus.met"
                goto operator_function_name_ret;
#line 3202 "cplus.met"
            }
#line 3202 "cplus.met"
            break;
#line 3202 "cplus.met"
#line 3203 "cplus.met"
        case EXCLEGAL : 
#line 3203 "cplus.met"
            tokenAhead = 0 ;
#line 3203 "cplus.met"
            CommTerm();
#line 3203 "cplus.met"
#line 3203 "cplus.met"
            {
#line 3203 "cplus.met"
                PPTREE _ptTree0=0;
#line 3203 "cplus.met"
                {
#line 3203 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3203 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3203 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
#line 3203 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3203 "cplus.met"
                }
#line 3203 "cplus.met"
                _retValue =_ptTree0;
#line 3203 "cplus.met"
                goto operator_function_name_ret;
#line 3203 "cplus.met"
            }
#line 3203 "cplus.met"
            break;
#line 3203 "cplus.met"
#line 3204 "cplus.met"
        case EGALEGAL : 
#line 3204 "cplus.met"
            tokenAhead = 0 ;
#line 3204 "cplus.met"
            CommTerm();
#line 3204 "cplus.met"
#line 3204 "cplus.met"
            {
#line 3204 "cplus.met"
                PPTREE _ptTree0=0;
#line 3204 "cplus.met"
                {
#line 3204 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3204 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3204 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
#line 3204 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3204 "cplus.met"
                }
#line 3204 "cplus.met"
                _retValue =_ptTree0;
#line 3204 "cplus.met"
                goto operator_function_name_ret;
#line 3204 "cplus.met"
            }
#line 3204 "cplus.met"
            break;
#line 3204 "cplus.met"
#line 3205 "cplus.met"
        case INFEEGAL : 
#line 3205 "cplus.met"
            tokenAhead = 0 ;
#line 3205 "cplus.met"
            CommTerm();
#line 3205 "cplus.met"
#line 3205 "cplus.met"
            {
#line 3205 "cplus.met"
                PPTREE _ptTree0=0;
#line 3205 "cplus.met"
                {
#line 3205 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3205 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3205 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
#line 3205 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3205 "cplus.met"
                }
#line 3205 "cplus.met"
                _retValue =_ptTree0;
#line 3205 "cplus.met"
                goto operator_function_name_ret;
#line 3205 "cplus.met"
            }
#line 3205 "cplus.met"
            break;
#line 3205 "cplus.met"
#line 3206 "cplus.met"
        case SUPEEGAL : 
#line 3206 "cplus.met"
            tokenAhead = 0 ;
#line 3206 "cplus.met"
            CommTerm();
#line 3206 "cplus.met"
#line 3206 "cplus.met"
            {
#line 3206 "cplus.met"
                PPTREE _ptTree0=0;
#line 3206 "cplus.met"
                {
#line 3206 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3206 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3206 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
#line 3206 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3206 "cplus.met"
                }
#line 3206 "cplus.met"
                _retValue =_ptTree0;
#line 3206 "cplus.met"
                goto operator_function_name_ret;
#line 3206 "cplus.met"
            }
#line 3206 "cplus.met"
            break;
#line 3206 "cplus.met"
#line 3207 "cplus.met"
        case INFEINFE : 
#line 3207 "cplus.met"
            tokenAhead = 0 ;
#line 3207 "cplus.met"
            CommTerm();
#line 3207 "cplus.met"
#line 3207 "cplus.met"
            {
#line 3207 "cplus.met"
                PPTREE _ptTree0=0;
#line 3207 "cplus.met"
                {
#line 3207 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3207 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3207 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
#line 3207 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3207 "cplus.met"
                }
#line 3207 "cplus.met"
                _retValue =_ptTree0;
#line 3207 "cplus.met"
                goto operator_function_name_ret;
#line 3207 "cplus.met"
            }
#line 3207 "cplus.met"
            break;
#line 3207 "cplus.met"
#line 3208 "cplus.met"
        case SUPESUPE : 
#line 3208 "cplus.met"
            tokenAhead = 0 ;
#line 3208 "cplus.met"
            CommTerm();
#line 3208 "cplus.met"
#line 3208 "cplus.met"
            {
#line 3208 "cplus.met"
                PPTREE _ptTree0=0;
#line 3208 "cplus.met"
                {
#line 3208 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3208 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3208 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
#line 3208 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3208 "cplus.met"
                }
#line 3208 "cplus.met"
                _retValue =_ptTree0;
#line 3208 "cplus.met"
                goto operator_function_name_ret;
#line 3208 "cplus.met"
            }
#line 3208 "cplus.met"
            break;
#line 3208 "cplus.met"
#line 3209 "cplus.met"
        case INFEINFEEGAL : 
#line 3209 "cplus.met"
            tokenAhead = 0 ;
#line 3209 "cplus.met"
            CommTerm();
#line 3209 "cplus.met"
#line 3209 "cplus.met"
            {
#line 3209 "cplus.met"
                PPTREE _ptTree0=0;
#line 3209 "cplus.met"
                {
#line 3209 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3209 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3209 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
#line 3209 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3209 "cplus.met"
                }
#line 3209 "cplus.met"
                _retValue =_ptTree0;
#line 3209 "cplus.met"
                goto operator_function_name_ret;
#line 3209 "cplus.met"
            }
#line 3209 "cplus.met"
            break;
#line 3209 "cplus.met"
#line 3210 "cplus.met"
        case SUPESUPEEGAL : 
#line 3210 "cplus.met"
            tokenAhead = 0 ;
#line 3210 "cplus.met"
            CommTerm();
#line 3210 "cplus.met"
#line 3210 "cplus.met"
            {
#line 3210 "cplus.met"
                PPTREE _ptTree0=0;
#line 3210 "cplus.met"
                {
#line 3210 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3210 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3210 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
#line 3210 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3210 "cplus.met"
                }
#line 3210 "cplus.met"
                _retValue =_ptTree0;
#line 3210 "cplus.met"
                goto operator_function_name_ret;
#line 3210 "cplus.met"
            }
#line 3210 "cplus.met"
            break;
#line 3210 "cplus.met"
#line 3211 "cplus.met"
        case ETCOETCO : 
#line 3211 "cplus.met"
            tokenAhead = 0 ;
#line 3211 "cplus.met"
            CommTerm();
#line 3211 "cplus.met"
#line 3211 "cplus.met"
            {
#line 3211 "cplus.met"
                PPTREE _ptTree0=0;
#line 3211 "cplus.met"
                {
#line 3211 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3211 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3211 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
#line 3211 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3211 "cplus.met"
                }
#line 3211 "cplus.met"
                _retValue =_ptTree0;
#line 3211 "cplus.met"
                goto operator_function_name_ret;
#line 3211 "cplus.met"
            }
#line 3211 "cplus.met"
            break;
#line 3211 "cplus.met"
#line 3212 "cplus.met"
        case VBARVBAR : 
#line 3212 "cplus.met"
            tokenAhead = 0 ;
#line 3212 "cplus.met"
            CommTerm();
#line 3212 "cplus.met"
#line 3212 "cplus.met"
            {
#line 3212 "cplus.met"
                PPTREE _ptTree0=0;
#line 3212 "cplus.met"
                {
#line 3212 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3212 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3212 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
#line 3212 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3212 "cplus.met"
                }
#line 3212 "cplus.met"
                _retValue =_ptTree0;
#line 3212 "cplus.met"
                goto operator_function_name_ret;
#line 3212 "cplus.met"
            }
#line 3212 "cplus.met"
            break;
#line 3212 "cplus.met"
#line 3213 "cplus.met"
        case PLUSPLUS : 
#line 3213 "cplus.met"
            tokenAhead = 0 ;
#line 3213 "cplus.met"
            CommTerm();
#line 3213 "cplus.met"
#line 3213 "cplus.met"
            {
#line 3213 "cplus.met"
                PPTREE _ptTree0=0;
#line 3213 "cplus.met"
                {
#line 3213 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3213 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3213 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
#line 3213 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3213 "cplus.met"
                }
#line 3213 "cplus.met"
                _retValue =_ptTree0;
#line 3213 "cplus.met"
                goto operator_function_name_ret;
#line 3213 "cplus.met"
            }
#line 3213 "cplus.met"
            break;
#line 3213 "cplus.met"
#line 3214 "cplus.met"
        case TIRETIRE : 
#line 3214 "cplus.met"
            tokenAhead = 0 ;
#line 3214 "cplus.met"
            CommTerm();
#line 3214 "cplus.met"
#line 3214 "cplus.met"
            {
#line 3214 "cplus.met"
                PPTREE _ptTree0=0;
#line 3214 "cplus.met"
                {
#line 3214 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3214 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3214 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
#line 3214 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3214 "cplus.met"
                }
#line 3214 "cplus.met"
                _retValue =_ptTree0;
#line 3214 "cplus.met"
                goto operator_function_name_ret;
#line 3214 "cplus.met"
            }
#line 3214 "cplus.met"
            break;
#line 3214 "cplus.met"
#line 3215 "cplus.met"
        case VIRG : 
#line 3215 "cplus.met"
            tokenAhead = 0 ;
#line 3215 "cplus.met"
            CommTerm();
#line 3215 "cplus.met"
#line 3215 "cplus.met"
            {
#line 3215 "cplus.met"
                PPTREE _ptTree0=0;
#line 3215 "cplus.met"
                {
#line 3215 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3215 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3215 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (","));
#line 3215 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3215 "cplus.met"
                }
#line 3215 "cplus.met"
                _retValue =_ptTree0;
#line 3215 "cplus.met"
                goto operator_function_name_ret;
#line 3215 "cplus.met"
            }
#line 3215 "cplus.met"
            break;
#line 3215 "cplus.met"
#line 3216 "cplus.met"
        case TIRESUPE : 
#line 3216 "cplus.met"
            tokenAhead = 0 ;
#line 3216 "cplus.met"
            CommTerm();
#line 3216 "cplus.met"
#line 3216 "cplus.met"
            {
#line 3216 "cplus.met"
                PPTREE _ptTree0=0;
#line 3216 "cplus.met"
                {
#line 3216 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3216 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3216 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
#line 3216 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3216 "cplus.met"
                }
#line 3216 "cplus.met"
                _retValue =_ptTree0;
#line 3216 "cplus.met"
                goto operator_function_name_ret;
#line 3216 "cplus.met"
            }
#line 3216 "cplus.met"
            break;
#line 3216 "cplus.met"
#line 3217 "cplus.met"
        case TIRESUPEETOI : 
#line 3217 "cplus.met"
            tokenAhead = 0 ;
#line 3217 "cplus.met"
            CommTerm();
#line 3217 "cplus.met"
#line 3217 "cplus.met"
            {
#line 3217 "cplus.met"
                PPTREE _ptTree0=0;
#line 3217 "cplus.met"
                {
#line 3217 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3217 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3217 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
#line 3217 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3217 "cplus.met"
                }
#line 3217 "cplus.met"
                _retValue =_ptTree0;
#line 3217 "cplus.met"
                goto operator_function_name_ret;
#line 3217 "cplus.met"
            }
#line 3217 "cplus.met"
            break;
#line 3217 "cplus.met"
#line 3220 "cplus.met"
        case POUV : 
#line 3220 "cplus.met"
            tokenAhead = 0 ;
#line 3220 "cplus.met"
            CommTerm();
#line 3220 "cplus.met"
#line 3219 "cplus.met"
#line 3220 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3220 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3220 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3220 "cplus.met"
            } else {
#line 3220 "cplus.met"
                tokenAhead = 0 ;
#line 3220 "cplus.met"
            }
#line 3220 "cplus.met"
#line 3221 "cplus.met"
            {
#line 3221 "cplus.met"
                PPTREE _ptTree0=0;
#line 3221 "cplus.met"
                {
#line 3221 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3221 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3221 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
#line 3221 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3221 "cplus.met"
                }
#line 3221 "cplus.met"
                _retValue =_ptTree0;
#line 3221 "cplus.met"
                goto operator_function_name_ret;
#line 3221 "cplus.met"
            }
#line 3221 "cplus.met"
#line 3221 "cplus.met"
            break;
#line 3221 "cplus.met"
#line 3225 "cplus.met"
        case COUV : 
#line 3225 "cplus.met"
            tokenAhead = 0 ;
#line 3225 "cplus.met"
            CommTerm();
#line 3225 "cplus.met"
#line 3224 "cplus.met"
#line 3225 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3225 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3225 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3225 "cplus.met"
            } else {
#line 3225 "cplus.met"
                tokenAhead = 0 ;
#line 3225 "cplus.met"
            }
#line 3225 "cplus.met"
#line 3226 "cplus.met"
            {
#line 3226 "cplus.met"
                PPTREE _ptTree0=0;
#line 3226 "cplus.met"
                {
#line 3226 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3226 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3226 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
#line 3226 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3226 "cplus.met"
                }
#line 3226 "cplus.met"
                _retValue =_ptTree0;
#line 3226 "cplus.met"
                goto operator_function_name_ret;
#line 3226 "cplus.met"
            }
#line 3226 "cplus.met"
#line 3226 "cplus.met"
            break;
#line 3226 "cplus.met"
#line 3226 "cplus.met"
        default : 
#line 3226 "cplus.met"
#line 3226 "cplus.met"
            break;
#line 3226 "cplus.met"
    }
#line 3226 "cplus.met"
#line 3230 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 3230 "cplus.met"
#line 3231 "cplus.met"
        {
#line 3231 "cplus.met"
            PPTREE _ptRes0=0;
#line 3231 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3231 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3231 "cplus.met"
            retTree=_ptRes0;
#line 3231 "cplus.met"
        }
#line 3231 "cplus.met"
    } else {
#line 3231 "cplus.met"
#line 3233 "cplus.met"
        {
#line 3233 "cplus.met"
            PPTREE _ptRes0=0;
#line 3233 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3233 "cplus.met"
            retTree=_ptRes0;
#line 3233 "cplus.met"
        }
#line 3233 "cplus.met"
    }
#line 3233 "cplus.met"
#line 3234 "cplus.met"
    {
#line 3234 "cplus.met"
        PPTREE _ptTree0=0;
#line 3234 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 3234 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3234 "cplus.met"
        }
#line 3234 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3234 "cplus.met"
    }
#line 3234 "cplus.met"
#line 3235 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 123, cplus)){
#line 3235 "cplus.met"
#line 3236 "cplus.met"
#line 3237 "cplus.met"
        list =AddList(list ,valTree );
#line 3237 "cplus.met"
#line 3238 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3238 "cplus.met"
#line 3238 "cplus.met"
#line 3238 "cplus.met"
    }
#line 3238 "cplus.met"
#line 3240 "cplus.met"
    {
#line 3240 "cplus.met"
        PPTREE _ptTree0=0;
#line 3240 "cplus.met"
        {
#line 3240 "cplus.met"
            PPTREE _ptRes1=0;
#line 3240 "cplus.met"
            _ptRes1= MakeTree(OPERATOR, 1);
#line 3240 "cplus.met"
            ReplaceTree(_ptRes1, 1, retTree );
#line 3240 "cplus.met"
            _ptTree0=_ptRes1;
#line 3240 "cplus.met"
        }
#line 3240 "cplus.met"
        _retValue =_ptTree0;
#line 3240 "cplus.met"
        goto operator_function_name_ret;
#line 3240 "cplus.met"
    }
#line 3240 "cplus.met"
#line 3240 "cplus.met"
#line 3240 "cplus.met"

#line 3241 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3241 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3241 "cplus.met"
return((PPTREE) 0);
#line 3241 "cplus.met"

#line 3241 "cplus.met"
operator_function_name_exit :
#line 3241 "cplus.met"

#line 3241 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3241 "cplus.met"
    _funcLevel--;
#line 3241 "cplus.met"
    return((PPTREE) -1) ;
#line 3241 "cplus.met"

#line 3241 "cplus.met"
operator_function_name_ret :
#line 3241 "cplus.met"
    
#line 3241 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3241 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3241 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3241 "cplus.met"
    return _retValue ;
#line 3241 "cplus.met"
}
#line 3241 "cplus.met"

#line 3241 "cplus.met"
