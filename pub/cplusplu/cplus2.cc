/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1240 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1240 "cplus.met"
{
#line 1240 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1240 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1240 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1240 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1240 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1240 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1240 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1240 "cplus.met"
#line 1240 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 1240 "cplus.met"
#line 1240 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0,exp = (PPTREE) 0;
#line 1240 "cplus.met"
#line 1242 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1242 "cplus.met"
    switch( lexEl.Value) {
#line 1242 "cplus.met"
#line 1243 "cplus.met"
        case META : 
#line 1243 "cplus.met"
        case DEFINE_DIR : 
#line 1243 "cplus.met"
#line 1243 "cplus.met"
            {
#line 1243 "cplus.met"
                PPTREE _ptTree0=0;
#line 1243 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 52, cplus))== (PPTREE) -1 ) {
#line 1243 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1243 "cplus.met"
                }
#line 1243 "cplus.met"
                _retValue =_ptTree0;
#line 1243 "cplus.met"
                goto directive_ret;
#line 1243 "cplus.met"
            }
#line 1243 "cplus.met"
            break;
#line 1243 "cplus.met"
#line 1244 "cplus.met"
        case INCLUDE_DIR : 
#line 1244 "cplus.met"
#line 1244 "cplus.met"
            {
#line 1244 "cplus.met"
                PPTREE _ptTree0=0;
#line 1244 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 80, cplus))== (PPTREE) -1 ) {
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
        case LINE_DIR : 
#line 1245 "cplus.met"
            tokenAhead = 0 ;
#line 1245 "cplus.met"
            CommTerm();
#line 1245 "cplus.met"
#line 1246 "cplus.met"
#line 1247 "cplus.met"
            {
#line 1247 "cplus.met"
                keepCarriage = 1 ;
#line 1247 "cplus.met"
#line 1248 "cplus.met"
#line 1249 "cplus.met"
                {
#line 1249 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1249 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1249 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1249 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1249 "cplus.met"
                    }
#line 1249 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1249 "cplus.met"
                    retTree=_ptRes0;
#line 1249 "cplus.met"
                }
#line 1249 "cplus.met"
#line 1250 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1250 "cplus.met"
#line 1251 "cplus.met"
                    {
#line 1251 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1251 "cplus.met"
                        {
#line 1251 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1251 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1251 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1251 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1251 "cplus.met"
                        }
#line 1251 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1251 "cplus.met"
                    }
#line 1251 "cplus.met"
#line 1251 "cplus.met"
                }
#line 1251 "cplus.met"
#line 1252 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1252 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1252 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1252 "cplus.met"
                } else {
#line 1252 "cplus.met"
                    tokenAhead = 0 ;
#line 1252 "cplus.met"
                }
#line 1252 "cplus.met"
#line 1252 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1252 "cplus.met"
            }
#line 1252 "cplus.met"
#line 1254 "cplus.met"
            {
#line 1254 "cplus.met"
                _retValue = retTree ;
#line 1254 "cplus.met"
                goto directive_ret;
#line 1254 "cplus.met"
                
#line 1254 "cplus.met"
            }
#line 1254 "cplus.met"
#line 1254 "cplus.met"
            break;
#line 1254 "cplus.met"
#line 1256 "cplus.met"
        case LINE_REFERENCE_DIR : 
#line 1256 "cplus.met"
            tokenAhead = 0 ;
#line 1256 "cplus.met"
            CommTerm();
#line 1256 "cplus.met"
#line 1257 "cplus.met"
#line 1258 "cplus.met"
            {
#line 1258 "cplus.met"
                keepCarriage = 1 ;
#line 1258 "cplus.met"
#line 1259 "cplus.met"
#line 1260 "cplus.met"
                {
#line 1260 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1260 "cplus.met"
                    _ptRes0= MakeTree(LINE_REFERENCE_DIR, 3);
#line 1260 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 63, cplus))== (PPTREE) -1 ) {
#line 1260 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1260 "cplus.met"
                    }
#line 1260 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1260 "cplus.met"
                    retTree=_ptRes0;
#line 1260 "cplus.met"
                }
#line 1260 "cplus.met"
#line 1261 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1261 "cplus.met"
#line 1262 "cplus.met"
                    {
#line 1262 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1262 "cplus.met"
                        {
#line 1262 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1262 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1262 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1262 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1262 "cplus.met"
                        }
#line 1262 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1262 "cplus.met"
                    }
#line 1262 "cplus.met"
#line 1262 "cplus.met"
                }
#line 1262 "cplus.met"
#line 1262 "cplus.met"
                _addlist1 = list ;
#line 1262 "cplus.met"
#line 1263 "cplus.met"
                while (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(expression), 63, cplus)) { 
#line 1263 "cplus.met"
#line 1264 "cplus.met"
#line 1264 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,exp );
#line 1264 "cplus.met"
#line 1264 "cplus.met"
                    if (list){
#line 1264 "cplus.met"
#line 1264 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1264 "cplus.met"
                    } else {
#line 1264 "cplus.met"
#line 1264 "cplus.met"
                        list = _addlist1 ;
#line 1264 "cplus.met"
                    }
#line 1264 "cplus.met"
                } 
#line 1264 "cplus.met"
#line 1265 "cplus.met"
                ReplaceTree(retTree ,3 ,list );
#line 1265 "cplus.met"
#line 1266 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1266 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1266 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1266 "cplus.met"
                } else {
#line 1266 "cplus.met"
                    tokenAhead = 0 ;
#line 1266 "cplus.met"
                }
#line 1266 "cplus.met"
#line 1266 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1266 "cplus.met"
            }
#line 1266 "cplus.met"
#line 1268 "cplus.met"
            {
#line 1268 "cplus.met"
                _retValue = retTree ;
#line 1268 "cplus.met"
                goto directive_ret;
#line 1268 "cplus.met"
                
#line 1268 "cplus.met"
            }
#line 1268 "cplus.met"
#line 1268 "cplus.met"
            break;
#line 1268 "cplus.met"
#line 1270 "cplus.met"
        case UNDEF_DIR : 
#line 1270 "cplus.met"
            tokenAhead = 0 ;
#line 1270 "cplus.met"
            CommTerm();
#line 1270 "cplus.met"
#line 1270 "cplus.met"
            {
#line 1270 "cplus.met"
                PPTREE _ptTree0=0;
#line 1270 "cplus.met"
                {
#line 1270 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1270 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1270 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1270 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1270 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1270 "cplus.met"
                    } else {
#line 1270 "cplus.met"
                        tokenAhead = 0 ;
#line 1270 "cplus.met"
                    }
#line 1270 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1270 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1270 "cplus.met"
                }
#line 1270 "cplus.met"
                _retValue =_ptTree0;
#line 1270 "cplus.met"
                goto directive_ret;
#line 1270 "cplus.met"
            }
#line 1270 "cplus.met"
            break;
#line 1270 "cplus.met"
#line 1271 "cplus.met"
        case ERROR_DIR : 
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
                    _ptRes1= MakeTree(ERROR, 1);
#line 1271 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1271 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1271 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
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
        case PRAGMA_DIR : 
#line 1272 "cplus.met"
            tokenAhead = 0 ;
#line 1272 "cplus.met"
            CommTerm();
