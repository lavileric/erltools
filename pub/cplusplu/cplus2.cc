/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1241 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1241 "cplus.met"
{
#line 1241 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1241 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1241 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1241 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1241 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1241 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1241 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 1241 "cplus.met"
#line 1241 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0,exp = (PPTREE) 0;
#line 1241 "cplus.met"
#line 1243 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1243 "cplus.met"
    switch( lexEl.Value) {
#line 1243 "cplus.met"
#line 1244 "cplus.met"
        case META : 
#line 1244 "cplus.met"
        case DEFINE_DIR : 
#line 1244 "cplus.met"
#line 1244 "cplus.met"
            {
#line 1244 "cplus.met"
                PPTREE _ptTree0=0;
#line 1244 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1244 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1244 "cplus.met"
                }
#line 1244 "cplus.met"
                _retValue =_ptTree0;
#line 1244 "cplus.met"
                goto directive_ret;
#line 1244 "cplus.met"
            }
#line 1244 "cplus.met"
            break;
#line 1244 "cplus.met"
#line 1245 "cplus.met"
        case INCLUDE_DIR : 
#line 1245 "cplus.met"
#line 1245 "cplus.met"
            {
#line 1245 "cplus.met"
                PPTREE _ptTree0=0;
#line 1245 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 80, cplus))== (PPTREE) -1 ) {
#line 1245 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1245 "cplus.met"
                }
#line 1245 "cplus.met"
                _retValue =_ptTree0;
#line 1245 "cplus.met"
                goto directive_ret;
#line 1245 "cplus.met"
            }
#line 1245 "cplus.met"
            break;
#line 1245 "cplus.met"
#line 1246 "cplus.met"
        case LINE_DIR : 
#line 1246 "cplus.met"
            tokenAhead = 0 ;
#line 1246 "cplus.met"
            CommTerm();
#line 1246 "cplus.met"
#line 1247 "cplus.met"
#line 1248 "cplus.met"
            {
#line 1248 "cplus.met"
                keepCarriage = 1 ;
#line 1248 "cplus.met"
#line 1249 "cplus.met"
#line 1250 "cplus.met"
                {
#line 1250 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1250 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1250 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1250 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1250 "cplus.met"
                    }
#line 1250 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1250 "cplus.met"
                    retTree=_ptRes0;
#line 1250 "cplus.met"
                }
#line 1250 "cplus.met"
#line 1251 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1251 "cplus.met"
#line 1252 "cplus.met"
                    {
#line 1252 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1252 "cplus.met"
                        {
#line 1252 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1252 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1252 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1252 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1252 "cplus.met"
                        }
#line 1252 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1252 "cplus.met"
                    }
#line 1252 "cplus.met"
#line 1252 "cplus.met"
                }
#line 1252 "cplus.met"
#line 1253 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1253 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1253 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1253 "cplus.met"
                } else {
#line 1253 "cplus.met"
                    tokenAhead = 0 ;
#line 1253 "cplus.met"
                }
#line 1253 "cplus.met"
#line 1253 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1253 "cplus.met"
            }
#line 1253 "cplus.met"
#line 1255 "cplus.met"
            {
#line 1255 "cplus.met"
                _retValue = retTree ;
#line 1255 "cplus.met"
                goto directive_ret;
#line 1255 "cplus.met"
                
#line 1255 "cplus.met"
            }
#line 1255 "cplus.met"
#line 1255 "cplus.met"
            break;
#line 1255 "cplus.met"
#line 1257 "cplus.met"
        case LINE_REFERENCE_DIR : 
#line 1257 "cplus.met"
            tokenAhead = 0 ;
#line 1257 "cplus.met"
            CommTerm();
#line 1257 "cplus.met"
#line 1258 "cplus.met"
#line 1259 "cplus.met"
            {
#line 1259 "cplus.met"
                keepCarriage = 1 ;
#line 1259 "cplus.met"
#line 1260 "cplus.met"
#line 1261 "cplus.met"
                {
#line 1261 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1261 "cplus.met"
                    _ptRes0= MakeTree(LINE_REFERENCE_DIR, 3);
#line 1261 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1261 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1261 "cplus.met"
                    }
#line 1261 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1261 "cplus.met"
                    retTree=_ptRes0;
#line 1261 "cplus.met"
                }
#line 1261 "cplus.met"
#line 1262 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1262 "cplus.met"
#line 1263 "cplus.met"
                    {
#line 1263 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1263 "cplus.met"
                        {
#line 1263 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1263 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1263 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1263 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1263 "cplus.met"
                        }
#line 1263 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1263 "cplus.met"
                    }
#line 1263 "cplus.met"
#line 1263 "cplus.met"
                }
#line 1263 "cplus.met"
#line 1263 "cplus.met"
                _addlist1 = list ;
#line 1263 "cplus.met"
#line 1264 "cplus.met"
                while (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(expression), 63, cplus)) { 
#line 1264 "cplus.met"
#line 1265 "cplus.met"
#line 1265 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,exp );
#line 1265 "cplus.met"
#line 1265 "cplus.met"
                    if (list){
#line 1265 "cplus.met"
#line 1265 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1265 "cplus.met"
                    } else {
#line 1265 "cplus.met"
#line 1265 "cplus.met"
                        list = _addlist1 ;
#line 1265 "cplus.met"
                    }
#line 1265 "cplus.met"
                } 
#line 1265 "cplus.met"
#line 1266 "cplus.met"
                ReplaceTree(retTree ,3 ,list );
#line 1266 "cplus.met"
#line 1267 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1267 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1267 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1267 "cplus.met"
                } else {
#line 1267 "cplus.met"
                    tokenAhead = 0 ;
#line 1267 "cplus.met"
                }
#line 1267 "cplus.met"
#line 1267 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1267 "cplus.met"
            }
#line 1267 "cplus.met"
#line 1269 "cplus.met"
            {
#line 1269 "cplus.met"
                _retValue = retTree ;
#line 1269 "cplus.met"
                goto directive_ret;
#line 1269 "cplus.met"
                
#line 1269 "cplus.met"
            }
#line 1269 "cplus.met"
#line 1269 "cplus.met"
            break;
#line 1269 "cplus.met"
#line 1271 "cplus.met"
        case UNDEF_DIR : 
#line 1271 "cplus.met"
            tokenAhead = 0 ;
#line 1271 "cplus.met"
            CommTerm();
#line 1271 "cplus.met"
#line 1271 "cplus.met"
            {
#line 1271 "cplus.met"
                PPTREE _ptTree0=0;
#line 1271 "cplus.met"
                {
#line 1271 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1271 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1271 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1271 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1271 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1271 "cplus.met"
                    } else {
#line 1271 "cplus.met"
                        tokenAhead = 0 ;
#line 1271 "cplus.met"
                    }
#line 1271 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1271 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1271 "cplus.met"
                }
#line 1271 "cplus.met"
                _retValue =_ptTree0;
#line 1271 "cplus.met"
                goto directive_ret;
#line 1271 "cplus.met"
            }
#line 1271 "cplus.met"
            break;
#line 1271 "cplus.met"
#line 1272 "cplus.met"
        case ERROR_DIR : 
#line 1272 "cplus.met"
            tokenAhead = 0 ;
#line 1272 "cplus.met"
            CommTerm();
