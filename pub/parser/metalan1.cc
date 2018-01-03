/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "metalang.h"


#line 740 "metalang.met"
PPTREE metalang::see_follow ( int error_free)
#line 740 "metalang.met"
{
#line 740 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 740 "metalang.met"
    int _value,_nbPre = 0 ;
#line 740 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 740 "metalang.met"
    int _Debug = TRACE_RULE("see_follow",TRACE_ENTER,(PPTREE)0);
#line 740 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 740 "metalang.met"
#line 740 "metalang.met"
    PPTREE patTree = (PPTREE) 0;
#line 740 "metalang.met"
#line 742 "metalang.met"
#line 743 "metalang.met"
    {
#line 743 "metalang.met"
        PPTREE _ptRes0=0;
#line 743 "metalang.met"
        _ptRes0= MakeTree(SEE, 1);
#line 743 "metalang.met"
        patTree=_ptRes0;
#line 743 "metalang.met"
    }
#line 743 "metalang.met"
#line 744 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 744 "metalang.met"
    switch( lexEl.Value) {
#line 744 "metalang.met"
#line 745 "metalang.met"
        case DIES : 
#line 745 "metalang.met"
            tokenAhead = 0 ;
#line 745 "metalang.met"
            CommTerm();
#line 745 "metalang.met"
#line 745 "metalang.met"
            {
#line 745 "metalang.met"
                PPTREE _ptTree0=0;
#line 745 "metalang.met"
                {
#line 745 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 745 "metalang.met"
                    _ptRes1= MakeTree(TOKEN, 1);
#line 745 "metalang.met"
                    {
#line 745 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 745 "metalang.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 745 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 745 "metalang.met"
                        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree2))) {
#line 745 "metalang.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,patTree);
                            TOKEN_EXIT(see_follow_exit,"STRING")
#line 745 "metalang.met"
                        } else {
#line 745 "metalang.met"
                            tokenAhead = 0 ;
#line 745 "metalang.met"
                        }
#line 745 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 745 "metalang.met"
                        _ptTree1=_ptRes2;
#line 745 "metalang.met"
                    }
#line 745 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 745 "metalang.met"
                    _ptTree0=_ptRes1;
#line 745 "metalang.met"
                }
#line 745 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 745 "metalang.met"
            }
#line 745 "metalang.met"
            break;
#line 745 "metalang.met"
#line 747 "metalang.met"
        case EXCL : 
#line 747 "metalang.met"
            tokenAhead = 0 ;
#line 747 "metalang.met"
            CommTerm();
#line 747 "metalang.met"
#line 747 "metalang.met"
            {
#line 747 "metalang.met"
                PPTREE _ptTree0=0;
#line 747 "metalang.met"
                {
#line 747 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 747 "metalang.met"
                    _ptRes1= MakeTree(EXCLA, 1);
#line 747 "metalang.met"
                    {
#line 747 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 747 "metalang.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 747 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 747 "metalang.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 747 "metalang.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,patTree);
                            TOKEN_EXIT(see_follow_exit,"IDENT")
#line 747 "metalang.met"
                        } else {
#line 747 "metalang.met"
                            tokenAhead = 0 ;
#line 747 "metalang.met"
                        }
#line 747 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 747 "metalang.met"
                        _ptTree1=_ptRes2;
#line 747 "metalang.met"
                    }
#line 747 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 747 "metalang.met"
                    _ptTree0=_ptRes1;
#line 747 "metalang.met"
                }
#line 747 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 747 "metalang.met"
            }
#line 747 "metalang.met"
            break;
#line 747 "metalang.met"
#line 749 "metalang.met"
        case META : 
#line 749 "metalang.met"
        case STRING : 
#line 749 "metalang.met"
#line 749 "metalang.met"
            {
#line 749 "metalang.met"
                PPTREE _ptTree0=0;
#line 749 "metalang.met"
                {
#line 749 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 749 "metalang.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 749 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 749 "metalang.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 749 "metalang.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,patTree);
                        TOKEN_EXIT(see_follow_exit,"STRING")
#line 749 "metalang.met"
                    } else {
#line 749 "metalang.met"
                        tokenAhead = 0 ;
#line 749 "metalang.met"
                    }
#line 749 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 749 "metalang.met"
                    _ptTree0=_ptRes1;
#line 749 "metalang.met"
                }
#line 749 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 749 "metalang.met"
            }
#line 749 "metalang.met"
            break;
#line 749 "metalang.met"
#line 750 "metalang.met"
        case IDENT : 
