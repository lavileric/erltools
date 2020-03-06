/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1035 "cplus.met"
PPTREE cplus::stat_if_dir ( int error_free)
#line 1035 "cplus.met"
{
#line 1035 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1035 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1035 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1035 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1035 "cplus.met"
    int _Debug = TRACE_RULE("stat_if_dir",TRACE_ENTER,(PPTREE)0);
#line 1035 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1035 "cplus.met"
#line 1035 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1035 "cplus.met"
#line 1035 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0;
#line 1035 "cplus.met"
#line 1037 "cplus.met"
    {
#line 1037 "cplus.met"
        keepCarriage = 1 ;
#line 1037 "cplus.met"
#line 1038 "cplus.met"
#line 1039 "cplus.met"
        {
#line 1039 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1039 "cplus.met"
            _ptRes0= MakeTree(IF_DIR, 3);
#line 1039 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1039 "cplus.met"
                MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1039 "cplus.met"
            }
#line 1039 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1039 "cplus.met"
            retTree=_ptRes0;
#line 1039 "cplus.met"
        }
#line 1039 "cplus.met"
#line 1040 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1040 "cplus.met"
        if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1040 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            TOKEN_EXIT(stat_if_dir_exit,"CARRIAGE_RETURN")
#line 1040 "cplus.met"
        } else {
#line 1040 "cplus.met"
            tokenAhead = 0 ;
#line 1040 "cplus.met"
        }
#line 1040 "cplus.met"
#line 1040 "cplus.met"
        keepCarriage =  _oldkeepCarriage;
#line 1040 "cplus.met"
    }
#line 1040 "cplus.met"
#line 1040 "cplus.met"
    _addlist1 = list ;
#line 1040 "cplus.met"
#line 1042 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1042 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1042 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1042 "cplus.met"
#line 1043 "cplus.met"
#line 1043 "cplus.met"
        {
#line 1043 "cplus.met"
            PPTREE _ptTree0=0;
#line 1043 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1043 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1043 "cplus.met"
            }
#line 1043 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1043 "cplus.met"
        }
#line 1043 "cplus.met"
#line 1043 "cplus.met"
        if (list){
#line 1043 "cplus.met"
#line 1043 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1043 "cplus.met"
        } else {
#line 1043 "cplus.met"
#line 1043 "cplus.met"
            list = _addlist1 ;
#line 1043 "cplus.met"
        }
#line 1043 "cplus.met"
    } 
#line 1043 "cplus.met"
#line 1044 "cplus.met"
    {
#line 1044 "cplus.met"
        PPTREE _ptTree0=0;
#line 1044 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1044 "cplus.met"
            MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
            PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1044 "cplus.met"
        }
#line 1044 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1044 "cplus.met"
    }
#line 1044 "cplus.met"
#line 1045 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1045 "cplus.met"
#line 1046 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1046 "cplus.met"
    switch( lexEl.Value) {
#line 1046 "cplus.met"
#line 1047 "cplus.met"
        case META : 
#line 1047 "cplus.met"
        case ELSE_DIR : 
#line 1047 "cplus.met"
            tokenAhead = 0 ;
#line 1047 "cplus.met"
            CommTerm();
#line 1047 "cplus.met"
#line 1048 "cplus.met"
#line 1048 "cplus.met"
            _addlist2 = list2 ;
#line 1048 "cplus.met"
#line 1049 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1049 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1049 "cplus.met"
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                {
#line 1050 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1050 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus))== (PPTREE) -1 ) {
#line 1050 "cplus.met"
                        MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1050 "cplus.met"
                    }
#line 1050 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1050 "cplus.met"
                }
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                if (list2){
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1050 "cplus.met"
                } else {
#line 1050 "cplus.met"
#line 1050 "cplus.met"
                    list2 = _addlist2 ;
#line 1050 "cplus.met"
                }
#line 1050 "cplus.met"
            } 
#line 1050 "cplus.met"
#line 1051 "cplus.met"
            {
#line 1051 "cplus.met"
                PPTREE _ptTree0=0;
#line 1051 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 103, cplus))== (PPTREE) -1 ) {
#line 1051 "cplus.met"
                    MulFreeTree(6,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                    PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1051 "cplus.met"
                }
#line 1051 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1051 "cplus.met"
            }
#line 1051 "cplus.met"
#line 1052 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1052 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1052 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
                TOKEN_EXIT(stat_if_dir_exit,"ENDIF_DIR")
#line 1052 "cplus.met"
            } else {
#line 1052 "cplus.met"
                tokenAhead = 0 ;
#line 1052 "cplus.met"
            }
#line 1052 "cplus.met"
#line 1053 "cplus.met"
            {
#line 1053 "cplus.met"
                PPTREE _ptTree0=0;
#line 1053 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1053 "cplus.met"
                _retValue =_ptTree0;
#line 1053 "cplus.met"
                goto stat_if_dir_ret;
#line 1053 "cplus.met"
            }
#line 1053 "cplus.met"
#line 1053 "cplus.met"
            break;
#line 1053 "cplus.met"
#line 1055 "cplus.met"
        case ELIF_DIR : 
#line 1055 "cplus.met"
            tokenAhead = 0 ;
#line 1055 "cplus.met"
            CommTerm();
#line 1055 "cplus.met"
#line 1055 "cplus.met"
            {
#line 1055 "cplus.met"
                PPTREE _ptTree0=0;
#line 1055 "cplus.met"
                {
#line 1055 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1055 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 134, cplus))== (PPTREE) -1 ) {
#line 1055 "cplus.met"
                        MulFreeTree(7,_ptTree1,_ptTree0,_addlist1,_addlist2,list,list2,retTree);
                        PROG_EXIT(stat_if_dir_exit,"stat_if_dir")
#line 1055 "cplus.met"
                    }
#line 1055 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1055 "cplus.met"
                }
#line 1055 "cplus.met"
                _retValue =_ptTree0;
#line 1055 "cplus.met"
                goto stat_if_dir_ret;
#line 1055 "cplus.met"
            }
#line 1055 "cplus.met"
            break;
#line 1055 "cplus.met"
#line 1056 "cplus.met"
        case ENDIF_DIR : 
#line 1056 "cplus.met"
            tokenAhead = 0 ;
#line 1056 "cplus.met"
            CommTerm();
#line 1056 "cplus.met"
#line 1056 "cplus.met"
            {
#line 1056 "cplus.met"
                _retValue = retTree ;
#line 1056 "cplus.met"
                goto stat_if_dir_ret;
#line 1056 "cplus.met"
                
#line 1056 "cplus.met"
            }
#line 1056 "cplus.met"
            break;
#line 1056 "cplus.met"
        default :
#line 1056 "cplus.met"
            MulFreeTree(5,_addlist1,_addlist2,list,list2,retTree);
            CASE_EXIT(stat_if_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1056 "cplus.met"
            break;
#line 1056 "cplus.met"
    }
