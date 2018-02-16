/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1223 "cplus.met"
PPTREE cplus::ext_decl_ifdef_dir ( int error_free)
#line 1223 "cplus.met"
{
#line 1223 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1223 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1223 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1223 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1223 "cplus.met"
    int _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_ENTER,(PPTREE)0);
#line 1223 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1223 "cplus.met"
#line 1223 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0;
#line 1223 "cplus.met"
#line 1223 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,list2 = (PPTREE) 0,express = (PPTREE) 0;
#line 1223 "cplus.met"
#line 1225 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(IFDEF_DIR,"IFDEF_DIR") && (tokenAhead = 0,CommTerm(),1)){
#line 1225 "cplus.met"
#line 1226 "cplus.met"
#line 1227 "cplus.met"
        {
#line 1227 "cplus.met"
            keepCarriage = 1 ;
#line 1227 "cplus.met"
#line 1228 "cplus.met"
#line 1229 "cplus.met"
            {
#line 1229 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 1229 "cplus.met"
                _ptRes0= MakeTree(IFDEF_DIR, 3);
#line 1229 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1229 "cplus.met"
                    MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1229 "cplus.met"
                }
#line 1229 "cplus.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1229 "cplus.met"
                retTree=_ptRes0;
#line 1229 "cplus.met"
            }
#line 1229 "cplus.met"
#line 1230 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1230 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1230 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1230 "cplus.met"
            } else {
#line 1230 "cplus.met"
                tokenAhead = 0 ;
#line 1230 "cplus.met"
            }
#line 1230 "cplus.met"
#line 1230 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1230 "cplus.met"
        }
#line 1230 "cplus.met"
#line 1230 "cplus.met"
#line 1231 "cplus.met"
    } else {
#line 1231 "cplus.met"
#line 1234 "cplus.met"
#line 1235 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1235 "cplus.met"
        if ( ! TERM_OR_META(IFNDEF_DIR,"IFNDEF_DIR") || !(CommTerm(),1)) {
#line 1235 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            TOKEN_EXIT(ext_decl_ifdef_dir_exit,"IFNDEF_DIR")
#line 1235 "cplus.met"
        } else {
#line 1235 "cplus.met"
            tokenAhead = 0 ;
#line 1235 "cplus.met"
        }
#line 1235 "cplus.met"
#line 1236 "cplus.met"
        {
#line 1236 "cplus.met"
            keepCarriage = 1 ;
#line 1236 "cplus.met"
#line 1237 "cplus.met"
#line 1238 "cplus.met"
            if ( (express=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 1238 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1238 "cplus.met"
            }
#line 1238 "cplus.met"
#line 1239 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1239 "cplus.met"
            if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1239 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"CARRIAGE_RETURN")
#line 1239 "cplus.met"
            } else {
#line 1239 "cplus.met"
                tokenAhead = 0 ;
#line 1239 "cplus.met"
            }
#line 1239 "cplus.met"
#line 1239 "cplus.met"
            keepCarriage =  _oldkeepCarriage;
#line 1239 "cplus.met"
        }
#line 1239 "cplus.met"
#line 1241 "cplus.met"
        {
#line 1241 "cplus.met"
            PPTREE _ptRes0=0;
#line 1241 "cplus.met"
            _ptRes0= MakeTree(IFNDEF_DIR, 3);
#line 1241 "cplus.met"
            ReplaceTree(_ptRes0, 1, express );
#line 1241 "cplus.met"
            retTree=_ptRes0;
#line 1241 "cplus.met"
        }
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    }
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    _addlist1 = list ;
#line 1241 "cplus.met"
#line 1245 "cplus.met"
    while (((! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELSE_DIR,"ELSE_DIR"))) && 
#line 1245 "cplus.met"
           (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ELIF_DIR,"ELIF_DIR")))) && 
#line 1245 "cplus.met"
          (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1245 "cplus.met"
#line 1247 "cplus.met"
#line 1247 "cplus.met"
        {
#line 1247 "cplus.met"
            PPTREE _ptTree0=0;
#line 1247 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1247 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1247 "cplus.met"
            }
#line 1247 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1247 "cplus.met"
        }
#line 1247 "cplus.met"
#line 1247 "cplus.met"
        if (list){
#line 1247 "cplus.met"
#line 1247 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1247 "cplus.met"
        } else {
#line 1247 "cplus.met"
#line 1247 "cplus.met"
            list = _addlist1 ;
#line 1247 "cplus.met"
        }
#line 1247 "cplus.met"
    } 
#line 1247 "cplus.met"
#line 1248 "cplus.met"
    {
#line 1248 "cplus.met"
        PPTREE _ptTree0=0;
#line 1248 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1248 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
            PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1248 "cplus.met"
        }
#line 1248 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1248 "cplus.met"
    }
#line 1248 "cplus.met"
#line 1249 "cplus.met"
    ReplaceTree(retTree ,2 ,list );
#line 1249 "cplus.met"
#line 1250 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1250 "cplus.met"
    switch( lexEl.Value) {
#line 1250 "cplus.met"
#line 1251 "cplus.met"
        case META : 
#line 1251 "cplus.met"
        case ELSE_DIR : 
#line 1251 "cplus.met"
            tokenAhead = 0 ;
#line 1251 "cplus.met"
            CommTerm();
#line 1251 "cplus.met"
#line 1252 "cplus.met"
#line 1252 "cplus.met"
            _addlist2 = list2 ;
#line 1252 "cplus.met"
#line 1253 "cplus.met"
            while (((tokenAhead && tokenAhead != -1)|| (c != EOF)) && 
#line 1253 "cplus.met"
                  (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( ENDIF_DIR,"ENDIF_DIR")))) { 
#line 1253 "cplus.met"
#line 1254 "cplus.met"
#line 1254 "cplus.met"
                {
#line 1254 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1254 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(ext_all_ext)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1254 "cplus.met"
                        MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1254 "cplus.met"
                    }
#line 1254 "cplus.met"
                    _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1254 "cplus.met"
                }
#line 1254 "cplus.met"
#line 1254 "cplus.met"
                if (list2){
#line 1254 "cplus.met"
#line 1254 "cplus.met"
                    _addlist2 = SonTree (_addlist2 ,2 );
#line 1254 "cplus.met"
                } else {
#line 1254 "cplus.met"
#line 1254 "cplus.met"
                    list2 = _addlist2 ;
#line 1254 "cplus.met"
                }
#line 1254 "cplus.met"
            } 
#line 1254 "cplus.met"
#line 1255 "cplus.met"
            {
#line 1255 "cplus.met"
                PPTREE _ptTree0=0;
#line 1255 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(none_statement)(error_free), 100, cplus))== (PPTREE) -1 ) {
#line 1255 "cplus.met"
                    MulFreeTree(7,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                    PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1255 "cplus.met"
                }
#line 1255 "cplus.met"
                list2 =AddList(list2 , _ptTree0);
#line 1255 "cplus.met"
            }
#line 1255 "cplus.met"
#line 1256 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1256 "cplus.met"
            if ( ! TERM_OR_META(ENDIF_DIR,"ENDIF_DIR") || !(CommTerm(),1)) {
#line 1256 "cplus.met"
                MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
                TOKEN_EXIT(ext_decl_ifdef_dir_exit,"ENDIF_DIR")
#line 1256 "cplus.met"
            } else {
#line 1256 "cplus.met"
                tokenAhead = 0 ;
#line 1256 "cplus.met"
            }
#line 1256 "cplus.met"
#line 1257 "cplus.met"
            {
#line 1257 "cplus.met"
                PPTREE _ptTree0=0;
#line 1257 "cplus.met"
                _ptTree0=ReplaceTree(retTree ,3 ,list2 );
#line 1257 "cplus.met"
                _retValue =_ptTree0;
#line 1257 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1257 "cplus.met"
            }
#line 1257 "cplus.met"
#line 1257 "cplus.met"
            break;
#line 1257 "cplus.met"
#line 1259 "cplus.met"
        case ELIF_DIR : 
#line 1259 "cplus.met"
            tokenAhead = 0 ;
#line 1259 "cplus.met"
            CommTerm();
#line 1259 "cplus.met"
#line 1259 "cplus.met"
            {
#line 1259 "cplus.met"
                PPTREE _ptTree0=0;
#line 1259 "cplus.met"
                {
#line 1259 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1259 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_decl_if_dir)(error_free), 71, cplus))== (PPTREE) -1 ) {
#line 1259 "cplus.met"
                        MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,_addlist2,express,list,list2,retTree);
                        PROG_EXIT(ext_decl_ifdef_dir_exit,"ext_decl_ifdef_dir")
#line 1259 "cplus.met"
                    }
#line 1259 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 3 , _ptTree1);
#line 1259 "cplus.met"
                }
#line 1259 "cplus.met"
                _retValue =_ptTree0;
#line 1259 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1259 "cplus.met"
            }
#line 1259 "cplus.met"
            break;
#line 1259 "cplus.met"
#line 1260 "cplus.met"
        case ENDIF_DIR : 
#line 1260 "cplus.met"
            tokenAhead = 0 ;
#line 1260 "cplus.met"
            CommTerm();
#line 1260 "cplus.met"
#line 1260 "cplus.met"
            {
#line 1260 "cplus.met"
                _retValue = retTree ;
#line 1260 "cplus.met"
                goto ext_decl_ifdef_dir_ret;
#line 1260 "cplus.met"
                
#line 1260 "cplus.met"
            }
#line 1260 "cplus.met"
            break;
#line 1260 "cplus.met"
        default :
#line 1260 "cplus.met"
            MulFreeTree(6,_addlist1,_addlist2,express,list,list2,retTree);
            CASE_EXIT(ext_decl_ifdef_dir_exit,"either ELSE_DIR or ELIF_DIR or ENDIF_DIR")
#line 1260 "cplus.met"
            break;
#line 1260 "cplus.met"
    }
#line 1260 "cplus.met"
#line 1260 "cplus.met"
#line 1261 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1261 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1261 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1261 "cplus.met"
return((PPTREE) 0);
#line 1261 "cplus.met"

#line 1261 "cplus.met"
ext_decl_ifdef_dir_exit :
#line 1261 "cplus.met"

#line 1261 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_EXIT,(PPTREE)0);
#line 1261 "cplus.met"
    _funcLevel--;
#line 1261 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1261 "cplus.met"
    return((PPTREE) -1) ;
#line 1261 "cplus.met"

#line 1261 "cplus.met"
ext_decl_ifdef_dir_ret :
#line 1261 "cplus.met"
    
#line 1261 "cplus.met"
    _Debug = TRACE_RULE("ext_decl_ifdef_dir",TRACE_RETURN,_retValue);
