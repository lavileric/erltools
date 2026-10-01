/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 822 "cplus.met"
PPTREE cplus::range_pragma ( int error_free)
#line 822 "cplus.met"
{
#line 822 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 822 "cplus.met"
    int _value,_nbPre = 0 ;
#line 822 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 822 "cplus.met"
    int _Debug = TRACE_RULE("range_pragma",TRACE_ENTER,(PPTREE)0);
#line 822 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 822 "cplus.met"
#line 823 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 823 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_RANGE,"PRAGMA_RANGE") || !(CommTerm(),1)) {
#line 823 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"PRAGMA_RANGE")
#line 823 "cplus.met"
    } else {
#line 823 "cplus.met"
        tokenAhead = 0 ;
#line 823 "cplus.met"
    }
#line 823 "cplus.met"
#line 824 "cplus.met"
    (tokenAhead == 9|| (LexPragmaSmall(),TRACE_LEX(1)));
#line 824 "cplus.met"
    if ( ! TERM_OR_META(SMALL_PRAGMA_CONTENT,"SMALL_PRAGMA_CONTENT") || !(CommTerm(),1)) {
#line 824 "cplus.met"
            TOKEN_EXIT(range_pragma_exit,"SMALL_PRAGMA_CONTENT")
#line 824 "cplus.met"
    } else {
#line 824 "cplus.met"
        tokenAhead = 0 ;
#line 824 "cplus.met"
    }
#line 824 "cplus.met"
#line 825 "cplus.met"
     AnalyseRange(lexEl.string());
#line 825 "cplus.met"
#line 825 "cplus.met"
#line 825 "cplus.met"

#line 826 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 826 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 826 "cplus.met"
return((PPTREE) 0);
#line 826 "cplus.met"

#line 826 "cplus.met"
range_pragma_exit :
#line 826 "cplus.met"

#line 826 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_EXIT,(PPTREE)0);
#line 826 "cplus.met"
    _funcLevel--;
#line 826 "cplus.met"
    return((PPTREE) -1) ;
#line 826 "cplus.met"

#line 826 "cplus.met"
range_pragma_ret :
#line 826 "cplus.met"
    
#line 826 "cplus.met"
    _Debug = TRACE_RULE("range_pragma",TRACE_RETURN,_retValue);
#line 826 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 826 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 826 "cplus.met"
    return _retValue ;
#line 826 "cplus.met"
}
#line 826 "cplus.met"

#line 826 "cplus.met"
#line 2852 "cplus.met"
PPTREE cplus::relational_expression ( int error_free)
#line 2852 "cplus.met"
{
#line 2852 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2852 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2852 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2852 "cplus.met"
    int _Debug = TRACE_RULE("relational_expression",TRACE_ENTER,(PPTREE)0);
#line 2852 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2852 "cplus.met"
#line 2852 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2852 "cplus.met"
#line 2854 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2854 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2854 "cplus.met"
    }
#line 2854 "cplus.met"
#line 2855 "cplus.met"
    while (((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEEGAL,"<=")) || 
#line 2855 "cplus.met"
            ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPEEGAL,">="))) || 
#line 2855 "cplus.met"
           (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPE,">")))) || 
#line 2855 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFE,"<"))) { 
#line 2855 "cplus.met"
#line 2856 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2856 "cplus.met"
        switch( lexEl.Value) {
#line 2856 "cplus.met"
#line 2857 "cplus.met"
            case INFEEGAL : 
#line 2857 "cplus.met"
                tokenAhead = 0 ;
#line 2857 "cplus.met"
                CommTerm();
#line 2857 "cplus.met"
#line 2857 "cplus.met"
                {
#line 2857 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2857 "cplus.met"
                    _ptRes0= MakeTree(LEQU, 2);
#line 2857 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2857 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2857 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2857 "cplus.met"
                    }
#line 2857 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2857 "cplus.met"
                    expTree=_ptRes0;
#line 2857 "cplus.met"
                }
#line 2857 "cplus.met"
                break;
#line 2857 "cplus.met"
#line 2858 "cplus.met"
            case SUPEEGAL : 
#line 2858 "cplus.met"
                tokenAhead = 0 ;
#line 2858 "cplus.met"
                CommTerm();
#line 2858 "cplus.met"
#line 2858 "cplus.met"
                {
#line 2858 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2858 "cplus.met"
                    _ptRes0= MakeTree(GEQU, 2);
#line 2858 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2858 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2858 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2858 "cplus.met"
                    }
#line 2858 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2858 "cplus.met"
                    expTree=_ptRes0;
#line 2858 "cplus.met"
                }
#line 2858 "cplus.met"
                break;
#line 2858 "cplus.met"
#line 2859 "cplus.met"
            case SUPE : 
#line 2859 "cplus.met"
                tokenAhead = 0 ;
#line 2859 "cplus.met"
                CommTerm();
#line 2859 "cplus.met"
#line 2859 "cplus.met"
                {
#line 2859 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2859 "cplus.met"
                    _ptRes0= MakeTree(GT, 2);
#line 2859 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2859 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2859 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2859 "cplus.met"
                    }
#line 2859 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2859 "cplus.met"
                    expTree=_ptRes0;
#line 2859 "cplus.met"
                }
#line 2859 "cplus.met"
                break;
#line 2859 "cplus.met"
#line 2860 "cplus.met"
            case INFE : 
#line 2860 "cplus.met"
                tokenAhead = 0 ;
#line 2860 "cplus.met"
                CommTerm();
#line 2860 "cplus.met"
#line 2860 "cplus.met"
                {
#line 2860 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2860 "cplus.met"
                    _ptRes0= MakeTree(LT, 2);
#line 2860 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2860 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(shift_expression)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 2860 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(relational_expression_exit,"relational_expression")
#line 2860 "cplus.met"
                    }
#line 2860 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2860 "cplus.met"
                    expTree=_ptRes0;
#line 2860 "cplus.met"
                }
#line 2860 "cplus.met"
                break;
#line 2860 "cplus.met"
            default :
#line 2860 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(relational_expression_exit,"either <= or >= or > or <")
#line 2860 "cplus.met"
                break;
#line 2860 "cplus.met"
        }
#line 2860 "cplus.met"
    } 
#line 2860 "cplus.met"
#line 2862 "cplus.met"
    {
#line 2862 "cplus.met"
        _retValue = expTree ;
#line 2862 "cplus.met"
        goto relational_expression_ret;
#line 2862 "cplus.met"
        
#line 2862 "cplus.met"
    }
#line 2862 "cplus.met"
#line 2862 "cplus.met"
#line 2862 "cplus.met"

#line 2863 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2863 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2863 "cplus.met"
return((PPTREE) 0);
#line 2863 "cplus.met"

#line 2863 "cplus.met"
relational_expression_exit :
#line 2863 "cplus.met"

#line 2863 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_EXIT,(PPTREE)0);
#line 2863 "cplus.met"
    _funcLevel--;
#line 2863 "cplus.met"
    return((PPTREE) -1) ;
#line 2863 "cplus.met"

#line 2863 "cplus.met"
relational_expression_ret :
#line 2863 "cplus.met"
    
#line 2863 "cplus.met"
    _Debug = TRACE_RULE("relational_expression",TRACE_RETURN,_retValue);
#line 2863 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2863 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2863 "cplus.met"
    return _retValue ;
#line 2863 "cplus.met"
}
#line 2863 "cplus.met"

