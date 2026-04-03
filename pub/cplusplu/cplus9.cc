/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3568 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3568 "cplus.met"
{
#line 3568 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3568 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3568 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3568 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3568 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3568 "cplus.met"
#line 3568 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3568 "cplus.met"
#line 3570 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3570 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3570 "cplus.met"
    }
#line 3570 "cplus.met"
#line 3571 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3571 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3571 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3571 "cplus.met"
    } else {
#line 3571 "cplus.met"
        tokenAhead = 0 ;
#line 3571 "cplus.met"
    }
#line 3571 "cplus.met"
#line 3572 "cplus.met"
    {
#line 3572 "cplus.met"
        _retValue = statTree ;
#line 3572 "cplus.met"
        goto statement_expression_ret;
#line 3572 "cplus.met"
        
#line 3572 "cplus.met"
    }
#line 3572 "cplus.met"
#line 3572 "cplus.met"
#line 3572 "cplus.met"

#line 3573 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3573 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3573 "cplus.met"
return((PPTREE) 0);
#line 3573 "cplus.met"

#line 3573 "cplus.met"
statement_expression_exit :
#line 3573 "cplus.met"

#line 3573 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3573 "cplus.met"
    _funcLevel--;
#line 3573 "cplus.met"
    return((PPTREE) -1) ;
#line 3573 "cplus.met"

#line 3573 "cplus.met"
statement_expression_ret :
#line 3573 "cplus.met"
    
#line 3573 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3573 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3573 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3573 "cplus.met"
    return _retValue ;
#line 3573 "cplus.met"
}
#line 3573 "cplus.met"

#line 3573 "cplus.met"
#line 3109 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 3109 "cplus.met"
{
#line 3109 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3109 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3109 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3109 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 3109 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3109 "cplus.met"
#line 3109 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3109 "cplus.met"
#line 3109 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3109 "cplus.met"
#line 3111 "cplus.met"
    {
#line 3111 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3111 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 3111 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3111 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 3111 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 3111 "cplus.met"
        } else {
#line 3111 "cplus.met"
            tokenAhead = 0 ;
#line 3111 "cplus.met"
        }
#line 3111 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3111 "cplus.met"
        retTree=_ptRes0;
#line 3111 "cplus.met"
    }
#line 3111 "cplus.met"
#line 3112 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 3112 "cplus.met"
#line 3113 "cplus.met"
#line 3114 "cplus.met"
        list =AddList(list ,retTree );
#line 3114 "cplus.met"
#line 3114 "cplus.met"
        _addlist1 = list ;
#line 3114 "cplus.met"
#line 3115 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 3115 "cplus.met"
#line 3116 "cplus.met"
#line 3116 "cplus.met"
            {
#line 3116 "cplus.met"
                PPTREE _ptTree0=0;
#line 3116 "cplus.met"
                {
#line 3116 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3116 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 3116 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3116 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 3116 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 3116 "cplus.met"
                    } else {
#line 3116 "cplus.met"
                        tokenAhead = 0 ;
#line 3116 "cplus.met"
                    }
#line 3116 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3116 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3116 "cplus.met"
                }
#line 3116 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3116 "cplus.met"
            }
#line 3116 "cplus.met"
#line 3116 "cplus.met"
            if (list){
#line 3116 "cplus.met"
#line 3116 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3116 "cplus.met"
            } else {
#line 3116 "cplus.met"
#line 3116 "cplus.met"
                list = _addlist1 ;
#line 3116 "cplus.met"
            }
#line 3116 "cplus.met"
        } 
#line 3116 "cplus.met"
#line 3117 "cplus.met"
        {
#line 3117 "cplus.met"
            PPTREE _ptRes0=0;
#line 3117 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 3117 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 3117 "cplus.met"
            retTree=_ptRes0;
#line 3117 "cplus.met"
        }
#line 3117 "cplus.met"
#line 3117 "cplus.met"
#line 3117 "cplus.met"
    }
#line 3117 "cplus.met"
#line 3119 "cplus.met"
    {
#line 3119 "cplus.met"
        _retValue = retTree ;
#line 3119 "cplus.met"
        goto string_list_ret;
#line 3119 "cplus.met"
        
#line 3119 "cplus.met"
    }
#line 3119 "cplus.met"
#line 3119 "cplus.met"
#line 3119 "cplus.met"

#line 3120 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3120 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3120 "cplus.met"
return((PPTREE) 0);
#line 3120 "cplus.met"

#line 3120 "cplus.met"
string_list_exit :
#line 3120 "cplus.met"

#line 3120 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 3120 "cplus.met"
    _funcLevel--;
#line 3120 "cplus.met"
    return((PPTREE) -1) ;
#line 3120 "cplus.met"

#line 3120 "cplus.met"
string_list_ret :
#line 3120 "cplus.met"
    
#line 3120 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 3120 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3120 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3120 "cplus.met"
    return _retValue ;
