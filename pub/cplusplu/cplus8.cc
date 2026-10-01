/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 966 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 966 "cplus.met"
{
#line 966 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 966 "cplus.met"
    int _value,_nbPre = 0 ;
#line 966 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 966 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 966 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 966 "cplus.met"
#line 967 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 967 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 967 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 967 "cplus.met"
    } else {
#line 967 "cplus.met"
        tokenAhead = 0 ;
#line 967 "cplus.met"
    }
#line 967 "cplus.met"
#line 968 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 968 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 968 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 968 "cplus.met"
    } else {
#line 968 "cplus.met"
        tokenAhead = 0 ;
#line 968 "cplus.met"
    }
#line 968 "cplus.met"
#line 969 "cplus.met"
     AnalyseRange(lexEl.string());
#line 969 "cplus.met"
#line 969 "cplus.met"
#line 969 "cplus.met"

#line 970 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 970 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 970 "cplus.met"
return((PPTREE) 0);
#line 970 "cplus.met"

#line 970 "cplus.met"
range_pragma_exit :
#line 970 "cplus.met"

#line 970 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 970 "cplus.met"
    _funcLevel--;
#line 970 "cplus.met"
    return((PPTREE) -1) ;
#line 970 "cplus.met"

#line 970 "cplus.met"
range_pragma_ret :
#line 970 "cplus.met"
    
#line 970 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 970 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 970 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 970 "cplus.met"
    return _retValue ;
#line 970 "cplus.met"
}
#line 970 "cplus.met"

#line 970 "cplus.met"
#line 2997 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2997 "cplus.met"
{
#line 2997 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2997 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2997 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2997 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2997 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2997 "cplus.met"
#line 2997 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2997 "cplus.met"
#line 2999 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2999 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2999 "cplus.met"
    }
#line 2999 "cplus.met"
#line 3000 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 3000 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 3000 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 3000 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 3000 "cplus.met"
#line 3001 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3001 "cplus.met"
        switch( lexEl.Value) {
#line 3001 "cplus.met"
#line 3002 "cplus.met"
            case INFEEGAL : 
#line 3002 "cplus.met"
                tokenAhead = 0 ;
#line 3002 "cplus.met"
                CommTerm();
#line 3002 "cplus.met"
#line 3002 "cplus.met"
                {
#line 3002 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3002 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 3002 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3002 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 3002 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 3002 "cplus.met"
                    }
#line 3002 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3002 "cplus.met"
                    expTree=_ptRes0;
#line 3002 "cplus.met"
                }
#line 3002 "cplus.met"
                break;
#line 3002 "cplus.met"
#line 3003 "cplus.met"
            case SUPEEGAL : 
#line 3003 "cplus.met"
                tokenAhead = 0 ;
#line 3003 "cplus.met"
                CommTerm();
#line 3003 "cplus.met"
#line 3003 "cplus.met"
                {
#line 3003 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3003 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 3003 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3003 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 3003 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 3003 "cplus.met"
                    }
#line 3003 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3003 "cplus.met"
                    expTree=_ptRes0;
#line 3003 "cplus.met"
                }
#line 3003 "cplus.met"
                break;
#line 3003 "cplus.met"
#line 3004 "cplus.met"
            case SUPE : 
#line 3004 "cplus.met"
                tokenAhead = 0 ;
#line 3004 "cplus.met"
                CommTerm();
#line 3004 "cplus.met"
#line 3004 "cplus.met"
                {
#line 3004 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3004 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 3004 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3004 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 3004 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 3004 "cplus.met"
                    }
#line 3004 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3004 "cplus.met"
                    expTree=_ptRes0;
#line 3004 "cplus.met"
                }
#line 3004 "cplus.met"
                break;
#line 3004 "cplus.met"
#line 3005 "cplus.met"
            case INFE : 
#line 3005 "cplus.met"
                tokenAhead = 0 ;
#line 3005 "cplus.met"
                CommTerm();
#line 3005 "cplus.met"
#line 3005 "cplus.met"
                {
#line 3005 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3005 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 3005 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3005 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 3005 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 3005 "cplus.met"
                    }
#line 3005 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3005 "cplus.met"
                    expTree=_ptRes0;
#line 3005 "cplus.met"
                }
#line 3005 "cplus.met"
                break;
#line 3005 "cplus.met"
            default :
#line 3005 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 3005 "cplus.met"
                break;
#line 3005 "cplus.met"
        }
#line 3005 "cplus.met"
    } 
#line 3005 "cplus.met"
#line 3007 "cplus.met"
    {
#line 3007 "cplus.met"
        _retValue = expTree ;
#line 3007 "cplus.met"
        goto relational_expression_ret;
#line 3007 "cplus.met"
        
#line 3007 "cplus.met"
    }
#line 3007 "cplus.met"
#line 3007 "cplus.met"
#line 3007 "cplus.met"

#line 3008 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3008 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3008 "cplus.met"
return((PPTREE) 0);
#line 3008 "cplus.met"

#line 3008 "cplus.met"
relational_expression_exit :
#line 3008 "cplus.met"

#line 3008 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 3008 "cplus.met"
    _funcLevel--;
#line 3008 "cplus.met"
    return((PPTREE) -1) ;
#line 3008 "cplus.met"

#line 3008 "cplus.met"
relational_expression_ret :
#line 3008 "cplus.met"
    
#line 3008 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 3008 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3008 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3008 "cplus.met"
    return _retValue ;
#line 3008 "cplus.met"
}
#line 3008 "cplus.met"

#line 3008 "cplus.met"
#line 1706 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1706 "cplus.met"
{
#line 1706 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1706 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1706 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1706 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1706 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1706 "cplus.met"
#line 1707 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1707 "cplus.met"
    switch( lexEl.Value) {
#line 1707 "cplus.met"
#line 1708 "cplus.met"
        case AUTO : 
#line 1708 "cplus.met"
#line 1708 "cplus.met"
            {
#line 1708 "cplus.met"
                PPTREE _ptTree0=0;
#line 1708 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1708 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1708 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1708 "cplus.met"
                } else {
#line 1708 "cplus.met"
                    tokenAhead = 0 ;
#line 1708 "cplus.met"
                }
#line 1708 "cplus.met"
                _retValue =_ptTree0;
#line 1708 "cplus.met"
                goto sc_specifier_ret;
#line 1708 "cplus.met"
            }
#line 1708 "cplus.met"
            break;
#line 1708 "cplus.met"
#line 1709 "cplus.met"
        case STATIC : 
#line 1709 "cplus.met"
#line 1709 "cplus.met"
            {
#line 1709 "cplus.met"
                PPTREE _ptTree0=0;
#line 1709 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1709 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1709 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1709 "cplus.met"
                } else {
#line 1709 "cplus.met"
                    tokenAhead = 0 ;
#line 1709 "cplus.met"
                }
#line 1709 "cplus.met"
                _retValue =_ptTree0;
#line 1709 "cplus.met"
                goto sc_specifier_ret;
#line 1709 "cplus.met"
            }
#line 1709 "cplus.met"
            break;
#line 1709 "cplus.met"
#line 1710 "cplus.met"
        case EXTERN : 
#line 1710 "cplus.met"
#line 1710 "cplus.met"
            {
#line 1710 "cplus.met"
                PPTREE _ptTree0=0;
#line 1710 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1710 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1710 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1710 "cplus.met"
                } else {
#line 1710 "cplus.met"
                    tokenAhead = 0 ;
#line 1710 "cplus.met"
                }
