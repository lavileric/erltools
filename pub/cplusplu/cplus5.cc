/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


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
        if ( (_ptTree0=NQUICK_CALL(_Tak(program)(error_free), 118, cplus))== (PPTREE) -1 ) {
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
#line 2284 "cplus.met"
PPTREE cplus::member_declarator ( int error_free)
#line 2284 "cplus.met"
{
#line 2284 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2284 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2284 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2284 "cplus.met"
    int _Debug = TRACE_RULE("member_declarator",TRACE_ENTER,(PPTREE)0);
#line 2284 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2284 "cplus.met"
#line 2284 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2284 "cplus.met"
#line 2286 "cplus.met"
    {
#line 2286 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2286 "cplus.met"
        _ptRes0= MakeTree(MEMBER_DECLARATOR, 2);
#line 2286 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 2286 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(member_declarator_exit,"member_declarator")
#line 2286 "cplus.met"
        }
#line 2286 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2286 "cplus.met"
        retTree=_ptRes0;
#line 2286 "cplus.met"
    }
#line 2286 "cplus.met"
#line 2287 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2287 "cplus.met"
    if (  !SEE_TOKEN( DPOIDPOI,"::") || !(CommTerm(),1)) {
#line 2287 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"::")
#line 2287 "cplus.met"
    } else {
#line 2287 "cplus.met"
        tokenAhead = 0 ;
#line 2287 "cplus.met"
    }
#line 2287 "cplus.met"
#line 2288 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2288 "cplus.met"
    if (  !SEE_TOKEN( ETOI,"*") || !(CommTerm(),1)) {
#line 2288 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(member_declarator_exit,"*")
#line 2288 "cplus.met"
    } else {
#line 2288 "cplus.met"
        tokenAhead = 0 ;
#line 2288 "cplus.met"
    }
#line 2288 "cplus.met"
#line 2289 "cplus.met"
    {
#line 2289 "cplus.met"
        _retValue = retTree ;
#line 2289 "cplus.met"
        goto member_declarator_ret;
#line 2289 "cplus.met"
        
#line 2289 "cplus.met"
    }
#line 2289 "cplus.met"
#line 2289 "cplus.met"
#line 2289 "cplus.met"

#line 2290 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2290 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2290 "cplus.met"
return((PPTREE) 0);
#line 2290 "cplus.met"

#line 2290 "cplus.met"
member_declarator_exit :
#line 2290 "cplus.met"

#line 2290 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_EXIT,(PPTREE)0);
#line 2290 "cplus.met"
    _funcLevel--;
#line 2290 "cplus.met"
    return((PPTREE) -1) ;
#line 2290 "cplus.met"

#line 2290 "cplus.met"
member_declarator_ret :
#line 2290 "cplus.met"
    
#line 2290 "cplus.met"
    _Debug = TRACE_RULE("member_declarator",TRACE_RETURN,_retValue);
#line 2290 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2290 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2290 "cplus.met"
    return _retValue ;
#line 2290 "cplus.met"
}
#line 2290 "cplus.met"

#line 2290 "cplus.met"
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(macro_extended)(error_free), 98, cplus))== (PPTREE) -1 ) {
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
    if ( (NQUICK_CALL(_Tak(macro)(error_free), 97, cplus))== (PPTREE) -1 ) {
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
#line 2865 "cplus.met"
PPTREE cplus::multiplicative_expression ( int error_free)
#line 2865 "cplus.met"
{
#line 2865 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2865 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2865 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2865 "cplus.met"
    int _Debug = TRACE_RULE("multiplicative_expression",TRACE_ENTER,(PPTREE)0);
#line 2865 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2865 "cplus.met"
#line 2865 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2865 "cplus.met"
#line 2867 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(pm_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2867 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2867 "cplus.met"
    }
#line 2867 "cplus.met"
#line 2868 "cplus.met"
    while ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ETOI,"*")) || 
#line 2868 "cplus.met"
           ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( SLAS,"SLAS"))) || 
#line 2868 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( POURC,"%"))) { 
#line 2868 "cplus.met"
#line 2869 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2869 "cplus.met"
        switch( lexEl.Value) {
#line 2869 "cplus.met"
#line 2870 "cplus.met"
            case ETOI : 
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
                    _ptRes0= MakeTree(MUL, 2);
#line 2870 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2870 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2870 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
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
            case META : 
#line 2871 "cplus.met"
            case SLAS : 
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
                    _ptRes0= MakeTree(DIV, 2);
#line 2871 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2871 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2871 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
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
#line 2872 "cplus.met"
            case POURC : 
#line 2872 "cplus.met"
                tokenAhead = 0 ;
#line 2872 "cplus.met"
                CommTerm();
#line 2872 "cplus.met"
#line 2872 "cplus.met"
                {
#line 2872 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 2872 "cplus.met"
                    _ptRes0= MakeTree(REM, 2);
#line 2872 "cplus.met"
                    ReplaceTree(_ptRes0, 1, expTree );
#line 2872 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(pm_expression)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2872 "cplus.met"
                        MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                        PROG_EXIT(multiplicative_expression_exit,"multiplicative_expression")
#line 2872 "cplus.met"
                    }
#line 2872 "cplus.met"
                    ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2872 "cplus.met"
                    expTree=_ptRes0;
#line 2872 "cplus.met"
                }
#line 2872 "cplus.met"
                break;
#line 2872 "cplus.met"
            default :
#line 2872 "cplus.met"
                MulFreeTree(1,expTree);
                CASE_EXIT(multiplicative_expression_exit,"either * or SLAS or %")
#line 2872 "cplus.met"
                break;
#line 2872 "cplus.met"
        }
#line 2872 "cplus.met"
    } 
#line 2872 "cplus.met"
#line 2874 "cplus.met"
    {
#line 2874 "cplus.met"
        _retValue = expTree ;
#line 2874 "cplus.met"
        goto multiplicative_expression_ret;
#line 2874 "cplus.met"
        
#line 2874 "cplus.met"
    }
#line 2874 "cplus.met"
#line 2874 "cplus.met"
#line 2874 "cplus.met"

#line 2875 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2875 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2875 "cplus.met"
return((PPTREE) 0);
#line 2875 "cplus.met"

#line 2875 "cplus.met"
multiplicative_expression_exit :
#line 2875 "cplus.met"

#line 2875 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_EXIT,(PPTREE)0);
#line 2875 "cplus.met"
    _funcLevel--;
#line 2875 "cplus.met"
    return((PPTREE) -1) ;
#line 2875 "cplus.met"

#line 2875 "cplus.met"
multiplicative_expression_ret :
#line 2875 "cplus.met"
    
#line 2875 "cplus.met"
    _Debug = TRACE_RULE("multiplicative_expression",TRACE_RETURN,_retValue);
#line 2875 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2875 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2875 "cplus.met"
    return _retValue ;
#line 2875 "cplus.met"
}
#line 2875 "cplus.met"

