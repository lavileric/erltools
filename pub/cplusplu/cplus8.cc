/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1114 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1114 "cplus.met"
{
#line 1114 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1114 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1114 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1114 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1114 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1114 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1114 "cplus.met"
#line 1114 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1114 "cplus.met"
#line 1114 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1114 "cplus.met"
#line 1116 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1116 "cplus.met"
#line 1117 "cplus.met"
#line 1118 "cplus.met"
        {
#line 1118 "cplus.met"
            keepCarriage = 1 ;
#line 1118 "cplus.met"
#line 1119 "cplus.met"
#line 1120 "cplus.met"
            {
#line 1120 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1120 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1120 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1120 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1120 "cplus.met"
                }
#line 1120 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1120 "cplus.met"
                retTree=_ptRes0;
#line 1120 "cplus.met"
            }
#line 1120 "cplus.met"
#line 1121 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1121 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1121 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1121 "cplus.met"
            } else {
#line 1121 "cplus.met"
                tokenAhead = 0 ;
#line 1121 "cplus.met"
            }
#line 1121 "cplus.met"
#line 1121 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1121 "cplus.met"
        }
#line 1121 "cplus.met"
#line 1121 "cplus.met"
#line 1122 "cplus.met"
    } else {
#line 1122 "cplus.met"
#line 1125 "cplus.met"
#line 1126 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1126 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1126 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1126 "cplus.met"
        } else {
#line 1126 "cplus.met"
            tokenAhead = 0 ;
#line 1126 "cplus.met"
        }
#line 1126 "cplus.met"
#line 1127 "cplus.met"
        {
#line 1127 "cplus.met"
            keepCarriage = 1 ;
#line 1127 "cplus.met"
#line 1128 "cplus.met"
#line 1129 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1129 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1129 "cplus.met"
            }
#line 1129 "cplus.met"
#line 1130 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1130 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1130 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1130 "cplus.met"
            } else {
#line 1130 "cplus.met"
                tokenAhead = 0 ;
#line 1130 "cplus.met"
            }
#line 1130 "cplus.met"
#line 1130 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1130 "cplus.met"
        }
#line 1130 "cplus.met"
#line 1132 "cplus.met"
        {
#line 1132 "cplus.met"
            PPTREE _ptRes0=0;
#line 1132 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1132 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1132 "cplus.met"
            retTree=_ptRes0;
#line 1132 "cplus.met"
        }
#line 1132 "cplus.met"
#line 1132 "cplus.met"
    }
#line 1132 "cplus.met"
#line 1132 "cplus.met"
    _addlist1 = list ;
#line 1132 "cplus.met"
#line 1134 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1134 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1134 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1134 "cplus.met"
#line 1135 "cplus.met"
#line 1135 "cplus.met"
        {
#line 1135 "cplus.met"
            PPTREE _ptTree0=0;
#line 1135 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1135 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1135 "cplus.met"
            }
#line 1135 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1135 "cplus.met"
        }
#line 1135 "cplus.met"
#line 1135 "cplus.met"
        if (list){
#line 1135 "cplus.met"
#line 1135 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1135 "cplus.met"
        } else {
#line 1135 "cplus.met"
#line 1135 "cplus.met"
            list = _addlist1 ;
#line 1135 "cplus.met"
        }
#line 1135 "cplus.met"
    } 
#line 1135 "cplus.met"
#line 1136 "cplus.met"
    {
#line 1136 "cplus.met"
        PPTREE _ptTree0=0;
#line 1136 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1136 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1136 "cplus.met"
        }
#line 1136 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1136 "cplus.met"
    }
#line 1136 "cplus.met"
#line 1137 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1137 "cplus.met"
#line 1138 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1138 "cplus.met"
    switch( lexEl.Value) {
#line 1138 "cplus.met"
#line 1139 "cplus.met"
        case META : 
#line 1139 "cplus.met"
        case ELSE_DIR : 
#line 1139 "cplus.met"
            tokenAhead = 0 ;
#line 1139 "cplus.met"
            CommTerm();
#line 1139 "cplus.met"
#line 1140 "cplus.met"
#line 1140 "cplus.met"
            _addlist2 = list2 ;
#line 1140 "cplus.met"
#line 1141 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1141 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1141 "cplus.met"
#line 1142 "cplus.met"
#line 1142 "cplus.met"
                {
#line 1142 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1142 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1142 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1142 "cplus.met"
                    }
#line 1142 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1142 "cplus.met"
                }
#line 1142 "cplus.met"
#line 1142 "cplus.met"
                if (list2){
#line 1142 "cplus.met"
#line 1142 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1142 "cplus.met"
                } else {
#line 1142 "cplus.met"
#line 1142 "cplus.met"
                    list2 = _addlist2 ;
#line 1142 "cplus.met"
                }
#line 1142 "cplus.met"
            } 
#line 1142 "cplus.met"
#line 1143 "cplus.met"
            {
#line 1143 "cplus.met"
                PPTREE _ptTree0=0;
#line 1143 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 1143 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1143 "cplus.met"
                }
#line 1143 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1143 "cplus.met"
            }
#line 1143 "cplus.met"
#line 1144 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1144 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1144 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1144 "cplus.met"
            } else {
#line 1144 "cplus.met"
                tokenAhead = 0 ;
#line 1144 "cplus.met"
            }
#line 1144 "cplus.met"
#line 1145 "cplus.met"
            {
#line 1145 "cplus.met"
                PPTREE _ptTree0=0;
#line 1145 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1145 "cplus.met"
                _retValue =_ptTree0;
#line 1145 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1145 "cplus.met"
            }
#line 1145 "cplus.met"
#line 1145 "cplus.met"
            break;
#line 1145 "cplus.met"
#line 1147 "cplus.met"
        case ELIF_DIR : 
#line 1147 "cplus.met"
            tokenAhead = 0 ;
#line 1147 "cplus.met"
            CommTerm();
#line 1147 "cplus.met"
#line 1147 "cplus.met"
            {
#line 1147 "cplus.met"
                PPTREE _ptTree0=0;
#line 1147 "cplus.met"
                {
#line 1147 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1147 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 1147 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1147 "cplus.met"
                    }
#line 1147 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1147 "cplus.met"
                }
#line 1147 "cplus.met"
                _retValue =_ptTree0;
#line 1147 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1147 "cplus.met"
            }
#line 1147 "cplus.met"
            break;
#line 1147 "cplus.met"
#line 1148 "cplus.met"
        case ENDIF_DIR : 
#line 1148 "cplus.met"
            tokenAhead = 0 ;
#line 1148 "cplus.met"
            CommTerm();
#line 1148 "cplus.met"
#line 1148 "cplus.met"
            {
#line 1148 "cplus.met"
                _retValue = retTree ;
#line 1148 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1148 "cplus.met"
                
#line 1148 "cplus.met"
            }