#line 2863 "cplus.met"
#line 1562 "cplus.met"
PPTREE cplus::sc_specifier ( int error_free)
#line 1562 "cplus.met"
{
#line 1562 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1562 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1562 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1562 "cplus.met"
    int _Debug = TRACE_RULE("sc_specifier",TRACE_ENTER,(PPTREE)0);
#line 1562 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1562 "cplus.met"
#line 1563 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1563 "cplus.met"
    switch( lexEl.Value) {
#line 1563 "cplus.met"
#line 1564 "cplus.met"
        case AUTO : 
#line 1564 "cplus.met"
#line 1564 "cplus.met"
            {
#line 1564 "cplus.met"
                PPTREE _ptTree0=0;
#line 1564 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1564 "cplus.met"
                if (  !SEE_TOKEN( AUTO,"auto") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1564 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"auto")
#line 1564 "cplus.met"
                } else {
#line 1564 "cplus.met"
                    tokenAhead = 0 ;
#line 1564 "cplus.met"
                }
#line 1564 "cplus.met"
                _retValue =_ptTree0;
#line 1564 "cplus.met"
                goto sc_specifier_ret;
#line 1564 "cplus.met"
            }
#line 1564 "cplus.met"
            break;
#line 1564 "cplus.met"
#line 1565 "cplus.met"
        case STATIC : 
#line 1565 "cplus.met"
#line 1565 "cplus.met"
            {
#line 1565 "cplus.met"
                PPTREE _ptTree0=0;
#line 1565 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1565 "cplus.met"
                if (  !SEE_TOKEN( STATIC,"static") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1565 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"static")
#line 1565 "cplus.met"
                } else {
#line 1565 "cplus.met"
                    tokenAhead = 0 ;
#line 1565 "cplus.met"
                }
#line 1565 "cplus.met"
                _retValue =_ptTree0;
#line 1565 "cplus.met"
                goto sc_specifier_ret;
#line 1565 "cplus.met"
            }
#line 1565 "cplus.met"
            break;
#line 1565 "cplus.met"
#line 1566 "cplus.met"
        case EXTERN : 
#line 1566 "cplus.met"
#line 1566 "cplus.met"
            {
#line 1566 "cplus.met"
                PPTREE _ptTree0=0;
#line 1566 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1566 "cplus.met"
                if (  !SEE_TOKEN( EXTERN,"extern") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1566 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"extern")
#line 1566 "cplus.met"
                } else {
#line 1566 "cplus.met"
                    tokenAhead = 0 ;
#line 1566 "cplus.met"
                }
#line 1566 "cplus.met"
                _retValue =_ptTree0;
#line 1566 "cplus.met"
                goto sc_specifier_ret;
#line 1566 "cplus.met"
            }
#line 1566 "cplus.met"
            break;
#line 1566 "cplus.met"
#line 1567 "cplus.met"
        case REGISTER : 
#line 1567 "cplus.met"
#line 1567 "cplus.met"
            {
#line 1567 "cplus.met"
                PPTREE _ptTree0=0;
#line 1567 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1567 "cplus.met"
                if (  !SEE_TOKEN( REGISTER,"register") || !(_ptTree0 = CommString(lexEl.string()))) {
#line 1567 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    TOKEN_EXIT(sc_specifier_exit,"register")
#line 1567 "cplus.met"
                } else {
#line 1567 "cplus.met"
                    tokenAhead = 0 ;
#line 1567 "cplus.met"
                }
#line 1567 "cplus.met"
                _retValue =_ptTree0;
#line 1567 "cplus.met"
                goto sc_specifier_ret;
#line 1567 "cplus.met"
            }
#line 1567 "cplus.met"
            break;
#line 1567 "cplus.met"
#line 1567 "cplus.met"
        default : 
#line 1567 "cplus.met"
#line 1567 "cplus.met"
            break;
#line 1567 "cplus.met"
    }
#line 1567 "cplus.met"
#line 1567 "cplus.met"
#line 1569 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1569 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1569 "cplus.met"
return((PPTREE) 0);
#line 1569 "cplus.met"

#line 1569 "cplus.met"
sc_specifier_exit :
#line 1569 "cplus.met"

#line 1569 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_EXIT,(PPTREE)0);
#line 1569 "cplus.met"
    _funcLevel--;
#line 1569 "cplus.met"
    return((PPTREE) -1) ;
#line 1569 "cplus.met"

#line 1569 "cplus.met"
sc_specifier_ret :
#line 1569 "cplus.met"
    
#line 1569 "cplus.met"
    _Debug = TRACE_RULE("sc_specifier",TRACE_RETURN,_retValue);
#line 1569 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1569 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1569 "cplus.met"
    return _retValue ;
#line 1569 "cplus.met"
}
#line 1569 "cplus.met"

#line 1569 "cplus.met"
#line 2865 "cplus.met"
PPTREE cplus::shift_expression ( int error_free)
#line 2865 "cplus.met"
{
#line 2865 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2865 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2865 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2865 "cplus.met"
    int _Debug = TRACE_RULE("shift_expression",TRACE_ENTER,(PPTREE)0);
#line 2865 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2865 "cplus.met"
#line 2865 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2865 "cplus.met"
#line 2867 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2867 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2867 "cplus.met"
    }
#line 2867 "cplus.met"
#line 2868 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( INFEINFE,"<<")) || 
#line 2868 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SUPESUPE,">>"))) { 
#line 2868 "cplus.met"
#line 2869 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2869 "cplus.met"
        switch( lexEl.Value) {
#line 2869 "cplus.met"
#line 2870 "cplus.met"
            case INFEINFE : 
#line 2870 "cplus.met"
                tokenAhead = 0 ;
#line 2870 "cplus.met"
                CommTerm();
#line 2870 "cplus.met"
#line 2870 "cplus.met"
                {
#line 2870 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2870 "cplus.met"
                    _ptRes0= MakeTree(LSHI, 2);
#line 2870 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2870 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2870 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2870 "cplus.met"
                    }
#line 2870 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2870 "cplus.met"
                    expTree=_ptRes0;
#line 2870 "cplus.met"
                }
#line 2870 "cplus.met"
                break;
#line 2870 "cplus.met"
#line 2871 "cplus.met"
            case SUPESUPE : 
#line 2871 "cplus.met"
                tokenAhead = 0 ;
#line 2871 "cplus.met"
                CommTerm();
#line 2871 "cplus.met"
#line 2871 "cplus.met"
                {
#line 2871 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2871 "cplus.met"
                    _ptRes0= MakeTree(RSHI, 2);
#line 2871 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2871 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(additive_expression)(error_free), 3, cplus))== (PPTREE) -1 ) {
#line 2871 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(shift_expression_exit,"shift_expression")
#line 2871 "cplus.met"
                    }
#line 2871 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2871 "cplus.met"
                    expTree=_ptRes0;
#line 2871 "cplus.met"
                }
#line 2871 "cplus.met"
                break;
#line 2871 "cplus.met"
            default :
#line 2871 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(shift_expression_exit,"either << or >>")
#line 2871 "cplus.met"
                break;
#line 2871 "cplus.met"
        }
#line 2871 "cplus.met"
    } 
#line 2871 "cplus.met"
#line 2873 "cplus.met"
    {
#line 2873 "cplus.met"
        _retValue = expTree ;
#line 2873 "cplus.met"
        goto shift_expression_ret;
#line 2873 "cplus.met"
        
#line 2873 "cplus.met"
    }
#line 2873 "cplus.met"
#line 2873 "cplus.met"
#line 2873 "cplus.met"

#line 2874 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2874 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2874 "cplus.met"
return((PPTREE) 0);
#line 2874 "cplus.met"

#line 2874 "cplus.met"
shift_expression_exit :
#line 2874 "cplus.met"

#line 2874 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_EXIT,(PPTREE)0);
#line 2874 "cplus.met"
    _funcLevel--;
#line 2874 "cplus.met"
    return((PPTREE) -1) ;
#line 2874 "cplus.met"

#line 2874 "cplus.met"
shift_expression_ret :
#line 2874 "cplus.met"
    
#line 2874 "cplus.met"
    _Debug = TRACE_RULE("shift_expression",TRACE_RETURN,_retValue);
#line 2874 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2874 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2874 "cplus.met"
    return _retValue ;
#line 2874 "cplus.met"
}
#line 2874 "cplus.met"