#line 2875 "cplus.met"
#line 3713 "cplus.met"
PPTREE cplus::name_space ( int error_free)
#line 3713 "cplus.met"
{
#line 3713 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3713 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3713 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3713 "cplus.met"
    int _Debug = TRACE_RULE("name_space",TRACE_ENTER,(PPTREE)0);
#line 3713 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3713 "cplus.met"
#line 3713 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3713 "cplus.met"
#line 3713 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0,ident = (PPTREE) 0,attrib = (PPTREE) 0;
#line 3713 "cplus.met"
#line 3715 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3715 "cplus.met"
    switch( lexEl.Value) {
#line 3715 "cplus.met"
#line 3716 "cplus.met"
        case NAMESPACE : 
#line 3716 "cplus.met"
            tokenAhead = 0 ;
#line 3716 "cplus.met"
            CommTerm();
#line 3716 "cplus.met"
#line 3717 "cplus.met"
#line 3719 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IDENT,"IDENT") && !(tokenAhead = 0) && ( BUILD_TERM_META(ident))) {
#line 3719 "cplus.met"
#line 3721 "cplus.met"
                {
#line 3721 "cplus.met"
                    PPTREE _ptRes0=0;
#line 3721 "cplus.met"
                    _ptRes0= MakeTree(IDENT, 1);
#line 3721 "cplus.met"
                    ReplaceTree(_ptRes0, 1, ident );
#line 3721 "cplus.met"
                    ident=_ptRes0;
#line 3721 "cplus.met"
                }
#line 3721 "cplus.met"
            }
#line 3721 "cplus.met"
#line 3722 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 22, cplus)){
#line 3722 "cplus.met"
#line 3722 "cplus.met"
            }
#line 3722 "cplus.met"
#line 3725 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3725 "cplus.met"
            switch( lexEl.Value) {
#line 3725 "cplus.met"
#line 3729 "cplus.met"
                case AOUV : 
#line 3729 "cplus.met"
                    tokenAhead = 0 ;
#line 3729 "cplus.met"
                    CommTerm();
#line 3729 "cplus.met"
#line 3728 "cplus.met"
#line 3729 "cplus.met"
                    {
#line 3729 "cplus.met"
                        PPTREE _ptRes0=0;
#line 3729 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE, 3);
#line 3729 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3729 "cplus.met"
                        ReplaceTree(_ptRes0, 3, attrib );
#line 3729 "cplus.met"
                        retTree=_ptRes0;
#line 3729 "cplus.met"
                    }
#line 3729 "cplus.met"
#line 3729 "cplus.met"
                    _addlist1 = list ;
#line 3729 "cplus.met"
#line 3730 "cplus.met"
                    while (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AFER,"}") && (tokenAhead = 0,CommTerm(),1))) { 
#line 3730 "cplus.met"
#line 3731 "cplus.met"
#line 3732 "cplus.met"
                        {
#line 3732 "cplus.met"
                            PPTREE _ptTree0=0;
#line 3732 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all)(error_free), 69, cplus))== (PPTREE) -1 ) {
#line 3732 "cplus.met"
                                MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                                PROG_EXIT(name_space_exit,"name_space")
#line 3732 "cplus.met"
                            }
#line 3732 "cplus.met"
                            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3732 "cplus.met"
                        }
#line 3732 "cplus.met"
#line 3732 "cplus.met"
                        if (list){
#line 3732 "cplus.met"
#line 3732 "cplus.met"
                            _addlist1 = SonTree (_addlist1 ,2 );
#line 3732 "cplus.met"
                        } else {
#line 3732 "cplus.met"
#line 3732 "cplus.met"
                            list = _addlist1 ;
#line 3732 "cplus.met"
                        }
#line 3732 "cplus.met"
#line 3732 "cplus.met"
                    } 
#line 3732 "cplus.met"
#line 3734 "cplus.met"
                    {
#line 3734 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3734 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 3734 "cplus.met"
                            MulFreeTree(6,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3734 "cplus.met"
                        }
#line 3734 "cplus.met"
                        list =AddList(list , _ptTree0);
#line 3734 "cplus.met"
                    }
#line 3734 "cplus.met"
#line 3735 "cplus.met"
                    {
#line 3735 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3735 "cplus.met"
                        {
#line 3735 "cplus.met"
                            PPTREE _ptRes1=0;
#line 3735 "cplus.met"
                            _ptRes1= MakeTree(COMPOUND_EXT, 1);
#line 3735 "cplus.met"
                            ReplaceTree(_ptRes1, 1, list );
#line 3735 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3735 "cplus.met"
                        }
#line 3735 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 3735 "cplus.met"
                    }
#line 3735 "cplus.met"
#line 3735 "cplus.met"
                    break;
#line 3735 "cplus.met"
#line 3739 "cplus.met"
                case EGAL : 
#line 3739 "cplus.met"
                    tokenAhead = 0 ;
#line 3739 "cplus.met"
                    CommTerm();
#line 3739 "cplus.met"
#line 3738 "cplus.met"
#line 3739 "cplus.met"
                    if ((ident == (PPTREE) 0 )){
#line 3739 "cplus.met"
#line 3740 "cplus.met"
                        
#line 3740 "cplus.met"
                        MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                        LEX_EXIT ("",0);
#line 3740 "cplus.met"
                        goto name_space_exit;
#line 3740 "cplus.met"
#line 3740 "cplus.met"
                    }
#line 3740 "cplus.met"
#line 3741 "cplus.met"
                    {
#line 3741 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3741 "cplus.met"
                        _ptRes0= MakeTree(NAMESPACE_ALIAS, 2);
#line 3741 "cplus.met"
                        ReplaceTree(_ptRes0, 1, ident );
#line 3741 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3741 "cplus.met"
                            MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                            PROG_EXIT(name_space_exit,"name_space")
#line 3741 "cplus.met"
                        }
#line 3741 "cplus.met"
                        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3741 "cplus.met"
                        retTree=_ptRes0;
#line 3741 "cplus.met"
                    }
#line 3741 "cplus.met"
#line 3741 "cplus.met"
                    break;
#line 3741 "cplus.met"
                default :
#line 3741 "cplus.met"
                    MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                    CASE_EXIT(name_space_exit,"either { or =")
#line 3741 "cplus.met"
                    break;
#line 3741 "cplus.met"
            }
#line 3741 "cplus.met"
#line 3741 "cplus.met"
            break;
#line 3741 "cplus.met"
#line 3745 "cplus.met"
        case USING : 
#line 3745 "cplus.met"
            tokenAhead = 0 ;
#line 3745 "cplus.met"
            CommTerm();
#line 3745 "cplus.met"
#line 3746 "cplus.met"
#line 3747 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(NAMESPACE,"namespace") && (tokenAhead = 0,CommTerm(),1)){
#line 3747 "cplus.met"
#line 3748 "cplus.met"
#line 3749 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(attrib = ,_Tak(attribute_call), 22, cplus)){
#line 3749 "cplus.met"
#line 3749 "cplus.met"
                }
#line 3749 "cplus.met"
#line 3751 "cplus.met"
                {
#line 3751 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3751 "cplus.met"
                    _ptRes0= MakeTree(USING_NAMESPACE, 2);
#line 3751 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3751 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3751 "cplus.met"
                    }
#line 3751 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3751 "cplus.met"
                    ReplaceTree(_ptRes0, 2, attrib );
#line 3751 "cplus.met"
                    retTree=_ptRes0;
#line 3751 "cplus.met"
                }
#line 3751 "cplus.met"
#line 3751 "cplus.met"
#line 3751 "cplus.met"
            } else {
#line 3751 "cplus.met"
#line 3754 "cplus.met"
                {
#line 3754 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3754 "cplus.met"
                    _ptRes0= MakeTree(USING, 1);
#line 3754 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(complete_class_name)(error_free), 32, cplus))== (PPTREE) -1 ) {
#line 3754 "cplus.met"
                        MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,attrib,ident,list,retTree);
                        PROG_EXIT(name_space_exit,"name_space")
#line 3754 "cplus.met"
                    }
#line 3754 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3754 "cplus.met"
                    retTree=_ptRes0;
#line 3754 "cplus.met"
                }
#line 3754 "cplus.met"
            }
