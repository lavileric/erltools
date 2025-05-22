/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "cplus.h"


#line 1343 "cplus.met"
PPTREE cplus::directive ( int error_free)
#line 1343 "cplus.met"
{
#line 1343 "cplus.met"
    int  _oldkeepCarriage = keepCarriage;
#line 1343 "cplus.met"
    int  _oldkeepAll = keepAll;
#line 1343 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1343 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1343 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1343 "cplus.met"
    int _Debug = TRACE_RULE("directive",TRACE_ENTER,(PPTREE)0);
#line 1343 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1343 "cplus.met"
#line 1343 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0,_addlist2 = (PPTREE) 0,_addlist3 = (PPTREE) 0;
#line 1343 "cplus.met"
#line 1343 "cplus.met"
    PPTREE retTree = (PPTREE) 0,interTree = (PPTREE) 0,list = (PPTREE) 0,exp = (PPTREE) 0;
#line 1343 "cplus.met"
#line 1345 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1345 "cplus.met"
    switch( lexEl.Value) {
#line 1345 "cplus.met"
#line 1346 "cplus.met"
        case META : 
#line 1346 "cplus.met"
        case DEFINE_DIR : 
#line 1346 "cplus.met"
#line 1346 "cplus.met"
            {
#line 1346 "cplus.met"
                PPTREE _ptTree0=0;
#line 1346 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(define_dir)(error_free), 54, cplus))== (PPTREE) -1 ) {
#line 1346 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1346 "cplus.met"
                }
#line 1346 "cplus.met"
                _retValue =_ptTree0;
#line 1346 "cplus.met"
                goto directive_ret;
#line 1346 "cplus.met"
            }
#line 1346 "cplus.met"
            break;
#line 1346 "cplus.met"
#line 1347 "cplus.met"
        case INCLUDE_DIR : 
#line 1347 "cplus.met"
#line 1347 "cplus.met"
            {
#line 1347 "cplus.met"
                PPTREE _ptTree0=0;
#line 1347 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(include_dir)(error_free), 82, cplus))== (PPTREE) -1 ) {
#line 1347 "cplus.met"
                    MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    PROG_EXIT(directive_exit,"directive")
#line 1347 "cplus.met"
                }
#line 1347 "cplus.met"
                _retValue =_ptTree0;
#line 1347 "cplus.met"
                goto directive_ret;
#line 1347 "cplus.met"
            }
#line 1347 "cplus.met"
            break;
#line 1347 "cplus.met"
#line 1348 "cplus.met"
        case LINE_DIR : 
#line 1348 "cplus.met"
            tokenAhead = 0 ;
#line 1348 "cplus.met"
            CommTerm();
#line 1348 "cplus.met"
#line 1349 "cplus.met"
#line 1350 "cplus.met"
            {
#line 1350 "cplus.met"
                keepCarriage = 1 ;
#line 1350 "cplus.met"
#line 1351 "cplus.met"
#line 1352 "cplus.met"
                {
#line 1352 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1352 "cplus.met"
                    _ptRes0= MakeTree(LINE_DIR, 2);
#line 1352 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1352 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
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
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1353 "cplus.met"
#line 1354 "cplus.met"
                    {
#line 1354 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1354 "cplus.met"
                        {
#line 1354 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1354 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1354 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1354 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1354 "cplus.met"
                        }
#line 1354 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1354 "cplus.met"
                    }
#line 1354 "cplus.met"
#line 1354 "cplus.met"
                }
#line 1354 "cplus.met"
#line 1355 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1355 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1355 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1355 "cplus.met"
                } else {
#line 1355 "cplus.met"
                    tokenAhead = 0 ;
#line 1355 "cplus.met"
                }
#line 1355 "cplus.met"
#line 1355 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1355 "cplus.met"
            }
#line 1355 "cplus.met"
#line 1357 "cplus.met"
            {
#line 1357 "cplus.met"
                _retValue = retTree ;
#line 1357 "cplus.met"
                goto directive_ret;
#line 1357 "cplus.met"
                
#line 1357 "cplus.met"
            }
#line 1357 "cplus.met"
#line 1357 "cplus.met"
            break;
#line 1357 "cplus.met"
#line 1359 "cplus.met"
        case LINE_REFERENCE_DIR : 
#line 1359 "cplus.met"
            tokenAhead = 0 ;
#line 1359 "cplus.met"
            CommTerm();
#line 1359 "cplus.met"
#line 1360 "cplus.met"
#line 1361 "cplus.met"
            {
#line 1361 "cplus.met"
                keepCarriage = 1 ;
#line 1361 "cplus.met"
#line 1362 "cplus.met"
#line 1363 "cplus.met"
                {
#line 1363 "cplus.met"
                    PPTREE _ptTree0=0,_ptRes0=0;
#line 1363 "cplus.met"
                    _ptRes0= MakeTree(LINE_REFERENCE_DIR, 3);
#line 1363 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(expression)(error_free), 65, cplus))== (PPTREE) -1 ) {
#line 1363 "cplus.met"
                        MulFreeTree(9,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
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
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&TERM_OR_META(STRING,"STRING") && !(tokenAhead = 0) && ( BUILD_TERM_META(interTree))) {
#line 1364 "cplus.met"
#line 1365 "cplus.met"
                    {
#line 1365 "cplus.met"
                        PPTREE _ptTree0=0;
#line 1365 "cplus.met"
                        {
#line 1365 "cplus.met"
                            PPTREE _ptRes1=0;
#line 1365 "cplus.met"
                            _ptRes1= MakeTree(STRING, 1);
#line 1365 "cplus.met"
                            ReplaceTree(_ptRes1, 1, interTree );
#line 1365 "cplus.met"
                            _ptTree0=_ptRes1;
#line 1365 "cplus.met"
                        }
#line 1365 "cplus.met"
                        ReplaceTree(retTree , 2 , _ptTree0);
#line 1365 "cplus.met"
                    }
#line 1365 "cplus.met"
#line 1365 "cplus.met"
                }
#line 1365 "cplus.met"
#line 1365 "cplus.met"
                _addlist1 = list ;
#line 1365 "cplus.met"
#line 1366 "cplus.met"
                while (NPUSH_CALL_AFF_VERIF(exp = ,_Tak(expression), 65, cplus)) { 
#line 1366 "cplus.met"
#line 1367 "cplus.met"
#line 1367 "cplus.met"
                    _addlist1 =AddList(_addlist1 ,exp );
#line 1367 "cplus.met"
#line 1367 "cplus.met"
                    if (list){
#line 1367 "cplus.met"
#line 1367 "cplus.met"
                        _addlist1 = SonTree (_addlist1 ,2 );
#line 1367 "cplus.met"
                    } else {
#line 1367 "cplus.met"
#line 1367 "cplus.met"
                        list = _addlist1 ;
#line 1367 "cplus.met"
                    }
#line 1367 "cplus.met"
                } 
#line 1367 "cplus.met"
#line 1368 "cplus.met"
                ReplaceTree(retTree ,3 ,list );
#line 1368 "cplus.met"
#line 1369 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1369 "cplus.met"
                if ( ! TERM_OR_META(CARRIAGE_RETURN,"CARRIAGE_RETURN") || !(CommTerm(),1)) {
#line 1369 "cplus.met"
                    MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                    TOKEN_EXIT(directive_exit,"CARRIAGE_RETURN")
#line 1369 "cplus.met"
                } else {
#line 1369 "cplus.met"
                    tokenAhead = 0 ;
#line 1369 "cplus.met"
                }
#line 1369 "cplus.met"
#line 1369 "cplus.met"
                keepCarriage =  _oldkeepCarriage;
#line 1369 "cplus.met"
            }
#line 1369 "cplus.met"
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
        case UNDEF_DIR : 
#line 1373 "cplus.met"
            tokenAhead = 0 ;
#line 1373 "cplus.met"
            CommTerm();
#line 1373 "cplus.met"
#line 1373 "cplus.met"
            {
#line 1373 "cplus.met"
                PPTREE _ptTree0=0;
#line 1373 "cplus.met"
                {
#line 1373 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1373 "cplus.met"
                    _ptRes1= MakeTree(UNDEF, 1);
#line 1373 "cplus.met"
                    (tokenAhead == 10|| (LexUndef(),TRACE_LEX(1)));
#line 1373 "cplus.met"
                    if ( ! TERM_OR_META(UNDEF_CONTENT,"UNDEF_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1373 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"UNDEF_CONTENT")
#line 1373 "cplus.met"
                    } else {
#line 1373 "cplus.met"
                        tokenAhead = 0 ;
#line 1373 "cplus.met"
                    }
#line 1373 "cplus.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1373 "cplus.met"
                    _ptTree0=_ptRes1;
#line 1373 "cplus.met"
                }
#line 1373 "cplus.met"
                _retValue =_ptTree0;
#line 1373 "cplus.met"
                goto directive_ret;
#line 1373 "cplus.met"
            }
#line 1373 "cplus.met"
            break;
#line 1373 "cplus.met"
#line 1374 "cplus.met"
        case ERROR_DIR : 
#line 1374 "cplus.met"
            tokenAhead = 0 ;
#line 1374 "cplus.met"
            CommTerm();
#line 1374 "cplus.met"
#line 1374 "cplus.met"
            {
#line 1374 "cplus.met"
                PPTREE _ptTree0=0;
#line 1374 "cplus.met"
                {
#line 1374 "cplus.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1374 "cplus.met"
                    _ptRes1= MakeTree(ERROR, 1);
#line 1374 "cplus.met"
                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1374 "cplus.met"
                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1374 "cplus.met"
                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        TOKEN_EXIT(directive_exit,"END_LINE")
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
                _retValue =_ptTree0;
#line 1374 "cplus.met"
                goto directive_ret;
#line 1374 "cplus.met"
            }
#line 1374 "cplus.met"
            break;
#line 1374 "cplus.met"
#line 1375 "cplus.met"
        case PRAGMA_DIR : 
#line 1375 "cplus.met"
            tokenAhead = 0 ;
#line 1375 "cplus.met"
            CommTerm();
#line 1375 "cplus.met"
#line 1376 "cplus.met"
#line 1377 "cplus.met"
#line 1378 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOPRETTY,"PRAGMA_NOPRETTY") && (tokenAhead = 0,CommTerm(),1))){
#line 1378 "cplus.met"
#line 1379 "cplus.met"
#line 1380 "cplus.met"
                {
#line 1380 "cplus.met"
                    keepCarriage = 1 ;
#line 1380 "cplus.met"
#line 1381 "cplus.met"
#line 1382 "cplus.met"
                    {
#line 1382 "cplus.met"
                        keepAll = 1 ;
#line 1382 "cplus.met"
#line 1383 "cplus.met"
#line 1384 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1384 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1384 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1384 "cplus.met"
                        } else {
#line 1384 "cplus.met"
                            tokenAhead = 0 ;
#line 1384 "cplus.met"
                        }
#line 1384 "cplus.met"
#line 1384 "cplus.met"
                        _addlist2 = list ;
#line 1384 "cplus.met"
#line 1385 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma), 56, cplus))) { 
#line 1385 "cplus.met"
#line 1386 "cplus.met"
#line 1386 "cplus.met"
                            {
#line 1386 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1386 "cplus.met"
                                {
#line 1386 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1386 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1386 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1386 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1386 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
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
                                _addlist2 =AddList(_addlist2 , _ptTree0);
#line 1386 "cplus.met"
                            }
#line 1386 "cplus.met"
#line 1386 "cplus.met"
                            if (list){
#line 1386 "cplus.met"
#line 1386 "cplus.met"
                                _addlist2 = SonTree (_addlist2 ,2 );
#line 1386 "cplus.met"
                            } else {
#line 1386 "cplus.met"
#line 1386 "cplus.met"
                                list = _addlist2 ;
#line 1386 "cplus.met"
                            }
#line 1386 "cplus.met"
                        } 
#line 1386 "cplus.met"
#line 1387 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma)(error_free), 56, cplus))== (PPTREE) -1 ) {
#line 1387 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1387 "cplus.met"
                        }
#line 1387 "cplus.met"
#line 1387 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1387 "cplus.met"
                    }
#line 1387 "cplus.met"
#line 1387 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1387 "cplus.met"
                }
#line 1387 "cplus.met"
#line 1391 "cplus.met"
                 tokenAhead = 0;
#line 1391 "cplus.met"
#line 1393 "cplus.met"
                {
#line 1393 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1393 "cplus.met"
                    {
#line 1393 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1393 "cplus.met"
                        _ptRes1= MakeTree(NO_PRETTY, 1);
#line 1393 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1393 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1393 "cplus.met"
                    }
#line 1393 "cplus.met"
                    _retValue =_ptTree0;
#line 1393 "cplus.met"
                    goto directive_ret;
#line 1393 "cplus.met"
                }
#line 1393 "cplus.met"
#line 1393 "cplus.met"
            } else 