#line 2874 "cplus.met"
#line 2155 "cplus.met"
PPTREE cplus::short_long_int_char ( int error_free)
#line 2155 "cplus.met"
{
#line 2155 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2155 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2155 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2155 "cplus.met"
    int _Debug = TRACE_RULE("short_long_int_char",TRACE_ENTER,(PPTREE)0);
#line 2155 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2155 "cplus.met"
#line 2156 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2156 "cplus.met"
    switch( lexEl.Value) {
#line 2156 "cplus.met"
#line 2157 "cplus.met"
        case INT : 
#line 2157 "cplus.met"
            tokenAhead = 0 ;
#line 2157 "cplus.met"
            CommTerm();
#line 2157 "cplus.met"
#line 2157 "cplus.met"
            {
#line 2157 "cplus.met"
                PPTREE _ptTree0=0;
#line 2157 "cplus.met"
                {
#line 2157 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2157 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2157 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2157 "cplus.met"
                }
#line 2157 "cplus.met"
                _retValue =_ptTree0;
#line 2157 "cplus.met"
                goto short_long_int_char_ret;
#line 2157 "cplus.met"
            }
#line 2157 "cplus.met"
            break;
#line 2157 "cplus.met"
#line 2158 "cplus.met"
        case CHAR : 
#line 2158 "cplus.met"
            tokenAhead = 0 ;
#line 2158 "cplus.met"
            CommTerm();
#line 2158 "cplus.met"
#line 2158 "cplus.met"
            {
#line 2158 "cplus.met"
                PPTREE _ptTree0=0;
#line 2158 "cplus.met"
                {
#line 2158 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2158 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2158 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2158 "cplus.met"
                }
#line 2158 "cplus.met"
                _retValue =_ptTree0;
#line 2158 "cplus.met"
                goto short_long_int_char_ret;
#line 2158 "cplus.met"
            }
#line 2158 "cplus.met"
            break;
#line 2158 "cplus.met"
#line 2159 "cplus.met"
        case LONG : 
#line 2159 "cplus.met"
#line 2159 "cplus.met"
            {
#line 2159 "cplus.met"
                PPTREE _ptTree0=0;
#line 2159 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(long_type)(error_free), 97, cplus))== (PPTREE) -1 ) {
#line 2159 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2159 "cplus.met"
                }
#line 2159 "cplus.met"
                _retValue =_ptTree0;
#line 2159 "cplus.met"
                goto short_long_int_char_ret;
#line 2159 "cplus.met"
            }
#line 2159 "cplus.met"
            break;
#line 2159 "cplus.met"
#line 2160 "cplus.met"
        case SHORT : 
#line 2160 "cplus.met"
            tokenAhead = 0 ;
#line 2160 "cplus.met"
            CommTerm();
#line 2160 "cplus.met"
#line 2161 "cplus.met"
            if (inside_long){
#line 2161 "cplus.met"
#line 2162 "cplus.met"
                
#line 2162 "cplus.met"
                LEX_EXIT ("",0);
#line 2162 "cplus.met"
                goto short_long_int_char_exit;
#line 2162 "cplus.met"
#line 2162 "cplus.met"
            } else {
#line 2162 "cplus.met"
#line 2164 "cplus.met"
#line 2165 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2165 "cplus.met"
                switch( lexEl.Value) {
#line 2165 "cplus.met"
#line 2166 "cplus.met"
                    case INT : 
#line 2166 "cplus.met"
                        tokenAhead = 0 ;
#line 2166 "cplus.met"
                        CommTerm();
#line 2166 "cplus.met"
#line 2166 "cplus.met"
                        {
#line 2166 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2166 "cplus.met"
                            {
#line 2166 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 2166 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2166 "cplus.met"
                                {
#line 2166 "cplus.met"
                                    PPTREE _ptRes2=0;
#line 2166 "cplus.met"
                                    _ptRes2= MakeTree(TINT, 0);
#line 2166 "cplus.met"
                                    _ptTree1=_ptRes2;
#line 2166 "cplus.met"
                                }
#line 2166 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2166 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2166 "cplus.met"
                            }
#line 2166 "cplus.met"
                            _retValue =_ptTree0;
#line 2166 "cplus.met"
                            goto short_long_int_char_ret;
#line 2166 "cplus.met"
                        }
#line 2166 "cplus.met"
                        break;
#line 2166 "cplus.met"
#line 2167 "cplus.met"
                    default : 
#line 2167 "cplus.met"
#line 2167 "cplus.met"
                        {
#line 2167 "cplus.met"
                            PPTREE _ptTree0=0;
#line 2167 "cplus.met"
                            {
#line 2167 "cplus.met"
                                PPTREE _ptRes1=0;
#line 2167 "cplus.met"
                                _ptRes1= MakeTree(TSHORT, 1);
#line 2167 "cplus.met"
                                _ptTree0=_ptRes1;
#line 2167 "cplus.met"
                            }
#line 2167 "cplus.met"
                            _retValue =_ptTree0;
#line 2167 "cplus.met"
                            goto short_long_int_char_ret;
#line 2167 "cplus.met"
                        }
#line 2167 "cplus.met"
                        break;
#line 2167 "cplus.met"
                }
#line 2167 "cplus.met"
#line 2167 "cplus.met"
            }
#line 2167 "cplus.met"
            break;
#line 2167 "cplus.met"
#line 2170 "cplus.met"
        case SIGNED : 
#line 2170 "cplus.met"
#line 2170 "cplus.met"
            {
#line 2170 "cplus.met"
                PPTREE _ptTree0=0;
#line 2170 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(signed_type)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 2170 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2170 "cplus.met"
                }
#line 2170 "cplus.met"
                _retValue =_ptTree0;
#line 2170 "cplus.met"
                goto short_long_int_char_ret;
#line 2170 "cplus.met"
            }
#line 2170 "cplus.met"
            break;
#line 2170 "cplus.met"
#line 2171 "cplus.met"
        case UNSIGNED : 
#line 2171 "cplus.met"
#line 2171 "cplus.met"
            {
#line 2171 "cplus.met"
                PPTREE _ptTree0=0;
#line 2171 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(unsigned_type)(error_free), 160, cplus))== (PPTREE) -1 ) {
#line 2171 "cplus.met"
                    MulFreeTree(1,_ptTree0);
                    PROG_EXIT(short_long_int_char_exit,"short_long_int_char")
#line 2171 "cplus.met"
                }
#line 2171 "cplus.met"
                _retValue =_ptTree0;
#line 2171 "cplus.met"
                goto short_long_int_char_ret;
#line 2171 "cplus.met"
            }
#line 2171 "cplus.met"
            break;
#line 2171 "cplus.met"
        default :
#line 2171 "cplus.met"
            CASE_EXIT(short_long_int_char_exit,"either int or char or long or short or signed or unsigned")
#line 2171 "cplus.met"
            break;
#line 2171 "cplus.met"
    }
#line 2171 "cplus.met"
#line 2171 "cplus.met"
#line 2172 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2172 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2172 "cplus.met"
return((PPTREE) 0);
#line 2172 "cplus.met"

#line 2172 "cplus.met"
short_long_int_char_exit :
#line 2172 "cplus.met"

#line 2172 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_EXIT,(PPTREE)0);
#line 2172 "cplus.met"
    _funcLevel--;
#line 2172 "cplus.met"
    return((PPTREE) -1) ;
#line 2172 "cplus.met"

#line 2172 "cplus.met"
short_long_int_char_ret :
#line 2172 "cplus.met"
    
#line 2172 "cplus.met"
    _Debug = TRACE_RULE("short_long_int_char",TRACE_RETURN,_retValue);
#line 2172 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2172 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2172 "cplus.met"
    return _retValue ;
#line 2172 "cplus.met"
}
#line 2172 "cplus.met"

#line 2172 "cplus.met"
#line 2175 "cplus.met"
PPTREE cplus::signed_type ( int error_free)
#line 2175 "cplus.met"
{
#line 2175 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2175 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2175 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2175 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2175 "cplus.met"
    int _Debug = TRACE_RULE("signed_type",TRACE_ENTER,(PPTREE)0);
#line 2175 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2175 "cplus.met"
#line 2175 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2175 "cplus.met"
#line 2177 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2177 "cplus.met"
    if (  !SEE_TOKEN( SIGNED,"signed") || !(CommTerm(),1)) {
#line 2177 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(signed_type_exit,"signed")
#line 2177 "cplus.met"
    } else {
#line 2177 "cplus.met"
        tokenAhead = 0 ;
#line 2177 "cplus.met"
    }
#line 2177 "cplus.met"
#line 2178 "cplus.met"
    {
#line 2178 "cplus.met"
        inside_signed = 1 ;
#line 2178 "cplus.met"
#line 2179 "cplus.met"
#line 2180 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 136, cplus)){
#line 2180 "cplus.met"
#line 2181 "cplus.met"
            {
#line 2181 "cplus.met"
                PPTREE _ptTree0=0;
#line 2181 "cplus.met"
                {
#line 2181 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2181 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2181 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2181 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2181 "cplus.met"
                }
#line 2181 "cplus.met"
                _retValue =_ptTree0;
#line 2181 "cplus.met"
                goto signed_type_ret;
#line 2181 "cplus.met"
            }
#line 2181 "cplus.met"
        } else {
#line 2181 "cplus.met"
#line 2183 "cplus.met"
            {
#line 2183 "cplus.met"
                PPTREE _ptTree0=0;
#line 2183 "cplus.met"
                {
#line 2183 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2183 "cplus.met"
                    _ptRes1= MakeTree(TSIGNED, 1);
#line 2183 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2183 "cplus.met"
                }
#line 2183 "cplus.met"
                _retValue =_ptTree0;
#line 2183 "cplus.met"
                goto signed_type_ret;
#line 2183 "cplus.met"
            }
#line 2183 "cplus.met"
        }
#line 2183 "cplus.met"
#line 2183 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2183 "cplus.met"
    }