#line 1261 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1261 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1261 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1261 "cplus.met"
    return _retValue ;
#line 1261 "cplus.met"
}
#line 1261 "cplus.met"

#line 1261 "cplus.met"
#line 3323 "cplus.met"
PPTREE cplus::for_statement ( int error_free)
#line 3323 "cplus.met"
{
#line 3323 "cplus.met"
    int  _oldswitchContext = switchContext;
#line 3323 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3323 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3323 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3323 "cplus.met"
    int _Debug = TRACE_RULE("for_statement",TRACE_ENTER,(PPTREE)0);
#line 3323 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3323 "cplus.met"
#line 3323 "cplus.met"
    PPTREE statTree = (PPTREE) 0,opt = (PPTREE) 0,stat = (PPTREE) 0;
#line 3323 "cplus.met"
#line 3325 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3325 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 3325 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,"(")
#line 3325 "cplus.met"
    } else {
#line 3325 "cplus.met"
        tokenAhead = 0 ;
#line 3325 "cplus.met"
    }
#line 3325 "cplus.met"
#line 3326 "cplus.met"
    {
#line 3326 "cplus.met"
        PPTREE _ptRes0=0;
#line 3326 "cplus.met"
        _ptRes0= MakeTree(FOR, 4);
#line 3326 "cplus.met"
        statTree=_ptRes0;
#line 3326 "cplus.met"
    }
#line 3326 "cplus.met"
#line 3327 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression_for), 61, cplus)){
#line 3327 "cplus.met"
#line 3328 "cplus.met"
        ReplaceTree(statTree ,1 ,opt );
#line 3328 "cplus.met"
#line 3328 "cplus.met"
    } else {
#line 3328 "cplus.met"
#line 3330 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration_for), 39, cplus)){
#line 3330 "cplus.met"
#line 3331 "cplus.met"
            ReplaceTree(statTree ,1 ,opt );
#line 3331 "cplus.met"
#line 3331 "cplus.met"
        }
#line 3331 "cplus.met"
    }
#line 3331 "cplus.met"
#line 3332 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 3332 "cplus.met"
#line 3333 "cplus.met"
#line 3334 "cplus.met"
        {
#line 3334 "cplus.met"
            PPTREE _ptTree0=0;
#line 3334 "cplus.met"
            {
#line 3334 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 3334 "cplus.met"
                _ptRes1= MakeTree(ALL_OF, 2);
#line 3334 "cplus.met"
                ReplaceTree(_ptRes1, 1, opt );
#line 3334 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(expression)(error_free), 60, cplus))== (PPTREE) -1 ) {
#line 3334 "cplus.met"
                    MulFreeTree(6,_ptRes1,_ptTree1,_ptTree0,opt,stat,statTree);
                    PROG_EXIT(for_statement_exit,"for_statement")
#line 3334 "cplus.met"
                }
#line 3334 "cplus.met"
                ReplaceTree(_ptRes1, 2, _ptTree1);
#line 3334 "cplus.met"
                _ptTree0=_ptRes1;
#line 3334 "cplus.met"
            }
#line 3334 "cplus.met"
            ReplaceTree(statTree , 1 , _ptTree0);
#line 3334 "cplus.met"
        }
#line 3334 "cplus.met"
#line 3334 "cplus.met"
#line 3334 "cplus.met"
    } else {
#line 3334 "cplus.met"
#line 3337 "cplus.met"
#line 3338 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3338 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3338 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3338 "cplus.met"
        } else {
#line 3338 "cplus.met"
            tokenAhead = 0 ;
#line 3338 "cplus.met"
        }
#line 3338 "cplus.met"
#line 3339 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3339 "cplus.met"
#line 3340 "cplus.met"
            ReplaceTree(statTree ,2 ,opt );
#line 3340 "cplus.met"
#line 3340 "cplus.met"
        }
#line 3340 "cplus.met"
#line 3341 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3341 "cplus.met"
        if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 3341 "cplus.met"
            MulFreeTree(3,opt,stat,statTree);
            TOKEN_EXIT(for_statement_exit,";")
#line 3341 "cplus.met"
        } else {
#line 3341 "cplus.met"
            tokenAhead = 0 ;
#line 3341 "cplus.met"
        }
#line 3341 "cplus.met"
#line 3342 "cplus.met"
        if (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(expression), 60, cplus)){
#line 3342 "cplus.met"
#line 3343 "cplus.met"
            ReplaceTree(statTree ,3 ,opt );
#line 3343 "cplus.met"
#line 3343 "cplus.met"
        }
#line 3343 "cplus.met"
#line 3343 "cplus.met"
    }
#line 3343 "cplus.met"
#line 3345 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3345 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3345 "cplus.met"
        MulFreeTree(3,opt,stat,statTree);
        TOKEN_EXIT(for_statement_exit,")")
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
        switchContext = 0 ;
#line 3346 "cplus.met"
#line 3347 "cplus.met"
        {
#line 3347 "cplus.met"
            PPTREE _ptTree0=0;
#line 3347 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 133, cplus))== (PPTREE) -1 ) {
#line 3347 "cplus.met"
                MulFreeTree(4,_ptTree0,opt,stat,statTree);
                PROG_EXIT(for_statement_exit,"for_statement")
#line 3347 "cplus.met"
            }
#line 3347 "cplus.met"
            ReplaceTree(statTree , 4 , _ptTree0);
#line 3347 "cplus.met"
        }
#line 3347 "cplus.met"
        switchContext =  _oldswitchContext;
#line 3347 "cplus.met"
    }
#line 3347 "cplus.met"
#line 3348 "cplus.met"
    {
#line 3348 "cplus.met"
        _retValue = statTree ;
#line 3348 "cplus.met"
        goto for_statement_ret;
#line 3348 "cplus.met"
        
#line 3348 "cplus.met"
    }
#line 3348 "cplus.met"
#line 3348 "cplus.met"
#line 3348 "cplus.met"

#line 3349 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3349 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3349 "cplus.met"
switchContext =  _oldswitchContext;
#line 3349 "cplus.met"
return((PPTREE) 0);
#line 3349 "cplus.met"

#line 3349 "cplus.met"
for_statement_exit :
#line 3349 "cplus.met"

#line 3349 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_EXIT,(PPTREE)0);
#line 3349 "cplus.met"
    _funcLevel--;
#line 3349 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3349 "cplus.met"
    return((PPTREE) -1) ;
#line 3349 "cplus.met"

#line 3349 "cplus.met"
for_statement_ret :
#line 3349 "cplus.met"
    
#line 3349 "cplus.met"
    _Debug = TRACE_RULE("for_statement",TRACE_RETURN,_retValue);
#line 3349 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3349 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3349 "cplus.met"
    switchContext =  _oldswitchContext;
#line 3349 "cplus.met"
    return _retValue ;
#line 3349 "cplus.met"
}
#line 3349 "cplus.met"

#line 3349 "cplus.met"
#line 3252 "cplus.met"
PPTREE cplus::func_declaration ( int error_free)
#line 3252 "cplus.met"
{
#line 3252 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3252 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3252 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3252 "cplus.met"
    int _Debug = TRACE_RULE("func_declaration",TRACE_ENTER,(PPTREE)0);
#line 3252 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3252 "cplus.met"
#line 3252 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3252 "cplus.met"
#line 3252 "cplus.met"
    PPTREE funcTree = (PPTREE) 0,opt = (PPTREE) 0,decList = (PPTREE) 0,range = (PPTREE) 0,exception = (PPTREE) 0;
#line 3252 "cplus.met"
#line 3256 "cplus.met"
    if (! (NPUSH_CALL_AFF_VERIF(funcTree = ,_Tak(type_and_declarator), 139, cplus))){
#line 3256 "cplus.met"
#line 3258 "cplus.met"
#line 3259 "cplus.met"
        {
#line 3259 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 3259 "cplus.met"
            _ptRes0= MakeTree(FUNC, 9);
#line 3259 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(sc_specifier)(error_free), 123, cplus))== (PPTREE) -1 ) {
#line 3259 "cplus.met"
                MulFreeTree(8,_ptRes0,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3259 "cplus.met"
            }
#line 3259 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 3259 "cplus.met"
            funcTree=_ptRes0;
#line 3259 "cplus.met"
        }
#line 3259 "cplus.met"
#line 3260 "cplus.met"
        {
#line 3260 "cplus.met"
            PPTREE _ptTree0=0;
#line 3260 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 3260 "cplus.met"
                MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3260 "cplus.met"
            }
#line 3260 "cplus.met"
            ReplaceTree(funcTree , 3 , _ptTree0);
#line 3260 "cplus.met"
        }
#line 3260 "cplus.met"
#line 3260 "cplus.met"
#line 3260 "cplus.met"
    }
#line 3260 "cplus.met"
#line 3262 "cplus.met"
    {
#line 3262 "cplus.met"
        PPTREE _ptTree0=0;
#line 3262 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(parameter_list_extended)(error_free), 104, cplus))== (PPTREE) -1 ) {
#line 3262 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3262 "cplus.met"
        }
#line 3262 "cplus.met"
        ReplaceTree(funcTree , 4 , _ptTree0);
#line 3262 "cplus.met"
    }
#line 3262 "cplus.met"
#line 3263 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(range = ,_Tak(range_modifier_function), 119, cplus)){
#line 3263 "cplus.met"
#line 3264 "cplus.met"
        ReplaceTree(funcTree ,5 ,range );
#line 3264 "cplus.met"
#line 3264 "cplus.met"
    }
#line 3264 "cplus.met"
#line 3265 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(exception = ,_Tak(exception_list), 58, cplus)){
#line 3265 "cplus.met"
#line 3266 "cplus.met"
        ReplaceTree(funcTree ,9 ,exception );
#line 3266 "cplus.met"
#line 3266 "cplus.met"
    }
#line 3266 "cplus.met"
#line 3266 "cplus.met"
    _addlist1 = decList ;
#line 3266 "cplus.met"
#line 3267 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(opt = ,_Tak(data_declaration), 38, cplus)) { 
#line 3267 "cplus.met"
#line 3268 "cplus.met"
#line 3268 "cplus.met"
        _addlist1 =AddList(_addlist1 ,opt );
#line 3268 "cplus.met"
#line 3268 "cplus.met"
        if (decList){
#line 3268 "cplus.met"
#line 3268 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 3268 "cplus.met"
        } else {
#line 3268 "cplus.met"
#line 3268 "cplus.met"
            decList = _addlist1 ;
#line 3268 "cplus.met"
        }
#line 3268 "cplus.met"
    } 
#line 3268 "cplus.met"
#line 3269 "cplus.met"
    ReplaceTree(funcTree ,6 ,decList );