#line 1710 "cplus.met"
                _retValue =_ptTree0;
#line 1710 "cplus.met"
                goto sc_specifier_ret;
#line 1710 "cplus.met"
            }
#line 1710 "cplus.met"
            break;
#line 1710 "cplus.met"
#line 1711 "cplus.met"
        case REGISTER : 
#line 1711 "cplus.met"
#line 1711 "cplus.met"
            {
#line 1711 "cplus.met"
                PPTREE _ptTree0=0;
#line 1711 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1711 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1711 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1711 "cplus.met"
                } else {
#line 1711 "cplus.met"
                    tokenAhead = 0 ;
#line 1711 "cplus.met"
                }
#line 1711 "cplus.met"
                _retValue =_ptTree0;
#line 1711 "cplus.met"
                goto sc_specifier_ret;
#line 1711 "cplus.met"
            }
#line 1711 "cplus.met"
            break;
#line 1711 "cplus.met"
#line 1711 "cplus.met"
        default : 
#line 1711 "cplus.met"
#line 1711 "cplus.met"
            break;
#line 1711 "cplus.met"
    }
#line 1711 "cplus.met"
#line 1711 "cplus.met"
#line 1713 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1713 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1713 "cplus.met"
return((PPTREE) 0);
#line 1713 "cplus.met"

#line 1713 "cplus.met"
sc_specifier_exit :
#line 1713 "cplus.met"

#line 1713 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1713 "cplus.met"
    _funcLevel--;
#line 1713 "cplus.met"
    return((PPTREE) -1) ;
#line 1713 "cplus.met"

#line 1713 "cplus.met"
sc_specifier_ret :
#line 1713 "cplus.met"
    
#line 1713 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1713 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1713 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1713 "cplus.met"
    return _retValue ;
#line 1713 "cplus.met"
}
#line 1713 "cplus.met"

#line 1713 "cplus.met"
#line 3010 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 3010 "cplus.met"
{
#line 3010 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3010 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3010 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3010 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 3010 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3010 "cplus.met"
#line 3010 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3010 "cplus.met"
#line 3012 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 3012 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 3012 "cplus.met"
    }
#line 3012 "cplus.met"
#line 3013 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 3013 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 3013 "cplus.met"
#line 3014 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3014 "cplus.met"
        switch( lexEl.Value) {
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
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3015 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 3015 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3015 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 3015 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 3015 "cplus.met"
                    }
#line 3015 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3015 "cplus.met"
                    expTree=_ptRes0;
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
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3016 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 3016 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 3016 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 3016 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 3016 "cplus.met"
                    }
#line 3016 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3016 "cplus.met"
                    expTree=_ptRes0;
#line 3016 "cplus.met"
                }
#line 3016 "cplus.met"
                break;
#line 3016 "cplus.met"
            default :
#line 3016 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 3016 "cplus.met"
                break;
#line 3016 "cplus.met"
        }
#line 3016 "cplus.met"
    } 
#line 3016 "cplus.met"
#line 3018 "cplus.met"
    {
#line 3018 "cplus.met"
        _retValue = expTree ;
#line 3018 "cplus.met"
        goto shift_expression_ret;
#line 3018 "cplus.met"
        
#line 3018 "cplus.met"
    }
#line 3018 "cplus.met"
#line 3018 "cplus.met"
#line 3018 "cplus.met"

#line 3019 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3019 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3019 "cplus.met"
return((PPTREE) 0);
#line 3019 "cplus.met"

#line 3019 "cplus.met"
shift_expression_exit :
#line 3019 "cplus.met"

#line 3019 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 3019 "cplus.met"
    _funcLevel--;
#line 3019 "cplus.met"
    return((PPTREE) -1) ;
#line 3019 "cplus.met"

#line 3019 "cplus.met"
shift_expression_ret :
#line 3019 "cplus.met"
    
#line 3019 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 3019 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3019 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3019 "cplus.met"
    return _retValue ;
#line 3019 "cplus.met"
}
#line 3019 "cplus.met"

#line 3019 "cplus.met"
#line 2299 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2299 "cplus.met"
{
#line 2299 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2299 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2299 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2299 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2299 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2299 "cplus.met"
#line 2300 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2300 "cplus.met"
    switch( lexEl.Value) {
#line 2300 "cplus.met"
#line 2301 "cplus.met"
        case INT : 
#line 2301 "cplus.met"
            tokenAhead = 0 ;
#line 2301 "cplus.met"
            CommTerm();
#line 2301 "cplus.met"
#line 2301 "cplus.met"
            {
#line 2301 "cplus.met"
                PPTREE _ptTree0=0;
#line 2301 "cplus.met"
                {
#line 2301 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2301 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2301 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2301 "cplus.met"
                }
#line 2301 "cplus.met"
                _retValue =_ptTree0;
#line 2301 "cplus.met"
                goto short_long_int_char_ret;
#line 2301 "cplus.met"
            }
#line 2301 "cplus.met"
            break;
#line 2301 "cplus.met"
#line 2302 "cplus.met"
        case CHAR : 
#line 2302 "cplus.met"
            tokenAhead = 0 ;
#line 2302 "cplus.met"
            CommTerm();
#line 2302 "cplus.met"
#line 2302 "cplus.met"
            {
#line 2302 "cplus.met"
                PPTREE _ptTree0=0;
#line 2302 "cplus.met"
                {
#line 2302 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2302 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2302 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2302 "cplus.met"
                }
#line 2302 "cplus.met"
                _retValue =_ptTree0;
#line 2302 "cplus.met"
                goto short_long_int_char_ret;
#line 2302 "cplus.met"
            }
#line 2302 "cplus.met"
            break;
#line 2302 "cplus.met"
#line 2303 "cplus.met"
        case LONG : 
#line 2303 "cplus.met"
#line 2303 "cplus.met"
            {
#line 2303 "cplus.met"
                PPTREE _ptTree0=0;
#line 2303 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2303 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2303 "cplus.met"
                }
#line 2303 "cplus.met"
                _retValue =_ptTree0;
#line 2303 "cplus.met"
                goto short_long_int_char_ret;
#line 2303 "cplus.met"
            }
#line 2303 "cplus.met"
            break;
#line 2303 "cplus.met"
#line 2304 "cplus.met"
        case SHORT : 
#line 2304 "cplus.met"
            tokenAhead = 0 ;
#line 2304 "cplus.met"
            CommTerm();
#line 2304 "cplus.met"
#line 2305 "cplus.met"
            if (inside_long){
#line 2305 "cplus.met"
#line 2306 "cplus.met"
                
#line 2306 "cplus.met"
                LEX_EXIT ("",0);
#line 2306 "cplus.met"
                goto short_long_int_char_exit;
#line 2306 "cplus.met"
#line 2306 "cplus.met"
            } else {
#line 2306 "cplus.met"
#line 2308 "cplus.met"
#line 2309 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2309 "cplus.met"
                switch( lexEl.Value) {
#line 2309 "cplus.met"
#line 2310 "cplus.met"
                    case INT : 
#line 2310 "cplus.met"
                        tokenAhead = 0 ;
#line 2310 "cplus.met"
                        CommTerm();
#line 2310 "cplus.met"
#line 2310 "cplus.met"
                        {
#line 2310 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2310 "cplus.met"
                            {
#line 2310 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2310 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2310 "cplus.met"
                                {
#line 2310 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2310 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2310 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2310 "cplus.met"
                                }
#line 2310 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2310 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2310 "cplus.met"
                            }
#line 2310 "cplus.met"
                            _retValue =_ptTree0;
#line 2310 "cplus.met"
                            goto short_long_int_char_ret;
#line 2310 "cplus.met"
                        }
#line 2310 "cplus.met"
                        break;
#line 2310 "cplus.met"
#line 2311 "cplus.met"
                    default : 
#line 2311 "cplus.met"
#line 2311 "cplus.met"
                        {
#line 2311 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2311 "cplus.met"
                            {
#line 2311 "cplus.met"
                                PPTREE _ptRes1=0;
#line 2311 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2311 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2311 "cplus.met"
                            }
#line 2311 "cplus.met"
                            _retValue =_ptTree0;
#line 2311 "cplus.met"
                            goto short_long_int_char_ret;
#line 2311 "cplus.met"
                        }
#line 2311 "cplus.met"
                        break;
#line 2311 "cplus.met"
                }
#line 2311 "cplus.met"
#line 2311 "cplus.met"
            }
#line 2311 "cplus.met"
            break;
#line 2311 "cplus.met"
#line 2314 "cplus.met"
        case SIGNED : 
#line 2314 "cplus.met"
#line 2314 "cplus.met"
            {
#line 2314 "cplus.met"
                PPTREE _ptTree0=0;
#line 2314 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 2314 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2314 "cplus.met"
                }
#line 2314 "cplus.met"
                _retValue =_ptTree0;
#line 2314 "cplus.met"
                goto short_long_int_char_ret;
#line 2314 "cplus.met"
            }