#line 1056 "cplus.met"
#line 1056 "cplus.met"
#line 1057 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1057 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1057 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1057 "cplus.met"
return((PPTREE) 0);
#line 1057 "cplus.met"

#line 1057 "cplus.met"
stat_if_dir_exit :
#line 1057 "cplus.met"

#line 1057 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_EXIT,(PPTREE)0);
#line 1057 "cplus.met"
    _funcLevel--;
#line 1057 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1057 "cplus.met"
    return((PPTREE) -1) ;
#line 1057 "cplus.met"

#line 1057 "cplus.met"
stat_if_dir_ret :
#line 1057 "cplus.met"
    
#line 1057 "cplus.met"
    _Debug = TRACE_RULE("stat_if_dir",TRACE_RETURN,_retValue);
#line 1057 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1057 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1057 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1057 "cplus.met"
    return _retValue ;
#line 1057 "cplus.met"
}
#line 1057 "cplus.met"

#line 1057 "cplus.met"
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
            if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree0=NQUICK_CALL(_Tak(stat_all)(error_free), 131, cplus))== (PPTREE) -1 ) {
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
                    if ( (_ptTree1=NQUICK_CALL(_Tak(stat_if_dir)(error_free), 134, cplus))== (PPTREE) -1 ) {
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
#line 3308 "cplus.met"
PPTREE cplus::statement ( int error_free)
#line 3308 "cplus.met"
{
#line 3308 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3308 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3308 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3308 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3308 "cplus.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 3308 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3308 "cplus.met"
#line 3308 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3308 "cplus.met"
#line 3310 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3310 "cplus.met"
    switch( lexEl.Value) {
#line 3310 "cplus.met"
#line 3311 "cplus.met"
        case BREAK : 
#line 3311 "cplus.met"
            tokenAhead = 0 ;
#line 3311 "cplus.met"
            CommTerm();
#line 3311 "cplus.met"
#line 3312 "cplus.met"
#line 3313 "cplus.met"
            {
#line 3313 "cplus.met"
                PPTREE _ptRes0=0;
#line 3313 "cplus.met"
                _ptRes0= MakeTree(BREAK, 1);
#line 3313 "cplus.met"
                statTree=_ptRes0;
#line 3313 "cplus.met"
            }
#line 3313 "cplus.met"
#line 3314 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3314 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3314 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3314 "cplus.met"
            } else {
#line 3314 "cplus.met"
                tokenAhead = 0 ;
#line 3314 "cplus.met"
            }
#line 3314 "cplus.met"
#line 3314 "cplus.met"
            break;
#line 3314 "cplus.met"
#line 3316 "cplus.met"
        case CONTINUE : 
#line 3316 "cplus.met"
            tokenAhead = 0 ;
#line 3316 "cplus.met"
            CommTerm();
#line 3316 "cplus.met"
#line 3317 "cplus.met"
#line 3318 "cplus.met"
            {
#line 3318 "cplus.met"
                PPTREE _ptRes0=0;
#line 3318 "cplus.met"
                _ptRes0= MakeTree(CONTINUE, 1);
#line 3318 "cplus.met"
                statTree=_ptRes0;
#line 3318 "cplus.met"
            }
#line 3318 "cplus.met"
#line 3319 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3319 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3319 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3319 "cplus.met"
            } else {
#line 3319 "cplus.met"
                tokenAhead = 0 ;
#line 3319 "cplus.met"
            }
#line 3319 "cplus.met"
#line 3319 "cplus.met"
            break;
#line 3319 "cplus.met"
#line 3321 "cplus.met"
        case DO : 
#line 3321 "cplus.met"
            tokenAhead = 0 ;
#line 3321 "cplus.met"
            CommTerm();
#line 3321 "cplus.met"
#line 3322 "cplus.met"
#line 3323 "cplus.met"
            {
#line 3323 "cplus.met"
                switchContext = 0 ;
#line 3323 "cplus.met"
#line 3324 "cplus.met"
                {
#line 3324 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3324 "cplus.met"
                    _ptRes0= MakeTree(DO, 2);
#line 3324 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3324 "cplus.met"
                        MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3324 "cplus.met"
                    }
#line 3324 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3324 "cplus.met"
                    statTree=_ptRes0;
#line 3324 "cplus.met"
                }
#line 3324 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3324 "cplus.met"
            }
#line 3324 "cplus.met"
#line 3325 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3325 "cplus.met"
            if (  !SEE_TOKEN( WHILE,"while") || !(CommTerm(),1)) {
#line 3325 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"while")
#line 3325 "cplus.met"
            } else {
#line 3325 "cplus.met"
                tokenAhead = 0 ;
#line 3325 "cplus.met"
            }
#line 3325 "cplus.met"
#line 3326 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3326 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3326 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3326 "cplus.met"
            } else {
#line 3326 "cplus.met"
                tokenAhead = 0 ;
#line 3326 "cplus.met"
            }
#line 3326 "cplus.met"
#line 3327 "cplus.met"
            {
#line 3327 "cplus.met"
                PPTREE _ptTree0=0;
#line 3327 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3327 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3327 "cplus.met"
                }
#line 3327 "cplus.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 3327 "cplus.met"
            }
#line 3327 "cplus.met"
#line 3328 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3328 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3328 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3328 "cplus.met"
            } else {
#line 3328 "cplus.met"
                tokenAhead = 0 ;
#line 3328 "cplus.met"
            }
#line 3328 "cplus.met"
#line 3329 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3329 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3329 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3329 "cplus.met"
            } else {
#line 3329 "cplus.met"
                tokenAhead = 0 ;
#line 3329 "cplus.met"
            }
#line 3329 "cplus.met"
#line 3329 "cplus.met"
            break;
#line 3329 "cplus.met"
#line 3331 "cplus.met"
        case AOUV : 
#line 3331 "cplus.met"
#line 3331 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 3331 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3331 "cplus.met"
            }
#line 3331 "cplus.met"
            break;
#line 3331 "cplus.met"
#line 3332 "cplus.met"
        case FOR : 
#line 3332 "cplus.met"
            tokenAhead = 0 ;
#line 3332 "cplus.met"
            CommTerm();
#line 3332 "cplus.met"
#line 3332 "cplus.met"
            {
#line 3332 "cplus.met"
                PPTREE _ptTree0=0;
#line 3332 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(for_statement)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 3332 "cplus.met"
                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3332 "cplus.met"
                }
#line 3332 "cplus.met"
                _retValue =_ptTree0;
#line 3332 "cplus.met"
                goto statement_ret;
#line 3332 "cplus.met"
            }
#line 3332 "cplus.met"
            break;
#line 3332 "cplus.met"
#line 3333 "cplus.met"
        case GOTO : 
#line 3333 "cplus.met"
            tokenAhead = 0 ;
#line 3333 "cplus.met"
            CommTerm();