#line 3120 "cplus.met"
}
#line 3120 "cplus.met"

#line 3120 "cplus.met"
#line 3736 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3736 "cplus.met"
{
#line 3736 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3736 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3736 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3736 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3736 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3736 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3736 "cplus.met"
#line 3736 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3736 "cplus.met"
#line 3736 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3736 "cplus.met"
#line 3738 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3738 "cplus.met"
    switch( lexEl.Value) {
#line 3738 "cplus.met"
#line 3739 "cplus.met"
        case CASE : 
#line 3739 "cplus.met"
            tokenAhead = 0 ;
#line 3739 "cplus.met"
            CommTerm();
#line 3739 "cplus.met"
#line 3740 "cplus.met"
#line 3741 "cplus.met"
            {
#line 3741 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3741 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3741 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 67, cplus))== (PPTREE) -1 ) {
#line 3741 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3741 "cplus.met"
                }
#line 3741 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3741 "cplus.met"
                retTree=_ptRes0;
#line 3741 "cplus.met"
            }
#line 3741 "cplus.met"
#line 3742 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3742 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3742 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3742 "cplus.met"
            } else {
#line 3742 "cplus.met"
                tokenAhead = 0 ;
#line 3742 "cplus.met"
            }
#line 3742 "cplus.met"
#line 3743 "cplus.met"
            {
#line 3743 "cplus.met"
                switchContext = 0 ;
#line 3743 "cplus.met"
#line 3744 "cplus.met"
#line 3744 "cplus.met"
                _addlist1 = list ;
#line 3744 "cplus.met"
#line 3744 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 146, cplus)) || 
#line 3744 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 142, cplus))) { 
#line 3744 "cplus.met"
#line 3745 "cplus.met"
#line 3745 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3745 "cplus.met"
#line 3745 "cplus.met"
                    if (list){
#line 3745 "cplus.met"
#line 3745 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3745 "cplus.met"
                    } else {
#line 3745 "cplus.met"
#line 3745 "cplus.met"
                        list = _addlist1 ;
#line 3745 "cplus.met"
                    }
#line 3745 "cplus.met"
                } 
#line 3745 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3745 "cplus.met"
            }
#line 3745 "cplus.met"
#line 3746 "cplus.met"
            {
#line 3746 "cplus.met"
                PPTREE _ptTree0=0;
#line 3746 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3746 "cplus.met"
                _retValue =_ptTree0;
#line 3746 "cplus.met"
                goto switch_elem_ret;
#line 3746 "cplus.met"
            }
#line 3746 "cplus.met"
#line 3746 "cplus.met"
            break;
#line 3746 "cplus.met"
#line 3748 "cplus.met"
        case DEFAULT : 
#line 3748 "cplus.met"
            tokenAhead = 0 ;
#line 3748 "cplus.met"
            CommTerm();
#line 3748 "cplus.met"
#line 3749 "cplus.met"
#line 3750 "cplus.met"
            {
#line 3750 "cplus.met"
                PPTREE _ptRes0=0;
#line 3750 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3750 "cplus.met"
                retTree=_ptRes0;
#line 3750 "cplus.met"
            }
#line 3750 "cplus.met"
#line 3751 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3751 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3751 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3751 "cplus.met"
            } else {
#line 3751 "cplus.met"
                tokenAhead = 0 ;
#line 3751 "cplus.met"
            }
#line 3751 "cplus.met"
#line 3752 "cplus.met"
            {
#line 3752 "cplus.met"
                switchContext = 0 ;
#line 3752 "cplus.met"
#line 3753 "cplus.met"
#line 3753 "cplus.met"
                _addlist2 = list ;
#line 3753 "cplus.met"
#line 3753 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 146, cplus)) || 
#line 3753 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 142, cplus))) { 
#line 3753 "cplus.met"
#line 3754 "cplus.met"
#line 3754 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3754 "cplus.met"
#line 3754 "cplus.met"
                    if (list){
#line 3754 "cplus.met"
#line 3754 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3754 "cplus.met"
                    } else {
#line 3754 "cplus.met"
#line 3754 "cplus.met"
                        list = _addlist2 ;
#line 3754 "cplus.met"
                    }
#line 3754 "cplus.met"
                } 
#line 3754 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3754 "cplus.met"
            }
#line 3754 "cplus.met"
#line 3755 "cplus.met"
            {
#line 3755 "cplus.met"
                PPTREE _ptTree0=0;
#line 3755 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3755 "cplus.met"
                _retValue =_ptTree0;
#line 3755 "cplus.met"
                goto switch_elem_ret;
#line 3755 "cplus.met"
            }
#line 3755 "cplus.met"
#line 3755 "cplus.met"
            break;
#line 3755 "cplus.met"
#line 3761 "cplus.met"
        default : 