#line 1272 "cplus.met"
#line 1272 "cplus.met"
            {
#line 1272 "cplus.met"
                PPTREE _ptTree0=0;
#line 1272 "cplus.met"
                {
#line 1272 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1272 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1272 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1272 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1272 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1272 "cplus.met"
                    } else {
#line 1272 "cplus.met"
                        tokenAhead = 0 ;
#line 1272 "cplus.met"
                    }
#line 1272 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1272 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1272 "cplus.met"
                }
#line 1272 "cplus.met"
                _retValue =_ptTree0;
#line 1272 "cplus.met"
                goto directive_ret;
#line 1272 "cplus.met"
            }
#line 1272 "cplus.met"
            break;
#line 1272 "cplus.met"
#line 1273 "cplus.met"
        case PRAGMA_DIR : 
#line 1273 "cplus.met"
            tokenAhead = 0 ;
#line 1273 "cplus.met"
            CommTerm();
#line 1273 "cplus.met"
#line 1274 "cplus.met"
#line 1275 "cplus.met"
#line 1276 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1276 "cplus.met"
#line 1277 "cplus.met"
#line 1278 "cplus.met"
                {
#line 1278 "cplus.met"
                    keepCarriage = 1 ;
#line 1278 "cplus.met"
#line 1279 "cplus.met"
#line 1280 "cplus.met"
                    {
#line 1280 "cplus.met"
                        keepAll = 1 ;
#line 1280 "cplus.met"
#line 1281 "cplus.met"
#line 1282 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1282 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1282 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1282 "cplus.met"
                        } else {
#line 1282 "cplus.met"
                            tokenAhead = 0 ;
#line 1282 "cplus.met"
                        }
#line 1282 "cplus.met"
#line 1282 "cplus.met"
                        _addlist2 = list ;
#line 1282 "cplus.met"
#line 1283 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 54, cplus))) { 
#line 1283 "cplus.met"
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                            {
#line 1284 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1284 "cplus.met"
                                {
#line 1284 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1284 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1284 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1284 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1284 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1284 "cplus.met"
                                    } else {
#line 1284 "cplus.met"
                                        tokenAhead = 0 ;
#line 1284 "cplus.met"
                                    }
#line 1284 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1284 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1284 "cplus.met"
                                }
#line 1284 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1284 "cplus.met"
                            }
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                            if (list){
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1284 "cplus.met"
                            } else {
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                                list = _addlist2 ;
#line 1284 "cplus.met"
                            }
#line 1284 "cplus.met"
                        } 
#line 1284 "cplus.met"
#line 1285 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1285 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1285 "cplus.met"
                        }
#line 1285 "cplus.met"
#line 1285 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1285 "cplus.met"
                    }
#line 1285 "cplus.met"
#line 1285 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1285 "cplus.met"
                }
#line 1285 "cplus.met"
#line 1289 "cplus.met"
                 tokenAhead = 0;
#line 1289 "cplus.met"
#line 1291 "cplus.met"
                {
#line 1291 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1291 "cplus.met"
                    {
#line 1291 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1291 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1291 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1291 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1291 "cplus.met"
                    }
#line 1291 "cplus.met"
                    _retValue =_ptTree0;
#line 1291 "cplus.met"
                    goto directive_ret;
#line 1291 "cplus.met"
                }
#line 1291 "cplus.met"
#line 1291 "cplus.met"
            } else 
#line 1291 "cplus.met"
#line 1293 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
#line 1293 "cplus.met"
#line 1294 "cplus.met"
#line 1295 "cplus.met"
                {
#line 1295 "cplus.met"
                    keepCarriage = 1 ;
#line 1295 "cplus.met"
#line 1296 "cplus.met"
#line 1297 "cplus.met"
                    {
#line 1297 "cplus.met"
                        keepAll = 1 ;
#line 1297 "cplus.met"
#line 1298 "cplus.met"
#line 1299 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1299 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1299 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1299 "cplus.met"
                        } else {
#line 1299 "cplus.met"
                            tokenAhead = 0 ;
#line 1299 "cplus.met"
                        }
#line 1299 "cplus.met"
#line 1299 "cplus.met"
                        _addlist3 = list ;
#line 1299 "cplus.met"
#line 1300 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 55, cplus))) { 
#line 1300 "cplus.met"
#line 1301 "cplus.met"
#line 1301 "cplus.met"
                            {
#line 1301 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1301 "cplus.met"
                                {
#line 1301 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1301 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1301 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1301 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1301 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1301 "cplus.met"
                                    } else {
#line 1301 "cplus.met"
                                        tokenAhead = 0 ;
#line 1301 "cplus.met"
                                    }
#line 1301 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1301 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1301 "cplus.met"
                                }
#line 1301 "cplus.met"
                                _addlist3 =AddList(_addlist3 , _ptTree0);
#line 1301 "cplus.met"
                            }
#line 1301 "cplus.met"
#line 1301 "cplus.met"
                            if (list){
#line 1301 "cplus.met"
#line 1301 "cplus.met"
                                _addlist3 = SonTree (_addlist3 ,2 );
#line 1301 "cplus.met"
                            } else {
#line 1301 "cplus.met"
#line 1301 "cplus.met"
                                list = _addlist3 ;
#line 1301 "cplus.met"
                            }
#line 1301 "cplus.met"
                        } 
#line 1301 "cplus.met"
#line 1302 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 1302 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1302 "cplus.met"
                        }
#line 1302 "cplus.met"
#line 1302 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1302 "cplus.met"
                    }
#line 1302 "cplus.met"
#line 1302 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1302 "cplus.met"
                }
#line 1302 "cplus.met"
#line 1306 "cplus.met"
                 tokenAhead = 0;
#line 1306 "cplus.met"
#line 1308 "cplus.met"
                {
#line 1308 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1308 "cplus.met"
                    {
#line 1308 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1308 "cplus.met"
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
#line 1308 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1308 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1308 "cplus.met"
                    }
#line 1308 "cplus.met"
                    _retValue =_ptTree0;
#line 1308 "cplus.met"
                    goto directive_ret;
#line 1308 "cplus.met"
                }
#line 1308 "cplus.met"
#line 1308 "cplus.met"
            } else 
#line 1308 "cplus.met"
#line 1310 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1310 "cplus.met"
#line 1311 "cplus.met"
#line 1312 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1312 "cplus.met"
                switch( lexEl.Value) {
#line 1312 "cplus.met"
#line 1313 "cplus.met"
                    case META : 
#line 1313 "cplus.met"
                    case PRAGMA_TAB : 
#line 1313 "cplus.met"
                        tokenAhead = 0 ;
#line 1313 "cplus.met"
                        CommTerm();
#line 1313 "cplus.met"
#line 1314 "cplus.met"
#line 1315 "cplus.met"
                        {
#line 1315 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1315 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1315 "cplus.met"
                            {
#line 1315 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1315 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1315 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1315 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1315 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1315 "cplus.met"
                                } else {
#line 1315 "cplus.met"
                                    tokenAhead = 0 ;
#line 1315 "cplus.met"
                                }
#line 1315 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1315 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1315 "cplus.met"
                            }
#line 1315 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1315 "cplus.met"
                            retTree=_ptRes0;
#line 1315 "cplus.met"
                        }
#line 1315 "cplus.met"
#line 1316 "cplus.met"
                        AnalyzeTab (retTree );
