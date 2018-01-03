/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-1995                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "config.h"


#line 22 "config.met"
PPTREE config::langage ( int error_free)
#line 22 "config.met"
{
#line 22 "config.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 22 "config.met"
    int _value,_nbPre = 0 ;
#line 22 "config.met"
    PCOMM_ELEM _ptPreComm = (1,listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 22 "config.met"
    int _Debug = TRACE_RULE("langage",TRACE_ENTER,(PPTREE)0);
#line 22 "config.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 22 "config.met"
#line 23 "config.met"
    while ((tokenAhead && tokenAhead != -1)|| (c != EOF)) { 
#line 23 "config.met"
#line 24 "config.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 24 "config.met"
        switch( lexEl.Value) {
#line 24 "config.met"
#line 25 "config.met"
            case META : 
#line 25 "config.met"
            case FOO_LOW : 
#line 25 "config.met"
                tokenAhead = 0 ;
#line 25 "config.met"
                CommTerm();
#line 25 "config.met"
#line 25 "config.met"
                write(1,theLanguage,strlen(theLanguage));
#line 25 "config.met"
                break;
#line 25 "config.met"
#line 26 "config.met"
            case FOO_UPP : 
#line 26 "config.met"
                tokenAhead = 0 ;
#line 26 "config.met"
                CommTerm();
#line 26 "config.met"
#line 27 "config.met"
                 {
#line 27 "config.met"
                					char string [80];
#line 27 "config.met"
                					char *point = string ;
#line 27 "config.met"
                					strcpy(string,theLanguage);
#line 27 "config.met"
                					while ( *point) {
#line 27 "config.met"
                						*point = toupper (*point);
#line 27 "config.met"
                						point++;
#line 27 "config.met"
                					}
#line 27 "config.met"
                					write(1,string,strlen(string)); }
#line 27 "config.met"
                				
#line 27 "config.met"
                break;
#line 27 "config.met"
#line 37 "config.met"
            case CHARACTER : 
#line 37 "config.met"
                tokenAhead = 0 ;
#line 37 "config.met"
                CommTerm();
#line 37 "config.met"
#line 37 "config.met"
                write(1,lexEl.string(),1);
#line 37 "config.met"
                break;
#line 37 "config.met"
            default :
#line 37 "config.met"
                CASE_EXIT(langage_exit,"either FOO_LOW or FOO_UPP or CHARACTER")
#line 37 "config.met"
                break;
#line 37 "config.met"
        }
#line 37 "config.met"
    } 
#line 37 "config.met"
#line 37 "config.met"
#line 38 "config.met"
1;
#line 38 "config.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 38 "config.met"
return((PPTREE) 0);
#line 38 "config.met"

#line 38 "config.met"
langage_exit :
#line 38 "config.met"

#line 38 "config.met"
    _Debug = TRACE_RULE("langage",TRACE_EXIT,(PPTREE)0);
#line 38 "config.met"
    _funcLevel--;
#line 38 "config.met"
    return((PPTREE) -1) ;
#line 38 "config.met"

#line 38 "config.met"
langage_ret :
#line 38 "config.met"
    
#line 38 "config.met"
    _Debug = TRACE_RULE("langage",TRACE_RETURN,_retValue);
#line 38 "config.met"
    1;
#line 38 "config.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 38 "config.met"
    return _retValue ;
#line 38 "config.met"
}
#line 38 "config.met"

#line 38 "config.met"
#line 18 "config.met"
PPTREE config::main_entry ( int error_free)
#line 18 "config.met"
{
#line 18 "config.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 18 "config.met"
    int _value,_nbPre = 0 ;
#line 18 "config.met"
    PCOMM_ELEM _ptPreComm = (1,listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 18 "config.met"
    int _Debug = TRACE_RULE("main_entry",TRACE_ENTER,(PPTREE)0);
#line 18 "config.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 18 "config.met"
#line 19 "config.met"
    {
#line 19 "config.met"
        PPTREE _ptTree0=0;
#line 19 "config.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(langage)(error_free), 0, config))== (PPTREE) -1 ) {
#line 19 "config.met"
            MulFreeTree(1,_ptTree0);
            PROG_EXIT(main_entry_exit,"main_entry")
#line 19 "config.met"
        }
#line 19 "config.met"
        _retValue =_ptTree0;
#line 19 "config.met"
        goto main_entry_ret;
#line 19 "config.met"
    }
#line 19 "config.met"
#line 19 "config.met"
#line 19 "config.met"

#line 20 "config.met"
1;
#line 20 "config.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 20 "config.met"
return((PPTREE) 0);
#line 20 "config.met"

#line 20 "config.met"
main_entry_exit :
#line 20 "config.met"

#line 20 "config.met"
    _Debug = TRACE_RULE("main_entry",TRACE_EXIT,(PPTREE)0);
#line 20 "config.met"
    _funcLevel--;
#line 20 "config.met"
    return((PPTREE) -1) ;
#line 20 "config.met"

#line 20 "config.met"
main_entry_ret :
#line 20 "config.met"
    
#line 20 "config.met"
    _Debug = TRACE_RULE("main_entry",TRACE_RETURN,_retValue);
#line 20 "config.met"
    1;
#line 20 "config.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 20 "config.met"
    return _retValue ;
#line 20 "config.met"
}
#line 20 "config.met"

#line 20 "config.met"
#line 41 "config.met"
PPTREE config::parse_entry ( int error_free)
#line 41 "config.met"
{
#line 41 "config.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 41 "config.met"
    int _value,_nbPre = 0 ;
#line 41 "config.met"
    PCOMM_ELEM _ptPreComm = (1,listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 41 "config.met"
    int _Debug = TRACE_RULE("parse_entry",TRACE_ENTER,(PPTREE)0);
#line 41 "config.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 41 "config.met"
#line 42 "config.met"
     goto parse_entry_exit;
#line 42 "config.met"
#line 42 "config.met"
#line 42 "config.met"

#line 43 "config.met"
1;
#line 43 "config.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 43 "config.met"
return((PPTREE) 0);
#line 43 "config.met"

#line 43 "config.met"
parse_entry_exit :
#line 43 "config.met"

#line 43 "config.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_EXIT,(PPTREE)0);
#line 43 "config.met"
    _funcLevel--;
#line 43 "config.met"
    return((PPTREE) -1) ;
#line 43 "config.met"

#line 43 "config.met"
parse_entry_ret :
#line 43 "config.met"
    
#line 43 "config.met"
    _Debug = TRACE_RULE("parse_entry",TRACE_RETURN,_retValue);
#line 43 "config.met"
    1;
#line 43 "config.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 43 "config.met"
    return _retValue ;
#line 43 "config.met"
}
#line 43 "config.met"

#line 43 "config.met"