#line 3761 "cplus.met"
#line 3758 "cplus.met"
#line 3760 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 143, cplus)){
#line 3760 "cplus.met"
#line 3762 "cplus.met"
                {
#line 3762 "cplus.met"
                    _retValue = retTree ;
#line 3762 "cplus.met"
                    goto switch_elem_ret;
#line 3762 "cplus.met"
                    
#line 3762 "cplus.met"
                }
#line 3762 "cplus.met"
            } else {
#line 3762 "cplus.met"
#line 3764 "cplus.met"
                
#line 3764 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3764 "cplus.met"
                goto switch_elem_exit;
#line 3764 "cplus.met"
            }
#line 3764 "cplus.met"
#line 3764 "cplus.met"
            break;
#line 3764 "cplus.met"
    }
#line 3764 "cplus.met"
#line 3764 "cplus.met"
#line 3766 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3766 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3766 "cplus.met"
switchContext =  _oldswitchContext;
#line 3766 "cplus.met"
return((PPTREE) 0);
#line 3766 "cplus.met"

#line 3766 "cplus.met"
switch_elem_exit :
#line 3766 "cplus.met"

#line 3766 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3766 "cplus.met"
    _funcLevel--;
#line 3766 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3766 "cplus.met"
    return((PPTREE) -1) ;
#line 3766 "cplus.met"

#line 3766 "cplus.met"
switch_elem_ret :
#line 3766 "cplus.met"
    
#line 3766 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3766 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3766 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3766 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3766 "cplus.met"
    return _retValue ;
#line 3766 "cplus.met"
}
#line 3766 "cplus.met"

#line 3766 "cplus.met"
#line 3769 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3769 "cplus.met"
{
#line 3769 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3769 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3769 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3769 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3769 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3769 "cplus.met"
#line 3769 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3769 "cplus.met"
#line 3769 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3769 "cplus.met"
#line 3771 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3771 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3771 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3771 "cplus.met"
    } else {
#line 3771 "cplus.met"
        tokenAhead = 0 ;
#line 3771 "cplus.met"
    }
#line 3771 "cplus.met"
#line 3771 "cplus.met"
    _addlist1 = list ;
#line 3771 "cplus.met"
#line 3772 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 149, cplus)) { 
#line 3772 "cplus.met"
#line 3773 "cplus.met"
#line 3773 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3773 "cplus.met"
#line 3773 "cplus.met"
        if (list){
#line 3773 "cplus.met"
#line 3773 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3773 "cplus.met"
        } else {
#line 3773 "cplus.met"
#line 3773 "cplus.met"
            list = _addlist1 ;
#line 3773 "cplus.met"
        }
#line 3773 "cplus.met"
    } 
#line 3773 "cplus.met"
#line 3774 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3774 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3774 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3774 "cplus.met"
    } else {
#line 3774 "cplus.met"
        tokenAhead = 0 ;
#line 3774 "cplus.met"
    }
#line 3774 "cplus.met"
#line 3775 "cplus.met"
    {
#line 3775 "cplus.met"
        _retValue = list ;
#line 3775 "cplus.met"
        goto switch_list_ret;
#line 3775 "cplus.met"
        
#line 3775 "cplus.met"
    }
#line 3775 "cplus.met"
#line 3775 "cplus.met"
#line 3775 "cplus.met"

#line 3776 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3776 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3776 "cplus.met"
return((PPTREE) 0);
#line 3776 "cplus.met"

#line 3776 "cplus.met"
switch_list_exit :
#line 3776 "cplus.met"

#line 3776 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3776 "cplus.met"
    _funcLevel--;
#line 3776 "cplus.met"
    return((PPTREE) -1) ;
#line 3776 "cplus.met"

#line 3776 "cplus.met"
switch_list_ret :
#line 3776 "cplus.met"
    
#line 3776 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3776 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3776 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3776 "cplus.met"
    return _retValue ;
#line 3776 "cplus.met"
}
#line 3776 "cplus.met"

#line 3776 "cplus.met"
#line 1885 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1885 "cplus.met"
{
#line 1885 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1885 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1885 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1885 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1885 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1885 "cplus.met"
#line 1885 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1885 "cplus.met"
#line 1885 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1885 "cplus.met"
#line 1887 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1887 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1887 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1887 "cplus.met"
    } else {
#line 1887 "cplus.met"
        tokenAhead = 0 ;
#line 1887 "cplus.met"
    }
#line 1887 "cplus.met"
#line 1887 "cplus.met"
    _addlist1 = listParam ;
#line 1887 "cplus.met"
#line 1888 "cplus.met"
    do {
#line 1888 "cplus.met"
#line 1890 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1890 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 154, cplus))){
#line 1890 "cplus.met"
#line 1892 "cplus.met"
#line 1892 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 1892 "cplus.met"
#line 1892 "cplus.met"
            if (listParam){
#line 1892 "cplus.met"
#line 1892 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 1892 "cplus.met"
            } else {
#line 1892 "cplus.met"
#line 1892 "cplus.met"
                listParam = _addlist1 ;
#line 1892 "cplus.met"
            }
#line 1892 "cplus.met"
        }