#line 3333 "cplus.met"
#line 3334 "cplus.met"
#line 3335 "cplus.met"
            {
#line 3335 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3335 "cplus.met"
                _ptRes0= MakeTree(GOTO, 1);
#line 3335 "cplus.met"
                {
#line 3335 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3335 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3335 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3335 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3335 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3335 "cplus.met"
                    } else {
#line 3335 "cplus.met"
                        tokenAhead = 0 ;
#line 3335 "cplus.met"
                    }
#line 3335 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3335 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3335 "cplus.met"
                }
#line 3335 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3335 "cplus.met"
                statTree=_ptRes0;
#line 3335 "cplus.met"
            }
#line 3335 "cplus.met"
#line 3336 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3336 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3336 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3336 "cplus.met"
            } else {
#line 3336 "cplus.met"
                tokenAhead = 0 ;
#line 3336 "cplus.met"
            }
#line 3336 "cplus.met"
#line 3336 "cplus.met"
            break;
#line 3336 "cplus.met"
#line 3338 "cplus.met"
        case IF : 
#line 3338 "cplus.met"
            tokenAhead = 0 ;
#line 3338 "cplus.met"
            CommTerm();
#line 3338 "cplus.met"
#line 3339 "cplus.met"
#line 3340 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3340 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3340 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3340 "cplus.met"
            } else {
#line 3340 "cplus.met"
                tokenAhead = 0 ;
#line 3340 "cplus.met"
            }
#line 3340 "cplus.met"
#line 3341 "cplus.met"
            {
#line 3341 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3341 "cplus.met"
                _ptRes0= MakeTree(IF, 3);
#line 3341 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3341 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3341 "cplus.met"
                }
#line 3341 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3341 "cplus.met"
                statTree=_ptRes0;
#line 3341 "cplus.met"
            }
#line 3341 "cplus.met"
#line 3342 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3342 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3342 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3342 "cplus.met"
            } else {
#line 3342 "cplus.met"
                tokenAhead = 0 ;
#line 3342 "cplus.met"
            }
#line 3342 "cplus.met"
#line 3343 "cplus.met"
            {
#line 3343 "cplus.met"
                switchContext = 0 ;
#line 3343 "cplus.met"
#line 3344 "cplus.met"
                {
#line 3344 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3344 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3344 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3344 "cplus.met"
                    }
#line 3344 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3344 "cplus.met"
                }
#line 3344 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3344 "cplus.met"
            }
#line 3344 "cplus.met"
#line 3345 "cplus.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ELSE,"else") && (tokenAhead = 0,CommTerm(),1)){
#line 3345 "cplus.met"
#line 3346 "cplus.met"
                {
#line 3346 "cplus.met"
                    switchContext = 0 ;
#line 3346 "cplus.met"
#line 3347 "cplus.met"
                    {
#line 3347 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3347 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3347 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3347 "cplus.met"
                        }
#line 3347 "cplus.met"
                        ReplaceTree(statTree , 3 , _ptTree0);
#line 3347 "cplus.met"
                    }
#line 3347 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3347 "cplus.met"
                }
#line 3347 "cplus.met"
            }
#line 3347 "cplus.met"
#line 3347 "cplus.met"
            break;
#line 3347 "cplus.met"
#line 3349 "cplus.met"
        case PVIR : 
#line 3349 "cplus.met"
            tokenAhead = 0 ;
#line 3349 "cplus.met"
            CommTerm();
#line 3349 "cplus.met"
#line 3349 "cplus.met"
            {
#line 3349 "cplus.met"
                PPTREE _ptRes0=0;
#line 3349 "cplus.met"
                _ptRes0= MakeTree(STAT_VOID, 0);
#line 3349 "cplus.met"
                statTree=_ptRes0;
#line 3349 "cplus.met"
            }
#line 3349 "cplus.met"
            break;
#line 3349 "cplus.met"
#line 3350 "cplus.met"
        case RETURN : 
#line 3350 "cplus.met"
            tokenAhead = 0 ;
#line 3350 "cplus.met"
            CommTerm();
#line 3350 "cplus.met"
#line 3351 "cplus.met"
#line 3352 "cplus.met"
            {
#line 3352 "cplus.met"
                PPTREE _ptRes0=0;
#line 3352 "cplus.met"
                _ptRes0= MakeTree(RETURN, 1);
#line 3352 "cplus.met"
                statTree=_ptRes0;
#line 3352 "cplus.met"
            }
#line 3352 "cplus.met"
#line 3353 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 62, cplus)){
#line 3353 "cplus.met"
#line 3354 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3354 "cplus.met"
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
        case SWITCH : 
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
                _ptRes0= MakeTree(SWITCH, 2);
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
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_list)(error_free), 140, cplus))== (PPTREE) -1 ) {
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
#line 3363 "cplus.met"
            break;
#line 3363 "cplus.met"
#line 3365 "cplus.met"
        case WHILE : 
#line 3365 "cplus.met"
            tokenAhead = 0 ;
#line 3365 "cplus.met"
            CommTerm();
#line 3365 "cplus.met"
#line 3366 "cplus.met"
#line 3367 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3367 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3367 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3367 "cplus.met"
            } else {
#line 3367 "cplus.met"
                tokenAhead = 0 ;
#line 3367 "cplus.met"
            }
#line 3367 "cplus.met"
#line 3368 "cplus.met"
            {
#line 3368 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3368 "cplus.met"
                _ptRes0= MakeTree(WHILE, 2);
#line 3368 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3368 "cplus.met"
                    MulFreeTree(5,_ptRes0,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3368 "cplus.met"
                }
#line 3368 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3368 "cplus.met"
                statTree=_ptRes0;
#line 3368 "cplus.met"
            }
#line 3368 "cplus.met"
#line 3369 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3369 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3369 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3369 "cplus.met"
            } else {
#line 3369 "cplus.met"
                tokenAhead = 0 ;
#line 3369 "cplus.met"
            }
#line 3369 "cplus.met"
#line 3370 "cplus.met"
            {
#line 3370 "cplus.met"
                switchContext = 0 ;
#line 3370 "cplus.met"
#line 3371 "cplus.met"
                {
#line 3371 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3371 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3371 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3371 "cplus.met"
                    }
#line 3371 "cplus.met"
                    ReplaceTree(statTree , 2 , _ptTree0);
#line 3371 "cplus.met"
                }
#line 3371 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3371 "cplus.met"
            }
#line 3371 "cplus.met"
#line 3371 "cplus.met"
            break;
#line 3371 "cplus.met"
#line 3373 "cplus.met"
        case FORALLSONS : 
#line 3373 "cplus.met"
            tokenAhead = 0 ;
#line 3373 "cplus.met"
            CommTerm();
#line 3373 "cplus.met"
#line 3374 "cplus.met"
#line 3375 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3375 "cplus.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3375 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 3375 "cplus.met"
            } else {
#line 3375 "cplus.met"
                tokenAhead = 0 ;
#line 3375 "cplus.met"
            }