#line 2183 "cplus.met"
#line 2183 "cplus.met"
#line 2184 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2184 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2184 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2184 "cplus.met"
return((PPTREE) 0);
#line 2184 "cplus.met"

#line 2184 "cplus.met"
signed_type_exit :
#line 2184 "cplus.met"

#line 2184 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_EXIT,(PPTREE)0);
#line 2184 "cplus.met"
    _funcLevel--;
#line 2184 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2184 "cplus.met"
    return((PPTREE) -1) ;
#line 2184 "cplus.met"

#line 2184 "cplus.met"
signed_type_ret :
#line 2184 "cplus.met"
    
#line 2184 "cplus.met"
    _Debug = TRACE_RULE("signed_type",TRACE_RETURN,_retValue);
#line 2184 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2184 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2184 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2184 "cplus.met"
    return _retValue ;
#line 2184 "cplus.met"
}
#line 2184 "cplus.met"

#line 2184 "cplus.met"
#line 1898 "cplus.met"
PPTREE cplus::simple_ident ( int error_free)
#line 1898 "cplus.met"
{
#line 1898 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1898 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1898 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1898 "cplus.met"
    int _Debug = TRACE_RULE("simple_ident",TRACE_ENTER,(PPTREE)0);
#line 1898 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1898 "cplus.met"
#line 1899 "cplus.met"
    {
#line 1899 "cplus.met"
        PPTREE _ptTree0=0;
#line 1899 "cplus.met"
        {
#line 1899 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1899 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1899 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1899 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1899 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(simple_ident_exit,"IDENT")
#line 1899 "cplus.met"
            } else {
#line 1899 "cplus.met"
                tokenAhead = 0 ;
#line 1899 "cplus.met"
            }
#line 1899 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1899 "cplus.met"
            _ptTree0=_ptRes1;
#line 1899 "cplus.met"
        }
#line 1899 "cplus.met"
        _retValue =_ptTree0;
#line 1899 "cplus.met"
        goto simple_ident_ret;
#line 1899 "cplus.met"
    }
#line 1899 "cplus.met"
#line 1899 "cplus.met"
#line 1899 "cplus.met"

#line 1900 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1900 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1900 "cplus.met"
return((PPTREE) 0);
#line 1900 "cplus.met"

#line 1900 "cplus.met"
simple_ident_exit :
#line 1900 "cplus.met"

#line 1900 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_EXIT,(PPTREE)0);
#line 1900 "cplus.met"
    _funcLevel--;
#line 1900 "cplus.met"
    return((PPTREE) -1) ;
#line 1900 "cplus.met"

#line 1900 "cplus.met"
simple_ident_ret :
#line 1900 "cplus.met"
    
#line 1900 "cplus.met"
    _Debug = TRACE_RULE("simple_ident",TRACE_RETURN,_retValue);
#line 1900 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1900 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1900 "cplus.met"
    return _retValue ;
#line 1900 "cplus.met"
}
#line 1900 "cplus.met"

#line 1900 "cplus.met"
#line 2126 "cplus.met"
PPTREE cplus::simple_type ( int error_free)
#line 2126 "cplus.met"
{
#line 2126 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2126 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2126 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2126 "cplus.met"
    int _Debug = TRACE_RULE("simple_type",TRACE_ENTER,(PPTREE)0);
#line 2126 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2126 "cplus.met"
#line 2126 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2126 "cplus.met"
#line 2128 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2128 "cplus.met"
    switch( lexEl.Value) {
#line 2128 "cplus.met"
#line 2129 "cplus.met"
        case TYPENAME : 
#line 2129 "cplus.met"
            tokenAhead = 0 ;
#line 2129 "cplus.met"
            CommTerm();
#line 2129 "cplus.met"
#line 2130 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2130 "cplus.met"
#line 2131 "cplus.met"
                {
#line 2131 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2131 "cplus.met"
                    {
#line 2131 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2131 "cplus.met"
                        _ptRes1= MakeTree(TYPENAME, 1);
#line 2131 "cplus.met"
                        {
#line 2131 "cplus.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 2131 "cplus.met"
                            _ptRes2= MakeTree(TYP_VARIADIC, 1);
#line 2131 "cplus.met"
                            {
#line 2131 "cplus.met"
                                PPTREE _ptTree3=0,_ptRes3=0;
#line 2131 "cplus.met"
                                _ptRes3= MakeTree(TIDENT, 1);
#line 2131 "cplus.met"
                                if ( (_ptTree3=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2131 "cplus.met"
                                    MulFreeTree(8,_ptRes3,_ptTree3,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2131 "cplus.met"
                                }
#line 2131 "cplus.met"
                                ReplaceTree(_ptRes3, 1, _ptTree3);
#line 2131 "cplus.met"
                                _ptTree2=_ptRes3;
#line 2131 "cplus.met"
                            }
#line 2131 "cplus.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2131 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2131 "cplus.met"
                        }
#line 2131 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2131 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2131 "cplus.met"
                    }
#line 2131 "cplus.met"
                    _retValue =_ptTree0;
#line 2131 "cplus.met"
                    goto simple_type_ret;
#line 2131 "cplus.met"
                }
#line 2131 "cplus.met"
            } else {
#line 2131 "cplus.met"
#line 2133 "cplus.met"
                {
#line 2133 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2133 "cplus.met"
                    {
#line 2133 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 2133 "cplus.met"
                        _ptRes1= MakeTree(TYPENAME, 1);
#line 2133 "cplus.met"
                        {
#line 2133 "cplus.met"
                            PPTREE _ptTree2=0,_ptRes2=0;
#line 2133 "cplus.met"
                            _ptRes2= MakeTree(TIDENT, 1);
#line 2133 "cplus.met"
                            if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2133 "cplus.met"
                                MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                                PROG_EXIT(simple_type_exit,"simple_type")
#line 2133 "cplus.met"
                            }
#line 2133 "cplus.met"
                            ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2133 "cplus.met"
                            _ptTree1=_ptRes2;
#line 2133 "cplus.met"
                        }
#line 2133 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2133 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2133 "cplus.met"
                    }
#line 2133 "cplus.met"
                    _retValue =_ptTree0;
#line 2133 "cplus.met"
                    goto simple_type_ret;
#line 2133 "cplus.met"
                }
#line 2133 "cplus.met"
            }
#line 2133 "cplus.met"
            break;
#line 2133 "cplus.met"
#line 2134 "cplus.met"
        case CLASS : 
#line 2134 "cplus.met"
            tokenAhead = 0 ;
#line 2134 "cplus.met"
            CommTerm();
#line 2134 "cplus.met"
#line 2134 "cplus.met"
            {
#line 2134 "cplus.met"
                PPTREE _ptTree0=0;
#line 2134 "cplus.met"
                {
#line 2134 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2134 "cplus.met"
                    _ptRes1= MakeTree(CLASSNAME, 1);
#line 2134 "cplus.met"
                    {
#line 2134 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 2134 "cplus.met"
                        _ptRes2= MakeTree(TIDENT, 1);
#line 2134 "cplus.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2134 "cplus.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,valTree);
                            PROG_EXIT(simple_type_exit,"simple_type")
#line 2134 "cplus.met"
                        }
#line 2134 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 2134 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2134 "cplus.met"
                    }
#line 2134 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2134 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2134 "cplus.met"
                }
#line 2134 "cplus.met"
                _retValue =_ptTree0;
#line 2134 "cplus.met"
                goto simple_type_ret;
#line 2134 "cplus.met"
            }
#line 2134 "cplus.met"
            break;
#line 2134 "cplus.met"
#line 2135 "cplus.met"
        case DECLTYPE : 
#line 2135 "cplus.met"
            tokenAhead = 0 ;
#line 2135 "cplus.met"
            CommTerm();
#line 2135 "cplus.met"
#line 2136 "cplus.met"
#line 2137 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2137 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2137 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,"(")
#line 2137 "cplus.met"
            } else {
#line 2137 "cplus.met"
                tokenAhead = 0 ;
#line 2137 "cplus.met"
            }