#line 3269 "cplus.met"
#line 3270 "cplus.met"
    {
#line 3270 "cplus.met"
        PPTREE _ptTree0=0;
#line 3270 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(ctor_initializer)(error_free), 30, cplus))== (PPTREE) -1 ) {
#line 3270 "cplus.met"
            MulFreeTree(7,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
            PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3270 "cplus.met"
        }
#line 3270 "cplus.met"
        ReplaceTree(funcTree , 7 , _ptTree0);
#line 3270 "cplus.met"
    }
#line 3270 "cplus.met"
#line 3271 "cplus.met"
    {
#line 3271 "cplus.met"
        PPTREE _ptTree0=0;
#line 3271 "cplus.met"
        {
#line 3271 "cplus.met"
            PPTREE _ptTree1=0;
#line 3271 "cplus.met"
            if ( (_ptTree1=NQUICK_CALL(_Tak(compound_statement)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 3271 "cplus.met"
                MulFreeTree(8,_ptTree1,_ptTree0,_addlist1,decList,exception,funcTree,opt,range);
                PROG_EXIT(func_declaration_exit,"func_declaration")
#line 3271 "cplus.met"
            }
#line 3271 "cplus.met"
            _ptTree0=ReplaceTree(funcTree , 8 , _ptTree1);
#line 3271 "cplus.met"
        }
#line 3271 "cplus.met"
        _retValue =_ptTree0;
#line 3271 "cplus.met"
        goto func_declaration_ret;
#line 3271 "cplus.met"
    }
#line 3271 "cplus.met"
#line 3271 "cplus.met"
#line 3271 "cplus.met"

#line 3272 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3272 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3272 "cplus.met"
return((PPTREE) 0);
#line 3272 "cplus.met"

#line 3272 "cplus.met"
func_declaration_exit :
#line 3272 "cplus.met"

#line 3272 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_EXIT,(PPTREE)0);
#line 3272 "cplus.met"
    _funcLevel--;
#line 3272 "cplus.met"
    return((PPTREE) -1) ;
#line 3272 "cplus.met"

#line 3272 "cplus.met"
func_declaration_ret :
#line 3272 "cplus.met"
    
#line 3272 "cplus.met"
    _Debug = TRACE_RULE("func_declaration",TRACE_RETURN,_retValue);
#line 3272 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3272 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3272 "cplus.met"
    return _retValue ;
#line 3272 "cplus.met"
}
#line 3272 "cplus.met"

#line 3272 "cplus.met"
#line 2343 "cplus.met"
PPTREE cplus::func_declarator ( int error_free)
#line 2343 "cplus.met"
{
#line 2343 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2343 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2343 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2343 "cplus.met"
    int _Debug = TRACE_RULE("func_declarator",TRACE_ENTER,(PPTREE)0);
#line 2343 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2343 "cplus.met"
#line 2343 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 2343 "cplus.met"
#line 2345 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(range_modifier), 118, cplus)){
#line 2345 "cplus.met"
#line 2346 "cplus.met"
        {
#line 2346 "cplus.met"
            PPTREE _ptTree0=0;
#line 2346 "cplus.met"
            {
#line 2346 "cplus.met"
                PPTREE _ptTree1=0;
#line 2346 "cplus.met"
                if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 2346 "cplus.met"
                    MulFreeTree(3,_ptTree1,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2346 "cplus.met"
                }
#line 2346 "cplus.met"
                _ptTree0=ReplaceTree(valTree , 2 , _ptTree1);
#line 2346 "cplus.met"
            }
#line 2346 "cplus.met"
            _retValue =_ptTree0;
#line 2346 "cplus.met"
            goto func_declarator_ret;
#line 2346 "cplus.met"
        }
#line 2346 "cplus.met"
    }
#line 2346 "cplus.met"
#line 2347 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2347 "cplus.met"
    switch( lexEl.Value) {
#line 2347 "cplus.met"
#line 2348 "cplus.met"
        case ETOI : 
#line 2348 "cplus.met"
            tokenAhead = 0 ;
#line 2348 "cplus.met"
            CommTerm();
#line 2348 "cplus.met"
#line 2348 "cplus.met"
            {
#line 2348 "cplus.met"
                PPTREE _ptTree0=0;
#line 2348 "cplus.met"
                {
#line 2348 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2348 "cplus.met"
                    _ptRes1= MakeTree(TYP_ADDR, 1);
#line 2348 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 2348 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2348 "cplus.met"
                    }
#line 2348 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2348 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2348 "cplus.met"
                }
#line 2348 "cplus.met"
                _retValue =_ptTree0;
#line 2348 "cplus.met"
                goto func_declarator_ret;
#line 2348 "cplus.met"
            }
#line 2348 "cplus.met"
            break;
#line 2348 "cplus.met"
#line 2349 "cplus.met"
        case ETCO : 
#line 2349 "cplus.met"
            tokenAhead = 0 ;
#line 2349 "cplus.met"
            CommTerm();
#line 2349 "cplus.met"
#line 2349 "cplus.met"
            {
#line 2349 "cplus.met"
                PPTREE _ptTree0=0;
#line 2349 "cplus.met"
                {
#line 2349 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 2349 "cplus.met"
                    _ptRes1= MakeTree(TYP_REF, 1);
#line 2349 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(func_declarator)(error_free), 75, cplus))== (PPTREE) -1 ) {
#line 2349 "cplus.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,valTree);
                        PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2349 "cplus.met"
                    }
#line 2349 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2349 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2349 "cplus.met"
                }
#line 2349 "cplus.met"
                _retValue =_ptTree0;
#line 2349 "cplus.met"
                goto func_declarator_ret;
#line 2349 "cplus.met"
            }
#line 2349 "cplus.met"
            break;
#line 2349 "cplus.met"
#line 2350 "cplus.met"
        case TILD : 
#line 2350 "cplus.met"
#line 2350 "cplus.met"
            {
#line 2350 "cplus.met"
                PPTREE _ptTree0=0;
#line 2350 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2350 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2350 "cplus.met"
                }
#line 2350 "cplus.met"
                _retValue =_ptTree0;
#line 2350 "cplus.met"
                goto func_declarator_ret;
#line 2350 "cplus.met"
            }
#line 2350 "cplus.met"
            break;
#line 2350 "cplus.met"
#line 2351 "cplus.met"
        case META : 
#line 2351 "cplus.met"
        case IDENT : 
#line 2351 "cplus.met"
#line 2351 "cplus.met"
            {
#line 2351 "cplus.met"
                PPTREE _ptTree0=0;
#line 2351 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 113, cplus))== (PPTREE) -1 ) {
#line 2351 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2351 "cplus.met"
                }
#line 2351 "cplus.met"
                _retValue =_ptTree0;
#line 2351 "cplus.met"
                goto func_declarator_ret;
#line 2351 "cplus.met"
            }
#line 2351 "cplus.met"
            break;
#line 2351 "cplus.met"
#line 2352 "cplus.met"
        case OPERATOR : 
#line 2352 "cplus.met"
#line 2352 "cplus.met"
            {
#line 2352 "cplus.met"
                PPTREE _ptTree0=0;
#line 2352 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(operator_function_name)(error_free), 101, cplus))== (PPTREE) -1 ) {
#line 2352 "cplus.met"
                    MulFreeTree(2,_ptTree0,valTree);
                    PROG_EXIT(func_declarator_exit,"func_declarator")
#line 2352 "cplus.met"
                }
#line 2352 "cplus.met"
                _retValue =_ptTree0;
#line 2352 "cplus.met"
                goto func_declarator_ret;
#line 2352 "cplus.met"
            }
#line 2352 "cplus.met"
            break;
#line 2352 "cplus.met"
        default :
#line 2352 "cplus.met"
            MulFreeTree(1,valTree);
            CASE_EXIT(func_declarator_exit,"either * or & or ~ or IDENT or operator")
#line 2352 "cplus.met"
            break;
#line 2352 "cplus.met"
    }
#line 2352 "cplus.met"
#line 2352 "cplus.met"
#line 2353 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2353 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2353 "cplus.met"
return((PPTREE) 0);
#line 2353 "cplus.met"

#line 2353 "cplus.met"
func_declarator_exit :
#line 2353 "cplus.met"

#line 2353 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_EXIT,(PPTREE)0);
#line 2353 "cplus.met"
    _funcLevel--;
#line 2353 "cplus.met"
    return((PPTREE) -1) ;
#line 2353 "cplus.met"

#line 2353 "cplus.met"
func_declarator_ret :
#line 2353 "cplus.met"
    
#line 2353 "cplus.met"
    _Debug = TRACE_RULE("func_declarator",TRACE_RETURN,_retValue);
#line 2353 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2353 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2353 "cplus.met"
    return _retValue ;
#line 2353 "cplus.met"
}
#line 2353 "cplus.met"

#line 2353 "cplus.met"
#line 3306 "cplus.met"
PPTREE cplus::ident_mul ( int error_free)
#line 3306 "cplus.met"
{
#line 3306 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3306 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3306 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3306 "cplus.met"
    int _Debug = TRACE_RULE("ident_mul",TRACE_ENTER,(PPTREE)0);
#line 3306 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3306 "cplus.met"
#line 3307 "cplus.met"
    if ( (NQUICK_CALL(_Tak(complete_class_name)(error_free), 25, cplus))== (PPTREE) -1 ) {
#line 3307 "cplus.met"
            PROG_EXIT(ident_mul_exit,"ident_mul")
#line 3307 "cplus.met"
    }
#line 3307 "cplus.met"
#line 3308 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3308 "cplus.met"
    switch( lexEl.Value) {
#line 3308 "cplus.met"
#line 3308 "cplus.met"
        case ETOI : 
#line 3308 "cplus.met"
#line 3308 "cplus.met"
            break;
#line 3308 "cplus.met"
#line 3310 "cplus.met"
        case META : 
#line 3310 "cplus.met"
        case IDENT : 
#line 3310 "cplus.met"
#line 3310 "cplus.met"
            break;
#line 3310 "cplus.met"
        default :
#line 3310 "cplus.met"
            CASE_EXIT(ident_mul_exit,"either * or IDENT")
#line 3310 "cplus.met"
            break;
#line 3310 "cplus.met"
    }
#line 3310 "cplus.met"
#line 3310 "cplus.met"
#line 3311 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3311 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3311 "cplus.met"
return((PPTREE) 0);
#line 3311 "cplus.met"

#line 3311 "cplus.met"
ident_mul_exit :
#line 3311 "cplus.met"

#line 3311 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_EXIT,(PPTREE)0);
#line 3311 "cplus.met"
    _funcLevel--;
#line 3311 "cplus.met"
    return((PPTREE) -1) ;
#line 3311 "cplus.met"

#line 3311 "cplus.met"
ident_mul_ret :
#line 3311 "cplus.met"
    
#line 3311 "cplus.met"
    _Debug = TRACE_RULE("ident_mul",TRACE_RETURN,_retValue);
#line 3311 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3311 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3311 "cplus.met"
    return _retValue ;
#line 3311 "cplus.met"
}
#line 3311 "cplus.met"

