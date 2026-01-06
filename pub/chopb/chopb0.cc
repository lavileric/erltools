/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "chopb.h"


#line 498 "chopb.met"
PPTREE chopb::statement ( int error_free)
#line 498 "chopb.met"
{
#line 498 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 498 "chopb.met"
    int _value,_nbPre = 0 ;
#line 498 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 498 "chopb.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 498 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 498 "chopb.met"
#line 498 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 498 "chopb.met"
#line 498 "chopb.met"
    PPTREE statTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 498 "chopb.met"
#line 500 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 500 "chopb.met"
    switch( lexEl.Value) {
#line 500 "chopb.met"
#line 503 "chopb.met"
        case ARRO : 
#line 503 "chopb.met"
            tokenAhead = 0 ;
#line 503 "chopb.met"
            CommTerm();
#line 503 "chopb.met"
#line 502 "chopb.met"
#line 503 "chopb.met"
            {
#line 503 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 503 "chopb.met"
                _ptRes0= MakeTree(ARRO, 1);
#line 503 "chopb.met"
                {
#line 503 "chopb.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 503 "chopb.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 503 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 503 "chopb.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 503 "chopb.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 503 "chopb.met"
                    } else {
#line 503 "chopb.met"
                        tokenAhead = 0 ;
#line 503 "chopb.met"
                    }
#line 503 "chopb.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 503 "chopb.met"
                    _ptTree0=_ptRes1;
#line 503 "chopb.met"
                }
#line 503 "chopb.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 503 "chopb.met"
                statTree=_ptRes0;
#line 503 "chopb.met"
            }
#line 503 "chopb.met"
#line 504 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 504 "chopb.met"
#line 504 "chopb.met"
            }
#line 504 "chopb.met"
#line 504 "chopb.met"
            break;
#line 504 "chopb.met"
#line 509 "chopb.met"
        case AOUVAOUV : 
#line 509 "chopb.met"
            tokenAhead = 0 ;
#line 509 "chopb.met"
            CommTerm();
#line 509 "chopb.met"
#line 508 "chopb.met"
#line 509 "chopb.met"
            if ( (inter=NQUICK_CALL(_Tak(statement)(error_free), 145, chopb))== (PPTREE) -1 ) {
#line 509 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 509 "chopb.met"
            }
#line 509 "chopb.met"
#line 509 "chopb.met"
            _addlist1 = list ;
#line 509 "chopb.met"
#line 510 "chopb.met"
            do {
#line 510 "chopb.met"
#line 511 "chopb.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 511 "chopb.met"
#line 511 "chopb.met"
                if (list){
#line 511 "chopb.met"
#line 511 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 511 "chopb.met"
                } else {
#line 511 "chopb.met"
#line 511 "chopb.met"
                    list = _addlist1 ;
#line 511 "chopb.met"
                }
#line 511 "chopb.met"
#line 512 "chopb.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 512 "chopb.met"
#line 512 "chopb.met"
                }
#line 512 "chopb.met"
#line 512 "chopb.met"
#line 514 "chopb.met"
            } while ( !(! (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 145, chopb)))) ;
#line 514 "chopb.met"
#line 515 "chopb.met"
            {
#line 515 "chopb.met"
                PPTREE _ptRes0=0;
#line 515 "chopb.met"
                _ptRes0= MakeTree(ALINEA, 1);
#line 515 "chopb.met"
                ReplaceTree(_ptRes0, 1, list );
#line 515 "chopb.met"
                statTree=_ptRes0;
#line 515 "chopb.met"
            }
#line 515 "chopb.met"
#line 516 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 516 "chopb.met"
            if (  !SEE_TOKEN( AFERAFER,"}}") || !(CommTerm(),1)) {
#line 516 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"}}")
#line 516 "chopb.met"
            } else {
#line 516 "chopb.met"
                tokenAhead = 0 ;
#line 516 "chopb.met"
            }
#line 516 "chopb.met"
#line 516 "chopb.met"
            break;
#line 516 "chopb.met"
#line 518 "chopb.met"
        case INFESEPASUPE : 
#line 518 "chopb.met"
            tokenAhead = 0 ;
#line 518 "chopb.met"
            CommTerm();
#line 518 "chopb.met"
#line 518 "chopb.met"
            {
#line 518 "chopb.met"
                PPTREE _ptRes0=0;
#line 518 "chopb.met"
                _ptRes0= MakeTree(SEP_AFTER, 0);
#line 518 "chopb.met"
                statTree=_ptRes0;
#line 518 "chopb.met"
            }