#line 1148 "cplus.met"
            break;
#line 1148 "cplus.met"
        default :
#line 1148 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1148 "cplus.met"
            break;
#line 1148 "cplus.met"
    }
#line 1148 "cplus.met"
#line 1148 "cplus.met"
#line 1149 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1149 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1149 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1149 "cplus.met"
return((PPTREE) 0);
#line 1149 "cplus.met"

#line 1149 "cplus.met"
stat_ifdef_dir_exit :
#line 1149 "cplus.met"

#line 1149 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1149 "cplus.met"
    _funcLevel--;
#line 1149 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1149 "cplus.met"
    return((PPTREE) -1) ;
#line 1149 "cplus.met"

#line 1149 "cplus.met"
stat_ifdef_dir_ret :
#line 1149 "cplus.met"
    
#line 1149 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1149 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1149 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1149 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1149 "cplus.met"
    return _retValue ;
#line 1149 "cplus.met"
}
#line 1149 "cplus.met"

#line 1149 "cplus.met"
#line 3363 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3363 "cplus.met"
{
#line 3363 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3363 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3363 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3363 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3363 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3363 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3363 "cplus.met"
#line 3363 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3363 "cplus.met"
#line 3365 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3365 "cplus.met"
    switch( lexEl.Value) {
#line 3365 "cplus.met"
#line 3366 "cplus.met"
        case BREAK : 
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
                _ptRes0= MakeTree(BREAK, 1);
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
        case CONTINUE : 
#line 3371 "cplus.met"
            tokenAhead = 0 ;
#line 3371 "cplus.met"
            CommTerm();
#line 3371 "cplus.met"
#line 3372 "cplus.met"
#line 3373 "cplus.met"
            {
#line 3373 "cplus.met"
                PPTREE _ptRes0=0;
#line 3373 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3373 "cplus.met"
                statTree=_ptRes0;
#line 3373 "cplus.met"
            }
#line 3373 "cplus.met"
#line 3374 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3374 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3374 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3374 "cplus.met"
            } else {
#line 3374 "cplus.met"
                tokenAhead = 0 ;
#line 3374 "cplus.met"
            }
#line 3374 "cplus.met"
#line 3374 "cplus.met"
            break;
#line 3374 "cplus.met"
#line 3376 "cplus.met"
        case DO : 
#line 3376 "cplus.met"
            tokenAhead = 0 ;
#line 3376 "cplus.met"
            CommTerm();
#line 3376 "cplus.met"
#line 3377 "cplus.met"
#line 3378 "cplus.met"
            {
#line 3378 "cplus.met"
                switchContext = 0 ;
#line 3378 "cplus.met"
#line 3379 "cplus.met"
                {
#line 3379 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3379 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3379 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3379 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3379 "cplus.met"
                    }
#line 3379 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3379 "cplus.met"
                    statTree=_ptRes0;
#line 3379 "cplus.met"
                }
#line 3379 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3379 "cplus.met"
            }
#line 3379 "cplus.met"
#line 3380 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3380 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3380 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3380 "cplus.met"
            } else {
#line 3380 "cplus.met"
                tokenAhead = 0 ;
#line 3380 "cplus.met"
            }
#line 3380 "cplus.met"
#line 3381 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3381 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3381 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
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
                PPTREE _ptTree0=0;
#line 3382 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3382 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3382 "cplus.met"
                }
#line 3382 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3382 "cplus.met"
            }
#line 3382 "cplus.met"
#line 3383 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3383 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3383 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3383 "cplus.met"
            } else {
#line 3383 "cplus.met"
                tokenAhead = 0 ;
#line 3383 "cplus.met"
            }
#line 3383 "cplus.met"
#line 3384 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3384 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3384 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3384 "cplus.met"
            } else {
#line 3384 "cplus.met"
                tokenAhead = 0 ;
#line 3384 "cplus.met"
            }
#line 3384 "cplus.met"
#line 3384 "cplus.met"
            break;
#line 3384 "cplus.met"
#line 3386 "cplus.met"
        case AOUV : 
#line 3386 "cplus.met"
#line 3386 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 3386 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3386 "cplus.met"
            }
#line 3386 "cplus.met"
            break;
#line 3386 "cplus.met"
#line 3387 "cplus.met"
        case FOR : 
#line 3387 "cplus.met"
            tokenAhead = 0 ;
#line 3387 "cplus.met"
            CommTerm();
#line 3387 "cplus.met"
#line 3387 "cplus.met"
            {
#line 3387 "cplus.met"
                PPTREE _ptTree0=0;
#line 3387 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 76, cplus))== (PPTREE) -1 ) {
#line 3387 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3387 "cplus.met"
                }
#line 3387 "cplus.met"
                _retValue =_ptTree0;
#line 3387 "cplus.met"
                goto statement_ret;
#line 3387 "cplus.met"
            }
#line 3387 "cplus.met"
            break;
#line 3387 "cplus.met"
#line 3388 "cplus.met"
        case GOTO : 
#line 3388 "cplus.met"
            tokenAhead = 0 ;
#line 3388 "cplus.met"
            CommTerm();
#line 3388 "cplus.met"
#line 3389 "cplus.met"
#line 3390 "cplus.met"
            {
#line 3390 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3390 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3390 "cplus.met"
                {
#line 3390 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3390 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3390 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3390 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3390 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3390 "cplus.met"
                    } else {
#line 3390 "cplus.met"
                        tokenAhead = 0 ;
#line 3390 "cplus.met"
                    }
#line 3390 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3390 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3390 "cplus.met"
                }
#line 3390 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3390 "cplus.met"
                statTree=_ptRes0;
#line 3390 "cplus.met"
            }
#line 3390 "cplus.met"
#line 3391 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3391 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3391 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3391 "cplus.met"
            } else {
#line 3391 "cplus.met"
                tokenAhead = 0 ;
#line 3391 "cplus.met"
            }
#line 3391 "cplus.met"
#line 3391 "cplus.met"
            break;
#line 3391 "cplus.met"
#line 3393 "cplus.met"
        case IF : 
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
                _ptRes0= MakeTree(IF, 3);
#line 3396 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
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
#line 3400 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
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
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3402 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3402 "cplus.met"
                        }
#line 3402 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3402 "cplus.met"
                    }
#line 3402 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3402 "cplus.met"
                }
#line 3402 "cplus.met"
            }
#line 3402 "cplus.met"
#line 3402 "cplus.met"
            break;
#line 3402 "cplus.met"
#line 3404 "cplus.met"
        case PVIR : 
#line 3404 "cplus.met"
            tokenAhead = 0 ;
#line 3404 "cplus.met"
            CommTerm();