#line 3375 "cplus.met"
#line 3376 "cplus.met"
            {
#line 3376 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3376 "cplus.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 3376 "cplus.met"
                {
#line 3376 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 3376 "cplus.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 3376 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3376 "cplus.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3376 "cplus.met"
                        MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 3376 "cplus.met"
                    } else {
#line 3376 "cplus.met"
                        tokenAhead = 0 ;
#line 3376 "cplus.met"
                    }
#line 3376 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3376 "cplus.met"
                    _ptTree0=_ptRes1;
#line 3376 "cplus.met"
                }
#line 3376 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3376 "cplus.met"
                statTree=_ptRes0;
#line 3376 "cplus.met"
            }
#line 3376 "cplus.met"
#line 3377 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3377 "cplus.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 3377 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 3377 "cplus.met"
            } else {
#line 3377 "cplus.met"
                tokenAhead = 0 ;
#line 3377 "cplus.met"
            }
#line 3377 "cplus.met"
#line 3378 "cplus.met"
            {
#line 3378 "cplus.met"
                switchContext = 0 ;
#line 3378 "cplus.met"
#line 3379 "cplus.met"
                if (! (NPUSH_CALL_AFF_VERIF(stat = ,_Tak(statement), 136, cplus))){
#line 3379 "cplus.met"
#line 3380 "cplus.met"
                    if ( (stat=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3380 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3380 "cplus.met"
                    }
#line 3380 "cplus.met"
                }
#line 3380 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3380 "cplus.met"
            }
#line 3380 "cplus.met"
#line 3381 "cplus.met"
            ReplaceTree(statTree ,2 ,stat );
#line 3381 "cplus.met"
#line 3382 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3382 "cplus.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3382 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 3382 "cplus.met"
            } else {
#line 3382 "cplus.met"
                tokenAhead = 0 ;
#line 3382 "cplus.met"
            }
#line 3382 "cplus.met"
#line 3382 "cplus.met"
            break;
#line 3382 "cplus.met"
#line 3384 "cplus.met"
        case THROW : 
#line 3384 "cplus.met"
            tokenAhead = 0 ;
#line 3384 "cplus.met"
            CommTerm();
#line 3384 "cplus.met"
#line 3385 "cplus.met"
#line 3386 "cplus.met"
            {
#line 3386 "cplus.met"
                PPTREE _ptRes0=0;
#line 3386 "cplus.met"
                _ptRes0= MakeTree(THROW_ANSI, 1);
#line 3386 "cplus.met"
                statTree=_ptRes0;
#line 3386 "cplus.met"
            }
#line 3386 "cplus.met"
#line 3387 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 62, cplus)){
#line 3387 "cplus.met"
#line 3388 "cplus.met"
                ReplaceTree(statTree ,1 ,opt );
#line 3388 "cplus.met"
#line 3388 "cplus.met"
            }
#line 3388 "cplus.met"
#line 3389 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3389 "cplus.met"
            if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3389 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                TOKEN_EXIT(statement_exit,";")
#line 3389 "cplus.met"
            } else {
#line 3389 "cplus.met"
                tokenAhead = 0 ;
#line 3389 "cplus.met"
            }
#line 3389 "cplus.met"
#line 3389 "cplus.met"
            break;
#line 3389 "cplus.met"
#line 3391 "cplus.met"
        case TRY : 
#line 3391 "cplus.met"
#line 3391 "cplus.met"
            if ( (statTree=NQUICK_CALL(_Tak(exception_ansi)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 3391 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 3391 "cplus.met"
            }
#line 3391 "cplus.met"
            break;
#line 3391 "cplus.met"
#line 3392 "cplus.met"
        case META : 
#line 3392 "cplus.met"
#line 3393 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(label_beg), 87, cplus)){
#line 3393 "cplus.met"
#line 3394 "cplus.met"
#line 3395 "cplus.met"
                {
#line 3395 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 3395 "cplus.met"
                    _ptRes0= MakeTree(LABEL, 2);
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
                if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3396 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,":")
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
                    {
#line 3398 "cplus.met"
                        PPTREE _ptTree0=0;
#line 3398 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3398 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3398 "cplus.met"
                        }
#line 3398 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3398 "cplus.met"
                    }
#line 3398 "cplus.met"
                    switchContext =  _oldswitchContext;
#line 3398 "cplus.met"
                }
#line 3398 "cplus.met"
#line 3398 "cplus.met"
#line 3398 "cplus.met"
            } else {
#line 3398 "cplus.met"
#line 3401 "cplus.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus)){
#line 3401 "cplus.met"
#line 3403 "cplus.met"
                    
#line 3403 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    LEX_EXIT ("",0);
#line 3403 "cplus.met"
                    goto statement_exit;
#line 3403 "cplus.met"
#line 3404 "cplus.met"
                } else {
#line 3404 "cplus.met"
#line 3406 "cplus.met"
#line 3407 "cplus.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3407 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
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
                }
#line 3408 "cplus.met"
            }
#line 3408 "cplus.met"
            break;
#line 3408 "cplus.met"
#line 3412 "cplus.met"
        case CASE : 
#line 3412 "cplus.met"
#line 3413 "cplus.met"
            if (! (switchContext)){
#line 3413 "cplus.met"
#line 3414 "cplus.met"
                
#line 3414 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3414 "cplus.met"
                goto statement_exit;
#line 3414 "cplus.met"
#line 3414 "cplus.met"
            } else {
#line 3414 "cplus.met"
#line 3416 "cplus.met"
                {
#line 3416 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3416 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 3416 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3416 "cplus.met"
                    }
#line 3416 "cplus.met"
                    _retValue =_ptTree0;
#line 3416 "cplus.met"
                    goto statement_ret;
#line 3416 "cplus.met"
                }
#line 3416 "cplus.met"
            }
#line 3416 "cplus.met"
            break;
#line 3416 "cplus.met"
#line 3417 "cplus.met"
        case DEFAULT : 
#line 3417 "cplus.met"
#line 3418 "cplus.met"
            if (! (switchContext)){
#line 3418 "cplus.met"
#line 3419 "cplus.met"
                
#line 3419 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3419 "cplus.met"
                goto statement_exit;
#line 3419 "cplus.met"
#line 3419 "cplus.met"
            } else {
#line 3419 "cplus.met"
#line 3421 "cplus.met"
                {
#line 3421 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3421 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(switch_elem)(error_free), 139, cplus))== (PPTREE) -1 ) {
#line 3421 "cplus.met"
                        MulFreeTree(4,_ptTree0,opt,stat,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 3421 "cplus.met"
                    }
#line 3421 "cplus.met"
                    _retValue =_ptTree0;
#line 3421 "cplus.met"
                    goto statement_ret;
#line 3421 "cplus.met"
                }
#line 3421 "cplus.met"
            }
#line 3421 "cplus.met"
            break;
#line 3421 "cplus.met"
#line 3422 "cplus.met"
        case IDENT : 