#line 1272 "cplus.met"
#line 1273 "cplus.met"
#line 1274 "cplus.met"
#line 1275 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1275 "cplus.met"
#line 1276 "cplus.met"
#line 1277 "cplus.met"
                {
#line 1277 "cplus.met"
                    keepCarriage = 1 ;
#line 1277 "cplus.met"
#line 1278 "cplus.met"
#line 1279 "cplus.met"
                    {
#line 1279 "cplus.met"
                        keepAll = 1 ;
#line 1279 "cplus.met"
#line 1280 "cplus.met"
#line 1281 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1281 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1281 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1281 "cplus.met"
                        } else {
#line 1281 "cplus.met"
                            tokenAhead = 0 ;
#line 1281 "cplus.met"
                        }
#line 1281 "cplus.met"
#line 1281 "cplus.met"
                        _addlist2 = list ;
#line 1281 "cplus.met"
#line 1282 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 54, cplus))) { 
#line 1282 "cplus.met"
#line 1283 "cplus.met"
#line 1283 "cplus.met"
                            {
#line 1283 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1283 "cplus.met"
                                {
#line 1283 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1283 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1283 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1283 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1283 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1283 "cplus.met"
                                    } else {
#line 1283 "cplus.met"
                                        tokenAhead = 0 ;
#line 1283 "cplus.met"
                                    }
#line 1283 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1283 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1283 "cplus.met"
                                }
#line 1283 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1283 "cplus.met"
                            }
#line 1283 "cplus.met"
#line 1283 "cplus.met"
                            if (list){
#line 1283 "cplus.met"
#line 1283 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1283 "cplus.met"
                            } else {
#line 1283 "cplus.met"
#line 1283 "cplus.met"
                                list = _addlist2 ;
#line 1283 "cplus.met"
                            }
#line 1283 "cplus.met"
                        } 
#line 1283 "cplus.met"
#line 1284 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1284 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1284 "cplus.met"
                        }
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1284 "cplus.met"
                    }
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1284 "cplus.met"
                }
#line 1284 "cplus.met"
#line 1288 "cplus.met"
                 tokenAhead = 0;
#line 1288 "cplus.met"
#line 1290 "cplus.met"
                {
#line 1290 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1290 "cplus.met"
                    {
#line 1290 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1290 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1290 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1290 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1290 "cplus.met"
                    }
#line 1290 "cplus.met"
                    _retValue =_ptTree0;
#line 1290 "cplus.met"
                    goto directive_ret;
#line 1290 "cplus.met"
                }
#line 1290 "cplus.met"
#line 1290 "cplus.met"
            } else 
#line 1290 "cplus.met"
#line 1292 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
#line 1292 "cplus.met"
#line 1293 "cplus.met"
#line 1294 "cplus.met"
                {
#line 1294 "cplus.met"
                    keepCarriage = 1 ;
#line 1294 "cplus.met"
#line 1295 "cplus.met"
#line 1296 "cplus.met"
                    {
#line 1296 "cplus.met"
                        keepAll = 1 ;
#line 1296 "cplus.met"
#line 1297 "cplus.met"
#line 1298 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1298 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1298 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1298 "cplus.met"
                        } else {
#line 1298 "cplus.met"
                            tokenAhead = 0 ;
#line 1298 "cplus.met"
                        }
#line 1298 "cplus.met"
#line 1298 "cplus.met"
                        _addlist3 = list ;
#line 1298 "cplus.met"
#line 1299 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 55, cplus))) { 
#line 1299 "cplus.met"
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                            {
#line 1300 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1300 "cplus.met"
                                {
#line 1300 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1300 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1300 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1300 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1300 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1300 "cplus.met"
                                    } else {
#line 1300 "cplus.met"
                                        tokenAhead = 0 ;
#line 1300 "cplus.met"
                                    }
#line 1300 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1300 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1300 "cplus.met"
                                }
#line 1300 "cplus.met"
                                _addlist3 =AddList(_addlist3 , _ptTree0);
#line 1300 "cplus.met"
                            }
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                            if (list){
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                                _addlist3 = SonTree (_addlist3 ,2 );
#line 1300 "cplus.met"
                            } else {
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                                list = _addlist3 ;
#line 1300 "cplus.met"
                            }
#line 1300 "cplus.met"
                        } 
#line 1300 "cplus.met"
#line 1301 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 55, cplus))== (PPTREE) -1 ) {
#line 1301 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1301 "cplus.met"
                        }
#line 1301 "cplus.met"
#line 1301 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1301 "cplus.met"
                    }
#line 1301 "cplus.met"
#line 1301 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1301 "cplus.met"
                }
#line 1301 "cplus.met"
#line 1305 "cplus.met"
                 tokenAhead = 0;
#line 1305 "cplus.met"
#line 1307 "cplus.met"
                {
#line 1307 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1307 "cplus.met"
                    {
#line 1307 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1307 "cplus.met"
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
#line 1307 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1307 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1307 "cplus.met"
                    }
#line 1307 "cplus.met"
                    _retValue =_ptTree0;
#line 1307 "cplus.met"
                    goto directive_ret;
#line 1307 "cplus.met"
                }
#line 1307 "cplus.met"
#line 1307 "cplus.met"
            } else 
#line 1307 "cplus.met"
#line 1309 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1309 "cplus.met"
#line 1310 "cplus.met"
#line 1311 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1311 "cplus.met"
                switch( lexEl.Value) {
#line 1311 "cplus.met"
#line 1312 "cplus.met"
                    case META : 
#line 1312 "cplus.met"
                    case PRAGMA_TAB : 
#line 1312 "cplus.met"
                        tokenAhead = 0 ;
#line 1312 "cplus.met"
                        CommTerm();
#line 1312 "cplus.met"
#line 1313 "cplus.met"
#line 1314 "cplus.met"
                        {
#line 1314 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1314 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1314 "cplus.met"
                            {
#line 1314 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1314 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1314 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1314 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1314 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1314 "cplus.met"
                                } else {
#line 1314 "cplus.met"
                                    tokenAhead = 0 ;
#line 1314 "cplus.met"
                                }
#line 1314 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1314 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1314 "cplus.met"
                            }
#line 1314 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1314 "cplus.met"
                            retTree=_ptRes0;
#line 1314 "cplus.met"
                        }
#line 1314 "cplus.met"
#line 1315 "cplus.met"
                        AnalyzeTab (retTree );
#line 1315 "cplus.met"
#line 1316 "cplus.met"
                        {
#line 1316 "cplus.met"
                            _retValue = retTree ;
#line 1316 "cplus.met"
                            goto directive_ret;
#line 1316 "cplus.met"
                            
#line 1316 "cplus.met"
                        }
#line 1316 "cplus.met"
#line 1316 "cplus.met"
                        break;
#line 1316 "cplus.met"
#line 1318 "cplus.met"
                    case PRAGMA_MODE : 
#line 1318 "cplus.met"
                        tokenAhead = 0 ;
#line 1318 "cplus.met"
                        CommTerm();
#line 1318 "cplus.met"
#line 1319 "cplus.met"
#line 1320 "cplus.met"
                        {
#line 1320 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1320 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1320 "cplus.met"
                            {
#line 1320 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1320 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1320 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1320 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1320 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1320 "cplus.met"
                                } else {
#line 1320 "cplus.met"
                                    tokenAhead = 0 ;
#line 1320 "cplus.met"
                                }
#line 1320 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1320 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1320 "cplus.met"
                            }