#line 1892 "cplus.met"
#line 1892 "cplus.met"
#line 1893 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1893 "cplus.met"
#line 1894 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1894 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1894 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 1894 "cplus.met"
    } else {
#line 1894 "cplus.met"
        tokenAhead = 0 ;
#line 1894 "cplus.met"
    }
#line 1894 "cplus.met"
#line 1895 "cplus.met"
    {
#line 1895 "cplus.met"
        PPTREE _ptTree0=0;
#line 1895 "cplus.met"
        {
#line 1895 "cplus.met"
            PPTREE _ptRes1=0;
#line 1895 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1895 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1895 "cplus.met"
            _ptTree0=_ptRes1;
#line 1895 "cplus.met"
        }
#line 1895 "cplus.met"
        _retValue =_ptTree0;
#line 1895 "cplus.met"
        goto template_type_ret;
#line 1895 "cplus.met"
    }
#line 1895 "cplus.met"
#line 1895 "cplus.met"
#line 1895 "cplus.met"

#line 1896 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1896 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1896 "cplus.met"
return((PPTREE) 0);
#line 1896 "cplus.met"

#line 1896 "cplus.met"
template_type_exit :
#line 1896 "cplus.met"

#line 1896 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1896 "cplus.met"
    _funcLevel--;
#line 1896 "cplus.met"
    return((PPTREE) -1) ;
#line 1896 "cplus.met"

#line 1896 "cplus.met"
template_type_ret :
#line 1896 "cplus.met"
    
#line 1896 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1896 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1896 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1896 "cplus.met"
    return _retValue ;
#line 1896 "cplus.met"
}
#line 1896 "cplus.met"

#line 1896 "cplus.met"
#line 3361 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3361 "cplus.met"
{
#line 3361 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3361 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3361 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3361 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3361 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3361 "cplus.met"
#line 3361 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3361 "cplus.met"
#line 3363 "cplus.met"
    {
#line 3363 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3363 "cplus.met"
        _ptRes0= MakeTree(FUNC, 11);
#line 3363 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3363 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3363 "cplus.met"
        }
#line 3363 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3363 "cplus.met"
        funcTree=_ptRes0;
#line 3363 "cplus.met"
    }
#line 3363 "cplus.met"
#line 3364 "cplus.met"
    {
#line 3364 "cplus.met"
        PPTREE _ptTree0=0;
#line 3364 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 3364 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3364 "cplus.met"
        }
#line 3364 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3364 "cplus.met"
    }
#line 3364 "cplus.met"
#line 3365 "cplus.met"
    {
#line 3365 "cplus.met"
        PPTREE _ptTree0=0;
#line 3365 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 3365 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3365 "cplus.met"
        }
#line 3365 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3365 "cplus.met"
    }
#line 3365 "cplus.met"
#line 3366 "cplus.met"
    {
#line 3366 "cplus.met"
        _retValue = funcTree ;
#line 3366 "cplus.met"
        goto type_and_declarator_ret;
#line 3366 "cplus.met"
        
#line 3366 "cplus.met"
    }
#line 3366 "cplus.met"
#line 3366 "cplus.met"
#line 3366 "cplus.met"

#line 3367 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3367 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3367 "cplus.met"
return((PPTREE) 0);
#line 3367 "cplus.met"

#line 3367 "cplus.met"
type_and_declarator_exit :
#line 3367 "cplus.met"

#line 3367 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3367 "cplus.met"
    _funcLevel--;
#line 3367 "cplus.met"
    return((PPTREE) -1) ;
#line 3367 "cplus.met"

#line 3367 "cplus.met"
type_and_declarator_ret :
#line 3367 "cplus.met"
    
#line 3367 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3367 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3367 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3367 "cplus.met"
    return _retValue ;
#line 3367 "cplus.met"
}
#line 3367 "cplus.met"

#line 3367 "cplus.met"
#line 3259 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3259 "cplus.met"
{
#line 3259 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3259 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3259 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3259 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3259 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3259 "cplus.met"
#line 3260 "cplus.met"
    {
#line 3260 "cplus.met"
        PPTREE _ptTree0=0;
#line 3260 "cplus.met"
        {
#line 3260 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3260 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3260 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3260 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3260 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3260 "cplus.met"
            } else {
#line 3260 "cplus.met"
                tokenAhead = 0 ;
#line 3260 "cplus.met"
            }
#line 3260 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3260 "cplus.met"
            _ptTree0=_ptRes1;
#line 3260 "cplus.met"
        }
#line 3260 "cplus.met"
        _retValue =_ptTree0;
#line 3260 "cplus.met"
        goto type_descr_ret;
#line 3260 "cplus.met"
    }
#line 3260 "cplus.met"
#line 3260 "cplus.met"
#line 3260 "cplus.met"