#line 3754 "cplus.met"
#line 3755 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3755 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3755 "cplus.met"
                MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
                TOKEN_EXIT(name_space_exit,";")
#line 3755 "cplus.met"
            } else {
#line 3755 "cplus.met"
                tokenAhead = 0 ;
#line 3755 "cplus.met"
            }
#line 3755 "cplus.met"
#line 3755 "cplus.met"
            break;
#line 3755 "cplus.met"
        default :
#line 3755 "cplus.met"
            MulFreeTree(5,_addlist1,attrib,ident,list,retTree);
            CASE_EXIT(name_space_exit,"either namespace or using")
#line 3755 "cplus.met"
            break;
#line 3755 "cplus.met"
    }
#line 3755 "cplus.met"
#line 3758 "cplus.met"
    {
#line 3758 "cplus.met"
        _retValue = retTree ;
#line 3758 "cplus.met"
        goto name_space_ret;
#line 3758 "cplus.met"
        
#line 3758 "cplus.met"
    }
#line 3758 "cplus.met"
#line 3758 "cplus.met"
#line 3758 "cplus.met"

#line 3759 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3759 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3759 "cplus.met"
return((PPTREE) 0);
#line 3759 "cplus.met"

#line 3759 "cplus.met"
name_space_exit :
#line 3759 "cplus.met"

#line 3759 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_EXIT,(PPTREE)0);
#line 3759 "cplus.met"
    _funcLevel--;
#line 3759 "cplus.met"
    return((PPTREE) -1) ;
#line 3759 "cplus.met"

#line 3759 "cplus.met"
name_space_ret :
#line 3759 "cplus.met"
    
#line 3759 "cplus.met"
    _Debug = TRACE_RULE("name_space",TRACE_RETURN,_retValue);
#line 3759 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3759 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3759 "cplus.met"
    return _retValue ;
#line 3759 "cplus.met"
}
#line 3759 "cplus.met"

#line 3759 "cplus.met"
#line 2975 "cplus.met"
PPTREE cplus::new_1 ( int error_free)
#line 2975 "cplus.met"
{
#line 2975 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2975 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2975 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2975 "cplus.met"
    int _Debug = TRACE_RULE("new_1",TRACE_ENTER,(PPTREE)0);
#line 2975 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2975 "cplus.met"
#line 2975 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2975 "cplus.met"
#line 2977 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2977 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2977 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,"(")
#line 2977 "cplus.met"
    } else {
#line 2977 "cplus.met"
        tokenAhead = 0 ;
#line 2977 "cplus.met"
    }
#line 2977 "cplus.met"
#line 2978 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 2978 "cplus.met"
        MulFreeTree(1,retTree);
        PROG_EXIT(new_1_exit,"new_1")
#line 2978 "cplus.met"
    }
#line 2978 "cplus.met"
#line 2979 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2979 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2979 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(new_1_exit,")")
#line 2979 "cplus.met"
    } else {
#line 2979 "cplus.met"
        tokenAhead = 0 ;
#line 2979 "cplus.met"
    }
#line 2979 "cplus.met"
#line 2980 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2980 "cplus.met"
#line 2981 "cplus.met"
#line 2982 "cplus.met"
        {
#line 2982 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2982 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2982 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2982 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2982 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2982 "cplus.met"
            }
#line 2982 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2982 "cplus.met"
            retTree=_ptRes0;
#line 2982 "cplus.met"
        }
#line 2982 "cplus.met"
#line 2983 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2983 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2983 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_1_exit,")")
#line 2983 "cplus.met"
        } else {
#line 2983 "cplus.met"
            tokenAhead = 0 ;
#line 2983 "cplus.met"
        }
#line 2983 "cplus.met"
#line 2984 "cplus.met"
        {
#line 2984 "cplus.met"
            _retValue = retTree ;
#line 2984 "cplus.met"
            goto new_1_ret;
#line 2984 "cplus.met"
            
#line 2984 "cplus.met"
        }
#line 2984 "cplus.met"
#line 2984 "cplus.met"
#line 2984 "cplus.met"
    } else {
#line 2984 "cplus.met"
#line 2987 "cplus.met"
        {
#line 2987 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2987 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2987 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2987 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 2987 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_1_exit,"new_1")
#line 2987 "cplus.met"
            }
#line 2987 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2987 "cplus.met"
            retTree=_ptRes0;
#line 2987 "cplus.met"
        }
#line 2987 "cplus.met"
    }
#line 2987 "cplus.met"
#line 2988 "cplus.met"
    {
#line 2988 "cplus.met"
        _retValue = retTree ;
#line 2988 "cplus.met"
        goto new_1_ret;
#line 2988 "cplus.met"
        
#line 2988 "cplus.met"
    }
#line 2988 "cplus.met"
#line 2988 "cplus.met"
#line 2988 "cplus.met"

#line 2989 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2989 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2989 "cplus.met"
return((PPTREE) 0);
#line 2989 "cplus.met"

#line 2989 "cplus.met"
new_1_exit :
#line 2989 "cplus.met"

#line 2989 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_EXIT,(PPTREE)0);
#line 2989 "cplus.met"
    _funcLevel--;
#line 2989 "cplus.met"
    return((PPTREE) -1) ;
#line 2989 "cplus.met"

#line 2989 "cplus.met"
new_1_ret :
#line 2989 "cplus.met"
    
#line 2989 "cplus.met"
    _Debug = TRACE_RULE("new_1",TRACE_RETURN,_retValue);
#line 2989 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2989 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2989 "cplus.met"
    return _retValue ;
#line 2989 "cplus.met"
}
#line 2989 "cplus.met"

#line 2989 "cplus.met"
#line 2991 "cplus.met"
PPTREE cplus::new_2 ( int error_free)
#line 2991 "cplus.met"
{
#line 2991 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2991 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2991 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2991 "cplus.met"
    int _Debug = TRACE_RULE("new_2",TRACE_ENTER,(PPTREE)0);
#line 2991 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2991 "cplus.met"
#line 2991 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2991 "cplus.met"
#line 2993 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 2993 "cplus.met"
#line 2994 "cplus.met"
#line 2995 "cplus.met"
        {
#line 2995 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2995 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 2995 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(type_name)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 2995 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 2995 "cplus.met"
            }
#line 2995 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2995 "cplus.met"
            retTree=_ptRes0;
#line 2995 "cplus.met"
        }
#line 2995 "cplus.met"
#line 2996 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2996 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2996 "cplus.met"
            MulFreeTree(1,retTree);
            TOKEN_EXIT(new_2_exit,")")
#line 2996 "cplus.met"
        } else {
#line 2996 "cplus.met"
            tokenAhead = 0 ;
#line 2996 "cplus.met"
        }
#line 2996 "cplus.met"
#line 2997 "cplus.met"
        {
#line 2997 "cplus.met"
            _retValue = retTree ;
#line 2997 "cplus.met"
            goto new_2_ret;
#line 2997 "cplus.met"
            
#line 2997 "cplus.met"
        }
#line 2997 "cplus.met"
#line 2997 "cplus.met"
#line 2997 "cplus.met"
    } else {
#line 2997 "cplus.met"
#line 3000 "cplus.met"
        {
#line 3000 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3000 "cplus.met"
            _ptRes0= MakeTree(NEW, 4);
#line 3000 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(new_type_name)(error_free), 107, cplus))== (PPTREE) -1 ) {
#line 3000 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,retTree);
                PROG_EXIT(new_2_exit,"new_2")
#line 3000 "cplus.met"
            }
#line 3000 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 3000 "cplus.met"
            retTree=_ptRes0;
#line 3000 "cplus.met"
        }
#line 3000 "cplus.met"
    }