#line 1393 "cplus.met"
#line 1395 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_NOT_MANAGED,"PRAGMA_NOT_MANAGED") && (tokenAhead = 0,CommTerm(),1))){
#line 1395 "cplus.met"
#line 1396 "cplus.met"
#line 1397 "cplus.met"
                {
#line 1397 "cplus.met"
                    keepCarriage = 1 ;
#line 1397 "cplus.met"
#line 1398 "cplus.met"
#line 1399 "cplus.met"
                    {
#line 1399 "cplus.met"
                        keepAll = 1 ;
#line 1399 "cplus.met"
#line 1400 "cplus.met"
#line 1401 "cplus.met"
                        (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1401 "cplus.met"
                        if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(CommTerm(),1)) {
#line 1401 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"END_LINE")
#line 1401 "cplus.met"
                        } else {
#line 1401 "cplus.met"
                            tokenAhead = 0 ;
#line 1401 "cplus.met"
                        }
#line 1401 "cplus.met"
#line 1401 "cplus.met"
                        _addlist3 = list ;
#line 1401 "cplus.met"
#line 1402 "cplus.met"
                        while (! (NPUSH_CALL_VERIF(_Tak(end_pragma_managed), 57, cplus))) { 
#line 1402 "cplus.met"
#line 1403 "cplus.met"
#line 1403 "cplus.met"
                            {
#line 1403 "cplus.met"
                                PPTREE _ptTree0=0;
#line 1403 "cplus.met"
                                {
#line 1403 "cplus.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 1403 "cplus.met"
                                    _ptRes1= MakeTree(ALINE, 1);
#line 1403 "cplus.met"
                                    (tokenAhead == 5|| (LexEndLine(),TRACE_LEX(1)));
#line 1403 "cplus.met"
                                    if ( ! TERM_OR_META(END_LINE,"END_LINE") || !(BUILD_TERM_META(_ptTree1))) {
#line 1403 "cplus.met"
                                        MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                        TOKEN_EXIT(directive_exit,"END_LINE")
#line 1403 "cplus.met"
                                    } else {
#line 1403 "cplus.met"
                                        tokenAhead = 0 ;
#line 1403 "cplus.met"
                                    }
#line 1403 "cplus.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1403 "cplus.met"
                                    _ptTree0=_ptRes1;
#line 1403 "cplus.met"
                                }
#line 1403 "cplus.met"
                                _addlist3 =AddList(_addlist3 , _ptTree0);
#line 1403 "cplus.met"
                            }
#line 1403 "cplus.met"
#line 1403 "cplus.met"
                            if (list){
#line 1403 "cplus.met"
#line 1403 "cplus.met"
                                _addlist3 = SonTree (_addlist3 ,2 );
#line 1403 "cplus.met"
                            } else {
#line 1403 "cplus.met"
#line 1403 "cplus.met"
                                list = _addlist3 ;
#line 1403 "cplus.met"
                            }
#line 1403 "cplus.met"
                        } 
#line 1403 "cplus.met"
#line 1404 "cplus.met"
                        if ( (NQUICK_CALL(_Tak(end_pragma_managed)(error_free), 57, cplus))== (PPTREE) -1 ) {
#line 1404 "cplus.met"
                            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            PROG_EXIT(directive_exit,"directive")
#line 1404 "cplus.met"
                        }
#line 1404 "cplus.met"
#line 1404 "cplus.met"
                        keepAll =  _oldkeepAll;
#line 1404 "cplus.met"
                    }
#line 1404 "cplus.met"
#line 1404 "cplus.met"
                    keepCarriage =  _oldkeepCarriage;
#line 1404 "cplus.met"
                }
#line 1404 "cplus.met"
#line 1408 "cplus.met"
                 tokenAhead = 0;
#line 1408 "cplus.met"
#line 1410 "cplus.met"
                {
#line 1410 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1410 "cplus.met"
                    {
#line 1410 "cplus.met"
                        PPTREE _ptRes1=0;
#line 1410 "cplus.met"
                        _ptRes1= MakeTree(NOT_MANAGED, 1);
#line 1410 "cplus.met"
                        ReplaceTree(_ptRes1, 1, list );
#line 1410 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1410 "cplus.met"
                    }
#line 1410 "cplus.met"
                    _retValue =_ptTree0;
#line 1410 "cplus.met"
                    goto directive_ret;
#line 1410 "cplus.met"
                }
#line 1410 "cplus.met"
#line 1410 "cplus.met"
            } else 
