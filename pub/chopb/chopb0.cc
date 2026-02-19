/*************************************************************************/
/*                                                                       */
/*        Produced by MetaGen version 2.0  -    1989-2006                 */
/*       Syntaxic Analyzer Meta Generator developped by                  */
/*                  Eric Lavillonniere                                   */
/*                                                                       */
/*************************************************************************/

#include "token.h"
#include "chopb.h"


#line 499 "chopb.met"
PPTREE chopb::statement ( int error_free)
#line 499 "chopb.met"
{
#line 499 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 499 "chopb.met"
    int _value,_nbPre = 0 ;
#line 499 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 499 "chopb.met"
    int _Debug = TRACE_RULE("statement",TRACE_ENTER,(PPTREE)0);
#line 499 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 499 "chopb.met"
#line 499 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 499 "chopb.met"
#line 499 "chopb.met"
    PPTREE statTree = (PPTREE) 0,inter = (PPTREE) 0,list = (PPTREE) 0;
#line 499 "chopb.met"
#line 501 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 501 "chopb.met"
    switch( lexEl.Value) {
#line 501 "chopb.met"
#line 504 "chopb.met"
        case ARRO : 
#line 504 "chopb.met"
            tokenAhead = 0 ;
#line 504 "chopb.met"
            CommTerm();
#line 504 "chopb.met"
#line 503 "chopb.met"
#line 504 "chopb.met"
            {
#line 504 "chopb.met"
                PPTREE _ptTree0=0,_ptRes0=0;
#line 504 "chopb.met"
                _ptRes0= MakeTree(ARRO, 1);
#line 504 "chopb.met"
                {
#line 504 "chopb.met"
                    PPTREE _ptTree1=0,_ptRes1=0;
#line 504 "chopb.met"
                    _ptRes1= MakeTree(IDENT, 1);
#line 504 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 504 "chopb.met"
                    if ( ! TERM_OR_META(IDENT,"IDENT") || !(BUILD_TERM_META(_ptTree1))) {
#line 504 "chopb.met"
                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                        TOKEN_EXIT(statement_exit,"IDENT")
#line 504 "chopb.met"
                    } else {
#line 504 "chopb.met"
                        tokenAhead = 0 ;
#line 504 "chopb.met"
                    }
#line 504 "chopb.met"
                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 504 "chopb.met"
                    _ptTree0=_ptRes1;
#line 504 "chopb.met"
                }
#line 504 "chopb.met"
                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 504 "chopb.met"
                statTree=_ptRes0;
#line 504 "chopb.met"
            }
#line 504 "chopb.met"
#line 505 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 505 "chopb.met"
#line 505 "chopb.met"
            }
#line 505 "chopb.met"
#line 505 "chopb.met"
            break;
#line 505 "chopb.met"
#line 510 "chopb.met"
        case AOUVAOUV : 
#line 510 "chopb.met"
            tokenAhead = 0 ;
#line 510 "chopb.met"
            CommTerm();
#line 510 "chopb.met"
#line 509 "chopb.met"
#line 510 "chopb.met"
            if ( (inter=NQUICK_CALL(_Tak(statement)(error_free), 146, chopb))== (PPTREE) -1 ) {
#line 510 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                PROG_EXIT(statement_exit,"statement")
#line 510 "chopb.met"
            }
#line 510 "chopb.met"
#line 510 "chopb.met"
            _addlist1 = list ;
#line 510 "chopb.met"
#line 511 "chopb.met"
            do {
#line 511 "chopb.met"
#line 512 "chopb.met"
                _addlist1 =AddList(_addlist1 ,inter );
#line 512 "chopb.met"
#line 512 "chopb.met"
                if (list){
#line 512 "chopb.met"
#line 512 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 512 "chopb.met"
                } else {
#line 512 "chopb.met"
#line 512 "chopb.met"
                    list = _addlist1 ;
#line 512 "chopb.met"
                }
#line 512 "chopb.met"
#line 513 "chopb.met"
                if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 513 "chopb.met"
#line 513 "chopb.met"
                }
#line 513 "chopb.met"
#line 513 "chopb.met"
#line 515 "chopb.met"
            } while ( !(! (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 146, chopb)))) ;
#line 515 "chopb.met"
#line 516 "chopb.met"
            {
#line 516 "chopb.met"
                PPTREE _ptRes0=0;
#line 516 "chopb.met"
                _ptRes0= MakeTree(ALINEA, 1);
#line 516 "chopb.met"
                ReplaceTree(_ptRes0, 1, list );
#line 516 "chopb.met"
                statTree=_ptRes0;
#line 516 "chopb.met"
            }
#line 516 "chopb.met"
#line 517 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 517 "chopb.met"
            if (  !SEE_TOKEN( AFERAFER,"}}") || !(CommTerm(),1)) {
#line 517 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"}}")
#line 517 "chopb.met"
            } else {
#line 517 "chopb.met"
                tokenAhead = 0 ;
#line 517 "chopb.met"
            }
#line 517 "chopb.met"
#line 517 "chopb.met"
            break;
#line 517 "chopb.met"
#line 519 "chopb.met"
        case INFESEPASUPE : 
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
                _ptRes0= MakeTree(SEP_AFTER, 0);
