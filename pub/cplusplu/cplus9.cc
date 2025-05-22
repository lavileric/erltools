/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 3477 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3477 "cplus.met"
{
#line 3477 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3477 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3477 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3477 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3477 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3477 "cplus.met"
#line 3477 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3477 "cplus.met"
#line 3479 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 3479 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3479 "cplus.met"
    }
#line 3479 "cplus.met"
#line 3480 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3480 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3480 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3480 "cplus.met"
    } else {
#line 3480 "cplus.met"
        tokenAhead = 0 ;
#line 3480 "cplus.met"
    }
#line 3480 "cplus.met"
#line 3481 "cplus.met"
    {
#line 3481 "cplus.met"
        _retValue = statTree ;
#line 3481 "cplus.met"
        goto statement_expression_ret;
#line 3481 "cplus.met"
        
#line 3481 "cplus.met"
    }
#line 3481 "cplus.met"
#line 3481 "cplus.met"
#line 3481 "cplus.met"

#line 3482 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3482 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3482 "cplus.met"
return((PPTREE) 0);
#line 3482 "cplus.met"

#line 3482 "cplus.met"
statement_expression_exit :
#line 3482 "cplus.met"

#line 3482 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3482 "cplus.met"
    _funcLevel--;
#line 3482 "cplus.met"
    return((PPTREE) -1) ;
#line 3482 "cplus.met"

#line 3482 "cplus.met"
statement_expression_ret :
#line 3482 "cplus.met"
    
#line 3482 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3482 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3482 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3482 "cplus.met"
    return _retValue ;
#line 3482 "cplus.met"
}
#line 3482 "cplus.met"

#line 3482 "cplus.met"
#line 3071 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 3071 "cplus.met"
{
#line 3071 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3071 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3071 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3071 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 3071 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3071 "cplus.met"
#line 3071 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3071 "cplus.met"
#line 3071 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 3071 "cplus.met"
#line 3073 "cplus.met"
    {
#line 3073 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3073 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 3073 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3073 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 3073 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 3073 "cplus.met"
        } else {
#line 3073 "cplus.met"
            tokenAhead = 0 ;
#line 3073 "cplus.met"
        }
#line 3073 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3073 "cplus.met"
        retTree=_ptRes0;
#line 3073 "cplus.met"
    }
#line 3073 "cplus.met"
#line 3074 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 3074 "cplus.met"
#line 3075 "cplus.met"
#line 3076 "cplus.met"
        list =AddList(list ,retTree );
#line 3076 "cplus.met"
#line 3076 "cplus.met"
        _addlist1 = list ;
#line 3076 "cplus.met"
#line 3077 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 3077 "cplus.met"
#line 3078 "cplus.met"
#line 3078 "cplus.met"
            {
#line 3078 "cplus.met"
                PPTREE _ptTree0=0;
#line 3078 "cplus.met"
                {
#line 3078 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3078 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 3078 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3078 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 3078 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 3078 "cplus.met"
                    } else {
#line 3078 "cplus.met"
                        tokenAhead = 0 ;
#line 3078 "cplus.met"
                    }
#line 3078 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3078 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3078 "cplus.met"
                }
#line 3078 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3078 "cplus.met"
            }
#line 3078 "cplus.met"
#line 3078 "cplus.met"
            if (list){
#line 3078 "cplus.met"
#line 3078 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 3078 "cplus.met"
            } else {
#line 3078 "cplus.met"
#line 3078 "cplus.met"
                list = _addlist1 ;
#line 3078 "cplus.met"
            }
#line 3078 "cplus.met"
        } 
#line 3078 "cplus.met"
#line 3079 "cplus.met"
        {
#line 3079 "cplus.met"
            PPTREE _ptRes0=0;
#line 3079 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 3079 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 3079 "cplus.met"
            retTree=_ptRes0;
#line 3079 "cplus.met"
        }
#line 3079 "cplus.met"
#line 3079 "cplus.met"
#line 3079 "cplus.met"
    }
#line 3079 "cplus.met"
#line 3081 "cplus.met"
    {
#line 3081 "cplus.met"
        _retValue = retTree ;
#line 3081 "cplus.met"
        goto string_list_ret;
#line 3081 "cplus.met"
        
#line 3081 "cplus.met"
    }
#line 3081 "cplus.met"
#line 3081 "cplus.met"
#line 3081 "cplus.met"

#line 3082 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3082 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3082 "cplus.met"
return((PPTREE) 0);
#line 3082 "cplus.met"

#line 3082 "cplus.met"
string_list_exit :
#line 3082 "cplus.met"

#line 3082 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 3082 "cplus.met"
    _funcLevel--;
#line 3082 "cplus.met"
    return((PPTREE) -1) ;
#line 3082 "cplus.met"

#line 3082 "cplus.met"
string_list_ret :
#line 3082 "cplus.met"
    
#line 3082 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 3082 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3082 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3082 "cplus.met"
    return _retValue ;
#line 3082 "cplus.met"
}
#line 3082 "cplus.met"

#line 3082 "cplus.met"
#line 3645 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3645 "cplus.met"
{
#line 3645 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3645 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3645 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3645 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3645 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3645 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3645 "cplus.met"
#line 3645 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3645 "cplus.met"
#line 3645 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3645 "cplus.met"
#line 3647 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3647 "cplus.met"
    switch( lexEl.Value) {
#line 3647 "cplus.met"
#line 3648 "cplus.met"
        case CASE : 
#line 3648 "cplus.met"
            tokenAhead = 0 ;
#line 3648 "cplus.met"
            CommTerm();
#line 3648 "cplus.met"
#line 3649 "cplus.met"
#line 3650 "cplus.met"
            {
#line 3650 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3650 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3650 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 3650 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3650 "cplus.met"
                }
#line 3650 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3650 "cplus.met"
                retTree=_ptRes0;
#line 3650 "cplus.met"
            }
#line 3650 "cplus.met"
#line 3651 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3651 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3651 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3651 "cplus.met"
            } else {
#line 3651 "cplus.met"
                tokenAhead = 0 ;
#line 3651 "cplus.met"
            }
