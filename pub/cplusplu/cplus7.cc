/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 2901 "cplus.met"
PPTREE cplus::simple_type_name ( int error_free)
#line 2901 "cplus.met"
{
#line 2901 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2901 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2901 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2901 "cplus.met"
    int _Debug = TRACE_RULE("simple_type_name",TRACE_ENTER,(PPTREE)0);
#line 2901 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2901 "cplus.met"
#line 2902 "cplus.met"
    if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT"))){
#line 2902 "cplus.met"
#line 2903 "cplus.met"
        {
#line 2903 "cplus.met"
            PPTREE _ptTree0=0;
#line 2903 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 2903 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(simple_type_name_exit,"simple_type_name")
#line 2903 "cplus.met"
            }
#line 2903 "cplus.met"
            _retValue =_ptTree0;
#line 2903 "cplus.met"
            goto simple_type_name_ret;
#line 2903 "cplus.met"
        }
#line 2903 "cplus.met"
    } else {
#line 2903 "cplus.met"
#line 2905 "cplus.met"
        
#line 2905 "cplus.met"
        LEX_EXIT ("",0);
#line 2905 "cplus.met"
        goto simple_type_name_exit;
#line 2905 "cplus.met"
    }
#line 2905 "cplus.met"
#line 2905 "cplus.met"
#line 2905 "cplus.met"

#line 2906 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2906 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2906 "cplus.met"
return((PPTREE) 0);
#line 2906 "cplus.met"

#line 2906 "cplus.met"
simple_type_name_exit :
#line 2906 "cplus.met"

#line 2906 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_EXIT,(PPTREE)0);
#line 2906 "cplus.met"
    _funcLevel--;
#line 2906 "cplus.met"
    return((PPTREE) -1) ;
#line 2906 "cplus.met"

#line 2906 "cplus.met"
simple_type_name_ret :
#line 2906 "cplus.met"
    
#line 2906 "cplus.met"
    _Debug = TRACE_RULE("simple_type_name",TRACE_RETURN,_retValue);
#line 2906 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2906 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2906 "cplus.met"
    return _retValue ;
#line 2906 "cplus.met"
}
#line 2906 "cplus.met"

#line 2906 "cplus.met"
#line 2767 "cplus.met"
PPTREE cplus::sizeof_type ( int error_free)
#line 2767 "cplus.met"
{
#line 2767 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2767 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2767 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2767 "cplus.met"
    int _Debug = TRACE_RULE("sizeof_type",TRACE_ENTER,(PPTREE)0);
#line 2767 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2767 "cplus.met"
#line 2767 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2767 "cplus.met"
#line 2769 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2769 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 2769 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,"(")
#line 2769 "cplus.met"
    } else {
#line 2769 "cplus.met"
        tokenAhead = 0 ;
#line 2769 "cplus.met"
    }
#line 2769 "cplus.met"
#line 2770 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(type_name)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 2770 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(sizeof_type_exit,"sizeof_type")
#line 2770 "cplus.met"
    }
#line 2770 "cplus.met"
#line 2771 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2771 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 2771 "cplus.met"
        MulFreeTree(1,expTree);
        TOKEN_EXIT(sizeof_type_exit,")")
#line 2771 "cplus.met"
    } else {
#line 2771 "cplus.met"
        tokenAhead = 0 ;
#line 2771 "cplus.met"
    }
#line 2771 "cplus.met"
#line 2772 "cplus.met"
    {
#line 2772 "cplus.met"
        _retValue = expTree ;
#line 2772 "cplus.met"
        goto sizeof_type_ret;
#line 2772 "cplus.met"
        
#line 2772 "cplus.met"
    }
#line 2772 "cplus.met"
#line 2772 "cplus.met"
#line 2772 "cplus.met"

#line 2773 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2773 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2773 "cplus.met"
return((PPTREE) 0);
#line 2773 "cplus.met"

#line 2773 "cplus.met"
sizeof_type_exit :
#line 2773 "cplus.met"

#line 2773 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_EXIT,(PPTREE)0);
#line 2773 "cplus.met"
    _funcLevel--;
#line 2773 "cplus.met"
    return((PPTREE) -1) ;
#line 2773 "cplus.met"

#line 2773 "cplus.met"
sizeof_type_ret :
#line 2773 "cplus.met"
    
#line 2773 "cplus.met"
    _Debug = TRACE_RULE("sizeof_type",TRACE_RETURN,_retValue);
#line 2773 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2773 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2773 "cplus.met"
    return _retValue ;
#line 2773 "cplus.met"
}
#line 2773 "cplus.met"

#line 2773 "cplus.met"
#line 1010 "cplus.met"
PPTREE cplus::stat_all ( int error_free)
#line 1010 "cplus.met"
{
#line 1010 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1010 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1010 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1010 "cplus.met"
    int _Debug = TRACE_RULE("stat_all",TRACE_ENTER,(PPTREE)0);
#line 1010 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1010 "cplus.met"
#line 1010 "cplus.met"
    PPTREE stat = (PPTREE) 0;
#line 1010 "cplus.met"
#line 1012 "cplus.met"
    if (((((NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 133, cplus)) || 
#line 1012 "cplus.met"
          (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(data_declaration), 38, cplus))) || 
#line 1012 "cplus.met"
         (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(stat_dir), 129, cplus))) || 
#line 1012 "cplus.met"
        (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(exception), 56, cplus))) || 
#line 1012 "cplus.met"
       (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(ext_data_declaration), 69, cplus))){
#line 1012 "cplus.met"
#line 1017 "cplus.met"
        {
#line 1017 "cplus.met"
            _retValue = stat ;
#line 1017 "cplus.met"
            goto stat_all_ret;
#line 1017 "cplus.met"
            
#line 1017 "cplus.met"
        }
#line 1017 "cplus.met"
    } else {
#line 1017 "cplus.met"
#line 1019 "cplus.met"
        {
#line 1019 "cplus.met"
            PPTREE _ptTree0=0;
#line 1019 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1019 "cplus.met"
                MulFreeTree(2,_ptTree0,stat);
                PROG_EXIT(stat_all_exit,"stat_all")
#line 1019 "cplus.met"
            }
#line 1019 "cplus.met"
            _retValue =_ptTree0;
#line 1019 "cplus.met"
            goto stat_all_ret;
#line 1019 "cplus.met"
        }
#line 1019 "cplus.met"
    }
#line 1019 "cplus.met"
#line 1019 "cplus.met"
#line 1019 "cplus.met"

#line 1020 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1020 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1020 "cplus.met"
return((PPTREE) 0);
#line 1020 "cplus.met"

#line 1020 "cplus.met"
stat_all_exit :
#line 1020 "cplus.met"

#line 1020 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_EXIT,(PPTREE)0);
#line 1020 "cplus.met"
    _funcLevel--;
#line 1020 "cplus.met"
    return((PPTREE) -1) ;
#line 1020 "cplus.met"

#line 1020 "cplus.met"
stat_all_ret :
#line 1020 "cplus.met"
    
#line 1020 "cplus.met"
    _Debug = TRACE_RULE("stat_all",TRACE_RETURN,_retValue);
#line 1020 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1020 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1020 "cplus.met"
    return _retValue ;
#line 1020 "cplus.met"
}
#line 1020 "cplus.met"

#line 1020 "cplus.met"
#line 1187 "cplus.met"
PPTREE cplus::stat_dir ( int error_free)
#line 1187 "cplus.met"
{
#line 1187 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1187 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1187 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1187 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir",TRACE_ENTER,(PPTREE)0);
#line 1187 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1187 "cplus.met"
#line 1187 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1187 "cplus.met"
#line 1189 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(directive), 50, cplus)){
#line 1189 "cplus.met"
#line 1190 "cplus.met"
        {
#line 1190 "cplus.met"
            _retValue = retTree ;
#line 1190 "cplus.met"
            goto stat_dir_ret;
#line 1190 "cplus.met"
            
#line 1190 "cplus.met"
        }
#line 1190 "cplus.met"
    }
