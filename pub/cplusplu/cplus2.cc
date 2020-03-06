/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1224 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1224 "cplus.met"
{
#line 1224 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1224 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1224 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1224 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1224 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1224 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1224 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1224 "cplus.met"
#line 1224 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 1224 "cplus.met"
#line 1224 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0,exp = (PPTREE) 0;
#line 1224 "cplus.met"
#line 1226 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1226 "cplus.met"
    switch( lexEl.Value) {
#line 1226 "cplus.met"
#line 1227 "cplus.met"
        case META : 
#line 1227 "cplus.met"
        case DEFINE_DIR : 
#line 1227 "cplus.met"
#line 1227 "cplus.met"
            {
#line 1227 "cplus.met"
                PPTREE _ptTree0=0;
#line 1227 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 51, cplus))== (PPTREE) -1 ) {
#line 1227 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1227 "cplus.met"
                }
#line 1227 "cplus.met"
                _retValue =_ptTree0;
#line 1227 "cplus.met"
                goto directive_ret;
#line 1227 "cplus.met"
            }
#line 1227 "cplus.met"
            break;
#line 1227 "cplus.met"
#line 1228 "cplus.met"
        case INCLUDE_DIR : 
#line 1228 "cplus.met"
#line 1228 "cplus.met"
            {
#line 1228 "cplus.met"
                PPTREE _ptTree0=0;
#line 1228 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 79, cplus))== (PPTREE) -1 ) {
#line 1228 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1228 "cplus.met"
                }
#line 1228 "cplus.met"
                _retValue =_ptTree0;
#line 1228 "cplus.met"
                goto directive_ret;
#line 1228 "cplus.met"
            }
#line 1228 "cplus.met"
            break;
#line 1228 "cplus.met"
#line 1229 "cplus.met"
        case LINE_DIR : 
#line 1229 "cplus.met"
            tokenAhead = 0 ;
#line 1229 "cplus.met"
            CommTerm();
#line 1229 "cplus.met"
#line 1230 "cplus.met"
#line 1231 "cplus.met"
            {
#line 1231 "cplus.met"
                keepCarriage = 1 ;
#line 1231 "cplus.met"
#line 1232 "cplus.met"
#line 1233 "cplus.met"
                {
#line 1233 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1233 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1233 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1233 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1233 "cplus.met"
                    }
#line 1233 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1233 "cplus.met"
                    retTree=_ptRes0;
#line 1233 "cplus.met"
                }
#line 1233 "cplus.met"
#line 1234 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1234 "cplus.met"
#line 1235 "cplus.met"
                    {
#line 1235 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1235 "cplus.met"
                        {
#line 1235 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1235 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1235 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1235 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1235 "cplus.met"
                        }
#line 1235 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1235 "cplus.met"
                    }
#line 1235 "cplus.met"
#line 1235 "cplus.met"
                }
#line 1235 "cplus.met"
#line 1236 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1236 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1236 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1236 "cplus.met"
                } else {
#line 1236 "cplus.met"
                    tokenAhead = 0 ;
#line 1236 "cplus.met"
                }
#line 1236 "cplus.met"
#line 1236 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1236 "cplus.met"
            }
#line 1236 "cplus.met"
#line 1238 "cplus.met"
            {
#line 1238 "cplus.met"
                _retValue = retTree ;
#line 1238 "cplus.met"
                goto directive_ret;
#line 1238 "cplus.met"
                
#line 1238 "cplus.met"
            }
#line 1238 "cplus.met"
#line 1238 "cplus.met"
            break;
#line 1238 "cplus.met"
#line 1240 "cplus.met"
        case LINE_REFERENCE_DIR : 
#line 1240 "cplus.met"
            tokenAhead = 0 ;
#line 1240 "cplus.met"
            CommTerm();
#line 1240 "cplus.met"
#line 1241 "cplus.met"
#line 1242 "cplus.met"
            {
#line 1242 "cplus.met"
                keepCarriage = 1 ;
#line 1242 "cplus.met"
#line 1243 "cplus.met"
#line 1244 "cplus.met"
                {
#line 1244 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1244 "cplus.met"
                    _ptRes0= MakeTree(LINE_REFERENCE_DIR, 3);
#line 1244 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 62, cplus))== (PPTREE) -1 ) {
#line 1244 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1244 "cplus.met"
                    }
#line 1244 "cplus.met"
                    ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1244 "cplus.met"
                    retTree=_ptRes0;
#line 1244 "cplus.met"
                }
#line 1244 "cplus.met"
#line 1245 "cplus.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1245 "cplus.met"
#line 1246 "cplus.met"
                    {
#line 1246 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1246 "cplus.met"
                        {
#line 1246 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1246 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1246 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1246 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1246 "cplus.met"
                        }
#line 1246 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1246 "cplus.met"
                    }
#line 1246 "cplus.met"
#line 1246 "cplus.met"
                }
#line 1246 "cplus.met"
#line 1246 "cplus.met"
                _addlist1 = list ;
#line 1246 "cplus.met"
#line 1247 "cplus.met"
                while (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(expression), 62, cplus)) { 
#line 1247 "cplus.met"
#line 1248 "cplus.met"
#line 1248 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,exp );
#line 1248 "cplus.met"
#line 1248 "cplus.met"
                    if (list){
#line 1248 "cplus.met"
#line 1248 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1248 "cplus.met"
                    } else {
#line 1248 "cplus.met"
#line 1248 "cplus.met"
                        list = _addlist1 ;
#line 1248 "cplus.met"
                    }
#line 1248 "cplus.met"
                } 
#line 1248 "cplus.met"
#line 1249 "cplus.met"
                ReplaceTree(retTree ,3 ,list );
#line 1249 "cplus.met"
#line 1250 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1250 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1250 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1250 "cplus.met"
                } else {
#line 1250 "cplus.met"
                    tokenAhead = 0 ;
#line 1250 "cplus.met"
                }
#line 1250 "cplus.met"
#line 1250 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1250 "cplus.met"
            }
#line 1250 "cplus.met"
#line 1252 "cplus.met"
            {
#line 1252 "cplus.met"
                _retValue = retTree ;
#line 1252 "cplus.met"
                goto directive_ret;
#line 1252 "cplus.met"
                
#line 1252 "cplus.met"
            }
#line 1252 "cplus.met"
#line 1252 "cplus.met"
            break;
#line 1252 "cplus.met"
#line 1254 "cplus.met"
        case UNDEF_DIR : 
#line 1254 "cplus.met"
            tokenAhead = 0 ;
#line 1254 "cplus.met"
            CommTerm();
#line 1254 "cplus.met"
#line 1254 "cplus.met"
            {
#line 1254 "cplus.met"
                PPTREE _ptTree0=0;
#line 1254 "cplus.met"
                {
#line 1254 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1254 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1254 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1254 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1254 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1254 "cplus.met"
                    } else {
#line 1254 "cplus.met"
                        tokenAhead = 0 ;
#line 1254 "cplus.met"
                    }
#line 1254 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1254 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1254 "cplus.met"
                }
#line 1254 "cplus.met"
                _retValue =_ptTree0;
#line 1254 "cplus.met"
                goto directive_ret;
#line 1254 "cplus.met"
            }
#line 1254 "cplus.met"
            break;
