/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


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
