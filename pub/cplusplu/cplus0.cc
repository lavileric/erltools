/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2905 "cplus.met"
PPTREE cplus::assignment_end ( int error_free)
#line 2905 "cplus.met"
{
#line 2905 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2905 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2905 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2905 "cplus.met"
    int _Debug = TRACE_RULE("assignment_end",TRACE_ENTER,(PPTREE)0);
#line 2905 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2905 "cplus.met"
#line 2906 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2906 "cplus.met"
    switch( lexEl.Value) {
#line 2906 "cplus.met"
#line 2907 "cplus.met"
        case EGAL : 
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
                    _ptRes1= MakeTree(AFF, 2);
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
        case ETOIEGAL : 
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
                    _ptRes1= MakeTree(MUL_AFF, 2);
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
        case META : 
#line 2909 "cplus.met"
        case SLASEGAL : 
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
                    _ptRes1= MakeTree(DIV_AFF, 2);
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
        case POURCEGAL : 
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
                    _ptRes1= MakeTree(REM_AFF, 2);
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
        case PLUSEGAL : 
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
                    _ptRes1= MakeTree(PLU_AFF, 2);
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
        case TIREEGAL : 
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
                    _ptRes1= MakeTree(MIN_AFF, 2);
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
        case INFEINFEEGAL : 
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
                    _ptRes1= MakeTree(LSH_AFF, 2);
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
        case SUPESUPEEGAL : 
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
                    _ptRes1= MakeTree(RSH_AFF, 2);
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
#line 2915 "cplus.met"
        case ETCOEGAL : 
#line 2915 "cplus.met"
            tokenAhead = 0 ;
#line 2915 "cplus.met"
            CommTerm();
#line 2915 "cplus.met"
#line 2915 "cplus.met"
            {
#line 2915 "cplus.met"
                PPTREE _ptTree0=0;
#line 2915 "cplus.met"
                {
#line 2915 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2915 "cplus.met"
                    _ptRes1= MakeTree(AND_AFF, 2);
#line 2915 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2915 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2915 "cplus.met"
                    }
#line 2915 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2915 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2915 "cplus.met"
                }
#line 2915 "cplus.met"
                _retValue =_ptTree0;
#line 2915 "cplus.met"
                goto assignment_end_ret;
#line 2915 "cplus.met"
            }
#line 2915 "cplus.met"
            break;
#line 2915 "cplus.met"
#line 2916 "cplus.met"
        case VBAREGAL : 
#line 2916 "cplus.met"
            tokenAhead = 0 ;
#line 2916 "cplus.met"
            CommTerm();
#line 2916 "cplus.met"
#line 2916 "cplus.met"
            {
#line 2916 "cplus.met"
                PPTREE _ptTree0=0;
#line 2916 "cplus.met"
                {
#line 2916 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2916 "cplus.met"
                    _ptRes1= MakeTree(OR_AFF, 2);
#line 2916 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2916 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2916 "cplus.met"
                    }
#line 2916 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2916 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2916 "cplus.met"
                }
#line 2916 "cplus.met"
                _retValue =_ptTree0;
#line 2916 "cplus.met"
                goto assignment_end_ret;
#line 2916 "cplus.met"
            }
#line 2916 "cplus.met"
            break;
#line 2916 "cplus.met"
#line 2917 "cplus.met"
        case CHAPEGAL : 
#line 2917 "cplus.met"
            tokenAhead = 0 ;
#line 2917 "cplus.met"
            CommTerm();
#line 2917 "cplus.met"
#line 2917 "cplus.met"
            {
#line 2917 "cplus.met"
                PPTREE _ptTree0=0;
#line 2917 "cplus.met"
                {
#line 2917 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2917 "cplus.met"
                    _ptRes1= MakeTree(XOR_AFF, 2);
#line 2917 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2917 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(assignment_end_exit,"assignment_end")
#line 2917 "cplus.met"
                    }
#line 2917 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2917 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2917 "cplus.met"
                }
#line 2917 "cplus.met"
                _retValue =_ptTree0;
#line 2917 "cplus.met"
                goto assignment_end_ret;
#line 2917 "cplus.met"
            }
#line 2917 "cplus.met"
            break;
#line 2917 "cplus.met"
        default :
#line 2917 "cplus.met"
            CASE_EXIT(assignment_end_exit,"either = or *= or SLASEGAL or %= or += or -= or <<= or >>= or &= or |= or ^=")
#line 2917 "cplus.met"
            break;
#line 2917 "cplus.met"
    }
#line 2917 "cplus.met"
#line 2917 "cplus.met"
#line 2918 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2918 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2918 "cplus.met"
return((PPTREE) 0);
#line 2918 "cplus.met"

#line 2918 "cplus.met"
assignment_end_exit :
#line 2918 "cplus.met"

#line 2918 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_EXIT,(PPTREE)0);
#line 2918 "cplus.met"
    _funcLevel--;
#line 2918 "cplus.met"
    return((PPTREE) -1) ;
#line 2918 "cplus.met"

#line 2918 "cplus.met"
assignment_end_ret :
#line 2918 "cplus.met"
    
#line 2918 "cplus.met"
    _Debug = TRACE_RULE("assignment_end",TRACE_RETURN,_retValue);
#line 2918 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2918 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2918 "cplus.met"
    return _retValue ;
#line 2918 "cplus.met"
}
#line 2918 "cplus.met"

#line 2918 "cplus.met"
#line 2921 "cplus.met"
PPTREE cplus::assignment_expression ( int error_free)
#line 2921 "cplus.met"
{
#line 2921 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2921 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2921 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2921 "cplus.met"
    int _Debug = TRACE_RULE("assignment_expression",TRACE_ENTER,(PPTREE)0);
#line 2921 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2921 "cplus.met"
#line 2921 "cplus.met"
    PPTREE expTree = (PPTREE) 0,expFollow = (PPTREE) 0;
#line 2921 "cplus.met"
#line 2923 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2923 "cplus.met"
        MulFreeTree(2,expFollow,expTree);
        PROG_EXIT(assignment_expression_exit,"assignment_expression")
#line 2923 "cplus.met"
    }
#line 2923 "cplus.met"
#line 2924 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(expFollow = ,_Tak(assignment_end), 20, cplus)){
#line 2924 "cplus.met"
#line 2925 "cplus.met"
#line 2926 "cplus.met"
        ReplaceTree(expFollow ,1 ,expTree );
#line 2926 "cplus.met"
#line 2927 "cplus.met"
        expTree = expFollow ;
#line 2927 "cplus.met"
#line 2927 "cplus.met"
#line 2927 "cplus.met"
    }
#line 2927 "cplus.met"
#line 2929 "cplus.met"
    {
#line 2929 "cplus.met"
        _retValue = expTree ;
#line 2929 "cplus.met"
        goto assignment_expression_ret;
#line 2929 "cplus.met"
        
#line 2929 "cplus.met"
    }
#line 2929 "cplus.met"
#line 2929 "cplus.met"
#line 2929 "cplus.met"

#line 2930 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2930 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2930 "cplus.met"
return((PPTREE) 0);
#line 2930 "cplus.met"

#line 2930 "cplus.met"
assignment_expression_exit :
#line 2930 "cplus.met"

#line 2930 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_EXIT,(PPTREE)0);
#line 2930 "cplus.met"
    _funcLevel--;
#line 2930 "cplus.met"
    return((PPTREE) -1) ;
#line 2930 "cplus.met"

#line 2930 "cplus.met"
assignment_expression_ret :
#line 2930 "cplus.met"
    
#line 2930 "cplus.met"
    _Debug = TRACE_RULE("assignment_expression",TRACE_RETURN,_retValue);
#line 2930 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2930 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2930 "cplus.met"
    return _retValue ;
#line 2930 "cplus.met"
}
#line 2930 "cplus.met"