#line 1316 "cplus.met"
#line 1317 "cplus.met"
                        {
#line 1317 "cplus.met"
                            _retValue = retTree ;
#line 1317 "cplus.met"
                            goto directive_ret;
#line 1317 "cplus.met"
                            
#line 1317 "cplus.met"
                        }
#line 1317 "cplus.met"
#line 1317 "cplus.met"
                        break;
#line 1317 "cplus.met"
#line 1319 "cplus.met"
                    case PRAGMA_MODE : 
#line 1319 "cplus.met"
                        tokenAhead = 0 ;
#line 1319 "cplus.met"
                        CommTerm();
#line 1319 "cplus.met"
#line 1320 "cplus.met"
#line 1321 "cplus.met"
                        {
#line 1321 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1321 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1321 "cplus.met"
                            {
#line 1321 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1321 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1321 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1321 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1321 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1321 "cplus.met"
                                } else {
#line 1321 "cplus.met"
                                    tokenAhead = 0 ;
#line 1321 "cplus.met"
                                }
#line 1321 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1321 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1321 "cplus.met"
                            }
#line 1321 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1321 "cplus.met"
                            retTree=_ptRes0;
#line 1321 "cplus.met"
                        }
#line 1321 "cplus.met"
#line 1322 "cplus.met"
                        AnalyzeMode (retTree );
#line 1322 "cplus.met"
#line 1323 "cplus.met"
                        {
#line 1323 "cplus.met"
                            _retValue = retTree ;
#line 1323 "cplus.met"
                            goto directive_ret;
#line 1323 "cplus.met"
                            
#line 1323 "cplus.met"
                        }
#line 1323 "cplus.met"
#line 1323 "cplus.met"
                        break;
#line 1323 "cplus.met"
#line 1325 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1325 "cplus.met"
                        tokenAhead = 0 ;
#line 1325 "cplus.met"
                        CommTerm();
#line 1325 "cplus.met"
#line 1326 "cplus.met"
#line 1327 "cplus.met"
                        {
#line 1327 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1327 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1327 "cplus.met"
                            {
#line 1327 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1327 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1327 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1327 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1327 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1327 "cplus.met"
                                } else {
#line 1327 "cplus.met"
                                    tokenAhead = 0 ;
#line 1327 "cplus.met"
                                }
#line 1327 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1327 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1327 "cplus.met"
                            }
#line 1327 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1327 "cplus.met"
                            retTree=_ptRes0;
#line 1327 "cplus.met"
                        }
#line 1327 "cplus.met"
#line 1328 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1328 "cplus.met"
#line 1329 "cplus.met"
                        {
#line 1329 "cplus.met"
                            _retValue = retTree ;
#line 1329 "cplus.met"
                            goto directive_ret;
#line 1329 "cplus.met"
                            
#line 1329 "cplus.met"
                        }
#line 1329 "cplus.met"
#line 1329 "cplus.met"
                        break;
#line 1329 "cplus.met"
#line 1331 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1331 "cplus.met"
                        tokenAhead = 0 ;
#line 1331 "cplus.met"
                        CommTerm();
#line 1331 "cplus.met"
#line 1332 "cplus.met"
#line 1333 "cplus.met"
                        {
#line 1333 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1333 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1333 "cplus.met"
                            {
#line 1333 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1333 "cplus.met"
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1333 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1333 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1333 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1333 "cplus.met"
                                } else {
#line 1333 "cplus.met"
                                    tokenAhead = 0 ;
#line 1333 "cplus.met"
                                }
#line 1333 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1333 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1333 "cplus.met"
                            }
#line 1333 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1333 "cplus.met"
                            retTree=_ptRes0;
#line 1333 "cplus.met"
                        }
#line 1333 "cplus.met"
#line 1334 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1334 "cplus.met"
#line 1335 "cplus.met"
                        {
#line 1335 "cplus.met"
                            _retValue = retTree ;
#line 1335 "cplus.met"
                            goto directive_ret;
#line 1335 "cplus.met"
                            
#line 1335 "cplus.met"
                        }
#line 1335 "cplus.met"
#line 1335 "cplus.met"
                        break;
#line 1335 "cplus.met"
#line 1337 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1337 "cplus.met"
                        tokenAhead = 0 ;
#line 1337 "cplus.met"
                        CommTerm();
#line 1337 "cplus.met"
#line 1338 "cplus.met"
#line 1339 "cplus.met"
                        {
#line 1339 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1339 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1339 "cplus.met"
                            {
#line 1339 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1339 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1339 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1339 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1339 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1339 "cplus.met"
                                } else {
#line 1339 "cplus.met"
                                    tokenAhead = 0 ;
#line 1339 "cplus.met"
                                }
#line 1339 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1339 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1339 "cplus.met"
                            }
#line 1339 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1339 "cplus.met"
                            retTree=_ptRes0;
#line 1339 "cplus.met"
                        }
#line 1339 "cplus.met"
#line 1340 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1340 "cplus.met"
#line 1341 "cplus.met"
                        {
#line 1341 "cplus.met"
                            _retValue = retTree ;
#line 1341 "cplus.met"
                            goto directive_ret;
#line 1341 "cplus.met"
                            
#line 1341 "cplus.met"
                        }
#line 1341 "cplus.met"
#line 1341 "cplus.met"
                        break;
#line 1341 "cplus.met"
#line 1343 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1343 "cplus.met"
                        tokenAhead = 0 ;
#line 1343 "cplus.met"
                        CommTerm();
#line 1343 "cplus.met"
#line 1344 "cplus.met"
#line 1345 "cplus.met"
                        {
#line 1345 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1345 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1345 "cplus.met"
                            {
#line 1345 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1345 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1345 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1345 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1345 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1345 "cplus.met"
                                } else {
#line 1345 "cplus.met"
                                    tokenAhead = 0 ;
#line 1345 "cplus.met"
                                }
#line 1345 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1345 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1345 "cplus.met"
                            }
#line 1345 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1345 "cplus.met"
                            retTree=_ptRes0;
#line 1345 "cplus.met"
                        }
#line 1345 "cplus.met"
#line 1346 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1346 "cplus.met"
#line 1347 "cplus.met"
                        {
#line 1347 "cplus.met"
                            _retValue = retTree ;
#line 1347 "cplus.met"
                            goto directive_ret;
#line 1347 "cplus.met"
                            
#line 1347 "cplus.met"
                        }
#line 1347 "cplus.met"
#line 1347 "cplus.met"
                        break;
#line 1347 "cplus.met"
#line 1349 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1349 "cplus.met"
                        tokenAhead = 0 ;
#line 1349 "cplus.met"
                        CommTerm();
#line 1349 "cplus.met"
#line 1350 "cplus.met"
#line 1351 "cplus.met"
                        {
#line 1351 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1351 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1351 "cplus.met"
                            {
#line 1351 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1351 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1351 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1351 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1351 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1351 "cplus.met"
                                } else {
#line 1351 "cplus.met"
                                    tokenAhead = 0 ;
#line 1351 "cplus.met"
                                }
#line 1351 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1351 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1351 "cplus.met"
                            }
#line 1351 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1351 "cplus.met"
                            retTree=_ptRes0;
#line 1351 "cplus.met"
                        }
#line 1351 "cplus.met"
#line 1352 "cplus.met"
                        AnalyzeBraceAlign (retTree );