#line 3261 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3261 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3261 "cplus.met"
return((PPTREE) 0);
#line 3261 "cplus.met"

#line 3261 "cplus.met"
type_descr_exit :
#line 3261 "cplus.met"

#line 3261 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3261 "cplus.met"
    _funcLevel--;
#line 3261 "cplus.met"
    return((PPTREE) -1) ;
#line 3261 "cplus.met"

#line 3261 "cplus.met"
type_descr_ret :
#line 3261 "cplus.met"
    
#line 3261 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3261 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3261 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3261 "cplus.met"
    return _retValue ;
#line 3261 "cplus.met"
}
#line 3261 "cplus.met"

#line 3261 "cplus.met"
#line 2703 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2703 "cplus.met"
{
#line 2703 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2703 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2703 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2703 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2703 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2703 "cplus.met"
#line 2703 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2703 "cplus.met"
#line 2705 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 2705 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2705 "cplus.met"
    }
#line 2705 "cplus.met"
#line 2706 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2706 "cplus.met"
#line 2707 "cplus.met"
        {
#line 2707 "cplus.met"
            PPTREE _ptRes0=0;
#line 2707 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2707 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2707 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2707 "cplus.met"
            valTree=_ptRes0;
#line 2707 "cplus.met"
        }
#line 2707 "cplus.met"
    } else {
#line 2707 "cplus.met"
#line 2709 "cplus.met"
        valTree = retTree ;
#line 2709 "cplus.met"
    }
#line 2709 "cplus.met"
#line 2710 "cplus.met"
    {
#line 2710 "cplus.met"
        _retValue = valTree ;
#line 2710 "cplus.met"
        goto type_name_ret;
#line 2710 "cplus.met"
        
#line 2710 "cplus.met"
    }
#line 2710 "cplus.met"
#line 2710 "cplus.met"
#line 2710 "cplus.met"

#line 2711 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2711 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2711 "cplus.met"
return((PPTREE) 0);
#line 2711 "cplus.met"

#line 2711 "cplus.met"
type_name_exit :
#line 2711 "cplus.met"

#line 2711 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2711 "cplus.met"
    _funcLevel--;
#line 2711 "cplus.met"
    return((PPTREE) -1) ;
#line 2711 "cplus.met"

#line 2711 "cplus.met"
type_name_ret :
#line 2711 "cplus.met"
    
#line 2711 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2711 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2711 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2711 "cplus.met"
    return _retValue ;
#line 2711 "cplus.met"
}
#line 2711 "cplus.met"

#line 2711 "cplus.met"
#line 1861 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1861 "cplus.met"
{
#line 1861 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1861 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1861 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1861 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1861 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1861 "cplus.met"
#line 1861 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1861 "cplus.met"
#line 1861 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1861 "cplus.met"
#line 1863 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 156, cplus))== (PPTREE) -1 ) {
#line 1863 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1863 "cplus.met"
    }
#line 1863 "cplus.met"
#line 1864 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1864 "cplus.met"
#line 1865 "cplus.met"
#line 1865 "cplus.met"
        _addlist1 = listParam ;
#line 1865 "cplus.met"
#line 1866 "cplus.met"
        do {
#line 1866 "cplus.met"
#line 1867 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(conditional_expression), 34, cplus)) || 
#line 1867 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 154, cplus))){
#line 1867 "cplus.met"
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                if (listParam){
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1868 "cplus.met"
                } else {
#line 1868 "cplus.met"
#line 1868 "cplus.met"
                    listParam = _addlist1 ;
#line 1868 "cplus.met"
                }
#line 1868 "cplus.met"
            }
#line 1868 "cplus.met"
#line 1868 "cplus.met"
#line 1869 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1869 "cplus.met"
#line 1870 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1870 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1870 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1870 "cplus.met"
        } else {
#line 1870 "cplus.met"
            tokenAhead = 0 ;
#line 1870 "cplus.met"
        }
#line 1870 "cplus.met"
#line 1871 "cplus.met"
        {
#line 1871 "cplus.met"
            PPTREE _ptRes0=0;
#line 1871 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1871 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1871 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1871 "cplus.met"
            ret=_ptRes0;
#line 1871 "cplus.met"
        }
#line 1871 "cplus.met"
#line 1871 "cplus.met"
#line 1871 "cplus.met"
    }
#line 1871 "cplus.met"
#line 1873 "cplus.met"
    {
#line 1873 "cplus.met"
        _retValue = ret ;
#line 1873 "cplus.met"
        goto type_specifier_ret;
#line 1873 "cplus.met"
        
#line 1873 "cplus.met"
    }
#line 1873 "cplus.met"
#line 1873 "cplus.met"
#line 1873 "cplus.met"

#line 1874 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1874 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1874 "cplus.met"
return((PPTREE) 0);
#line 1874 "cplus.met"

#line 1874 "cplus.met"
type_specifier_exit :
#line 1874 "cplus.met"

