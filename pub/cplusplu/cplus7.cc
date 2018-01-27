/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2881 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 2881 "cplus.met"
{
#line 2881 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2881 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2881 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2881 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 2881 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2881 "cplus.met"
#line 2882 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2882 "cplus.met"
#line 2883 "cplus.met"
        {
#line 2883 "cplus.met"
            PPTREE _ptTree0=0;
#line 2883 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 2883 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 2883 "cplus.met"
            }
#line 2883 "cplus.met"
            _retValue =_ptTree0;
#line 2883 "cplus.met"
            goto simple_type_name_ret;
#line 2883 "cplus.met"
        }
#line 2883 "cplus.met"
    } else {
#line 2883 "cplus.met"
#line 2885 "cplus.met"
        
#line 2885 "cplus.met"
        LEX_EXIT ("",0);
#line 2885 "cplus.met"
        goto simple_type_name_exit;
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
simple_type_name_exit :
#line 2886 "cplus.met"

#line 2886 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 2886 "cplus.met"
    _funcLevel--;
#line 2886 "cplus.met"
    return((PPTREE) -1) ;
#line 2886 "cplus.met"

#line 2886 "cplus.met"
simple_type_name_ret :
#line 2886 "cplus.met"
    
#line 2886 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
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
#line 2747 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2747 "cplus.met"
{
#line 2747 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2747 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2747 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2747 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2747 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2747 "cplus.met"
#line 2747 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2747 "cplus.met"
#line 2749 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2749 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2749 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2749 "cplus.met"
    } else {
#line 2749 "cplus.met"
        tokenAhead = 0 ;
#line 2749 "cplus.met"
    }
#line 2749 "cplus.met"
#line 2750 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2750 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2750 "cplus.met"
    }
#line 2750 "cplus.met"
#line 2751 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2751 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2751 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2751 "cplus.met"
    } else {
#line 2751 "cplus.met"
        tokenAhead = 0 ;
#line 2751 "cplus.met"
    }
#line 2751 "cplus.met"
#line 2752 "cplus.met"
    {
#line 2752 "cplus.met"
        _retValue = expTree ;
#line 2752 "cplus.met"
        goto sizeof_type_ret;
#line 2752 "cplus.met"
        
#line 2752 "cplus.met"
    }
#line 2752 "cplus.met"
#line 2752 "cplus.met"
#line 2752 "cplus.met"

#line 2753 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2753 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2753 "cplus.met"
return((PPTREE) 0);
#line 2753 "cplus.met"

#line 2753 "cplus.met"
sizeof_type_exit :
#line 2753 "cplus.met"

#line 2753 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2753 "cplus.met"
    _funcLevel--;
#line 2753 "cplus.met"
    return((PPTREE) -1) ;
#line 2753 "cplus.met"

#line 2753 "cplus.met"
sizeof_type_ret :
#line 2753 "cplus.met"
    
#line 2753 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2753 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2753 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2753 "cplus.met"
    return _retValue ;
#line 2753 "cplus.met"
}
#line 2753 "cplus.met"

#line 2753 "cplus.met"
#line 1009 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 1009 "cplus.met"
{
#line 1009 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1009 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1009 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1009 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 1009 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1009 "cplus.met"
#line 1009 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 1009 "cplus.met"
#line 1011 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 133, cplus)) || 
#line 1011 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 38, cplus))) || 
#line 1011 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 129, cplus))) || 
#line 1011 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 56, cplus))) || 
#line 1011 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 69, cplus))){
#line 1011 "cplus.met"
#line 1016 "cplus.met"
        {
#line 1016 "cplus.met"
            _retValue = stat ;
#line 1016 "cplus.met"
            goto stat_all_ret;
#line 1016 "cplus.met"
            
#line 1016 "cplus.met"
        }
#line 1016 "cplus.met"
    } else {
#line 1016 "cplus.met"
#line 1018 "cplus.met"
        {
#line 1018 "cplus.met"
            PPTREE _ptTree0=0;
#line 1018 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1018 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 1018 "cplus.met"
            }
#line 1018 "cplus.met"
            _retValue =_ptTree0;
#line 1018 "cplus.met"
            goto stat_all_ret;
#line 1018 "cplus.met"
        }
#line 1018 "cplus.met"
    }
#line 1018 "cplus.met"
#line 1018 "cplus.met"
#line 1018 "cplus.met"

#line 1019 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1019 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1019 "cplus.met"
return((PPTREE) 0);
#line 1019 "cplus.met"

#line 1019 "cplus.met"
stat_all_exit :
#line 1019 "cplus.met"

#line 1019 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 1019 "cplus.met"
    _funcLevel--;
#line 1019 "cplus.met"
    return((PPTREE) -1) ;
#line 1019 "cplus.met"

#line 1019 "cplus.met"
stat_all_ret :
#line 1019 "cplus.met"
    
#line 1019 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 1019 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1019 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1019 "cplus.met"
    return _retValue ;
#line 1019 "cplus.met"
}
#line 1019 "cplus.met"

#line 1019 "cplus.met"
#line 1186 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1186 "cplus.met"
{
#line 1186 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1186 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1186 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1186 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1186 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1186 "cplus.met"
#line 1186 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1186 "cplus.met"
#line 1188 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 50, cplus)){
#line 1188 "cplus.met"
#line 1189 "cplus.met"
        {
#line 1189 "cplus.met"
            _retValue = retTree ;
#line 1189 "cplus.met"
            goto stat_dir_ret;
#line 1189 "cplus.met"
            
#line 1189 "cplus.met"
        }
#line 1189 "cplus.met"
    }
#line 1189 "cplus.met"
#line 1190 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1190 "cplus.met"
    switch( lexEl.Value) {
#line 1190 "cplus.met"
#line 1191 "cplus.met"
        case META : 
#line 1191 "cplus.met"
        case IF_DIR : 
#line 1191 "cplus.met"
            tokenAhead = 0 ;
#line 1191 "cplus.met"
            CommTerm();
#line 1191 "cplus.met"
#line 1191 "cplus.met"
            {
#line 1191 "cplus.met"
                PPTREE _ptTree0=0;
#line 1191 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1191 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1191 "cplus.met"
                }
#line 1191 "cplus.met"
                _retValue =_ptTree0;
#line 1191 "cplus.met"
                goto stat_dir_ret;
#line 1191 "cplus.met"
            }
#line 1191 "cplus.met"
            break;
#line 1191 "cplus.met"
#line 1192 "cplus.met"
        case IFDEF_DIR : 
#line 1192 "cplus.met"
#line 1192 "cplus.met"
            {
#line 1192 "cplus.met"
                PPTREE _ptTree0=0;
#line 1192 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1192 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1192 "cplus.met"
                }
#line 1192 "cplus.met"
                _retValue =_ptTree0;
#line 1192 "cplus.met"
                goto stat_dir_ret;
#line 1192 "cplus.met"
            }
#line 1192 "cplus.met"
            break;
#line 1192 "cplus.met"
#line 1193 "cplus.met"
        case IFNDEF_DIR : 
#line 1193 "cplus.met"
#line 1193 "cplus.met"
            {
#line 1193 "cplus.met"
                PPTREE _ptTree0=0;
#line 1193 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1193 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1193 "cplus.met"
                }
#line 1193 "cplus.met"
                _retValue =_ptTree0;
#line 1193 "cplus.met"
                goto stat_dir_ret;
#line 1193 "cplus.met"
            }
#line 1193 "cplus.met"
            break;
#line 1193 "cplus.met"
        default :