#line 1254 "cplus.met"
#line 1255 "cplus.met"
        case ERROR_DIR : 
#line 1255 "cplus.met"
            tokenAhead = 0 ;
#line 1255 "cplus.met"
            CommTerm();
#line 1255 "cplus.met"
#line 1255 "cplus.met"
            {
#line 1255 "cplus.met"
                PPTREE _ptTree0=0;
#line 1255 "cplus.met"
                {
#line 1255 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1255 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1255 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1255 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1255 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1255 "cplus.met"
                    } else {
#line 1255 "cplus.met"
                        tokenAhead = 0 ;
#line 1255 "cplus.met"
                    }
#line 1255 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1255 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1255 "cplus.met"
                }
#line 1255 "cplus.met"
                _retValue =_ptTree0;
#line 1255 "cplus.met"
                goto directive_ret;
#line 1255 "cplus.met"
            }
#line 1255 "cplus.met"
            break;
#line 1255 "cplus.met"
#line 1256 "cplus.met"
        case PRAGMA_DIR : 
#line 1256 "cplus.met"
            tokenAhead = 0 ;
#line 1256 "cplus.met"
            CommTerm();
#line 1256 "cplus.met"
#line 1257 "cplus.met"
#line 1258 "cplus.met"
#line 1259 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1259 "cplus.met"
#line 1260 "cplus.met"
#line 1261 "cplus.met"
                {
#line 1261 "cplus.met"
                    keepCarriage = 1 ;
#line 1261 "cplus.met"
#line 1262 "cplus.met"
#line 1263 "cplus.met"
                    {
#line 1263 "cplus.met"
                        keepAll = 1 ;
#line 1263 "cplus.met"
#line 1264 "cplus.met"
#line 1265 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1265 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1265 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1265 "cplus.met"
                        } else {
#line 1265 "cplus.met"
                            tokenAhead = 0 ;
#line 1265 "cplus.met"
                        }
#line 1265 "cplus.met"
#line 1265 "cplus.met"
                        _addlist2 = list ;
#line 1265 "cplus.met"
#line 1266 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 53, cplus))) { 
#line 1266 "cplus.met"
#line 1267 "cplus.met"
#line 1267 "cplus.met"
                            {
#line 1267 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1267 "cplus.met"
                                {
#line 1267 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1267 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1267 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1267 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1267 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1267 "cplus.met"
                                    } else {
#line 1267 "cplus.met"
                                        tokenAhead = 0 ;
#line 1267 "cplus.met"
                                    }
#line 1267 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1267 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1267 "cplus.met"
                                }
#line 1267 "cplus.met"
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1267 "cplus.met"
                            }
#line 1267 "cplus.met"
#line 1267 "cplus.met"
                            if (list){
#line 1267 "cplus.met"
#line 1267 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1267 "cplus.met"
                            } else {
#line 1267 "cplus.met"
#line 1267 "cplus.met"
                                list = _addlist2 ;
#line 1267 "cplus.met"
                            }
#line 1267 "cplus.met"
                        } 
#line 1267 "cplus.met"
#line 1268 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 53, cplus))== (PPTREE) -1 ) {
#line 1268 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1268 "cplus.met"
                        }
#line 1268 "cplus.met"
#line 1268 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1268 "cplus.met"
                    }
#line 1268 "cplus.met"
#line 1268 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1268 "cplus.met"
                }
#line 1268 "cplus.met"
#line 1272 "cplus.met"
                 tokenAhead = 0;
#line 1272 "cplus.met"
#line 1274 "cplus.met"
                {
#line 1274 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1274 "cplus.met"
                    {
#line 1274 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1274 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1274 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1274 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1274 "cplus.met"
                    }
#line 1274 "cplus.met"
                    _retValue =_ptTree0;
#line 1274 "cplus.met"
                    goto directive_ret;
#line 1274 "cplus.met"
                }
#line 1274 "cplus.met"
#line 1274 "cplus.met"
            } else 
#line 1274 "cplus.met"
#line 1276 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
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
                        _addlist3 = list ;
#line 1282 "cplus.met"
#line 1283 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 54, cplus))) { 
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
                                _addlist3 =AddList(_addlist3 , _ptTree0);
#line 1284 "cplus.met"
                            }
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                            if (list){
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                                _addlist3 = SonTree (_addlist3 ,2 );
#line 1284 "cplus.met"
                            } else {
#line 1284 "cplus.met"
#line 1284 "cplus.met"
                                list = _addlist3 ;
#line 1284 "cplus.met"
                            }
#line 1284 "cplus.met"
                        } 
#line 1284 "cplus.met"
#line 1285 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 54, cplus))== (PPTREE) -1 ) {
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
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
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
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1293 "cplus.met"
#line 1294 "cplus.met"
#line 1295 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1295 "cplus.met"
                switch( lexEl.Value) {
#line 1295 "cplus.met"
#line 1296 "cplus.met"
                    case META : 
#line 1296 "cplus.met"
                    case PRAGMA_TAB : 
#line 1296 "cplus.met"
                        tokenAhead = 0 ;
#line 1296 "cplus.met"
                        CommTerm();
#line 1296 "cplus.met"
#line 1297 "cplus.met"
#line 1298 "cplus.met"
                        {
#line 1298 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1298 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1298 "cplus.met"
                            {
#line 1298 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1298 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1298 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1298 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1298 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1298 "cplus.met"
                                } else {
#line 1298 "cplus.met"
                                    tokenAhead = 0 ;
#line 1298 "cplus.met"
                                }
#line 1298 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1298 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1298 "cplus.met"
                            }
#line 1298 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1298 "cplus.met"
                            retTree=_ptRes0;
#line 1298 "cplus.met"
                        }
#line 1298 "cplus.met"
#line 1299 "cplus.met"
                        AnalyzeTab (retTree );
#line 1299 "cplus.met"
#line 1300 "cplus.met"
                        {
#line 1300 "cplus.met"
                            _retValue = retTree ;
#line 1300 "cplus.met"
                            goto directive_ret;
#line 1300 "cplus.met"
                            
#line 1300 "cplus.met"
                        }
#line 1300 "cplus.met"
#line 1300 "cplus.met"
                        break;
#line 1300 "cplus.met"
#line 1302 "cplus.met"
                    case PRAGMA_MODE : 
#line 1302 "cplus.met"
                        tokenAhead = 0 ;
#line 1302 "cplus.met"
                        CommTerm();
#line 1302 "cplus.met"
#line 1303 "cplus.met"
#line 1304 "cplus.met"
                        {
#line 1304 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1304 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1304 "cplus.met"
                            {
#line 1304 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1304 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1304 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1304 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1304 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1304 "cplus.met"
                                } else {
#line 1304 "cplus.met"
                                    tokenAhead = 0 ;
#line 1304 "cplus.met"
                                }
#line 1304 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1304 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1304 "cplus.met"
                            }
#line 1304 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1304 "cplus.met"
                            retTree=_ptRes0;
#line 1304 "cplus.met"
                        }
#line 1304 "cplus.met"
#line 1305 "cplus.met"
                        AnalyzeMode (retTree );
#line 1305 "cplus.met"
#line 1306 "cplus.met"
                        {
#line 1306 "cplus.met"
                            _retValue = retTree ;
#line 1306 "cplus.met"
                            goto directive_ret;
#line 1306 "cplus.met"
                            
#line 1306 "cplus.met"
                        }
