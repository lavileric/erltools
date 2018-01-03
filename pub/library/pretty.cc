/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-1995                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "pretty.h"


#line 18 "pretty.met"
PPTREE pretty::bidon ( int error_free)
#line 18 "pretty.met"
{
#line 18 "pretty.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 18 "pretty.met"
    int _value,_nbPre = 0 ;
#line 18 "pretty.met"
    PCOMM_ELEM _ptPreComm = (1,listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 18 "pretty.met"
    int _Debug = TRACE_RULE("bidon",TRACE_ENTER,(PPTREE)0);
#line 18 "pretty.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 18 "pretty.met"
#line 18 "pretty.met"
    PPTREE retTree = (PPTREE) 0;
#line 18 "pretty.met"
#line 20 "pretty.met"
    1;
#line 20 "pretty.met"
    if (  !SEE_TOKEN( PLUS____TIRETIRETIRETIRETIRETIRE____,"+____------____") || !(CommTerm(),1)) {
#line 20 "pretty.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(bidon_exit,"+____------____")
#line 20 "pretty.met"
    } else {
#line 20 "pretty.met"
        tokenAhead = 0 ;
#line 20 "pretty.met"
    }
#line 20 "pretty.met"
#line 21 "pretty.met"
    {
#line 21 "pretty.met"
        PPTREE _ptRes0=0;
#line 21 "pretty.met"
        _ptRes0= MakeTree(ATTRIBUTS, 3);
#line 21 "pretty.met"
        retTree=_ptRes0;
#line 21 "pretty.met"
    }
#line 21 "pretty.met"
#line 22 "pretty.met"
    {
#line 22 "pretty.met"
        PPTREE _ptRes0=0;
#line 22 "pretty.met"
        _ptRes0= MakeTree(NEWLINE, 1);
#line 22 "pretty.met"
        retTree=_ptRes0;
#line 22 "pretty.met"
    }
#line 22 "pretty.met"
#line 23 "pretty.met"
    {
#line 23 "pretty.met"
        PPTREE _ptRes0=0;
#line 23 "pretty.met"
        _ptRes0= MakeTree(TAB, 1);
#line 23 "pretty.met"
        retTree=_ptRes0;
#line 23 "pretty.met"
    }
#line 23 "pretty.met"
#line 24 "pretty.met"
    {
#line 24 "pretty.met"
        PPTREE _ptRes0=0;
#line 24 "pretty.met"
        _ptRes0= MakeTree(TAB_VIRT, 1);
#line 24 "pretty.met"
        retTree=_ptRes0;
#line 24 "pretty.met"
    }
#line 24 "pretty.met"
#line 25 "pretty.met"
    {
#line 25 "pretty.met"
        PPTREE _ptRes0=0;
#line 25 "pretty.met"
        _ptRes0= MakeTree(MARK, 0);
#line 25 "pretty.met"
        retTree=_ptRes0;
#line 25 "pretty.met"
    }
#line 25 "pretty.met"
#line 26 "pretty.met"
    {
#line 26 "pretty.met"
        PPTREE _ptRes0=0;
#line 26 "pretty.met"
        _ptRes0= MakeTree(UNMARK, 0);
#line 26 "pretty.met"
        retTree=_ptRes0;
#line 26 "pretty.met"
    }
#line 26 "pretty.met"
#line 27 "pretty.met"
    {
#line 27 "pretty.met"
        PPTREE _ptRes0=0;
#line 27 "pretty.met"
        _ptRes0= MakeTree(STR, 1);
#line 27 "pretty.met"
        retTree=_ptRes0;
#line 27 "pretty.met"
    }
#line 27 "pretty.met"
#line 28 "pretty.met"
    {
#line 28 "pretty.met"
        PPTREE _ptRes0=0;
#line 28 "pretty.met"
        _ptRes0= MakeTree(GOTO, 1);
#line 28 "pretty.met"
        retTree=_ptRes0;
#line 28 "pretty.met"
    }
#line 28 "pretty.met"
#line 29 "pretty.met"
    {
#line 29 "pretty.met"
        PPTREE _ptRes0=0;
#line 29 "pretty.met"
        _ptRes0= MakeTree(GOTO_REL, 1);
#line 29 "pretty.met"
        retTree=_ptRes0;
#line 29 "pretty.met"
    }
#line 29 "pretty.met"
#line 30 "pretty.met"
    {
#line 30 "pretty.met"
        _retValue = retTree ;
#line 30 "pretty.met"
        goto bidon_ret;
#line 30 "pretty.met"
        
#line 30 "pretty.met"
    }
#line 30 "pretty.met"
#line 30 "pretty.met"
#line 30 "pretty.met"

#line 31 "pretty.met"
1;
#line 31 "pretty.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 31 "pretty.met"
return((PPTREE) 0);
#line 31 "pretty.met"

#line 31 "pretty.met"
bidon_exit :
#line 31 "pretty.met"

#line 31 "pretty.met"
    _Debug = TRACE_RULE("bidon",TRACE_EXIT,(PPTREE)0);
#line 31 "pretty.met"
    _funcLevel--;
#line 31 "pretty.met"
    return((PPTREE) -1) ;
#line 31 "pretty.met"

#line 31 "pretty.met"
bidon_ret :
#line 31 "pretty.met"
    
#line 31 "pretty.met"
    _Debug = TRACE_RULE("bidon",TRACE_RETURN,_retValue);
#line 31 "pretty.met"
    1;
#line 31 "pretty.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 31 "pretty.met"
    return _retValue ;
#line 31 "pretty.met"
}
#line 31 "pretty.met"

#line 31 "pretty.met"
#line 12 "pretty.met"
PPTREE pretty::parse_entry ( int error_free)
#line 12 "pretty.met"
{
#line 12 "pretty.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 12 "pretty.met"
    int _value,_nbPre = 0 ;
#line 12 "pretty.met"
    PCOMM_ELEM _ptPreComm = (1,listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 12 "pretty.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 12 "pretty.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 12 "pretty.met"
#line 13 "pretty.met"
    1;
#line 13 "pretty.met"
    if (  !SEE_TOKEN( PLUS____TIRETIRETIRETIRETIRETIRE____,"+____------____") || !(CommTerm(),1)) {
#line 13 "pretty.met"
            TOKEN_EXIT(parse_entry_exit,"+____------____")
#line 13 "pretty.met"
    } else {
#line 13 "pretty.met"
        tokenAhead = 0 ;
#line 13 "pretty.met"
    }
#line 13 "pretty.met"
#line 14 "pretty.met"
    
#line 14 "pretty.met"
    LEX_EXIT ("",0);
#line 14 "pretty.met"
    goto parse_entry_exit;
#line 14 "pretty.met"
#line 14 "pretty.met"
#line 14 "pretty.met"

#line 15 "pretty.met"
1;
#line 15 "pretty.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 15 "pretty.met"
return((PPTREE) 0);
#line 15 "pretty.met"

#line 15 "pretty.met"
parse_entry_exit :
#line 15 "pretty.met"

#line 15 "pretty.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 15 "pretty.met"
    _funcLevel--;
#line 15 "pretty.met"
    return((PPTREE) -1) ;
#line 15 "pretty.met"

#line 15 "pretty.met"
parse_entry_ret :
#line 15 "pretty.met"
    
#line 15 "pretty.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 15 "pretty.met"
    1;
#line 15 "pretty.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 15 "pretty.met"
    return _retValue ;
#line 15 "pretty.met"
}
#line 15 "pretty.met"

#line 15 "pretty.met"
