/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2857 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 2857 "cplus.met"
{
#line 2857 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2857 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2857 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2857 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 2857 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2857 "cplus.met"
#line 2858 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2858 "cplus.met"
#line 2859 "cplus.met"
        {
#line 2859 "cplus.met"
            PPTREE _ptTree0=0;
#line 2859 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 124, cplus))== (PPTREE) -1 ) {
#line 2859 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 2859 "cplus.met"
            }
#line 2859 "cplus.met"
            _retValue =_ptTree0;
#line 2859 "cplus.met"
            goto simple_type_name_ret;
#line 2859 "cplus.met"
        }
#line 2859 "cplus.met"
    } else {
#line 2859 "cplus.met"
#line 2861 "cplus.met"
        
#line 2861 "cplus.met"
        LEX_EXIT ("",0);
#line 2861 "cplus.met"
        goto simple_type_name_exit;
#line 2861 "cplus.met"
    }
#line 2861 "cplus.met"
#line 2861 "cplus.met"
#line 2861 "cplus.met"

#line 2862 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2862 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2862 "cplus.met"
return((PPTREE) 0);
#line 2862 "cplus.met"

#line 2862 "cplus.met"
simple_type_name_exit :
#line 2862 "cplus.met"

#line 2862 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 2862 "cplus.met"
    _funcLevel--;
#line 2862 "cplus.met"
    return((PPTREE) -1) ;
#line 2862 "cplus.met"

#line 2862 "cplus.met"
simple_type_name_ret :
#line 2862 "cplus.met"
    
#line 2862 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 2862 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2862 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2862 "cplus.met"
    return _retValue ;
#line 2862 "cplus.met"
}
#line 2862 "cplus.met"

#line 2862 "cplus.met"
#line 2723 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2723 "cplus.met"
{
#line 2723 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2723 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2723 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2723 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2723 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2723 "cplus.met"
#line 2723 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2723 "cplus.met"
#line 2725 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2725 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2725 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2725 "cplus.met"
    } else {
#line 2725 "cplus.met"
        tokenAhead = 0 ;
#line 2725 "cplus.met"
    }
#line 2725 "cplus.met"
#line 2726 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 2726 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2726 "cplus.met"
    }
#line 2726 "cplus.met"
#line 2727 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2727 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2727 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2727 "cplus.met"
    } else {
#line 2727 "cplus.met"
        tokenAhead = 0 ;
#line 2727 "cplus.met"
    }
#line 2727 "cplus.met"
#line 2728 "cplus.met"
    {
#line 2728 "cplus.met"
        _retValue = expTree ;
#line 2728 "cplus.met"
        goto sizeof_type_ret;
#line 2728 "cplus.met"
        
#line 2728 "cplus.met"
    }
#line 2728 "cplus.met"
#line 2728 "cplus.met"
#line 2728 "cplus.met"

#line 2729 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2729 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2729 "cplus.met"
return((PPTREE) 0);
#line 2729 "cplus.met"

#line 2729 "cplus.met"
sizeof_type_exit :
#line 2729 "cplus.met"

#line 2729 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2729 "cplus.met"
    _funcLevel--;
#line 2729 "cplus.met"
    return((PPTREE) -1) ;
#line 2729 "cplus.met"

#line 2729 "cplus.met"
sizeof_type_ret :
#line 2729 "cplus.met"
    
#line 2729 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2729 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2729 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2729 "cplus.met"
    return _retValue ;
#line 2729 "cplus.met"
}
#line 2729 "cplus.met"

#line 2729 "cplus.met"
#line 1002 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 1002 "cplus.met"
{
#line 1002 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1002 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1002 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1002 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 1002 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1002 "cplus.met"
#line 1002 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 1002 "cplus.met"
#line 1004 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 132, cplus)) || 
#line 1004 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 38, cplus))) || 
#line 1004 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 128, cplus))) || 
#line 1004 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 55, cplus))) || 
#line 1004 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 68, cplus))){
#line 1004 "cplus.met"
#line 1009 "cplus.met"
        {
#line 1009 "cplus.met"
            _retValue = stat ;
#line 1009 "cplus.met"
            goto stat_all_ret;
#line 1009 "cplus.met"
            
#line 1009 "cplus.met"
        }
#line 1009 "cplus.met"
    } else {
#line 1009 "cplus.met"
#line 1011 "cplus.met"
        {
#line 1011 "cplus.met"
            PPTREE _ptTree0=0;
#line 1011 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1011 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 1011 "cplus.met"
            }
#line 1011 "cplus.met"
            _retValue =_ptTree0;
#line 1011 "cplus.met"
            goto stat_all_ret;
#line 1011 "cplus.met"
        }
#line 1011 "cplus.met"
    }
#line 1011 "cplus.met"
#line 1011 "cplus.met"
#line 1011 "cplus.met"

#line 1012 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1012 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1012 "cplus.met"
return((PPTREE) 0);
#line 1012 "cplus.met"

#line 1012 "cplus.met"
stat_all_exit :
#line 1012 "cplus.met"

#line 1012 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 1012 "cplus.met"
    _funcLevel--;
#line 1012 "cplus.met"
    return((PPTREE) -1) ;
#line 1012 "cplus.met"

#line 1012 "cplus.met"
stat_all_ret :
#line 1012 "cplus.met"
    
#line 1012 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 1012 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1012 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1012 "cplus.met"
    return _retValue ;
#line 1012 "cplus.met"
}
#line 1012 "cplus.met"

#line 1012 "cplus.met"
#line 1179 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1179 "cplus.met"
{
#line 1179 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1179 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1179 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1179 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1179 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1179 "cplus.met"
#line 1179 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1179 "cplus.met"
#line 1181 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 50, cplus)){
#line 1181 "cplus.met"
#line 1182 "cplus.met"
        {
#line 1182 "cplus.met"
            _retValue = retTree ;
#line 1182 "cplus.met"
            goto stat_dir_ret;
#line 1182 "cplus.met"
            
#line 1182 "cplus.met"
        }
#line 1182 "cplus.met"
    }
#line 1182 "cplus.met"
#line 1183 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1183 "cplus.met"
    switch( lexEl.Value) {
#line 1183 "cplus.met"
#line 1184 "cplus.met"
        case META : 
#line 1184 "cplus.met"
        case IF_DIR : 
#line 1184 "cplus.met"
            tokenAhead = 0 ;
#line 1184 "cplus.met"
            CommTerm();
#line 1184 "cplus.met"
#line 1184 "cplus.met"
            {
#line 1184 "cplus.met"
                PPTREE _ptTree0=0;
#line 1184 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 1184 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1184 "cplus.met"
                }
#line 1184 "cplus.met"
                _retValue =_ptTree0;
#line 1184 "cplus.met"
                goto stat_dir_ret;
#line 1184 "cplus.met"
            }
#line 1184 "cplus.met"
            break;
#line 1184 "cplus.met"
#line 1185 "cplus.met"
        case IFDEF_DIR : 
#line 1185 "cplus.met"
#line 1185 "cplus.met"
            {
#line 1185 "cplus.met"
                PPTREE _ptTree0=0;
#line 1185 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1185 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1185 "cplus.met"
                }
#line 1185 "cplus.met"
                _retValue =_ptTree0;
#line 1185 "cplus.met"
                goto stat_dir_ret;
#line 1185 "cplus.met"
            }
#line 1185 "cplus.met"
            break;
#line 1185 "cplus.met"
#line 1186 "cplus.met"
        case IFNDEF_DIR : 
#line 1186 "cplus.met"
#line 1186 "cplus.met"
            {
#line 1186 "cplus.met"
                PPTREE _ptTree0=0;
#line 1186 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1186 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1186 "cplus.met"
                }