#line 1874 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1874 "cplus.met"
    _funcLevel--;
#line 1874 "cplus.met"
    return((PPTREE) -1) ;
#line 1874 "cplus.met"

#line 1874 "cplus.met"
type_specifier_ret :
#line 1874 "cplus.met"
    
#line 1874 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 1874 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1874 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1874 "cplus.met"
    return _retValue ;
#line 1874 "cplus.met"
}
#line 1874 "cplus.met"

#line 1874 "cplus.met"
#line 1848 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1848 "cplus.met"
{
#line 1848 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1848 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1848 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1848 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1848 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1848 "cplus.met"
#line 1848 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0;
#line 1848 "cplus.met"
#line 1850 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 128, cplus)){
#line 1850 "cplus.met"
#line 1851 "cplus.met"
        {
#line 1851 "cplus.met"
            PPTREE _ptTree0=0;
#line 1851 "cplus.met"
            {
#line 1851 "cplus.met"
                PPTREE _ptTree1=0;
#line 1851 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 1851 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1851 "cplus.met"
                }
#line 1851 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1851 "cplus.met"
            }
#line 1851 "cplus.met"
            _retValue =_ptTree0;
#line 1851 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1851 "cplus.met"
        }
#line 1851 "cplus.met"
    }
#line 1851 "cplus.met"
#line 1852 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1852 "cplus.met"
    switch( lexEl.Value) {
#line 1852 "cplus.met"
#line 1853 "cplus.met"
        case ENUM : 
#line 1853 "cplus.met"
#line 1853 "cplus.met"
            {
#line 1853 "cplus.met"
                PPTREE _ptTree0=0;
#line 1853 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1853 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1853 "cplus.met"
                }
#line 1853 "cplus.met"
                _retValue =_ptTree0;
#line 1853 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1853 "cplus.met"
            }
#line 1853 "cplus.met"
            break;
#line 1853 "cplus.met"
#line 1854 "cplus.met"
        case STRUCT : 
#line 1854 "cplus.met"
#line 1854 "cplus.met"
            {
#line 1854 "cplus.met"
                PPTREE _ptTree0=0;
#line 1854 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1854 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1854 "cplus.met"
                }
#line 1854 "cplus.met"
                _retValue =_ptTree0;
#line 1854 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1854 "cplus.met"
            }
#line 1854 "cplus.met"
            break;
#line 1854 "cplus.met"
#line 1855 "cplus.met"
        case UNION : 
#line 1855 "cplus.met"
#line 1855 "cplus.met"
            {
#line 1855 "cplus.met"
                PPTREE _ptTree0=0;
#line 1855 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1855 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1855 "cplus.met"
                }
#line 1855 "cplus.met"
                _retValue =_ptTree0;
#line 1855 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1855 "cplus.met"
            }
#line 1855 "cplus.met"
            break;
#line 1855 "cplus.met"
#line 1856 "cplus.met"
        case CLASS : 
#line 1856 "cplus.met"
#line 1856 "cplus.met"
            {
#line 1856 "cplus.met"
                PPTREE _ptTree0=0;
#line 1856 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 1856 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1856 "cplus.met"
                }
#line 1856 "cplus.met"
                _retValue =_ptTree0;
#line 1856 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1856 "cplus.met"
            }
#line 1856 "cplus.met"
            break;
#line 1856 "cplus.met"
#line 1857 "cplus.met"
        default : 
#line 1857 "cplus.met"
#line 1857 "cplus.met"
            {
#line 1857 "cplus.met"
                PPTREE _ptTree0=0;
#line 1857 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 1857 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1857 "cplus.met"
                }
#line 1857 "cplus.met"
                _retValue =_ptTree0;
#line 1857 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1857 "cplus.met"
            }
#line 1857 "cplus.met"
            break;
#line 1857 "cplus.met"
    }
#line 1857 "cplus.met"
#line 1857 "cplus.met"
#line 1858 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1858 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1858 "cplus.met"
return((PPTREE) 0);
#line 1858 "cplus.met"

#line 1858 "cplus.met"
type_specifier_without_param_exit :
#line 1858 "cplus.met"

#line 1858 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1858 "cplus.met"
    _funcLevel--;
#line 1858 "cplus.met"
    return((PPTREE) -1) ;
#line 1858 "cplus.met"

#line 1858 "cplus.met"
type_specifier_without_param_ret :
#line 1858 "cplus.met"
    
#line 1858 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1858 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1858 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1858 "cplus.met"
    return _retValue ;
#line 1858 "cplus.met"
}
#line 1858 "cplus.met"

#line 1858 "cplus.met"
#line 1643 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1643 "cplus.met"
{
#line 1643 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1643 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1643 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1643 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1643 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1643 "cplus.met"
#line 1643 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1643 "cplus.met"
#line 1645 "cplus.met"
    {
#line 1645 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1645 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1645 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 1645 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1645 "cplus.met"
        }
#line 1645 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1645 "cplus.met"
        retTree=_ptRes0;
#line 1645 "cplus.met"
    }
