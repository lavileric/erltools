/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2902 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2902 "cplus.met"
{
#line 2902 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2902 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2902 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2902 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2902 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2902 "cplus.met"
#line 2903 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2903 "cplus.met"
    switch( lexEl.Value) {
#line 2903 "cplus.met"
#line 2904 "cplus.met"
        case EGAL : 
#line 2904 "cplus.met"
            tokenAhead = 0 ;
#line 2904 "cplus.met"
            CommTerm();
#line 2904 "cplus.met"
#line 2904 "cplus.met"
            {
#line 2904 "cplus.met"
                PPTREE _ptTree0=0;
#line 2904 "cplus.met"
                {
#line 2904 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2904 "cplus.met"
                    _ptRes1= MakeTree(AFF, 2);
#line 2904 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2904 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2904 "cplus.met"
                    }
#line 2904 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2904 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2904 "cplus.met"
                }
#line 2904 "cplus.met"
                _retValue =_ptTree0;
#line 2904 "cplus.met"
                goto assignment_end_ret;
#line 2904 "cplus.met"
            }
#line 2904 "cplus.met"
            break;
#line 2904 "cplus.met"
#line 2905 "cplus.met"
        case ETOIEGAL : 
#line 2905 "cplus.met"
            tokenAhead = 0 ;
#line 2905 "cplus.met"
            CommTerm();
#line 2905 "cplus.met"
#line 2905 "cplus.met"
            {
#line 2905 "cplus.met"
                PPTREE _ptTree0=0;
#line 2905 "cplus.met"
                {
#line 2905 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2905 "cplus.met"
                    _ptRes1= MakeTree(MUL_AFF, 2);
#line 2905 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2905 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2905 "cplus.met"
                    }
#line 2905 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2905 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2905 "cplus.met"
                }
#line 2905 "cplus.met"
                _retValue =_ptTree0;
#line 2905 "cplus.met"
                goto assignment_end_ret;
#line 2905 "cplus.met"
            }
#line 2905 "cplus.met"
            break;
#line 2905 "cplus.met"
#line 2906 "cplus.met"
        case META : 
#line 2906 "cplus.met"
        case SLASEGAL : 
#line 2906 "cplus.met"
            tokenAhead = 0 ;
#line 2906 "cplus.met"
            CommTerm();
#line 2906 "cplus.met"
#line 2906 "cplus.met"
            {
#line 2906 "cplus.met"
                PPTREE _ptTree0=0;
#line 2906 "cplus.met"
                {
#line 2906 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2906 "cplus.met"
                    _ptRes1= MakeTree(DIV_AFF, 2);
#line 2906 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2906 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2906 "cplus.met"
                    }
#line 2906 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2906 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2906 "cplus.met"
                }
#line 2906 "cplus.met"
                _retValue =_ptTree0;
#line 2906 "cplus.met"
                goto assignment_end_ret;
#line 2906 "cplus.met"
            }
#line 2906 "cplus.met"
            break;
#line 2906 "cplus.met"
#line 2907 "cplus.met"
        case POURCEGAL : 
#line 2907 "cplus.met"
            tokenAhead = 0 ;
#line 2907 "cplus.met"
            CommTerm();
#line 2907 "cplus.met"
#line 2907 "cplus.met"
            {
#line 2907 "cplus.met"
                PPTREE _ptTree0=0;
#line 2907 "cplus.met"
                {
#line 2907 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2907 "cplus.met"
                    _ptRes1= MakeTree(REM_AFF, 2);
#line 2907 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2907 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2907 "cplus.met"
                    }
#line 2907 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2907 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2907 "cplus.met"
                }
#line 2907 "cplus.met"
                _retValue =_ptTree0;
#line 2907 "cplus.met"
                goto assignment_end_ret;
#line 2907 "cplus.met"
            }
#line 2907 "cplus.met"
            break;
#line 2907 "cplus.met"
#line 2908 "cplus.met"
        case PLUSEGAL : 
#line 2908 "cplus.met"
            tokenAhead = 0 ;
#line 2908 "cplus.met"
            CommTerm();
#line 2908 "cplus.met"
#line 2908 "cplus.met"
            {
#line 2908 "cplus.met"
                PPTREE _ptTree0=0;
#line 2908 "cplus.met"
                {
#line 2908 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2908 "cplus.met"
                    _ptRes1= MakeTree(PLU_AFF, 2);
#line 2908 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2908 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2908 "cplus.met"
                    }
#line 2908 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2908 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2908 "cplus.met"
                }
#line 2908 "cplus.met"
                _retValue =_ptTree0;
#line 2908 "cplus.met"
                goto assignment_end_ret;
#line 2908 "cplus.met"
            }
#line 2908 "cplus.met"
            break;
#line 2908 "cplus.met"
#line 2909 "cplus.met"
        case TIREEGAL : 
#line 2909 "cplus.met"
            tokenAhead = 0 ;
#line 2909 "cplus.met"
            CommTerm();
#line 2909 "cplus.met"
#line 2909 "cplus.met"
            {
#line 2909 "cplus.met"
                PPTREE _ptTree0=0;
#line 2909 "cplus.met"
                {
#line 2909 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2909 "cplus.met"
                    _ptRes1= MakeTree(MIN_AFF, 2);
#line 2909 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2909 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2909 "cplus.met"
                    }
#line 2909 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2909 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2909 "cplus.met"
                }
#line 2909 "cplus.met"
                _retValue =_ptTree0;
#line 2909 "cplus.met"
                goto assignment_end_ret;
#line 2909 "cplus.met"
            }
#line 2909 "cplus.met"
            break;
#line 2909 "cplus.met"
#line 2910 "cplus.met"
        case INFEINFEEGAL : 
#line 2910 "cplus.met"
            tokenAhead = 0 ;
#line 2910 "cplus.met"
            CommTerm();
#line 2910 "cplus.met"
#line 2910 "cplus.met"
            {
#line 2910 "cplus.met"
                PPTREE _ptTree0=0;
#line 2910 "cplus.met"
                {
#line 2910 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2910 "cplus.met"
                    _ptRes1= MakeTree(LSH_AFF, 2);
#line 2910 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2910 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2910 "cplus.met"
                    }
#line 2910 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2910 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2910 "cplus.met"
                }
#line 2910 "cplus.met"
                _retValue =_ptTree0;
#line 2910 "cplus.met"
                goto assignment_end_ret;
#line 2910 "cplus.met"
            }
#line 2910 "cplus.met"
            break;
#line 2910 "cplus.met"
#line 2911 "cplus.met"
        case SUPESUPEEGAL : 
#line 2911 "cplus.met"
            tokenAhead = 0 ;
#line 2911 "cplus.met"
            CommTerm();
#line 2911 "cplus.met"
#line 2911 "cplus.met"
            {
#line 2911 "cplus.met"
                PPTREE _ptTree0=0;
#line 2911 "cplus.met"
                {
#line 2911 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2911 "cplus.met"
                    _ptRes1= MakeTree(RSH_AFF, 2);
#line 2911 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2911 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2911 "cplus.met"
                    }
#line 2911 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2911 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2911 "cplus.met"
                }
#line 2911 "cplus.met"
                _retValue =_ptTree0;
#line 2911 "cplus.met"
                goto assignment_end_ret;
#line 2911 "cplus.met"
            }