#line 518 "chopb.met"
            break;
#line 518 "chopb.met"
#line 519 "chopb.met"
        case INFESEPBSUPE : 
#line 519 "chopb.met"
            tokenAhead = 0 ;
#line 519 "chopb.met"
            CommTerm();
#line 519 "chopb.met"
#line 519 "chopb.met"
            {
#line 519 "chopb.met"
                PPTREE _ptRes0=0;
#line 519 "chopb.met"
                _ptRes0= MakeTree(SEP_BEFORE, 0);
#line 519 "chopb.met"
                statTree=_ptRes0;
#line 519 "chopb.met"
            }
#line 519 "chopb.met"
            break;
#line 519 "chopb.met"
#line 520 "chopb.met"
        case INFESEPOSUPE : 
#line 520 "chopb.met"
            tokenAhead = 0 ;
#line 520 "chopb.met"
            CommTerm();
#line 520 "chopb.met"
#line 520 "chopb.met"
            {
#line 520 "chopb.met"
                PPTREE _ptRes0=0;
#line 520 "chopb.met"
                _ptRes0= MakeTree(SEP_OMIT, 0);
#line 520 "chopb.met"
                statTree=_ptRes0;
#line 520 "chopb.met"
            }
#line 520 "chopb.met"
            break;
#line 520 "chopb.met"
#line 524 "chopb.met"
        case INFE : 
#line 524 "chopb.met"
#line 522 "chopb.met"
#line 523 "chopb.met"
            (tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)));
#line 523 "chopb.met"
            switch( lexEl.Value) {
#line 523 "chopb.met"
#line 524 "chopb.met"
                case META : 
#line 524 "chopb.met"
                case SPACE_BEG : 
#line 524 "chopb.met"
                    tokenAhead = 0 ;
#line 524 "chopb.met"
                    CommTerm();
#line 524 "chopb.met"
#line 525 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 525 "chopb.met"
                    switch( lexEl.Value) {
#line 525 "chopb.met"
#line 526 "chopb.met"
                        case SUPE : 
#line 526 "chopb.met"
                            tokenAhead = 0 ;
#line 526 "chopb.met"
                            CommTerm();
#line 526 "chopb.met"
#line 526 "chopb.met"
                            {
#line 526 "chopb.met"
                                PPTREE _ptRes0=0;
#line 526 "chopb.met"
                                _ptRes0= MakeTree(SPACE, 1);
#line 526 "chopb.met"
                                statTree=_ptRes0;
#line 526 "chopb.met"
                            }
#line 526 "chopb.met"
                            break;
#line 526 "chopb.met"
#line 529 "chopb.met"
                        case VIRG : 
#line 529 "chopb.met"
                            tokenAhead = 0 ;
#line 529 "chopb.met"
                            CommTerm();
#line 529 "chopb.met"
#line 528 "chopb.met"
#line 529 "chopb.met"
                            {
#line 529 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 529 "chopb.met"
                                _ptRes0= MakeTree(SPACE, 1);
#line 529 "chopb.met"
                                {
#line 529 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 529 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 529 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 529 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 529 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 529 "chopb.met"
                                    } else {
#line 529 "chopb.met"
                                        tokenAhead = 0 ;
#line 529 "chopb.met"
                                    }
#line 529 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 529 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 529 "chopb.met"
                                }
#line 529 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 529 "chopb.met"
                                statTree=_ptRes0;
#line 529 "chopb.met"
                            }
#line 529 "chopb.met"
#line 532 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 532 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 532 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 532 "chopb.met"
                            } else {
#line 532 "chopb.met"
                                tokenAhead = 0 ;
#line 532 "chopb.met"
                            }
#line 532 "chopb.met"
#line 532 "chopb.met"
                            break;
#line 532 "chopb.met"
                        default :
#line 532 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 532 "chopb.met"
                            break;
#line 532 "chopb.met"
                    }
#line 532 "chopb.met"
                    break;
#line 532 "chopb.met"
#line 535 "chopb.met"
                case TAB_BEG : 
#line 535 "chopb.met"
                    tokenAhead = 0 ;
#line 535 "chopb.met"
                    CommTerm();