#line 1352 "cplus.met"
#line 1353 "cplus.met"
                        {
#line 1353 "cplus.met"
                            _retValue = retTree ;
#line 1353 "cplus.met"
                            goto directive_ret;
#line 1353 "cplus.met"
                            
#line 1353 "cplus.met"
                        }
#line 1353 "cplus.met"
#line 1353 "cplus.met"
                        break;
#line 1353 "cplus.met"
#line 1355 "cplus.met"
                    case PRAGMA_MARGIN : 
#line 1355 "cplus.met"
                        tokenAhead = 0 ;
#line 1355 "cplus.met"
                        CommTerm();
#line 1355 "cplus.met"
#line 1356 "cplus.met"
#line 1357 "cplus.met"
                        {
#line 1357 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1357 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1357 "cplus.met"
                            {
#line 1357 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1357 "cplus.met"
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1357 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1357 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1357 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1357 "cplus.met"
                                } else {
#line 1357 "cplus.met"
                                    tokenAhead = 0 ;
#line 1357 "cplus.met"
                                }
#line 1357 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1357 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1357 "cplus.met"
                            }
#line 1357 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1357 "cplus.met"
                            retTree=_ptRes0;
#line 1357 "cplus.met"
                        }
#line 1357 "cplus.met"
#line 1358 "cplus.met"
                        AnalyzeMargin (retTree );
#line 1358 "cplus.met"
#line 1359 "cplus.met"
                        {
#line 1359 "cplus.met"
                            _retValue = retTree ;
#line 1359 "cplus.met"
                            goto directive_ret;
#line 1359 "cplus.met"
                            
#line 1359 "cplus.met"
                        }
#line 1359 "cplus.met"
#line 1359 "cplus.met"
                        break;
#line 1359 "cplus.met"
#line 1361 "cplus.met"
                    case PRAGMA_COMMENT_START : 
#line 1361 "cplus.met"
                        tokenAhead = 0 ;
#line 1361 "cplus.met"
                        CommTerm();
#line 1361 "cplus.met"
#line 1362 "cplus.met"
#line 1363 "cplus.met"
                        {
#line 1363 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1363 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1363 "cplus.met"
                            {
#line 1363 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1363 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1363 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1363 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1363 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1363 "cplus.met"
                                } else {
#line 1363 "cplus.met"
                                    tokenAhead = 0 ;
#line 1363 "cplus.met"
                                }
#line 1363 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1363 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1363 "cplus.met"
                            }
#line 1363 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1363 "cplus.met"
                            retTree=_ptRes0;
#line 1363 "cplus.met"
                        }
#line 1363 "cplus.met"
#line 1364 "cplus.met"
                        AnalyzeComment (retTree );
#line 1364 "cplus.met"
#line 1365 "cplus.met"
                        {
#line 1365 "cplus.met"
                            _retValue = retTree ;
#line 1365 "cplus.met"
                            goto directive_ret;
#line 1365 "cplus.met"
                            
#line 1365 "cplus.met"
                        }
#line 1365 "cplus.met"
#line 1365 "cplus.met"
                        break;
#line 1365 "cplus.met"
#line 1367 "cplus.met"
                    case PRAGMA_COMMENT_MIDDLE : 
#line 1367 "cplus.met"
                        tokenAhead = 0 ;
#line 1367 "cplus.met"
                        CommTerm();
#line 1367 "cplus.met"
#line 1368 "cplus.met"
#line 1369 "cplus.met"
                        {
#line 1369 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1369 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1369 "cplus.met"
                            {
#line 1369 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1369 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1369 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1369 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1369 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1369 "cplus.met"
                                } else {
#line 1369 "cplus.met"
                                    tokenAhead = 0 ;
#line 1369 "cplus.met"
                                }
#line 1369 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1369 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1369 "cplus.met"
                            }
#line 1369 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1369 "cplus.met"
                            retTree=_ptRes0;
#line 1369 "cplus.met"
                        }
#line 1369 "cplus.met"
#line 1370 "cplus.met"
                        AnalyzeComment (retTree );
#line 1370 "cplus.met"
#line 1371 "cplus.met"
                        {
#line 1371 "cplus.met"
                            _retValue = retTree ;
#line 1371 "cplus.met"
                            goto directive_ret;
#line 1371 "cplus.met"
                            
#line 1371 "cplus.met"
                        }
#line 1371 "cplus.met"
#line 1371 "cplus.met"
                        break;
#line 1371 "cplus.met"
#line 1373 "cplus.met"
                    case PRAGMA_COMMENT_END : 
#line 1373 "cplus.met"
                        tokenAhead = 0 ;
#line 1373 "cplus.met"
                        CommTerm();
#line 1373 "cplus.met"
#line 1374 "cplus.met"
#line 1375 "cplus.met"
                        {
#line 1375 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1375 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1375 "cplus.met"
                            {
#line 1375 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1375 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1375 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1375 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1375 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1375 "cplus.met"
                                } else {
#line 1375 "cplus.met"
                                    tokenAhead = 0 ;
#line 1375 "cplus.met"
                                }
#line 1375 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1375 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1375 "cplus.met"
                            }
#line 1375 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1375 "cplus.met"
                            retTree=_ptRes0;
#line 1375 "cplus.met"
                        }
#line 1375 "cplus.met"
#line 1376 "cplus.met"
                        AnalyzeComment (retTree );
#line 1376 "cplus.met"
#line 1377 "cplus.met"
                        {
#line 1377 "cplus.met"
                            _retValue = retTree ;
#line 1377 "cplus.met"
                            goto directive_ret;
#line 1377 "cplus.met"
                            
#line 1377 "cplus.met"
                        }
#line 1377 "cplus.met"
#line 1377 "cplus.met"
                        break;
#line 1377 "cplus.met"
#line 1379 "cplus.met"
                    case PRAGMA_COMMENT_PLUS : 
#line 1379 "cplus.met"
                        tokenAhead = 0 ;
#line 1379 "cplus.met"
                        CommTerm();
#line 1379 "cplus.met"
#line 1380 "cplus.met"
#line 1381 "cplus.met"
                        {
#line 1381 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1381 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1381 "cplus.met"
                            {
#line 1381 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1381 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1381 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1381 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1381 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1381 "cplus.met"
                                } else {
#line 1381 "cplus.met"
                                    tokenAhead = 0 ;
#line 1381 "cplus.met"
                                }
#line 1381 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1381 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1381 "cplus.met"
                            }
#line 1381 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1381 "cplus.met"
                            retTree=_ptRes0;
#line 1381 "cplus.met"
                        }
#line 1381 "cplus.met"
#line 1382 "cplus.met"
                        AnalyzeComment (retTree );
#line 1382 "cplus.met"
#line 1383 "cplus.met"
                        {
#line 1383 "cplus.met"
                            _retValue = retTree ;
#line 1383 "cplus.met"
                            goto directive_ret;
#line 1383 "cplus.met"
                            
#line 1383 "cplus.met"
                        }
#line 1383 "cplus.met"
#line 1383 "cplus.met"
                        break;
#line 1383 "cplus.met"
#line 1385 "cplus.met"
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 1385 "cplus.met"
                        tokenAhead = 0 ;
#line 1385 "cplus.met"
                        CommTerm();