#line 3000 "cplus.met"
#line 3001 "cplus.met"
    {
#line 3001 "cplus.met"
        _retValue = retTree ;
#line 3001 "cplus.met"
        goto new_2_ret;
#line 3001 "cplus.met"
        
#line 3001 "cplus.met"
    }
#line 3001 "cplus.met"
#line 3001 "cplus.met"
#line 3001 "cplus.met"

#line 3002 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3002 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3002 "cplus.met"
return((PPTREE) 0);
#line 3002 "cplus.met"

#line 3002 "cplus.met"
new_2_exit :
#line 3002 "cplus.met"

#line 3002 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_EXIT,(PPTREE)0);
#line 3002 "cplus.met"
    _funcLevel--;
#line 3002 "cplus.met"
    return((PPTREE) -1) ;
#line 3002 "cplus.met"

#line 3002 "cplus.met"
new_2_ret :
#line 3002 "cplus.met"
    
#line 3002 "cplus.met"
    _Debug = TRACE_RULE("new_2",TRACE_RETURN,_retValue);
#line 3002 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3002 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3002 "cplus.met"
    return _retValue ;
#line 3002 "cplus.met"
}
#line 3002 "cplus.met"

#line 3002 "cplus.met"
#line 2517 "cplus.met"
PPTREE cplus::new_declarator ( int error_free)
#line 2517 "cplus.met"
{
#line 2517 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2517 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2517 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2517 "cplus.met"
    int _Debug = TRACE_RULE("new_declarator",TRACE_ENTER,(PPTREE)0);
#line 2517 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2517 "cplus.met"
#line 2517 "cplus.met"
    PPTREE valTree = (PPTREE) 0,retTree = (PPTREE) 0,expList = (PPTREE) 0;
#line 2517 "cplus.met"
#line 2519 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 127, cplus)){
#line 2519 "cplus.met"
#line 2520 "cplus.met"
        {
#line 2520 "cplus.met"
            PPTREE _ptTree0=0;
#line 2520 "cplus.met"
            {
#line 2520 "cplus.met"
                PPTREE _ptTree1=0;
#line 2520 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2520 "cplus.met"
                    MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                    PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2520 "cplus.met"
                }
#line 2520 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2520 "cplus.met"
            }
#line 2520 "cplus.met"
            _retValue =_ptTree0;
#line 2520 "cplus.met"
            goto new_declarator_ret;
#line 2520 "cplus.met"
        }
#line 2520 "cplus.met"
    }
#line 2520 "cplus.met"
#line 2521 "cplus.met"
    retTree = (PPTREE) 0;
#line 2521 "cplus.met"
#line 2522 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2522 "cplus.met"
    switch( lexEl.Value) {
#line 2522 "cplus.met"
#line 2523 "cplus.met"
        case ETOI : 
#line 2523 "cplus.met"
            tokenAhead = 0 ;
#line 2523 "cplus.met"
            CommTerm();
#line 2523 "cplus.met"
#line 2523 "cplus.met"
            {
#line 2523 "cplus.met"
                PPTREE _ptTree0=0;
#line 2523 "cplus.met"
                {
#line 2523 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2523 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2523 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2523 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2523 "cplus.met"
                    }
#line 2523 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2523 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2523 "cplus.met"
                }
#line 2523 "cplus.met"
                _retValue =_ptTree0;
#line 2523 "cplus.met"
                goto new_declarator_ret;
#line 2523 "cplus.met"
            }
#line 2523 "cplus.met"
            break;
#line 2523 "cplus.met"
#line 2524 "cplus.met"
        case META : 
#line 2524 "cplus.met"
        case IDENT : 
#line 2524 "cplus.met"
#line 2525 "cplus.met"
#line 2526 "cplus.met"
            if ( (valTree=NQUICK_CALL(_Tak(member_declarator)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 2526 "cplus.met"
                MulFreeTree(3,expList,retTree,valTree);
                PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2526 "cplus.met"
            }
#line 2526 "cplus.met"
#line 2527 "cplus.met"
            {
#line 2527 "cplus.met"
                PPTREE _ptTree0=0;
#line 2527 "cplus.met"
                {
#line 2527 "cplus.met"
                    PPTREE _ptTree1=0;
#line 2527 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(new_declarator)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 2527 "cplus.met"
                        MulFreeTree(5,_ptTree1,_ptTree0,expList,retTree,valTree);
                        PROG_EXIT(new_declarator_exit,"new_declarator")
#line 2527 "cplus.met"
                    }
#line 2527 "cplus.met"
                    _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2527 "cplus.met"
                }
#line 2527 "cplus.met"
                _retValue =_ptTree0;
#line 2527 "cplus.met"
                goto new_declarator_ret;
#line 2527 "cplus.met"
            }
#line 2527 "cplus.met"
#line 2527 "cplus.met"
            break;
#line 2527 "cplus.met"
#line 2536 "cplus.met"
        default : 
#line 2536 "cplus.met"
#line 2532 "cplus.met"
#line 2534 "cplus.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(COUV,"[") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2534 "cplus.met"
#line 2535 "cplus.met"
#line 2536 "cplus.met"
                if (NPUSH_CALL_AFF_VERIF(expList = ,_Tak(expression), 67, cplus)){
#line 2536 "cplus.met"
#line 2537 "cplus.met"
                    {
#line 2537 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2537 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2537 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2537 "cplus.met"
                        ReplaceTree(_ptRes0, 2, expList );
#line 2537 "cplus.met"
                        retTree=_ptRes0;
#line 2537 "cplus.met"
                    }
#line 2537 "cplus.met"
                } else {
#line 2537 "cplus.met"
#line 2539 "cplus.met"
                    {
#line 2539 "cplus.met"
                        PPTREE _ptRes0=0;
#line 2539 "cplus.met"
                        _ptRes0= MakeTree(TYP_ARRAY, 2);
#line 2539 "cplus.met"
                        ReplaceTree(_ptRes0, 1, retTree );
#line 2539 "cplus.met"
                        retTree=_ptRes0;
#line 2539 "cplus.met"
                    }
#line 2539 "cplus.met"
                }
#line 2539 "cplus.met"
#line 2540 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2540 "cplus.met"
                if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 2540 "cplus.met"
                    MulFreeTree(3,expList,retTree,valTree);
                    TOKEN_EXIT(new_declarator_exit,"]")
#line 2540 "cplus.met"
                } else {
#line 2540 "cplus.met"
                    tokenAhead = 0 ;
#line 2540 "cplus.met"
                }
#line 2540 "cplus.met"
#line 2540 "cplus.met"
            } 
#line 2540 "cplus.met"
#line 2542 "cplus.met"
            {
#line 2542 "cplus.met"
                _retValue = retTree ;
#line 2542 "cplus.met"
                goto new_declarator_ret;
#line 2542 "cplus.met"
                
#line 2542 "cplus.met"
            }
#line 2542 "cplus.met"
#line 2542 "cplus.met"
            break;
#line 2542 "cplus.met"
    }
#line 2542 "cplus.met"
#line 2542 "cplus.met"
#line 2544 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2544 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2544 "cplus.met"
return((PPTREE) 0);
#line 2544 "cplus.met"

#line 2544 "cplus.met"
new_declarator_exit :
#line 2544 "cplus.met"

#line 2544 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_EXIT,(PPTREE)0);
#line 2544 "cplus.met"
    _funcLevel--;
#line 2544 "cplus.met"
    return((PPTREE) -1) ;
#line 2544 "cplus.met"

#line 2544 "cplus.met"
new_declarator_ret :
#line 2544 "cplus.met"
    