#line 3651 "cplus.met"
#line 3652 "cplus.met"
            {
#line 3652 "cplus.met"
                switchContext = 0 ;
#line 3652 "cplus.met"
#line 3653 "cplus.met"
#line 3653 "cplus.met"
                _addlist1 = list ;
#line 3653 "cplus.met"
#line 3653 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 143, cplus)) || 
#line 3653 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 139, cplus))) { 
#line 3653 "cplus.met"
#line 3654 "cplus.met"
#line 3654 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3654 "cplus.met"
#line 3654 "cplus.met"
                    if (list){
#line 3654 "cplus.met"
#line 3654 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3654 "cplus.met"
                    } else {
#line 3654 "cplus.met"
#line 3654 "cplus.met"
                        list = _addlist1 ;
#line 3654 "cplus.met"
                    }
#line 3654 "cplus.met"
                } 
#line 3654 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3654 "cplus.met"
            }
#line 3654 "cplus.met"
#line 3655 "cplus.met"
            {
#line 3655 "cplus.met"
                PPTREE _ptTree0=0;
#line 3655 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3655 "cplus.met"
                _retValue =_ptTree0;
#line 3655 "cplus.met"
                goto switch_elem_ret;
#line 3655 "cplus.met"
            }
#line 3655 "cplus.met"
#line 3655 "cplus.met"
            break;
#line 3655 "cplus.met"
#line 3657 "cplus.met"
        case DEFAULT : 
#line 3657 "cplus.met"
            tokenAhead = 0 ;
#line 3657 "cplus.met"
            CommTerm();
#line 3657 "cplus.met"
#line 3658 "cplus.met"
#line 3659 "cplus.met"
            {
#line 3659 "cplus.met"
                PPTREE _ptRes0=0;
#line 3659 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3659 "cplus.met"
                retTree=_ptRes0;
#line 3659 "cplus.met"
            }
#line 3659 "cplus.met"
#line 3660 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3660 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3660 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3660 "cplus.met"
            } else {
#line 3660 "cplus.met"
                tokenAhead = 0 ;
#line 3660 "cplus.met"
            }
#line 3660 "cplus.met"
#line 3661 "cplus.met"
            {
#line 3661 "cplus.met"
                switchContext = 0 ;
#line 3661 "cplus.met"
#line 3662 "cplus.met"
#line 3662 "cplus.met"
                _addlist2 = list ;
#line 3662 "cplus.met"
#line 3662 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 143, cplus)) || 
#line 3662 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 139, cplus))) { 
#line 3662 "cplus.met"
#line 3663 "cplus.met"
#line 3663 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3663 "cplus.met"
#line 3663 "cplus.met"
                    if (list){
#line 3663 "cplus.met"
#line 3663 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3663 "cplus.met"
                    } else {
#line 3663 "cplus.met"
#line 3663 "cplus.met"
                        list = _addlist2 ;
#line 3663 "cplus.met"
                    }
#line 3663 "cplus.met"
                } 
#line 3663 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3663 "cplus.met"
            }
#line 3663 "cplus.met"
#line 3664 "cplus.met"
            {
#line 3664 "cplus.met"
                PPTREE _ptTree0=0;
#line 3664 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3664 "cplus.met"
                _retValue =_ptTree0;
#line 3664 "cplus.met"
                goto switch_elem_ret;
#line 3664 "cplus.met"
            }
#line 3664 "cplus.met"
#line 3664 "cplus.met"
            break;
#line 3664 "cplus.met"
#line 3670 "cplus.met"
        default : 
#line 3670 "cplus.met"
#line 3667 "cplus.met"
#line 3669 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 140, cplus)){
#line 3669 "cplus.met"
#line 3671 "cplus.met"
                {
#line 3671 "cplus.met"
                    _retValue = retTree ;
#line 3671 "cplus.met"
                    goto switch_elem_ret;
#line 3671 "cplus.met"
                    
#line 3671 "cplus.met"
                }
#line 3671 "cplus.met"
            } else {
#line 3671 "cplus.met"
#line 3673 "cplus.met"
                
#line 3673 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3673 "cplus.met"
                goto switch_elem_exit;
#line 3673 "cplus.met"
            }
#line 3673 "cplus.met"
#line 3673 "cplus.met"
            break;
#line 3673 "cplus.met"
    }
#line 3673 "cplus.met"
#line 3673 "cplus.met"
#line 3675 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3675 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3675 "cplus.met"
switchContext =  _oldswitchContext;
#line 3675 "cplus.met"
return((PPTREE) 0);
#line 3675 "cplus.met"

#line 3675 "cplus.met"
switch_elem_exit :
#line 3675 "cplus.met"

#line 3675 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3675 "cplus.met"
    _funcLevel--;
#line 3675 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3675 "cplus.met"
    return((PPTREE) -1) ;
#line 3675 "cplus.met"

#line 3675 "cplus.met"
switch_elem_ret :
#line 3675 "cplus.met"
    
#line 3675 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3675 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3675 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3675 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3675 "cplus.met"
    return _retValue ;
#line 3675 "cplus.met"
}
#line 3675 "cplus.met"

#line 3675 "cplus.met"
#line 3678 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3678 "cplus.met"
{
#line 3678 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3678 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3678 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3678 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3678 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3678 "cplus.met"
#line 3678 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3678 "cplus.met"
#line 3678 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3678 "cplus.met"
#line 3680 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3680 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3680 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3680 "cplus.met"
    } else {
#line 3680 "cplus.met"
        tokenAhead = 0 ;
#line 3680 "cplus.met"
    }
#line 3680 "cplus.met"
#line 3680 "cplus.met"
    _addlist1 = list ;
