/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1098 "cplus.met"
PPTREE cplus::stat_ifdef_dir ( int error_free)
#line 1098 "cplus.met"
{
#line 1098 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1098 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1098 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1098 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1098 "cplus.met"
    int _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1098 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1098 "cplus.met"
#line 1098 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1098 "cplus.met"
#line 1098 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1098 "cplus.met"
#line 1100 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1100 "cplus.met"
#line 1101 "cplus.met"
#line 1102 "cplus.met"
        {
#line 1102 "cplus.met"
            keepCarriage = 1 ;
#line 1102 "cplus.met"
#line 1103 "cplus.met"
#line 1104 "cplus.met"
            {
#line 1104 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1104 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1104 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1104 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1104 "cplus.met"
                }
#line 1104 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1104 "cplus.met"
                retTree=_ptRes0;
#line 1104 "cplus.met"
            }
#line 1104 "cplus.met"
#line 1105 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1105 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1105 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1105 "cplus.met"
            } else {
#line 1105 "cplus.met"
                tokenAhead = 0 ;
#line 1105 "cplus.met"
            }
#line 1105 "cplus.met"
#line 1105 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1105 "cplus.met"
        }
#line 1105 "cplus.met"
#line 1105 "cplus.met"
#line 1106 "cplus.met"
    } else {
#line 1106 "cplus.met"
#line 1109 "cplus.met"
#line 1110 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1110 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1110 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(stat_ifdef_dir_exit,"IFNDEF_DIR")
#line 1110 "cplus.met"
        } else {
#line 1110 "cplus.met"
            tokenAhead = 0 ;
#line 1110 "cplus.met"
        }
#line 1110 "cplus.met"
#line 1111 "cplus.met"
        {
#line 1111 "cplus.met"
            keepCarriage = 1 ;
#line 1111 "cplus.met"
#line 1112 "cplus.met"
#line 1113 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1113 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1113 "cplus.met"
            }
#line 1113 "cplus.met"
#line 1114 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1114 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1114 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1114 "cplus.met"
            } else {
#line 1114 "cplus.met"
                tokenAhead = 0 ;
#line 1114 "cplus.met"
            }
#line 1114 "cplus.met"
#line 1114 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1114 "cplus.met"
        }
#line 1114 "cplus.met"
#line 1116 "cplus.met"
        {
#line 1116 "cplus.met"
            PPTREE _ptRes0=0;
#line 1116 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1116 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1116 "cplus.met"
            retTree=_ptRes0;
#line 1116 "cplus.met"
        }
#line 1116 "cplus.met"
#line 1116 "cplus.met"
    }
#line 1116 "cplus.met"
#line 1116 "cplus.met"
    _addlist1 = list ;
#line 1116 "cplus.met"
#line 1118 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1118 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1118 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1118 "cplus.met"
#line 1119 "cplus.met"
#line 1119 "cplus.met"
        {
#line 1119 "cplus.met"
            PPTREE _ptTree0=0;
#line 1119 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1119 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1119 "cplus.met"
            }
#line 1119 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1119 "cplus.met"
        }
#line 1119 "cplus.met"
#line 1119 "cplus.met"
        if (list){
#line 1119 "cplus.met"
#line 1119 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1119 "cplus.met"
        } else {
#line 1119 "cplus.met"
#line 1119 "cplus.met"
            list = _addlist1 ;
#line 1119 "cplus.met"
        }
#line 1119 "cplus.met"
    } 
#line 1119 "cplus.met"
#line 1120 "cplus.met"
    {
#line 1120 "cplus.met"
        PPTREE _ptTree0=0;
#line 1120 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1120 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1120 "cplus.met"
        }
#line 1120 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1120 "cplus.met"
    }
#line 1120 "cplus.met"
#line 1121 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1121 "cplus.met"
#line 1122 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1122 "cplus.met"
    switch( lexEl.Value) {
#line 1122 "cplus.met"
#line 1123 "cplus.met"
        case META : 
#line 1123 "cplus.met"
        case ELSE_DIR : 
#line 1123 "cplus.met"
            tokenAhead = 0 ;
#line 1123 "cplus.met"
            CommTerm();
#line 1123 "cplus.met"
#line 1124 "cplus.met"
#line 1124 "cplus.met"
            _addlist2 = list2 ;
#line 1124 "cplus.met"
#line 1125 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1125 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1125 "cplus.met"
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                {
#line 1126 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1126 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 1126 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1126 "cplus.met"
                    }
#line 1126 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1126 "cplus.met"
                }
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                if (list2){
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1126 "cplus.met"
                } else {
#line 1126 "cplus.met"
#line 1126 "cplus.met"
                    list2 = _addlist2 ;
#line 1126 "cplus.met"
                }
#line 1126 "cplus.met"
            } 
#line 1126 "cplus.met"
#line 1127 "cplus.met"
            {
#line 1127 "cplus.met"
                PPTREE _ptTree0=0;
#line 1127 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1127 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1127 "cplus.met"
                }
#line 1127 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1127 "cplus.met"
            }
#line 1127 "cplus.met"
#line 1128 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1128 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1128 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(stat_ifdef_dir_exit,"ENDIF_DIR")
#line 1128 "cplus.met"
            } else {
#line 1128 "cplus.met"
                tokenAhead = 0 ;
#line 1128 "cplus.met"
            }
#line 1128 "cplus.met"
#line 1129 "cplus.met"
            {
#line 1129 "cplus.met"
                PPTREE _ptTree0=0;
#line 1129 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1129 "cplus.met"
                _retValue =_ptTree0;
#line 1129 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1129 "cplus.met"
            }
#line 1129 "cplus.met"
#line 1129 "cplus.met"
            break;
#line 1129 "cplus.met"
#line 1131 "cplus.met"
        case ELIF_DIR : 
#line 1131 "cplus.met"
            tokenAhead = 0 ;
#line 1131 "cplus.met"
            CommTerm();
#line 1131 "cplus.met"
#line 1131 "cplus.met"
            {
#line 1131 "cplus.met"
                PPTREE _ptTree0=0;
#line 1131 "cplus.met"
                {
#line 1131 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1131 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 1131 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(stat_ifdef_dir_exit,"stat_ifdef_dir")
#line 1131 "cplus.met"
                    }
#line 1131 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1131 "cplus.met"
                }
#line 1131 "cplus.met"
                _retValue =_ptTree0;
#line 1131 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1131 "cplus.met"
            }
#line 1131 "cplus.met"
            break;
#line 1131 "cplus.met"
#line 1132 "cplus.met"
        case ENDIF_DIR : 
#line 1132 "cplus.met"
            tokenAhead = 0 ;
#line 1132 "cplus.met"
            CommTerm();
#line 1132 "cplus.met"
#line 1132 "cplus.met"
            {
#line 1132 "cplus.met"
                _retValue = retTree ;
#line 1132 "cplus.met"
                goto stat_ifdef_dir_ret;
#line 1132 "cplus.met"
                
#line 1132 "cplus.met"
            }
#line 1132 "cplus.met"
            break;
#line 1132 "cplus.met"
        default :
#line 1132 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(stat_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1132 "cplus.met"
            break;
#line 1132 "cplus.met"
    }
#line 1132 "cplus.met"
#line 1132 "cplus.met"
#line 1133 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1133 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1133 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1133 "cplus.met"
return((PPTREE) 0);
#line 1133 "cplus.met"

#line 1133 "cplus.met"
stat_ifdef_dir_exit :
#line 1133 "cplus.met"

#line 1133 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1133 "cplus.met"
    _funcLevel--;
#line 1133 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1133 "cplus.met"
    return((PPTREE) -1) ;