#line 519 "chopb.met"
                statTree=_ptRes0;
#line 519 "chopb.met"
            }
#line 519 "chopb.met"
            break;
#line 519 "chopb.met"
#line 520 "chopb.met"
        case INFESEPBSUPE : 
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
                _ptRes0= MakeTree(SEP_BEFORE, 0);
#line 520 "chopb.met"
                statTree=_ptRes0;
#line 520 "chopb.met"
            }
#line 520 "chopb.met"
            break;
#line 520 "chopb.met"
#line 521 "chopb.met"
        case INFESEPOSUPE : 
#line 521 "chopb.met"
            tokenAhead = 0 ;
#line 521 "chopb.met"
            CommTerm();
#line 521 "chopb.met"
#line 521 "chopb.met"
            {
#line 521 "chopb.met"
                PPTREE _ptRes0=0;
#line 521 "chopb.met"
                _ptRes0= MakeTree(SEP_OMIT, 0);
#line 521 "chopb.met"
                statTree=_ptRes0;
#line 521 "chopb.met"
            }
#line 521 "chopb.met"
            break;
#line 521 "chopb.met"
#line 525 "chopb.met"
        case INFE : 
#line 525 "chopb.met"
#line 523 "chopb.met"
#line 524 "chopb.met"
            (tokenAhead == 18|| (formatBeg(),TRACE_LEX(1)));
#line 524 "chopb.met"
            switch( lexEl.Value) {
#line 524 "chopb.met"
#line 525 "chopb.met"
                case META : 
#line 525 "chopb.met"
                case SPACE_BEG : 
#line 525 "chopb.met"
                    tokenAhead = 0 ;
#line 525 "chopb.met"
                    CommTerm();
#line 525 "chopb.met"
#line 526 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 526 "chopb.met"
                    switch( lexEl.Value) {
#line 526 "chopb.met"
#line 527 "chopb.met"
                        case SUPE : 
#line 527 "chopb.met"
                            tokenAhead = 0 ;
#line 527 "chopb.met"
                            CommTerm();
#line 527 "chopb.met"
#line 527 "chopb.met"
                            {
#line 527 "chopb.met"
                                PPTREE _ptRes0=0;
#line 527 "chopb.met"
                                _ptRes0= MakeTree(SPACE, 1);
#line 527 "chopb.met"
                                statTree=_ptRes0;
#line 527 "chopb.met"
                            }
#line 527 "chopb.met"
                            break;
#line 527 "chopb.met"
#line 530 "chopb.met"
                        case VIRG : 
#line 530 "chopb.met"
                            tokenAhead = 0 ;
#line 530 "chopb.met"
                            CommTerm();
#line 530 "chopb.met"
#line 529 "chopb.met"
#line 530 "chopb.met"
                            {
#line 530 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 530 "chopb.met"
                                _ptRes0= MakeTree(SPACE, 1);
#line 530 "chopb.met"
                                {
#line 530 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 530 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 530 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 530 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 530 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 530 "chopb.met"
                                    } else {
#line 530 "chopb.met"
                                        tokenAhead = 0 ;
#line 530 "chopb.met"
                                    }
#line 530 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 530 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 530 "chopb.met"
                                }
#line 530 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 530 "chopb.met"
                                statTree=_ptRes0;
#line 530 "chopb.met"
                            }
#line 530 "chopb.met"
#line 533 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 533 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 533 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 533 "chopb.met"
                            } else {
#line 533 "chopb.met"
                                tokenAhead = 0 ;
#line 533 "chopb.met"
                            }
#line 533 "chopb.met"
#line 533 "chopb.met"
                            break;
#line 533 "chopb.met"
                        default :
#line 533 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 533 "chopb.met"
                            break;
#line 533 "chopb.met"
                    }
#line 533 "chopb.met"
                    break;
#line 533 "chopb.met"
#line 536 "chopb.met"
                case TAB_BEG : 
#line 536 "chopb.met"
                    tokenAhead = 0 ;
#line 536 "chopb.met"
                    CommTerm();
#line 536 "chopb.met"
#line 537 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 537 "chopb.met"
                    switch( lexEl.Value) {
#line 537 "chopb.met"
#line 538 "chopb.met"
                        case SUPE : 
#line 538 "chopb.met"
                            tokenAhead = 0 ;
#line 538 "chopb.met"
                            CommTerm();
#line 538 "chopb.met"
#line 538 "chopb.met"
                            {
#line 538 "chopb.met"
                                PPTREE _ptRes0=0;
#line 538 "chopb.met"
                                _ptRes0= MakeTree(TAB, 1);
#line 538 "chopb.met"
                                statTree=_ptRes0;
#line 538 "chopb.met"
                            }
#line 538 "chopb.met"
                            break;
#line 538 "chopb.met"
#line 541 "chopb.met"
                        case VIRG : 
#line 541 "chopb.met"
                            tokenAhead = 0 ;
#line 541 "chopb.met"
                            CommTerm();
#line 541 "chopb.met"
#line 540 "chopb.met"
#line 541 "chopb.met"
                            {
#line 541 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 541 "chopb.met"
                                _ptRes0= MakeTree(TAB, 1);
#line 541 "chopb.met"
                                {
#line 541 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 541 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 541 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 541 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 541 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 541 "chopb.met"
                                    } else {
#line 541 "chopb.met"
                                        tokenAhead = 0 ;
#line 541 "chopb.met"
                                    }
#line 541 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 541 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 541 "chopb.met"
                                }
#line 541 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 541 "chopb.met"
                                statTree=_ptRes0;
#line 541 "chopb.met"
                            }