#line 2930 "cplus.met"
#line 2419 "cplus.met"
PPTREE cplus::attribute_call ( int error_free)
#line 2419 "cplus.met"
{
#line 2419 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2419 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2419 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2419 "cplus.met"
    int _Debug = TRACE_RULE("attribute_call",TRACE_ENTER,(PPTREE)0);
#line 2419 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2419 "cplus.met"
#line 2419 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2419 "cplus.met"
#line 2421 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2421 "cplus.met"
    if (  !SEE_TOKEN( __ATTRIBUTE__,"__attribute__") || !(CommTerm(),1)) {
#line 2421 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"__attribute__")
#line 2421 "cplus.met"
    } else {
#line 2421 "cplus.met"
        tokenAhead = 0 ;
#line 2421 "cplus.met"
    }
#line 2421 "cplus.met"
#line 2422 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2422 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2422 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,"(")
#line 2422 "cplus.met"
    } else {
#line 2422 "cplus.met"
        tokenAhead = 0 ;
#line 2422 "cplus.met"
    }
#line 2422 "cplus.met"
#line 2423 "cplus.met"
    {
#line 2423 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2423 "cplus.met"
        _ptRes0= MakeTree(ATTRIBUTE_CALL, 1);
#line 2423 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2423 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(attribute_call_exit,"attribute_call")
#line 2423 "cplus.met"
        }
#line 2423 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2423 "cplus.met"
        retTree=_ptRes0;
#line 2423 "cplus.met"
    }
#line 2423 "cplus.met"
#line 2424 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2424 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2424 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(attribute_call_exit,")")
#line 2424 "cplus.met"
    } else {
#line 2424 "cplus.met"
        tokenAhead = 0 ;
#line 2424 "cplus.met"
    }
#line 2424 "cplus.met"
#line 2425 "cplus.met"
    {
#line 2425 "cplus.met"
        _retValue = retTree ;
#line 2425 "cplus.met"
        goto attribute_call_ret;
#line 2425 "cplus.met"
        
#line 2425 "cplus.met"
    }
#line 2425 "cplus.met"
#line 2425 "cplus.met"
#line 2425 "cplus.met"

#line 2426 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2426 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2426 "cplus.met"
return((PPTREE) 0);
#line 2426 "cplus.met"

#line 2426 "cplus.met"
attribute_call_exit :
#line 2426 "cplus.met"

#line 2426 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_EXIT,(PPTREE)0);
#line 2426 "cplus.met"
    _funcLevel--;
#line 2426 "cplus.met"
    return((PPTREE) -1) ;
#line 2426 "cplus.met"

#line 2426 "cplus.met"
attribute_call_ret :
#line 2426 "cplus.met"
    
#line 2426 "cplus.met"
    _Debug = TRACE_RULE("attribute_call",TRACE_RETURN,_retValue);
#line 2426 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2426 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2426 "cplus.met"
    return _retValue ;
#line 2426 "cplus.met"
}
#line 2426 "cplus.met"

#line 2426 "cplus.met"
#line 2101 "cplus.met"
PPTREE cplus::base_specifier ( int error_free)
#line 2101 "cplus.met"
{
#line 2101 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2101 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2101 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2101 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier",TRACE_ENTER,(PPTREE)0);
#line 2101 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2101 "cplus.met"
#line 2101 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2101 "cplus.met"
#line 2101 "cplus.met"
    PPTREE list = (PPTREE) 0;
#line 2101 "cplus.met"
#line 2101 "cplus.met"
    _addlist1 = list ;
#line 2101 "cplus.met"
#line 2103 "cplus.met"
    do {
#line 2103 "cplus.met"
#line 2104 "cplus.met"
        {
#line 2104 "cplus.met"
            PPTREE _ptTree0=0;
#line 2104 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2104 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,list);
                PROG_EXIT(base_specifier_exit,"base_specifier")
#line 2104 "cplus.met"
            }
#line 2104 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2104 "cplus.met"
        }
#line 2104 "cplus.met"
#line 2104 "cplus.met"
        if (list){
#line 2104 "cplus.met"
#line 2104 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2104 "cplus.met"
        } else {
#line 2104 "cplus.met"
#line 2104 "cplus.met"
            list = _addlist1 ;
#line 2104 "cplus.met"
        }
#line 2104 "cplus.met"
#line 2104 "cplus.met"
#line 2105 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2105 "cplus.met"
#line 2106 "cplus.met"
    {
#line 2106 "cplus.met"
        PPTREE _ptTree0=0;
#line 2106 "cplus.met"
        {
#line 2106 "cplus.met"
            PPTREE _ptRes1=0;
#line 2106 "cplus.met"
            _ptRes1= MakeTree(BASE_LIST, 1);
#line 2106 "cplus.met"
            ReplaceTree(_ptRes1, 1, list );
#line 2106 "cplus.met"
            _ptTree0=_ptRes1;
#line 2106 "cplus.met"
        }
#line 2106 "cplus.met"
        _retValue =_ptTree0;
#line 2106 "cplus.met"
        goto base_specifier_ret;
#line 2106 "cplus.met"
    }
#line 2106 "cplus.met"
#line 2106 "cplus.met"
#line 2106 "cplus.met"

#line 2107 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2107 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2107 "cplus.met"
return((PPTREE) 0);
#line 2107 "cplus.met"

#line 2107 "cplus.met"
base_specifier_exit :
#line 2107 "cplus.met"

#line 2107 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_EXIT,(PPTREE)0);
#line 2107 "cplus.met"
    _funcLevel--;
#line 2107 "cplus.met"
    return((PPTREE) -1) ;
#line 2107 "cplus.met"

#line 2107 "cplus.met"
base_specifier_ret :
#line 2107 "cplus.met"
    
#line 2107 "cplus.met"
    _Debug = TRACE_RULE("base_specifier",TRACE_RETURN,_retValue);
#line 2107 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2107 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2107 "cplus.met"
    return _retValue ;
#line 2107 "cplus.met"
}
#line 2107 "cplus.met"

#line 2107 "cplus.met"
#line 2088 "cplus.met"
PPTREE cplus::base_specifier_elem ( int error_free)
#line 2088 "cplus.met"
{
#line 2088 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2088 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2088 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2088 "cplus.met"
    int _Debug = TRACE_RULE("base_specifier_elem",TRACE_ENTER,(PPTREE)0);
#line 2088 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2088 "cplus.met"
#line 2088 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2088 "cplus.met"
#line 2090 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2090 "cplus.met"
    switch( lexEl.Value) {
#line 2090 "cplus.met"
#line 2091 "cplus.met"
        case PRIVATE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("private"));
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
#line 2092 "cplus.met"
        case PROTECTED : 
#line 2092 "cplus.met"
            tokenAhead = 0 ;
#line 2092 "cplus.met"
            CommTerm();
#line 2092 "cplus.met"
#line 2092 "cplus.met"
            {
#line 2092 "cplus.met"
                PPTREE _ptTree0=0;
#line 2092 "cplus.met"
                {
#line 2092 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2092 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 2092 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("protected"));
#line 2092 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2092 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2092 "cplus.met"
                    }
#line 2092 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2092 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2092 "cplus.met"
                }
#line 2092 "cplus.met"
                _retValue =_ptTree0;
#line 2092 "cplus.met"
                goto base_specifier_elem_ret;
#line 2092 "cplus.met"
            }
#line 2092 "cplus.met"
            break;
#line 2092 "cplus.met"
#line 2093 "cplus.met"
        case PUBLIC : 
#line 2093 "cplus.met"
            tokenAhead = 0 ;
#line 2093 "cplus.met"
            CommTerm();
#line 2093 "cplus.met"
#line 2093 "cplus.met"
            {
#line 2093 "cplus.met"
                PPTREE _ptTree0=0;
#line 2093 "cplus.met"
                {
#line 2093 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2093 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 2093 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("public"));
#line 2093 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2093 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2093 "cplus.met"
                    }
#line 2093 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2093 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2093 "cplus.met"
                }
#line 2093 "cplus.met"
                _retValue =_ptTree0;