#line 1186 "cplus.met"
                _retValue =_ptTree0;
#line 1186 "cplus.met"
                goto stat_dir_ret;
#line 1186 "cplus.met"
            }
#line 1186 "cplus.met"
            break;
#line 1186 "cplus.met"
        default :
#line 1186 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1186 "cplus.met"
            break;
#line 1186 "cplus.met"
    }
#line 1186 "cplus.met"
#line 1186 "cplus.met"
#line 1187 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1187 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1187 "cplus.met"
return((PPTREE) 0);
#line 1187 "cplus.met"

#line 1187 "cplus.met"
stat_dir_exit :
#line 1187 "cplus.met"

#line 1187 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1187 "cplus.met"
    _funcLevel--;
#line 1187 "cplus.met"
    return((PPTREE) -1) ;
#line 1187 "cplus.met"

#line 1187 "cplus.met"
stat_dir_ret :
#line 1187 "cplus.met"
    
#line 1187 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1187 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1187 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1187 "cplus.met"
    return _retValue ;
#line 1187 "cplus.met"
}
#line 1187 "cplus.met"

#line 1187 "cplus.met"
#line 3472 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3472 "cplus.met"
{
#line 3472 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3472 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3472 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3472 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3472 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3472 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3472 "cplus.met"
#line 3473 "cplus.met"
    {
#line 3473 "cplus.met"
        switchContext = 1 ;
#line 3473 "cplus.met"
#line 3474 "cplus.met"
        {
#line 3474 "cplus.met"
            PPTREE _ptTree0=0;
#line 3474 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 3474 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3474 "cplus.met"
            }
#line 3474 "cplus.met"
            _retValue =_ptTree0;
#line 3474 "cplus.met"
            goto stat_dir_switch_ret;
#line 3474 "cplus.met"
        }
#line 3474 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3474 "cplus.met"
    }
#line 3474 "cplus.met"
#line 3474 "cplus.met"
#line 3474 "cplus.met"

#line 3475 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3475 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3475 "cplus.met"
switchContext =  _oldswitchContext;
#line 3475 "cplus.met"
return((PPTREE) 0);
#line 3475 "cplus.met"

#line 3475 "cplus.met"
stat_dir_switch_exit :
#line 3475 "cplus.met"

#line 3475 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3475 "cplus.met"
    _funcLevel--;
#line 3475 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3475 "cplus.met"
    return((PPTREE) -1) ;
#line 3475 "cplus.met"

#line 3475 "cplus.met"
stat_dir_switch_ret :
#line 3475 "cplus.met"
    
#line 3475 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3475 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3475 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3475 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3475 "cplus.met"
    return _retValue ;
#line 3475 "cplus.met"
}
#line 3475 "cplus.met"

#line 3475 "cplus.met"
#line 1078 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1078 "cplus.met"
{
#line 1078 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1078 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1078 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1078 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1078 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1078 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1078 "cplus.met"
#line 1078 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1078 "cplus.met"
#line 1078 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1078 "cplus.met"
#line 1080 "cplus.met"
    {
#line 1080 "cplus.met"
        keepCarriage = 1 ;
#line 1080 "cplus.met"
#line 1081 "cplus.met"
#line 1082 "cplus.met"
        {
#line 1082 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1082 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1082 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1082 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1082 "cplus.met"
            }
#line 1082 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1082 "cplus.met"
            retTree=_ptRes0;
#line 1082 "cplus.met"
        }
#line 1082 "cplus.met"
#line 1083 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1083 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1083 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1083 "cplus.met"
        } else {
#line 1083 "cplus.met"
            tokenAhead = 0 ;
#line 1083 "cplus.met"
        }
#line 1083 "cplus.met"
#line 1083 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1083 "cplus.met"
    }
#line 1083 "cplus.met"
#line 1083 "cplus.met"
    _addlist1 = list ;
#line 1083 "cplus.met"
#line 1085 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1085 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1085 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1085 "cplus.met"
#line 1086 "cplus.met"
#line 1086 "cplus.met"
        {
#line 1086 "cplus.met"
            PPTREE _ptTree0=0;
#line 1086 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1086 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1086 "cplus.met"
            }
#line 1086 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1086 "cplus.met"
        }
#line 1086 "cplus.met"
#line 1086 "cplus.met"
        if (list){
#line 1086 "cplus.met"
#line 1086 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1086 "cplus.met"
        } else {
#line 1086 "cplus.met"
#line 1086 "cplus.met"
            list = _addlist1 ;
#line 1086 "cplus.met"
        }
#line 1086 "cplus.met"
    } 
#line 1086 "cplus.met"
#line 1087 "cplus.met"
    {
#line 1087 "cplus.met"
        PPTREE _ptTree0=0;
#line 1087 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1087 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1087 "cplus.met"
        }
#line 1087 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1087 "cplus.met"
    }
#line 1087 "cplus.met"
#line 1088 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1088 "cplus.met"
#line 1089 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1089 "cplus.met"
    switch( lexEl.Value) {
#line 1089 "cplus.met"
#line 1090 "cplus.met"
        case META : 
#line 1090 "cplus.met"
        case ELSE_DIR : 
#line 1090 "cplus.met"
            tokenAhead = 0 ;
#line 1090 "cplus.met"
            CommTerm();
#line 1090 "cplus.met"
#line 1091 "cplus.met"
#line 1091 "cplus.met"
            _addlist2 = list2 ;
#line 1091 "cplus.met"
#line 1092 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1092 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1092 "cplus.met"
#line 1093 "cplus.met"
#line 1093 "cplus.met"
                {
#line 1093 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1093 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1093 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1093 "cplus.met"
                    }
#line 1093 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1093 "cplus.met"
                }
#line 1093 "cplus.met"
#line 1093 "cplus.met"
                if (list2){
#line 1093 "cplus.met"
#line 1093 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1093 "cplus.met"
                } else {
#line 1093 "cplus.met"
#line 1093 "cplus.met"
                    list2 = _addlist2 ;
#line 1093 "cplus.met"
                }
#line 1093 "cplus.met"
            } 
#line 1093 "cplus.met"
#line 1094 "cplus.met"
            {
#line 1094 "cplus.met"
                PPTREE _ptTree0=0;
#line 1094 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1094 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1094 "cplus.met"
                }
#line 1094 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1094 "cplus.met"
            }
#line 1094 "cplus.met"
#line 1095 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1095 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1095 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1095 "cplus.met"
            } else {
#line 1095 "cplus.met"
                tokenAhead = 0 ;
#line 1095 "cplus.met"
            }
#line 1095 "cplus.met"
#line 1096 "cplus.met"
            {
#line 1096 "cplus.met"
                PPTREE _ptTree0=0;
#line 1096 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1096 "cplus.met"
                _retValue =_ptTree0;
#line 1096 "cplus.met"
                goto stat_if_dir_ret;
#line 1096 "cplus.met"
            }
#line 1096 "cplus.met"
#line 1096 "cplus.met"
            break;
#line 1096 "cplus.met"
#line 1098 "cplus.met"
        case ELIF_DIR : 
#line 1098 "cplus.met"
            tokenAhead = 0 ;
#line 1098 "cplus.met"
            CommTerm();
#line 1098 "cplus.met"
#line 1098 "cplus.met"
            {
#line 1098 "cplus.met"
                PPTREE _ptTree0=0;
#line 1098 "cplus.met"
                {
#line 1098 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1098 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 1098 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1098 "cplus.met"
                    }
#line 1098 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1098 "cplus.met"
                }