#line 2314 "cplus.met"
            break;
#line 2314 "cplus.met"
#line 2315 "cplus.met"
        case UNSIGNED : 
#line 2315 "cplus.met"
#line 2315 "cplus.met"
            {
#line 2315 "cplus.met"
                PPTREE _ptTree0=0;
#line 2315 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 160, cplus))== (PPTREE) -1 ) {
#line 2315 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2315 "cplus.met"
                }
#line 2315 "cplus.met"
                _retValue =_ptTree0;
#line 2315 "cplus.met"
                goto short_long_int_char_ret;
#line 2315 "cplus.met"
            }
#line 2315 "cplus.met"
            break;
#line 2315 "cplus.met"
        default :
#line 2315 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
#line 2315 "cplus.met"
            break;
#line 2315 "cplus.met"
    }
#line 2315 "cplus.met"
#line 2315 "cplus.met"
#line 2316 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2316 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2316 "cplus.met"
return((PPTREE) 0);
#line 2316 "cplus.met"

#line 2316 "cplus.met"
short_long_int_char_exit :
#line 2316 "cplus.met"

#line 2316 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2316 "cplus.met"
    _funcLevel--;
#line 2316 "cplus.met"
    return((PPTREE) -1) ;
#line 2316 "cplus.met"

#line 2316 "cplus.met"
short_long_int_char_ret :
#line 2316 "cplus.met"
    
#line 2316 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
#line 2316 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2316 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2316 "cplus.met"
    return _retValue ;
#line 2316 "cplus.met"
}
#line 2316 "cplus.met"

#line 2316 "cplus.met"
#line 2319 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2319 "cplus.met"
{
#line 2319 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2319 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2319 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2319 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2319 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2319 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2319 "cplus.met"
#line 2319 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2319 "cplus.met"
#line 2321 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2321 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2321 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2321 "cplus.met"
    } else {
#line 2321 "cplus.met"
        tokenAhead = 0 ;
#line 2321 "cplus.met"
    }
#line 2321 "cplus.met"
#line 2322 "cplus.met"
    {
#line 2322 "cplus.met"
        inside_signed = 1 ;
#line 2322 "cplus.met"
#line 2323 "cplus.met"
#line 2324 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 136, cplus)){
#line 2324 "cplus.met"
#line 2325 "cplus.met"
            {
#line 2325 "cplus.met"
                PPTREE _ptTree0=0;
#line 2325 "cplus.met"
                {
#line 2325 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2325 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2325 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2325 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2325 "cplus.met"
                }
#line 2325 "cplus.met"
                _retValue =_ptTree0;
#line 2325 "cplus.met"
                goto signed_type_ret;
#line 2325 "cplus.met"
            }
#line 2325 "cplus.met"
        } else {
#line 2325 "cplus.met"
#line 2327 "cplus.met"
            {
#line 2327 "cplus.met"
                PPTREE _ptTree0=0;
#line 2327 "cplus.met"
                {
#line 2327 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2327 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2327 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2327 "cplus.met"
                }
#line 2327 "cplus.met"
                _retValue =_ptTree0;
#line 2327 "cplus.met"
                goto signed_type_ret;
#line 2327 "cplus.met"
            }
#line 2327 "cplus.met"
        }
#line 2327 "cplus.met"
#line 2327 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2327 "cplus.met"
    }
#line 2327 "cplus.met"
#line 2327 "cplus.met"
#line 2328 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2328 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2328 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2328 "cplus.met"
return((PPTREE) 0);
#line 2328 "cplus.met"

#line 2328 "cplus.met"
signed_type_exit :
#line 2328 "cplus.met"

#line 2328 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2328 "cplus.met"
    _funcLevel--;
#line 2328 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2328 "cplus.met"
    return((PPTREE) -1) ;
#line 2328 "cplus.met"

#line 2328 "cplus.met"
signed_type_ret :
#line 2328 "cplus.met"
    
#line 2328 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2328 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2328 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2328 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2328 "cplus.met"
    return _retValue ;
#line 2328 "cplus.met"
}
#line 2328 "cplus.met"

#line 2328 "cplus.met"
#line 2042 "cplus.met"
PPTREE cplus::simple_ident ( int error_free)
#line 2042 "cplus.met"
{
#line 2042 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2042 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2042 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2042 "cplus.met"
    int _Debug = TRACE_RULE("simple_ident",TRACE_ENTER,(PPTREE)0);
#line 2042 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2042 "cplus.met"
#line 2043 "cplus.met"
    {
#line 2043 "cplus.met"
        PPTREE _ptTree0=0;
#line 2043 "cplus.met"
        {
#line 2043 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2043 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 2043 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2043 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2043 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(simple_ident_exit,"IDENT")
#line 2043 "cplus.met"
            } else {
#line 2043 "cplus.met"
                tokenAhead = 0 ;
#line 2043 "cplus.met"
            }
#line 2043 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2043 "cplus.met"
            _ptTree0=_ptRes1;
#line 2043 "cplus.met"
        }
#line 2043 "cplus.met"
        _retValue =_ptTree0;
#line 2043 "cplus.met"
        goto simple_ident_ret;
#line 2043 "cplus.met"
    }
#line 2043 "cplus.met"
#line 2043 "cplus.met"
#line 2043 "cplus.met"

#line 2044 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2044 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2044 "cplus.met"
return((PPTREE) 0);
#line 2044 "cplus.met"

#line 2044 "cplus.met"
simple_ident_exit :
#line 2044 "cplus.met"