#line 2911 "cplus.met"
            break;
#line 2911 "cplus.met"
#line 2912 "cplus.met"
        case ETCOEGAL : 
#line 2912 "cplus.met"
            tokenAhead = 0 ;
#line 2912 "cplus.met"
            CommTerm();
#line 2912 "cplus.met"
#line 2912 "cplus.met"
            {
#line 2912 "cplus.met"
                PPTREE _ptTree0=0;
#line 2912 "cplus.met"
                {
#line 2912 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2912 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2912 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2912 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2912 "cplus.met"
                    }
#line 2912 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2912 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2912 "cplus.met"
                }
#line 2912 "cplus.met"
                _retValue =_ptTree0;
#line 2912 "cplus.met"
                goto assignment_end_ret;
#line 2912 "cplus.met"
            }
#line 2912 "cplus.met"
            break;
#line 2912 "cplus.met"
#line 2913 "cplus.met"
        case VBAREGAL : 
#line 2913 "cplus.met"
            tokenAhead = 0 ;
#line 2913 "cplus.met"
            CommTerm();
#line 2913 "cplus.met"
#line 2913 "cplus.met"
            {
#line 2913 "cplus.met"
                PPTREE _ptTree0=0;
#line 2913 "cplus.met"
                {
#line 2913 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2913 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2913 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2913 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2913 "cplus.met"
                    }
#line 2913 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2913 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2913 "cplus.met"
                }
#line 2913 "cplus.met"
                _retValue =_ptTree0;
#line 2913 "cplus.met"
                goto assignment_end_ret;
#line 2913 "cplus.met"
            }
#line 2913 "cplus.met"
            break;
#line 2913 "cplus.met"
#line 2914 "cplus.met"
        case CHAPEGAL : 
#line 2914 "cplus.met"
            tokenAhead = 0 ;
#line 2914 "cplus.met"
            CommTerm();
#line 2914 "cplus.met"
#line 2914 "cplus.met"
            {
#line 2914 "cplus.met"
                PPTREE _ptTree0=0;
#line 2914 "cplus.met"
                {
#line 2914 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2914 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2914 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2914 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2914 "cplus.met"
                    }
#line 2914 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2914 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2914 "cplus.met"
                }
#line 2914 "cplus.met"
                _retValue =_ptTree0;
#line 2914 "cplus.met"
                goto assignment_end_ret;
#line 2914 "cplus.met"
            }
#line 2914 "cplus.met"
            break;
#line 2914 "cplus.met"
        default :
#line 2914 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2914 "cplus.met"
            break;
#line 2914 "cplus.met"
    }
#line 2914 "cplus.met"
#line 2914 "cplus.met"
#line 2915 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2915 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2915 "cplus.met"
return((PPTREE) 0);
#line 2915 "cplus.met"

#line 2915 "cplus.met"
assignment_end_exit :
#line 2915 "cplus.met"

#line 2915 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2915 "cplus.met"
    _funcLevel--;
#line 2915 "cplus.met"
    return((PPTREE) -1) ;
#line 2915 "cplus.met"

#line 2915 "cplus.met"
assignment_end_ret :
#line 2915 "cplus.met"
    
#line 2915 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2915 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2915 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2915 "cplus.met"
    return _retValue ;
#line 2915 "cplus.met"
}
#line 2915 "cplus.met"

#line 2915 "cplus.met"
#line 2918 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2918 "cplus.met"
{
#line 2918 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2918 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2918 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2918 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2918 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2918 "cplus.met"
#line 2918 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2918 "cplus.met"
#line 2920 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2920 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2920 "cplus.met"
    }
#line 2920 "cplus.met"
#line 2921 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 20, cplus)){
#line 2921 "cplus.met"
#line 2922 "cplus.met"
#line 2923 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2923 "cplus.met"
#line 2924 "cplus.met"
        expTree = expFollow ;
#line 2924 "cplus.met"
#line 2924 "cplus.met"
#line 2924 "cplus.met"
    }
#line 2924 "cplus.met"
#line 2926 "cplus.met"
    {
#line 2926 "cplus.met"
        _retValue = expTree ;
#line 2926 "cplus.met"
        goto assignment_expression_ret;
#line 2926 "cplus.met"
        
#line 2926 "cplus.met"
    }
#line 2926 "cplus.met"
#line 2926 "cplus.met"
#line 2926 "cplus.met"

#line 2927 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2927 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2927 "cplus.met"
return((PPTREE) 0);
#line 2927 "cplus.met"

#line 2927 "cplus.met"
assignment_expression_exit :
#line 2927 "cplus.met"

#line 2927 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2927 "cplus.met"
    _funcLevel--;
#line 2927 "cplus.met"
    return((PPTREE) -1) ;
#line 2927 "cplus.met"

#line 2927 "cplus.met"
assignment_expression_ret :
#line 2927 "cplus.met"
    
#line 2927 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2927 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2927 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2927 "cplus.met"
    return _retValue ;
#line 2927 "cplus.met"
}
#line 2927 "cplus.met"

#line 2927 "cplus.met"
#line 2416 "cplus.met"
PPTREE cplus::attribute_call ( int error_free)
#line 2416 "cplus.met"
{
#line 2416 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2416 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2416 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2416 "cplus.met"
    int _Debug = TRACE_RULE("attribute_call",TRACE_ENTER,(PPTREE)0);
#line 2416 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2416 "cplus.met"
#line 2416 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2416 "cplus.met"
#line 2418 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2418 "cplus.met"
    if (  !SEE_TOKEN( __ATTRIBUTE__,"__attribute__") || !(CommTerm(),1)) {
#line 2418 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"__attribute__")
#line 2418 "cplus.met"
    } else {
#line 2418 "cplus.met"
        tokenAhead = 0 ;
#line 2418 "cplus.met"
    }
#line 2418 "cplus.met"
#line 2419 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2419 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2419 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"(")
#line 2419 "cplus.met"
    } else {
#line 2419 "cplus.met"
        tokenAhead = 0 ;
#line 2419 "cplus.met"
    }
#line 2419 "cplus.met"
#line 2420 "cplus.met"
    {
#line 2420 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2420 "cplus.met"
        _ptRes0= MakeTree(ATTRIBUTE_CALL, 1);
#line 2420 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2420 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(attribute_call_exit,"attribute_call")
#line 2420 "cplus.met"
        }
#line 2420 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2420 "cplus.met"
        retTree=_ptRes0;
#line 2420 "cplus.met"
    }
#line 2420 "cplus.met"
#line 2421 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2421 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2421 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,")")
#line 2421 "cplus.met"
    } else {
#line 2421 "cplus.met"
        tokenAhead = 0 ;
#line 2421 "cplus.met"
    }
#line 2421 "cplus.met"
#line 2422 "cplus.met"
    {
#line 2422 "cplus.met"
        _retValue = retTree ;
#line 2422 "cplus.met"
        goto attribute_call_ret;
#line 2422 "cplus.met"
        
#line 2422 "cplus.met"
    }
#line 2422 "cplus.met"
#line 2422 "cplus.met"
#line 2422 "cplus.met"

#line 2423 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2423 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2423 "cplus.met"
return((PPTREE) 0);
#line 2423 "cplus.met"

#line 2423 "cplus.met"
attribute_call_exit :
#line 2423 "cplus.met"