#line 1193 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1193 "cplus.met"
            break;
#line 1193 "cplus.met"
    }
#line 1193 "cplus.met"
#line 1193 "cplus.met"
#line 1194 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1194 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1194 "cplus.met"
return((PPTREE) 0);
#line 1194 "cplus.met"

#line 1194 "cplus.met"
stat_dir_exit :
#line 1194 "cplus.met"

#line 1194 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1194 "cplus.met"
    _funcLevel--;
#line 1194 "cplus.met"
    return((PPTREE) -1) ;
#line 1194 "cplus.met"

#line 1194 "cplus.met"
stat_dir_ret :
#line 1194 "cplus.met"
    
#line 1194 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1194 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1194 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1194 "cplus.met"
    return _retValue ;
#line 1194 "cplus.met"
}
#line 1194 "cplus.met"

#line 1194 "cplus.met"
#line 3496 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3496 "cplus.met"
{
#line 3496 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3496 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3496 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3496 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3496 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3496 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3496 "cplus.met"
#line 3497 "cplus.met"
    {
#line 3497 "cplus.met"
        switchContext = 1 ;
#line 3497 "cplus.met"
#line 3498 "cplus.met"
        {
#line 3498 "cplus.met"
            PPTREE _ptTree0=0;
#line 3498 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 3498 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3498 "cplus.met"
            }
#line 3498 "cplus.met"
            _retValue =_ptTree0;
#line 3498 "cplus.met"
            goto stat_dir_switch_ret;
#line 3498 "cplus.met"
        }
#line 3498 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3498 "cplus.met"
    }
#line 3498 "cplus.met"
#line 3498 "cplus.met"
#line 3498 "cplus.met"

#line 3499 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3499 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3499 "cplus.met"
switchContext =  _oldswitchContext;
#line 3499 "cplus.met"
return((PPTREE) 0);
#line 3499 "cplus.met"

#line 3499 "cplus.met"
stat_dir_switch_exit :
#line 3499 "cplus.met"

#line 3499 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3499 "cplus.met"
    _funcLevel--;
#line 3499 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3499 "cplus.met"
    return((PPTREE) -1) ;
#line 3499 "cplus.met"

#line 3499 "cplus.met"
stat_dir_switch_ret :
#line 3499 "cplus.met"
    
#line 3499 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3499 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3499 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3499 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3499 "cplus.met"
    return _retValue ;
#line 3499 "cplus.met"
}
#line 3499 "cplus.met"

#line 3499 "cplus.met"
#line 1085 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1085 "cplus.met"
{
#line 1085 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1085 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1085 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1085 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1085 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1085 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1085 "cplus.met"
#line 1085 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1085 "cplus.met"
#line 1085 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1085 "cplus.met"
#line 1087 "cplus.met"
    {
#line 1087 "cplus.met"
        keepCarriage = 1 ;
#line 1087 "cplus.met"
#line 1088 "cplus.met"
#line 1089 "cplus.met"
        {
#line 1089 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1089 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1089 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1089 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1089 "cplus.met"
            }
#line 1089 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1089 "cplus.met"
            retTree=_ptRes0;
#line 1089 "cplus.met"
        }
#line 1089 "cplus.met"
#line 1090 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1090 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1090 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1090 "cplus.met"
        } else {
#line 1090 "cplus.met"
            tokenAhead = 0 ;
#line 1090 "cplus.met"
        }
#line 1090 "cplus.met"
#line 1090 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1090 "cplus.met"
    }
#line 1090 "cplus.met"
#line 1090 "cplus.met"
    _addlist1 = list ;
#line 1090 "cplus.met"
#line 1092 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1092 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1092 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1092 "cplus.met"
#line 1093 "cplus.met"
#line 1093 "cplus.met"
        {
#line 1093 "cplus.met"
            PPTREE _ptTree0=0;
#line 1093 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1093 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1093 "cplus.met"
            }
#line 1093 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1093 "cplus.met"
        }
#line 1093 "cplus.met"
#line 1093 "cplus.met"
        if (list){
#line 1093 "cplus.met"
#line 1093 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1093 "cplus.met"
        } else {
#line 1093 "cplus.met"
#line 1093 "cplus.met"
            list = _addlist1 ;
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1094 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1094 "cplus.met"
        }
#line 1094 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1094 "cplus.met"
    }
#line 1094 "cplus.met"
#line 1095 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1095 "cplus.met"
#line 1096 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1096 "cplus.met"
    switch( lexEl.Value) {
#line 1096 "cplus.met"
#line 1097 "cplus.met"
        case META : 
#line 1097 "cplus.met"
        case ELSE_DIR : 
#line 1097 "cplus.met"
            tokenAhead = 0 ;
#line 1097 "cplus.met"
            CommTerm();
#line 1097 "cplus.met"
#line 1098 "cplus.met"
#line 1098 "cplus.met"
            _addlist2 = list2 ;
#line 1098 "cplus.met"
#line 1099 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1099 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1099 "cplus.met"
#line 1100 "cplus.met"
#line 1100 "cplus.met"
                {
#line 1100 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1100 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1100 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1100 "cplus.met"
                    }
#line 1100 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1100 "cplus.met"
                }
#line 1100 "cplus.met"
#line 1100 "cplus.met"
                if (list2){
#line 1100 "cplus.met"
#line 1100 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1100 "cplus.met"
                } else {
#line 1100 "cplus.met"
#line 1100 "cplus.met"
                    list2 = _addlist2 ;
#line 1100 "cplus.met"
                }
#line 1100 "cplus.met"
            } 
#line 1100 "cplus.met"
#line 1101 "cplus.met"
            {
#line 1101 "cplus.met"
                PPTREE _ptTree0=0;
#line 1101 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1101 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1101 "cplus.met"
                }
#line 1101 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1101 "cplus.met"
            }
#line 1101 "cplus.met"
#line 1102 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1102 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1102 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1102 "cplus.met"
            } else {
#line 1102 "cplus.met"
                tokenAhead = 0 ;
#line 1102 "cplus.met"
            }
#line 1102 "cplus.met"
#line 1103 "cplus.met"
            {
#line 1103 "cplus.met"
                PPTREE _ptTree0=0;
#line 1103 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1103 "cplus.met"
                _retValue =_ptTree0;
#line 1103 "cplus.met"
                goto stat_if_dir_ret;
#line 1103 "cplus.met"
            }
#line 1103 "cplus.met"
#line 1103 "cplus.met"
            break;
#line 1103 "cplus.met"
#line 1105 "cplus.met"
        case ELIF_DIR : 
#line 1105 "cplus.met"
            tokenAhead = 0 ;
#line 1105 "cplus.met"
            CommTerm();
#line 1105 "cplus.met"
#line 1105 "cplus.met"
            {
#line 1105 "cplus.met"
                PPTREE _ptTree0=0;
#line 1105 "cplus.met"
                {
#line 1105 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1105 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1105 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1105 "cplus.met"
                    }
#line 1105 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1105 "cplus.met"
                }
#line 1105 "cplus.met"
                _retValue =_ptTree0;
#line 1105 "cplus.met"
                goto stat_if_dir_ret;
#line 1105 "cplus.met"
            }
#line 1105 "cplus.met"
            break;
#line 1105 "cplus.met"
#line 1106 "cplus.met"
        case ENDIF_DIR : 
#line 1106 "cplus.met"
            tokenAhead = 0 ;
#line 1106 "cplus.met"
            CommTerm();