#line 1306 "cplus.met"
#line 1306 "cplus.met"
                        break;
#line 1306 "cplus.met"
#line 1308 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1308 "cplus.met"
                        tokenAhead = 0 ;
#line 1308 "cplus.met"
                        CommTerm();
#line 1308 "cplus.met"
#line 1309 "cplus.met"
#line 1310 "cplus.met"
                        {
#line 1310 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1310 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1310 "cplus.met"
                            {
#line 1310 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1310 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1310 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1310 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1310 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1310 "cplus.met"
                                } else {
#line 1310 "cplus.met"
                                    tokenAhead = 0 ;
#line 1310 "cplus.met"
                                }
#line 1310 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1310 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1310 "cplus.met"
                            }
#line 1310 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1310 "cplus.met"
                            retTree=_ptRes0;
#line 1310 "cplus.met"
                        }
#line 1310 "cplus.met"
#line 1311 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1311 "cplus.met"
#line 1312 "cplus.met"
                        {
#line 1312 "cplus.met"
                            _retValue = retTree ;
#line 1312 "cplus.met"
                            goto directive_ret;
#line 1312 "cplus.met"
                            
#line 1312 "cplus.met"
                        }
#line 1312 "cplus.met"
#line 1312 "cplus.met"
                        break;
#line 1312 "cplus.met"
#line 1314 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1314 "cplus.met"
                        tokenAhead = 0 ;
#line 1314 "cplus.met"
                        CommTerm();
#line 1314 "cplus.met"
#line 1315 "cplus.met"
#line 1316 "cplus.met"
                        {
#line 1316 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1316 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1316 "cplus.met"
                            {
#line 1316 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1316 "cplus.met"
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1316 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1316 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1316 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1316 "cplus.met"
                                } else {
#line 1316 "cplus.met"
                                    tokenAhead = 0 ;
#line 1316 "cplus.met"
                                }
#line 1316 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1316 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1316 "cplus.met"
                            }
#line 1316 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1316 "cplus.met"
                            retTree=_ptRes0;
#line 1316 "cplus.met"
                        }
#line 1316 "cplus.met"
#line 1317 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1317 "cplus.met"
#line 1318 "cplus.met"
                        {
#line 1318 "cplus.met"
                            _retValue = retTree ;
#line 1318 "cplus.met"
                            goto directive_ret;
#line 1318 "cplus.met"
                            
#line 1318 "cplus.met"
                        }
#line 1318 "cplus.met"
#line 1318 "cplus.met"
                        break;
#line 1318 "cplus.met"
#line 1320 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1320 "cplus.met"
                        tokenAhead = 0 ;
#line 1320 "cplus.met"
                        CommTerm();
#line 1320 "cplus.met"
#line 1321 "cplus.met"
#line 1322 "cplus.met"
                        {
#line 1322 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1322 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1322 "cplus.met"
                            {
#line 1322 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1322 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1322 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1322 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1322 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1322 "cplus.met"
                                } else {
#line 1322 "cplus.met"
                                    tokenAhead = 0 ;
#line 1322 "cplus.met"
                                }
#line 1322 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1322 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1322 "cplus.met"
                            }
#line 1322 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1322 "cplus.met"
                            retTree=_ptRes0;
#line 1322 "cplus.met"
                        }
#line 1322 "cplus.met"
#line 1323 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1323 "cplus.met"
#line 1324 "cplus.met"
                        {
#line 1324 "cplus.met"
                            _retValue = retTree ;
#line 1324 "cplus.met"
                            goto directive_ret;
#line 1324 "cplus.met"
                            
#line 1324 "cplus.met"
                        }
#line 1324 "cplus.met"
#line 1324 "cplus.met"
                        break;
#line 1324 "cplus.met"
#line 1326 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1326 "cplus.met"
                        tokenAhead = 0 ;
#line 1326 "cplus.met"
                        CommTerm();
#line 1326 "cplus.met"
#line 1327 "cplus.met"
#line 1328 "cplus.met"
                        {
#line 1328 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1328 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1328 "cplus.met"
                            {
#line 1328 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1328 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1328 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1328 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1328 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1328 "cplus.met"
                                } else {
#line 1328 "cplus.met"
                                    tokenAhead = 0 ;
#line 1328 "cplus.met"
                                }
#line 1328 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1328 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1328 "cplus.met"
                            }
#line 1328 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1328 "cplus.met"
                            retTree=_ptRes0;
#line 1328 "cplus.met"
                        }
#line 1328 "cplus.met"
#line 1329 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1329 "cplus.met"
#line 1330 "cplus.met"
                        {
#line 1330 "cplus.met"
                            _retValue = retTree ;
#line 1330 "cplus.met"
                            goto directive_ret;
#line 1330 "cplus.met"
                            
#line 1330 "cplus.met"
                        }
#line 1330 "cplus.met"
#line 1330 "cplus.met"
                        break;
#line 1330 "cplus.met"
#line 1332 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1332 "cplus.met"
                        tokenAhead = 0 ;
#line 1332 "cplus.met"
                        CommTerm();
#line 1332 "cplus.met"
#line 1333 "cplus.met"
#line 1334 "cplus.met"
                        {
#line 1334 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1334 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1334 "cplus.met"
                            {
#line 1334 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1334 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1334 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1334 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1334 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1334 "cplus.met"
                                } else {
#line 1334 "cplus.met"
                                    tokenAhead = 0 ;
#line 1334 "cplus.met"
                                }
#line 1334 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1334 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1334 "cplus.met"
                            }
#line 1334 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1334 "cplus.met"
                            retTree=_ptRes0;
#line 1334 "cplus.met"
                        }
#line 1334 "cplus.met"
#line 1335 "cplus.met"
                        AnalyzeBraceAlign (retTree );
#line 1335 "cplus.met"
#line 1336 "cplus.met"
                        {
#line 1336 "cplus.met"
                            _retValue = retTree ;
#line 1336 "cplus.met"
                            goto directive_ret;
#line 1336 "cplus.met"
                            
#line 1336 "cplus.met"
                        }
#line 1336 "cplus.met"
#line 1336 "cplus.met"
                        break;
#line 1336 "cplus.met"
#line 1338 "cplus.met"
                    case PRAGMA_MARGIN : 
#line 1338 "cplus.met"
                        tokenAhead = 0 ;
#line 1338 "cplus.met"
                        CommTerm();
#line 1338 "cplus.met"
#line 1339 "cplus.met"
#line 1340 "cplus.met"
                        {
#line 1340 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1340 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1340 "cplus.met"
                            {
#line 1340 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1340 "cplus.met"
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1340 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1340 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1340 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1340 "cplus.met"
                                } else {
#line 1340 "cplus.met"
                                    tokenAhead = 0 ;
#line 1340 "cplus.met"
                                }
#line 1340 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1340 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1340 "cplus.met"
                            }
#line 1340 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1340 "cplus.met"
                            retTree=_ptRes0;
#line 1340 "cplus.met"
                        }
#line 1340 "cplus.met"
#line 1341 "cplus.met"
                        AnalyzeMargin (retTree );