#line 2544 "cplus.met"
    _Debug = TRACE_RULE("new_declarator",TRACE_RETURN,_retValue);
#line 2544 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2544 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2544 "cplus.met"
    return _retValue ;
#line 2544 "cplus.met"
}
#line 2544 "cplus.met"

#line 2544 "cplus.met"
#line 2700 "cplus.met"
PPTREE cplus::new_type_name ( int error_free)
#line 2700 "cplus.met"
{
#line 2700 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2700 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2700 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2700 "cplus.met"
    int _Debug = TRACE_RULE("new_type_name",TRACE_ENTER,(PPTREE)0);
#line 2700 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2700 "cplus.met"
#line 2700 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2700 "cplus.met"
#line 2702 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 2702 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(new_type_name_exit,"new_type_name")
#line 2702 "cplus.met"
    }
#line 2702 "cplus.met"
#line 2703 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(new_declarator), 106, cplus)){
#line 2703 "cplus.met"
#line 2704 "cplus.met"
        {
#line 2704 "cplus.met"
            PPTREE _ptRes0=0;
#line 2704 "cplus.met"
            _ptRes0= MakeTree(NEW_DECLARATOR, 2);
#line 2704 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2704 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2704 "cplus.met"
            valTree=_ptRes0;
#line 2704 "cplus.met"
        }
#line 2704 "cplus.met"
    } else {
#line 2704 "cplus.met"
#line 2706 "cplus.met"
        valTree = retTree ;
#line 2706 "cplus.met"
    }
#line 2706 "cplus.met"
#line 2707 "cplus.met"
    {
#line 2707 "cplus.met"
        _retValue = valTree ;
#line 2707 "cplus.met"
        goto new_type_name_ret;
#line 2707 "cplus.met"
        
#line 2707 "cplus.met"
    }
#line 2707 "cplus.met"
#line 2707 "cplus.met"
#line 2707 "cplus.met"

#line 2708 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2708 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2708 "cplus.met"
return((PPTREE) 0);
#line 2708 "cplus.met"

#line 2708 "cplus.met"
new_type_name_exit :
#line 2708 "cplus.met"

#line 2708 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_EXIT,(PPTREE)0);
#line 2708 "cplus.met"
    _funcLevel--;
#line 2708 "cplus.met"
    return((PPTREE) -1) ;
#line 2708 "cplus.met"

#line 2708 "cplus.met"
new_type_name_ret :
#line 2708 "cplus.met"
    
#line 2708 "cplus.met"
    _Debug = TRACE_RULE("new_type_name",TRACE_RETURN,_retValue);
#line 2708 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2708 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2708 "cplus.met"
    return _retValue ;
#line 2708 "cplus.met"
}
#line 2708 "cplus.met"

#line 2708 "cplus.met"
#line 3429 "cplus.met"
PPTREE cplus::none_statement ( int error_free)
#line 3429 "cplus.met"
{
#line 3429 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3429 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3429 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3429 "cplus.met"
    int _Debug = TRACE_RULE("none_statement",TRACE_ENTER,(PPTREE)0);
#line 3429 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3429 "cplus.met"
#line 3430 "cplus.met"
    {
#line 3430 "cplus.met"
        PPTREE _ptTree0=0;
#line 3430 "cplus.met"
        {
#line 3430 "cplus.met"
            PPTREE _ptRes1=0;
#line 3430 "cplus.met"
            _ptRes1= MakeTree(NONE, 0);
#line 3430 "cplus.met"
            _ptTree0=_ptRes1;
#line 3430 "cplus.met"
        }
#line 3430 "cplus.met"
        _retValue =_ptTree0;
#line 3430 "cplus.met"
        goto none_statement_ret;
#line 3430 "cplus.met"
    }
#line 3430 "cplus.met"
#line 3430 "cplus.met"
#line 3430 "cplus.met"

#line 3431 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3431 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3431 "cplus.met"
return((PPTREE) 0);
#line 3431 "cplus.met"

#line 3431 "cplus.met"
none_statement_exit :
#line 3431 "cplus.met"

#line 3431 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_EXIT,(PPTREE)0);
#line 3431 "cplus.met"
    _funcLevel--;
#line 3431 "cplus.met"
    return((PPTREE) -1) ;
#line 3431 "cplus.met"

#line 3431 "cplus.met"
none_statement_ret :
#line 3431 "cplus.met"
    
#line 3431 "cplus.met"
    _Debug = TRACE_RULE("none_statement",TRACE_RETURN,_retValue);
#line 3431 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3431 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3431 "cplus.met"
    return _retValue ;
#line 3431 "cplus.met"
}
#line 3431 "cplus.met"