#line 2423 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_EXIT,(PPTREE)0);
#line 2423 "cplus.met"
    _funcLevel--;
#line 2423 "cplus.met"
    return((PPTREE) -1) ;
#line 2423 "cplus.met"

#line 2423 "cplus.met"
attribute_call_ret :
#line 2423 "cplus.met"
    
#line 2423 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_RETURN,_retValue);
#line 2423 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2423 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2423 "cplus.met"
    return _retValue ;
#line 2423 "cplus.met"
}
#line 2423 "cplus.met"

#line 2423 "cplus.met"
#line 2098 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 2098 "cplus.met"
{
#line 2098 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2098 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2098 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2098 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 2098 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2098 "cplus.met"
#line 2098 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2098 "cplus.met"
#line 2098 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 2098 "cplus.met"
#line 2098 "cplus.met"
    _addlist1 = list ;
#line 2098 "cplus.met"
#line 2100 "cplus.met"
    do {
#line 2100 "cplus.met"
#line 2101 "cplus.met"
        {
#line 2101 "cplus.met"
            PPTREE _ptTree0=0;
#line 2101 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2101 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 2101 "cplus.met"
            }
#line 2101 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2101 "cplus.met"
        }
#line 2101 "cplus.met"
#line 2101 "cplus.met"
        if (list){
#line 2101 "cplus.met"
#line 2101 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2101 "cplus.met"
        } else {
#line 2101 "cplus.met"
#line 2101 "cplus.met"
            list = _addlist1 ;
#line 2101 "cplus.met"
        }
#line 2101 "cplus.met"
#line 2101 "cplus.met"
#line 2102 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2102 "cplus.met"
#line 2103 "cplus.met"
    {
#line 2103 "cplus.met"
        PPTREE _ptTree0=0;
#line 2103 "cplus.met"
        {
#line 2103 "cplus.met"
            PPTREE _ptRes1=0;
#line 2103 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 2103 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 2103 "cplus.met"
            _ptTree0=_ptRes1;
#line 2103 "cplus.met"
        }
#line 2103 "cplus.met"
        _retValue =_ptTree0;
#line 2103 "cplus.met"
        goto base_specifier_ret;
#line 2103 "cplus.met"
    }
#line 2103 "cplus.met"
#line 2103 "cplus.met"
#line 2103 "cplus.met"

#line 2104 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2104 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2104 "cplus.met"
return((PPTREE) 0);
#line 2104 "cplus.met"

#line 2104 "cplus.met"
base_specifier_exit :
#line 2104 "cplus.met"

#line 2104 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 2104 "cplus.met"
    _funcLevel--;
#line 2104 "cplus.met"
    return((PPTREE) -1) ;
#line 2104 "cplus.met"

#line 2104 "cplus.met"
base_specifier_ret :
#line 2104 "cplus.met"
    
#line 2104 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 2104 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2104 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2104 "cplus.met"
    return _retValue ;
#line 2104 "cplus.met"
}
#line 2104 "cplus.met"

#line 2104 "cplus.met"
#line 2085 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 2085 "cplus.met"
{
#line 2085 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2085 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2085 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2085 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 2085 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2085 "cplus.met"
#line 2085 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2085 "cplus.met"
#line 2087 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2087 "cplus.met"
    switch( lexEl.Value) {
#line 2087 "cplus.met"
#line 2088 "cplus.met"
        case PRIVATE : 
#line 2088 "cplus.met"
            tokenAhead = 0 ;
#line 2088 "cplus.met"
            CommTerm();
#line 2088 "cplus.met"
#line 2088 "cplus.met"
            {
#line 2088 "cplus.met"
                PPTREE _ptTree0=0;
#line 2088 "cplus.met"
                {
#line 2088 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2088 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 2088 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
#line 2088 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2088 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2088 "cplus.met"
                    }
#line 2088 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2088 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2088 "cplus.met"
                }
#line 2088 "cplus.met"
                _retValue =_ptTree0;
#line 2088 "cplus.met"
                goto base_specifier_elem_ret;
#line 2088 "cplus.met"
            }
#line 2088 "cplus.met"
            break;
#line 2088 "cplus.met"
#line 2089 "cplus.met"
        case PROTECTED : 
#line 2089 "cplus.met"
            tokenAhead = 0 ;
#line 2089 "cplus.met"
            CommTerm();
#line 2089 "cplus.met"
#line 2089 "cplus.met"
            {
#line 2089 "cplus.met"
                PPTREE _ptTree0=0;
#line 2089 "cplus.met"
                {
#line 2089 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2089 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 2089 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 2089 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2089 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2089 "cplus.met"
                    }
#line 2089 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2089 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2089 "cplus.met"
                }
#line 2089 "cplus.met"
                _retValue =_ptTree0;
#line 2089 "cplus.met"
                goto base_specifier_elem_ret;
#line 2089 "cplus.met"
            }
#line 2089 "cplus.met"
            break;
#line 2089 "cplus.met"
#line 2090 "cplus.met"
        case PUBLIC : 
#line 2090 "cplus.met"
            tokenAhead = 0 ;
#line 2090 "cplus.met"
            CommTerm();
#line 2090 "cplus.met"
#line 2090 "cplus.met"
            {
#line 2090 "cplus.met"
                PPTREE _ptTree0=0;
#line 2090 "cplus.met"
                {
#line 2090 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2090 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 2090 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 2090 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2090 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2090 "cplus.met"
                    }
#line 2090 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2090 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2090 "cplus.met"
                }
#line 2090 "cplus.met"
                _retValue =_ptTree0;
#line 2090 "cplus.met"
                goto base_specifier_elem_ret;
#line 2090 "cplus.met"
            }
#line 2090 "cplus.met"
            break;
#line 2090 "cplus.met"
#line 2091 "cplus.met"
        case VIRTUAL : 
#line 2091 "cplus.met"
            tokenAhead = 0 ;
#line 2091 "cplus.met"
            CommTerm();
#line 2091 "cplus.met"
#line 2091 "cplus.met"
            {
#line 2091 "cplus.met"
                PPTREE _ptTree0=0;
#line 2091 "cplus.met"
                {
#line 2091 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2091 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 2091 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 2091 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2091 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2091 "cplus.met"
                    }
#line 2091 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2091 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2091 "cplus.met"
                }
#line 2091 "cplus.met"
                _retValue =_ptTree0;
#line 2091 "cplus.met"
                goto base_specifier_elem_ret;
#line 2091 "cplus.met"
            }
#line 2091 "cplus.met"
            break;
#line 2091 "cplus.met"
#line 2091 "cplus.met"
        default : 
#line 2091 "cplus.met"
#line 2091 "cplus.met"
            break;
#line 2091 "cplus.met"
    }
#line 2091 "cplus.met"
#line 2094 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2094 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2094 "cplus.met"
    }
#line 2094 "cplus.met"
#line 2095 "cplus.met"
    {
#line 2095 "cplus.met"
        _retValue = ret ;
#line 2095 "cplus.met"
        goto base_specifier_elem_ret;
#line 2095 "cplus.met"
        
#line 2095 "cplus.met"
    }
#line 2095 "cplus.met"
#line 2095 "cplus.met"
#line 2095 "cplus.met"

#line 2096 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2096 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2096 "cplus.met"
return((PPTREE) 0);
#line 2096 "cplus.met"