#line 3311 "cplus.met"
#line 1505 "cplus.met"
PPTREE cplus::include_dir ( int error_free)
#line 1505 "cplus.met"
{
#line 1505 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1505 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1505 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1505 "cplus.met"
    int _Debug = TRACE_RULE("include_dir",TRACE_ENTER,(PPTREE)0);
#line 1505 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1505 "cplus.met"
#line 1506 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1506 "cplus.met"
    if ( ! TERM_OR_META(INCLUDE_DIR,"INCLUDE_DIR") || !(CommTerm(),1)) {
#line 1506 "cplus.met"
            TOKEN_EXIT(include_dir_exit,"INCLUDE_DIR")
#line 1506 "cplus.met"
    } else {
#line 1506 "cplus.met"
        tokenAhead = 0 ;
#line 1506 "cplus.met"
    }
#line 1506 "cplus.met"
#line 1507 "cplus.met"
    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1507 "cplus.met"
    switch( lexEl.Value) {
#line 1507 "cplus.met"
#line 1508 "cplus.met"
        case META : 
#line 1508 "cplus.met"
        case INCLUDE_SYS : 
#line 1508 "cplus.met"
#line 1509 "cplus.met"
#line 1510 "cplus.met"
             /* ReadInclude(stringlex,0)*/;
#line 1510 "cplus.met"
#line 1511 "cplus.met"
            {
#line 1511 "cplus.met"
                PPTREE _ptTree0=0;
#line 1511 "cplus.met"
                {
#line 1511 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1511 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1511 "cplus.met"
                    (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1511 "cplus.met"
                    if ( ! TERM_OR_META(INCLUDE_SYS,"INCLUDE_SYS") || !(BUILD_TERM_META(_ptTree1))) {
#line 1511 "cplus.met"
                        MulFreeTree(3,_ptRes1,_ptTree1,_ptTree0);
                        TOKEN_EXIT(include_dir_exit,"INCLUDE_SYS")
#line 1511 "cplus.met"
                    } else {
#line 1511 "cplus.met"
                        tokenAhead = 0 ;
#line 1511 "cplus.met"
                    }
#line 1511 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1511 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1511 "cplus.met"
                }
#line 1511 "cplus.met"
                _retValue =_ptTree0;
#line 1511 "cplus.met"
                goto include_dir_ret;
#line 1511 "cplus.met"
            }
#line 1511 "cplus.met"
#line 1511 "cplus.met"
            break;
#line 1511 "cplus.met"
#line 1513 "cplus.met"
        case INCLUDE_LOCAL : 
#line 1513 "cplus.met"
#line 1514 "cplus.met"
#line 1515 "cplus.met"
             /* ReadInclude(stringlex,1)*/;
#line 1515 "cplus.met"
#line 1516 "cplus.met"
            {
#line 1516 "cplus.met"
                PPTREE _ptTree0=0;
#line 1516 "cplus.met"
                {
#line 1516 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1516 "cplus.met"
                    _ptRes1= MakeTree(INCLUDE_DIR, 1);
#line 1516 "cplus.met"
                    {
#line 1516 "cplus.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 1516 "cplus.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 1516 "cplus.met"
                        (tokenAhead == 6|| (LexInclude(),TRACE_LEX(1)));
#line 1516 "cplus.met"
                        if ( ! TERM_OR_META(INCLUDE_LOCAL,"INCLUDE_LOCAL") || !(BUILD_TERM_META(_ptTree2))) {
#line 1516 "cplus.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(include_dir_exit,"INCLUDE_LOCAL")
#line 1516 "cplus.met"
                        } else {
#line 1516 "cplus.met"
                            tokenAhead = 0 ;
#line 1516 "cplus.met"
                        }
#line 1516 "cplus.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 1516 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1516 "cplus.met"
                    }
#line 1516 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1516 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1516 "cplus.met"
                }
#line 1516 "cplus.met"
                _retValue =_ptTree0;
#line 1516 "cplus.met"
                goto include_dir_ret;
#line 1516 "cplus.met"
            }
#line 1516 "cplus.met"
#line 1516 "cplus.met"
            break;
#line 1516 "cplus.met"
        default :
#line 1516 "cplus.met"
            CASE_EXIT(include_dir_exit,"either INCLUDE_SYS or INCLUDE_LOCAL")
#line 1516 "cplus.met"
            break;
#line 1516 "cplus.met"
    }
#line 1516 "cplus.met"
#line 1516 "cplus.met"
#line 1519 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1519 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1519 "cplus.met"
return((PPTREE) 0);
#line 1519 "cplus.met"

#line 1519 "cplus.met"
include_dir_exit :
#line 1519 "cplus.met"

#line 1519 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_EXIT,(PPTREE)0);
#line 1519 "cplus.met"
    _funcLevel--;
#line 1519 "cplus.met"
    return((PPTREE) -1) ;
#line 1519 "cplus.met"

#line 1519 "cplus.met"
include_dir_ret :
#line 1519 "cplus.met"
    
#line 1519 "cplus.met"
    _Debug = TRACE_RULE("include_dir",TRACE_RETURN,_retValue);
#line 1519 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1519 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1519 "cplus.met"
    return _retValue ;
#line 1519 "cplus.met"
}
#line 1519 "cplus.met"

#line 1519 "cplus.met"
#line 2647 "cplus.met"
PPTREE cplus::inclusive_or_expression ( int error_free)
#line 2647 "cplus.met"
{
#line 2647 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2647 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2647 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2647 "cplus.met"
    int _Debug = TRACE_RULE("inclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2647 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2647 "cplus.met"
#line 2647 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2647 "cplus.met"
#line 2649 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2649 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2649 "cplus.met"
    }
#line 2649 "cplus.met"
#line 2650 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBAR,"|") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2650 "cplus.met"
#line 2651 "cplus.met"
        {
#line 2651 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2651 "cplus.met"
            _ptRes0= MakeTree(LOR, 2);
#line 2651 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2651 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(exclusive_or_expression)(error_free), 59, cplus))== (PPTREE) -1 ) {
#line 2651 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(inclusive_or_expression_exit,"inclusive_or_expression")
#line 2651 "cplus.met"
            }
#line 2651 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2651 "cplus.met"
            expTree=_ptRes0;
#line 2651 "cplus.met"
        }
#line 2651 "cplus.met"
    } 
#line 2651 "cplus.met"
#line 2652 "cplus.met"
    {
#line 2652 "cplus.met"
        _retValue = expTree ;
#line 2652 "cplus.met"
        goto inclusive_or_expression_ret;
#line 2652 "cplus.met"
        
#line 2652 "cplus.met"
    }
#line 2652 "cplus.met"
#line 2652 "cplus.met"
#line 2652 "cplus.met"

#line 2653 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2653 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2653 "cplus.met"
return((PPTREE) 0);
#line 2653 "cplus.met"

#line 2653 "cplus.met"
inclusive_or_expression_exit :
#line 2653 "cplus.met"

#line 2653 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2653 "cplus.met"
    _funcLevel--;
#line 2653 "cplus.met"
    return((PPTREE) -1) ;
#line 2653 "cplus.met"

#line 2653 "cplus.met"
inclusive_or_expression_ret :
#line 2653 "cplus.met"
    
#line 2653 "cplus.met"
    _Debug = TRACE_RULE("inclusive_or_expression",TRACE_RETURN,_retValue);
#line 2653 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2653 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2653 "cplus.met"
    return _retValue ;
#line 2653 "cplus.met"
}
#line 2653 "cplus.met"

#line 2653 "cplus.met"
#line 2434 "cplus.met"
PPTREE cplus::initializer ( int error_free)
#line 2434 "cplus.met"
{
#line 2434 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2434 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2434 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2434 "cplus.met"
    int _Debug = TRACE_RULE("initializer",TRACE_ENTER,(PPTREE)0);
#line 2434 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2434 "cplus.met"
#line 2434 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2434 "cplus.met"
#line 2434 "cplus.met"
    PPTREE initList = (PPTREE) 0,retTree = (PPTREE) 0;
#line 2434 "cplus.met"
#line 2436 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2436 "cplus.met"
    switch( lexEl.Value) {
#line 2436 "cplus.met"
#line 2440 "cplus.met"
        case AOUV : 
#line 2440 "cplus.met"
            tokenAhead = 0 ;
#line 2440 "cplus.met"
            CommTerm();
#line 2440 "cplus.met"
#line 2438 "cplus.met"
#line 2438 "cplus.met"
            _addlist1 = initList ;
#line 2438 "cplus.met"
#line 2439 "cplus.met"
            do {
#line 2439 "cplus.met"
#line 2440 "cplus.met"
                {
#line 2440 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2440 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(initializer)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 2440 "cplus.met"
                        MulFreeTree(4,_ptTree0,_addlist1,initList,retTree);
                        PROG_EXIT(initializer_exit,"initializer")
#line 2440 "cplus.met"
                    }
#line 2440 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2440 "cplus.met"
                }
#line 2440 "cplus.met"
#line 2440 "cplus.met"
                if (initList){
#line 2440 "cplus.met"
#line 2440 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 2440 "cplus.met"
                } else {
#line 2440 "cplus.met"
#line 2440 "cplus.met"
                    initList = _addlist1 ;
#line 2440 "cplus.met"
                }
#line 2440 "cplus.met"
#line 2440 "cplus.met"
#line 2441 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 2441 "cplus.met"
#line 2442 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2442 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 2442 "cplus.met"
                MulFreeTree(3,_addlist1,initList,retTree);
                TOKEN_EXIT(initializer_exit,"}")
#line 2442 "cplus.met"
            } else {
#line 2442 "cplus.met"
                tokenAhead = 0 ;
#line 2442 "cplus.met"
            }
#line 2442 "cplus.met"
#line 2443 "cplus.met"
            {
#line 2443 "cplus.met"
                PPTREE _ptTree0=0;
#line 2443 "cplus.met"
                {
#line 2443 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2443 "cplus.met"
                    _ptRes1= MakeTree(INITIALIZER, 1);
#line 2443 "cplus.met"
                    ReplaceTree(_ptRes1, 1, initList );
#line 2443 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2443 "cplus.met"
                }
#line 2443 "cplus.met"
                _retValue =_ptTree0;
#line 2443 "cplus.met"
                goto initializer_ret;
#line 2443 "cplus.met"
            }
#line 2443 "cplus.met"
#line 2443 "cplus.met"
            break;
#line 2443 "cplus.met"
#line 2446 "cplus.met"
        default : 
#line 2446 "cplus.met"
#line 2446 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(assignment_expression), 15, cplus)){
#line 2446 "cplus.met"
#line 2447 "cplus.met"
                {
#line 2447 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2447 "cplus.met"
                    {
#line 2447 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2447 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2447 "cplus.met"
                        ReplaceTree(_ptRes1, 1, retTree );
#line 2447 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2447 "cplus.met"
                    }
#line 2447 "cplus.met"
                    _retValue =_ptTree0;
#line 2447 "cplus.met"
                    goto initializer_ret;
#line 2447 "cplus.met"
                }
#line 2447 "cplus.met"
            } else {
#line 2447 "cplus.met"
#line 2449 "cplus.met"
                {
#line 2449 "cplus.met"
                    PPTREE _ptTree0=0;
#line 2449 "cplus.met"
                    {
#line 2449 "cplus.met"
                        PPTREE _ptRes1=0;
#line 2449 "cplus.met"
                        _ptRes1= MakeTree(INITIALIZER, 1);
#line 2449 "cplus.met"
                        _ptTree0=_ptRes1;
#line 2449 "cplus.met"
                    }
#line 2449 "cplus.met"
                    _retValue =_ptTree0;
#line 2449 "cplus.met"
                    goto initializer_ret;
#line 2449 "cplus.met"
                }
#line 2449 "cplus.met"
            }
