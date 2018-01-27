/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1222 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1222 "cplus.met"
{
#line 1222 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1222 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1222 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1222 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1222 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1222 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1222 "cplus.met"
#line 1222 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1222 "cplus.met"
#line 1222 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1222 "cplus.met"
#line 1224 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1224 "cplus.met"
#line 1225 "cplus.met"
#line 1226 "cplus.met"
        {
#line 1226 "cplus.met"
            keepCarriage = 1 ;
#line 1226 "cplus.met"
#line 1227 "cplus.met"
#line 1228 "cplus.met"
            {
#line 1228 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1228 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1228 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1228 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1228 "cplus.met"
                }
#line 1228 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1228 "cplus.met"
                retTree=_ptRes0;
#line 1228 "cplus.met"
            }
#line 1228 "cplus.met"
#line 1229 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1229 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1229 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1229 "cplus.met"
            } else {
#line 1229 "cplus.met"
                tokenAhead = 0 ;
#line 1229 "cplus.met"
            }
#line 1229 "cplus.met"
#line 1229 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1229 "cplus.met"
        }
#line 1229 "cplus.met"
#line 1229 "cplus.met"
#line 1230 "cplus.met"
    } else {
#line 1230 "cplus.met"
#line 1233 "cplus.met"
#line 1234 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1234 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1234 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1234 "cplus.met"
        } else {
#line 1234 "cplus.met"
            tokenAhead = 0 ;
#line 1234 "cplus.met"
        }
#line 1234 "cplus.met"
#line 1235 "cplus.met"
        {
#line 1235 "cplus.met"
            keepCarriage = 1 ;
#line 1235 "cplus.met"
#line 1236 "cplus.met"
#line 1237 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1237 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1237 "cplus.met"
            }
#line 1237 "cplus.met"
#line 1238 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1238 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1238 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1238 "cplus.met"
            } else {
#line 1238 "cplus.met"
                tokenAhead = 0 ;
#line 1238 "cplus.met"
            }
#line 1238 "cplus.met"
#line 1238 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1238 "cplus.met"
        }
#line 1238 "cplus.met"
#line 1240 "cplus.met"
        {
#line 1240 "cplus.met"
            PPTREE _ptRes0=0;
#line 1240 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1240 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1240 "cplus.met"
            retTree=_ptRes0;
#line 1240 "cplus.met"
        }
#line 1240 "cplus.met"
#line 1240 "cplus.met"
    }
#line 1240 "cplus.met"
#line 1240 "cplus.met"
    _addlist1 = list ;
#line 1240 "cplus.met"
#line 1244 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1244 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1244 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1244 "cplus.met"
#line 1246 "cplus.met"
#line 1246 "cplus.met"
        {
#line 1246 "cplus.met"
            PPTREE _ptTree0=0;
#line 1246 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1246 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1246 "cplus.met"
            }
#line 1246 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1246 "cplus.met"
        }
#line 1246 "cplus.met"
#line 1246 "cplus.met"
        if (list){
#line 1246 "cplus.met"
#line 1246 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1246 "cplus.met"
        } else {
#line 1246 "cplus.met"
#line 1246 "cplus.met"
            list = _addlist1 ;
#line 1246 "cplus.met"
        }
#line 1246 "cplus.met"
    } 
#line 1246 "cplus.met"
#line 1247 "cplus.met"
    {
#line 1247 "cplus.met"
        PPTREE _ptTree0=0;
#line 1247 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1247 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1247 "cplus.met"
        }
#line 1247 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1247 "cplus.met"
    }
#line 1247 "cplus.met"
#line 1248 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1248 "cplus.met"
#line 1249 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1249 "cplus.met"
    switch( lexEl.Value) {
#line 1249 "cplus.met"
#line 1250 "cplus.met"
        case META : 
#line 1250 "cplus.met"
        case ELSE_DIR : 
#line 1250 "cplus.met"
            tokenAhead = 0 ;
#line 1250 "cplus.met"
            CommTerm();
#line 1250 "cplus.met"
#line 1251 "cplus.met"
#line 1251 "cplus.met"
            _addlist2 = list2 ;
#line 1251 "cplus.met"
#line 1252 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1252 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1252 "cplus.met"
#line 1253 "cplus.met"
#line 1253 "cplus.met"
                {
#line 1253 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1253 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1253 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1253 "cplus.met"
                    }
#line 1253 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1253 "cplus.met"
                }
#line 1253 "cplus.met"
#line 1253 "cplus.met"
                if (list2){
#line 1253 "cplus.met"
#line 1253 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1253 "cplus.met"
                } else {
#line 1253 "cplus.met"
#line 1253 "cplus.met"
                    list2 = _addlist2 ;
#line 1253 "cplus.met"
                }
#line 1253 "cplus.met"
            } 
#line 1253 "cplus.met"
#line 1254 "cplus.met"
            {
#line 1254 "cplus.met"
                PPTREE _ptTree0=0;
#line 1254 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1254 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1254 "cplus.met"
                }
#line 1254 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1254 "cplus.met"
            }
#line 1254 "cplus.met"
#line 1255 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1255 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1255 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1255 "cplus.met"
            } else {
#line 1255 "cplus.met"
                tokenAhead = 0 ;
#line 1255 "cplus.met"
            }
#line 1255 "cplus.met"
#line 1256 "cplus.met"
            {
#line 1256 "cplus.met"
                PPTREE _ptTree0=0;
#line 1256 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1256 "cplus.met"
                _retValue =_ptTree0;
#line 1256 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1256 "cplus.met"
            }
#line 1256 "cplus.met"
#line 1256 "cplus.met"
            break;
#line 1256 "cplus.met"
#line 1258 "cplus.met"
        case ELIF_DIR : 
#line 1258 "cplus.met"
            tokenAhead = 0 ;
#line 1258 "cplus.met"
            CommTerm();
#line 1258 "cplus.met"
#line 1258 "cplus.met"
            {
#line 1258 "cplus.met"
                PPTREE _ptTree0=0;
#line 1258 "cplus.met"
                {
#line 1258 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1258 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1258 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1258 "cplus.met"
                    }
#line 1258 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1258 "cplus.met"
                }
#line 1258 "cplus.met"
                _retValue =_ptTree0;
#line 1258 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1258 "cplus.met"
            }
#line 1258 "cplus.met"
            break;
#line 1258 "cplus.met"
#line 1259 "cplus.met"
        case ENDIF_DIR : 
#line 1259 "cplus.met"
            tokenAhead = 0 ;
#line 1259 "cplus.met"
            CommTerm();
#line 1259 "cplus.met"
#line 1259 "cplus.met"
            {
#line 1259 "cplus.met"
                _retValue = retTree ;
#line 1259 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1259 "cplus.met"
                
#line 1259 "cplus.met"
            }
#line 1259 "cplus.met"
            break;
#line 1259 "cplus.met"
        default :
#line 1259 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1259 "cplus.met"
            break;
#line 1259 "cplus.met"
    }
#line 1259 "cplus.met"
#line 1259 "cplus.met"
#line 1260 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1260 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1260 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1260 "cplus.met"
return((PPTREE) 0);
#line 1260 "cplus.met"

#line 1260 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1260 "cplus.met"

#line 1260 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1260 "cplus.met"
    _funcLevel--;
#line 1260 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1260 "cplus.met"
    return((PPTREE) -1) ;
#line 1260 "cplus.met"

#line 1260 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1260 "cplus.met"
    
#line 1260 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1260 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1260 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1260 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1260 "cplus.met"
    return _retValue ;
#line 1260 "cplus.met"
}
#line 1260 "cplus.met"

#line 1260 "cplus.met"
#line 3301 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3301 "cplus.met"
{
#line 3301 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3301 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3301 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3301 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3301 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3301 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3301 "cplus.met"
#line 3301 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3301 "cplus.met"
#line 3303 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3303 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3303 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3303 "cplus.met"
    } else {
#line 3303 "cplus.met"
        tokenAhead = 0 ;
#line 3303 "cplus.met"
    }