#line 1190 "cplus.met"
#line 1191 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1191 "cplus.met"
    switch( lexEl.Value) {
#line 1191 "cplus.met"
#line 1192 "cplus.met"
        case META : 
#line 1192 "cplus.met"
        case IF_DIR : 
#line 1192 "cplus.met"
            tokenAhead = 0 ;
#line 1192 "cplus.met"
            CommTerm();
#line 1192 "cplus.met"
#line 1192 "cplus.met"
            {
#line 1192 "cplus.met"
                PPTREE _ptTree0=0;
#line 1192 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
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
        case IFDEF_DIR : 
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
#line 1194 "cplus.met"
        case IFNDEF_DIR : 
#line 1194 "cplus.met"
#line 1194 "cplus.met"
            {
#line 1194 "cplus.met"
                PPTREE _ptTree0=0;
#line 1194 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(stat_ifdef_dir)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1194 "cplus.met"
                    MulFreeTree(2,_ptTree0,retTree);
                    PROG_EXIT(stat_dir_exit,"stat_dir")
#line 1194 "cplus.met"
                }
#line 1194 "cplus.met"
                _retValue =_ptTree0;
#line 1194 "cplus.met"
                goto stat_dir_ret;
#line 1194 "cplus.met"
            }
#line 1194 "cplus.met"
            break;
#line 1194 "cplus.met"
        default :
#line 1194 "cplus.met"
            MulFreeTree(1,retTree);
            CASE_EXIT(stat_dir_exit,"either IF_DIR or IFDEF_DIR or IFNDEF_DIR")
#line 1194 "cplus.met"
            break;
#line 1194 "cplus.met"
    }
#line 1194 "cplus.met"
#line 1194 "cplus.met"
#line 1195 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1195 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1195 "cplus.met"
return((PPTREE) 0);
#line 1195 "cplus.met"

#line 1195 "cplus.met"
stat_dir_exit :
#line 1195 "cplus.met"

#line 1195 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_EXIT,(PPTREE)0);
#line 1195 "cplus.met"
    _funcLevel--;
#line 1195 "cplus.met"
    return((PPTREE) -1) ;
#line 1195 "cplus.met"

#line 1195 "cplus.met"
stat_dir_ret :
#line 1195 "cplus.met"
    
#line 1195 "cplus.met"
    _Debug = TRACE_RULE("stat_dir",TRACE_RETURN,_retValue);
#line 1195 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1195 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1195 "cplus.met"
    return _retValue ;
#line 1195 "cplus.met"
}
#line 1195 "cplus.met"

#line 1195 "cplus.met"
#line 3518 "cplus.met"
PPTREE cplus::stat_dir_switch ( int error_free)
#line 3518 "cplus.met"
{
#line 3518 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3518 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3518 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3518 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3518 "cplus.met"
    int _Debug = TRACE_RULE("stat_dir_switch",TRACE_ENTER,(PPTREE)0);
#line 3518 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3518 "cplus.met"
#line 3519 "cplus.met"
    {
#line 3519 "cplus.met"
        switchContext = 1 ;
#line 3519 "cplus.met"
#line 3520 "cplus.met"
        {
#line 3520 "cplus.met"
            PPTREE _ptTree0=0;
#line 3520 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_dir)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 3520 "cplus.met"
                MulFreeTree(1,_ptTree0);
                PROG_EXIT(stat_dir_switch_exit,"stat_dir_switch")
#line 3520 "cplus.met"
            }
#line 3520 "cplus.met"
            _retValue =_ptTree0;
#line 3520 "cplus.met"
            goto stat_dir_switch_ret;
#line 3520 "cplus.met"
        }
#line 3520 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3520 "cplus.met"
    }
#line 3520 "cplus.met"
#line 3520 "cplus.met"
#line 3520 "cplus.met"

#line 3521 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3521 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3521 "cplus.met"
switchContext =  _oldswitchContext;
#line 3521 "cplus.met"
return((PPTREE) 0);
#line 3521 "cplus.met"

#line 3521 "cplus.met"
stat_dir_switch_exit :
#line 3521 "cplus.met"

#line 3521 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_EXIT,(PPTREE)0);
#line 3521 "cplus.met"
    _funcLevel--;
#line 3521 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3521 "cplus.met"
    return((PPTREE) -1) ;
#line 3521 "cplus.met"

#line 3521 "cplus.met"
stat_dir_switch_ret :
#line 3521 "cplus.met"
    
#line 3521 "cplus.met"
    _Debug = TRACE_RULE("stat_dir_switch",TRACE_RETURN,_retValue);
#line 3521 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3521 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3521 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3521 "cplus.met"
    return _retValue ;
#line 3521 "cplus.met"
}
#line 3521 "cplus.met"

#line 3521 "cplus.met"
#line 1086 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1086 "cplus.met"
{
#line 1086 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1086 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1086 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1086 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1086 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1086 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1086 "cplus.met"
#line 1086 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1086 "cplus.met"
#line 1086 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1086 "cplus.met"
#line 1088 "cplus.met"
    {
#line 1088 "cplus.met"
        keepCarriage = 1 ;
#line 1088 "cplus.met"
#line 1089 "cplus.met"
#line 1090 "cplus.met"
        {
#line 1090 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1090 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1090 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1090 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1090 "cplus.met"
            }
#line 1090 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1090 "cplus.met"
            retTree=_ptRes0;
#line 1090 "cplus.met"
        }
#line 1090 "cplus.met"
#line 1091 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1091 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1091 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1091 "cplus.met"
        } else {
#line 1091 "cplus.met"
            tokenAhead = 0 ;
#line 1091 "cplus.met"
        }
#line 1091 "cplus.met"
#line 1091 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1091 "cplus.met"
    }
#line 1091 "cplus.met"
#line 1091 "cplus.met"
    _addlist1 = list ;
#line 1091 "cplus.met"
#line 1093 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1093 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1093 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1093 "cplus.met"
#line 1094 "cplus.met"
#line 1094 "cplus.met"
        {
#line 1094 "cplus.met"
            PPTREE _ptTree0=0;
#line 1094 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1094 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1094 "cplus.met"
            }
#line 1094 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1094 "cplus.met"
        }
#line 1094 "cplus.met"
#line 1094 "cplus.met"
        if (list){
#line 1094 "cplus.met"
#line 1094 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1094 "cplus.met"
        } else {
#line 1094 "cplus.met"
#line 1094 "cplus.met"
            list = _addlist1 ;
#line 1094 "cplus.met"
        }
#line 1094 "cplus.met"
    } 
#line 1094 "cplus.met"
#line 1095 "cplus.met"
    {
#line 1095 "cplus.met"
        PPTREE _ptTree0=0;
#line 1095 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1095 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1095 "cplus.met"
        }
#line 1095 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1095 "cplus.met"
    }
#line 1095 "cplus.met"
#line 1096 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1096 "cplus.met"
#line 1097 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1097 "cplus.met"
    switch( lexEl.Value) {
#line 1097 "cplus.met"
#line 1098 "cplus.met"
        case META : 
#line 1098 "cplus.met"
        case ELSE_DIR : 
#line 1098 "cplus.met"
            tokenAhead = 0 ;
#line 1098 "cplus.met"
            CommTerm();
#line 1098 "cplus.met"
#line 1099 "cplus.met"
#line 1099 "cplus.met"
            _addlist2 = list2 ;
#line 1099 "cplus.met"
#line 1100 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1100 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1100 "cplus.met"
#line 1101 "cplus.met"
#line 1101 "cplus.met"
                {
#line 1101 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1101 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1101 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1101 "cplus.met"
                    }
#line 1101 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1101 "cplus.met"
                }
