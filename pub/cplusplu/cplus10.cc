/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3079 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 3079 "cplus.met"
{
#line 3079 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3079 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3079 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3079 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 3079 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3079 "cplus.met"
#line 3079 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 3079 "cplus.met"
#line 3081 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3081 "cplus.met"
    switch( lexEl.Value) {
#line 3081 "cplus.met"
#line 3082 "cplus.met"
        case TIRE : 
#line 3082 "cplus.met"
            tokenAhead = 0 ;
#line 3082 "cplus.met"
            CommTerm();
#line 3082 "cplus.met"
#line 3082 "cplus.met"
            {
#line 3082 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3082 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 3082 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3082 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3082 "cplus.met"
                }
#line 3082 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3082 "cplus.met"
                expTree=_ptRes0;
#line 3082 "cplus.met"
            }
#line 3082 "cplus.met"
            break;
#line 3082 "cplus.met"
#line 3083 "cplus.met"
        case PLUS : 
#line 3083 "cplus.met"
            tokenAhead = 0 ;
#line 3083 "cplus.met"
            CommTerm();
#line 3083 "cplus.met"
#line 3083 "cplus.met"
            {
#line 3083 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3083 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 3083 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3083 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3083 "cplus.met"
                }
#line 3083 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3083 "cplus.met"
                expTree=_ptRes0;
#line 3083 "cplus.met"
            }
#line 3083 "cplus.met"
            break;
#line 3083 "cplus.met"
#line 3084 "cplus.met"
        case TILD : 
#line 3084 "cplus.met"
            tokenAhead = 0 ;
#line 3084 "cplus.met"
            CommTerm();
#line 3084 "cplus.met"
#line 3084 "cplus.met"
            {
#line 3084 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3084 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 3084 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3084 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3084 "cplus.met"
                }
#line 3084 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3084 "cplus.met"
                expTree=_ptRes0;
#line 3084 "cplus.met"
            }
#line 3084 "cplus.met"
            break;
#line 3084 "cplus.met"
#line 3085 "cplus.met"
        case EXCL : 
#line 3085 "cplus.met"
            tokenAhead = 0 ;
#line 3085 "cplus.met"
            CommTerm();
#line 3085 "cplus.met"
#line 3085 "cplus.met"
            {
#line 3085 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3085 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 3085 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3085 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3085 "cplus.met"
                }
#line 3085 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3085 "cplus.met"
                expTree=_ptRes0;
#line 3085 "cplus.met"
            }
#line 3085 "cplus.met"
            break;
#line 3085 "cplus.met"
#line 3086 "cplus.met"
        case ETOI : 
#line 3086 "cplus.met"
            tokenAhead = 0 ;
#line 3086 "cplus.met"
            CommTerm();
#line 3086 "cplus.met"
#line 3086 "cplus.met"
            {
#line 3086 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3086 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 3086 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3086 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3086 "cplus.met"
                }
#line 3086 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3086 "cplus.met"
                expTree=_ptRes0;
#line 3086 "cplus.met"
            }
#line 3086 "cplus.met"
            break;
#line 3086 "cplus.met"
#line 3087 "cplus.met"
        case ETCO : 
#line 3087 "cplus.met"
            tokenAhead = 0 ;
#line 3087 "cplus.met"
            CommTerm();
#line 3087 "cplus.met"
#line 3087 "cplus.met"
            {
#line 3087 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3087 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 3087 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3087 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3087 "cplus.met"
                }
#line 3087 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3087 "cplus.met"
                expTree=_ptRes0;
#line 3087 "cplus.met"
            }
#line 3087 "cplus.met"
            break;
#line 3087 "cplus.met"
#line 3088 "cplus.met"
        case PLUSPLUS : 
#line 3088 "cplus.met"
            tokenAhead = 0 ;
#line 3088 "cplus.met"
            CommTerm();
#line 3088 "cplus.met"
#line 3088 "cplus.met"
            {
#line 3088 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3088 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 3088 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3088 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3088 "cplus.met"
                }
#line 3088 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3088 "cplus.met"
                expTree=_ptRes0;
#line 3088 "cplus.met"
            }
#line 3088 "cplus.met"
            break;
#line 3088 "cplus.met"
#line 3089 "cplus.met"
        case TIRETIRE : 
#line 3089 "cplus.met"
            tokenAhead = 0 ;
#line 3089 "cplus.met"
            CommTerm();
#line 3089 "cplus.met"
#line 3089 "cplus.met"
            {
#line 3089 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3089 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 3089 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3089 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3089 "cplus.met"
                }
#line 3089 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3089 "cplus.met"
                expTree=_ptRes0;
#line 3089 "cplus.met"
            }
#line 3089 "cplus.met"
            break;
#line 3089 "cplus.met"
#line 3090 "cplus.met"
        case SIZEOF : 
#line 3090 "cplus.met"
            tokenAhead = 0 ;
#line 3090 "cplus.met"
            CommTerm();
#line 3090 "cplus.met"
#line 3091 "cplus.met"
#line 3092 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 141, cplus))){
#line 3092 "cplus.met"
#line 3093 "cplus.met"
#line 3094 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 159, cplus))== (PPTREE) -1 ) {
#line 3094 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3094 "cplus.met"
                }
#line 3094 "cplus.met"
#line 3095 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 3095 "cplus.met"
                                    l'interieur */
#line 3095 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 3095 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 3095 "cplus.met"
                                     AddRef(expTree);
#line 3095 "cplus.met"
                                     FreeTreeRec(inter);
#line 3095 "cplus.met"
                                     RemRef(expTree);
#line 3095 "cplus.met"
                                          } else
#line 3095 "cplus.met"
                                     expTree = inter;
#line 3095 "cplus.met"
                                