#line 1410 "cplus.met"
#line 1412 "cplus.met"
            if(((tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)))&&TERM_OR_META(PRAGMA_CONFIG,"PRAGMA_CONFIG") && (tokenAhead = 0,CommTerm(),1))){
#line 1412 "cplus.met"
#line 1413 "cplus.met"
#line 1414 "cplus.met"
                (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1414 "cplus.met"
                switch( lexEl.Value) {
#line 1414 "cplus.met"
#line 1415 "cplus.met"
                    case META : 
#line 1415 "cplus.met"
                    case PRAGMA_TAB : 
#line 1415 "cplus.met"
                        tokenAhead = 0 ;
#line 1415 "cplus.met"
                        CommTerm();
#line 1415 "cplus.met"
#line 1416 "cplus.met"
#line 1417 "cplus.met"
                        {
#line 1417 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1417 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1417 "cplus.met"
                            {
#line 1417 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1417 "cplus.met"
                                _ptRes1= MakeTree(TAB_VALUE, 1);
#line 1417 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1417 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1417 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1417 "cplus.met"
                                } else {
#line 1417 "cplus.met"
                                    tokenAhead = 0 ;
#line 1417 "cplus.met"
                                }
#line 1417 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1417 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1417 "cplus.met"
                            }
#line 1417 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1417 "cplus.met"
                            retTree=_ptRes0;
#line 1417 "cplus.met"
                        }
#line 1417 "cplus.met"
#line 1418 "cplus.met"
                        AnalyzeTab (retTree );
#line 1418 "cplus.met"
#line 1419 "cplus.met"
                        {
#line 1419 "cplus.met"
                            _retValue = retTree ;
#line 1419 "cplus.met"
                            goto directive_ret;
#line 1419 "cplus.met"
                            
#line 1419 "cplus.met"
                        }
#line 1419 "cplus.met"
#line 1419 "cplus.met"
                        break;
#line 1419 "cplus.met"
#line 1421 "cplus.met"
                    case PRAGMA_MODE : 
#line 1421 "cplus.met"
                        tokenAhead = 0 ;
#line 1421 "cplus.met"
                        CommTerm();
#line 1421 "cplus.met"
#line 1422 "cplus.met"
#line 1423 "cplus.met"
                        {
#line 1423 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1423 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1423 "cplus.met"
                            {
#line 1423 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1423 "cplus.met"
                                _ptRes1= MakeTree(MODE_VALUE, 1);
#line 1423 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1423 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1423 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1423 "cplus.met"
                                } else {
#line 1423 "cplus.met"
                                    tokenAhead = 0 ;
#line 1423 "cplus.met"
                                }
#line 1423 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1423 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1423 "cplus.met"
                            }
#line 1423 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1423 "cplus.met"
                            retTree=_ptRes0;
#line 1423 "cplus.met"
                        }
#line 1423 "cplus.met"
#line 1424 "cplus.met"
                        AnalyzeMode (retTree );
#line 1424 "cplus.met"
#line 1425 "cplus.met"
                        {
#line 1425 "cplus.met"
                            _retValue = retTree ;
#line 1425 "cplus.met"
                            goto directive_ret;
#line 1425 "cplus.met"
                            
#line 1425 "cplus.met"
                        }
#line 1425 "cplus.met"
#line 1425 "cplus.met"
                        break;
#line 1425 "cplus.met"
#line 1427 "cplus.met"
                    case PRAGMA_SIMPLIFY : 
#line 1427 "cplus.met"
                        tokenAhead = 0 ;
#line 1427 "cplus.met"
                        CommTerm();
#line 1427 "cplus.met"
#line 1428 "cplus.met"
#line 1429 "cplus.met"
                        {
#line 1429 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1429 "cplus.met"
                            _ptRes0= MakeTree(SIMPLIFY, 1);
#line 1429 "cplus.met"
                            {
#line 1429 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1429 "cplus.met"
                                _ptRes1= MakeTree(SIMPLIFY_VALUE, 1);
#line 1429 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1429 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1429 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1429 "cplus.met"
                                } else {
#line 1429 "cplus.met"
                                    tokenAhead = 0 ;
#line 1429 "cplus.met"
                                }
#line 1429 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1429 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1429 "cplus.met"
                            }
#line 1429 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1429 "cplus.met"
                            retTree=_ptRes0;
#line 1429 "cplus.met"
                        }
#line 1429 "cplus.met"
#line 1430 "cplus.met"
                        AnalyzeSimplify (retTree );
#line 1430 "cplus.met"
#line 1431 "cplus.met"
                        {
#line 1431 "cplus.met"
                            _retValue = retTree ;
#line 1431 "cplus.met"
                            goto directive_ret;
#line 1431 "cplus.met"
                            
#line 1431 "cplus.met"
                        }
#line 1431 "cplus.met"
#line 1431 "cplus.met"
                        break;
#line 1431 "cplus.met"
#line 1433 "cplus.met"
                    case PRAGMA_SINGLE_SWITCH_INDENT : 
#line 1433 "cplus.met"
                        tokenAhead = 0 ;
#line 1433 "cplus.met"
                        CommTerm();
#line 1433 "cplus.met"
#line 1434 "cplus.met"
#line 1435 "cplus.met"
                        {
#line 1435 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1435 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1435 "cplus.met"
                            {
#line 1435 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1435 "cplus.met"
                                _ptRes1= MakeTree(SINGLE_SWITCH_INDENT_VALUE, 1);
#line 1435 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1435 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1435 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1435 "cplus.met"
                                } else {
#line 1435 "cplus.met"
                                    tokenAhead = 0 ;
#line 1435 "cplus.met"
                                }
#line 1435 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1435 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1435 "cplus.met"
                            }
#line 1435 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1435 "cplus.met"
                            retTree=_ptRes0;
#line 1435 "cplus.met"
                        }
#line 1435 "cplus.met"
#line 1436 "cplus.met"
                        AnalyzeSingleSwitchIndent (retTree );
#line 1436 "cplus.met"
#line 1437 "cplus.met"
                        {
#line 1437 "cplus.met"
                            _retValue = retTree ;
#line 1437 "cplus.met"
                            goto directive_ret;
#line 1437 "cplus.met"
                            
#line 1437 "cplus.met"
                        }
#line 1437 "cplus.met"
#line 1437 "cplus.met"
                        break;
#line 1437 "cplus.met"
#line 1439 "cplus.met"
                    case PRAGMA_ASSIGN_ALIGN : 
#line 1439 "cplus.met"
                        tokenAhead = 0 ;
#line 1439 "cplus.met"
                        CommTerm();
#line 1439 "cplus.met"
#line 1440 "cplus.met"
#line 1441 "cplus.met"
                        {
#line 1441 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1441 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1441 "cplus.met"
                            {
#line 1441 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1441 "cplus.met"
                                _ptRes1= MakeTree(ASSIGN_ALIGN, 1);
#line 1441 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1441 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1441 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1441 "cplus.met"
                                } else {
#line 1441 "cplus.met"
                                    tokenAhead = 0 ;
#line 1441 "cplus.met"
                                }
#line 1441 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1441 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1441 "cplus.met"
                            }
#line 1441 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1441 "cplus.met"
                            retTree=_ptRes0;
#line 1441 "cplus.met"
                        }
#line 1441 "cplus.met"
#line 1442 "cplus.met"
                        AnalyzeAssignAlign (retTree );
#line 1442 "cplus.met"
#line 1443 "cplus.met"
                        {
#line 1443 "cplus.met"
                            _retValue = retTree ;
#line 1443 "cplus.met"
                            goto directive_ret;
#line 1443 "cplus.met"
                            
#line 1443 "cplus.met"
                        }
#line 1443 "cplus.met"
#line 1443 "cplus.met"
                        break;
#line 1443 "cplus.met"
#line 1445 "cplus.met"
                    case PRAGMA_DECL_ALIGN : 
#line 1445 "cplus.met"
                        tokenAhead = 0 ;
#line 1445 "cplus.met"
                        CommTerm();
#line 1445 "cplus.met"
#line 1446 "cplus.met"
#line 1447 "cplus.met"
                        {
#line 1447 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1447 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1447 "cplus.met"
                            {
#line 1447 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1447 "cplus.met"
                                _ptRes1= MakeTree(DECL_ALIGN, 1);
#line 1447 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1447 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1447 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1447 "cplus.met"
                                } else {
#line 1447 "cplus.met"
                                    tokenAhead = 0 ;
#line 1447 "cplus.met"
                                }
#line 1447 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1447 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1447 "cplus.met"
                            }
#line 1447 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1447 "cplus.met"
                            retTree=_ptRes0;
#line 1447 "cplus.met"
                        }
#line 1447 "cplus.met"
#line 1448 "cplus.met"
                        AnalyzeDeclAlign (retTree );
#line 1448 "cplus.met"
#line 1449 "cplus.met"
                        {
#line 1449 "cplus.met"
                            _retValue = retTree ;
#line 1449 "cplus.met"
                            goto directive_ret;
#line 1449 "cplus.met"
                            
#line 1449 "cplus.met"
                        }
#line 1449 "cplus.met"
#line 1449 "cplus.met"
                        break;
#line 1449 "cplus.met"
#line 1451 "cplus.met"
                    case PRAGMA_BRACE_ALIGN : 
#line 1451 "cplus.met"
                        tokenAhead = 0 ;
#line 1451 "cplus.met"
                        CommTerm();
#line 1451 "cplus.met"
#line 1452 "cplus.met"
#line 1453 "cplus.met"
                        {
#line 1453 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1453 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1453 "cplus.met"
                            {
#line 1453 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1453 "cplus.met"
                                _ptRes1= MakeTree(BRACE_ALIGN_VALUE, 1);
#line 1453 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1453 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1453 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1453 "cplus.met"
                                } else {
#line 1453 "cplus.met"
                                    tokenAhead = 0 ;
#line 1453 "cplus.met"
                                }
#line 1453 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1453 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1453 "cplus.met"
                            }
#line 1453 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1453 "cplus.met"
                            retTree=_ptRes0;
#line 1453 "cplus.met"
                        }
#line 1453 "cplus.met"
#line 1454 "cplus.met"
                        AnalyzeBraceAlign (retTree );
#line 1454 "cplus.met"
#line 1455 "cplus.met"
                        {
#line 1455 "cplus.met"
                            _retValue = retTree ;
#line 1455 "cplus.met"
                            goto directive_ret;
#line 1455 "cplus.met"
                            
#line 1455 "cplus.met"
                        }
#line 1455 "cplus.met"
#line 1455 "cplus.met"
                        break;
#line 1455 "cplus.met"
#line 1457 "cplus.met"
                    case PRAGMA_MARGIN : 
#line 1457 "cplus.met"
                        tokenAhead = 0 ;
#line 1457 "cplus.met"
                        CommTerm();
#line 1457 "cplus.met"
#line 1458 "cplus.met"
#line 1459 "cplus.met"
                        {
#line 1459 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1459 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1459 "cplus.met"
                            {
#line 1459 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1459 "cplus.met"
                                _ptRes1= MakeTree(MARGIN_VALUE, 1);
#line 1459 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1459 "cplus.met"
                                if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 1459 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"INTEGER")
#line 1459 "cplus.met"
                                } else {
#line 1459 "cplus.met"
                                    tokenAhead = 0 ;
#line 1459 "cplus.met"
                                }
#line 1459 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1459 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1459 "cplus.met"
                            }
#line 1459 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1459 "cplus.met"
                            retTree=_ptRes0;
#line 1459 "cplus.met"
                        }