#line 3680 "cplus.met"
#line 3681 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 146, cplus)) { 
#line 3681 "cplus.met"
#line 3682 "cplus.met"
#line 3682 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3682 "cplus.met"
#line 3682 "cplus.met"
        if (list){
#line 3682 "cplus.met"
#line 3682 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3682 "cplus.met"
        } else {
#line 3682 "cplus.met"
#line 3682 "cplus.met"
            list = _addlist1 ;
#line 3682 "cplus.met"
        }
#line 3682 "cplus.met"
    } 
#line 3682 "cplus.met"
#line 3683 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3683 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3683 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3683 "cplus.met"
    } else {
#line 3683 "cplus.met"
        tokenAhead = 0 ;
#line 3683 "cplus.met"
    }
#line 3683 "cplus.met"
#line 3684 "cplus.met"
    {
#line 3684 "cplus.met"
        _retValue = list ;
#line 3684 "cplus.met"
        goto switch_list_ret;
#line 3684 "cplus.met"
        
#line 3684 "cplus.met"
    }
#line 3684 "cplus.met"
#line 3684 "cplus.met"
#line 3684 "cplus.met"

#line 3685 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3685 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3685 "cplus.met"
return((PPTREE) 0);
#line 3685 "cplus.met"

#line 3685 "cplus.met"
switch_list_exit :
#line 3685 "cplus.met"

#line 3685 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3685 "cplus.met"
    _funcLevel--;
#line 3685 "cplus.met"
    return((PPTREE) -1) ;
#line 3685 "cplus.met"

#line 3685 "cplus.met"
switch_list_ret :
#line 3685 "cplus.met"
    
#line 3685 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3685 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3685 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3685 "cplus.met"
    return _retValue ;
#line 3685 "cplus.met"
}
#line 3685 "cplus.met"

#line 3685 "cplus.met"
#line 1879 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1879 "cplus.met"
{
#line 1879 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1879 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1879 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1879 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1879 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1879 "cplus.met"
#line 1879 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1879 "cplus.met"
#line 1879 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1879 "cplus.met"
#line 1881 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1881 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1881 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1881 "cplus.met"
    } else {
#line 1881 "cplus.met"
        tokenAhead = 0 ;
#line 1881 "cplus.met"
    }
#line 1881 "cplus.met"
#line 1881 "cplus.met"
    _addlist1 = listParam ;
#line 1881 "cplus.met"
#line 1882 "cplus.met"
    do {
#line 1882 "cplus.met"
#line 1884 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1884 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 151, cplus))){
#line 1884 "cplus.met"
#line 1886 "cplus.met"
#line 1886 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 1886 "cplus.met"
#line 1886 "cplus.met"
            if (listParam){
#line 1886 "cplus.met"
#line 1886 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 1886 "cplus.met"
            } else {
#line 1886 "cplus.met"
#line 1886 "cplus.met"
                listParam = _addlist1 ;
#line 1886 "cplus.met"
            }
#line 1886 "cplus.met"
        }
#line 1886 "cplus.met"
#line 1886 "cplus.met"
#line 1887 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1887 "cplus.met"
#line 1888 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1888 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1888 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 1888 "cplus.met"
    } else {
#line 1888 "cplus.met"
        tokenAhead = 0 ;
#line 1888 "cplus.met"
    }
#line 1888 "cplus.met"
#line 1889 "cplus.met"
    {
#line 1889 "cplus.met"
        PPTREE _ptTree0=0;
#line 1889 "cplus.met"
        {
#line 1889 "cplus.met"
            PPTREE _ptRes1=0;
#line 1889 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1889 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1889 "cplus.met"
            _ptTree0=_ptRes1;
#line 1889 "cplus.met"
        }
#line 1889 "cplus.met"
        _retValue =_ptTree0;
#line 1889 "cplus.met"
        goto template_type_ret;
#line 1889 "cplus.met"
    }
#line 1889 "cplus.met"
#line 1889 "cplus.met"
#line 1889 "cplus.met"

#line 1890 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1890 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1890 "cplus.met"
return((PPTREE) 0);
#line 1890 "cplus.met"

#line 1890 "cplus.met"
template_type_exit :
#line 1890 "cplus.met"

#line 1890 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1890 "cplus.met"
    _funcLevel--;
#line 1890 "cplus.met"
    return((PPTREE) -1) ;
#line 1890 "cplus.met"

#line 1890 "cplus.met"
template_type_ret :
#line 1890 "cplus.met"
    
#line 1890 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1890 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1890 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1890 "cplus.met"
    return _retValue ;
#line 1890 "cplus.met"
}
#line 1890 "cplus.met"

#line 1890 "cplus.met"
#line 3320 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3320 "cplus.met"
{
#line 3320 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3320 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3320 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3320 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3320 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3320 "cplus.met"
#line 3320 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3320 "cplus.met"
#line 3322 "cplus.met"
    {
#line 3322 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3322 "cplus.met"
        _ptRes0= MakeTree(FUNC, 11);
#line 3322 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 130, cplus))== (PPTREE) -1 ) {
#line 3322 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3322 "cplus.met"
        }
#line 3322 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3322 "cplus.met"
        funcTree=_ptRes0;
#line 3322 "cplus.met"
    }
#line 3322 "cplus.met"
#line 3323 "cplus.met"
    {
#line 3323 "cplus.met"
        PPTREE _ptTree0=0;
#line 3323 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 3323 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3323 "cplus.met"
        }
#line 3323 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3323 "cplus.met"
    }
#line 3323 "cplus.met"
#line 3324 "cplus.met"
    {
#line 3324 "cplus.met"
        PPTREE _ptTree0=0;
#line 3324 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 3324 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3324 "cplus.met"
        }
#line 3324 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3324 "cplus.met"
    }
#line 3324 "cplus.met"
#line 3325 "cplus.met"
    {
#line 3325 "cplus.met"
        _retValue = funcTree ;
#line 3325 "cplus.met"
        goto type_and_declarator_ret;
#line 3325 "cplus.met"
        
#line 3325 "cplus.met"
    }