#line 1106 "cplus.met"
#line 1106 "cplus.met"
            {
#line 1106 "cplus.met"
                _retValue = retTree ;
#line 1106 "cplus.met"
                goto stat_if_dir_ret;
#line 1106 "cplus.met"
                
#line 1106 "cplus.met"
            }
#line 1106 "cplus.met"
            break;
#line 1106 "cplus.met"
        default :
#line 1106 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1106 "cplus.met"
            break;
#line 1106 "cplus.met"
    }
#line 1106 "cplus.met"
#line 1106 "cplus.met"
#line 1107 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1107 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1107 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1107 "cplus.met"
return((PPTREE) 0);
#line 1107 "cplus.met"

#line 1107 "cplus.met"
stat_if_dir_exit :
#line 1107 "cplus.met"

#line 1107 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1107 "cplus.met"
    _funcLevel--;
#line 1107 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1107 "cplus.met"
    return((PPTREE) -1) ;
#line 1107 "cplus.met"

#line 1107 "cplus.met"
stat_if_dir_ret :
#line 1107 "cplus.met"
    
#line 1107 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1107 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1107 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1107 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1107 "cplus.met"
    return _retValue ;
#line 1107 "cplus.met"
}
#line 1107 "cplus.met"

#line 1107 "cplus.met"
#line 1148 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1148 "cplus.met"
{
#line 1148 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1148 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1148 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1148 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1148 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1148 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1148 "cplus.met"
#line 1148 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1148 "cplus.met"
#line 1148 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1148 "cplus.met"
#line 1150 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1150 "cplus.met"
#line 1151 "cplus.met"
#line 1152 "cplus.met"
        {
#line 1152 "cplus.met"
            keepCarriage = 1 ;
#line 1152 "cplus.met"
#line 1153 "cplus.met"
#line 1154 "cplus.met"
            {
#line 1154 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1154 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1154 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1154 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1154 "cplus.met"
                }
#line 1154 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1154 "cplus.met"
                retTree=_ptRes0;
#line 1154 "cplus.met"
            }
#line 1154 "cplus.met"
#line 1155 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1155 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1155 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1155 "cplus.met"
            } else {
#line 1155 "cplus.met"
                tokenAhead = 0 ;
#line 1155 "cplus.met"
            }
#line 1155 "cplus.met"
#line 1155 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1155 "cplus.met"
        }
#line 1155 "cplus.met"
#line 1155 "cplus.met"
#line 1156 "cplus.met"
    } else {
#line 1156 "cplus.met"
#line 1159 "cplus.met"
#line 1160 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1160 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1160 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1160 "cplus.met"
        } else {
#line 1160 "cplus.met"
            tokenAhead = 0 ;
#line 1160 "cplus.met"
        }
#line 1160 "cplus.met"
#line 1161 "cplus.met"
        {
#line 1161 "cplus.met"
            keepCarriage = 1 ;
#line 1161 "cplus.met"
#line 1162 "cplus.met"
#line 1163 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1163 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1163 "cplus.met"
            }
#line 1163 "cplus.met"
#line 1164 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1164 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1164 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1164 "cplus.met"
            } else {
#line 1164 "cplus.met"
                tokenAhead = 0 ;
#line 1164 "cplus.met"
            }
#line 1164 "cplus.met"
#line 1164 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1164 "cplus.met"
        }
#line 1164 "cplus.met"
#line 1166 "cplus.met"
        {
#line 1166 "cplus.met"
            PPTREE _ptRes0=0;
#line 1166 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1166 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1166 "cplus.met"
            retTree=_ptRes0;
#line 1166 "cplus.met"
        }
#line 1166 "cplus.met"
#line 1166 "cplus.met"
    }
#line 1166 "cplus.met"
#line 1166 "cplus.met"
    _addlist1 = list ;
#line 1166 "cplus.met"
#line 1168 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1168 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1168 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1168 "cplus.met"
#line 1169 "cplus.met"
#line 1169 "cplus.met"
        {
#line 1169 "cplus.met"
            PPTREE _ptTree0=0;
#line 1169 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1169 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1169 "cplus.met"
            }
#line 1169 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1169 "cplus.met"
        }
#line 1169 "cplus.met"
#line 1169 "cplus.met"
        if (list){
#line 1169 "cplus.met"
#line 1169 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1169 "cplus.met"
        } else {
#line 1169 "cplus.met"
#line 1169 "cplus.met"
            list = _addlist1 ;
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
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1170 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1170 "cplus.met"
        }
#line 1170 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1170 "cplus.met"
    }
#line 1170 "cplus.met"
#line 1171 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1171 "cplus.met"
#line 1172 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1172 "cplus.met"
    switch( lexEl.Value) {
#line 1172 "cplus.met"
#line 1173 "cplus.met"
        case META : 
#line 1173 "cplus.met"
        case ELSE_DIR : 
#line 1173 "cplus.met"
            tokenAhead = 0 ;
#line 1173 "cplus.met"
            CommTerm();
#line 1173 "cplus.met"
#line 1174 "cplus.met"
#line 1174 "cplus.met"
            _addlist2 = list2 ;
#line 1174 "cplus.met"
#line 1175 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1175 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1175 "cplus.met"
#line 1176 "cplus.met"
#line 1176 "cplus.met"
                {
#line 1176 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1176 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1176 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1176 "cplus.met"
                    }
#line 1176 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1176 "cplus.met"
                }
#line 1176 "cplus.met"
#line 1176 "cplus.met"
                if (list2){
#line 1176 "cplus.met"
#line 1176 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1176 "cplus.met"
                } else {
#line 1176 "cplus.met"
#line 1176 "cplus.met"
                    list2 = _addlist2 ;
#line 1176 "cplus.met"
                }
#line 1176 "cplus.met"
            } 
#line 1176 "cplus.met"
#line 1177 "cplus.met"
            {
#line 1177 "cplus.met"
                PPTREE _ptTree0=0;
#line 1177 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1177 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1177 "cplus.met"
                }
#line 1177 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1177 "cplus.met"
            }
#line 1177 "cplus.met"
#line 1178 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1178 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1178 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1178 "cplus.met"
            } else {
#line 1178 "cplus.met"
                tokenAhead = 0 ;
#line 1178 "cplus.met"
            }
#line 1178 "cplus.met"
#line 1179 "cplus.met"
            {
#line 1179 "cplus.met"
                PPTREE _ptTree0=0;
#line 1179 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1179 "cplus.met"
                _retValue =_ptTree0;
#line 1179 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1179 "cplus.met"
            }
#line 1179 "cplus.met"
#line 1179 "cplus.met"
            break;
#line 1179 "cplus.met"
#line 1181 "cplus.met"
        case ELIF_DIR : 
#line 1181 "cplus.met"
            tokenAhead = 0 ;
#line 1181 "cplus.met"
            CommTerm();
#line 1181 "cplus.met"
#line 1181 "cplus.met"
            {
#line 1181 "cplus.met"
                PPTREE _ptTree0=0;
#line 1181 "cplus.met"
                {
#line 1181 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1181 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1181 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1181 "cplus.met"
                    }
#line 1181 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1181 "cplus.met"
                }
#line 1181 "cplus.met"
                _retValue =_ptTree0;
#line 1181 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1181 "cplus.met"
            }
#line 1181 "cplus.met"
            break;
#line 1181 "cplus.met"
#line 1182 "cplus.met"
        case ENDIF_DIR : 
#line 1182 "cplus.met"
            tokenAhead = 0 ;
#line 1182 "cplus.met"
            CommTerm();