#line 1385 "cplus.met"
#line 1386 "cplus.met"
#line 1387 "cplus.met"
                        {
#line 1387 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1387 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1387 "cplus.met"
                            {
#line 1387 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1387 "cplus.met"
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1387 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1387 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1387 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1387 "cplus.met"
                                } else {
#line 1387 "cplus.met"
                                    tokenAhead = 0 ;
#line 1387 "cplus.met"
                                }
#line 1387 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1387 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1387 "cplus.met"
                            }
#line 1387 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1387 "cplus.met"
                            retTree=_ptRes0;
#line 1387 "cplus.met"
                        }
#line 1387 "cplus.met"
#line 1388 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1388 "cplus.met"
#line 1389 "cplus.met"
                        {
#line 1389 "cplus.met"
                            _retValue = retTree ;
#line 1389 "cplus.met"
                            goto directive_ret;
#line 1389 "cplus.met"
                            
#line 1389 "cplus.met"
                        }
#line 1389 "cplus.met"
#line 1389 "cplus.met"
                        break;
#line 1389 "cplus.met"
#line 1391 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1391 "cplus.met"
                        tokenAhead = 0 ;
#line 1391 "cplus.met"
                        CommTerm();
#line 1391 "cplus.met"
#line 1392 "cplus.met"
#line 1393 "cplus.met"
                        {
#line 1393 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1393 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1393 "cplus.met"
                            {
#line 1393 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1393 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1393 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1393 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1393 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1393 "cplus.met"
                                } else {
#line 1393 "cplus.met"
                                    tokenAhead = 0 ;
#line 1393 "cplus.met"
                                }
#line 1393 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1393 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1393 "cplus.met"
                            }
#line 1393 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1393 "cplus.met"
                            retTree=_ptRes0;
#line 1393 "cplus.met"
                        }
#line 1393 "cplus.met"
#line 1394 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1394 "cplus.met"
#line 1395 "cplus.met"
                        {
#line 1395 "cplus.met"
                            _retValue = retTree ;
#line 1395 "cplus.met"
                            goto directive_ret;
#line 1395 "cplus.met"
                            
#line 1395 "cplus.met"
                        }
#line 1395 "cplus.met"
#line 1395 "cplus.met"
                        break;
#line 1395 "cplus.met"
#line 1397 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1397 "cplus.met"
                        tokenAhead = 0 ;
#line 1397 "cplus.met"
                        CommTerm();
#line 1397 "cplus.met"
#line 1398 "cplus.met"
#line 1399 "cplus.met"
                        {
#line 1399 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1399 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1399 "cplus.met"
                            {
#line 1399 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1399 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1399 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1399 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1399 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1399 "cplus.met"
                                } else {
#line 1399 "cplus.met"
                                    tokenAhead = 0 ;
#line 1399 "cplus.met"
                                }
#line 1399 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1399 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1399 "cplus.met"
                            }
#line 1399 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1399 "cplus.met"
                            retTree=_ptRes0;
#line 1399 "cplus.met"
                        }
#line 1399 "cplus.met"
#line 1400 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1400 "cplus.met"
#line 1401 "cplus.met"
                        {
#line 1401 "cplus.met"
                            _retValue = retTree ;
#line 1401 "cplus.met"
                            goto directive_ret;
#line 1401 "cplus.met"
                            
#line 1401 "cplus.met"
                        }
#line 1401 "cplus.met"
#line 1401 "cplus.met"
                        break;
#line 1401 "cplus.met"
#line 1403 "cplus.met"
                    default : 
#line 1403 "cplus.met"
#line 1403 "cplus.met"
                        {
#line 1403 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1403 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 1403 "cplus.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1403 "cplus.met"
                            }
#line 1403 "cplus.met"
                            _retValue =_ptTree0;
#line 1403 "cplus.met"
                            goto directive_ret;
#line 1403 "cplus.met"
                        }
#line 1403 "cplus.met"
                        break;
#line 1403 "cplus.met"
                }
#line 1403 "cplus.met"
#line 1403 "cplus.met"
            } else 
#line 1403 "cplus.met"
#line 1408 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 125, cplus))){
#line 1408 "cplus.met"
#line 1407 "cplus.met"
#line 1408 "cplus.met"
                {
#line 1408 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1408 "cplus.met"
                    {
#line 1408 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1408 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1408 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1408 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1408 "cplus.met"
                            MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
#line 1408 "cplus.met"
                        } else {
#line 1408 "cplus.met"
                            tokenAhead = 0 ;
#line 1408 "cplus.met"
                        }
#line 1408 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1408 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1408 "cplus.met"
                    }
#line 1408 "cplus.met"
                    _retValue =_ptTree0;
#line 1408 "cplus.met"
                    goto directive_ret;
#line 1408 "cplus.met"
                }
#line 1408 "cplus.met"
#line 1408 "cplus.met"
            } else 
#line 1408 "cplus.met"
#line 1412 "cplus.met"
            if (1) {
#line 1412 "cplus.met"
#line 1411 "cplus.met"
#line 1412 "cplus.met"
                {
#line 1412 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1412 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 1412 "cplus.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1412 "cplus.met"
                    }
#line 1412 "cplus.met"
                    _retValue =_ptTree0;
#line 1412 "cplus.met"
                    goto directive_ret;
#line 1412 "cplus.met"
                }
#line 1412 "cplus.met"
#line 1412 "cplus.met"
            } else 
#line 1412 "cplus.met"
             ;
#line 1412 "cplus.met"
#line 1412 "cplus.met"
            break;
#line 1412 "cplus.met"
        default :
#line 1412 "cplus.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1412 "cplus.met"
            break;
#line 1412 "cplus.met"
    }
#line 1412 "cplus.met"
#line 1412 "cplus.met"
#line 1416 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1416 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1416 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1416 "cplus.met"
keepAll =  _oldkeepAll;
#line 1416 "cplus.met"
return((PPTREE) 0);
#line 1416 "cplus.met"

#line 1416 "cplus.met"
directive_exit :
#line 1416 "cplus.met"

#line 1416 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1416 "cplus.met"
    _funcLevel--;
#line 1416 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1416 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1416 "cplus.met"
    return((PPTREE) -1) ;
#line 1416 "cplus.met"

#line 1416 "cplus.met"
directive_ret :
#line 1416 "cplus.met"
    
#line 1416 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1416 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1416 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1416 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1416 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1416 "cplus.met"
    return _retValue ;
#line 1416 "cplus.met"
}
#line 1416 "cplus.met"

#line 1416 "cplus.met"
#line 823 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 823 "cplus.met"
{
#line 823 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 823 "cplus.met"
    int _value,_nbPre = 0 ;
#line 823 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 823 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 823 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 823 "cplus.met"
#line 824 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 824 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 824 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 824 "cplus.met"
    } else {
#line 824 "cplus.met"
        tokenAhead = 0 ;
#line 824 "cplus.met"
    }
#line 824 "cplus.met"
#line 825 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 825 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 825 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 825 "cplus.met"
    } else {
#line 825 "cplus.met"
        tokenAhead = 0 ;
#line 825 "cplus.met"
    }
#line 825 "cplus.met"
#line 825 "cplus.met"
#line 825 "cplus.met"

#line 826 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 826 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 826 "cplus.met"
return((PPTREE) 0);
#line 826 "cplus.met"