#line 1341 "cplus.met"
#line 1342 "cplus.met"
                        {
#line 1342 "cplus.met"
                            _retValue = retTree ;
#line 1342 "cplus.met"
                            goto directive_ret;
#line 1342 "cplus.met"
                            
#line 1342 "cplus.met"
                        }
#line 1342 "cplus.met"
#line 1342 "cplus.met"
                        break;
#line 1342 "cplus.met"
#line 1344 "cplus.met"
                    case PRAGMA_COMMENT_START : 
#line 1344 "cplus.met"
                        tokenAhead = 0 ;
#line 1344 "cplus.met"
                        CommTerm();
#line 1344 "cplus.met"
#line 1345 "cplus.met"
#line 1346 "cplus.met"
                        {
#line 1346 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1346 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1346 "cplus.met"
                            {
#line 1346 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1346 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1346 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1346 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1346 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1346 "cplus.met"
                                } else {
#line 1346 "cplus.met"
                                    tokenAhead = 0 ;
#line 1346 "cplus.met"
                                }
#line 1346 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1346 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1346 "cplus.met"
                            }
#line 1346 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1346 "cplus.met"
                            retTree=_ptRes0;
#line 1346 "cplus.met"
                        }
#line 1346 "cplus.met"
#line 1347 "cplus.met"
                        AnalyzeComment (retTree );
#line 1347 "cplus.met"
#line 1348 "cplus.met"
                        {
#line 1348 "cplus.met"
                            _retValue = retTree ;
#line 1348 "cplus.met"
                            goto directive_ret;
#line 1348 "cplus.met"
                            
#line 1348 "cplus.met"
                        }
#line 1348 "cplus.met"
#line 1348 "cplus.met"
                        break;
#line 1348 "cplus.met"
#line 1350 "cplus.met"
                    case PRAGMA_COMMENT_MIDDLE : 
#line 1350 "cplus.met"
                        tokenAhead = 0 ;
#line 1350 "cplus.met"
                        CommTerm();
#line 1350 "cplus.met"
#line 1351 "cplus.met"
#line 1352 "cplus.met"
                        {
#line 1352 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1352 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1352 "cplus.met"
                            {
#line 1352 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1352 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1352 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1352 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1352 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1352 "cplus.met"
                                } else {
#line 1352 "cplus.met"
                                    tokenAhead = 0 ;
#line 1352 "cplus.met"
                                }
#line 1352 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1352 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1352 "cplus.met"
                            }
#line 1352 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1352 "cplus.met"
                            retTree=_ptRes0;
#line 1352 "cplus.met"
                        }
#line 1352 "cplus.met"
#line 1353 "cplus.met"
                        AnalyzeComment (retTree );
#line 1353 "cplus.met"
#line 1354 "cplus.met"
                        {
#line 1354 "cplus.met"
                            _retValue = retTree ;
#line 1354 "cplus.met"
                            goto directive_ret;
#line 1354 "cplus.met"
                            
#line 1354 "cplus.met"
                        }
#line 1354 "cplus.met"
#line 1354 "cplus.met"
                        break;
#line 1354 "cplus.met"
#line 1356 "cplus.met"
                    case PRAGMA_COMMENT_END : 
#line 1356 "cplus.met"
                        tokenAhead = 0 ;
#line 1356 "cplus.met"
                        CommTerm();
#line 1356 "cplus.met"
#line 1357 "cplus.met"
#line 1358 "cplus.met"
                        {
#line 1358 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1358 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1358 "cplus.met"
                            {
#line 1358 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1358 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1358 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1358 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1358 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1358 "cplus.met"
                                } else {
#line 1358 "cplus.met"
                                    tokenAhead = 0 ;
#line 1358 "cplus.met"
                                }
#line 1358 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1358 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1358 "cplus.met"
                            }
#line 1358 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1358 "cplus.met"
                            retTree=_ptRes0;
#line 1358 "cplus.met"
                        }
#line 1358 "cplus.met"
#line 1359 "cplus.met"
                        AnalyzeComment (retTree );
#line 1359 "cplus.met"
#line 1360 "cplus.met"
                        {
#line 1360 "cplus.met"
                            _retValue = retTree ;
#line 1360 "cplus.met"
                            goto directive_ret;
#line 1360 "cplus.met"
                            
#line 1360 "cplus.met"
                        }
#line 1360 "cplus.met"
#line 1360 "cplus.met"
                        break;
#line 1360 "cplus.met"
#line 1362 "cplus.met"
                    case PRAGMA_COMMENT_PLUS : 
#line 1362 "cplus.met"
                        tokenAhead = 0 ;
#line 1362 "cplus.met"
                        CommTerm();
#line 1362 "cplus.met"
#line 1363 "cplus.met"
#line 1364 "cplus.met"
                        {
#line 1364 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1364 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1364 "cplus.met"
                            {
#line 1364 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1364 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1364 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1364 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1364 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1364 "cplus.met"
                                } else {
#line 1364 "cplus.met"
                                    tokenAhead = 0 ;
#line 1364 "cplus.met"
                                }
#line 1364 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1364 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1364 "cplus.met"
                            }
#line 1364 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1364 "cplus.met"
                            retTree=_ptRes0;
#line 1364 "cplus.met"
                        }
#line 1364 "cplus.met"
#line 1365 "cplus.met"
                        AnalyzeComment (retTree );
#line 1365 "cplus.met"
#line 1366 "cplus.met"
                        {
#line 1366 "cplus.met"
                            _retValue = retTree ;
#line 1366 "cplus.met"
                            goto directive_ret;
#line 1366 "cplus.met"
                            
#line 1366 "cplus.met"
                        }
#line 1366 "cplus.met"
#line 1366 "cplus.met"
                        break;
#line 1366 "cplus.met"
#line 1368 "cplus.met"
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 1368 "cplus.met"
                        tokenAhead = 0 ;
#line 1368 "cplus.met"
                        CommTerm();
#line 1368 "cplus.met"
#line 1369 "cplus.met"
#line 1370 "cplus.met"
                        {
#line 1370 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1370 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1370 "cplus.met"
                            {
#line 1370 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1370 "cplus.met"
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1370 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1370 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1370 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1370 "cplus.met"
                                } else {
#line 1370 "cplus.met"
                                    tokenAhead = 0 ;
#line 1370 "cplus.met"
                                }
#line 1370 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1370 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1370 "cplus.met"
                            }
#line 1370 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1370 "cplus.met"
                            retTree=_ptRes0;
#line 1370 "cplus.met"
                        }
#line 1370 "cplus.met"
#line 1371 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1371 "cplus.met"
#line 1372 "cplus.met"
                        {
#line 1372 "cplus.met"
                            _retValue = retTree ;
#line 1372 "cplus.met"
                            goto directive_ret;
#line 1372 "cplus.met"
                            
#line 1372 "cplus.met"
                        }
#line 1372 "cplus.met"
#line 1372 "cplus.met"
                        break;
#line 1372 "cplus.met"
#line 1374 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1374 "cplus.met"
                        tokenAhead = 0 ;
#line 1374 "cplus.met"
                        CommTerm();
#line 1374 "cplus.met"
#line 1375 "cplus.met"
#line 1376 "cplus.met"
                        {
#line 1376 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1376 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1376 "cplus.met"
                            {
#line 1376 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1376 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1376 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1376 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1376 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1376 "cplus.met"
                                } else {
#line 1376 "cplus.met"
                                    tokenAhead = 0 ;
#line 1376 "cplus.met"
                                }
#line 1376 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1376 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1376 "cplus.met"
                            }