#line 750 "metalang.met"
#line 750 "metalang.met"
            {
#line 750 "metalang.met"
                PPTREE _ptTree0=0;
#line 750 "metalang.met"
                {
#line 750 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 750 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 750 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 750 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 750 "metalang.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,patTree);
                        TOKEN_EXIT(see_follow_exit,"IDENT")
#line 750 "metalang.met"
                    } else {
#line 750 "metalang.met"
                        tokenAhead = 0 ;
#line 750 "metalang.met"
                    }
#line 750 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 750 "metalang.met"
                    _ptTree0=_ptRes1;
#line 750 "metalang.met"
                }
#line 750 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 750 "metalang.met"
            }
#line 750 "metalang.met"
            break;
#line 750 "metalang.met"
        default :
#line 750 "metalang.met"
            MulFreeTree(1,patTree);
            CASE_EXIT(see_follow_exit,"either # or ! or STRING or IDENT")
#line 750 "metalang.met"
            break;
#line 750 "metalang.met"
    }
#line 750 "metalang.met"
#line 750 "metalang.met"
#line 753 "metalang.met"
    {
#line 753 "metalang.met"
        _retValue = patTree ;
#line 753 "metalang.met"
        goto see_follow_ret;
#line 753 "metalang.met"
        
#line 753 "metalang.met"
    }
#line 753 "metalang.met"
#line 753 "metalang.met"
#line 753 "metalang.met"

#line 754 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 754 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 754 "metalang.met"
return((PPTREE) 0);
#line 754 "metalang.met"

#line 754 "metalang.met"
see_follow_exit :
#line 754 "metalang.met"

#line 754 "metalang.met"
    _Debug = TRACE_RULE("see_follow",TRACE_EXIT,(PPTREE)0);
#line 754 "metalang.met"
    _funcLevel--;
#line 754 "metalang.met"
    return((PPTREE) -1) ;
#line 754 "metalang.met"

#line 754 "metalang.met"
see_follow_ret :
#line 754 "metalang.met"
    
#line 754 "metalang.met"
    _Debug = TRACE_RULE("see_follow",TRACE_RETURN,_retValue);
#line 754 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 754 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 754 "metalang.met"
    return _retValue ;
#line 754 "metalang.met"
}
#line 754 "metalang.met"

#line 754 "metalang.met"
#line 376 "metalang.met"
PPTREE metalang::seel_stat ( int error_free)
#line 376 "metalang.met"
{
#line 376 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 376 "metalang.met"
    int _value,_nbPre = 0 ;
#line 376 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 376 "metalang.met"
    int _Debug = TRACE_RULE("seel_stat",TRACE_ENTER,(PPTREE)0);
#line 376 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 376 "metalang.met"
#line 377 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 377 "metalang.met"
    if (  !SEE_TOKEN( SEEL,"seel") || !(CommTerm(),1)) {
#line 377 "metalang.met"
            TOKEN_EXIT(seel_stat_exit,"seel")
#line 377 "metalang.met"
    } else {
#line 377 "metalang.met"
        tokenAhead = 0 ;
#line 377 "metalang.met"
    }
#line 377 "metalang.met"
#line 378 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 378 "metalang.met"
    switch( lexEl.Value) {
#line 378 "metalang.met"
#line 379 "metalang.met"
        case IN : 
#line 379 "metalang.met"
            tokenAhead = 0 ;
#line 379 "metalang.met"
            CommTerm();
#line 379 "metalang.met"
#line 379 "metalang.met"
            {
#line 379 "metalang.met"
                PPTREE _ptTree0=0;
#line 379 "metalang.met"
                {
#line 379 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 379 "metalang.met"
                    _ptRes1= MakeTree(SEEL, 1);
#line 379 "metalang.met"
                    {
#line 379 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 379 "metalang.met"
                        _ptRes2= MakeTree(IN, 1);
#line 379 "metalang.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(set)(error_free), 21, metalang))== (PPTREE) -1 ) {
#line 379 "metalang.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            PROG_EXIT(seel_stat_exit,"seel_stat")
#line 379 "metalang.met"
                        }
#line 379 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 379 "metalang.met"
                        _ptTree1=_ptRes2;
#line 379 "metalang.met"
                    }
#line 379 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 379 "metalang.met"
                    _ptTree0=_ptRes1;
#line 379 "metalang.met"
                }
#line 379 "metalang.met"
                _retValue =_ptTree0;
#line 379 "metalang.met"
                goto seel_stat_ret;
#line 379 "metalang.met"
            }
#line 379 "metalang.met"
            break;
#line 379 "metalang.met"
#line 380 "metalang.met"
        case META : 
#line 380 "metalang.met"
        case STRING : 
#line 380 "metalang.met"
#line 380 "metalang.met"
            {
#line 380 "metalang.met"
                PPTREE _ptTree0=0;
#line 380 "metalang.met"
                {
#line 380 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 380 "metalang.met"
                    _ptRes1= MakeTree(SEEL, 1);
#line 380 "metalang.met"
                    {
#line 380 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 380 "metalang.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 380 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 380 "metalang.met"
                        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree2))) {
#line 380 "metalang.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(seel_stat_exit,"STRING")
#line 380 "metalang.met"
                        } else {
#line 380 "metalang.met"
                            tokenAhead = 0 ;
#line 380 "metalang.met"
                        }
#line 380 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 380 "metalang.met"
                        _ptTree1=_ptRes2;
#line 380 "metalang.met"
                    }