#line 1182 "cplus.met"
#line 1182 "cplus.met"
            {
#line 1182 "cplus.met"
                _retValue = retTree ;
#line 1182 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1182 "cplus.met"
                
#line 1182 "cplus.met"
            }
#line 1182 "cplus.met"
            break;
#line 1182 "cplus.met"
        default :
#line 1182 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1182 "cplus.met"
            break;
#line 1182 "cplus.met"
    }
#line 1182 "cplus.met"
#line 1182 "cplus.met"
#line 1183 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1183 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1183 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1183 "cplus.met"
return((PPTREE) 0);
#line 1183 "cplus.met"

#line 1183 "cplus.met"
stat_ifdef_dir_exit :
#line 1183 "cplus.met"

#line 1183 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1183 "cplus.met"
    _funcLevel--;
#line 1183 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1183 "cplus.met"
    return((PPTREE) -1) ;
#line 1183 "cplus.met"

#line 1183 "cplus.met"
stat_ifdef_dir_ret :
#line 1183 "cplus.met"
    
#line 1183 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1183 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1183 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1183 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1183 "cplus.met"
    return _retValue ;
#line 1183 "cplus.met"
}
#line 1183 "cplus.met"

#line 1183 "cplus.met"
#line 3336 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3336 "cplus.met"
{
#line 3336 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3336 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3336 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3336 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3336 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3336 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3336 "cplus.met"
#line 3336 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3336 "cplus.met"
#line 3338 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3338 "cplus.met"
    switch( lexEl.Value) {
#line 3338 "cplus.met"
#line 3339 "cplus.met"
        case BREAK : 
#line 3339 "cplus.met"
            tokenAhead = 0 ;
#line 3339 "cplus.met"
            CommTerm();
#line 3339 "cplus.met"
#line 3340 "cplus.met"
#line 3341 "cplus.met"
            {
#line 3341 "cplus.met"
                PPTREE _ptRes0=0;
#line 3341 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3341 "cplus.met"
                statTree=_ptRes0;
#line 3341 "cplus.met"
            }
#line 3341 "cplus.met"
#line 3342 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3342 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3342 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3342 "cplus.met"
            } else {
#line 3342 "cplus.met"
                tokenAhead = 0 ;
#line 3342 "cplus.met"
            }
#line 3342 "cplus.met"
#line 3342 "cplus.met"
            break;
#line 3342 "cplus.met"
#line 3344 "cplus.met"
        case CONTINUE : 
#line 3344 "cplus.met"
            tokenAhead = 0 ;
#line 3344 "cplus.met"
            CommTerm();
#line 3344 "cplus.met"
#line 3345 "cplus.met"
#line 3346 "cplus.met"
            {
#line 3346 "cplus.met"
                PPTREE _ptRes0=0;
#line 3346 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3346 "cplus.met"
                statTree=_ptRes0;
#line 3346 "cplus.met"
            }
#line 3346 "cplus.met"
#line 3347 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3347 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3347 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3347 "cplus.met"
            } else {
#line 3347 "cplus.met"
                tokenAhead = 0 ;
#line 3347 "cplus.met"
            }
#line 3347 "cplus.met"
#line 3347 "cplus.met"
            break;
#line 3347 "cplus.met"
#line 3349 "cplus.met"
        case DO : 
#line 3349 "cplus.met"
            tokenAhead = 0 ;
#line 3349 "cplus.met"
            CommTerm();
#line 3349 "cplus.met"
#line 3350 "cplus.met"
#line 3351 "cplus.met"
            {
#line 3351 "cplus.met"
                switchContext = 0 ;
#line 3351 "cplus.met"
#line 3352 "cplus.met"
                {
#line 3352 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3352 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3352 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3352 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3352 "cplus.met"
                    }
#line 3352 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3352 "cplus.met"
                    statTree=_ptRes0;
#line 3352 "cplus.met"
                }
#line 3352 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3352 "cplus.met"
            }
#line 3352 "cplus.met"
#line 3353 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3353 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3353 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3353 "cplus.met"
            } else {
#line 3353 "cplus.met"
                tokenAhead = 0 ;
#line 3353 "cplus.met"
            }
#line 3353 "cplus.met"
#line 3354 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3354 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3354 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3354 "cplus.met"
            } else {
#line 3354 "cplus.met"
                tokenAhead = 0 ;
#line 3354 "cplus.met"
            }
#line 3354 "cplus.met"
#line 3355 "cplus.met"
            {
#line 3355 "cplus.met"
                PPTREE _ptTree0=0;
#line 3355 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3355 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3355 "cplus.met"
                }
#line 3355 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3355 "cplus.met"
            }
#line 3355 "cplus.met"
#line 3356 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3356 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3356 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3356 "cplus.met"
            } else {
#line 3356 "cplus.met"
                tokenAhead = 0 ;
#line 3356 "cplus.met"
            }
#line 3356 "cplus.met"
#line 3357 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3357 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3357 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3357 "cplus.met"
            } else {
#line 3357 "cplus.met"
                tokenAhead = 0 ;
#line 3357 "cplus.met"
            }
#line 3357 "cplus.met"
#line 3357 "cplus.met"
            break;
#line 3357 "cplus.met"
#line 3359 "cplus.met"
        case AOUV : 
#line 3359 "cplus.met"
#line 3359 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3359 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3359 "cplus.met"
            }
#line 3359 "cplus.met"
            break;
#line 3359 "cplus.met"
#line 3360 "cplus.met"
        case FOR : 
#line 3360 "cplus.met"
            tokenAhead = 0 ;
#line 3360 "cplus.met"
            CommTerm();
#line 3360 "cplus.met"
#line 3360 "cplus.met"
            {
#line 3360 "cplus.met"
                PPTREE _ptTree0=0;
#line 3360 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 73, cplus))== (PPTREE) -1 ) {
#line 3360 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3360 "cplus.met"
                }
#line 3360 "cplus.met"
                _retValue =_ptTree0;
#line 3360 "cplus.met"
                goto statement_ret;
#line 3360 "cplus.met"
            }
#line 3360 "cplus.met"
            break;
#line 3360 "cplus.met"
#line 3361 "cplus.met"
        case GOTO : 
#line 3361 "cplus.met"
            tokenAhead = 0 ;
#line 3361 "cplus.met"
            CommTerm();
#line 3361 "cplus.met"
#line 3362 "cplus.met"
#line 3363 "cplus.met"
            {
#line 3363 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3363 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3363 "cplus.met"
                {
#line 3363 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3363 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3363 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3363 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3363 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3363 "cplus.met"
                    } else {
#line 3363 "cplus.met"
                        tokenAhead = 0 ;
#line 3363 "cplus.met"
                    }
#line 3363 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3363 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3363 "cplus.met"
                }
#line 3363 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3363 "cplus.met"
                statTree=_ptRes0;
#line 3363 "cplus.met"
            }
#line 3363 "cplus.met"
#line 3364 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3364 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3364 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3364 "cplus.met"
            } else {
#line 3364 "cplus.met"
                tokenAhead = 0 ;
#line 3364 "cplus.met"
            }
#line 3364 "cplus.met"
#line 3364 "cplus.met"
            break;
#line 3364 "cplus.met"
#line 3366 "cplus.met"
        case IF : 
#line 3366 "cplus.met"
            tokenAhead = 0 ;
#line 3366 "cplus.met"
            CommTerm();
#line 3366 "cplus.met"
#line 3367 "cplus.met"
#line 3368 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3368 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3368 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3368 "cplus.met"
            } else {
#line 3368 "cplus.met"
                tokenAhead = 0 ;
#line 3368 "cplus.met"
            }