#line 1376 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1376 "cplus.met"
                            retTree=_ptRes0;
#line 1376 "cplus.met"
                        }
#line 1376 "cplus.met"
#line 1377 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1377 "cplus.met"
#line 1378 "cplus.met"
                        {
#line 1378 "cplus.met"
                            _retValue = retTree ;
#line 1378 "cplus.met"
                            goto directive_ret;
#line 1378 "cplus.met"
                            
#line 1378 "cplus.met"
                        }
#line 1378 "cplus.met"
#line 1378 "cplus.met"
                        break;
#line 1378 "cplus.met"
#line 1380 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1380 "cplus.met"
                        tokenAhead = 0 ;
#line 1380 "cplus.met"
                        CommTerm();
#line 1380 "cplus.met"
#line 1381 "cplus.met"
#line 1382 "cplus.met"
                        {
#line 1382 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1382 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1382 "cplus.met"
                            {
#line 1382 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1382 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1382 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1382 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1382 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1382 "cplus.met"
                                } else {
#line 1382 "cplus.met"
                                    tokenAhead = 0 ;
#line 1382 "cplus.met"
                                }
#line 1382 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1382 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1382 "cplus.met"
                            }
#line 1382 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1382 "cplus.met"
                            retTree=_ptRes0;
#line 1382 "cplus.met"
                        }
#line 1382 "cplus.met"
#line 1383 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1383 "cplus.met"
#line 1384 "cplus.met"
                        {
#line 1384 "cplus.met"
                            _retValue = retTree ;
#line 1384 "cplus.met"
                            goto directive_ret;
#line 1384 "cplus.met"
                            
#line 1384 "cplus.met"
                        }
#line 1384 "cplus.met"
#line 1384 "cplus.met"
                        break;
#line 1384 "cplus.met"
#line 1386 "cplus.met"
                    default : 
#line 1386 "cplus.met"
#line 1386 "cplus.met"
                        {
#line 1386 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1386 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 1386 "cplus.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1386 "cplus.met"
                            }
#line 1386 "cplus.met"
                            _retValue =_ptTree0;
#line 1386 "cplus.met"
                            goto directive_ret;
#line 1386 "cplus.met"
                        }
#line 1386 "cplus.met"
                        break;
#line 1386 "cplus.met"
                }
#line 1386 "cplus.met"
#line 1386 "cplus.met"
            } else 
#line 1386 "cplus.met"
#line 1391 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 124, cplus))){
#line 1391 "cplus.met"
#line 1390 "cplus.met"
#line 1391 "cplus.met"
                {
#line 1391 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1391 "cplus.met"
                    {
#line 1391 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1391 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1391 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1391 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1391 "cplus.met"
                            MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
#line 1391 "cplus.met"
                        } else {
#line 1391 "cplus.met"
                            tokenAhead = 0 ;
#line 1391 "cplus.met"
                        }
#line 1391 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1391 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1391 "cplus.met"
                    }
#line 1391 "cplus.met"
                    _retValue =_ptTree0;
#line 1391 "cplus.met"
                    goto directive_ret;
#line 1391 "cplus.met"
                }
#line 1391 "cplus.met"
#line 1391 "cplus.met"
            } else 
#line 1391 "cplus.met"
#line 1395 "cplus.met"
            if (1) {
#line 1395 "cplus.met"
#line 1394 "cplus.met"
#line 1395 "cplus.met"
                {
#line 1395 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1395 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 105, cplus))== (PPTREE) -1 ) {
#line 1395 "cplus.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1395 "cplus.met"
                    }
#line 1395 "cplus.met"
                    _retValue =_ptTree0;
#line 1395 "cplus.met"
                    goto directive_ret;
#line 1395 "cplus.met"
                }
#line 1395 "cplus.met"
#line 1395 "cplus.met"
            } else 
#line 1395 "cplus.met"
             ;
#line 1395 "cplus.met"
#line 1395 "cplus.met"
            break;
#line 1395 "cplus.met"
        default :
#line 1395 "cplus.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1395 "cplus.met"
            break;
#line 1395 "cplus.met"
    }
#line 1395 "cplus.met"
#line 1395 "cplus.met"
#line 1399 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1399 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1399 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1399 "cplus.met"
keepAll =  _oldkeepAll;
#line 1399 "cplus.met"
return((PPTREE) 0);
#line 1399 "cplus.met"

#line 1399 "cplus.met"
directive_exit :
#line 1399 "cplus.met"

#line 1399 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1399 "cplus.met"
    _funcLevel--;
#line 1399 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1399 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1399 "cplus.met"
    return((PPTREE) -1) ;
#line 1399 "cplus.met"

#line 1399 "cplus.met"
directive_ret :
#line 1399 "cplus.met"
    
#line 1399 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1399 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1399 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1399 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1399 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1399 "cplus.met"
    return _retValue ;
#line 1399 "cplus.met"
}
#line 1399 "cplus.met"

#line 1399 "cplus.met"
#line 806 "cplus.met"
PPTREE cplus::end_pragma ( int error_free)
#line 806 "cplus.met"
{
#line 806 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 806 "cplus.met"
    int _value,_nbPre = 0 ;
#line 806 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 806 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma",TRACE_ENTER,(PPTREE)0);
#line 806 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 806 "cplus.met"
#line 807 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 807 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 807 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_DIR")
#line 807 "cplus.met"
    } else {
#line 807 "cplus.met"
        tokenAhead = 0 ;
#line 807 "cplus.met"
    }
#line 807 "cplus.met"
#line 808 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 808 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_PRETTY,"PRAGMA_PRETTY") || !(CommTerm(),1)) {
#line 808 "cplus.met"
            TOKEN_EXIT(end_pragma_exit,"PRAGMA_PRETTY")
#line 808 "cplus.met"
    } else {
#line 808 "cplus.met"
        tokenAhead = 0 ;
#line 808 "cplus.met"
    }
#line 808 "cplus.met"
#line 808 "cplus.met"
#line 808 "cplus.met"

#line 809 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 809 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 809 "cplus.met"
return((PPTREE) 0);
#line 809 "cplus.met"

#line 809 "cplus.met"
end_pragma_exit :
#line 809 "cplus.met"

#line 809 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_EXIT,(PPTREE)0);
#line 809 "cplus.met"
    _funcLevel--;
#line 809 "cplus.met"
    return((PPTREE) -1) ;
#line 809 "cplus.met"

#line 809 "cplus.met"
end_pragma_ret :
#line 809 "cplus.met"
    
#line 809 "cplus.met"
    _Debug = TRACE_RULE("end_pragma",TRACE_RETURN,_retValue);
#line 809 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 809 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 809 "cplus.met"
    return _retValue ;
#line 809 "cplus.met"
}
#line 809 "cplus.met"

#line 809 "cplus.met"
#line 811 "cplus.met"
PPTREE cplus::end_pragma_managed ( int error_free)
#line 811 "cplus.met"
{
#line 811 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 811 "cplus.met"
    int _value,_nbPre = 0 ;
#line 811 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 811 "cplus.met"
    int _Debug = TRACE_RULE("end_pragma_managed",TRACE_ENTER,(PPTREE)0);
#line 811 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 811 "cplus.met"
#line 812 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 812 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_DIR,"PRAGMA_DIR") || !(CommTerm(),1)) {
#line 812 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_DIR")
#line 812 "cplus.met"
    } else {
#line 812 "cplus.met"
        tokenAhead = 0 ;
#line 812 "cplus.met"
    }