#line 1098 "cplus.met"
                _retValue =_ptTree0;
#line 1098 "cplus.met"
                goto stat_if_dir_ret;
#line 1098 "cplus.met"
            }
#line 1098 "cplus.met"
            break;
#line 1098 "cplus.met"
#line 1099 "cplus.met"
        case ENDIF_DIR : 
#line 1099 "cplus.met"
            tokenAhead = 0 ;
#line 1099 "cplus.met"
            CommTerm();
#line 1099 "cplus.met"
#line 1099 "cplus.met"
            {
#line 1099 "cplus.met"
                _retValue = retTree ;
#line 1099 "cplus.met"
                goto stat_if_dir_ret;
#line 1099 "cplus.met"
                
#line 1099 "cplus.met"
            }
#line 1099 "cplus.met"
            break;
#line 1099 "cplus.met"
        default :
#line 1099 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1099 "cplus.met"
            break;
#line 1099 "cplus.met"
    }
#line 1099 "cplus.met"
#line 1099 "cplus.met"
#line 1100 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1100 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1100 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1100 "cplus.met"
return((PPTREE) 0);
#line 1100 "cplus.met"

#line 1100 "cplus.met"
stat_if_dir_exit :
#line 1100 "cplus.met"

#line 1100 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1100 "cplus.met"
    _funcLevel--;
#line 1100 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1100 "cplus.met"
    return((PPTREE) -1) ;
#line 1100 "cplus.met"

#line 1100 "cplus.met"
stat_if_dir_ret :
#line 1100 "cplus.met"
    
#line 1100 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1100 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1100 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1100 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1100 "cplus.met"
    return _retValue ;
#line 1100 "cplus.met"
}
#line 1100 "cplus.met"

#line 1100 "cplus.met"
#line 1141 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1141 "cplus.met"
{
#line 1141 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1141 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1141 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1141 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1141 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1141 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1141 "cplus.met"
#line 1141 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1141 "cplus.met"
#line 1141 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1141 "cplus.met"
#line 1143 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1143 "cplus.met"
#line 1144 "cplus.met"
#line 1145 "cplus.met"
        {
#line 1145 "cplus.met"
            keepCarriage = 1 ;
#line 1145 "cplus.met"
#line 1146 "cplus.met"
#line 1147 "cplus.met"
            {
#line 1147 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1147 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1147 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1147 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1147 "cplus.met"
                }
#line 1147 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1147 "cplus.met"
                retTree=_ptRes0;
#line 1147 "cplus.met"
            }
#line 1147 "cplus.met"
#line 1148 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1148 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1148 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1148 "cplus.met"
            } else {
#line 1148 "cplus.met"
                tokenAhead = 0 ;
#line 1148 "cplus.met"
            }
#line 1148 "cplus.met"
#line 1148 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1148 "cplus.met"
        }
#line 1148 "cplus.met"
#line 1148 "cplus.met"
#line 1149 "cplus.met"
    } else {
#line 1149 "cplus.met"
#line 1152 "cplus.met"
#line 1153 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1153 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1153 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1153 "cplus.met"
        } else {
#line 1153 "cplus.met"
            tokenAhead = 0 ;
#line 1153 "cplus.met"
        }
#line 1153 "cplus.met"
#line 1154 "cplus.met"
        {
#line 1154 "cplus.met"
            keepCarriage = 1 ;
#line 1154 "cplus.met"
#line 1155 "cplus.met"
#line 1156 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 1156 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1156 "cplus.met"
            }
#line 1156 "cplus.met"
#line 1157 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1157 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1157 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1157 "cplus.met"
            } else {
#line 1157 "cplus.met"
                tokenAhead = 0 ;
#line 1157 "cplus.met"
            }
#line 1157 "cplus.met"
#line 1157 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1157 "cplus.met"
        }
#line 1157 "cplus.met"
#line 1159 "cplus.met"
        {
#line 1159 "cplus.met"
            PPTREE _ptRes0=0;
#line 1159 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1159 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1159 "cplus.met"
            retTree=_ptRes0;
#line 1159 "cplus.met"
        }
#line 1159 "cplus.met"
#line 1159 "cplus.met"
    }
#line 1159 "cplus.met"
#line 1159 "cplus.met"
    _addlist1 = list ;
#line 1159 "cplus.met"
#line 1161 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1161 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1161 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1161 "cplus.met"
#line 1162 "cplus.met"
#line 1162 "cplus.met"
        {
#line 1162 "cplus.met"
            PPTREE _ptTree0=0;
#line 1162 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1162 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1162 "cplus.met"
            }
#line 1162 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1162 "cplus.met"
        }
#line 1162 "cplus.met"
#line 1162 "cplus.met"
        if (list){
#line 1162 "cplus.met"
#line 1162 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1162 "cplus.met"
        } else {
#line 1162 "cplus.met"
#line 1162 "cplus.met"
            list = _addlist1 ;
#line 1162 "cplus.met"
        }
#line 1162 "cplus.met"
    } 
#line 1162 "cplus.met"
#line 1163 "cplus.met"
    {
#line 1163 "cplus.met"
        PPTREE _ptTree0=0;
#line 1163 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1163 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1163 "cplus.met"
        }
#line 1163 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1163 "cplus.met"
    }
#line 1163 "cplus.met"
#line 1164 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1164 "cplus.met"
#line 1165 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1165 "cplus.met"
    switch( lexEl.Value) {
#line 1165 "cplus.met"
#line 1166 "cplus.met"
        case META : 
#line 1166 "cplus.met"
        case ELSE_DIR : 
#line 1166 "cplus.met"
            tokenAhead = 0 ;
#line 1166 "cplus.met"
            CommTerm();
#line 1166 "cplus.met"
#line 1167 "cplus.met"
#line 1167 "cplus.met"
            _addlist2 = list2 ;
#line 1167 "cplus.met"
#line 1168 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1168 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1168 "cplus.met"
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                {
#line 1169 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1169 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 1169 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1169 "cplus.met"
                    }
#line 1169 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1169 "cplus.met"
                }
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                if (list2){
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1169 "cplus.met"
                } else {
#line 1169 "cplus.met"
#line 1169 "cplus.met"
                    list2 = _addlist2 ;
#line 1169 "cplus.met"
                }
#line 1169 "cplus.met"
            } 
#line 1169 "cplus.met"
#line 1170 "cplus.met"
            {
#line 1170 "cplus.met"
                PPTREE _ptTree0=0;
#line 1170 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 99, cplus))== (PPTREE) -1 ) {
#line 1170 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1170 "cplus.met"
                }
#line 1170 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1170 "cplus.met"
            }
#line 1170 "cplus.met"
#line 1171 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1171 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1171 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1171 "cplus.met"
            } else {
#line 1171 "cplus.met"
                tokenAhead = 0 ;
#line 1171 "cplus.met"
            }
#line 1171 "cplus.met"
#line 1172 "cplus.met"
            {
#line 1172 "cplus.met"
                PPTREE _ptTree0=0;
#line 1172 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1172 "cplus.met"
                _retValue =_ptTree0;
#line 1172 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1172 "cplus.met"
            }
#line 1172 "cplus.met"
#line 1172 "cplus.met"
            break;
#line 1172 "cplus.met"
#line 1174 "cplus.met"
        case ELIF_DIR : 
#line 1174 "cplus.met"
            tokenAhead = 0 ;
#line 1174 "cplus.met"
            CommTerm();
#line 1174 "cplus.met"
#line 1174 "cplus.met"
            {
#line 1174 "cplus.met"
                PPTREE _ptTree0=0;
#line 1174 "cplus.met"
                {
#line 1174 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1174 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 1174 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1174 "cplus.met"
                    }
#line 1174 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1174 "cplus.met"
                }