#line 1133 "cplus.met"

#line 1133 "cplus.met"
stat_ifdef_dir_ret :
#line 1133 "cplus.met"
    
#line 1133 "cplus.met"
    _Debug = TRACE_RULE("stat_ifdef_dir",TRACE_RETURN,_retValue);
#line 1133 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1133 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1133 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1133 "cplus.met"
    return _retValue ;
#line 1133 "cplus.met"
}
#line 1133 "cplus.met"

#line 1133 "cplus.met"
#line 3327 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3327 "cplus.met"
{
#line 3327 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3327 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3327 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3327 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3327 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3327 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3327 "cplus.met"
#line 3327 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3327 "cplus.met"
#line 3329 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3329 "cplus.met"
    switch( lexEl.Value) {
#line 3329 "cplus.met"
#line 3330 "cplus.met"
        case BREAK : 
#line 3330 "cplus.met"
            tokenAhead = 0 ;
#line 3330 "cplus.met"
            CommTerm();
#line 3330 "cplus.met"
#line 3331 "cplus.met"
#line 3332 "cplus.met"
            {
#line 3332 "cplus.met"
                PPTREE _ptRes0=0;
#line 3332 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3332 "cplus.met"
                statTree=_ptRes0;
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
        case CONTINUE : 
#line 3335 "cplus.met"
            tokenAhead = 0 ;
#line 3335 "cplus.met"
            CommTerm();
#line 3335 "cplus.met"
#line 3336 "cplus.met"
#line 3337 "cplus.met"
            {
#line 3337 "cplus.met"
                PPTREE _ptRes0=0;
#line 3337 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3337 "cplus.met"
                statTree=_ptRes0;
#line 3337 "cplus.met"
            }
#line 3337 "cplus.met"
#line 3338 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3338 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3338 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3338 "cplus.met"
            } else {
#line 3338 "cplus.met"
                tokenAhead = 0 ;
#line 3338 "cplus.met"
            }
#line 3338 "cplus.met"
#line 3338 "cplus.met"
            break;
#line 3338 "cplus.met"
#line 3340 "cplus.met"
        case DO : 
#line 3340 "cplus.met"
            tokenAhead = 0 ;
#line 3340 "cplus.met"
            CommTerm();
#line 3340 "cplus.met"
#line 3341 "cplus.met"
#line 3342 "cplus.met"
            {
#line 3342 "cplus.met"
                switchContext = 0 ;
#line 3342 "cplus.met"
#line 3343 "cplus.met"
                {
#line 3343 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3343 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3343 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3343 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3343 "cplus.met"
                    }
#line 3343 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3343 "cplus.met"
                    statTree=_ptRes0;
#line 3343 "cplus.met"
                }
#line 3343 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3343 "cplus.met"
            }
#line 3343 "cplus.met"
#line 3344 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3344 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3344 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3344 "cplus.met"
            } else {
#line 3344 "cplus.met"
                tokenAhead = 0 ;
#line 3344 "cplus.met"
            }
#line 3344 "cplus.met"
#line 3345 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3345 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3345 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3345 "cplus.met"
            } else {
#line 3345 "cplus.met"
                tokenAhead = 0 ;
#line 3345 "cplus.met"
            }
#line 3345 "cplus.met"
#line 3346 "cplus.met"
            {
#line 3346 "cplus.met"
                PPTREE _ptTree0=0;
#line 3346 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3346 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3346 "cplus.met"
                }
#line 3346 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3346 "cplus.met"
            }
#line 3346 "cplus.met"
#line 3347 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3347 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3347 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3347 "cplus.met"
            } else {
#line 3347 "cplus.met"
                tokenAhead = 0 ;
#line 3347 "cplus.met"
            }
#line 3347 "cplus.met"
#line 3348 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3348 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3348 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3348 "cplus.met"
            } else {
#line 3348 "cplus.met"
                tokenAhead = 0 ;
#line 3348 "cplus.met"
            }
#line 3348 "cplus.met"
#line 3348 "cplus.met"
            break;
#line 3348 "cplus.met"
#line 3350 "cplus.met"
        case AOUV : 
#line 3350 "cplus.met"
#line 3350 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3350 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3350 "cplus.met"
            }
#line 3350 "cplus.met"
            break;
#line 3350 "cplus.met"
#line 3351 "cplus.met"
        case FOR : 
#line 3351 "cplus.met"
            tokenAhead = 0 ;
#line 3351 "cplus.met"
            CommTerm();
#line 3351 "cplus.met"
#line 3351 "cplus.met"
            {
#line 3351 "cplus.met"
                PPTREE _ptTree0=0;
#line 3351 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 3351 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3351 "cplus.met"
                }
#line 3351 "cplus.met"
                _retValue =_ptTree0;
#line 3351 "cplus.met"
                goto statement_ret;
#line 3351 "cplus.met"
            }
#line 3351 "cplus.met"
            break;
#line 3351 "cplus.met"
#line 3352 "cplus.met"
        case GOTO : 
#line 3352 "cplus.met"
            tokenAhead = 0 ;
#line 3352 "cplus.met"
            CommTerm();
#line 3352 "cplus.met"
#line 3353 "cplus.met"
#line 3354 "cplus.met"
            {
#line 3354 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3354 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3354 "cplus.met"
                {
#line 3354 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3354 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3354 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3354 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3354 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3354 "cplus.met"
                    } else {
#line 3354 "cplus.met"
                        tokenAhead = 0 ;
#line 3354 "cplus.met"
                    }
#line 3354 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3354 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3354 "cplus.met"
                }
#line 3354 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3354 "cplus.met"
                statTree=_ptRes0;
#line 3354 "cplus.met"
            }
#line 3354 "cplus.met"
#line 3355 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3355 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3355 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3355 "cplus.met"
            } else {
#line 3355 "cplus.met"
                tokenAhead = 0 ;
#line 3355 "cplus.met"
            }
#line 3355 "cplus.met"
#line 3355 "cplus.met"
            break;
#line 3355 "cplus.met"
#line 3357 "cplus.met"
        case IF : 
#line 3357 "cplus.met"
            tokenAhead = 0 ;
#line 3357 "cplus.met"
            CommTerm();
#line 3357 "cplus.met"
#line 3358 "cplus.met"
#line 3359 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3359 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3359 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
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
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3360 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3360 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3360 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3360 "cplus.met"
                }
#line 3360 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3360 "cplus.met"
                statTree=_ptRes0;
#line 3360 "cplus.met"
            }
#line 3360 "cplus.met"
#line 3361 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3361 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3361 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3361 "cplus.met"
            } else {
#line 3361 "cplus.met"
                tokenAhead = 0 ;
#line 3361 "cplus.met"
            }
#line 3361 "cplus.met"
#line 3362 "cplus.met"
            {
#line 3362 "cplus.met"
                switchContext = 0 ;
#line 3362 "cplus.met"
#line 3363 "cplus.met"
                {
#line 3363 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3363 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3363 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3363 "cplus.met"
                    }
#line 3363 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3363 "cplus.met"
                }
#line 3363 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3363 "cplus.met"
            }
#line 3363 "cplus.met"
#line 3364 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3364 "cplus.met"
#line 3365 "cplus.met"
                {
#line 3365 "cplus.met"
                    switchContext = 0 ;
#line 3365 "cplus.met"
#line 3366 "cplus.met"
                    {
#line 3366 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3366 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3366 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3366 "cplus.met"
                        }
#line 3366 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3366 "cplus.met"
                    }
#line 3366 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3366 "cplus.met"
                }
#line 3366 "cplus.met"
            }