#line 3404 "cplus.met"
#line 3404 "cplus.met"
            {
#line 3404 "cplus.met"
                PPTREE _ptRes0=0;
#line 3404 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3404 "cplus.met"
                statTree=_ptRes0;
#line 3404 "cplus.met"
            }
#line 3404 "cplus.met"
            break;
#line 3404 "cplus.met"
#line 3405 "cplus.met"
        case RETURN : 
#line 3405 "cplus.met"
            tokenAhead = 0 ;
#line 3405 "cplus.met"
            CommTerm();
#line 3405 "cplus.met"
#line 3406 "cplus.met"
#line 3407 "cplus.met"
            {
#line 3407 "cplus.met"
                PPTREE _ptRes0=0;
#line 3407 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3407 "cplus.met"
                statTree=_ptRes0;
#line 3407 "cplus.met"
            }
#line 3407 "cplus.met"
#line 3408 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 63, cplus)){
#line 3408 "cplus.met"
#line 3409 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3409 "cplus.met"
#line 3409 "cplus.met"
            }
#line 3409 "cplus.met"
#line 3410 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3410 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3410 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
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
        case SWITCH : 
#line 3412 "cplus.met"
            tokenAhead = 0 ;
#line 3412 "cplus.met"
            CommTerm();
#line 3412 "cplus.met"
#line 3413 "cplus.met"
#line 3414 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3414 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3414 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3414 "cplus.met"
            } else {
#line 3414 "cplus.met"
                tokenAhead = 0 ;
#line 3414 "cplus.met"
            }
#line 3414 "cplus.met"
#line 3415 "cplus.met"
            {
#line 3415 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3415 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3415 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3415 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3415 "cplus.met"
                }
#line 3415 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3415 "cplus.met"
                statTree=_ptRes0;
#line 3415 "cplus.met"
            }
#line 3415 "cplus.met"
#line 3416 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3416 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3416 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3416 "cplus.met"
            } else {
#line 3416 "cplus.met"
                tokenAhead = 0 ;
#line 3416 "cplus.met"
            }
#line 3416 "cplus.met"
#line 3417 "cplus.met"
            {
#line 3417 "cplus.met"
                switchContext = 0 ;
#line 3417 "cplus.met"
#line 3418 "cplus.met"
                {
#line 3418 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3418 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 144, cplus))== (PPTREE) -1 ) {
#line 3418 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3418 "cplus.met"
                    }
#line 3418 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3418 "cplus.met"
                }
#line 3418 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3418 "cplus.met"
            }
#line 3418 "cplus.met"
#line 3418 "cplus.met"
            break;
#line 3418 "cplus.met"
#line 3420 "cplus.met"
        case WHILE : 
#line 3420 "cplus.met"
            tokenAhead = 0 ;
#line 3420 "cplus.met"
            CommTerm();
#line 3420 "cplus.met"
#line 3421 "cplus.met"
#line 3422 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3422 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3422 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3422 "cplus.met"
            } else {
#line 3422 "cplus.met"
                tokenAhead = 0 ;
#line 3422 "cplus.met"
            }
#line 3422 "cplus.met"
#line 3423 "cplus.met"
            {
#line 3423 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3423 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3423 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3423 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
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
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3424 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
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
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
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
            break;
#line 3426 "cplus.met"
#line 3428 "cplus.met"
        case FORALLSONS : 
#line 3428 "cplus.met"
            tokenAhead = 0 ;
#line 3428 "cplus.met"
            CommTerm();
#line 3428 "cplus.met"
#line 3429 "cplus.met"
#line 3430 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3430 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3430 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3430 "cplus.met"
            } else {
#line 3430 "cplus.met"
                tokenAhead = 0 ;
#line 3430 "cplus.met"
            }
#line 3430 "cplus.met"
#line 3431 "cplus.met"
            {
#line 3431 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3431 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3431 "cplus.met"
                {
#line 3431 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3431 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3431 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3431 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3431 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3431 "cplus.met"
                    } else {
#line 3431 "cplus.met"
                        tokenAhead = 0 ;
#line 3431 "cplus.met"
                    }
#line 3431 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3431 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3431 "cplus.met"
                }
#line 3431 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3431 "cplus.met"
                statTree=_ptRes0;
#line 3431 "cplus.met"
            }
#line 3431 "cplus.met"
#line 3432 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3432 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3432 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3432 "cplus.met"
            } else {
#line 3432 "cplus.met"
                tokenAhead = 0 ;
#line 3432 "cplus.met"
            }
#line 3432 "cplus.met"
#line 3433 "cplus.met"
            {
#line 3433 "cplus.met"
                switchContext = 0 ;
#line 3433 "cplus.met"
#line 3434 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 140, cplus))){
#line 3434 "cplus.met"
#line 3435 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3435 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3435 "cplus.met"
                    }
#line 3435 "cplus.met"
                }
#line 3435 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3435 "cplus.met"
            }
#line 3435 "cplus.met"
#line 3436 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3436 "cplus.met"
#line 3437 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3437 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3437 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3437 "cplus.met"
            } else {
#line 3437 "cplus.met"
                tokenAhead = 0 ;
#line 3437 "cplus.met"
            }
#line 3437 "cplus.met"
#line 3437 "cplus.met"
            break;
#line 3437 "cplus.met"
#line 3439 "cplus.met"
        case THROW : 
#line 3439 "cplus.met"
            tokenAhead = 0 ;
#line 3439 "cplus.met"
            CommTerm();
#line 3439 "cplus.met"
#line 3440 "cplus.met"
#line 3441 "cplus.met"
            {
#line 3441 "cplus.met"
                PPTREE _ptRes0=0;
#line 3441 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3441 "cplus.met"
                statTree=_ptRes0;
#line 3441 "cplus.met"
            }
#line 3441 "cplus.met"
#line 3442 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 63, cplus)){
#line 3442 "cplus.met"
#line 3443 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3443 "cplus.met"
#line 3443 "cplus.met"
            }
#line 3443 "cplus.met"
#line 3444 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3444 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3444 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3444 "cplus.met"
            } else {
#line 3444 "cplus.met"
                tokenAhead = 0 ;
#line 3444 "cplus.met"
            }
#line 3444 "cplus.met"
#line 3444 "cplus.met"
            break;
#line 3444 "cplus.met"
#line 3446 "cplus.met"
        case TRY : 
#line 3446 "cplus.met"
#line 3446 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3446 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3446 "cplus.met"
            }
#line 3446 "cplus.met"
            break;
#line 3446 "cplus.met"
#line 3447 "cplus.met"
        case META : 
#line 3447 "cplus.met"
#line 3448 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 88, cplus)){
#line 3448 "cplus.met"
#line 3449 "cplus.met"
#line 3450 "cplus.met"
                {
#line 3450 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3450 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3450 "cplus.met"
                    {
#line 3450 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3450 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3450 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3450 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3450 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3450 "cplus.met"
                        } else {
#line 3450 "cplus.met"
                            tokenAhead = 0 ;
#line 3450 "cplus.met"
                        }
#line 3450 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3450 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3450 "cplus.met"
                    }