#line 2449 "cplus.met"
            break;
#line 2449 "cplus.met"
    }
#line 2449 "cplus.met"
#line 2449 "cplus.met"
#line 2450 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2450 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2450 "cplus.met"
return((PPTREE) 0);
#line 2450 "cplus.met"

#line 2450 "cplus.met"
initializer_exit :
#line 2450 "cplus.met"

#line 2450 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_EXIT,(PPTREE)0);
#line 2450 "cplus.met"
    _funcLevel--;
#line 2450 "cplus.met"
    return((PPTREE) -1) ;
#line 2450 "cplus.met"

#line 2450 "cplus.met"
initializer_ret :
#line 2450 "cplus.met"
    
#line 2450 "cplus.met"
    _Debug = TRACE_RULE("initializer",TRACE_RETURN,_retValue);
#line 2450 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2450 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2450 "cplus.met"
    return _retValue ;
#line 2450 "cplus.met"
}
#line 2450 "cplus.met"

#line 2450 "cplus.met"
#line 1751 "cplus.met"
PPTREE cplus::inside_declaration ( int error_free)
#line 1751 "cplus.met"
{
#line 1751 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1751 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1751 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1751 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration",TRACE_ENTER,(PPTREE)0);
#line 1751 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1751 "cplus.met"
#line 1751 "cplus.met"
    PPTREE retTree = (PPTREE) 0;
#line 1751 "cplus.met"
#line 1753 "cplus.met"
    if ((((! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration_extension), 83, cplus))) && 
#line 1753 "cplus.met"
         (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(ext_all), 62, cplus)))) && 
#line 1753 "cplus.met"
        (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration1), 81, cplus)))) && 
#line 1753 "cplus.met"
       (! (NPUSH_CALL_AFF_VERIF(retTree = ,_Tak(inside_declaration2), 82, cplus)))){
#line 1753 "cplus.met"
#line 1757 "cplus.met"
        
#line 1757 "cplus.met"
        MulFreeTree(1,retTree);
        LEX_EXIT ("",0);
#line 1757 "cplus.met"
        goto inside_declaration_exit;
#line 1757 "cplus.met"
#line 1757 "cplus.met"
    }
#line 1757 "cplus.met"
#line 1758 "cplus.met"
    {
#line 1758 "cplus.met"
        _retValue = retTree ;
#line 1758 "cplus.met"
        goto inside_declaration_ret;
#line 1758 "cplus.met"
        
#line 1758 "cplus.met"
    }
#line 1758 "cplus.met"
#line 1758 "cplus.met"
#line 1758 "cplus.met"

#line 1759 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1759 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1759 "cplus.met"
return((PPTREE) 0);
#line 1759 "cplus.met"

#line 1759 "cplus.met"
inside_declaration_exit :
#line 1759 "cplus.met"

#line 1759 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_EXIT,(PPTREE)0);
#line 1759 "cplus.met"
    _funcLevel--;
#line 1759 "cplus.met"
    return((PPTREE) -1) ;
#line 1759 "cplus.met"

#line 1759 "cplus.met"
inside_declaration_ret :
#line 1759 "cplus.met"
    
#line 1759 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration",TRACE_RETURN,_retValue);
#line 1759 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1759 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1759 "cplus.met"
    return _retValue ;
#line 1759 "cplus.met"
}
#line 1759 "cplus.met"

#line 1759 "cplus.met"
#line 1731 "cplus.met"
PPTREE cplus::inside_declaration1 ( int error_free)
#line 1731 "cplus.met"
{
#line 1731 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1731 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1731 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1731 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration1",TRACE_ENTER,(PPTREE)0);
#line 1731 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1731 "cplus.met"
#line 1731 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1731 "cplus.met"
#line 1733 "cplus.met"
    {
#line 1733 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1733 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1733 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(type_specifier)(error_free), 142, cplus))== (PPTREE) -1 ) {
#line 1733 "cplus.met"
            MulFreeTree(4,_ptRes0,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1733 "cplus.met"
        }
#line 1733 "cplus.met"
        ReplaceTree(_ptRes0, 2, _ptTree0);
#line 1733 "cplus.met"
        otherTree=_ptRes0;
#line 1733 "cplus.met"
    }
#line 1733 "cplus.met"
#line 1734 "cplus.met"
    {
#line 1734 "cplus.met"
        PPTREE _ptTree0=0;
#line 1734 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 1734 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration1_exit,"inside_declaration1")
#line 1734 "cplus.met"
        }
#line 1734 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1734 "cplus.met"
    }
#line 1734 "cplus.met"
#line 1735 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1735 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1735 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration1_exit,";")
#line 1735 "cplus.met"
    } else {
#line 1735 "cplus.met"
        tokenAhead = 0 ;
#line 1735 "cplus.met"
    }
#line 1735 "cplus.met"
#line 1736 "cplus.met"
    {
#line 1736 "cplus.met"
        PPTREE _ptTree0=0;
#line 1736 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1736 "cplus.met"
        _retValue =_ptTree0;
#line 1736 "cplus.met"
        goto inside_declaration1_ret;
#line 1736 "cplus.met"
    }
#line 1736 "cplus.met"
#line 1736 "cplus.met"
#line 1736 "cplus.met"

#line 1737 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1737 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1737 "cplus.met"
return((PPTREE) 0);
#line 1737 "cplus.met"

#line 1737 "cplus.met"
inside_declaration1_exit :
#line 1737 "cplus.met"

#line 1737 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_EXIT,(PPTREE)0);
#line 1737 "cplus.met"
    _funcLevel--;
#line 1737 "cplus.met"
    return((PPTREE) -1) ;
#line 1737 "cplus.met"

#line 1737 "cplus.met"
inside_declaration1_ret :
#line 1737 "cplus.met"
    
#line 1737 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration1",TRACE_RETURN,_retValue);
#line 1737 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1737 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1737 "cplus.met"
    return _retValue ;
#line 1737 "cplus.met"
}
#line 1737 "cplus.met"

#line 1737 "cplus.met"
#line 1739 "cplus.met"
PPTREE cplus::inside_declaration2 ( int error_free)
#line 1739 "cplus.met"
{
#line 1739 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1739 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1739 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1739 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration2",TRACE_ENTER,(PPTREE)0);
#line 1739 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1739 "cplus.met"
#line 1739 "cplus.met"
    PPTREE otherTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1739 "cplus.met"
#line 1741 "cplus.met"
    {
#line 1741 "cplus.met"
        PPTREE _ptRes0=0;
#line 1741 "cplus.met"
        _ptRes0= MakeTree(DECLARATION, 3);
#line 1741 "cplus.met"
        otherTree=_ptRes0;
#line 1741 "cplus.met"
    }
#line 1741 "cplus.met"
#line 1742 "cplus.met"
    {
#line 1742 "cplus.met"
        PPTREE _ptTree0=0;
#line 1742 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(bit_field_decl)(error_free), 18, cplus))== (PPTREE) -1 ) {
#line 1742 "cplus.met"
            MulFreeTree(3,_ptTree0,list,otherTree);
            PROG_EXIT(inside_declaration2_exit,"inside_declaration2")
#line 1742 "cplus.met"
        }
#line 1742 "cplus.met"
        list =AddList(list , _ptTree0);
#line 1742 "cplus.met"
    }
#line 1742 "cplus.met"
#line 1743 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1743 "cplus.met"
    if (  !SEE_TOKEN( PVIR,";") || !(CommTerm(),1)) {
#line 1743 "cplus.met"
        MulFreeTree(2,list,otherTree);
        TOKEN_EXIT(inside_declaration2_exit,";")
#line 1743 "cplus.met"
    } else {
#line 1743 "cplus.met"
        tokenAhead = 0 ;
#line 1743 "cplus.met"
    }
#line 1743 "cplus.met"
#line 1744 "cplus.met"
    {
#line 1744 "cplus.met"
        PPTREE _ptTree0=0;
#line 1744 "cplus.met"
        _ptTree0=ReplaceTree(otherTree ,3 ,list );
#line 1744 "cplus.met"
        _retValue =_ptTree0;
#line 1744 "cplus.met"
        goto inside_declaration2_ret;
#line 1744 "cplus.met"
    }
#line 1744 "cplus.met"
#line 1744 "cplus.met"
#line 1744 "cplus.met"

#line 1745 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1745 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1745 "cplus.met"
return((PPTREE) 0);
#line 1745 "cplus.met"

#line 1745 "cplus.met"
inside_declaration2_exit :
#line 1745 "cplus.met"

#line 1745 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_EXIT,(PPTREE)0);
#line 1745 "cplus.met"
    _funcLevel--;
#line 1745 "cplus.met"
    return((PPTREE) -1) ;
#line 1745 "cplus.met"

#line 1745 "cplus.met"
inside_declaration2_ret :
#line 1745 "cplus.met"
    
#line 1745 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration2",TRACE_RETURN,_retValue);
#line 1745 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1745 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1745 "cplus.met"
    return _retValue ;
#line 1745 "cplus.met"
}
#line 1745 "cplus.met"