#line 3366 "cplus.met"
#line 3366 "cplus.met"
            break;
#line 3366 "cplus.met"
#line 3368 "cplus.met"
        case PVIR : 
#line 3368 "cplus.met"
            tokenAhead = 0 ;
#line 3368 "cplus.met"
            CommTerm();
#line 3368 "cplus.met"
#line 3368 "cplus.met"
            {
#line 3368 "cplus.met"
                PPTREE _ptRes0=0;
#line 3368 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3368 "cplus.met"
                statTree=_ptRes0;
#line 3368 "cplus.met"
            }
#line 3368 "cplus.met"
            break;
#line 3368 "cplus.met"
#line 3369 "cplus.met"
        case RETURN : 
#line 3369 "cplus.met"
            tokenAhead = 0 ;
#line 3369 "cplus.met"
            CommTerm();
#line 3369 "cplus.met"
#line 3370 "cplus.met"
#line 3371 "cplus.met"
            {
#line 3371 "cplus.met"
                PPTREE _ptRes0=0;
#line 3371 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3371 "cplus.met"
                statTree=_ptRes0;
#line 3371 "cplus.met"
            }
#line 3371 "cplus.met"
#line 3372 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 62, cplus)){
#line 3372 "cplus.met"
#line 3373 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3373 "cplus.met"
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
        case SWITCH : 
#line 3376 "cplus.met"
            tokenAhead = 0 ;
#line 3376 "cplus.met"
            CommTerm();
#line 3376 "cplus.met"
#line 3377 "cplus.met"
#line 3378 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3378 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3378 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3378 "cplus.met"
            } else {
#line 3378 "cplus.met"
                tokenAhead = 0 ;
#line 3378 "cplus.met"
            }
#line 3378 "cplus.met"
#line 3379 "cplus.met"
            {
#line 3379 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3379 "cplus.met"
                _ptRes0= MakeTree(SWITCH, 2);
#line 3379 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
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
#line 3380 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3380 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3380 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3380 "cplus.met"
            } else {
#line 3380 "cplus.met"
                tokenAhead = 0 ;
#line 3380 "cplus.met"
            }
#line 3380 "cplus.met"
#line 3381 "cplus.met"
            {
#line 3381 "cplus.met"
                switchContext = 0 ;
#line 3381 "cplus.met"
#line 3382 "cplus.met"
                {
#line 3382 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3382 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 142, cplus))== (PPTREE) -1 ) {
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
                switchContext =  _oldswitchContext;
#line 3382 "cplus.met"
            }
#line 3382 "cplus.met"
#line 3382 "cplus.met"
            break;
#line 3382 "cplus.met"
#line 3384 "cplus.met"
        case WHILE : 
#line 3384 "cplus.met"
            tokenAhead = 0 ;
#line 3384 "cplus.met"
            CommTerm();
#line 3384 "cplus.met"
#line 3385 "cplus.met"
#line 3386 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3386 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3386 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3386 "cplus.met"
            } else {
#line 3386 "cplus.met"
                tokenAhead = 0 ;
#line 3386 "cplus.met"
            }
#line 3386 "cplus.met"
#line 3387 "cplus.met"
            {
#line 3387 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3387 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3387 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3387 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3387 "cplus.met"
                }
#line 3387 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3387 "cplus.met"
                statTree=_ptRes0;
#line 3387 "cplus.met"
            }
#line 3387 "cplus.met"
#line 3388 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3388 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3388 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3388 "cplus.met"
            } else {
#line 3388 "cplus.met"
                tokenAhead = 0 ;
#line 3388 "cplus.met"
            }
#line 3388 "cplus.met"
#line 3389 "cplus.met"
            {
#line 3389 "cplus.met"
                switchContext = 0 ;
#line 3389 "cplus.met"
#line 3390 "cplus.met"
                {
#line 3390 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3390 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3390 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3390 "cplus.met"
                    }
#line 3390 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3390 "cplus.met"
                }
#line 3390 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3390 "cplus.met"
            }
#line 3390 "cplus.met"
#line 3390 "cplus.met"
            break;
#line 3390 "cplus.met"
#line 3392 "cplus.met"
        case FORALLSONS : 
#line 3392 "cplus.met"
            tokenAhead = 0 ;
#line 3392 "cplus.met"
            CommTerm();
#line 3392 "cplus.met"
#line 3393 "cplus.met"
#line 3394 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3394 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3394 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3394 "cplus.met"
            } else {
#line 3394 "cplus.met"
                tokenAhead = 0 ;
#line 3394 "cplus.met"
            }
#line 3394 "cplus.met"
#line 3395 "cplus.met"
            {
#line 3395 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3395 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3395 "cplus.met"
                {
#line 3395 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3395 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3395 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3395 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3395 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3395 "cplus.met"
                    } else {
#line 3395 "cplus.met"
                        tokenAhead = 0 ;
#line 3395 "cplus.met"
                    }
#line 3395 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3395 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3395 "cplus.met"
                }
#line 3395 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3395 "cplus.met"
                statTree=_ptRes0;
#line 3395 "cplus.met"
            }
#line 3395 "cplus.met"
#line 3396 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3396 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3396 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3396 "cplus.met"
            } else {
#line 3396 "cplus.met"
                tokenAhead = 0 ;
#line 3396 "cplus.met"
            }
#line 3396 "cplus.met"
#line 3397 "cplus.met"
            {
#line 3397 "cplus.met"
                switchContext = 0 ;
#line 3397 "cplus.met"
#line 3398 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 138, cplus))){
#line 3398 "cplus.met"
#line 3399 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3399 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3399 "cplus.met"
                    }
#line 3399 "cplus.met"
                }
#line 3399 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3399 "cplus.met"
            }
#line 3399 "cplus.met"
#line 3400 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3400 "cplus.met"
#line 3401 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3401 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3401 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3401 "cplus.met"
            } else {
#line 3401 "cplus.met"
                tokenAhead = 0 ;
#line 3401 "cplus.met"
            }
#line 3401 "cplus.met"
#line 3401 "cplus.met"
            break;
#line 3401 "cplus.met"
#line 3403 "cplus.met"
        case THROW : 
#line 3403 "cplus.met"
            tokenAhead = 0 ;
#line 3403 "cplus.met"
            CommTerm();
#line 3403 "cplus.met"
#line 3404 "cplus.met"
#line 3405 "cplus.met"
            {
#line 3405 "cplus.met"
                PPTREE _ptRes0=0;
#line 3405 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3405 "cplus.met"
                statTree=_ptRes0;
#line 3405 "cplus.met"
            }
#line 3405 "cplus.met"
#line 3406 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 62, cplus)){
#line 3406 "cplus.met"
#line 3407 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3407 "cplus.met"
#line 3407 "cplus.met"
            }
#line 3407 "cplus.met"
#line 3408 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3408 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3408 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3408 "cplus.met"
            } else {
#line 3408 "cplus.met"
                tokenAhead = 0 ;
#line 3408 "cplus.met"
            }
#line 3408 "cplus.met"
#line 3408 "cplus.met"
            break;
#line 3408 "cplus.met"
#line 3410 "cplus.met"
        case TRY : 
#line 3410 "cplus.met"
#line 3410 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3410 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3410 "cplus.met"
            }
#line 3410 "cplus.met"
            break;
#line 3410 "cplus.met"
#line 3411 "cplus.met"
        case META : 