#line 3422 "cplus.met"
#line 3423 "cplus.met"
            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3423 "cplus.met"
            switch( lexEl.Value) {
#line 3423 "cplus.met"
#line 3424 "cplus.met"
                case META : 
#line 3424 "cplus.met"
                case FUNC_SPEC : 
#line 3424 "cplus.met"
#line 3425 "cplus.met"
#line 3426 "cplus.met"
                    {
#line 3426 "cplus.met"
                        PPTREE _ptTree0=0,_ptRes0=0;
#line 3426 "cplus.met"
                        _ptRes0= MakeTree(FUNC_SPEC, 2);
#line 3426 "cplus.met"
                        {
#line 3426 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 3426 "cplus.met"
                            _ptRes1= MakeTree(IDENT, 1);
#line 3426 "cplus.met"
                            (tokenAhead == 14|| (the_exit(),TRACE_LEX(1)));
#line 3426 "cplus.met"
                            if ( ! TERM_OR_META(FUNC_SPEC,"FUNC_SPEC") || !(BUILD_TERM_META(_ptTree1))) {
#line 3426 "cplus.met"
                                MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                TOKEN_EXIT(statement_exit,"FUNC_SPEC")
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
                    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3427 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,"(")
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
                        PPTREE _ptTree0=0;
#line 3428 "cplus.met"
                        if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3428 "cplus.met"
                            MulFreeTree(4,_ptTree0,opt,stat,statTree);
                            PROG_EXIT(statement_exit,"statement")
#line 3428 "cplus.met"
                        }
#line 3428 "cplus.met"
                        ReplaceTree(statTree , 2 , _ptTree0);
#line 3428 "cplus.met"
                    }
#line 3428 "cplus.met"
#line 3429 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3429 "cplus.met"
                    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3429 "cplus.met"
                        MulFreeTree(3,opt,stat,statTree);
                        TOKEN_EXIT(statement_exit,")")
#line 3429 "cplus.met"
                    } else {
#line 3429 "cplus.met"
                        tokenAhead = 0 ;
#line 3429 "cplus.met"
                    }
#line 3429 "cplus.met"
#line 3429 "cplus.met"
                    break;
#line 3429 "cplus.met"
#line 3434 "cplus.met"
                default : 
#line 3434 "cplus.met"
#line 3432 "cplus.met"
                    if (NPUSH_CALL_VERIF(_Tak(label_beg), 87, cplus)){
#line 3432 "cplus.met"
#line 3433 "cplus.met"
#line 3434 "cplus.met"
                        {
#line 3434 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 3434 "cplus.met"
                            _ptRes0= MakeTree(LABEL, 2);
#line 3434 "cplus.met"
                            {
#line 3434 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 3434 "cplus.met"
                                _ptRes1= MakeTree(IDENT, 1);
#line 3434 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3434 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 3434 "cplus.met"
                                    MulFreeTree(7,_ptRes1,_ptTree1,_ptRes0,_ptTree0,opt,stat,statTree);
                                    TOKEN_EXIT(statement_exit,"IDENT")
#line 3434 "cplus.met"
                                } else {
#line 3434 "cplus.met"
                                    tokenAhead = 0 ;
#line 3434 "cplus.met"
                                }
#line 3434 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 3434 "cplus.met"
                                _ptTree0=_ptRes1;
#line 3434 "cplus.met"
                            }
#line 3434 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3434 "cplus.met"
                            statTree=_ptRes0;
#line 3434 "cplus.met"
                        }
#line 3434 "cplus.met"
#line 3435 "cplus.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3435 "cplus.met"
                        if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3435 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            TOKEN_EXIT(statement_exit,":")
#line 3435 "cplus.met"
                        } else {
#line 3435 "cplus.met"
                            tokenAhead = 0 ;
#line 3435 "cplus.met"
                        }
#line 3435 "cplus.met"
#line 3436 "cplus.met"
                        {
#line 3436 "cplus.met"
                            switchContext = 0 ;
#line 3436 "cplus.met"
#line 3437 "cplus.met"
                            {
#line 3437 "cplus.met"
                                PPTREE _ptTree0=0;
#line 3437 "cplus.met"
                                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 136, cplus))== (PPTREE) -1 ) {
#line 3437 "cplus.met"
                                    MulFreeTree(4,_ptTree0,opt,stat,statTree);
                                    PROG_EXIT(statement_exit,"statement")
#line 3437 "cplus.met"
                                }
#line 3437 "cplus.met"
                                ReplaceTree(statTree , 2 , _ptTree0);
#line 3437 "cplus.met"
                            }
#line 3437 "cplus.met"
                            switchContext =  _oldswitchContext;
#line 3437 "cplus.met"
                        }
#line 3437 "cplus.met"
#line 3437 "cplus.met"
#line 3437 "cplus.met"
                    } else {
#line 3437 "cplus.met"
#line 3440 "cplus.met"
                        if (NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus)){
#line 3440 "cplus.met"
#line 3443 "cplus.met"
                            
#line 3443 "cplus.met"
                            MulFreeTree(3,opt,stat,statTree);
                            LEX_EXIT ("",0);
#line 3443 "cplus.met"
                            goto statement_exit;
#line 3443 "cplus.met"
#line 3444 "cplus.met"
                        } else {
#line 3444 "cplus.met"
#line 3446 "cplus.met"
#line 3447 "cplus.met"
                            if ( (statTree=NQUICK_CALL(_Tak(statement_expression)(error_free), 137, cplus))== (PPTREE) -1 ) {
#line 3447 "cplus.met"
                                MulFreeTree(3,opt,stat,statTree);
                                PROG_EXIT(statement_exit,"statement")
#line 3447 "cplus.met"
                            }
#line 3447 "cplus.met"
#line 3447 "cplus.met"
                        }
#line 3447 "cplus.met"
                    }
#line 3447 "cplus.met"
                    break;
#line 3447 "cplus.met"
            }
#line 3447 "cplus.met"
            break;
#line 3447 "cplus.met"
#line 3453 "cplus.met"
        default : 
#line 3453 "cplus.met"
#line 3451 "cplus.met"
#line 3452 "cplus.met"
            if (NPUSH_CALL_VERIF(_Tak(ident_mul), 78, cplus)){
#line 3452 "cplus.met"
#line 3453 "cplus.met"
                
#line 3453 "cplus.met"
                MulFreeTree(3,opt,stat,statTree);
                LEX_EXIT ("",0);
#line 3453 "cplus.met"
                goto statement_exit;
#line 3453 "cplus.met"
#line 3453 "cplus.met"
            } else {
#line 3453 "cplus.met"
#line 3455 "cplus.met"
#line 3456 "cplus.met"
                if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3456 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 3456 "cplus.met"
                }
#line 3456 "cplus.met"
#line 3457 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3457 "cplus.met"
                if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3457 "cplus.met"
                    MulFreeTree(3,opt,stat,statTree);
                    TOKEN_EXIT(statement_exit,";")