#line 2096 "cplus.met"
base_specifier_elem_exit :
#line 2096 "cplus.met"

#line 2096 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 2096 "cplus.met"
    _funcLevel--;
#line 2096 "cplus.met"
    return((PPTREE) -1) ;
#line 2096 "cplus.met"

#line 2096 "cplus.met"
base_specifier_elem_ret :
#line 2096 "cplus.met"
    
#line 2096 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 2096 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2096 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2096 "cplus.met"
    return _retValue ;
#line 2096 "cplus.met"
}
#line 2096 "cplus.met"

#line 2096 "cplus.met"
#line 4001 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 4001 "cplus.met"
{
#line 4001 "cplus.met"
    int  _oldnoString = noString;
#line 4001 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 4001 "cplus.met"
    int _value,_nbPre = 0 ;
#line 4001 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 4001 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 4001 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 4001 "cplus.met"
#line 4002 "cplus.met"
    {
#line 4002 "cplus.met"
        noString = 1 ;
#line 4002 "cplus.met"
#line 4003 "cplus.met"
#line 4003 "cplus.met"
        noString =  _oldnoString;
#line 4003 "cplus.met"
    }
#line 4003 "cplus.met"
#line 4003 "cplus.met"
#line 4004 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 4004 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 4004 "cplus.met"
noString =  _oldnoString;
#line 4004 "cplus.met"
return((PPTREE) 0);
#line 4004 "cplus.met"

#line 4004 "cplus.met"
bidon_exit :
#line 4004 "cplus.met"

#line 4004 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 4004 "cplus.met"
    _funcLevel--;
#line 4004 "cplus.met"
    noString =  _oldnoString;
#line 4004 "cplus.met"
    return((PPTREE) -1) ;
#line 4004 "cplus.met"

#line 4004 "cplus.met"
bidon_ret :
#line 4004 "cplus.met"
    
#line 4004 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 4004 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 4004 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 4004 "cplus.met"
    noString =  _oldnoString;
#line 4004 "cplus.met"
    return _retValue ;
#line 4004 "cplus.met"
}
#line 4004 "cplus.met"

#line 4004 "cplus.met"
#line 2877 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2877 "cplus.met"
{
#line 2877 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2877 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2877 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2877 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2877 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2877 "cplus.met"
#line 2877 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2877 "cplus.met"
#line 2880 "cplus.met"
    {
#line 2880 "cplus.met"
        PPTREE _ptRes0=0;
#line 2880 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2880 "cplus.met"
        retTree=_ptRes0;
#line 2880 "cplus.met"
    }
#line 2880 "cplus.met"
#line 2882 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2882 "cplus.met"
#line 2883 "cplus.met"
        {
#line 2883 "cplus.met"
            PPTREE _ptTree0=0;
#line 2883 "cplus.met"
            {
#line 2883 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2883 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2883 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2883 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2883 "cplus.met"
                    MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2883 "cplus.met"
                } else {
#line 2883 "cplus.met"
                    tokenAhead = 0 ;
#line 2883 "cplus.met"
                }
#line 2883 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2883 "cplus.met"
                _ptTree0=_ptRes1;
#line 2883 "cplus.met"
            }
#line 2883 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2883 "cplus.met"
        }
#line 2883 "cplus.met"
#line 2883 "cplus.met"
    }
#line 2883 "cplus.met"
#line 2884 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2884 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2884 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2884 "cplus.met"
    } else {
#line 2884 "cplus.met"
        tokenAhead = 0 ;
#line 2884 "cplus.met"
    }
#line 2884 "cplus.met"
#line 2885 "cplus.met"
    {
#line 2885 "cplus.met"
        PPTREE _ptTree0=0;
#line 2885 "cplus.met"
        {
#line 2885 "cplus.met"
            PPTREE _ptTree1=0;
#line 2885 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2885 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2885 "cplus.met"
            }
#line 2885 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2885 "cplus.met"
        }
#line 2885 "cplus.met"
        _retValue =_ptTree0;
#line 2885 "cplus.met"
        goto bit_field_decl_ret;
#line 2885 "cplus.met"
    }
#line 2885 "cplus.met"
#line 2885 "cplus.met"
#line 2885 "cplus.met"

#line 2886 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2886 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2886 "cplus.met"
return((PPTREE) 0);
#line 2886 "cplus.met"

#line 2886 "cplus.met"
bit_field_decl_exit :
#line 2886 "cplus.met"

#line 2886 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2886 "cplus.met"
    _funcLevel--;
#line 2886 "cplus.met"
    return((PPTREE) -1) ;
#line 2886 "cplus.met"

#line 2886 "cplus.met"
bit_field_decl_ret :
#line 2886 "cplus.met"
    
#line 2886 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2886 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2886 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2886 "cplus.met"
    return _retValue ;
#line 2886 "cplus.met"
}
#line 2886 "cplus.met"

#line 2886 "cplus.met"
#line 3063 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 3063 "cplus.met"
{
#line 3063 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3063 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3063 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3063 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 3063 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3063 "cplus.met"
#line 3063 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3063 "cplus.met"
#line 3065 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 27, cplus)){
#line 3065 "cplus.met"
#line 3066 "cplus.met"
        {
#line 3066 "cplus.met"
            _retValue = retTree ;
#line 3066 "cplus.met"
            goto cast_expression_ret;
#line 3066 "cplus.met"
            
#line 3066 "cplus.met"
        }
#line 3066 "cplus.met"
    } else {
#line 3066 "cplus.met"
#line 3068 "cplus.met"
        {
#line 3068 "cplus.met"
            PPTREE _ptTree0=0;
#line 3068 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 159, cplus))== (PPTREE) -1 ) {
#line 3068 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 3068 "cplus.met"
            }
#line 3068 "cplus.met"
            _retValue =_ptTree0;
#line 3068 "cplus.met"
            goto cast_expression_ret;
#line 3068 "cplus.met"
        }
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
cast_expression_exit :
#line 3069 "cplus.met"

#line 3069 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 3069 "cplus.met"
    _funcLevel--;
#line 3069 "cplus.met"
    return((PPTREE) -1) ;
#line 3069 "cplus.met"

#line 3069 "cplus.met"
cast_expression_ret :
#line 3069 "cplus.met"
    
#line 3069 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
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
#line 3055 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 3055 "cplus.met"
{
#line 3055 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3055 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3055 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3055 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 3055 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3055 "cplus.met"
#line 3055 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 3055 "cplus.met"
#line 3057 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3057 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3057 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 3057 "cplus.met"
    } else {
#line 3057 "cplus.met"
        tokenAhead = 0 ;
#line 3057 "cplus.met"
    }
#line 3057 "cplus.met"
#line 3058 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3058 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 3058 "cplus.met"
    }
#line 3058 "cplus.met"
#line 3059 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3059 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3059 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 3059 "cplus.met"
    } else {
#line 3059 "cplus.met"
        tokenAhead = 0 ;
#line 3059 "cplus.met"
    }
#line 3059 "cplus.met"
#line 3060 "cplus.met"
    {
#line 3060 "cplus.met"
        PPTREE _ptTree0=0;
#line 3060 "cplus.met"
        {
#line 3060 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3060 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 3060 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 3060 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3060 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 3060 "cplus.met"
            }
#line 3060 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3060 "cplus.met"
            _ptTree0=_ptRes1;
#line 3060 "cplus.met"
        }