#line 3411 "cplus.met"
#line 3412 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 87, cplus)){
#line 3412 "cplus.met"
#line 3413 "cplus.met"
#line 3414 "cplus.met"
                {
#line 3414 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3414 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
#line 3414 "cplus.met"
                    {
#line 3414 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 3414 "cplus.met"
                        _ptRes1= MakeTree(IDENT, 1);
#line 3414 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3414 "cplus.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3414 "cplus.met"
                            MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,"IDENT")
#line 3414 "cplus.met"
                        } else {
#line 3414 "cplus.met"
                            tokenAhead = 0 ;
#line 3414 "cplus.met"
                        }
#line 3414 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3414 "cplus.met"
                        _ptTree0=_ptRes1;
#line 3414 "cplus.met"
                    }
#line 3414 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3414 "cplus.met"
                    statTree=_ptRes0;
#line 3414 "cplus.met"
                }
#line 3414 "cplus.met"
#line 3415 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3415 "cplus.met"
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3415 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
#line 3415 "cplus.met"
                } else {
#line 3415 "cplus.met"
                    tokenAhead = 0 ;
#line 3415 "cplus.met"
                }
#line 3415 "cplus.met"
#line 3416 "cplus.met"
                {
#line 3416 "cplus.met"
                    switchContext = 0 ;
#line 3416 "cplus.met"
#line 3417 "cplus.met"
                    {
#line 3417 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3417 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3417 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3417 "cplus.met"
                        }
#line 3417 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3417 "cplus.met"
                    }
#line 3417 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3417 "cplus.met"
                }
#line 3417 "cplus.met"
#line 3417 "cplus.met"
#line 3417 "cplus.met"
            } else {
#line 3417 "cplus.met"
#line 3420 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus)){
#line 3420 "cplus.met"
#line 3422 "cplus.met"
                    
#line 3422 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3422 "cplus.met"
                    goto statement_exit;
#line 3422 "cplus.met"
#line 3423 "cplus.met"
                } else {
#line 3423 "cplus.met"
#line 3425 "cplus.met"
#line 3426 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3426 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3426 "cplus.met"
                    }
#line 3426 "cplus.met"
#line 3427 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3427 "cplus.met"
                    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3427 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,";")
#line 3427 "cplus.met"
                    } else {
#line 3427 "cplus.met"
                        tokenAhead = 0 ;
#line 3427 "cplus.met"
                    }
#line 3427 "cplus.met"
#line 3427 "cplus.met"
                }
#line 3427 "cplus.met"
            }
#line 3427 "cplus.met"
            break;
#line 3427 "cplus.met"
#line 3431 "cplus.met"
        case CASE : 
#line 3431 "cplus.met"
#line 3432 "cplus.met"
            if (! (switchContext)){
#line 3432 "cplus.met"
#line 3433 "cplus.met"
                
#line 3433 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3433 "cplus.met"
                goto statement_exit;
#line 3433 "cplus.met"
#line 3433 "cplus.met"
            } else {
#line 3433 "cplus.met"
#line 3435 "cplus.met"
                {
#line 3435 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3435 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 3435 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3435 "cplus.met"
                    }
#line 3435 "cplus.met"
                    _retValue =_ptTree0;
#line 3435 "cplus.met"
                    goto statement_ret;
#line 3435 "cplus.met"
                }
#line 3435 "cplus.met"
            }
#line 3435 "cplus.met"
            break;
#line 3435 "cplus.met"
#line 3436 "cplus.met"
        case DEFAULT : 
#line 3436 "cplus.met"
#line 3437 "cplus.met"
            if (! (switchContext)){
#line 3437 "cplus.met"
#line 3438 "cplus.met"
                
#line 3438 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3438 "cplus.met"
                goto statement_exit;
#line 3438 "cplus.met"
#line 3438 "cplus.met"
            } else {
#line 3438 "cplus.met"
#line 3440 "cplus.met"
                {
#line 3440 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3440 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 141, cplus))== (PPTREE) -1 ) {
#line 3440 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3440 "cplus.met"
                    }
#line 3440 "cplus.met"
                    _retValue =_ptTree0;
#line 3440 "cplus.met"
                    goto statement_ret;
#line 3440 "cplus.met"
                }
#line 3440 "cplus.met"
            }
#line 3440 "cplus.met"
            break;
#line 3440 "cplus.met"
#line 3441 "cplus.met"
        case IDENT : 
#line 3441 "cplus.met"
#line 3442 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3442 "cplus.met"
            switch( lexEl.Value) {
#line 3442 "cplus.met"
#line 3443 "cplus.met"
                case META : 
#line 3443 "cplus.met"
                case FUNC_SPEC : 
#line 3443 "cplus.met"
#line 3444 "cplus.met"
#line 3445 "cplus.met"
                    {
#line 3445 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3445 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3445 "cplus.met"
                        {
#line 3445 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3445 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3445 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3445 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3445 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
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
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3446 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
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
                        PPTREE _ptTree0=0;
#line 3447 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3447 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3447 "cplus.met"
                        }
#line 3447 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3447 "cplus.met"
                    }
#line 3447 "cplus.met"
#line 3448 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3448 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3448 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3448 "cplus.met"
                    } else {
#line 3448 "cplus.met"
                        tokenAhead = 0 ;
#line 3448 "cplus.met"
                    }
#line 3448 "cplus.met"
#line 3448 "cplus.met"
                    break;
#line 3448 "cplus.met"
#line 3453 "cplus.met"
                default : 
#line 3453 "cplus.met"
#line 3451 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 87, cplus)){
#line 3451 "cplus.met"
#line 3452 "cplus.met"
#line 3453 "cplus.met"
                        {
#line 3453 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3453 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3453 "cplus.met"
                            {
#line 3453 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3453 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3453 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3453 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3453 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3453 "cplus.met"
                                } else {
#line 3453 "cplus.met"
                                    tokenAhead = 0 ;
#line 3453 "cplus.met"
                                }
#line 3453 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3453 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3453 "cplus.met"
                            }
#line 3453 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3453 "cplus.met"
                            statTree=_ptRes0;
#line 3453 "cplus.met"
                        }
#line 3453 "cplus.met"
#line 3454 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3454 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3454 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3454 "cplus.met"
                        } else {
#line 3454 "cplus.met"
                            tokenAhead = 0 ;
#line 3454 "cplus.met"
                        }
#line 3454 "cplus.met"
#line 3455 "cplus.met"
                        {
#line 3455 "cplus.met"
                            switchContext = 0 ;
#line 3455 "cplus.met"
#line 3456 "cplus.met"
                            {
#line 3456 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3456 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 138, cplus))== (PPTREE) -1 ) {
#line 3456 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3456 "cplus.met"
                                }
#line 3456 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3456 "cplus.met"
                            }
#line 3456 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3456 "cplus.met"
                        }
#line 3456 "cplus.met"
#line 3456 "cplus.met"
#line 3456 "cplus.met"
                    } else {
#line 3456 "cplus.met"
#line 3459 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus)){
#line 3459 "cplus.met"
#line 3462 "cplus.met"
                            
#line 3462 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3462 "cplus.met"
                            goto statement_exit;
#line 3462 "cplus.met"
#line 3463 "cplus.met"
                        } else {
#line 3463 "cplus.met"
#line 3465 "cplus.met"
#line 3466 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 3466 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3466 "cplus.met"
                            }
#line 3466 "cplus.met"
#line 3466 "cplus.met"
                        }
#line 3466 "cplus.met"
                    }
#line 3466 "cplus.met"
                    break;
#line 3466 "cplus.met"
            }
#line 3466 "cplus.met"
            break;
#line 3466 "cplus.met"
#line 3472 "cplus.met"
        default : 
#line 3472 "cplus.met"
#line 3470 "cplus.met"
#line 3471 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus)){
#line 3471 "cplus.met"
#line 3472 "cplus.met"
                