#line 535 "chopb.met"
#line 536 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 536 "chopb.met"
                    switch( lexEl.Value) {
#line 536 "chopb.met"
#line 537 "chopb.met"
                        case SUPE : 
#line 537 "chopb.met"
                            tokenAhead = 0 ;
#line 537 "chopb.met"
                            CommTerm();
#line 537 "chopb.met"
#line 537 "chopb.met"
                            {
#line 537 "chopb.met"
                                PPTREE _ptRes0=0;
#line 537 "chopb.met"
                                _ptRes0= MakeTree(TAB, 1);
#line 537 "chopb.met"
                                statTree=_ptRes0;
#line 537 "chopb.met"
                            }
#line 537 "chopb.met"
                            break;
#line 537 "chopb.met"
#line 540 "chopb.met"
                        case VIRG : 
#line 540 "chopb.met"
                            tokenAhead = 0 ;
#line 540 "chopb.met"
                            CommTerm();
#line 540 "chopb.met"
#line 539 "chopb.met"
#line 540 "chopb.met"
                            {
#line 540 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 540 "chopb.met"
                                _ptRes0= MakeTree(TAB, 1);
#line 540 "chopb.met"
                                {
#line 540 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 540 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 540 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 540 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 540 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 540 "chopb.met"
                                    } else {
#line 540 "chopb.met"
                                        tokenAhead = 0 ;
#line 540 "chopb.met"
                                    }
#line 540 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 540 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 540 "chopb.met"
                                }
#line 540 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 540 "chopb.met"
                                statTree=_ptRes0;
#line 540 "chopb.met"
                            }
#line 540 "chopb.met"
#line 543 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 543 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 543 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 543 "chopb.met"
                            } else {
#line 543 "chopb.met"
                                tokenAhead = 0 ;
#line 543 "chopb.met"
                            }
#line 543 "chopb.met"
#line 543 "chopb.met"
                            break;
#line 543 "chopb.met"
                        default :
#line 543 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 543 "chopb.met"
                            break;
#line 543 "chopb.met"
                    }
#line 543 "chopb.met"
                    break;
#line 543 "chopb.met"
#line 546 "chopb.met"
                case NL_BEG : 
#line 546 "chopb.met"
                    tokenAhead = 0 ;
#line 546 "chopb.met"
                    CommTerm();
#line 546 "chopb.met"
#line 547 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 547 "chopb.met"
                    switch( lexEl.Value) {
#line 547 "chopb.met"
#line 548 "chopb.met"
                        case SUPE : 
#line 548 "chopb.met"
                            tokenAhead = 0 ;
#line 548 "chopb.met"
                            CommTerm();
#line 548 "chopb.met"
#line 548 "chopb.met"
                            {
#line 548 "chopb.met"
                                PPTREE _ptRes0=0;
#line 548 "chopb.met"
                                _ptRes0= MakeTree(NEWLINE, 1);
#line 548 "chopb.met"
                                statTree=_ptRes0;
#line 548 "chopb.met"
                            }
#line 548 "chopb.met"
                            break;
#line 548 "chopb.met"
#line 551 "chopb.met"
                        case VIRG : 
#line 551 "chopb.met"
                            tokenAhead = 0 ;
#line 551 "chopb.met"
                            CommTerm();
#line 551 "chopb.met"
#line 550 "chopb.met"
#line 551 "chopb.met"
                            {
#line 551 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 551 "chopb.met"
                                _ptRes0= MakeTree(NEWLINE, 1);
#line 551 "chopb.met"
                                {
#line 551 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 551 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 551 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 551 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 551 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 551 "chopb.met"
                                    } else {
#line 551 "chopb.met"
                                        tokenAhead = 0 ;
#line 551 "chopb.met"
                                    }
#line 551 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 551 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 551 "chopb.met"
                                }
#line 551 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 551 "chopb.met"
                                statTree=_ptRes0;
#line 551 "chopb.met"
                            }
#line 551 "chopb.met"
#line 554 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 554 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 554 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 554 "chopb.met"
                            } else {
#line 554 "chopb.met"
                                tokenAhead = 0 ;
#line 554 "chopb.met"
                            }
#line 554 "chopb.met"
#line 554 "chopb.met"
                            break;
#line 554 "chopb.met"
                        default :
#line 554 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 554 "chopb.met"
                            break;
#line 554 "chopb.met"
                    }
#line 554 "chopb.met"
                    break;
#line 554 "chopb.met"
                default :
#line 554 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    CASE_EXIT(statement_exit,"either SPACE_BEG or TAB_BEG or NL_BEG")
#line 554 "chopb.met"
                    break;
#line 554 "chopb.met"
            }