#line 1459 "cplus.met"
#line 1460 "cplus.met"
                        AnalyzeMargin (retTree );
#line 1460 "cplus.met"
#line 1461 "cplus.met"
                        {
#line 1461 "cplus.met"
                            _retValue = retTree ;
#line 1461 "cplus.met"
                            goto directive_ret;
#line 1461 "cplus.met"
                            
#line 1461 "cplus.met"
                        }
#line 1461 "cplus.met"
#line 1461 "cplus.met"
                        break;
#line 1461 "cplus.met"
#line 1463 "cplus.met"
                    case PRAGMA_COMMENT_START : 
#line 1463 "cplus.met"
                        tokenAhead = 0 ;
#line 1463 "cplus.met"
                        CommTerm();
#line 1463 "cplus.met"
#line 1464 "cplus.met"
#line 1465 "cplus.met"
                        {
#line 1465 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1465 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1465 "cplus.met"
                            {
#line 1465 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1465 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_START, 1);
#line 1465 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1465 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1465 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1465 "cplus.met"
                                } else {
#line 1465 "cplus.met"
                                    tokenAhead = 0 ;
#line 1465 "cplus.met"
                                }
#line 1465 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1465 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1465 "cplus.met"
                            }
#line 1465 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1465 "cplus.met"
                            retTree=_ptRes0;
#line 1465 "cplus.met"
                        }
#line 1465 "cplus.met"
#line 1466 "cplus.met"
                        AnalyzeComment (retTree );
#line 1466 "cplus.met"
#line 1467 "cplus.met"
                        {
#line 1467 "cplus.met"
                            _retValue = retTree ;
#line 1467 "cplus.met"
                            goto directive_ret;
#line 1467 "cplus.met"
                            
#line 1467 "cplus.met"
                        }
#line 1467 "cplus.met"
#line 1467 "cplus.met"
                        break;
#line 1467 "cplus.met"
#line 1469 "cplus.met"
                    case PRAGMA_COMMENT_MIDDLE : 
#line 1469 "cplus.met"
                        tokenAhead = 0 ;
#line 1469 "cplus.met"
                        CommTerm();
#line 1469 "cplus.met"
#line 1470 "cplus.met"
#line 1471 "cplus.met"
                        {
#line 1471 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1471 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1471 "cplus.met"
                            {
#line 1471 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1471 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_MIDDLE, 1);
#line 1471 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1471 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1471 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1471 "cplus.met"
                                } else {
#line 1471 "cplus.met"
                                    tokenAhead = 0 ;
#line 1471 "cplus.met"
                                }
#line 1471 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1471 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1471 "cplus.met"
                            }
#line 1471 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1471 "cplus.met"
                            retTree=_ptRes0;
#line 1471 "cplus.met"
                        }
#line 1471 "cplus.met"
#line 1472 "cplus.met"
                        AnalyzeComment (retTree );
#line 1472 "cplus.met"
#line 1473 "cplus.met"
                        {
#line 1473 "cplus.met"
                            _retValue = retTree ;
#line 1473 "cplus.met"
                            goto directive_ret;
#line 1473 "cplus.met"
                            
#line 1473 "cplus.met"
                        }
#line 1473 "cplus.met"
#line 1473 "cplus.met"
                        break;
#line 1473 "cplus.met"
#line 1475 "cplus.met"
                    case PRAGMA_COMMENT_END : 
#line 1475 "cplus.met"
                        tokenAhead = 0 ;
#line 1475 "cplus.met"
                        CommTerm();
#line 1475 "cplus.met"
#line 1476 "cplus.met"
#line 1477 "cplus.met"
                        {
#line 1477 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1477 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1477 "cplus.met"
                            {
#line 1477 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1477 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_END, 1);
#line 1477 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1477 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1477 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1477 "cplus.met"
                                } else {
#line 1477 "cplus.met"
                                    tokenAhead = 0 ;
#line 1477 "cplus.met"
                                }
#line 1477 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1477 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1477 "cplus.met"
                            }
#line 1477 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1477 "cplus.met"
                            retTree=_ptRes0;
#line 1477 "cplus.met"
                        }
#line 1477 "cplus.met"
#line 1478 "cplus.met"
                        AnalyzeComment (retTree );
#line 1478 "cplus.met"
#line 1479 "cplus.met"
                        {
#line 1479 "cplus.met"
                            _retValue = retTree ;
#line 1479 "cplus.met"
                            goto directive_ret;
#line 1479 "cplus.met"
                            
#line 1479 "cplus.met"
                        }
#line 1479 "cplus.met"
#line 1479 "cplus.met"
                        break;
#line 1479 "cplus.met"
#line 1481 "cplus.met"
                    case PRAGMA_COMMENT_PLUS : 
#line 1481 "cplus.met"
                        tokenAhead = 0 ;
#line 1481 "cplus.met"
                        CommTerm();
#line 1481 "cplus.met"
#line 1482 "cplus.met"
#line 1483 "cplus.met"
                        {
#line 1483 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1483 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1483 "cplus.met"
                            {
#line 1483 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1483 "cplus.met"
                                _ptRes1= MakeTree(COMMENT_PLUS, 1);
#line 1483 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1483 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1483 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1483 "cplus.met"
                                } else {
#line 1483 "cplus.met"
                                    tokenAhead = 0 ;
#line 1483 "cplus.met"
                                }
#line 1483 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1483 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1483 "cplus.met"
                            }
#line 1483 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1483 "cplus.met"
                            retTree=_ptRes0;
#line 1483 "cplus.met"
                        }
#line 1483 "cplus.met"
#line 1484 "cplus.met"
                        AnalyzeComment (retTree );
#line 1484 "cplus.met"
#line 1485 "cplus.met"
                        {
#line 1485 "cplus.met"
                            _retValue = retTree ;
#line 1485 "cplus.met"
                            goto directive_ret;
#line 1485 "cplus.met"
                            
#line 1485 "cplus.met"
                        }
#line 1485 "cplus.met"
#line 1485 "cplus.met"
                        break;
#line 1485 "cplus.met"
#line 1487 "cplus.met"
                    case PRAGMA_INDENT_FUNCTION_TYPE : 
#line 1487 "cplus.met"
                        tokenAhead = 0 ;
#line 1487 "cplus.met"
                        CommTerm();
#line 1487 "cplus.met"
#line 1488 "cplus.met"
#line 1489 "cplus.met"
                        {
#line 1489 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1489 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1489 "cplus.met"
                            {
#line 1489 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1489 "cplus.met"
                                _ptRes1= MakeTree(INDENT_FUNCTION_TYPE, 1);
#line 1489 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1489 "cplus.met"
                                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1489 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"IDENT")
#line 1489 "cplus.met"
                                } else {
#line 1489 "cplus.met"
                                    tokenAhead = 0 ;
#line 1489 "cplus.met"
                                }
#line 1489 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1489 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1489 "cplus.met"
                            }
#line 1489 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1489 "cplus.met"
                            retTree=_ptRes0;
#line 1489 "cplus.met"
                        }
#line 1489 "cplus.met"
#line 1490 "cplus.met"
                        AnalyzeIndentFunctionType (retTree );
#line 1490 "cplus.met"
#line 1491 "cplus.met"
                        {
#line 1491 "cplus.met"
                            _retValue = retTree ;
#line 1491 "cplus.met"
                            goto directive_ret;
#line 1491 "cplus.met"
                            
#line 1491 "cplus.met"
                        }
#line 1491 "cplus.met"
#line 1491 "cplus.met"
                        break;
#line 1491 "cplus.met"
#line 1493 "cplus.met"
                    case PRAGMA_FUNC_HEADER : 
#line 1493 "cplus.met"
                        tokenAhead = 0 ;
#line 1493 "cplus.met"
                        CommTerm();
#line 1493 "cplus.met"
#line 1494 "cplus.met"
#line 1495 "cplus.met"
                        {
#line 1495 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1495 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1495 "cplus.met"
                            {
#line 1495 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1495 "cplus.met"
                                _ptRes1= MakeTree(FUNC_HEADER, 1);
#line 1495 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1495 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1495 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
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
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1495 "cplus.met"
                            retTree=_ptRes0;
#line 1495 "cplus.met"
                        }
#line 1495 "cplus.met"
#line 1496 "cplus.met"
                        AnalyzeFuncHeader (retTree );
#line 1496 "cplus.met"
#line 1497 "cplus.met"
                        {
#line 1497 "cplus.met"
                            _retValue = retTree ;
#line 1497 "cplus.met"
                            goto directive_ret;
#line 1497 "cplus.met"
                            
#line 1497 "cplus.met"
                        }
#line 1497 "cplus.met"
#line 1497 "cplus.met"
                        break;
#line 1497 "cplus.met"
#line 1499 "cplus.met"
                    case PRAGMA_PARAMETERS : 
#line 1499 "cplus.met"
                        tokenAhead = 0 ;
#line 1499 "cplus.met"
                        CommTerm();
#line 1499 "cplus.met"
#line 1500 "cplus.met"
#line 1501 "cplus.met"
                        {
#line 1501 "cplus.met"
                            PPTREE _ptTree0=0,_ptRes0=0;
#line 1501 "cplus.met"
                            _ptRes0= MakeTree(CONFIG, 1);
#line 1501 "cplus.met"
                            {
#line 1501 "cplus.met"
                                PPTREE _ptTree1=0,_ptRes1=0;
#line 1501 "cplus.met"
                                _ptRes1= MakeTree(PARAMETERS, 1);
#line 1501 "cplus.met"
                                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1501 "cplus.met"
                                if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 1501 "cplus.met"
                                    MulFreeTree(11,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                    TOKEN_EXIT(directive_exit,"STRING")
#line 1501 "cplus.met"
                                } else {
#line 1501 "cplus.met"
                                    tokenAhead = 0 ;
#line 1501 "cplus.met"
                                }
#line 1501 "cplus.met"
                                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1501 "cplus.met"
                                _ptTree0=_ptRes1;
#line 1501 "cplus.met"
                            }
#line 1501 "cplus.met"
                            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1501 "cplus.met"
                            retTree=_ptRes0;
#line 1501 "cplus.met"
                        }
#line 1501 "cplus.met"
#line 1502 "cplus.met"
                        AnalyzeParameters (retTree );
#line 1502 "cplus.met"
#line 1503 "cplus.met"
                        {
#line 1503 "cplus.met"
                            _retValue = retTree ;
#line 1503 "cplus.met"
                            goto directive_ret;
#line 1503 "cplus.met"
                            
#line 1503 "cplus.met"
                        }
#line 1503 "cplus.met"
#line 1503 "cplus.met"
                        break;
#line 1503 "cplus.met"
#line 1505 "cplus.met"
                    default : 
#line 1505 "cplus.met"
#line 1505 "cplus.met"
                        {
#line 1505 "cplus.met"
                            PPTREE _ptTree0=0;
#line 1505 "cplus.met"
                            if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 1505 "cplus.met"
                                MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                                PROG_EXIT(directive_exit,"directive")
#line 1505 "cplus.met"
                            }
#line 1505 "cplus.met"
                            _retValue =_ptTree0;
#line 1505 "cplus.met"
                            goto directive_ret;
#line 1505 "cplus.met"
                        }