#line 1101 "cplus.met"
#line 1101 "cplus.met"
                if (list2){
#line 1101 "cplus.met"
#line 1101 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1101 "cplus.met"
                } else {
#line 1101 "cplus.met"
#line 1101 "cplus.met"
                    list2 = _addlist2 ;
#line 1101 "cplus.met"
                }
#line 1101 "cplus.met"
            } 
#line 1101 "cplus.met"
#line 1102 "cplus.met"
            {
#line 1102 "cplus.met"
                PPTREE _ptTree0=0;
#line 1102 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1102 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1102 "cplus.met"
                }
#line 1102 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1102 "cplus.met"
            }
#line 1102 "cplus.met"
#line 1103 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1103 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1103 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1103 "cplus.met"
            } else {
#line 1103 "cplus.met"
                tokenAhead = 0 ;
#line 1103 "cplus.met"
            }
#line 1103 "cplus.met"
#line 1104 "cplus.met"
            {
#line 1104 "cplus.met"
                PPTREE _ptTree0=0;
#line 1104 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1104 "cplus.met"
                _retValue =_ptTree0;
#line 1104 "cplus.met"
                goto stat_if_dir_ret;
#line 1104 "cplus.met"
            }
#line 1104 "cplus.met"
#line 1104 "cplus.met"
            break;
#line 1104 "cplus.met"
#line 1106 "cplus.met"
        case ELIF_DIR : 
#line 1106 "cplus.met"
            tokenAhead = 0 ;
#line 1106 "cplus.met"
            CommTerm();
#line 1106 "cplus.met"
#line 1106 "cplus.met"
            {
#line 1106 "cplus.met"
                PPTREE _ptTree0=0;
#line 1106 "cplus.met"
                {
#line 1106 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1106 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1106 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1106 "cplus.met"
                    }
#line 1106 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1106 "cplus.met"
                }
#line 1106 "cplus.met"
                _retValue =_ptTree0;
#line 1106 "cplus.met"
                goto stat_if_dir_ret;
#line 1106 "cplus.met"
            }
#line 1106 "cplus.met"
            break;
#line 1106 "cplus.met"
#line 1107 "cplus.met"
        case ENDIF_DIR : 
#line 1107 "cplus.met"
            tokenAhead = 0 ;
#line 1107 "cplus.met"
            CommTerm();
#line 1107 "cplus.met"
#line 1107 "cplus.met"
            {
#line 1107 "cplus.met"
                _retValue = retTree ;
#line 1107 "cplus.met"
                goto stat_if_dir_ret;
#line 1107 "cplus.met"
                
#line 1107 "cplus.met"
            }
#line 1107 "cplus.met"
            break;
#line 1107 "cplus.met"
        default :
#line 1107 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1107 "cplus.met"
            break;
#line 1107 "cplus.met"
    }
#line 1107 "cplus.met"
#line 1107 "cplus.met"
#line 1108 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1108 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1108 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1108 "cplus.met"
return((PPTREE) 0);
#line 1108 "cplus.met"

#line 1108 "cplus.met"
stat_if_dir_exit :
#line 1108 "cplus.met"

#line 1108 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1108 "cplus.met"
    _funcLevel--;
#line 1108 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1108 "cplus.met"
    return((PPTREE) -1) ;
#line 1108 "cplus.met"

#line 1108 "cplus.met"
stat_if_dir_ret :
#line 1108 "cplus.met"
    
#line 1108 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1108 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1108 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1108 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1108 "cplus.met"
    return _retValue ;
#line 1108 "cplus.met"
}
#line 1108 "cplus.met"

#line 1108 "cplus.met"
#line 1149 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1149 "cplus.met"
{
#line 1149 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1149 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1149 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1149 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1149 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1149 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1149 "cplus.met"
#line 1149 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1149 "cplus.met"
#line 1149 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1149 "cplus.met"
#line 1151 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1151 "cplus.met"
#line 1152 "cplus.met"
#line 1153 "cplus.met"
        {
#line 1153 "cplus.met"
            keepCarriage = 1 ;
#line 1153 "cplus.met"
#line 1154 "cplus.met"
#line 1155 "cplus.met"
            {
#line 1155 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1155 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1155 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1155 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1155 "cplus.met"
                }
#line 1155 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1155 "cplus.met"
                retTree=_ptRes0;
#line 1155 "cplus.met"
            }
#line 1155 "cplus.met"
#line 1156 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1156 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1156 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1156 "cplus.met"
            } else {
#line 1156 "cplus.met"
                tokenAhead = 0 ;
#line 1156 "cplus.met"
            }
#line 1156 "cplus.met"
#line 1156 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1156 "cplus.met"
        }
#line 1156 "cplus.met"
#line 1156 "cplus.met"
#line 1157 "cplus.met"
    } else {
#line 1157 "cplus.met"
#line 1160 "cplus.met"
#line 1161 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1161 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1161 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1161 "cplus.met"
        } else {
#line 1161 "cplus.met"
            tokenAhead = 0 ;
#line 1161 "cplus.met"
        }
#line 1161 "cplus.met"
#line 1162 "cplus.met"
        {
#line 1162 "cplus.met"
            keepCarriage = 1 ;
#line 1162 "cplus.met"
#line 1163 "cplus.met"
#line 1164 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1164 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1164 "cplus.met"
            }
#line 1164 "cplus.met"
#line 1165 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1165 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1165 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1165 "cplus.met"
            } else {
#line 1165 "cplus.met"
                tokenAhead = 0 ;
#line 1165 "cplus.met"
            }
#line 1165 "cplus.met"
#line 1165 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1165 "cplus.met"
        }
#line 1165 "cplus.met"
#line 1167 "cplus.met"
        {
#line 1167 "cplus.met"
            PPTREE _ptRes0=0;
#line 1167 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1167 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1167 "cplus.met"
            retTree=_ptRes0;
#line 1167 "cplus.met"
        }
#line 1167 "cplus.met"
#line 1167 "cplus.met"
    }
#line 1167 "cplus.met"
#line 1167 "cplus.met"
    _addlist1 = list ;
#line 1167 "cplus.met"
#line 1169 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1169 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1169 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1169 "cplus.met"
#line 1170 "cplus.met"
#line 1170 "cplus.met"
        {
#line 1170 "cplus.met"
            PPTREE _ptTree0=0;
#line 1170 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1170 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1170 "cplus.met"
            }
#line 1170 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1170 "cplus.met"
        }
#line 1170 "cplus.met"
#line 1170 "cplus.met"
        if (list){
#line 1170 "cplus.met"
#line 1170 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1170 "cplus.met"
        } else {
#line 1170 "cplus.met"
#line 1170 "cplus.met"
            list = _addlist1 ;
#line 1170 "cplus.met"
        }
#line 1170 "cplus.met"
    } 
#line 1170 "cplus.met"
#line 1171 "cplus.met"
    {
#line 1171 "cplus.met"
        PPTREE _ptTree0=0;
#line 1171 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1171 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1171 "cplus.met"
        }
#line 1171 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1171 "cplus.met"
    }
#line 1171 "cplus.met"
#line 1172 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1172 "cplus.met"
#line 1173 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1173 "cplus.met"
    switch( lexEl.Value) {
#line 1173 "cplus.met"
#line 1174 "cplus.met"
        case META : 
#line 1174 "cplus.met"
        case ELSE_DIR : 
#line 1174 "cplus.met"
            tokenAhead = 0 ;
#line 1174 "cplus.met"
            CommTerm();
#line 1174 "cplus.met"
#line 1175 "cplus.met"
#line 1175 "cplus.met"
            _addlist2 = list2 ;
#line 1175 "cplus.met"
#line 1176 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1176 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1176 "cplus.met"
#line 1177 "cplus.met"
#line 1177 "cplus.met"
                {
#line 1177 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1177 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1177 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1177 "cplus.met"
                    }
#line 1177 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1177 "cplus.met"
                }