#line 2137 "cplus.met"
#line 2138 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AUTO,"auto") && (tokenAhead = 0,CommTerm(),1)){
#line 2138 "cplus.met"
#line 2139 "cplus.met"
                {
#line 2139 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2139 "cplus.met"
                    _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2139 "cplus.met"
                    {
#line 2139 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2139 "cplus.met"
                        _ptRes1= MakeTree(AUTO, 0);
#line 2139 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2139 "cplus.met"
                    }
#line 2139 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2139 "cplus.met"
                    valTree=_ptRes0;
#line 2139 "cplus.met"
                }
#line 2139 "cplus.met"
            } else {
#line 2139 "cplus.met"
#line 2141 "cplus.met"
                {
#line 2141 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2141 "cplus.met"
                    _ptRes0= MakeTree(DECL_TYPE, 1);
#line 2141 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(postfix_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2141 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2141 "cplus.met"
                    }
#line 2141 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2141 "cplus.met"
                    valTree=_ptRes0;
#line 2141 "cplus.met"
                }
#line 2141 "cplus.met"
            }
#line 2141 "cplus.met"
#line 2142 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2142 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2142 "cplus.met"
                MulFreeTree(1,valTree);
                TOKEN_EXIT(simple_type_exit,")")
#line 2142 "cplus.met"
            } else {
#line 2142 "cplus.met"
                tokenAhead = 0 ;
#line 2142 "cplus.met"
            }
#line 2142 "cplus.met"
#line 2143 "cplus.met"
            {
#line 2143 "cplus.met"
                _retValue = valTree ;
#line 2143 "cplus.met"
                goto simple_type_ret;
#line 2143 "cplus.met"
                
#line 2143 "cplus.met"
            }
#line 2143 "cplus.met"
#line 2143 "cplus.met"
            break;
#line 2143 "cplus.met"
#line 2145 "cplus.met"
        case AUTO : 
#line 2145 "cplus.met"
            tokenAhead = 0 ;
#line 2145 "cplus.met"
            CommTerm();
#line 2145 "cplus.met"
#line 2145 "cplus.met"
            {
#line 2145 "cplus.met"
                PPTREE _ptTree0=0;
#line 2145 "cplus.met"
                {
#line 2145 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2145 "cplus.met"
                    _ptRes1= MakeTree(AUTO, 0);
#line 2145 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2145 "cplus.met"
                }
#line 2145 "cplus.met"
                _retValue =_ptTree0;
#line 2145 "cplus.met"
                goto simple_type_ret;
#line 2145 "cplus.met"
            }
#line 2145 "cplus.met"
            break;
#line 2145 "cplus.met"
#line 2146 "cplus.met"
        case DOUBLE : 
#line 2146 "cplus.met"
            tokenAhead = 0 ;
#line 2146 "cplus.met"
            CommTerm();
#line 2146 "cplus.met"
#line 2146 "cplus.met"
            {
#line 2146 "cplus.met"
                PPTREE _ptTree0=0;
#line 2146 "cplus.met"
                {
#line 2146 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2146 "cplus.met"
                    _ptRes1= MakeTree(TDOUBLE, 0);
#line 2146 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2146 "cplus.met"
                }
#line 2146 "cplus.met"
                _retValue =_ptTree0;
#line 2146 "cplus.met"
                goto simple_type_ret;
#line 2146 "cplus.met"
            }
#line 2146 "cplus.met"
            break;
#line 2146 "cplus.met"
#line 2147 "cplus.met"
        case FLOAT : 
#line 2147 "cplus.met"
            tokenAhead = 0 ;
#line 2147 "cplus.met"
            CommTerm();
#line 2147 "cplus.met"
#line 2147 "cplus.met"
            {
#line 2147 "cplus.met"
                PPTREE _ptTree0=0;
#line 2147 "cplus.met"
                {
#line 2147 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2147 "cplus.met"
                    _ptRes1= MakeTree(TFLOAT, 0);
#line 2147 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2147 "cplus.met"
                }
#line 2147 "cplus.met"
                _retValue =_ptTree0;
#line 2147 "cplus.met"
                goto simple_type_ret;
#line 2147 "cplus.met"
            }
#line 2147 "cplus.met"
            break;
#line 2147 "cplus.met"
#line 2148 "cplus.met"
        case VOID : 
#line 2148 "cplus.met"
            tokenAhead = 0 ;
#line 2148 "cplus.met"
            CommTerm();
#line 2148 "cplus.met"
#line 2148 "cplus.met"
            {
#line 2148 "cplus.met"
                PPTREE _ptTree0=0;
#line 2148 "cplus.met"
                {
#line 2148 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2148 "cplus.met"
                    _ptRes1= MakeTree(VOID, 0);
#line 2148 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2148 "cplus.met"
                }
#line 2148 "cplus.met"
                _retValue =_ptTree0;
#line 2148 "cplus.met"
                goto simple_type_ret;
#line 2148 "cplus.met"
            }
#line 2148 "cplus.met"
            break;
#line 2148 "cplus.met"
#line 2149 "cplus.met"
        case DPOIDPOI : 
#line 2149 "cplus.met"
#line 2149 "cplus.met"
            {
#line 2149 "cplus.met"
                PPTREE _ptTree0=0;
#line 2149 "cplus.met"
                {
#line 2149 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2149 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2149 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2149 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2149 "cplus.met"
                    }
#line 2149 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2149 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2149 "cplus.met"
                }
#line 2149 "cplus.met"
                _retValue =_ptTree0;
#line 2149 "cplus.met"
                goto simple_type_ret;
#line 2149 "cplus.met"
            }
#line 2149 "cplus.met"
            break;
#line 2149 "cplus.met"
#line 2150 "cplus.met"
        case META : 
#line 2150 "cplus.met"
        case IDENT : 
#line 2150 "cplus.met"
#line 2150 "cplus.met"
            {
#line 2150 "cplus.met"
                PPTREE _ptTree0=0;
#line 2150 "cplus.met"
                {
#line 2150 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2150 "cplus.met"
                    _ptRes1= MakeTree(TIDENT, 1);
#line 2150 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2150 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(simple_type_exit,"simple_type")
#line 2150 "cplus.met"
                    }
#line 2150 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2150 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2150 "cplus.met"
                }
#line 2150 "cplus.met"
                _retValue =_ptTree0;
#line 2150 "cplus.met"
                goto simple_type_ret;
#line 2150 "cplus.met"
            }
#line 2150 "cplus.met"
            break;
#line 2150 "cplus.met"
#line 2151 "cplus.met"
        default : 
#line 2151 "cplus.met"
#line 2151 "cplus.met"
            {
#line 2151 "cplus.met"
                PPTREE _ptTree0=0;
#line 2151 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(short_long_int_char)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 2151 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(simple_type_exit,"simple_type")
#line 2151 "cplus.met"
                }
#line 2151 "cplus.met"
                _retValue =_ptTree0;
#line 2151 "cplus.met"
                goto simple_type_ret;
#line 2151 "cplus.met"
            }
#line 2151 "cplus.met"
            break;
#line 2151 "cplus.met"
    }
#line 2151 "cplus.met"
#line 2151 "cplus.met"
#line 2152 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2152 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2152 "cplus.met"
return((PPTREE) 0);
#line 2152 "cplus.met"

#line 2152 "cplus.met"
simple_type_exit :
#line 2152 "cplus.met"