#line 1320 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1320 "cplus.met"
                            retTree=_ptRes0;
#line 1320 "cplus.met"
                        }
#line 1320 "cplus.met"
#line 1321 "cplus.met"
                        AnalyzeMode (retTree );
#line 1321 "cplus.met"
#line 1322 "cplus.met"
                        {
#line 1322 "cplus.met"
                            _retValue = retTree ;
#line 1322 "cplus.met"
                            goto directive_ret;
#line 1322 "cplus.met"
                            
#line 1322 "cplus.met"
                        }
#line 1322 "cplus.met"
#line 1322 "cplus.met"
                        break;
#line 1322 "cplus.met"
#line 1324 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1324 "cplus.met"
                        tokenAhead = 0 ;
#line 1324 "cplus.met"
                        CommTerm();
#line 1324 "cplus.met"
#line 1325 "cplus.met"
#line 1326 "cplus.met"
                        {
#line 1326 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1326 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1326 "cplus.met"
                            {
#line 1326 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1326 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1326 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1326 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1326 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1326 "cplus.met"
                                } else {
#line 1326 "cplus.met"
                                    tokenAhead = 0 ;
#line 1326 "cplus.met"
                                }
#line 1326 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1326 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1326 "cplus.met"
                            }
#line 1326 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1326 "cplus.met"
                            retTree=_ptRes0;
#line 1326 "cplus.met"
                        }
#line 1326 "cplus.met"
#line 1327 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1327 "cplus.met"
#line 1328 "cplus.met"
                        {
#line 1328 "cplus.met"
                            _retValue = retTree ;
#line 1328 "cplus.met"
                            goto directive_ret;
#line 1328 "cplus.met"
                            
#line 1328 "cplus.met"
                        }
#line 1328 "cplus.met"
#line 1328 "cplus.met"
                        break;
#line 1328 "cplus.met"
#line 1330 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1330 "cplus.met"
                        tokenAhead = 0 ;
#line 1330 "cplus.met"
                        CommTerm();
#line 1330 "cplus.met"
#line 1331 "cplus.met"
#line 1332 "cplus.met"
                        {
#line 1332 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1332 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1332 "cplus.met"
                            {
#line 1332 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1332 "cplus.met"
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1332 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1332 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1332 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1332 "cplus.met"
                                } else {
#line 1332 "cplus.met"
                                    tokenAhead = 0 ;
#line 1332 "cplus.met"
                                }
#line 1332 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1332 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1332 "cplus.met"
                            }
#line 1332 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1332 "cplus.met"
                            retTree=_ptRes0;
#line 1332 "cplus.met"
                        }
#line 1332 "cplus.met"
#line 1333 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1333 "cplus.met"
#line 1334 "cplus.met"
                        {
#line 1334 "cplus.met"
                            _retValue = retTree ;
#line 1334 "cplus.met"
                            goto directive_ret;
#line 1334 "cplus.met"
                            
#line 1334 "cplus.met"
                        }
#line 1334 "cplus.met"
#line 1334 "cplus.met"
                        break;
#line 1334 "cplus.met"
#line 1336 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1336 "cplus.met"
                        tokenAhead = 0 ;
#line 1336 "cplus.met"
                        CommTerm();
#line 1336 "cplus.met"
#line 1337 "cplus.met"
#line 1338 "cplus.met"
                        {
#line 1338 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1338 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1338 "cplus.met"
                            {
#line 1338 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1338 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1338 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1338 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1338 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1338 "cplus.met"
                                } else {
#line 1338 "cplus.met"
                                    tokenAhead = 0 ;
#line 1338 "cplus.met"
                                }
#line 1338 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1338 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1338 "cplus.met"
                            }
#line 1338 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1338 "cplus.met"
                            retTree=_ptRes0;
#line 1338 "cplus.met"
                        }
#line 1338 "cplus.met"
#line 1339 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1339 "cplus.met"
#line 1340 "cplus.met"
                        {
#line 1340 "cplus.met"
                            _retValue = retTree ;
#line 1340 "cplus.met"
                            goto directive_ret;
#line 1340 "cplus.met"
                            
#line 1340 "cplus.met"
                        }
#line 1340 "cplus.met"
#line 1340 "cplus.met"
                        break;
#line 1340 "cplus.met"
#line 1342 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1342 "cplus.met"
                        tokenAhead = 0 ;
#line 1342 "cplus.met"
                        CommTerm();
#line 1342 "cplus.met"
#line 1343 "cplus.met"
#line 1344 "cplus.met"
                        {
#line 1344 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1344 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1344 "cplus.met"
                            {
#line 1344 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1344 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1344 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1344 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1344 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1344 "cplus.met"
                                } else {
#line 1344 "cplus.met"
                                    tokenAhead = 0 ;
#line 1344 "cplus.met"
                                }
#line 1344 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1344 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1344 "cplus.met"
                            }
#line 1344 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1344 "cplus.met"
                            retTree=_ptRes0;
#line 1344 "cplus.met"
                        }
#line 1344 "cplus.met"
#line 1345 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1345 "cplus.met"
#line 1346 "cplus.met"
                        {
#line 1346 "cplus.met"
                            _retValue = retTree ;
#line 1346 "cplus.met"
                            goto directive_ret;
#line 1346 "cplus.met"
                            
#line 1346 "cplus.met"
                        }
#line 1346 "cplus.met"
#line 1346 "cplus.met"
                        break;
#line 1346 "cplus.met"
#line 1348 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1348 "cplus.met"
                        tokenAhead = 0 ;
#line 1348 "cplus.met"
                        CommTerm();
#line 1348 "cplus.met"
#line 1349 "cplus.met"
#line 1350 "cplus.met"
                        {
#line 1350 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1350 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1350 "cplus.met"
                            {
#line 1350 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1350 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1350 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1350 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1350 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1350 "cplus.met"
                                } else {
#line 1350 "cplus.met"
                                    tokenAhead = 0 ;
#line 1350 "cplus.met"
                                }
#line 1350 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1350 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1350 "cplus.met"
                            }
#line 1350 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1350 "cplus.met"
                            retTree=_ptRes0;
#line 1350 "cplus.met"
                        }
#line 1350 "cplus.met"
#line 1351 "cplus.met"
                        AnalyzeBraceAlign (retTree );
#line 1351 "cplus.met"
#line 1352 "cplus.met"
                        {
#line 1352 "cplus.met"
                            _retValue = retTree ;
#line 1352 "cplus.met"
                            goto directive_ret;
#line 1352 "cplus.met"
                            
#line 1352 "cplus.met"
                        }
#line 1352 "cplus.met"
#line 1352 "cplus.met"
                        break;
#line 1352 "cplus.met"
#line 1354 "cplus.met"
                    case PRAGMA_MARGIN : 
#line 1354 "cplus.met"
                        tokenAhead = 0 ;
#line 1354 "cplus.met"
                        CommTerm();
#line 1354 "cplus.met"
#line 1355 "cplus.met"
#line 1356 "cplus.met"
                        {
#line 1356 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1356 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1356 "cplus.met"
                            {
#line 1356 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1356 "cplus.met"
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1356 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1356 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1356 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1356 "cplus.met"
                                } else {
#line 1356 "cplus.met"
                                    tokenAhead = 0 ;
#line 1356 "cplus.met"
                                }
#line 1356 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1356 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1356 "cplus.met"
                            }