#line 541 "chopb.met"
#line 544 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 544 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 544 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 544 "chopb.met"
                            } else {
#line 544 "chopb.met"
                                tokenAhead = 0 ;
#line 544 "chopb.met"
                            }
#line 544 "chopb.met"
#line 544 "chopb.met"
                            break;
#line 544 "chopb.met"
                        default :
#line 544 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 544 "chopb.met"
                            break;
#line 544 "chopb.met"
                    }
#line 544 "chopb.met"
                    break;
#line 544 "chopb.met"
#line 547 "chopb.met"
                case NL_BEG : 
#line 547 "chopb.met"
                    tokenAhead = 0 ;
#line 547 "chopb.met"
                    CommTerm();
#line 547 "chopb.met"
#line 548 "chopb.met"
                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 548 "chopb.met"
                    switch( lexEl.Value) {
#line 548 "chopb.met"
#line 549 "chopb.met"
                        case SUPE : 
#line 549 "chopb.met"
                            tokenAhead = 0 ;
#line 549 "chopb.met"
                            CommTerm();
#line 549 "chopb.met"
#line 549 "chopb.met"
                            {
#line 549 "chopb.met"
                                PPTREE _ptRes0=0;
#line 549 "chopb.met"
                                _ptRes0= MakeTree(NEWLINE, 1);
#line 549 "chopb.met"
                                statTree=_ptRes0;
#line 549 "chopb.met"
                            }
#line 549 "chopb.met"
                            break;
#line 549 "chopb.met"
#line 552 "chopb.met"
                        case VIRG : 
#line 552 "chopb.met"
                            tokenAhead = 0 ;
#line 552 "chopb.met"
                            CommTerm();
#line 552 "chopb.met"
#line 551 "chopb.met"
#line 552 "chopb.met"
                            {
#line 552 "chopb.met"
                                PPTREE _ptTree0=0,_ptRes0=0;
#line 552 "chopb.met"
                                _ptRes0= MakeTree(NEWLINE, 1);
#line 552 "chopb.met"
                                {
#line 552 "chopb.met"
                                    PPTREE _ptTree1=0,_ptRes1=0;
#line 552 "chopb.met"
                                    _ptRes1= MakeTree(INTEGER, 1);
#line 552 "chopb.met"
                                    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 552 "chopb.met"
                                    if ( ! TERM_OR_META(INTEGER,"INTEGER") || !(BUILD_TERM_META(_ptTree1))) {
#line 552 "chopb.met"
                                        MulFreeTree(8,_ptRes1,_ptTree1,_ptRes0,_ptTree0,_addlist1,inter,list,statTree);
                                        TOKEN_EXIT(statement_exit,"INTEGER")
#line 552 "chopb.met"
                                    } else {
#line 552 "chopb.met"
                                        tokenAhead = 0 ;
#line 552 "chopb.met"
                                    }
#line 552 "chopb.met"
                                    ReplaceTree(_ptRes1, 1, _ptTree1);
#line 552 "chopb.met"
                                    _ptTree0=_ptRes1;
#line 552 "chopb.met"
                                }
#line 552 "chopb.met"
                                ReplaceTree(_ptRes0, 1, _ptTree0);
#line 552 "chopb.met"
                                statTree=_ptRes0;
#line 552 "chopb.met"
                            }
#line 552 "chopb.met"
#line 555 "chopb.met"
                            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 555 "chopb.met"
                            if (  !SEE_TOKEN( SUPE,">") || !(CommTerm(),1)) {
#line 555 "chopb.met"
                                MulFreeTree(4,_addlist1,inter,list,statTree);
                                TOKEN_EXIT(statement_exit,">")
#line 555 "chopb.met"
                            } else {
#line 555 "chopb.met"
                                tokenAhead = 0 ;
#line 555 "chopb.met"
                            }
#line 555 "chopb.met"
#line 555 "chopb.met"
                            break;
#line 555 "chopb.met"
                        default :
#line 555 "chopb.met"
                            MulFreeTree(4,_addlist1,inter,list,statTree);
                            CASE_EXIT(statement_exit,"either > or ,")
#line 555 "chopb.met"
                            break;
#line 555 "chopb.met"
                    }
#line 555 "chopb.met"
                    break;
#line 555 "chopb.met"
                default :
#line 555 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    CASE_EXIT(statement_exit,"either SPACE_BEG or TAB_BEG or NL_BEG")
#line 555 "chopb.met"
                    break;
#line 555 "chopb.met"
            }
#line 555 "chopb.met"
#line 559 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 559 "chopb.met"
#line 559 "chopb.met"
            }
#line 559 "chopb.met"
#line 559 "chopb.met"
            break;
#line 559 "chopb.met"
#line 562 "chopb.met"
        case FOREACH : 