#line 1505 "cplus.met"
                        break;
#line 1505 "cplus.met"
                }
#line 1505 "cplus.met"
#line 1505 "cplus.met"
            } else 
#line 1505 "cplus.met"
#line 1510 "cplus.met"
            if((NPUSH_CALL_VERIF(_Tak(range_pragma), 128, cplus))){
#line 1510 "cplus.met"
#line 1509 "cplus.met"
#line 1510 "cplus.met"
                {
#line 1510 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1510 "cplus.met"
                    {
#line 1510 "cplus.met"
                        PPTREE _ptTree1=0,_ptRes1=0;
#line 1510 "cplus.met"
                        _ptRes1= MakeTree(PRAGMA, 1);
#line 1510 "cplus.met"
                        (tokenAhead == 8|| (LexPragma(),TRACE_LEX(1)));
#line 1510 "cplus.met"
                        if ( ! TERM_OR_META(PRAGMA_CONTENT,"PRAGMA_CONTENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1510 "cplus.met"
                            MulFreeTree(10,_ptRes1,_ptTree1,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                            TOKEN_EXIT(directive_exit,"PRAGMA_CONTENT")
#line 1510 "cplus.met"
                        } else {
#line 1510 "cplus.met"
                            tokenAhead = 0 ;
#line 1510 "cplus.met"
                        }
#line 1510 "cplus.met"
                        ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1510 "cplus.met"
                        _ptTree0=_ptRes1;
#line 1510 "cplus.met"
                    }
#line 1510 "cplus.met"
                    _retValue =_ptTree0;
#line 1510 "cplus.met"
                    goto directive_ret;
#line 1510 "cplus.met"
                }
#line 1510 "cplus.met"
#line 1510 "cplus.met"
            } else 
#line 1510 "cplus.met"
#line 1514 "cplus.met"
            if (1) {
#line 1514 "cplus.met"
#line 1513 "cplus.met"
#line 1514 "cplus.met"
                {
#line 1514 "cplus.met"
                    PPTREE _ptTree0=0;
#line 1514 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(other_config)(error_free), 108, cplus))== (PPTREE) -1 ) {
#line 1514 "cplus.met"
                        MulFreeTree(8,_ptTree0,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
                        PROG_EXIT(directive_exit,"directive")
#line 1514 "cplus.met"
                    }
#line 1514 "cplus.met"
                    _retValue =_ptTree0;
#line 1514 "cplus.met"
                    goto directive_ret;
#line 1514 "cplus.met"
                }
#line 1514 "cplus.met"
#line 1514 "cplus.met"
            } else 
#line 1514 "cplus.met"
             ;
#line 1514 "cplus.met"
#line 1514 "cplus.met"
            break;
#line 1514 "cplus.met"
        default :
#line 1514 "cplus.met"
            MulFreeTree(7,_addlist1,_addlist2,_addlist3,exp,interTree,list,retTree);
            CASE_EXIT(directive_exit,"either DEFINE_DIR or INCLUDE_DIR or LINE_DIR or LINE_REFERENCE_DIR or UNDEF_DIR or ERROR_DIR or PRAGMA_DIR")
#line 1514 "cplus.met"
            break;
#line 1514 "cplus.met"
    }
#line 1514 "cplus.met"
#line 1514 "cplus.met"
#line 1518 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1518 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1518 "cplus.met"
keepCarriage =  _oldkeepCarriage;
#line 1518 "cplus.met"
keepAll =  _oldkeepAll;
#line 1518 "cplus.met"
return((PPTREE) 0);
#line 1518 "cplus.met"

#line 1518 "cplus.met"
directive_exit :
#line 1518 "cplus.met"

#line 1518 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_EXIT,(PPTREE)0);
#line 1518 "cplus.met"
    _funcLevel--;
#line 1518 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1518 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1518 "cplus.met"
    return((PPTREE) -1) ;
#line 1518 "cplus.met"

#line 1518 "cplus.met"
directive_ret :
#line 1518 "cplus.met"
    
#line 1518 "cplus.met"
    _Debug = TRACE_RULE("directive",TRACE_RETURN,_retValue);
#line 1518 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1518 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1518 "cplus.met"
    keepCarriage =  _oldkeepCarriage;
#line 1518 "cplus.met"
    keepAll =  _oldkeepAll;
#line 1518 "cplus.met"
    return _retValue ;
#line 1518 "cplus.met"
}
#line 1518 "cplus.met"

#line 1518 "cplus.met"
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
#line 1813 "cplus.met"
PPTREE cplus::enum_declarator ( int error_free)
#line 1813 "cplus.met"
{
#line 1813 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1813 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1813 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1813 "cplus.met"
    int _Debug = TRACE_RULE("enum_declarator",TRACE_ENTER,(PPTREE)0);
#line 1813 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1813 "cplus.met"
#line 1813 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 1813 "cplus.met"
#line 1813 "cplus.met"
    PPTREE retTree = (PPTREE) 0,valTree = (PPTREE) 0,list = (PPTREE) 0,classMarker = (PPTREE) 0;
#line 1813 "cplus.met"
#line 1815 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1815 "cplus.met"
    if (  !SEE_TOKEN( ENUM,"enum") || !(CommTerm(),1)) {
#line 1815 "cplus.met"
        MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
        TOKEN_EXIT(enum_declarator_exit,"enum")
#line 1815 "cplus.met"
    } else {
#line 1815 "cplus.met"
        tokenAhead = 0 ;
#line 1815 "cplus.met"
    }
#line 1815 "cplus.met"
#line 1816 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CLASS,"class") && (tokenAhead = 0,CommTerm(),1)){
#line 1816 "cplus.met"
#line 1817 "cplus.met"
#line 1818 "cplus.met"
        {
#line 1818 "cplus.met"
            PPTREE _ptRes0=0;
#line 1818 "cplus.met"
            _ptRes0= MakeTree(ENUM_CLASS, 0);
#line 1818 "cplus.met"
            classMarker=_ptRes0;
#line 1818 "cplus.met"
        }
#line 1818 "cplus.met"
#line 1818 "cplus.met"
#line 1818 "cplus.met"
    }
#line 1818 "cplus.met"
#line 1820 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( IDENT,"IDENT")){
#line 1820 "cplus.met"
#line 1821 "cplus.met"
        {
#line 1821 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 1821 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1821 "cplus.met"
            {
#line 1821 "cplus.met"
                PPTREE _ptTree1=0,_ptRes1=0;
#line 1821 "cplus.met"
                _ptRes1= MakeTree(IDENT, 1);
#line 1821 "cplus.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1821 "cplus.met"
                if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1821 "cplus.met"
                    MulFreeTree(9,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                    TOKEN_EXIT(enum_declarator_exit,"IDENT")
#line 1821 "cplus.met"
                } else {
#line 1821 "cplus.met"
                    tokenAhead = 0 ;
#line 1821 "cplus.met"
                }
#line 1821 "cplus.met"
                ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1821 "cplus.met"
                _ptTree0=_ptRes1;
#line 1821 "cplus.met"
            }
#line 1821 "cplus.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1821 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1821 "cplus.met"
            retTree=_ptRes0;
#line 1821 "cplus.met"
        }
#line 1821 "cplus.met"
    } else {
#line 1821 "cplus.met"
#line 1823 "cplus.met"
        {
#line 1823 "cplus.met"
            PPTREE _ptRes0=0;
#line 1823 "cplus.met"
            _ptRes0= MakeTree(ENUM, 4);
#line 1823 "cplus.met"
            ReplaceTree(_ptRes0, 3, classMarker );
#line 1823 "cplus.met"
            retTree=_ptRes0;
#line 1823 "cplus.met"
        }
#line 1823 "cplus.met"
    }
#line 1823 "cplus.met"
#line 1824 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(DPOI,":") && (tokenAhead = 0,CommTerm(),1)){
#line 1824 "cplus.met"
#line 1825 "cplus.met"
#line 1826 "cplus.met"
        {
#line 1826 "cplus.met"
            PPTREE _ptTree0=0;
#line 1826 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(simple_type)(error_free), 135, cplus))== (PPTREE) -1 ) {
#line 1826 "cplus.met"
                MulFreeTree(6,_ptTree0,_addlist1,classMarker,list,retTree,valTree);
                PROG_EXIT(enum_declarator_exit,"enum_declarator")
#line 1826 "cplus.met"
            }