#line 1356 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1356 "cplus.met"
                            retTree=_ptRes0;
#line 1356 "cplus.met"
                        }
#line 1356 "cplus.met"
#line 1357 "cplus.met"
                        AnalyzeMargin (retTree );
#line 1357 "cplus.met"
#line 1358 "cplus.met"
                        {
#line 1358 "cplus.met"
                            _retValue = retTree ;
#line 1358 "cplus.met"
                            goto directive_ret;
#line 1358 "cplus.met"
                            
#line 1358 "cplus.met"
                        }
#line 1358 "cplus.met"
#line 1358 "cplus.met"
                        break;
#line 1358 "cplus.met"
#line 1360 "cplus.met"
                    case PRAGMA_COMMENT_START : 
#line 1360 "cplus.met"
                        tokenAhead = 0 ;
#line 1360 "cplus.met"
                        CommTerm();
#line 1360 "cplus.met"
#line 1361 "cplus.met"
#line 1362 "cplus.met"
                        {
#line 1362 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1362 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1362 "cplus.met"
                            {
#line 1362 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1362 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1362 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1362 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1362 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1362 "cplus.met"
                                } else {
#line 1362 "cplus.met"
                                    tokenAhead = 0 ;
#line 1362 "cplus.met"
                                }
#line 1362 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1362 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1362 "cplus.met"
                            }
#line 1362 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1362 "cplus.met"
                            retTree=_ptRes0;
#line 1362 "cplus.met"
                        }
#line 1362 "cplus.met"
#line 1363 "cplus.met"
                        AnalyzeComment (retTree );
#line 1363 "cplus.met"
#line 1364 "cplus.met"
                        {
#line 1364 "cplus.met"
                            _retValue = retTree ;
#line 1364 "cplus.met"
                            goto directive_ret;
#line 1364 "cplus.met"
                            
#line 1364 "cplus.met"
                        }
#line 1364 "cplus.met"
#line 1364 "cplus.met"
                        break;
#line 1364 "cplus.met"
#line 1366 "cplus.met"
                    case PRAGMA_COMMENT_MIDDLE : 
#line 1366 "cplus.met"
                        tokenAhead = 0 ;
#line 1366 "cplus.met"
                        CommTerm();
#line 1366 "cplus.met"
#line 1367 "cplus.met"
#line 1368 "cplus.met"
                        {
#line 1368 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1368 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1368 "cplus.met"
                            {
#line 1368 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1368 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1368 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1368 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1368 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1368 "cplus.met"
                                } else {
#line 1368 "cplus.met"
                                    tokenAhead = 0 ;
#line 1368 "cplus.met"
                                }
#line 1368 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1368 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1368 "cplus.met"
                            }
#line 1368 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1368 "cplus.met"
                            retTree=_ptRes0;
#line 1368 "cplus.met"
                        }
#line 1368 "cplus.met"
#line 1369 "cplus.met"
                        AnalyzeComment (retTree );
#line 1369 "cplus.met"
#line 1370 "cplus.met"
                        {
#line 1370 "cplus.met"
                            _retValue = retTree ;
#line 1370 "cplus.met"
                            goto directive_ret;
#line 1370 "cplus.met"
                            
#line 1370 "cplus.met"
                        }
#line 1370 "cplus.met"
#line 1370 "cplus.met"
                        break;
#line 1370 "cplus.met"
#line 1372 "cplus.met"
                    case PRAGMA_COMMENT_END : 
#line 1372 "cplus.met"
                        tokenAhead = 0 ;
#line 1372 "cplus.met"
                        CommTerm();
#line 1372 "cplus.met"
#line 1373 "cplus.met"
#line 1374 "cplus.met"
                        {
#line 1374 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1374 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1374 "cplus.met"
                            {
#line 1374 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1374 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1374 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1374 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1374 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1374 "cplus.met"
                                } else {
#line 1374 "cplus.met"
                                    tokenAhead = 0 ;
#line 1374 "cplus.met"
                                }
#line 1374 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1374 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1374 "cplus.met"
                            }
#line 1374 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1374 "cplus.met"
                            retTree=_ptRes0;
#line 1374 "cplus.met"
                        }
#line 1374 "cplus.met"
#line 1375 "cplus.met"
                        AnalyzeComment (retTree );
#line 1375 "cplus.met"
#line 1376 "cplus.met"
                        {
#line 1376 "cplus.met"
                            _retValue = retTree ;
#line 1376 "cplus.met"
                            goto directive_ret;
#line 1376 "cplus.met"
                            
#line 1376 "cplus.met"
                        }
#line 1376 "cplus.met"
#line 1376 "cplus.met"
                        break;
#line 1376 "cplus.met"
#line 1378 "cplus.met"
                    case PRAGMA_COMMENT_PLUS : 
#line 1378 "cplus.met"
                        tokenAhead = 0 ;
#line 1378 "cplus.met"
                        CommTerm();
#line 1378 "cplus.met"
#line 1379 "cplus.met"
#line 1380 "cplus.met"
                        {
#line 1380 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1380 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1380 "cplus.met"
                            {
#line 1380 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1380 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1380 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1380 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1380 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1380 "cplus.met"
                                } else {
#line 1380 "cplus.met"
                                    tokenAhead = 0 ;
#line 1380 "cplus.met"
                                }
#line 1380 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1380 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1380 "cplus.met"
                            }
#line 1380 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1380 "cplus.met"
                            retTree=_ptRes0;
#line 1380 "cplus.met"
                        }
#line 1380 "cplus.met"
#line 1381 "cplus.met"
                        AnalyzeComment (retTree );
#line 1381 "cplus.met"
#line 1382 "cplus.met"
                        {
#line 1382 "cplus.met"
                            _retValue = retTree ;
#line 1382 "cplus.met"
                            goto directive_ret;
#line 1382 "cplus.met"
                            
#line 1382 "cplus.met"
                        }
#line 1382 "cplus.met"
#line 1382 "cplus.met"
                        break;
#line 1382 "cplus.met"
#line 1384 "cplus.met"
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 1384 "cplus.met"
                        tokenAhead = 0 ;
#line 1384 "cplus.met"
                        CommTerm();
#line 1384 "cplus.met"
#line 1385 "cplus.met"
#line 1386 "cplus.met"
                        {
#line 1386 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1386 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1386 "cplus.met"
                            {
#line 1386 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1386 "cplus.met"
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1386 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1386 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1386 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1386 "cplus.met"
                                } else {
#line 1386 "cplus.met"
                                    tokenAhead = 0 ;
#line 1386 "cplus.met"
                                }
#line 1386 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1386 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1386 "cplus.met"
                            }
#line 1386 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1386 "cplus.met"
                            retTree=_ptRes0;
#line 1386 "cplus.met"
                        }
#line 1386 "cplus.met"
#line 1387 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1387 "cplus.met"
#line 1388 "cplus.met"
                        {
#line 1388 "cplus.met"
                            _retValue = retTree ;
#line 1388 "cplus.met"
                            goto directive_ret;
#line 1388 "cplus.met"
                            
#line 1388 "cplus.met"
                        }