#line 3060 "cplus.met"
        _retValue =_ptTree0;
#line 3060 "cplus.met"
        goto cast_expression_value_ret;
#line 3060 "cplus.met"
    }
#line 3060 "cplus.met"
#line 3060 "cplus.met"
#line 3060 "cplus.met"

#line 3061 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3061 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3061 "cplus.met"
return((PPTREE) 0);
#line 3061 "cplus.met"

#line 3061 "cplus.met"
cast_expression_value_exit :
#line 3061 "cplus.met"

#line 3061 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 3061 "cplus.met"
    _funcLevel--;
#line 3061 "cplus.met"
    return((PPTREE) -1) ;
#line 3061 "cplus.met"

#line 3061 "cplus.met"
cast_expression_value_ret :
#line 3061 "cplus.met"
    
#line 3061 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 3061 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3061 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3061 "cplus.met"
    return _retValue ;
#line 3061 "cplus.met"
}
#line 3061 "cplus.met"

#line 3061 "cplus.met"
#line 2182 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 2182 "cplus.met"
{
#line 2182 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2182 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2182 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2182 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 2182 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2182 "cplus.met"
#line 2183 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2183 "cplus.met"
    switch( lexEl.Value) {
#line 2183 "cplus.met"
#line 2184 "cplus.met"
        case META : 
#line 2184 "cplus.met"
        case CATCH_UPPER : 
#line 2184 "cplus.met"
#line 2184 "cplus.met"
            {
#line 2184 "cplus.met"
                PPTREE _ptTree0=0;
#line 2184 "cplus.met"
                {
#line 2184 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2184 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2184 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2184 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2184 "cplus.met"
                    }
#line 2184 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2184 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2184 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2184 "cplus.met"
                    }
#line 2184 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2184 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2184 "cplus.met"
                }
#line 2184 "cplus.met"
                _retValue =_ptTree0;
#line 2184 "cplus.met"
                goto catch_unit_ret;
#line 2184 "cplus.met"
            }
#line 2184 "cplus.met"
            break;
#line 2184 "cplus.met"
#line 2185 "cplus.met"
        case CATCH_ALL : 
#line 2185 "cplus.met"
#line 2185 "cplus.met"
            {
#line 2185 "cplus.met"
                PPTREE _ptTree0=0;
#line 2185 "cplus.met"
                {
#line 2185 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2185 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2185 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2185 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2185 "cplus.met"
                    }
#line 2185 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2185 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2185 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2185 "cplus.met"
                    }
#line 2185 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2185 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2185 "cplus.met"
                }
#line 2185 "cplus.met"
                _retValue =_ptTree0;
#line 2185 "cplus.met"
                goto catch_unit_ret;
#line 2185 "cplus.met"
            }
#line 2185 "cplus.met"
            break;
#line 2185 "cplus.met"
#line 2186 "cplus.met"
        case AND_CATCH : 
#line 2186 "cplus.met"
#line 2186 "cplus.met"
            {
#line 2186 "cplus.met"
                PPTREE _ptTree0=0;
#line 2186 "cplus.met"
                {
#line 2186 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2186 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2186 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2186 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2186 "cplus.met"
                    }
#line 2186 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2186 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2186 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2186 "cplus.met"
                    }
#line 2186 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2186 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2186 "cplus.met"
                }
#line 2186 "cplus.met"
                _retValue =_ptTree0;
#line 2186 "cplus.met"
                goto catch_unit_ret;
#line 2186 "cplus.met"
            }
#line 2186 "cplus.met"
            break;
#line 2186 "cplus.met"
        default :
#line 2186 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 2186 "cplus.met"
            break;
#line 2186 "cplus.met"
    }
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
catch_unit_exit :
#line 2187 "cplus.met"

#line 2187 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 2187 "cplus.met"
    _funcLevel--;
#line 2187 "cplus.met"
    return((PPTREE) -1) ;
#line 2187 "cplus.met"

#line 2187 "cplus.met"
catch_unit_ret :
#line 2187 "cplus.met"
    
#line 2187 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
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
#line 2200 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 2200 "cplus.met"
{
#line 2200 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2200 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2200 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2200 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 2200 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2200 "cplus.met"
#line 2200 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2200 "cplus.met"
#line 2202 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2202 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 2202 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 2202 "cplus.met"
    } else {
#line 2202 "cplus.met"
        tokenAhead = 0 ;
#line 2202 "cplus.met"
    }
#line 2202 "cplus.met"
#line 2203 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2203 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2203 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 2203 "cplus.met"
    } else {
#line 2203 "cplus.met"
        tokenAhead = 0 ;
#line 2203 "cplus.met"
    }
#line 2203 "cplus.met"
#line 2204 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2204 "cplus.met"
#line 2205 "cplus.met"
        {
#line 2205 "cplus.met"
            PPTREE _ptRes0=0;
#line 2205 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 2205 "cplus.met"
            valTree=_ptRes0;
#line 2205 "cplus.met"
        }
#line 2205 "cplus.met"
    } else {
#line 2205 "cplus.met"
#line 2207 "cplus.met"
#line 2208 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2208 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2208 "cplus.met"
        }
#line 2208 "cplus.met"
#line 2209 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2209 "cplus.met"
#line 2210 "cplus.met"
            {
#line 2210 "cplus.met"
                PPTREE _ptRes0=0;
#line 2210 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
#line 2210 "cplus.met"
                ReplaceTree(_ptRes0, 1, retTree );
#line 2210 "cplus.met"
                ReplaceTree(_ptRes0, 2, valTree );
#line 2210 "cplus.met"
                valTree=_ptRes0;
#line 2210 "cplus.met"
            }
#line 2210 "cplus.met"
        } else {
#line 2210 "cplus.met"
#line 2212 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2212 "cplus.met"
#line 2213 "cplus.met"
                {
#line 2213 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2213 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2213 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 2213 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 2213 "cplus.met"
                    valTree=_ptRes0;
#line 2213 "cplus.met"
                }
#line 2213 "cplus.met"
            } else {
#line 2213 "cplus.met"
#line 2215 "cplus.met"
                valTree = retTree ;
#line 2215 "cplus.met"
            }
#line 2215 "cplus.met"
        }
#line 2215 "cplus.met"
#line 2215 "cplus.met"
    }
#line 2215 "cplus.met"
#line 2217 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2217 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2217 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 2217 "cplus.met"
    } else {
#line 2217 "cplus.met"
        tokenAhead = 0 ;
#line 2217 "cplus.met"
    }
#line 2217 "cplus.met"
#line 2218 "cplus.met"
    {
#line 2218 "cplus.met"
        PPTREE _ptTree0=0;
#line 2218 "cplus.met"
        {
#line 2218 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2218 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 2218 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 2218 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2218 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2218 "cplus.met"
            }
#line 2218 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2218 "cplus.met"
            _ptTree0=_ptRes1;
#line 2218 "cplus.met"
        }
#line 2218 "cplus.met"
        _retValue =_ptTree0;
#line 2218 "cplus.met"
        goto catch_unit_ansi_ret;
#line 2218 "cplus.met"
    }
#line 2218 "cplus.met"
#line 2218 "cplus.met"
#line 2218 "cplus.met"