#line 562 "chopb.met"
            tokenAhead = 0 ;
#line 562 "chopb.met"
            CommTerm();
#line 562 "chopb.met"
#line 563 "chopb.met"
#line 564 "chopb.met"
            {
#line 564 "chopb.met"
                PPTREE _ptRes0=0;
#line 564 "chopb.met"
                _ptRes0= MakeTree(FOREACH, 3);
#line 564 "chopb.met"
                statTree=_ptRes0;
#line 564 "chopb.met"
            }
#line 564 "chopb.met"
#line 565 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 565 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 565 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 565 "chopb.met"
            } else {
#line 565 "chopb.met"
                tokenAhead = 0 ;
#line 565 "chopb.met"
            }
#line 565 "chopb.met"
#line 566 "chopb.met"
            {
#line 566 "chopb.met"
                PPTREE _ptTree0=0;
#line 566 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 566 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 566 "chopb.met"
                }
#line 566 "chopb.met"
                ReplaceTree(statTree , 1 , _ptTree0);
#line 566 "chopb.met"
            }
#line 566 "chopb.met"
#line 567 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 567 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 567 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 567 "chopb.met"
            } else {
#line 567 "chopb.met"
                tokenAhead = 0 ;
#line 567 "chopb.met"
            }
#line 567 "chopb.met"
#line 568 "chopb.met"
            {
#line 568 "chopb.met"
                PPTREE _ptTree0=0;
#line 568 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 568 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 568 "chopb.met"
                }
#line 568 "chopb.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 568 "chopb.met"
            }
#line 568 "chopb.met"
#line 569 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 569 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 569 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 569 "chopb.met"
            } else {
#line 569 "chopb.met"
                tokenAhead = 0 ;
#line 569 "chopb.met"
            }
#line 569 "chopb.met"
#line 573 "chopb.met"
            if (! (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(statement), 146, chopb))){
#line 573 "chopb.met"
#line 575 "chopb.met"
                if ( (inter=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 575 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 575 "chopb.met"
                }
#line 575 "chopb.met"
            }
#line 575 "chopb.met"
#line 576 "chopb.met"
            ReplaceTree(statTree ,3 ,inter );
#line 576 "chopb.met"
#line 577 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 577 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 577 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 577 "chopb.met"
            } else {
#line 577 "chopb.met"
                tokenAhead = 0 ;
#line 577 "chopb.met"
            }
#line 577 "chopb.met"
#line 578 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 578 "chopb.met"
#line 578 "chopb.met"
            }
#line 578 "chopb.met"
#line 578 "chopb.met"
            break;
#line 578 "chopb.met"
#line 581 "chopb.met"
        case FORALLSONS : 
#line 581 "chopb.met"
            tokenAhead = 0 ;
#line 581 "chopb.met"
            CommTerm();
#line 581 "chopb.met"
#line 582 "chopb.met"
#line 583 "chopb.met"
            {
#line 583 "chopb.met"
                PPTREE _ptRes0=0;
#line 583 "chopb.met"
                _ptRes0= MakeTree(FORALLSONS, 2);
#line 583 "chopb.met"
                statTree=_ptRes0;
#line 583 "chopb.met"
            }
#line 583 "chopb.met"
#line 584 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 584 "chopb.met"
            if (  !SEE_TOKEN( POUV,"(") || !(CommTerm(),1)) {
#line 584 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,"(")
#line 584 "chopb.met"
            } else {
#line 584 "chopb.met"
                tokenAhead = 0 ;
#line 584 "chopb.met"
            }
#line 584 "chopb.met"
#line 585 "chopb.met"
            {
#line 585 "chopb.met"
                PPTREE _ptTree0=0;
#line 585 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 585 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 585 "chopb.met"
                }
#line 585 "chopb.met"
                ReplaceTree(statTree , 1 , _ptTree0);
#line 585 "chopb.met"
            }
#line 585 "chopb.met"
#line 586 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 586 "chopb.met"
            if (  !SEE_TOKEN( VIRG,",") || !(CommTerm(),1)) {
#line 586 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,",")
#line 586 "chopb.met"
            } else {
#line 586 "chopb.met"
                tokenAhead = 0 ;
#line 586 "chopb.met"
            }
#line 586 "chopb.met"
#line 587 "chopb.met"
            {
#line 587 "chopb.met"
                PPTREE _ptTree0=0;
#line 587 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(statement)(error_free), 146, chopb))== (PPTREE) -1 ) {
#line 587 "chopb.met"
                    MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                    PROG_EXIT(statement_exit,"statement")
#line 587 "chopb.met"
                }
#line 587 "chopb.met"
                ReplaceTree(statTree , 2 , _ptTree0);
#line 587 "chopb.met"
            }
#line 587 "chopb.met"
#line 588 "chopb.met"
            (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 588 "chopb.met"
            if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 588 "chopb.met"
                MulFreeTree(4,_addlist1,inter,list,statTree);
                TOKEN_EXIT(statement_exit,")")
#line 588 "chopb.met"
            } else {
#line 588 "chopb.met"
                tokenAhead = 0 ;
#line 588 "chopb.met"
            }
#line 588 "chopb.met"
#line 589 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 589 "chopb.met"
#line 589 "chopb.met"
            }