#line 3457 "cplus.met"
                } else {
#line 3457 "cplus.met"
                    tokenAhead = 0 ;
#line 3457 "cplus.met"
                }
#line 3457 "cplus.met"
#line 3457 "cplus.met"
            }
#line 3457 "cplus.met"
#line 3457 "cplus.met"
            break;
#line 3457 "cplus.met"
    }
#line 3457 "cplus.met"
#line 3461 "cplus.met"
    {
#line 3461 "cplus.met"
        _retValue = statTree ;
#line 3461 "cplus.met"
        goto statement_ret;
#line 3461 "cplus.met"
        
#line 3461 "cplus.met"
    }
#line 3461 "cplus.met"
#line 3461 "cplus.met"
#line 3461 "cplus.met"

#line 3462 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3462 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3462 "cplus.met"
switchContext =  _oldswitchContext;
#line 3462 "cplus.met"
return((PPTREE) 0);
#line 3462 "cplus.met"

#line 3462 "cplus.met"
statement_exit :
#line 3462 "cplus.met"

#line 3462 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 3462 "cplus.met"
    _funcLevel--;
#line 3462 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3462 "cplus.met"
    return((PPTREE) -1) ;
#line 3462 "cplus.met"

#line 3462 "cplus.met"
statement_ret :
#line 3462 "cplus.met"
    
#line 3462 "cplus.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 3462 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3462 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3462 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3462 "cplus.met"
    return _retValue ;
#line 3462 "cplus.met"
}
#line 3462 "cplus.met"

#line 3462 "cplus.met"
#line 3301 "cplus.met"
PPTREE cplus::statement_expression ( int error_free)
#line 3301 "cplus.met"
{
#line 3301 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3301 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3301 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3301 "cplus.met"
    int _Debug = TRACE_RULE("statement_expression",TRACE_ENTER,(PPTREE)0);
#line 3301 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3301 "cplus.met"
#line 3301 "cplus.met"
    PPTREE statTree = (PPTREE) 0;
#line 3301 "cplus.met"
#line 3303 "cplus.met"
    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3303 "cplus.met"
        MulFreeTree(1,statTree);
        PROG_EXIT(statement_expression_exit,"statement_expression")
#line 3303 "cplus.met"
    }
#line 3303 "cplus.met"
#line 3304 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3304 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3304 "cplus.met"
        MulFreeTree(1,statTree);
        TOKEN_EXIT(statement_expression_exit,";")
#line 3304 "cplus.met"
    } else {
#line 3304 "cplus.met"
        tokenAhead = 0 ;
#line 3304 "cplus.met"
    }
#line 3304 "cplus.met"
#line 3305 "cplus.met"
    {
#line 3305 "cplus.met"
        _retValue = statTree ;
#line 3305 "cplus.met"
        goto statement_expression_ret;
#line 3305 "cplus.met"
        
#line 3305 "cplus.met"
    }
#line 3305 "cplus.met"
#line 3305 "cplus.met"
#line 3305 "cplus.met"

#line 3306 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3306 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3306 "cplus.met"
return((PPTREE) 0);
#line 3306 "cplus.met"

#line 3306 "cplus.met"
statement_expression_exit :
#line 3306 "cplus.met"

#line 3306 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_EXIT,(PPTREE)0);
#line 3306 "cplus.met"
    _funcLevel--;
#line 3306 "cplus.met"
    return((PPTREE) -1) ;
#line 3306 "cplus.met"

#line 3306 "cplus.met"
statement_expression_ret :
#line 3306 "cplus.met"
    
#line 3306 "cplus.met"
    _Debug = TRACE_RULE("statement_expression",TRACE_RETURN,_retValue);
#line 3306 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3306 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3306 "cplus.met"
    return _retValue ;
#line 3306 "cplus.met"
}
#line 3306 "cplus.met"

#line 3306 "cplus.met"
#line 2895 "cplus.met"
PPTREE cplus::string_list ( int error_free)
#line 2895 "cplus.met"
{
#line 2895 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2895 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2895 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2895 "cplus.met"
    int _Debug = TRACE_RULE("string_list",TRACE_ENTER,(PPTREE)0);
#line 2895 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2895 "cplus.met"
#line 2895 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2895 "cplus.met"
#line 2895 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2895 "cplus.met"
#line 2897 "cplus.met"
    {
#line 2897 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2897 "cplus.met"
        _ptRes0= MakeTree(STRING, 1);
#line 2897 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2897 "cplus.met"
        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree0))) {
#line 2897 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            TOKEN_EXIT(string_list_exit,"STRING")
#line 2897 "cplus.met"
        } else {
#line 2897 "cplus.met"
            tokenAhead = 0 ;
#line 2897 "cplus.met"
        }
#line 2897 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2897 "cplus.met"
        retTree=_ptRes0;
#line 2897 "cplus.met"
    }
#line 2897 "cplus.met"
#line 2898 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")){
#line 2898 "cplus.met"
#line 2899 "cplus.met"
#line 2900 "cplus.met"
        list =AddList(list ,retTree );
#line 2900 "cplus.met"
#line 2900 "cplus.met"
        _addlist1 = list ;
#line 2900 "cplus.met"
#line 2901 "cplus.met"
        while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( STRING,"STRING")) { 
#line 2901 "cplus.met"
#line 2902 "cplus.met"
#line 2902 "cplus.met"
            {
#line 2902 "cplus.met"
                PPTREE _ptTree0=0;
#line 2902 "cplus.met"
                {
#line 2902 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2902 "cplus.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 2902 "cplus.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2902 "cplus.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 2902 "cplus.met"
                        MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,_addlist1,list,retTree);
                        TOKEN_EXIT(string_list_exit,"STRING")
#line 2902 "cplus.met"
                    } else {
#line 2902 "cplus.met"
                        tokenAhead = 0 ;
#line 2902 "cplus.met"
                    }
#line 2902 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2902 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2902 "cplus.met"
                }
#line 2902 "cplus.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2902 "cplus.met"
            }
#line 2902 "cplus.met"
#line 2902 "cplus.met"
            if (list){
#line 2902 "cplus.met"
#line 2902 "cplus.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 2902 "cplus.met"
            } else {
#line 2902 "cplus.met"
#line 2902 "cplus.met"
                list = _addlist1 ;
#line 2902 "cplus.met"
            }
#line 2902 "cplus.met"
        } 
#line 2902 "cplus.met"
#line 2903 "cplus.met"
        {
#line 2903 "cplus.met"
            PPTREE _ptRes0=0;
#line 2903 "cplus.met"
            _ptRes0= MakeTree(STRING_LIST, 1);
#line 2903 "cplus.met"
            ReplaceTree(_ptRes0, 1, list );
#line 2903 "cplus.met"
            retTree=_ptRes0;
#line 2903 "cplus.met"
        }
#line 2903 "cplus.met"
#line 2903 "cplus.met"
#line 2903 "cplus.met"
    }