#line 3303 "cplus.met"
#line 3304 "cplus.met"
    {
#line 3304 "cplus.met"
        PPTREE _ptRes0=0;
#line 3304 "cplus.met"
        _ptRes0= MakeTree(FOR, 4);
#line 3304 "cplus.met"
        statTree=_ptRes0;
#line 3304 "cplus.met"
    }
#line 3304 "cplus.met"
#line 3305 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 61, cplus)){
#line 3305 "cplus.met"
#line 3306 "cplus.met"
        ReplaceTree(statTree ,1 ,opt );
#line 3306 "cplus.met"
#line 3306 "cplus.met"
    } else {
#line 3306 "cplus.met"
#line 3308 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 39, cplus)){
#line 3308 "cplus.met"
#line 3309 "cplus.met"
            ReplaceTree(statTree ,1 ,opt );
#line 3309 "cplus.met"
#line 3309 "cplus.met"
        }
#line 3309 "cplus.met"
    }
#line 3309 "cplus.met"
#line 3310 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3310 "cplus.met"
#line 3311 "cplus.met"
#line 3312 "cplus.met"
        {
#line 3312 "cplus.met"
            PPTREE _ptTree0=0;
#line 3312 "cplus.met"
            {
#line 3312 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3312 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3312 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3312 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3312 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3312 "cplus.met"
                }
#line 3312 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3312 "cplus.met"
                _ptTree0=_ptRes1;
#line 3312 "cplus.met"
            }
#line 3312 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3312 "cplus.met"
        }
#line 3312 "cplus.met"
#line 3312 "cplus.met"
#line 3312 "cplus.met"
    } else {
#line 3312 "cplus.met"
#line 3315 "cplus.met"
#line 3316 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3316 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3316 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3316 "cplus.met"
        } else {
#line 3316 "cplus.met"
            tokenAhead = 0 ;
#line 3316 "cplus.met"
        }
#line 3316 "cplus.met"
#line 3317 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3317 "cplus.met"
#line 3318 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3318 "cplus.met"
#line 3318 "cplus.met"
        }
#line 3318 "cplus.met"
#line 3319 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3319 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3319 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3319 "cplus.met"
        } else {
#line 3319 "cplus.met"
            tokenAhead = 0 ;
#line 3319 "cplus.met"
        }
#line 3319 "cplus.met"
#line 3320 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3320 "cplus.met"
#line 3321 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3321 "cplus.met"
#line 3321 "cplus.met"
        }
#line 3321 "cplus.met"
#line 3321 "cplus.met"
    }
#line 3321 "cplus.met"
#line 3323 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3323 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3323 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,")")
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
        switchContext = 0 ;
#line 3324 "cplus.met"
#line 3325 "cplus.met"
        {
#line 3325 "cplus.met"
            PPTREE _ptTree0=0;
#line 3325 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3325 "cplus.met"
                MulFreeTree(4,_ptTree0,opt,stat,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3325 "cplus.met"
            }
#line 3325 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3325 "cplus.met"
        }
#line 3325 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3325 "cplus.met"
    }
#line 3325 "cplus.met"
#line 3326 "cplus.met"
    {
#line 3326 "cplus.met"
        _retValue = statTree ;
#line 3326 "cplus.met"
        goto for_statement_ret;
#line 3326 "cplus.met"
        
#line 3326 "cplus.met"
    }
#line 3326 "cplus.met"
#line 3326 "cplus.met"
#line 3326 "cplus.met"

#line 3327 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3327 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3327 "cplus.met"
switchContext =  _oldswitchContext;
#line 3327 "cplus.met"
return((PPTREE) 0);
#line 3327 "cplus.met"

#line 3327 "cplus.met"
for_statement_exit :
#line 3327 "cplus.met"

#line 3327 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3327 "cplus.met"
    _funcLevel--;
#line 3327 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3327 "cplus.met"
    return((PPTREE) -1) ;
#line 3327 "cplus.met"

#line 3327 "cplus.met"
for_statement_ret :
#line 3327 "cplus.met"
    
#line 3327 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3327 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3327 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3327 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3327 "cplus.met"
    return _retValue ;
#line 3327 "cplus.met"
}
#line 3327 "cplus.met"

#line 3327 "cplus.met"
#line 3230 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3230 "cplus.met"
{
#line 3230 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3230 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3230 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3230 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3230 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3230 "cplus.met"
#line 3230 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3230 "cplus.met"
#line 3230 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3230 "cplus.met"
#line 3234 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 139, cplus))){
#line 3234 "cplus.met"
#line 3236 "cplus.met"
#line 3237 "cplus.met"
        {
#line 3237 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3237 "cplus.met"
            _ptRes0= MakeTree(FUNC, 9);
#line 3237 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 3237 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3237 "cplus.met"
            }
#line 3237 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3237 "cplus.met"
            funcTree=_ptRes0;
#line 3237 "cplus.met"
        }
#line 3237 "cplus.met"
#line 3238 "cplus.met"
        {
#line 3238 "cplus.met"
            PPTREE _ptTree0=0;
#line 3238 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 3238 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3238 "cplus.met"
            }
#line 3238 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3238 "cplus.met"
        }
#line 3238 "cplus.met"
#line 3238 "cplus.met"
#line 3238 "cplus.met"
    }
#line 3238 "cplus.met"
#line 3240 "cplus.met"
    {
#line 3240 "cplus.met"
        PPTREE _ptTree0=0;
#line 3240 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 3240 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3240 "cplus.met"
        }
#line 3240 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3240 "cplus.met"
    }
#line 3240 "cplus.met"
#line 3241 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 119, cplus)){
#line 3241 "cplus.met"
#line 3242 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3242 "cplus.met"
#line 3242 "cplus.met"
    }
#line 3242 "cplus.met"
#line 3243 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 58, cplus)){
#line 3243 "cplus.met"
#line 3244 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3244 "cplus.met"
#line 3244 "cplus.met"
    }
#line 3244 "cplus.met"
#line 3244 "cplus.met"
    _addlist1 = decList ;
#line 3244 "cplus.met"
#line 3245 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 38, cplus)) { 
#line 3245 "cplus.met"
#line 3246 "cplus.met"
#line 3246 "cplus.met"
        _addlist1 =AddList(_addlist1 ,opt );
#line 3246 "cplus.met"
#line 3246 "cplus.met"
        if (decList){
#line 3246 "cplus.met"
#line 3246 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3246 "cplus.met"
        } else {
#line 3246 "cplus.met"
#line 3246 "cplus.met"
            decList = _addlist1 ;
#line 3246 "cplus.met"
        }
#line 3246 "cplus.met"
    } 
#line 3246 "cplus.met"
#line 3247 "cplus.met"
    ReplaceTree(funcTree ,6 ,decList );
#line 3247 "cplus.met"
#line 3248 "cplus.met"
    {
#line 3248 "cplus.met"
        PPTREE _ptTree0=0;
#line 3248 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 3248 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3248 "cplus.met"
        }
#line 3248 "cplus.met"
        ReplaceTree(funcTree , 7 , _ptTree0);
#line 3248 "cplus.met"
    }
#line 3248 "cplus.met"
#line 3249 "cplus.met"
    {
#line 3249 "cplus.met"
        PPTREE _ptTree0=0;
#line 3249 "cplus.met"
        {
#line 3249 "cplus.met"
            PPTREE _ptTree1=0;
#line 3249 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3249 "cplus.met"
                MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3249 "cplus.met"
            }
#line 3249 "cplus.met"
            _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3249 "cplus.met"
        }
#line 3249 "cplus.met"
        _retValue =_ptTree0;
#line 3249 "cplus.met"
        goto func_declaration_ret;
#line 3249 "cplus.met"
    }
#line 3249 "cplus.met"
#line 3249 "cplus.met"
#line 3249 "cplus.met"