#line 589 "chopb.met"
#line 589 "chopb.met"
            break;
#line 589 "chopb.met"
#line 593 "chopb.met"
        default : 
#line 593 "chopb.met"
#line 593 "chopb.met"
            if (NPUSH_CALL_AFF_VERIF(statTree = ,_Tak(cplus::statement), 170, chopb)){
#line 593 "chopb.met"
#line 594 "chopb.met"
                {
#line 594 "chopb.met"
                    _retValue = statTree ;
#line 594 "chopb.met"
                    goto statement_ret;
#line 594 "chopb.met"
                    
#line 594 "chopb.met"
                }
#line 594 "chopb.met"
            } else {
#line 594 "chopb.met"
#line 596 "chopb.met"
#line 597 "chopb.met"
                if (NPUSH_CALL_VERIF(_Tak(ident_mul), 83, chopb)){
#line 597 "chopb.met"
#line 600 "chopb.met"
                    
#line 600 "chopb.met"
                    MulFreeTree(4,_addlist1,inter,list,statTree);
                    LEX_EXIT ("",0);
#line 600 "chopb.met"
                    goto statement_exit;
#line 600 "chopb.met"
#line 601 "chopb.met"
                } else {
#line 601 "chopb.met"
#line 603 "chopb.met"
#line 604 "chopb.met"
                    if ( (statTree=NQUICK_CALL(_Tak(expression)(error_free), 67, chopb))== (PPTREE) -1 ) {
#line 604 "chopb.met"
                        MulFreeTree(4,_addlist1,inter,list,statTree);
                        PROG_EXIT(statement_exit,"statement")
#line 604 "chopb.met"
                    }
#line 604 "chopb.met"
#line 605 "chopb.met"
                    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PVIR,";") && (tokenAhead = 0,CommTerm(),1)){
#line 605 "chopb.met"
#line 605 "chopb.met"
                    }
#line 605 "chopb.met"
#line 605 "chopb.met"
                }
#line 605 "chopb.met"
#line 605 "chopb.met"
            }
#line 605 "chopb.met"
            break;
#line 605 "chopb.met"
    }
#line 605 "chopb.met"
#line 610 "chopb.met"
    {
#line 610 "chopb.met"
        _retValue = statTree ;
#line 610 "chopb.met"
        goto statement_ret;
#line 610 "chopb.met"
        
#line 610 "chopb.met"
    }
#line 610 "chopb.met"
#line 610 "chopb.met"
#line 610 "chopb.met"

#line 611 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 611 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 611 "chopb.met"
return((PPTREE) 0);
#line 611 "chopb.met"

#line 611 "chopb.met"
statement_exit :
#line 611 "chopb.met"

#line 611 "chopb.met"
    _Debug = TRACE_RULE("statement",TRACE_EXIT,(PPTREE)0);
#line 611 "chopb.met"
    _funcLevel--;
#line 611 "chopb.met"
    return((PPTREE) -1) ;
#line 611 "chopb.met"

#line 611 "chopb.met"
statement_ret :
#line 611 "chopb.met"
    
#line 611 "chopb.met"
    _Debug = TRACE_RULE("statement",TRACE_RETURN,_retValue);
#line 611 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 611 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 611 "chopb.met"
    return _retValue ;
#line 611 "chopb.met"
}
#line 611 "chopb.met"

#line 611 "chopb.met"
#line 646 "chopb.met"
PPTREE chopb::take_follow ( int error_free)
#line 646 "chopb.met"
{
#line 646 "chopb.met"
    int  _oldinMakeTree = inMakeTree;
#line 646 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 646 "chopb.met"
    int _value,_nbPre = 0 ;
#line 646 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 646 "chopb.met"
    int _Debug = TRACE_RULE("take_follow",TRACE_ENTER,(PPTREE)0);
#line 646 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 646 "chopb.met"
#line 646 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 646 "chopb.met"
#line 646 "chopb.met"
    PPTREE statTree = (PPTREE) 0,list = (PPTREE) 0,name = (PPTREE) 0;
#line 646 "chopb.met"
#line 648 "chopb.met"
#line 649 "chopb.met"
    {
#line 649 "chopb.met"
        PPTREE _ptRes0=0;
#line 649 "chopb.met"
        _ptRes0= MakeTree(NODE_TREE, 1);
#line 649 "chopb.met"
        statTree=_ptRes0;
#line 649 "chopb.met"
    }
#line 649 "chopb.met"
#line 650 "chopb.met"
    if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(INFESUPE,"<>") && (tokenAhead = 0,CommTerm(),1)){
#line 650 "chopb.met"
#line 650 "chopb.met"
    } else {
#line 650 "chopb.met"
#line 652 "chopb.met"
#line 653 "chopb.met"
        (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 653 "chopb.met"
        if (  !SEE_TOKEN( INFE,"<") || !(CommTerm(),1)) {
#line 653 "chopb.met"
            MulFreeTree(4,_addlist1,list,name,statTree);
            TOKEN_EXIT(take_follow_exit,"<")
#line 653 "chopb.met"
        } else {
#line 653 "chopb.met"
            tokenAhead = 0 ;
#line 653 "chopb.met"
        }
#line 653 "chopb.met"
#line 654 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(name = ,_Tak(qualified_name), 123, chopb)){
#line 654 "chopb.met"
#line 655 "chopb.met"
            list =AddList(list ,name );
#line 655 "chopb.met"
#line 655 "chopb.met"
        } else {
#line 655 "chopb.met"
#line 657 "chopb.met"
            list =AddList(list , (PPTREE) 0);
#line 657 "chopb.met"
        }
#line 657 "chopb.met"
#line 658 "chopb.met"
        {
#line 658 "chopb.met"
            inMakeTree = 1 ;
#line 658 "chopb.met"
#line 660 "chopb.met"
#line 660 "chopb.met"
            _addlist1 = list ;
#line 660 "chopb.met"
#line 659 "chopb.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VIRG,",") && (tokenAhead = 0,CommTerm(),1)) { 
#line 659 "chopb.met"
#line 660 "chopb.met"
#line 660 "chopb.met"
                {
#line 660 "chopb.met"
                    PPTREE _ptTree0=0;
#line 660 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_super)(error_free), 175, chopb))== (PPTREE) -1 ) {
#line 660 "chopb.met"
                        MulFreeTree(5,_ptTree0,_addlist1,list,name,statTree);
                        PROG_EXIT(take_follow_exit,"take_follow")
#line 660 "chopb.met"
                    }
#line 660 "chopb.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 660 "chopb.met"
                }
#line 660 "chopb.met"
#line 660 "chopb.met"
                if (list){
#line 660 "chopb.met"
#line 660 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 660 "chopb.met"
                } else {
#line 660 "chopb.met"
#line 660 "chopb.met"
                    list = _addlist1 ;
#line 660 "chopb.met"
                }
#line 660 "chopb.met"
            } 