#line 2044 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_EXIT,(PPTREE)0);
#line 2044 "cplus.met"
    _funcLevel--;
#line 2044 "cplus.met"
    return((PPTREE) -1) ;
#line 2044 "cplus.met"

#line 2044 "cplus.met"
simple_ident_ret :
#line 2044 "cplus.met"
    
#line 2044 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_RETURN,_retValue);
#line 2044 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2044 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2044 "cplus.met"
    return _retValue ;
#line 2044 "cplus.met"
}
#line 2044 "cplus.met"

#line 2044 "cplus.met"
#line 2270 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2270 "cplus.met"
{
#line 2270 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2270 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2270 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2270 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2270 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2270 "cplus.met"
#line 2270 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2270 "cplus.met"
#line 2272 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2272 "cplus.met"
    switch( lexEl.Value) {
#line 2272 "cplus.met"
#line 2273 "cplus.met"
        case TYPENAME : 
#line 2273 "cplus.met"
            tokenAhead = 0 ;
#line 2273 "cplus.met"
            CommTerm();
#line 2273 "cplus.met"
#line 2274 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2274 "cplus.met"
#line 2275 "cplus.met"
                {
#line 2275 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2275 "cplus.met"
                    {
#line 2275 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2275 "cplus.met"
                        _ptRes1= MakeTree(TYPENAME, 1);
#line 2275 "cplus.met"
                        {
#line 2275 "cplus.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 2275 "cplus.met"
                            _ptRes2= MakeTree(TYP_VARIADIC, 1);
#line 2275 "cplus.met"
                            {
#line 2275 "cplus.met"
                                PPTREE _ptTree3=0,_ptRes3=0;
#line 2275 "cplus.met"
                                _ptRes3= MakeTree(TIDENT, 1);
#line 2275 "cplus.met"
                                if ( (_ptTree3=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2275 "cplus.met"
                                    MulFreeTree(8,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2275 "cplus.met"
                                }
#line 2275 "cplus.met"
                                ReplaceTree(_ptRes3, 1, _ptTree3);
#line 2275 "cplus.met"
                                _ptTree2=_ptRes3;
#line 2275 "cplus.met"
                            }
#line 2275 "cplus.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2275 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2275 "cplus.met"
                        }
#line 2275 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2275 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2275 "cplus.met"
                    }
#line 2275 "cplus.met"
                    _retValue =_ptTree0;
#line 2275 "cplus.met"
                    goto simple_type_ret;
#line 2275 "cplus.met"
                }
#line 2275 "cplus.met"
            } else {
#line 2275 "cplus.met"
#line 2277 "cplus.met"
                {
#line 2277 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2277 "cplus.met"
                    {
#line 2277 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2277 "cplus.met"
                        _ptRes1= MakeTree(TYPENAME, 1);
#line 2277 "cplus.met"
                        {
#line 2277 "cplus.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 2277 "cplus.met"
                            _ptRes2= MakeTree(TIDENT, 1);
#line 2277 "cplus.met"
                            if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2277 "cplus.met"
                                MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                                PROG_EXIT(simple_type_exit,"simple_type")
#line 2277 "cplus.met"
                            }
#line 2277 "cplus.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2277 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2277 "cplus.met"
                        }
#line 2277 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2277 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2277 "cplus.met"
                    }
#line 2277 "cplus.met"
                    _retValue =_ptTree0;
#line 2277 "cplus.met"
                    goto simple_type_ret;
#line 2277 "cplus.met"
                }
#line 2277 "cplus.met"
            }
#line 2277 "cplus.met"
            break;
#line 2277 "cplus.met"
#line 2278 "cplus.met"
        case CLASS : 
#line 2278 "cplus.met"
            tokenAhead = 0 ;
#line 2278 "cplus.met"
            CommTerm();
#line 2278 "cplus.met"
#line 2278 "cplus.met"
            {
#line 2278 "cplus.met"
                PPTREE _ptTree0=0;
#line 2278 "cplus.met"
                {
#line 2278 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2278 "cplus.met"
                    _ptRes1= MakeTree(CLASSNAME, 1);
#line 2278 "cplus.met"
                    {
#line 2278 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2278 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2278 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2278 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2278 "cplus.met"
                        }
#line 2278 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2278 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2278 "cplus.met"
                    }
#line 2278 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2278 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2278 "cplus.met"
                }
#line 2278 "cplus.met"
                _retValue =_ptTree0;
#line 2278 "cplus.met"
                goto simple_type_ret;
#line 2278 "cplus.met"
            }
#line 2278 "cplus.met"
            break;
#line 2278 "cplus.met"
#line 2279 "cplus.met"
        case DECLTYPE : 
#line 2279 "cplus.met"
            tokenAhead = 0 ;
#line 2279 "cplus.met"
            CommTerm();
#line 2279 "cplus.met"
#line 2280 "cplus.met"
#line 2281 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2281 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2281 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2281 "cplus.met"
            } else {
#line 2281 "cplus.met"
                tokenAhead = 0 ;
#line 2281 "cplus.met"
            }
#line 2281 "cplus.met"
#line 2282 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AUTO,"auto") && (tokenAhead = 0,CommTerm(),1)){
#line 2282 "cplus.met"
#line 2283 "cplus.met"
                {
#line 2283 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2283 "cplus.met"
                    _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2283 "cplus.met"
                    {
#line 2283 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2283 "cplus.met"
                        _ptRes1= MakeTree(AUTO, 0);
#line 2283 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2283 "cplus.met"
                    }
#line 2283 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2283 "cplus.met"
                    valTree=_ptRes0;
#line 2283 "cplus.met"
                }
#line 2283 "cplus.met"
            } else {
#line 2283 "cplus.met"
#line 2285 "cplus.met"
                {
#line 2285 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2285 "cplus.met"
                    _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2285 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2285 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2285 "cplus.met"
                    }
#line 2285 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2285 "cplus.met"
                    valTree=_ptRes0;
#line 2285 "cplus.met"
                }
#line 2285 "cplus.met"
            }
#line 2285 "cplus.met"
#line 2286 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2286 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2286 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2286 "cplus.met"
            } else {
#line 2286 "cplus.met"
                tokenAhead = 0 ;
#line 2286 "cplus.met"
            }
#line 2286 "cplus.met"
#line 2287 "cplus.met"
            {
#line 2287 "cplus.met"
                _retValue = valTree ;
#line 2287 "cplus.met"
                goto simple_type_ret;
#line 2287 "cplus.met"
                
#line 2287 "cplus.met"
            }
#line 2287 "cplus.met"
#line 2287 "cplus.met"
            break;
#line 2287 "cplus.met"
#line 2289 "cplus.met"
        case AUTO : 
#line 2289 "cplus.met"
            tokenAhead = 0 ;
#line 2289 "cplus.met"
            CommTerm();
#line 2289 "cplus.met"
#line 2289 "cplus.met"
            {
#line 2289 "cplus.met"
                PPTREE _ptTree0=0;
#line 2289 "cplus.met"
                {
#line 2289 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2289 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2289 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2289 "cplus.met"
                }
#line 2289 "cplus.met"
                _retValue =_ptTree0;
#line 2289 "cplus.met"
                goto simple_type_ret;
#line 2289 "cplus.met"
            }
#line 2289 "cplus.met"
            break;
#line 2289 "cplus.met"
#line 2290 "cplus.met"
        case DOUBLE : 