#line 3325 "cplus.met"
#line 3325 "cplus.met"
#line 3325 "cplus.met"

#line 3326 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3326 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3326 "cplus.met"
return((PPTREE) 0);
#line 3326 "cplus.met"

#line 3326 "cplus.met"
type_and_declarator_exit :
#line 3326 "cplus.met"

#line 3326 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3326 "cplus.met"
    _funcLevel--;
#line 3326 "cplus.met"
    return((PPTREE) -1) ;
#line 3326 "cplus.met"

#line 3326 "cplus.met"
type_and_declarator_ret :
#line 3326 "cplus.met"
    
#line 3326 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3326 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3326 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3326 "cplus.met"
    return _retValue ;
#line 3326 "cplus.met"
}
#line 3326 "cplus.met"

#line 3326 "cplus.met"
#line 3218 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3218 "cplus.met"
{
#line 3218 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3218 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3218 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3218 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3218 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3218 "cplus.met"
#line 3219 "cplus.met"
    {
#line 3219 "cplus.met"
        PPTREE _ptTree0=0;
#line 3219 "cplus.met"
        {
#line 3219 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3219 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3219 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3219 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3219 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3219 "cplus.met"
            } else {
#line 3219 "cplus.met"
                tokenAhead = 0 ;
#line 3219 "cplus.met"
            }
#line 3219 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3219 "cplus.met"
            _ptTree0=_ptRes1;
#line 3219 "cplus.met"
        }
#line 3219 "cplus.met"
        _retValue =_ptTree0;
#line 3219 "cplus.met"
        goto type_descr_ret;
#line 3219 "cplus.met"
    }
#line 3219 "cplus.met"
#line 3219 "cplus.met"
#line 3219 "cplus.met"

#line 3220 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3220 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3220 "cplus.met"
return((PPTREE) 0);
#line 3220 "cplus.met"

#line 3220 "cplus.met"
type_descr_exit :
#line 3220 "cplus.met"

#line 3220 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3220 "cplus.met"
    _funcLevel--;
#line 3220 "cplus.met"
    return((PPTREE) -1) ;
#line 3220 "cplus.met"

#line 3220 "cplus.met"
type_descr_ret :
#line 3220 "cplus.met"
    
#line 3220 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3220 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3220 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3220 "cplus.met"
    return _retValue ;
#line 3220 "cplus.met"
}
#line 3220 "cplus.met"

#line 3220 "cplus.met"
#line 2666 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2666 "cplus.met"
{
#line 2666 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2666 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2666 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2666 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2666 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2666 "cplus.met"
#line 2666 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2666 "cplus.met"
#line 2668 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 2668 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2668 "cplus.met"
    }
#line 2668 "cplus.met"
#line 2669 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2669 "cplus.met"
#line 2670 "cplus.met"
        {
#line 2670 "cplus.met"
            PPTREE _ptRes0=0;
#line 2670 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2670 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2670 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2670 "cplus.met"
            valTree=_ptRes0;
#line 2670 "cplus.met"
        }
#line 2670 "cplus.met"
    } else {
#line 2670 "cplus.met"
#line 2672 "cplus.met"
        valTree = retTree ;
#line 2672 "cplus.met"
    }
#line 2672 "cplus.met"
#line 2673 "cplus.met"
    {
#line 2673 "cplus.met"
        _retValue = valTree ;
#line 2673 "cplus.met"
        goto type_name_ret;
#line 2673 "cplus.met"
        
#line 2673 "cplus.met"
    }
#line 2673 "cplus.met"
#line 2673 "cplus.met"
#line 2673 "cplus.met"

#line 2674 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2674 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2674 "cplus.met"
return((PPTREE) 0);
#line 2674 "cplus.met"

#line 2674 "cplus.met"
type_name_exit :
#line 2674 "cplus.met"

#line 2674 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2674 "cplus.met"
    _funcLevel--;
#line 2674 "cplus.met"
    return((PPTREE) -1) ;
#line 2674 "cplus.met"

#line 2674 "cplus.met"
type_name_ret :
#line 2674 "cplus.met"
    
#line 2674 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2674 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2674 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2674 "cplus.met"
    return _retValue ;
#line 2674 "cplus.met"
}
#line 2674 "cplus.met"

#line 2674 "cplus.met"
#line 1855 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1855 "cplus.met"
{
#line 1855 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1855 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1855 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1855 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1855 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1855 "cplus.met"
#line 1855 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1855 "cplus.met"
#line 1855 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1855 "cplus.met"
#line 1857 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 153, cplus))== (PPTREE) -1 ) {
#line 1857 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1857 "cplus.met"
    }
#line 1857 "cplus.met"
#line 1858 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1858 "cplus.met"
#line 1859 "cplus.met"
#line 1859 "cplus.met"
        _addlist1 = listParam ;
#line 1859 "cplus.met"
#line 1860 "cplus.met"
        do {
#line 1860 "cplus.met"
#line 1861 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(conditional_expression), 32, cplus)) || 
#line 1861 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 151, cplus))){
#line 1861 "cplus.met"
#line 1862 "cplus.met"
#line 1862 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1862 "cplus.met"
#line 1862 "cplus.met"
                if (listParam){
#line 1862 "cplus.met"
#line 1862 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1862 "cplus.met"
                } else {
#line 1862 "cplus.met"
#line 1862 "cplus.met"
                    listParam = _addlist1 ;
#line 1862 "cplus.met"
                }
#line 1862 "cplus.met"
            }
#line 1862 "cplus.met"
#line 1862 "cplus.met"
#line 1863 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1863 "cplus.met"
#line 1864 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1864 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1864 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1864 "cplus.met"
        } else {
#line 1864 "cplus.met"
            tokenAhead = 0 ;
#line 1864 "cplus.met"
        }