#line 812 "cplus.met"
#line 813 "cplus.met"
    (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 813 "cplus.met"
    if ( ! TERM_OR_META(PRAGMA_MANAGED,"PRAGMA_MANAGED") || !(CommTerm(),1)) {
#line 813 "cplus.met"
            TOKEN_EXIT(end_pragma_managed_exit,"PRAGMA_MANAGED")
#line 813 "cplus.met"
    } else {
#line 813 "cplus.met"
        tokenAhead = 0 ;
#line 813 "cplus.met"
    }
#line 813 "cplus.met"
#line 813 "cplus.met"
#line 813 "cplus.met"

#line 814 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 814 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 814 "cplus.met"
return((PPTREE) 0);
#line 814 "cplus.met"

#line 814 "cplus.met"
end_pragma_managed_exit :
#line 814 "cplus.met"

#line 814 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_EXIT,(PPTREE)0);
#line 814 "cplus.met"
    _funcLevel--;
#line 814 "cplus.met"
    return((PPTREE) -1) ;
#line 814 "cplus.met"

#line 814 "cplus.met"
end_pragma_managed_ret :
#line 814 "cplus.met"
    
#line 814 "cplus.met"
    _Debug = TRACE_RULE("end_pragma_managed",TRACE_RETURN,_retValue);
#line 814 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 814 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 814 "cplus.met"
    return _retValue ;
#line 814 "cplus.met"
}
#line 814 "cplus.met"

#line 814 "cplus.met"
#line 1694 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1694 "cplus.met"
{
#line 1694 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1694 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1694 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1694 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1694 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1694 "cplus.met"
#line 1694 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1694 "cplus.met"
#line 1694 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,classMarker = (PPTREE) 0;
#line 1694 "cplus.met"
#line 1696 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1696 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1696 "cplus.met"
        MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1696 "cplus.met"
    } else {
#line 1696 "cplus.met"
        tokenAhead = 0 ;
#line 1696 "cplus.met"
    }
#line 1696 "cplus.met"
#line 1697 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CLASS,"class") && (tokenAhead = 0,CommTerm(),1)){
#line 1697 "cplus.met"
#line 1698 "cplus.met"
#line 1699 "cplus.met"
        {
#line 1699 "cplus.met"
            PPTREE _ptRes0=0;
#line 1699 "cplus.met"
            _ptRes0= MakeTree(ENUM_CLASS, 0);
#line 1699 "cplus.met"
            classMarker=_ptRes0;
#line 1699 "cplus.met"
        }
#line 1699 "cplus.met"
#line 1699 "cplus.met"
#line 1699 "cplus.met"
    }
#line 1699 "cplus.met"
#line 1701 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1701 "cplus.met"
#line 1702 "cplus.met"
        {
#line 1702 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1702 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
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
                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
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
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1702 "cplus.met"
            retTree=_ptRes0;
#line 1702 "cplus.met"
        }
#line 1702 "cplus.met"
    } else {
#line 1702 "cplus.met"
#line 1704 "cplus.met"
        {
#line 1704 "cplus.met"
            PPTREE _ptRes0=0;
#line 1704 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1704 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1704 "cplus.met"
            retTree=_ptRes0;
#line 1704 "cplus.met"
        }
#line 1704 "cplus.met"
    }
#line 1704 "cplus.met"
#line 1705 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1705 "cplus.met"
#line 1706 "cplus.met"
#line 1707 "cplus.met"
        {
#line 1707 "cplus.met"
            PPTREE _ptTree0=0;
#line 1707 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 128, cplus))== (PPTREE) -1 ) {
#line 1707 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                PROG_EXIT(enum_declarator_exit,"enum_declarator")
#line 1707 "cplus.met"
            }
#line 1707 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 1707 "cplus.met"
        }
#line 1707 "cplus.met"
#line 1707 "cplus.met"
#line 1707 "cplus.met"
    }
#line 1707 "cplus.met"
#line 1709 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1709 "cplus.met"
#line 1710 "cplus.met"
#line 1710 "cplus.met"
        _addlist1 = list ;
#line 1710 "cplus.met"
#line 1711 "cplus.met"
        do {
#line 1711 "cplus.met"
#line 1712 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 56, cplus)){
#line 1712 "cplus.met"
#line 1713 "cplus.met"
#line 1713 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1713 "cplus.met"
#line 1713 "cplus.met"
                if (list){
#line 1713 "cplus.met"
#line 1713 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1713 "cplus.met"
                } else {
#line 1713 "cplus.met"
#line 1713 "cplus.met"
                    list = _addlist1 ;
#line 1713 "cplus.met"
                }
#line 1713 "cplus.met"
            } else {
#line 1713 "cplus.met"
#line 1715 "cplus.met"
                
#line 1715 "cplus.met"
                MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1715 "cplus.met"
                goto enum_declarator_exit;
#line 1715 "cplus.met"
            }
#line 1715 "cplus.met"
#line 1715 "cplus.met"
#line 1716 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1716 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1716 "cplus.met"
#line 1717 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1717 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1717 "cplus.met"
            MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1717 "cplus.met"
        } else {
#line 1717 "cplus.met"
            tokenAhead = 0 ;
#line 1717 "cplus.met"
        }
#line 1717 "cplus.met"
#line 1718 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1718 "cplus.met"
#line 1718 "cplus.met"
#line 1718 "cplus.met"
    }
#line 1718 "cplus.met"
#line 1720 "cplus.met"
    {
#line 1720 "cplus.met"
        _retValue = retTree ;
#line 1720 "cplus.met"
        goto enum_declarator_ret;
#line 1720 "cplus.met"
        
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
enum_declarator_exit :
#line 1721 "cplus.met"

#line 1721 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1721 "cplus.met"
    _funcLevel--;
#line 1721 "cplus.met"
    return((PPTREE) -1) ;
#line 1721 "cplus.met"

#line 1721 "cplus.met"
enum_declarator_ret :
#line 1721 "cplus.met"
    
#line 1721 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
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
#line 1684 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1684 "cplus.met"
{
#line 1684 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1684 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1684 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1684 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1684 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1684 "cplus.met"
#line 1684 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1684 "cplus.met"
#line 1686 "cplus.met"
    {
#line 1686 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1686 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1686 "cplus.met"
        {
#line 1686 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1686 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1686 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1686 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1686 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1686 "cplus.met"
            } else {
#line 1686 "cplus.met"
                tokenAhead = 0 ;
#line 1686 "cplus.met"
            }
#line 1686 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1686 "cplus.met"
            _ptTree0=_ptRes1;
#line 1686 "cplus.met"
        }
#line 1686 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1686 "cplus.met"
        valTree=_ptRes0;
#line 1686 "cplus.met"
    }
#line 1686 "cplus.met"
#line 1687 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1687 "cplus.met"
#line 1688 "cplus.met"
        {
#line 1688 "cplus.met"
            PPTREE _ptTree0=0;
#line 1688 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 16, cplus))== (PPTREE) -1 ) {
#line 1688 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1688 "cplus.met"
            }
#line 1688 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1688 "cplus.met"
        }