#line 2290 "cplus.met"
            tokenAhead = 0 ;
#line 2290 "cplus.met"
            CommTerm();
#line 2290 "cplus.met"
#line 2290 "cplus.met"
            {
#line 2290 "cplus.met"
                PPTREE _ptTree0=0;
#line 2290 "cplus.met"
                {
#line 2290 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2290 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2290 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2290 "cplus.met"
                }
#line 2290 "cplus.met"
                _retValue =_ptTree0;
#line 2290 "cplus.met"
                goto simple_type_ret;
#line 2290 "cplus.met"
            }
#line 2290 "cplus.met"
            break;
#line 2290 "cplus.met"
#line 2291 "cplus.met"
        case FLOAT : 
#line 2291 "cplus.met"
            tokenAhead = 0 ;
#line 2291 "cplus.met"
            CommTerm();
#line 2291 "cplus.met"
#line 2291 "cplus.met"
            {
#line 2291 "cplus.met"
                PPTREE _ptTree0=0;
#line 2291 "cplus.met"
                {
#line 2291 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2291 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2291 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2291 "cplus.met"
                }
#line 2291 "cplus.met"
                _retValue =_ptTree0;
#line 2291 "cplus.met"
                goto simple_type_ret;
#line 2291 "cplus.met"
            }
#line 2291 "cplus.met"
            break;
#line 2291 "cplus.met"
#line 2292 "cplus.met"
        case VOID : 
#line 2292 "cplus.met"
            tokenAhead = 0 ;
#line 2292 "cplus.met"
            CommTerm();
#line 2292 "cplus.met"
#line 2292 "cplus.met"
            {
#line 2292 "cplus.met"
                PPTREE _ptTree0=0;
#line 2292 "cplus.met"
                {
#line 2292 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2292 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2292 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2292 "cplus.met"
                }
#line 2292 "cplus.met"
                _retValue =_ptTree0;
#line 2292 "cplus.met"
                goto simple_type_ret;
#line 2292 "cplus.met"
            }
#line 2292 "cplus.met"
            break;
#line 2292 "cplus.met"
#line 2293 "cplus.met"
        case DPOIDPOI : 
#line 2293 "cplus.met"
#line 2293 "cplus.met"
            {
#line 2293 "cplus.met"
                PPTREE _ptTree0=0;
#line 2293 "cplus.met"
                {
#line 2293 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2293 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2293 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2293 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2293 "cplus.met"
                    }
#line 2293 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2293 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2293 "cplus.met"
                }
#line 2293 "cplus.met"
                _retValue =_ptTree0;
#line 2293 "cplus.met"
                goto simple_type_ret;
#line 2293 "cplus.met"
            }
#line 2293 "cplus.met"
            break;
#line 2293 "cplus.met"
#line 2294 "cplus.met"
        case META : 
#line 2294 "cplus.met"
        case IDENT : 
#line 2294 "cplus.met"
#line 2294 "cplus.met"
            {
#line 2294 "cplus.met"
                PPTREE _ptTree0=0;
#line 2294 "cplus.met"
                {
#line 2294 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2294 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2294 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2294 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2294 "cplus.met"
                    }
#line 2294 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2294 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2294 "cplus.met"
                }
#line 2294 "cplus.met"
                _retValue =_ptTree0;
#line 2294 "cplus.met"
                goto simple_type_ret;
#line 2294 "cplus.met"
            }
#line 2294 "cplus.met"
            break;
#line 2294 "cplus.met"
#line 2295 "cplus.met"
        default : 
#line 2295 "cplus.met"
#line 2295 "cplus.met"
            {
#line 2295 "cplus.met"
                PPTREE _ptTree0=0;
#line 2295 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 2295 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2295 "cplus.met"
                }
#line 2295 "cplus.met"
                _retValue =_ptTree0;
#line 2295 "cplus.met"
                goto simple_type_ret;
#line 2295 "cplus.met"
            }
#line 2295 "cplus.met"
            break;
#line 2295 "cplus.met"
    }
#line 2295 "cplus.met"
#line 2295 "cplus.met"
#line 2296 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2296 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2296 "cplus.met"
return((PPTREE) 0);
#line 2296 "cplus.met"

#line 2296 "cplus.met"
simple_type_exit :
#line 2296 "cplus.met"

#line 2296 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2296 "cplus.met"
    _funcLevel--;
#line 2296 "cplus.met"
    return((PPTREE) -1) ;
#line 2296 "cplus.met"

#line 2296 "cplus.met"
simple_type_ret :
#line 2296 "cplus.met"
    
#line 2296 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2296 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2296 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2296 "cplus.met"
    return _retValue ;
#line 2296 "cplus.met"
}
#line 2296 "cplus.met"

#line 2296 "cplus.met"
#line 3205 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 3205 "cplus.met"
{
#line 3205 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3205 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3205 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3205 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 3205 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3205 "cplus.met"
#line 3206 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 3206 "cplus.met"
#line 3207 "cplus.met"
        {
#line 3207 "cplus.met"
            PPTREE _ptTree0=0;
#line 3207 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 3207 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 3207 "cplus.met"
            }
#line 3207 "cplus.met"
            _retValue =_ptTree0;
#line 3207 "cplus.met"
            goto simple_type_name_ret;
#line 3207 "cplus.met"
        }
#line 3207 "cplus.met"
    } else {
#line 3207 "cplus.met"
#line 3209 "cplus.met"
        
#line 3209 "cplus.met"
        LEX_EXIT ("",0);
#line 3209 "cplus.met"
        goto simple_type_name_exit;
#line 3209 "cplus.met"
    }
#line 3209 "cplus.met"
#line 3209 "cplus.met"
#line 3209 "cplus.met"

#line 3210 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3210 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3210 "cplus.met"
return((PPTREE) 0);
#line 3210 "cplus.met"

#line 3210 "cplus.met"
simple_type_name_exit :
#line 3210 "cplus.met"

#line 3210 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 3210 "cplus.met"
    _funcLevel--;
#line 3210 "cplus.met"
    return((PPTREE) -1) ;
#line 3210 "cplus.met"

#line 3210 "cplus.met"
simple_type_name_ret :
#line 3210 "cplus.met"
    
#line 3210 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 3210 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3210 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3210 "cplus.met"
    return _retValue ;
#line 3210 "cplus.met"
}
#line 3210 "cplus.met"

#line 3210 "cplus.met"
#line 3071 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 3071 "cplus.met"
{
#line 3071 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3071 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3071 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3071 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 3071 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3071 "cplus.met"
#line 3071 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 3071 "cplus.met"
#line 3073 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3073 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3073 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 3073 "cplus.met"
    } else {
#line 3073 "cplus.met"
        tokenAhead = 0 ;
#line 3073 "cplus.met"
    }
#line 3073 "cplus.met"
#line 3074 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3074 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 3074 "cplus.met"
    }
#line 3074 "cplus.met"
#line 3075 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3075 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3075 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 3075 "cplus.met"
    } else {
#line 3075 "cplus.met"
        tokenAhead = 0 ;
#line 3075 "cplus.met"
    }
#line 3075 "cplus.met"
#line 3076 "cplus.met"
    {
#line 3076 "cplus.met"
        _retValue = expTree ;
#line 3076 "cplus.met"
        goto sizeof_type_ret;
#line 3076 "cplus.met"
        
#line 3076 "cplus.met"
    }