#line 3250 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3250 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3250 "cplus.met"
return((PPTREE) 0);
#line 3250 "cplus.met"

#line 3250 "cplus.met"
func_declaration_exit :
#line 3250 "cplus.met"

#line 3250 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3250 "cplus.met"
    _funcLevel--;
#line 3250 "cplus.met"
    return((PPTREE) -1) ;
#line 3250 "cplus.met"

#line 3250 "cplus.met"
func_declaration_ret :
#line 3250 "cplus.met"
    
#line 3250 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3250 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3250 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3250 "cplus.met"
    return _retValue ;
#line 3250 "cplus.met"
}
#line 3250 "cplus.met"

#line 3250 "cplus.met"
#line 2327 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2327 "cplus.met"
{
#line 2327 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2327 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2327 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2327 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2327 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2327 "cplus.met"
#line 2327 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2327 "cplus.met"
#line 2329 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2329 "cplus.met"
#line 2330 "cplus.met"
        {
#line 2330 "cplus.met"
            PPTREE _ptTree0=0;
#line 2330 "cplus.met"
            {
#line 2330 "cplus.met"
                PPTREE _ptTree1=0;
#line 2330 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 2330 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2330 "cplus.met"
                }
#line 2330 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2330 "cplus.met"
            }
#line 2330 "cplus.met"
            _retValue =_ptTree0;
#line 2330 "cplus.met"
            goto func_declarator_ret;
#line 2330 "cplus.met"
        }
#line 2330 "cplus.met"
    }
#line 2330 "cplus.met"
#line 2331 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2331 "cplus.met"
    switch( lexEl.Value) {
#line 2331 "cplus.met"
#line 2332 "cplus.met"
        case ETOI : 
#line 2332 "cplus.met"
            tokenAhead = 0 ;
#line 2332 "cplus.met"
            CommTerm();
#line 2332 "cplus.met"
#line 2332 "cplus.met"
            {
#line 2332 "cplus.met"
                PPTREE _ptTree0=0;
#line 2332 "cplus.met"
                {
#line 2332 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2332 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2332 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 2332 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2332 "cplus.met"
                    }
#line 2332 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2332 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2332 "cplus.met"
                }
#line 2332 "cplus.met"
                _retValue =_ptTree0;
#line 2332 "cplus.met"
                goto func_declarator_ret;
#line 2332 "cplus.met"
            }
#line 2332 "cplus.met"
            break;
#line 2332 "cplus.met"
#line 2333 "cplus.met"
        case ETCO : 
#line 2333 "cplus.met"
            tokenAhead = 0 ;
#line 2333 "cplus.met"
            CommTerm();
#line 2333 "cplus.met"
#line 2333 "cplus.met"
            {
#line 2333 "cplus.met"
                PPTREE _ptTree0=0;
#line 2333 "cplus.met"
                {
#line 2333 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2333 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2333 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 2333 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2333 "cplus.met"
                    }
#line 2333 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2333 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2333 "cplus.met"
                }
#line 2333 "cplus.met"
                _retValue =_ptTree0;
#line 2333 "cplus.met"
                goto func_declarator_ret;
#line 2333 "cplus.met"
            }
#line 2333 "cplus.met"
            break;
#line 2333 "cplus.met"
#line 2334 "cplus.met"
        case TILD : 
#line 2334 "cplus.met"
#line 2334 "cplus.met"
            {
#line 2334 "cplus.met"
                PPTREE _ptTree0=0;
#line 2334 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2334 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2334 "cplus.met"
                }
#line 2334 "cplus.met"
                _retValue =_ptTree0;
#line 2334 "cplus.met"
                goto func_declarator_ret;
#line 2334 "cplus.met"
            }
#line 2334 "cplus.met"
            break;
#line 2334 "cplus.met"
#line 2335 "cplus.met"
        case META : 
#line 2335 "cplus.met"
        case IDENT : 
#line 2335 "cplus.met"
#line 2335 "cplus.met"
            {
#line 2335 "cplus.met"
                PPTREE _ptTree0=0;
#line 2335 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2335 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2335 "cplus.met"
                }
#line 2335 "cplus.met"
                _retValue =_ptTree0;
#line 2335 "cplus.met"
                goto func_declarator_ret;
#line 2335 "cplus.met"
            }
#line 2335 "cplus.met"
            break;
#line 2335 "cplus.met"
#line 2336 "cplus.met"
        case OPERATOR : 
#line 2336 "cplus.met"
#line 2336 "cplus.met"
            {
#line 2336 "cplus.met"
                PPTREE _ptTree0=0;
#line 2336 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2336 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2336 "cplus.met"
                }
#line 2336 "cplus.met"
                _retValue =_ptTree0;
#line 2336 "cplus.met"
                goto func_declarator_ret;
#line 2336 "cplus.met"
            }
#line 2336 "cplus.met"
            break;
#line 2336 "cplus.met"
        default :
#line 2336 "cplus.met"
            MulFreeTree(1,valTree);
            CASE_EXIT(func_declarator_exit,"either * or & or ~ or IDENT or operator")
#line 2336 "cplus.met"
            break;
#line 2336 "cplus.met"
    }
#line 2336 "cplus.met"
#line 2336 "cplus.met"
#line 2337 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2337 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2337 "cplus.met"
return((PPTREE) 0);
#line 2337 "cplus.met"

#line 2337 "cplus.met"
func_declarator_exit :
#line 2337 "cplus.met"

#line 2337 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2337 "cplus.met"
    _funcLevel--;
#line 2337 "cplus.met"
    return((PPTREE) -1) ;
#line 2337 "cplus.met"

#line 2337 "cplus.met"
func_declarator_ret :
#line 2337 "cplus.met"
    
#line 2337 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2337 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2337 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2337 "cplus.met"
    return _retValue ;
#line 2337 "cplus.met"
}
#line 2337 "cplus.met"

#line 2337 "cplus.met"
#line 3284 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3284 "cplus.met"
{
#line 3284 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3284 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3284 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3284 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3284 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3284 "cplus.met"
#line 3285 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3285 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3285 "cplus.met"
    }
#line 3285 "cplus.met"
#line 3286 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3286 "cplus.met"
    switch( lexEl.Value) {
#line 3286 "cplus.met"
#line 3286 "cplus.met"
        case ETOI : 
#line 3286 "cplus.met"
#line 3286 "cplus.met"
            break;
#line 3286 "cplus.met"
#line 3288 "cplus.met"
        case META : 
#line 3288 "cplus.met"
        case IDENT : 
#line 3288 "cplus.met"
#line 3288 "cplus.met"
            break;
#line 3288 "cplus.met"
        default :
#line 3288 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3288 "cplus.met"
            break;
#line 3288 "cplus.met"
    }
#line 3288 "cplus.met"
#line 3288 "cplus.met"
#line 3289 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3289 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3289 "cplus.met"
return((PPTREE) 0);
#line 3289 "cplus.met"

#line 3289 "cplus.met"
ident_mul_exit :
#line 3289 "cplus.met"

#line 3289 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3289 "cplus.met"
    _funcLevel--;
#line 3289 "cplus.met"
    return((PPTREE) -1) ;
#line 3289 "cplus.met"

#line 3289 "cplus.met"
ident_mul_ret :
#line 3289 "cplus.met"
    
#line 3289 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3289 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3289 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3289 "cplus.met"
    return _retValue ;
#line 3289 "cplus.met"
}
#line 3289 "cplus.met"

#line 3289 "cplus.met"
#line 1489 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1489 "cplus.met"
{
#line 1489 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1489 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1489 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1489 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1489 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1489 "cplus.met"
#line 1490 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1490 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1490 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1490 "cplus.met"
    } else {
#line 1490 "cplus.met"
        tokenAhead = 0 ;
#line 1490 "cplus.met"
    }