#line 826 "cplus.met"
end_pragma_exit :
#line 826 "cplus.met"

#line 826 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 826 "cplus.met"
    _funcLevel--;
#line 826 "cplus.met"
    return((PPTREE) -1) ;
#line 826 "cplus.met"

#line 826 "cplus.met"
end_pragma_ret :
#line 826 "cplus.met"
    
#line 826 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 826 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 826 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 826 "cplus.met"
    return _retValue ;
#line 826 "cplus.met"
}
#line 826 "cplus.met"

#line 826 "cplus.met"
#line 828 "cplus.met"
PPTREE cplus::end_pragma_managed ( int error_free)
#line 828 "cplus.met"
{
#line 828 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 828 "cplus.met"
    int _value,_nbPre = 0 ;
#line 828 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 828 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma_managed",TRACE_ENTER,(PPTREE)0);
#line 828 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 828 "cplus.met"
#line 829 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 829 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 829 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_DIR")
#line 829 "cplus.met"
    } else {
#line 829 "cplus.met"
        tokenAhead = 0 ;
#line 829 "cplus.met"
    }
#line 829 "cplus.met"
#line 830 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 830 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_MANAGED,"PRAGMA_MANAGED") || !(CommTerm(),1)) {
#line 830 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_MANAGED")
#line 830 "cplus.met"
    } else {
#line 830 "cplus.met"
        tokenAhead = 0 ;
#line 830 "cplus.met"
    }
#line 830 "cplus.met"
#line 830 "cplus.met"
#line 830 "cplus.met"

#line 831 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 831 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 831 "cplus.met"
return((PPTREE) 0);
#line 831 "cplus.met"

#line 831 "cplus.met"
end_pragma_managed_exit :
#line 831 "cplus.met"

#line 831 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_EXIT,(PPTREE)0);
#line 831 "cplus.met"
    _funcLevel--;
#line 831 "cplus.met"
    return((PPTREE) -1) ;
#line 831 "cplus.met"

#line 831 "cplus.met"
end_pragma_managed_ret :
#line 831 "cplus.met"
    
#line 831 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_RETURN,_retValue);
#line 831 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 831 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 831 "cplus.met"
    return _retValue ;
#line 831 "cplus.met"
}
#line 831 "cplus.met"

#line 831 "cplus.met"
#line 1711 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1711 "cplus.met"
{
#line 1711 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1711 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1711 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1711 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1711 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1711 "cplus.met"
#line 1711 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1711 "cplus.met"
#line 1711 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,classMarker = (PPTREE) 0;
#line 1711 "cplus.met"
#line 1713 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1713 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1713 "cplus.met"
        MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1713 "cplus.met"
    } else {
#line 1713 "cplus.met"
        tokenAhead = 0 ;
#line 1713 "cplus.met"
    }
#line 1713 "cplus.met"
#line 1714 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CLASS,"class") && (tokenAhead = 0,CommTerm(),1)){
#line 1714 "cplus.met"
#line 1715 "cplus.met"
#line 1716 "cplus.met"
        {
#line 1716 "cplus.met"
            PPTREE _ptRes0=0;
#line 1716 "cplus.met"
            _ptRes0= MakeTree(ENUM_CLASS, 0);
#line 1716 "cplus.met"
            classMarker=_ptRes0;
#line 1716 "cplus.met"
        }
#line 1716 "cplus.met"
#line 1716 "cplus.met"
#line 1716 "cplus.met"
    }
#line 1716 "cplus.met"
#line 1718 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1718 "cplus.met"
#line 1719 "cplus.met"
        {
#line 1719 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1719 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1719 "cplus.met"
            {
#line 1719 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1719 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1719 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1719 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1719 "cplus.met"
                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1719 "cplus.met"
                } else {
#line 1719 "cplus.met"
                    tokenAhead = 0 ;
#line 1719 "cplus.met"
                }
#line 1719 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1719 "cplus.met"
                _ptTree0=_ptRes1;
#line 1719 "cplus.met"
            }
#line 1719 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1719 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1719 "cplus.met"
            retTree=_ptRes0;
#line 1719 "cplus.met"
        }
#line 1719 "cplus.met"
    } else {
#line 1719 "cplus.met"
#line 1721 "cplus.met"
        {
#line 1721 "cplus.met"
            PPTREE _ptRes0=0;
#line 1721 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1721 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1721 "cplus.met"
            retTree=_ptRes0;
#line 1721 "cplus.met"
        }
#line 1721 "cplus.met"
    }
#line 1721 "cplus.met"
#line 1722 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1722 "cplus.met"
#line 1723 "cplus.met"
#line 1724 "cplus.met"
        {
#line 1724 "cplus.met"
            PPTREE _ptTree0=0;
#line 1724 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1724 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                PROG_EXIT(enum_declarator_exit,"enum_declarator")
#line 1724 "cplus.met"
            }
#line 1724 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 1724 "cplus.met"
        }
#line 1724 "cplus.met"
#line 1724 "cplus.met"
#line 1724 "cplus.met"
    }
#line 1724 "cplus.met"
#line 1726 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1726 "cplus.met"
#line 1727 "cplus.met"
#line 1727 "cplus.met"
        _addlist1 = list ;
#line 1727 "cplus.met"
#line 1728 "cplus.met"
        do {
#line 1728 "cplus.met"
#line 1729 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 57, cplus)){
#line 1729 "cplus.met"
#line 1730 "cplus.met"
#line 1730 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1730 "cplus.met"
#line 1730 "cplus.met"
                if (list){
#line 1730 "cplus.met"
#line 1730 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1730 "cplus.met"
                } else {
#line 1730 "cplus.met"
#line 1730 "cplus.met"
                    list = _addlist1 ;
#line 1730 "cplus.met"
                }
#line 1730 "cplus.met"
            } else {
#line 1730 "cplus.met"
#line 1732 "cplus.met"
                
#line 1732 "cplus.met"
                MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1732 "cplus.met"
                goto enum_declarator_exit;
#line 1732 "cplus.met"
            }
#line 1732 "cplus.met"
#line 1732 "cplus.met"
#line 1733 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1733 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1733 "cplus.met"
#line 1734 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1734 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1734 "cplus.met"
            MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1734 "cplus.met"
        } else {
#line 1734 "cplus.met"
            tokenAhead = 0 ;
#line 1734 "cplus.met"
        }
#line 1734 "cplus.met"
#line 1735 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1735 "cplus.met"
#line 1735 "cplus.met"
#line 1735 "cplus.met"
    }
#line 1735 "cplus.met"
#line 1737 "cplus.met"
    {
#line 1737 "cplus.met"
        _retValue = retTree ;
#line 1737 "cplus.met"
        goto enum_declarator_ret;
#line 1737 "cplus.met"
        
#line 1737 "cplus.met"
    }
#line 1737 "cplus.met"
#line 1737 "cplus.met"
#line 1737 "cplus.met"

#line 1738 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1738 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1738 "cplus.met"
return((PPTREE) 0);
#line 1738 "cplus.met"

#line 1738 "cplus.met"
enum_declarator_exit :
#line 1738 "cplus.met"

#line 1738 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1738 "cplus.met"
    _funcLevel--;
#line 1738 "cplus.met"
    return((PPTREE) -1) ;
#line 1738 "cplus.met"