#line 3076 "cplus.met"
#line 3076 "cplus.met"
#line 3076 "cplus.met"

#line 3077 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3077 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3077 "cplus.met"
return((PPTREE) 0);
#line 3077 "cplus.met"

#line 3077 "cplus.met"
sizeof_type_exit :
#line 3077 "cplus.met"

#line 3077 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 3077 "cplus.met"
    _funcLevel--;
#line 3077 "cplus.met"
    return((PPTREE) -1) ;
#line 3077 "cplus.met"

#line 3077 "cplus.met"
sizeof_type_ret :
#line 3077 "cplus.met"
    
#line 3077 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 3077 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3077 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3077 "cplus.met"
    return _retValue ;
#line 3077 "cplus.met"
}
#line 3077 "cplus.met"

#line 3077 "cplus.met"
#line 1133 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 1133 "cplus.met"
{
#line 1133 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1133 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1133 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1133 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 1133 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1133 "cplus.met"
#line 1133 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 1133 "cplus.met"
#line 1135 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 147, cplus)) || 
#line 1135 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 1135 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 143, cplus))) || 
#line 1135 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 63, cplus))) || 
#line 1135 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 76, cplus))){
#line 1135 "cplus.met"
#line 1136 "cplus.met"
        {
#line 1136 "cplus.met"
            _retValue = stat ;
#line 1136 "cplus.met"
            goto stat_all_ret;
#line 1136 "cplus.met"
            
#line 1136 "cplus.met"
        }
#line 1136 "cplus.met"
    } else {
#line 1136 "cplus.met"
#line 1138 "cplus.met"
        {
#line 1138 "cplus.met"
            PPTREE _ptTree0=0;
#line 1138 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 1138 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 1138 "cplus.met"
            }
#line 1138 "cplus.met"
            _retValue =_ptTree0;
#line 1138 "cplus.met"
            goto stat_all_ret;
#line 1138 "cplus.met"
        }
#line 1138 "cplus.met"
    }
#line 1138 "cplus.met"
#line 1138 "cplus.met"
#line 1138 "cplus.met"

#line 1139 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1139 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1139 "cplus.met"
return((PPTREE) 0);
#line 1139 "cplus.met"

#line 1139 "cplus.met"
stat_all_exit :
#line 1139 "cplus.met"

#line 1139 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 1139 "cplus.met"
    _funcLevel--;
#line 1139 "cplus.met"
    return((PPTREE) -1) ;
#line 1139 "cplus.met"

#line 1139 "cplus.met"
stat_all_ret :
#line 1139 "cplus.met"
    
#line 1139 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 1139 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1139 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1139 "cplus.met"
    return _retValue ;
#line 1139 "cplus.met"
}
#line 1139 "cplus.met"

#line 1139 "cplus.met"
#line 1405 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1405 "cplus.met"
{
#line 1405 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1405 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1405 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1405 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1405 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1405 "cplus.met"
#line 1405 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1405 "cplus.met"
#line 1407 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 57, cplus)){
#line 1407 "cplus.met"
#line 1408 "cplus.met"
        {
#line 1408 "cplus.met"
            _retValue = retTree ;
#line 1408 "cplus.met"
            goto stat_dir_ret;
#line 1408 "cplus.met"
            
#line 1408 "cplus.met"
        }
#line 1408 "cplus.met"
    }
#line 1408 "cplus.met"
#line 1409 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1409 "cplus.met"
    switch( lexEl.Value) {
#line 1409 "cplus.met"
#line 1410 "cplus.met"
        case META : 
#line 1410 "cplus.met"
        case IF_DIR : 
#line 1410 "cplus.met"
            tokenAhead = 0 ;
#line 1410 "cplus.met"
            CommTerm();
#line 1410 "cplus.met"
#line 1410 "cplus.met"
            {
#line 1410 "cplus.met"
                PPTREE _ptTree0=0;
#line 1410 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1410 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1410 "cplus.met"
                }
#line 1410 "cplus.met"
                _retValue =_ptTree0;
#line 1410 "cplus.met"
                goto stat_dir_ret;
#line 1410 "cplus.met"
            }
#line 1410 "cplus.met"
            break;
#line 1410 "cplus.met"
#line 1411 "cplus.met"
        case IFDEF_DIR : 
#line 1411 "cplus.met"
#line 1411 "cplus.met"
            {
#line 1411 "cplus.met"
                PPTREE _ptTree0=0;
#line 1411 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 1411 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1411 "cplus.met"
                }
#line 1411 "cplus.met"
                _retValue =_ptTree0;
#line 1411 "cplus.met"
                goto stat_dir_ret;
#line 1411 "cplus.met"
            }
#line 1411 "cplus.met"
            break;
#line 1411 "cplus.met"
#line 1412 "cplus.met"
        case IFNDEF_DIR : 
#line 1412 "cplus.met"
#line 1412 "cplus.met"
            {
#line 1412 "cplus.met"
                PPTREE _ptTree0=0;
#line 1412 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 1412 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1412 "cplus.met"
                }
#line 1412 "cplus.met"
                _retValue =_ptTree0;
#line 1412 "cplus.met"
                goto stat_dir_ret;
#line 1412 "cplus.met"
            }
#line 1412 "cplus.met"
            break;
#line 1412 "cplus.met"
        default :
#line 1412 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1412 "cplus.met"
            break;
#line 1412 "cplus.met"
    }
#line 1412 "cplus.met"
#line 1412 "cplus.met"
#line 1413 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1413 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1413 "cplus.met"
return((PPTREE) 0);
#line 1413 "cplus.met"

#line 1413 "cplus.met"
stat_dir_exit :
#line 1413 "cplus.met"

#line 1413 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1413 "cplus.met"
    _funcLevel--;
#line 1413 "cplus.met"
    return((PPTREE) -1) ;
#line 1413 "cplus.met"

#line 1413 "cplus.met"
stat_dir_ret :
#line 1413 "cplus.met"
    
#line 1413 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1413 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1413 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1413 "cplus.met"
    return _retValue ;
#line 1413 "cplus.met"
}
#line 1413 "cplus.met"

#line 1413 "cplus.met"
#line 3897 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3897 "cplus.met"
{
#line 3897 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3897 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3897 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3897 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3897 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3897 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3897 "cplus.met"
#line 3898 "cplus.met"
    {
#line 3898 "cplus.met"
        switchContext = 1 ;
#line 3898 "cplus.met"
#line 3899 "cplus.met"
        {
#line 3899 "cplus.met"
            PPTREE _ptTree0=0;
#line 3899 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 143, cplus))== (PPTREE) -1 ) {
#line 3899 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3899 "cplus.met"
            }
#line 3899 "cplus.met"
            _retValue =_ptTree0;
#line 3899 "cplus.met"
            goto stat_dir_switch_ret;
#line 3899 "cplus.met"
        }
#line 3899 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3899 "cplus.met"
    }
#line 3899 "cplus.met"
#line 3899 "cplus.met"
#line 3899 "cplus.met"

#line 3900 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3900 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3900 "cplus.met"
switchContext =  _oldswitchContext;
#line 3900 "cplus.met"
return((PPTREE) 0);
#line 3900 "cplus.met"