#line 1864 "cplus.met"
#line 1865 "cplus.met"
        {
#line 1865 "cplus.met"
            PPTREE _ptRes0=0;
#line 1865 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1865 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1865 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1865 "cplus.met"
            ret=_ptRes0;
#line 1865 "cplus.met"
        }
#line 1865 "cplus.met"
#line 1865 "cplus.met"
#line 1865 "cplus.met"
    }
#line 1865 "cplus.met"
#line 1867 "cplus.met"
    {
#line 1867 "cplus.met"
        _retValue = ret ;
#line 1867 "cplus.met"
        goto type_specifier_ret;
#line 1867 "cplus.met"
        
#line 1867 "cplus.met"
    }
#line 1867 "cplus.met"
#line 1867 "cplus.met"
#line 1867 "cplus.met"

#line 1868 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1868 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1868 "cplus.met"
return((PPTREE) 0);
#line 1868 "cplus.met"

#line 1868 "cplus.met"
type_specifier_exit :
#line 1868 "cplus.met"

#line 1868 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1868 "cplus.met"
    _funcLevel--;
#line 1868 "cplus.met"
    return((PPTREE) -1) ;
#line 1868 "cplus.met"

#line 1868 "cplus.met"
type_specifier_ret :
#line 1868 "cplus.met"
    
#line 1868 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 1868 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1868 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1868 "cplus.met"
    return _retValue ;
#line 1868 "cplus.met"
}
#line 1868 "cplus.met"

#line 1868 "cplus.met"
#line 1842 "cplus.met"
PPTREE cplus::type_specifier_without_param ( int error_free)
#line 1842 "cplus.met"
{
#line 1842 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1842 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1842 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1842 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier_without_param",TRACE_ENTER,(PPTREE)0);
#line 1842 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1842 "cplus.met"
#line 1842 "cplus.met"
    PPTREE valTreeR = (PPTREE) 0;
#line 1842 "cplus.met"
#line 1844 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTreeR = ,_Tak(range_modifier), 125, cplus)){
#line 1844 "cplus.met"
#line 1845 "cplus.met"
        {
#line 1845 "cplus.met"
            PPTREE _ptTree0=0;
#line 1845 "cplus.met"
            {
#line 1845 "cplus.met"
                PPTREE _ptTree1=0;
#line 1845 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 1845 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1845 "cplus.met"
                }
#line 1845 "cplus.met"
                _ptTree0=ReplaceTree(valTreeR , 2 , _ptTree1);
#line 1845 "cplus.met"
            }
#line 1845 "cplus.met"
            _retValue =_ptTree0;
#line 1845 "cplus.met"
            goto type_specifier_without_param_ret;
#line 1845 "cplus.met"
        }
#line 1845 "cplus.met"
    }
#line 1845 "cplus.met"
#line 1846 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1846 "cplus.met"
    switch( lexEl.Value) {
#line 1846 "cplus.met"
#line 1847 "cplus.met"
        case ENUM : 
#line 1847 "cplus.met"
#line 1847 "cplus.met"
            {
#line 1847 "cplus.met"
                PPTREE _ptTree0=0;
#line 1847 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(enum_declarator)(error_free), 58, cplus))== (PPTREE) -1 ) {
#line 1847 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1847 "cplus.met"
                }
#line 1847 "cplus.met"
                _retValue =_ptTree0;
#line 1847 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1847 "cplus.met"
            }
#line 1847 "cplus.met"
            break;
#line 1847 "cplus.met"
#line 1848 "cplus.met"
        case STRUCT : 
#line 1848 "cplus.met"
#line 1848 "cplus.met"
            {
#line 1848 "cplus.met"
                PPTREE _ptTree0=0;
#line 1848 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1848 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1848 "cplus.met"
                }
#line 1848 "cplus.met"
                _retValue =_ptTree0;
#line 1848 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1848 "cplus.met"
            }
#line 1848 "cplus.met"
            break;
#line 1848 "cplus.met"
#line 1849 "cplus.met"
        case UNION : 
#line 1849 "cplus.met"
#line 1849 "cplus.met"
            {
#line 1849 "cplus.met"
                PPTREE _ptTree0=0;
#line 1849 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1849 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1849 "cplus.met"
                }
#line 1849 "cplus.met"
                _retValue =_ptTree0;
#line 1849 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1849 "cplus.met"
            }
#line 1849 "cplus.met"
            break;
#line 1849 "cplus.met"
#line 1850 "cplus.met"
        case CLASS : 
#line 1850 "cplus.met"
#line 1850 "cplus.met"
            {
#line 1850 "cplus.met"
                PPTREE _ptTree0=0;
#line 1850 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(class_declaration)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1850 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1850 "cplus.met"
                }
#line 1850 "cplus.met"
                _retValue =_ptTree0;
#line 1850 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1850 "cplus.met"
            }
#line 1850 "cplus.met"
            break;
#line 1850 "cplus.met"
#line 1851 "cplus.met"
        default : 
#line 1851 "cplus.met"
#line 1851 "cplus.met"
            {
#line 1851 "cplus.met"
                PPTREE _ptTree0=0;
#line 1851 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1851 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTreeR);
                    PROG_EXIT(type_specifier_without_param_exit,"type_specifier_without_param")
#line 1851 "cplus.met"
                }
#line 1851 "cplus.met"
                _retValue =_ptTree0;
#line 1851 "cplus.met"
                goto type_specifier_without_param_ret;
#line 1851 "cplus.met"
            }
#line 1851 "cplus.met"
            break;
#line 1851 "cplus.met"
    }
#line 1851 "cplus.met"
#line 1851 "cplus.met"
#line 1852 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1852 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1852 "cplus.met"
return((PPTREE) 0);
#line 1852 "cplus.met"

#line 1852 "cplus.met"
type_specifier_without_param_exit :
#line 1852 "cplus.met"

#line 1852 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_EXIT,(PPTREE)0);
#line 1852 "cplus.met"
    _funcLevel--;