#line 1177 "cplus.met"
#line 1177 "cplus.met"
                if (list2){
#line 1177 "cplus.met"
#line 1177 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1177 "cplus.met"
                } else {
#line 1177 "cplus.met"
#line 1177 "cplus.met"
                    list2 = _addlist2 ;
#line 1177 "cplus.met"
                }
#line 1177 "cplus.met"
            } 
#line 1177 "cplus.met"
#line 1178 "cplus.met"
            {
#line 1178 "cplus.met"
                PPTREE _ptTree0=0;
#line 1178 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1178 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1178 "cplus.met"
                }
#line 1178 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1178 "cplus.met"
            }
#line 1178 "cplus.met"
#line 1179 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1179 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1179 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1179 "cplus.met"
            } else {
#line 1179 "cplus.met"
                tokenAhead = 0 ;
#line 1179 "cplus.met"
            }
#line 1179 "cplus.met"
#line 1180 "cplus.met"
            {
#line 1180 "cplus.met"
                PPTREE _ptTree0=0;
#line 1180 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1180 "cplus.met"
                _retValue =_ptTree0;
#line 1180 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1180 "cplus.met"
            }
#line 1180 "cplus.met"
#line 1180 "cplus.met"
            break;
#line 1180 "cplus.met"
#line 1182 "cplus.met"
        case ELIF_DIR : 
#line 1182 "cplus.met"
            tokenAhead = 0 ;
#line 1182 "cplus.met"
            CommTerm();
#line 1182 "cplus.met"
#line 1182 "cplus.met"
            {
#line 1182 "cplus.met"
                PPTREE _ptTree0=0;
#line 1182 "cplus.met"
                {
#line 1182 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1182 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1182 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1182 "cplus.met"
                    }
#line 1182 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1182 "cplus.met"
                }
#line 1182 "cplus.met"
                _retValue =_ptTree0;
#line 1182 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1182 "cplus.met"
            }
#line 1182 "cplus.met"
            break;
#line 1182 "cplus.met"
#line 1183 "cplus.met"
        case ENDIF_DIR : 
#line 1183 "cplus.met"
            tokenAhead = 0 ;
#line 1183 "cplus.met"
            CommTerm();
#line 1183 "cplus.met"
#line 1183 "cplus.met"
            {
#line 1183 "cplus.met"
                _retValue = retTree ;
#line 1183 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1183 "cplus.met"
                
#line 1183 "cplus.met"
            }
#line 1183 "cplus.met"
            break;
#line 1183 "cplus.met"
        default :
#line 1183 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1183 "cplus.met"
            break;
#line 1183 "cplus.met"
    }
#line 1183 "cplus.met"
#line 1183 "cplus.met"
#line 1184 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1184 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1184 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1184 "cplus.met"
return((PPTREE) 0);
#line 1184 "cplus.met"

#line 1184 "cplus.met"
stat_ifdef_dir_exit :
#line 1184 "cplus.met"

#line 1184 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1184 "cplus.met"
    _funcLevel--;
#line 1184 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1184 "cplus.met"
    return((PPTREE) -1) ;
#line 1184 "cplus.met"

#line 1184 "cplus.met"
stat_ifdef_dir_ret :
#line 1184 "cplus.met"
    
#line 1184 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1184 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1184 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1184 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1184 "cplus.met"
    return _retValue ;
#line 1184 "cplus.met"
}
#line 1184 "cplus.met"

#line 1184 "cplus.met"
#line 3358 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3358 "cplus.met"
{
#line 3358 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3358 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3358 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3358 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3358 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3358 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3358 "cplus.met"
#line 3358 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3358 "cplus.met"
#line 3360 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3360 "cplus.met"
    switch( lexEl.Value) {
#line 3360 "cplus.met"
#line 3361 "cplus.met"
        case BREAK : 
#line 3361 "cplus.met"
            tokenAhead = 0 ;
#line 3361 "cplus.met"
            CommTerm();
#line 3361 "cplus.met"
#line 3362 "cplus.met"
#line 3363 "cplus.met"
            {
#line 3363 "cplus.met"
                PPTREE _ptRes0=0;
#line 3363 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
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
        case CONTINUE : 
#line 3366 "cplus.met"
            tokenAhead = 0 ;
#line 3366 "cplus.met"
            CommTerm();
#line 3366 "cplus.met"
#line 3367 "cplus.met"
#line 3368 "cplus.met"
            {
#line 3368 "cplus.met"
                PPTREE _ptRes0=0;
#line 3368 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3368 "cplus.met"
                statTree=_ptRes0;
#line 3368 "cplus.met"
            }
#line 3368 "cplus.met"
#line 3369 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3369 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3369 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3369 "cplus.met"
            } else {
#line 3369 "cplus.met"
                tokenAhead = 0 ;
#line 3369 "cplus.met"
            }
#line 3369 "cplus.met"
#line 3369 "cplus.met"
            break;
#line 3369 "cplus.met"
#line 3371 "cplus.met"
        case DO : 
#line 3371 "cplus.met"
            tokenAhead = 0 ;
#line 3371 "cplus.met"
            CommTerm();
#line 3371 "cplus.met"
#line 3372 "cplus.met"
#line 3373 "cplus.met"
            {
#line 3373 "cplus.met"
                switchContext = 0 ;
#line 3373 "cplus.met"
#line 3374 "cplus.met"
                {
#line 3374 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3374 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3374 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3374 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3374 "cplus.met"
                    }
#line 3374 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3374 "cplus.met"
                    statTree=_ptRes0;
#line 3374 "cplus.met"
                }
#line 3374 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3374 "cplus.met"
            }
#line 3374 "cplus.met"
#line 3375 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3375 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3375 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3375 "cplus.met"
            } else {
#line 3375 "cplus.met"
                tokenAhead = 0 ;
#line 3375 "cplus.met"
            }
#line 3375 "cplus.met"
#line 3376 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3376 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3376 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3376 "cplus.met"
            } else {
#line 3376 "cplus.met"
                tokenAhead = 0 ;
#line 3376 "cplus.met"
            }
#line 3376 "cplus.met"
#line 3377 "cplus.met"
            {
#line 3377 "cplus.met"
                PPTREE _ptTree0=0;
#line 3377 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3377 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3377 "cplus.met"
                }
#line 3377 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3377 "cplus.met"
            }
#line 3377 "cplus.met"
#line 3378 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3378 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3378 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3378 "cplus.met"
            } else {
#line 3378 "cplus.met"
                tokenAhead = 0 ;
#line 3378 "cplus.met"
            }
#line 3378 "cplus.met"
#line 3379 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3379 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3379 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3379 "cplus.met"
            } else {
#line 3379 "cplus.met"
                tokenAhead = 0 ;
#line 3379 "cplus.met"
            }
#line 3379 "cplus.met"
#line 3379 "cplus.met"
            break;
#line 3379 "cplus.met"
#line 3381 "cplus.met"
        case AOUV : 
#line 3381 "cplus.met"
#line 3381 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3381 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3381 "cplus.met"
            }
#line 3381 "cplus.met"
            break;
#line 3381 "cplus.met"
#line 3382 "cplus.met"
        case FOR : 
#line 3382 "cplus.met"
            tokenAhead = 0 ;
#line 3382 "cplus.met"
            CommTerm();
#line 3382 "cplus.met"
#line 3382 "cplus.met"
            {
#line 3382 "cplus.met"
                PPTREE _ptTree0=0;
#line 3382 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 73, cplus))== (PPTREE) -1 ) {
#line 3382 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3382 "cplus.met"
                }
#line 3382 "cplus.met"
                _retValue =_ptTree0;
#line 3382 "cplus.met"
                goto statement_ret;
#line 3382 "cplus.met"
            }
#line 3382 "cplus.met"
            break;