#line 2093 "cplus.met"
                goto base_specifier_elem_ret;
#line 2093 "cplus.met"
            }
#line 2093 "cplus.met"
            break;
#line 2093 "cplus.met"
#line 2094 "cplus.met"
        case VIRTUAL : 
#line 2094 "cplus.met"
            tokenAhead = 0 ;
#line 2094 "cplus.met"
            CommTerm();
#line 2094 "cplus.met"
#line 2094 "cplus.met"
            {
#line 2094 "cplus.met"
                PPTREE _ptTree0=0;
#line 2094 "cplus.met"
                {
#line 2094 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2094 "cplus.met"
                    _ptRes1= MakeTree(PROTECT, 2);
#line 2094 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("virtual"));
#line 2094 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(base_specifier_elem)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2094 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2094 "cplus.met"
                    }
#line 2094 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2094 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2094 "cplus.met"
                }
#line 2094 "cplus.met"
                _retValue =_ptTree0;
#line 2094 "cplus.met"
                goto base_specifier_elem_ret;
#line 2094 "cplus.met"
            }
#line 2094 "cplus.met"
            break;
#line 2094 "cplus.met"
#line 2094 "cplus.met"
        default : 
#line 2094 "cplus.met"
#line 2094 "cplus.met"
            break;
#line 2094 "cplus.met"
    }
#line 2094 "cplus.met"
#line 2097 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2097 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(base_specifier_elem_exit,"base_specifier_elem")
#line 2097 "cplus.met"
    }
#line 2097 "cplus.met"
#line 2098 "cplus.met"
    {
#line 2098 "cplus.met"
        _retValue = ret ;
#line 2098 "cplus.met"
        goto base_specifier_elem_ret;
#line 2098 "cplus.met"
        
#line 2098 "cplus.met"
    }
#line 2098 "cplus.met"
#line 2098 "cplus.met"
#line 2098 "cplus.met"

#line 2099 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2099 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2099 "cplus.met"
return((PPTREE) 0);
#line 2099 "cplus.met"

#line 2099 "cplus.met"
base_specifier_elem_exit :
#line 2099 "cplus.met"

#line 2099 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_EXIT,(PPTREE)0);
#line 2099 "cplus.met"
    _funcLevel--;
#line 2099 "cplus.met"
    return((PPTREE) -1) ;
#line 2099 "cplus.met"

#line 2099 "cplus.met"
base_specifier_elem_ret :
#line 2099 "cplus.met"
    
#line 2099 "cplus.met"
    _Debug = TRACE_RULE("base_specifier_elem",TRACE_RETURN,_retValue);
#line 2099 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2099 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2099 "cplus.met"
    return _retValue ;
#line 2099 "cplus.met"
}
#line 2099 "cplus.met"

#line 2099 "cplus.met"
#line 4004 "cplus.met"
PPTREE cplus::bidon ( int error_free)
#line 4004 "cplus.met"
{
#line 4004 "cplus.met"
    int  _oldnoString = noString;
#line 4004 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 4004 "cplus.met"
    int _value,_nbPre = 0 ;
#line 4004 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 4004 "cplus.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 4004 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 4004 "cplus.met"
#line 4005 "cplus.met"
    {
#line 4005 "cplus.met"
        noString = 1 ;
#line 4005 "cplus.met"
#line 4006 "cplus.met"
#line 4006 "cplus.met"
        noString =  _oldnoString;
#line 4006 "cplus.met"
    }
#line 4006 "cplus.met"
#line 4006 "cplus.met"
#line 4007 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 4007 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 4007 "cplus.met"
noString =  _oldnoString;
#line 4007 "cplus.met"
return((PPTREE) 0);
#line 4007 "cplus.met"

#line 4007 "cplus.met"
bidon_exit :
#line 4007 "cplus.met"

#line 4007 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 4007 "cplus.met"
    _funcLevel--;
#line 4007 "cplus.met"
    noString =  _oldnoString;
#line 4007 "cplus.met"
    return((PPTREE) -1) ;
#line 4007 "cplus.met"

#line 4007 "cplus.met"
bidon_ret :
#line 4007 "cplus.met"
    
#line 4007 "cplus.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 4007 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 4007 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 4007 "cplus.met"
    noString =  _oldnoString;
#line 4007 "cplus.met"
    return _retValue ;
#line 4007 "cplus.met"
}
#line 4007 "cplus.met"

#line 4007 "cplus.met"
#line 2880 "cplus.met"
PPTREE cplus::bit_field_decl ( int error_free)
#line 2880 "cplus.met"
{
#line 2880 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2880 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2880 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2880 "cplus.met"
    int _Debug = TRACE_RULE("bit_field_decl",TRACE_ENTER,(PPTREE)0);
#line 2880 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2880 "cplus.met"
#line 2880 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2880 "cplus.met"
#line 2883 "cplus.met"
    {
#line 2883 "cplus.met"
        PPTREE _ptRes0=0;
#line 2883 "cplus.met"
        _ptRes0= MakeTree(TYP_BIT, 2);
#line 2883 "cplus.met"
        retTree=_ptRes0;
#line 2883 "cplus.met"
    }
#line 2883 "cplus.met"
#line 2885 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 2885 "cplus.met"
#line 2886 "cplus.met"
        {
#line 2886 "cplus.met"
            PPTREE _ptTree0=0;
#line 2886 "cplus.met"
            {
#line 2886 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 2886 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 2886 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2886 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 2886 "cplus.met"
                    MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,retTree);
                    TOKEN_EXIT(bit_field_decl_exit,"IDENT")
#line 2886 "cplus.met"
                } else {
#line 2886 "cplus.met"
                    tokenAhead = 0 ;
#line 2886 "cplus.met"
                }
#line 2886 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2886 "cplus.met"
                _ptTree0=_ptRes1;
#line 2886 "cplus.met"
            }
#line 2886 "cplus.met"
            ReplaceTree(retTree , 1 , _ptTree0);
#line 2886 "cplus.met"
        }
#line 2886 "cplus.met"
#line 2886 "cplus.met"
    }
#line 2886 "cplus.met"
#line 2887 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2887 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2887 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bit_field_decl_exit,":")
#line 2887 "cplus.met"
    } else {
#line 2887 "cplus.met"
        tokenAhead = 0 ;
#line 2887 "cplus.met"
    }
#line 2887 "cplus.met"
#line 2888 "cplus.met"
    {
#line 2888 "cplus.met"
        PPTREE _ptTree0=0;
#line 2888 "cplus.met"
        {
#line 2888 "cplus.met"
            PPTREE _ptTree1=0;
#line 2888 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, cplus))== (PPTREE) -1 ) {
#line 2888 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(bit_field_decl_exit,"bit_field_decl")
#line 2888 "cplus.met"
            }
#line 2888 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 2888 "cplus.met"
        }
#line 2888 "cplus.met"
        _retValue =_ptTree0;
#line 2888 "cplus.met"
        goto bit_field_decl_ret;
#line 2888 "cplus.met"
    }
#line 2888 "cplus.met"
#line 2888 "cplus.met"
#line 2888 "cplus.met"

#line 2889 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2889 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2889 "cplus.met"
return((PPTREE) 0);
#line 2889 "cplus.met"

#line 2889 "cplus.met"
bit_field_decl_exit :
#line 2889 "cplus.met"

#line 2889 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_EXIT,(PPTREE)0);
#line 2889 "cplus.met"
    _funcLevel--;
#line 2889 "cplus.met"
    return((PPTREE) -1) ;
#line 2889 "cplus.met"

#line 2889 "cplus.met"
bit_field_decl_ret :
#line 2889 "cplus.met"
    
#line 2889 "cplus.met"
    _Debug = TRACE_RULE("bit_field_decl",TRACE_RETURN,_retValue);
#line 2889 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2889 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2889 "cplus.met"
    return _retValue ;
#line 2889 "cplus.met"
}
#line 2889 "cplus.met"