#line 1388 "cplus.met"
#line 1388 "cplus.met"
                        break;
#line 1388 "cplus.met"
#line 1390 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1390 "cplus.met"
                        tokenAhead = 0 ;
#line 1390 "cplus.met"
                        CommTerm();
#line 1390 "cplus.met"
#line 1391 "cplus.met"
#line 1392 "cplus.met"
                        {
#line 1392 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1392 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1392 "cplus.met"
                            {
#line 1392 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1392 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1392 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1392 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1392 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1392 "cplus.met"
                                } else {
#line 1392 "cplus.met"
                                    tokenAhead = 0 ;
#line 1392 "cplus.met"
                                }
#line 1392 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1392 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1392 "cplus.met"
                            }
#line 1392 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1392 "cplus.met"
                            retTree=_ptRes0;
#line 1392 "cplus.met"
                        }
#line 1392 "cplus.met"
#line 1393 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1393 "cplus.met"
#line 1394 "cplus.met"
                        {
#line 1394 "cplus.met"
                            _retValue = retTree ;
#line 1394 "cplus.met"
                            goto directive_ret;
#line 1394 "cplus.met"
                            
#line 1394 "cplus.met"
                        }
#line 1394 "cplus.met"
#line 1394 "cplus.met"
                        break;
#line 1394 "cplus.met"
#line 1396 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1396 "cplus.met"
                        tokenAhead = 0 ;
#line 1396 "cplus.met"
                        CommTerm();
#line 1396 "cplus.met"
#line 1397 "cplus.met"
#line 1398 "cplus.met"
                        {
#line 1398 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1398 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1398 "cplus.met"
                            {
#line 1398 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1398 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1398 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1398 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1398 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1398 "cplus.met"
                                } else {
#line 1398 "cplus.met"
                                    tokenAhead = 0 ;
#line 1398 "cplus.met"
                                }
#line 1398 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1398 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1398 "cplus.met"
                            }
#line 1398 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1398 "cplus.met"
                            retTree=_ptRes0;
#line 1398 "cplus.met"
                        }
#line 1398 "cplus.met"
#line 1399 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1399 "cplus.met"
#line 1400 "cplus.met"
                        {
#line 1400 "cplus.met"
                            _retValue = retTree ;
#line 1400 "cplus.met"
                            goto directive_ret;
#line 1400 "cplus.met"
                            
#line 1400 "cplus.met"
                        }
#line 1400 "cplus.met"
#line 1400 "cplus.met"
                        break;
#line 1400 "cplus.met"
#line 1402 "cplus.met"
                    default : 
#line 1402 "cplus.met"
#line 1402 "cplus.met"
                        {
#line 1402 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1402 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 1402 "cplus.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1402 "cplus.met"
                            }
#line 1402 "cplus.met"
                            _retValue =_ptTree0;
#line 1402 "cplus.met"
                            goto directive_ret;
#line 1402 "cplus.met"
                        }
#line 1402 "cplus.met"
                        break;
#line 1402 "cplus.met"
                }
#line 1402 "cplus.met"
#line 1402 "cplus.met"
            } else 
#line 1402 "cplus.met"
#line 1407 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 125, cplus))){
#line 1407 "cplus.met"
#line 1406 "cplus.met"
#line 1407 "cplus.met"
                {
#line 1407 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1407 "cplus.met"
                    {
#line 1407 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1407 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1407 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1407 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1407 "cplus.met"
                            MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
#line 1407 "cplus.met"
                        } else {
#line 1407 "cplus.met"
                            tokenAhead = 0 ;
#line 1407 "cplus.met"
                        }
#line 1407 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1407 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1407 "cplus.met"
                    }
#line 1407 "cplus.met"
                    _retValue =_ptTree0;
#line 1407 "cplus.met"
                    goto directive_ret;
#line 1407 "cplus.met"
                }
#line 1407 "cplus.met"
#line 1407 "cplus.met"
            } else 
#line 1407 "cplus.met"
#line 1411 "cplus.met"
            if (1) {
#line 1411 "cplus.met"
#line 1410 "cplus.met"
#line 1411 "cplus.met"
                {
#line 1411 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1411 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 106, cplus))== (PPTREE) -1 ) {
#line 1411 "cplus.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1411 "cplus.met"
                    }
#line 1411 "cplus.met"
                    _retValue =_ptTree0;
#line 1411 "cplus.met"
                    goto directive_ret;
#line 1411 "cplus.met"
                }
#line 1411 "cplus.met"
#line 1411 "cplus.met"
            } else 
#line 1411 "cplus.met"
             ;
#line 1411 "cplus.met"
#line 1411 "cplus.met"
            break;
#line 1411 "cplus.met"
        default :
#line 1411 "cplus.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1411 "cplus.met"
            break;
#line 1411 "cplus.met"
    }
#line 1411 "cplus.met"
#line 1411 "cplus.met"
#line 1415 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1415 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1415 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1415 "cplus.met"
keepAll =  _oldkeepAll;
#line 1415 "cplus.met"
return((PPTREE) 0);
#line 1415 "cplus.met"

#line 1415 "cplus.met"
directive_exit :
#line 1415 "cplus.met"

#line 1415 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1415 "cplus.met"
    _funcLevel--;
#line 1415 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1415 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1415 "cplus.met"
    return((PPTREE) -1) ;
#line 1415 "cplus.met"

#line 1415 "cplus.met"
directive_ret :
#line 1415 "cplus.met"
    
#line 1415 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1415 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1415 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1415 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1415 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1415 "cplus.met"
    return _retValue ;
#line 1415 "cplus.met"
}
#line 1415 "cplus.met"

#line 1415 "cplus.met"
#line 822 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 822 "cplus.met"
{
#line 822 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 822 "cplus.met"
    int _value,_nbPre = 0 ;
#line 822 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 822 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 822 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 822 "cplus.met"
#line 823 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 823 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 823 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 823 "cplus.met"
    } else {
#line 823 "cplus.met"
        tokenAhead = 0 ;
#line 823 "cplus.met"
    }
#line 823 "cplus.met"
#line 824 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 824 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 824 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 824 "cplus.met"
    } else {
#line 824 "cplus.met"
        tokenAhead = 0 ;
#line 824 "cplus.met"
    }
#line 824 "cplus.met"
#line 824 "cplus.met"
#line 824 "cplus.met"

#line 825 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 825 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 825 "cplus.met"
return((PPTREE) 0);
#line 825 "cplus.met"

#line 825 "cplus.met"
end_pragma_exit :
#line 825 "cplus.met"

#line 825 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 825 "cplus.met"
    _funcLevel--;
#line 825 "cplus.met"
    return((PPTREE) -1) ;
#line 825 "cplus.met"

#line 825 "cplus.met"
end_pragma_ret :
#line 825 "cplus.met"
    
#line 825 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 825 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 825 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 825 "cplus.met"
    return _retValue ;
#line 825 "cplus.met"
}
#line 825 "cplus.met"

#line 825 "cplus.met"
#line 827 "cplus.met"
PPTREE cplus::end_pragma_managed ( int error_free)
#line 827 "cplus.met"
{
#line 827 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 827 "cplus.met"
    int _value,_nbPre = 0 ;
#line 827 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 827 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma_managed",TRACE_ENTER,(PPTREE)0);
#line 827 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 827 "cplus.met"
#line 828 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 828 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 828 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_DIR")
#line 828 "cplus.met"
    } else {
#line 828 "cplus.met"
        tokenAhead = 0 ;
#line 828 "cplus.met"
    }