#line 2903 "cplus.met"
#line 2905 "cplus.met"
    {
#line 2905 "cplus.met"
        _retValue = retTree ;
#line 2905 "cplus.met"
        goto string_list_ret;
#line 2905 "cplus.met"
        
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
string_list_exit :
#line 2906 "cplus.met"

#line 2906 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_EXIT,(PPTREE)0);
#line 2906 "cplus.met"
    _funcLevel--;
#line 2906 "cplus.met"
    return((PPTREE) -1) ;
#line 2906 "cplus.met"

#line 2906 "cplus.met"
string_list_ret :
#line 2906 "cplus.met"
    
#line 2906 "cplus.met"
    _Debug = TRACE_RULE("string_list",TRACE_RETURN,_retValue);
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
#line 3469 "cplus.met"
PPTREE cplus::switch_elem ( int error_free)
#line 3469 "cplus.met"
{
#line 3469 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3469 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3469 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3469 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3469 "cplus.met"
    int _Debug = TRACE_RULE("switch_elem",TRACE_ENTER,(PPTREE)0);
#line 3469 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3469 "cplus.met"
#line 3469 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 3469 "cplus.met"
#line 3469 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 3469 "cplus.met"
#line 3471 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3471 "cplus.met"
    switch( lexEl.Value) {
#line 3471 "cplus.met"
#line 3472 "cplus.met"
        case CASE : 
#line 3472 "cplus.met"
            tokenAhead = 0 ;
#line 3472 "cplus.met"
            CommTerm();
#line 3472 "cplus.met"
#line 3473 "cplus.met"
#line 3474 "cplus.met"
            {
#line 3474 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 3474 "cplus.met"
                _ptRes0= MakeTree(CASE, 2);
#line 3474 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 3474 "cplus.met"
                    MulFreeTree(7,_ptRes0,_ptTree0,_addlist1,_addlist2,inter,list,retTree);
                    PROG_EXIT(switch_elem_exit,"switch_elem")
#line 3474 "cplus.met"
                }
#line 3474 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3474 "cplus.met"
                retTree=_ptRes0;
#line 3474 "cplus.met"
            }
#line 3474 "cplus.met"
#line 3475 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3475 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3475 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3475 "cplus.met"
            } else {
#line 3475 "cplus.met"
                tokenAhead = 0 ;
#line 3475 "cplus.met"
            }
#line 3475 "cplus.met"
#line 3476 "cplus.met"
            {
#line 3476 "cplus.met"
                switchContext = 0 ;
#line 3476 "cplus.met"
#line 3477 "cplus.met"
#line 3477 "cplus.met"
                _addlist1 = list ;
#line 3477 "cplus.met"
#line 3477 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 136, cplus)) || 
#line 3477 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 132, cplus))) { 
#line 3477 "cplus.met"
#line 3478 "cplus.met"
#line 3478 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,inter );
#line 3478 "cplus.met"
#line 3478 "cplus.met"
                    if (list){
#line 3478 "cplus.met"
#line 3478 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 3478 "cplus.met"
                    } else {
#line 3478 "cplus.met"
#line 3478 "cplus.met"
                        list = _addlist1 ;
#line 3478 "cplus.met"
                    }
#line 3478 "cplus.met"
                } 
#line 3478 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3478 "cplus.met"
            }
#line 3478 "cplus.met"
#line 3479 "cplus.met"
            {
#line 3479 "cplus.met"
                PPTREE _ptTree0=0;
#line 3479 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 3479 "cplus.met"
                _retValue =_ptTree0;
#line 3479 "cplus.met"
                goto switch_elem_ret;
#line 3479 "cplus.met"
            }
#line 3479 "cplus.met"
#line 3479 "cplus.met"
            break;
#line 3479 "cplus.met"
#line 3481 "cplus.met"
        case DEFAULT : 
#line 3481 "cplus.met"
            tokenAhead = 0 ;
#line 3481 "cplus.met"
            CommTerm();
#line 3481 "cplus.met"
#line 3482 "cplus.met"
#line 3483 "cplus.met"
            {
#line 3483 "cplus.met"
                PPTREE _ptRes0=0;
#line 3483 "cplus.met"
                _ptRes0= MakeTree(DEFAULT, 1);
#line 3483 "cplus.met"
                retTree=_ptRes0;
#line 3483 "cplus.met"
            }
#line 3483 "cplus.met"
#line 3484 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3484 "cplus.met"
            if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3484 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                TOKEN_EXIT(switch_elem_exit,":")
#line 3484 "cplus.met"
            } else {
#line 3484 "cplus.met"
                tokenAhead = 0 ;
#line 3484 "cplus.met"
            }
#line 3484 "cplus.met"
#line 3485 "cplus.met"
            {
#line 3485 "cplus.met"
                switchContext = 0 ;
#line 3485 "cplus.met"
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                _addlist2 = list ;
#line 3486 "cplus.met"
#line 3486 "cplus.met"
                while ((NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 136, cplus)) || 
#line 3486 "cplus.met"
                      (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(stat_dir), 132, cplus))) { 
#line 3486 "cplus.met"
#line 3487 "cplus.met"
#line 3487 "cplus.met"
                    _addlist2 =AddList(_addlist2 ,inter );
#line 3487 "cplus.met"
#line 3487 "cplus.met"
                    if (list){
#line 3487 "cplus.met"
#line 3487 "cplus.met"
                        _addlist2 = SonTree (_addlist2 ,2 );
#line 3487 "cplus.met"
                    } else {
#line 3487 "cplus.met"
#line 3487 "cplus.met"
                        list = _addlist2 ;
#line 3487 "cplus.met"
                    }
#line 3487 "cplus.met"
                } 
#line 3487 "cplus.met"
                switchContext =  _oldswitchContext;
#line 3487 "cplus.met"
            }
#line 3487 "cplus.met"
#line 3488 "cplus.met"
            {
#line 3488 "cplus.met"
                PPTREE _ptTree0=0;
#line 3488 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,1 ,list );
#line 3488 "cplus.met"
                _retValue =_ptTree0;
#line 3488 "cplus.met"
                goto switch_elem_ret;
#line 3488 "cplus.met"
            }
#line 3488 "cplus.met"
#line 3488 "cplus.met"
            break;
#line 3488 "cplus.met"
#line 3494 "cplus.met"
        default : 
#line 3494 "cplus.met"
#line 3491 "cplus.met"
#line 3493 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(stat_dir_switch), 133, cplus)){
#line 3493 "cplus.met"
#line 3495 "cplus.met"
                {
#line 3495 "cplus.met"
                    _retValue = retTree ;
#line 3495 "cplus.met"
                    goto switch_elem_ret;
#line 3495 "cplus.met"
                    
#line 3495 "cplus.met"
                }
#line 3495 "cplus.met"
            } else {
#line 3495 "cplus.met"
#line 3497 "cplus.met"
                
#line 3497 "cplus.met"
                MulFreeTree(5,_addlist1,_addlist2,inter,list,retTree);
                LEX_EXIT ("",0);
#line 3497 "cplus.met"
                goto switch_elem_exit;
#line 3497 "cplus.met"
            }