#line 554 "chopb.met"
#line 558 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 558 "chopb.met"
#line 558 "chopb.met"
            }
#line 558 "chopb.met"
#line 558 "chopb.met"
            break;
#line 558 "chopb.met"
#line 561 "chopb.met"
        case FOREACH : 
#line 561 "chopb.met"
            tokenAhead = 0 ;
#line 561 "chopb.met"
            CommTerm();
#line 561 "chopb.met"
#line 562 "chopb.met"
#line 563 "chopb.met"
            {
#line 563 "chopb.met"
                PPTREE _ptRes0=0;
#line 563 "chopb.met"
                _ptRes0= MakeTree(FOREACH, 3);
#line 563 "chopb.met"
                statTree=_ptRes0;
#line 563 "chopb.met"
            }
#line 563 "chopb.met"
#line 564 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 564 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 564 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 564 "chopb.met"
            } else {
#line 564 "chopb.met"
                tokenAhead = 0 ;
#line 564 "chopb.met"
            }
#line 564 "chopb.met"
#line 565 "chopb.met"
            {
#line 565 "chopb.met"
                PPTREE _ptTree0=0;
#line 565 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 565 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 565 "chopb.met"
                }
#line 565 "chopb.met"
                ReplaceTree(statTree , 1 , _ptTree0);
#line 565 "chopb.met"
            }
#line 565 "chopb.met"
#line 566 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 566 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 566 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 566 "chopb.met"
            } else {
#line 566 "chopb.met"
                tokenAhead = 0 ;
#line 566 "chopb.met"
            }
#line 566 "chopb.met"
#line 567 "chopb.met"
            {
#line 567 "chopb.met"
                PPTREE _ptTree0=0;
#line 567 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 567 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 567 "chopb.met"
                }
#line 567 "chopb.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 567 "chopb.met"
            }
#line 567 "chopb.met"
#line 568 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 568 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 568 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 568 "chopb.met"
            } else {
#line 568 "chopb.met"
                tokenAhead = 0 ;
#line 568 "chopb.met"
            }
#line 568 "chopb.met"
#line 572 "chopb.met"
            if (! (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 145, chopb))){
#line 572 "chopb.met"
#line 574 "chopb.met"
                if ( (inter=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 574 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 574 "chopb.met"
                }
#line 574 "chopb.met"
            }
#line 574 "chopb.met"
#line 575 "chopb.met"
            ReplaceTree(statTree ,3 ,inter );
#line 575 "chopb.met"
#line 576 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 576 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 576 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 576 "chopb.met"
            } else {
#line 576 "chopb.met"
                tokenAhead = 0 ;
#line 576 "chopb.met"
            }
#line 576 "chopb.met"
#line 577 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 577 "chopb.met"
#line 577 "chopb.met"
            }
#line 577 "chopb.met"
#line 577 "chopb.met"
            break;
#line 577 "chopb.met"
#line 580 "chopb.met"
        case FORALLSONS : 
#line 580 "chopb.met"
            tokenAhead = 0 ;
#line 580 "chopb.met"
            CommTerm();
#line 580 "chopb.met"
#line 581 "chopb.met"
#line 582 "chopb.met"
            {
#line 582 "chopb.met"
                PPTREE _ptRes0=0;
#line 582 "chopb.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 582 "chopb.met"
                statTree=_ptRes0;
#line 582 "chopb.met"
            }
#line 582 "chopb.met"
#line 583 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 583 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 583 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 583 "chopb.met"
            } else {
#line 583 "chopb.met"
                tokenAhead = 0 ;
#line 583 "chopb.met"
            }
#line 583 "chopb.met"
#line 584 "chopb.met"
            {
#line 584 "chopb.met"
                PPTREE _ptTree0=0;
#line 584 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 584 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 584 "chopb.met"
                }
#line 584 "chopb.met"
                ReplaceTree(statTree , 1 , _ptTree0);
#line 584 "chopb.met"
            }
#line 584 "chopb.met"
#line 585 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 585 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 585 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 585 "chopb.met"
            } else {
#line 585 "chopb.met"
                tokenAhead = 0 ;
#line 585 "chopb.met"
            }
#line 585 "chopb.met"
#line 586 "chopb.met"
            {
#line 586 "chopb.met"
                PPTREE _ptTree0=0;
#line 586 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 145, chopb))== (PPTREE) -1 ) {
#line 586 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 586 "chopb.met"
                }
#line 586 "chopb.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 586 "chopb.met"
            }