#line 3431 "cplus.met"
#line 3150 "cplus.met"
PPTREE cplus::operator_function_name ( int error_free)
#line 3150 "cplus.met"
{
#line 3150 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3150 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3150 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3150 "cplus.met"
    int _Debug = TRACE_RULE("operator_function_name",TRACE_ENTER,(PPTREE)0);
#line 3150 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3150 "cplus.met"
#line 3150 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3150 "cplus.met"
#line 3152 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3152 "cplus.met"
    if (  !SEE_TOKEN( OPERATOR,"operator") || !(CommTerm(),1)) {
#line 3152 "cplus.met"
        MulFreeTree(3,list,retTree,valTree);
        TOKEN_EXIT(operator_function_name_exit,"operator")
#line 3152 "cplus.met"
    } else {
#line 3152 "cplus.met"
        tokenAhead = 0 ;
#line 3152 "cplus.met"
    }
#line 3152 "cplus.met"
#line 3153 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3153 "cplus.met"
    switch( lexEl.Value) {
#line 3153 "cplus.met"
#line 3154 "cplus.met"
        case NEW : 
#line 3154 "cplus.met"
            tokenAhead = 0 ;
#line 3154 "cplus.met"
            CommTerm();
#line 3154 "cplus.met"
#line 3154 "cplus.met"
            {
#line 3154 "cplus.met"
                PPTREE _ptTree0=0;
#line 3154 "cplus.met"
                {
#line 3154 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3154 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3154 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("new"));
#line 3154 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3154 "cplus.met"
                }
#line 3154 "cplus.met"
                _retValue =_ptTree0;
#line 3154 "cplus.met"
                goto operator_function_name_ret;
#line 3154 "cplus.met"
            }
#line 3154 "cplus.met"
            break;
#line 3154 "cplus.met"
#line 3155 "cplus.met"
        case DELETE : 
#line 3155 "cplus.met"
            tokenAhead = 0 ;
#line 3155 "cplus.met"
            CommTerm();
#line 3155 "cplus.met"
#line 3155 "cplus.met"
            {
#line 3155 "cplus.met"
                PPTREE _ptTree0=0;
#line 3155 "cplus.met"
                {
#line 3155 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3155 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3155 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("delete"));
#line 3155 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3155 "cplus.met"
                }
#line 3155 "cplus.met"
                _retValue =_ptTree0;
#line 3155 "cplus.met"
                goto operator_function_name_ret;
#line 3155 "cplus.met"
            }
#line 3155 "cplus.met"
            break;
#line 3155 "cplus.met"
#line 3156 "cplus.met"
        case PLUS : 
#line 3156 "cplus.met"
            tokenAhead = 0 ;
#line 3156 "cplus.met"
            CommTerm();
#line 3156 "cplus.met"
#line 3156 "cplus.met"
            {
#line 3156 "cplus.met"
                PPTREE _ptTree0=0;
#line 3156 "cplus.met"
                {
#line 3156 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3156 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3156 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+"));
#line 3156 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3156 "cplus.met"
                }
#line 3156 "cplus.met"
                _retValue =_ptTree0;
#line 3156 "cplus.met"
                goto operator_function_name_ret;
#line 3156 "cplus.met"
            }
#line 3156 "cplus.met"
            break;
#line 3156 "cplus.met"
#line 3157 "cplus.met"
        case TIRE : 
#line 3157 "cplus.met"
            tokenAhead = 0 ;
#line 3157 "cplus.met"
            CommTerm();
#line 3157 "cplus.met"
#line 3157 "cplus.met"
            {
#line 3157 "cplus.met"
                PPTREE _ptTree0=0;
#line 3157 "cplus.met"
                {
#line 3157 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3157 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3157 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-"));
#line 3157 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3157 "cplus.met"
                }
#line 3157 "cplus.met"
                _retValue =_ptTree0;
#line 3157 "cplus.met"
                goto operator_function_name_ret;
#line 3157 "cplus.met"
            }
#line 3157 "cplus.met"
            break;
#line 3157 "cplus.met"
#line 3158 "cplus.met"
        case ETOI : 
#line 3158 "cplus.met"
            tokenAhead = 0 ;
#line 3158 "cplus.met"
            CommTerm();
#line 3158 "cplus.met"
#line 3158 "cplus.met"
            {
#line 3158 "cplus.met"
                PPTREE _ptTree0=0;
#line 3158 "cplus.met"
                {
#line 3158 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3158 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3158 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*"));
#line 3158 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3158 "cplus.met"
                }
#line 3158 "cplus.met"
                _retValue =_ptTree0;
#line 3158 "cplus.met"
                goto operator_function_name_ret;
#line 3158 "cplus.met"
            }
#line 3158 "cplus.met"
            break;
#line 3158 "cplus.met"
#line 3159 "cplus.met"
        case META : 
#line 3159 "cplus.met"
        case SLAS : 
#line 3159 "cplus.met"
            tokenAhead = 0 ;
#line 3159 "cplus.met"
            CommTerm();
#line 3159 "cplus.met"
#line 3159 "cplus.met"
            {
#line 3159 "cplus.met"
                PPTREE _ptTree0=0;
#line 3159 "cplus.met"
                {
#line 3159 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3159 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3159 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/"));
#line 3159 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3159 "cplus.met"
                }
#line 3159 "cplus.met"
                _retValue =_ptTree0;
#line 3159 "cplus.met"
                goto operator_function_name_ret;
#line 3159 "cplus.met"
            }
#line 3159 "cplus.met"
            break;
#line 3159 "cplus.met"
#line 3160 "cplus.met"
        case POURC : 
#line 3160 "cplus.met"
            tokenAhead = 0 ;
#line 3160 "cplus.met"
            CommTerm();
#line 3160 "cplus.met"
#line 3160 "cplus.met"
            {
#line 3160 "cplus.met"
                PPTREE _ptTree0=0;
#line 3160 "cplus.met"
                {
#line 3160 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3160 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3160 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%"));
#line 3160 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3160 "cplus.met"
                }
#line 3160 "cplus.met"
                _retValue =_ptTree0;
#line 3160 "cplus.met"
                goto operator_function_name_ret;
#line 3160 "cplus.met"
            }
#line 3160 "cplus.met"
            break;
#line 3160 "cplus.met"
#line 3161 "cplus.met"
        case CHAP : 
#line 3161 "cplus.met"
            tokenAhead = 0 ;
#line 3161 "cplus.met"
            CommTerm();
#line 3161 "cplus.met"
#line 3161 "cplus.met"
            {
#line 3161 "cplus.met"
                PPTREE _ptTree0=0;
#line 3161 "cplus.met"
                {
#line 3161 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3161 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3161 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^"));
#line 3161 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3161 "cplus.met"
                }
#line 3161 "cplus.met"
                _retValue =_ptTree0;
#line 3161 "cplus.met"
                goto operator_function_name_ret;
#line 3161 "cplus.met"
            }
#line 3161 "cplus.met"
            break;
#line 3161 "cplus.met"
#line 3162 "cplus.met"
        case ETCO : 
#line 3162 "cplus.met"
            tokenAhead = 0 ;
#line 3162 "cplus.met"
            CommTerm();
#line 3162 "cplus.met"
#line 3162 "cplus.met"
            {
#line 3162 "cplus.met"
                PPTREE _ptTree0=0;
#line 3162 "cplus.met"
                {
#line 3162 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3162 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3162 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&"));
#line 3162 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3162 "cplus.met"
                }
#line 3162 "cplus.met"
                _retValue =_ptTree0;
#line 3162 "cplus.met"
                goto operator_function_name_ret;
#line 3162 "cplus.met"
            }
#line 3162 "cplus.met"
            break;
#line 3162 "cplus.met"
#line 3163 "cplus.met"
        case VBAR : 
#line 3163 "cplus.met"
            tokenAhead = 0 ;
#line 3163 "cplus.met"
            CommTerm();
#line 3163 "cplus.met"
#line 3163 "cplus.met"
            {
#line 3163 "cplus.met"
                PPTREE _ptTree0=0;
#line 3163 "cplus.met"
                {
#line 3163 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3163 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3163 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|"));
#line 3163 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3163 "cplus.met"
                }
#line 3163 "cplus.met"
                _retValue =_ptTree0;
#line 3163 "cplus.met"
                goto operator_function_name_ret;
#line 3163 "cplus.met"
            }
#line 3163 "cplus.met"
            break;
#line 3163 "cplus.met"
#line 3164 "cplus.met"
        case TILD : 
#line 3164 "cplus.met"
            tokenAhead = 0 ;
#line 3164 "cplus.met"
            CommTerm();
#line 3164 "cplus.met"
#line 3164 "cplus.met"
            {
#line 3164 "cplus.met"
                PPTREE _ptTree0=0;
#line 3164 "cplus.met"
                {
#line 3164 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3164 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3164 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("~"));
#line 3164 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3164 "cplus.met"
                }
#line 3164 "cplus.met"
                _retValue =_ptTree0;
#line 3164 "cplus.met"
                goto operator_function_name_ret;
#line 3164 "cplus.met"
            }
#line 3164 "cplus.met"
            break;
#line 3164 "cplus.met"
#line 3165 "cplus.met"
        case EXCL : 
#line 3165 "cplus.met"
            tokenAhead = 0 ;
#line 3165 "cplus.met"
            CommTerm();
#line 3165 "cplus.met"
#line 3165 "cplus.met"
            {
#line 3165 "cplus.met"
                PPTREE _ptTree0=0;
#line 3165 "cplus.met"
                {
#line 3165 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3165 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3165 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!"));
#line 3165 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3165 "cplus.met"
                }
#line 3165 "cplus.met"
                _retValue =_ptTree0;
#line 3165 "cplus.met"
                goto operator_function_name_ret;
#line 3165 "cplus.met"
            }
#line 3165 "cplus.met"
            break;
#line 3165 "cplus.met"
#line 3166 "cplus.met"
        case EGAL : 
#line 3166 "cplus.met"
            tokenAhead = 0 ;
#line 3166 "cplus.met"
            CommTerm();
#line 3166 "cplus.met"
#line 3166 "cplus.met"
            {
#line 3166 "cplus.met"
                PPTREE _ptTree0=0;
#line 3166 "cplus.met"
                {
#line 3166 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3166 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3166 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("="));
#line 3166 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3166 "cplus.met"
                }
#line 3166 "cplus.met"
                _retValue =_ptTree0;
#line 3166 "cplus.met"
                goto operator_function_name_ret;
#line 3166 "cplus.met"
            }
#line 3166 "cplus.met"
            break;
#line 3166 "cplus.met"
#line 3167 "cplus.met"
        case SUPE : 
#line 3167 "cplus.met"
            tokenAhead = 0 ;
#line 3167 "cplus.met"
            CommTerm();
#line 3167 "cplus.met"
#line 3167 "cplus.met"
            {
#line 3167 "cplus.met"
                PPTREE _ptTree0=0;
#line 3167 "cplus.met"
                {
#line 3167 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3167 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3167 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString (">"));
#line 3167 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3167 "cplus.met"
                }
#line 3167 "cplus.met"
                _retValue =_ptTree0;
#line 3167 "cplus.met"
                goto operator_function_name_ret;
#line 3167 "cplus.met"
            }
#line 3167 "cplus.met"
            break;
#line 3167 "cplus.met"
#line 3168 "cplus.met"
        case INFE : 
#line 3168 "cplus.met"
            tokenAhead = 0 ;
#line 3168 "cplus.met"
            CommTerm();
#line 3168 "cplus.met"
#line 3168 "cplus.met"
            {
#line 3168 "cplus.met"
                PPTREE _ptTree0=0;
#line 3168 "cplus.met"
                {
#line 3168 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3168 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3168 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<"));
#line 3168 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3168 "cplus.met"
                }
#line 3168 "cplus.met"
                _retValue =_ptTree0;
#line 3168 "cplus.met"
                goto operator_function_name_ret;
#line 3168 "cplus.met"
            }
#line 3168 "cplus.met"
            break;
#line 3168 "cplus.met"
#line 3169 "cplus.met"
        case PLUSEGAL : 
#line 3169 "cplus.met"
            tokenAhead = 0 ;
#line 3169 "cplus.met"
            CommTerm();
#line 3169 "cplus.met"
#line 3169 "cplus.met"
            {
#line 3169 "cplus.met"
                PPTREE _ptTree0=0;
#line 3169 "cplus.met"
                {
#line 3169 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3169 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3169 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("+="));
#line 3169 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3169 "cplus.met"
                }
#line 3169 "cplus.met"
                _retValue =_ptTree0;
#line 3169 "cplus.met"
                goto operator_function_name_ret;
#line 3169 "cplus.met"
            }
#line 3169 "cplus.met"
            break;
#line 3169 "cplus.met"
#line 3170 "cplus.met"
        case TIREEGAL : 
#line 3170 "cplus.met"
            tokenAhead = 0 ;
#line 3170 "cplus.met"
            CommTerm();
#line 3170 "cplus.met"
#line 3170 "cplus.met"
            {
#line 3170 "cplus.met"
                PPTREE _ptTree0=0;
#line 3170 "cplus.met"
                {
#line 3170 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3170 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3170 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("-="));
#line 3170 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3170 "cplus.met"
                }
#line 3170 "cplus.met"
                _retValue =_ptTree0;
#line 3170 "cplus.met"
                goto operator_function_name_ret;
#line 3170 "cplus.met"
            }
#line 3170 "cplus.met"
            break;
#line 3170 "cplus.met"
#line 3171 "cplus.met"
        case ETOIEGAL : 
#line 3171 "cplus.met"
            tokenAhead = 0 ;
#line 3171 "cplus.met"
            CommTerm();
#line 3171 "cplus.met"
#line 3171 "cplus.met"
            {
#line 3171 "cplus.met"
                PPTREE _ptTree0=0;
#line 3171 "cplus.met"
                {
#line 3171 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3171 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3171 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("*="));
#line 3171 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3171 "cplus.met"
                }
#line 3171 "cplus.met"
                _retValue =_ptTree0;
#line 3171 "cplus.met"
                goto operator_function_name_ret;
#line 3171 "cplus.met"
            }
#line 3171 "cplus.met"
            break;
#line 3171 "cplus.met"
#line 3172 "cplus.met"
        case SLASEGAL : 
#line 3172 "cplus.met"
            tokenAhead = 0 ;
#line 3172 "cplus.met"
            CommTerm();
#line 3172 "cplus.met"
#line 3172 "cplus.met"
            {
#line 3172 "cplus.met"
                PPTREE _ptTree0=0;
#line 3172 "cplus.met"
                {
#line 3172 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3172 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3172 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("/="));
#line 3172 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3172 "cplus.met"
                }
#line 3172 "cplus.met"
                _retValue =_ptTree0;
#line 3172 "cplus.met"
                goto operator_function_name_ret;
#line 3172 "cplus.met"
            }
#line 3172 "cplus.met"
            break;
#line 3172 "cplus.met"
#line 3173 "cplus.met"
        case POURCEGAL : 
#line 3173 "cplus.met"
            tokenAhead = 0 ;
#line 3173 "cplus.met"
            CommTerm();
#line 3173 "cplus.met"
#line 3173 "cplus.met"
            {
#line 3173 "cplus.met"
                PPTREE _ptTree0=0;
#line 3173 "cplus.met"
                {
#line 3173 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3173 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3173 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("%="));
#line 3173 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3173 "cplus.met"
                }
#line 3173 "cplus.met"
                _retValue =_ptTree0;
#line 3173 "cplus.met"
                goto operator_function_name_ret;
#line 3173 "cplus.met"
            }
#line 3173 "cplus.met"
            break;
#line 3173 "cplus.met"
#line 3174 "cplus.met"
        case CHAPEGAL : 
#line 3174 "cplus.met"
            tokenAhead = 0 ;
#line 3174 "cplus.met"
            CommTerm();
#line 3174 "cplus.met"
#line 3174 "cplus.met"
            {
#line 3174 "cplus.met"
                PPTREE _ptTree0=0;
#line 3174 "cplus.met"
                {
#line 3174 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3174 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3174 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("^="));
#line 3174 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3174 "cplus.met"
                }
#line 3174 "cplus.met"
                _retValue =_ptTree0;
#line 3174 "cplus.met"
                goto operator_function_name_ret;
#line 3174 "cplus.met"
            }
#line 3174 "cplus.met"
            break;
#line 3174 "cplus.met"
#line 3175 "cplus.met"
        case ETCOEGAL : 
#line 3175 "cplus.met"
            tokenAhead = 0 ;
#line 3175 "cplus.met"
            CommTerm();
#line 3175 "cplus.met"
#line 3175 "cplus.met"
            {
#line 3175 "cplus.met"
                PPTREE _ptTree0=0;
#line 3175 "cplus.met"
                {
#line 3175 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3175 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3175 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("&="));
#line 3175 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3175 "cplus.met"
                }
#line 3175 "cplus.met"
                _retValue =_ptTree0;
#line 3175 "cplus.met"
                goto operator_function_name_ret;
#line 3175 "cplus.met"
            }
#line 3175 "cplus.met"
            break;
#line 3175 "cplus.met"
#line 3176 "cplus.met"
        case VBAREGAL : 
#line 3176 "cplus.met"
            tokenAhead = 0 ;
#line 3176 "cplus.met"
            CommTerm();
#line 3176 "cplus.met"
#line 3176 "cplus.met"
            {
#line 3176 "cplus.met"
                PPTREE _ptTree0=0;
#line 3176 "cplus.met"
                {
#line 3176 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3176 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3176 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("|="));
#line 3176 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3176 "cplus.met"
                }
#line 3176 "cplus.met"
                _retValue =_ptTree0;
#line 3176 "cplus.met"
                goto operator_function_name_ret;
#line 3176 "cplus.met"
            }
#line 3176 "cplus.met"
            break;
#line 3176 "cplus.met"
#line 3177 "cplus.met"
        case EXCLEGAL : 
#line 3177 "cplus.met"
            tokenAhead = 0 ;
#line 3177 "cplus.met"
            CommTerm();
#line 3177 "cplus.met"
#line 3177 "cplus.met"
            {
#line 3177 "cplus.met"
                PPTREE _ptTree0=0;
#line 3177 "cplus.met"
                {
#line 3177 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3177 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3177 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("!="));
#line 3177 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3177 "cplus.met"
                }
#line 3177 "cplus.met"
                _retValue =_ptTree0;
#line 3177 "cplus.met"
                goto operator_function_name_ret;
#line 3177 "cplus.met"
            }
#line 3177 "cplus.met"
            break;
#line 3177 "cplus.met"
#line 3178 "cplus.met"
        case EGALEGAL : 
#line 3178 "cplus.met"
            tokenAhead = 0 ;
#line 3178 "cplus.met"
            CommTerm();
#line 3178 "cplus.met"
#line 3178 "cplus.met"
            {
#line 3178 "cplus.met"
                PPTREE _ptTree0=0;
#line 3178 "cplus.met"
                {
#line 3178 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3178 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3178 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("=="));
#line 3178 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3178 "cplus.met"
                }
#line 3178 "cplus.met"
                _retValue =_ptTree0;
#line 3178 "cplus.met"
                goto operator_function_name_ret;
#line 3178 "cplus.met"
            }
#line 3178 "cplus.met"
            break;
#line 3178 "cplus.met"
#line 3179 "cplus.met"
        case INFEEGAL : 
#line 3179 "cplus.met"
            tokenAhead = 0 ;
#line 3179 "cplus.met"
            CommTerm();
#line 3179 "cplus.met"
#line 3179 "cplus.met"
            {
#line 3179 "cplus.met"
                PPTREE _ptTree0=0;
#line 3179 "cplus.met"
                {
#line 3179 "cplus.met"
                    PPTREE _ptRes1=0;
#line 3179 "cplus.met"
                    _ptRes1= MakeTree(OPERATOR, 1);
#line 3179 "cplus.met"
                    ReplaceTree(_ptRes1, 1, MakeString ("<="));
#line 3179 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3179 "cplus.met"
                }
#line 3179 "cplus.met"
                _retValue =_ptTree0;
#line 3179 "cplus.met"
                goto operator_function_name_ret;
#line 3179 "cplus.met"
            }
#line 3179 "cplus.met"
            break;
#line 3179 "cplus.met"
#line 3180 "cplus.met"
        case SUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">="));
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
        case INFEINFE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<"));
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
        case SUPESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>"));
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
        case INFEINFEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("<<="));
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
        case SUPESUPEEGAL : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (">>="));
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
        case ETCOETCO : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("&&"));
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
        case VBARVBAR : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("||"));
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
        case PLUSPLUS : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("++"));
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
        case TIRETIRE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("--"));
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
        case VIRG : 
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
                    ReplaceTree(_ptRes1, 1, MakeString (","));
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
        case TIRESUPE : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->"));
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
        case TIRESUPEETOI : 
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
                    ReplaceTree(_ptRes1, 1, MakeString ("->*"));
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
#line 3194 "cplus.met"
        case POUV : 