#line 3900 "cplus.met"
stat_dir_switch_exit :
#line 3900 "cplus.met"

#line 3900 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3900 "cplus.met"
    _funcLevel--;
#line 3900 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3900 "cplus.met"
    return((PPTREE) -1) ;
#line 3900 "cplus.met"

#line 3900 "cplus.met"
stat_dir_switch_ret :
#line 3900 "cplus.met"
    
#line 3900 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3900 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3900 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3900 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3900 "cplus.met"
    return _retValue ;
#line 3900 "cplus.met"
}
#line 3900 "cplus.met"

#line 3900 "cplus.met"
#line 1304 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1304 "cplus.met"
{
#line 1304 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1304 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1304 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1304 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1304 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1304 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1304 "cplus.met"
#line 1304 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1304 "cplus.met"
#line 1304 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1304 "cplus.met"
#line 1306 "cplus.met"
    {
#line 1306 "cplus.met"
        keepCarriage = 1 ;
#line 1306 "cplus.met"
#line 1307 "cplus.met"
#line 1308 "cplus.met"
        {
#line 1308 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1308 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1308 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1308 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1308 "cplus.met"
            }
#line 1308 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1308 "cplus.met"
            retTree=_ptRes0;
#line 1308 "cplus.met"
        }
#line 1308 "cplus.met"
#line 1309 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1309 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1309 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1309 "cplus.met"
        } else {
#line 1309 "cplus.met"
            tokenAhead = 0 ;
#line 1309 "cplus.met"
        }
#line 1309 "cplus.met"
#line 1309 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1309 "cplus.met"
    }
#line 1309 "cplus.met"
#line 1309 "cplus.met"
    _addlist1 = list ;
#line 1309 "cplus.met"
#line 1311 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1311 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1311 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1311 "cplus.met"
#line 1312 "cplus.met"
#line 1312 "cplus.met"
        {
#line 1312 "cplus.met"
            PPTREE _ptTree0=0;
#line 1312 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1312 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1312 "cplus.met"
            }
#line 1312 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1312 "cplus.met"
        }
#line 1312 "cplus.met"
#line 1312 "cplus.met"
        if (list){
#line 1312 "cplus.met"
#line 1312 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1312 "cplus.met"
        } else {
#line 1312 "cplus.met"
#line 1312 "cplus.met"
            list = _addlist1 ;
#line 1312 "cplus.met"
        }
#line 1312 "cplus.met"
    } 
#line 1312 "cplus.met"
#line 1313 "cplus.met"
    {
#line 1313 "cplus.met"
        PPTREE _ptTree0=0;
#line 1313 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1313 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1313 "cplus.met"
        }
#line 1313 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1313 "cplus.met"
    }
#line 1313 "cplus.met"
#line 1314 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1314 "cplus.met"
#line 1315 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1315 "cplus.met"
    switch( lexEl.Value) {
#line 1315 "cplus.met"
#line 1316 "cplus.met"
        case META : 
#line 1316 "cplus.met"
        case ELSE_DIR : 
#line 1316 "cplus.met"
            tokenAhead = 0 ;
#line 1316 "cplus.met"
            CommTerm();
#line 1316 "cplus.met"
#line 1317 "cplus.met"
#line 1317 "cplus.met"
            _addlist2 = list2 ;
#line 1317 "cplus.met"
#line 1318 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1318 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1318 "cplus.met"
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                {
#line 1319 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1319 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1319 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1319 "cplus.met"
                    }
#line 1319 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1319 "cplus.met"
                }
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                if (list2){
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1319 "cplus.met"
                } else {
#line 1319 "cplus.met"
#line 1319 "cplus.met"
                    list2 = _addlist2 ;
#line 1319 "cplus.met"
                }
#line 1319 "cplus.met"
            } 
#line 1319 "cplus.met"
#line 1320 "cplus.met"
            {
#line 1320 "cplus.met"
                PPTREE _ptTree0=0;
#line 1320 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1320 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1320 "cplus.met"
                }
#line 1320 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1320 "cplus.met"
            }
#line 1320 "cplus.met"
#line 1321 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1321 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1321 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1321 "cplus.met"
            } else {
#line 1321 "cplus.met"
                tokenAhead = 0 ;
#line 1321 "cplus.met"
            }
#line 1321 "cplus.met"
#line 1322 "cplus.met"
            {
#line 1322 "cplus.met"
                PPTREE _ptTree0=0;
#line 1322 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1322 "cplus.met"
                _retValue =_ptTree0;
#line 1322 "cplus.met"
                goto stat_if_dir_ret;
#line 1322 "cplus.met"
            }
#line 1322 "cplus.met"
#line 1322 "cplus.met"
            break;
#line 1322 "cplus.met"
#line 1324 "cplus.met"
        case ELIF_DIR : 
#line 1324 "cplus.met"
            tokenAhead = 0 ;
#line 1324 "cplus.met"
            CommTerm();
#line 1324 "cplus.met"
#line 1324 "cplus.met"
            {
#line 1324 "cplus.met"
                PPTREE _ptTree0=0;
#line 1324 "cplus.met"
                {
#line 1324 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1324 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1324 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1324 "cplus.met"
                    }
#line 1324 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1324 "cplus.met"
                }
#line 1324 "cplus.met"
                _retValue =_ptTree0;
#line 1324 "cplus.met"
                goto stat_if_dir_ret;
#line 1324 "cplus.met"
            }
#line 1324 "cplus.met"
            break;
#line 1324 "cplus.met"
#line 1325 "cplus.met"
        case ENDIF_DIR : 
#line 1325 "cplus.met"
            tokenAhead = 0 ;
#line 1325 "cplus.met"
            CommTerm();
#line 1325 "cplus.met"
#line 1325 "cplus.met"
            {
#line 1325 "cplus.met"
                _retValue = retTree ;
#line 1325 "cplus.met"
                goto stat_if_dir_ret;
#line 1325 "cplus.met"
                
#line 1325 "cplus.met"
            }
#line 1325 "cplus.met"
            break;
#line 1325 "cplus.met"
        default :
#line 1325 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1325 "cplus.met"
            break;
#line 1325 "cplus.met"
    }
#line 1325 "cplus.met"
#line 1325 "cplus.met"
#line 1326 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1326 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1326 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1326 "cplus.met"
return((PPTREE) 0);
#line 1326 "cplus.met"

#line 1326 "cplus.met"
stat_if_dir_exit :
#line 1326 "cplus.met"

#line 1326 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1326 "cplus.met"
    _funcLevel--;
#line 1326 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1326 "cplus.met"
    return((PPTREE) -1) ;
#line 1326 "cplus.met"

#line 1326 "cplus.met"
stat_if_dir_ret :
#line 1326 "cplus.met"
    
#line 1326 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1326 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1326 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1326 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1326 "cplus.met"
    return _retValue ;
#line 1326 "cplus.met"
}
#line 1326 "cplus.met"