#line 380 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 380 "metalang.met"
                    _ptTree0=_ptRes1;
#line 380 "metalang.met"
                }
#line 380 "metalang.met"
                _retValue =_ptTree0;
#line 380 "metalang.met"
                goto seel_stat_ret;
#line 380 "metalang.met"
            }
#line 380 "metalang.met"
            break;
#line 380 "metalang.met"
#line 381 "metalang.met"
        default : 
#line 381 "metalang.met"
#line 381 "metalang.met"
            {
#line 381 "metalang.met"
                PPTREE _ptTree0=0;
#line 381 "metalang.met"
                {
#line 381 "metalang.met"
                    PPTREE _ptRes1=0;
#line 381 "metalang.met"
                    _ptRes1= MakeTree(SEEL, 1);
#line 381 "metalang.met"
                    _ptTree0=_ptRes1;
#line 381 "metalang.met"
                }
#line 381 "metalang.met"
                _retValue =_ptTree0;
#line 381 "metalang.met"
                goto seel_stat_ret;
#line 381 "metalang.met"
            }
#line 381 "metalang.met"
            break;
#line 381 "metalang.met"
    }
#line 381 "metalang.met"
#line 381 "metalang.met"
#line 382 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 382 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 382 "metalang.met"
return((PPTREE) 0);
#line 382 "metalang.met"

#line 382 "metalang.met"
seel_stat_exit :
#line 382 "metalang.met"

#line 382 "metalang.met"
    _Debug = TRACE_RULE("seel_stat",TRACE_EXIT,(PPTREE)0);
#line 382 "metalang.met"
    _funcLevel--;
#line 382 "metalang.met"
    return((PPTREE) -1) ;
#line 382 "metalang.met"

#line 382 "metalang.met"
seel_stat_ret :
#line 382 "metalang.met"
    
#line 382 "metalang.met"
    _Debug = TRACE_RULE("seel_stat",TRACE_RETURN,_retValue);
#line 382 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 382 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 382 "metalang.met"
    return _retValue ;
#line 382 "metalang.met"
}
#line 382 "metalang.met"