#line 3450 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3450 "cplus.met"
                    statTree=_ptRes0;
#line 3450 "cplus.met"
                }
#line 3450 "cplus.met"
#line 3451 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3451 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3451 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3451 "cplus.met"
                } else {
#line 3451 "cplus.met"
                    tokenAhead = 0 ;
#line 3451 "cplus.met"
                }
#line 3451 "cplus.met"
#line 3452 "cplus.met"
                {
#line 3452 "cplus.met"
                    switchContext = 0 ;
#line 3452 "cplus.met"
#line 3453 "cplus.met"
                    {
#line 3453 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3453 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3453 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3453 "cplus.met"
                        }
#line 3453 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3453 "cplus.met"
                    }
#line 3453 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3453 "cplus.met"
                }
#line 3453 "cplus.met"
#line 3453 "cplus.met"
#line 3453 "cplus.met"
            } else {
#line 3453 "cplus.met"
#line 3456 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 79, cplus)){
#line 3456 "cplus.met"
#line 3458 "cplus.met"
                    
#line 3458 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3458 "cplus.met"
                    goto statement_exit;
#line 3458 "cplus.met"
#line 3459 "cplus.met"
                } else {
#line 3459 "cplus.met"
#line 3461 "cplus.met"
#line 3462 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3462 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3462 "cplus.met"
                    }
#line 3462 "cplus.met"
#line 3463 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3463 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3463 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3463 "cplus.met"
                    } else {
#line 3463 "cplus.met"
                        tokenAhead = 0 ;
#line 3463 "cplus.met"
                    }
#line 3463 "cplus.met"
#line 3463 "cplus.met"
                }
#line 3463 "cplus.met"
            }
#line 3463 "cplus.met"
            break;
#line 3463 "cplus.met"
#line 3467 "cplus.met"
        case CASE : 
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
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 143, cplus))== (PPTREE) -1 ) {
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
        case DEFAULT : 
#line 3472 "cplus.met"
#line 3473 "cplus.met"
            if (! (switchContext)){
#line 3473 "cplus.met"
#line 3474 "cplus.met"
                
#line 3474 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3474 "cplus.met"
                goto statement_exit;
#line 3474 "cplus.met"
#line 3474 "cplus.met"
            } else {
#line 3474 "cplus.met"
#line 3476 "cplus.met"
                {
#line 3476 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3476 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 143, cplus))== (PPTREE) -1 ) {
#line 3476 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3476 "cplus.met"
                    }
#line 3476 "cplus.met"
                    _retValue =_ptTree0;
#line 3476 "cplus.met"
                    goto statement_ret;
#line 3476 "cplus.met"
                }
#line 3476 "cplus.met"
            }
#line 3476 "cplus.met"
            break;
#line 3476 "cplus.met"
#line 3477 "cplus.met"
        case IDENT : 
#line 3477 "cplus.met"
#line 3478 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3478 "cplus.met"
            switch( lexEl.Value) {
#line 3478 "cplus.met"
#line 3479 "cplus.met"
                case META : 
#line 3479 "cplus.met"
                case FUNC_SPEC : 
#line 3479 "cplus.met"
#line 3480 "cplus.met"
#line 3481 "cplus.met"
                    {
#line 3481 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3481 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3481 "cplus.met"
                        {
#line 3481 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3481 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3481 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3481 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3481 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
#line 3481 "cplus.met"
                            } else {
#line 3481 "cplus.met"
                                tokenAhead = 0 ;
#line 3481 "cplus.met"
                            }
#line 3481 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3481 "cplus.met"
                            _ptTree0=_ptRes1;
#line 3481 "cplus.met"
                        }
#line 3481 "cplus.met"
                        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3481 "cplus.met"
                        statTree=_ptRes0;
#line 3481 "cplus.met"
                    }
#line 3481 "cplus.met"
#line 3482 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3482 "cplus.met"
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3482 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
#line 3482 "cplus.met"
                    } else {
#line 3482 "cplus.met"
                        tokenAhead = 0 ;
#line 3482 "cplus.met"
                    }
#line 3482 "cplus.met"
#line 3483 "cplus.met"
                    {
#line 3483 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3483 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3483 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3483 "cplus.met"
                        }
#line 3483 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3483 "cplus.met"
                    }
#line 3483 "cplus.met"
#line 3484 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3484 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3484 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3484 "cplus.met"
                    } else {
#line 3484 "cplus.met"
                        tokenAhead = 0 ;
#line 3484 "cplus.met"
                    }
#line 3484 "cplus.met"
#line 3484 "cplus.met"
                    break;
#line 3484 "cplus.met"
#line 3489 "cplus.met"
                default : 
#line 3489 "cplus.met"
#line 3487 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 88, cplus)){
#line 3487 "cplus.met"
#line 3488 "cplus.met"
#line 3489 "cplus.met"
                        {
#line 3489 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3489 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3489 "cplus.met"
                            {
#line 3489 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3489 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3489 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3489 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3489 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3489 "cplus.met"
                                } else {
#line 3489 "cplus.met"
                                    tokenAhead = 0 ;
#line 3489 "cplus.met"
                                }
#line 3489 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3489 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3489 "cplus.met"
                            }
#line 3489 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3489 "cplus.met"
                            statTree=_ptRes0;
#line 3489 "cplus.met"
                        }
#line 3489 "cplus.met"
#line 3490 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3490 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3490 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3490 "cplus.met"
                        } else {
#line 3490 "cplus.met"
                            tokenAhead = 0 ;
#line 3490 "cplus.met"
                        }
#line 3490 "cplus.met"
#line 3491 "cplus.met"
                        {
#line 3491 "cplus.met"
                            switchContext = 0 ;
#line 3491 "cplus.met"
#line 3492 "cplus.met"
                            {
#line 3492 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3492 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 140, cplus))== (PPTREE) -1 ) {
#line 3492 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3492 "cplus.met"
                                }
#line 3492 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3492 "cplus.met"
                            }
#line 3492 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3492 "cplus.met"
                        }
#line 3492 "cplus.met"
#line 3492 "cplus.met"
#line 3492 "cplus.met"
                    } else {
#line 3492 "cplus.met"
#line 3495 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 79, cplus)){
#line 3495 "cplus.met"
#line 3498 "cplus.met"
                            
#line 3498 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3498 "cplus.met"
                            goto statement_exit;
#line 3498 "cplus.met"
#line 3499 "cplus.met"
                        } else {
#line 3499 "cplus.met"
#line 3501 "cplus.met"
#line 3502 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 3502 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3502 "cplus.met"
                            }
#line 3502 "cplus.met"
#line 3502 "cplus.met"
                        }