#line 660 "chopb.met"
            inMakeTree =  _oldinMakeTree;
#line 660 "chopb.met"
        }
#line 660 "chopb.met"
#line 661 "chopb.met"
        (tokenAhead == 17|| (LexSup(),TRACE_LEX(1)));
#line 661 "chopb.met"
        if ( ! TERM_OR_META(MAKETREE_SUP,"MAKETREE_SUP") || !(CommTerm(),1)) {
#line 661 "chopb.met"
            MulFreeTree(4,_addlist1,list,name,statTree);
            TOKEN_EXIT(take_follow_exit,"MAKETREE_SUP")
#line 661 "chopb.met"
        } else {
#line 661 "chopb.met"
            tokenAhead = 0 ;
#line 661 "chopb.met"
        }
#line 661 "chopb.met"
#line 661 "chopb.met"
    }
#line 661 "chopb.met"
#line 663 "chopb.met"
    ReplaceTree(statTree ,1 ,list );
#line 663 "chopb.met"
#line 663 "chopb.met"
#line 665 "chopb.met"
    {
#line 665 "chopb.met"
        _retValue = statTree ;
#line 665 "chopb.met"
        goto take_follow_ret;
#line 665 "chopb.met"
        
#line 665 "chopb.met"
    }
#line 665 "chopb.met"
#line 665 "chopb.met"
#line 665 "chopb.met"

#line 666 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 666 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 666 "chopb.met"
inMakeTree =  _oldinMakeTree;
#line 666 "chopb.met"
return((PPTREE) 0);
#line 666 "chopb.met"

#line 666 "chopb.met"
take_follow_exit :
#line 666 "chopb.met"

#line 666 "chopb.met"
    _Debug = TRACE_RULE("take_follow",TRACE_EXIT,(PPTREE)0);
#line 666 "chopb.met"
    _funcLevel--;
#line 666 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 666 "chopb.met"
    return((PPTREE) -1) ;
#line 666 "chopb.met"

#line 666 "chopb.met"
take_follow_ret :
#line 666 "chopb.met"
    
#line 666 "chopb.met"
    _Debug = TRACE_RULE("take_follow",TRACE_RETURN,_retValue);
#line 666 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 666 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 666 "chopb.met"
    inMakeTree =  _oldinMakeTree;
#line 666 "chopb.met"
    return _retValue ;
#line 666 "chopb.met"
}
#line 666 "chopb.met"