#line 1745 "cplus.met"
#line 1747 "cplus.met"
PPTREE cplus::inside_declaration_extension ( int error_free)
#line 1747 "cplus.met"
{
#line 1747 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1747 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1747 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1747 "cplus.met"
    int _Debug = TRACE_RULE("inside_declaration_extension",TRACE_ENTER,(PPTREE)0);
#line 1747 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1747 "cplus.met"
#line 1748 "cplus.met"
    
#line 1748 "cplus.met"
    LEX_EXIT ("",0);
#line 1748 "cplus.met"
    goto inside_declaration_extension_exit;
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
inside_declaration_extension_exit :
#line 1749 "cplus.met"

#line 1749 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_EXIT,(PPTREE)0);
#line 1749 "cplus.met"
    _funcLevel--;
#line 1749 "cplus.met"
    return((PPTREE) -1) ;
#line 1749 "cplus.met"

#line 1749 "cplus.met"
inside_declaration_extension_ret :
#line 1749 "cplus.met"
    
#line 1749 "cplus.met"
    _Debug = TRACE_RULE("inside_declaration_extension",TRACE_RETURN,_retValue);
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
#line 3301 "cplus.met"
PPTREE cplus::label_beg ( int error_free)
#line 3301 "cplus.met"
{
#line 3301 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3301 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3301 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3301 "cplus.met"
    int _Debug = TRACE_RULE("label_beg",TRACE_ENTER,(PPTREE)0);
#line 3301 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3301 "cplus.met"
#line 3302 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3302 "cplus.met"
    if ( ! TERM_OR_META(IDENT,"IDENT") || !(CommTerm(),1)) {
#line 3302 "cplus.met"
            TOKEN_EXIT(label_beg_exit,"IDENT")
#line 3302 "cplus.met"
    } else {
#line 3302 "cplus.met"
        tokenAhead = 0 ;
#line 3302 "cplus.met"
    }
#line 3302 "cplus.met"
#line 3303 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3303 "cplus.met"
    if (  !SEE_TOKEN( DPOI,":") || !(CommTerm(),1)) {
#line 3303 "cplus.met"
            TOKEN_EXIT(label_beg_exit,":")
#line 3303 "cplus.met"
    } else {
#line 3303 "cplus.met"
        tokenAhead = 0 ;
#line 3303 "cplus.met"
    }
#line 3303 "cplus.met"
#line 3303 "cplus.met"
#line 3303 "cplus.met"

#line 3304 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3304 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3304 "cplus.met"
return((PPTREE) 0);
#line 3304 "cplus.met"

#line 3304 "cplus.met"
label_beg_exit :
#line 3304 "cplus.met"

#line 3304 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_EXIT,(PPTREE)0);
#line 3304 "cplus.met"
    _funcLevel--;
#line 3304 "cplus.met"
    return((PPTREE) -1) ;
#line 3304 "cplus.met"

#line 3304 "cplus.met"
label_beg_ret :
#line 3304 "cplus.met"
    
#line 3304 "cplus.met"
    _Debug = TRACE_RULE("label_beg",TRACE_RETURN,_retValue);
#line 3304 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3304 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3304 "cplus.met"
    return _retValue ;
#line 3304 "cplus.met"
}
#line 3304 "cplus.met"

#line 3304 "cplus.met"
#line 1022 "cplus.met"
PPTREE cplus::linkage_specification ( int error_free)
#line 1022 "cplus.met"
{
#line 1022 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1022 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1022 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1022 "cplus.met"
    int _Debug = TRACE_RULE("linkage_specification",TRACE_ENTER,(PPTREE)0);
#line 1022 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1022 "cplus.met"
#line 1022 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1022 "cplus.met"
#line 1022 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,declaration = (PPTREE) 0;
#line 1022 "cplus.met"
#line 1024 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1024 "cplus.met"
    if (  !SEE_TOKEN( EXTERN,"extern") || !(CommTerm(),1)) {
#line 1024 "cplus.met"
        MulFreeTree(4,_addlist1,declaration,list,retTree);
        TOKEN_EXIT(linkage_specification_exit,"extern")
#line 1024 "cplus.met"
    } else {
#line 1024 "cplus.met"
        tokenAhead = 0 ;
#line 1024 "cplus.met"
    }
#line 1024 "cplus.met"
#line 1025 "cplus.met"
    {
#line 1025 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1025 "cplus.met"
        _ptRes0= MakeTree(EXTERNAL, 2);
#line 1025 "cplus.met"
        {
#line 1025 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1025 "cplus.met"
            _ptRes1= MakeTree(STRING, 1);
#line 1025 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1025 "cplus.met"
            if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1025 "cplus.met"
                MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"STRING")
#line 1025 "cplus.met"
            } else {
#line 1025 "cplus.met"
                tokenAhead = 0 ;
#line 1025 "cplus.met"
            }
#line 1025 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1025 "cplus.met"
            _ptTree0=_ptRes1;
#line 1025 "cplus.met"
        }
#line 1025 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1025 "cplus.met"
        retTree=_ptRes0;
#line 1025 "cplus.met"
    }
#line 1025 "cplus.met"
#line 1026 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1026 "cplus.met"
    switch( lexEl.Value) {
#line 1026 "cplus.met"
#line 1029 "cplus.met"
        case AOUV : 
#line 1029 "cplus.met"
            tokenAhead = 0 ;
#line 1029 "cplus.met"
            CommTerm();
#line 1029 "cplus.met"
#line 1028 "cplus.met"
#line 1028 "cplus.met"
            _addlist1 = list ;
#line 1028 "cplus.met"
#line 1029 "cplus.met"
            while (NPUSH_CALL_AFF_VERIF(declaration = ,_Tak(ext_all), 62, cplus)) { 
#line 1029 "cplus.met"
#line 1030 "cplus.met"
#line 1030 "cplus.met"
                _addlist1 =AddList(_addlist1 ,declaration );
#line 1030 "cplus.met"
#line 1030 "cplus.met"
                if (list){
#line 1030 "cplus.met"
#line 1030 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1030 "cplus.met"
                } else {
#line 1030 "cplus.met"
#line 1030 "cplus.met"
                    list = _addlist1 ;
#line 1030 "cplus.met"
                }
#line 1030 "cplus.met"
            } 
#line 1030 "cplus.met"
#line 1031 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1031 "cplus.met"
            if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1031 "cplus.met"
                MulFreeTree(4,_addlist1,declaration,list,retTree);
                TOKEN_EXIT(linkage_specification_exit,"}")
#line 1031 "cplus.met"
            } else {
#line 1031 "cplus.met"
                tokenAhead = 0 ;
#line 1031 "cplus.met"
            }
#line 1031 "cplus.met"
#line 1032 "cplus.met"
            {
#line 1032 "cplus.met"
                PPTREE _ptTree0=0;
#line 1032 "cplus.met"
                {
#line 1032 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1032 "cplus.met"
                    {
#line 1032 "cplus.met"
                        PPTREE _ptRes2=0;
#line 1032 "cplus.met"
                        _ptRes2= MakeTree(COMPOUND_EXT, 1);
#line 1032 "cplus.met"
                        ReplaceTree(_ptRes2, 1, list );
#line 1032 "cplus.met"
                        _ptTree1=_ptRes2;
#line 1032 "cplus.met"
                    }
#line 1032 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1032 "cplus.met"
                }
#line 1032 "cplus.met"
                _retValue =_ptTree0;
#line 1032 "cplus.met"
                goto linkage_specification_ret;
#line 1032 "cplus.met"
            }
#line 1032 "cplus.met"
#line 1032 "cplus.met"
            break;
#line 1032 "cplus.met"
#line 1034 "cplus.met"
        default : 
#line 1034 "cplus.met"
#line 1034 "cplus.met"
            {
#line 1034 "cplus.met"
                PPTREE _ptTree0=0;
#line 1034 "cplus.met"
                {
#line 1034 "cplus.met"
                    PPTREE _ptTree1=0;
#line 1034 "cplus.met"
                    if ( (_ptTree1=NQUICK_CALL(_Tak(ext_all)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1034 "cplus.met"
                        MulFreeTree(6,_ptTree1,_ptTree0,_addlist1,declaration,list,retTree);
                        PROG_EXIT(linkage_specification_exit,"linkage_specification")
#line 1034 "cplus.met"
                    }
#line 1034 "cplus.met"
                    _ptTree0=ReplaceTree(retTree , 2 , _ptTree1);
#line 1034 "cplus.met"
                }
#line 1034 "cplus.met"
                _retValue =_ptTree0;
#line 1034 "cplus.met"
                goto linkage_specification_ret;
#line 1034 "cplus.met"
            }
#line 1034 "cplus.met"
            break;
#line 1034 "cplus.met"
    }
#line 1034 "cplus.met"
#line 1034 "cplus.met"
#line 1035 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1035 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1035 "cplus.met"
return((PPTREE) 0);
#line 1035 "cplus.met"

#line 1035 "cplus.met"
linkage_specification_exit :
#line 1035 "cplus.met"

#line 1035 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_EXIT,(PPTREE)0);
#line 1035 "cplus.met"
    _funcLevel--;
#line 1035 "cplus.met"
    return((PPTREE) -1) ;
#line 1035 "cplus.met"

#line 1035 "cplus.met"
linkage_specification_ret :
#line 1035 "cplus.met"
    
#line 1035 "cplus.met"
    _Debug = TRACE_RULE("linkage_specification",TRACE_RETURN,_retValue);
#line 1035 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1035 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1035 "cplus.met"
    return _retValue ;
#line 1035 "cplus.met"
}
#line 1035 "cplus.met"

#line 1035 "cplus.met"
#line 2639 "cplus.met"
PPTREE cplus::logical_and_expression ( int error_free)
#line 2639 "cplus.met"
{
#line 2639 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2639 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2639 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2639 "cplus.met"
    int _Debug = TRACE_RULE("logical_and_expression",TRACE_ENTER,(PPTREE)0);
#line 2639 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2639 "cplus.met"
#line 2639 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2639 "cplus.met"
#line 2641 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2641 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2641 "cplus.met"
    }
#line 2641 "cplus.met"
#line 2642 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(ETCOETCO,"&&") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2642 "cplus.met"
#line 2643 "cplus.met"
        {
#line 2643 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2643 "cplus.met"
            _ptRes0= MakeTree(AND, 2);
#line 2643 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2643 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(inclusive_or_expression)(error_free), 78, cplus))== (PPTREE) -1 ) {
#line 2643 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_and_expression_exit,"logical_and_expression")
#line 2643 "cplus.met"
            }
#line 2643 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2643 "cplus.met"
            expTree=_ptRes0;
#line 2643 "cplus.met"
        }
#line 2643 "cplus.met"
    } 