#line 1688 "cplus.met"
#line 1688 "cplus.met"
    }
#line 1688 "cplus.met"
#line 1689 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1689 "cplus.met"
#line 1689 "cplus.met"
    }
#line 1689 "cplus.met"
#line 1691 "cplus.met"
    {
#line 1691 "cplus.met"
        _retValue = valTree ;
#line 1691 "cplus.met"
        goto enum_val_ret;
#line 1691 "cplus.met"
        
#line 1691 "cplus.met"
    }
#line 1691 "cplus.met"
#line 1691 "cplus.met"
#line 1691 "cplus.met"

#line 1692 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1692 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1692 "cplus.met"
return((PPTREE) 0);
#line 1692 "cplus.met"

#line 1692 "cplus.met"
enum_val_exit :
#line 1692 "cplus.met"

#line 1692 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1692 "cplus.met"
    _funcLevel--;
#line 1692 "cplus.met"
    return((PPTREE) -1) ;
#line 1692 "cplus.met"

#line 1692 "cplus.met"
enum_val_ret :
#line 1692 "cplus.met"
    
#line 1692 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1692 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1692 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1692 "cplus.met"
    return _retValue ;
#line 1692 "cplus.met"
}
#line 1692 "cplus.met"

#line 1692 "cplus.met"
#line 2624 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2624 "cplus.met"
{
#line 2624 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2624 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2624 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2624 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2624 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2624 "cplus.met"
#line 2624 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2624 "cplus.met"
#line 2626 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 2626 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2626 "cplus.met"
    }
#line 2626 "cplus.met"
#line 2627 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2627 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2627 "cplus.met"
#line 2628 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2628 "cplus.met"
#line 2629 "cplus.met"
            {
#line 2629 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2629 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2629 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2629 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 2629 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2629 "cplus.met"
                }
#line 2629 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2629 "cplus.met"
                expTree=_ptRes0;
#line 2629 "cplus.met"
            }
#line 2629 "cplus.met"
        } else {
#line 2629 "cplus.met"
#line 2631 "cplus.met"
#line 2632 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2632 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2632 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2632 "cplus.met"
            } else {
#line 2632 "cplus.met"
                tokenAhead = 0 ;
#line 2632 "cplus.met"
            }
#line 2632 "cplus.met"
#line 2633 "cplus.met"
            {
#line 2633 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2633 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2633 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2633 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 125, cplus))== (PPTREE) -1 ) {
#line 2633 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2633 "cplus.met"
                }
#line 2633 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2633 "cplus.met"
                expTree=_ptRes0;
#line 2633 "cplus.met"
            }
#line 2633 "cplus.met"
#line 2633 "cplus.met"
        }
#line 2633 "cplus.met"
    } 
#line 2633 "cplus.met"
#line 2635 "cplus.met"
    {
#line 2635 "cplus.met"
        _retValue = expTree ;
#line 2635 "cplus.met"
        goto equality_expression_ret;
#line 2635 "cplus.met"
        
#line 2635 "cplus.met"
    }
#line 2635 "cplus.met"
#line 2635 "cplus.met"
#line 2635 "cplus.met"

#line 2636 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2636 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2636 "cplus.met"
return((PPTREE) 0);
#line 2636 "cplus.met"

#line 2636 "cplus.met"
equality_expression_exit :
#line 2636 "cplus.met"

#line 2636 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2636 "cplus.met"
    _funcLevel--;
#line 2636 "cplus.met"
    return((PPTREE) -1) ;
#line 2636 "cplus.met"

#line 2636 "cplus.met"
equality_expression_ret :
#line 2636 "cplus.met"
    
#line 2636 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2636 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2636 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2636 "cplus.met"
    return _retValue ;
#line 2636 "cplus.met"
}
#line 2636 "cplus.met"

#line 2636 "cplus.met"
#line 1917 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 1917 "cplus.met"
{
#line 1917 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1917 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1917 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1917 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 1917 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1917 "cplus.met"
#line 1917 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1917 "cplus.met"
#line 1917 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 1917 "cplus.met"
#line 1919 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 1919 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 1919 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 1919 "cplus.met"
    } else {
#line 1919 "cplus.met"
        tokenAhead = 0 ;
#line 1919 "cplus.met"
    }
#line 1919 "cplus.met"
#line 1920 "cplus.met"
    {
#line 1920 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1920 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 1920 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1920 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 1920 "cplus.met"
        }
#line 1920 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1920 "cplus.met"
        retTree=_ptRes0;
#line 1920 "cplus.met"
    }
#line 1920 "cplus.met"
#line 1920 "cplus.met"
    _addlist1 = list ;
#line 1920 "cplus.met"
#line 1921 "cplus.met"
    do {
#line 1921 "cplus.met"
#line 1922 "cplus.met"
        {
#line 1922 "cplus.met"
            PPTREE _ptTree0=0;
#line 1922 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 23, cplus))== (PPTREE) -1 ) {
#line 1922 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 1922 "cplus.met"
            }
#line 1922 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 1922 "cplus.met"
        }
#line 1922 "cplus.met"
#line 1922 "cplus.met"
        if (list){
#line 1922 "cplus.met"
#line 1922 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1922 "cplus.met"
        } else {
#line 1922 "cplus.met"
#line 1922 "cplus.met"
            list = _addlist1 ;
#line 1922 "cplus.met"
        }
#line 1922 "cplus.met"
#line 1922 "cplus.met"
#line 1923 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 1923 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 1923 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1923 "cplus.met"
#line 1924 "cplus.met"
    {
#line 1924 "cplus.met"
        PPTREE _ptTree0=0;
#line 1924 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1924 "cplus.met"
        _retValue =_ptTree0;
#line 1924 "cplus.met"
        goto exception_ret;
#line 1924 "cplus.met"
    }
#line 1924 "cplus.met"
#line 1924 "cplus.met"
#line 1924 "cplus.met"

#line 1925 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1925 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1925 "cplus.met"
return((PPTREE) 0);
#line 1925 "cplus.met"

#line 1925 "cplus.met"
exception_exit :
#line 1925 "cplus.met"

#line 1925 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 1925 "cplus.met"
    _funcLevel--;
#line 1925 "cplus.met"
    return((PPTREE) -1) ;
#line 1925 "cplus.met"

#line 1925 "cplus.met"
exception_ret :
#line 1925 "cplus.met"
    
#line 1925 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 1925 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1925 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1925 "cplus.met"
    return _retValue ;
#line 1925 "cplus.met"
}
#line 1925 "cplus.met"

#line 1925 "cplus.met"
#line 1948 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 1948 "cplus.met"
{
#line 1948 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1948 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1948 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1948 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 1948 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1948 "cplus.met"
#line 1948 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1948 "cplus.met"
#line 1948 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 1948 "cplus.met"
#line 1950 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1950 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 1950 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 1950 "cplus.met"
    } else {
#line 1950 "cplus.met"
        tokenAhead = 0 ;
#line 1950 "cplus.met"
    }
#line 1950 "cplus.met"
#line 1951 "cplus.met"
    {
#line 1951 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1951 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 1951 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 28, cplus))== (PPTREE) -1 ) {
#line 1951 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 1951 "cplus.met"
        }