#line 3472 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3472 "cplus.met"
                goto statement_exit;
#line 3472 "cplus.met"
#line 3472 "cplus.met"
            } else {
#line 3472 "cplus.met"
#line 3474 "cplus.met"
#line 3475 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3475 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3475 "cplus.met"
                }
#line 3475 "cplus.met"
#line 3476 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3476 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3476 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3476 "cplus.met"
                } else {
#line 3476 "cplus.met"
                    tokenAhead = 0 ;
#line 3476 "cplus.met"
                }
#line 3476 "cplus.met"
#line 3476 "cplus.met"
            }
#line 3476 "cplus.met"
#line 3476 "cplus.met"
            break;
#line 3476 "cplus.met"
    }
#line 3476 "cplus.met"
#line 3480 "cplus.met"
    {
#line 3480 "cplus.met"
        _retValue = statTree ;
#line 3480 "cplus.met"
        goto statement_ret;
#line 3480 "cplus.met"
        
#line 3480 "cplus.met"
    }
#line 3480 "cplus.met"
#line 3480 "cplus.met"
#line 3480 "cplus.met"

#line 3481 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3481 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3481 "cplus.met"
switchContext =  _oldswitchContext;
#line 3481 "cplus.met"
return((PPTREE) 0);
#line 3481 "cplus.met"

#line 3481 "cplus.met"
statement_exit :
#line 3481 "cplus.met"

#line 3481 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3481 "cplus.met"
    _funcLevel--;
#line 3481 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3481 "cplus.met"
    return((PPTREE) -1) ;
#line 3481 "cplus.met"

#line 3481 "cplus.met"
statement_ret :
#line 3481 "cplus.met"
    
#line 3481 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3481 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3481 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3481 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3481 "cplus.met"
    return _retValue ;
#line 3481 "cplus.met"
}
#line 3481 "cplus.met"

#line 3481 "cplus.met"
#line 3320 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3320 "cplus.met"
{
#line 3320 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3320 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3320 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3320 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3320 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3320 "cplus.met"
#line 3320 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3320 "cplus.met"
#line 3322 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3322 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3322 "cplus.met"
    }
#line 3322 "cplus.met"
#line 3323 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3323 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3323 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3323 "cplus.met"
    } else {
#line 3323 "cplus.met"
        tokenAhead = 0 ;
#line 3323 "cplus.met"
    }
#line 3323 "cplus.met"
#line 3324 "cplus.met"
    {
#line 3324 "cplus.met"
        _retValue = statTree ;
#line 3324 "cplus.met"
        goto statement_expression_ret;
#line 3324 "cplus.met"
        
#line 3324 "cplus.met"
    }
#line 3324 "cplus.met"
#line 3324 "cplus.met"
#line 3324 "cplus.met"

#line 3325 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3325 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3325 "cplus.met"
return((PPTREE) 0);
#line 3325 "cplus.met"

#line 3325 "cplus.met"
statement_expression_exit :
#line 3325 "cplus.met"

#line 3325 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3325 "cplus.met"
    _funcLevel--;
#line 3325 "cplus.met"
    return((PPTREE) -1) ;
#line 3325 "cplus.met"

#line 3325 "cplus.met"
statement_expression_ret :
#line 3325 "cplus.met"
    
#line 3325 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3325 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3325 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3325 "cplus.met"
    return _retValue ;
#line 3325 "cplus.met"
}
#line 3325 "cplus.met"

#line 3325 "cplus.met"
#line 2914 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 2914 "cplus.met"
{
#line 2914 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2914 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2914 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2914 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 2914 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2914 "cplus.met"
#line 2914 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2914 "cplus.met"
#line 2914 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2914 "cplus.met"
#line 2916 "cplus.met"
    {
#line 2916 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2916 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 2916 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2916 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 2916 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 2916 "cplus.met"
        } else {
#line 2916 "cplus.met"
            tokenAhead = 0 ;
#line 2916 "cplus.met"
        }
#line 2916 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2916 "cplus.met"
        retTree=_ptRes0;
#line 2916 "cplus.met"
    }
#line 2916 "cplus.met"
#line 2917 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 2917 "cplus.met"
#line 2918 "cplus.met"
#line 2919 "cplus.met"
        list =AddList(list ,retTree );
#line 2919 "cplus.met"
#line 2919 "cplus.met"
        _addlist1 = list ;
#line 2919 "cplus.met"
#line 2920 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 2920 "cplus.met"
#line 2921 "cplus.met"
#line 2921 "cplus.met"
            {
#line 2921 "cplus.met"
                PPTREE _ptTree0=0;
#line 2921 "cplus.met"
                {
#line 2921 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2921 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 2921 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2921 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 2921 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 2921 "cplus.met"
                    } else {
#line 2921 "cplus.met"
                        tokenAhead = 0 ;
#line 2921 "cplus.met"
                    }
#line 2921 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2921 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2921 "cplus.met"
                }
#line 2921 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2921 "cplus.met"
            }
#line 2921 "cplus.met"
#line 2921 "cplus.met"
            if (list){
#line 2921 "cplus.met"
#line 2921 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2921 "cplus.met"
            } else {
#line 2921 "cplus.met"
#line 2921 "cplus.met"
                list = _addlist1 ;
#line 2921 "cplus.met"
            }
#line 2921 "cplus.met"
        } 
#line 2921 "cplus.met"
#line 2922 "cplus.met"
        {
#line 2922 "cplus.met"
            PPTREE _ptRes0=0;
#line 2922 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 2922 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 2922 "cplus.met"
            retTree=_ptRes0;
#line 2922 "cplus.met"
        }
#line 2922 "cplus.met"
#line 2922 "cplus.met"
#line 2922 "cplus.met"
    }
#line 2922 "cplus.met"
#line 2924 "cplus.met"
    {
#line 2924 "cplus.met"
        _retValue = retTree ;
#line 2924 "cplus.met"
        goto string_list_ret;
#line 2924 "cplus.met"
        
#line 2924 "cplus.met"
    }
#line 2924 "cplus.met"
#line 2924 "cplus.met"
#line 2924 "cplus.met"

#line 2925 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2925 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2925 "cplus.met"
return((PPTREE) 0);
#line 2925 "cplus.met"

#line 2925 "cplus.met"
string_list_exit :
#line 2925 "cplus.met"

#line 2925 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 2925 "cplus.met"
    _funcLevel--;
#line 2925 "cplus.met"
    return((PPTREE) -1) ;
#line 2925 "cplus.met"

#line 2925 "cplus.met"
string_list_ret :
#line 2925 "cplus.met"
    
#line 2925 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
#line 2925 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2925 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2925 "cplus.met"
    return _retValue ;
#line 2925 "cplus.met"
}
#line 2925 "cplus.met"

#line 2925 "cplus.met"
#line 3488 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3488 "cplus.met"
{
#line 3488 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3488 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3488 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3488 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3488 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3488 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3488 "cplus.met"
#line 3488 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3488 "cplus.met"
#line 3488 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3488 "cplus.met"
#line 3490 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3490 "cplus.met"
    switch( lexEl.Value) {
#line 3490 "cplus.met"
#line 3491 "cplus.met"
        case CASE : 
#line 3491 "cplus.met"
            tokenAhead = 0 ;
#line 3491 "cplus.met"
            CommTerm();
#line 3491 "cplus.met"
#line 3492 "cplus.met"
#line 3493 "cplus.met"
            {
#line 3493 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3493 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3493 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3493 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3493 "cplus.met"
                }
#line 3493 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3493 "cplus.met"
                retTree=_ptRes0;
#line 3493 "cplus.met"
            }
#line 3493 "cplus.met"
#line 3494 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3494 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3494 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3494 "cplus.met"
            } else {
#line 3494 "cplus.met"
                tokenAhead = 0 ;
#line 3494 "cplus.met"
            }