#line 1174 "cplus.met"
                _retValue =_ptTree0;
#line 1174 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1174 "cplus.met"
            }
#line 1174 "cplus.met"
            break;
#line 1174 "cplus.met"
#line 1175 "cplus.met"
        case ENDIF_DIR : 
#line 1175 "cplus.met"
            tokenAhead = 0 ;
#line 1175 "cplus.met"
            CommTerm();
#line 1175 "cplus.met"
#line 1175 "cplus.met"
            {
#line 1175 "cplus.met"
                _retValue = retTree ;
#line 1175 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1175 "cplus.met"
                
#line 1175 "cplus.met"
            }
#line 1175 "cplus.met"
            break;
#line 1175 "cplus.met"
        default :
#line 1175 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1175 "cplus.met"
            break;
#line 1175 "cplus.met"
    }
#line 1175 "cplus.met"
#line 1175 "cplus.met"
#line 1176 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1176 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1176 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1176 "cplus.met"
return((PPTREE) 0);
#line 1176 "cplus.met"

#line 1176 "cplus.met"
stat_ifdef_dir_exit :
#line 1176 "cplus.met"

#line 1176 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1176 "cplus.met"
    _funcLevel--;
#line 1176 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1176 "cplus.met"
    return((PPTREE) -1) ;
#line 1176 "cplus.met"

#line 1176 "cplus.met"
stat_ifdef_dir_ret :
#line 1176 "cplus.met"
    
#line 1176 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1176 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1176 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1176 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1176 "cplus.met"
    return _retValue ;
#line 1176 "cplus.met"
}
#line 1176 "cplus.met"

#line 1176 "cplus.met"
#line 3312 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3312 "cplus.met"
{
#line 3312 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3312 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3312 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3312 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3312 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3312 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3312 "cplus.met"
#line 3312 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3312 "cplus.met"
#line 3314 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3314 "cplus.met"
    switch( lexEl.Value) {
#line 3314 "cplus.met"
#line 3315 "cplus.met"
        case BREAK : 
#line 3315 "cplus.met"
            tokenAhead = 0 ;
#line 3315 "cplus.met"
            CommTerm();
#line 3315 "cplus.met"
#line 3316 "cplus.met"
#line 3317 "cplus.met"
            {
#line 3317 "cplus.met"
                PPTREE _ptRes0=0;
#line 3317 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3317 "cplus.met"
                statTree=_ptRes0;
#line 3317 "cplus.met"
            }
#line 3317 "cplus.met"
#line 3318 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3318 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3318 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3318 "cplus.met"
            } else {
#line 3318 "cplus.met"
                tokenAhead = 0 ;
#line 3318 "cplus.met"
            }
#line 3318 "cplus.met"
#line 3318 "cplus.met"
            break;
#line 3318 "cplus.met"
#line 3320 "cplus.met"
        case CONTINUE : 
#line 3320 "cplus.met"
            tokenAhead = 0 ;
#line 3320 "cplus.met"
            CommTerm();
#line 3320 "cplus.met"
#line 3321 "cplus.met"
#line 3322 "cplus.met"
            {
#line 3322 "cplus.met"
                PPTREE _ptRes0=0;
#line 3322 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3322 "cplus.met"
                statTree=_ptRes0;
#line 3322 "cplus.met"
            }
#line 3322 "cplus.met"
#line 3323 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3323 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3323 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3323 "cplus.met"
            } else {
#line 3323 "cplus.met"
                tokenAhead = 0 ;
#line 3323 "cplus.met"
            }
#line 3323 "cplus.met"
#line 3323 "cplus.met"
            break;
#line 3323 "cplus.met"
#line 3325 "cplus.met"
        case DO : 
#line 3325 "cplus.met"
            tokenAhead = 0 ;
#line 3325 "cplus.met"
            CommTerm();
#line 3325 "cplus.met"
#line 3326 "cplus.met"
#line 3327 "cplus.met"
            {
#line 3327 "cplus.met"
                switchContext = 0 ;
#line 3327 "cplus.met"
#line 3328 "cplus.met"
                {
#line 3328 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3328 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3328 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3328 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3328 "cplus.met"
                    }
#line 3328 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3328 "cplus.met"
                    statTree=_ptRes0;
#line 3328 "cplus.met"
                }
#line 3328 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3328 "cplus.met"
            }
#line 3328 "cplus.met"
#line 3329 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3329 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3329 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3329 "cplus.met"
            } else {
#line 3329 "cplus.met"
                tokenAhead = 0 ;
#line 3329 "cplus.met"
            }
#line 3329 "cplus.met"
#line 3330 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3330 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3330 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3330 "cplus.met"
            } else {
#line 3330 "cplus.met"
                tokenAhead = 0 ;
#line 3330 "cplus.met"
            }
#line 3330 "cplus.met"
#line 3331 "cplus.met"
            {
#line 3331 "cplus.met"
                PPTREE _ptTree0=0;
#line 3331 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3331 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3331 "cplus.met"
                }
#line 3331 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3331 "cplus.met"
            }
#line 3331 "cplus.met"
#line 3332 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3332 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3332 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3332 "cplus.met"
            } else {
#line 3332 "cplus.met"
                tokenAhead = 0 ;
#line 3332 "cplus.met"
            }
#line 3332 "cplus.met"
#line 3333 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3333 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3333 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3333 "cplus.met"
            } else {
#line 3333 "cplus.met"
                tokenAhead = 0 ;
#line 3333 "cplus.met"
            }
#line 3333 "cplus.met"
#line 3333 "cplus.met"
            break;
#line 3333 "cplus.met"
#line 3335 "cplus.met"
        case AOUV : 
#line 3335 "cplus.met"
#line 3335 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3335 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3335 "cplus.met"
            }
#line 3335 "cplus.met"
            break;
#line 3335 "cplus.met"
#line 3336 "cplus.met"
        case FOR : 
#line 3336 "cplus.met"
            tokenAhead = 0 ;
#line 3336 "cplus.met"
            CommTerm();
#line 3336 "cplus.met"
#line 3336 "cplus.met"
            {
#line 3336 "cplus.met"
                PPTREE _ptTree0=0;
#line 3336 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 72, cplus))== (PPTREE) -1 ) {
#line 3336 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3336 "cplus.met"
                }
#line 3336 "cplus.met"
                _retValue =_ptTree0;
#line 3336 "cplus.met"
                goto statement_ret;
#line 3336 "cplus.met"
            }
#line 3336 "cplus.met"
            break;
#line 3336 "cplus.met"
#line 3337 "cplus.met"
        case GOTO : 
#line 3337 "cplus.met"
            tokenAhead = 0 ;
#line 3337 "cplus.met"
            CommTerm();
#line 3337 "cplus.met"
#line 3338 "cplus.met"
#line 3339 "cplus.met"
            {
#line 3339 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3339 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3339 "cplus.met"
                {
#line 3339 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3339 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3339 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3339 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3339 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3339 "cplus.met"
                    } else {
#line 3339 "cplus.met"
                        tokenAhead = 0 ;
#line 3339 "cplus.met"
                    }
#line 3339 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3339 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3339 "cplus.met"
                }
#line 3339 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3339 "cplus.met"
                statTree=_ptRes0;
#line 3339 "cplus.met"
            }
#line 3339 "cplus.met"
#line 3340 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3340 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3340 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3340 "cplus.met"
            } else {
#line 3340 "cplus.met"
                tokenAhead = 0 ;
#line 3340 "cplus.met"
            }
#line 3340 "cplus.met"
#line 3340 "cplus.met"
            break;