#line 586 "chopb.met"
#line 587 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 587 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 587 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 587 "chopb.met"
            } else {
#line 587 "chopb.met"
                tokenAhead = 0 ;
#line 587 "chopb.met"
            }
#line 587 "chopb.met"
#line 588 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 588 "chopb.met"
#line 588 "chopb.met"
            }
#line 588 "chopb.met"
#line 588 "chopb.met"
            break;
#line 588 "chopb.met"
#line 592 "chopb.met"
        default : 
#line 592 "chopb.met"
#line 592 "chopb.met"
            if (NPUSH_CALL_AFF_VERIF(statTree = ,_Tak(cplus::statement), 169, chopb)){
#line 592 "chopb.met"
#line 593 "chopb.met"
                {
#line 593 "chopb.met"
                    _retValue = statTree ;
#line 593 "chopb.met"
                    goto statement_ret;
#line 593 "chopb.met"
                    
#line 593 "chopb.met"
                }
#line 593 "chopb.met"
            } else {
#line 593 "chopb.met"
#line 595 "chopb.met"
#line 596 "chopb.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, chopb)){
#line 596 "chopb.met"
#line 599 "chopb.met"
                    
#line 599 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    LEX_EXIT ("",0);
#line 599 "chopb.met"
                    goto statement_exit;
#line 599 "chopb.met"
#line 600 "chopb.met"
                } else {
#line 600 "chopb.met"
#line 602 "chopb.met"
#line 603 "chopb.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 603 "chopb.met"
                        MulFreeTree(4,_addlist1,inter,list,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 603 "chopb.met"
                    }
#line 603 "chopb.met"
#line 604 "chopb.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 604 "chopb.met"
#line 604 "chopb.met"
                    }
#line 604 "chopb.met"
#line 604 "chopb.met"
                }
#line 604 "chopb.met"
#line 604 "chopb.met"
            }
#line 604 "chopb.met"
            break;
#line 604 "chopb.met"
    }
#line 604 "chopb.met"
#line 609 "chopb.met"
    {
#line 609 "chopb.met"
        _retValue = statTree ;
#line 609 "chopb.met"
        goto statement_ret;
#line 609 "chopb.met"
        
#line 609 "chopb.met"
    }
#line 609 "chopb.met"
#line 609 "chopb.met"
#line 609 "chopb.met"

#line 610 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 610 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 610 "chopb.met"
return((PPTREE) 0);
#line 610 "chopb.met"

#line 610 "chopb.met"
statement_exit :
#line 610 "chopb.met"

#line 610 "chopb.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 610 "chopb.met"
    _funcLevel--;
#line 610 "chopb.met"
    return((PPTREE) -1) ;
#line 610 "chopb.met"

#line 610 "chopb.met"
statement_ret :
#line 610 "chopb.met"
    
#line 610 "chopb.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 610 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 610 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 610 "chopb.met"
    return _retValue ;
#line 610 "chopb.met"
}
#line 610 "chopb.met"

#line 610 "chopb.met"
#line 645 "chopb.met"
PPTREE chopb::take_follow ( int error_free)
#line 645 "chopb.met"
{
#line 645 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 645 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 645 "chopb.met"
    int _value,_nbPre = 0 ;
#line 645 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 645 "chopb.met"
    int _Debug = TRACE_RULE("take_follow",TRACE_ENTER,(PPTREE)0);
#line 645 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 645 "chopb.met"
#line 645 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 645 "chopb.met"
#line 645 "chopb.met"
    PPTREE statTree = (PPTREE) 0,list = (PPTREE) 0,name = (PPTREE) 0;
#line 645 "chopb.met"
#line 647 "chopb.met"
#line 648 "chopb.met"
    {
#line 648 "chopb.met"
        PPTREE _ptRes0=0;
#line 648 "chopb.met"
        _ptRes0= MakeTree(NODE_TREE, 1);
#line 648 "chopb.met"
        statTree=_ptRes0;
#line 648 "chopb.met"
    }
#line 648 "chopb.met"
#line 649 "chopb.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFESUPE,"<>") && (tokenAhead = 0,CommTerm(),1)){
#line 649 "chopb.met"
#line 649 "chopb.met"
    } else {
#line 649 "chopb.met"
#line 651 "chopb.met"
#line 652 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 652 "chopb.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 652 "chopb.met"
            MulFreeTree(4,_addlist1,list,name,statTree);
            TOKEN_EXIT(take_follow_exit,"<")
#line 652 "chopb.met"
        } else {
#line 652 "chopb.met"
            tokenAhead = 0 ;
#line 652 "chopb.met"
        }