#line 2889 "cplus.met"
#line 3066 "cplus.met"
PPTREE cplus::cast_expression ( int error_free)
#line 3066 "cplus.met"
{
#line 3066 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3066 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3066 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3066 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression",TRACE_ENTER,(PPTREE)0);
#line 3066 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3066 "cplus.met"
#line 3066 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 3066 "cplus.met"
#line 3068 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(cast_expression_value), 27, cplus)){
#line 3068 "cplus.met"
#line 3069 "cplus.met"
        {
#line 3069 "cplus.met"
            _retValue = retTree ;
#line 3069 "cplus.met"
            goto cast_expression_ret;
#line 3069 "cplus.met"
            
#line 3069 "cplus.met"
        }
#line 3069 "cplus.met"
    } else {
#line 3069 "cplus.met"
#line 3071 "cplus.met"
        {
#line 3071 "cplus.met"
            PPTREE _ptTree0=0;
#line 3071 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(unary_expression)(error_free), 159, cplus))== (PPTREE) -1 ) {
#line 3071 "cplus.met"
                MulFreeTree(2,_ptTree0,retTree);
                PROG_EXIT(cast_expression_exit,"cast_expression")
#line 3071 "cplus.met"
            }
#line 3071 "cplus.met"
            _retValue =_ptTree0;
#line 3071 "cplus.met"
            goto cast_expression_ret;
#line 3071 "cplus.met"
        }
#line 3071 "cplus.met"
    }
#line 3071 "cplus.met"
#line 3071 "cplus.met"
#line 3071 "cplus.met"

#line 3072 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3072 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3072 "cplus.met"
return((PPTREE) 0);
#line 3072 "cplus.met"

#line 3072 "cplus.met"
cast_expression_exit :
#line 3072 "cplus.met"

#line 3072 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_EXIT,(PPTREE)0);
#line 3072 "cplus.met"
    _funcLevel--;
#line 3072 "cplus.met"
    return((PPTREE) -1) ;
#line 3072 "cplus.met"

#line 3072 "cplus.met"
cast_expression_ret :
#line 3072 "cplus.met"
    
#line 3072 "cplus.met"
    _Debug = TRACE_RULE("cast_expression",TRACE_RETURN,_retValue);
#line 3072 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3072 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3072 "cplus.met"
    return _retValue ;
#line 3072 "cplus.met"
}
#line 3072 "cplus.met"

#line 3072 "cplus.met"
#line 3058 "cplus.met"
PPTREE cplus::cast_expression_value ( int error_free)
#line 3058 "cplus.met"
{
#line 3058 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3058 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3058 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3058 "cplus.met"
    int _Debug = TRACE_RULE("cast_expression_value",TRACE_ENTER,(PPTREE)0);
#line 3058 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3058 "cplus.met"
#line 3058 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 3058 "cplus.met"
#line 3060 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3060 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3060 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,"(")
#line 3060 "cplus.met"
    } else {
#line 3060 "cplus.met"
        tokenAhead = 0 ;
#line 3060 "cplus.met"
    }
#line 3060 "cplus.met"
#line 3061 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_name)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3061 "cplus.met"
        MulFreeTree(1,ret);
        PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 3061 "cplus.met"
    }
#line 3061 "cplus.met"
#line 3062 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3062 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3062 "cplus.met"
        MulFreeTree(1,ret);
        TOKEN_EXIT(cast_expression_value_exit,")")
#line 3062 "cplus.met"
    } else {
#line 3062 "cplus.met"
        tokenAhead = 0 ;
#line 3062 "cplus.met"
    }
#line 3062 "cplus.met"
#line 3063 "cplus.met"
    {
#line 3063 "cplus.met"
        PPTREE _ptTree0=0;
#line 3063 "cplus.met"
        {
#line 3063 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3063 "cplus.met"
            _ptRes1= MakeTree(CAST, 2);
#line 3063 "cplus.met"
            ReplaceTree(_ptRes1, 1, ret );
#line 3063 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3063 "cplus.met"
                MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,ret);
                PROG_EXIT(cast_expression_value_exit,"cast_expression_value")
#line 3063 "cplus.met"
            }
#line 3063 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3063 "cplus.met"
            _ptTree0=_ptRes1;
#line 3063 "cplus.met"
        }
#line 3063 "cplus.met"
        _retValue =_ptTree0;
#line 3063 "cplus.met"
        goto cast_expression_value_ret;
#line 3063 "cplus.met"
    }
#line 3063 "cplus.met"
#line 3063 "cplus.met"
#line 3063 "cplus.met"

#line 3064 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3064 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3064 "cplus.met"
return((PPTREE) 0);
#line 3064 "cplus.met"

#line 3064 "cplus.met"
cast_expression_value_exit :
#line 3064 "cplus.met"

#line 3064 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_EXIT,(PPTREE)0);
#line 3064 "cplus.met"
    _funcLevel--;
#line 3064 "cplus.met"
    return((PPTREE) -1) ;
#line 3064 "cplus.met"

#line 3064 "cplus.met"
cast_expression_value_ret :
#line 3064 "cplus.met"
    
#line 3064 "cplus.met"
    _Debug = TRACE_RULE("cast_expression_value",TRACE_RETURN,_retValue);
#line 3064 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3064 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3064 "cplus.met"
    return _retValue ;
#line 3064 "cplus.met"
}
#line 3064 "cplus.met"

#line 3064 "cplus.met"
#line 2185 "cplus.met"
PPTREE cplus::catch_unit ( int error_free)
#line 2185 "cplus.met"
{
#line 2185 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2185 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2185 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2185 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit",TRACE_ENTER,(PPTREE)0);
#line 2185 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2185 "cplus.met"
#line 2186 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2186 "cplus.met"
    switch( lexEl.Value) {
#line 2186 "cplus.met"
#line 2187 "cplus.met"
        case META : 
#line 2187 "cplus.met"
        case CATCH_UPPER : 
#line 2187 "cplus.met"
#line 2187 "cplus.met"
            {
#line 2187 "cplus.met"
                PPTREE _ptTree0=0;
#line 2187 "cplus.met"
                {
#line 2187 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2187 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2187 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2187 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2187 "cplus.met"
                    }
#line 2187 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2187 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2187 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2187 "cplus.met"
                    }
#line 2187 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2187 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2187 "cplus.met"
                }
#line 2187 "cplus.met"
                _retValue =_ptTree0;
#line 2187 "cplus.met"
                goto catch_unit_ret;
#line 2187 "cplus.met"
            }
#line 2187 "cplus.met"
            break;
#line 2187 "cplus.met"
#line 2188 "cplus.met"
        case CATCH_ALL : 
#line 2188 "cplus.met"
#line 2188 "cplus.met"
            {
#line 2188 "cplus.met"
                PPTREE _ptTree0=0;
#line 2188 "cplus.met"
                {
#line 2188 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2188 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2188 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2188 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2188 "cplus.met"
                    }
#line 2188 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2188 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2188 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2188 "cplus.met"
                    }
#line 2188 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2188 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2188 "cplus.met"
                }
#line 2188 "cplus.met"
                _retValue =_ptTree0;
#line 2188 "cplus.met"
                goto catch_unit_ret;
#line 2188 "cplus.met"
            }
#line 2188 "cplus.met"
            break;
#line 2188 "cplus.met"
#line 2189 "cplus.met"
        case AND_CATCH : 
#line 2189 "cplus.met"
#line 2189 "cplus.met"
            {
#line 2189 "cplus.met"
                PPTREE _ptTree0=0;
#line 2189 "cplus.met"
                {
#line 2189 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2189 "cplus.met"
                    _ptRes1= MakeTree(CATCH, 2);
#line 2189 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(macro)(error_free), 98, cplus))== (PPTREE) -1 ) {
#line 2189 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2189 "cplus.met"
                    }
#line 2189 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2189 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2189 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        PROG_EXIT(catch_unit_exit,"catch_unit")
#line 2189 "cplus.met"
                    }
#line 2189 "cplus.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2189 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2189 "cplus.met"
                }