#line 3382 "cplus.met"
#line 3383 "cplus.met"
        case GOTO : 
#line 3383 "cplus.met"
            tokenAhead = 0 ;
#line 3383 "cplus.met"
            CommTerm();
#line 3383 "cplus.met"
#line 3384 "cplus.met"
#line 3385 "cplus.met"
            {
#line 3385 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3385 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3385 "cplus.met"
                {
#line 3385 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3385 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3385 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3385 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3385 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3385 "cplus.met"
                    } else {
#line 3385 "cplus.met"
                        tokenAhead = 0 ;
#line 3385 "cplus.met"
                    }
#line 3385 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3385 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3385 "cplus.met"
                }
#line 3385 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3385 "cplus.met"
                statTree=_ptRes0;
#line 3385 "cplus.met"
            }
#line 3385 "cplus.met"
#line 3386 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3386 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3386 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
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
        case IF : 
#line 3388 "cplus.met"
            tokenAhead = 0 ;
#line 3388 "cplus.met"
            CommTerm();
#line 3388 "cplus.met"
#line 3389 "cplus.met"
#line 3390 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3390 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3390 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3390 "cplus.met"
            } else {
#line 3390 "cplus.met"
                tokenAhead = 0 ;
#line 3390 "cplus.met"
            }
#line 3390 "cplus.met"
#line 3391 "cplus.met"
            {
#line 3391 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3391 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3391 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3391 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3391 "cplus.met"
                }
#line 3391 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3391 "cplus.met"
                statTree=_ptRes0;
#line 3391 "cplus.met"
            }
#line 3391 "cplus.met"
#line 3392 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3392 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3392 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3392 "cplus.met"
            } else {
#line 3392 "cplus.met"
                tokenAhead = 0 ;
#line 3392 "cplus.met"
            }
#line 3392 "cplus.met"
#line 3393 "cplus.met"
            {
#line 3393 "cplus.met"
                switchContext = 0 ;
#line 3393 "cplus.met"
#line 3394 "cplus.met"
                {
#line 3394 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3394 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3394 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3394 "cplus.met"
                    }
#line 3394 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3394 "cplus.met"
                }
#line 3394 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3394 "cplus.met"
            }
#line 3394 "cplus.met"
#line 3395 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3395 "cplus.met"
#line 3396 "cplus.met"
                {
#line 3396 "cplus.met"
                    switchContext = 0 ;
#line 3396 "cplus.met"
#line 3397 "cplus.met"
                    {
#line 3397 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3397 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3397 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3397 "cplus.met"
                        }
#line 3397 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3397 "cplus.met"
                    }
#line 3397 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3397 "cplus.met"
                }
#line 3397 "cplus.met"
            }
#line 3397 "cplus.met"
#line 3397 "cplus.met"
            break;
#line 3397 "cplus.met"
#line 3399 "cplus.met"
        case PVIR : 
#line 3399 "cplus.met"
            tokenAhead = 0 ;
#line 3399 "cplus.met"
            CommTerm();
#line 3399 "cplus.met"
#line 3399 "cplus.met"
            {
#line 3399 "cplus.met"
                PPTREE _ptRes0=0;
#line 3399 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3399 "cplus.met"
                statTree=_ptRes0;
#line 3399 "cplus.met"
            }
#line 3399 "cplus.met"
            break;
#line 3399 "cplus.met"
#line 3400 "cplus.met"
        case RETURN : 
#line 3400 "cplus.met"
            tokenAhead = 0 ;
#line 3400 "cplus.met"
            CommTerm();
#line 3400 "cplus.met"
#line 3401 "cplus.met"
#line 3402 "cplus.met"
            {
#line 3402 "cplus.met"
                PPTREE _ptRes0=0;
#line 3402 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3402 "cplus.met"
                statTree=_ptRes0;
#line 3402 "cplus.met"
            }
#line 3402 "cplus.met"
#line 3403 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3403 "cplus.met"
#line 3404 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3404 "cplus.met"
#line 3404 "cplus.met"
            }
#line 3404 "cplus.met"
#line 3405 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3405 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3405 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3405 "cplus.met"
            } else {
#line 3405 "cplus.met"
                tokenAhead = 0 ;
#line 3405 "cplus.met"
            }
#line 3405 "cplus.met"
#line 3405 "cplus.met"
            break;
#line 3405 "cplus.met"
#line 3407 "cplus.met"
        case SWITCH : 
#line 3407 "cplus.met"
            tokenAhead = 0 ;
#line 3407 "cplus.met"
            CommTerm();
#line 3407 "cplus.met"
#line 3408 "cplus.met"
#line 3409 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3409 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3409 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3409 "cplus.met"
            } else {
#line 3409 "cplus.met"
                tokenAhead = 0 ;
#line 3409 "cplus.met"
            }
#line 3409 "cplus.met"
#line 3410 "cplus.met"
            {
#line 3410 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3410 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3410 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3410 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3410 "cplus.met"
                }
#line 3410 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3410 "cplus.met"
                statTree=_ptRes0;
#line 3410 "cplus.met"
            }
#line 3410 "cplus.met"
#line 3411 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3411 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3411 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3411 "cplus.met"
            } else {
#line 3411 "cplus.met"
                tokenAhead = 0 ;
#line 3411 "cplus.met"
            }
#line 3411 "cplus.met"
#line 3412 "cplus.met"
            {
#line 3412 "cplus.met"
                switchContext = 0 ;
#line 3412 "cplus.met"
#line 3413 "cplus.met"
                {
#line 3413 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3413 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 3413 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3413 "cplus.met"
                    }
#line 3413 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3413 "cplus.met"
                }
#line 3413 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3413 "cplus.met"
            }
#line 3413 "cplus.met"
#line 3413 "cplus.met"
            break;
#line 3413 "cplus.met"
#line 3415 "cplus.met"
        case WHILE : 
#line 3415 "cplus.met"
            tokenAhead = 0 ;
#line 3415 "cplus.met"
            CommTerm();
#line 3415 "cplus.met"
#line 3416 "cplus.met"
#line 3417 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3417 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3417 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3417 "cplus.met"
            } else {
#line 3417 "cplus.met"
                tokenAhead = 0 ;
#line 3417 "cplus.met"
            }
#line 3417 "cplus.met"
#line 3418 "cplus.met"
            {
#line 3418 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3418 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3418 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3418 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3418 "cplus.met"
                }
#line 3418 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3418 "cplus.met"
                statTree=_ptRes0;
#line 3418 "cplus.met"
            }
#line 3418 "cplus.met"
#line 3419 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3419 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3419 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3419 "cplus.met"
            } else {
#line 3419 "cplus.met"
                tokenAhead = 0 ;
#line 3419 "cplus.met"
            }
#line 3419 "cplus.met"
#line 3420 "cplus.met"
            {
#line 3420 "cplus.met"
                switchContext = 0 ;
#line 3420 "cplus.met"
#line 3421 "cplus.met"
                {
#line 3421 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3421 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3421 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3421 "cplus.met"
                    }
#line 3421 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3421 "cplus.met"
                }
#line 3421 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3421 "cplus.met"
            }
#line 3421 "cplus.met"
#line 3421 "cplus.met"
            break;
#line 3421 "cplus.met"
#line 3423 "cplus.met"
        case FORALLSONS : 
#line 3423 "cplus.met"
            tokenAhead = 0 ;
#line 3423 "cplus.met"
            CommTerm();
#line 3423 "cplus.met"
#line 3424 "cplus.met"
#line 3425 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3425 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3425 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3425 "cplus.met"
            } else {
#line 3425 "cplus.met"
                tokenAhead = 0 ;
#line 3425 "cplus.met"
            }