#line 652 "chopb.met"
#line 653 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(name = ,_Tak(qualified_name), 122, chopb)){
#line 653 "chopb.met"
#line 654 "chopb.met"
            list =AddList(list ,name );
#line 654 "chopb.met"
#line 654 "chopb.met"
        } else {
#line 654 "chopb.met"
#line 656 "chopb.met"
            list =AddList(list , (PPTREE) 0);
#line 656 "chopb.met"
        }
#line 656 "chopb.met"
#line 657 "chopb.met"
        {
#line 657 "chopb.met"
            inMakeTree = 1 ;
#line 657 "chopb.met"
#line 659 "chopb.met"
#line 659 "chopb.met"
            _addlist1 = list ;
#line 659 "chopb.met"
#line 658 "chopb.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 658 "chopb.met"
#line 659 "chopb.met"
#line 659 "chopb.met"
                {
#line 659 "chopb.met"
                    PPTREE _ptTree0=0;
#line 659 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_super)(error_free), 174, chopb))== (PPTREE) -1 ) {
#line 659 "chopb.met"
                        MulFreeTree(5,_ptTree0,_addlist1,list,name,statTree);
                        PROG_EXIT(take_follow_exit,"take_follow")
#line 659 "chopb.met"
                    }
#line 659 "chopb.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 659 "chopb.met"
                }
#line 659 "chopb.met"
#line 659 "chopb.met"
                if (list){
#line 659 "chopb.met"
#line 659 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 659 "chopb.met"
                } else {
#line 659 "chopb.met"
#line 659 "chopb.met"
                    list = _addlist1 ;
#line 659 "chopb.met"
                }
#line 659 "chopb.met"
            } 
#line 659 "chopb.met"
            inMakeTree =  _oldinMakeTree;
#line 659 "chopb.met"
        }
#line 659 "chopb.met"
#line 660 "chopb.met"
        (tokenAhead == 17|| (LexSup(),TRACE_LEX(1)));
#line 660 "chopb.met"
        if ( ! TERM_OR_META(MAKETREE_SUP,"MAKETREE_SUP") || !(CommTerm(),1)) {
#line 660 "chopb.met"
            MulFreeTree(4,_addlist1,list,name,statTree);
            TOKEN_EXIT(take_follow_exit,"MAKETREE_SUP")
#line 660 "chopb.met"
        } else {
#line 660 "chopb.met"
            tokenAhead = 0 ;
#line 660 "chopb.met"
        }
#line 660 "chopb.met"
#line 660 "chopb.met"
    }
#line 660 "chopb.met"
#line 662 "chopb.met"
    ReplaceTree(statTree ,1 ,list );
#line 662 "chopb.met"
#line 662 "chopb.met"
#line 664 "chopb.met"
    {
#line 664 "chopb.met"
        _retValue = statTree ;
#line 664 "chopb.met"
        goto take_follow_ret;
#line 664 "chopb.met"
        
#line 664 "chopb.met"
    }
#line 664 "chopb.met"
#line 664 "chopb.met"
#line 664 "chopb.met"

#line 665 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 665 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 665 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 665 "chopb.met"
return((PPTREE) 0);
#line 665 "chopb.met"

#line 665 "chopb.met"
take_follow_exit :
#line 665 "chopb.met"

#line 665 "chopb.met"
    _Debug = TRACE_RULE("take_follow",TRACE_EXIT,(PPTREE)0);
#line 665 "chopb.met"
    _funcLevel--;
#line 665 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 665 "chopb.met"
    return((PPTREE) -1) ;
#line 665 "chopb.met"

#line 665 "chopb.met"
take_follow_ret :
#line 665 "chopb.met"
    
#line 665 "chopb.met"
    _Debug = TRACE_RULE("take_follow",TRACE_RETURN,_retValue);
#line 665 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 665 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 665 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 665 "chopb.met"
    return _retValue ;
#line 665 "chopb.met"
}
#line 665 "chopb.met"