#line 1826 "cplus.met"
            ReplaceTree(retTree , 4 , _ptTree0);
#line 1826 "cplus.met"
        }
#line 1826 "cplus.met"
#line 1826 "cplus.met"
#line 1826 "cplus.met"
    }
#line 1826 "cplus.met"
#line 1828 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(AOUV,"{") && (tokenAhead = 0,CommTerm(),1)){
#line 1828 "cplus.met"
#line 1829 "cplus.met"
#line 1829 "cplus.met"
        _addlist1 = list ;
#line 1829 "cplus.met"
#line 1830 "cplus.met"
        do {
#line 1830 "cplus.met"
#line 1831 "cplus.met"
            if (NPUSH_CALL_AFF_VERIF(valTree = ,_Tak(enum_val), 59, cplus)){
#line 1831 "cplus.met"
#line 1832 "cplus.met"
#line 1832 "cplus.met"
                _addlist1 =AddList(_addlist1 ,valTree );
#line 1832 "cplus.met"
#line 1832 "cplus.met"
                if (list){
#line 1832 "cplus.met"
#line 1832 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 1832 "cplus.met"
                } else {
#line 1832 "cplus.met"
#line 1832 "cplus.met"
                    list = _addlist1 ;
#line 1832 "cplus.met"
                }
#line 1832 "cplus.met"
            } else {
#line 1832 "cplus.met"
#line 1834 "cplus.met"
                
#line 1834 "cplus.met"
                MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
                LEX_EXIT ("",0);
#line 1834 "cplus.met"
                goto enum_declarator_exit;
#line 1834 "cplus.met"
            }
#line 1834 "cplus.met"
#line 1834 "cplus.met"
#line 1835 "cplus.met"
        } while ( !(((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( AFER,"}")) || 
#line 1835 "cplus.met"
                   (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 1835 "cplus.met"
#line 1836 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1836 "cplus.met"
        if (  !SEE_TOKEN( AFER,"}") || !(CommTerm(),1)) {
#line 1836 "cplus.met"
            MulFreeTree(5,_addlist1,classMarker,list,retTree,valTree);
            TOKEN_EXIT(enum_declarator_exit,"}")
#line 1836 "cplus.met"
        } else {
#line 1836 "cplus.met"
            tokenAhead = 0 ;
#line 1836 "cplus.met"
        }
#line 1836 "cplus.met"
#line 1837 "cplus.met"
        ReplaceTree(retTree ,2 ,list );
#line 1837 "cplus.met"
#line 1837 "cplus.met"
#line 1837 "cplus.met"
    }
#line 1837 "cplus.met"
#line 1839 "cplus.met"
    {
#line 1839 "cplus.met"
        _retValue = retTree ;
#line 1839 "cplus.met"
        goto enum_declarator_ret;
#line 1839 "cplus.met"
        
#line 1839 "cplus.met"
    }
#line 1839 "cplus.met"
#line 1839 "cplus.met"
#line 1839 "cplus.met"

#line 1840 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1840 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1840 "cplus.met"
return((PPTREE) 0);
#line 1840 "cplus.met"

#line 1840 "cplus.met"
enum_declarator_exit :
#line 1840 "cplus.met"

#line 1840 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_EXIT,(PPTREE)0);
#line 1840 "cplus.met"
    _funcLevel--;
#line 1840 "cplus.met"
    return((PPTREE) -1) ;
#line 1840 "cplus.met"

#line 1840 "cplus.met"
enum_declarator_ret :
#line 1840 "cplus.met"
    
#line 1840 "cplus.met"
    _Debug = TRACE_RULE("enum_declarator",TRACE_RETURN,_retValue);
#line 1840 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1840 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1840 "cplus.met"
    return _retValue ;
#line 1840 "cplus.met"
}
#line 1840 "cplus.met"

#line 1840 "cplus.met"
#line 1803 "cplus.met"
PPTREE cplus::enum_val ( int error_free)
#line 1803 "cplus.met"
{
#line 1803 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 1803 "cplus.met"
    int _value,_nbPre = 0 ;
#line 1803 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 1803 "cplus.met"
    int _Debug = TRACE_RULE("enum_val",TRACE_ENTER,(PPTREE)0);
#line 1803 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 1803 "cplus.met"
#line 1803 "cplus.met"
    PPTREE valTree = (PPTREE) 0;
#line 1803 "cplus.met"
#line 1805 "cplus.met"
    {
#line 1805 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 1805 "cplus.met"
        _ptRes0= MakeTree(TYP_AFF, 2);
#line 1805 "cplus.met"
        {
#line 1805 "cplus.met"
            PPTREE _ptTree1=0,_ptRes1=0;
#line 1805 "cplus.met"
            _ptRes1= MakeTree(IDENT, 1);
#line 1805 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 1805 "cplus.met"
            if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 1805 "cplus.met"
                MulFreeTree(5,_ptRes1,_ptTree1,_ptRes0,_ptTree0,valTree);
                TOKEN_EXIT(enum_val_exit,"IDENT")
#line 1805 "cplus.met"
            } else {
#line 1805 "cplus.met"
                tokenAhead = 0 ;
#line 1805 "cplus.met"
            }
#line 1805 "cplus.met"
            ReplaceTree(_ptRes1, 1, _ptTree1);
#line 1805 "cplus.met"
            _ptTree0=_ptRes1;
#line 1805 "cplus.met"
        }
#line 1805 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 1805 "cplus.met"
        valTree=_ptRes0;
#line 1805 "cplus.met"
    }
#line 1805 "cplus.met"
#line 1806 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGAL,"=") && (tokenAhead = 0,CommTerm(),1)){
#line 1806 "cplus.met"
#line 1807 "cplus.met"
        {
#line 1807 "cplus.met"
            PPTREE _ptTree0=0;
#line 1807 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 19, cplus))== (PPTREE) -1 ) {
#line 1807 "cplus.met"
                MulFreeTree(2,_ptTree0,valTree);
                PROG_EXIT(enum_val_exit,"enum_val")
#line 1807 "cplus.met"
            }
#line 1807 "cplus.met"
            ReplaceTree(valTree , 2 , _ptTree0);
#line 1807 "cplus.met"
        }
#line 1807 "cplus.met"
#line 1807 "cplus.met"
    }
#line 1807 "cplus.met"
#line 1808 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)){
#line 1808 "cplus.met"
#line 1808 "cplus.met"
    }
#line 1808 "cplus.met"
#line 1810 "cplus.met"
    {
#line 1810 "cplus.met"
        _retValue = valTree ;
#line 1810 "cplus.met"
        goto enum_val_ret;
#line 1810 "cplus.met"
        
#line 1810 "cplus.met"
    }
#line 1810 "cplus.met"
#line 1810 "cplus.met"
#line 1810 "cplus.met"

#line 1811 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1811 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 1811 "cplus.met"
return((PPTREE) 0);
#line 1811 "cplus.met"

#line 1811 "cplus.met"
enum_val_exit :
#line 1811 "cplus.met"

#line 1811 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_EXIT,(PPTREE)0);
#line 1811 "cplus.met"
    _funcLevel--;
#line 1811 "cplus.met"
    return((PPTREE) -1) ;
#line 1811 "cplus.met"

#line 1811 "cplus.met"
enum_val_ret :
#line 1811 "cplus.met"
    
#line 1811 "cplus.met"
    _Debug = TRACE_RULE("enum_val",TRACE_RETURN,_retValue);
#line 1811 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 1811 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 1811 "cplus.met"
    return _retValue ;
#line 1811 "cplus.met"
}
#line 1811 "cplus.met"

#line 1811 "cplus.met"
#line 2790 "cplus.met"
PPTREE cplus::equality_expression ( int error_free)
#line 2790 "cplus.met"
{
#line 2790 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2790 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2790 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2790 "cplus.met"
    int _Debug = TRACE_RULE("equality_expression",TRACE_ENTER,(PPTREE)0);
#line 2790 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2790 "cplus.met"
#line 2790 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2790 "cplus.met"
#line 2792 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(relational_expression)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2792 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2792 "cplus.met"
    }
#line 2792 "cplus.met"
#line 2793 "cplus.met"
    while (((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EGALEGAL,"==")) || 
#line 2793 "cplus.met"
          ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( EXCLEGAL,"!="))) { 
#line 2793 "cplus.met"
#line 2794 "cplus.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(EGALEGAL,"==") && (tokenAhead = 0,CommTerm(),1)){
#line 2794 "cplus.met"
#line 2795 "cplus.met"
            {
#line 2795 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2795 "cplus.met"
                _ptRes0= MakeTree(EQU, 2);
#line 2795 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2795 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2795 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2795 "cplus.met"
                }
#line 2795 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2795 "cplus.met"
                expTree=_ptRes0;
#line 2795 "cplus.met"
            }