#line 2152 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_EXIT,(PPTREE)0);
#line 2152 "cplus.met"
    _funcLevel--;
#line 2152 "cplus.met"
    return((PPTREE) -1) ;
#line 2152 "cplus.met"

#line 2152 "cplus.met"
simple_type_ret :
#line 2152 "cplus.met"
    
#line 2152 "cplus.met"
    _Debug = TRACE_RULE("simple_type",TRACE_RETURN,_retValue);
#line 2152 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2152 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2152 "cplus.met"
    return _retValue ;
#line 2152 "cplus.met"
}
#line 2152 "cplus.met"

#line 2152 "cplus.met"
#line 3060 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 3060 "cplus.met"
{
#line 3060 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3060 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3060 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3060 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 3060 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3060 "cplus.met"
#line 3061 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 3061 "cplus.met"
#line 3062 "cplus.met"
        {
#line 3062 "cplus.met"
            PPTREE _ptTree0=0;
#line 3062 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 3062 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 3062 "cplus.met"
            }
#line 3062 "cplus.met"
            _retValue =_ptTree0;
#line 3062 "cplus.met"
            goto simple_type_name_ret;
#line 3062 "cplus.met"
        }
#line 3062 "cplus.met"
    } else {
#line 3062 "cplus.met"
#line 3064 "cplus.met"
        
#line 3064 "cplus.met"
        LEX_EXIT ("",0);
#line 3064 "cplus.met"
        goto simple_type_name_exit;
#line 3064 "cplus.met"
    }
#line 3064 "cplus.met"
#line 3064 "cplus.met"
#line 3064 "cplus.met"

#line 3065 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3065 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3065 "cplus.met"
return((PPTREE) 0);
#line 3065 "cplus.met"

#line 3065 "cplus.met"
simple_type_name_exit :
#line 3065 "cplus.met"

#line 3065 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 3065 "cplus.met"
    _funcLevel--;
#line 3065 "cplus.met"
    return((PPTREE) -1) ;
#line 3065 "cplus.met"

#line 3065 "cplus.met"
simple_type_name_ret :
#line 3065 "cplus.met"
    
#line 3065 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 3065 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3065 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3065 "cplus.met"
    return _retValue ;
#line 3065 "cplus.met"
}
#line 3065 "cplus.met"

#line 3065 "cplus.met"
#line 2926 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2926 "cplus.met"
{
#line 2926 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2926 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2926 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2926 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2926 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2926 "cplus.met"
#line 2926 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2926 "cplus.met"
#line 2928 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2928 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2928 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2928 "cplus.met"
    } else {
#line 2928 "cplus.met"
        tokenAhead = 0 ;
#line 2928 "cplus.met"
    }
#line 2928 "cplus.met"
#line 2929 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 2929 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2929 "cplus.met"
    }
#line 2929 "cplus.met"
#line 2930 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2930 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2930 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2930 "cplus.met"
    } else {
#line 2930 "cplus.met"
        tokenAhead = 0 ;
#line 2930 "cplus.met"
    }
#line 2930 "cplus.met"
#line 2931 "cplus.met"
    {
#line 2931 "cplus.met"
        _retValue = expTree ;
#line 2931 "cplus.met"
        goto sizeof_type_ret;
#line 2931 "cplus.met"
        
#line 2931 "cplus.met"
    }
#line 2931 "cplus.met"
#line 2931 "cplus.met"
#line 2931 "cplus.met"

#line 2932 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2932 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2932 "cplus.met"
return((PPTREE) 0);
#line 2932 "cplus.met"

#line 2932 "cplus.met"
sizeof_type_exit :
#line 2932 "cplus.met"

#line 2932 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2932 "cplus.met"
    _funcLevel--;
#line 2932 "cplus.met"
    return((PPTREE) -1) ;
#line 2932 "cplus.met"

#line 2932 "cplus.met"
sizeof_type_ret :
#line 2932 "cplus.met"
    
#line 2932 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2932 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2932 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2932 "cplus.met"
    return _retValue ;
#line 2932 "cplus.met"
}
#line 2932 "cplus.met"

#line 2932 "cplus.met"
#line 989 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 989 "cplus.met"
{
#line 989 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 989 "cplus.met"
    int _value,_nbPre = 0 ;
#line 989 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 989 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 989 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 989 "cplus.met"
#line 989 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 989 "cplus.met"
#line 991 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 147, cplus)) || 
#line 991 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 991 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 143, cplus))) || 
#line 991 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 63, cplus))) || 
#line 991 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 76, cplus))){
#line 991 "cplus.met"
#line 992 "cplus.met"
        {
#line 992 "cplus.met"
            _retValue = stat ;
#line 992 "cplus.met"
            goto stat_all_ret;
#line 992 "cplus.met"
            
#line 992 "cplus.met"
        }
#line 992 "cplus.met"
    } else {
#line 992 "cplus.met"
#line 994 "cplus.met"
        {
#line 994 "cplus.met"
            PPTREE _ptTree0=0;
#line 994 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 994 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 994 "cplus.met"
            }
#line 994 "cplus.met"
            _retValue =_ptTree0;
#line 994 "cplus.met"
            goto stat_all_ret;
#line 994 "cplus.met"
        }
#line 994 "cplus.met"
    }
#line 994 "cplus.met"
#line 994 "cplus.met"
#line 994 "cplus.met"

#line 995 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 995 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 995 "cplus.met"
return((PPTREE) 0);
#line 995 "cplus.met"

#line 995 "cplus.met"
stat_all_exit :
#line 995 "cplus.met"

#line 995 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 995 "cplus.met"
    _funcLevel--;
#line 995 "cplus.met"
    return((PPTREE) -1) ;
#line 995 "cplus.met"

#line 995 "cplus.met"
stat_all_ret :
#line 995 "cplus.met"
    
#line 995 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 995 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 995 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 995 "cplus.met"
    return _retValue ;
#line 995 "cplus.met"
}
#line 995 "cplus.met"

#line 995 "cplus.met"
#line 1261 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1261 "cplus.met"
{
#line 1261 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1261 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1261 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1261 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1261 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1261 "cplus.met"
#line 1261 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1261 "cplus.met"
#line 1263 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 57, cplus)){
#line 1263 "cplus.met"
#line 1264 "cplus.met"
        {
#line 1264 "cplus.met"
            _retValue = retTree ;
#line 1264 "cplus.met"
            goto stat_dir_ret;
#line 1264 "cplus.met"
            
#line 1264 "cplus.met"
        }
#line 1264 "cplus.met"
    }
#line 1264 "cplus.met"
#line 1265 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1265 "cplus.met"
    switch( lexEl.Value) {
#line 1265 "cplus.met"
#line 1266 "cplus.met"
        case META : 
#line 1266 "cplus.met"
        case IF_DIR : 
#line 1266 "cplus.met"
            tokenAhead = 0 ;
#line 1266 "cplus.met"
            CommTerm();
#line 1266 "cplus.met"
#line 1266 "cplus.met"
            {
#line 1266 "cplus.met"
                PPTREE _ptTree0=0;
#line 1266 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1266 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1266 "cplus.met"
                }
#line 1266 "cplus.met"
                _retValue =_ptTree0;
#line 1266 "cplus.met"
                goto stat_dir_ret;
#line 1266 "cplus.met"
            }
#line 1266 "cplus.met"
            break;
#line 1266 "cplus.met"
#line 1267 "cplus.met"
        case IFDEF_DIR : 
#line 1267 "cplus.met"
#line 1267 "cplus.met"
            {
#line 1267 "cplus.met"
                PPTREE _ptTree0=0;
#line 1267 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 1267 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1267 "cplus.met"
                }
#line 1267 "cplus.met"
                _retValue =_ptTree0;
#line 1267 "cplus.met"
                goto stat_dir_ret;
#line 1267 "cplus.met"
            }
#line 1267 "cplus.met"
            break;
#line 1267 "cplus.met"
#line 1268 "cplus.met"
        case IFNDEF_DIR : 
#line 1268 "cplus.met"
#line 1268 "cplus.met"
            {
#line 1268 "cplus.met"
                PPTREE _ptTree0=0;
#line 1268 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 146, cplus))== (PPTREE) -1 ) {
#line 1268 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1268 "cplus.met"
                }