#line 2189 "cplus.met"
                _retValue =_ptTree0;
#line 2189 "cplus.met"
                goto catch_unit_ret;
#line 2189 "cplus.met"
            }
#line 2189 "cplus.met"
            break;
#line 2189 "cplus.met"
        default :
#line 2189 "cplus.met"
            CASE_EXIT(catch_unit_exit,"either CATCH_UPPER or CATCH_ALL or AND_CATCH")
#line 2189 "cplus.met"
            break;
#line 2189 "cplus.met"
    }
#line 2189 "cplus.met"
#line 2189 "cplus.met"
#line 2190 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2190 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2190 "cplus.met"
return((PPTREE) 0);
#line 2190 "cplus.met"

#line 2190 "cplus.met"
catch_unit_exit :
#line 2190 "cplus.met"

#line 2190 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_EXIT,(PPTREE)0);
#line 2190 "cplus.met"
    _funcLevel--;
#line 2190 "cplus.met"
    return((PPTREE) -1) ;
#line 2190 "cplus.met"

#line 2190 "cplus.met"
catch_unit_ret :
#line 2190 "cplus.met"
    
#line 2190 "cplus.met"
    _Debug = TRACE_RULE("catch_unit",TRACE_RETURN,_retValue);
#line 2190 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2190 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2190 "cplus.met"
    return _retValue ;
#line 2190 "cplus.met"
}
#line 2190 "cplus.met"

#line 2190 "cplus.met"
#line 2203 "cplus.met"
PPTREE cplus::catch_unit_ansi ( int error_free)
#line 2203 "cplus.met"
{
#line 2203 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2203 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2203 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2203 "cplus.met"
    int _Debug = TRACE_RULE("catch_unit_ansi",TRACE_ENTER,(PPTREE)0);
#line 2203 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2203 "cplus.met"
#line 2203 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2203 "cplus.met"
#line 2205 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2205 "cplus.met"
    if (  !SEE_TOKEN( CATCH,"catch") || !(CommTerm(),1)) {
#line 2205 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"catch")
#line 2205 "cplus.met"
    } else {
#line 2205 "cplus.met"
        tokenAhead = 0 ;
#line 2205 "cplus.met"
    }
#line 2205 "cplus.met"
#line 2206 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2206 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2206 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,"(")
#line 2206 "cplus.met"
    } else {
#line 2206 "cplus.met"
        tokenAhead = 0 ;
#line 2206 "cplus.met"
    }
#line 2206 "cplus.met"
#line 2207 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POINPOINPOIN,"...") && (tokenAhead = 0,CommTerm(),1)){
#line 2207 "cplus.met"
#line 2208 "cplus.met"
        {
#line 2208 "cplus.met"
            PPTREE _ptRes0=0;
#line 2208 "cplus.met"
            _ptRes0= MakeTree(EXCEPT_ANSI_ALL, 0);
#line 2208 "cplus.met"
            valTree=_ptRes0;
#line 2208 "cplus.met"
        }
#line 2208 "cplus.met"
    } else {
#line 2208 "cplus.met"
#line 2210 "cplus.met"
#line 2211 "cplus.met"
        if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 2211 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2211 "cplus.met"
        }
#line 2211 "cplus.met"
#line 2212 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(declarator), 51, cplus)){
#line 2212 "cplus.met"
#line 2213 "cplus.met"
            {
#line 2213 "cplus.met"
                PPTREE _ptRes0=0;
#line 2213 "cplus.met"
                _ptRes0= MakeTree(DECLARATOR, 2);
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
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2215 "cplus.met"
#line 2216 "cplus.met"
                {
#line 2216 "cplus.met"
                    PPTREE _ptRes0=0;
#line 2216 "cplus.met"
                    _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2216 "cplus.met"
                    ReplaceTree(_ptRes0, 1, retTree );
#line 2216 "cplus.met"
                    ReplaceTree(_ptRes0, 2, valTree );
#line 2216 "cplus.met"
                    valTree=_ptRes0;
#line 2216 "cplus.met"
                }
#line 2216 "cplus.met"
            } else {
#line 2216 "cplus.met"
#line 2218 "cplus.met"
                valTree = retTree ;
#line 2218 "cplus.met"
            }
#line 2218 "cplus.met"
        }
#line 2218 "cplus.met"
#line 2218 "cplus.met"
    }
#line 2218 "cplus.met"
#line 2220 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2220 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2220 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(catch_unit_ansi_exit,")")
#line 2220 "cplus.met"
    } else {
#line 2220 "cplus.met"
        tokenAhead = 0 ;
#line 2220 "cplus.met"
    }
#line 2220 "cplus.met"
#line 2221 "cplus.met"
    {
#line 2221 "cplus.met"
        PPTREE _ptTree0=0;
#line 2221 "cplus.met"
        {
#line 2221 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 2221 "cplus.met"
            _ptRes1= MakeTree(CATCH_ANSI, 2);
#line 2221 "cplus.met"
            ReplaceTree(_ptRes1, 1, valTree );
#line 2221 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 33, cplus))== (PPTREE) -1 ) {
#line 2221 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptTree0,retTree,valTree);
                PROG_EXIT(catch_unit_ansi_exit,"catch_unit_ansi")
#line 2221 "cplus.met"
            }
#line 2221 "cplus.met"
            ReplaceTree(_ptRes1, 2, _ptTree1);
#line 2221 "cplus.met"
            _ptTree0=_ptRes1;
#line 2221 "cplus.met"
        }
#line 2221 "cplus.met"
        _retValue =_ptTree0;
#line 2221 "cplus.met"
        goto catch_unit_ansi_ret;
#line 2221 "cplus.met"
    }
#line 2221 "cplus.met"
#line 2221 "cplus.met"
#line 2221 "cplus.met"

#line 2222 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2222 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2222 "cplus.met"
return((PPTREE) 0);
#line 2222 "cplus.met"

#line 2222 "cplus.met"
catch_unit_ansi_exit :
#line 2222 "cplus.met"

#line 2222 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_EXIT,(PPTREE)0);
#line 2222 "cplus.met"
    _funcLevel--;
#line 2222 "cplus.met"
    return((PPTREE) -1) ;
#line 2222 "cplus.met"

#line 2222 "cplus.met"
catch_unit_ansi_ret :
#line 2222 "cplus.met"
    
#line 2222 "cplus.met"
    _Debug = TRACE_RULE("catch_unit_ansi",TRACE_RETURN,_retValue);
#line 2222 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2222 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2222 "cplus.met"
    return _retValue ;
#line 2222 "cplus.met"
}
#line 2222 "cplus.met"