#line 1490 "cplus.met"
#line 1491 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1491 "cplus.met"
    switch( lexEl.Value) {
#line 1491 "cplus.met"
#line 1492 "cplus.met"
        case META : 
#line 1492 "cplus.met"
        case INCLUDE_SYS : 
#line 1492 "cplus.met"
#line 1493 "cplus.met"
#line 1494 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1494 "cplus.met"
#line 1495 "cplus.met"
            {
#line 1495 "cplus.met"
                PPTREE _ptTree0=0;
#line 1495 "cplus.met"
                {
#line 1495 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1495 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1495 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1495 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1495 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1495 "cplus.met"
                    } else {
#line 1495 "cplus.met"
                        tokenAhead = 0 ;
#line 1495 "cplus.met"
                    }
#line 1495 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1495 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1495 "cplus.met"
                }
#line 1495 "cplus.met"
                _retValue =_ptTree0;
#line 1495 "cplus.met"
                goto include_dir_ret;
#line 1495 "cplus.met"
            }
#line 1495 "cplus.met"
#line 1495 "cplus.met"
            break;
#line 1495 "cplus.met"
#line 1497 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1497 "cplus.met"
#line 1498 "cplus.met"
#line 1499 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1499 "cplus.met"
#line 1500 "cplus.met"
            {
#line 1500 "cplus.met"
                PPTREE _ptTree0=0;
#line 1500 "cplus.met"
                {
#line 1500 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1500 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1500 "cplus.met"
                    {
#line 1500 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1500 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1500 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1500 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1500 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1500 "cplus.met"
                        } else {
#line 1500 "cplus.met"
                            tokenAhead = 0 ;
#line 1500 "cplus.met"
                        }
#line 1500 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1500 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1500 "cplus.met"
                    }
#line 1500 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1500 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1500 "cplus.met"
                }
#line 1500 "cplus.met"
                _retValue =_ptTree0;
#line 1500 "cplus.met"
                goto include_dir_ret;
#line 1500 "cplus.met"
            }
#line 1500 "cplus.met"
#line 1500 "cplus.met"
            break;
#line 1500 "cplus.met"
        default :
#line 1500 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1500 "cplus.met"
            break;
#line 1500 "cplus.met"
    }
#line 1500 "cplus.met"
#line 1500 "cplus.met"
#line 1503 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1503 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1503 "cplus.met"
return((PPTREE) 0);
#line 1503 "cplus.met"

#line 1503 "cplus.met"
include_dir_exit :
#line 1503 "cplus.met"

#line 1503 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1503 "cplus.met"
    _funcLevel--;
#line 1503 "cplus.met"
    return((PPTREE) -1) ;
#line 1503 "cplus.met"

#line 1503 "cplus.met"
include_dir_ret :
#line 1503 "cplus.met"
    
#line 1503 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1503 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1503 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1503 "cplus.met"
    return _retValue ;
#line 1503 "cplus.met"
}
#line 1503 "cplus.met"

#line 1503 "cplus.met"
#line 2627 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2627 "cplus.met"
{
#line 2627 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2627 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2627 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2627 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2627 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2627 "cplus.met"
#line 2627 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2627 "cplus.met"
#line 2629 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2629 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2629 "cplus.met"
    }
#line 2629 "cplus.met"
#line 2630 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2630 "cplus.met"
#line 2631 "cplus.met"
        {
#line 2631 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2631 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2631 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2631 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2631 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2631 "cplus.met"
            }
#line 2631 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2631 "cplus.met"
            expTree=_ptRes0;
#line 2631 "cplus.met"
        }
#line 2631 "cplus.met"
    } 
#line 2631 "cplus.met"
#line 2632 "cplus.met"
    {
#line 2632 "cplus.met"
        _retValue = expTree ;
#line 2632 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2632 "cplus.met"
        
#line 2632 "cplus.met"
    }
#line 2632 "cplus.met"
#line 2632 "cplus.met"
#line 2632 "cplus.met"

#line 2633 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2633 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2633 "cplus.met"
return((PPTREE) 0);
#line 2633 "cplus.met"

#line 2633 "cplus.met"
inclusive_or_expression_exit :
#line 2633 "cplus.met"

#line 2633 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2633 "cplus.met"
    _funcLevel--;
#line 2633 "cplus.met"
    return((PPTREE) -1) ;
#line 2633 "cplus.met"

#line 2633 "cplus.met"
inclusive_or_expression_ret :
#line 2633 "cplus.met"
    
#line 2633 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2633 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2633 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2633 "cplus.met"
    return _retValue ;
#line 2633 "cplus.met"
}
#line 2633 "cplus.met"

#line 2633 "cplus.met"
#line 2418 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2418 "cplus.met"
{
#line 2418 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2418 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2418 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2418 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2418 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2418 "cplus.met"
#line 2418 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2418 "cplus.met"
#line 2418 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2418 "cplus.met"
#line 2420 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2420 "cplus.met"
    switch( lexEl.Value) {
#line 2420 "cplus.met"
#line 2424 "cplus.met"
        case AOUV : 
#line 2424 "cplus.met"
            tokenAhead = 0 ;
#line 2424 "cplus.met"
            CommTerm();
#line 2424 "cplus.met"
#line 2422 "cplus.met"
#line 2422 "cplus.met"
            _addlist1 = initList ;
#line 2422 "cplus.met"
#line 2423 "cplus.met"
            do {
#line 2423 "cplus.met"
#line 2424 "cplus.met"
                {
#line 2424 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2424 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 2424 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2424 "cplus.met"
                    }
#line 2424 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2424 "cplus.met"
                }
#line 2424 "cplus.met"
#line 2424 "cplus.met"
                if (initList){
#line 2424 "cplus.met"
#line 2424 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2424 "cplus.met"
                } else {
#line 2424 "cplus.met"
#line 2424 "cplus.met"
                    initList = _addlist1 ;
#line 2424 "cplus.met"
                }
#line 2424 "cplus.met"
#line 2424 "cplus.met"
#line 2425 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2425 "cplus.met"
#line 2426 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2426 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2426 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2426 "cplus.met"
            } else {
#line 2426 "cplus.met"
                tokenAhead = 0 ;
#line 2426 "cplus.met"
            }
#line 2426 "cplus.met"
#line 2427 "cplus.met"
            {
#line 2427 "cplus.met"
                PPTREE _ptTree0=0;
#line 2427 "cplus.met"
                {
#line 2427 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2427 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2427 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2427 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2427 "cplus.met"
                }
#line 2427 "cplus.met"
                _retValue =_ptTree0;
#line 2427 "cplus.met"
                goto initializer_ret;
#line 2427 "cplus.met"
            }
#line 2427 "cplus.met"
#line 2427 "cplus.met"
            break;
#line 2427 "cplus.met"
#line 2430 "cplus.met"
        default : 
#line 2430 "cplus.met"
#line 2430 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 15, cplus)){
#line 2430 "cplus.met"
#line 2431 "cplus.met"
                {
#line 2431 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2431 "cplus.met"
                    {
#line 2431 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2431 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2431 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2431 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2431 "cplus.met"
                    }
#line 2431 "cplus.met"
                    _retValue =_ptTree0;
#line 2431 "cplus.met"
                    goto initializer_ret;
#line 2431 "cplus.met"
                }
#line 2431 "cplus.met"
            } else {
#line 2431 "cplus.met"
#line 2433 "cplus.met"
                {
#line 2433 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2433 "cplus.met"
                    {
#line 2433 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2433 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2433 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2433 "cplus.met"
                    }
#line 2433 "cplus.met"
                    _retValue =_ptTree0;
#line 2433 "cplus.met"
                    goto initializer_ret;
#line 2433 "cplus.met"
                }
#line 2433 "cplus.met"
            }
#line 2433 "cplus.met"
            break;
#line 2433 "cplus.met"
    }
#line 2433 "cplus.met"
#line 2433 "cplus.met"
#line 2434 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2434 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2434 "cplus.met"
return((PPTREE) 0);
#line 2434 "cplus.met"