#line 3368 "cplus.met"
#line 3369 "cplus.met"
            {
#line 3369 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3369 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3369 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3369 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3369 "cplus.met"
                }
#line 3369 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3369 "cplus.met"
                statTree=_ptRes0;
#line 3369 "cplus.met"
            }
#line 3369 "cplus.met"
#line 3370 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3370 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3370 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3370 "cplus.met"
            } else {
#line 3370 "cplus.met"
                tokenAhead = 0 ;
#line 3370 "cplus.met"
            }
#line 3370 "cplus.met"
#line 3371 "cplus.met"
            {
#line 3371 "cplus.met"
                switchContext = 0 ;
#line 3371 "cplus.met"
#line 3372 "cplus.met"
                {
#line 3372 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3372 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3372 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3372 "cplus.met"
                    }
#line 3372 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3372 "cplus.met"
                }
#line 3372 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3372 "cplus.met"
            }
#line 3372 "cplus.met"
#line 3373 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
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
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3375 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3375 "cplus.met"
                        }
#line 3375 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3375 "cplus.met"
                    }
#line 3375 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3375 "cplus.met"
                }
#line 3375 "cplus.met"
            }
#line 3375 "cplus.met"
#line 3375 "cplus.met"
            break;
#line 3375 "cplus.met"
#line 3377 "cplus.met"
        case PVIR : 
#line 3377 "cplus.met"
            tokenAhead = 0 ;
#line 3377 "cplus.met"
            CommTerm();
#line 3377 "cplus.met"
#line 3377 "cplus.met"
            {
#line 3377 "cplus.met"
                PPTREE _ptRes0=0;
#line 3377 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3377 "cplus.met"
                statTree=_ptRes0;
#line 3377 "cplus.met"
            }
#line 3377 "cplus.met"
            break;
#line 3377 "cplus.met"
#line 3378 "cplus.met"
        case RETURN : 
#line 3378 "cplus.met"
            tokenAhead = 0 ;
#line 3378 "cplus.met"
            CommTerm();
#line 3378 "cplus.met"
#line 3379 "cplus.met"
#line 3380 "cplus.met"
            {
#line 3380 "cplus.met"
                PPTREE _ptRes0=0;
#line 3380 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3380 "cplus.met"
                statTree=_ptRes0;
#line 3380 "cplus.met"
            }
#line 3380 "cplus.met"
#line 3381 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3381 "cplus.met"
#line 3382 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3382 "cplus.met"
#line 3382 "cplus.met"
            }
#line 3382 "cplus.met"
#line 3383 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3383 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3383 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3383 "cplus.met"
            } else {
#line 3383 "cplus.met"
                tokenAhead = 0 ;
#line 3383 "cplus.met"
            }
#line 3383 "cplus.met"
#line 3383 "cplus.met"
            break;
#line 3383 "cplus.met"
#line 3385 "cplus.met"
        case SWITCH : 
#line 3385 "cplus.met"
            tokenAhead = 0 ;
#line 3385 "cplus.met"
            CommTerm();
#line 3385 "cplus.met"
#line 3386 "cplus.met"
#line 3387 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3387 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3387 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3387 "cplus.met"
            } else {
#line 3387 "cplus.met"
                tokenAhead = 0 ;
#line 3387 "cplus.met"
            }
#line 3387 "cplus.met"
#line 3388 "cplus.met"
            {
#line 3388 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3388 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3388 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3388 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3388 "cplus.met"
                }
#line 3388 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3388 "cplus.met"
                statTree=_ptRes0;
#line 3388 "cplus.met"
            }
#line 3388 "cplus.met"
#line 3389 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3389 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3389 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3389 "cplus.met"
            } else {
#line 3389 "cplus.met"
                tokenAhead = 0 ;
#line 3389 "cplus.met"
            }
#line 3389 "cplus.met"
#line 3390 "cplus.met"
            {
#line 3390 "cplus.met"
                switchContext = 0 ;
#line 3390 "cplus.met"
#line 3391 "cplus.met"
                {
#line 3391 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3391 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 3391 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3391 "cplus.met"
                    }
#line 3391 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3391 "cplus.met"
                }
#line 3391 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3391 "cplus.met"
            }
#line 3391 "cplus.met"
#line 3391 "cplus.met"
            break;
#line 3391 "cplus.met"
#line 3393 "cplus.met"
        case WHILE : 
#line 3393 "cplus.met"
            tokenAhead = 0 ;
#line 3393 "cplus.met"
            CommTerm();
#line 3393 "cplus.met"
#line 3394 "cplus.met"
#line 3395 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3395 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3395 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3395 "cplus.met"
            } else {
#line 3395 "cplus.met"
                tokenAhead = 0 ;
#line 3395 "cplus.met"
            }
#line 3395 "cplus.met"
#line 3396 "cplus.met"
            {
#line 3396 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3396 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3396 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3396 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3396 "cplus.met"
                }
#line 3396 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3396 "cplus.met"
                statTree=_ptRes0;
#line 3396 "cplus.met"
            }
#line 3396 "cplus.met"
#line 3397 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3397 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3397 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3397 "cplus.met"
            } else {
#line 3397 "cplus.met"
                tokenAhead = 0 ;
#line 3397 "cplus.met"
            }
#line 3397 "cplus.met"
#line 3398 "cplus.met"
            {
#line 3398 "cplus.met"
                switchContext = 0 ;
#line 3398 "cplus.met"
#line 3399 "cplus.met"
                {
#line 3399 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3399 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3399 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3399 "cplus.met"
                    }
#line 3399 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3399 "cplus.met"
                }
#line 3399 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3399 "cplus.met"
            }
#line 3399 "cplus.met"
#line 3399 "cplus.met"
            break;
#line 3399 "cplus.met"
#line 3401 "cplus.met"
        case FORALLSONS : 
#line 3401 "cplus.met"
            tokenAhead = 0 ;
#line 3401 "cplus.met"
            CommTerm();
#line 3401 "cplus.met"
#line 3402 "cplus.met"
#line 3403 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3403 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3403 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3403 "cplus.met"
            } else {
#line 3403 "cplus.met"
                tokenAhead = 0 ;
#line 3403 "cplus.met"
            }
#line 3403 "cplus.met"
#line 3404 "cplus.met"
            {
#line 3404 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3404 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3404 "cplus.met"
                {
#line 3404 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3404 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3404 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3404 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3404 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3404 "cplus.met"
                    } else {
#line 3404 "cplus.met"
                        tokenAhead = 0 ;
#line 3404 "cplus.met"
                    }
#line 3404 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3404 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3404 "cplus.met"
                }
#line 3404 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3404 "cplus.met"
                statTree=_ptRes0;
#line 3404 "cplus.met"
            }
#line 3404 "cplus.met"
#line 3405 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3405 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3405 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3405 "cplus.met"
            } else {
#line 3405 "cplus.met"
                tokenAhead = 0 ;
#line 3405 "cplus.met"
            }
#line 3405 "cplus.met"
#line 3406 "cplus.met"
            {
#line 3406 "cplus.met"
                switchContext = 0 ;
#line 3406 "cplus.met"
#line 3407 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 133, cplus))){
#line 3407 "cplus.met"
#line 3408 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3408 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3408 "cplus.met"
                    }
#line 3408 "cplus.met"
                }
#line 3408 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3408 "cplus.met"
            }
#line 3408 "cplus.met"
#line 3409 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3409 "cplus.met"
#line 3410 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3410 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3410 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3410 "cplus.met"
            } else {
#line 3410 "cplus.met"
                tokenAhead = 0 ;
#line 3410 "cplus.met"
            }