#line 3497 "cplus.met"
#line 3497 "cplus.met"
            break;
#line 3497 "cplus.met"
    }
#line 3497 "cplus.met"
#line 3497 "cplus.met"
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
switch_elem_exit :
#line 3499 "cplus.met"

#line 3499 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_EXIT,(PPTREE)0);
#line 3499 "cplus.met"
    _funcLevel--;
#line 3499 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3499 "cplus.met"
    return((PPTREE) -1) ;
#line 3499 "cplus.met"

#line 3499 "cplus.met"
switch_elem_ret :
#line 3499 "cplus.met"
    
#line 3499 "cplus.met"
    _Debug = TRACE_RULE("switch_elem",TRACE_RETURN,_retValue);
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
#line 3502 "cplus.met"
PPTREE cplus::switch_list ( int error_free)
#line 3502 "cplus.met"
{
#line 3502 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3502 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3502 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3502 "cplus.met"
    int _Debug = TRACE_RULE("switch_list",TRACE_ENTER,(PPTREE)0);
#line 3502 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3502 "cplus.met"
#line 3502 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3502 "cplus.met"
#line 3502 "cplus.met"
    PPTREE list = (PPTREE) 0,retTree = (PPTREE) 0;
#line 3502 "cplus.met"
#line 3504 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3504 "cplus.met"
    if (  !SEE_TOKEN( AOUV,"{") || !(CommTerm(),1)) {
#line 3504 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"{")
#line 3504 "cplus.met"
    } else {
#line 3504 "cplus.met"
        tokenAhead = 0 ;
#line 3504 "cplus.met"
    }
#line 3504 "cplus.met"
#line 3504 "cplus.met"
    _addlist1 = list ;
#line 3504 "cplus.met"
#line 3505 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(switch_elem), 139, cplus)) { 
#line 3505 "cplus.met"
#line 3506 "cplus.met"
#line 3506 "cplus.met"
        _addlist1 =AddList(_addlist1 ,retTree );
#line 3506 "cplus.met"
#line 3506 "cplus.met"
        if (list){
#line 3506 "cplus.met"
#line 3506 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3506 "cplus.met"
        } else {
#line 3506 "cplus.met"
#line 3506 "cplus.met"
            list = _addlist1 ;
#line 3506 "cplus.met"
        }
#line 3506 "cplus.met"
    } 
#line 3506 "cplus.met"
#line 3507 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3507 "cplus.met"
    if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 3507 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(switch_list_exit,"}")
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
        _retValue = list ;
#line 3508 "cplus.met"
        goto switch_list_ret;
#line 3508 "cplus.met"
        
#line 3508 "cplus.met"
    }
#line 3508 "cplus.met"
#line 3508 "cplus.met"
#line 3508 "cplus.met"

#line 3509 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3509 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3509 "cplus.met"
return((PPTREE) 0);
#line 3509 "cplus.met"

#line 3509 "cplus.met"
switch_list_exit :
#line 3509 "cplus.met"

#line 3509 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_EXIT,(PPTREE)0);
#line 3509 "cplus.met"
    _funcLevel--;
#line 3509 "cplus.met"
    return((PPTREE) -1) ;
#line 3509 "cplus.met"

#line 3509 "cplus.met"
switch_list_ret :
#line 3509 "cplus.met"
    
#line 3509 "cplus.met"
    _Debug = TRACE_RULE("switch_list",TRACE_RETURN,_retValue);
#line 3509 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3509 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3509 "cplus.met"
    return _retValue ;
#line 3509 "cplus.met"
}
#line 3509 "cplus.met"

#line 3509 "cplus.met"
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
           (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(type_name), 144, cplus))){
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
#line 3144 "cplus.met"
PPTREE cplus::type_and_declarator ( int error_free)
#line 3144 "cplus.met"
{
#line 3144 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3144 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3144 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3144 "cplus.met"
    int _Debug = TRACE_RULE("type_and_declarator",TRACE_ENTER,(PPTREE)0);
#line 3144 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3144 "cplus.met"
#line 3144 "cplus.met"
    PPTREE funcTree = (PPTREE) 0;
#line 3144 "cplus.met"
#line 3146 "cplus.met"
    {
#line 3146 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 3146 "cplus.met"
        _ptRes0= MakeTree(FUNC, 11);
#line 3146 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 3146 "cplus.met"
            MulFreeTree(3,_ptRes0,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3146 "cplus.met"
        }
#line 3146 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3146 "cplus.met"
        funcTree=_ptRes0;
#line 3146 "cplus.met"
    }
#line 3146 "cplus.met"
#line 3147 "cplus.met"
    {
#line 3147 "cplus.met"
        PPTREE _ptTree0=0;
#line 3147 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 145, cplus))== (PPTREE) -1 ) {
#line 3147 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3147 "cplus.met"
        }
#line 3147 "cplus.met"
        ReplaceTree(funcTree , 2 , _ptTree0);
#line 3147 "cplus.met"
    }
#line 3147 "cplus.met"
#line 3148 "cplus.met"
    {
#line 3148 "cplus.met"
        PPTREE _ptTree0=0;
#line 3148 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 77, cplus))== (PPTREE) -1 ) {
#line 3148 "cplus.met"
            MulFreeTree(2,_ptTree0,funcTree);
            PROG_EXIT(type_and_declarator_exit,"type_and_declarator")
#line 3148 "cplus.met"
        }
#line 3148 "cplus.met"
        ReplaceTree(funcTree , 3 , _ptTree0);
#line 3148 "cplus.met"
    }
#line 3148 "cplus.met"
#line 3149 "cplus.met"
    {
#line 3149 "cplus.met"
        _retValue = funcTree ;
#line 3149 "cplus.met"
        goto type_and_declarator_ret;
#line 3149 "cplus.met"
        
#line 3149 "cplus.met"
    }
#line 3149 "cplus.met"
#line 3149 "cplus.met"
#line 3149 "cplus.met"

#line 3150 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3150 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3150 "cplus.met"
return((PPTREE) 0);
#line 3150 "cplus.met"

#line 3150 "cplus.met"
type_and_declarator_exit :
#line 3150 "cplus.met"

#line 3150 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_EXIT,(PPTREE)0);
#line 3150 "cplus.met"
    _funcLevel--;
#line 3150 "cplus.met"
    return((PPTREE) -1) ;
#line 3150 "cplus.met"

#line 3150 "cplus.met"
type_and_declarator_ret :
#line 3150 "cplus.met"
    
#line 3150 "cplus.met"
    _Debug = TRACE_RULE("type_and_declarator",TRACE_RETURN,_retValue);
#line 3150 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3150 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3150 "cplus.met"
    return _retValue ;
#line 3150 "cplus.met"
}
#line 3150 "cplus.met"

#line 3150 "cplus.met"