#line 3340 "cplus.met"
#line 3342 "cplus.met"
        case IF : 
#line 3342 "cplus.met"
            tokenAhead = 0 ;
#line 3342 "cplus.met"
            CommTerm();
#line 3342 "cplus.met"
#line 3343 "cplus.met"
#line 3344 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3344 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3344 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3344 "cplus.met"
            } else {
#line 3344 "cplus.met"
                tokenAhead = 0 ;
#line 3344 "cplus.met"
            }
#line 3344 "cplus.met"
#line 3345 "cplus.met"
            {
#line 3345 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3345 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3345 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3345 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3345 "cplus.met"
                }
#line 3345 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3345 "cplus.met"
                statTree=_ptRes0;
#line 3345 "cplus.met"
            }
#line 3345 "cplus.met"
#line 3346 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3346 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3346 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3346 "cplus.met"
            } else {
#line 3346 "cplus.met"
                tokenAhead = 0 ;
#line 3346 "cplus.met"
            }
#line 3346 "cplus.met"
#line 3347 "cplus.met"
            {
#line 3347 "cplus.met"
                switchContext = 0 ;
#line 3347 "cplus.met"
#line 3348 "cplus.met"
                {
#line 3348 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3348 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3348 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3348 "cplus.met"
                    }
#line 3348 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3348 "cplus.met"
                }
#line 3348 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3348 "cplus.met"
            }
#line 3348 "cplus.met"
#line 3349 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3349 "cplus.met"
#line 3350 "cplus.met"
                {
#line 3350 "cplus.met"
                    switchContext = 0 ;
#line 3350 "cplus.met"
#line 3351 "cplus.met"
                    {
#line 3351 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3351 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3351 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3351 "cplus.met"
                        }
#line 3351 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3351 "cplus.met"
                    }
#line 3351 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3351 "cplus.met"
                }
#line 3351 "cplus.met"
            }
#line 3351 "cplus.met"
#line 3351 "cplus.met"
            break;
#line 3351 "cplus.met"
#line 3353 "cplus.met"
        case PVIR : 
#line 3353 "cplus.met"
            tokenAhead = 0 ;
#line 3353 "cplus.met"
            CommTerm();
#line 3353 "cplus.met"
#line 3353 "cplus.met"
            {
#line 3353 "cplus.met"
                PPTREE _ptRes0=0;
#line 3353 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3353 "cplus.met"
                statTree=_ptRes0;
#line 3353 "cplus.met"
            }
#line 3353 "cplus.met"
            break;
#line 3353 "cplus.met"
#line 3354 "cplus.met"
        case RETURN : 
#line 3354 "cplus.met"
            tokenAhead = 0 ;
#line 3354 "cplus.met"
            CommTerm();
#line 3354 "cplus.met"
#line 3355 "cplus.met"
#line 3356 "cplus.met"
            {
#line 3356 "cplus.met"
                PPTREE _ptRes0=0;
#line 3356 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3356 "cplus.met"
                statTree=_ptRes0;
#line 3356 "cplus.met"
            }
#line 3356 "cplus.met"
#line 3357 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 59, cplus)){
#line 3357 "cplus.met"
#line 3358 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3358 "cplus.met"
#line 3358 "cplus.met"
            }
#line 3358 "cplus.met"
#line 3359 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3359 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3359 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3359 "cplus.met"
            } else {
#line 3359 "cplus.met"
                tokenAhead = 0 ;
#line 3359 "cplus.met"
            }
#line 3359 "cplus.met"
#line 3359 "cplus.met"
            break;
#line 3359 "cplus.met"
#line 3361 "cplus.met"
        case SWITCH : 
#line 3361 "cplus.met"
            tokenAhead = 0 ;
#line 3361 "cplus.met"
            CommTerm();
#line 3361 "cplus.met"
#line 3362 "cplus.met"
#line 3363 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3363 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3363 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3363 "cplus.met"
            } else {
#line 3363 "cplus.met"
                tokenAhead = 0 ;
#line 3363 "cplus.met"
            }
#line 3363 "cplus.met"
#line 3364 "cplus.met"
            {
#line 3364 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3364 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3364 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3364 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3364 "cplus.met"
                }
#line 3364 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3364 "cplus.met"
                statTree=_ptRes0;
#line 3364 "cplus.met"
            }
#line 3364 "cplus.met"
#line 3365 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3365 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3365 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3365 "cplus.met"
            } else {
#line 3365 "cplus.met"
                tokenAhead = 0 ;
#line 3365 "cplus.met"
            }
#line 3365 "cplus.met"
#line 3366 "cplus.met"
            {
#line 3366 "cplus.met"
                switchContext = 0 ;
#line 3366 "cplus.met"
#line 3367 "cplus.met"
                {
#line 3367 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3367 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3367 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3367 "cplus.met"
                    }
#line 3367 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3367 "cplus.met"
                }
#line 3367 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3367 "cplus.met"
            }
#line 3367 "cplus.met"
#line 3367 "cplus.met"
            break;
#line 3367 "cplus.met"
#line 3369 "cplus.met"
        case WHILE : 
#line 3369 "cplus.met"
            tokenAhead = 0 ;
#line 3369 "cplus.met"
            CommTerm();
#line 3369 "cplus.met"
#line 3370 "cplus.met"
#line 3371 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3371 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3371 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3371 "cplus.met"
            } else {
#line 3371 "cplus.met"
                tokenAhead = 0 ;
#line 3371 "cplus.met"
            }
#line 3371 "cplus.met"
#line 3372 "cplus.met"
            {
#line 3372 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3372 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3372 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3372 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3372 "cplus.met"
                }
#line 3372 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3372 "cplus.met"
                statTree=_ptRes0;
#line 3372 "cplus.met"
            }
#line 3372 "cplus.met"
#line 3373 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3373 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3373 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3373 "cplus.met"
            } else {
#line 3373 "cplus.met"
                tokenAhead = 0 ;
#line 3373 "cplus.met"
            }
#line 3373 "cplus.met"
#line 3374 "cplus.met"
            {
#line 3374 "cplus.met"
                switchContext = 0 ;
#line 3374 "cplus.met"
#line 3375 "cplus.met"
                {
#line 3375 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3375 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3375 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3375 "cplus.met"
                    }
#line 3375 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3375 "cplus.met"
                }
#line 3375 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3375 "cplus.met"
            }
#line 3375 "cplus.met"
#line 3375 "cplus.met"
            break;
#line 3375 "cplus.met"
#line 3377 "cplus.met"
        case FORALLSONS : 
#line 3377 "cplus.met"
            tokenAhead = 0 ;
#line 3377 "cplus.met"
            CommTerm();
#line 3377 "cplus.met"
#line 3378 "cplus.met"
#line 3379 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3379 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3379 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3379 "cplus.met"
            } else {
#line 3379 "cplus.met"
                tokenAhead = 0 ;
#line 3379 "cplus.met"
            }
#line 3379 "cplus.met"
#line 3380 "cplus.met"
            {
#line 3380 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3380 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3380 "cplus.met"
                {
#line 3380 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3380 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3380 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3380 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3380 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3380 "cplus.met"
                    } else {
#line 3380 "cplus.met"
                        tokenAhead = 0 ;
#line 3380 "cplus.met"
                    }
#line 3380 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3380 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3380 "cplus.met"
                }
#line 3380 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3380 "cplus.met"
                statTree=_ptRes0;
#line 3380 "cplus.met"
            }
#line 3380 "cplus.met"
#line 3381 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3381 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3381 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3381 "cplus.met"
            } else {
#line 3381 "cplus.met"
                tokenAhead = 0 ;
#line 3381 "cplus.met"
            }