#line 2795 "cplus.met"
        } else {
#line 2795 "cplus.met"
#line 2797 "cplus.met"
#line 2798 "cplus.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2798 "cplus.met"
            if (  !SEE_TOKEN( EXCLEGAL,"!=") || !(CommTerm(),1)) {
#line 2798 "cplus.met"
                MulFreeTree(1,expTree);
                TOKEN_EXIT(equality_expression_exit,"!=")
#line 2798 "cplus.met"
            } else {
#line 2798 "cplus.met"
                tokenAhead = 0 ;
#line 2798 "cplus.met"
            }
#line 2798 "cplus.met"
#line 2799 "cplus.met"
            {
#line 2799 "cplus.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 2799 "cplus.met"
                _ptRes0= MakeTree(NEQU, 2);
#line 2799 "cplus.met"
                ReplaceTree(_ptRes0, 1, expTree );
#line 2799 "cplus.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(relational_expression)(error_free), 129, cplus))== (PPTREE) -1 ) {
#line 2799 "cplus.met"
                    MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                    PROG_EXIT(equality_expression_exit,"equality_expression")
#line 2799 "cplus.met"
                }
#line 2799 "cplus.met"
                ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2799 "cplus.met"
                expTree=_ptRes0;
#line 2799 "cplus.met"
            }
#line 2799 "cplus.met"
#line 2799 "cplus.met"
        }
#line 2799 "cplus.met"
    } 
#line 2799 "cplus.met"
#line 2801 "cplus.met"
    {
#line 2801 "cplus.met"
        _retValue = expTree ;
#line 2801 "cplus.met"
        goto equality_expression_ret;
#line 2801 "cplus.met"
        
#line 2801 "cplus.met"
    }
#line 2801 "cplus.met"
#line 2801 "cplus.met"
#line 2801 "cplus.met"

#line 2802 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2802 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2802 "cplus.met"
return((PPTREE) 0);
#line 2802 "cplus.met"

#line 2802 "cplus.met"
equality_expression_exit :
#line 2802 "cplus.met"

#line 2802 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_EXIT,(PPTREE)0);
#line 2802 "cplus.met"
    _funcLevel--;
#line 2802 "cplus.met"
    return((PPTREE) -1) ;
#line 2802 "cplus.met"

#line 2802 "cplus.met"
equality_expression_ret :
#line 2802 "cplus.met"
    
#line 2802 "cplus.met"
    _Debug = TRACE_RULE("equality_expression",TRACE_RETURN,_retValue);
#line 2802 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2802 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2802 "cplus.met"
    return _retValue ;
#line 2802 "cplus.met"
}
#line 2802 "cplus.met"

#line 2802 "cplus.met"
#line 2040 "cplus.met"
PPTREE cplus::exception ( int error_free)
#line 2040 "cplus.met"
{
#line 2040 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2040 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2040 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2040 "cplus.met"
    int _Debug = TRACE_RULE("exception",TRACE_ENTER,(PPTREE)0);
#line 2040 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2040 "cplus.met"
#line 2040 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2040 "cplus.met"
#line 2040 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0;
#line 2040 "cplus.met"
#line 2042 "cplus.met"
    (tokenAhead == 13|| (specific(),TRACE_LEX(1)));
#line 2042 "cplus.met"
    if ( ! TERM_OR_META(TRY_UPPER,"TRY_UPPER") || !(CommTerm(),1)) {
#line 2042 "cplus.met"
        MulFreeTree(3,_addlist1,list,retTree);
        TOKEN_EXIT(exception_exit,"TRY_UPPER")
#line 2042 "cplus.met"
    } else {
#line 2042 "cplus.met"
        tokenAhead = 0 ;
#line 2042 "cplus.met"
    }
#line 2042 "cplus.met"
#line 2043 "cplus.met"
    {
#line 2043 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2043 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION, 2);
#line 2043 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2043 "cplus.met"
            MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,list,retTree);
            PROG_EXIT(exception_exit,"exception")
#line 2043 "cplus.met"
        }
#line 2043 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2043 "cplus.met"
        retTree=_ptRes0;
#line 2043 "cplus.met"
    }
#line 2043 "cplus.met"
#line 2043 "cplus.met"
    _addlist1 = list ;
#line 2043 "cplus.met"
#line 2044 "cplus.met"
    do {
#line 2044 "cplus.met"
#line 2045 "cplus.met"
        {
#line 2045 "cplus.met"
            PPTREE _ptTree0=0;
#line 2045 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(catch_unit)(error_free), 26, cplus))== (PPTREE) -1 ) {
#line 2045 "cplus.met"
                MulFreeTree(4,_ptTree0,_addlist1,list,retTree);
                PROG_EXIT(exception_exit,"exception")
#line 2045 "cplus.met"
            }
#line 2045 "cplus.met"
            _addlist1 =AddList(_addlist1 , _ptTree0);
#line 2045 "cplus.met"
        }
#line 2045 "cplus.met"
#line 2045 "cplus.met"
        if (list){
#line 2045 "cplus.met"
#line 2045 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2045 "cplus.met"
        } else {
#line 2045 "cplus.met"
#line 2045 "cplus.met"
            list = _addlist1 ;
#line 2045 "cplus.met"
        }
#line 2045 "cplus.met"
#line 2045 "cplus.met"
#line 2046 "cplus.met"
    } while ( !((((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH,"END_CATCH") && (tokenAhead = 0,CommTerm(),1)) || 
#line 2046 "cplus.met"
                ((tokenAhead == 13|| (specific(),TRACE_LEX(1)))&&TERM_OR_META(END_CATCH_ALL,"END_CATCH_ALL") && (tokenAhead = 0,CommTerm(),1))) || 
#line 2046 "cplus.met"
               (! ((tokenAhead && tokenAhead != -1)|| (c != EOF))))) ;
#line 2046 "cplus.met"
#line 2047 "cplus.met"
    {
#line 2047 "cplus.met"
        PPTREE _ptTree0=0;
#line 2047 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2047 "cplus.met"
        _retValue =_ptTree0;
#line 2047 "cplus.met"
        goto exception_ret;
#line 2047 "cplus.met"
    }
#line 2047 "cplus.met"
#line 2047 "cplus.met"
#line 2047 "cplus.met"

#line 2048 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2048 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2048 "cplus.met"
return((PPTREE) 0);
#line 2048 "cplus.met"

#line 2048 "cplus.met"
exception_exit :
#line 2048 "cplus.met"

#line 2048 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_EXIT,(PPTREE)0);
#line 2048 "cplus.met"
    _funcLevel--;
#line 2048 "cplus.met"
    return((PPTREE) -1) ;
#line 2048 "cplus.met"

#line 2048 "cplus.met"
exception_ret :
#line 2048 "cplus.met"
    
#line 2048 "cplus.met"
    _Debug = TRACE_RULE("exception",TRACE_RETURN,_retValue);
#line 2048 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2048 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2048 "cplus.met"
    return _retValue ;
#line 2048 "cplus.met"
}
#line 2048 "cplus.met"

#line 2048 "cplus.met"
#line 2071 "cplus.met"
PPTREE cplus::exception_ansi ( int error_free)
#line 2071 "cplus.met"
{
#line 2071 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2071 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2071 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2071 "cplus.met"
    int _Debug = TRACE_RULE("exception_ansi",TRACE_ENTER,(PPTREE)0);
#line 2071 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2071 "cplus.met"
#line 2071 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 2071 "cplus.met"
#line 2071 "cplus.met"
    PPTREE retTree = (PPTREE) 0,list = (PPTREE) 0,elem = (PPTREE) 0;
#line 2071 "cplus.met"
#line 2073 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 2073 "cplus.met"
    if (  !SEE_TOKEN( TRY,"try") || !(CommTerm(),1)) {
#line 2073 "cplus.met"
        MulFreeTree(4,_addlist1,elem,list,retTree);
        TOKEN_EXIT(exception_ansi_exit,"try")
#line 2073 "cplus.met"
    } else {
#line 2073 "cplus.met"
        tokenAhead = 0 ;
#line 2073 "cplus.met"
    }
#line 2073 "cplus.met"
#line 2074 "cplus.met"
    {
#line 2074 "cplus.met"
        PPTREE _ptTree0=0,_ptRes0=0;
#line 2074 "cplus.met"
        _ptRes0= MakeTree(EXCEPTION_ANSI, 2);
#line 2074 "cplus.met"
        if ( (_ptTree0=NQUICK_CALL(_Tak(compound_statement)(error_free), 31, cplus))== (PPTREE) -1 ) {
#line 2074 "cplus.met"
            MulFreeTree(6,_ptRes0,_ptTree0,_addlist1,elem,list,retTree);
            PROG_EXIT(exception_ansi_exit,"exception_ansi")
#line 2074 "cplus.met"
        }
#line 2074 "cplus.met"
        ReplaceTree(_ptRes0, 1, _ptTree0);
#line 2074 "cplus.met"
        retTree=_ptRes0;
#line 2074 "cplus.met"
    }
#line 2074 "cplus.met"
#line 2074 "cplus.met"
    _addlist1 = list ;
#line 2074 "cplus.met"
#line 2075 "cplus.met"
    while (NPUSH_CALL_AFF_VERIF(elem = ,_Tak(catch_unit_ansi), 27, cplus)) { 
#line 2075 "cplus.met"
#line 2076 "cplus.met"
#line 2076 "cplus.met"
        _addlist1 =AddList(_addlist1 ,elem );
#line 2076 "cplus.met"
#line 2076 "cplus.met"
        if (list){
#line 2076 "cplus.met"
#line 2076 "cplus.met"
            _addlist1 = SonTree (_addlist1 ,2 );
#line 2076 "cplus.met"
        } else {
#line 2076 "cplus.met"
#line 2076 "cplus.met"
            list = _addlist1 ;
#line 2076 "cplus.met"
        }
#line 2076 "cplus.met"
    } 
#line 2076 "cplus.met"
#line 2077 "cplus.met"
    {
#line 2077 "cplus.met"
        PPTREE _ptTree0=0;
#line 2077 "cplus.met"
        _ptTree0=ReplaceTree(retTree ,2 ,list );
#line 2077 "cplus.met"
        _retValue =_ptTree0;
#line 2077 "cplus.met"
        goto exception_ansi_ret;
#line 2077 "cplus.met"
    }
#line 2077 "cplus.met"
#line 2077 "cplus.met"
#line 2077 "cplus.met"

#line 2078 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2078 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2078 "cplus.met"
return((PPTREE) 0);
#line 2078 "cplus.met"

#line 2078 "cplus.met"
exception_ansi_exit :
#line 2078 "cplus.met"

#line 2078 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_EXIT,(PPTREE)0);
#line 2078 "cplus.met"
    _funcLevel--;
#line 2078 "cplus.met"
    return((PPTREE) -1) ;
#line 2078 "cplus.met"

#line 2078 "cplus.met"
exception_ansi_ret :
#line 2078 "cplus.met"
    
#line 2078 "cplus.met"
    _Debug = TRACE_RULE("exception_ansi",TRACE_RETURN,_retValue);
#line 2078 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2078 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2078 "cplus.met"
    return _retValue ;
#line 2078 "cplus.met"
}
#line 2078 "cplus.met"