#line 2222 "cplus.met"
#line 2244 "cplus.met"
PPTREE cplus::class_declaration ( int error_free)
#line 2244 "cplus.met"
{
#line 2244 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2244 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2244 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2244 "cplus.met"
    int _Debug = TRACE_RULE("class_declaration",TRACE_ENTER,(PPTREE)0);
#line 2244 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2244 "cplus.met"
#line 2244 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2244 "cplus.met"
#line 2244 "cplus.met"
    PPTREE retTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 2244 "cplus.met"
#line 2246 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2246 "cplus.met"
    switch( lexEl.Value) {
#line 2246 "cplus.met"
#line 2247 "cplus.met"
        case STRUCT : 
#line 2247 "cplus.met"
            tokenAhead = 0 ;
#line 2247 "cplus.met"
            CommTerm();
#line 2247 "cplus.met"
#line 2247 "cplus.met"
            {
#line 2247 "cplus.met"
                PPTREE _ptRes0=0;
#line 2247 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2247 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("struct"));
#line 2247 "cplus.met"
                retTree=_ptRes0;
#line 2247 "cplus.met"
            }
#line 2247 "cplus.met"
            break;
#line 2247 "cplus.met"
#line 2248 "cplus.met"
        case UNION : 
#line 2248 "cplus.met"
            tokenAhead = 0 ;
#line 2248 "cplus.met"
            CommTerm();
#line 2248 "cplus.met"
#line 2248 "cplus.met"
            {
#line 2248 "cplus.met"
                PPTREE _ptRes0=0;
#line 2248 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2248 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("union"));
#line 2248 "cplus.met"
                retTree=_ptRes0;
#line 2248 "cplus.met"
            }
#line 2248 "cplus.met"
            break;
#line 2248 "cplus.met"
#line 2249 "cplus.met"
        case CLASS : 
#line 2249 "cplus.met"
            tokenAhead = 0 ;
#line 2249 "cplus.met"
            CommTerm();
#line 2249 "cplus.met"
#line 2249 "cplus.met"
            {
#line 2249 "cplus.met"
                PPTREE _ptRes0=0;
#line 2249 "cplus.met"
                _ptRes0= MakeTree(CLASS, 4);
#line 2249 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("class"));
#line 2249 "cplus.met"
                retTree=_ptRes0;
#line 2249 "cplus.met"
            }
#line 2249 "cplus.met"
            break;
#line 2249 "cplus.met"
        default :
#line 2249 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            CASE_EXIT(class_declaration_exit,"either struct or union or class")
#line 2249 "cplus.met"
            break;
#line 2249 "cplus.met"
    }
#line 2249 "cplus.met"
#line 2251 "cplus.met"
    {
#line 2251 "cplus.met"
        PPTREE _ptTree0=0;
#line 2251 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(range_modifier_ident)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 2251 "cplus.met"
            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2251 "cplus.met"
        }
#line 2251 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 2251 "cplus.met"
    }
#line 2251 "cplus.met"
#line 2252 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 2252 "cplus.met"
#line 2253 "cplus.met"
        {
#line 2253 "cplus.met"
            PPTREE _ptTree0=0;
#line 2253 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(base_specifier)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 2253 "cplus.met"
                MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2253 "cplus.met"
            }
#line 2253 "cplus.met"
            ReplaceTree(retTree , 3 , _ptTree0);
#line 2253 "cplus.met"
        }
#line 2253 "cplus.met"
#line 2253 "cplus.met"
    }
#line 2253 "cplus.met"
#line 2254 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 2254 "cplus.met"
#line 2255 "cplus.met"
#line 2256 "cplus.met"
        do {
#line 2256 "cplus.met"
#line 2256 "cplus.met"
            _addlist1 = list ;
#line 2256 "cplus.met"
#line 2257 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(inside_declaration), 88, cplus)) { 
#line 2257 "cplus.met"
#line 2258 "cplus.met"
#line 2258 "cplus.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 2258 "cplus.met"
#line 2258 "cplus.met"
                if (list){
#line 2258 "cplus.met"
#line 2258 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2258 "cplus.met"
                } else {
#line 2258 "cplus.met"
#line 2258 "cplus.met"
                    list = _addlist1 ;
#line 2258 "cplus.met"
                }
#line 2258 "cplus.met"
            } 
#line 2258 "cplus.met"
#line 2259 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2259 "cplus.met"
            switch( lexEl.Value) {
#line 2259 "cplus.met"
#line 2260 "cplus.met"
                case PUBLIC : 
#line 2260 "cplus.met"
#line 2260 "cplus.met"
                    {
#line 2260 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2260 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2260 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2260 "cplus.met"
                        }
#line 2260 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2260 "cplus.met"
                    }
#line 2260 "cplus.met"
                    break;
#line 2260 "cplus.met"
#line 2261 "cplus.met"
                case PRIVATE : 
#line 2261 "cplus.met"
#line 2261 "cplus.met"
                    {
#line 2261 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2261 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2261 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2261 "cplus.met"
                        }
#line 2261 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2261 "cplus.met"
                    }
#line 2261 "cplus.met"
                    break;
#line 2261 "cplus.met"
#line 2262 "cplus.met"
                case PROTECTED : 
#line 2262 "cplus.met"
#line 2262 "cplus.met"
                    {
#line 2262 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2262 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(protect_declare)(error_free), 121, cplus))== (PPTREE) -1 ) {
#line 2262 "cplus.met"
                            MulFreeTree(5,_ptTree0,_addlist1,inter,list,retTree);
                            PROG_EXIT(class_declaration_exit,"class_declaration")
#line 2262 "cplus.met"
                        }
#line 2262 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 2262 "cplus.met"
                    }
#line 2262 "cplus.met"
                    break;
#line 2262 "cplus.met"
#line 2262 "cplus.met"
                case AFER : 
#line 2262 "cplus.met"
#line 2262 "cplus.met"
                    break;
#line 2262 "cplus.met"
#line 2264 "cplus.met"
                default : 
#line 2264 "cplus.met"
#line 2264 "cplus.met"
                    
#line 2264 "cplus.met"
                    MulFreeTree(4,_addlist1,inter,list,retTree);
                    LEX_EXIT ("",0);
#line 2264 "cplus.met"
                    goto class_declaration_exit;
#line 2264 "cplus.met"
                    break;
#line 2264 "cplus.met"
            }
#line 2264 "cplus.met"
#line 2264 "cplus.met"
#line 2266 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 2266 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2266 "cplus.met"
#line 2267 "cplus.met"
        {
#line 2267 "cplus.met"
            PPTREE _ptTree0=0;
#line 2267 "cplus.met"
            {
#line 2267 "cplus.met"
                PPTREE _ptRes1=0;
#line 2267 "cplus.met"
                _ptRes1= MakeTree(CLASS_DECL, 1);
#line 2267 "cplus.met"
                ReplaceTree(_ptRes1, 1, list );
#line 2267 "cplus.met"
                _ptTree0=_ptRes1;
#line 2267 "cplus.met"
            }
#line 2267 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 2267 "cplus.met"
        }
#line 2267 "cplus.met"
#line 2268 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2268 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2268 "cplus.met"
            MulFreeTree(4,_addlist1,inter,list,retTree);
            TOKEN_EXIT(class_declaration_exit,"}")
#line 2268 "cplus.met"
        } else {
#line 2268 "cplus.met"
            tokenAhead = 0 ;
#line 2268 "cplus.met"
        }
#line 2268 "cplus.met"
#line 2268 "cplus.met"
#line 2268 "cplus.met"
    }
#line 2268 "cplus.met"
#line 2270 "cplus.met"
    {
#line 2270 "cplus.met"
        _retValue = retTree ;
#line 2270 "cplus.met"
        goto class_declaration_ret;
#line 2270 "cplus.met"
        
#line 2270 "cplus.met"
    }
#line 2270 "cplus.met"
#line 2270 "cplus.met"
#line 2270 "cplus.met"

#line 2271 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2271 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2271 "cplus.met"
return((PPTREE) 0);
#line 2271 "cplus.met"

#line 2271 "cplus.met"
class_declaration_exit :
#line 2271 "cplus.met"

#line 2271 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_EXIT,(PPTREE)0);
#line 2271 "cplus.met"
    _funcLevel--;
#line 2271 "cplus.met"
    return((PPTREE) -1) ;
#line 2271 "cplus.met"

#line 2271 "cplus.met"
class_declaration_ret :
#line 2271 "cplus.met"
    
#line 2271 "cplus.met"
    _Debug = TRACE_RULE("class_declaration",TRACE_RETURN,_retValue);
#line 2271 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2271 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2271 "cplus.met"
    return _retValue ;
#line 2271 "cplus.met"
}
#line 2271 "cplus.met"

