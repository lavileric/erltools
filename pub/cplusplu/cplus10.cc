/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2935 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2935 "cplus.met"
{
#line 2935 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2935 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2935 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2935 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2935 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2935 "cplus.met"
#line 2935 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2935 "cplus.met"
#line 2937 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2937 "cplus.met"
    switch( lexEl.Value) {
#line 2937 "cplus.met"
#line 2938 "cplus.met"
        case TIRE : 
#line 2938 "cplus.met"
            tokenAhead = 0 ;
#line 2938 "cplus.met"
            CommTerm();
#line 2938 "cplus.met"
#line 2938 "cplus.met"
            {
#line 2938 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2938 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2938 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2938 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2938 "cplus.met"
                }
#line 2938 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2938 "cplus.met"
                expTree=_ptRes0;
#line 2938 "cplus.met"
            }
#line 2938 "cplus.met"
            break;
#line 2938 "cplus.met"
#line 2939 "cplus.met"
        case PLUS : 
#line 2939 "cplus.met"
            tokenAhead = 0 ;
#line 2939 "cplus.met"
            CommTerm();
#line 2939 "cplus.met"
#line 2939 "cplus.met"
            {
#line 2939 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2939 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2939 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2939 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2939 "cplus.met"
                }
#line 2939 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2939 "cplus.met"
                expTree=_ptRes0;
#line 2939 "cplus.met"
            }
#line 2939 "cplus.met"
            break;
#line 2939 "cplus.met"
#line 2940 "cplus.met"
        case TILD : 
#line 2940 "cplus.met"
            tokenAhead = 0 ;
#line 2940 "cplus.met"
            CommTerm();
#line 2940 "cplus.met"
#line 2940 "cplus.met"
            {
#line 2940 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2940 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2940 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2940 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2940 "cplus.met"
                }
#line 2940 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2940 "cplus.met"
                expTree=_ptRes0;
#line 2940 "cplus.met"
            }
#line 2940 "cplus.met"
            break;
#line 2940 "cplus.met"
#line 2941 "cplus.met"
        case EXCL : 
#line 2941 "cplus.met"
            tokenAhead = 0 ;
#line 2941 "cplus.met"
            CommTerm();
#line 2941 "cplus.met"
#line 2941 "cplus.met"
            {
#line 2941 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2941 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2941 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2941 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2941 "cplus.met"
                }
#line 2941 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2941 "cplus.met"
                expTree=_ptRes0;
#line 2941 "cplus.met"
            }
#line 2941 "cplus.met"
            break;
#line 2941 "cplus.met"
#line 2942 "cplus.met"
        case ETOI : 
#line 2942 "cplus.met"
            tokenAhead = 0 ;
#line 2942 "cplus.met"
            CommTerm();
#line 2942 "cplus.met"
#line 2942 "cplus.met"
            {
#line 2942 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2942 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2942 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2942 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2942 "cplus.met"
                }
#line 2942 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2942 "cplus.met"
                expTree=_ptRes0;
#line 2942 "cplus.met"
            }
#line 2942 "cplus.met"
            break;
#line 2942 "cplus.met"
#line 2943 "cplus.met"
        case ETCO : 
#line 2943 "cplus.met"
            tokenAhead = 0 ;
#line 2943 "cplus.met"
            CommTerm();
#line 2943 "cplus.met"
#line 2943 "cplus.met"
            {
#line 2943 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2943 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2943 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2943 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2943 "cplus.met"
                }
#line 2943 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2943 "cplus.met"
                expTree=_ptRes0;
#line 2943 "cplus.met"
            }
#line 2943 "cplus.met"
            break;
#line 2943 "cplus.met"
#line 2944 "cplus.met"
        case PLUSPLUS : 
#line 2944 "cplus.met"
            tokenAhead = 0 ;
#line 2944 "cplus.met"
            CommTerm();
#line 2944 "cplus.met"
#line 2944 "cplus.met"
            {
#line 2944 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2944 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2944 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2944 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2944 "cplus.met"
                }
#line 2944 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2944 "cplus.met"
                expTree=_ptRes0;
#line 2944 "cplus.met"
            }
#line 2944 "cplus.met"
            break;
#line 2944 "cplus.met"
#line 2945 "cplus.met"
        case TIRETIRE : 
#line 2945 "cplus.met"
            tokenAhead = 0 ;
#line 2945 "cplus.met"
            CommTerm();
#line 2945 "cplus.met"
#line 2945 "cplus.met"
            {
#line 2945 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2945 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2945 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2945 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2945 "cplus.met"
                }
#line 2945 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2945 "cplus.met"
                expTree=_ptRes0;
#line 2945 "cplus.met"
            }
#line 2945 "cplus.met"
            break;
#line 2945 "cplus.met"
#line 2946 "cplus.met"
        case SIZEOF : 
#line 2946 "cplus.met"
            tokenAhead = 0 ;
#line 2946 "cplus.met"
            CommTerm();
#line 2946 "cplus.met"
#line 2947 "cplus.met"
#line 2948 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 141, cplus))){
#line 2948 "cplus.met"
#line 2949 "cplus.met"
#line 2950 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 159, cplus))== (PPTREE) -1 ) {
#line 2950 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2950 "cplus.met"
                }
#line 2950 "cplus.met"
#line 2951 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 2951 "cplus.met"
                                    l'interieur */
#line 2951 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 2951 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 2951 "cplus.met"
                                     AddRef(expTree);
#line 2951 "cplus.met"
                                     FreeTreeRec(inter);
#line 2951 "cplus.met"
                                     RemRef(expTree);
#line 2951 "cplus.met"
                                          } else
#line 2951 "cplus.met"
                                     expTree = inter;