#line 828 "cplus.met"
#line 829 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 829 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_MANAGED,"PRAGMA_MANAGED") || !(CommTerm(),1)) {
#line 829 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_MANAGED")
#line 829 "cplus.met"
    } else {
#line 829 "cplus.met"
        tokenAhead = 0 ;
#line 829 "cplus.met"
    }
#line 829 "cplus.met"
#line 829 "cplus.met"
#line 829 "cplus.met"

#line 830 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 830 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 830 "cplus.met"
return((PPTREE) 0);
#line 830 "cplus.met"

#line 830 "cplus.met"
end_pragma_managed_exit :
#line 830 "cplus.met"

#line 830 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_EXIT,(PPTREE)0);
#line 830 "cplus.met"
    _funcLevel--;
#line 830 "cplus.met"
    return((PPTREE) -1) ;
#line 830 "cplus.met"

#line 830 "cplus.met"
end_pragma_managed_ret :
#line 830 "cplus.met"
    
#line 830 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_RETURN,_retValue);
#line 830 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 830 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 830 "cplus.met"
    return _retValue ;
#line 830 "cplus.met"
}
#line 830 "cplus.met"

#line 830 "cplus.met"
#line 1710 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1710 "cplus.met"
{
#line 1710 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1710 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1710 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1710 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1710 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1710 "cplus.met"
#line 1710 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1710 "cplus.met"
#line 1710 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,classMarker = (PPTREE) 0;
#line 1710 "cplus.met"
#line 1712 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1712 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1712 "cplus.met"
        MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1712 "cplus.met"
    } else {
#line 1712 "cplus.met"
        tokenAhead = 0 ;
#line 1712 "cplus.met"
    }
#line 1712 "cplus.met"
#line 1713 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CLASS,"class") && (tokenAhead = 0,CommTerm(),1)){
#line 1713 "cplus.met"
#line 1714 "cplus.met"
#line 1715 "cplus.met"
        {
#line 1715 "cplus.met"
            PPTREE _ptRes0=0;
#line 1715 "cplus.met"
            _ptRes0= MakeTree(ENUM_CLASS, 0);
#line 1715 "cplus.met"
            classMarker=_ptRes0;
#line 1715 "cplus.met"
        }
#line 1715 "cplus.met"
#line 1715 "cplus.met"
#line 1715 "cplus.met"
    }
#line 1715 "cplus.met"
#line 1717 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1717 "cplus.met"
#line 1718 "cplus.met"
        {
#line 1718 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1718 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1718 "cplus.met"
            {
#line 1718 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1718 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1718 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1718 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1718 "cplus.met"
                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1718 "cplus.met"
                } else {
#line 1718 "cplus.met"
                    tokenAhead = 0 ;
#line 1718 "cplus.met"
                }
#line 1718 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1718 "cplus.met"
                _ptTree0=_ptRes1;
#line 1718 "cplus.met"
            }
#line 1718 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1718 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1718 "cplus.met"
            retTree=_ptRes0;
#line 1718 "cplus.met"
        }
#line 1718 "cplus.met"
    } else {
#line 1718 "cplus.met"
#line 1720 "cplus.met"
        {
#line 1720 "cplus.met"
            PPTREE _ptRes0=0;
#line 1720 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1720 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1720 "cplus.met"
            retTree=_ptRes0;
#line 1720 "cplus.met"
        }
#line 1720 "cplus.met"
    }
#line 1720 "cplus.met"
#line 1721 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1721 "cplus.met"
#line 1722 "cplus.met"
#line 1723 "cplus.met"
        {
#line 1723 "cplus.met"
            PPTREE _ptTree0=0;
#line 1723 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 132, cplus))== (PPTREE) -1 ) {
#line 1723 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                PROG_EXIT(enum_declarator_exit,"enum_declarator")
#line 1723 "cplus.met"
            }
#line 1723 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 1723 "cplus.met"
        }
#line 1723 "cplus.met"
#line 1723 "cplus.met"
#line 1723 "cplus.met"
    }
#line 1723 "cplus.met"
#line 1725 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1725 "cplus.met"
#line 1726 "cplus.met"
#line 1726 "cplus.met"
        _addlist1 = list ;
#line 1726 "cplus.met"
#line 1727 "cplus.met"
        do {
#line 1727 "cplus.met"
#line 1728 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 57, cplus)){
#line 1728 "cplus.met"
#line 1729 "cplus.met"
#line 1729 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1729 "cplus.met"
#line 1729 "cplus.met"
                if (list){
#line 1729 "cplus.met"
#line 1729 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1729 "cplus.met"
                } else {
#line 1729 "cplus.met"
#line 1729 "cplus.met"
                    list = _addlist1 ;
#line 1729 "cplus.met"
                }
#line 1729 "cplus.met"
            } else {
#line 1729 "cplus.met"
#line 1731 "cplus.met"
                
#line 1731 "cplus.met"
                MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1731 "cplus.met"
                goto enum_declarator_exit;
#line 1731 "cplus.met"
            }
#line 1731 "cplus.met"
#line 1731 "cplus.met"
#line 1732 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1732 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1732 "cplus.met"
#line 1733 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1733 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1733 "cplus.met"
            MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1733 "cplus.met"
        } else {
#line 1733 "cplus.met"
            tokenAhead = 0 ;
#line 1733 "cplus.met"
        }
#line 1733 "cplus.met"
#line 1734 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1734 "cplus.met"
#line 1734 "cplus.met"
#line 1734 "cplus.met"
    }
#line 1734 "cplus.met"
#line 1736 "cplus.met"
    {
#line 1736 "cplus.met"
        _retValue = retTree ;
#line 1736 "cplus.met"
        goto enum_declarator_ret;
#line 1736 "cplus.met"
        
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
enum_declarator_exit :
#line 1737 "cplus.met"

#line 1737 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1737 "cplus.met"
    _funcLevel--;
#line 1737 "cplus.met"
    return((PPTREE) -1) ;
#line 1737 "cplus.met"

#line 1737 "cplus.met"
enum_declarator_ret :
#line 1737 "cplus.met"
    
#line 1737 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
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
#line 1700 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1700 "cplus.met"
{
#line 1700 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1700 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1700 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1700 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1700 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1700 "cplus.met"
#line 1700 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1700 "cplus.met"
#line 1702 "cplus.met"
    {
#line 1702 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1702 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1702 "cplus.met"
        {
#line 1702 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1702 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1702 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1702 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1702 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1702 "cplus.met"
            } else {
#line 1702 "cplus.met"
                tokenAhead = 0 ;
#line 1702 "cplus.met"
            }
#line 1702 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1702 "cplus.met"
            _ptTree0=_ptRes1;
#line 1702 "cplus.met"
        }
#line 1702 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1702 "cplus.met"
        valTree=_ptRes0;
#line 1702 "cplus.met"
    }
#line 1702 "cplus.met"
#line 1703 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1703 "cplus.met"
#line 1704 "cplus.met"
        {
#line 1704 "cplus.met"
            PPTREE _ptTree0=0;
#line 1704 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 17, cplus))== (PPTREE) -1 ) {
#line 1704 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1704 "cplus.met"
            }
#line 1704 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1704 "cplus.met"
        }