#line 2271 "cplus.met"
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
#line 2079 "cplus.met"
PPTREE cplus::complete_class_name ( int error_free)
#line 2079 "cplus.met"
{
#line 2079 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2079 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2079 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2079 "cplus.met"
    int _Debug = TRACE_RULE("complete_class_name",TRACE_ENTER,(PPTREE)0);
#line 2079 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2079 "cplus.met"
#line 2079 "cplus.met"
    PPTREE ret = (PPTREE) 0;
#line 2079 "cplus.met"
#line 2081 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2081 "cplus.met"
    switch( lexEl.Value) {
#line 2081 "cplus.met"
#line 2082 "cplus.met"
        case META : 
#line 2082 "cplus.met"
        case IDENT : 
#line 2082 "cplus.met"
#line 2082 "cplus.met"
            if ( (ret=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2082 "cplus.met"
                MulFreeTree(1,ret);
                PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 2082 "cplus.met"
            }
#line 2082 "cplus.met"
            break;
#line 2082 "cplus.met"
#line 2083 "cplus.met"
        case DPOIDPOI : 
#line 2083 "cplus.met"
            tokenAhead = 0 ;
#line 2083 "cplus.met"
            CommTerm();
#line 2083 "cplus.met"
#line 2083 "cplus.met"
            {
#line 2083 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2083 "cplus.met"
                _ptRes0= MakeTree(QUALIFIED, 2);
#line 2083 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2083 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,ret);
                    PROG_EXIT(complete_class_name_exit,"complete_class_name")
#line 2083 "cplus.met"
                }
#line 2083 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2083 "cplus.met"
                ret=_ptRes0;
#line 2083 "cplus.met"
            }
#line 2083 "cplus.met"
            break;
#line 2083 "cplus.met"
        default :
#line 2083 "cplus.met"
            MulFreeTree(1,ret);
            CASE_EXIT(complete_class_name_exit,"either IDENT or ::")
#line 2083 "cplus.met"
            break;
#line 2083 "cplus.met"
    }
#line 2083 "cplus.met"
#line 2085 "cplus.met"
    {
#line 2085 "cplus.met"
        _retValue = ret ;
#line 2085 "cplus.met"
        goto complete_class_name_ret;
#line 2085 "cplus.met"
        
#line 2085 "cplus.met"
    }
#line 2085 "cplus.met"
#line 2085 "cplus.met"
#line 2085 "cplus.met"

#line 2086 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2086 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2086 "cplus.met"
return((PPTREE) 0);
#line 2086 "cplus.met"

#line 2086 "cplus.met"
complete_class_name_exit :
#line 2086 "cplus.met"

#line 2086 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_EXIT,(PPTREE)0);
#line 2086 "cplus.met"
    _funcLevel--;
#line 2086 "cplus.met"
    return((PPTREE) -1) ;
#line 2086 "cplus.met"

#line 2086 "cplus.met"
complete_class_name_ret :
#line 2086 "cplus.met"
    
#line 2086 "cplus.met"
    _Debug = TRACE_RULE("complete_class_name",TRACE_RETURN,_retValue);
#line 2086 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2086 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2086 "cplus.met"
    return _retValue ;
#line 2086 "cplus.met"
}
#line 2086 "cplus.met"

#line 2086 "cplus.met"
#line 3658 "cplus.met"
PPTREE cplus::compound_statement ( int error_free)
#line 3658 "cplus.met"
{
#line 3658 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3658 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3658 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3658 "cplus.met"
    int _Debug = TRACE_RULE("compound_statement",TRACE_ENTER,(PPTREE)0);
#line 3658 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3658 "cplus.met"
#line 3658 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3658 "cplus.met"
#line 3658 "cplus.met"
    PPTREE statList = (PPTREE) 0,stat = (PPTREE) 0;
#line 3658 "cplus.met"
#line 3660 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3660 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3660 "cplus.met"
        MulFreeTree(3,_addlist1,stat,statList);
        TOKEN_EXIT(compound_statement_exit,"{")
#line 3660 "cplus.met"
    } else {
#line 3660 "cplus.met"
        tokenAhead = 0 ;
#line 3660 "cplus.met"
    }
#line 3660 "cplus.met"
#line 3661 "cplus.met"
     debut :
#line 3661 "cplus.met"
#line 3661 "cplus.met"
    _addlist1 = statList ;
#line 3661 "cplus.met"
#line 3663 "cplus.met"
    while (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 147, cplus)) || 
#line 3663 "cplus.met"
             (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 45, cplus))) || 
#line 3663 "cplus.met"
            (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 143, cplus))) || 
#line 3663 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 63, cplus))) || 
#line 3663 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 76, cplus))) { 
#line 3663 "cplus.met"
#line 3665 "cplus.met"
#line 3665 "cplus.met"
        _addlist1 =AddList(_addlist1 ,stat );
#line 3665 "cplus.met"
#line 3665 "cplus.met"
        if (statList){
#line 3665 "cplus.met"
#line 3665 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3665 "cplus.met"
        } else {
#line 3665 "cplus.met"
#line 3665 "cplus.met"
            statList = _addlist1 ;
#line 3665 "cplus.met"
        }
#line 3665 "cplus.met"
    } 
#line 3665 "cplus.met"
#line 3666 "cplus.met"
    {
#line 3666 "cplus.met"
        PPTREE _ptTree0=0;
#line 3666 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 110, cplus))== (PPTREE) -1 ) {
#line 3666 "cplus.met"
            MulFreeTree(4,_ptTree0,_addlist1,stat,statList);
            PROG_EXIT(compound_statement_exit,"compound_statement")
#line 3666 "cplus.met"
        }
#line 3666 "cplus.met"
        statList =AddList(statList , _ptTree0);
#line 3666 "cplus.met"
    }
#line 3666 "cplus.met"
#line 3667 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))){
#line 3667 "cplus.met"
#line 3668 "cplus.met"
#line 3669 "cplus.met"
        dumperror ();
#line 3669 "cplus.met"
#line 3670 "cplus.met"
        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 3670 "cplus.met"
        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 3670 "cplus.met"
            MulFreeTree(3,_addlist1,stat,statList);
            TOKEN_EXIT(compound_statement_exit,"END_LINE")
#line 3670 "cplus.met"
        } else {
#line 3670 "cplus.met"
            tokenAhead = 0 ;
#line 3670 "cplus.met"
        }
#line 3670 "cplus.met"
#line 3671 "cplus.met"
         hasGotError = 1 ;
#line 3671 "cplus.met"
#line 3672 "cplus.met"
         goto debut ;
#line 3672 "cplus.met"
#line 3672 "cplus.met"
#line 3672 "cplus.met"
    }
#line 3672 "cplus.met"
#line 3674 "cplus.met"
    {
#line 3674 "cplus.met"
        PPTREE _ptTree0=0;
#line 3674 "cplus.met"
        {
#line 3674 "cplus.met"
            PPTREE _ptRes1=0;
#line 3674 "cplus.met"
            _ptRes1= MakeTree(COMPOUND, 1);
#line 3674 "cplus.met"
            ReplaceTree(_ptRes1, 1, statList );
#line 3674 "cplus.met"
            _ptTree0=_ptRes1;
#line 3674 "cplus.met"
        }
#line 3674 "cplus.met"
        _retValue =_ptTree0;
#line 3674 "cplus.met"
        goto compound_statement_ret;
#line 3674 "cplus.met"
    }
#line 3674 "cplus.met"
#line 3674 "cplus.met"
#line 3674 "cplus.met"

#line 3675 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3675 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3675 "cplus.met"
return((PPTREE) 0);
#line 3675 "cplus.met"

#line 3675 "cplus.met"
compound_statement_exit :
#line 3675 "cplus.met"

#line 3675 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_EXIT,(PPTREE)0);
#line 3675 "cplus.met"
    _funcLevel--;
#line 3675 "cplus.met"
    return((PPTREE) -1) ;
#line 3675 "cplus.met"

#line 3675 "cplus.met"
compound_statement_ret :
#line 3675 "cplus.met"
    
#line 3675 "cplus.met"
    _Debug = TRACE_RULE("compound_statement",TRACE_RETURN,_retValue);
#line 3675 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3675 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3675 "cplus.met"
    return _retValue ;
#line 3675 "cplus.met"
}
#line 3675 "cplus.met"