#line 1738 "cplus.met"
enum_declarator_ret :
#line 1738 "cplus.met"
    
#line 1738 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
#line 1738 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1738 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1738 "cplus.met"
    return _retValue ;
#line 1738 "cplus.met"
}
#line 1738 "cplus.met"

#line 1738 "cplus.met"
#line 1701 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1701 "cplus.met"
{
#line 1701 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1701 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1701 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1701 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1701 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1701 "cplus.met"
#line 1701 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1701 "cplus.met"
#line 1703 "cplus.met"
    {
#line 1703 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1703 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1703 "cplus.met"
        {
#line 1703 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1703 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1703 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1703 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1703 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1703 "cplus.met"
            } else {
#line 1703 "cplus.met"
                tokenAhead = 0 ;
#line 1703 "cplus.met"
            }
#line 1703 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1703 "cplus.met"
            _ptTree0=_ptRes1;
#line 1703 "cplus.met"
        }
#line 1703 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1703 "cplus.met"
        valTree=_ptRes0;
#line 1703 "cplus.met"
    }
#line 1703 "cplus.met"
#line 1704 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1704 "cplus.met"
#line 1705 "cplus.met"
        {
#line 1705 "cplus.met"
            PPTREE _ptTree0=0;
#line 1705 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1705 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1705 "cplus.met"
            }
#line 1705 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1705 "cplus.met"
        }
#line 1705 "cplus.met"
#line 1705 "cplus.met"
    }
#line 1705 "cplus.met"
#line 1706 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1706 "cplus.met"
#line 1706 "cplus.met"
    }
#line 1706 "cplus.met"
#line 1708 "cplus.met"
    {
#line 1708 "cplus.met"
        _retValue = valTree ;
#line 1708 "cplus.met"
        goto enum_val_ret;
#line 1708 "cplus.met"
        
#line 1708 "cplus.met"
    }
#line 1708 "cplus.met"
#line 1708 "cplus.met"
#line 1708 "cplus.met"

#line 1709 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1709 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1709 "cplus.met"
return((PPTREE) 0);
#line 1709 "cplus.met"

#line 1709 "cplus.met"
enum_val_exit :
#line 1709 "cplus.met"

#line 1709 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1709 "cplus.met"
    _funcLevel--;
#line 1709 "cplus.met"
    return((PPTREE) -1) ;
#line 1709 "cplus.met"

#line 1709 "cplus.met"
enum_val_ret :
#line 1709 "cplus.met"
    
#line 1709 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1709 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1709 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1709 "cplus.met"
    return _retValue ;
#line 1709 "cplus.met"
}
#line 1709 "cplus.met"

#line 1709 "cplus.met"
#line 2663 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2663 "cplus.met"
{
#line 2663 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2663 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2663 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2663 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2663 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2663 "cplus.met"
#line 2663 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2663 "cplus.met"
#line 2665 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2665 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2665 "cplus.met"
    }
#line 2665 "cplus.met"
#line 2666 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2666 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2666 "cplus.met"
#line 2667 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2667 "cplus.met"
#line 2668 "cplus.met"
            {
#line 2668 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2668 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2668 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2668 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2668 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2668 "cplus.met"
                }
#line 2668 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2668 "cplus.met"
                expTree=_ptRes0;
#line 2668 "cplus.met"
            }
#line 2668 "cplus.met"
        } else {
#line 2668 "cplus.met"
#line 2670 "cplus.met"
#line 2671 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2671 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2671 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2671 "cplus.met"
            } else {
#line 2671 "cplus.met"
                tokenAhead = 0 ;
#line 2671 "cplus.met"
            }
#line 2671 "cplus.met"
#line 2672 "cplus.met"
            {
#line 2672 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2672 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2672 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2672 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2672 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2672 "cplus.met"
                }
#line 2672 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2672 "cplus.met"
                expTree=_ptRes0;
#line 2672 "cplus.met"
            }
#line 2672 "cplus.met"
#line 2672 "cplus.met"
        }
#line 2672 "cplus.met"
    } 
#line 2672 "cplus.met"
#line 2674 "cplus.met"
    {
#line 2674 "cplus.met"
        _retValue = expTree ;
#line 2674 "cplus.met"
        goto equality_expression_ret;
#line 2674 "cplus.met"
        
#line 2674 "cplus.met"
    }
#line 2674 "cplus.met"
#line 2674 "cplus.met"
#line 2674 "cplus.met"

#line 2675 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2675 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2675 "cplus.met"
return((PPTREE) 0);
#line 2675 "cplus.met"

#line 2675 "cplus.met"
equality_expression_exit :
#line 2675 "cplus.met"

#line 2675 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2675 "cplus.met"
    _funcLevel--;
#line 2675 "cplus.met"
    return((PPTREE) -1) ;
#line 2675 "cplus.met"

#line 2675 "cplus.met"
equality_expression_ret :
#line 2675 "cplus.met"
    
#line 2675 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2675 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2675 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2675 "cplus.met"
    return _retValue ;
#line 2675 "cplus.met"
}
#line 2675 "cplus.met"

#line 2675 "cplus.met"
#line 1938 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 1938 "cplus.met"
{
#line 1938 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1938 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1938 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1938 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 1938 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1938 "cplus.met"
#line 1938 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1938 "cplus.met"
#line 1938 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1938 "cplus.met"
#line 1940 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1940 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 1940 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 1940 "cplus.met"
    } else {
#line 1940 "cplus.met"
        tokenAhead = 0 ;
#line 1940 "cplus.met"
    }
#line 1940 "cplus.met"
#line 1941 "cplus.met"
    {
#line 1941 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1941 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 1941 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1941 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 1941 "cplus.met"
        }
#line 1941 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1941 "cplus.met"
        retTree=_ptRes0;
#line 1941 "cplus.met"
    }
#line 1941 "cplus.met"
#line 1941 "cplus.met"
    _addlist1 = list ;
#line 1941 "cplus.met"
#line 1942 "cplus.met"
    do {
#line 1942 "cplus.met"
#line 1943 "cplus.met"
        {
#line 1943 "cplus.met"
            PPTREE _ptTree0=0;
#line 1943 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1943 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 1943 "cplus.met"
            }
#line 1943 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1943 "cplus.met"
        }
#line 1943 "cplus.met"
#line 1943 "cplus.met"
        if (list){
#line 1943 "cplus.met"
#line 1943 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1943 "cplus.met"
        } else {
#line 1943 "cplus.met"
#line 1943 "cplus.met"
            list = _addlist1 ;
#line 1943 "cplus.met"
        }
#line 1943 "cplus.met"
#line 1943 "cplus.met"
#line 1944 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 1944 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 1944 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1944 "cplus.met"
#line 1945 "cplus.met"
    {
#line 1945 "cplus.met"
        PPTREE _ptTree0=0;
#line 1945 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1945 "cplus.met"
        _retValue =_ptTree0;
#line 1945 "cplus.met"
        goto exception_ret;
#line 1945 "cplus.met"
    }
#line 1945 "cplus.met"
#line 1945 "cplus.met"
#line 1945 "cplus.met"

#line 1946 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1946 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1946 "cplus.met"
return((PPTREE) 0);
#line 1946 "cplus.met"

#line 1946 "cplus.met"
exception_exit :
#line 1946 "cplus.met"

#line 1946 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 1946 "cplus.met"
    _funcLevel--;