#line 382 "metalang.met"
#line 393 "metalang.met"
PPTREE metalang::set ( int error_free)
#line 393 "metalang.met"
{
#line 393 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 393 "metalang.met"
    int _value,_nbPre = 0 ;
#line 393 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 393 "metalang.met"
    int _Debug = TRACE_RULE("set",TRACE_ENTER,(PPTREE)0);
#line 393 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 393 "metalang.met"
#line 393 "metalang.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 393 "metalang.met"
#line 393 "metalang.met"
    PPTREE list = (PPTREE) 0,charac = (PPTREE) 0;
#line 393 "metalang.met"
#line 395 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 395 "metalang.met"
    if (  !SEE_TOKEN( COUV,"[") || !(CommTerm(),1)) {
#line 395 "metalang.met"
        MulFreeTree(3,_addlist1,charac,list);
        TOKEN_EXIT(set_exit,"[")
#line 395 "metalang.met"
    } else {
#line 395 "metalang.met"
        tokenAhead = 0 ;
#line 395 "metalang.met"
    }
#line 395 "metalang.met"
#line 395 "metalang.met"
    _addlist1 = list ;
#line 395 "metalang.met"
#line 396 "metalang.met"
    do {
#line 396 "metalang.met"
#line 397 "metalang.met"
        {
#line 397 "metalang.met"
            PPTREE _ptTree0=0,_ptRes0=0;
#line 397 "metalang.met"
            _ptRes0= MakeTree(CHARACTER, 1);
#line 397 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 397 "metalang.met"
            if ( ! TERM_OR_META(CHARACTER,"CHARACTER") || !(BUILD_TERM_META(_ptTree0))) {
#line 397 "metalang.met"
                MulFreeTree(5,_ptRes0,_ptTree0,_addlist1,charac,list);
                TOKEN_EXIT(set_exit,"CHARACTER")
#line 397 "metalang.met"
            } else {
#line 397 "metalang.met"
                tokenAhead = 0 ;
#line 397 "metalang.met"
            }
#line 397 "metalang.met"
            ReplaceTree(_ptRes0, 1, _ptTree0);
#line 397 "metalang.met"
            charac=_ptRes0;
#line 397 "metalang.met"
        }
#line 397 "metalang.met"
#line 398 "metalang.met"
        if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(POIN,".") && (tokenAhead = 0,CommTerm(),1)){
#line 398 "metalang.met"
#line 399 "metalang.met"
#line 400 "metalang.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 400 "metalang.met"
            if (  !SEE_TOKEN( POIN,".") || !(CommTerm(),1)) {
#line 400 "metalang.met"
                MulFreeTree(3,_addlist1,charac,list);
                TOKEN_EXIT(set_exit,".")
#line 400 "metalang.met"
            } else {
#line 400 "metalang.met"
                tokenAhead = 0 ;
#line 400 "metalang.met"
            }
#line 400 "metalang.met"
#line 401 "metalang.met"
            {
#line 401 "metalang.met"
                PPTREE _ptTree0=0;
#line 401 "metalang.met"
                {
#line 401 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 401 "metalang.met"
                    _ptRes1= MakeTree(INTER, 2);
#line 401 "metalang.met"
                    ReplaceTree(_ptRes1, 1, charac );
#line 401 "metalang.met"
                    {
#line 401 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 401 "metalang.met"
                        _ptRes2= MakeTree(CHARACTER, 1);
#line 401 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 401 "metalang.met"
                        if ( ! TERM_OR_META(CHARACTER,"CHARACTER") || !(BUILD_TERM_META(_ptTree2))) {
#line 401 "metalang.met"
                            MulFreeTree(8,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,_addlist1,charac,list);
                            TOKEN_EXIT(set_exit,"CHARACTER")
#line 401 "metalang.met"
                        } else {
#line 401 "metalang.met"
                            tokenAhead = 0 ;
#line 401 "metalang.met"
                        }
#line 401 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 401 "metalang.met"
                        _ptTree1=_ptRes2;
#line 401 "metalang.met"
                    }
#line 401 "metalang.met"
                    ReplaceTree(_ptRes1, 2, _ptTree1);
#line 401 "metalang.met"
                    _ptTree0=_ptRes1;
#line 401 "metalang.met"
                }
#line 401 "metalang.met"
                _addlist1 =AddList(_addlist1 , _ptTree0);
#line 401 "metalang.met"
            }
#line 401 "metalang.met"
#line 401 "metalang.met"
            if (list){
#line 401 "metalang.met"
#line 401 "metalang.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 401 "metalang.met"
            } else {
#line 401 "metalang.met"
#line 401 "metalang.met"
                list = _addlist1 ;
#line 401 "metalang.met"
            }
#line 401 "metalang.met"
#line 401 "metalang.met"
#line 402 "metalang.met"
        } else {
#line 402 "metalang.met"
#line 405 "metalang.met"
#line 405 "metalang.met"
            _addlist1 =AddList(_addlist1 ,charac );
#line 405 "metalang.met"
#line 405 "metalang.met"
            if (list){
#line 405 "metalang.met"
#line 405 "metalang.met"
                _addlist1 = SonTree (_addlist1 ,2 );
#line 405 "metalang.met"
            } else {
#line 405 "metalang.met"
#line 405 "metalang.met"
                list = _addlist1 ;
#line 405 "metalang.met"
            }
#line 405 "metalang.met"
        }
#line 405 "metalang.met"
#line 405 "metalang.met"
#line 406 "metalang.met"
    } while ( !(! ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)))) ;
#line 406 "metalang.met"
#line 407 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 407 "metalang.met"
    if (  !SEE_TOKEN( CFER,"]") || !(CommTerm(),1)) {
#line 407 "metalang.met"
        MulFreeTree(3,_addlist1,charac,list);
        TOKEN_EXIT(set_exit,"]")
#line 407 "metalang.met"
    } else {
#line 407 "metalang.met"
        tokenAhead = 0 ;
#line 407 "metalang.met"
    }
#line 407 "metalang.met"
#line 408 "metalang.met"
    {
#line 408 "metalang.met"
        PPTREE _ptTree0=0;
#line 408 "metalang.met"
        {
#line 408 "metalang.met"
            PPTREE _ptRes1=0;
#line 408 "metalang.met"
            _ptRes1= MakeTree(SET, 1);
#line 408 "metalang.met"
            ReplaceTree(_ptRes1, 1, list );
#line 408 "metalang.met"
            _ptTree0=_ptRes1;
#line 408 "metalang.met"
        }
#line 408 "metalang.met"
        _retValue =_ptTree0;
#line 408 "metalang.met"
        goto set_ret;
#line 408 "metalang.met"
    }