#line 665 "chopb.met"
#line 629 "chopb.met"
PPTREE chopb::take_follow_list ( int error_free)
#line 629 "chopb.met"
{
#line 629 "chopb.met"
    int  _oldor_not_ok = or_not_ok;
#line 629 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 629 "chopb.met"
    int _value,_nbPre = 0 ;
#line 629 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 629 "chopb.met"
    int _Debug = TRACE_RULE("take_follow_list",TRACE_ENTER,(PPTREE)0);
#line 629 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 629 "chopb.met"
#line 629 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 629 "chopb.met"
#line 629 "chopb.met"
    PPTREE statTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 629 "chopb.met"
#line 631 "chopb.met"
    {
#line 631 "chopb.met"
        or_not_ok = 1 ;
#line 631 "chopb.met"
#line 632 "chopb.met"
#line 633 "chopb.met"
        {
#line 633 "chopb.met"
            PPTREE _ptRes0=0;
#line 633 "chopb.met"
            _ptRes0= MakeTree(NODE_LIST, 1);
#line 633 "chopb.met"
            statTree=_ptRes0;
#line 633 "chopb.met"
        }
#line 633 "chopb.met"
#line 634 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(take_follow_super), 174, chopb)){
#line 634 "chopb.met"
#line 635 "chopb.met"
#line 636 "chopb.met"
            list =AddList(list ,inter );
#line 636 "chopb.met"
#line 636 "chopb.met"
            _addlist1 = list ;
#line 636 "chopb.met"
#line 637 "chopb.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 637 "chopb.met"
#line 638 "chopb.met"
#line 638 "chopb.met"
                {
#line 638 "chopb.met"
                    PPTREE _ptTree0=0;
#line 638 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_super)(error_free), 174, chopb))== (PPTREE) -1 ) {
#line 638 "chopb.met"
                        MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                        PROG_EXIT(take_follow_list_exit,"take_follow_list")
#line 638 "chopb.met"
                    }
#line 638 "chopb.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 638 "chopb.met"
                }
#line 638 "chopb.met"
#line 638 "chopb.met"
                if (list){
#line 638 "chopb.met"
#line 638 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 638 "chopb.met"
                } else {
#line 638 "chopb.met"
#line 638 "chopb.met"
                    list = _addlist1 ;
#line 638 "chopb.met"
                }
#line 638 "chopb.met"
            } 
#line 638 "chopb.met"
#line 638 "chopb.met"
#line 638 "chopb.met"
        }
#line 638 "chopb.met"
#line 640 "chopb.met"
        ReplaceTree(statTree ,1 ,list );
#line 640 "chopb.met"
#line 640 "chopb.met"
        or_not_ok =  _oldor_not_ok;
#line 640 "chopb.met"
    }
#line 640 "chopb.met"
#line 642 "chopb.met"
    {
#line 642 "chopb.met"
        _retValue = statTree ;
#line 642 "chopb.met"
        goto take_follow_list_ret;
#line 642 "chopb.met"
        
#line 642 "chopb.met"
    }
#line 642 "chopb.met"
#line 642 "chopb.met"
#line 642 "chopb.met"

#line 643 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 643 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 643 "chopb.met"
or_not_ok =  _oldor_not_ok;
#line 643 "chopb.met"
return((PPTREE) 0);
#line 643 "chopb.met"

#line 643 "chopb.met"
take_follow_list_exit :
#line 643 "chopb.met"

#line 643 "chopb.met"
    _Debug = TRACE_RULE("take_follow_list",TRACE_EXIT,(PPTREE)0);
#line 643 "chopb.met"
    _funcLevel--;
#line 643 "chopb.met"
    or_not_ok =  _oldor_not_ok;
#line 643 "chopb.met"
    return((PPTREE) -1) ;
#line 643 "chopb.met"

#line 643 "chopb.met"
take_follow_list_ret :
#line 643 "chopb.met"
    
#line 643 "chopb.met"
    _Debug = TRACE_RULE("take_follow_list",TRACE_RETURN,_retValue);
#line 643 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 643 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 643 "chopb.met"
    or_not_ok =  _oldor_not_ok;
#line 643 "chopb.met"
    return _retValue ;
#line 643 "chopb.met"
}
#line 643 "chopb.met"