#line 1946 "cplus.met"
    return((PPTREE) -1) ;
#line 1946 "cplus.met"

#line 1946 "cplus.met"
exception_ret :
#line 1946 "cplus.met"
    
#line 1946 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 1946 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1946 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1946 "cplus.met"
    return _retValue ;
#line 1946 "cplus.met"
}
#line 1946 "cplus.met"

#line 1946 "cplus.met"
#line 1969 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 1969 "cplus.met"
{
#line 1969 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1969 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1969 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1969 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 1969 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1969 "cplus.met"
#line 1969 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1969 "cplus.met"
#line 1969 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 1969 "cplus.met"
#line 1971 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1971 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 1971 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 1971 "cplus.met"
    } else {
#line 1971 "cplus.met"
        tokenAhead = 0 ;
#line 1971 "cplus.met"
    }
#line 1971 "cplus.met"
#line 1972 "cplus.met"
    {
#line 1972 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1972 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 1972 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1972 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 1972 "cplus.met"
        }
#line 1972 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1972 "cplus.met"
        retTree=_ptRes0;
#line 1972 "cplus.met"
    }
#line 1972 "cplus.met"
#line 1972 "cplus.met"
    _addlist1 = list ;
#line 1972 "cplus.met"
#line 1973 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 25, cplus)) { 
#line 1973 "cplus.met"
#line 1974 "cplus.met"
#line 1974 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 1974 "cplus.met"
#line 1974 "cplus.met"
        if (list){
#line 1974 "cplus.met"
#line 1974 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1974 "cplus.met"
        } else {
#line 1974 "cplus.met"
#line 1974 "cplus.met"
            list = _addlist1 ;
#line 1974 "cplus.met"
        }
#line 1974 "cplus.met"
    } 
#line 1974 "cplus.met"
#line 1975 "cplus.met"
    {
#line 1975 "cplus.met"
        PPTREE _ptTree0=0;
#line 1975 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1975 "cplus.met"
        _retValue =_ptTree0;
#line 1975 "cplus.met"
        goto exception_ansi_ret;
#line 1975 "cplus.met"
    }
#line 1975 "cplus.met"
#line 1975 "cplus.met"
#line 1975 "cplus.met"

#line 1976 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1976 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1976 "cplus.met"
return((PPTREE) 0);
#line 1976 "cplus.met"

#line 1976 "cplus.met"
exception_ansi_exit :
#line 1976 "cplus.met"

#line 1976 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 1976 "cplus.met"
    _funcLevel--;
#line 1976 "cplus.met"
    return((PPTREE) -1) ;
#line 1976 "cplus.met"

#line 1976 "cplus.met"
exception_ansi_ret :
#line 1976 "cplus.met"
    
#line 1976 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 1976 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1976 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1976 "cplus.met"
    return _retValue ;
#line 1976 "cplus.met"
}
#line 1976 "cplus.met"

#line 1976 "cplus.met"
#line 3228 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3228 "cplus.met"
{
#line 3228 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3228 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3228 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3228 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3228 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3228 "cplus.met"
#line 3228 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3228 "cplus.met"
#line 3228 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3228 "cplus.met"
#line 3230 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3230 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3230 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3230 "cplus.met"
    } else {
#line 3230 "cplus.met"
        tokenAhead = 0 ;
#line 3230 "cplus.met"
    }
#line 3230 "cplus.met"
#line 3231 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3231 "cplus.met"
#line 3232 "cplus.met"
#line 3233 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3233 "cplus.met"
#line 3235 "cplus.met"
#line 3235 "cplus.met"
            _addlist1 = exceptionList ;
#line 3235 "cplus.met"
#line 3234 "cplus.met"
            do {
#line 3234 "cplus.met"
#line 3235 "cplus.met"
                {
#line 3235 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3235 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 3235 "cplus.met"
                        MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                        PROG_EXIT(exception_list_exit,"exception_list")
#line 3235 "cplus.met"
                    }
#line 3235 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3235 "cplus.met"
                }
#line 3235 "cplus.met"
#line 3235 "cplus.met"
                if (exceptionList){
#line 3235 "cplus.met"
#line 3235 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3235 "cplus.met"
                } else {
#line 3235 "cplus.met"
#line 3235 "cplus.met"
                    exceptionList = _addlist1 ;
#line 3235 "cplus.met"
                }
#line 3235 "cplus.met"
#line 3235 "cplus.met"
#line 3236 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3236 "cplus.met"
        }
#line 3236 "cplus.met"
#line 3237 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3237 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3237 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3237 "cplus.met"
        } else {
#line 3237 "cplus.met"
            tokenAhead = 0 ;
#line 3237 "cplus.met"
        }
#line 3237 "cplus.met"
#line 3237 "cplus.met"
#line 3237 "cplus.met"
    } else {
#line 3237 "cplus.met"
#line 3240 "cplus.met"
        {
#line 3240 "cplus.met"
            PPTREE _ptTree0=0;
#line 3240 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 3240 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3240 "cplus.met"
            }
#line 3240 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3240 "cplus.met"
        }
#line 3240 "cplus.met"
    }
#line 3240 "cplus.met"
#line 3241 "cplus.met"
    {
#line 3241 "cplus.met"
        PPTREE _ptTree0=0;
#line 3241 "cplus.met"
        {
#line 3241 "cplus.met"
            PPTREE _ptRes1=0;
#line 3241 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3241 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3241 "cplus.met"
            _ptTree0=_ptRes1;
#line 3241 "cplus.met"
        }
#line 3241 "cplus.met"
        _retValue =_ptTree0;
#line 3241 "cplus.met"
        goto exception_list_ret;
#line 3241 "cplus.met"
    }
#line 3241 "cplus.met"
#line 3241 "cplus.met"
#line 3241 "cplus.met"

#line 3242 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3242 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3242 "cplus.met"
return((PPTREE) 0);
#line 3242 "cplus.met"

#line 3242 "cplus.met"
exception_list_exit :
#line 3242 "cplus.met"

#line 3242 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3242 "cplus.met"
    _funcLevel--;
#line 3242 "cplus.met"
    return((PPTREE) -1) ;
#line 3242 "cplus.met"

#line 3242 "cplus.met"
exception_list_ret :
#line 3242 "cplus.met"
    
#line 3242 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3242 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3242 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3242 "cplus.met"
    return _retValue ;
#line 3242 "cplus.met"
}
#line 3242 "cplus.met"

#line 3242 "cplus.met"
#line 2647 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2647 "cplus.met"
{
#line 2647 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2647 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2647 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2647 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2647 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2647 "cplus.met"
#line 2647 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2647 "cplus.met"
#line 2649 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2649 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2649 "cplus.met"
    }
#line 2649 "cplus.met"
#line 2650 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2650 "cplus.met"
#line 2651 "cplus.met"
        {
#line 2651 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2651 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2651 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2651 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2651 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
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
        goto exclusive_or_expression_ret;
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
exclusive_or_expression_exit :
#line 2653 "cplus.met"

#line 2653 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2653 "cplus.met"
    _funcLevel--;
#line 2653 "cplus.met"
    return((PPTREE) -1) ;
#line 2653 "cplus.met"

#line 2653 "cplus.met"
exclusive_or_expression_ret :
#line 2653 "cplus.met"
    
#line 2653 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
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