#line 666 "chopb.met"
#line 630 "chopb.met"
PPTREE chopb::take_follow_list ( int error_free)
#line 630 "chopb.met"
{
#line 630 "chopb.met"
    int  _oldor_not_ok = or_not_ok;
#line 630 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 630 "chopb.met"
    int _value,_nbPre = 0 ;
#line 630 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 630 "chopb.met"
    int _Debug = TRACE_RULE("take_follow_list",TRACE_ENTER,(PPTREE)0);
#line 630 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 630 "chopb.met"
#line 630 "chopb.met"
    PPTREE _addlist1 = (PPTREE) 0;
#line 630 "chopb.met"
#line 630 "chopb.met"
    PPTREE statTree = (PPTREE) 0,list = (PPTREE) 0,inter = (PPTREE) 0;
#line 630 "chopb.met"
#line 632 "chopb.met"
    {
#line 632 "chopb.met"
        or_not_ok = 1 ;
#line 632 "chopb.met"
#line 633 "chopb.met"
#line 634 "chopb.met"
        {
#line 634 "chopb.met"
            PPTREE _ptRes0=0;
#line 634 "chopb.met"
            _ptRes0= MakeTree(NODE_LIST, 1);
#line 634 "chopb.met"
            statTree=_ptRes0;
#line 634 "chopb.met"
        }
#line 634 "chopb.met"
#line 635 "chopb.met"
        if (NPUSH_CALL_AFF_VERIF(inter = ,_Tak(take_follow_super), 175, chopb)){
#line 635 "chopb.met"
#line 636 "chopb.met"
#line 637 "chopb.met"
            list =AddList(list ,inter );
#line 637 "chopb.met"
#line 637 "chopb.met"
            _addlist1 = list ;
#line 637 "chopb.met"
#line 638 "chopb.met"
            while ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(VBARVBAR,"||") && (tokenAhead = 0,CommTerm(),1)) { 
#line 638 "chopb.met"
#line 639 "chopb.met"
#line 639 "chopb.met"
                {
#line 639 "chopb.met"
                    PPTREE _ptTree0=0;
#line 639 "chopb.met"
                    if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_super)(error_free), 175, chopb))== (PPTREE) -1 ) {
#line 639 "chopb.met"
                        MulFreeTree(5,_ptTree0,_addlist1,inter,list,statTree);
                        PROG_EXIT(take_follow_list_exit,"take_follow_list")
#line 639 "chopb.met"
                    }
#line 639 "chopb.met"
                    _addlist1 =AddList(_addlist1 , _ptTree0);
#line 639 "chopb.met"
                }
#line 639 "chopb.met"
#line 639 "chopb.met"
                if (list){
#line 639 "chopb.met"
#line 639 "chopb.met"
                    _addlist1 = SonTree (_addlist1 ,2 );
#line 639 "chopb.met"
                } else {
#line 639 "chopb.met"
#line 639 "chopb.met"
                    list = _addlist1 ;
#line 639 "chopb.met"
                }
#line 639 "chopb.met"
            } 
#line 639 "chopb.met"
#line 639 "chopb.met"
#line 639 "chopb.met"
        }
#line 639 "chopb.met"
#line 641 "chopb.met"
        ReplaceTree(statTree ,1 ,list );
#line 641 "chopb.met"
#line 641 "chopb.met"
        or_not_ok =  _oldor_not_ok;
#line 641 "chopb.met"
    }
#line 641 "chopb.met"
#line 643 "chopb.met"
    {
#line 643 "chopb.met"
        _retValue = statTree ;
#line 643 "chopb.met"
        goto take_follow_list_ret;
#line 643 "chopb.met"
        
#line 643 "chopb.met"
    }
#line 643 "chopb.met"
#line 643 "chopb.met"
#line 643 "chopb.met"

#line 644 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 644 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 644 "chopb.met"
or_not_ok =  _oldor_not_ok;
#line 644 "chopb.met"
return((PPTREE) 0);
#line 644 "chopb.met"

#line 644 "chopb.met"
take_follow_list_exit :
#line 644 "chopb.met"

#line 644 "chopb.met"
    _Debug = TRACE_RULE("take_follow_list",TRACE_EXIT,(PPTREE)0);
#line 644 "chopb.met"
    _funcLevel--;
#line 644 "chopb.met"
    or_not_ok =  _oldor_not_ok;
#line 644 "chopb.met"
    return((PPTREE) -1) ;
#line 644 "chopb.met"

#line 644 "chopb.met"
take_follow_list_ret :
#line 644 "chopb.met"
    
#line 644 "chopb.met"
    _Debug = TRACE_RULE("take_follow_list",TRACE_RETURN,_retValue);
#line 644 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 644 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 644 "chopb.met"
    or_not_ok =  _oldor_not_ok;
#line 644 "chopb.met"
    return _retValue ;
#line 644 "chopb.met"
}
#line 644 "chopb.met"

#line 644 "chopb.met"
#line 613 "chopb.met"
PPTREE chopb::take_follow_super ( int error_free)
#line 613 "chopb.met"
{
#line 613 "chopb.met"
    PFILE_POSITION _filePosition = (PFILE_POSITION) 0;

#line 613 "chopb.met"
    int _value,_nbPre = 0 ;
#line 613 "chopb.met"
    PCOMM_ELEM _ptPreComm = ((tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1))),listComm?LookComm(&_nbPre):(_funcLevel++,(PCOMM_ELEM)0));
#line 613 "chopb.met"
    int _Debug = TRACE_RULE("take_follow_super",TRACE_ENTER,(PPTREE)0);
#line 613 "chopb.met"
    PPTREE lastTree = _lastTree,_retValue ;
#line 613 "chopb.met"
#line 613 "chopb.met"
    PPTREE identTree = (PPTREE) 0;