#line 1852 "cplus.met"
    return((PPTREE) -1) ;
#line 1852 "cplus.met"

#line 1852 "cplus.met"
type_specifier_without_param_ret :
#line 1852 "cplus.met"
    
#line 1852 "cplus.met"
    _Debug = TRACE_RULE("type_specifier_without_param",TRACE_RETURN,_retValue);
#line 1852 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1852 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1852 "cplus.met"
    return _retValue ;
#line 1852 "cplus.met"
}
#line 1852 "cplus.met"

#line 1852 "cplus.met"
#line 1637 "cplus.met"
PPTREE cplus::typedef_and_declarator ( int error_free)
#line 1637 "cplus.met"
{
#line 1637 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1637 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1637 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1637 "cplus.met"
    int _Debug = TRACE_RULE("typedef_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 1637 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1637 "cplus.met"
#line 1637 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1637 "cplus.met"
#line 1639 "cplus.met"
    {
#line 1639 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1639 "cplus.met"
        _ptRes0= MakeTree(TYPEDEF, 2);
#line 1639 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 152, cplus))== (PPTREE) -1 ) {
#line 1639 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,retTree);
            PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1639 "cplus.met"
        }
#line 1639 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1639 "cplus.met"
        retTree=_ptRes0;
#line 1639 "cplus.met"
    }
#line 1639 "cplus.met"
#line 1640 "cplus.met"
    {
#line 1640 "cplus.met"
        PPTREE _ptTree0=0;
#line 1640 "cplus.met"
        {
#line 1640 "cplus.met"
            PPTREE _ptTree1=0;
#line 1640 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(declarator_list)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1640 "cplus.met"
                MulFreeTree(3,_ptTree1,_ptTree0,retTree);
                PROG_EXIT(typedef_and_declarator_exit,"typedef_and_declarator")
#line 1640 "cplus.met"
            }
#line 1640 "cplus.met"
            _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1640 "cplus.met"
        }
#line 1640 "cplus.met"
        _retValue =_ptTree0;
#line 1640 "cplus.met"
        goto typedef_and_declarator_ret;
#line 1640 "cplus.met"
    }
#line 1640 "cplus.met"
#line 1640 "cplus.met"
#line 1640 "cplus.met"

#line 1641 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1641 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1641 "cplus.met"
return((PPTREE) 0);
#line 1641 "cplus.met"

#line 1641 "cplus.met"
typedef_and_declarator_exit :
#line 1641 "cplus.met"

#line 1641 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 1641 "cplus.met"
    _funcLevel--;
#line 1641 "cplus.met"
    return((PPTREE) -1) ;
#line 1641 "cplus.met"

#line 1641 "cplus.met"
typedef_and_declarator_ret :
#line 1641 "cplus.met"
    
#line 1641 "cplus.met"
    _Debug = TRACE_RULE("typedef_and_declarator",TRACE_RETURN,_retValue);
#line 1641 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1641 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1641 "cplus.met"
    return _retValue ;
#line 1641 "cplus.met"
}
#line 1641 "cplus.met"

#line 1641 "cplus.met"
#line 2888 "cplus.met"
PPTREE cplus::unary_expression ( int error_free)
#line 2888 "cplus.met"
{
#line 2888 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2888 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2888 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2888 "cplus.met"
    int _Debug = TRACE_RULE("unary_expression",TRACE_ENTER,(PPTREE)0);
#line 2888 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2888 "cplus.met"
#line 2888 "cplus.met"
    PPTREE expTree = (PPTREE) 0,inter = (PPTREE) 0;
#line 2888 "cplus.met"
#line 2890 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2890 "cplus.met"
    switch( lexEl.Value) {
#line 2890 "cplus.met"
#line 2891 "cplus.met"
        case TIRE : 
#line 2891 "cplus.met"
            tokenAhead = 0 ;
#line 2891 "cplus.met"
            CommTerm();
#line 2891 "cplus.met"
#line 2891 "cplus.met"
            {
#line 2891 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2891 "cplus.met"
                _ptRes0= MakeTree(NEG, 1);
#line 2891 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2891 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2891 "cplus.met"
                }
#line 2891 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2891 "cplus.met"
                expTree=_ptRes0;
#line 2891 "cplus.met"
            }
#line 2891 "cplus.met"
            break;
#line 2891 "cplus.met"
#line 2892 "cplus.met"
        case PLUS : 
#line 2892 "cplus.met"
            tokenAhead = 0 ;
#line 2892 "cplus.met"
            CommTerm();
#line 2892 "cplus.met"
#line 2892 "cplus.met"
            {
#line 2892 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2892 "cplus.met"
                _ptRes0= MakeTree(POS, 1);
#line 2892 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2892 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2892 "cplus.met"
                }
#line 2892 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2892 "cplus.met"
                expTree=_ptRes0;
#line 2892 "cplus.met"
            }
#line 2892 "cplus.met"
            break;
#line 2892 "cplus.met"
#line 2893 "cplus.met"
        case TILD : 
#line 2893 "cplus.met"
            tokenAhead = 0 ;
#line 2893 "cplus.met"
            CommTerm();
#line 2893 "cplus.met"
#line 2893 "cplus.met"
            {
#line 2893 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2893 "cplus.met"
                _ptRes0= MakeTree(LNEG, 1);
#line 2893 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2893 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2893 "cplus.met"
                }
#line 2893 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2893 "cplus.met"
                expTree=_ptRes0;
#line 2893 "cplus.met"
            }
#line 2893 "cplus.met"
            break;
#line 2893 "cplus.met"
#line 2894 "cplus.met"
        case EXCL : 
#line 2894 "cplus.met"
            tokenAhead = 0 ;
#line 2894 "cplus.met"
            CommTerm();
#line 2894 "cplus.met"
#line 2894 "cplus.met"
            {
#line 2894 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2894 "cplus.met"
                _ptRes0= MakeTree(NOT, 1);
#line 2894 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2894 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2894 "cplus.met"
                }