#line 408 "metalang.met"
#line 408 "metalang.met"
#line 408 "metalang.met"

#line 409 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 409 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 409 "metalang.met"
return((PPTREE) 0);
#line 409 "metalang.met"

#line 409 "metalang.met"
set_exit :
#line 409 "metalang.met"

#line 409 "metalang.met"
    _Debug = TRACE_RULE("set",TRACE_EXIT,(PPTREE)0);
#line 409 "metalang.met"
    _funcLevel--;
#line 409 "metalang.met"
    return((PPTREE) -1) ;
#line 409 "metalang.met"

#line 409 "metalang.met"
set_ret :
#line 409 "metalang.met"
    
#line 409 "metalang.met"
    _Debug = TRACE_RULE("set",TRACE_RETURN,_retValue);
#line 409 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 409 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 409 "metalang.met"
    return _retValue ;
#line 409 "metalang.met"
}
#line 409 "metalang.met"

#line 409 "metalang.met"
#line 385 "metalang.met"
PPTREE metalang::storel_stat ( int error_free)
#line 385 "metalang.met"
{
#line 385 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 385 "metalang.met"
    int _value,_nbPre = 0 ;
#line 385 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 385 "metalang.met"
    int _Debug = TRACE_RULE("storel_stat",TRACE_ENTER,(PPTREE)0);
#line 385 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 385 "metalang.met"
#line 386 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 386 "metalang.met"
    if (  !SEE_TOKEN( STOREL,"storel") || !(CommTerm(),1)) {
#line 386 "metalang.met"
            TOKEN_EXIT(storel_stat_exit,"storel")
#line 386 "metalang.met"
    } else {
#line 386 "metalang.met"
        tokenAhead = 0 ;
#line 386 "metalang.met"
    }
#line 386 "metalang.met"
#line 387 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 387 "metalang.met"
    switch( lexEl.Value) {
#line 387 "metalang.met"
#line 388 "metalang.met"
        case TAKEL : 
#line 388 "metalang.met"
            tokenAhead = 0 ;
#line 388 "metalang.met"
            CommTerm();
#line 388 "metalang.met"
#line 388 "metalang.met"
            {
#line 388 "metalang.met"
                PPTREE _ptTree0=0;
#line 388 "metalang.met"
                {
#line 388 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 388 "metalang.met"
                    _ptRes1= MakeTree(STOREL, 1);
#line 388 "metalang.met"
                    {
#line 388 "metalang.met"
                        PPTREE _ptRes2=0;
#line 388 "metalang.met"
                        _ptRes2= MakeTree(TAKEL, 1);
#line 388 "metalang.met"
                        _ptTree1=_ptRes2;
#line 388 "metalang.met"
                    }
#line 388 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 388 "metalang.met"
                    _ptTree0=_ptRes1;
#line 388 "metalang.met"
                }
#line 388 "metalang.met"
                _retValue =_ptTree0;
#line 388 "metalang.met"
                goto storel_stat_ret;
#line 388 "metalang.met"
            }
#line 388 "metalang.met"
            break;
#line 388 "metalang.met"
#line 389 "metalang.met"
        case META : 
#line 389 "metalang.met"
        case STRING : 
#line 389 "metalang.met"
#line 389 "metalang.met"
            {
#line 389 "metalang.met"
                PPTREE _ptTree0=0;
#line 389 "metalang.met"
                {
#line 389 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 389 "metalang.met"
                    _ptRes1= MakeTree(STOREL, 1);
#line 389 "metalang.met"
                    {
#line 389 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 389 "metalang.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 389 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 389 "metalang.met"
                        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree2))) {
#line 389 "metalang.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(storel_stat_exit,"STRING")
#line 389 "metalang.met"
                        } else {
#line 389 "metalang.met"
                            tokenAhead = 0 ;
#line 389 "metalang.met"
                        }
#line 389 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 389 "metalang.met"
                        _ptTree1=_ptRes2;
#line 389 "metalang.met"
                    }
#line 389 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 389 "metalang.met"
                    _ptTree0=_ptRes1;
#line 389 "metalang.met"
                }
#line 389 "metalang.met"
                _retValue =_ptTree0;
#line 389 "metalang.met"
                goto storel_stat_ret;
#line 389 "metalang.met"
            }
#line 389 "metalang.met"
            break;
#line 389 "metalang.met"
        default :
#line 389 "metalang.met"
            CASE_EXIT(storel_stat_exit,"either takel or STRING")
#line 389 "metalang.met"
            break;
#line 389 "metalang.met"
    }
#line 389 "metalang.met"
#line 389 "metalang.met"
#line 390 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 390 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 390 "metalang.met"
return((PPTREE) 0);
#line 390 "metalang.met"