#line 3502 "cplus.met"
                    }
#line 3502 "cplus.met"
                    break;
#line 3502 "cplus.met"
            }
#line 3502 "cplus.met"
            break;
#line 3502 "cplus.met"
#line 3508 "cplus.met"
        default : 
#line 3508 "cplus.met"
#line 3506 "cplus.met"
#line 3507 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 79, cplus)){
#line 3507 "cplus.met"
#line 3508 "cplus.met"
                
#line 3508 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3508 "cplus.met"
                goto statement_exit;
#line 3508 "cplus.met"
#line 3508 "cplus.met"
            } else {
#line 3508 "cplus.met"
#line 3510 "cplus.met"
#line 3511 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3511 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3511 "cplus.met"
                }
#line 3511 "cplus.met"
#line 3512 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3512 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3512 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3512 "cplus.met"
                } else {
#line 3512 "cplus.met"
                    tokenAhead = 0 ;
#line 3512 "cplus.met"
                }
#line 3512 "cplus.met"
#line 3512 "cplus.met"
            }
#line 3512 "cplus.met"
#line 3512 "cplus.met"
            break;
#line 3512 "cplus.met"
    }
#line 3512 "cplus.met"
#line 3516 "cplus.met"
    {
#line 3516 "cplus.met"
        _retValue = statTree ;
#line 3516 "cplus.met"
        goto statement_ret;
#line 3516 "cplus.met"
        
#line 3516 "cplus.met"
    }
#line 3516 "cplus.met"
#line 3516 "cplus.met"
#line 3516 "cplus.met"

#line 3517 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3517 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3517 "cplus.met"
switchContext =  _oldswitchContext;
#line 3517 "cplus.met"
return((PPTREE) 0);
#line 3517 "cplus.met"

#line 3517 "cplus.met"
statement_exit :
#line 3517 "cplus.met"

#line 3517 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3517 "cplus.met"
    _funcLevel--;
#line 3517 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3517 "cplus.met"
    return((PPTREE) -1) ;
#line 3517 "cplus.met"

#line 3517 "cplus.met"
statement_ret :
#line 3517 "cplus.met"
    
#line 3517 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3517 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3517 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3517 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3517 "cplus.met"
    return _retValue ;
#line 3517 "cplus.met"
}
#line 3517 "cplus.met"

#line 3517 "cplus.met"
#line 3356 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3356 "cplus.met"
{
#line 3356 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3356 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3356 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3356 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3356 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3356 "cplus.met"
#line 3356 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3356 "cplus.met"
#line 3358 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3358 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3358 "cplus.met"
    }
#line 3358 "cplus.met"
#line 3359 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3359 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3359 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3359 "cplus.met"
    } else {
#line 3359 "cplus.met"
        tokenAhead = 0 ;
#line 3359 "cplus.met"
    }
#line 3359 "cplus.met"
#line 3360 "cplus.met"
    {
#line 3360 "cplus.met"
        _retValue = statTree ;
#line 3360 "cplus.met"
        goto statement_expression_ret;
#line 3360 "cplus.met"
        
#line 3360 "cplus.met"
    }
#line 3360 "cplus.met"
#line 3360 "cplus.met"
#line 3360 "cplus.met"

#line 3361 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3361 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3361 "cplus.met"
return((PPTREE) 0);
#line 3361 "cplus.met"

#line 3361 "cplus.met"
statement_expression_exit :
#line 3361 "cplus.met"

#line 3361 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3361 "cplus.met"
    _funcLevel--;
#line 3361 "cplus.met"
    return((PPTREE) -1) ;
#line 3361 "cplus.met"

#line 3361 "cplus.met"
statement_expression_ret :
#line 3361 "cplus.met"
    
#line 3361 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3361 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3361 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3361 "cplus.met"
    return _retValue ;
#line 3361 "cplus.met"
}
#line 3361 "cplus.met"

#line 3361 "cplus.met"
#line 2950 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 2950 "cplus.met"
{
#line 2950 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2950 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2950 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2950 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 2950 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2950 "cplus.met"
#line 2950 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2950 "cplus.met"
#line 2950 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2950 "cplus.met"
#line 2952 "cplus.met"
    {
#line 2952 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2952 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 2952 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2952 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 2952 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 2952 "cplus.met"
        } else {
#line 2952 "cplus.met"
            tokenAhead = 0 ;
#line 2952 "cplus.met"
        }
#line 2952 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2952 "cplus.met"
        retTree=_ptRes0;
#line 2952 "cplus.met"
    }
#line 2952 "cplus.met"
#line 2953 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 2953 "cplus.met"
#line 2954 "cplus.met"
#line 2955 "cplus.met"
        list =AddList(list ,retTree );
#line 2955 "cplus.met"
#line 2955 "cplus.met"
        _addlist1 = list ;
#line 2955 "cplus.met"
#line 2956 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 2956 "cplus.met"
#line 2957 "cplus.met"
#line 2957 "cplus.met"
            {
#line 2957 "cplus.met"
                PPTREE _ptTree0=0;
#line 2957 "cplus.met"
                {
#line 2957 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2957 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 2957 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2957 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 2957 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 2957 "cplus.met"
                    } else {
#line 2957 "cplus.met"
                        tokenAhead = 0 ;
#line 2957 "cplus.met"
                    }
#line 2957 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2957 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2957 "cplus.met"
                }
#line 2957 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2957 "cplus.met"
            }
#line 2957 "cplus.met"
#line 2957 "cplus.met"
            if (list){
#line 2957 "cplus.met"
#line 2957 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2957 "cplus.met"
            } else {
#line 2957 "cplus.met"
#line 2957 "cplus.met"
                list = _addlist1 ;
#line 2957 "cplus.met"
            }
#line 2957 "cplus.met"
        } 
#line 2957 "cplus.met"
#line 2958 "cplus.met"
        {
#line 2958 "cplus.met"
            PPTREE _ptRes0=0;
#line 2958 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 2958 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 2958 "cplus.met"
            retTree=_ptRes0;
#line 2958 "cplus.met"
        }
#line 2958 "cplus.met"
#line 2958 "cplus.met"
#line 2958 "cplus.met"
    }
#line 2958 "cplus.met"
#line 2960 "cplus.met"
    {
#line 2960 "cplus.met"
        _retValue = retTree ;
#line 2960 "cplus.met"
        goto string_list_ret;
#line 2960 "cplus.met"
        
#line 2960 "cplus.met"
    }
#line 2960 "cplus.met"
#line 2960 "cplus.met"
#line 2960 "cplus.met"

#line 2961 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2961 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2961 "cplus.met"
return((PPTREE) 0);
#line 2961 "cplus.met"

#line 2961 "cplus.met"
string_list_exit :
#line 2961 "cplus.met"

#line 2961 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 2961 "cplus.met"
    _funcLevel--;