#line 613 "chopb.met"
#line 615 "chopb.met"
    (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 615 "chopb.met"
    switch( lexEl.Value) {
#line 615 "chopb.met"
#line 616 "chopb.met"
        case POINPOINPOIN : 
#line 616 "chopb.met"
            tokenAhead = 0 ;
#line 616 "chopb.met"
            CommTerm();
#line 616 "chopb.met"
#line 616 "chopb.met"
            {
#line 616 "chopb.met"
                PPTREE _ptTree0=0;
#line 616 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(take_follow_list)(error_free), 174, chopb))== (PPTREE) -1 ) {
#line 616 "chopb.met"
                    MulFreeTree(2,_ptTree0,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 616 "chopb.met"
                }
#line 616 "chopb.met"
                _retValue =_ptTree0;
#line 616 "chopb.met"
                goto take_follow_super_ret;
#line 616 "chopb.met"
            }
#line 616 "chopb.met"
            break;
#line 616 "chopb.met"
#line 619 "chopb.met"
        case POUV : 
#line 619 "chopb.met"
            tokenAhead = 0 ;
#line 619 "chopb.met"
            CommTerm();
#line 619 "chopb.met"
#line 618 "chopb.met"
            if ((tokenAhead == 1|| (Lex(),TRACE_LEX(1)))&&SEE_TOKEN(PFER,")") && (tokenAhead = 0,CommTerm(),1)){
#line 618 "chopb.met"
#line 619 "chopb.met"
                {
#line 619 "chopb.met"
                    PPTREE _ptTree0=0;
#line 619 "chopb.met"
                    {
#line 619 "chopb.met"
                        PPTREE _ptRes1=0;
#line 619 "chopb.met"
                        _ptRes1= MakeTree(NIL, 0);
#line 619 "chopb.met"
                        _ptTree0=_ptRes1;
#line 619 "chopb.met"
                    }
#line 619 "chopb.met"
                    _retValue =_ptTree0;
#line 619 "chopb.met"
                    goto take_follow_super_ret;
#line 619 "chopb.met"
                }
#line 619 "chopb.met"
            } else {
#line 619 "chopb.met"
#line 621 "chopb.met"
#line 622 "chopb.met"
                if ( (identTree=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 622 "chopb.met"
                    MulFreeTree(1,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 622 "chopb.met"
                }
#line 622 "chopb.met"
#line 623 "chopb.met"
                (tokenAhead == 1|| (Lex(),TRACE_LEX(1)));
#line 623 "chopb.met"
                if (  !SEE_TOKEN( PFER,")") || !(CommTerm(),1)) {
#line 623 "chopb.met"
                    MulFreeTree(1,identTree);
                    TOKEN_EXIT(take_follow_super_exit,")")
#line 623 "chopb.met"
                } else {
#line 623 "chopb.met"
                    tokenAhead = 0 ;
#line 623 "chopb.met"
                }
#line 623 "chopb.met"
#line 624 "chopb.met"
                {
#line 624 "chopb.met"
                    _retValue = identTree ;
#line 624 "chopb.met"
                    goto take_follow_super_ret;
#line 624 "chopb.met"
                    
#line 624 "chopb.met"
                }
#line 624 "chopb.met"
#line 624 "chopb.met"
            }
#line 624 "chopb.met"
            break;
#line 624 "chopb.met"
#line 626 "chopb.met"
        default : 
#line 626 "chopb.met"
#line 626 "chopb.met"
            {
#line 626 "chopb.met"
                PPTREE _ptTree0=0;
#line 626 "chopb.met"
                if ( (_ptTree0=NQUICK_CALL(_Tak(assignment_expression)(error_free), 21, chopb))== (PPTREE) -1 ) {
#line 626 "chopb.met"
                    MulFreeTree(2,_ptTree0,identTree);
                    PROG_EXIT(take_follow_super_exit,"take_follow_super")
#line 626 "chopb.met"
                }
#line 626 "chopb.met"
                _retValue =_ptTree0;
#line 626 "chopb.met"
                goto take_follow_super_ret;
#line 626 "chopb.met"
            }
#line 626 "chopb.met"
            break;
#line 626 "chopb.met"
    }
#line 626 "chopb.met"
#line 626 "chopb.met"
#line 627 "chopb.met"
(tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 627 "chopb.met"
if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,(PPTREE) 0,lastTree); else {_lastTree=(PPTREE)0;_funcLevel--;}
#line 627 "chopb.met"
return((PPTREE) 0);
#line 627 "chopb.met"

#line 627 "chopb.met"
take_follow_super_exit :
#line 627 "chopb.met"

#line 627 "chopb.met"
    _Debug = TRACE_RULE("take_follow_super",TRACE_EXIT,(PPTREE)0);
#line 627 "chopb.met"
    _funcLevel--;
#line 627 "chopb.met"
    return((PPTREE) -1) ;
#line 627 "chopb.met"

#line 627 "chopb.met"
take_follow_super_ret :
#line 627 "chopb.met"
    
#line 627 "chopb.met"
    _Debug = TRACE_RULE("take_follow_super",TRACE_RETURN,_retValue);
#line 627 "chopb.met"
    (tokenAhead|| (LexComment(),tokenAhead=-1,TRACE_LEX(1)));
#line 627 "chopb.met"
    if (_nbPre || listComm) AddComm(_ptPreComm,_nbPre,_retValue,lastTree); else {_lastTree=_retValue;_funcLevel--;}
#line 627 "chopb.met"
    return _retValue ;
#line 627 "chopb.met"
}
#line 627 "chopb.met"

#line 627 "chopb.met"