#line 2078 "cplus.met"
#line 3355 "cplus.met"
PPTREE cplus::exception_list ( int error_free)
#line 3355 "cplus.met"
{
#line 3355 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 3355 "cplus.met"
    int _value,_nbPre = 0 ;
#line 3355 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 3355 "cplus.met"
    int _Debug = TRACE_RULE("exception_list",TRACE_ENTER,(PPTREE)0);
#line 3355 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 3355 "cplus.met"
#line 3355 "cplus.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 3355 "cplus.met"
#line 3355 "cplus.met"
    PPTREE exceptionList = (PPTREE) 0;
#line 3355 "cplus.met"
#line 3357 "cplus.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3357 "cplus.met"
    if (  !SEE_TOKEN( THROW,"throw") || !(CommTerm(),1)) {
#line 3357 "cplus.met"
        MulFreeTree(2,_addlist1,exceptionList);
        TOKEN_EXIT(exception_list_exit,"throw")
#line 3357 "cplus.met"
    } else {
#line 3357 "cplus.met"
        tokenAhead = 0 ;
#line 3357 "cplus.met"
    }
#line 3357 "cplus.met"
#line 3358 "cplus.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POUV,"(") && (tokenAhead = 0,CommTerm(),1)){
#line 3358 "cplus.met"
#line 3359 "cplus.met"
#line 3360 "cplus.met"
        if (! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN( PFER,")"))){
#line 3360 "cplus.met"
#line 3362 "cplus.met"
#line 3362 "cplus.met"
            _addlist1 = exceptionList ;
#line 3362 "cplus.met"
#line 3361 "cplus.met"
            do {
#line 3361 "cplus.met"
#line 3362 "cplus.met"
                {
#line 3362 "cplus.met"
                    PPTREE _ptTree0=0;
#line 3362 "cplus.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 3362 "cplus.met"
                        MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                        PROG_EXIT(exception_list_exit,"exception_list")
#line 3362 "cplus.met"
                    }
#line 3362 "cplus.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 3362 "cplus.met"
                }
#line 3362 "cplus.met"
#line 3362 "cplus.met"
                if (exceptionList){
#line 3362 "cplus.met"
#line 3362 "cplus.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 3362 "cplus.met"
                } else {
#line 3362 "cplus.met"
#line 3362 "cplus.met"
                    exceptionList = _addlist1 ;
#line 3362 "cplus.met"
                }
#line 3362 "cplus.met"
#line 3362 "cplus.met"
#line 3363 "cplus.met"
            } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 3363 "cplus.met"
        }
#line 3363 "cplus.met"
#line 3364 "cplus.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 3364 "cplus.met"
        if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 3364 "cplus.met"
            MulFreeTree(2,_addlist1,exceptionList);
            TOKEN_EXIT(exception_list_exit,")")
#line 3364 "cplus.met"
        } else {
#line 3364 "cplus.met"
            tokenAhead = 0 ;
#line 3364 "cplus.met"
        }
#line 3364 "cplus.met"
#line 3364 "cplus.met"
#line 3364 "cplus.met"
    } else {
#line 3364 "cplus.met"
#line 3367 "cplus.met"
        {
#line 3367 "cplus.met"
            PPTREE _ptTree0=0;
#line 3367 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(qualified_name)(error_free), 120, cplus))== (PPTREE) -1 ) {
#line 3367 "cplus.met"
                MulFreeTree(3,_ptTree0,_addlist1,exceptionList);
                PROG_EXIT(exception_list_exit,"exception_list")
#line 3367 "cplus.met"
            }
#line 3367 "cplus.met"
            exceptionList =AddList(exceptionList , _ptTree0);
#line 3367 "cplus.met"
        }
#line 3367 "cplus.met"
    }
#line 3367 "cplus.met"
#line 3368 "cplus.met"
    {
#line 3368 "cplus.met"
        PPTREE _ptTree0=0;
#line 3368 "cplus.met"
        {
#line 3368 "cplus.met"
            PPTREE _ptRes1=0;
#line 3368 "cplus.met"
            _ptRes1= MakeTree(EXCEPTION_LIST, 1);
#line 3368 "cplus.met"
            ReplaceTree(_ptRes1, 1, exceptionList );
#line 3368 "cplus.met"
            _ptTree0=_ptRes1;
#line 3368 "cplus.met"
        }
#line 3368 "cplus.met"
        _retValue =_ptTree0;
#line 3368 "cplus.met"
        goto exception_list_ret;
#line 3368 "cplus.met"
    }
#line 3368 "cplus.met"
#line 3368 "cplus.met"
#line 3368 "cplus.met"

#line 3369 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3369 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 3369 "cplus.met"
return((PPTREE) 0);
#line 3369 "cplus.met"

#line 3369 "cplus.met"
exception_list_exit :
#line 3369 "cplus.met"

#line 3369 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_EXIT,(PPTREE)0);
#line 3369 "cplus.met"
    _funcLevel--;
#line 3369 "cplus.met"
    return((PPTREE) -1) ;
#line 3369 "cplus.met"

#line 3369 "cplus.met"
exception_list_ret :
#line 3369 "cplus.met"
    
#line 3369 "cplus.met"
    _Debug = TRACE_RULE("exception_list",TRACE_RETURN,_retValue);
#line 3369 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 3369 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 3369 "cplus.met"
    return _retValue ;
#line 3369 "cplus.met"
}
#line 3369 "cplus.met"

#line 3369 "cplus.met"
#line 2774 "cplus.met"
PPTREE cplus::exclusive_or_expression ( int error_free)
#line 2774 "cplus.met"
{
#line 2774 "cplus.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 2774 "cplus.met"
    int _value,_nbPre = 0 ;
#line 2774 "cplus.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 2774 "cplus.met"
    int _Debug = TRACE_RULE("exclusive_or_expression",TRACE_ENTER,(PPTREE)0);
#line 2774 "cplus.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 2774 "cplus.met"
#line 2774 "cplus.met"
    PPTREE expTree = (PPTREE) 0;
#line 2774 "cplus.met"
#line 2776 "cplus.met"
    if ( (expTree=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2776 "cplus.met"
        MulFreeTree(1,expTree);
        PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2776 "cplus.met"
    }
#line 2776 "cplus.met"
#line 2777 "cplus.met"
    while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(CHAP,"^") && (tokenAhead = 0,CommTerm(),1)) { 
#line 2777 "cplus.met"
#line 2778 "cplus.met"
        {
#line 2778 "cplus.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 2778 "cplus.met"
            _ptRes0= MakeTree(LXOR, 2);
#line 2778 "cplus.met"
            ReplaceTree(_ptRes0, 1, expTree );
#line 2778 "cplus.met"
            if ( (_ptTree0=NQUICK_CALL(_Tak(and_expression)(error_free), 6, cplus))== (PPTREE) -1 ) {
#line 2778 "cplus.met"
                MulFreeTree(3,_ptRes0,_ptTree0,expTree);
                PROG_EXIT(exclusive_or_expression_exit,"exclusive_or_expression")
#line 2778 "cplus.met"
            }
#line 2778 "cplus.met"
            ReplaceTree(_ptRes0, 2, _ptTree0);
#line 2778 "cplus.met"
            expTree=_ptRes0;
#line 2778 "cplus.met"
        }
#line 2778 "cplus.met"
    } 
#line 2778 "cplus.met"
#line 2779 "cplus.met"
    {
#line 2779 "cplus.met"
        _retValue = expTree ;
#line 2779 "cplus.met"
        goto exclusive_or_expression_ret;
#line 2779 "cplus.met"
        
#line 2779 "cplus.met"
    }
#line 2779 "cplus.met"
#line 2779 "cplus.met"
#line 2779 "cplus.met"

#line 2780 "cplus.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2780 "cplus.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 2780 "cplus.met"
return((PPTREE) 0);
#line 2780 "cplus.met"

#line 2780 "cplus.met"
exclusive_or_expression_exit :
#line 2780 "cplus.met"

#line 2780 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_EXIT,(PPTREE)0);
#line 2780 "cplus.met"
    _funcLevel--;
#line 2780 "cplus.met"
    return((PPTREE) -1) ;
#line 2780 "cplus.met"

#line 2780 "cplus.met"
exclusive_or_expression_ret :
#line 2780 "cplus.met"
    
#line 2780 "cplus.met"
    _Debug = TRACE_RULE("exclusive_or_expression",TRACE_RETURN,_retValue);
#line 2780 "cplus.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 2780 "cplus.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 2780 "cplus.met"
    return _retValue ;
#line 2780 "cplus.met"
}
#line 2780 "cplus.met"

#line 2780 "cplus.met"