#line 3410 "cplus.met"
#line 3410 "cplus.met"
            break;
#line 3410 "cplus.met"
#line 3412 "cplus.met"
        case THROW : 
#line 3412 "cplus.met"
            tokenAhead = 0 ;
#line 3412 "cplus.met"
            CommTerm();
#line 3412 "cplus.met"
#line 3413 "cplus.met"
#line 3414 "cplus.met"
            {
#line 3414 "cplus.met"
                PPTREE _ptRes0=0;
#line 3414 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3414 "cplus.met"
                statTree=_ptRes0;
#line 3414 "cplus.met"
            }
#line 3414 "cplus.met"
#line 3415 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3415 "cplus.met"
#line 3416 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3416 "cplus.met"
#line 3416 "cplus.met"
            }
#line 3416 "cplus.met"
#line 3417 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3417 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3417 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3417 "cplus.met"
            } else {
#line 3417 "cplus.met"
                tokenAhead = 0 ;
#line 3417 "cplus.met"
            }
#line 3417 "cplus.met"
#line 3417 "cplus.met"
            break;
#line 3417 "cplus.met"
#line 3419 "cplus.met"
        case TRY : 
#line 3419 "cplus.met"
#line 3419 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 57, cplus))== (PPTREE) -1 ) {
#line 3419 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3419 "cplus.met"
            }
#line 3419 "cplus.met"
            break;
#line 3419 "cplus.met"
#line 3420 "cplus.met"
        case META : 
#line 3420 "cplus.met"
#line 3421 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 84, cplus)){
#line 3421 "cplus.met"
#line 3422 "cplus.met"
#line 3423 "cplus.met"
                {
#line 3423 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3423 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3423 "cplus.met"
                    {
#line 3423 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3423 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3423 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3423 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3423 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3423 "cplus.met"
                        } else {
#line 3423 "cplus.met"
                            tokenAhead = 0 ;
#line 3423 "cplus.met"
                        }
#line 3423 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3423 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3423 "cplus.met"
                    }
#line 3423 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3423 "cplus.met"
                    statTree=_ptRes0;
#line 3423 "cplus.met"
                }
#line 3423 "cplus.met"
#line 3424 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3424 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3424 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3424 "cplus.met"
                } else {
#line 3424 "cplus.met"
                    tokenAhead = 0 ;
#line 3424 "cplus.met"
                }
#line 3424 "cplus.met"
#line 3425 "cplus.met"
                {
#line 3425 "cplus.met"
                    switchContext = 0 ;
#line 3425 "cplus.met"
#line 3426 "cplus.met"
                    {
#line 3426 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3426 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3426 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3426 "cplus.met"
                        }
#line 3426 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3426 "cplus.met"
                    }
#line 3426 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3426 "cplus.met"
                }
#line 3426 "cplus.met"
#line 3426 "cplus.met"
#line 3426 "cplus.met"
            } else {
#line 3426 "cplus.met"
#line 3429 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 76, cplus)){
#line 3429 "cplus.met"
#line 3431 "cplus.met"
                    
#line 3431 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3431 "cplus.met"
                    goto statement_exit;
#line 3431 "cplus.met"
#line 3432 "cplus.met"
                } else {
#line 3432 "cplus.met"
#line 3434 "cplus.met"
#line 3435 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3435 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3435 "cplus.met"
                    }
#line 3435 "cplus.met"
#line 3436 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3436 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3436 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3436 "cplus.met"
                    } else {
#line 3436 "cplus.met"
                        tokenAhead = 0 ;
#line 3436 "cplus.met"
                    }
#line 3436 "cplus.met"
#line 3436 "cplus.met"
                }
#line 3436 "cplus.met"
            }
#line 3436 "cplus.met"
            break;
#line 3436 "cplus.met"
#line 3440 "cplus.met"
        case CASE : 
#line 3440 "cplus.met"
#line 3441 "cplus.met"
            if (! (switchContext)){
#line 3441 "cplus.met"
#line 3442 "cplus.met"
                
#line 3442 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3442 "cplus.met"
                goto statement_exit;
#line 3442 "cplus.met"
#line 3442 "cplus.met"
            } else {
#line 3442 "cplus.met"
#line 3444 "cplus.met"
                {
#line 3444 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3444 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3444 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3444 "cplus.met"
                    }
#line 3444 "cplus.met"
                    _retValue =_ptTree0;
#line 3444 "cplus.met"
                    goto statement_ret;
#line 3444 "cplus.met"
                }
#line 3444 "cplus.met"
            }
#line 3444 "cplus.met"
            break;
#line 3444 "cplus.met"
#line 3445 "cplus.met"
        case DEFAULT : 
#line 3445 "cplus.met"
#line 3446 "cplus.met"
            if (! (switchContext)){
#line 3446 "cplus.met"
#line 3447 "cplus.met"
                
#line 3447 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3447 "cplus.met"
                goto statement_exit;
#line 3447 "cplus.met"
#line 3447 "cplus.met"
            } else {
#line 3447 "cplus.met"
#line 3449 "cplus.met"
                {
#line 3449 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3449 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3449 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3449 "cplus.met"
                    }
#line 3449 "cplus.met"
                    _retValue =_ptTree0;
#line 3449 "cplus.met"
                    goto statement_ret;
#line 3449 "cplus.met"
                }
#line 3449 "cplus.met"
            }
#line 3449 "cplus.met"
            break;
#line 3449 "cplus.met"
#line 3450 "cplus.met"
        case IDENT : 
#line 3450 "cplus.met"
#line 3451 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3451 "cplus.met"
            switch( lexEl.Value) {
#line 3451 "cplus.met"
#line 3452 "cplus.met"
                case META : 
#line 3452 "cplus.met"
                case FUNC_SPEC : 
#line 3452 "cplus.met"
#line 3453 "cplus.met"
#line 3454 "cplus.met"
                    {
#line 3454 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3454 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3454 "cplus.met"
                        {
#line 3454 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3454 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3454 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3454 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3454 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3454 "cplus.met"
                            } else {
#line 3454 "cplus.met"
                                tokenAhead = 0 ;
#line 3454 "cplus.met"
                            }
#line 3454 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3454 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3454 "cplus.met"
                        }
#line 3454 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3454 "cplus.met"
                        statTree=_ptRes0;
#line 3454 "cplus.met"
                    }
#line 3454 "cplus.met"
#line 3457 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3457 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3457 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3457 "cplus.met"
                    } else {
#line 3457 "cplus.met"
                        tokenAhead = 0 ;
#line 3457 "cplus.met"
                    }
#line 3457 "cplus.met"
#line 3458 "cplus.met"
                    {
#line 3458 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3458 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3458 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3458 "cplus.met"
                        }
#line 3458 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3458 "cplus.met"
                    }
#line 3458 "cplus.met"
#line 3459 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3459 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3459 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3459 "cplus.met"
                    } else {
#line 3459 "cplus.met"
                        tokenAhead = 0 ;
#line 3459 "cplus.met"
                    }
#line 3459 "cplus.met"
#line 3459 "cplus.met"
                    break;
#line 3459 "cplus.met"
#line 3464 "cplus.met"
                default : 
#line 3464 "cplus.met"
#line 3462 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 84, cplus)){
#line 3462 "cplus.met"
#line 3463 "cplus.met"
#line 3464 "cplus.met"
                        {
#line 3464 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3464 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3464 "cplus.met"
                            {
#line 3464 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3464 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3464 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3464 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3464 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3464 "cplus.met"
                                } else {
#line 3464 "cplus.met"
                                    tokenAhead = 0 ;
#line 3464 "cplus.met"
                                }
#line 3464 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3464 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3464 "cplus.met"
                            }