#line 3381 "cplus.met"
#line 3382 "cplus.met"
            {
#line 3382 "cplus.met"
                switchContext = 0 ;
#line 3382 "cplus.met"
#line 3383 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 132, cplus))){
#line 3383 "cplus.met"
#line 3384 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3384 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3384 "cplus.met"
                    }
#line 3384 "cplus.met"
                }
#line 3384 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3384 "cplus.met"
            }
#line 3384 "cplus.met"
#line 3385 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3385 "cplus.met"
#line 3386 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3386 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3386 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3386 "cplus.met"
            } else {
#line 3386 "cplus.met"
                tokenAhead = 0 ;
#line 3386 "cplus.met"
            }
#line 3386 "cplus.met"
#line 3386 "cplus.met"
            break;
#line 3386 "cplus.met"
#line 3388 "cplus.met"
        case THROW : 
#line 3388 "cplus.met"
            tokenAhead = 0 ;
#line 3388 "cplus.met"
            CommTerm();
#line 3388 "cplus.met"
#line 3389 "cplus.met"
#line 3390 "cplus.met"
            {
#line 3390 "cplus.met"
                PPTREE _ptRes0=0;
#line 3390 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3390 "cplus.met"
                statTree=_ptRes0;
#line 3390 "cplus.met"
            }
#line 3390 "cplus.met"
#line 3391 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 59, cplus)){
#line 3391 "cplus.met"
#line 3392 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3392 "cplus.met"
#line 3392 "cplus.met"
            }
#line 3392 "cplus.met"
#line 3393 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3393 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3393 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3393 "cplus.met"
            } else {
#line 3393 "cplus.met"
                tokenAhead = 0 ;
#line 3393 "cplus.met"
            }
#line 3393 "cplus.met"
#line 3393 "cplus.met"
            break;
#line 3393 "cplus.met"
#line 3395 "cplus.met"
        case TRY : 
#line 3395 "cplus.met"
#line 3395 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 56, cplus))== (PPTREE) -1 ) {
#line 3395 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3395 "cplus.met"
            }
#line 3395 "cplus.met"
            break;
#line 3395 "cplus.met"
#line 3396 "cplus.met"
        case META : 
#line 3396 "cplus.met"
#line 3397 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 83, cplus)){
#line 3397 "cplus.met"
#line 3398 "cplus.met"
#line 3399 "cplus.met"
                {
#line 3399 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3399 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3399 "cplus.met"
                    {
#line 3399 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3399 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3399 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3399 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3399 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3399 "cplus.met"
                        } else {
#line 3399 "cplus.met"
                            tokenAhead = 0 ;
#line 3399 "cplus.met"
                        }
#line 3399 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3399 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3399 "cplus.met"
                    }
#line 3399 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3399 "cplus.met"
                    statTree=_ptRes0;
#line 3399 "cplus.met"
                }
#line 3399 "cplus.met"
#line 3400 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3400 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3400 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3400 "cplus.met"
                } else {
#line 3400 "cplus.met"
                    tokenAhead = 0 ;
#line 3400 "cplus.met"
                }
#line 3400 "cplus.met"
#line 3401 "cplus.met"
                {
#line 3401 "cplus.met"
                    switchContext = 0 ;
#line 3401 "cplus.met"
#line 3402 "cplus.met"
                    {
#line 3402 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3402 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3402 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3402 "cplus.met"
                        }
#line 3402 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3402 "cplus.met"
                    }
#line 3402 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3402 "cplus.met"
                }
#line 3402 "cplus.met"
#line 3402 "cplus.met"
#line 3402 "cplus.met"
            } else {
#line 3402 "cplus.met"
#line 3405 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 75, cplus)){
#line 3405 "cplus.met"
#line 3407 "cplus.met"
                    
#line 3407 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3407 "cplus.met"
                    goto statement_exit;
#line 3407 "cplus.met"
#line 3408 "cplus.met"
                } else {
#line 3408 "cplus.met"
#line 3410 "cplus.met"
#line 3411 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3411 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3411 "cplus.met"
                    }
#line 3411 "cplus.met"
#line 3412 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3412 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3412 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3412 "cplus.met"
                    } else {
#line 3412 "cplus.met"
                        tokenAhead = 0 ;
#line 3412 "cplus.met"
                    }
#line 3412 "cplus.met"
#line 3412 "cplus.met"
                }
#line 3412 "cplus.met"
            }
#line 3412 "cplus.met"
            break;
#line 3412 "cplus.met"
#line 3416 "cplus.met"
        case CASE : 
#line 3416 "cplus.met"
#line 3417 "cplus.met"
            if (! (switchContext)){
#line 3417 "cplus.met"
#line 3418 "cplus.met"
                
#line 3418 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3418 "cplus.met"
                goto statement_exit;
#line 3418 "cplus.met"
#line 3418 "cplus.met"
            } else {
#line 3418 "cplus.met"
#line 3420 "cplus.met"
                {
#line 3420 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3420 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 3420 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3420 "cplus.met"
                    }
#line 3420 "cplus.met"
                    _retValue =_ptTree0;
#line 3420 "cplus.met"
                    goto statement_ret;
#line 3420 "cplus.met"
                }
#line 3420 "cplus.met"
            }
#line 3420 "cplus.met"
            break;
#line 3420 "cplus.met"
#line 3421 "cplus.met"
        case DEFAULT : 
#line 3421 "cplus.met"
#line 3422 "cplus.met"
            if (! (switchContext)){
#line 3422 "cplus.met"
#line 3423 "cplus.met"
                
#line 3423 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3423 "cplus.met"
                goto statement_exit;
#line 3423 "cplus.met"
#line 3423 "cplus.met"
            } else {
#line 3423 "cplus.met"
#line 3425 "cplus.met"
                {
#line 3425 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3425 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 3425 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3425 "cplus.met"
                    }
#line 3425 "cplus.met"
                    _retValue =_ptTree0;
#line 3425 "cplus.met"
                    goto statement_ret;
#line 3425 "cplus.met"
                }
#line 3425 "cplus.met"
            }
#line 3425 "cplus.met"
            break;
#line 3425 "cplus.met"
#line 3426 "cplus.met"
        case IDENT : 
#line 3426 "cplus.met"
#line 3427 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3427 "cplus.met"
            switch( lexEl.Value) {
#line 3427 "cplus.met"
#line 3428 "cplus.met"
                case META : 
#line 3428 "cplus.met"
                case FUNC_SPEC : 
#line 3428 "cplus.met"
#line 3429 "cplus.met"
#line 3430 "cplus.met"
                    {
#line 3430 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3430 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3430 "cplus.met"
                        {
#line 3430 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3430 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3430 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3430 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3430 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3430 "cplus.met"
                            } else {
#line 3430 "cplus.met"
                                tokenAhead = 0 ;
#line 3430 "cplus.met"
                            }
#line 3430 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3430 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3430 "cplus.met"
                        }
#line 3430 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3430 "cplus.met"
                        statTree=_ptRes0;
#line 3430 "cplus.met"
                    }
#line 3430 "cplus.met"
#line 3433 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3433 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3433 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3433 "cplus.met"
                    } else {
#line 3433 "cplus.met"
                        tokenAhead = 0 ;
#line 3433 "cplus.met"
                    }
#line 3433 "cplus.met"
#line 3434 "cplus.met"
                    {
#line 3434 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3434 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3434 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3434 "cplus.met"
                        }
#line 3434 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3434 "cplus.met"
                    }