#line 1704 "cplus.met"
#line 1704 "cplus.met"
    }
#line 1704 "cplus.met"
#line 1705 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1705 "cplus.met"
#line 1705 "cplus.met"
    }
#line 1705 "cplus.met"
#line 1707 "cplus.met"
    {
#line 1707 "cplus.met"
        _retValue = valTree ;
#line 1707 "cplus.met"
        goto enum_val_ret;
#line 1707 "cplus.met"
        
#line 1707 "cplus.met"
    }
#line 1707 "cplus.met"
#line 1707 "cplus.met"
#line 1707 "cplus.met"

#line 1708 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1708 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1708 "cplus.met"
return((PPTREE) 0);
#line 1708 "cplus.met"

#line 1708 "cplus.met"
enum_val_exit :
#line 1708 "cplus.met"

#line 1708 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1708 "cplus.met"
    _funcLevel--;
#line 1708 "cplus.met"
    return((PPTREE) -1) ;
#line 1708 "cplus.met"

#line 1708 "cplus.met"
enum_val_ret :
#line 1708 "cplus.met"
    
#line 1708 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1708 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1708 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1708 "cplus.met"
    return _retValue ;
#line 1708 "cplus.met"
}
#line 1708 "cplus.met"

#line 1708 "cplus.met"
#line 2674 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2674 "cplus.met"
{
#line 2674 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2674 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2674 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2674 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2674 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2674 "cplus.met"
#line 2674 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2674 "cplus.met"
#line 2676 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2676 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2676 "cplus.met"
    }
#line 2676 "cplus.met"
#line 2677 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2677 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2677 "cplus.met"
#line 2678 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2678 "cplus.met"
#line 2679 "cplus.met"
            {
#line 2679 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2679 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2679 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2679 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2679 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2679 "cplus.met"
                }
#line 2679 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2679 "cplus.met"
                expTree=_ptRes0;
#line 2679 "cplus.met"
            }
#line 2679 "cplus.met"
        } else {
#line 2679 "cplus.met"
#line 2681 "cplus.met"
#line 2682 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2682 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2682 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2682 "cplus.met"
            } else {
#line 2682 "cplus.met"
                tokenAhead = 0 ;
#line 2682 "cplus.met"
            }
#line 2682 "cplus.met"
#line 2683 "cplus.met"
            {
#line 2683 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2683 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2683 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2683 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 126, cplus))== (PPTREE) -1 ) {
#line 2683 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2683 "cplus.met"
                }
#line 2683 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2683 "cplus.met"
                expTree=_ptRes0;
#line 2683 "cplus.met"
            }
#line 2683 "cplus.met"
#line 2683 "cplus.met"
        }
#line 2683 "cplus.met"
    } 
#line 2683 "cplus.met"
#line 2685 "cplus.met"
    {
#line 2685 "cplus.met"
        _retValue = expTree ;
#line 2685 "cplus.met"
        goto equality_expression_ret;
#line 2685 "cplus.met"
        
#line 2685 "cplus.met"
    }
#line 2685 "cplus.met"
#line 2685 "cplus.met"
#line 2685 "cplus.met"

#line 2686 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2686 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2686 "cplus.met"
return((PPTREE) 0);
#line 2686 "cplus.met"

#line 2686 "cplus.met"
equality_expression_exit :
#line 2686 "cplus.met"

#line 2686 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2686 "cplus.met"
    _funcLevel--;
#line 2686 "cplus.met"
    return((PPTREE) -1) ;
#line 2686 "cplus.met"

#line 2686 "cplus.met"
equality_expression_ret :
#line 2686 "cplus.met"
    
#line 2686 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2686 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2686 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2686 "cplus.met"
    return _retValue ;
#line 2686 "cplus.met"
}
#line 2686 "cplus.met"

#line 2686 "cplus.met"
#line 1937 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 1937 "cplus.met"
{
#line 1937 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1937 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1937 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1937 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 1937 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1937 "cplus.met"
#line 1937 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1937 "cplus.met"
#line 1937 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1937 "cplus.met"
#line 1939 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1939 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 1939 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 1939 "cplus.met"
    } else {
#line 1939 "cplus.met"
        tokenAhead = 0 ;
#line 1939 "cplus.met"
    }
#line 1939 "cplus.met"
#line 1940 "cplus.met"
    {
#line 1940 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1940 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 1940 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1940 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 1940 "cplus.met"
        }
#line 1940 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1940 "cplus.met"
        retTree=_ptRes0;
#line 1940 "cplus.met"
    }
#line 1940 "cplus.met"
#line 1940 "cplus.met"
    _addlist1 = list ;
#line 1940 "cplus.met"
#line 1941 "cplus.met"
    do {
#line 1941 "cplus.met"
#line 1942 "cplus.met"
        {
#line 1942 "cplus.met"
            PPTREE _ptTree0=0;
#line 1942 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 24, cplus))== (PPTREE) -1 ) {
#line 1942 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 1942 "cplus.met"
            }
#line 1942 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1942 "cplus.met"
        }
#line 1942 "cplus.met"
#line 1942 "cplus.met"
        if (list){
#line 1942 "cplus.met"
#line 1942 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1942 "cplus.met"
        } else {
#line 1942 "cplus.met"
#line 1942 "cplus.met"
            list = _addlist1 ;
#line 1942 "cplus.met"
        }
#line 1942 "cplus.met"
#line 1942 "cplus.met"
#line 1943 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 1943 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 1943 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1943 "cplus.met"
#line 1944 "cplus.met"
    {
#line 1944 "cplus.met"
        PPTREE _ptTree0=0;
#line 1944 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1944 "cplus.met"
        _retValue =_ptTree0;
#line 1944 "cplus.met"
        goto exception_ret;
#line 1944 "cplus.met"
    }
#line 1944 "cplus.met"
#line 1944 "cplus.met"
#line 1944 "cplus.met"

#line 1945 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1945 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1945 "cplus.met"
return((PPTREE) 0);
#line 1945 "cplus.met"

#line 1945 "cplus.met"
exception_exit :
#line 1945 "cplus.met"

#line 1945 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 1945 "cplus.met"
    _funcLevel--;
#line 1945 "cplus.met"
    return((PPTREE) -1) ;
#line 1945 "cplus.met"

#line 1945 "cplus.met"
exception_ret :
#line 1945 "cplus.met"
    
#line 1945 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 1945 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1945 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1945 "cplus.met"
    return _retValue ;
#line 1945 "cplus.met"
}
#line 1945 "cplus.met"

#line 1945 "cplus.met"
#line 1968 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 1968 "cplus.met"
{
#line 1968 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1968 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1968 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1968 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 1968 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1968 "cplus.met"
#line 1968 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1968 "cplus.met"
#line 1968 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 1968 "cplus.met"
#line 1970 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1970 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 1970 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 1970 "cplus.met"
    } else {
#line 1970 "cplus.met"
        tokenAhead = 0 ;
#line 1970 "cplus.met"
    }
#line 1970 "cplus.met"
#line 1971 "cplus.met"
    {
#line 1971 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1971 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 1971 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 29, cplus))== (PPTREE) -1 ) {
#line 1971 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 1971 "cplus.met"
        }