#line 390 "metalang.met"
storel_stat_exit :
#line 390 "metalang.met"

#line 390 "metalang.met"
    _Debug = TRACE_RULE("storel_stat",TRACE_EXIT,(PPTREE)0);
#line 390 "metalang.met"
    _funcLevel--;
#line 390 "metalang.met"
    return((PPTREE) -1) ;
#line 390 "metalang.met"

#line 390 "metalang.met"
storel_stat_ret :
#line 390 "metalang.met"
    
#line 390 "metalang.met"
    _Debug = TRACE_RULE("storel_stat",TRACE_RETURN,_retValue);
#line 390 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 390 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 390 "metalang.met"
    return _retValue ;
#line 390 "metalang.met"
}
#line 390 "metalang.met"

#line 390 "metalang.met"
#line 724 "metalang.met"
PPTREE metalang::take_follow ( int error_free)
#line 724 "metalang.met"
{
#line 724 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 724 "metalang.met"
    int _value,_nbPre = 0 ;
#line 724 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 724 "metalang.met"
    int _Debug = TRACE_RULE("take_follow",TRACE_ENTER,(PPTREE)0);
#line 724 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 724 "metalang.met"
#line 724 "metalang.met"
    PPTREE patTree = (PPTREE) 0;
#line 724 "metalang.met"
#line 726 "metalang.met"
#line 727 "metalang.met"
    {
#line 727 "metalang.met"
        PPTREE _ptRes0=0;
#line 727 "metalang.met"
        _ptRes0= MakeTree(TAKE, 1);
#line 727 "metalang.met"
        patTree=_ptRes0;
#line 727 "metalang.met"
    }
#line 727 "metalang.met"
#line 728 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 728 "metalang.met"
    switch( lexEl.Value) {
#line 728 "metalang.met"
#line 729 "metalang.met"
        case DIES : 
#line 729 "metalang.met"
            tokenAhead = 0 ;
#line 729 "metalang.met"
            CommTerm();
#line 729 "metalang.met"
#line 729 "metalang.met"
            {
#line 729 "metalang.met"
                PPTREE _ptTree0=0;
#line 729 "metalang.met"
                {
#line 729 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 729 "metalang.met"
                    _ptRes1= MakeTree(TOKEN, 1);
#line 729 "metalang.met"
                    {
#line 729 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 729 "metalang.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 729 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 729 "metalang.met"
                        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree2))) {
#line 729 "metalang.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,patTree);
                            TOKEN_EXIT(take_follow_exit,"STRING")
#line 729 "metalang.met"
                        } else {
#line 729 "metalang.met"
                            tokenAhead = 0 ;
#line 729 "metalang.met"
                        }
#line 729 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 729 "metalang.met"
                        _ptTree1=_ptRes2;
#line 729 "metalang.met"
                    }
#line 729 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 729 "metalang.met"
                    _ptTree0=_ptRes1;
#line 729 "metalang.met"
                }
#line 729 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 729 "metalang.met"
            }
#line 729 "metalang.met"
            break;
#line 729 "metalang.met"
#line 731 "metalang.met"
        case EXCL : 
#line 731 "metalang.met"
            tokenAhead = 0 ;
#line 731 "metalang.met"
            CommTerm();
#line 731 "metalang.met"
#line 731 "metalang.met"
            {
#line 731 "metalang.met"
                PPTREE _ptTree0=0;
#line 731 "metalang.met"
                {
#line 731 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 731 "metalang.met"
                    _ptRes1= MakeTree(EXCLA, 1);
#line 731 "metalang.met"
                    {
#line 731 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 731 "metalang.met"
                        _ptRes2= MakeTree(IDENT, 1);
#line 731 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 731 "metalang.met"
                        if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree2))) {
#line 731 "metalang.met"
                            MulFreeTree(6,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0,patTree);
                            TOKEN_EXIT(take_follow_exit,"IDENT")
#line 731 "metalang.met"
                        } else {
#line 731 "metalang.met"
                            tokenAhead = 0 ;
#line 731 "metalang.met"
                        }
#line 731 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 731 "metalang.met"
                        _ptTree1=_ptRes2;
#line 731 "metalang.met"
                    }
#line 731 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 731 "metalang.met"
                    _ptTree0=_ptRes1;
#line 731 "metalang.met"
                }
#line 731 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 731 "metalang.met"
            }
#line 731 "metalang.met"
            break;
#line 731 "metalang.met"
#line 733 "metalang.met"
        case META : 
#line 733 "metalang.met"
        case STRING : 