#line 2961 "cplus.met"
    return((PPTREE) -1) ;
#line 2961 "cplus.met"

#line 2961 "cplus.met"
string_list_ret :
#line 2961 "cplus.met"
    
#line 2961 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 2961 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2961 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2961 "cplus.met"
    return _retValue ;
#line 2961 "cplus.met"
}
#line 2961 "cplus.met"

#line 2961 "cplus.met"
#line 3524 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3524 "cplus.met"
{
#line 3524 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3524 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3524 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3524 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3524 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3524 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3524 "cplus.met"
#line 3524 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3524 "cplus.met"
#line 3524 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3524 "cplus.met"
#line 3526 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3526 "cplus.met"
    switch( lexEl.Value) {
#line 3526 "cplus.met"
#line 3527 "cplus.met"
        case CASE : 
#line 3527 "cplus.met"
            tokenAhead = 0 ;
#line 3527 "cplus.met"
            CommTerm();
#line 3527 "cplus.met"
#line 3528 "cplus.met"
#line 3529 "cplus.met"
            {
#line 3529 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3529 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3529 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 3529 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3529 "cplus.met"
                }
#line 3529 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3529 "cplus.met"
                retTree=_ptRes0;
#line 3529 "cplus.met"
            }
#line 3529 "cplus.met"
#line 3530 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3530 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3530 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3530 "cplus.met"
            } else {
#line 3530 "cplus.met"
                tokenAhead = 0 ;
#line 3530 "cplus.met"
            }
#line 3530 "cplus.met"
#line 3531 "cplus.met"
            {
#line 3531 "cplus.met"
                switchContext = 0 ;
#line 3531 "cplus.met"
#line 3532 "cplus.met"
#line 3532 "cplus.met"
                _addlist1 = list ;
#line 3532 "cplus.met"
#line 3532 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 140, cplus)) || 
#line 3532 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 136, cplus))) { 
#line 3532 "cplus.met"
#line 3533 "cplus.met"
#line 3533 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3533 "cplus.met"
#line 3533 "cplus.met"
                    if (list){
#line 3533 "cplus.met"
#line 3533 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3533 "cplus.met"
                    } else {
#line 3533 "cplus.met"
#line 3533 "cplus.met"
                        list = _addlist1 ;
#line 3533 "cplus.met"
                    }
#line 3533 "cplus.met"
                } 
#line 3533 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3533 "cplus.met"
            }
#line 3533 "cplus.met"
#line 3534 "cplus.met"
            {
#line 3534 "cplus.met"
                PPTREE _ptTree0=0;
#line 3534 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3534 "cplus.met"
                _retValue =_ptTree0;
#line 3534 "cplus.met"
                goto switch_elem_ret;
#line 3534 "cplus.met"
            }
#line 3534 "cplus.met"
#line 3534 "cplus.met"
            break;
#line 3534 "cplus.met"
#line 3536 "cplus.met"
        case DEFAULT : 
#line 3536 "cplus.met"
            tokenAhead = 0 ;
#line 3536 "cplus.met"
            CommTerm();
#line 3536 "cplus.met"
#line 3537 "cplus.met"
#line 3538 "cplus.met"
            {
#line 3538 "cplus.met"
                PPTREE _ptRes0=0;
#line 3538 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3538 "cplus.met"
                retTree=_ptRes0;
#line 3538 "cplus.met"
            }
#line 3538 "cplus.met"
#line 3539 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3539 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3539 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3539 "cplus.met"
            } else {
#line 3539 "cplus.met"
                tokenAhead = 0 ;
#line 3539 "cplus.met"
            }
#line 3539 "cplus.met"
#line 3540 "cplus.met"
            {
#line 3540 "cplus.met"
                switchContext = 0 ;
#line 3540 "cplus.met"
#line 3541 "cplus.met"
#line 3541 "cplus.met"
                _addlist2 = list ;
#line 3541 "cplus.met"
#line 3541 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 140, cplus)) || 
#line 3541 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 136, cplus))) { 
#line 3541 "cplus.met"
#line 3542 "cplus.met"
#line 3542 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3542 "cplus.met"
#line 3542 "cplus.met"
                    if (list){
#line 3542 "cplus.met"
#line 3542 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3542 "cplus.met"
                    } else {
#line 3542 "cplus.met"
#line 3542 "cplus.met"
                        list = _addlist2 ;
#line 3542 "cplus.met"
                    }
#line 3542 "cplus.met"
                } 
#line 3542 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3542 "cplus.met"
            }
#line 3542 "cplus.met"
#line 3543 "cplus.met"
            {
#line 3543 "cplus.met"
                PPTREE _ptTree0=0;
#line 3543 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3543 "cplus.met"
                _retValue =_ptTree0;
#line 3543 "cplus.met"
                goto switch_elem_ret;
#line 3543 "cplus.met"
            }
#line 3543 "cplus.met"
#line 3543 "cplus.met"
            break;
#line 3543 "cplus.met"
#line 3549 "cplus.met"
        default : 
#line 3549 "cplus.met"
#line 3546 "cplus.met"
#line 3548 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 137, cplus)){
#line 3548 "cplus.met"
#line 3550 "cplus.met"
                {
#line 3550 "cplus.met"
                    _retValue = retTree ;
#line 3550 "cplus.met"
                    goto switch_elem_ret;
#line 3550 "cplus.met"
                    
#line 3550 "cplus.met"
                }
#line 3550 "cplus.met"
            } else {
#line 3550 "cplus.met"
#line 3552 "cplus.met"
                
#line 3552 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3552 "cplus.met"
                goto switch_elem_exit;
#line 3552 "cplus.met"
            }
#line 3552 "cplus.met"
#line 3552 "cplus.met"
            break;
#line 3552 "cplus.met"
    }
#line 3552 "cplus.met"
#line 3552 "cplus.met"
#line 3554 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3554 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3554 "cplus.met"
switchContext =  _oldswitchContext;
#line 3554 "cplus.met"
return((PPTREE) 0);
#line 3554 "cplus.met"

#line 3554 "cplus.met"
switch_elem_exit :
#line 3554 "cplus.met"

#line 3554 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3554 "cplus.met"
    _funcLevel--;
#line 3554 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3554 "cplus.met"
    return((PPTREE) -1) ;
#line 3554 "cplus.met"

#line 3554 "cplus.met"
switch_elem_ret :
#line 3554 "cplus.met"
    
#line 3554 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3554 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3554 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3554 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3554 "cplus.met"
    return _retValue ;
#line 3554 "cplus.met"
}
#line 3554 "cplus.met"

#line 3554 "cplus.met"
#line 3557 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3557 "cplus.met"
{
#line 3557 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3557 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3557 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3557 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3557 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3557 "cplus.met"
#line 3557 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3557 "cplus.met"
#line 3557 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3557 "cplus.met"
#line 3559 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3559 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3559 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3559 "cplus.met"
    } else {
#line 3559 "cplus.met"
        tokenAhead = 0 ;
#line 3559 "cplus.met"
    }