#line 2643 "cplus.met"
#line 2644 "cplus.met"
    {
#line 2644 "cplus.met"
        _retValue = expTree ;
#line 2644 "cplus.met"
        goto logical_and_expression_ret;
#line 2644 "cplus.met"
        
#line 2644 "cplus.met"
    }
#line 2644 "cplus.met"
#line 2644 "cplus.met"
#line 2644 "cplus.met"

#line 2645 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2645 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2645 "cplus.met"
return((PPTREE) 0);
#line 2645 "cplus.met"

#line 2645 "cplus.met"
logical_and_expression_exit :
#line 2645 "cplus.met"

#line 2645 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_EXIT,(PPTREE)0);
#line 2645 "cplus.met"
    _funcLevel--;
#line 2645 "cplus.met"
    return((PPTREE) -1) ;
#line 2645 "cplus.met"

#line 2645 "cplus.met"
logical_and_expression_ret :
#line 2645 "cplus.met"
    
#line 2645 "cplus.met"
    _Debug = TRACE_RULE("logical_and_expression",TRACE_RETURN,_retValue);
#line 2645 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2645 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2645 "cplus.met"
    return _retValue ;
#line 2645 "cplus.met"
}
#line 2645 "cplus.met"

#line 2645 "cplus.met"
#line 2631 "cplus.met"
PPTREE cplus::logical_or_expression ( int error_free)
#line 2631 "cplus.met"
{
#line 2631 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2631 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2631 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2631 "cplus.met"
    int _Debug = TRACE_RULE("logical_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2631 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2631 "cplus.met"
#line 2631 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2631 "cplus.met"
#line 2633 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2633 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2633 "cplus.met"
    }
#line 2633 "cplus.met"
#line 2634 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2634 "cplus.met"
#line 2635 "cplus.met"
        {
#line 2635 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2635 "cplus.met"
            _ptRes0= MakeTree(OR, 2);
#line 2635 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2635 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(logical_and_expression)(error_free), 86, cplus))== (PPTREE) -1 ) {
#line 2635 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(logical_or_expression_exit,"logical_or_expression")
#line 2635 "cplus.met"
            }
#line 2635 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2635 "cplus.met"
            expTree=_ptRes0;
#line 2635 "cplus.met"
        }
#line 2635 "cplus.met"
    } 
#line 2635 "cplus.met"
#line 2636 "cplus.met"
    {
#line 2636 "cplus.met"
        _retValue = expTree ;
#line 2636 "cplus.met"
        goto logical_or_expression_ret;
#line 2636 "cplus.met"
        
#line 2636 "cplus.met"
    }
#line 2636 "cplus.met"
#line 2636 "cplus.met"
#line 2636 "cplus.met"

#line 2637 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2637 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2637 "cplus.met"
return((PPTREE) 0);
#line 2637 "cplus.met"

#line 2637 "cplus.met"
logical_or_expression_exit :
#line 2637 "cplus.met"

#line 2637 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2637 "cplus.met"
    _funcLevel--;
#line 2637 "cplus.met"
    return((PPTREE) -1) ;
#line 2637 "cplus.met"

#line 2637 "cplus.met"
logical_or_expression_ret :
#line 2637 "cplus.met"
    
#line 2637 "cplus.met"
    _Debug = TRACE_RULE("logical_or_expression",TRACE_RETURN,_retValue);
#line 2637 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2637 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2637 "cplus.met"
    return _retValue ;
#line 2637 "cplus.met"
}
#line 2637 "cplus.met"

#line 2637 "cplus.met"
#line 2127 "cplus.met"
PPTREE cplus::long_short_int_char ( int error_free)
#line 2127 "cplus.met"
{
#line 2127 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2127 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2127 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2127 "cplus.met"
    int _Debug = TRACE_RULE("long_short_int_char",TRACE_ENTER,(PPTREE)0);
#line 2127 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2127 "cplus.met"
#line 2128 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2128 "cplus.met"
    switch( lexEl.Value) {
#line 2128 "cplus.met"
#line 2129 "cplus.met"
        case INT : 
#line 2129 "cplus.met"
            tokenAhead = 0 ;
#line 2129 "cplus.met"
            CommTerm();
#line 2129 "cplus.met"
#line 2129 "cplus.met"
            {
#line 2129 "cplus.met"
                PPTREE _ptTree0=0;
#line 2129 "cplus.met"
                {
#line 2129 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2129 "cplus.met"
                    _ptRes1= MakeTree(TINT, 0);
#line 2129 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2129 "cplus.met"
                }
#line 2129 "cplus.met"
                _retValue =_ptTree0;
#line 2129 "cplus.met"
                goto long_short_int_char_ret;
#line 2129 "cplus.met"
            }
#line 2129 "cplus.met"
            break;
#line 2129 "cplus.met"
#line 2130 "cplus.met"
        case LONG : 
#line 2130 "cplus.met"
            tokenAhead = 0 ;
#line 2130 "cplus.met"
            CommTerm();
#line 2130 "cplus.met"
#line 2131 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2131 "cplus.met"
            switch( lexEl.Value) {
#line 2131 "cplus.met"
#line 2132 "cplus.met"
                case INT : 
#line 2132 "cplus.met"
                    tokenAhead = 0 ;
#line 2132 "cplus.met"
                    CommTerm();
#line 2132 "cplus.met"
#line 2132 "cplus.met"
                    {
#line 2132 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2132 "cplus.met"
                        {
#line 2132 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2132 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2132 "cplus.met"
                            {
#line 2132 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2132 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2132 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2132 "cplus.met"
                            }
#line 2132 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2132 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2132 "cplus.met"
                        }
#line 2132 "cplus.met"
                        _retValue =_ptTree0;
#line 2132 "cplus.met"
                        goto long_short_int_char_ret;
#line 2132 "cplus.met"
                    }
#line 2132 "cplus.met"
                    break;
#line 2132 "cplus.met"
#line 2133 "cplus.met"
                default : 
#line 2133 "cplus.met"
#line 2133 "cplus.met"
                    {
#line 2133 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2133 "cplus.met"
                        {
#line 2133 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2133 "cplus.met"
                            _ptRes1= MakeTree(TLONG, 1);
#line 2133 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2133 "cplus.met"
                        }
#line 2133 "cplus.met"
                        _retValue =_ptTree0;
#line 2133 "cplus.met"
                        goto long_short_int_char_ret;
#line 2133 "cplus.met"
                    }
#line 2133 "cplus.met"
                    break;
#line 2133 "cplus.met"
            }
#line 2133 "cplus.met"
            break;
#line 2133 "cplus.met"
#line 2135 "cplus.met"
        case SHORT : 
#line 2135 "cplus.met"
            tokenAhead = 0 ;
#line 2135 "cplus.met"
            CommTerm();
#line 2135 "cplus.met"
#line 2136 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2136 "cplus.met"
            switch( lexEl.Value) {
#line 2136 "cplus.met"
#line 2137 "cplus.met"
                case INT : 
#line 2137 "cplus.met"
                    tokenAhead = 0 ;
#line 2137 "cplus.met"
                    CommTerm();
#line 2137 "cplus.met"
#line 2137 "cplus.met"
                    {
#line 2137 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2137 "cplus.met"
                        {
#line 2137 "cplus.met"
                            PPTREE _ptTree1=0,_ptRes1=0;
#line 2137 "cplus.met"
                            _ptRes1= MakeTree(TSHORT, 1);
#line 2137 "cplus.met"
                            {
#line 2137 "cplus.met"
                                PPTREE _ptRes2=0;
#line 2137 "cplus.met"
                                _ptRes2= MakeTree(TINT, 0);
#line 2137 "cplus.met"
                                _ptTree1=_ptRes2;
#line 2137 "cplus.met"
                            }
#line 2137 "cplus.met"
                            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 2137 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2137 "cplus.met"
                        }
#line 2137 "cplus.met"
                        _retValue =_ptTree0;
#line 2137 "cplus.met"
                        goto long_short_int_char_ret;
#line 2137 "cplus.met"
                    }
#line 2137 "cplus.met"
                    break;
#line 2137 "cplus.met"
#line 2138 "cplus.met"
                default : 
#line 2138 "cplus.met"
#line 2138 "cplus.met"
                    {
#line 2138 "cplus.met"
                        PPTREE _ptTree0=0;
#line 2138 "cplus.met"
                        {
#line 2138 "cplus.met"
                            PPTREE _ptRes1=0;
#line 2138 "cplus.met"
                            _ptRes1= MakeTree(TSHORT, 1);
#line 2138 "cplus.met"
                            _ptTree0=_ptRes1;
#line 2138 "cplus.met"
                        }
#line 2138 "cplus.met"
                        _retValue =_ptTree0;
#line 2138 "cplus.met"
                        goto long_short_int_char_ret;
#line 2138 "cplus.met"
                    }
#line 2138 "cplus.met"
                    break;
#line 2138 "cplus.met"
            }
#line 2138 "cplus.met"
            break;
#line 2138 "cplus.met"
#line 2140 "cplus.met"
        case CHAR : 
#line 2140 "cplus.met"
            tokenAhead = 0 ;
#line 2140 "cplus.met"
            CommTerm();
#line 2140 "cplus.met"
#line 2140 "cplus.met"
            {
#line 2140 "cplus.met"
                PPTREE _ptTree0=0;
#line 2140 "cplus.met"
                {
#line 2140 "cplus.met"
                    PPTREE _ptRes1=0;
#line 2140 "cplus.met"
                    _ptRes1= MakeTree(TCHAR, 0);
#line 2140 "cplus.met"
                    _ptTree0=_ptRes1;
#line 2140 "cplus.met"
                }
#line 2140 "cplus.met"
                _retValue =_ptTree0;
#line 2140 "cplus.met"
                goto long_short_int_char_ret;
#line 2140 "cplus.met"
            }
#line 2140 "cplus.met"
            break;
#line 2140 "cplus.met"
        default :
#line 2140 "cplus.met"
            CASE_EXIT(long_short_int_char_exit,"either int or long or short or char")
#line 2140 "cplus.met"
            break;
#line 2140 "cplus.met"
    }
#line 2140 "cplus.met"
#line 2140 "cplus.met"
#line 2141 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2141 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2141 "cplus.met"
return((PPTREE) 0);
#line 2141 "cplus.met"

#line 2141 "cplus.met"
long_short_int_char_exit :
#line 2141 "cplus.met"

#line 2141 "cplus.met"
    _Debug = TRACE_RULE("long_short_int_char",TRACE_EXIT,(PPTREE)0);
#line 2141 "cplus.met"
    _funcLevel--;
#line 2141 "cplus.met"
    return((PPTREE) -1) ;
#line 2141 "cplus.met"

#line 2141 "cplus.met"
long_short_int_char_ret :
#line 2141 "cplus.met"
    
#line 2141 "cplus.met"
    _Debug = TRACE_RULE("long_short_int_char",TRACE_RETURN,_retValue);
#line 2141 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2141 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2141 "cplus.met"
    return _retValue ;
#line 2141 "cplus.met"
}
#line 2141 "cplus.met"