#line 1645 "cplus.met"
#line 1646 "cplus.met"
    {
#line 1646 "cplus.met"
        PPTREE _ptTree0=0;
#line 1646 "cplus.met"
        {
#line 1646 "cplus.met"
            PPTREE _ptTree1=0;
#line 1646 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1646 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1646 "cplus.met"
            }
#line 1646 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1646 "cplus.met"
        }
#line 1646 "cplus.met"
        _retValue =_ptTree0;
#line 1646 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1646 "cplus.met"
    }
#line 1646 "cplus.met"
#line 1646 "cplus.met"
#line 1646 "cplus.met"

#line 1647 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1647 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1647 "cplus.met"
return((PPTREE) 0);
#line 1647 "cplus.met"

#line 1647 "cplus.met"
typedef_and_declarator_exit :
#line 1647 "cplus.met"

#line 1647 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1647 "cplus.met"
    _funcLevel--;
#line 1647 "cplus.met"
    return((PPTREE) -1) ;
#line 1647 "cplus.met"

#line 1647 "cplus.met"
typedef_and_declarator_ret :
#line 1647 "cplus.met"
    
#line 1647 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1647 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1647 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1647 "cplus.met"
    return _retValue ;
#line 1647 "cplus.met"
}
#line 1647 "cplus.met"

#line 1647 "cplus.met"
#line 2925 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2925 "cplus.met"
{
#line 2925 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2925 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2925 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2925 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2925 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2925 "cplus.met"
#line 2925 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2925 "cplus.met"
#line 2927 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2927 "cplus.met"
    switch( lexEl.Value) {
#line 2927 "cplus.met"
#line 2928 "cplus.met"
        case TIRE : 
#line 2928 "cplus.met"
            tokenAhead = 0 ;
#line 2928 "cplus.met"
            CommTerm();
#line 2928 "cplus.met"
#line 2928 "cplus.met"
            {
#line 2928 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2928 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2928 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2928 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2928 "cplus.met"
                }
#line 2928 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2928 "cplus.met"
                expTree=_ptRes0;
#line 2928 "cplus.met"
            }
#line 2928 "cplus.met"
            break;
#line 2928 "cplus.met"
#line 2929 "cplus.met"
        case PLUS : 
#line 2929 "cplus.met"
            tokenAhead = 0 ;
#line 2929 "cplus.met"
            CommTerm();
#line 2929 "cplus.met"
#line 2929 "cplus.met"
            {
#line 2929 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2929 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2929 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2929 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2929 "cplus.met"
                }
#line 2929 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2929 "cplus.met"
                expTree=_ptRes0;
#line 2929 "cplus.met"
            }
#line 2929 "cplus.met"
            break;
#line 2929 "cplus.met"
#line 2930 "cplus.met"
        case TILD : 
#line 2930 "cplus.met"
            tokenAhead = 0 ;
#line 2930 "cplus.met"
            CommTerm();
#line 2930 "cplus.met"
#line 2930 "cplus.met"
            {
#line 2930 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2930 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2930 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2930 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2930 "cplus.met"
                }
#line 2930 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2930 "cplus.met"
                expTree=_ptRes0;
#line 2930 "cplus.met"
            }
#line 2930 "cplus.met"
            break;
#line 2930 "cplus.met"
#line 2931 "cplus.met"
        case EXCL : 
#line 2931 "cplus.met"
            tokenAhead = 0 ;
#line 2931 "cplus.met"
            CommTerm();
#line 2931 "cplus.met"
#line 2931 "cplus.met"
            {
#line 2931 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2931 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2931 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2931 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2931 "cplus.met"
                }
#line 2931 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2931 "cplus.met"
                expTree=_ptRes0;
#line 2931 "cplus.met"
            }
#line 2931 "cplus.met"
            break;
#line 2931 "cplus.met"
#line 2932 "cplus.met"
        case ETOI : 
#line 2932 "cplus.met"
            tokenAhead = 0 ;
#line 2932 "cplus.met"
            CommTerm();
#line 2932 "cplus.met"
#line 2932 "cplus.met"
            {
#line 2932 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2932 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2932 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2932 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2932 "cplus.met"
                }
#line 2932 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2932 "cplus.met"
                expTree=_ptRes0;
#line 2932 "cplus.met"
            }
#line 2932 "cplus.met"
            break;
#line 2932 "cplus.met"
#line 2933 "cplus.met"
        case ETCO : 
#line 2933 "cplus.met"
            tokenAhead = 0 ;
#line 2933 "cplus.met"
            CommTerm();
#line 2933 "cplus.met"
#line 2933 "cplus.met"
            {
#line 2933 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2933 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2933 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2933 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2933 "cplus.met"
                }
#line 2933 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2933 "cplus.met"
                expTree=_ptRes0;
#line 2933 "cplus.met"
            }