#line 2219 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2219 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2219 "cplus.met"
return((PPTREE) 0);
#line 2219 "cplus.met"

#line 2219 "cplus.met"
catch_unit_ansi_exit :
#line 2219 "cplus.met"

#line 2219 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 2219 "cplus.met"
    _funcLevel--;
#line 2219 "cplus.met"
    return((PPTREE) -1) ;
#line 2219 "cplus.met"

#line 2219 "cplus.met"
catch_unit_ansi_ret :
#line 2219 "cplus.met"
    
#line 2219 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 2219 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2219 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2219 "cplus.met"
    return _retValue ;
#line 2219 "cplus.met"
}
#line 2219 "cplus.met"

#line 2219 "cplus.met"
#line 2241 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 2241 "cplus.met"
{
#line 2241 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2241 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2241 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2241 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 2241 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2241 "cplus.met"
#line 2241 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2241 "cplus.met"
#line 2241 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2241 "cplus.met"
#line 2243 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2243 "cplus.met"
    switch( lexEl.Value) {
#line 2243 "cplus.met"
#line 2244 "cplus.met"
        case STRUCT : 
#line 2244 "cplus.met"
            tokenAhead = 0 ;
#line 2244 "cplus.met"
            CommTerm();
#line 2244 "cplus.met"
#line 2244 "cplus.met"
            {
#line 2244 "cplus.met"
                PPTREE _ptRes0=0;
#line 2244 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2244 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 2244 "cplus.met"
                retTree=_ptRes0;
#line 2244 "cplus.met"
            }
#line 2244 "cplus.met"
            break;
#line 2244 "cplus.met"
#line 2245 "cplus.met"
        case UNION : 
#line 2245 "cplus.met"
            tokenAhead = 0 ;
#line 2245 "cplus.met"
            CommTerm();
#line 2245 "cplus.met"
#line 2245 "cplus.met"
            {
#line 2245 "cplus.met"
                PPTREE _ptRes0=0;
#line 2245 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2245 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 2245 "cplus.met"
                retTree=_ptRes0;
#line 2245 "cplus.met"
            }
#line 2245 "cplus.met"
            break;
#line 2245 "cplus.met"
#line 2246 "cplus.met"
        case CLASS : 
#line 2246 "cplus.met"
            tokenAhead = 0 ;
#line 2246 "cplus.met"
            CommTerm();
#line 2246 "cplus.met"
#line 2246 "cplus.met"
            {
#line 2246 "cplus.met"
                PPTREE _ptRes0=0;
#line 2246 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2246 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 2246 "cplus.met"
                retTree=_ptRes0;
#line 2246 "cplus.met"
            }
#line 2246 "cplus.met"
            break;
#line 2246 "cplus.met"
        default :
#line 2246 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 2246 "cplus.met"
            break;
#line 2246 "cplus.met"
    }
#line 2246 "cplus.met"
#line 2248 "cplus.met"
    {
#line 2248 "cplus.met"
        PPTREE _ptTree0=0;
#line 2248 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2248 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2248 "cplus.met"
        }
#line 2248 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 2248 "cplus.met"
    }
#line 2248 "cplus.met"
#line 2249 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 2249 "cplus.met"
#line 2250 "cplus.met"
        {
#line 2250 "cplus.met"
            PPTREE _ptTree0=0;
#line 2250 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 2250 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2250 "cplus.met"
            }
#line 2250 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2250 "cplus.met"
        }
#line 2250 "cplus.met"
#line 2250 "cplus.met"
    }
#line 2250 "cplus.met"
#line 2251 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 2251 "cplus.met"
#line 2252 "cplus.met"
#line 2253 "cplus.met"
        do {
#line 2253 "cplus.met"
#line 2253 "cplus.met"
            _addlist1 = list ;
#line 2253 "cplus.met"
#line 2254 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 88, cplus)) { 
#line 2254 "cplus.met"
#line 2255 "cplus.met"
#line 2255 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2255 "cplus.met"
#line 2255 "cplus.met"
                if (list){
#line 2255 "cplus.met"
#line 2255 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2255 "cplus.met"
                } else {
#line 2255 "cplus.met"
#line 2255 "cplus.met"
                    list = _addlist1 ;
#line 2255 "cplus.met"
                }
#line 2255 "cplus.met"
            } 
#line 2255 "cplus.met"
#line 2256 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2256 "cplus.met"
            switch( lexEl.Value) {
#line 2256 "cplus.met"
#line 2257 "cplus.met"
                case PUBLIC : 
#line 2257 "cplus.met"
#line 2257 "cplus.met"
                    {
#line 2257 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2257 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2257 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2257 "cplus.met"
                        }
#line 2257 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2257 "cplus.met"
                    }
#line 2257 "cplus.met"
                    break;
#line 2257 "cplus.met"
#line 2258 "cplus.met"
                case PRIVATE : 
#line 2258 "cplus.met"
#line 2258 "cplus.met"
                    {
#line 2258 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2258 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2258 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2258 "cplus.met"
                        }
#line 2258 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2258 "cplus.met"
                    }
#line 2258 "cplus.met"
                    break;
#line 2258 "cplus.met"
#line 2259 "cplus.met"
                case PROTECTED : 
#line 2259 "cplus.met"
#line 2259 "cplus.met"
                    {
#line 2259 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2259 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2259 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2259 "cplus.met"
                        }
#line 2259 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2259 "cplus.met"
                    }
#line 2259 "cplus.met"
                    break;
#line 2259 "cplus.met"
#line 2259 "cplus.met"
                case AFER : 
#line 2259 "cplus.met"
#line 2259 "cplus.met"
                    break;
#line 2259 "cplus.met"
#line 2261 "cplus.met"
                default : 
#line 2261 "cplus.met"
#line 2261 "cplus.met"
                    
#line 2261 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2261 "cplus.met"
                    goto class_declaration_exit;
#line 2261 "cplus.met"
                    break;
#line 2261 "cplus.met"
            }
#line 2261 "cplus.met"
#line 2261 "cplus.met"
#line 2263 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2263 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2263 "cplus.met"
#line 2264 "cplus.met"
        {
#line 2264 "cplus.met"
            PPTREE _ptTree0=0;
#line 2264 "cplus.met"
            {
#line 2264 "cplus.met"
                PPTREE _ptRes1=0;
#line 2264 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2264 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2264 "cplus.met"
                _ptTree0=_ptRes1;
#line 2264 "cplus.met"
            }
#line 2264 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2264 "cplus.met"
        }
#line 2264 "cplus.met"
#line 2265 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2265 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2265 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2265 "cplus.met"
        } else {
#line 2265 "cplus.met"
            tokenAhead = 0 ;
#line 2265 "cplus.met"
        }
#line 2265 "cplus.met"
#line 2265 "cplus.met"
#line 2265 "cplus.met"
    }
#line 2265 "cplus.met"
#line 2267 "cplus.met"
    {
#line 2267 "cplus.met"
        _retValue = retTree ;
#line 2267 "cplus.met"
        goto class_declaration_ret;
#line 2267 "cplus.met"
        
#line 2267 "cplus.met"
    }
#line 2267 "cplus.met"
#line 2267 "cplus.met"
#line 2267 "cplus.met"

#line 2268 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2268 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2268 "cplus.met"
return((PPTREE) 0);
#line 2268 "cplus.met"