#line 2141 "cplus.met"
#line 1919 "cplus.met"
PPTREE cplus::macro ( int error_free)
#line 1919 "cplus.met"
{
#line 1919 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1919 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1919 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1919 "cplus.met"
    int _Debug = TRACE_RULE("macro",TRACE_ENTER,(PPTREE)0);
#line 1919 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1919 "cplus.met"
#line 1919 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0;
#line 1919 "cplus.met"
#line 1921 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1921 "cplus.met"
    switch( lexEl.Value) {
#line 1921 "cplus.met"
#line 1922 "cplus.met"
        case META : 
#line 1922 "cplus.met"
        case DECLARE_SERIAL : 
#line 1922 "cplus.met"
            tokenAhead = 0 ;
#line 1922 "cplus.met"
            CommTerm();
#line 1922 "cplus.met"
#line 1922 "cplus.met"
            {
#line 1922 "cplus.met"
                PPTREE _ptRes0=0;
#line 1922 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1922 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_SERIAL"));
#line 1922 "cplus.met"
                retTree=_ptRes0;
#line 1922 "cplus.met"
            }
#line 1922 "cplus.met"
            break;
#line 1922 "cplus.met"
#line 1923 "cplus.met"
        case DECLARE_DYNAMIC : 
#line 1923 "cplus.met"
            tokenAhead = 0 ;
#line 1923 "cplus.met"
            CommTerm();
#line 1923 "cplus.met"
#line 1923 "cplus.met"
            {
#line 1923 "cplus.met"
                PPTREE _ptRes0=0;
#line 1923 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1923 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_DYNAMIC"));
#line 1923 "cplus.met"
                retTree=_ptRes0;
#line 1923 "cplus.met"
            }
#line 1923 "cplus.met"
            break;
#line 1923 "cplus.met"
#line 1924 "cplus.met"
        case DECLARE_MESSAGE_MAP : 
#line 1924 "cplus.met"
            tokenAhead = 0 ;
#line 1924 "cplus.met"
            CommTerm();
#line 1924 "cplus.met"
#line 1924 "cplus.met"
            {
#line 1924 "cplus.met"
                PPTREE _ptRes0=0;
#line 1924 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1924 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("DECLARE_MESSAGE_MAP"));
#line 1924 "cplus.met"
                retTree=_ptRes0;
#line 1924 "cplus.met"
            }
#line 1924 "cplus.met"
            break;
#line 1924 "cplus.met"
#line 1926 "cplus.met"
        case IMPLEMENT_DYNAMIC : 
#line 1926 "cplus.met"
            tokenAhead = 0 ;
#line 1926 "cplus.met"
            CommTerm();
#line 1926 "cplus.met"
#line 1926 "cplus.met"
            {
#line 1926 "cplus.met"
                PPTREE _ptRes0=0;
#line 1926 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1926 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNAMIC"));
#line 1926 "cplus.met"
                retTree=_ptRes0;
#line 1926 "cplus.met"
            }
#line 1926 "cplus.met"
            break;
#line 1926 "cplus.met"
#line 1928 "cplus.met"
        case IMPLEMENT_DYNCREATE : 
#line 1928 "cplus.met"
            tokenAhead = 0 ;
#line 1928 "cplus.met"
            CommTerm();
#line 1928 "cplus.met"
#line 1928 "cplus.met"
            {
#line 1928 "cplus.met"
                PPTREE _ptRes0=0;
#line 1928 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1928 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_DYNCREATE"));
#line 1928 "cplus.met"
                retTree=_ptRes0;
#line 1928 "cplus.met"
            }
#line 1928 "cplus.met"
            break;
#line 1928 "cplus.met"
#line 1930 "cplus.met"
        case IMPLEMENT_SERIAL : 
#line 1930 "cplus.met"
            tokenAhead = 0 ;
#line 1930 "cplus.met"
            CommTerm();
#line 1930 "cplus.met"
#line 1930 "cplus.met"
            {
#line 1930 "cplus.met"
                PPTREE _ptRes0=0;
#line 1930 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1930 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("IMPLEMENT_SERIAL"));
#line 1930 "cplus.met"
                retTree=_ptRes0;
#line 1930 "cplus.met"
            }
#line 1930 "cplus.met"
            break;
#line 1930 "cplus.met"
#line 1932 "cplus.met"
        case BEGIN_MESSAGE_MAP : 
#line 1932 "cplus.met"
            tokenAhead = 0 ;
#line 1932 "cplus.met"
            CommTerm();
#line 1932 "cplus.met"
#line 1932 "cplus.met"
            {
#line 1932 "cplus.met"
                PPTREE _ptRes0=0;
#line 1932 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1932 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("BEGIN_MESSAGE_MAP"));
#line 1932 "cplus.met"
                retTree=_ptRes0;
#line 1932 "cplus.met"
            }
#line 1932 "cplus.met"
            break;
#line 1932 "cplus.met"
#line 1934 "cplus.met"
        case END_MESSAGE_MAP : 
#line 1934 "cplus.met"
            tokenAhead = 0 ;
#line 1934 "cplus.met"
            CommTerm();
#line 1934 "cplus.met"
#line 1934 "cplus.met"
            {
#line 1934 "cplus.met"
                PPTREE _ptRes0=0;
#line 1934 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1934 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("END_MESSAGE_MAP"));
#line 1934 "cplus.met"
                retTree=_ptRes0;
#line 1934 "cplus.met"
            }
#line 1934 "cplus.met"
            break;
#line 1934 "cplus.met"
#line 1935 "cplus.met"
        case CATCH_UPPER : 
#line 1935 "cplus.met"
            tokenAhead = 0 ;
#line 1935 "cplus.met"
            CommTerm();
#line 1935 "cplus.met"
#line 1935 "cplus.met"
            {
#line 1935 "cplus.met"
                PPTREE _ptRes0=0;
#line 1935 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1935 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH"));
#line 1935 "cplus.met"
                retTree=_ptRes0;
#line 1935 "cplus.met"
            }
#line 1935 "cplus.met"
            break;
#line 1935 "cplus.met"
#line 1936 "cplus.met"
        case CATCH_ALL : 
#line 1936 "cplus.met"
            tokenAhead = 0 ;
#line 1936 "cplus.met"
            CommTerm();
#line 1936 "cplus.met"
#line 1936 "cplus.met"
            {
#line 1936 "cplus.met"
                PPTREE _ptRes0=0;
#line 1936 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1936 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("CATCH_ALL"));
#line 1936 "cplus.met"
                retTree=_ptRes0;
#line 1936 "cplus.met"
            }
#line 1936 "cplus.met"
            break;
#line 1936 "cplus.met"
#line 1937 "cplus.met"
        case AND_CATCH : 
#line 1937 "cplus.met"
            tokenAhead = 0 ;
#line 1937 "cplus.met"
            CommTerm();
#line 1937 "cplus.met"
#line 1937 "cplus.met"
            {
#line 1937 "cplus.met"
                PPTREE _ptRes0=0;
#line 1937 "cplus.met"
                _ptRes0= MakeTree(IDENT, 1);
#line 1937 "cplus.met"
                ReplaceTree(_ptRes0, 1, MakeString ("AND_CATCH"));
#line 1937 "cplus.met"
                retTree=_ptRes0;
#line 1937 "cplus.met"
            }
#line 1937 "cplus.met"
            break;
#line 1937 "cplus.met"
#line 1938 "cplus.met"
        default : 
#line 1938 "cplus.met"
#line 1938 "cplus.met"
            
#line 1938 "cplus.met"
            MulFreeTree(2,retTree,valTree);
            LEX_EXIT ("",0);
#line 1938 "cplus.met"
            goto macro_exit;
#line 1938 "cplus.met"
            break;
#line 1938 "cplus.met"
    }
#line 1938 "cplus.met"
#line 1940 "cplus.met"
    {
#line 1940 "cplus.met"
        PPTREE _ptRes0=0;
#line 1940 "cplus.met"
        _ptRes0= MakeTree(MACRO, 2);
#line 1940 "cplus.met"
        ReplaceTree(_ptRes0, 1, retTree );
#line 1940 "cplus.met"
        retTree=_ptRes0;
#line 1940 "cplus.met"
    }
#line 1940 "cplus.met"
#line 1941 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1941 "cplus.met"
    if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 1941 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,"(")
#line 1941 "cplus.met"
    } else {
#line 1941 "cplus.met"
        tokenAhead = 0 ;
#line 1941 "cplus.met"
    }
#line 1941 "cplus.met"
#line 1942 "cplus.met"
    if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(expression), 60, cplus)){
#line 1942 "cplus.met"
#line 1943 "cplus.met"
        ReplaceTree(retTree ,2 ,valTree );
#line 1943 "cplus.met"
#line 1943 "cplus.met"
    }
#line 1943 "cplus.met"
#line 1944 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1944 "cplus.met"
    if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 1944 "cplus.met"
        MulFreeTree(2,retTree,valTree);
        TOKEN_EXIT(macro_exit,")")
#line 1944 "cplus.met"
    } else {
#line 1944 "cplus.met"
        tokenAhead = 0 ;
#line 1944 "cplus.met"
    }
#line 1944 "cplus.met"
#line 1945 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 1945 "cplus.met"
#line 1945 "cplus.met"
    }
#line 1945 "cplus.met"
#line 1947 "cplus.met"
    {
#line 1947 "cplus.met"
        _retValue = retTree ;
#line 1947 "cplus.met"
        goto macro_ret;
#line 1947 "cplus.met"
        
#line 1947 "cplus.met"
    }
#line 1947 "cplus.met"
#line 1947 "cplus.met"
#line 1947 "cplus.met"

#line 1948 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1948 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1948 "cplus.met"
return((PPTREE) 0);
#line 1948 "cplus.met"

#line 1948 "cplus.met"
macro_exit :
#line 1948 "cplus.met"

#line 1948 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_EXIT,(PPTREE)0);
#line 1948 "cplus.met"
    _funcLevel--;
#line 1948 "cplus.met"
    return((PPTREE) -1) ;
#line 1948 "cplus.met"

#line 1948 "cplus.met"
macro_ret :
#line 1948 "cplus.met"
    
#line 1948 "cplus.met"
    _Debug = TRACE_RULE("macro",TRACE_RETURN,_retValue);
#line 1948 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1948 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1948 "cplus.met"
    return _retValue ;
#line 1948 "cplus.met"
}
#line 1948 "cplus.met"

#line 1948 "cplus.met"