#line 1268 "cplus.met"
                _retValue =_ptTree0;
#line 1268 "cplus.met"
                goto stat_dir_ret;
#line 1268 "cplus.met"
            }
#line 1268 "cplus.met"
            break;
#line 1268 "cplus.met"
        default :
#line 1268 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1268 "cplus.met"
            break;
#line 1268 "cplus.met"
    }
#line 1268 "cplus.met"
#line 1268 "cplus.met"
#line 1269 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1269 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1269 "cplus.met"
return((PPTREE) 0);
#line 1269 "cplus.met"

#line 1269 "cplus.met"
stat_dir_exit :
#line 1269 "cplus.met"

#line 1269 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1269 "cplus.met"
    _funcLevel--;
#line 1269 "cplus.met"
    return((PPTREE) -1) ;
#line 1269 "cplus.met"

#line 1269 "cplus.met"
stat_dir_ret :
#line 1269 "cplus.met"
    
#line 1269 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1269 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1269 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1269 "cplus.met"
    return _retValue ;
#line 1269 "cplus.met"
}
#line 1269 "cplus.met"

#line 1269 "cplus.met"
#line 3747 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3747 "cplus.met"
{
#line 3747 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3747 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3747 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3747 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3747 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3747 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3747 "cplus.met"
#line 3748 "cplus.met"
    {
#line 3748 "cplus.met"
        switchContext = 1 ;
#line 3748 "cplus.met"
#line 3749 "cplus.met"
        {
#line 3749 "cplus.met"
            PPTREE _ptTree0=0;
#line 3749 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 143, cplus))== (PPTREE) -1 ) {
#line 3749 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3749 "cplus.met"
            }
#line 3749 "cplus.met"
            _retValue =_ptTree0;
#line 3749 "cplus.met"
            goto stat_dir_switch_ret;
#line 3749 "cplus.met"
        }
#line 3749 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3749 "cplus.met"
    }
#line 3749 "cplus.met"
#line 3749 "cplus.met"
#line 3749 "cplus.met"

#line 3750 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3750 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3750 "cplus.met"
switchContext =  _oldswitchContext;
#line 3750 "cplus.met"
return((PPTREE) 0);
#line 3750 "cplus.met"

#line 3750 "cplus.met"
stat_dir_switch_exit :
#line 3750 "cplus.met"

#line 3750 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3750 "cplus.met"
    _funcLevel--;
#line 3750 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3750 "cplus.met"
    return((PPTREE) -1) ;
#line 3750 "cplus.met"

#line 3750 "cplus.met"
stat_dir_switch_ret :
#line 3750 "cplus.met"
    
#line 3750 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3750 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3750 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3750 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3750 "cplus.met"
    return _retValue ;
#line 3750 "cplus.met"
}
#line 3750 "cplus.met"

#line 3750 "cplus.met"
#line 1160 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1160 "cplus.met"
{
#line 1160 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1160 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1160 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1160 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1160 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1160 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1160 "cplus.met"
#line 1160 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1160 "cplus.met"
#line 1160 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1160 "cplus.met"
#line 1162 "cplus.met"
    {
#line 1162 "cplus.met"
        keepCarriage = 1 ;
#line 1162 "cplus.met"
#line 1163 "cplus.met"
#line 1164 "cplus.met"
        {
#line 1164 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1164 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1164 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1164 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1164 "cplus.met"
            }
#line 1164 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1164 "cplus.met"
            retTree=_ptRes0;
#line 1164 "cplus.met"
        }
#line 1164 "cplus.met"
#line 1165 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1165 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1165 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1165 "cplus.met"
        } else {
#line 1165 "cplus.met"
            tokenAhead = 0 ;
#line 1165 "cplus.met"
        }
#line 1165 "cplus.met"
#line 1165 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1165 "cplus.met"
    }
#line 1165 "cplus.met"
#line 1165 "cplus.met"
    _addlist1 = list ;
#line 1165 "cplus.met"
#line 1167 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1167 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1167 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1167 "cplus.met"
#line 1168 "cplus.met"
#line 1168 "cplus.met"
        {
#line 1168 "cplus.met"
            PPTREE _ptTree0=0;
#line 1168 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1168 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1168 "cplus.met"
            }
#line 1168 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1168 "cplus.met"
        }
#line 1168 "cplus.met"
#line 1168 "cplus.met"
        if (list){
#line 1168 "cplus.met"
#line 1168 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1168 "cplus.met"
        } else {
#line 1168 "cplus.met"
#line 1168 "cplus.met"
            list = _addlist1 ;
#line 1168 "cplus.met"
        }
#line 1168 "cplus.met"
    } 
#line 1168 "cplus.met"
#line 1169 "cplus.met"
    {
#line 1169 "cplus.met"
        PPTREE _ptTree0=0;
#line 1169 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1169 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1169 "cplus.met"
        }
#line 1169 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1169 "cplus.met"
    }
#line 1169 "cplus.met"
#line 1170 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1170 "cplus.met"
#line 1171 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1171 "cplus.met"
    switch( lexEl.Value) {
#line 1171 "cplus.met"
#line 1172 "cplus.met"
        case META : 
#line 1172 "cplus.met"
        case ELSE_DIR : 
#line 1172 "cplus.met"
            tokenAhead = 0 ;
#line 1172 "cplus.met"
            CommTerm();
#line 1172 "cplus.met"
#line 1173 "cplus.met"
#line 1173 "cplus.met"
            _addlist2 = list2 ;
#line 1173 "cplus.met"
#line 1174 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1174 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1174 "cplus.met"
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                {
#line 1175 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1175 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1175 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1175 "cplus.met"
                    }
#line 1175 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1175 "cplus.met"
                }
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                if (list2){
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1175 "cplus.met"
                } else {
#line 1175 "cplus.met"
#line 1175 "cplus.met"
                    list2 = _addlist2 ;
#line 1175 "cplus.met"
                }
#line 1175 "cplus.met"
            } 
#line 1175 "cplus.met"
#line 1176 "cplus.met"
            {
#line 1176 "cplus.met"
                PPTREE _ptTree0=0;
#line 1176 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1176 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1176 "cplus.met"
                }
#line 1176 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1176 "cplus.met"
            }
#line 1176 "cplus.met"
#line 1177 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1177 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1177 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1177 "cplus.met"
            } else {
#line 1177 "cplus.met"
                tokenAhead = 0 ;
#line 1177 "cplus.met"
            }
#line 1177 "cplus.met"
#line 1178 "cplus.met"
            {
#line 1178 "cplus.met"
                PPTREE _ptTree0=0;
#line 1178 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1178 "cplus.met"
                _retValue =_ptTree0;
#line 1178 "cplus.met"
                goto stat_if_dir_ret;
#line 1178 "cplus.met"
            }
#line 1178 "cplus.met"
#line 1178 "cplus.met"
            break;
#line 1178 "cplus.met"
#line 1180 "cplus.met"
        case ELIF_DIR : 
#line 1180 "cplus.met"
            tokenAhead = 0 ;
#line 1180 "cplus.met"
            CommTerm();
#line 1180 "cplus.met"
#line 1180 "cplus.met"
            {
#line 1180 "cplus.met"
                PPTREE _ptTree0=0;
#line 1180 "cplus.met"
                {
#line 1180 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1180 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1180 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1180 "cplus.met"
                    }
#line 1180 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1180 "cplus.met"
                }
#line 1180 "cplus.met"
                _retValue =_ptTree0;
#line 1180 "cplus.met"
                goto stat_if_dir_ret;
#line 1180 "cplus.met"
            }
#line 1180 "cplus.met"
            break;
#line 1180 "cplus.met"
#line 1181 "cplus.met"
        case ENDIF_DIR : 
#line 1181 "cplus.met"
            tokenAhead = 0 ;
#line 1181 "cplus.met"
            CommTerm();
#line 1181 "cplus.met"
#line 1181 "cplus.met"
            {
#line 1181 "cplus.met"
                _retValue = retTree ;
#line 1181 "cplus.met"
                goto stat_if_dir_ret;
#line 1181 "cplus.met"
                
#line 1181 "cplus.met"
            }
#line 1181 "cplus.met"
            break;
#line 1181 "cplus.met"
        default :