#line 2894 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2894 "cplus.met"
                expTree=_ptRes0;
#line 2894 "cplus.met"
            }
#line 2894 "cplus.met"
            break;
#line 2894 "cplus.met"
#line 2895 "cplus.met"
        case ETOI : 
#line 2895 "cplus.met"
            tokenAhead = 0 ;
#line 2895 "cplus.met"
            CommTerm();
#line 2895 "cplus.met"
#line 2895 "cplus.met"
            {
#line 2895 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2895 "cplus.met"
                _ptRes0= MakeTree(POINT, 1);
#line 2895 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2895 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2895 "cplus.met"
                }
#line 2895 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2895 "cplus.met"
                expTree=_ptRes0;
#line 2895 "cplus.met"
            }
#line 2895 "cplus.met"
            break;
#line 2895 "cplus.met"
#line 2896 "cplus.met"
        case ETCO : 
#line 2896 "cplus.met"
            tokenAhead = 0 ;
#line 2896 "cplus.met"
            CommTerm();
#line 2896 "cplus.met"
#line 2896 "cplus.met"
            {
#line 2896 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2896 "cplus.met"
                _ptRes0= MakeTree(ADDR, 1);
#line 2896 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2896 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2896 "cplus.met"
                }
#line 2896 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2896 "cplus.met"
                expTree=_ptRes0;
#line 2896 "cplus.met"
            }
#line 2896 "cplus.met"
            break;
#line 2896 "cplus.met"
#line 2897 "cplus.met"
        case PLUSPLUS : 
#line 2897 "cplus.met"
            tokenAhead = 0 ;
#line 2897 "cplus.met"
            CommTerm();
#line 2897 "cplus.met"
#line 2897 "cplus.met"
            {
#line 2897 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2897 "cplus.met"
                _ptRes0= MakeTree(BINCR, 1);
#line 2897 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2897 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2897 "cplus.met"
                }
#line 2897 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2897 "cplus.met"
                expTree=_ptRes0;
#line 2897 "cplus.met"
            }
#line 2897 "cplus.met"
            break;
#line 2897 "cplus.met"
#line 2898 "cplus.met"
        case TIRETIRE : 
#line 2898 "cplus.met"
            tokenAhead = 0 ;
#line 2898 "cplus.met"
            CommTerm();
#line 2898 "cplus.met"
#line 2898 "cplus.met"
            {
#line 2898 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2898 "cplus.met"
                _ptRes0= MakeTree(BDECR, 1);
#line 2898 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(cast_expression)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 2898 "cplus.met"
                    MulFreeTree(4,_ptRes0,_ptTree0,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2898 "cplus.met"
                }
#line 2898 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2898 "cplus.met"
                expTree=_ptRes0;
#line 2898 "cplus.met"
            }
#line 2898 "cplus.met"
            break;
#line 2898 "cplus.met"
#line 2899 "cplus.met"
        case SIZEOF : 
#line 2899 "cplus.met"
            tokenAhead = 0 ;
#line 2899 "cplus.met"
            CommTerm();
#line 2899 "cplus.met"
#line 2900 "cplus.met"
#line 2901 "cplus.met"
            if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(sizeof_type), 137, cplus))){
#line 2901 "cplus.met"
#line 2902 "cplus.met"
#line 2903 "cplus.met"
                if ( (inter=NQUICK_CALL(_Tak(unary_expression)(error_free), 155, cplus))== (PPTREE) -1 ) {
#line 2903 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2903 "cplus.met"
                }
#line 2903 "cplus.met"
#line 2904 "cplus.met"
                                       /* on libere le chapeau : un EXP, sans liberer
#line 2904 "cplus.met"
                                    l'interieur */
#line 2904 "cplus.met"
                                      if (NumberTree(inter) == EXP) {
#line 2904 "cplus.met"
                                     expTree = SonTree(inter,1);
#line 2904 "cplus.met"
                                     AddRef(expTree);
#line 2904 "cplus.met"
                                     FreeTreeRec(inter);
#line 2904 "cplus.met"
                                     RemRef(expTree);
#line 2904 "cplus.met"
                                          } else
#line 2904 "cplus.met"
                                     expTree = inter;
#line 2904 "cplus.met"
                                
#line 2904 "cplus.met"
#line 2904 "cplus.met"
#line 2914 "cplus.met"
            }
#line 2914 "cplus.met"
#line 2916 "cplus.met"
            {
#line 2916 "cplus.met"
                PPTREE _ptTree0=0;
#line 2916 "cplus.met"
                {
#line 2916 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2916 "cplus.met"
                    _ptRes1= MakeTree(EXP_LIST, 2);
#line 2916 "cplus.met"
                    {
#line 2916 "cplus.met"
                        PPTREE _ptRes2=0;
#line 2916 "cplus.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 2916 "cplus.met"
                        ReplaceTree(_ptRes2, 1, MakeString ("sizeof"));
#line 2916 "cplus.met"
                        _ptTree1=_ptRes2;
#line 2916 "cplus.met"
                    }
#line 2916 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2916 "cplus.met"
                    ReplaceTree(_ptRes1, 2, expTree );
#line 2916 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2916 "cplus.met"
                }
#line 2916 "cplus.met"
                _retValue =_ptTree0;
#line 2916 "cplus.met"
                goto unary_expression_ret;
#line 2916 "cplus.met"
            }
#line 2916 "cplus.met"
#line 2916 "cplus.met"
            break;
#line 2916 "cplus.met"
#line 2919 "cplus.met"
        default : 
#line 2919 "cplus.met"
#line 2919 "cplus.met"
            if ((((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DPOIDPOI,"::")) || 
#line 2919 "cplus.met"
                ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( NEW,"new"))) || 