#line 3494 "cplus.met"
#line 3495 "cplus.met"
            {
#line 3495 "cplus.met"
                switchContext = 0 ;
#line 3495 "cplus.met"
#line 3496 "cplus.met"
#line 3496 "cplus.met"
                _addlist1 = list ;
#line 3496 "cplus.met"
#line 3496 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 138, cplus)) || 
#line 3496 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 134, cplus))) { 
#line 3496 "cplus.met"
#line 3497 "cplus.met"
#line 3497 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3497 "cplus.met"
#line 3497 "cplus.met"
                    if (list){
#line 3497 "cplus.met"
#line 3497 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3497 "cplus.met"
                    } else {
#line 3497 "cplus.met"
#line 3497 "cplus.met"
                        list = _addlist1 ;
#line 3497 "cplus.met"
                    }
#line 3497 "cplus.met"
                } 
#line 3497 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3497 "cplus.met"
            }
#line 3497 "cplus.met"
#line 3498 "cplus.met"
            {
#line 3498 "cplus.met"
                PPTREE _ptTree0=0;
#line 3498 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3498 "cplus.met"
                _retValue =_ptTree0;
#line 3498 "cplus.met"
                goto switch_elem_ret;
#line 3498 "cplus.met"
            }
#line 3498 "cplus.met"
#line 3498 "cplus.met"
            break;
#line 3498 "cplus.met"
#line 3500 "cplus.met"
        case DEFAULT : 
#line 3500 "cplus.met"
            tokenAhead = 0 ;
#line 3500 "cplus.met"
            CommTerm();
#line 3500 "cplus.met"
#line 3501 "cplus.met"
#line 3502 "cplus.met"
            {
#line 3502 "cplus.met"
                PPTREE _ptRes0=0;
#line 3502 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3502 "cplus.met"
                retTree=_ptRes0;
#line 3502 "cplus.met"
            }
#line 3502 "cplus.met"
#line 3503 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3503 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3503 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3503 "cplus.met"
            } else {
#line 3503 "cplus.met"
                tokenAhead = 0 ;
#line 3503 "cplus.met"
            }
#line 3503 "cplus.met"
#line 3504 "cplus.met"
            {
#line 3504 "cplus.met"
                switchContext = 0 ;
#line 3504 "cplus.met"
#line 3505 "cplus.met"
#line 3505 "cplus.met"
                _addlist2 = list ;
#line 3505 "cplus.met"
#line 3505 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 138, cplus)) || 
#line 3505 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 134, cplus))) { 
#line 3505 "cplus.met"
#line 3506 "cplus.met"
#line 3506 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3506 "cplus.met"
#line 3506 "cplus.met"
                    if (list){
#line 3506 "cplus.met"
#line 3506 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3506 "cplus.met"
                    } else {
#line 3506 "cplus.met"
#line 3506 "cplus.met"
                        list = _addlist2 ;
#line 3506 "cplus.met"
                    }
#line 3506 "cplus.met"
                } 
#line 3506 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3506 "cplus.met"
            }
#line 3506 "cplus.met"
#line 3507 "cplus.met"
            {
#line 3507 "cplus.met"
                PPTREE _ptTree0=0;
#line 3507 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3507 "cplus.met"
                _retValue =_ptTree0;
#line 3507 "cplus.met"
                goto switch_elem_ret;
#line 3507 "cplus.met"
            }
#line 3507 "cplus.met"
#line 3507 "cplus.met"
            break;
#line 3507 "cplus.met"
#line 3513 "cplus.met"
        default : 
#line 3513 "cplus.met"
#line 3510 "cplus.met"
#line 3512 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 135, cplus)){
#line 3512 "cplus.met"
#line 3514 "cplus.met"
                {
#line 3514 "cplus.met"
                    _retValue = retTree ;
#line 3514 "cplus.met"
                    goto switch_elem_ret;
#line 3514 "cplus.met"
                    
#line 3514 "cplus.met"
                }
#line 3514 "cplus.met"
            } else {
#line 3514 "cplus.met"
#line 3516 "cplus.met"
                
#line 3516 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3516 "cplus.met"
                goto switch_elem_exit;
#line 3516 "cplus.met"
            }
#line 3516 "cplus.met"
#line 3516 "cplus.met"
            break;
#line 3516 "cplus.met"
    }
#line 3516 "cplus.met"
#line 3516 "cplus.met"
#line 3518 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3518 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3518 "cplus.met"
switchContext =  _oldswitchContext;
#line 3518 "cplus.met"
return((PPTREE) 0);
#line 3518 "cplus.met"

#line 3518 "cplus.met"
switch_elem_exit :
#line 3518 "cplus.met"

#line 3518 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3518 "cplus.met"
    _funcLevel--;
#line 3518 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3518 "cplus.met"
    return((PPTREE) -1) ;
#line 3518 "cplus.met"

#line 3518 "cplus.met"
switch_elem_ret :
#line 3518 "cplus.met"
    
#line 3518 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
#line 3518 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3518 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3518 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3518 "cplus.met"
    return _retValue ;
#line 3518 "cplus.met"
}
#line 3518 "cplus.met"

#line 3518 "cplus.met"
#line 3521 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3521 "cplus.met"
{
#line 3521 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3521 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3521 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3521 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3521 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3521 "cplus.met"
#line 3521 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3521 "cplus.met"
#line 3521 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3521 "cplus.met"
#line 3523 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3523 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3523 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3523 "cplus.met"
    } else {
#line 3523 "cplus.met"
        tokenAhead = 0 ;
#line 3523 "cplus.met"
    }
#line 3523 "cplus.met"
#line 3523 "cplus.met"
    _addlist1 = list ;
#line 3523 "cplus.met"
#line 3524 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 141, cplus)) { 
#line 3524 "cplus.met"
#line 3525 "cplus.met"
#line 3525 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3525 "cplus.met"
#line 3525 "cplus.met"
        if (list){
#line 3525 "cplus.met"
#line 3525 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3525 "cplus.met"
        } else {
#line 3525 "cplus.met"
#line 3525 "cplus.met"
            list = _addlist1 ;
#line 3525 "cplus.met"
        }
#line 3525 "cplus.met"
    } 
#line 3525 "cplus.met"
#line 3526 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3526 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3526 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
#line 3526 "cplus.met"
    } else {
#line 3526 "cplus.met"
        tokenAhead = 0 ;
#line 3526 "cplus.met"
    }
#line 3526 "cplus.met"
#line 3527 "cplus.met"
    {
#line 3527 "cplus.met"
        _retValue = list ;
#line 3527 "cplus.met"
        goto switch_list_ret;
#line 3527 "cplus.met"
        
#line 3527 "cplus.met"
    }
#line 3527 "cplus.met"
#line 3527 "cplus.met"
#line 3527 "cplus.met"

#line 3528 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3528 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3528 "cplus.met"
return((PPTREE) 0);
#line 3528 "cplus.met"

#line 3528 "cplus.met"
switch_list_exit :
#line 3528 "cplus.met"

#line 3528 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3528 "cplus.met"
    _funcLevel--;
#line 3528 "cplus.met"
    return((PPTREE) -1) ;
#line 3528 "cplus.met"

#line 3528 "cplus.met"
switch_list_ret :
#line 3528 "cplus.met"
    
#line 3528 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3528 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3528 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3528 "cplus.met"
    return _retValue ;