#line 3434 "cplus.met"
#line 3435 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3435 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3435 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3435 "cplus.met"
                    } else {
#line 3435 "cplus.met"
                        tokenAhead = 0 ;
#line 3435 "cplus.met"
                    }
#line 3435 "cplus.met"
#line 3435 "cplus.met"
                    break;
#line 3435 "cplus.met"
#line 3440 "cplus.met"
                default : 
#line 3440 "cplus.met"
#line 3438 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 83, cplus)){
#line 3438 "cplus.met"
#line 3439 "cplus.met"
#line 3440 "cplus.met"
                        {
#line 3440 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3440 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3440 "cplus.met"
                            {
#line 3440 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3440 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3440 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3440 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3440 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3440 "cplus.met"
                                } else {
#line 3440 "cplus.met"
                                    tokenAhead = 0 ;
#line 3440 "cplus.met"
                                }
#line 3440 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3440 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3440 "cplus.met"
                            }
#line 3440 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3440 "cplus.met"
                            statTree=_ptRes0;
#line 3440 "cplus.met"
                        }
#line 3440 "cplus.met"
#line 3443 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3443 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3443 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3443 "cplus.met"
                        } else {
#line 3443 "cplus.met"
                            tokenAhead = 0 ;
#line 3443 "cplus.met"
                        }
#line 3443 "cplus.met"
#line 3444 "cplus.met"
                        {
#line 3444 "cplus.met"
                            switchContext = 0 ;
#line 3444 "cplus.met"
#line 3445 "cplus.met"
                            {
#line 3445 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3445 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 3445 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3445 "cplus.met"
                                }
#line 3445 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3445 "cplus.met"
                            }
#line 3445 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3445 "cplus.met"
                        }
#line 3445 "cplus.met"
#line 3445 "cplus.met"
#line 3445 "cplus.met"
                    } else {
#line 3445 "cplus.met"
#line 3448 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 75, cplus)){
#line 3448 "cplus.met"
#line 3451 "cplus.met"
                            
#line 3451 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3451 "cplus.met"
                            goto statement_exit;
#line 3451 "cplus.met"
#line 3452 "cplus.met"
                        } else {
#line 3452 "cplus.met"
#line 3454 "cplus.met"
#line 3455 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3455 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3455 "cplus.met"
                            }
#line 3455 "cplus.met"
#line 3455 "cplus.met"
                        }
#line 3455 "cplus.met"
                    }
#line 3455 "cplus.met"
                    break;
#line 3455 "cplus.met"
            }
#line 3455 "cplus.met"
            break;
#line 3455 "cplus.met"
#line 3461 "cplus.met"
        default : 
#line 3461 "cplus.met"
#line 3459 "cplus.met"
#line 3460 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 75, cplus)){
#line 3460 "cplus.met"
#line 3461 "cplus.met"
                
#line 3461 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3461 "cplus.met"
                goto statement_exit;
#line 3461 "cplus.met"
#line 3461 "cplus.met"
            } else {
#line 3461 "cplus.met"
#line 3463 "cplus.met"
#line 3464 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3464 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3464 "cplus.met"
                }
#line 3464 "cplus.met"
#line 3465 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3465 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3465 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3465 "cplus.met"
                } else {
#line 3465 "cplus.met"
                    tokenAhead = 0 ;
#line 3465 "cplus.met"
                }
#line 3465 "cplus.met"
#line 3465 "cplus.met"
            }
#line 3465 "cplus.met"
#line 3465 "cplus.met"
            break;
#line 3465 "cplus.met"
    }
#line 3465 "cplus.met"
#line 3469 "cplus.met"
    {
#line 3469 "cplus.met"
        _retValue = statTree ;
#line 3469 "cplus.met"
        goto statement_ret;
#line 3469 "cplus.met"
        
#line 3469 "cplus.met"
    }
#line 3469 "cplus.met"
#line 3469 "cplus.met"
#line 3469 "cplus.met"

#line 3470 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3470 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3470 "cplus.met"
switchContext =  _oldswitchContext;
#line 3470 "cplus.met"
return((PPTREE) 0);
#line 3470 "cplus.met"

#line 3470 "cplus.met"
statement_exit :
#line 3470 "cplus.met"

#line 3470 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3470 "cplus.met"
    _funcLevel--;
#line 3470 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3470 "cplus.met"
    return((PPTREE) -1) ;
#line 3470 "cplus.met"

#line 3470 "cplus.met"
statement_ret :
#line 3470 "cplus.met"
    
#line 3470 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3470 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3470 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3470 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3470 "cplus.met"
    return _retValue ;
#line 3470 "cplus.met"
}
#line 3470 "cplus.met"

#line 3470 "cplus.met"
#line 3305 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3305 "cplus.met"
{
#line 3305 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3305 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3305 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3305 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3305 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3305 "cplus.met"
#line 3305 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3305 "cplus.met"
#line 3307 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3307 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3307 "cplus.met"
    }
#line 3307 "cplus.met"
#line 3308 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3308 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3308 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3308 "cplus.met"
    } else {
#line 3308 "cplus.met"
        tokenAhead = 0 ;
#line 3308 "cplus.met"
    }
#line 3308 "cplus.met"
#line 3309 "cplus.met"
    {
#line 3309 "cplus.met"
        _retValue = statTree ;
#line 3309 "cplus.met"
        goto statement_expression_ret;
#line 3309 "cplus.met"
        
#line 3309 "cplus.met"
    }
#line 3309 "cplus.met"
#line 3309 "cplus.met"
#line 3309 "cplus.met"

#line 3310 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3310 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3310 "cplus.met"
return((PPTREE) 0);
#line 3310 "cplus.met"

#line 3310 "cplus.met"
statement_expression_exit :
#line 3310 "cplus.met"

#line 3310 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3310 "cplus.met"
    _funcLevel--;
#line 3310 "cplus.met"
    return((PPTREE) -1) ;
#line 3310 "cplus.met"

#line 3310 "cplus.met"
statement_expression_ret :
#line 3310 "cplus.met"
    
#line 3310 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3310 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3310 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3310 "cplus.met"
    return _retValue ;
#line 3310 "cplus.met"
}
#line 3310 "cplus.met"

#line 3310 "cplus.met"
#line 2905 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 2905 "cplus.met"
{
#line 2905 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2905 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2905 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2905 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 2905 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2905 "cplus.met"
#line 2905 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2905 "cplus.met"
#line 2905 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2905 "cplus.met"
#line 2907 "cplus.met"
    {
#line 2907 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2907 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 2907 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2907 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 2907 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 2907 "cplus.met"
        } else {
#line 2907 "cplus.met"
            tokenAhead = 0 ;
#line 2907 "cplus.met"
        }
#line 2907 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2907 "cplus.met"
        retTree=_ptRes0;
#line 2907 "cplus.met"
    }
#line 2907 "cplus.met"
#line 2908 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 2908 "cplus.met"
#line 2909 "cplus.met"
#line 2910 "cplus.met"
        list =AddList(list ,retTree );
#line 2910 "cplus.met"
#line 2910 "cplus.met"
        _addlist1 = list ;
#line 2910 "cplus.met"
#line 2911 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 2911 "cplus.met"
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
                    _ptRes1= MakeTree(STRING, 1);
#line 2912 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2912 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 2912 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 2912 "cplus.met"
                    } else {
#line 2912 "cplus.met"
                        tokenAhead = 0 ;
#line 2912 "cplus.met"
                    }
#line 2912 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2912 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2912 "cplus.met"
                }
#line 2912 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2912 "cplus.met"
            }
#line 2912 "cplus.met"
#line 2912 "cplus.met"
            if (list){
#line 2912 "cplus.met"
#line 2912 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2912 "cplus.met"
            } else {
#line 2912 "cplus.met"
#line 2912 "cplus.met"
                list = _addlist1 ;
#line 2912 "cplus.met"
            }