#line 3464 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3464 "cplus.met"
                            statTree=_ptRes0;
#line 3464 "cplus.met"
                        }
#line 3464 "cplus.met"
#line 3467 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3467 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3467 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3467 "cplus.met"
                        } else {
#line 3467 "cplus.met"
                            tokenAhead = 0 ;
#line 3467 "cplus.met"
                        }
#line 3467 "cplus.met"
#line 3468 "cplus.met"
                        {
#line 3468 "cplus.met"
                            switchContext = 0 ;
#line 3468 "cplus.met"
#line 3469 "cplus.met"
                            {
#line 3469 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3469 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3469 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3469 "cplus.met"
                                }
#line 3469 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3469 "cplus.met"
                            }
#line 3469 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3469 "cplus.met"
                        }
#line 3469 "cplus.met"
#line 3469 "cplus.met"
#line 3469 "cplus.met"
                    } else {
#line 3469 "cplus.met"
#line 3472 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 76, cplus)){
#line 3472 "cplus.met"
#line 3475 "cplus.met"
                            
#line 3475 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3475 "cplus.met"
                            goto statement_exit;
#line 3475 "cplus.met"
#line 3476 "cplus.met"
                        } else {
#line 3476 "cplus.met"
#line 3478 "cplus.met"
#line 3479 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 3479 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3479 "cplus.met"
                            }
#line 3479 "cplus.met"
#line 3479 "cplus.met"
                        }
#line 3479 "cplus.met"
                    }
#line 3479 "cplus.met"
                    break;
#line 3479 "cplus.met"
            }
#line 3479 "cplus.met"
            break;
#line 3479 "cplus.met"
#line 3485 "cplus.met"
        default : 
#line 3485 "cplus.met"
#line 3483 "cplus.met"
#line 3484 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 76, cplus)){
#line 3484 "cplus.met"
#line 3485 "cplus.met"
                
#line 3485 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3485 "cplus.met"
                goto statement_exit;
#line 3485 "cplus.met"
#line 3485 "cplus.met"
            } else {
#line 3485 "cplus.met"
#line 3487 "cplus.met"
#line 3488 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3488 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3488 "cplus.met"
                }
#line 3488 "cplus.met"
#line 3489 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3489 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3489 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3489 "cplus.met"
                } else {
#line 3489 "cplus.met"
                    tokenAhead = 0 ;
#line 3489 "cplus.met"
                }
#line 3489 "cplus.met"
#line 3489 "cplus.met"
            }
#line 3489 "cplus.met"
#line 3489 "cplus.met"
            break;
#line 3489 "cplus.met"
    }
#line 3489 "cplus.met"
#line 3493 "cplus.met"
    {
#line 3493 "cplus.met"
        _retValue = statTree ;
#line 3493 "cplus.met"
        goto statement_ret;
#line 3493 "cplus.met"
        
#line 3493 "cplus.met"
    }
#line 3493 "cplus.met"
#line 3493 "cplus.met"
#line 3493 "cplus.met"

#line 3494 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3494 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3494 "cplus.met"
switchContext =  _oldswitchContext;
#line 3494 "cplus.met"
return((PPTREE) 0);
#line 3494 "cplus.met"

#line 3494 "cplus.met"
statement_exit :
#line 3494 "cplus.met"

#line 3494 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3494 "cplus.met"
    _funcLevel--;
#line 3494 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3494 "cplus.met"
    return((PPTREE) -1) ;
#line 3494 "cplus.met"

#line 3494 "cplus.met"
statement_ret :
#line 3494 "cplus.met"
    
#line 3494 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3494 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3494 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3494 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3494 "cplus.met"
    return _retValue ;
#line 3494 "cplus.met"
}
#line 3494 "cplus.met"

#line 3494 "cplus.met"
#line 3329 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3329 "cplus.met"
{
#line 3329 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3329 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3329 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3329 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3329 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3329 "cplus.met"
#line 3329 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3329 "cplus.met"
#line 3331 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3331 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3331 "cplus.met"
    }
#line 3331 "cplus.met"
#line 3332 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3332 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3332 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3332 "cplus.met"
    } else {
#line 3332 "cplus.met"
        tokenAhead = 0 ;
#line 3332 "cplus.met"
    }
#line 3332 "cplus.met"
#line 3333 "cplus.met"
    {
#line 3333 "cplus.met"
        _retValue = statTree ;
#line 3333 "cplus.met"
        goto statement_expression_ret;
#line 3333 "cplus.met"
        
#line 3333 "cplus.met"
    }
#line 3333 "cplus.met"
#line 3333 "cplus.met"
#line 3333 "cplus.met"

#line 3334 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3334 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3334 "cplus.met"
return((PPTREE) 0);
#line 3334 "cplus.met"

#line 3334 "cplus.met"
statement_expression_exit :
#line 3334 "cplus.met"

#line 3334 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3334 "cplus.met"
    _funcLevel--;
#line 3334 "cplus.met"
    return((PPTREE) -1) ;
#line 3334 "cplus.met"

#line 3334 "cplus.met"
statement_expression_ret :
#line 3334 "cplus.met"
    
#line 3334 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3334 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3334 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3334 "cplus.met"
    return _retValue ;
#line 3334 "cplus.met"
}
#line 3334 "cplus.met"

#line 3334 "cplus.met"
#line 2929 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 2929 "cplus.met"
{
#line 2929 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2929 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2929 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2929 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 2929 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2929 "cplus.met"
#line 2929 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2929 "cplus.met"
#line 2929 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2929 "cplus.met"
#line 2931 "cplus.met"
    {
#line 2931 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2931 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 2931 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2931 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 2931 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 2931 "cplus.met"
        } else {
#line 2931 "cplus.met"
            tokenAhead = 0 ;
#line 2931 "cplus.met"
        }
#line 2931 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2931 "cplus.met"
        retTree=_ptRes0;
#line 2931 "cplus.met"
    }
#line 2931 "cplus.met"
#line 2932 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 2932 "cplus.met"
#line 2933 "cplus.met"
#line 2934 "cplus.met"
        list =AddList(list ,retTree );
#line 2934 "cplus.met"
#line 2934 "cplus.met"
        _addlist1 = list ;
#line 2934 "cplus.met"
#line 2935 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 2935 "cplus.met"
#line 2936 "cplus.met"
#line 2936 "cplus.met"
            {
#line 2936 "cplus.met"
                PPTREE _ptTree0=0;
#line 2936 "cplus.met"
                {
#line 2936 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2936 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 2936 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2936 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 2936 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 2936 "cplus.met"
                    } else {
#line 2936 "cplus.met"
                        tokenAhead = 0 ;
#line 2936 "cplus.met"
                    }
#line 2936 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2936 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2936 "cplus.met"
                }
#line 2936 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2936 "cplus.met"
            }
#line 2936 "cplus.met"
#line 2936 "cplus.met"
            if (list){
#line 2936 "cplus.met"
#line 2936 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2936 "cplus.met"
            } else {
#line 2936 "cplus.met"
#line 2936 "cplus.met"
                list = _addlist1 ;
#line 2936 "cplus.met"
            }
#line 2936 "cplus.met"
        } 