#line 3194 "cplus.met"
            tokenAhead = 0 ;
#line 3194 "cplus.met"
            CommTerm();
#line 3194 "cplus.met"
#line 3193 "cplus.met"
#line 3194 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3194 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3194 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,")")
#line 3194 "cplus.met"
            } else {
#line 3194 "cplus.met"
                tokenAhead = 0 ;
#line 3194 "cplus.met"
            }
#line 3194 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("()"));
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
#line 3195 "cplus.met"
            break;
#line 3195 "cplus.met"
#line 3199 "cplus.met"
        case COUV : 
#line 3199 "cplus.met"
            tokenAhead = 0 ;
#line 3199 "cplus.met"
            CommTerm();
#line 3199 "cplus.met"
#line 3198 "cplus.met"
#line 3199 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3199 "cplus.met"
            if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 3199 "cplus.met"
                MulFreeTree(3,list,retTree,valTree);
                TOKEN_EXIT(operator_function_name_exit,"]")
#line 3199 "cplus.met"
            } else {
#line 3199 "cplus.met"
                tokenAhead = 0 ;
#line 3199 "cplus.met"
            }
#line 3199 "cplus.met"
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
                    ReplaceTree(_ptRes1, 1, MakeString ("[]"));
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
#line 3200 "cplus.met"
            break;