#line 3425 "cplus.met"
#line 3426 "cplus.met"
            {
#line 3426 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3426 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3426 "cplus.met"
                {
#line 3426 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3426 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3426 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3426 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3426 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3426 "cplus.met"
                    } else {
#line 3426 "cplus.met"
                        tokenAhead = 0 ;
#line 3426 "cplus.met"
                    }
#line 3426 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3426 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3426 "cplus.met"
                }
#line 3426 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3426 "cplus.met"
                statTree=_ptRes0;
#line 3426 "cplus.met"
            }
#line 3426 "cplus.met"
#line 3427 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3427 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3427 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3427 "cplus.met"
            } else {
#line 3427 "cplus.met"
                tokenAhead = 0 ;
#line 3427 "cplus.met"
            }
#line 3427 "cplus.met"
#line 3428 "cplus.met"
            {
#line 3428 "cplus.met"
                switchContext = 0 ;
#line 3428 "cplus.met"
#line 3429 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 133, cplus))){
#line 3429 "cplus.met"
#line 3430 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3430 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3430 "cplus.met"
                    }
#line 3430 "cplus.met"
                }
#line 3430 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3430 "cplus.met"
            }
#line 3430 "cplus.met"
#line 3431 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3431 "cplus.met"
#line 3432 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3432 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3432 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3432 "cplus.met"
            } else {
#line 3432 "cplus.met"
                tokenAhead = 0 ;
#line 3432 "cplus.met"
            }
#line 3432 "cplus.met"
#line 3432 "cplus.met"
            break;
#line 3432 "cplus.met"
#line 3434 "cplus.met"
        case THROW : 
#line 3434 "cplus.met"
            tokenAhead = 0 ;
#line 3434 "cplus.met"
            CommTerm();
#line 3434 "cplus.met"
#line 3435 "cplus.met"
#line 3436 "cplus.met"
            {
#line 3436 "cplus.met"
                PPTREE _ptRes0=0;
#line 3436 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3436 "cplus.met"
                statTree=_ptRes0;
#line 3436 "cplus.met"
            }
#line 3436 "cplus.met"
#line 3437 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3437 "cplus.met"
#line 3438 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3438 "cplus.met"
#line 3438 "cplus.met"
            }
#line 3438 "cplus.met"
#line 3439 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3439 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3439 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3439 "cplus.met"
            } else {
#line 3439 "cplus.met"
                tokenAhead = 0 ;
#line 3439 "cplus.met"
            }
#line 3439 "cplus.met"
#line 3439 "cplus.met"
            break;
#line 3439 "cplus.met"
#line 3441 "cplus.met"
        case TRY : 
#line 3441 "cplus.met"
#line 3441 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 57, cplus))== (PPTREE) -1 ) {
#line 3441 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3441 "cplus.met"
            }
#line 3441 "cplus.met"
            break;
#line 3441 "cplus.met"
#line 3442 "cplus.met"
        case META : 
#line 3442 "cplus.met"
#line 3443 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 84, cplus)){
#line 3443 "cplus.met"
#line 3444 "cplus.met"
#line 3445 "cplus.met"
                {
#line 3445 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3445 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3445 "cplus.met"
                    {
#line 3445 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3445 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3445 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3445 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3445 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3445 "cplus.met"
                        } else {
#line 3445 "cplus.met"
                            tokenAhead = 0 ;
#line 3445 "cplus.met"
                        }
#line 3445 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3445 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3445 "cplus.met"
                    }
#line 3445 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3445 "cplus.met"
                    statTree=_ptRes0;
#line 3445 "cplus.met"
                }
#line 3445 "cplus.met"
#line 3446 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3446 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3446 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3446 "cplus.met"
                } else {
#line 3446 "cplus.met"
                    tokenAhead = 0 ;
#line 3446 "cplus.met"
                }
#line 3446 "cplus.met"
#line 3447 "cplus.met"
                {
#line 3447 "cplus.met"
                    switchContext = 0 ;
#line 3447 "cplus.met"
#line 3448 "cplus.met"
                    {
#line 3448 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3448 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3448 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3448 "cplus.met"
                        }
#line 3448 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3448 "cplus.met"
                    }
#line 3448 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3448 "cplus.met"
                }
#line 3448 "cplus.met"
#line 3448 "cplus.met"
#line 3448 "cplus.met"
            } else {
#line 3448 "cplus.met"
#line 3451 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 76, cplus)){
#line 3451 "cplus.met"
#line 3453 "cplus.met"
                    
#line 3453 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3453 "cplus.met"
                    goto statement_exit;
#line 3453 "cplus.met"
#line 3454 "cplus.met"
                } else {
#line 3454 "cplus.met"
#line 3456 "cplus.met"
#line 3457 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3457 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3457 "cplus.met"
                    }
#line 3457 "cplus.met"
#line 3458 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3458 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3458 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3458 "cplus.met"
                    } else {
#line 3458 "cplus.met"
                        tokenAhead = 0 ;
#line 3458 "cplus.met"
                    }
#line 3458 "cplus.met"
#line 3458 "cplus.met"
                }
#line 3458 "cplus.met"
            }
#line 3458 "cplus.met"
            break;
#line 3458 "cplus.met"
#line 3462 "cplus.met"
        case CASE : 
#line 3462 "cplus.met"
#line 3463 "cplus.met"
            if (! (switchContext)){
#line 3463 "cplus.met"
#line 3464 "cplus.met"
                
#line 3464 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3464 "cplus.met"
                goto statement_exit;
#line 3464 "cplus.met"
#line 3464 "cplus.met"
            } else {
#line 3464 "cplus.met"
#line 3466 "cplus.met"
                {
#line 3466 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3466 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3466 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3466 "cplus.met"
                    }
#line 3466 "cplus.met"
                    _retValue =_ptTree0;
#line 3466 "cplus.met"
                    goto statement_ret;
#line 3466 "cplus.met"
                }
#line 3466 "cplus.met"
            }
#line 3466 "cplus.met"
            break;
#line 3466 "cplus.met"
#line 3467 "cplus.met"
        case DEFAULT : 
#line 3467 "cplus.met"
#line 3468 "cplus.met"
            if (! (switchContext)){
#line 3468 "cplus.met"
#line 3469 "cplus.met"
                
#line 3469 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3469 "cplus.met"
                goto statement_exit;
#line 3469 "cplus.met"
#line 3469 "cplus.met"
            } else {
#line 3469 "cplus.met"
#line 3471 "cplus.met"
                {
#line 3471 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3471 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3471 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3471 "cplus.met"
                    }
#line 3471 "cplus.met"
                    _retValue =_ptTree0;
#line 3471 "cplus.met"
                    goto statement_ret;
#line 3471 "cplus.met"
                }
#line 3471 "cplus.met"
            }
#line 3471 "cplus.met"
            break;
#line 3471 "cplus.met"
#line 3472 "cplus.met"
        case IDENT : 
#line 3472 "cplus.met"
#line 3473 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3473 "cplus.met"
            switch( lexEl.Value) {
#line 3473 "cplus.met"
#line 3474 "cplus.met"
                case META : 
#line 3474 "cplus.met"
                case FUNC_SPEC : 
#line 3474 "cplus.met"
#line 3475 "cplus.met"
#line 3476 "cplus.met"
                    {
#line 3476 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3476 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3476 "cplus.met"
                        {
#line 3476 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3476 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3476 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3476 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3476 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3476 "cplus.met"
                            } else {
#line 3476 "cplus.met"
                                tokenAhead = 0 ;
#line 3476 "cplus.met"
                            }
#line 3476 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3476 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3476 "cplus.met"
                        }
#line 3476 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3476 "cplus.met"
                        statTree=_ptRes0;
#line 3476 "cplus.met"
                    }
#line 3476 "cplus.met"
#line 3479 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3479 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3479 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3479 "cplus.met"
                    } else {
#line 3479 "cplus.met"
                        tokenAhead = 0 ;
#line 3479 "cplus.met"
                    }