#line 1951 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1951 "cplus.met"
        retTree=_ptRes0;
#line 1951 "cplus.met"
    }
#line 1951 "cplus.met"
#line 1951 "cplus.met"
    _addlist1 = list ;
#line 1951 "cplus.met"
#line 1952 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 24, cplus)) { 
#line 1952 "cplus.met"
#line 1953 "cplus.met"
#line 1953 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 1953 "cplus.met"
#line 1953 "cplus.met"
        if (list){
#line 1953 "cplus.met"
#line 1953 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 1953 "cplus.met"
        } else {
#line 1953 "cplus.met"
#line 1953 "cplus.met"
            list = _addlist1 ;
#line 1953 "cplus.met"
        }
#line 1953 "cplus.met"
    } 
#line 1953 "cplus.met"
#line 1954 "cplus.met"
    {
#line 1954 "cplus.met"
        PPTREE _ptTree0=0;
#line 1954 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 1954 "cplus.met"
        _retValue =_ptTree0;
#line 1954 "cplus.met"
        goto exception_ansi_ret;
#line 1954 "cplus.met"
    }
#line 1954 "cplus.met"
#line 1954 "cplus.met"
#line 1954 "cplus.met"

#line 1955 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1955 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1955 "cplus.met"
return((PPTREE) 0);
#line 1955 "cplus.met"

#line 1955 "cplus.met"
exception_ansi_exit :
#line 1955 "cplus.met"

#line 1955 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 1955 "cplus.met"
    _funcLevel--;
#line 1955 "cplus.met"
    return((PPTREE) -1) ;
#line 1955 "cplus.met"

#line 1955 "cplus.met"
exception_ansi_ret :
#line 1955 "cplus.met"
    
#line 1955 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 1955 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1955 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1955 "cplus.met"
    return _retValue ;
#line 1955 "cplus.met"
}
#line 1955 "cplus.met"

#line 1955 "cplus.met"
#line 3181 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3181 "cplus.met"
{
#line 3181 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3181 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3181 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3181 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3181 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3181 "cplus.met"
#line 3181 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3181 "cplus.met"
#line 3181 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3181 "cplus.met"
#line 3183 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3183 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3183 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3183 "cplus.met"
    } else {
#line 3183 "cplus.met"
        tokenAhead = 0 ;
#line 3183 "cplus.met"
    }
#line 3183 "cplus.met"
#line 3184 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3184 "cplus.met"
#line 3185 "cplus.met"
#line 3186 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3186 "cplus.met"
#line 3188 "cplus.met"
#line 3188 "cplus.met"
            _addlist1 = exceptionList ;
#line 3188 "cplus.met"
#line 3187 "cplus.met"
            do {
#line 3187 "cplus.met"
#line 3188 "cplus.met"
                {
#line 3188 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3188 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 3188 "cplus.met"
                        MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                        PROG_EXIT(exception_list_exit,"exception_list")
#line 3188 "cplus.met"
                    }
#line 3188 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3188 "cplus.met"
                }
#line 3188 "cplus.met"
#line 3188 "cplus.met"
                if (exceptionList){
#line 3188 "cplus.met"
#line 3188 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3188 "cplus.met"
                } else {
#line 3188 "cplus.met"
#line 3188 "cplus.met"
                    exceptionList = _addlist1 ;
#line 3188 "cplus.met"
                }
#line 3188 "cplus.met"
#line 3188 "cplus.met"
#line 3189 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3189 "cplus.met"
        }
#line 3189 "cplus.met"
#line 3190 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3190 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3190 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3190 "cplus.met"
        } else {
#line 3190 "cplus.met"
            tokenAhead = 0 ;
#line 3190 "cplus.met"
        }
#line 3190 "cplus.met"
#line 3190 "cplus.met"
#line 3190 "cplus.met"
    } else {
#line 3190 "cplus.met"
#line 3193 "cplus.met"
        {
#line 3193 "cplus.met"
            PPTREE _ptTree0=0;
#line 3193 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 116, cplus))== (PPTREE) -1 ) {
#line 3193 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3193 "cplus.met"
            }
#line 3193 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3193 "cplus.met"
        }
#line 3193 "cplus.met"
    }
#line 3193 "cplus.met"
#line 3194 "cplus.met"
    {
#line 3194 "cplus.met"
        PPTREE _ptTree0=0;
#line 3194 "cplus.met"
        {
#line 3194 "cplus.met"
            PPTREE _ptRes1=0;
#line 3194 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3194 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3194 "cplus.met"
            _ptTree0=_ptRes1;
#line 3194 "cplus.met"
        }
#line 3194 "cplus.met"
        _retValue =_ptTree0;
#line 3194 "cplus.met"
        goto exception_list_ret;
#line 3194 "cplus.met"
    }
#line 3194 "cplus.met"
#line 3194 "cplus.met"
#line 3194 "cplus.met"

#line 3195 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3195 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3195 "cplus.met"
return((PPTREE) 0);
#line 3195 "cplus.met"

#line 3195 "cplus.met"
exception_list_exit :
#line 3195 "cplus.met"

#line 3195 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3195 "cplus.met"
    _funcLevel--;
#line 3195 "cplus.met"
    return((PPTREE) -1) ;
#line 3195 "cplus.met"

#line 3195 "cplus.met"
exception_list_ret :
#line 3195 "cplus.met"
    
#line 3195 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3195 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3195 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3195 "cplus.met"
    return _retValue ;
#line 3195 "cplus.met"
}
#line 3195 "cplus.met"

#line 3195 "cplus.met"
#line 2608 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2608 "cplus.met"
{
#line 2608 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2608 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2608 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2608 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2608 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2608 "cplus.met"
#line 2608 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2608 "cplus.met"
#line 2610 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2610 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2610 "cplus.met"
    }
#line 2610 "cplus.met"
#line 2611 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2611 "cplus.met"
#line 2612 "cplus.met"
        {
#line 2612 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2612 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2612 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2612 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2612 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2612 "cplus.met"
            }
#line 2612 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2612 "cplus.met"
            expTree=_ptRes0;
#line 2612 "cplus.met"
        }
#line 2612 "cplus.met"
    } 
#line 2612 "cplus.met"
#line 2613 "cplus.met"
    {
#line 2613 "cplus.met"
        _retValue = expTree ;
#line 2613 "cplus.met"
        goto exclusive_or_expression_ret;
#line 2613 "cplus.met"
        
#line 2613 "cplus.met"
    }
#line 2613 "cplus.met"
#line 2613 "cplus.met"
#line 2613 "cplus.met"

#line 2614 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2614 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2614 "cplus.met"
return((PPTREE) 0);
#line 2614 "cplus.met"

#line 2614 "cplus.met"
exclusive_or_expression_exit :
#line 2614 "cplus.met"

#line 2614 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2614 "cplus.met"
    _funcLevel--;
#line 2614 "cplus.met"
    return((PPTREE) -1) ;
#line 2614 "cplus.met"

#line 2614 "cplus.met"
exclusive_or_expression_ret :
#line 2614 "cplus.met"
    
#line 2614 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 2614 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2614 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2614 "cplus.met"
    return _retValue ;
#line 2614 "cplus.met"
}
#line 2614 "cplus.met"

#line 2614 "cplus.met"