#line 2434 "cplus.met"
initializer_exit :
#line 2434 "cplus.met"

#line 2434 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2434 "cplus.met"
    _funcLevel--;
#line 2434 "cplus.met"
    return((PPTREE) -1) ;
#line 2434 "cplus.met"

#line 2434 "cplus.met"
initializer_ret :
#line 2434 "cplus.met"
    
#line 2434 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2434 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2434 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2434 "cplus.met"
    return _retValue ;
#line 2434 "cplus.met"
}
#line 2434 "cplus.met"

#line 2434 "cplus.met"
#line 1735 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1735 "cplus.met"
{
#line 1735 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1735 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1735 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1735 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1735 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1735 "cplus.met"
#line 1735 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1735 "cplus.met"
#line 1737 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 83, cplus))) && 
#line 1737 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 62, cplus)))) && 
#line 1737 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 81, cplus)))) && 
#line 1737 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 82, cplus)))){
#line 1737 "cplus.met"
#line 1741 "cplus.met"
        
#line 1741 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1741 "cplus.met"
        goto inside_declaration_exit;
#line 1741 "cplus.met"
#line 1741 "cplus.met"
    }
#line 1741 "cplus.met"
#line 1742 "cplus.met"
    {
#line 1742 "cplus.met"
        _retValue = retTree ;
#line 1742 "cplus.met"
        goto inside_declaration_ret;
#line 1742 "cplus.met"
        
#line 1742 "cplus.met"
    }
#line 1742 "cplus.met"
#line 1742 "cplus.met"
#line 1742 "cplus.met"

#line 1743 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1743 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1743 "cplus.met"
return((PPTREE) 0);
#line 1743 "cplus.met"

#line 1743 "cplus.met"
inside_declaration_exit :
#line 1743 "cplus.met"

#line 1743 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1743 "cplus.met"
    _funcLevel--;
#line 1743 "cplus.met"
    return((PPTREE) -1) ;
#line 1743 "cplus.met"

#line 1743 "cplus.met"
inside_declaration_ret :
#line 1743 "cplus.met"
    
#line 1743 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1743 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1743 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1743 "cplus.met"
    return _retValue ;
#line 1743 "cplus.met"
}
#line 1743 "cplus.met"

#line 1743 "cplus.met"
#line 1715 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1715 "cplus.met"
{
#line 1715 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1715 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1715 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1715 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1715 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1715 "cplus.met"
#line 1715 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1715 "cplus.met"
#line 1717 "cplus.met"
    {
#line 1717 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1717 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1717 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1717 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1717 "cplus.met"
        }
#line 1717 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1717 "cplus.met"
        otherTree=_ptRes0;
#line 1717 "cplus.met"
    }
#line 1717 "cplus.met"
#line 1718 "cplus.met"
    {
#line 1718 "cplus.met"
        PPTREE _ptTree0=0;
#line 1718 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 1718 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1718 "cplus.met"
        }
#line 1718 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1718 "cplus.met"
    }
#line 1718 "cplus.met"
#line 1719 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1719 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1719 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1719 "cplus.met"
    } else {
#line 1719 "cplus.met"
        tokenAhead = 0 ;
#line 1719 "cplus.met"
    }
#line 1719 "cplus.met"
#line 1720 "cplus.met"
    {
#line 1720 "cplus.met"
        PPTREE _ptTree0=0;
#line 1720 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1720 "cplus.met"
        _retValue =_ptTree0;
#line 1720 "cplus.met"
        goto inside_declaration1_ret;
#line 1720 "cplus.met"
    }
#line 1720 "cplus.met"
#line 1720 "cplus.met"
#line 1720 "cplus.met"

#line 1721 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1721 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1721 "cplus.met"
return((PPTREE) 0);
#line 1721 "cplus.met"

#line 1721 "cplus.met"
inside_declaration1_exit :
#line 1721 "cplus.met"

#line 1721 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1721 "cplus.met"
    _funcLevel--;
#line 1721 "cplus.met"
    return((PPTREE) -1) ;
#line 1721 "cplus.met"

#line 1721 "cplus.met"
inside_declaration1_ret :
#line 1721 "cplus.met"
    
#line 1721 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1721 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1721 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1721 "cplus.met"
    return _retValue ;
#line 1721 "cplus.met"
}
#line 1721 "cplus.met"

#line 1721 "cplus.met"
#line 1723 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1723 "cplus.met"
{
#line 1723 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1723 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1723 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1723 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1723 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1723 "cplus.met"
#line 1723 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1723 "cplus.met"
#line 1725 "cplus.met"
    {
#line 1725 "cplus.met"
        PPTREE _ptRes0=0;
#line 1725 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1725 "cplus.met"
        otherTree=_ptRes0;
#line 1725 "cplus.met"
    }
#line 1725 "cplus.met"
#line 1726 "cplus.met"
    {
#line 1726 "cplus.met"
        PPTREE _ptTree0=0;
#line 1726 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 1726 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1726 "cplus.met"
        }
#line 1726 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1726 "cplus.met"
    }
#line 1726 "cplus.met"
#line 1727 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1727 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1727 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1727 "cplus.met"
    } else {
#line 1727 "cplus.met"
        tokenAhead = 0 ;
#line 1727 "cplus.met"
    }
#line 1727 "cplus.met"
#line 1728 "cplus.met"
    {
#line 1728 "cplus.met"
        PPTREE _ptTree0=0;
#line 1728 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1728 "cplus.met"
        _retValue =_ptTree0;
#line 1728 "cplus.met"
        goto inside_declaration2_ret;
#line 1728 "cplus.met"
    }
#line 1728 "cplus.met"
#line 1728 "cplus.met"
#line 1728 "cplus.met"

#line 1729 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1729 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1729 "cplus.met"
return((PPTREE) 0);
#line 1729 "cplus.met"

#line 1729 "cplus.met"
inside_declaration2_exit :
#line 1729 "cplus.met"

#line 1729 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1729 "cplus.met"
    _funcLevel--;
#line 1729 "cplus.met"
    return((PPTREE) -1) ;
#line 1729 "cplus.met"

#line 1729 "cplus.met"
inside_declaration2_ret :
#line 1729 "cplus.met"
    
#line 1729 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1729 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1729 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1729 "cplus.met"
    return _retValue ;
#line 1729 "cplus.met"
}
#line 1729 "cplus.met"

#line 1729 "cplus.met"
#line 1731 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1731 "cplus.met"
{
#line 1731 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1731 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1731 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1731 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1731 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1731 "cplus.met"
#line 1732 "cplus.met"
    
#line 1732 "cplus.met"
    LEX_EXIT ("",0);
#line 1732 "cplus.met"
    goto inside_declaration_extension_exit;
#line 1732 "cplus.met"
#line 1732 "cplus.met"
#line 1732 "cplus.met"

#line 1733 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1733 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1733 "cplus.met"
return((PPTREE) 0);
#line 1733 "cplus.met"

#line 1733 "cplus.met"
inside_declaration_extension_exit :
#line 1733 "cplus.met"

#line 1733 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1733 "cplus.met"
    _funcLevel--;
#line 1733 "cplus.met"
    return((PPTREE) -1) ;
#line 1733 "cplus.met"

#line 1733 "cplus.met"
inside_declaration_extension_ret :
#line 1733 "cplus.met"
    
#line 1733 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
#line 1733 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1733 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1733 "cplus.met"
    return _retValue ;
#line 1733 "cplus.met"
}
#line 1733 "cplus.met"

#line 1733 "cplus.met"
#line 3279 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3279 "cplus.met"
{
#line 3279 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3279 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3279 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3279 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3279 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3279 "cplus.met"
#line 3280 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3280 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3280 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3280 "cplus.met"
    } else {
#line 3280 "cplus.met"
        tokenAhead = 0 ;
#line 3280 "cplus.met"
    }
#line 3280 "cplus.met"
#line 3281 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3281 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3281 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3281 "cplus.met"
    } else {
#line 3281 "cplus.met"
        tokenAhead = 0 ;
#line 3281 "cplus.met"
    }