#line 3479 "cplus.met"
#line 3480 "cplus.met"
                    {
#line 3480 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3480 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3480 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3480 "cplus.met"
                        }
#line 3480 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3480 "cplus.met"
                    }
#line 3480 "cplus.met"
#line 3481 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3481 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3481 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3481 "cplus.met"
                    } else {
#line 3481 "cplus.met"
                        tokenAhead = 0 ;
#line 3481 "cplus.met"
                    }
#line 3481 "cplus.met"
#line 3481 "cplus.met"
                    break;
#line 3481 "cplus.met"
#line 3486 "cplus.met"
                default : 
#line 3486 "cplus.met"
#line 3484 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 84, cplus)){
#line 3484 "cplus.met"
#line 3485 "cplus.met"
#line 3486 "cplus.met"
                        {
#line 3486 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3486 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3486 "cplus.met"
                            {
#line 3486 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3486 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3486 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3486 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3486 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3486 "cplus.met"
                                } else {
#line 3486 "cplus.met"
                                    tokenAhead = 0 ;
#line 3486 "cplus.met"
                                }
#line 3486 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3486 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3486 "cplus.met"
                            }
#line 3486 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3486 "cplus.met"
                            statTree=_ptRes0;
#line 3486 "cplus.met"
                        }
#line 3486 "cplus.met"
#line 3489 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3489 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3489 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3489 "cplus.met"
                        } else {
#line 3489 "cplus.met"
                            tokenAhead = 0 ;
#line 3489 "cplus.met"
                        }
#line 3489 "cplus.met"
#line 3490 "cplus.met"
                        {
#line 3490 "cplus.met"
                            switchContext = 0 ;
#line 3490 "cplus.met"
#line 3491 "cplus.met"
                            {
#line 3491 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3491 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3491 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3491 "cplus.met"
                                }
#line 3491 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3491 "cplus.met"
                            }
#line 3491 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3491 "cplus.met"
                        }
#line 3491 "cplus.met"
#line 3491 "cplus.met"
#line 3491 "cplus.met"
                    } else {
#line 3491 "cplus.met"
#line 3494 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 76, cplus)){
#line 3494 "cplus.met"
#line 3497 "cplus.met"
                            
#line 3497 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3497 "cplus.met"
                            goto statement_exit;
#line 3497 "cplus.met"
#line 3498 "cplus.met"
                        } else {
#line 3498 "cplus.met"
#line 3500 "cplus.met"
#line 3501 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 3501 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3501 "cplus.met"
                            }
#line 3501 "cplus.met"
#line 3501 "cplus.met"
                        }
#line 3501 "cplus.met"
                    }
#line 3501 "cplus.met"
                    break;
#line 3501 "cplus.met"
            }
#line 3501 "cplus.met"
            break;
#line 3501 "cplus.met"
#line 3507 "cplus.met"
        default : 
#line 3507 "cplus.met"
#line 3505 "cplus.met"
#line 3506 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 76, cplus)){
#line 3506 "cplus.met"
#line 3507 "cplus.met"
                
#line 3507 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3507 "cplus.met"
                goto statement_exit;
#line 3507 "cplus.met"
#line 3507 "cplus.met"
            } else {
#line 3507 "cplus.met"
#line 3509 "cplus.met"
#line 3510 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3510 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3510 "cplus.met"
                }
#line 3510 "cplus.met"
#line 3511 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3511 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3511 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3511 "cplus.met"
                } else {
#line 3511 "cplus.met"
                    tokenAhead = 0 ;
#line 3511 "cplus.met"
                }
#line 3511 "cplus.met"
#line 3511 "cplus.met"
            }
#line 3511 "cplus.met"
#line 3511 "cplus.met"
            break;
#line 3511 "cplus.met"
    }
#line 3511 "cplus.met"
#line 3515 "cplus.met"
    {
#line 3515 "cplus.met"
        _retValue = statTree ;
#line 3515 "cplus.met"
        goto statement_ret;
#line 3515 "cplus.met"
        
#line 3515 "cplus.met"
    }
#line 3515 "cplus.met"
#line 3515 "cplus.met"
#line 3515 "cplus.met"

#line 3516 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3516 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3516 "cplus.met"
switchContext =  _oldswitchContext;
#line 3516 "cplus.met"
return((PPTREE) 0);
#line 3516 "cplus.met"

#line 3516 "cplus.met"
statement_exit :
#line 3516 "cplus.met"

#line 3516 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3516 "cplus.met"
    _funcLevel--;
#line 3516 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3516 "cplus.met"
    return((PPTREE) -1) ;
#line 3516 "cplus.met"

#line 3516 "cplus.met"
statement_ret :
#line 3516 "cplus.met"
    
#line 3516 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3516 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3516 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3516 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3516 "cplus.met"
    return _retValue ;
#line 3516 "cplus.met"
}
#line 3516 "cplus.met"

#line 3516 "cplus.met"
#line 3351 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3351 "cplus.met"
{
#line 3351 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3351 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3351 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3351 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3351 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3351 "cplus.met"
#line 3351 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3351 "cplus.met"
#line 3353 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3353 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3353 "cplus.met"
    }
#line 3353 "cplus.met"
#line 3354 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3354 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3354 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
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
        _retValue = statTree ;
#line 3355 "cplus.met"
        goto statement_expression_ret;
#line 3355 "cplus.met"
        
#line 3355 "cplus.met"
    }
#line 3355 "cplus.met"
#line 3355 "cplus.met"
#line 3355 "cplus.met"

#line 3356 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3356 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3356 "cplus.met"
return((PPTREE) 0);
#line 3356 "cplus.met"

#line 3356 "cplus.met"
statement_expression_exit :
#line 3356 "cplus.met"

#line 3356 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3356 "cplus.met"
    _funcLevel--;
#line 3356 "cplus.met"
    return((PPTREE) -1) ;
#line 3356 "cplus.met"

#line 3356 "cplus.met"
statement_expression_ret :
#line 3356 "cplus.met"
    
#line 3356 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3356 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3356 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3356 "cplus.met"
    return _retValue ;
#line 3356 "cplus.met"
}
#line 3356 "cplus.met"

#line 3356 "cplus.met"
#line 2949 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 2949 "cplus.met"
{
#line 2949 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2949 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2949 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2949 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 2949 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2949 "cplus.met"
#line 2949 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2949 "cplus.met"
#line 2949 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2949 "cplus.met"
#line 2951 "cplus.met"
    {
#line 2951 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2951 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 2951 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2951 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 2951 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 2951 "cplus.met"
        } else {
#line 2951 "cplus.met"
            tokenAhead = 0 ;
#line 2951 "cplus.met"
        }
#line 2951 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2951 "cplus.met"
        retTree=_ptRes0;
#line 2951 "cplus.met"
    }
#line 2951 "cplus.met"
#line 2952 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 2952 "cplus.met"
#line 2953 "cplus.met"
#line 2954 "cplus.met"
        list =AddList(list ,retTree );
#line 2954 "cplus.met"
#line 2954 "cplus.met"
        _addlist1 = list ;
#line 2954 "cplus.met"
#line 2955 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 2955 "cplus.met"
#line 2956 "cplus.met"
#line 2956 "cplus.met"
            {
#line 2956 "cplus.met"
                PPTREE _ptTree0=0;
#line 2956 "cplus.met"
                {
#line 2956 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2956 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 2956 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2956 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 2956 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 2956 "cplus.met"
                    } else {
#line 2956 "cplus.met"
                        tokenAhead = 0 ;
#line 2956 "cplus.met"
                    }
#line 2956 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2956 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2956 "cplus.met"
                }
#line 2956 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2956 "cplus.met"
            }
#line 2956 "cplus.met"
#line 2956 "cplus.met"
            if (list){
#line 2956 "cplus.met"
#line 2956 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2956 "cplus.met"
            } else {
#line 2956 "cplus.met"
#line 2956 "cplus.met"
                list = _addlist1 ;
#line 2956 "cplus.met"
            }