#line 1181 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1181 "cplus.met"
            break;
#line 1181 "cplus.met"
    }
#line 1181 "cplus.met"
#line 1181 "cplus.met"
#line 1182 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1182 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1182 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1182 "cplus.met"
return((PPTREE) 0);
#line 1182 "cplus.met"

#line 1182 "cplus.met"
stat_if_dir_exit :
#line 1182 "cplus.met"

#line 1182 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1182 "cplus.met"
    _funcLevel--;
#line 1182 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1182 "cplus.met"
    return((PPTREE) -1) ;
#line 1182 "cplus.met"

#line 1182 "cplus.met"
stat_if_dir_ret :
#line 1182 "cplus.met"
    
#line 1182 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1182 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1182 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1182 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1182 "cplus.met"
    return _retValue ;
#line 1182 "cplus.met"
}
#line 1182 "cplus.met"

#line 1182 "cplus.met"
#line 1223 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1223 "cplus.met"
{
#line 1223 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1223 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1223 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1223 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1223 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1223 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1223 "cplus.met"
#line 1223 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1223 "cplus.met"
#line 1223 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1223 "cplus.met"
#line 1225 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1225 "cplus.met"
#line 1226 "cplus.met"
#line 1227 "cplus.met"
        {
#line 1227 "cplus.met"
            keepCarriage = 1 ;
#line 1227 "cplus.met"
#line 1228 "cplus.met"
#line 1229 "cplus.met"
            {
#line 1229 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1229 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1229 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1229 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1229 "cplus.met"
                }
#line 1229 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1229 "cplus.met"
                retTree=_ptRes0;
#line 1229 "cplus.met"
            }
#line 1229 "cplus.met"
#line 1230 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1230 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1230 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1230 "cplus.met"
            } else {
#line 1230 "cplus.met"
                tokenAhead = 0 ;
#line 1230 "cplus.met"
            }
#line 1230 "cplus.met"
#line 1230 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1230 "cplus.met"
        }
#line 1230 "cplus.met"
#line 1230 "cplus.met"
#line 1231 "cplus.met"
    } else {
#line 1231 "cplus.met"
#line 1234 "cplus.met"
#line 1235 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1235 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1235 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1235 "cplus.met"
        } else {
#line 1235 "cplus.met"
            tokenAhead = 0 ;
#line 1235 "cplus.met"
        }
#line 1235 "cplus.met"
#line 1236 "cplus.met"
        {
#line 1236 "cplus.met"
            keepCarriage = 1 ;
#line 1236 "cplus.met"
#line 1237 "cplus.met"
#line 1238 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 1238 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1238 "cplus.met"
            }
#line 1238 "cplus.met"
#line 1239 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1239 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1239 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1239 "cplus.met"
            } else {
#line 1239 "cplus.met"
                tokenAhead = 0 ;
#line 1239 "cplus.met"
            }
#line 1239 "cplus.met"
#line 1239 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1239 "cplus.met"
        }
#line 1239 "cplus.met"
#line 1241 "cplus.met"
        {
#line 1241 "cplus.met"
            PPTREE _ptRes0=0;
#line 1241 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1241 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1241 "cplus.met"
            retTree=_ptRes0;
#line 1241 "cplus.met"
        }
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    }
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    _addlist1 = list ;
#line 1241 "cplus.met"
#line 1243 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1243 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1243 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1243 "cplus.met"
#line 1244 "cplus.met"
#line 1244 "cplus.met"
        {
#line 1244 "cplus.met"
            PPTREE _ptTree0=0;
#line 1244 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1244 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1244 "cplus.met"
            }
#line 1244 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1244 "cplus.met"
        }
#line 1244 "cplus.met"
#line 1244 "cplus.met"
        if (list){
#line 1244 "cplus.met"
#line 1244 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1244 "cplus.met"
        } else {
#line 1244 "cplus.met"
#line 1244 "cplus.met"
            list = _addlist1 ;
#line 1244 "cplus.met"
        }
#line 1244 "cplus.met"
    } 
#line 1244 "cplus.met"
#line 1245 "cplus.met"
    {
#line 1245 "cplus.met"
        PPTREE _ptTree0=0;
#line 1245 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1245 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1245 "cplus.met"
        }
#line 1245 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1245 "cplus.met"
    }
#line 1245 "cplus.met"
#line 1246 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1246 "cplus.met"
#line 1247 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1247 "cplus.met"
    switch( lexEl.Value) {
#line 1247 "cplus.met"
#line 1248 "cplus.met"
        case META : 
#line 1248 "cplus.met"
        case ELSE_DIR : 
#line 1248 "cplus.met"
            tokenAhead = 0 ;
#line 1248 "cplus.met"
            CommTerm();
#line 1248 "cplus.met"
#line 1249 "cplus.met"
#line 1249 "cplus.met"
            _addlist2 = list2 ;
#line 1249 "cplus.met"
#line 1250 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1250 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1250 "cplus.met"
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                {
#line 1251 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1251 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1251 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1251 "cplus.met"
                    }
#line 1251 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1251 "cplus.met"
                }
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                if (list2){
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1251 "cplus.met"
                } else {
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                    list2 = _addlist2 ;
#line 1251 "cplus.met"
                }
#line 1251 "cplus.met"
            } 
#line 1251 "cplus.met"
#line 1252 "cplus.met"
            {
#line 1252 "cplus.met"
                PPTREE _ptTree0=0;
#line 1252 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 1252 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1252 "cplus.met"
                }
#line 1252 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1252 "cplus.met"
            }
#line 1252 "cplus.met"
#line 1253 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1253 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1253 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1253 "cplus.met"
            } else {
#line 1253 "cplus.met"
                tokenAhead = 0 ;
#line 1253 "cplus.met"
            }
#line 1253 "cplus.met"
#line 1254 "cplus.met"
            {
#line 1254 "cplus.met"
                PPTREE _ptTree0=0;
#line 1254 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1254 "cplus.met"
                _retValue =_ptTree0;
#line 1254 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1254 "cplus.met"
            }
#line 1254 "cplus.met"
#line 1254 "cplus.met"
            break;
#line 1254 "cplus.met"
#line 1256 "cplus.met"
        case ELIF_DIR : 
#line 1256 "cplus.met"
            tokenAhead = 0 ;
#line 1256 "cplus.met"
            CommTerm();
#line 1256 "cplus.met"
#line 1256 "cplus.met"
            {
#line 1256 "cplus.met"
                PPTREE _ptTree0=0;
#line 1256 "cplus.met"
                {
#line 1256 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1256 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 1256 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1256 "cplus.met"
                    }
#line 1256 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1256 "cplus.met"
                }
#line 1256 "cplus.met"
                _retValue =_ptTree0;
#line 1256 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1256 "cplus.met"
            }
#line 1256 "cplus.met"
            break;
#line 1256 "cplus.met"
#line 1257 "cplus.met"
        case ENDIF_DIR : 
#line 1257 "cplus.met"
            tokenAhead = 0 ;
#line 1257 "cplus.met"
            CommTerm();
#line 1257 "cplus.met"
#line 1257 "cplus.met"
            {
#line 1257 "cplus.met"
                _retValue = retTree ;
#line 1257 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1257 "cplus.met"
                
#line 1257 "cplus.met"
            }
#line 1257 "cplus.met"
            break;
#line 1257 "cplus.met"
        default :
#line 1257 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1257 "cplus.met"
            break;
#line 1257 "cplus.met"
    }
#line 1257 "cplus.met"
#line 1257 "cplus.met"
#line 1258 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1258 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1258 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1258 "cplus.met"
return((PPTREE) 0);
#line 1258 "cplus.met"

#line 1258 "cplus.met"
stat_ifdef_dir_exit :
#line 1258 "cplus.met"

#line 1258 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1258 "cplus.met"
    _funcLevel--;
#line 1258 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1258 "cplus.met"
    return((PPTREE) -1) ;
#line 1258 "cplus.met"

#line 1258 "cplus.met"
stat_ifdef_dir_ret :
#line 1258 "cplus.met"
    
#line 1258 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1258 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1258 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1258 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1258 "cplus.met"
    return _retValue ;
#line 1258 "cplus.met"
}
#line 1258 "cplus.met"

#line 1258 "cplus.met"