#line 3200 "cplus.met"
#line 3200 "cplus.met"
        default : 
#line 3200 "cplus.met"
#line 3200 "cplus.met"
            break;
#line 3200 "cplus.met"
    }
#line 3200 "cplus.met"
#line 3204 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(const_or_volatile), 35, cplus)){
#line 3204 "cplus.met"
#line 3205 "cplus.met"
        {
#line 3205 "cplus.met"
            PPTREE _ptRes0=0;
#line 3205 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3205 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 3205 "cplus.met"
            retTree=_ptRes0;
#line 3205 "cplus.met"
        }
#line 3205 "cplus.met"
    } else {
#line 3205 "cplus.met"
#line 3207 "cplus.met"
        {
#line 3207 "cplus.met"
            PPTREE _ptRes0=0;
#line 3207 "cplus.met"
            _ptRes0= MakeTree(FOR_DECLARATION, 3);
#line 3207 "cplus.met"
            retTree=_ptRes0;
#line 3207 "cplus.met"
        }
#line 3207 "cplus.met"
    }
#line 3207 "cplus.met"
#line 3208 "cplus.met"
    {
#line 3208 "cplus.met"
        PPTREE _ptTree0=0;
#line 3208 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 154, cplus))== (PPTREE) -1 ) {
#line 3208 "cplus.met"
            MulFreeTree(4,_ptTree0,list,retTree,valTree);
            PROG_EXIT(operator_function_name_exit,"operator_function_name")
#line 3208 "cplus.met"
        }
#line 3208 "cplus.met"
        ReplaceTree(retTree , 2 , _ptTree0);
#line 3208 "cplus.met"
    }
#line 3208 "cplus.met"
#line 3209 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(ptr_operator), 121, cplus)){
#line 3209 "cplus.met"
#line 3210 "cplus.met"
#line 3211 "cplus.met"
        list =AddList(list ,valTree );
#line 3211 "cplus.met"
#line 3212 "cplus.met"
        ReplaceTree(retTree ,3 ,list );
#line 3212 "cplus.met"
#line 3212 "cplus.met"
#line 3212 "cplus.met"
    }
#line 3212 "cplus.met"
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
            ReplaceTree(_ptRes1, 1, retTree );
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
#line 3214 "cplus.met"
#line 3214 "cplus.met"

#line 3215 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3215 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3215 "cplus.met"
return((PPTREE) 0);
#line 3215 "cplus.met"

#line 3215 "cplus.met"
operator_function_name_exit :
#line 3215 "cplus.met"

#line 3215 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_EXIT,(PPTREE)0);
#line 3215 "cplus.met"
    _funcLevel--;
#line 3215 "cplus.met"
    return((PPTREE) -1) ;
#line 3215 "cplus.met"

#line 3215 "cplus.met"
operator_function_name_ret :
#line 3215 "cplus.met"
    
#line 3215 "cplus.met"
    _Debug = TRACE_RULE("operator_function_name",TRACE_RETURN,_retValue);
#line 3215 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3215 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3215 "cplus.met"
    return _retValue ;
#line 3215 "cplus.met"
}
#line 3215 "cplus.met"

#line 3215 "cplus.met"