#line 2956 "cplus.met"
        } 
#line 2956 "cplus.met"
#line 2957 "cplus.met"
        {
#line 2957 "cplus.met"
            PPTREE _ptRes0=0;
#line 2957 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 2957 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 2957 "cplus.met"
            retTree=_ptRes0;
#line 2957 "cplus.met"
        }
#line 2957 "cplus.met"
#line 2957 "cplus.met"
#line 2957 "cplus.met"
    }
#line 2957 "cplus.met"
#line 2959 "cplus.met"
    {
#line 2959 "cplus.met"
        _retValue = retTree ;
#line 2959 "cplus.met"
        goto string_list_ret;
#line 2959 "cplus.met"
        
#line 2959 "cplus.met"
    }
#line 2959 "cplus.met"
#line 2959 "cplus.met"
#line 2959 "cplus.met"

#line 2960 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2960 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2960 "cplus.met"
return((PPTREE) 0);
#line 2960 "cplus.met"

#line 2960 "cplus.met"
string_list_exit :
#line 2960 "cplus.met"

#line 2960 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 2960 "cplus.met"
    _funcLevel--;
#line 2960 "cplus.met"
    return((PPTREE) -1) ;
#line 2960 "cplus.met"

#line 2960 "cplus.met"
string_list_ret :
#line 2960 "cplus.met"
    
#line 2960 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 2960 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2960 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2960 "cplus.met"
    return _retValue ;
#line 2960 "cplus.met"
}
#line 2960 "cplus.met"

#line 2960 "cplus.met"
#line 3523 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3523 "cplus.met"
{
#line 3523 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3523 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3523 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3523 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3523 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3523 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3523 "cplus.met"
#line 3523 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3523 "cplus.met"
#line 3523 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3523 "cplus.met"
#line 3525 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3525 "cplus.met"
    switch( lexEl.Value) {
#line 3525 "cplus.met"
#line 3526 "cplus.met"
        case CASE : 
#line 3526 "cplus.met"
            tokenAhead = 0 ;
#line 3526 "cplus.met"
            CommTerm();
#line 3526 "cplus.met"
#line 3527 "cplus.met"
#line 3528 "cplus.met"
            {
#line 3528 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3528 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3528 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3528 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3528 "cplus.met"
                }
#line 3528 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3528 "cplus.met"
                retTree=_ptRes0;
#line 3528 "cplus.met"
            }
#line 3528 "cplus.met"
#line 3529 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3529 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3529 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3529 "cplus.met"
            } else {
#line 3529 "cplus.met"
                tokenAhead = 0 ;
#line 3529 "cplus.met"
            }
#line 3529 "cplus.met"
#line 3530 "cplus.met"
            {
#line 3530 "cplus.met"
                switchContext = 0 ;
#line 3530 "cplus.met"
#line 3531 "cplus.met"
#line 3531 "cplus.met"
                _addlist1 = list ;
#line 3531 "cplus.met"
#line 3531 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 133, cplus)) || 
#line 3531 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 129, cplus))) { 
#line 3531 "cplus.met"
#line 3532 "cplus.met"
#line 3532 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3532 "cplus.met"
#line 3532 "cplus.met"
                    if (list){
#line 3532 "cplus.met"
#line 3532 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3532 "cplus.met"
                    } else {
#line 3532 "cplus.met"
#line 3532 "cplus.met"
                        list = _addlist1 ;
#line 3532 "cplus.met"
                    }
#line 3532 "cplus.met"
                } 
#line 3532 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3532 "cplus.met"
            }
#line 3532 "cplus.met"
#line 3533 "cplus.met"
            {
#line 3533 "cplus.met"
                PPTREE _ptTree0=0;
#line 3533 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3533 "cplus.met"
                _retValue =_ptTree0;
#line 3533 "cplus.met"
                goto switch_elem_ret;
#line 3533 "cplus.met"
            }
#line 3533 "cplus.met"
#line 3533 "cplus.met"
            break;
#line 3533 "cplus.met"
#line 3535 "cplus.met"
        case DEFAULT : 
#line 3535 "cplus.met"
            tokenAhead = 0 ;
#line 3535 "cplus.met"
            CommTerm();
#line 3535 "cplus.met"
#line 3536 "cplus.met"
#line 3537 "cplus.met"
            {
#line 3537 "cplus.met"
                PPTREE _ptRes0=0;
#line 3537 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3537 "cplus.met"
                retTree=_ptRes0;
#line 3537 "cplus.met"
            }
#line 3537 "cplus.met"
#line 3538 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3538 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3538 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3538 "cplus.met"
            } else {
#line 3538 "cplus.met"
                tokenAhead = 0 ;
#line 3538 "cplus.met"
            }
#line 3538 "cplus.met"
#line 3539 "cplus.met"
            {
#line 3539 "cplus.met"
                switchContext = 0 ;
#line 3539 "cplus.met"
#line 3540 "cplus.met"
#line 3540 "cplus.met"
                _addlist2 = list ;
#line 3540 "cplus.met"
#line 3540 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 133, cplus)) || 
#line 3540 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 129, cplus))) { 
#line 3540 "cplus.met"
#line 3541 "cplus.met"
#line 3541 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3541 "cplus.met"
#line 3541 "cplus.met"
                    if (list){
#line 3541 "cplus.met"
#line 3541 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3541 "cplus.met"
                    } else {
#line 3541 "cplus.met"
#line 3541 "cplus.met"
                        list = _addlist2 ;
#line 3541 "cplus.met"
                    }
#line 3541 "cplus.met"
                } 
#line 3541 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3541 "cplus.met"
            }
#line 3541 "cplus.met"
#line 3542 "cplus.met"
            {
#line 3542 "cplus.met"
                PPTREE _ptTree0=0;
#line 3542 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3542 "cplus.met"
                _retValue =_ptTree0;
#line 3542 "cplus.met"
                goto switch_elem_ret;
#line 3542 "cplus.met"
            }
#line 3542 "cplus.met"
#line 3542 "cplus.met"
            break;
#line 3542 "cplus.met"
#line 3548 "cplus.met"
        default : 
#line 3548 "cplus.met"
#line 3545 "cplus.met"
#line 3547 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 130, cplus)){
#line 3547 "cplus.met"
#line 3549 "cplus.met"
                {
#line 3549 "cplus.met"
                    _retValue = retTree ;
#line 3549 "cplus.met"
                    goto switch_elem_ret;
#line 3549 "cplus.met"
                    
#line 3549 "cplus.met"
                }
#line 3549 "cplus.met"
            } else {
#line 3549 "cplus.met"
#line 3551 "cplus.met"
                
#line 3551 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3551 "cplus.met"
                goto switch_elem_exit;
#line 3551 "cplus.met"
            }
#line 3551 "cplus.met"
#line 3551 "cplus.met"
            break;
#line 3551 "cplus.met"
    }
#line 3551 "cplus.met"
#line 3551 "cplus.met"
#line 3553 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3553 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3553 "cplus.met"
switchContext =  _oldswitchContext;
#line 3553 "cplus.met"
return((PPTREE) 0);
#line 3553 "cplus.met"

#line 3553 "cplus.met"
switch_elem_exit :
#line 3553 "cplus.met"

#line 3553 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3553 "cplus.met"
    _funcLevel--;
#line 3553 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3553 "cplus.met"
    return((PPTREE) -1) ;
#line 3553 "cplus.met"

#line 3553 "cplus.met"
switch_elem_ret :
#line 3553 "cplus.met"
    
#line 3553 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3553 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3553 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3553 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3553 "cplus.met"
    return _retValue ;
#line 3553 "cplus.met"
}
#line 3553 "cplus.met"

#line 3553 "cplus.met"