#line 1326 "cplus.met"
#line 1367 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1367 "cplus.met"
{
#line 1367 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1367 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1367 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1367 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1367 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1367 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1367 "cplus.met"
#line 1367 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1367 "cplus.met"
#line 1367 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1367 "cplus.met"
#line 1369 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1369 "cplus.met"
#line 1370 "cplus.met"
#line 1371 "cplus.met"
        {
#line 1371 "cplus.met"
            keepCarriage = 1 ;
#line 1371 "cplus.met"
#line 1372 "cplus.met"
#line 1373 "cplus.met"
            {
#line 1373 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1373 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1373 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1373 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1373 "cplus.met"
                }
#line 1373 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1373 "cplus.met"
                retTree=_ptRes0;
#line 1373 "cplus.met"
            }
#line 1373 "cplus.met"
#line 1374 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1374 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1374 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1374 "cplus.met"
            } else {
#line 1374 "cplus.met"
                tokenAhead = 0 ;
#line 1374 "cplus.met"
            }
#line 1374 "cplus.met"
#line 1374 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1374 "cplus.met"
        }
#line 1374 "cplus.met"
#line 1374 "cplus.met"
#line 1375 "cplus.met"
    } else {
#line 1375 "cplus.met"
#line 1378 "cplus.met"
#line 1379 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1379 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1379 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1379 "cplus.met"
        } else {
#line 1379 "cplus.met"
            tokenAhead = 0 ;
#line 1379 "cplus.met"
        }
#line 1379 "cplus.met"
#line 1380 "cplus.met"
        {
#line 1380 "cplus.met"
            keepCarriage = 1 ;
#line 1380 "cplus.met"
#line 1381 "cplus.met"
#line 1382 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1382 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1382 "cplus.met"
            }
#line 1382 "cplus.met"
#line 1383 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1383 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1383 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1383 "cplus.met"
            } else {
#line 1383 "cplus.met"
                tokenAhead = 0 ;
#line 1383 "cplus.met"
            }
#line 1383 "cplus.met"
#line 1383 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1383 "cplus.met"
        }
#line 1383 "cplus.met"
#line 1385 "cplus.met"
        {
#line 1385 "cplus.met"
            PPTREE _ptRes0=0;
#line 1385 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1385 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1385 "cplus.met"
            retTree=_ptRes0;
#line 1385 "cplus.met"
        }
#line 1385 "cplus.met"
#line 1385 "cplus.met"
    }
#line 1385 "cplus.met"
#line 1385 "cplus.met"
    _addlist1 = list ;
#line 1385 "cplus.met"
#line 1387 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1387 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1387 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1387 "cplus.met"
#line 1388 "cplus.met"
#line 1388 "cplus.met"
        {
#line 1388 "cplus.met"
            PPTREE _ptTree0=0;
#line 1388 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1388 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1388 "cplus.met"
            }
#line 1388 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1388 "cplus.met"
        }
#line 1388 "cplus.met"
#line 1388 "cplus.met"
        if (list){
#line 1388 "cplus.met"
#line 1388 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1388 "cplus.met"
        } else {
#line 1388 "cplus.met"
#line 1388 "cplus.met"
            list = _addlist1 ;
#line 1388 "cplus.met"
        }
#line 1388 "cplus.met"
    } 
#line 1388 "cplus.met"
#line 1389 "cplus.met"
    {
#line 1389 "cplus.met"
        PPTREE _ptTree0=0;
#line 1389 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1389 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1389 "cplus.met"
        }
#line 1389 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1389 "cplus.met"
    }
#line 1389 "cplus.met"
#line 1390 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1390 "cplus.met"
#line 1391 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1391 "cplus.met"
    switch( lexEl.Value) {
#line 1391 "cplus.met"
#line 1392 "cplus.met"
        case META : 
#line 1392 "cplus.met"
        case ELSE_DIR : 
#line 1392 "cplus.met"
            tokenAhead = 0 ;
#line 1392 "cplus.met"
            CommTerm();
#line 1392 "cplus.met"
#line 1393 "cplus.met"
#line 1393 "cplus.met"
            _addlist2 = list2 ;
#line 1393 "cplus.met"
#line 1394 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1394 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1394 "cplus.met"
#line 1395 "cplus.met"
#line 1395 "cplus.met"
                {
#line 1395 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1395 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1395 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1395 "cplus.met"
                    }
#line 1395 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1395 "cplus.met"
                }
#line 1395 "cplus.met"
#line 1395 "cplus.met"
                if (list2){
#line 1395 "cplus.met"
#line 1395 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1395 "cplus.met"
                } else {
#line 1395 "cplus.met"
#line 1395 "cplus.met"
                    list2 = _addlist2 ;
#line 1395 "cplus.met"
                }
#line 1395 "cplus.met"
            } 
#line 1395 "cplus.met"
#line 1396 "cplus.met"
            {
#line 1396 "cplus.met"
                PPTREE _ptTree0=0;
#line 1396 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1396 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1396 "cplus.met"
                }
#line 1396 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1396 "cplus.met"
            }
#line 1396 "cplus.met"
#line 1397 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1397 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1397 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1397 "cplus.met"
            } else {
#line 1397 "cplus.met"
                tokenAhead = 0 ;
#line 1397 "cplus.met"
            }
#line 1397 "cplus.met"
#line 1398 "cplus.met"
            {
#line 1398 "cplus.met"
                PPTREE _ptTree0=0;
#line 1398 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1398 "cplus.met"
                _retValue =_ptTree0;
#line 1398 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1398 "cplus.met"
            }
#line 1398 "cplus.met"
#line 1398 "cplus.met"
            break;
#line 1398 "cplus.met"
#line 1400 "cplus.met"
        case ELIF_DIR : 
#line 1400 "cplus.met"
            tokenAhead = 0 ;
#line 1400 "cplus.met"
            CommTerm();
#line 1400 "cplus.met"
#line 1400 "cplus.met"
            {
#line 1400 "cplus.met"
                PPTREE _ptTree0=0;
#line 1400 "cplus.met"
                {
#line 1400 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1400 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1400 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1400 "cplus.met"
                    }
#line 1400 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1400 "cplus.met"
                }
#line 1400 "cplus.met"
                _retValue =_ptTree0;
#line 1400 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1400 "cplus.met"
            }
#line 1400 "cplus.met"
            break;
#line 1400 "cplus.met"
#line 1401 "cplus.met"
        case ENDIF_DIR : 
#line 1401 "cplus.met"
            tokenAhead = 0 ;
#line 1401 "cplus.met"
            CommTerm();
#line 1401 "cplus.met"
#line 1401 "cplus.met"
            {
#line 1401 "cplus.met"
                _retValue = retTree ;
#line 1401 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1401 "cplus.met"
                
#line 1401 "cplus.met"
            }
#line 1401 "cplus.met"
            break;
#line 1401 "cplus.met"
        default :
#line 1401 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1401 "cplus.met"
            break;
#line 1401 "cplus.met"
    }
#line 1401 "cplus.met"
#line 1401 "cplus.met"
#line 1402 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1402 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1402 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1402 "cplus.met"
return((PPTREE) 0);
#line 1402 "cplus.met"

#line 1402 "cplus.met"
stat_ifdef_dir_exit :
#line 1402 "cplus.met"

#line 1402 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1402 "cplus.met"
    _funcLevel--;
#line 1402 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1402 "cplus.met"
    return((PPTREE) -1) ;
#line 1402 "cplus.met"

#line 1402 "cplus.met"
stat_ifdef_dir_ret :
#line 1402 "cplus.met"
    
#line 1402 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1402 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1402 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1402 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1402 "cplus.met"
    return _retValue ;
#line 1402 "cplus.met"
}
#line 1402 "cplus.met"

#line 1402 "cplus.met"