#line 643 "chopb.met"
#line 612 "chopb.met"
PPTREE chopb::take_follow_super ( int error_free)
#line 612 "chopb.met"
{
#line 612 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 612 "chopb.met"
    int _value,_nbPre = 0 ;
#line 612 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 612 "chopb.met"
    int _Debug = TRACE_RULE("take_follow_super",TRACE_ENTER,(PPTREE)0);
#line 612 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 612 "chopb.met"
#line 612 "chopb.met"
    PPTREE identTree = (PPTREE) 0;
#line 612 "chopb.met"
#line 614 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 614 "chopb.met"
    switch( lexEl.Value) {
#line 614 "chopb.met"
#line 615 "chopb.met"
        case POINPOINPOIN : 
#line 615 "chopb.met"
            tokenAhead = 0 ;
#line 615 "chopb.met"
            CommTerm();
#line 615 "chopb.met"
#line 615 "chopb.met"
            {
#line 615 "chopb.met"
                PPTREE _ptTree0=0;
#line 615 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_list)(error_free), 173, chopb))== (PPTREE) -1 ) {
#line 615 "chopb.met"
                    MulFreeTree(2,_ptTree0,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 615 "chopb.met"
                }
#line 615 "chopb.met"
                _retValue =_ptTree0;
#line 615 "chopb.met"
                goto take_follow_super_ret;
#line 615 "chopb.met"
            }
#line 615 "chopb.met"
            break;
#line 615 "chopb.met"
#line 618 "chopb.met"
        case POUV : 
#line 618 "chopb.met"
            tokenAhead = 0 ;
#line 618 "chopb.met"
            CommTerm();
#line 618 "chopb.met"
#line 617 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PFER,")") && (tokenAhead = 0,CommTerm(),1)){
#line 617 "chopb.met"
#line 618 "chopb.met"
                {
#line 618 "chopb.met"
                    PPTREE _ptTree0=0;
#line 618 "chopb.met"
                    {
#line 618 "chopb.met"
                        PPTREE _ptRes1=0;
#line 618 "chopb.met"
                        _ptRes1= MakeTree(NIL, 0);
#line 618 "chopb.met"
                        _ptTree0=_ptRes1;
#line 618 "chopb.met"
                    }
#line 618 "chopb.met"
                    _retValue =_ptTree0;
#line 618 "chopb.met"
                    goto take_follow_super_ret;
#line 618 "chopb.met"
                }
#line 618 "chopb.met"
            } else {
#line 618 "chopb.met"
#line 620 "chopb.met"
#line 621 "chopb.met"
                if ( (identTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 621 "chopb.met"
                    MulFreeTree(1,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 621 "chopb.met"
                }
#line 621 "chopb.met"
#line 622 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 622 "chopb.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 622 "chopb.met"
                    MulFreeTree(1,identTree);
                    TOKEN_EXIT(take_follow_super_exit,")")
#line 622 "chopb.met"
                } else {
#line 622 "chopb.met"
                    tokenAhead = 0 ;
#line 622 "chopb.met"
                }
#line 622 "chopb.met"
#line 623 "chopb.met"
                {
#line 623 "chopb.met"
                    _retValue = identTree ;
#line 623 "chopb.met"
                    goto take_follow_super_ret;
#line 623 "chopb.met"
                    
#line 623 "chopb.met"
                }
#line 623 "chopb.met"
#line 623 "chopb.met"
            }
#line 623 "chopb.met"
            break;
#line 623 "chopb.met"
#line 625 "chopb.met"
        default : 
#line 625 "chopb.met"
#line 625 "chopb.met"
            {
#line 625 "chopb.met"
                PPTREE _ptTree0=0;
#line 625 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 625 "chopb.met"
                    MulFreeTree(2,_ptTree0,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 625 "chopb.met"
                }
#line 625 "chopb.met"
                _retValue =_ptTree0;
#line 625 "chopb.met"
                goto take_follow_super_ret;
#line 625 "chopb.met"
            }
#line 625 "chopb.met"
            break;
#line 625 "chopb.met"
    }
#line 625 "chopb.met"
#line 625 "chopb.met"
#line 626 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 626 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 626 "chopb.met"
return((PPTREE) 0);
#line 626 "chopb.met"

#line 626 "chopb.met"
take_follow_super_exit :
#line 626 "chopb.met"

#line 626 "chopb.met"
    _Debug = TRACE_RULE("take_follow_super",TRACE_EXIT,(PPTREE)0);
#line 626 "chopb.met"
    _funcLevel--;
#line 626 "chopb.met"
    return((PPTREE) -1) ;
#line 626 "chopb.met"

#line 626 "chopb.met"
take_follow_super_ret :
#line 626 "chopb.met"
    
#line 626 "chopb.met"
    _Debug = TRACE_RULE("take_follow_super",TRACE_RETURN,_retValue);
#line 626 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 626 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 626 "chopb.met"
    return _retValue ;
#line 626 "chopb.met"
}
#line 626 "chopb.met"

#line 626 "chopb.met"