#line 3675 "cplus.met"
#line 2932 "cplus.met"
PPTREE cplus::conditional_expression ( int error_free)
#line 2932 "cplus.met"
{
#line 2932 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2932 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2932 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2932 "cplus.met"
    int _Debug = TRACE_RULE("conditional_expression",TRACE_ENTER,(PPTREE)0);
#line 2932 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2932 "cplus.met"
#line 2932 "cplus.met"
    PPTREE expTree = (PPTREE) 0,condTree = (PPTREE) 0;
#line 2932 "cplus.met"
#line 2934 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_or_expression)(error_free), 96, cplus))== (PPTREE) -1 ) {
#line 2934 "cplus.met"
        MulFreeTree(2,condTree,expTree);
        PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2934 "cplus.met"
    }
#line 2934 "cplus.met"
#line 2935 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INTE,"?") && (tokenAhead = 0,CommTerm(),1)){
#line 2935 "cplus.met"
#line 2936 "cplus.met"
#line 2937 "cplus.met"
        {
#line 2937 "cplus.met"
            PPTREE _ptRes0=0;
#line 2937 "cplus.met"
            _ptRes0= MakeTree(COND_AFF, 3);
#line 2937 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2937 "cplus.met"
            condTree=_ptRes0;
#line 2937 "cplus.met"
        }
#line 2937 "cplus.met"
#line 2938 "cplus.met"
        {
#line 2938 "cplus.met"
            PPTREE _ptTree0=0;
#line 2938 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2938 "cplus.met"
                MulFreeTree(3,_ptTree0,condTree,expTree);
                PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2938 "cplus.met"
            }
#line 2938 "cplus.met"
            ReplaceTree(condTree , 2 , _ptTree0);
#line 2938 "cplus.met"
        }
#line 2938 "cplus.met"
#line 2939 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2939 "cplus.met"
        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 2939 "cplus.met"
            MulFreeTree(2,condTree,expTree);
            TOKEN_EXIT(conditional_expression_exit,":")
#line 2939 "cplus.met"
        } else {
#line 2939 "cplus.met"
            tokenAhead = 0 ;
#line 2939 "cplus.met"
        }
#line 2939 "cplus.met"
#line 2940 "cplus.met"
        {
#line 2940 "cplus.met"
            PPTREE _ptTree0=0;
#line 2940 "cplus.met"
            {
#line 2940 "cplus.met"
                PPTREE _ptTree1=0;
#line 2940 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(conditional_expression)(error_free), 34, cplus))== (PPTREE) -1 ) {
#line 2940 "cplus.met"
                    MulFreeTree(4,_ptTree1,_ptTree0,condTree,expTree);
                    PROG_EXIT(conditional_expression_exit,"conditional_expression")
#line 2940 "cplus.met"
                }
#line 2940 "cplus.met"
                _ptTree0=ReplaceTree(condTree , 3 , _ptTree1);
#line 2940 "cplus.met"
            }
#line 2940 "cplus.met"
            _retValue =_ptTree0;
#line 2940 "cplus.met"
            goto conditional_expression_ret;
#line 2940 "cplus.met"
        }
#line 2940 "cplus.met"
#line 2940 "cplus.met"
#line 2940 "cplus.met"
    } else {
#line 2940 "cplus.met"
#line 2943 "cplus.met"
        {
#line 2943 "cplus.met"
            _retValue = expTree ;
#line 2943 "cplus.met"
            goto conditional_expression_ret;
#line 2943 "cplus.met"
            
#line 2943 "cplus.met"
        }
#line 2943 "cplus.met"
    }
#line 2943 "cplus.met"
#line 2943 "cplus.met"
#line 2943 "cplus.met"

#line 2944 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2944 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2944 "cplus.met"
return((PPTREE) 0);
#line 2944 "cplus.met"

#line 2944 "cplus.met"
conditional_expression_exit :
#line 2944 "cplus.met"

#line 2944 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_EXIT,(PPTREE)0);
#line 2944 "cplus.met"
    _funcLevel--;
#line 2944 "cplus.met"
    return((PPTREE) -1) ;
#line 2944 "cplus.met"

#line 2944 "cplus.met"
conditional_expression_ret :
#line 2944 "cplus.met"
    
#line 2944 "cplus.met"
    _Debug = TRACE_RULE("conditional_expression",TRACE_RETURN,_retValue);
#line 2944 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2944 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2944 "cplus.met"
    return _retValue ;
#line 2944 "cplus.met"
}
#line 2944 "cplus.met"

#line 2944 "cplus.met"
#line 2386 "cplus.met"
PPTREE cplus::const_or_volatile ( int error_free)
#line 2386 "cplus.met"
{
#line 2386 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2386 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2386 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2386 "cplus.met"
    int _Debug = TRACE_RULE("const_or_volatile",TRACE_ENTER,(PPTREE)0);
#line 2386 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2386 "cplus.met"
#line 2387 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2387 "cplus.met"
    switch( lexEl.Value) {
#line 2387 "cplus.met"
#line 2388 "cplus.met"
        case CONST : 
#line 2388 "cplus.met"
#line 2388 "cplus.met"
            {
#line 2388 "cplus.met"
                PPTREE _ptTree0=0;
#line 2388 "cplus.met"
                {
#line 2388 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2388 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2388 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2388 "cplus.met"
                    if (  !SEE_TOKEN( CONST,"const") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2388 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"const")
#line 2388 "cplus.met"
                    } else {
#line 2388 "cplus.met"
                        tokenAhead = 0 ;
#line 2388 "cplus.met"
                    }
#line 2388 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2388 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2388 "cplus.met"
                }
#line 2388 "cplus.met"
                _retValue =_ptTree0;
#line 2388 "cplus.met"
                goto const_or_volatile_ret;
#line 2388 "cplus.met"
            }
#line 2388 "cplus.met"
            break;
#line 2388 "cplus.met"
#line 2389 "cplus.met"
        case VOLATILE : 
#line 2389 "cplus.met"
#line 2389 "cplus.met"
            {
#line 2389 "cplus.met"
                PPTREE _ptTree0=0;
#line 2389 "cplus.met"
                {
#line 2389 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2389 "cplus.met"
                    _ptRes1= MakeTree(RANGE_MODIFIER, 2);
#line 2389 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2389 "cplus.met"
                    if (  !SEE_TOKEN( VOLATILE,"volatile") || !(_ptTree1 = CommString(lexEl.string()))) {
#line 2389 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(const_or_volatile_exit,"volatile")
#line 2389 "cplus.met"
                    } else {
#line 2389 "cplus.met"
                        tokenAhead = 0 ;
#line 2389 "cplus.met"
                    }
#line 2389 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2389 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2389 "cplus.met"
                }
#line 2389 "cplus.met"
                _retValue =_ptTree0;
#line 2389 "cplus.met"
                goto const_or_volatile_ret;
#line 2389 "cplus.met"
            }
#line 2389 "cplus.met"
            break;
#line 2389 "cplus.met"
        default :
#line 2389 "cplus.met"
            CASE_EXIT(const_or_volatile_exit,"either const or volatile")
#line 2389 "cplus.met"
            break;
#line 2389 "cplus.met"
    }
#line 2389 "cplus.met"
#line 2389 "cplus.met"
#line 2390 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2390 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2390 "cplus.met"
return((PPTREE) 0);
#line 2390 "cplus.met"

#line 2390 "cplus.met"
const_or_volatile_exit :
#line 2390 "cplus.met"

#line 2390 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_EXIT,(PPTREE)0);
#line 2390 "cplus.met"
    _funcLevel--;
#line 2390 "cplus.met"
    return((PPTREE) -1) ;
#line 2390 "cplus.met"

#line 2390 "cplus.met"
const_or_volatile_ret :
#line 2390 "cplus.met"
    
#line 2390 "cplus.met"
    _Debug = TRACE_RULE("const_or_volatile",TRACE_RETURN,_retValue);
#line 2390 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2390 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2390 "cplus.met"
    return _retValue ;
#line 2390 "cplus.met"
}
#line 2390 "cplus.met"

#line 2390 "cplus.met"