#line 733 "metalang.met"
#line 733 "metalang.met"
            {
#line 733 "metalang.met"
                PPTREE _ptTree0=0;
#line 733 "metalang.met"
                {
#line 733 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 733 "metalang.met"
                    _ptRes1= MakeTree(STRING, 1);
#line 733 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 733 "metalang.met"
                    if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree1))) {
#line 733 "metalang.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,patTree);
                        TOKEN_EXIT(take_follow_exit,"STRING")
#line 733 "metalang.met"
                    } else {
#line 733 "metalang.met"
                        tokenAhead = 0 ;
#line 733 "metalang.met"
                    }
#line 733 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 733 "metalang.met"
                    _ptTree0=_ptRes1;
#line 733 "metalang.met"
                }
#line 733 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 733 "metalang.met"
            }
#line 733 "metalang.met"
            break;
#line 733 "metalang.met"
#line 734 "metalang.met"
        case IDENT : 
#line 734 "metalang.met"
#line 734 "metalang.met"
            {
#line 734 "metalang.met"
                PPTREE _ptTree0=0;
#line 734 "metalang.met"
                {
#line 734 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 734 "metalang.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 734 "metalang.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 734 "metalang.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 734 "metalang.met"
                        MulFreeTree(4,_ptRes1,_ptTree1,_ptTree0,patTree);
                        TOKEN_EXIT(take_follow_exit,"IDENT")
#line 734 "metalang.met"
                    } else {
#line 734 "metalang.met"
                        tokenAhead = 0 ;
#line 734 "metalang.met"
                    }
#line 734 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 734 "metalang.met"
                    _ptTree0=_ptRes1;
#line 734 "metalang.met"
                }
#line 734 "metalang.met"
                ReplaceTree(patTree , 1 , _ptTree0);
#line 734 "metalang.met"
            }
#line 734 "metalang.met"
            break;
#line 734 "metalang.met"
        default :
#line 734 "metalang.met"
            MulFreeTree(1,patTree);
            CASE_EXIT(take_follow_exit,"either # or ! or STRING or IDENT")
#line 734 "metalang.met"
            break;
#line 734 "metalang.met"
    }
#line 734 "metalang.met"
#line 734 "metalang.met"
#line 737 "metalang.met"
    {
#line 737 "metalang.met"
        _retValue = patTree ;
#line 737 "metalang.met"
        goto take_follow_ret;
#line 737 "metalang.met"
        
#line 737 "metalang.met"
    }
#line 737 "metalang.met"
#line 737 "metalang.met"
#line 737 "metalang.met"

#line 738 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 738 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 738 "metalang.met"
return((PPTREE) 0);
#line 738 "metalang.met"

#line 738 "metalang.met"
take_follow_exit :
#line 738 "metalang.met"

#line 738 "metalang.met"
    _Debug = TRACE_RULE("take_follow",TRACE_EXIT,(PPTREE)0);
#line 738 "metalang.met"
    _funcLevel--;
#line 738 "metalang.met"
    return((PPTREE) -1) ;
#line 738 "metalang.met"

#line 738 "metalang.met"
take_follow_ret :
#line 738 "metalang.met"
    
#line 738 "metalang.met"
    _Debug = TRACE_RULE("take_follow",TRACE_RETURN,_retValue);
#line 738 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 738 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 738 "metalang.met"
    return _retValue ;
#line 738 "metalang.met"
}
#line 738 "metalang.met"