#line 3281 "cplus.met"
#line 3281 "cplus.met"
#line 3281 "cplus.met"

#line 3282 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3282 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3282 "cplus.met"
return((PPTREE) 0);
#line 3282 "cplus.met"

#line 3282 "cplus.met"
label_beg_exit :
#line 3282 "cplus.met"

#line 3282 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3282 "cplus.met"
    _funcLevel--;
#line 3282 "cplus.met"
    return((PPTREE) -1) ;
#line 3282 "cplus.met"

#line 3282 "cplus.met"
label_beg_ret :
#line 3282 "cplus.met"
    
#line 3282 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3282 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3282 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3282 "cplus.met"
    return _retValue ;
#line 3282 "cplus.met"
}
#line 3282 "cplus.met"

#line 3282 "cplus.met"
#line 1021 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 1021 "cplus.met"
{
#line 1021 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1021 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1021 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1021 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 1021 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1021 "cplus.met"
#line 1021 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1021 "cplus.met"
#line 1021 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 1021 "cplus.met"
#line 1023 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1023 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 1023 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 1023 "cplus.met"
    } else {
#line 1023 "cplus.met"
        tokenAhead = 0 ;
#line 1023 "cplus.met"
    }
#line 1023 "cplus.met"
#line 1024 "cplus.met"
    {
#line 1024 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1024 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 1024 "cplus.met"
        {
#line 1024 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1024 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1024 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1024 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1024 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 1024 "cplus.met"
            } else {
#line 1024 "cplus.met"
                tokenAhead = 0 ;
#line 1024 "cplus.met"
            }
#line 1024 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1024 "cplus.met"
            _ptTree0=_ptRes1;
#line 1024 "cplus.met"
        }
#line 1024 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1024 "cplus.met"
        retTree=_ptRes0;
#line 1024 "cplus.met"
    }
#line 1024 "cplus.met"
#line 1025 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1025 "cplus.met"
    switch( lexEl.Value) {
#line 1025 "cplus.met"
#line 1028 "cplus.met"
        case AOUV : 
#line 1028 "cplus.met"
            tokenAhead = 0 ;
#line 1028 "cplus.met"
            CommTerm();
#line 1028 "cplus.met"
#line 1027 "cplus.met"
#line 1027 "cplus.met"
            _addlist1 = list ;
#line 1027 "cplus.met"
#line 1028 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 62, cplus)) { 
#line 1028 "cplus.met"
#line 1029 "cplus.met"
#line 1029 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 1029 "cplus.met"
#line 1029 "cplus.met"
                if (list){
#line 1029 "cplus.met"
#line 1029 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1029 "cplus.met"
                } else {
#line 1029 "cplus.met"
#line 1029 "cplus.met"
                    list = _addlist1 ;
#line 1029 "cplus.met"
                }
#line 1029 "cplus.met"
            } 
#line 1029 "cplus.met"
#line 1030 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1030 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1030 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1030 "cplus.met"
            } else {
#line 1030 "cplus.met"
                tokenAhead = 0 ;
#line 1030 "cplus.met"
            }
#line 1030 "cplus.met"
#line 1031 "cplus.met"
            {
#line 1031 "cplus.met"
                PPTREE _ptTree0=0;
#line 1031 "cplus.met"
                {
#line 1031 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1031 "cplus.met"
                    {
#line 1031 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1031 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1031 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1031 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1031 "cplus.met"
                    }
#line 1031 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1031 "cplus.met"
                }
#line 1031 "cplus.met"
                _retValue =_ptTree0;
#line 1031 "cplus.met"
                goto linkage_specification_ret;
#line 1031 "cplus.met"
            }
#line 1031 "cplus.met"
#line 1031 "cplus.met"
            break;
#line 1031 "cplus.met"
#line 1033 "cplus.met"
        default : 
#line 1033 "cplus.met"
#line 1033 "cplus.met"
            {
#line 1033 "cplus.met"
                PPTREE _ptTree0=0;
#line 1033 "cplus.met"
                {
#line 1033 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1033 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1033 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1033 "cplus.met"
                    }
#line 1033 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1033 "cplus.met"
                }
#line 1033 "cplus.met"
                _retValue =_ptTree0;
#line 1033 "cplus.met"
                goto linkage_specification_ret;
#line 1033 "cplus.met"
            }
#line 1033 "cplus.met"
            break;
#line 1033 "cplus.met"
    }
#line 1033 "cplus.met"
#line 1033 "cplus.met"
#line 1034 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1034 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1034 "cplus.met"
return((PPTREE) 0);
#line 1034 "cplus.met"

#line 1034 "cplus.met"
linkage_specification_exit :
#line 1034 "cplus.met"

#line 1034 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1034 "cplus.met"
    _funcLevel--;
#line 1034 "cplus.met"
    return((PPTREE) -1) ;
#line 1034 "cplus.met"

#line 1034 "cplus.met"
linkage_specification_ret :
#line 1034 "cplus.met"
    
#line 1034 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1034 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1034 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1034 "cplus.met"
    return _retValue ;
#line 1034 "cplus.met"
}
#line 1034 "cplus.met"

#line 1034 "cplus.met"
#line 2619 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2619 "cplus.met"
{
#line 2619 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2619 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2619 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2619 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2619 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2619 "cplus.met"
#line 2619 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2619 "cplus.met"
#line 2621 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2621 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2621 "cplus.met"
    }
#line 2621 "cplus.met"
#line 2622 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2622 "cplus.met"
#line 2623 "cplus.met"
        {
#line 2623 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2623 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2623 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2623 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2623 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2623 "cplus.met"
            }
#line 2623 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2623 "cplus.met"
            expTree=_ptRes0;
#line 2623 "cplus.met"
        }
#line 2623 "cplus.met"
    } 
#line 2623 "cplus.met"
#line 2624 "cplus.met"
    {
#line 2624 "cplus.met"
        _retValue = expTree ;
#line 2624 "cplus.met"
        goto logical_and_expression_ret;
#line 2624 "cplus.met"
        
#line 2624 "cplus.met"
    }
#line 2624 "cplus.met"
#line 2624 "cplus.met"
#line 2624 "cplus.met"

#line 2625 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2625 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2625 "cplus.met"
return((PPTREE) 0);
#line 2625 "cplus.met"

#line 2625 "cplus.met"
logical_and_expression_exit :
#line 2625 "cplus.met"

#line 2625 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2625 "cplus.met"
    _funcLevel--;
#line 2625 "cplus.met"
    return((PPTREE) -1) ;
#line 2625 "cplus.met"

#line 2625 "cplus.met"
logical_and_expression_ret :
#line 2625 "cplus.met"
    
#line 2625 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2625 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2625 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2625 "cplus.met"
    return _retValue ;
#line 2625 "cplus.met"
}
#line 2625 "cplus.met"

#line 2625 "cplus.met"
#line 2611 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2611 "cplus.met"
{
#line 2611 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2611 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2611 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2611 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2611 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2611 "cplus.met"
#line 2611 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2611 "cplus.met"
#line 2613 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2613 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2613 "cplus.met"
    }
#line 2613 "cplus.met"
#line 2614 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2614 "cplus.met"
#line 2615 "cplus.met"
        {
#line 2615 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2615 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2615 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2615 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2615 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2615 "cplus.met"
            }
#line 2615 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2615 "cplus.met"
            expTree=_ptRes0;
#line 2615 "cplus.met"
        }
#line 2615 "cplus.met"
    } 
#line 2615 "cplus.met"
#line 2616 "cplus.met"
    {
#line 2616 "cplus.met"
        _retValue = expTree ;
#line 2616 "cplus.met"
        goto logical_or_expression_ret;
#line 2616 "cplus.met"
        
#line 2616 "cplus.met"
    }
#line 2616 "cplus.met"
#line 2616 "cplus.met"
#line 2616 "cplus.met"