#line 1971 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1971 "cplus.met"
        retTree=_ptRes0;
#line 1971 "cplus.met"
    }
#line 1971 "cplus.met"
#line 1971 "cplus.met"
    _addlist1 = list ;
#line 1971 "cplus.met"
#line 1972 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 25, cplus)) { 
#line 1972 "cplus.met"
#line 1973 "cplus.met"
#line 1973 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 1973 "cplus.met"
#line 1973 "cplus.met"
        if (list){
#line 1973 "cplus.met"
#line 1973 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1973 "cplus.met"
        } else {
#line 1973 "cplus.met"
#line 1973 "cplus.met"
            list = _addlist1 ;
#line 1973 "cplus.met"
        }
#line 1973 "cplus.met"
    } 
#line 1973 "cplus.met"
#line 1974 "cplus.met"
    {
#line 1974 "cplus.met"
        PPTREE _ptTree0=0;
#line 1974 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1974 "cplus.met"
        _retValue =_ptTree0;
#line 1974 "cplus.met"
        goto exception_ansi_ret;
#line 1974 "cplus.met"
    }
#line 1974 "cplus.met"
#line 1974 "cplus.met"
#line 1974 "cplus.met"

#line 1975 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1975 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1975 "cplus.met"
return((PPTREE) 0);
#line 1975 "cplus.met"

#line 1975 "cplus.met"
exception_ansi_exit :
#line 1975 "cplus.met"

#line 1975 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 1975 "cplus.met"
    _funcLevel--;
#line 1975 "cplus.met"
    return((PPTREE) -1) ;
#line 1975 "cplus.met"

#line 1975 "cplus.met"
exception_ansi_ret :
#line 1975 "cplus.met"
    
#line 1975 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 1975 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1975 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1975 "cplus.met"
    return _retValue ;
#line 1975 "cplus.met"
}
#line 1975 "cplus.met"

#line 1975 "cplus.met"
#line 3239 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3239 "cplus.met"
{
#line 3239 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3239 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3239 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3239 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3239 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3239 "cplus.met"
#line 3239 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3239 "cplus.met"
#line 3239 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3239 "cplus.met"
#line 3241 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3241 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3241 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3241 "cplus.met"
    } else {
#line 3241 "cplus.met"
        tokenAhead = 0 ;
#line 3241 "cplus.met"
    }
#line 3241 "cplus.met"
#line 3242 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3242 "cplus.met"
#line 3243 "cplus.met"
#line 3244 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3244 "cplus.met"
#line 3246 "cplus.met"
#line 3246 "cplus.met"
            _addlist1 = exceptionList ;
#line 3246 "cplus.met"
#line 3245 "cplus.met"
            do {
#line 3245 "cplus.met"
#line 3246 "cplus.met"
                {
#line 3246 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3246 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 3246 "cplus.met"
                        MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                        PROG_EXIT(exception_list_exit,"exception_list")
#line 3246 "cplus.met"
                    }
#line 3246 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3246 "cplus.met"
                }
#line 3246 "cplus.met"
#line 3246 "cplus.met"
                if (exceptionList){
#line 3246 "cplus.met"
#line 3246 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3246 "cplus.met"
                } else {
#line 3246 "cplus.met"
#line 3246 "cplus.met"
                    exceptionList = _addlist1 ;
#line 3246 "cplus.met"
                }
#line 3246 "cplus.met"
#line 3246 "cplus.met"
#line 3247 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3247 "cplus.met"
        }
#line 3247 "cplus.met"
#line 3248 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3248 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3248 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3248 "cplus.met"
        } else {
#line 3248 "cplus.met"
            tokenAhead = 0 ;
#line 3248 "cplus.met"
        }
#line 3248 "cplus.met"
#line 3248 "cplus.met"
#line 3248 "cplus.met"
    } else {
#line 3248 "cplus.met"
#line 3251 "cplus.met"
        {
#line 3251 "cplus.met"
            PPTREE _ptTree0=0;
#line 3251 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 117, cplus))== (PPTREE) -1 ) {
#line 3251 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3251 "cplus.met"
            }
#line 3251 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3251 "cplus.met"
        }
#line 3251 "cplus.met"
    }
#line 3251 "cplus.met"
#line 3252 "cplus.met"
    {
#line 3252 "cplus.met"
        PPTREE _ptTree0=0;
#line 3252 "cplus.met"
        {
#line 3252 "cplus.met"
            PPTREE _ptRes1=0;
#line 3252 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3252 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3252 "cplus.met"
            _ptTree0=_ptRes1;
#line 3252 "cplus.met"
        }
#line 3252 "cplus.met"
        _retValue =_ptTree0;
#line 3252 "cplus.met"
        goto exception_list_ret;
#line 3252 "cplus.met"
    }
#line 3252 "cplus.met"
#line 3252 "cplus.met"
#line 3252 "cplus.met"

#line 3253 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3253 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3253 "cplus.met"
return((PPTREE) 0);
#line 3253 "cplus.met"

#line 3253 "cplus.met"
exception_list_exit :
#line 3253 "cplus.met"

#line 3253 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3253 "cplus.met"
    _funcLevel--;
#line 3253 "cplus.met"
    return((PPTREE) -1) ;
#line 3253 "cplus.met"

#line 3253 "cplus.met"
exception_list_ret :
#line 3253 "cplus.met"
    
#line 3253 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3253 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3253 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3253 "cplus.met"
    return _retValue ;
#line 3253 "cplus.met"
}
#line 3253 "cplus.met"

#line 3253 "cplus.met"
#line 2658 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2658 "cplus.met"
{
#line 2658 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2658 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2658 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2658 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2658 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2658 "cplus.met"
#line 2658 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2658 "cplus.met"
#line 2660 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2660 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2660 "cplus.met"
    }
#line 2660 "cplus.met"
#line 2661 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2661 "cplus.met"
#line 2662 "cplus.met"
        {
#line 2662 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2662 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2662 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2662 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2662 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2662 "cplus.met"
            }
#line 2662 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2662 "cplus.met"
            expTree=_ptRes0;
#line 2662 "cplus.met"
        }
#line 2662 "cplus.met"
    } 
#line 2662 "cplus.met"
#line 2663 "cplus.met"
    {
#line 2663 "cplus.met"
        _retValue = expTree ;
#line 2663 "cplus.met"
        goto exclusive_or_expression_ret;
#line 2663 "cplus.met"
        
#line 2663 "cplus.met"
    }
#line 2663 "cplus.met"
#line 2663 "cplus.met"
#line 2663 "cplus.met"

#line 2664 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2664 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2664 "cplus.met"
return((PPTREE) 0);
#line 2664 "cplus.met"

#line 2664 "cplus.met"
exclusive_or_expression_exit :
#line 2664 "cplus.met"

#line 2664 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2664 "cplus.met"
    _funcLevel--;
#line 2664 "cplus.met"
    return((PPTREE) -1) ;
#line 2664 "cplus.met"

#line 2664 "cplus.met"
exclusive_or_expression_ret :
#line 2664 "cplus.met"
    
#line 2664 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 2664 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2664 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2664 "cplus.met"
    return _retValue ;
#line 2664 "cplus.met"
}
#line 2664 "cplus.met"

#line 2664 "cplus.met"