#line 3528 "cplus.met"
}
#line 3528 "cplus.met"

#line 3528 "cplus.met"
#line 1760 "cplus.met"
PPTREE cplus::template_type ( int error_free)
#line 1760 "cplus.met"
{
#line 1760 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1760 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1760 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1760 "cplus.met"
    int _Debug = TRACE_RULE("template_type",TRACE_ENTER,(PPTREE)0);
#line 1760 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1760 "cplus.met"
#line 1760 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1760 "cplus.met"
#line 1760 "cplus.met"
    PPTREE exp = (PPTREE) 0,listParam = (PPTREE) 0;
#line 1760 "cplus.met"
#line 1762 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1762 "cplus.met"
    if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 1762 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,"<")
#line 1762 "cplus.met"
    } else {
#line 1762 "cplus.met"
        tokenAhead = 0 ;
#line 1762 "cplus.met"
    }
#line 1762 "cplus.met"
#line 1762 "cplus.met"
    _addlist1 = listParam ;
#line 1762 "cplus.met"
#line 1763 "cplus.met"
    do {
#line 1763 "cplus.met"
#line 1765 "cplus.met"
        if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1765 "cplus.met"
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 146, cplus))){
#line 1765 "cplus.met"
#line 1767 "cplus.met"
#line 1767 "cplus.met"
            _addlist1 =AddList(_addlist1 ,exp );
#line 1767 "cplus.met"
#line 1767 "cplus.met"
            if (listParam){
#line 1767 "cplus.met"
#line 1767 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 1767 "cplus.met"
            } else {
#line 1767 "cplus.met"
#line 1767 "cplus.met"
                listParam = _addlist1 ;
#line 1767 "cplus.met"
            }
#line 1767 "cplus.met"
        }
#line 1767 "cplus.met"
#line 1767 "cplus.met"
#line 1768 "cplus.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1768 "cplus.met"
#line 1769 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1769 "cplus.met"
    if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1769 "cplus.met"
        MulFreeTree(3,_addlist1,exp,listParam);
        TOKEN_EXIT(template_type_exit,">")
#line 1769 "cplus.met"
    } else {
#line 1769 "cplus.met"
        tokenAhead = 0 ;
#line 1769 "cplus.met"
    }
#line 1769 "cplus.met"
#line 1770 "cplus.met"
    {
#line 1770 "cplus.met"
        PPTREE _ptTree0=0;
#line 1770 "cplus.met"
        {
#line 1770 "cplus.met"
            PPTREE _ptRes1=0;
#line 1770 "cplus.met"
            _ptRes1= MakeTree(PARAM_TYPE, 2);
#line 1770 "cplus.met"
            ReplaceTree(_ptRes1, 2, listParam );
#line 1770 "cplus.met"
            _ptTree0=_ptRes1;
#line 1770 "cplus.met"
        }
#line 1770 "cplus.met"
        _retValue =_ptTree0;
#line 1770 "cplus.met"
        goto template_type_ret;
#line 1770 "cplus.met"
    }
#line 1770 "cplus.met"
#line 1770 "cplus.met"
#line 1770 "cplus.met"

#line 1771 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1771 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1771 "cplus.met"
return((PPTREE) 0);
#line 1771 "cplus.met"

#line 1771 "cplus.met"
template_type_exit :
#line 1771 "cplus.met"

#line 1771 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_EXIT,(PPTREE)0);
#line 1771 "cplus.met"
    _funcLevel--;
#line 1771 "cplus.met"
    return((PPTREE) -1) ;
#line 1771 "cplus.met"

#line 1771 "cplus.met"
template_type_ret :
#line 1771 "cplus.met"
    
#line 1771 "cplus.met"
    _Debug = TRACE_RULE("template_type",TRACE_RETURN,_retValue);
#line 1771 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1771 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1771 "cplus.met"
    return _retValue ;
#line 1771 "cplus.met"
}
#line 1771 "cplus.met"

#line 1771 "cplus.met"
#line 3163 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3163 "cplus.met"
{
#line 3163 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3163 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3163 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3163 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3163 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3163 "cplus.met"
#line 3163 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3163 "cplus.met"
#line 3165 "cplus.met"
    {
#line 3165 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3165 "cplus.met"
        _ptRes0= MakeTree(FUNC, 11);
#line 3165 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 3165 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3165 "cplus.met"
        }
#line 3165 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3165 "cplus.met"
        funcTree=_ptRes0;
#line 3165 "cplus.met"
    }
#line 3165 "cplus.met"
#line 3166 "cplus.met"
    {
#line 3166 "cplus.met"
        PPTREE _ptTree0=0;
#line 3166 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 3166 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3166 "cplus.met"
        }
#line 3166 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3166 "cplus.met"
    }
#line 3166 "cplus.met"
#line 3167 "cplus.met"
    {
#line 3167 "cplus.met"
        PPTREE _ptTree0=0;
#line 3167 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 3167 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3167 "cplus.met"
        }
#line 3167 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3167 "cplus.met"
    }
#line 3167 "cplus.met"
#line 3168 "cplus.met"
    {
#line 3168 "cplus.met"
        _retValue = funcTree ;
#line 3168 "cplus.met"
        goto type_and_declarator_ret;
#line 3168 "cplus.met"
        
#line 3168 "cplus.met"
    }
#line 3168 "cplus.met"
#line 3168 "cplus.met"
#line 3168 "cplus.met"

#line 3169 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3169 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3169 "cplus.met"
return((PPTREE) 0);
#line 3169 "cplus.met"

#line 3169 "cplus.met"
type_and_declarator_exit :
#line 3169 "cplus.met"

#line 3169 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3169 "cplus.met"
    _funcLevel--;
#line 3169 "cplus.met"
    return((PPTREE) -1) ;
#line 3169 "cplus.met"

#line 3169 "cplus.met"
type_and_declarator_ret :
#line 3169 "cplus.met"
    
#line 3169 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3169 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3169 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3169 "cplus.met"
    return _retValue ;
#line 3169 "cplus.met"
}
#line 3169 "cplus.met"

#line 3169 "cplus.met"
#line 3061 "cplus.met"
PPTREE cplus::type_descr ( int error_free)
#line 3061 "cplus.met"
{
#line 3061 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3061 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3061 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3061 "cplus.met"
    int _Debug = TRACE_RULE("type_descr",TRACE_ENTER,(PPTREE)0);
#line 3061 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3061 "cplus.met"
#line 3062 "cplus.met"
    {
#line 3062 "cplus.met"
        PPTREE _ptTree0=0;
#line 3062 "cplus.met"
        {
#line 3062 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 3062 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 3062 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3062 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3062 "cplus.met"
                MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                TOKEN_EXIT(type_descr_exit,"IDENT")
#line 3062 "cplus.met"
            } else {
#line 3062 "cplus.met"
                tokenAhead = 0 ;
#line 3062 "cplus.met"
            }
#line 3062 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3062 "cplus.met"
            _ptTree0=_ptRes1;
#line 3062 "cplus.met"
        }
#line 3062 "cplus.met"
        _retValue =_ptTree0;
#line 3062 "cplus.met"
        goto type_descr_ret;
#line 3062 "cplus.met"
    }
#line 3062 "cplus.met"
#line 3062 "cplus.met"
#line 3062 "cplus.met"

#line 3063 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3063 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3063 "cplus.met"
return((PPTREE) 0);
#line 3063 "cplus.met"

#line 3063 "cplus.met"
type_descr_exit :
#line 3063 "cplus.met"

#line 3063 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_EXIT,(PPTREE)0);
#line 3063 "cplus.met"
    _funcLevel--;