#line 2933 "cplus.met"
            break;
#line 2933 "cplus.met"
#line 2934 "cplus.met"
        case PLUSPLUS : 
#line 2934 "cplus.met"
            tokenAhead = 0 ;
#line 2934 "cplus.met"
            CommTerm();
#line 2934 "cplus.met"
#line 2934 "cplus.met"
            {
#line 2934 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2934 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2934 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2934 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2934 "cplus.met"
                }
#line 2934 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2934 "cplus.met"
                expTree=_ptRes0;
#line 2934 "cplus.met"
            }
#line 2934 "cplus.met"
            break;
#line 2934 "cplus.met"
#line 2935 "cplus.met"
        case TIRETIRE : 
#line 2935 "cplus.met"
            tokenAhead = 0 ;
#line 2935 "cplus.met"
            CommTerm();
#line 2935 "cplus.met"
#line 2935 "cplus.met"
            {
#line 2935 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2935 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2935 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2935 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2935 "cplus.met"
                }
#line 2935 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2935 "cplus.met"
                expTree=_ptRes0;
#line 2935 "cplus.met"
            }
#line 2935 "cplus.met"
            break;
#line 2935 "cplus.met"
#line 2936 "cplus.met"
        case SIZEOF : 
#line 2936 "cplus.met"
            tokenAhead = 0 ;
#line 2936 "cplus.met"
            CommTerm();
#line 2936 "cplus.met"
#line 2937 "cplus.met"
#line 2938 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 140, cplus))){
#line 2938 "cplus.met"
#line 2939 "cplus.met"
#line 2940 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 158, cplus))== (PPTREE) -1 ) {
#line 2940 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2940 "cplus.met"
                }
#line 2940 "cplus.met"
#line 2941 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 2941 "cplus.met"
                                    l'interieur */
#line 2941 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 2941 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 2941 "cplus.met"
                                     AddRef(expTree);
#line 2941 "cplus.met"
                                     FreeTreeRec(inter);
#line 2941 "cplus.met"
                                     RemRef(expTree);
#line 2941 "cplus.met"
                                          } else
#line 2941 "cplus.met"
                                     expTree = inter;
#line 2941 "cplus.met"
                                
#line 2941 "cplus.met"
#line 2941 "cplus.met"
#line 2951 "cplus.met"
            }
#line 2951 "cplus.met"
#line 2953 "cplus.met"
            {
#line 2953 "cplus.met"
                PPTREE _ptTree0=0;
#line 2953 "cplus.met"
                {
#line 2953 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2953 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2953 "cplus.met"
                    {
#line 2953 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2953 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2953 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2953 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2953 "cplus.met"
                    }
#line 2953 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2953 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2953 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2953 "cplus.met"
                }
#line 2953 "cplus.met"
                _retValue =_ptTree0;
#line 2953 "cplus.met"
                goto unary_expression_ret;
#line 2953 "cplus.met"
            }
#line 2953 "cplus.met"
#line 2953 "cplus.met"
            break;
#line 2953 "cplus.met"
#line 2956 "cplus.met"
        default : 
#line 2956 "cplus.met"
#line 2956 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2956 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2956 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2956 "cplus.met"
#line 2957 "cplus.met"
#line 2958 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2958 "cplus.met"
#line 2959 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2959 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2959 "cplus.met"
                    }
#line 2959 "cplus.met"
                }
#line 2959 "cplus.met"
#line 2959 "cplus.met"
#line 2959 "cplus.met"
            } else {
#line 2959 "cplus.met"
#line 2962 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 115, cplus))== (PPTREE) -1 ) {
#line 2962 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2962 "cplus.met"
                }
#line 2962 "cplus.met"
            }
#line 2962 "cplus.met"
            break;
#line 2962 "cplus.met"
    }
#line 2962 "cplus.met"
#line 2964 "cplus.met"
    {
#line 2964 "cplus.met"
        _retValue = expTree ;
#line 2964 "cplus.met"
        goto unary_expression_ret;
#line 2964 "cplus.met"
        
#line 2964 "cplus.met"
    }
#line 2964 "cplus.met"
#line 2964 "cplus.met"
#line 2964 "cplus.met"

#line 2965 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2965 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2965 "cplus.met"
return((PPTREE) 0);
#line 2965 "cplus.met"

#line 2965 "cplus.met"
unary_expression_exit :
#line 2965 "cplus.met"

#line 2965 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2965 "cplus.met"
    _funcLevel--;
#line 2965 "cplus.met"
    return((PPTREE) -1) ;
#line 2965 "cplus.met"

#line 2965 "cplus.met"
unary_expression_ret :
#line 2965 "cplus.met"
    
#line 2965 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2965 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2965 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2965 "cplus.met"
    return _retValue ;
#line 2965 "cplus.met"
}
#line 2965 "cplus.met"

#line 2965 "cplus.met"
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
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 135, cplus)){
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