#line 2951 "cplus.met"
                                
#line 2951 "cplus.met"
#line 2951 "cplus.met"
#line 2961 "cplus.met"
            }
#line 2961 "cplus.met"
#line 2963 "cplus.met"
            {
#line 2963 "cplus.met"
                PPTREE _ptTree0=0;
#line 2963 "cplus.met"
                {
#line 2963 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2963 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2963 "cplus.met"
                    {
#line 2963 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2963 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2963 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2963 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2963 "cplus.met"
                    }
#line 2963 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2963 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2963 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2963 "cplus.met"
                }
#line 2963 "cplus.met"
                _retValue =_ptTree0;
#line 2963 "cplus.met"
                goto unary_expression_ret;
#line 2963 "cplus.met"
            }
#line 2963 "cplus.met"
#line 2963 "cplus.met"
            break;
#line 2963 "cplus.met"
#line 2966 "cplus.met"
        default : 
#line 2966 "cplus.met"
#line 2966 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2966 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2966 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2966 "cplus.met"
#line 2967 "cplus.met"
#line 2968 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2968 "cplus.met"
#line 2969 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2969 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2969 "cplus.met"
                    }
#line 2969 "cplus.met"
                }
#line 2969 "cplus.met"
#line 2969 "cplus.met"
#line 2969 "cplus.met"
            } else {
#line 2969 "cplus.met"
#line 2972 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 2972 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2972 "cplus.met"
                }
#line 2972 "cplus.met"
            }
#line 2972 "cplus.met"
            break;
#line 2972 "cplus.met"
    }
#line 2972 "cplus.met"
#line 2974 "cplus.met"
    {
#line 2974 "cplus.met"
        _retValue = expTree ;
#line 2974 "cplus.met"
        goto unary_expression_ret;
#line 2974 "cplus.met"
        
#line 2974 "cplus.met"
    }
#line 2974 "cplus.met"
#line 2974 "cplus.met"
#line 2974 "cplus.met"

#line 2975 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2975 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2975 "cplus.met"
return((PPTREE) 0);
#line 2975 "cplus.met"

#line 2975 "cplus.met"
unary_expression_exit :
#line 2975 "cplus.met"

#line 2975 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2975 "cplus.met"
    _funcLevel--;
#line 2975 "cplus.met"
    return((PPTREE) -1) ;
#line 2975 "cplus.met"

#line 2975 "cplus.met"
unary_expression_ret :
#line 2975 "cplus.met"
    
#line 2975 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2975 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2975 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2975 "cplus.met"
    return _retValue ;
#line 2975 "cplus.met"
}
#line 2975 "cplus.met"

#line 2975 "cplus.met"
#line 2187 "cplus.met"
PPTREE cplus::unsigned_type ( int error_free)
#line 2187 "cplus.met"
{
#line 2187 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2187 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2187 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2187 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2187 "cplus.met"
    int _Debug = TRACE_RULE("unsigned_type",TRACE_ENTER,(PPTREE)0);
#line 2187 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2187 "cplus.met"
#line 2187 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2187 "cplus.met"
#line 2189 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2189 "cplus.met"
    if (  !SEE_TOKEN( UNSIGNED,"unsigned") || !(CommTerm(),1)) {
#line 2189 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(unsigned_type_exit,"unsigned")
#line 2189 "cplus.met"
    } else {
#line 2189 "cplus.met"
        tokenAhead = 0 ;
#line 2189 "cplus.met"
    }
#line 2189 "cplus.met"
#line 2190 "cplus.met"
    {
#line 2190 "cplus.met"
        inside_signed = 1 ;
#line 2190 "cplus.met"
#line 2191 "cplus.met"
#line 2192 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 136, cplus)){
#line 2192 "cplus.met"
#line 2193 "cplus.met"
            {
#line 2193 "cplus.met"
                PPTREE _ptTree0=0;
#line 2193 "cplus.met"
                {
#line 2193 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2193 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2193 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2193 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2193 "cplus.met"
                }
#line 2193 "cplus.met"
                _retValue =_ptTree0;
#line 2193 "cplus.met"
                goto unsigned_type_ret;
#line 2193 "cplus.met"
            }
#line 2193 "cplus.met"
        } else {
#line 2193 "cplus.met"
#line 2195 "cplus.met"
            {
#line 2195 "cplus.met"
                PPTREE _ptTree0=0;
#line 2195 "cplus.met"
                {
#line 2195 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2195 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2195 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2195 "cplus.met"
                }
#line 2195 "cplus.met"
                _retValue =_ptTree0;
#line 2195 "cplus.met"
                goto unsigned_type_ret;
#line 2195 "cplus.met"
            }
#line 2195 "cplus.met"
        }
#line 2195 "cplus.met"
#line 2195 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2195 "cplus.met"
    }
#line 2195 "cplus.met"
#line 2195 "cplus.met"
#line 2196 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2196 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2196 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2196 "cplus.met"
return((PPTREE) 0);
#line 2196 "cplus.met"

#line 2196 "cplus.met"
unsigned_type_exit :
#line 2196 "cplus.met"

#line 2196 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_EXIT,(PPTREE)0);
#line 2196 "cplus.met"
    _funcLevel--;
#line 2196 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2196 "cplus.met"
    return((PPTREE) -1) ;
#line 2196 "cplus.met"

#line 2196 "cplus.met"
unsigned_type_ret :
#line 2196 "cplus.met"
    
#line 2196 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_RETURN,_retValue);
#line 2196 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2196 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2196 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2196 "cplus.met"
    return _retValue ;
#line 2196 "cplus.met"
}
#line 2196 "cplus.met"

#line 2196 "cplus.met"