#line 2617 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2617 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2617 "cplus.met"
return((PPTREE) 0);
#line 2617 "cplus.met"

#line 2617 "cplus.met"
logical_or_expression_exit :
#line 2617 "cplus.met"

#line 2617 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2617 "cplus.met"
    _funcLevel--;
#line 2617 "cplus.met"
    return((PPTREE) -1) ;
#line 2617 "cplus.met"

#line 2617 "cplus.met"
logical_or_expression_ret :
#line 2617 "cplus.met"
    
#line 2617 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2617 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2617 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2617 "cplus.met"
    return _retValue ;
#line 2617 "cplus.met"
}
#line 2617 "cplus.met"

#line 2617 "cplus.met"
#line 2111 "cplus.met"
PPTREE cplus::long_short_int_char ( int error_free)
#line 2111 "cplus.met"
{
#line 2111 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2111 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2111 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2111 "cplus.met"
    int _Debug = TRACE_RULE("long_short_int_char",TRACE_ENTER,(PPTREE)0);
#line 2111 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2111 "cplus.met"
#line 2112 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2112 "cplus.met"
    switch( lexEl.Value) {
#line 2112 "cplus.met"
#line 2113 "cplus.met"
        case INT : 
#line 2113 "cplus.met"
            tokenAhead = 0 ;
#line 2113 "cplus.met"
            CommTerm();
#line 2113 "cplus.met"
#line 2113 "cplus.met"
            {
#line 2113 "cplus.met"
                PPTREE _ptTree0=0;
#line 2113 "cplus.met"
                {
#line 2113 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2113 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2113 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2113 "cplus.met"
                }
#line 2113 "cplus.met"
                _retValue =_ptTree0;
#line 2113 "cplus.met"
                goto long_short_int_char_ret;
#line 2113 "cplus.met"
            }
#line 2113 "cplus.met"
            break;
#line 2113 "cplus.met"
#line 2114 "cplus.met"
        case LONG : 
#line 2114 "cplus.met"
            tokenAhead = 0 ;
#line 2114 "cplus.met"
            CommTerm();
#line 2114 "cplus.met"
#line 2115 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2115 "cplus.met"
            switch( lexEl.Value) {
#line 2115 "cplus.met"
#line 2116 "cplus.met"
                case INT : 
#line 2116 "cplus.met"
                    tokenAhead = 0 ;
#line 2116 "cplus.met"
                    CommTerm();
#line 2116 "cplus.met"
#line 2116 "cplus.met"
                    {
#line 2116 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2116 "cplus.met"
                        {
#line 2116 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2116 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2116 "cplus.met"
                            {
#line 2116 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2116 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2116 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2116 "cplus.met"
                            }
#line 2116 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2116 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2116 "cplus.met"
                        }
#line 2116 "cplus.met"
                        _retValue =_ptTree0;
#line 2116 "cplus.met"
                        goto long_short_int_char_ret;
#line 2116 "cplus.met"
                    }
#line 2116 "cplus.met"
                    break;
#line 2116 "cplus.met"
#line 2117 "cplus.met"
                default : 
#line 2117 "cplus.met"
#line 2117 "cplus.met"
                    {
#line 2117 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2117 "cplus.met"
                        {
#line 2117 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2117 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2117 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2117 "cplus.met"
                        }
#line 2117 "cplus.met"
                        _retValue =_ptTree0;
#line 2117 "cplus.met"
                        goto long_short_int_char_ret;
#line 2117 "cplus.met"
                    }
#line 2117 "cplus.met"
                    break;
#line 2117 "cplus.met"
            }
#line 2117 "cplus.met"
            break;
#line 2117 "cplus.met"
#line 2119 "cplus.met"
        case SHORT : 
#line 2119 "cplus.met"
            tokenAhead = 0 ;
#line 2119 "cplus.met"
            CommTerm();
#line 2119 "cplus.met"
#line 2120 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2120 "cplus.met"
            switch( lexEl.Value) {
#line 2120 "cplus.met"
#line 2121 "cplus.met"
                case INT : 
#line 2121 "cplus.met"
                    tokenAhead = 0 ;
#line 2121 "cplus.met"
                    CommTerm();
#line 2121 "cplus.met"
#line 2121 "cplus.met"
                    {
#line 2121 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2121 "cplus.met"
                        {
#line 2121 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2121 "cplus.met"
                            _ptRes1= MakeTree(TSHORT, 1);
#line 2121 "cplus.met"
                            {
#line 2121 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2121 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2121 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2121 "cplus.met"
                            }
#line 2121 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2121 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2121 "cplus.met"
                        }
#line 2121 "cplus.met"
                        _retValue =_ptTree0;
#line 2121 "cplus.met"
                        goto long_short_int_char_ret;
#line 2121 "cplus.met"
                    }
#line 2121 "cplus.met"
                    break;
#line 2121 "cplus.met"
#line 2122 "cplus.met"
                default : 
#line 2122 "cplus.met"
#line 2122 "cplus.met"
                    {
#line 2122 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2122 "cplus.met"
                        {
#line 2122 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2122 "cplus.met"
                            _ptRes1= MakeTree(TSHORT, 1);
#line 2122 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2122 "cplus.met"
                        }
#line 2122 "cplus.met"
                        _retValue =_ptTree0;
#line 2122 "cplus.met"
                        goto long_short_int_char_ret;
#line 2122 "cplus.met"
                    }
#line 2122 "cplus.met"
                    break;
#line 2122 "cplus.met"
            }
#line 2122 "cplus.met"
            break;
#line 2122 "cplus.met"
#line 2124 "cplus.met"
        case CHAR : 
#line 2124 "cplus.met"
            tokenAhead = 0 ;
#line 2124 "cplus.met"
            CommTerm();
#line 2124 "cplus.met"
#line 2124 "cplus.met"
            {
#line 2124 "cplus.met"
                PPTREE _ptTree0=0;
#line 2124 "cplus.met"
                {
#line 2124 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2124 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2124 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2124 "cplus.met"
                }
#line 2124 "cplus.met"
                _retValue =_ptTree0;
#line 2124 "cplus.met"
                goto long_short_int_char_ret;
#line 2124 "cplus.met"
            }
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
        default :
#line 2124 "cplus.met"
            CASE_EXIT(long_short_int_char_exit,"either int or long or short or char")
#line 2124 "cplus.met"
            break;
#line 2124 "cplus.met"
    }
#line 2124 "cplus.met"
#line 2124 "cplus.met"
#line 2125 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2125 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2125 "cplus.met"
return((PPTREE) 0);
#line 2125 "cplus.met"

#line 2125 "cplus.met"
long_short_int_char_exit :
#line 2125 "cplus.met"

#line 2125 "cplus.met"
    _Debug = TRACE_RULE("long_short_int_char",TRACE_EXIT,(PPTREE)0);
#line 2125 "cplus.met"
    _funcLevel--;
#line 2125 "cplus.met"
    return((PPTREE) -1) ;
#line 2125 "cplus.met"

#line 2125 "cplus.met"
long_short_int_char_ret :
#line 2125 "cplus.met"
    
#line 2125 "cplus.met"
    _Debug = TRACE_RULE("long_short_int_char",TRACE_RETURN,_retValue);
#line 2125 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2125 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2125 "cplus.met"
    return _retValue ;
#line 2125 "cplus.met"
}
#line 2125 "cplus.met"