#line 2912 "cplus.met"
        } 
#line 2912 "cplus.met"
#line 2913 "cplus.met"
        {
#line 2913 "cplus.met"
            PPTREE _ptRes0=0;
#line 2913 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 2913 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 2913 "cplus.met"
            retTree=_ptRes0;
#line 2913 "cplus.met"
        }
#line 2913 "cplus.met"
#line 2913 "cplus.met"
#line 2913 "cplus.met"
    }
#line 2913 "cplus.met"
#line 2915 "cplus.met"
    {
#line 2915 "cplus.met"
        _retValue = retTree ;
#line 2915 "cplus.met"
        goto string_list_ret;
#line 2915 "cplus.met"
        
#line 2915 "cplus.met"
    }
#line 2915 "cplus.met"
#line 2915 "cplus.met"
#line 2915 "cplus.met"

#line 2916 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2916 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2916 "cplus.met"
return((PPTREE) 0);
#line 2916 "cplus.met"

#line 2916 "cplus.met"
string_list_exit :
#line 2916 "cplus.met"

#line 2916 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 2916 "cplus.met"
    _funcLevel--;
#line 2916 "cplus.met"
    return((PPTREE) -1) ;
#line 2916 "cplus.met"

#line 2916 "cplus.met"
string_list_ret :
#line 2916 "cplus.met"
    
#line 2916 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 2916 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2916 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2916 "cplus.met"
    return _retValue ;
#line 2916 "cplus.met"
}
#line 2916 "cplus.met"

#line 2916 "cplus.met"
#line 3477 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3477 "cplus.met"
{
#line 3477 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3477 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3477 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3477 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3477 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3477 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3477 "cplus.met"
#line 3477 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3477 "cplus.met"
#line 3477 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3477 "cplus.met"
#line 3479 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3479 "cplus.met"
    switch( lexEl.Value) {
#line 3479 "cplus.met"
#line 3480 "cplus.met"
        case CASE : 
#line 3480 "cplus.met"
            tokenAhead = 0 ;
#line 3480 "cplus.met"
            CommTerm();
#line 3480 "cplus.met"
#line 3481 "cplus.met"
#line 3482 "cplus.met"
            {
#line 3482 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3482 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3482 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3482 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3482 "cplus.met"
                }
#line 3482 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3482 "cplus.met"
                retTree=_ptRes0;
#line 3482 "cplus.met"
            }
#line 3482 "cplus.met"
#line 3483 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3483 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3483 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3483 "cplus.met"
            } else {
#line 3483 "cplus.met"
                tokenAhead = 0 ;
#line 3483 "cplus.met"
            }
#line 3483 "cplus.met"
#line 3484 "cplus.met"
            {
#line 3484 "cplus.met"
                switchContext = 0 ;
#line 3484 "cplus.met"
#line 3485 "cplus.met"
#line 3485 "cplus.met"
                _addlist1 = list ;
#line 3485 "cplus.met"
#line 3485 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 132, cplus)) || 
#line 3485 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 128, cplus))) { 
#line 3485 "cplus.met"
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                    if (list){
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3486 "cplus.met"
                    } else {
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                        list = _addlist1 ;
#line 3486 "cplus.met"
                    }
#line 3486 "cplus.met"
                } 
#line 3486 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3486 "cplus.met"
            }
#line 3486 "cplus.met"
#line 3487 "cplus.met"
            {
#line 3487 "cplus.met"
                PPTREE _ptTree0=0;
#line 3487 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3487 "cplus.met"
                _retValue =_ptTree0;
#line 3487 "cplus.met"
                goto switch_elem_ret;
#line 3487 "cplus.met"
            }
#line 3487 "cplus.met"
#line 3487 "cplus.met"
            break;
#line 3487 "cplus.met"
#line 3489 "cplus.met"
        case DEFAULT : 
#line 3489 "cplus.met"
            tokenAhead = 0 ;
#line 3489 "cplus.met"
            CommTerm();
#line 3489 "cplus.met"
#line 3490 "cplus.met"
#line 3491 "cplus.met"
            {
#line 3491 "cplus.met"
                PPTREE _ptRes0=0;
#line 3491 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3491 "cplus.met"
                retTree=_ptRes0;
#line 3491 "cplus.met"
            }
#line 3491 "cplus.met"
#line 3492 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3492 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3492 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3492 "cplus.met"
            } else {
#line 3492 "cplus.met"
                tokenAhead = 0 ;
#line 3492 "cplus.met"
            }
#line 3492 "cplus.met"
#line 3493 "cplus.met"
            {
#line 3493 "cplus.met"
                switchContext = 0 ;
#line 3493 "cplus.met"
#line 3494 "cplus.met"
#line 3494 "cplus.met"
                _addlist2 = list ;
#line 3494 "cplus.met"
#line 3494 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 132, cplus)) || 
#line 3494 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 128, cplus))) { 
#line 3494 "cplus.met"
#line 3495 "cplus.met"
#line 3495 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3495 "cplus.met"
#line 3495 "cplus.met"
                    if (list){
#line 3495 "cplus.met"
#line 3495 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3495 "cplus.met"
                    } else {
#line 3495 "cplus.met"
#line 3495 "cplus.met"
                        list = _addlist2 ;
#line 3495 "cplus.met"
                    }
#line 3495 "cplus.met"
                } 
#line 3495 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3495 "cplus.met"
            }
#line 3495 "cplus.met"
#line 3496 "cplus.met"
            {
#line 3496 "cplus.met"
                PPTREE _ptTree0=0;
#line 3496 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3496 "cplus.met"
                _retValue =_ptTree0;
#line 3496 "cplus.met"
                goto switch_elem_ret;
#line 3496 "cplus.met"
            }
#line 3496 "cplus.met"
#line 3496 "cplus.met"
            break;
#line 3496 "cplus.met"
#line 3502 "cplus.met"
        default : 
#line 3502 "cplus.met"
#line 3499 "cplus.met"
#line 3501 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 129, cplus)){
#line 3501 "cplus.met"
#line 3503 "cplus.met"
                {
#line 3503 "cplus.met"
                    _retValue = retTree ;
#line 3503 "cplus.met"
                    goto switch_elem_ret;
#line 3503 "cplus.met"
                    
#line 3503 "cplus.met"
                }
#line 3503 "cplus.met"
            } else {
#line 3503 "cplus.met"
#line 3505 "cplus.met"
                
#line 3505 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3505 "cplus.met"
                goto switch_elem_exit;
#line 3505 "cplus.met"
            }
#line 3505 "cplus.met"
#line 3505 "cplus.met"
            break;
#line 3505 "cplus.met"
    }
#line 3505 "cplus.met"
#line 3505 "cplus.met"
#line 3507 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3507 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3507 "cplus.met"
switchContext =  _oldswitchContext;
#line 3507 "cplus.met"
return((PPTREE) 0);
#line 3507 "cplus.met"

#line 3507 "cplus.met"
switch_elem_exit :
#line 3507 "cplus.met"

#line 3507 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3507 "cplus.met"
    _funcLevel--;
#line 3507 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3507 "cplus.met"
    return((PPTREE) -1) ;
#line 3507 "cplus.met"

#line 3507 "cplus.met"
switch_elem_ret :
#line 3507 "cplus.met"
    
#line 3507 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3507 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3507 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3507 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3507 "cplus.met"
    return _retValue ;
#line 3507 "cplus.met"
}
#line 3507 "cplus.met"

#line 3507 "cplus.met"