#line 2268 "cplus.met"
class_declaration_exit :
#line 2268 "cplus.met"

#line 2268 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2268 "cplus.met"
    _funcLevel--;
#line 2268 "cplus.met"
    return((PPTREE) -1) ;
#line 2268 "cplus.met"

#line 2268 "cplus.met"
class_declaration_ret :
#line 2268 "cplus.met"
    
#line 2268 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2268 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2268 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2268 "cplus.met"
    return _retValue ;
#line 2268 "cplus.met"
}
#line 2268 "cplus.met"

#line 2268 "cplus.met"
#line 942 "cplus.met"
PPTREE cplus::comment_eater ( int error_free)
#line 942 "cplus.met"
{
#line 942 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 942 "cplus.met"
    int _value,_nbPre = 0 ;
#line 942 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 942 "cplus.met"
    int _Debug = TRACE_RULE("comment_eater",TRACE_ENTER,(PPTREE)0);
#line 942 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 942 "cplus.met"
#line 942 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 942 "cplus.met"
#line 944 "cplus.met"
    1;
#line 944 "cplus.met"
    switch( lexEl.Value) {
#line 944 "cplus.met"
#line 945 "cplus.met"
        default : 
#line 945 "cplus.met"
            tokenAhead = 0 ;
#line 945 "cplus.met"
            CommTerm();
#line 945 "cplus.met"
#line 946 "cplus.met"
            if ( lexEl.Value != -1 ){
#line 946 "cplus.met"
#line 947 "cplus.met"
                
#line 947 "cplus.met"
                MulFreeTree(1,retTree);
                LEX_EXIT ("",0);
#line 947 "cplus.met"
                goto comment_eater_exit;
#line 947 "cplus.met"
#line 947 "cplus.met"
            } else {
#line 947 "cplus.met"
#line 949 "cplus.met"
                {
#line 949 "cplus.met"
                    _retValue = retTree ;
#line 949 "cplus.met"
                    goto comment_eater_ret;
#line 949 "cplus.met"
                    
#line 949 "cplus.met"
                }
#line 949 "cplus.met"
            }
#line 949 "cplus.met"
            break;
#line 949 "cplus.met"
    }
#line 949 "cplus.met"
#line 949 "cplus.met"
#line 950 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 950 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 950 "cplus.met"
return((PPTREE) 0);
#line 950 "cplus.met"

#line 950 "cplus.met"
comment_eater_exit :
#line 950 "cplus.met"

#line 950 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_EXIT,(PPTREE)0);
#line 950 "cplus.met"
    _funcLevel--;
#line 950 "cplus.met"
    return((PPTREE) -1) ;
#line 950 "cplus.met"

#line 950 "cplus.met"
comment_eater_ret :
#line 950 "cplus.met"
    
#line 950 "cplus.met"
    _Debug = TRACE_RULE("comment_eater",TRACE_RETURN,_retValue);
#line 950 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 950 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 950 "cplus.met"
    return _retValue ;
#line 950 "cplus.met"
}
#line 950 "cplus.met"

#line 950 "cplus.met"
#line 2076 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 2076 "cplus.met"
{
#line 2076 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2076 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2076 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2076 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 2076 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2076 "cplus.met"
#line 2076 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2076 "cplus.met"
#line 2078 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2078 "cplus.met"
    switch( lexEl.Value) {
#line 2078 "cplus.met"
#line 2079 "cplus.met"
        case META : 
#line 2079 "cplus.met"
        case IDENT : 
#line 2079 "cplus.met"
#line 2079 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2079 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 2079 "cplus.met"
            }
#line 2079 "cplus.met"
            break;
#line 2079 "cplus.met"
#line 2080 "cplus.met"
        case DPOIDPOI : 
#line 2080 "cplus.met"
            tokenAhead = 0 ;
#line 2080 "cplus.met"
            CommTerm();
#line 2080 "cplus.met"
#line 2080 "cplus.met"
            {
#line 2080 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2080 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 2080 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2080 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 2080 "cplus.met"
                }
#line 2080 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2080 "cplus.met"
                ret=_ptRes0;
#line 2080 "cplus.met"
            }
#line 2080 "cplus.met"
            break;
#line 2080 "cplus.met"
        default :
#line 2080 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 2080 "cplus.met"
            break;
#line 2080 "cplus.met"
    }
#line 2080 "cplus.met"
#line 2082 "cplus.met"
    {
#line 2082 "cplus.met"
        _retValue = ret ;
#line 2082 "cplus.met"
        goto complete_class_name_ret;
#line 2082 "cplus.met"
        
#line 2082 "cplus.met"
    }
#line 2082 "cplus.met"
#line 2082 "cplus.met"
#line 2082 "cplus.met"

#line 2083 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2083 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2083 "cplus.met"
return((PPTREE) 0);
#line 2083 "cplus.met"

#line 2083 "cplus.met"
complete_class_name_exit :
#line 2083 "cplus.met"

#line 2083 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 2083 "cplus.met"
    _funcLevel--;
#line 2083 "cplus.met"
    return((PPTREE) -1) ;
#line 2083 "cplus.met"

#line 2083 "cplus.met"
complete_class_name_ret :
#line 2083 "cplus.met"
    
#line 2083 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 2083 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2083 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2083 "cplus.met"
    return _retValue ;
#line 2083 "cplus.met"
}
#line 2083 "cplus.met"

#line 2083 "cplus.met"
#line 3655 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3655 "cplus.met"
{
#line 3655 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3655 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3655 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3655 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3655 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3655 "cplus.met"
#line 3655 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3655 "cplus.met"
#line 3655 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3655 "cplus.met"
#line 3657 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3657 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3657 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3657 "cplus.met"
    } else {
#line 3657 "cplus.met"
        tokenAhead = 0 ;
#line 3657 "cplus.met"
    }
#line 3657 "cplus.met"
#line 3658 "cplus.met"
     debut :
#line 3658 "cplus.met"
#line 3658 "cplus.met"
    _addlist1 = statList ;
#line 3658 "cplus.met"
#line 3660 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 147, cplus)) || 
#line 3660 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 3660 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 143, cplus))) || 
#line 3660 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 63, cplus))) || 
#line 3660 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 76, cplus))) { 
#line 3660 "cplus.met"
#line 3662 "cplus.met"
#line 3662 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3662 "cplus.met"
#line 3662 "cplus.met"
        if (statList){
#line 3662 "cplus.met"
#line 3662 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3662 "cplus.met"
        } else {
#line 3662 "cplus.met"
#line 3662 "cplus.met"
            statList = _addlist1 ;
#line 3662 "cplus.met"
        }
#line 3662 "cplus.met"
    } 
#line 3662 "cplus.met"
#line 3663 "cplus.met"
    {
#line 3663 "cplus.met"
        PPTREE _ptTree0=0;
#line 3663 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 3663 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3663 "cplus.met"
        }
#line 3663 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3663 "cplus.met"
    }
#line 3663 "cplus.met"
#line 3664 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3664 "cplus.met"
#line 3665 "cplus.met"
#line 3666 "cplus.met"
        dumperror ();
#line 3666 "cplus.met"
#line 3667 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3667 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3667 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3667 "cplus.met"
        } else {
#line 3667 "cplus.met"
            tokenAhead = 0 ;
#line 3667 "cplus.met"
        }