#line 3095 "cplus.met"
#line 3095 "cplus.met"
#line 3105 "cplus.met"
            }
#line 3105 "cplus.met"
#line 3107 "cplus.met"
            {
#line 3107 "cplus.met"
                PPTREE _ptTree0=0;
#line 3107 "cplus.met"
                {
#line 3107 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3107 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 3107 "cplus.met"
                    {
#line 3107 "cplus.met"
                        PPTREE _ptRes2=0;
#line 3107 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 3107 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 3107 "cplus.met"
                        _ptTree1=_ptRes2;
#line 3107 "cplus.met"
                    }
#line 3107 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3107 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 3107 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3107 "cplus.met"
                }
#line 3107 "cplus.met"
                _retValue =_ptTree0;
#line 3107 "cplus.met"
                goto unary_expression_ret;
#line 3107 "cplus.met"
            }
#line 3107 "cplus.met"
#line 3107 "cplus.met"
            break;
#line 3107 "cplus.met"
#line 3110 "cplus.met"
        default : 
#line 3110 "cplus.met"
#line 3110 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 3110 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 3110 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 3110 "cplus.met"
#line 3111 "cplus.met"
#line 3112 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 3112 "cplus.met"
#line 3113 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 3113 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3113 "cplus.met"
                    }
#line 3113 "cplus.met"
                }
#line 3113 "cplus.met"
#line 3113 "cplus.met"
#line 3113 "cplus.met"
            } else {
#line 3113 "cplus.met"
#line 3116 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 3116 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 3116 "cplus.met"
                }
#line 3116 "cplus.met"
            }
#line 3116 "cplus.met"
            break;
#line 3116 "cplus.met"
    }
#line 3116 "cplus.met"
#line 3118 "cplus.met"
    {
#line 3118 "cplus.met"
        _retValue = expTree ;
#line 3118 "cplus.met"
        goto unary_expression_ret;
#line 3118 "cplus.met"
        
#line 3118 "cplus.met"
    }
#line 3118 "cplus.met"
#line 3118 "cplus.met"
#line 3118 "cplus.met"

#line 3119 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3119 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3119 "cplus.met"
return((PPTREE) 0);
#line 3119 "cplus.met"

#line 3119 "cplus.met"
unary_expression_exit :
#line 3119 "cplus.met"

#line 3119 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 3119 "cplus.met"
    _funcLevel--;
#line 3119 "cplus.met"
    return((PPTREE) -1) ;
#line 3119 "cplus.met"

#line 3119 "cplus.met"
unary_expression_ret :
#line 3119 "cplus.met"
    
#line 3119 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 3119 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3119 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3119 "cplus.met"
    return _retValue ;
#line 3119 "cplus.met"
}
#line 3119 "cplus.met"

#line 3119 "cplus.met"
#line 2331 "cplus.met"
PPTREE cplus::unsigned_type ( int error_free)
#line 2331 "cplus.met"
{
#line 2331 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2331 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2331 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2331 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2331 "cplus.met"
    int _Debug = TRACE_RULE("unsigned_type",TRACE_ENTER,(PPTREE)0);
#line 2331 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2331 "cplus.met"
#line 2331 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2331 "cplus.met"
#line 2333 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2333 "cplus.met"
    if (  !SEE_TOKEN( UNSIGNED,"unsigned") || !(CommTerm(),1)) {
#line 2333 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(unsigned_type_exit,"unsigned")
#line 2333 "cplus.met"
    } else {
#line 2333 "cplus.met"
        tokenAhead = 0 ;
#line 2333 "cplus.met"
    }
#line 2333 "cplus.met"
#line 2334 "cplus.met"
    {
#line 2334 "cplus.met"
        inside_signed = 1 ;
#line 2334 "cplus.met"
#line 2335 "cplus.met"
#line 2336 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 136, cplus)){
#line 2336 "cplus.met"
#line 2337 "cplus.met"
            {
#line 2337 "cplus.met"
                PPTREE _ptTree0=0;
#line 2337 "cplus.met"
                {
#line 2337 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2337 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2337 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2337 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2337 "cplus.met"
                }
#line 2337 "cplus.met"
                _retValue =_ptTree0;
#line 2337 "cplus.met"
                goto unsigned_type_ret;
#line 2337 "cplus.met"
            }
#line 2337 "cplus.met"
        } else {
#line 2337 "cplus.met"
#line 2339 "cplus.met"
            {
#line 2339 "cplus.met"
                PPTREE _ptTree0=0;
#line 2339 "cplus.met"
                {
#line 2339 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2339 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2339 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2339 "cplus.met"
                }
#line 2339 "cplus.met"
                _retValue =_ptTree0;
#line 2339 "cplus.met"
                goto unsigned_type_ret;
#line 2339 "cplus.met"
            }
#line 2339 "cplus.met"
        }
#line 2339 "cplus.met"
#line 2339 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2339 "cplus.met"
    }
#line 2339 "cplus.met"
#line 2339 "cplus.met"
#line 2340 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2340 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2340 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2340 "cplus.met"
return((PPTREE) 0);
#line 2340 "cplus.met"

#line 2340 "cplus.met"
unsigned_type_exit :
#line 2340 "cplus.met"

#line 2340 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_EXIT,(PPTREE)0);
#line 2340 "cplus.met"
    _funcLevel--;
#line 2340 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2340 "cplus.met"
    return((PPTREE) -1) ;
#line 2340 "cplus.met"

#line 2340 "cplus.met"
unsigned_type_ret :
#line 2340 "cplus.met"
    
#line 2340 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_RETURN,_retValue);
#line 2340 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2340 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2340 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2340 "cplus.met"
    return _retValue ;
#line 2340 "cplus.met"
}
#line 2340 "cplus.met"

#line 2340 "cplus.met"