#line 2125 "cplus.met"
#line 1903 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1903 "cplus.met"
{
#line 1903 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1903 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1903 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1903 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1903 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1903 "cplus.met"
#line 1903 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1903 "cplus.met"
#line 1905 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1905 "cplus.met"
    switch( lexEl.Value) {
#line 1905 "cplus.met"
#line 1906 "cplus.met"
        case META : 
#line 1906 "cplus.met"
        case DECLARE_SERIAL : 
#line 1906 "cplus.met"
            tokenAhead = 0 ;
#line 1906 "cplus.met"
            CommTerm();
#line 1906 "cplus.met"
#line 1906 "cplus.met"
            {
#line 1906 "cplus.met"
                PPTREE _ptRes0=0;
#line 1906 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1906 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1906 "cplus.met"
                retTree=_ptRes0;
#line 1906 "cplus.met"
            }
#line 1906 "cplus.met"
            break;
#line 1906 "cplus.met"
#line 1907 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1907 "cplus.met"
            tokenAhead = 0 ;
#line 1907 "cplus.met"
            CommTerm();
#line 1907 "cplus.met"
#line 1907 "cplus.met"
            {
#line 1907 "cplus.met"
                PPTREE _ptRes0=0;
#line 1907 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1907 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1907 "cplus.met"
                retTree=_ptRes0;
#line 1907 "cplus.met"
            }
#line 1907 "cplus.met"
            break;
#line 1907 "cplus.met"
#line 1908 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1908 "cplus.met"
            tokenAhead = 0 ;
#line 1908 "cplus.met"
            CommTerm();
#line 1908 "cplus.met"
#line 1908 "cplus.met"
            {
#line 1908 "cplus.met"
                PPTREE _ptRes0=0;
#line 1908 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1908 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1908 "cplus.met"
                retTree=_ptRes0;
#line 1908 "cplus.met"
            }
#line 1908 "cplus.met"
            break;
#line 1908 "cplus.met"
#line 1910 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1910 "cplus.met"
            tokenAhead = 0 ;
#line 1910 "cplus.met"
            CommTerm();
#line 1910 "cplus.met"
#line 1910 "cplus.met"
            {
#line 1910 "cplus.met"
                PPTREE _ptRes0=0;
#line 1910 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1910 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1910 "cplus.met"
                retTree=_ptRes0;
#line 1910 "cplus.met"
            }
#line 1910 "cplus.met"
            break;
#line 1910 "cplus.met"
#line 1912 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1912 "cplus.met"
            tokenAhead = 0 ;
#line 1912 "cplus.met"
            CommTerm();
#line 1912 "cplus.met"
#line 1912 "cplus.met"
            {
#line 1912 "cplus.met"
                PPTREE _ptRes0=0;
#line 1912 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1912 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1912 "cplus.met"
                retTree=_ptRes0;
#line 1912 "cplus.met"
            }
#line 1912 "cplus.met"
            break;
#line 1912 "cplus.met"
#line 1914 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1914 "cplus.met"
            tokenAhead = 0 ;
#line 1914 "cplus.met"
            CommTerm();
#line 1914 "cplus.met"
#line 1914 "cplus.met"
            {
#line 1914 "cplus.met"
                PPTREE _ptRes0=0;
#line 1914 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1914 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1914 "cplus.met"
                retTree=_ptRes0;
#line 1914 "cplus.met"
            }
#line 1914 "cplus.met"
            break;
#line 1914 "cplus.met"
#line 1916 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1916 "cplus.met"
            tokenAhead = 0 ;
#line 1916 "cplus.met"
            CommTerm();
#line 1916 "cplus.met"
#line 1916 "cplus.met"
            {
#line 1916 "cplus.met"
                PPTREE _ptRes0=0;
#line 1916 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1916 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1916 "cplus.met"
                retTree=_ptRes0;
#line 1916 "cplus.met"
            }
#line 1916 "cplus.met"
            break;
#line 1916 "cplus.met"
#line 1918 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1918 "cplus.met"
            tokenAhead = 0 ;
#line 1918 "cplus.met"
            CommTerm();
#line 1918 "cplus.met"
#line 1918 "cplus.met"
            {
#line 1918 "cplus.met"
                PPTREE _ptRes0=0;
#line 1918 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1918 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1918 "cplus.met"
                retTree=_ptRes0;
#line 1918 "cplus.met"
            }
#line 1918 "cplus.met"
            break;
#line 1918 "cplus.met"
#line 1919 "cplus.met"
        case CATCH_UPPER : 
#line 1919 "cplus.met"
            tokenAhead = 0 ;
#line 1919 "cplus.met"
            CommTerm();
#line 1919 "cplus.met"
#line 1919 "cplus.met"
            {
#line 1919 "cplus.met"
                PPTREE _ptRes0=0;
#line 1919 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1919 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1919 "cplus.met"
                retTree=_ptRes0;
#line 1919 "cplus.met"
            }
#line 1919 "cplus.met"
            break;
#line 1919 "cplus.met"
#line 1920 "cplus.met"
        case CATCH_ALL : 
#line 1920 "cplus.met"
            tokenAhead = 0 ;
#line 1920 "cplus.met"
            CommTerm();
#line 1920 "cplus.met"
#line 1920 "cplus.met"
            {
#line 1920 "cplus.met"
                PPTREE _ptRes0=0;
#line 1920 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1920 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1920 "cplus.met"
                retTree=_ptRes0;
#line 1920 "cplus.met"
            }
#line 1920 "cplus.met"
            break;
#line 1920 "cplus.met"
#line 1921 "cplus.met"
        case AND_CATCH : 
#line 1921 "cplus.met"
            tokenAhead = 0 ;
#line 1921 "cplus.met"
            CommTerm();
#line 1921 "cplus.met"
#line 1921 "cplus.met"
            {
#line 1921 "cplus.met"
                PPTREE _ptRes0=0;
#line 1921 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1921 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1921 "cplus.met"
                retTree=_ptRes0;
#line 1921 "cplus.met"
            }
#line 1921 "cplus.met"
            break;
#line 1921 "cplus.met"
#line 1922 "cplus.met"
        default : 
#line 1922 "cplus.met"
#line 1922 "cplus.met"
            
#line 1922 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1922 "cplus.met"
            goto macro_exit;
#line 1922 "cplus.met"
            break;
#line 1922 "cplus.met"
    }
#line 1922 "cplus.met"
#line 1924 "cplus.met"
    {
#line 1924 "cplus.met"
        PPTREE _ptRes0=0;
#line 1924 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1924 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1924 "cplus.met"
        retTree=_ptRes0;
#line 1924 "cplus.met"
    }
#line 1924 "cplus.met"
#line 1925 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1925 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1925 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1925 "cplus.met"
    } else {
#line 1925 "cplus.met"
        tokenAhead = 0 ;
#line 1925 "cplus.met"
    }
#line 1925 "cplus.met"
#line 1926 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 60, cplus)){
#line 1926 "cplus.met"
#line 1927 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1927 "cplus.met"
#line 1927 "cplus.met"
    }
#line 1927 "cplus.met"
#line 1928 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1928 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1928 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1928 "cplus.met"
    } else {
#line 1928 "cplus.met"
        tokenAhead = 0 ;
#line 1928 "cplus.met"
    }
#line 1928 "cplus.met"
#line 1929 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1929 "cplus.met"
#line 1929 "cplus.met"
    }
#line 1929 "cplus.met"
#line 1931 "cplus.met"
    {
#line 1931 "cplus.met"
        _retValue = retTree ;
#line 1931 "cplus.met"
        goto macro_ret;
#line 1931 "cplus.met"
        
#line 1931 "cplus.met"
    }
#line 1931 "cplus.met"
#line 1931 "cplus.met"
#line 1931 "cplus.met"

#line 1932 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1932 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1932 "cplus.met"
return((PPTREE) 0);
#line 1932 "cplus.met"

#line 1932 "cplus.met"
macro_exit :
#line 1932 "cplus.met"

#line 1932 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1932 "cplus.met"
    _funcLevel--;
#line 1932 "cplus.met"
    return((PPTREE) -1) ;
#line 1932 "cplus.met"

#line 1932 "cplus.met"
macro_ret :
#line 1932 "cplus.met"
    
#line 1932 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1932 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1932 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1932 "cplus.met"
    return _retValue ;
#line 1932 "cplus.met"
}
#line 1932 "cplus.met"

#line 1932 "cplus.met"