#line 2919 "cplus.met"
               ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( DELETE,"delete"))){
#line 2919 "cplus.met"
#line 2920 "cplus.met"
#line 2921 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(expTree = ,_Tak(alloc_expression), 4, cplus))){
#line 2921 "cplus.met"
#line 2922 "cplus.met"
                    if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2922 "cplus.met"
                        MulFreeTree(2,expTree,inter);
                        PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2922 "cplus.met"
                    }
#line 2922 "cplus.met"
                }
#line 2922 "cplus.met"
#line 2922 "cplus.met"
#line 2922 "cplus.met"
            } else {
#line 2922 "cplus.met"
#line 2925 "cplus.met"
                if ( (expTree=NQUICK_CALL(_Tak(postfix_expression)(error_free), 112, cplus))== (PPTREE) -1 ) {
#line 2925 "cplus.met"
                    MulFreeTree(2,expTree,inter);
                    PROG_EXIT(unary_expression_exit,"unary_expression")
#line 2925 "cplus.met"
                }
#line 2925 "cplus.met"
            }
#line 2925 "cplus.met"
            break;
#line 2925 "cplus.met"
    }
#line 2925 "cplus.met"
#line 2927 "cplus.met"
    {
#line 2927 "cplus.met"
        _retValue = expTree ;
#line 2927 "cplus.met"
        goto unary_expression_ret;
#line 2927 "cplus.met"
        
#line 2927 "cplus.met"
    }
#line 2927 "cplus.met"
#line 2927 "cplus.met"
#line 2927 "cplus.met"

#line 2928 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2928 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2928 "cplus.met"
return((PPTREE) 0);
#line 2928 "cplus.met"

#line 2928 "cplus.met"
unary_expression_exit :
#line 2928 "cplus.met"

#line 2928 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_EXIT,(PPTREE)0);
#line 2928 "cplus.met"
    _funcLevel--;
#line 2928 "cplus.met"
    return((PPTREE) -1) ;
#line 2928 "cplus.met"

#line 2928 "cplus.met"
unary_expression_ret :
#line 2928 "cplus.met"
    
#line 2928 "cplus.met"
    _Debug = TRACE_RULE("unary_expression",TRACE_RETURN,_retValue);
#line 2928 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2928 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2928 "cplus.met"
    return _retValue ;
#line 2928 "cplus.met"
}
#line 2928 "cplus.met"

#line 2928 "cplus.met"
#line 2174 "cplus.met"
PPTREE cplus::unsigned_type ( int error_free)
#line 2174 "cplus.met"
{
#line 2174 "cplus.met"
    int  _oldinside_signed = inside_signed;
#line 2174 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2174 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2174 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2174 "cplus.met"
    int _Debug = TRACE_RULE("unsigned_type",TRACE_ENTER,(PPTREE)0);
#line 2174 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2174 "cplus.met"
#line 2174 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 2174 "cplus.met"
#line 2176 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2176 "cplus.met"
    if (  !SEE_TOKEN( UNSIGNED,"unsigned") || !(CommTerm(),1)) {
#line 2176 "cplus.met"
        MulFreeTree(1,retTree);
        TOKEN_EXIT(unsigned_type_exit,"unsigned")
#line 2176 "cplus.met"
    } else {
#line 2176 "cplus.met"
        tokenAhead = 0 ;
#line 2176 "cplus.met"
    }
#line 2176 "cplus.met"
#line 2177 "cplus.met"
    {
#line 2177 "cplus.met"
        inside_signed = 1 ;
#line 2177 "cplus.met"
#line 2178 "cplus.met"
#line 2179 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(short_long_int_char), 132, cplus)){
#line 2179 "cplus.met"
#line 2180 "cplus.met"
            {
#line 2180 "cplus.met"
                PPTREE _ptTree0=0;
#line 2180 "cplus.met"
                {
#line 2180 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2180 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2180 "cplus.met"
                    ReplaceTree(_ptRes1, 1, retTree );
#line 2180 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2180 "cplus.met"
                }
#line 2180 "cplus.met"
                _retValue =_ptTree0;
#line 2180 "cplus.met"
                goto unsigned_type_ret;
#line 2180 "cplus.met"
            }
#line 2180 "cplus.met"
        } else {
#line 2180 "cplus.met"
#line 2182 "cplus.met"
            {
#line 2182 "cplus.met"
                PPTREE _ptTree0=0;
#line 2182 "cplus.met"
                {
#line 2182 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2182 "cplus.met"
                    _ptRes1= MakeTree(TUNSIGNED, 1);
#line 2182 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2182 "cplus.met"
                }
#line 2182 "cplus.met"
                _retValue =_ptTree0;
#line 2182 "cplus.met"
                goto unsigned_type_ret;
#line 2182 "cplus.met"
            }
#line 2182 "cplus.met"
        }
#line 2182 "cplus.met"
#line 2182 "cplus.met"
        inside_signed =  _oldinside_signed;
#line 2182 "cplus.met"
    }
#line 2182 "cplus.met"
#line 2182 "cplus.met"
#line 2183 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2183 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2183 "cplus.met"
inside_signed =  _oldinside_signed;
#line 2183 "cplus.met"
return((PPTREE) 0);
#line 2183 "cplus.met"

#line 2183 "cplus.met"
unsigned_type_exit :
#line 2183 "cplus.met"

#line 2183 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_EXIT,(PPTREE)0);
#line 2183 "cplus.met"
    _funcLevel--;
#line 2183 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2183 "cplus.met"
    return((PPTREE) -1) ;
#line 2183 "cplus.met"

#line 2183 "cplus.met"
unsigned_type_ret :
#line 2183 "cplus.met"
    
#line 2183 "cplus.met"
    _Debug = TRACE_RULE("unsigned_type",TRACE_RETURN,_retValue);
#line 2183 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2183 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2183 "cplus.met"
    inside_signed =  _oldinside_signed;
#line 2183 "cplus.met"
    return _retValue ;
#line 2183 "cplus.met"
}
#line 2183 "cplus.met"

#line 2183 "cplus.met"