#line 2936 "cplus.met"
#line 2937 "cplus.met"
        {
#line 2937 "cplus.met"
            PPTREE _ptRes0=0;
#line 2937 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 2937 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 2937 "cplus.met"
            retTree=_ptRes0;
#line 2937 "cplus.met"
        }
#line 2937 "cplus.met"
#line 2937 "cplus.met"
#line 2937 "cplus.met"
    }
#line 2937 "cplus.met"
#line 2939 "cplus.met"
    {
#line 2939 "cplus.met"
        _retValue = retTree ;
#line 2939 "cplus.met"
        goto string_list_ret;
#line 2939 "cplus.met"
        
#line 2939 "cplus.met"
    }
#line 2939 "cplus.met"
#line 2939 "cplus.met"
#line 2939 "cplus.met"

#line 2940 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2940 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2940 "cplus.met"
return((PPTREE) 0);
#line 2940 "cplus.met"

#line 2940 "cplus.met"
string_list_exit :
#line 2940 "cplus.met"

#line 2940 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 2940 "cplus.met"
    _funcLevel--;
#line 2940 "cplus.met"
    return((PPTREE) -1) ;
#line 2940 "cplus.met"

#line 2940 "cplus.met"
string_list_ret :
#line 2940 "cplus.met"
    
#line 2940 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 2940 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2940 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2940 "cplus.met"
    return _retValue ;
#line 2940 "cplus.met"
}
#line 2940 "cplus.met"

#line 2940 "cplus.met"
#line 3501 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3501 "cplus.met"
{
#line 3501 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3501 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3501 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3501 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3501 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3501 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3501 "cplus.met"
#line 3501 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3501 "cplus.met"
#line 3501 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3501 "cplus.met"
#line 3503 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3503 "cplus.met"
    switch( lexEl.Value) {
#line 3503 "cplus.met"
#line 3504 "cplus.met"
        case CASE : 
#line 3504 "cplus.met"
            tokenAhead = 0 ;
#line 3504 "cplus.met"
            CommTerm();
#line 3504 "cplus.met"
#line 3505 "cplus.met"
#line 3506 "cplus.met"
            {
#line 3506 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3506 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3506 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3506 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3506 "cplus.met"
                }
#line 3506 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3506 "cplus.met"
                retTree=_ptRes0;
#line 3506 "cplus.met"
            }
#line 3506 "cplus.met"
#line 3507 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3507 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3507 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3507 "cplus.met"
            } else {
#line 3507 "cplus.met"
                tokenAhead = 0 ;
#line 3507 "cplus.met"
            }
#line 3507 "cplus.met"
#line 3508 "cplus.met"
            {
#line 3508 "cplus.met"
                switchContext = 0 ;
#line 3508 "cplus.met"
#line 3509 "cplus.met"
#line 3509 "cplus.met"
                _addlist1 = list ;
#line 3509 "cplus.met"
#line 3509 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 133, cplus)) || 
#line 3509 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 129, cplus))) { 
#line 3509 "cplus.met"
#line 3510 "cplus.met"
#line 3510 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3510 "cplus.met"
#line 3510 "cplus.met"
                    if (list){
#line 3510 "cplus.met"
#line 3510 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3510 "cplus.met"
                    } else {
#line 3510 "cplus.met"
#line 3510 "cplus.met"
                        list = _addlist1 ;
#line 3510 "cplus.met"
                    }
#line 3510 "cplus.met"
                } 
#line 3510 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3510 "cplus.met"
            }
#line 3510 "cplus.met"
#line 3511 "cplus.met"
            {
#line 3511 "cplus.met"
                PPTREE _ptTree0=0;
#line 3511 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3511 "cplus.met"
                _retValue =_ptTree0;
#line 3511 "cplus.met"
                goto switch_elem_ret;
#line 3511 "cplus.met"
            }
#line 3511 "cplus.met"
#line 3511 "cplus.met"
            break;
#line 3511 "cplus.met"
#line 3513 "cplus.met"
        case DEFAULT : 
#line 3513 "cplus.met"
            tokenAhead = 0 ;
#line 3513 "cplus.met"
            CommTerm();
#line 3513 "cplus.met"
#line 3514 "cplus.met"
#line 3515 "cplus.met"
            {
#line 3515 "cplus.met"
                PPTREE _ptRes0=0;
#line 3515 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3515 "cplus.met"
                retTree=_ptRes0;
#line 3515 "cplus.met"
            }
#line 3515 "cplus.met"
#line 3516 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3516 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3516 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3516 "cplus.met"
            } else {
#line 3516 "cplus.met"
                tokenAhead = 0 ;
#line 3516 "cplus.met"
            }
#line 3516 "cplus.met"
#line 3517 "cplus.met"
            {
#line 3517 "cplus.met"
                switchContext = 0 ;
#line 3517 "cplus.met"
#line 3518 "cplus.met"
#line 3518 "cplus.met"
                _addlist2 = list ;
#line 3518 "cplus.met"
#line 3518 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 133, cplus)) || 
#line 3518 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 129, cplus))) { 
#line 3518 "cplus.met"
#line 3519 "cplus.met"
#line 3519 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3519 "cplus.met"
#line 3519 "cplus.met"
                    if (list){
#line 3519 "cplus.met"
#line 3519 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3519 "cplus.met"
                    } else {
#line 3519 "cplus.met"
#line 3519 "cplus.met"
                        list = _addlist2 ;
#line 3519 "cplus.met"
                    }
#line 3519 "cplus.met"
                } 
#line 3519 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3519 "cplus.met"
            }
#line 3519 "cplus.met"
#line 3520 "cplus.met"
            {
#line 3520 "cplus.met"
                PPTREE _ptTree0=0;
#line 3520 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3520 "cplus.met"
                _retValue =_ptTree0;
#line 3520 "cplus.met"
                goto switch_elem_ret;
#line 3520 "cplus.met"
            }
#line 3520 "cplus.met"
#line 3520 "cplus.met"
            break;
#line 3520 "cplus.met"
#line 3526 "cplus.met"
        default : 
#line 3526 "cplus.met"
#line 3523 "cplus.met"
#line 3525 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 130, cplus)){
#line 3525 "cplus.met"
#line 3527 "cplus.met"
                {
#line 3527 "cplus.met"
                    _retValue = retTree ;
#line 3527 "cplus.met"
                    goto switch_elem_ret;
#line 3527 "cplus.met"
                    
#line 3527 "cplus.met"
                }
#line 3527 "cplus.met"
            } else {
#line 3527 "cplus.met"
#line 3529 "cplus.met"
                
#line 3529 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3529 "cplus.met"
                goto switch_elem_exit;
#line 3529 "cplus.met"
            }
#line 3529 "cplus.met"
#line 3529 "cplus.met"
            break;
#line 3529 "cplus.met"
    }
#line 3529 "cplus.met"
#line 3529 "cplus.met"
#line 3531 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3531 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3531 "cplus.met"
switchContext =  _oldswitchContext;
#line 3531 "cplus.met"
return((PPTREE) 0);
#line 3531 "cplus.met"

#line 3531 "cplus.met"
switch_elem_exit :
#line 3531 "cplus.met"

#line 3531 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3531 "cplus.met"
    _funcLevel--;
#line 3531 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3531 "cplus.met"
    return((PPTREE) -1) ;
#line 3531 "cplus.met"

#line 3531 "cplus.met"
switch_elem_ret :
#line 3531 "cplus.met"
    
#line 3531 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3531 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3531 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3531 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3531 "cplus.met"
    return _retValue ;
#line 3531 "cplus.met"
}
#line 3531 "cplus.met"

#line 3531 "cplus.met"