#line 3063 "cplus.met"
    return((PPTREE) -1) ;
#line 3063 "cplus.met"

#line 3063 "cplus.met"
type_descr_ret :
#line 3063 "cplus.met"
    
#line 3063 "cplus.met"
    _Debug = TRACE_RULE("type_descr",TRACE_RETURN,_retValue);
#line 3063 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3063 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3063 "cplus.met"
    return _retValue ;
#line 3063 "cplus.met"
}
#line 3063 "cplus.met"

#line 3063 "cplus.met"
#line 2517 "cplus.met"
PPTREE cplus::type_name ( int error_free)
#line 2517 "cplus.met"
{
#line 2517 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2517 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2517 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2517 "cplus.met"
    int _Debug = TRACE_RULE("type_name",TRACE_ENTER,(PPTREE)0);
#line 2517 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2517 "cplus.met"
#line 2517 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 2517 "cplus.met"
#line 2519 "cplus.met"
    if ( (retTree=NQUICK_CALL(_Tak(type_specifier)(error_free), 147, cplus))== (PPTREE) -1 ) {
#line 2519 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        PROG_EXIT(type_name_exit,"type_name")
#line 2519 "cplus.met"
    }
#line 2519 "cplus.met"
#line 2520 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(abstract_declarator), 2, cplus)){
#line 2520 "cplus.met"
#line 2521 "cplus.met"
        {
#line 2521 "cplus.met"
            PPTREE _ptRes0=0;
#line 2521 "cplus.met"
            _ptRes0= MakeTree(ABST_DECLARATOR, 2);
#line 2521 "cplus.met"
            ReplaceTree(_ptRes0, 1, retTree );
#line 2521 "cplus.met"
            ReplaceTree(_ptRes0, 2, valTree );
#line 2521 "cplus.met"
            valTree=_ptRes0;
#line 2521 "cplus.met"
        }
#line 2521 "cplus.met"
    } else {
#line 2521 "cplus.met"
#line 2523 "cplus.met"
        valTree = retTree ;
#line 2523 "cplus.met"
    }
#line 2523 "cplus.met"
#line 2524 "cplus.met"
    {
#line 2524 "cplus.met"
        _retValue = valTree ;
#line 2524 "cplus.met"
        goto type_name_ret;
#line 2524 "cplus.met"
        
#line 2524 "cplus.met"
    }
#line 2524 "cplus.met"
#line 2524 "cplus.met"
#line 2524 "cplus.met"

#line 2525 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2525 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2525 "cplus.met"
return((PPTREE) 0);
#line 2525 "cplus.met"

#line 2525 "cplus.met"
type_name_exit :
#line 2525 "cplus.met"

#line 2525 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_EXIT,(PPTREE)0);
#line 2525 "cplus.met"
    _funcLevel--;
#line 2525 "cplus.met"
    return((PPTREE) -1) ;
#line 2525 "cplus.met"

#line 2525 "cplus.met"
type_name_ret :
#line 2525 "cplus.met"
    
#line 2525 "cplus.met"
    _Debug = TRACE_RULE("type_name",TRACE_RETURN,_retValue);
#line 2525 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2525 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2525 "cplus.met"
    return _retValue ;
#line 2525 "cplus.met"
}
#line 2525 "cplus.met"

#line 2525 "cplus.met"
#line 1736 "cplus.met"
PPTREE cplus::type_specifier ( int error_free)
#line 1736 "cplus.met"
{
#line 1736 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1736 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1736 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1736 "cplus.met"
    int _Debug = TRACE_RULE("type_specifier",TRACE_ENTER,(PPTREE)0);
#line 1736 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1736 "cplus.met"
#line 1736 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1736 "cplus.met"
#line 1736 "cplus.met"
    PPTREE ret = (PPTREE) 0,listParam = (PPTREE) 0,exp = (PPTREE) 0;
#line 1736 "cplus.met"
#line 1738 "cplus.met"
    if ( (ret=NQUICK_CALL(_Tak(type_specifier_without_param)(error_free), 148, cplus))== (PPTREE) -1 ) {
#line 1738 "cplus.met"
        MulFreeTree(4,_addlist1,exp,listParam,ret);
        PROG_EXIT(type_specifier_exit,"type_specifier")
#line 1738 "cplus.met"
    }
#line 1738 "cplus.met"
#line 1739 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFE,"<") && (tokenAhead = 0,CommTerm(),1)){
#line 1739 "cplus.met"
#line 1740 "cplus.met"
#line 1740 "cplus.met"
        _addlist1 = listParam ;
#line 1740 "cplus.met"
#line 1741 "cplus.met"
        do {
#line 1741 "cplus.met"
#line 1742 "cplus.met"
            if ((NPUSH_CALL_AFF_VERIF(exp = ,_Tak(additive_expression), 3, cplus)) || 
#line 1742 "cplus.met"
               (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 146, cplus))){
#line 1742 "cplus.met"
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                _addlist1 =AddList(_addlist1 ,exp );
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                if (listParam){
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1743 "cplus.met"
                } else {
#line 1743 "cplus.met"
#line 1743 "cplus.met"
                    listParam = _addlist1 ;
#line 1743 "cplus.met"
                }
#line 1743 "cplus.met"
            }
#line 1743 "cplus.met"
#line 1743 "cplus.met"
#line 1744 "cplus.met"
        } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 1744 "cplus.met"
#line 1745 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1745 "cplus.met"
        if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 1745 "cplus.met"
            MulFreeTree(4,_addlist1,exp,listParam,ret);
            TOKEN_EXIT(type_specifier_exit,">")
#line 1745 "cplus.met"
        } else {
#line 1745 "cplus.met"
            tokenAhead = 0 ;
#line 1745 "cplus.met"
        }
#line 1745 "cplus.met"
#line 1746 "cplus.met"
        {
#line 1746 "cplus.met"
            PPTREE _ptRes0=0;
#line 1746 "cplus.met"
            _ptRes0= MakeTree(PARAM_TYPE, 2);
#line 1746 "cplus.met"
            ReplaceTree(_ptRes0, 1, ret );
#line 1746 "cplus.met"
            ReplaceTree(_ptRes0, 2, listParam );
#line 1746 "cplus.met"
            ret=_ptRes0;
#line 1746 "cplus.met"
        }
#line 1746 "cplus.met"
#line 1746 "cplus.met"
#line 1746 "cplus.met"
    }
#line 1746 "cplus.met"
#line 1748 "cplus.met"
    {
#line 1748 "cplus.met"
        _retValue = ret ;
#line 1748 "cplus.met"
        goto type_specifier_ret;
#line 1748 "cplus.met"
        
#line 1748 "cplus.met"
    }
#line 1748 "cplus.met"
#line 1748 "cplus.met"
#line 1748 "cplus.met"

#line 1749 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1749 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1749 "cplus.met"
return((PPTREE) 0);
#line 1749 "cplus.met"

#line 1749 "cplus.met"
type_specifier_exit :
#line 1749 "cplus.met"

#line 1749 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_EXIT,(PPTREE)0);
#line 1749 "cplus.met"
    _funcLevel--;
#line 1749 "cplus.met"
    return((PPTREE) -1) ;
#line 1749 "cplus.met"

#line 1749 "cplus.met"
type_specifier_ret :
#line 1749 "cplus.met"
    
#line 1749 "cplus.met"
    _Debug = TRACE_RULE("type_specifier",TRACE_RETURN,_retValue);
#line 1749 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1749 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1749 "cplus.met"
    return _retValue ;
#line 1749 "cplus.met"
}
#line 1749 "cplus.met"

#line 1749 "cplus.met"