#line 3559 "cplus.met"
#line 3559 "cplus.met"
    _addlist1 = list ;
#line 3559 "cplus.met"
#line 3560 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 143, cplus)) { 
#line 3560 "cplus.met"
#line 3561 "cplus.met"
#line 3561 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3561 "cplus.met"
#line 3561 "cplus.met"
        if (list){
#line 3561 "cplus.met"
#line 3561 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3561 "cplus.met"
        } else {
#line 3561 "cplus.met"
#line 3561 "cplus.met"
            list = _addlist1 ;
#line 3561 "cplus.met"
        }
#line 3561 "cplus.met"
    } 
#line 3561 "cplus.met"
#line 3562 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3562 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3562 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3562 "cplus.met"
    } else {
#line 3562 "cplus.met"
        tokenAhead = 0 ;
#line 3562 "cplus.met"
    }
#line 3562 "cplus.met"
#line 3563 "cplus.met"
    {
#line 3563 "cplus.met"
        _retValue = list ;
#line 3563 "cplus.met"
        goto switch_list_ret;
#line 3563 "cplus.met"
        
#line 3563 "cplus.met"
    }
#line 3563 "cplus.met"
#line 3563 "cplus.met"
#line 3563 "cplus.met"

#line 3564 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3564 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3564 "cplus.met"
return((PPTREE) 0);
#line 3564 "cplus.met"

#line 3564 "cplus.met"
switch_list_exit :
#line 3564 "cplus.met"

#line 3564 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3564 "cplus.met"
    _funcLevel--;
#line 3564 "cplus.met"
    return((PPTREE) -1) ;
#line 3564 "cplus.met"

#line 3564 "cplus.met"
switch_list_ret :
#line 3564 "cplus.met"
    
#line 3564 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3564 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3564 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3564 "cplus.met"
    return _retValue ;
#line 3564 "cplus.met"
}
#line 3564 "cplus.met"

#line 3564 "cplus.met"
#line 1776 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1776 "cplus.met"
{
#line 1776 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1776 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1776 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1776 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1776 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1776 "cplus.met"
#line 1776 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1776 "cplus.met"
#line 1776 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1776 "cplus.met"
#line 1778 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1778 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1778 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1778 "cplus.met"
    } else {
#line 1778 "cplus.met"
        tokenAhead = 0 ;
#line 1778 "cplus.met"
    }
#line 1778 "cplus.met"
#line 1778 "cplus.met"
    _addlist1 = listParam ;
#line 1778 "cplus.met"
#line 1779 "cplus.met"
    do {
#line 1779 "cplus.met"
#line 1781 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1781 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 148, cplus))){
#line 1781 "cplus.met"
#line 1783 "cplus.met"
#line 1783 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 1783 "cplus.met"
#line 1783 "cplus.met"
            if (listParam){
#line 1783 "cplus.met"
#line 1783 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 1783 "cplus.met"
            } else {
#line 1783 "cplus.met"
#line 1783 "cplus.met"
                listParam = _addlist1 ;
#line 1783 "cplus.met"
            }
#line 1783 "cplus.met"
        }
#line 1783 "cplus.met"
#line 1783 "cplus.met"
#line 1784 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1784 "cplus.met"
#line 1785 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1785 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1785 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 1785 "cplus.met"
    } else {
#line 1785 "cplus.met"
        tokenAhead = 0 ;
#line 1785 "cplus.met"
    }
#line 1785 "cplus.met"
#line 1786 "cplus.met"
    {
#line 1786 "cplus.met"
        PPTREE _ptTree0=0;
#line 1786 "cplus.met"
        {
#line 1786 "cplus.met"
            PPTREE _ptRes1=0;
#line 1786 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1786 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1786 "cplus.met"
            _ptTree0=_ptRes1;
#line 1786 "cplus.met"
        }
#line 1786 "cplus.met"
        _retValue =_ptTree0;
#line 1786 "cplus.met"
        goto template_type_ret;
#line 1786 "cplus.met"
    }
#line 1786 "cplus.met"
#line 1786 "cplus.met"
#line 1786 "cplus.met"

#line 1787 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1787 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1787 "cplus.met"
return((PPTREE) 0);
#line 1787 "cplus.met"

#line 1787 "cplus.met"
template_type_exit :
#line 1787 "cplus.met"

#line 1787 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1787 "cplus.met"
    _funcLevel--;
#line 1787 "cplus.met"
    return((PPTREE) -1) ;
#line 1787 "cplus.met"

#line 1787 "cplus.met"
template_type_ret :
#line 1787 "cplus.met"
    
#line 1787 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1787 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1787 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1787 "cplus.met"
    return _retValue ;
#line 1787 "cplus.met"
}
#line 1787 "cplus.met"

#line 1787 "cplus.met"
#line 3199 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3199 "cplus.met"
{
#line 3199 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3199 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3199 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3199 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3199 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3199 "cplus.met"
#line 3199 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3199 "cplus.met"
#line 3201 "cplus.met"
    {
#line 3201 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3201 "cplus.met"
        _ptRes0= MakeTree(FUNC, 11);
#line 3201 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 127, cplus))== (PPTREE) -1 ) {
#line 3201 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3201 "cplus.met"
        }
#line 3201 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3201 "cplus.met"
        funcTree=_ptRes0;
#line 3201 "cplus.met"
    }
#line 3201 "cplus.met"
#line 3202 "cplus.met"
    {
#line 3202 "cplus.met"
        PPTREE _ptTree0=0;
#line 3202 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 3202 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3202 "cplus.met"
        }
#line 3202 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3202 "cplus.met"
    }
#line 3202 "cplus.met"
#line 3203 "cplus.met"
    {
#line 3203 "cplus.met"
        PPTREE _ptTree0=0;
#line 3203 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 3203 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3203 "cplus.met"
        }
#line 3203 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3203 "cplus.met"
    }
#line 3203 "cplus.met"
#line 3204 "cplus.met"
    {
#line 3204 "cplus.met"
        _retValue = funcTree ;
#line 3204 "cplus.met"
        goto type_and_declarator_ret;
#line 3204 "cplus.met"
        
#line 3204 "cplus.met"
    }
#line 3204 "cplus.met"
#line 3204 "cplus.met"
#line 3204 "cplus.met"

#line 3205 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3205 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3205 "cplus.met"
return((PPTREE) 0);
#line 3205 "cplus.met"

#line 3205 "cplus.met"
type_and_declarator_exit :
#line 3205 "cplus.met"

#line 3205 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3205 "cplus.met"
    _funcLevel--;
#line 3205 "cplus.met"
    return((PPTREE) -1) ;