#line 738 "metalang.met"
#line 367 "metalang.met"
PPTREE metalang::takel_stat ( int error_free)
#line 367 "metalang.met"
{
#line 367 "metalang.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 367 "metalang.met"
    int _value,_nbPre = 0 ;
#line 367 "metalang.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 367 "metalang.met"
    int _Debug = TRACE_RULE("takel_stat",TRACE_ENTER,(PPTREE)0);
#line 367 "metalang.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 367 "metalang.met"
#line 368 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 368 "metalang.met"
    if (  !SEE_TOKEN( TAKEL,"takel") || !(CommTerm(),1)) {
#line 368 "metalang.met"
            TOKEN_EXIT(takel_stat_exit,"takel")
#line 368 "metalang.met"
    } else {
#line 368 "metalang.met"
        tokenAhead = 0 ;
#line 368 "metalang.met"
    }
#line 368 "metalang.met"
#line 369 "metalang.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 369 "metalang.met"
    switch( lexEl.Value) {
#line 369 "metalang.met"
#line 370 "metalang.met"
        case IN : 
#line 370 "metalang.met"
            tokenAhead = 0 ;
#line 370 "metalang.met"
            CommTerm();
#line 370 "metalang.met"
#line 370 "metalang.met"
            {
#line 370 "metalang.met"
                PPTREE _ptTree0=0;
#line 370 "metalang.met"
                {
#line 370 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 370 "metalang.met"
                    _ptRes1= MakeTree(TAKEL, 1);
#line 370 "metalang.met"
                    {
#line 370 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 370 "metalang.met"
                        _ptRes2= MakeTree(IN, 1);
#line 370 "metalang.met"
                        if ( (_ptTree2=NQUICK_CALL(_Tak(set)(error_free), 21, metalang))== (PPTREE) -1 ) {
#line 370 "metalang.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            PROG_EXIT(takel_stat_exit,"takel_stat")
#line 370 "metalang.met"
                        }
#line 370 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 370 "metalang.met"
                        _ptTree1=_ptRes2;
#line 370 "metalang.met"
                    }
#line 370 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 370 "metalang.met"
                    _ptTree0=_ptRes1;
#line 370 "metalang.met"
                }
#line 370 "metalang.met"
                _retValue =_ptTree0;
#line 370 "metalang.met"
                goto takel_stat_ret;
#line 370 "metalang.met"
            }
#line 370 "metalang.met"
            break;
#line 370 "metalang.met"
#line 371 "metalang.met"
        case META : 
#line 371 "metalang.met"
        case STRING : 
#line 371 "metalang.met"
#line 371 "metalang.met"
            {
#line 371 "metalang.met"
                PPTREE _ptTree0=0;
#line 371 "metalang.met"
                {
#line 371 "metalang.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 371 "metalang.met"
                    _ptRes1= MakeTree(TAKEL, 1);
#line 371 "metalang.met"
                    {
#line 371 "metalang.met"
                        PPTREE _ptTree2=0,_ptRes2=0;
#line 371 "metalang.met"
                        _ptRes2= MakeTree(STRING, 1);
#line 371 "metalang.met"
                        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 371 "metalang.met"
                        if ( ! TERM_OR_META(STRING,"STRING") || !(BUILD_TERM_META(_ptTree2))) {
#line 371 "metalang.met"
                            MulFreeTree(5,_ptRes2,_ptTree2,_ptRes1,_ptTree1,_ptTree0);
                            TOKEN_EXIT(takel_stat_exit,"STRING")
#line 371 "metalang.met"
                        } else {
#line 371 "metalang.met"
                            tokenAhead = 0 ;
#line 371 "metalang.met"
                        }
#line 371 "metalang.met"
                        ReplaceTree(_ptRes2, 1, _ptTree2);
#line 371 "metalang.met"
                        _ptTree1=_ptRes2;
#line 371 "metalang.met"
                    }
#line 371 "metalang.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 371 "metalang.met"
                    _ptTree0=_ptRes1;
#line 371 "metalang.met"
                }
#line 371 "metalang.met"
                _retValue =_ptTree0;
#line 371 "metalang.met"
                goto takel_stat_ret;
#line 371 "metalang.met"
            }
#line 371 "metalang.met"
            break;
#line 371 "metalang.met"
#line 372 "metalang.met"
        default : 
#line 372 "metalang.met"
#line 372 "metalang.met"
            {
#line 372 "metalang.met"
                PPTREE _ptTree0=0;
#line 372 "metalang.met"
                {
#line 372 "metalang.met"
                    PPTREE _ptRes1=0;
#line 372 "metalang.met"
                    _ptRes1= MakeTree(TAKEL, 1);
#line 372 "metalang.met"
                    _ptTree0=_ptRes1;
#line 372 "metalang.met"
                }
#line 372 "metalang.met"
                _retValue =_ptTree0;
#line 372 "metalang.met"
                goto takel_stat_ret;
#line 372 "metalang.met"
            }
#line 372 "metalang.met"
            break;
#line 372 "metalang.met"
    }
#line 372 "metalang.met"
#line 372 "metalang.met"
#line 373 "metalang.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 373 "metalang.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 373 "metalang.met"
return((PPTREE) 0);
#line 373 "metalang.met"

#line 373 "metalang.met"
takel_stat_exit :
#line 373 "metalang.met"

#line 373 "metalang.met"
    _Debug = TRACE_RULE("takel_stat",TRACE_EXIT,(PPTREE)0);
#line 373 "metalang.met"
    _funcLevel--;
#line 373 "metalang.met"
    return((PPTREE) -1) ;
#line 373 "metalang.met"

#line 373 "metalang.met"
takel_stat_ret :
#line 373 "metalang.met"
    
#line 373 "metalang.met"
    _Debug = TRACE_RULE("takel_stat",TRACE_RETURN,_retValue);
#line 373 "metalang.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 373 "metalang.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 373 "metalang.met"
    return _retValue ;
#line 373 "metalang.met"
}
#line 373 "metalang.met"

#line 373 "metalang.met"