#line 3667 "cplus.met"
#line 3668 "cplus.met"
         hasGotError = 1 ;
#line 3668 "cplus.met"
#line 3669 "cplus.met"
         goto debut ;
#line 3669 "cplus.met"
#line 3669 "cplus.met"
#line 3669 "cplus.met"
    }
#line 3669 "cplus.met"
#line 3671 "cplus.met"
    {
#line 3671 "cplus.met"
        PPTREE _ptTree0=0;
#line 3671 "cplus.met"
        {
#line 3671 "cplus.met"
            PPTREE _ptRes1=0;
#line 3671 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3671 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3671 "cplus.met"
            _ptTree0=_ptRes1;
#line 3671 "cplus.met"
        }
#line 3671 "cplus.met"
        _retValue =_ptTree0;
#line 3671 "cplus.met"
        goto compound_statement_ret;
#line 3671 "cplus.met"
    }
#line 3671 "cplus.met"
#line 3671 "cplus.met"
#line 3671 "cplus.met"

#line 3672 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3672 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3672 "cplus.met"
return((PPTREE) 0);
#line 3672 "cplus.met"

#line 3672 "cplus.met"
compound_statement_exit :
#line 3672 "cplus.met"

#line 3672 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3672 "cplus.met"
    _funcLevel--;
#line 3672 "cplus.met"
    return((PPTREE) -1) ;
#line 3672 "cplus.met"

#line 3672 "cplus.met"
compound_statement_ret :
#line 3672 "cplus.met"
    
#line 3672 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3672 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3672 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3672 "cplus.met"
    return _retValue ;
#line 3672 "cplus.met"
}
#line 3672 "cplus.met"

#line 3672 "cplus.met"
#line 2929 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2929 "cplus.met"
{
#line 2929 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2929 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2929 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2929 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2929 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2929 "cplus.met"
#line 2929 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2929 "cplus.met"
#line 2931 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2931 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2931 "cplus.met"
    }
#line 2931 "cplus.met"
#line 2932 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2932 "cplus.met"
#line 2933 "cplus.met"
#line 2934 "cplus.met"
        {
#line 2934 "cplus.met"
            PPTREE _ptRes0=0;
#line 2934 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2934 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2934 "cplus.met"
            condTree=_ptRes0;
#line 2934 "cplus.met"
        }
#line 2934 "cplus.met"
#line 2935 "cplus.met"
        {
#line 2935 "cplus.met"
            PPTREE _ptTree0=0;
#line 2935 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2935 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2935 "cplus.met"
            }
#line 2935 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2935 "cplus.met"
        }
#line 2935 "cplus.met"
#line 2936 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2936 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2936 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2936 "cplus.met"
        } else {
#line 2936 "cplus.met"
            tokenAhead = 0 ;
#line 2936 "cplus.met"
        }
#line 2936 "cplus.met"
#line 2937 "cplus.met"
        {
#line 2937 "cplus.met"
            PPTREE _ptTree0=0;
#line 2937 "cplus.met"
            {
#line 2937 "cplus.met"
                PPTREE _ptTree1=0;
#line 2937 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2937 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2937 "cplus.met"
                }
#line 2937 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2937 "cplus.met"
            }
#line 2937 "cplus.met"
            _retValue =_ptTree0;
#line 2937 "cplus.met"
            goto conditional_expression_ret;
#line 2937 "cplus.met"
        }
#line 2937 "cplus.met"
#line 2937 "cplus.met"
#line 2937 "cplus.met"
    } else {
#line 2937 "cplus.met"
#line 2940 "cplus.met"
        {
#line 2940 "cplus.met"
            _retValue = expTree ;
#line 2940 "cplus.met"
            goto conditional_expression_ret;
#line 2940 "cplus.met"
            
#line 2940 "cplus.met"
        }
#line 2940 "cplus.met"
    }
#line 2940 "cplus.met"
#line 2940 "cplus.met"
#line 2940 "cplus.met"

#line 2941 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2941 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2941 "cplus.met"
return((PPTREE) 0);
#line 2941 "cplus.met"

#line 2941 "cplus.met"
conditional_expression_exit :
#line 2941 "cplus.met"

#line 2941 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2941 "cplus.met"
    _funcLevel--;
#line 2941 "cplus.met"
    return((PPTREE) -1) ;
#line 2941 "cplus.met"

#line 2941 "cplus.met"
conditional_expression_ret :
#line 2941 "cplus.met"
    
#line 2941 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2941 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2941 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2941 "cplus.met"
    return _retValue ;
#line 2941 "cplus.met"
}
#line 2941 "cplus.met"

#line 2941 "cplus.met"
#line 2383 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2383 "cplus.met"
{
#line 2383 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2383 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2383 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2383 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2383 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2383 "cplus.met"
#line 2384 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2384 "cplus.met"
    switch( lexEl.Value) {
#line 2384 "cplus.met"
#line 2385 "cplus.met"
        case CONST : 
#line 2385 "cplus.met"
#line 2385 "cplus.met"
            {
#line 2385 "cplus.met"
                PPTREE _ptTree0=0;
#line 2385 "cplus.met"
                {
#line 2385 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2385 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2385 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2385 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2385 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2385 "cplus.met"
                    } else {
#line 2385 "cplus.met"
                        tokenAhead = 0 ;
#line 2385 "cplus.met"
                    }
#line 2385 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2385 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2385 "cplus.met"
                }
#line 2385 "cplus.met"
                _retValue =_ptTree0;
#line 2385 "cplus.met"
                goto const_or_volatile_ret;
#line 2385 "cplus.met"
            }
#line 2385 "cplus.met"
            break;
#line 2385 "cplus.met"
#line 2386 "cplus.met"
        case VOLATILE : 
#line 2386 "cplus.met"
#line 2386 "cplus.met"
            {
#line 2386 "cplus.met"
                PPTREE _ptTree0=0;
#line 2386 "cplus.met"
                {
#line 2386 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2386 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2386 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2386 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2386 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2386 "cplus.met"
                    } else {
#line 2386 "cplus.met"
                        tokenAhead = 0 ;
#line 2386 "cplus.met"
                    }
#line 2386 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2386 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2386 "cplus.met"
                }
#line 2386 "cplus.met"
                _retValue =_ptTree0;
#line 2386 "cplus.met"
                goto const_or_volatile_ret;
#line 2386 "cplus.met"
            }
#line 2386 "cplus.met"
            break;
#line 2386 "cplus.met"
        default :
#line 2386 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2386 "cplus.met"
            break;
#line 2386 "cplus.met"
    }
#line 2386 "cplus.met"
#line 2386 "cplus.met"
#line 2387 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2387 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2387 "cplus.met"
return((PPTREE) 0);
#line 2387 "cplus.met"

#line 2387 "cplus.met"
const_or_volatile_exit :
#line 2387 "cplus.met"

#line 2387 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2387 "cplus.met"
    _funcLevel--;
#line 2387 "cplus.met"
    return((PPTREE) -1) ;
#line 2387 "cplus.met"

#line 2387 "cplus.met"
const_or_volatile_ret :
#line 2387 "cplus.met"
    
#line 2387 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2387 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2387 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2387 "cplus.met"
    return _retValue ;
#line 2387 "cplus.met"
}
#line 2387 "cplus.met"

#line 2387 "cplus.met"