#line 3205 "cplus.met"

#line 3205 "cplus.met"
type_and_declarator_ret :
#line 3205 "cplus.met"
    
#line 3205 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3205 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3205 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3205 "cplus.met"
    return _retValue ;
#line 3205 "cplus.met"
}
#line 3205 "cplus.met"

#line 3205 "cplus.met"
#line 3097 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3097 "cplus.met"
{
#line 3097 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3097 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3097 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3097 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3097 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3097 "cplus.met"
#line 3098 "cplus.met"
    {
#line 3098 "cplus.met"
        PPTREE _ptTree0=0;
#line 3098 "cplus.met"
        {
#line 3098 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3098 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3098 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3098 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3098 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3098 "cplus.met"
            } else {
#line 3098 "cplus.met"
                tokenAhead = 0 ;
#line 3098 "cplus.met"
            }
#line 3098 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3098 "cplus.met"
            _ptTree0=_ptRes1;
#line 3098 "cplus.met"
        }
#line 3098 "cplus.met"
        _retValue =_ptTree0;
#line 3098 "cplus.met"
        goto type_descr_ret;
#line 3098 "cplus.met"
    }
#line 3098 "cplus.met"
#line 3098 "cplus.met"
#line 3098 "cplus.met"

#line 3099 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3099 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3099 "cplus.met"
return((PPTREE) 0);
#line 3099 "cplus.met"

#line 3099 "cplus.met"
type_descr_exit :
#line 3099 "cplus.met"

#line 3099 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3099 "cplus.met"
    _funcLevel--;
#line 3099 "cplus.met"
    return((PPTREE) -1) ;
#line 3099 "cplus.met"

#line 3099 "cplus.met"
type_descr_ret :
#line 3099 "cplus.met"
    
#line 3099 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3099 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3099 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3099 "cplus.met"
    return _retValue ;
#line 3099 "cplus.met"
}
#line 3099 "cplus.met"

#line 3099 "cplus.met"
#line 2545 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2545 "cplus.met"
{
#line 2545 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2545 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2545 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2545 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2545 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2545 "cplus.met"
#line 2545 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2545 "cplus.met"
#line 2547 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 149, cplus))== (PPTREE) -1 ) {
#line 2547 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2547 "cplus.met"
    }
#line 2547 "cplus.met"
#line 2548 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2548 "cplus.met"
#line 2549 "cplus.met"
        {
#line 2549 "cplus.met"
            PPTREE _ptRes0=0;
#line 2549 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2549 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2549 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2549 "cplus.met"
            valTree=_ptRes0;
#line 2549 "cplus.met"
        }
#line 2549 "cplus.met"
    } else {
#line 2549 "cplus.met"
#line 2551 "cplus.met"
        valTree = retTree ;
#line 2551 "cplus.met"
    }
#line 2551 "cplus.met"
#line 2552 "cplus.met"
    {
#line 2552 "cplus.met"
        _retValue = valTree ;
#line 2552 "cplus.met"
        goto type_name_ret;
#line 2552 "cplus.met"
        
#line 2552 "cplus.met"
    }
#line 2552 "cplus.met"
#line 2552 "cplus.met"
#line 2552 "cplus.met"

#line 2553 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2553 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2553 "cplus.met"
return((PPTREE) 0);
#line 2553 "cplus.met"

#line 2553 "cplus.met"
type_name_exit :
#line 2553 "cplus.met"

#line 2553 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2553 "cplus.met"
    _funcLevel--;
#line 2553 "cplus.met"
    return((PPTREE) -1) ;
#line 2553 "cplus.met"

#line 2553 "cplus.met"
type_name_ret :
#line 2553 "cplus.met"
    
#line 2553 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2553 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2553 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2553 "cplus.met"
    return _retValue ;
#line 2553 "cplus.met"
}
#line 2553 "cplus.met"

#line 2553 "cplus.met"
#line 1752 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1752 "cplus.met"
{
#line 1752 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1752 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1752 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1752 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1752 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1752 "cplus.met"
#line 1752 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1752 "cplus.met"
#line 1752 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1752 "cplus.met"
#line 1754 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 150, cplus))== (PPTREE) -1 ) {
#line 1754 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1754 "cplus.met"
    }
#line 1754 "cplus.met"
#line 1755 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1755 "cplus.met"
#line 1756 "cplus.met"
#line 1756 "cplus.met"
        _addlist1 = listParam ;
#line 1756 "cplus.met"
#line 1757 "cplus.met"
        do {
#line 1757 "cplus.met"
#line 1758 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1758 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 148, cplus))){
#line 1758 "cplus.met"
#line 1759 "cplus.met"
#line 1759 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1759 "cplus.met"
#line 1759 "cplus.met"
                if (listParam){
#line 1759 "cplus.met"
#line 1759 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1759 "cplus.met"
                } else {
#line 1759 "cplus.met"
#line 1759 "cplus.met"
                    listParam = _addlist1 ;
#line 1759 "cplus.met"
                }
#line 1759 "cplus.met"
            }
#line 1759 "cplus.met"
#line 1759 "cplus.met"
#line 1760 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1760 "cplus.met"
#line 1761 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1761 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1761 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1761 "cplus.met"
        } else {
#line 1761 "cplus.met"
            tokenAhead = 0 ;
#line 1761 "cplus.met"
        }
#line 1761 "cplus.met"
#line 1762 "cplus.met"
        {
#line 1762 "cplus.met"
            PPTREE _ptRes0=0;
#line 1762 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1762 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1762 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1762 "cplus.met"
            ret=_ptRes0;
#line 1762 "cplus.met"
        }
#line 1762 "cplus.met"
#line 1762 "cplus.met"
#line 1762 "cplus.met"
    }
#line 1762 "cplus.met"
#line 1764 "cplus.met"
    {
#line 1764 "cplus.met"
        _retValue = ret ;
#line 1764 "cplus.met"
        goto type_specifier_ret;
#line 1764 "cplus.met"
        
#line 1764 "cplus.met"
    }
#line 1764 "cplus.met"
#line 1764 "cplus.met"
#line 1764 "cplus.met"

#line 1765 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1765 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1765 "cplus.met"
return((PPTREE) 0);
#line 1765 "cplus.met"

#line 1765 "cplus.met"
type_specifier_exit :
#line 1765 "cplus.met"

#line 1765 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1765 "cplus.met"
    _funcLevel--;
#line 1765 "cplus.met"
    return((PPTREE) -1) ;
#line 1765 "cplus.met"

#line 1765 "cplus.met"
type_specifier_ret :
#line 1765 "cplus.met"
    
#line 1765 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 1765 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1765 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1765 "cplus.met"
    return _retValue ;
#line 1765 "cplus.met"
}
#line 1765 "cplus.met"

#line 1765 "cplus.met"
